with rankedemployees as
(
    select e.name as ename,
    e.salary as esal,
    e.departmentid as eid,
    d.name as dname,
    dense_rank() over(partition by d.id order by salary desc) as rankk
    from employee e join department d ON e.departmentId = d.id
)
select dname as department,ename as employee, esal as salary from rankedemployees where rankk<=3;