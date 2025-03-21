# C++ Coding Assignment 01

This repository contains solutions to four algorithmic problems implemented in C++. Each problem is solved in a separate `.cpp` file.

##  Problem Descriptions

### 1. **Handshaking (`handing.cpp`)**
   - **Description**: Given `n` pairs of friends sitting in a circular arrangement, the goal is to find the number of ways they can shake hands such that no two handshakes cross.
   - **Complexity**: `O(n^2)`
   - **Input**: A single integer `n`, representing the number of pairs.
   - **Output**: The number of valid handshaking arrangements.
   - **Example**:
     ```
     Input: 4
     Output: 2
     ```

### 2. **Simple Queue (`SimpleQueue.cpp`)**
   - **Description**: Implements a queue using an array with `push` and `pop` operations.
   - **Input**:
     - The first line contains an integer `n` (number of operations).
     - Each of the next `n` lines contains a command: `"push x"` or `"pop"`.
   - **Output**: When `"pop"` is called, the dequeued element is printed.
   - **Example**:
     ```
     Input:
     6
     push 1
     push -4
     pop
     push 3
     push 5
     pop
     
     Output:
     1
     -4
     ```

### 3. **Remove Repeating Characters (`NoRepeat.cpp`)**
   - **Description**: Given a string, repeatedly remove consecutive repeating characters until no such subsequences exist.
   - **Input**: A single string (max length 150).
   - **Output**: The modified string after all removals.
   - **Example**:
     ```
     Input: abbaca
     Output: ca
     ```

### 4. **Elimination Game (`Game.cpp`)**
   - **Description**: `n` friends play a counting-out game (like Josephus problem). Counting `k` steps clockwise, the person at position `k` is eliminated. The last remaining person wins.
   - **Input**: Two integers `n` (number of players) and `k` (count step).
   - **Output**: The index of the winner.
   - **Example**:
     ```
     Input: 5 2
     Output: 3
     ```

## How to Compile and Run

Each program can be compiled and executed using a C++ compiler (`g++` or `clang++`).

```sh
g++ handing.cpp -o handing && ./handing
g++ SimpleQueue.cpp -o SimpleQueue && ./SimpleQueue
g++ NoRepeat.cpp -o NoRepeat && ./NoRepeat
g++ Game.cpp -o Game && ./Game
