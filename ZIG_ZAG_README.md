# ZigZag Sort

A recursive sorting algorithm that sorts an array by performing alternating **forward** and **backward** bubble passes, progressively shrinking the problem size with each recursive call.

## How It Works

Each recursive call performs one full **zigzag pass**, then reduces `n` by 1:

```
zigZagSort(a, n)
│
├── zigzagPass(a, n)
│   ├── Forward pass  →  bubbles the largest element to the end
│   └── Backward pass ←  bubbles the smallest element to the front
│
└── zigZagSort(a, n - 1)   // recurse on smaller subproblem
```

| Phase | Direction | Effect |
|-------|-----------|--------|
| **Forward** | Left → Right | Pushes the maximum toward the end |
| **Backward** | Right → Left | Pushes the minimum toward the front |

After each zigzag pass the last element is guaranteed to be in place, so the array size is reduced by one — similar to how Cocktail Shaker Sort improves on Bubble Sort.

## Build & Run

```bash
g++ zig_zag.cpp -o zig_zag
./zig_zag
```

### Example Output

```
1 1 2 4 5 23 23 24 34 41 43 44 52 54 63 75 235 254 345 345 345 353 436 563 566 3463 5465 6356 23123
```

## Complexity

| Metric | Value |
|--------|-------|
| **Time (worst case)** | O(n²) |
| **Time (best case)** | O(n²) — no early exit |
| **Space** | O(n) — recursive call stack |
| **Stable** | Yes |

## File Structure

```
sorting/
├── zig_zag.cpp   # Algorithm implementation + driver
└── README.md
```

## License

Free to use for educational purposes.
