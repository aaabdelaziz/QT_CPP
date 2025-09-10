# Qt C++ Learning Projects

This repository contains a collection of Qt C++ projects designed for learning, reference, and teaching purposes. Each project demonstrates specific Qt concepts and C++ implementation patterns.

## 🎯 Purpose

- **Learning**: Hands-on implementation of Qt framework concepts
- **Reference**: Quick examples for common Qt patterns and solutions
- **Teaching**: Educational materials for Qt C++ development

## 📋 Prerequisites

- **Qt Framework**: Version 5.15+ or Qt 6.x
- **C++ Compiler**: GCC, Clang, or MSVC with C++17 support
- **CMake**: 3.16+ (recommended) or qmake
- **IDE**: Qt Creator, Visual Studio, or any C++ IDE

## 🏗️ Project Structure

```
qt-cpp-lessons/
├── 01-hello-world/          # Basic Qt application setup
├── 02-widgets-basics/       # Fundamental widgets (buttons, labels, layouts)
├── 03-signals-slots/        # Signal-slot mechanism
├── 04-layouts-management/   # Layout managers and responsive design
├── 05-custom-widgets/       # Creating custom widget components
├── 06-model-view/          # Model-View architecture
├── 07-file-io/             # File operations and data persistence
├── 08-networking/          # Network programming with Qt
├── 09-threading/           # Multi-threading and concurrent programming
├── 10-advanced-features/   # Advanced Qt concepts and patterns
└── resources/              # Shared resources, images, and documentation
```

## 🚀 Getting Started

### Manual Building a Project

1. Navigate to the desired lesson directory:
   ```bash
   cd 01-hello-world
   ```

2. **Using CMake:**
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ```

3. **Using qmake:**
   ```bash
   qmake
   make
   ```

### Running Examples

Each project includes a compiled executable and detailed comments explaining the implementation.

## 📚 Topics Covered

- **Core Qt Concepts**: Widgets, layouts, event handling
- **Object Model**: Meta-object system, properties, signals & slots
- **GUI Development**: Custom widgets, styling, and user interaction
- **Data Management**: Models, views, delegates, and data binding
- **System Integration**: File I/O, network operations, system resources
- **Advanced Topics**: Threading, plugins, internationalization

## 🔧 Development Notes

- Each section follows the Udemy course lecture sequence
- Code examples progress from basic concepts like "what is a variable" to Qt 6 core classes
- Projects use Qt Creator as the primary development environment
- Examples cover foundational concepts through complex topics like templates, classes, and error handling
- All code includes extensive comments explaining both C++ and Qt concepts

## 📖 Learning Path

1. **Section 1-2**: Start with course introduction and C++ overview
2. **Section 3**: Build your first "Hello World" Qt application  
3. **Section 4-6**: Master C++ fundamentals (variables, I/O, flow control)
4. **Section 7-8**: Learn functions and object-oriented programming
5. **Section 9-10**: Understand scope and memory management
6. **Section 11**: Explore Qt's powerful signals and slots system
7. **Section 12-14**: Advanced C++ concepts (casting, errors, templates)
8. **Section 15**: Work with essential Qt 6 core classes
9. **Bonus**: Additional resources and next steps

## 📝 Additional Resources

- **Course GitHub**: [voidrealms/qt6-core-beginners](https://github.com/voidrealms/qt6-core-beginners)
- **Qt Documentation**: [doc.qt.io](https://doc.qt.io/)
- **Course Community**: Udemy course Q&A section for discussions

## 📄 License

This educational project is open source. Feel free to use, modify, and distribute for learning purposes.

---

**Happy Learning!** 🚀

*These projects are designed to provide practical, hands-on experience with Qt C++ development. Each example builds upon previous concepts while introducing new features and best practices.*