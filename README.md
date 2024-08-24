# EXPERIMENT 4
# Bitwise operators 
This repository contains C++ programs for performing bitwise and shifting operations and resetting a specific bit. These programs demonstrate basic bit manipulation techniques.  
## Tables of content:
Introduction  
Program 1: Perform Bitwise and Shifting Operations  
Logic Explanation  
Program 2: Reset a Specific Bit  
Logic Explanation  
## Introduction:  
Bitwise operations are fundamental in programming, especially for low-level data manipulation and performance optimization. Shifting operations are also essential for tasks like encoding, compression, and mathematical calculations. This repository provides two programs to illustrate these concepts.  
#  Program 1:Perform Bitwise and shifting operations :
## logic explaination:
This program demonstrates how to perform basic bitwise and shifting operations. The key operations include:  

1.Bitwise AND: Performs a logical AND operation on each bit of two numbers.  
2.Bitwise OR: Performs a logical OR operation on each bit of two numbers.  
3.Bitwise XOR: Performs a logical XOR operation on each bit of two numbers. 
4.Bitwise NOT: Inverts all bits of a number.  
5.Left Shift: Shifts the bits of a number to the left by a specified number of positions.  
6.Right Shift: Shifts the bits of a number to the right by a specified number of positions.  
The program typically takes two numbers as input and applies these operations, displaying the results.  
# Program 2: Set and Reset:  
## Logic explaination:
This program resets (clears) a specific bit in a number. The steps are:

1.User Input: The user inputs a number and the position of the bit to be reset.  
2.Bit Masking: A bitmask is created to target the specific bit. The bit at the given position is cleared using a bitwise AND operation with the negated bitmask.  
3.Output Result: The program displays the number after the specified bit has been reset.  
