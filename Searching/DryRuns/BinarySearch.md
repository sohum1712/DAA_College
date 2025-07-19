# 🔍 Binary Search (DAA Practicals)

Binary Search is an efficient searching algorithm that works only on **sorted arrays**. It uses the **divide-and-conquer** approach to eliminate half of the search space at every step.

---

## 📦 Algorithm Steps

1. Start with two pointers: `low` at the start, `high` at the end.
2. Compute the middle: `mid = (low + high) / 2`
3. If `arr[mid] == key`: ✅ Found!
4. If `arr[mid] < key`: search in the right half → `low = mid + 1`
5. If `arr[mid] > key`: search in the left half → `high = mid - 1`
6. Repeat until found or `low > high`.

---

## 🧠 Dry Run Example

Array: `[5, 10, 15, 20, 25, 30]`  
Key: `20`

| Step | low | mid | high | arr[mid] | Action                    |
|------|-----|-----|------|----------|---------------------------|
| 1️⃣   | 0   | 2   | 5    | 15       | key > 15 → move right     |
| 2️⃣   | 3   | 4   | 5    | 25       | key < 25 → move left      |
| 3️⃣   | 3   | 3   | 3    | 20       | ✅ Found at index 3        |

---

## ⚙️ C++ Code

```cpp
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
🧪 Sample Input / Output
txt
Copy code
Input:
Array = [5, 10, 15, 20, 25, 30]
Key = 20

Output:
Element found at index: 3
📈 Time and Space Complexity
| Case       | Time Complexity |
| ---------- | --------------- |
| Best Case  | O(1)            |
| Average    | O(log n)        |
| Worst Case | O(log n)        |
🧠 Space Complexity: O(1)

✍️ Created by Soham Vaghela – Parul University
📁 Repo: DAA_College


---

### ✅ What to Do Next

1. Save this file as:  
   `E:\Github Code\DAA_College\Searching\DryRuns\BinarySearch.md`

2. Then run the following commands to push:

```bash
cd "E:\Github Code\DAA_College"
git add .
git commit -m "📝 Added BinarySearch.md with visuals and explanation"
git push origin main

