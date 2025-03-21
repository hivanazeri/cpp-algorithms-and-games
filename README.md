# 1- Queue Implementation in C++
Code File Name: SimpleQueue.cpp

## Description
This project implements a **queue data structure** in C++ using an **array**. It processes a series of commands to perform queue operations, strictly using an array for storage.

## Features
- Implements a **queue** using an **array**.
- Supports **`push`** and **`pop`** operations.
- Reads a sequence of operations and processes them **sequentially**.
- Outputs the value of each **popped** element.

## Input Format
1. The first line contains an **integer** `n`, representing the number of commands.
2. The next `n` lines contain queue commands:
   - **`push x`** → Inserts `x` into the queue.
   - **`pop`** → Removes and prints the front element of the queue.

## Output Format
- Each **`pop`** operation prints the front element of the queue.
---
# 2- Round Table Elimination Game
Code File Name:

## Description
This program simulates a **round table elimination game**. The game follows these rules:
- `n` friends sit in a **circle**.
- A **counting rhyme** with `k` words is recited.
- Starting from a given position, counting proceeds **clockwise**.
- The person on whom the rhyme **ends** is eliminated.
- The process repeats until **only one person remains**, who is declared the **winner**.

## Input Format
The program reads two integers from **standard input**:
1. `n` → Number of players sitting in a circle.
2. `k` → Number of words in the rhyme.

## Output Format
- The program prints the **number of the last remaining player**.

# 3- Handshaking Problem - 

## Problem Description  
A group of friends, sitting in a **circular arrangement**, want to shake hands. The number of friends is always **even**, and the goal is to determine the **number of ways** they can shake hands **without any two handshakes crossing**.

---

## Solution Approach  
This problem is a classic example of the **Catalan Number** sequence, which counts the number of valid ways to form non-crossing pairs.

### Formula  
The number of valid handshaking ways is given by the **n-th Catalan number**:

\[
C(n) = \sum_{i=0}^{n-1} C(i) \times C(n-i-1)
\]

where:
- \( C(0) = 1 \)
- \( C(1) = 1 \)
- \( C(2) = 2 \), and so on.



## Implementation Details  
1. **Read** an even integer `n` (total number of people).  
2. **Divide** `n` by 2 to get the number of handshake **pairs**.  
3. **Use dynamic programming** to compute the **Catalan number** up to `n/2`.  
4. **Store intermediate results** in an array to **avoid redundant calculations**.  
5. **Print the result** as the number of valid handshaking ways.



## Time Complexity  
- The implementation runs in **O(n²)** time because:  
  - The **outer loop** runs `n/2` times.  
  - The **inner loop** performs a summation over previous values, leading to **quadratic complexity**.

