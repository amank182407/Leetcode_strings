# Write your MySQL query statement below
# Write your MySQL query statement below
SELECT customer_id,count(*) as count_no_trans From Visits as e LEFT JOIN Transactions as eu on e.Visit_id=eu.visit_id where transaction_id is null group by customer_id ;