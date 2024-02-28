# Mafia-Payroll-System

This repository contains a C++ program for managing the payroll of mafia employees. The program reads data from a file named "mafia.txt", which contains the names of employees and their corresponding rewards encoded in numeric values.

How it Works
The program defines two arrays:
const int wartosci[]: An array containing the monetary values corresponding to different denominations.
const char nominale[]: An array containing characters representing the denominations.

The pokazWynik function:
Takes an integer parameter liczba, representing the reward amount.
Converts the reward amount into a sequence of characters representing the denominations used, based on the provided denominations and their corresponding values.
Outputs the sequence of characters representing the denominations used to the standard output.

In the main function:
Opens the file "mafia.txt" for reading.
Reads data from the file, consisting of employee names and their reward amounts encoded as numeric values.
For each employee, prints their name followed by the sequence of denominations representing their reward amount using the pokazWynik function.

Input File Format
The input file "mafia.txt" should contain data in the following format:
<employee_name_1> <reward_amount_1>
<employee_name_2> <reward_amount_2>

Where:
<employee_name> is the name of the employee.
<reward_amount> is the numeric value representing the reward amount.

Example
Suppose the "mafia.txt" file contains the following data:
John 150
Smith 75

The program will output:
John BAB
Smith FFFFF
Indicating that John received 1x100 (B), 1x50 (A), and Smith received 5x10 (F).
