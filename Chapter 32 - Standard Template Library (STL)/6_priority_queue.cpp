//* A C++ priority queue is a type of container adapter, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue, and elements are in non-increasing or non-decreasing order (hence we can see that each element of the queue has a priority {fixed order}).
//# STL Priority Queue is the implementation of Heap Data Structure.   
//# its not a linear ds behind it maintained a tree ds. 

//# Max Heap
priority_queue<int> pq;
pq.emplace(12); // {12}
pq.push(9); // {9, 12}
pq.push(5); // {12, 9, 5}
pq.push(8); // {12, 9, 8, 5}
cout << pq.top(); // 12
pq.pop();         // {9, 8, 5}
cout << "\npq: ";
while (!pq.empty()) {
    cout << pq.top() << ' ';
    pq.pop();
}

//# Min Heap
priority_queue<int, vector<int>, greater<int>> mq;
mq.emplace(12); // {12}
mq.push(9); // {9, 12}
mq.push(5); // {12, 9, 5}
mq.push(8); // {12, 9, 8, 5}
cout << "\n" << mq.top(); // 12
mq.pop();         // {9, 8, 5}
cout << "\nq: ";
while (!mq.empty()) {
    cout << mq.top() << ' ';
    mq.pop();
}

//* push, pop: O(logn)
//* top: O(1)