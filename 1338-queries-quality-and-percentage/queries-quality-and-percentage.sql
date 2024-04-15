# Write your MySQL query statement below
Select query_name,ROUND((Sum(rating/position))/Count(query_name),2) as quality,Round(COUNT(CASE WHEN rating<3 THEN 1 END)*100/count(query_name),2) as poor_query_percentage  from Queries group by query_name having query_name!="null";