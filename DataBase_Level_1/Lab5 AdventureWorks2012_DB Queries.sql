------------------------------ AdventureWorks2012_DB ---------------------------------
--1
select S1.SalesOrderID, S1.ShipDate
from Sales.SalesOrderHeader S1 inner join Sales.SalesOrderDetail S2
	on S1.SalesOrderID = S2. SalesOrderID
where S1.ShipDate between '7/28/2002' and '7/29/2014'

--2
select ProductID, Name
from Production.Product
where StandardCost < 110

--3
select ProductID, Name
from Production.Product
where Weight is NULL

--4
select ProductID, Name
from Production.Product
where Color = 'Silver' or Color = 'Black' or Color = 'Red'

--5
select ProductID, Name
from Production.Product
where Name like 'B%'

--6
UPDATE Production.ProductDescription
SET Description = 'Chromoly steel_High of defects'
WHERE ProductDescriptionID = 3

select Description
from Production.ProductDescription
WHERE Description like '%[_]%'

--7
select SUM(TotalDue) [Sum of TotalDue], OrderDate
from Sales.SalesOrderHeader
where OrderDate between '7/1/2001' and '7/31/2014'
group by OrderDate

--8
select distinct HireDate
from HumanResources.Employee

--9
select AVG(distinct ListPrice)
from Production.Product

--10
select concat('The ',Name,' is ','only! ',ListPrice)
from Production.Product
where ListPrice between 100 and 120
order by ListPrice

--11
select rowguid, Name, SalesPersonID, Demographics into store_Archive
from Sales.Store

select rowguid, Name, SalesPersonID, Demographics into store_Archive2
from Sales.Store
where 1=2

--12
select convert(date,getdate())
union
select convert(datetime,getdate())

select convert(varchar(50),getdate())
select format(getdate(),'dd/MM/yyyy')