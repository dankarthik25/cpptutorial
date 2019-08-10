/*
    1. Uninitialized pointers
    2. Dangling Pointer :
        a)Pointer that is pointing to released memory
          eg: two pointer point to the same data,one ptr release data with delete.
            other pointer still accesses the released data.
        b)pointing to memory that is invalid
    3. Not check if "new" failed
        if "new" fails an exception is thrown
        We can use exception handling to catch exception.
        Dereferencing a null pointer will cause your programm to crash.
    4. Leaking Memory
        a) Forgetting to release allocated memory
        b) loss pointer to storage allocated on heap

 */