# Case Study 1: Sorting Algorithms for Product Listings

## 📌 Course Information
- **Course**: Data Structures & Algorithms (DSA)  
- **Topic**: Choosing the Right Sorting Algorithm for Large-Scale Data Processing in E-Commerce  
- **Student**: Sanskar Manoj Tiwari  
- **Roll No.**: 22379  
- **Date**: 21/09/2025  

---

## 📖 Problem Statement
An e-commerce platform needs to sort large volumes of product listings based on different criteria such as **price, ratings, and popularity**. The challenge is to choose the most efficient sorting algorithm that ensures scalability, stability, and performance for millions of entries.

---

## ⚙️ Implemented Algorithms
- **Bubble Sort** → Simple but inefficient (`O(n²)`), only for very small datasets.  
- **Selection Sort** → Consistent `O(n²)`, minimizes swaps.  
- **Insertion Sort** → Efficient for small or nearly sorted data.  
- **Merge Sort** → Stable, guaranteed `O(n log n)`, requires extra memory.  
- **Quick Sort** → Very fast on average (`O(n log n)`), in-place, but pivot-dependent.  

---

## ✅ Chosen Algorithm
**Merge Sort** was selected for large-scale e-commerce sorting because:  
- It provides **predictable performance** (`O(n log n)`), even with sorted or reverse-sorted data.  
- It is a **stable sort**, preserving relative order (important for multi-level sorting like price + rating).  
- Slight trade-off in memory usage is justified by its **reliability and user experience**.  

📌 Real-world example: During **Flipkart’s Big Billion Day**, Merge Sort ensures responsiveness while sorting millions of product listings by price.  

---

## 🚀 How to Run the Code
### 1. Compile
```bash
g++ main.cpp -o sort
