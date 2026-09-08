-- Problem: Recyclable and Low Fat Products (#1908)
-- URL: https://leetcode.com/problems/recyclable-and-low-fat-products/
-- Language: MySQL
-- Submitted: 2026-09-08T06:01:58 (Submission ID: 2134715597)

# Write your MySQL query statement below
-- CREATE TABLE Products(
--     product_id INTEGER,
--     low_fats ENUM('Y','N'),
--     recyclable ENUM('Y','N')
--     PRIMARY KEY(product_id)
-- );
SELECT product_id
FROM products
WHERE low_fats="Y" AND recyclable="Y";
