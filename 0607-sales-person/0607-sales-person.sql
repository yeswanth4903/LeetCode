-- with t1 as (
--     select s.name,o.com_id,o.sales_id from orders o right join salesperson s on o.sales_id = s.sales_id 
-- )
-- select t1.name from t1 join company c on t1.com_id = c.com_id where c.name!='RED';

SELECT s.name
FROM SalesPerson s
WHERE s.sales_id NOT IN (
    SELECT o.sales_id
    FROM Orders o
    JOIN Company c
      ON o.com_id = c.com_id
    WHERE c.name = 'RED'
);
