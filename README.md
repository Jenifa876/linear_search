# linear_search
# Introduction
This project demonstrates a simple linear search algorithm in C++. Linear search is a straightforward algorithm that searches for a specific element in an array by checking each element sequentially until the desired element is found or the end of the array is reached.

# Features
Accepts a list of integers from the user.
Allows the user to input the key to search for in the list.
Returns the position of the key if found, or a message if the key is not present.
# Explanation
lin_search function: Searches through each element in the array a[]. If it finds the key, it returns the index of that element. If the key is not found, it returns -1.
Main function: Takes user input for the array size, elements, and search key, then calls the lin_search function to determine if the key is in the array.
# Example Output
Enter the number of elements: 5
Enter the elements: 10 20 30 40 50
Enter the key value to search: 30

Element is found at the position: 3
