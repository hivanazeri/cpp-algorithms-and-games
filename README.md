# Queue Implementation in C++

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
