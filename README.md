# std::vector<bool> iterator issues
This example demonstrates unexpected behavior related to the `std::vector<bool>` specialization in C++.  The specialization optimizes memory usage, but it does so by sacrificing the typical behavior of iterators and algorithms.  This can lead to subtle and hard-to-debug problems.

**Problem:**
`std::vector<bool>` doesn't store booleans as individual elements in contiguous memory.  Instead, it uses bit manipulation to pack multiple booleans into a single word.  This affects how iterators work and how algorithms interact with the vector.

**Solution:**
For better interoperability with standard algorithms and to avoid the unexpected behavior of the specialization, avoid using `std::vector<bool>` and instead use `std::vector<char>` or `std::vector<int>`, where each element represents a boolean value (0 or 1).