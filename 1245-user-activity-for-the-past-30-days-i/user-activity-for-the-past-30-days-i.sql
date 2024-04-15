# Write your MySQL query statement below
select activity_date as day,count(distinct user_id) as active_users from Activity where DATEDIFF('2019/07/27',activity_date) Between 0 And 29 group by activity_date order by activity_date;
#SELECT DATEDIFF(year,'2019/07/27',activity_date) AS DateDiff from Activity;
