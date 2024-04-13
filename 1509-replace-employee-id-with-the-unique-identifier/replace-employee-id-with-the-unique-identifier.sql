# Write your MySQL query statement below
SELECT eu.unique_id,e.name From Employees as e LEFT JOIN EmployeeUNI as eu on e.id=eu.id;