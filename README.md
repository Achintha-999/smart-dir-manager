# 🧠 Smart Directory Manager

[![C++ Version](https://img.shields.io/badge/C++-17%2F20-blue.svg)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
[![CMake](https://img.shields.io/badge/Build-CMake-magenta.svg)](https://cmake.org/)

A modern C++ utility that automatically organizes cluttered directories by categorizing files into intuitive folders.



## ✨ Features

- 📂 **Automatic categorization** of files by extension
- 🖼️ Supports common file types (Images, Documents, Archives, etc.)
- ⚡ **Fast processing** using C++17 filesystem
- 📝 **Configurable categories** through simple code modification
- 🖥️ Cross-platform (Windows/Linux/macOS)

## 🛠️ How It Works

The program:
1. Scans the target directory for files
2. Creates category folders (if they don't exist)
3. Moves files to their appropriate folders based on extensions:

| Category    | Extensions                      |
|-------------|---------------------------------|
| Images      | .jpg, .png, .webp               |
| Documents   | .pdf, .docx, .txt               |
| Archives    | .zip, .rar, .7z                 |
| Audio       | .mp3, .wav                      |
| Videos      | .mp4, .mov                      |

## 🚀 Getting Started

### Prerequisites
- CMake 3.15+
- C++17 compatible compiler (GCC 9+, Clang 10+, MSVC 2019+)

### Installation
```bash
# Clone the repository
git clone https://github.com/Achintha-999/smart-dir-manager.git
cd smart-dir-manager
``` 

# Build with CMake
```
mkdir build && cd build
cmake ..
cmake --build .
```

### Usage

```
# Run the executable
./file_organizer

# When prompted, enter the directory path to organize:
Enter directory path to organize: /path/to/your/cluttered/folder
```

### 📂 Project Structure

smart-dir-manager/
├── include/       # Header files
├── src/           # Source files
│   └── main.cpp   # Main program logic
├── CMakeLists.txt # Build configuration
└── README.md      # This documentation

### 🤝 Contributing
Pull requests are welcome! For major changes, please open an issue first.

### 📜 License
This project is licensed under the MIT License - see the LICENSE file for details


