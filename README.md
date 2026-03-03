# RTOS-Basics-C-Implementation

## Overview

This repository demonstrates fundamental RTOS core concepts implemented in C using POSIX APIs in a Linux environment.

The project provides practical implementation of:

* Process creation
* Multithreading
* Race Condition demonstration
* Critical Section protection (fixed version)
* Mutex-based mutual exclusion
* Binary Semaphore synchronization

These examples simulate real-time embedded task coordination and shared resource protection mechanisms used in firmware development.

---

## Objectives

* Understand concurrency behavior in RTOS systems
* Demonstrate race condition and unsafe shared access
* Fix data corruption using critical section protection
* Implement mutual exclusion using mutex
* Implement task synchronization using binary semaphore
* Strengthen embedded systems fundamentals for interviews

---

## Project Structure

```text
RTOS_Codes/
│
├── process_demo.c
├── thread_demo.c
├── race_condition_demo.c
├── critical_section_fixed.c
├── mutex_demo.c
└── binary_semaphore_demo.c
 
```

---

## Concepts Covered

---

### 1. Process (fork)

Description:

* Demonstrates creation of parent and child process
* Shows independent execution space
* Highlights PID usage
* Explains separate memory context

Compile and Run:

```bash
gcc process_demo.c -o process_demo
./process_demo
```

---

### 2. Threads (pthreads)

Description:

* Demonstrates multithreading using pthread_create
* Shows concurrent execution
* Explains shared memory model
* Illustrates lightweight task execution

Compile and Run:

```bash
gcc thread_demo.c -o thread_demo -lpthread
./thread_demo
```

---

### 3. Race Condition Demonstration

File: race_condition_demo.c

Description:

* Demonstrates unsafe access to shared global variable
* Two threads increment shared counter without protection
* Produces inconsistent and incorrect results
* Shows how data corruption occurs

Expected Behavior:

Final counter value may not match expected result due to race condition.

Compile and Run:

```bash
gcc race_condition_demo.c -o race_condition_demo -lpthread
./race_condition_demo
```

---

### 4. Critical Section – Fixed Version

File: critical_section_fixed.c

Description:

* Fixes race condition using synchronization mechanism
* Protects shared resource using mutex
* Ensures only one thread accesses critical section at a time
* Produces consistent and correct output

Expected Behavior:

Final counter value matches expected result.

Compile and Run:

```bash
gcc critical_section_fixed.c -o critical_section_fixed -lpthread
./critical_section_fixed
```

---

### 5. Mutex (Mutual Exclusion)

File: mutex_demo.c

Description:

* Demonstrates mutual exclusion using pthread_mutex
* Ensures safe access to shared resource
* Prevents race conditions
* Illustrates blocking and unlocking mechanism

Compile and Run:

```bash
gcc mutex_demo.c -o mutex_demo -lpthread
./mutex_demo
```

---

### 6. Binary Semaphore

File: binary_semaphore_demo.c

Description:

* Demonstrates task synchronization using semaphores
* Uses sem_wait() and sem_post()
* Simulates ISR-to-task signaling model used in RTOS
* Shows blocking until signal is received

Compile and Run:

```bash
gcc binary_semaphore_demo.c -o binary_semaphore_demo -lpthread
./binary_semaphore_demo
```

---

## Key RTOS Concepts Summary

| Concept          | Purpose                                      |
| ---------------- | -------------------------------------------- |
| Process          | Independent execution unit                   |
| Thread           | Lightweight execution within process         |
| Race Condition   | Data corruption due to unsynchronized access |
| Critical Section | Protected shared resource region             |
| Mutex            | Mutual exclusion mechanism                   |
| Binary Semaphore | Task synchronization and signaling           |

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
* Automotive embedded systems
* Real-time data logging systems

Embedded mapping examples:

* Critical Section → Protect shared global variables between ISR and main code
* Mutex → Protect shared I2C/SPI bus access
* Binary Semaphore → ISR to Task signaling
* Race Condition → Demonstrates what happens without synchronization

---
