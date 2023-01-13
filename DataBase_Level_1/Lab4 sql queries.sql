--1
/*
1.	Display (Using Union Function)
a.	 The name and the gender of the dependence that's gender is Female and depending on Female Employee.
b.	 And the male dependence that depends on Male Employee.

*/

select D.Dependent_name, D.Sex
from Employee E inner join Dependent D
	on E.SSN = D.ESSN
where D.Sex = 'F' and E.Sex = 'F'
union
select D.Dependent_name, D.Sex
from Employee E inner join Dependent D
	on E.SSN = D.ESSN
where D.Sex = 'M' and E.Sex = 'M'


--2
select P.Pname, sum(W.Hours) [Total Hours]
from Project P inner join Works_for W
	on P.Pnumber = W.Pno
group by P.Pname

--3
select D.*
from Departments D inner join Employee E
	on D.Dnum = E.Dno
where E.SSN = (select Min(SSN) from Employee)

--4
select D.Dname, Max(E.Salary) [Max Salary], Min(E.Salary) [Min Salary], AVG(E.Salary) [Avg Salary]
from Departments D inner join Employee E
	on D.Dnum = E.Dno
group by D.Dname

--5
select E.Fname + ' ' + E.Lname [full name]
from Employee E inner join Departments D
on	E.SSN = D.MGRSSN
where E.SSN not in (select ESSN from Dependent)

--6
select D.Dname, Dnum, count(D.MGRSSN) [Number of Employees]
from Employee E inner join Departments D
	on E.Dno = D.Dnum
group by D.Dnum, D.Dname
having AVG(E.Salary) < (select AVG(Salary) from Employee)

--7
select E.Fname, E.Lname, Pname
from Employee E inner join Works_for W
	on E.SSN = W.ESSn
inner join Project P
	on Pnumber = W.Pno
order by P.Dnum , E.Lname, E.Fname

--8
select top(2) Salary
from Employee
order by Salary desc
--OR
select 
(select MAX(Salary) from Employee),(select MAX(Salary) from Employee where Salary not in (select Max(Salary) from Employee))

--9
select concat(E.Fname,' ',E.Lname) [full name]
from Employee E inner join Dependent D
	on D.ESSN = E.SSN
where D.Dependent_name = concat(E.Fname,' ',E.Lname)

--10
select SSN [EmpNum], concat(Fname,' ',Lname) [full name]
from Employee
where exists (select ESSN from Dependent)

--11
insert into Departments values
('DEPT IT',100,112233,'2006-11-1')

--12
update Departments
set MGRSSN = 968574
where Dnum = 10

update Departments
set MGRSSN = 102672
where Dnum = 20

update Employee
set Superssn = 102672
where SSN = 102660 

--13
update Employee
set Superssn = 102672
where Superssn = 223344

update Dependent
set ESSN = 102672
where ESSN = 223344

update Departments
set MGRSSN = 102672
where MGRSSN = 223344

update Works_for
set ESSn = 102672
where ESSn = 223344

delete from Employee
where SSN = 223344 and Fname = 'Kamel' and Lname = 'Mohamed'

--14
update Employee
set Salary += Salary * 0.3
where SSN in
(select ESSn from Project P inner join Works_for W on W.Pno = P.Pnumber where Pname = 'Al Rabwah')

