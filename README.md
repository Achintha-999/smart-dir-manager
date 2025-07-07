# 🧠 Smart Directory Manager

[![C++ Version](https://img.shields.io/badge/C++-17%2F20-blue.svg)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
[![CMake](https://img.shields.io/badge/Build-CMake-magenta.svg)](https://cmake.org/)

A 🚀 **modern C++ utility** to declutter your directories by automatically sorting files into intuitive folders.

---

## ✨ Features

- 📂 **Automatic Categorization** – Sorts files into folders by type
- 🖼️ Supports common file types (Images, Documents, Archives, Audio, Videos)
- ⚡ **Blazing Fast** – Powered by C++17 filesystem APIs
- 🛠️ **Customizable Categories** – Modify extensions easily
- 🖥️ **Cross-platform** – Works on Windows, Linux, and macOS

---

## 🔥 How It Works

1. 🔍 Scans the target directory
2. 📁 Creates category folders (if missing)
3. 🚚 Moves files based on their extensions

| 📁 Category | 📄 Extensions                 |
|-------------|-------------------------------|
| **Images**  | `.jpg`, `.png`, `.webp`        |
| **Documents** | `.pdf`, `.docx`, `.txt`      |
| **Archives** | `.zip`, `.rar`, `.7z`         |
| **Audio**   | `.mp3`, `.wav`                 |
| **Videos**  | `.mp4`, `.mov`                 |

---

## 🚀 Getting Started

### ✅ Prerequisites

- 📦 **CMake** >= 3.15
- 🖥️ **C++17 Compatible Compiler**
  - GCC 9+
  - Clang 10+
  - MSVC 2019+

### 📥 Installation

```bash
# Clone the repository
git clone https://github.com/Achintha-999/smart-dir-manager.git
cd smart-dir-manager

# Build with CMake
mkdir build && cd build
cmake ..
cmake --build .
```

### ▶️ Usage

```bash
# Run the executable
./file_organizer

# When prompted, enter the directory path to organize:
Enter directory path to organize: /path/to/your/cluttered/folder
```

---

## 📂 Project Structure

```
smart-dir-manager/
├── include/        # Header files
├── src/            # Source files
│   └── main.cpp    # Core logic
├── CMakeLists.txt  # Build configuration
└── README.md       # Documentation
```

---

## 🤝 Contributing

💡 Pull requests are welcome! For major changes, please open an issue first to discuss what you would like to change.

---

## 📜 License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT) - see the LICENSE file for details.

---

## 🌟 Star This Project

If you find it useful, don’t forget to ⭐ star the repository!

