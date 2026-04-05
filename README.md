# Robotics C++ Foundations

A modular C++ implementation of core mathematical primitives used in robotics, including 2D vectors, 2×2 matrices, and rigid body transformations.

---

## 🚀 Overview

This project builds the foundational math required for robotics systems such as motion planning, coordinate transformations, and kinematics.

It is designed with clean structure, modularity, and extensibility in mind — similar to real-world robotics software stacks.

---

## 📦 Features

### 🔹 Vector2D

* Basic vector operations (addition, subtraction, scaling)
* Dot product and cross product
* Magnitude and normalization
* Angle between vectors
* Vector projection

---

### 🔹 Matrix2D

* 2×2 matrix representation
* Matrix multiplication
* Matrix-vector multiplication
* Determinant and inverse
* Identity matrix
* Rotation matrix generation

---

### 🔹 Transform2D

* Combines rotation and translation
* Applies rigid body transformations
* Supports transformation composition
* Core abstraction for coordinate frame manipulation

---

## 🧠 Concepts Covered

* Linear Algebra for Robotics
* Coordinate Transformations
* Rotation Matrices
* Rigid Body Motion (SE(2) basics)

---

## 📁 Project Structure

```
robotics-cpp-foundations/
├── include/
│   ├── Vector2D.h
│   ├── Matrix2D.h
│   └── Transform2D.h
├── src/
│   ├── Vector2D.cpp
│   ├── Matrix2D.cpp
│   └── Transform2D.cpp
├── main.cpp
├── CMakeLists.txt
└── README.md
```

---

## ⚙️ Build Instructions

### Prerequisites

* C++17 compatible compiler
* CMake ≥ 3.10

### Build Steps

```bash
git clone <your-repo-url>
cd robotics-cpp-foundations

mkdir build
cd build

cmake ..
make
./robotics_cpp
```

---

## 🧪 Example Output

```
Sum: (4, 6)
Difference: (2, 2)
Scaled: (6, 8)
Dot: 11
Cross: 2
Magnitude v1: 5
Angle: 0.179853
Projection of v1 onto v2: (2.2, 4.4)
Rotated vector: (0, 1)
Final transformed point: (2, 4)
```

---

## 📌 Applications in Robotics

This implementation directly relates to:

* Mobile robot motion modeling
* Coordinate frame transformations (TF systems in ROS)
* Robot arm kinematics
* Sensor data transformations

---

## ⚠️ Notes

* Floating point precision may introduce small numerical errors
* This project focuses on clarity over optimization
* Designed as a learning and foundation-building project

---

## 🔮 Future Improvements

* Extend to 3D (Vector3D, Matrix3D)
* Homogeneous transformations
* Integration with ROS2 (geometry messages)
* Unit testing (GoogleTest)

---

## 👨‍💻 Author

Kowshik Raj
B.Tech AI & ML — Robotics Focus

---

## 📄 License

This project is open-source and available for learning and educational use.
