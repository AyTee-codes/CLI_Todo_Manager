# TASKFLOW - C++ CLI To-Do List Manager

A simple command-line task management application built with C++. TASKFLOW allows users to create, view, complete, and delete tasks directly from the terminal.

This project was developed as a hands-on exercise to strengthen my understanding of C++ fundamentals, including structures, vectors, loops, conditional statements, and user input.

## Features

- **Add Tasks:** Create tasks with a unique ID, title, and description.
- **View Tasks:** Display all stored tasks and their completion status.
- **Complete Tasks:** Mark tasks as completed using their ID.
- **Delete Tasks:** Remove tasks using their ID.
- **Interactive Menu:** Navigate through the application using a simple CLI menu.

## Technologies Used

- C++
- Standard Template Library (STL)
- `vector` for dynamic task storage
- `struct` for task data organization

## Getting Started

### Prerequisites

You need a C++ compiler installed on your system.

Examples:
- GCC / MinGW
- Clang
- Visual Studio C++ compiler

### Installation

1. Clone this repository:

   ```bash
   git clone https://github.com/YOUR-USERNAME/CLI-Todo-Manager.git
   ```

2. Navigate to the project directory:

   ```bash
   cd CLI-Todo-Manager
   ```

3. Compile the program:

   ```bash
   g++ main.cpp -o taskflow
   ```

4. Run the application:

   ```bash
   ./taskflow
   ```

   On Windows:

   ```bash
   taskflow.exe
   ```

## Application Menu

```text
==============================
           TASKFLOW
==============================
1. Add New Task
2. View All Tasks
3. Mark Task as Completed
4. Delete Task
5. Exit

Choose an option:
```

## Concepts Practiced

Through this project, I practiced:

- Structures (`struct`)
- Vectors and dynamic storage
- Loops (`for`, `do-while`)
- Conditional statements (`if-else`, `switch`)
- User input (`cin`, `getline`)
- Vector operations (`push_back`, `erase`)
- Basic searching using loops
- Boolean values and program flow control

## Future Improvements

Planned features for future versions:

- [ ] Edit existing tasks
- [ ] Search tasks by title
- [ ] Add task priorities
- [ ] Display task statistics
- [ ] Save tasks permanently using file handling
- [ ] Load previously saved tasks when the application starts
- [ ] Add deadlines and overdue task tracking

## Current Version

**Version:** 1.0.0

**Status:** Core functionality implemented. Future improvements planned.

## Author
Arnesh Tamang

Developed as part of my journey learning C++ and software development.

---

*TASKFLOW: Organize your tasks. Track your progress. Get things done.*