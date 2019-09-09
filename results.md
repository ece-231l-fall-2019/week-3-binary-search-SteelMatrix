# Linear and Binary Search Algorithms using Pointers
## Summary
This project (Week 3) demonstrated how linear and binary search algorithms can be used to search through large amounts of data. The program used pointers for the parameters of two of the functions, while the other two excluded the pointer parameters. The execution of each program was timed, and the results are documented in this file.

## Explaination of Algorithm Methods
Linear search is the simplest search method available. Linear search compares the value being searched to each value in the set of data. The advantages of the linear search are:
- Easy to implement into any design
- Can work on sorted or unsorted lists

The disadvantages of linear search are:
- Very slow
 - Searches through every single value in a list
- Not optimal for large lists

Binary search is a complex search method that checks over chunks of data. Binary search requires three parameters, the beginning of the list to be sorted, the end of the list to be sorted, and a midpoint, which is calculated by adding the beginning to the end and dividing by 2. When searching for a value, it compares the value to the midpoint. If the value is smaller than the midpoint, the value will lie on the left side of the midpoint, so the position of the end now becomes the midpoint, and the operation repeats. If the value is larger, it will lie on the right side of the midpoint, so the beginning becomes the midpoint, the midpoint is recalculated, and the process repeats again. This allows for large datasets to be narrowed down to smaller, more manageable sizes. The advantages of binary search are:
- Optimal for any sized list
- Checks over large portions of data as opposed to every value
- Very fast

The disadvantage of binary search is that it requires data to be sorted before. If it is not, the search will not act properly and return incorrect values.

## Computer Specifications
The specifications for the computer used are listed below:
- *Brand*: Hewlett Packard
- *Processor*: Intel Core i3 8th Gen. @ 2.20GHz
- *Random Access Memory*: 8.00 GB
- *Emulated Environment*: Ubuntu 18.04 LTS Windows Store App

## Results
### Using default data files, compiled with no optimizations (default Makefile)

| Search Method | Values Found | Time (in seconds) |
| ------------- | ------------ | ----------------- |
| Linear Search (no pointers) | 237 | 3.19104 |
| Linear Search (with pointers) | 237 | 2.76029 |
| Binary Search (no pointers) | 237 | 0.0009368 |
| Binary Search (with pointers) | 237 | 0.0008195 |

### Using default data files, compiled with debug symbols (flag -g)

| Search Method | Values Found | Time (in seconds) |
| ------------- | ------------ | ----------------- |
| Linear Search (no pointers) | 237 | 18.3755 |
| Linear Search (with pointers) | 237 | 6.27791 |
| Binary Search (no pointers) | 237 | 0.0020104 |
| Binary Search (with pointers) | 237 | 0.0011923 |

### Using default data files, compiled with optimizations (default Makefile)

| Search Method | Values Found | Time (in seconds) |
| ------------- | ------------ | ----------------- |
| Linear Search (no pointers) | 237 | 1.44465 |
| Linear Search (with pointers) | 237 | 1.42544 |
| Binary Search (no pointers) | 237 | 0.0008422 |
| Binary Search (with pointers) | 237 | 0.0005028 |

A consistent trend in the results shows that the functions that used pointers were significantly faster than those that didn't. This is because in the functions without pointers, the function has to make a copy of the parameters in order to manipulate them. The pointers are faster because, instead of having the program make a copy of each parameter, it references the parameters address. When the value needs to be edited, it just changes the value at the address, instead of recreating the variable and changing it.
The fastest results came from the program compiled with optimizations. The optimizations rearranges and executes the program in a fashion that makes more logical sense to the computer. This allows the computer to calculate values faster.
The slowest results came from the program compiled with debug symbols. The debug symbols allow the user to see exactly how the program executes. This slows down execution because it is providing a way for the user to see if anything is wrong during execution.
