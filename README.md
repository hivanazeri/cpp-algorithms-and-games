# C++ Coding Assignment 01

This repository contains solutions to four algorithmic problems implemented in C++. Each problem is solved in a separate `.cpp` file.

##  Problem Descriptions

### 1. **Handshaking (`handing.cpp`)**
   - **Description**: Given `n` pairs of friends sitting in a circular arrangement, the goal is to find the number of ways they can shake hands such that no two handshakes cross.
   - **Complexity**: `O(n^2)`
   - **Input**: A single integer `n`, representing the number of pairs.
   - **Output**: The number of valid handshaking arrangements. 

### 2. **Simple Queue (`SimpleQueue.cpp`)**
   - **Description**: Implements a queue using an array with `push` and `pop` operations.
   - **Input**:
     - The first line contains an integer `n` (number of operations).
     - Each of the next `n` lines contains a command: `"push x"` or `"pop"`.
   - **Output**: When `"pop"` is called, the dequeued element is printed.


### 3. **Remove Repeating Characters (`NoRepeat.cpp`)**
   - **Description**: Given a string, repeatedly remove consecutive repeating characters until no such subsequences exist.
   - **Input**: A single string (max length 150).
   - **Output**: The modified string after all removals.

### 4. **Elimination Game (`Game.cpp`)**
   - **Description**: `n` friends play a counting-out game (like Josephus problem). Counting `k` steps clockwise, the person at position `k` is eliminated. The last remaining person wins.
   - **Input**: Two integers `n` (number of players) and `k` (count step).
   - **Output**: The index of the winner.
   


