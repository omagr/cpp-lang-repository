/***
 * @Vector 
 * *Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. 
 * *Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. 
 * *In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. 
 * *Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.
 * *std::vector in C++ is the class template that contains the vector container and its member functions. It is defined inside the <vector> header file. The member functions of std::vector class provide various functionalities to vector containers.
 * #Iterators (are like identifires that give us ptr)
 * -begin() – Returns an iterator pointing to the first element in the vector
 * -end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
 * -rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
 * -rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
 * -cbegin() – Returns a constant iterator pointing to the first element in the vector.
 * -cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
 * -crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
 * -crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
 * #Modifires
 * -assign() – It assigns new value to the vector elements by replacing old ones
 * -push_back() – It push the elements into a vector from the back
 * -pop_back() – It is used to pop or remove elements from a vector from the back.
 * -insert() – It inserts new elements before the element at the specified position
 * -erase() – It is used to remove elements from a container from the specified position or range.
 * -swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
 * -clear() – It is used to remove all the elements of the vector container
 * -emplace() – It extends the container by inserting new element at position
 * -emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector, //! fater than push_back()
 * #Access
 * -reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
 * -at(g) – Returns a reference to the element at position ‘g’ in the vector
 * -front() – Returns a reference to the first element in the vector
 * -back() – Returns a reference to the last element in the vector
 * -data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
*/


//#(1) declaration of vector
vector <int> a;
vector <pair<int,int>> b;

//#(2) define a vector w size and pre values
vector <int> c(5, 100); // [100,100,100,100,100]
vector <int> d(5);      // [0 ,0 ,0 ,0 ,0 ] // maybe garbage also
vector <int> e(c);      // [100,100,100,100,100]

//#(3) Modifing a vector
a.push_back(10); 
b.push_back({10, 20});

a.emplace_back(20);
d.emplace_back(20);
b.emplace_back(10, 20); //! no need for {} in emplace it automatically gonna assume it's as pair

for (int i = 0; i < 10; i++) {
    a.push_back(i); //inserting elements in the vector
}; 

//#(3) Accessing a vector
cout << "\nThe front element of the b: " << b[0].first;
cout << "\nThe front element of the a: " << a.front();
cout << "\nThe last  element of the a: " << a.back();
cout << "\nthe elements in the a: ";
for (auto it = a.begin(); it != a.end(); it++) { cout << * it << " "; };
    
//#(4) Accessing a vector w iterators 
vector<int>::iterator xyz = a.begin();
vector<int>::iterator abc = a.end(); //! just after last element
cout << "\na[0]: " << *(xyz);
cout << "\na[1]: " << *(++xyz);
cout << "\na[3]: " << *(xyz+2);
cout << "\nThe memory after last element of the a: " << *(--abc);

//#(5) deletion of a vector
a.erase(a.begin());
cout << "\now elements in the a: "; for (auto it : a) {cout << it << " "; };
a.erase(a.begin() + 2, a.begin() + 4); //! (start, end)
cout << "\nthe elements in the a: "; for (auto it : a) {cout << it << " "; };

//#(6) insertion of a vector
a.insert(a.begin, 1000);
a.insert(a.begin+2, 2, 2000);
a.insert(2, 3000);
cout << "\nthe elements in the a: "; for (auto it : a) {cout << it << " "; };
cout << "\nsize: " << a.size();
cout << "\npop_back: " << a.pop_back();
cout << "\nis empty: " << a.empty();
// a.swap(b);
cout << "\nthe elements in the a: "; for (auto it : a) {cout << it << " "; };
a.clear();
    