# Write your MySQL query statement below
select t1.product_name,sum(t2.unit) as unit from Products as t1 join Orders as t2 on t1.product_id=t2.product_id where substr(order_date,1,7)="2020-02" group by product_name having sum(t2.unit)>=100 ;
