
| Stage                    | Max  | Min |
|--------------------------|------|-----|
| Left ← `[20, 5, 15]`     | 20   | 5   |
| Right ← `[30,10,50,2]`   | 50   | 2   |
| **Final**                | **50** | **2** |

</details>

---

## ⚙️ C++ Implementation

```cpp
#include <iostream>
using namespace std;

struct Pair {
    int max;
    int min;
};

Pair findMaxMin(int arr[], int low, int high) {
    // ▶️ Base case: one element
    if (low == high)
        return { arr[low], arr[low] };

    // ▶️ Base case: two elements
    if (high == low + 1) {
        if (arr[low] > arr[high])
            return { arr[low], arr[high] };
        else
            return { arr[high], arr[low] };
    }

    // ▶️ Recursive case
    int mid = (low + high) / 2;
    Pair left  = findMaxMin(arr, low, mid);
    Pair right = findMaxMin(arr, mid + 1, high);

    int finalMax = max(left.max, right.max);
    int finalMin = min(left.min, right.min);
    return { finalMax, finalMin };
}

int main() {
    int arr[] = {20, 5, 15, 30, 10, 50, 2};
    int n     = sizeof(arr) / sizeof(arr[0]);

    Pair result = findMaxMin(arr, 0, n - 1);
    cout << "🔥 Maximum: " << result.max << "\n";
    cout << "❄️ Minimum: " << result.min << "\n";
    return 0;
}
