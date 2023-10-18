//* Multisets are a type of associative containers similar to the set, with the exception that multiple elements can have the same values.
/*
-begin() – Returns an iterator to the first element in the multiset –>  O(1)
-end() – Returns an iterator to the theoretical element that follows the last element in the multiset –> O(1)
-size() – Returns the number of elements in the multiset –> O(1)
-max_size() – Returns the maximum number of elements that the multiset can hold –> O(1)
-empty() – Returns whether the multiset is empty –> O(1)
-insert (x) – Inserts the element x in the multiset –> O(log n)
-clear () – Removes all the elements from the multiset –> O(n)
-erase(x) – Removes all the occurrences of x –> O(log n)
*/

multiset<int> ms;
ms.insert(20); // {20}
ms.insert(20); // {20,20}
ms.insert(30); // {20,20,30}

// erase element 
ms.erase(20); // {30}

// erase address 
ms.erase(ms.find(20)); // {20,30}

// erase from range 
ms.erase(ms.find(20), ms.find(20)+1); // {30}