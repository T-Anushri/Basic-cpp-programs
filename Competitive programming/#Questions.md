**1.** Write a C++ program for the Problem Statement – The principal has a problem with repetitions. Every time someone sends the same email twice he becomes angry and starts yelling. His personal assistant filters the mails so that all the unique mails are sent only once, and if there is someone sending the same mail again and again, he deletes them. Write a program which will see the list of roll numbers of the student and find how many emails are to be deleted.  
**Sample Input:** 
6  
1  
3  
3  
4  
3  
3  
**Sample Output:**  
3  

**2.** Write a C++ Program for the given Problem Statement. Mr. Robot is making a website, in which there is a tab to create a password. As other websites, there are rules so that the password gets complex and none can predict the password for another. So he gave some rules like:  
+ At least one numeric digit  
+ At Least one Small/Lowercase Letter  
+ At Least one Capital/Uppercase Letter  
+ Must not have space  
+ Must not have slash (/)  
+ At least 6 characters
  
**Input Format:** 
A line with a given string as a password  
**Output Format:**
If someone inputs an invalid password, the code prints: “Invalid password, try again”.  
Otherwise, it prints: “password valid”, without the quotation marks.  
**Constraints:** 
Number of character in the given string <=10^9  
**Sample input 1:**  
abjnlL09  
**Sample output 1:**  
password valid  
**Sample input 2:**  
jjnaskpk  
**Sample output 2:**  
Invalid password, try again

**3.** Write a C++ program to define a class complex and perform addition and subtraction of two complex numbers using operator overloading.  

**4.** Write a C++ program to find the union intersection of two list and also find except (remove even elements from list1 and odd elements from list2)   
**Example Input:**  
List 1: 1,3,4,5,6,8,9  
List 2: 1,5,8,9,2  
**Output:**  
Union: 1,3,4,5,6,8,9,2  
Intersection: 1,5,8,9  
Except: 1,3,5,9,8,2  

**5.** You are given a sentence. If a word occurs more than once, replace its duplicate occurrences (2nd, 3rd, ...) with "oops". Do not replace the first occurrence in C++   
**Input:**  
First line: String of length n with space-separated words comprising of lowercase English alphabets.  
**Output:**  
First line: String with required modifications.  
**Sample Input:** abc ijk wjfo abc som wjfo aoo abc  
**Sample Output:** abc ijk wjfo oops som oops aoo oops  

**6.** You are given a class Solution and an inner class Inner.Private. The main method of class Solution takes an integer num as input. The powerof2 in class Inner.Private checks whether a number is a power of 2. Call the method powerof2 of the class Inner.Private from the main method of the class Solution using C++.  
**Constraints:**  
1 <= num <= 230  
**Sample Input:**  
8  
**Sample Output:**  
8 is power of 2  

**7.** Perform using C++. There are two banks; Bank A and Bank B. Their interest rates vary. You have received offers from both banks in terms of the annual rate of interest, tenure, and variations of the rate of 
interest over the entire tenure.  

You have to choose the offer which costs you least interest and reject the other. Do the computation and make a wise choice. Save the input credentials and output in a file ‘bank.txt’.  

The loan repayment happens at a monthly frequency and Equated Monthly Installment (EMI) is calculated using the formula given below :  
**EMI = loanAmount * monthlyInterestRate / ( 1 – 1 / (1 + monthlyInterestRate)^(numberOfYears * 12))**  

**Constraints:**  
1 <= P <= 1000000  
1 <=T <= 50  
1<= N1 <= 30  
1<= N2 <= 30  

**Input Format:**  
First line : P – principal (Loan Amount)  
Second line : T – Total Tenure (in years).  
Third Line: N1 is the number of slabs of interest rates for a given period by Bank A. First slab starts from the first year and the second slab starts from the end of the first slab and so on.  
Next N1 line will contain the interest rate and their period.  
After N1 lines we will receive N2 viz. the number of slabs offered by the second bank.  
Next N2 lines are the number of slabs of interest rates for a given period by Bank B. The first slab starts from the first year and the second slab starts from the end of the first slab and so on.    
The period and rate will be delimited by single white space. 

**Output Format:** Your decision – either Bank A or Bank B.  

**8.** You are given a main() function which takes a set of inputs to create two matrices and prints the result of their addiction. You need to write the class Matrix which has a member of type vector<vector 
< int > >. You also need to write a member function to overload the operator +. The function's job will be to add two objects of Matrix type and return the resultant Matrix.  

**Input Format:**  
The first line will contain the number of test cases T. For each test case, there are three lines of input.  
The first line of each test case will contain two integers N and M which denote the number of the rows and columns respectively of the two matrices that will follow on the next two lines.  
These next two lines will each contain N * M elements describing the two matrices in row-wise format i.e. first M elements belong to the first row, next M elements belong to the second row and so on.  

**Sample Input:**  
1  
2 2  
2 2 2 2  
1 2 3 4  

**Sample Output:**  
3 4   
5 6  

**9.**  Perform using C++ The math assignment says you will be given numbers, mostly with imaginary additions, that means complex numbers, and you need to add them and tell the answer in your answer script. You 
told your friend John that you don’t know the addition of complex numbers, so John will write a program, which you can write in order to get the results of addition. Save the output in a file ‘oop.txt’  
John knows Object oriented programming enough to complete the task.  

**Input Format:**  
Three integers a b and c  
**Output format:**  
First print the complex number a+bi  
Next line print a + bi + c as i2.  
Next line i2+a+bi  

**Sample Input:**  
4 5 2  
**Sample Output:**  
4 + 5i  
6 + 5i  
10 + 10i  

**10.** Given an array of size n and an integer k, find all elements in the array that appear more than n/k times in C++.  
**Examples:**  
**Input:** arr[] = {3, 1, 2, 2, 1, 2, 3, 3}, k = 4  
**Output:** {2, 3}  
**Explanation:** Here n/k is 8/4 = 2, therefore 2 appears 3 times in the array that is greater than 2 and 3 appears 3 times in the array that is greater than 2.

**Input:** arr[] = {9, 8, 7, 9, 2, 9, 7}, k = 3  
**Output:** {9}  
**Explanation:** Here n/k is 7/3 = 2, therefore 9 appears 3 times in the array that is greater than 2.  

**11.** Write a C++ program implementing Stack ADT using class template & perform the required operations like PUSH and POP. Pass int, float and char data types to the Stack class.  

**12.** In this problem, you need to add 2 given complex numbers and print the resulting complex number using '+' operator. Implement a class named complex containing data members as real and imaginary part of the complex number and the following function in C++:  
void display()  
constructor to assign values to the complex number.  
operator function to add 2 numbers  
**Input:**  
First line of the input contains the number of test cases and each test case contains 4 space separated integer values representing the real and imaginary part of 2 complex numbers ( Real1 imaginary 1 real2 imaginary2 )  
**Output:**  
The output to each test case should be a single line representing the resulting complex number from the addition of given complex numbers. In the given format real + imaginary_i  

**Example:**  
**Input:**  
2  
3 6 -1 4  
2 2 -1 -1  
**Output:**  
2 + 10i  
1 + 1i  

**13.** Write a C++ program for the Inventory Management System to track and manage a store's inventory. Add a new product for the existing stock with the following functionalities.  
**Input:** Product Name, Description, Price, Quantity, Category.  
**Output:** Generate a unique Product ID, add the product to the list of products, and update the stock level.  

**14.** Write a C++ program to print the following output for the given input. You can assume the string is of odd length.  
**Example:**  
**Input:** 12345  
**Output:**  
1   5  
 2 4  
  3  
 2 4  
1   5  

**15.** Write a C++ program to create a class Account with an instance variable balance (double). It should contain a constructor that initializes the balance, ensure that the initial balance is greater than 0.0. Acct details: Acct_Name, Acct_acctno, Acct_Bal, Acct_Address. Create two methods namely credit and debit, getBalance. The Credit adds the amount (passed as parameter) to balance and does not return any data. Debit method withdraws money from an Account. GetBalance displays the amount. Ensure that the debit amount does not exceed the Account’s balance. In that case the balance should be left unchanged and the method should print a message indicating “Debit amount exceeded account balance” using exception handling.
