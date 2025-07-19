
---

## 🧠 Dry Run Table

| Iteration (i) | arr[i] | Comparison       | Result             |
|----------------|--------|------------------|---------------------|
| 0              | 10     | 10 == 30 ❌       | Continue            |
| 1              | 20     | 20 == 30 ❌       | Continue            |
| 2              | 30     | 30 == 30 ✅       | 🔚 Return `2`       |
| -              | -      | -                | Loop Ends           |

✅ **Output:** Element found at index `2`

---

## 📈 Time and Space Complexity

| Case       | Time Complexity |
|------------|------------------|
| Best Case  | O(1) *(first element)* |
| Average    | O(n) |
| Worst Case | O(n) *(last or not present)* |

**Space Complexity:** O(1) – No extra space used

---

## 🖼️ Visual Explanation (Image)

> Source: [GeeksforGeeks](https://www.geeksforgeeks.org/linear-search/)  
![Linear Search Diagram](https://media.geeksforgeeks.org/wp-content/uploads/20230313143305/Linear-Search.png)

---

## 💡 Real-World Analogy

Imagine looking for a book in a stack without any order.  
You pick up one by one from the top until you find the book you need.  
That's **Linear Search** in real life!

---

## ✅ Summary

- Linear search is easy to implement and works on **unsorted arrays**.
- Not the most efficient for large datasets.
- Perfect for small or unordered collections.

---

Made with ❤️ by **Soham Vaghela**  
🎓 BTech CSE | Parul University | `#DAA` `#DryRun` `#C++`
