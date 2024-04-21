# Write your MySQL query statement below
SELECT DATE_FORMAT(trans_date, '%Y-%m') as month,country,count(trans_date) as trans_count,count(case when state="approved" then 1 else null end) as approved_count,sum(amount) as trans_total_amount,SUM(CASE WHEN state="approved" THEN amount ELSE 0 END) AS approved_total_amount  from Transactions group by month,country;
