# Input/Output
> [main.cpp lines 39-43](/main.cpp#L39)
> I collect several user inputs so I can get employee information. This also serves to let the while loop know when to end.
## Control Flow
> [main.cpp lines 79-91](/main.cpp#L79)
> Here I use if and else statements to determine what payment to assign to a new employee. 
### Iteration
> [main.cpp line 37](/main.cpp#L37)[main.cpp line 101](/main.cpp#L101)
> I use a while loop in line 37 in order to collect multiple inputs of employees from the user. In line 101, I used for loop to add up the values of a vector of intergers 
#### Data Structure
> [main.cpp line 29](/main.cpp#L29)
> In order to store employee salaries for expenses, I created a vector since they can hold more than 1 value of the same data type. I later add the values to it at the end of the if loop in line 41.
##### Function
> [main.cpp lines 76-106](/main.cpp#L76)[employee.cpp lines 6-27](/employee.cpp#L6)
> Within the main function I made two functions that would determine employee pay and then use a vector filled with this employee pay to calculate the store budget. The functions within employee.cpp are 2 getters and 2 setters, to set up employee info
###### File I/O
> [main.cpp lines 30-72](/main.cpp#L30)
> I use the information gathered from each employee to write one or more times to a separate file (records.txt) to save employee data and show remaining money
####### Class
> [employee.h lines 1-20](/employee.h#L7)
> I created a class to describe employees, and gave it member variables to hold their information, and 4 functions to use this info. This class is included in both .cpp files
