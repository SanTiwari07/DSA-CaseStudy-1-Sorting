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

**Note:** The program uses **modern C++ STL algorithms** for efficient, safe, and reliable implementation.

---

## STL Features Used in Code

### 1. `vector<int>`  
- **Dynamic Array**: Automatically resizes based on the number of products.  
- **Advantages**: Safe memory management, easy iteration, works with STL algorithms.  
- **Usage**: Stores product prices for sorting and searching.

### 2. `stable_sort`  
- **Algorithm**: Merge Sort-based STL algorithm.  
- **Properties**:  
  - **Stable** → Maintains relative order of equal elements.  
  - **Time Complexity** → O(n log n)  
  - **Memory Usage** → Requires extra memory.  
- **Usage**:  
  - Small datasets (≤20)  
  - When stability is required (e.g., sorting by price while preserving rating order)

### 3. `sort`  
- **Algorithm**: IntroSort (QuickSort + HeapSort + Insertion Sort).  
- **Properties**:  
  - **Fast and in-place** → No extra memory needed.  
  - **Not stable** → Equal elements may change order.  
  - **Time Complexity** → O(n log n) average.  
- **Usage**: Large datasets where **speed is prioritized** and stability is not required.

### 4. `find`  
- **Search Algorithm**: Linear search.  
- **Properties**:  
  - **Time Complexity** → O(n)  
  - Works on unsorted data.  
- **Usage**: Search a product price in unsorted vector.

### 5. `lower_bound`  
- **Search Algorithm**: Binary search on sorted containers.  
- **Properties**:  
  - **Time Complexity** → O(log n)  
  - Returns the **first element ≥ target**  
  - Requires **sorted input**.  
- **Usage**: Efficiently locate a product price in sorted vector.

---

## Chosen Algorithm
**Merge Sort (via `stable_sort`)** was selected for large-scale e-commerce sorting because:  
- Provides **predictable performance** (`O(n log n)`), even for sorted or reverse-sorted data.  
- **Stable sort**, preserving relative order (important for multi-level sorting).  
- Slight trade-off in memory usage is justified by **reliability and user experience**.  

**Real-world Example:** During **Flipkart’s Big Billion Day**, Merge Sort ensures responsiveness while sorting millions of product listings by price.

---

## Decision Logic
1. **Dataset size**:  
   - Small (≤20) → `stable_sort`  
   - Large (>20) → Check stability requirement:  
     - Stability required → `stable_sort`  
     - Stability not required → `sort`  

2. **Display sorted product prices**  

3. **Search for product price**:  
   - Linear search (`find`) for unsorted data  
   - Binary search (`lower_bound`) for sorted data  

---

## How to Run the Code

### Compile
```bash
g++ main.cpp -o sort
