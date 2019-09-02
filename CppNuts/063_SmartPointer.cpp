/*
 * Draw Back of Raw pointers :
 * 
 * 
 * 
 * Concept of ownership and RAII( Resource Acquisition Is Initialization)
 * 
 * C++ Smart Pointers
 *  1. Unique Pointers  : pointer to heap storage and not shared 
 *  2. Share Pointers   : pointers to a comman heap storgae 
 *  3. Weak Pointers    : avoid problems associated with share pointers
 * 
 * Custom deleters
 * 
 * 
 */ 

/*
 *  Issues in Raw pointers :
 * 
 *      Absolute flexiblility with memory management
 *          Allocation
 *          Deallocation
 *          Lifetime management
 * 
 *      Potentially serious problem
 *          Uninitialized (wild) pointers
 *          Memory Leaks
 *          Dangling Problem 
 *          Not exception safe
 * 
 *      Ownership 
 *          Who is owns of pointer
 *          When should a pointer be deleted ?
 * 
 */

/*
 *   SMART POINTERS
 * 
 *  Objects : C++ Templete class which we can instancialte.
 * 
 *      Only point to heap-allocated memory
 *      Automatically call delete when no longer needed
 *      Adhere to RAII principles 
 * 
 * Syantax:
 * 
 * 
 * Defined by class templetes
 *     Wrapper class(contain and manage, the implementation is complier dependent) raw pointer
 *     Overloaded operators
 *          Dereference (*)
 *          Member selection(->)
 *          Pointer arithmetic no supported (++,--....etc)
 * 
 * Can have custome deleters 
 *  
 * 
 * #include <memory>
 * std::smart_pointer<Some-Class-Name> ptr =  
 * 
 * ptr->method();
 * cout<<(*ptr)<<endl;
 * 
 * // ptr will be destroyed  automatically destroyed when  no longer needed
 */


/*
 *              RAII ()
 *      Common idiom or pattern used in software design based on container object  lifetime
 * 
 *      RAII object are allocated on stack
 *      Resource acquisition 
 *          Open file
 *          Allocate memory
 *          Acquire a lock
 * 
 *      Initialization 
 *          Resource is acquired in constructor
 * 
 *      Resource relinquishing
 *          Happens in the destructor
 *          Deallocate memory
 *          Release the lock
 * 
 */
