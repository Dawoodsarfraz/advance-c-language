# Advance-C-Language

A complete roadmap for learning C from fundamentals to systems, performance engineering, and how C underpins ML/AI infrastructure.

---

## Phase 1: Introduction

- History of C
- Compiler vs Interpreter
- GCC/Clang
- Compilation process
- Executable
- IDE vs Text Editor
- Writing first program
- Header files
- Comments

## Phase 2: C Language Standards

- C89 (ANSI C)
- C90
- C99
- C11
- C17
- C23
- Features introduced in each version

## Phase 3: Variables and Data Types

- char
- short
- int
- long
- long long
- float
- double
- long double
- signed
- unsigned
- bool
- sizeof()
- Limits (limits.h, float.h)
- Memory size of every datatype

## Phase 4: Operators

**Arithmetic**
- `+`  `-`  `*`  `/`  `%`

**Assignment**
- `=`  `+=`  `-=`  `*=`  `/=`  `%=`

**Comparison**
- `==`  `!=`  `<`  `>`  `<=`  `>=`

**Logical**
- `&&`  `||`  `!`

**Bitwise**
- `&`  `|`  `^`  `~`  `<<`  `>>`

**Unary**
- `++`  `--`  `&`  `*`  `sizeof`

**Ternary**
- `?:`

**Comma operator**

## Phase 5: Input / Output

- printf()
- scanf()
- fprintf()
- sprintf()
- snprintf()
- puts()
- gets() (why unsafe)
- fgets()
- getchar()
- putchar()

## Phase 6: Type Conversion

- Implicit conversion
- Explicit conversion / casting
- Overflow
- Underflow
- Integer promotion
- Type conversion rules
- const correctness (beyond pointers — general immutability discipline)

## Phase 7: Integer & Floating-Point Internals

**Integer internals**
- Two's complement
- One's complement
- Sign magnitude
- Integer overflow
- Undefined behavior
- Endianness / byte ordering

**Floating point (critical for ML/deep learning)**
- IEEE-754
- NaN
- Infinity
- Denormal numbers
- Machine epsilon
- Precision loss
- Floating-point rounding
- Floating-point comparison
- Numerical stability

## Phase 8: Control Flow

- if / if-else / else if
- switch
- goto (understand why it's discouraged)

## Phase 9: Loops

- for
- while
- do-while
- Nested loops
- break / continue
- Infinite loops

## Phase 10: Functions

- Declaration, definition, prototype
- Parameters vs arguments
- Return values
- Call stack
- Recursion
- Tail recursion
- Static functions
- Inline functions
- Variadic functions (`stdarg.h`)
- Why C doesn't support function overloading

## Phase 11: Arrays

- 1D / 2D / 3D arrays
- Variable Length Arrays (VLA)
- Passing arrays to functions
- Array decay
- Character arrays
- Dynamic 2D/3D allocation (array of pointers vs single contiguous block)
- Row-major vs column-major memory layout (critical for BLAS/NumPy/CUDA interop)

## Phase 12: Strings

- ASCII, UTF-8 basics
- Null terminator
- strlen(), strcpy(), strncpy()
- strcmp(), strncmp(), strcat(), strtok()
- strchr(), strstr()
- memcpy(), memmove(), memcmp(), memset()
- Why buffer overflow happens

## Phase 13: Pointers (Most Important — take several weeks)

**Basics**
- Declaration, initialization, dereferencing
- Address-of operator
- NULL, wild pointers, dangling pointers
- void pointers
- const pointer vs pointer to const
- Double and triple pointers

**Pointer arithmetic**
- Increment / decrement
- Addition / subtraction / difference
- Comparison

**Arrays and pointers**
- Relationship between arrays and pointers
- Pointer indexing vs array indexing

**Function pointers**
- Callbacks
- Dispatch tables
- Plugin architecture

**Applications**
- Pointer to pointer
- Dynamic arrays, matrices
- Linked lists, trees

## Phase 14: Storage Classes

- auto
- register
- static
- extern
- typedef

## Phase 15: Structures

- struct, nested struct
- Padding and alignment
- Bit fields
- Anonymous structs
- Passing/returning structures
- Flexible array member

## Phase 16: Unions

- Memory sharing
- Tagged union
- Applications

## Phase 17: Enums

- Simple enums
- Enum flags
- Bitmask enums

## Phase 18: Dynamic Memory

- malloc(), calloc(), realloc(), free()
- Memory leaks
- Double free
- Use-after-free
- Heap corruption
- Fragmentation

## Phase 19: File Handling

- FILE, fopen(), fclose()
- fread(), fwrite()
- fprintf(), fscanf()
- fseek(), ftell(), rewind()
- Binary files, text files, CSV
- Serialization basics

## Phase 20: Preprocessor

- #define, macros
- Conditional compilation
- Include guards / #pragma once
- Stringification
- Token pasting

## Phase 21: Modular Programming & Build Systems

- Multiple files, header files
- Separate compilation
- Static vs shared libraries, linking
- gcc / clang
- Makefile, CMake
- Meson, Ninja, Autotools, pkg-config
- Package managers: vcpkg, Conan
- Cross toolchains
- Compiler warnings, optimization flags, debug symbols
- Static analysis

## Phase 22: Memory Model & Memory Layout

- Program memory: stack, heap, data, BSS, text
- Stack vs heap, stack overflow
- Virtual memory, physical memory
- Pages, page tables, TLB, MMU
- Cache hierarchy, NUMA, huge pages

## Phase 23: CPU Architecture

- Registers, instruction pipeline
- Branch prediction
- Cache misses
- SIMD: AVX, SSE, NEON
- Memory bandwidth
- False sharing

## Phase 24: Command Line & Environment

- argc, argv
- Environment variables

## Phase 25: Error Handling

- errno
- perror()
- assert()
- Exit codes
- setjmp() / longjmp() (non-local control flow)

## Phase 26: Advanced Memory Topics

- Alignment, padding, packing
- offsetof(), container_of()
- Cache locality
- Memory pools, arena allocator
- Buddy allocator, slab allocator, pool allocator
- Custom allocators
- Reference counting, garbage collection concepts

## Phase 27: Bit Manipulation

- Masks, flags
- Packing / extracting bits
- Setting / clearing / toggling bits
- Rotating bits
- Applications

## Phase 28: Advanced Pointer Topics

- Pointer aliasing, strict aliasing
- volatile
- restrict
- Memory-mapped I/O

## Phase 29: Data Structures in C

- Dynamic array / vector
- Stack, queue, deque
- Linked list, doubly linked list, circular list
- Hash table
- BST, AVL, Red-Black Tree
- Trie, Heap, Graph
- Disjoint Set

## Phase 30: Algorithms

- Sorting: bubble, insertion, selection, quick, merge, heap
- Searching: binary search
- Graph: DFS, BFS, topological sort, shortest path
- Dynamic Programming

## Phase 31: Generic Programming

- void*
- Generic containers
- Function pointers
- Macros

## Phase 32: Undefined Behavior (Huge Topic)

- Examples: `i = i++;`
- Out-of-bounds access
- Signed overflow
- Double free / use-after-free
- Reading uninitialized memory
- Strict aliasing violation
- Alignment violation
- Sequence points

## Phase 33: Compiler Internals & Optimizations

**Internals**
- Preprocessor, lexical analysis, parsing, AST
- Semantic analysis, IR
- Optimization passes, assembly generation, linking

**Optimizations**
- Constant folding, dead code elimination
- Loop unrolling, vectorization
- Inlining
- Common subexpression elimination
- Strength reduction, peephole optimization

## Phase 34: Assembly & ABI

- Registers, stack frame
- Calling convention (x86-64, ARM)
- Function call / return, syscalls
- ABI: stack alignment, register usage, struct layout

## Phase 35: Linkers, Executable Formats & Dynamic Loader

- Object files, symbols, relocation
- Static linking vs dynamic linking
- PLT, GOT, shared objects
- Executable formats: ELF, PE, Mach-O
- Sections, segments, headers
- How `./program` actually runs (dynamic loader)

## Phase 36: Linux System Programming

- Processes, threads
- fork, exec, wait
- Signal handling: signal() vs sigaction(), signal handlers, signal-safety, blocking/masking signals
- Daemons
- Pipes, named pipes
- Shared memory, semaphores, message queues
- Memory mapping, file descriptors
- select, poll, epoll, io_uring
- Virtual memory, paging, scheduling, context switching
- System calls

## Phase 37: Multithreading & Parallel Programming

- POSIX threads (pthreads)
- Mutex, semaphore, condition variable
- Deadlock, race condition
- Atomic operations, memory ordering
- OpenMP, MPI
- NUMA programming, thread affinity
- Lock-free programming
- Coroutines (via libraries)

## Phase 38: Networking

- Sockets, TCP, UDP
- Client/server basics
- HTTP, HTTPS, TLS
- REST, gRPC concepts, WebSocket

## Phase 39: SIMD & Cache Optimization

- Spatial and temporal locality
- Blocking, loop tiling, loop fusion
- Cache-friendly algorithms
- SSE, AVX, AVX2, AVX512, NEON
- Intrinsics

## Phase 40: Performance Engineering & Debugging

- gdb
- Valgrind
- AddressSanitizer, LeakSanitizer, UndefinedBehaviorSanitizer
- Core dump, backtrace
- Benchmarking, profiling
- perf, gprof, Callgrind, Cachegrind
- Flame graphs

## Phase 41: Security

- Buffer overflow, stack smashing, canary
- ASLR, DEP, ROP
- Integer overflow
- Format string attacks
- Secure coding practices

## Phase 42: Serialization & Compression

- Binary serialization
- Protocol Buffers, FlatBuffers, Cap'n Proto (concepts)
- zlib, gzip, LZ4, Zstd (useful for ML datasets)

## Phase 43: Databases

- SQLite C API
- B-tree implementation basics
- Storage engine basics
- Memory-mapped databases

## Phase 44: Logging & Testing

- Log rotation, async logging, structured/binary logging
- Unit testing, integration testing
- Testing frameworks: Unity, CMocka, Check
- Fuzz testing, property testing
- Coverage, mocking

## Phase 45: Static Analysis & Documentation

- clang-tidy, cppcheck, scan-build
- Sanitizers
- Doxygen
- API design, library design
- Semantic versioning

## Phase 46: Cross-Platform Development

- Windows API basics
- POSIX
- Conditional compilation
- Cross compilation

## Phase 47: Interfacing C with Other Languages

- Python C API, ctypes, Cython (concepts)
- Rust FFI
- Go FFI
- Java JNI
- Especially useful for integrating high-performance C into ML pipelines

## Phase 48: Design Patterns in C

- Opaque pointers, handle pattern
- State machine
- Observer, strategy (via function pointers)
- Factory, singleton (carefully)
- Plugin architecture, event loop

## Phase 49: Reading Large Codebases

Develop the habit of reading real-world C:
- Linux kernel
- musl libc
- SQLite
- Git
- Redis
- FFmpeg
- OpenCV (C/C++)
- Lua
- CPython
- NumPy C implementation

## Phase 50: Production-Level C

- Coding standards
- MISRA C (embedded)
- CERT C
- Error handling, logging, documentation
- Unit testing, profiling, benchmarking

## Phase 51: Numerical Computing (ML-relevant)

- BLAS concepts
- Matrix multiplication optimization
- Cache-aware matrix operations
- Sparse matrices, CSR/CSC formats
- Numerical linear algebra basics

## Phase 52: Interacting with Hardware

- Memory-mapped I/O
- volatile
- Interrupt concepts
- DMA (conceptually)
- Embedded programming basics

## Phase 53: GPU Programming (Conceptual)

- CUDA execution model
- OpenCL concepts
- Memory transfer, kernel launches

## Phase 54: C for ML Infrastructure

Study how C underpins the ML/AI software stack:
- Python interpreter (CPython)
- NumPy internals
- BLAS/LAPACK interfaces
- Tensor runtimes

## Phase 55: Libraries & Tools for ML / HPC

**Parallel & GPU computing**
- CUDA
- OpenMP
- MPI
- NCCL

**Math / numerical libraries**
- BLAS / LAPACK / OpenBLAS
- oneDNN
- cuDNN

**ML/vision infrastructure**
- OpenCV
- ONNX Runtime
- TensorRT

**Systems & general-purpose**
- POSIX APIs
- Standard C library (libc)
- ncurses
- OpenSSL (basics)
- SQLite C API
- zlib
- libcurl

## Phase 56: Capstone Projects

Theory sticks when you build. Suggested projects, roughly ordered by difficulty:

- Build your own `malloc`/`free` (custom heap allocator)
- Build a dynamic array / vector library (generic, via `void*`)
- Build a hash table from scratch
- Build a JSON parser
- Build a simple shell (fork/exec/pipes/signals)
- Build a thread pool
- Build a lock-free queue
- Build a basic HTTP server (sockets + epoll)
- Build a key-value store with file persistence
- Build a matrix multiplication library and benchmark it against BLAS/OpenBLAS
- Build a small autograd engine in C (ties directly into ML — mirrors the spirit of Karpathy's llm.c)
- Build a memory profiler / leak detector
- Build a mini regex engine
- Build a simple ELF binary parser
- Port one small utility from Python/Rust to C via FFI and benchmark the difference
