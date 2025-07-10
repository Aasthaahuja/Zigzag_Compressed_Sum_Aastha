# Zigzag Compressed Sum – Qualification Round (C++ Solution)

This repository contains my solution for the **Qualification Round Coding Task**, where the objective was to traverse a matrix in a diagonal zigzag fashion and compute a compressed path sum using C++ and pointers only.

---

## 🧩 Problem Statement

Given an `N x N` matrix of positive integers:

- Traverse it in a **diagonal zigzag** manner:
  - Start from top-left
  - Move ↗ up-right, then ↙ down-left alternately
- At each cell:
  - **Add** the element if it's **not prime**
  - **Subtract** the element if it's **prime**

---

## ✅ Constraints

- Use **only pointers** for matrix access.
- **No STL or external libraries** allowed.
- Must implement custom **prime-checking** logic.
- Efficient and clean traversal is expected.

---

## 🧪 Example

**Input Matrix:**
1 2 3
4 5 6
7 8 9

**Zigzag Path:** `1 → 2 → 4 → 5 → 3 → 6 → 8 → 7 → 9  
**Primes in Path:** `2, 3, 5, 7  
**Final Sum:** `1 - 2 + 4 - 5 - 3 + 6 + 8 - 7 + 9 = 11

---

## 📂 Repository Structure

Zigzag_Compressed_Sum_Aastha/
├── zigzag_compressed_sum.cpp # Main solution file
├── Aastha_QualificationRound_Submission.docx # Submission doc
├── code_screenshot.png # Full code screenshot
|__ output_screenshot.png # Terminal output screenshot

---

## 🔧 Tech Stack

- **Language:** C++
- **Editor:** Visual Studio Code
- **Input:** Dynamically entered via terminal

---

## 🙋‍♀️ Author

**Aastha Ahuja**  
Feel free to reach out for collaboration or queries!

---

## 🔗 Submission

This repository serves as the public submission for the Qualification Round.  
All files are included as per instructions.
