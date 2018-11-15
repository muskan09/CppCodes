/*
2. Design a program for Garments store in Chandigarh, which will store the list of all the
items of the store. Write a c++ program to get the details of a Class Siaver and in the
case of invalid inputs, throw a Number Format Exception.
CONSTAINT:Create a driver class named Siaver. In main method, get the necessary inputs from the user
through the console and check whether the deposit and costPerday are integers, if not then throw a
NumberFormatException and print the statement "Price should always be numeric". If all the inputs are
valid, then print the statement "Siaver details:" and display the details using display function.
USE EXCEPTION HANDLING MECHANISM to throw exception, when required.
Sample input1:
Women accessories //item type
deposit 190//item deposit
Sample output1:
NumberFormatException: Price should always be numeric
Sample Input2:
Men Garments//item type
1500//item deposit
1000
//item cost per day
Sample output2:
Itemtype details
Name: furniture items
Deposit: 1500.00
Cost per day: 1000.00
*/
#include<iostream>
#include<stdio.h>
#include<exception>
#include<cstring>
using namespace std;
classSiaver
{
string name;
string deposit;
string costPerDay;
public:
void display();
};
//---------------
