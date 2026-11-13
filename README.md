<div align="center">

# 💻 C++ & Data Structures — Learning Journey

<p>
  <img src="https://img.shields.io/badge/C%2B%2B-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++17">
  <img src="https://img.shields.io/badge/GCC%20%2F%20Clang-Compiler-CC0000?style=for-the-badge&logo=gnu&logoColor=white" alt="GCC / Clang">
  <img src="https://img.shields.io/badge/WSL-Ubuntu%2024.04-E95420?style=for-the-badge&logo=ubuntu&logoColor=white" alt="Ubuntu 24.04 on WSL">
  <img src="https://img.shields.io/badge/License-MIT-2ea44f?style=for-the-badge" alt="MIT License">
</p>

**A practical learning repository for C++, problem solving, data structures, and core computer science concepts.**

[Explore Repository](https://github.com/Madtch/cpp-learning-journey) ·
[Visit GitHub Profile](https://github.com/Madtch)

</div>

---

## 📖 About

Welcome to my **C++ & Data Structures Learning Journey**.

This repository is where I document my progress in learning C++ and strengthening my Computer Science fundamentals. It contains programming exercises, concept demonstrations, academic assignments, and small projects built through practice.

Rather than collecting code snippets alone, I use this repository to understand **why a concept works, how it is implemented, and when it is useful**.

### What this repository covers

| Area                    | Description                                                            |
| ----------------------- | ---------------------------------------------------------------------- |
| 📚 **C++ Fundamentals** | Syntax, variables, data types, operators, input/output, and functions. |
| 🔀 **Control Flow**     | Conditions, loops, and program flow.                                   |
| 🧠 **Problem Solving**  | Logical thinking, algorithmic exercises, and programming challenges.   |
| 🏗️ **Data Structures**  | Core data structures, implementations, and academic exercises.         |
| 🧪 **Mini Projects**    | Small command-line applications that combine concepts in practice.     |

## 🛠️ Tech Stack & Environment

<p>
  <img src="https://img.shields.io/badge/C%2B%2B-17-00599C?style=flat-square&logo=cplusplus&logoColor=white" alt="C++17">
  <img src="https://img.shields.io/badge/GCC-g%2B%2B-A42E2B?style=flat-square&logo=gnu&logoColor=white" alt="GCC">
  <img src="https://img.shields.io/badge/Clang-Supported-262D3A?style=flat-square&logo=llvm&logoColor=white" alt="Clang">
  <img src="https://img.shields.io/badge/Ubuntu-24.04-E95420?style=flat-square&logo=ubuntu&logoColor=white" alt="Ubuntu">
  <img src="https://img.shields.io/badge/VS%20Code-Editor-007ACC?style=flat-square&logo=visualstudiocode&logoColor=white" alt="Visual Studio Code">
  <img src="https://img.shields.io/badge/Git-Version%20Control-F05032?style=flat-square&logo=git&logoColor=white" alt="Git">
</p>

| Component            | Used in this repository |
| -------------------- | ----------------------- |
| Programming language | C++17                   |
| Compiler             | GCC (`g++`) / Clang     |
| Main environment     | Ubuntu 24.04 via WSL 2  |
| Editor               | Visual Studio Code      |
| Version control      | Git & GitHub            |

## 📂 Repository Structure

```text
cpp-learning-journey/
│
├── 01-basics/
│   └── C++ fundamentals, variables, data types, keywords, and I/O
│
├── 02-control-flow/
│   └── Conditional statements, loops, operators, and switch-case
│
├── 03-matkul-struktur-data/
│   └── Academic assignments and data structure implementations
│
├── 04-mini-projects/
│   └── Practical CLI applications and mini-projects
│
└── README.md
```

> The folders are organized by learning topic. Their contents may grow or change as I explore more concepts.

## 🌐 Cross-Platform Compatibility

The code is written using standard **C++17**, so it can be compiled on different operating systems with a compatible compiler.

| Operating System           | Suggested Environment           | Compiler    |
| -------------------------- | ------------------------------- | ----------- |
| 🐧 Linux                   | Native Linux terminal           | GCC / Clang |
| 🪟 Windows                 | WSL 2, MSYS2, or MinGW-w64      | GCC / Clang |
| 🍎 macOS                   | Xcode Command Line Tools        | Clang       |
| 💻 Other Unix-like systems | Compatible terminal environment | GCC / Clang |

**Keep in mind:** The source code is portable, but compiler installation, commands, and executable formats can differ between environments.

## 🚀 Getting Started

### Prerequisites

Before running the examples, make sure you have:

- [Git](https://git-scm.com/) installed.
- A C++ compiler with C++17 support.
- A terminal or command-line environment.

### 1. Install a C++ Compiler

<details>
<summary><strong>🐧 Linux — Ubuntu / Debian</strong></summary>

Install GCC and the essential build tools:

```bash
sudo apt update
sudo apt install build-essential g++
```

Check the compiler installation:

```bash
g++ --version
```

</details>

<details>
<summary><strong>🪟 Windows — WSL 2 (Recommended)</strong></summary>

Install WSL with Ubuntu from PowerShell:

```powershell
wsl --install -d Ubuntu
```

After installation, open the Ubuntu terminal and install GCC:

```bash
sudo apt update
sudo apt install build-essential g++
```

Verify the installation:

```bash
g++ --version
```

</details>

<details>
<summary><strong>🪟 Windows — MSYS2 / MinGW-w64</strong></summary>

1. Install [MSYS2](https://www.msys2.org/).
2. Follow the official MSYS2 instructions to install the MinGW-w64 GCC toolchain.
3. Add the appropriate compiler `bin` directory to your `PATH` if you want to use it from other terminals.
4. Verify that `g++` is available:

```bash
g++ --version
```

</details>

<details>
<summary><strong>🍎 macOS</strong></summary>

Install Apple's Command Line Tools, which include Clang:

```bash
xcode-select --install
```

Verify the compiler:

```bash
clang++ --version
```

</details>

### 2. Clone This Repository

```bash
git clone https://github.com/Madtch/cpp-learning-journey.git
cd cpp-learning-journey
```

### 3. Compile a C++ Source File

For example, compile the `switch-case.cpp` exercise:

```bash
g++ -std=c++17 02-control-flow/switch-case.cpp -o app
```

**What does this command mean?**

| Part                              | Meaning                              |
| --------------------------------- | ------------------------------------ |
| `g++`                             | Runs the GNU C++ compiler.           |
| `-std=c++17`                      | Uses the C++17 language standard.    |
| `02-control-flow/switch-case.cpp` | Path to the source file.             |
| `-o app`                          | Names the compiled executable `app`. |

> Change the source file path to the program you want to compile. If you use Clang, you can replace `g++` with `clang++`.

### 4. Run the Executable

Choose the command that matches your environment.

**Linux / macOS / WSL**

```bash
./app
```

**Windows — Command Prompt**

```cmd
app.exe
```

**Windows — PowerShell**

```powershell
.\app.exe
```

> On Windows, the executable will commonly have an `.exe` extension. On Linux and macOS, it usually does not.

## 🎯 Learning Objectives

By working through this repository, I aim to:

- Build a strong foundation in C++ programming.
- Understand program flow, functions, and core programming concepts.
- Implement and analyze fundamental data structures.
- Improve problem-solving and algorithmic thinking.
- Write code that is readable, structured, and maintainable.
- Strengthen Computer Science fundamentals for future software engineering projects.
- Apply concepts through coursework and practical projects.

## 📊 Learning Progress

| Module                    | Learning Focus                    | Status         |
| ------------------------- | --------------------------------- | -------------- |
| `01-basics`               | C++ Fundamentals                  | 🟢 Completed   |
| `02-control-flow`         | Conditions, Loops & Program Flow  | 🟢 Completed   |
| `03-matkul-struktur-data` | Data Structures & Implementations | 🟡 In Progress |
| `04-mini-projects`        | CLI Applications & Mini Projects  | 🟡 In Progress |

<sub>Progress reflects the current state of this repository and will be updated as new exercises and implementations are added.</sub>

## 🧭 Learning Philosophy

My approach is simple:

1. **Understand** the concept before moving to the next topic.
2. **Practice** by writing code from scratch instead of only reading examples.
3. **Experiment** with different inputs and edge cases.
4. **Review** previous implementations and improve them over time.
5. **Build** small projects that connect multiple concepts.

This is a learning repository, so the code may evolve as my understanding improves.

## 👨‍💻 Author

<div align="left">

**Zamzami Ahmad**

Informatics Engineering Student · Software Developer

[![GitHub](https://img.shields.io/badge/GitHub-Madtch-181717?style=flat-square&logo=github)](https://github.com/Madtch)

</div>

---

<div align="center">

_Learn the fundamentals. Practice consistently. Build with purpose._

</div>
