//* Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front. Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.

queue<int> qu;
qu.push(1);         //{1}
qu.push(2);         //{1,2}
qu.emplace(4);      //{1,2,4}
qu.back();          //4
qu.front();         //1
qu.pop();           //{2,4}
qu.size();          
qu.swap();          
qu.empty();          