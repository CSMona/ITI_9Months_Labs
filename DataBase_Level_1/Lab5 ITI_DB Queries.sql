-------------------------------------- ITI_DB ----------------------------------------
--1
select count(St_Id)
from Student
where St_Age is not NULL

--2
select distinct Ins_Name
from Instructor

--3
select St_Id [Student ID], isnull(concat(St_Fname,' ',St_Lname),'NO NAME') [Student Full Name]
, isnull(D.Dept_Name,'NO DEPT') [Department Name]
from Student S inner join Department D
	on S.Dept_Id = D.Dept_Id

--4
select I.Ins_Name, D.Dept_Name
from Department D right outer join Instructor I
	on I.Dept_Id = D.Dept_Id

--5
select concat(S.St_Fname,' ',S.St_Lname) [Student Full Name], C.Crs_Name
from Student S inner join Stud_Course SC
	on S.St_Id = SC.St_Id
inner join Course C
	on SC.Crs_Id = C.Crs_Id
where SC.Grade is not NULL

--6
select Top_Name, count(C.Crs_Id) [Number of Courses]
from Topic T inner join Course C
	on T.Top_Id = C.Top_Id
group by Top_Name

--7
select MAX(Salary), MIN(Salary)
from Instructor

--8
select Ins_Name
from Instructor
where Salary < (select AVG(Salary) from Instructor)

--9
select D.Dept_Name, MIN(Salary) [MinSalary]
from Instructor I inner join Department D
	on I.Dept_Id = D.Dept_Id
where I.Salary = (select MIN(Salary) from Instructor)
group by D.Dept_Name

--10
select top(2) Salary
from Instructor
order by Salary Desc

--11
select Ins_Name, coalesce(convert(varchar(50),Salary), 'Ins_Bonus') [Salary]
from Instructor

--12
select AVG(Salary)
from Instructor

--13
select S2.St_Fname [Student], S1.St_Fname [SupervisorName]
from Student S1 inner join Student S2
	on S1.St_Id = S2.St_super

--14
select *
from ( select *, ROW_NUMBER() over(partition by Dept_Id order by Salary desc) as RN
	   from Instructor I) as NewTable
where RN <= 2 and Salary is not NULL

--15
select St_Fname, Dept_Name
from ( select *, ROW_NUMBER() over(partition by Dept_id order by newid()) as RN
	   from Student) as NewTable
	   , Department
where RN = 1 and St_Fname is not NULL
