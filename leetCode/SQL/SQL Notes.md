___
### Joins:

#### Inner Join 
- An inner join returns only the rows with matching values in both tables

```sql
	SELECT * 
	FROM Table1
	INNER JOIN Table2
	ON Table1.ID = Table2.ID
```
#### Left outer join
- Returns all rows from the left table and only matched rows from the right table
```sql
	SELECT * 
	FROM Table1
	LEFT OUTER JOIN Table2
	ON Table1.ID = Table2.ID 
```
#### Right outer join
- Returns all rows from the right table and only matched rows from the left table

```sql
	SELECT * 
	FROM Table1
	RIGHT OUTER JOIN Table2
	ON Table1.ID = Table2.ID 
```

#### Full Outer Join
- Returns all records from both tables regardless of whether a match exists.

```sql
	SELECT * 
	FROM Table1
	FULL OUTER JOIN Table2
	ON Table1.ID = Table2.ID 
```

#### Quick Summary 
- Inner  - Matching in both tables
- Left outer  - Matching from right table, All from Left
- Right outer - Matching from left table, All from right
- Full Outer - All from both tables

