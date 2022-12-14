
(
SELECT CONCAT(NAME, '(', SUBSTRING(OCCUPATION,1,1), ')' ) AS NAME1, '' AS PROFESSION
FROM OCCUPATIONS
)
UNION ALL
(
SELECT CONCAT('There are a total of', ' ',COUNT(OCCUPATION),' ', lower(OCCUPATION), 's.') AS NAME1, '' AS PROFESSION
FROM OCCUPATIONS
GROUP BY OCCUPATION
)
ORDER BY PROFESSION ASC, NAME1 ASC
