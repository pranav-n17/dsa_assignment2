DSA Assignment Question

Implement Merge Sort and Quick Sort for the following input:
324, 125, 456, 218, 102, 389, 275, 147

(a) Implement Merge Sort and show the array after each pass/merge level.
(b) Implement Quick Sort and show the partition results.
(c) Compare Merge Sort and Quick Sort based on passes/partitions, comparisons/operations, time complexity, and additional space. State which is more appropriate for large fixed-length keys.

Submission:
Upload the source code, output, and README file to a GitHub repository and submit the repository link in Google Classroom.

## Input
`324, 125, 456, 218, 102, 389, 275, 147`

## Final sorted sequence
`102, 125, 147, 218, 275, 324, 389, 456`

## Files
- `merge_sort.c` — bottom-up Merge Sort implementation.
- `quick_sort.c` — Quick Sort using the last element as pivot.
- `merge_sort_output.txt` — Merge Sort execution output.
- `quick_sort_output.txt` — Quick Sort execution output.

## Complexity
| Algorithm | Best | Average | Worst | Extra Space |
|---|---|---|---|---|
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) average recursion stack |

For this small input, both produce the same sorted sequence. Merge Sort provides predictable O(n log n) performance, while Quick Sort can be very fast in practice but depends on pivot selection.
