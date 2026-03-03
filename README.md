RTOS-Basics-C-Implementation

## Overview

This repository demonstrates fundamental RTOS core concepts implemented in C using POSIX APIs in a Linux environment.

The project focuses on practical understanding of:

* Process creation
* Multithreading
* Critical Sections
* Mutex-based mutual exclusion
* Binary Semaphore synchronization

These examples simulate real-time embedded task coordination and resource protection mechanisms used in firmware development.

---

## Objectives

* Understand concurrency concepts used in RTOS
* Demonstrate race condition and its solution
* Implement mutual exclusion using mutex
* Implement task signaling using binary semaphore
* Build strong foundation for embedded/firmware interviews

---

## Project Structure

```
Embedded-RTOS-Basics-C-Implementation/
│
├── process_demo.c
├── thread_demo.c
├── critical_section_demo.c
├── mutex_demo.c
├── binary_semaphore_demo.c
└── README.md
```

---

## Concepts Covered

### 1. Process (fork)

* Demonstrates creation of parent and child process
* Shows separate execution space
* Highlights PID usage
* Explains independent memory context

Compile and Run:

```
gcc process_demo.c -o process_demo
./process_demo
```

---

### 2. Threads (pthreads)

* Demonstrates multithreading using pthread_create
* Shows concurrent execution
* Explains shared memory model

Compile and Run:

```
gcc thread_demo.c -o thread_demo -lpthread
./thread_demo
```

---

### 3. Critical Section

* Demonstrates race condition problem
* Shows unsafe shared variable update
* Explains need for synchronization

Compile and Run:

```
gcc critical_section_demo.c -o critical_section_demo -lpthread
./critical_section_demo
```

---

### 4. Mutex (Mutual Exclusion)

* Protects shared resource using pthread_mutex
* Prevents race conditions
* Ensures only one thread accesses critical section at a time

Compile and Run:

```
gcc mutex_demo.c -o mutex_demo -lpthread
./mutex_demo
```

---

### 5. Binary Semaphore

* Demonstrates task signaling mechanism
* Uses sem_wait() and sem_post()
* Simulates ISR-to-task signaling model used in RTOS

Compile and Run:

```
gcc binary_semaphore_demo.c -o binary_semaphore_demo -lpthread
./binary_semaphore_demo
```

---

## Key RTOS Concepts Explained

| Concept          | Purpose                              |
| ---------------- | ------------------------------------ |
| Process          | Independent execution unit           |
| Thread           | Lightweight execution inside process |
| Critical Section | Protect shared resource              |
| Mutex            | Mutual exclusion mechanism           |
| Binary Semaphore | Task synchronization and signaling   |

---

## Technologies Used

* C Programming
* GCC Compiler
* POSIX Threads (pthread)
* POSIX Semaphores
* Linux Terminal

---

## Embedded Systems Relevance

Although implemented in Linux, these concepts directly apply to RTOS-based embedded systems such as:

* FreeRTOS
* Embedded Linux
* Automotive control systems
* Real-time data logging systems

Embedded mapping examples:

* Mutex → I2C/SPI bus protection
* Binary Semaphore → ISR to Task signaling
* Critical Section → Shared variable protection

---

## Learning Outcome

After completing this project, you will understand:

* How concurrency works internally
* How race conditions occur
* How RTOS synchronization mechanisms solve them
* Practical implementation of synchronization primitives

---
