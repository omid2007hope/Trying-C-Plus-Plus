# C++ Learning Projects for Full-Stack Developers

A curated list of **4 progressive C++ projects** designed specifically for developers with HTML, CSS, JavaScript, and Node.js experience. Each project increases in difficulty and introduces key C++ concepts while building practical applications.

These projects will help you transition from web development thinking to systems-level C++ programming.

---

## 1. Very Easy: Console Calculator + Basic Menu System

**Goal**: Build a command-line calculator that supports basic operations and keeps a history of calculations.

**What you'll learn**:
- Basic syntax, variables, loops, functions, and switch statements
- Input validation and error handling (`cin` / `cout`)
- Simple string handling and menu systems

**Features to implement**:
- Main menu with options (Calculate, History, Exit)
- Support for floating point numbers
- History stored in a `std::vector`
- Clear screen option

**Why it's perfect for beginners**: Almost zero boilerplate. You can finish this in a weekend and get immediate feedback.

**Stretch Goal**: Save calculation history to a text file using `<fstream>`.

---

## 2. Easy: Personal Finance Tracker (CLI)

**Goal**: A command-line expense and income tracker with reporting features.

**What you'll learn**:
- Structs and basic Classes
- `std::vector` + STL algorithms (`std::sort`, `std::accumulate`)
- File I/O (load/save data)
- Date handling (`std::chrono` or simple string-based dates)

**Core Features**:
- Add transactions (amount, category, date, type: income/expense)
- List all transactions
- Monthly summary and total balance
- Filter by category
- Save/Load from a simple text/CSV format (JSON later)

**Why it's great for you**: Similar to building small backend features in Node.js, but with proper memory management and performance focus.

**Stretch Goal**: Add ASCII bar charts or export data to CSV for browser viewing.

---

## 3. Normal: Task Manager / Todo App with Priority & Deadlines

**Goal**: Build an advanced command-line Todo application (a significant upgrade from typical JS todo apps).

**What you'll learn**:
- Proper Object-Oriented Programming (classes, inheritance, polymorphism)
- `std::map`, `std::unordered_map`, and smart pointers (`std::unique_ptr`)
- Operator overloading (for sorting)
- File serialization and data persistence

**Core Features**:
- Add/Edit/Delete tasks (title, description, priority, deadline, status)
- Support for multiple task lists (Work, Personal, etc.)
- Search and filter functionality
- Due date reminders (highlight overdue tasks)
- Proper save/load system

**Stretch Goals**:
- Use the `ncurses` library for a polished TUI interface
- Implement undo/redo using the Command Pattern

This project emphasizes clean code architecture — skills directly transferable from Node.js development.

---

## 4. Hard: Simple HTTP Server + Static File Server

**Goal**: Create a lightweight HTTP web server in C++ that can serve your existing HTML/CSS/JS files and handle basic API routes.

**What you'll learn**:
- Socket programming and networking
- Multi-threading with `std::thread`
- HTTP request parsing
- Memory management under concurrent load
- Bridging C++ with your web development skills

**Core Features**:
- Serve static files (HTML, CSS, JS, images) from a directory
- Basic routing (GET/POST)
- Simple JSON API endpoints (e.g., connect to your Todo frontend)
- Support for concurrent client connections

**Why this is excellent for full-stack devs**: It directly connects your existing frontend skills with a C++ backend.

**Recommended Path**:
1. Implement with raw sockets first (maximum learning)
2. Then refactor using a lightweight library like `cpp-httplib`

**Even Harder Version**: Add WebSocket support for real-time features.

---

## Learning Path Recommendation

1. **Start with Project 1** → Master basic C++ syntax and flow
2. **Move to Project 2** → Learn classes and the STL
3. **Project 3** → Deep dive into OOP and clean architecture
4. **Project 4** → Combine everything and connect to the web

---

## Tools & Setup Tips

- **Build System**: Use **CMake** from the very first project
- **Compilers**: GCC or Clang (Linux/Mac), MSVC (Windows)
- **IDE Recommendations**:
  - VS Code + C/C++ extension (lightweight)
  - CLion (best overall experience for learning)
- Focus on **Modern C++** (C++17/20): smart pointers, ranges, constexpr, etc.

---

**Happy coding!** These projects will give you a strong foundation in C++ while respecting your full-stack background.

Feel free to modify the projects to match your interests — the best way to learn is to make the apps your own.