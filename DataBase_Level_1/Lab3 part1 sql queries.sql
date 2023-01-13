/*

13.	Insert your personal data to the employee table as a new employee in department number 30, SSN = 102672, Superssn = 112233, salary=3000.
14.	Insert another employee with personal data your friend as new employee in department number 30, SSN = 102660, but don’t enter any value for salary or supervisor number to him.
15.	Upgrade your salary by 20 % of its last value.

*/

--Display the Department id, name and id and the name of its manager.
--1
select Dnum [Did], Dname, MGRSSN[MGRid], Fname +' '+ Lname [MGRname]
from Employee E, Departments D
where  D.MGRSSN= E.SSN

--Display the name of the departments and the name of the projects under its control.
--2
select Dname, Pname
from Project P inner join Departments D
on D.Dnum = P.Dnum

--Display the full data about all the dependence associated with the name of the employee they depend on him/her.

--3
select Fname +' '+ Lname [DepEmpName], D.*
from Employee E inner join Dependent D
on E.SSN = D.ESSN

--4.	Display the Id, name and location of the projects in Cairo or Alex city.
--4
select Pnumber [Pid], Pname, Plocation
from Project
where City = 'Alex' or City = 'Cairo'

--Display the Projects full data of the projects with a name starts with "a" letter.
--5
select *
from Project
where Pname like 'a%'

--display all the employees in department 30 whose salary from 1000 to 2000 LE monthly
--6
select Fname +' '+ Lname [EmpName]
from Employee
where Dno = 30 and Salary between 1000 and 2000

/*Retrieve the names of all employees in department 10 who works more than
or equal 10 hours per week on "AL Rabwah" project.*/

select Fname +' '+ Lname [EmpName]
from Employee E inner join Works_for W
on E.SSN = W.ESSn
inner join Project P
on W.Pno = P.Pnumber
where Dno = 10 and W.Hours >= 10 and P.Pname = 'AL Rabwah'
/*
8	Find the names of the employees who directly supervised with Kamel Mohamed.
*/
--8
select E1.Fname +' '+ E1.Lname [EmpName], E2.Fname +' '+ E2.Lname [SuperName]
from Employee E1, Employee E2
where E1.Superssn = E2.SSN and E2.Fname='Mona'and E2.Lname='Abdelmonem'

/*
Retrieve the names of all employees and the names of the projects
they are working on, sorted by the project name.

*/
--9
select E.Fname +' '+ E.Lname [EmpName], Pname
from Employee E inner join Works_for W
on E.SSN = W.ESSn
inner join Project P
on P.Pnumber = W.Pno
order by Pname

/*
10.	For each project located in Cairo City , find the project number, 
the controlling department name ,the department manager last name ,address and birthdate.
*/

--10
select P.Pnumber, D.Dname, Lname [DepMGR], Address, Bdate
from Departments D inner join Project P
on D.Dnum = P.Dnum and P.City = 'Cairo'
inner join Employee E
on E.SSN = D.MGRSSN

--11.	Display All Data of the managers
--11
select E.*
from Employee E inner join Departments D
on D.MGRSSN = E.SSN

--12.	Display All Employees data and the data of their dependents even if they have no dependents

--12
select E.*, D.Dependent_name, D.Sex, D.Bdate
from Employee E left outer join Dependent D
on E.SSN = D.ESSN

--13
insert into Employee values
('Dina','Omran',102672,'20000305 00:00:00 AM','Ismailia','F',3000,112233,30)

--14
insert into Employee values
('Abdullah','Osama',102660,'19980228 00:00:00 AM','Sohag','M',NULL,NULL,30)

--15
update Employee
set Salary += Salary*0.2
where Fname = 'Mona'
