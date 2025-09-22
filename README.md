# Case Study 1: Sorting Algorithms for Product Listings

## Course Information
- **Course**: Data Structures & Algorithms (DSA)  
- **Topic**: Choosing the Right Sorting Algorithm for Large-Scale Data Processing in E-Commerce  
- **Student**: Sanskar Manoj Tiwari  
- **Roll No.**: 22379  
- **Date**: 21/09/2025  

---

## Problem Statement
An e-commerce platform needs to sort large volumes of product listings based on different criteria such as **price, ratings, and popularity**. The challenge is to choose the most efficient sorting algorithm that ensures **scalability, stability, and performance** for millions of entries.

---

## Implemented Algorithms
- **Bubble Sort** → Simple but inefficient (`O(n²)`), only for very small datasets.  
- **Selection Sort** → Consistent `O(n²)`, minimizes swaps.  
- **Insertion Sort** → Efficient for small or nearly sorted data.  
- **Merge Sort** → Stable, guaranteed `O(n log n)`, requires extra memory.  
- **Quick Sort** → Fast on average (`O(n log n)`), in-place, pivot-dependent.  

**Note:** In the implemented program, **modern C++ STL algorithms** are used for reliability and efficiency.

---

## Chosen Algorithms in Code
- **`stable_sort`** → Used for **small datasets (≤20)** or when stability is required.  
- **`sort`** → Used for **large datasets (>20)** when speed is prioritized.  
- **`find`** → Performs linear search on unsorted arrays (O(n)).  
- **`lower_bound`** → Performs binary search on sorted arrays (O(log n)).  
- **`vector<int>`** → Dynamic array for flexible storage of product prices.  

---

## Decision Logic
1. **Check dataset size**:  
   - Small (≤20) → `stable_sort`  
   - Large (>20) → Check stability requirement:  
     - Stability required → `stable_sort`  
     - Stability not required → `sort`  

2. **Display sorted product prices.**  

3. **Search for a product price**:  
   - Linear search (`find`) for unsorted data.  
   - Binary search (`lower_bound`) for sorted data.  

---

## How to Run the Code

### 1. Compile
```bash
g++ main.cpp -o sort
