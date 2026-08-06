-- Creating the LAB_5_PRODUCT table

/*
CREATE TABLE LAB_5_LAB_5_PRODUCT (
    ID INT PRIMARY KEY,
    name_ VARCHAR(100),
    desc_ VARCHAR(100),
    status_ VARCHAR(20),
    created_date DATE,
    created_by VARCHAR(50),
    last_modified_date DATE,
    last_modified_by VARCHAR(50),
    cost__ DECIMAL(10, 2),
    injected_date DATE
);

-- Creating the LAB_5_JOB table
CREATE TABLE LAB_5_LAB_5_JOB (
    ID INT PRIMARY KEY,
    name_ VARCHAR(100),
    TITLE_ VARCHAR(100),
    SALARY DECIMAL(12, 2),
    BONUS DECIMAL(12, 2),
    injected_date DATE
);

-- Adding sample values
INSERT INTO LAB_5_LAB_5_PRODUCT VALUES 
(1, 'Laptop', 'High-end gaming laptop', 'Active', DATE'2025-05-15', 'Indiana D', DATE'2025-06-10', 'Michigan R', 1500.00, DATE'2025-01-01'),
(2, 'Mouse', 'Wireless optical mouse', 'Active', DATE'2026-02-01', 'Ohio D', DATE'2026-02-05', 'Illinois M', 25.00, DATE'2026-01-01'),
(3, 'Monitor', '4K Ultra HD', 'Inactive', DATE'2025-05-20', 'Indiana D', DATE'2025-05-25', 'Michigan R', 400.00, DATE'2025-01-01');

INSERT INTO LAB_5_LAB_5_JOB VALUES 
(1, 'John Doe', 'Software Engineer', 120000, 15000, DATE'2025-01-01'),
(2, 'Jane Smith', 'Data Analyst', 85000, NULL, DATE'2025-01-01'),
(3, 'Bob Wilson', 'Intern', 45000, 2000, DATE'2025-01-01');

*/

---------------------------------------------------------------------------------------

SELECT created_by, MAX(cost_), MIN(cost_) FROM LAB_5_PRODUCT GROUP BY created_by;

SELECT last_modified_by, SUM(cost_), AVG(cost_) FROM LAB_5_PRODUCT GROUP BY last_modified_by;

SELECT COUNT(*) FROM LAB_5_PRODUCT WHERE created_by IN ('Indiana D', 'Ohio D');

SELECT COUNT(*) FROM LAB_5_PRODUCT WHERE last_modified_by IN ('Michigan R', 'Illinois M');

SELECT SUM(SALARY) FROM LAB_5_JOB;

SELECT AVG(SALARY) FROM LAB_5_JOB WHERE BONUS IS NOT NULL;

SELECT AVG(cost_), MAX(cost_), MIN(cost_) FROM LAB_5_PRODUCT;

SELECT COUNT(*) FROM LAB_5_JOB WHERE BONUS IS NULL;

SELECT ID, EXTRACT(YEAR FROM created_date) AS c_year, EXTRACT(MONTH FROM created_date) AS c_month, EXTRACT(YEAR FROM last_modified_date) AS m_year, EXTRACT(MONTH FROM last_modified_date) AS m_month FROM LAB_5_PRODUCT;

SELECT name_, TITLE_, DECODE(SIGN(SALARY - 100000), 1, 'High', DECODE(SIGN(SALARY - 50000), -1, 'Low', 'Medium')) AS salary_grade FROM LAB_5_JOB;

SELECT * FROM LAB_5_PRODUCT WHERE RTRIM(TO_CHAR(created_date, 'Month'))= 'May';

SELECT * FROM LAB_5_PRODUCT WHERE TO_CHAR(created_date, 'YYYY') = TO_CHAR(SYSDATE, 'YYYY');

SELECT POWER(2, 10) AS result FROM DUAL;

SELECT name_, SALARY, CEIL(SALARY) AS ceil_val, FLOOR(SALARY) AS floor_val FROM LAB_5_JOB;

SELECT AVG(BONUS) AS avg_bonus FROM LAB_5_JOB;

SELECT COUNT(DISTINCT TITLE_) FROM LAB_5_JOB;

SELECT name_, desc_, TO_CHAR(created_date, 'DD Month YYYY') AS formatted_date 
FROM LAB_5_PRODUCT;

SELECT name_, desc_ 
FROM LAB_5_PRODUCT 
ORDER BY LENGTH(desc_) ASC;

SELECT UPPER(name_) ,LOWER(name_),UPPER(desc_), LOWER(desc_) FROM LAB_5_PRODUCT;

SELECT name_ || ' - ' || desc_ || ' (Created: ' || TO_CHAR(created_date, 'DD-MON-YYYY') || ', Updated: ' || TO_CHAR(last_modified_date, 'DD-MON-YYYY') || ')' AS LAB_5_PRODUCT_summary
FROM LAB_5_PRODUCT
WHERE status_ = 'Active';

