# Project: Disaster and Emergency Aid Management 
## Current project state
Ready

## Use case

When disaster hits a nation, the most urgent task is to be able to provide the people affected with what they need as quickly and as efficiently possible.
Your job for this project is to prepare an application that manages the list of items needed to be shipped to the area. The application should be able to keep track of the quantity of each item needed, the number of items on hand, shipping the items and storing the data in a file for future use. 

The types of items needed to be shipped in this situation are divided into two main categories; 

- Non-Perishable products, such as blankets and tents, that have no expiry date. We refer to these types of products as Items.
- Perishable products, such as food and medicine, that have an expiry date. We refer to these products as Perishables. 

To accomplish this task we need to create several classes to encapsulate the problem and provide a solution for this application. 

## Compilation

```bash
g++ -Wall -std=c++11 -g -o ws file1.cpp file2.cpp ...
```

- `-Wall`: the compiler will report all warnings
- `-std=c++11`: the code will be compiled using the C++11 standard
- `-g`: the executable file will contain debugging symbols, allowing *valgrind* to create better reports
- `-o ws`: the compiled application will be named `ws`

## How it works

```text
Aid Management System
Date: 2023/12/09
Data file: No file
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 1

****New/Open Aid Database****
Enter file name: data.dat
6 records loaded!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 1

****List Items****
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   1 | 12113 | Hydrogen peroxide 100ml bottles     |  275 |  300 |    3.99 |*2024/11/11
   2 | 45678 | Sleeping Bags                       |  100 |  200 |   65.66 |
   3 | 56789 | Tents and Blankets and pillows Tent | 2000 | 2000 |   65.66 |
   4 | 44444 | Flash lights                        |  400 |  400 |   65.66 |
   5 | 12345 | Baby Formula                        |  145 |  200 |   33.99 | 2024/12/12
   6 | 11223 | Enfamil A+                          |   38 |   38 |   38.99 |*2024/12/11
-----+-------+-------------------------------------+------+------+---------+-----------
Enter row number to display details or <ENTER> to continue:
>

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 1

****List Items****
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   1 | 12113 | Hydrogen peroxide 100ml bottles     |  275 |  300 |    3.99 |*2024/11/11
   2 | 45678 | Sleeping Bags                       |  100 |  200 |   65.66 |
   3 | 56789 | Tents and Blankets and pillows Tent | 2000 | 2000 |   65.66 |
   4 | 44444 | Flash lights                        |  400 |  400 |   65.66 |
   5 | 12345 | Baby Formula                        |  145 |  200 |   33.99 | 2024/12/12
   6 | 11223 | Enfamil A+                          |   38 |   38 |   38.99 |*2024/12/11
-----+-------+-------------------------------------+------+------+---------+-----------
Enter row number to display details or <ENTER> to continue:
> 5
Perishable AMA Item:
12345: Baby Formula
Quantity Needed: 200
Quantity Available: 145
Unit Price: $33.99
Needed Purchase Fund: $1869.45
Expiry date: 2024/12/12


Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 0
Exiting Program!
File: data.dat
12113   Hydrogen peroxide 100ml bottles 275     300     3.99    Keep away from direct sunlight  241111
45678   Sleeping Bags   100     200     65.66
56789   Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows    2000   2000     65.66
44444   Flash lights    400     400     65.66
12345   Baby Formula    145     200     33.99           241212
11223   Enfamil A+      38      38      38.99   Keep in a dry and cool place    241211

```

```text
Aid Management System
Date: 2023/12/09
Data file: No file
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 2

****New/Open Aid Database****
Enter file name: data.dat
6 records loaded!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 2

****Add Item****
1- Perishable
2- Non-Perishable
-----------------
0- Exit
> 1
SKU: 22222
AMA Item:
SKU: 22222
Description: Rice
Quantity Needed: 200
Quantity On Hand: 100
Unit Price: $16.99
Expiry date (YYMMDD): 241010
Handling Instructions, ENTER to skip:

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 2

****Add Item****
1- Perishable
2- Non-Perishable
-----------------
0- Exit
> 2
SKU: 44444
Sku: 44444 is already in the system, try updating quantity instead.

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 0
Exiting Program!
File: data.dat
12113   Hydrogen peroxide 100ml bottles 275     300     3.99    Keep away from direct sunlight  241111
45678   Sleeping Bags   100     200     65.66
56789   Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows    2000   2000     65.66
44444   Flash lights    400     400     65.66
12345   Baby Formula    145     200     33.99           241212
11223   Enfamil A+      38      38      38.99   Keep in a dry and cool place    241111
22222   Rice    100     200     16.99           241010

```

```text
Aid Management System
Date: 2023/12/09
Data file: No file
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 3

****New/Open Aid Database****
Enter file name: data.dat
7 records loaded!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 3

****Remove Item****
Item description: en
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   1 | 12113 | Hydrogen peroxide 100ml bottles     |  275 |  300 |    3.99 |*2024/11/11
   3 | 56789 | Tents and Blankets and pillows Tent | 2000 | 2000 |   65.66 |
-----+-------+-------------------------------------+------+------+---------+-----------
Enter SKU: 12113
Following item will be removed:
Perishable AMA Item:
12113: Hydrogen peroxide 100ml bottles
Quantity Needed: 300
Quantity Available: 275
Unit Price: $3.99
Needed Purchase Fund: $99.75
Expiry date: 2024/11/11
Handling Instructions: Keep away from direct sunlight

Are you sure?
1- Yes!
0- Exit
> 1
Item removed!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 1

****List Items****
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   1 | 45678 | Sleeping Bags                       |  100 |  200 |   65.66 |
   2 | 56789 | Tents and Blankets and pillows Tent | 2000 | 2000 |   65.66 |
   3 | 44444 | Flash lights                        |  400 |  400 |   65.66 |
   4 | 12345 | Baby Formula                        |  145 |  200 |   33.99 | 2024/12/12
   5 | 11223 | Enfamil A+                          |   38 |   38 |   38.99 |*2024/11/11
   6 | 22222 | Rice                                |  120 |  300 |   16.99 | 2025/10/10
-----+-------+-------------------------------------+------+------+---------+-----------
Enter row number to display details or <ENTER> to continue:
>

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 0
Exiting Program!
File: data.dat
45678   Sleeping Bags   100     200     65.66
56789   Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows    2000   2000     65.66
44444   Flash lights    400     400     65.66
12345   Baby Formula    145     200     33.99           241212
11223   Enfamil A+      38      38      38.99   Keep in a dry and cool place    241111
22222   Rice    120     300     16.99           251010
```

```text
Aid Management System
Date: 2023/12/09
Data file: No file
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 4

****New/Open Aid Database****
Enter file name: data.dat
7 records loaded!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 4

****Update Quantity****
Item description: En
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   6 | 11223 | Enfamil A+                          |   38 |   38 |   38.99 |*2025/11/11
-----+-------+-------------------------------------+------+------+---------+-----------
Enter SKU: 11223
1- Add
2- Reduce
0- Exit
> 0
Aborted!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 4

****Update Quantity****
Item description: En
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   6 | 11223 | Enfamil A+                          |   38 |   38 |   38.99 |*2025/11/11
-----+-------+-------------------------------------+------+------+---------+-----------
Enter SKU: 11223
1- Add
2- Reduce
0- Exit
> 1
Quantity Needed already fulfilled!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 4

****Update Quantity****
Item description: En
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   6 | 11223 | Enfamil A+                          |   38 |   38 |   38.99 |*2025/11/11
-----+-------+-------------------------------------+------+------+---------+-----------
Enter SKU: 11223
1- Add
2- Reduce
0- Exit
> 2
Quantity to reduce: 40
Value out of range [1<=val<=38]: 38
38 items removed!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 4

****Update Quantity****
Item description: En
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   6 | 11223 | Enfamil A+                          |    0 |   38 |   38.99 |*2025/11/11
-----+-------+-------------------------------------+------+------+---------+-----------
Enter SKU: 11223
1- Add
2- Reduce
0- Exit
> 1
Quantity to add: 40
Value out of range [1<=val<=38]: 4
4 items added!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 1

****List Items****
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   1 | 12113 | Hydrogen peroxide 100ml bottles     |  275 |  300 |    3.99 |*2024/11/11
   2 | 45678 | Sleeping Bags                       |  100 |  200 |   65.66 |
   3 | 56789 | Tents and Blankets and pillows Tent | 2000 | 2000 |   65.66 |
   4 | 44444 | Flash lights                        |  400 |  400 |   65.66 |
   5 | 12345 | Baby Formula                        |  145 |  200 |   33.99 | 2025/12/12
   6 | 11223 | Enfamil A+                          |    4 |   38 |   38.99 |*2025/11/11
   7 | 22222 | Rice                                |  120 |  300 |   16.99 | 2025/10/10
-----+-------+-------------------------------------+------+------+---------+-----------
Enter row number to display details or <ENTER> to continue:
>

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 0
Exiting Program!
File: data.dat
12113   Hydrogen peroxide 100ml bottles 275     300     3.99    Keep away from direct sunlight  241111
45678   Sleeping Bags   100     200     65.66
56789   Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows    2000   2000     65.66
44444   Flash lights    400     400     65.66
12345   Baby Formula    145     200     33.99           251212
11223   Enfamil A+      4       38      38.99   Keep in a dry and cool place    251111
22222   Rice    120     300     16.99           251010

```

```text
Aid Management System
Date: 2023/12/09
Data file: No file
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 1

****New/Open Aid Database****
Enter file name: data.dat
6 records loaded!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 1

****List Items****
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   1 | 12113 | Hydrogen peroxide 100ml bottles     |  275 |  300 |    3.99 |*2024/11/11
   2 | 45678 | Sleeping Bags                       |  100 |  200 |   65.66 |
   3 | 56789 | Tents and Blankets and pillows Tent | 2000 | 2000 |   65.66 |
   4 | 44444 | Flash lights                        |  399 |  400 |   65.66 |
   5 | 12345 | Baby Formula                        |  145 |  200 |   33.99 | 2025/12/12
   6 | 11223 | Enfamil A+                          |   30 |   38 |   38.99 |*2025/11/11
-----+-------+-------------------------------------+------+------+---------+-----------
Enter row number to display details or <ENTER> to continue:
>

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 5

****Sort****
Sort completed!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 1

****List Items****
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   1 | 45678 | Sleeping Bags                       |  100 |  200 |   65.66 |
   2 | 12345 | Baby Formula                        |  145 |  200 |   33.99 | 2025/12/12
   3 | 12113 | Hydrogen peroxide 100ml bottles     |  275 |  300 |    3.99 |*2024/11/11
   4 | 11223 | Enfamil A+                          |   30 |   38 |   38.99 |*2025/11/11
   5 | 44444 | Flash lights                        |  399 |  400 |   65.66 |
   6 | 56789 | Tents and Blankets and pillows Tent | 2000 | 2000 |   65.66 |
-----+-------+-------------------------------------+------+------+---------+-----------
Enter row number to display details or <ENTER> to continue:
>

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 0
Exiting Program!
File: data.dat
45678   Sleeping Bags   100     200     65.66
12345   Baby Formula    145     200     33.99           251212
12113   Hydrogen peroxide 100ml bottles 275     300     3.99    Keep away from direct sunlight  241111
11223   Enfamil A+      30      38      38.99   Keep in a dry and cool place    251111
44444   Flash lights    399     400     65.66
56789   Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows Tents and Blankets and pillows    2000   2000     65.66

```

```text
Aid Management System
Date: 2023/12/09
Data file: No file
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 7

****New/Open Aid Database****
Enter file name: data.dat
6 records loaded!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 6

****Ship Items****
Shipping Order for 3 times saved!

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 1

****List Items****
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   1 | 45678 | Sleeping Bags                       |  100 |  200 |   65.66 |
   2 | 44444 | Flash lights                        |  399 |  400 |   65.66 |
   3 | 12345 | Baby Formula                        |  145 |  200 |   33.99 | 2025/12/12
-----+-------+-------------------------------------+------+------+---------+-----------
Enter row number to display details or <ENTER> to continue:
>

Aid Management System
Date: 2023/12/09
Data file: data.dat
---------------------------------
1- List Items
2- Add Item
3- Remove Item
4- Update Quantity
5- Sort
6- Ship Items
7- New/Open Aid Database
---------------------------------
0- Exit
> 0
Exiting Program!
File: data.dat
45678   Sleeping Bags   100     200     65.66
44444   Flash lights    399     400     65.66
12345   Baby Formula    145     200     33.99           251212

------------------------------------------------
File: shippingOrder.txt
Shipping Order, Date: 2023/12/09
 ROW |  SKU  | Description                         | Have | Need |  Price  | Expiry
-----+-------+-------------------------------------+------+------+---------+-----------
   1 | 12113 | Hydrogen peroxide 100ml bottles     |  300 |  300 |    3.99 |*2024/11/11
   2 | 56789 | Tents and Blankets and pillows Tent | 2000 | 2000 |   65.66 |
   3 | 11223 | Enfamil A+                          |   38 |   38 |   38.99 |*2025/11/11
-----+-------+-------------------------------------+------+------+---------+-----------

```