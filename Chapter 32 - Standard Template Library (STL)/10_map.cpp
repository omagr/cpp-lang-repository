//* Maps are associative containers that store elements in a mapped fashion. 
//* Each element has a key value and a mapped value. 
//* No two mapped values can have the same key values.
//* stored in sorted order of key.

/*
key     value
000     raj
001     akash
002     modiji
003     akash
004     raj
*/
/*
-begin() – Returns an iterator to the first element in the map.
-end() – Returns an iterator to the theoretical element that follows the last element in the map.
-size() – Returns the number of elements in the map.
-max_size() – Returns the maximum number of elements that the map can hold.
-empty() – Returns whether the map is empty.
-pair insert(keyvalue, mapvalue) – Adds a new element to the map.
-erase(iterator position) – Removes the element at the position pointed by the iterator.
-erase(const g)– Removes the key-value ‘g’ from the map.
-clear() – Removes all the elements from the map
*/

// Create a map of strings to integers
map<string, int> map;
map<string, pair<int,int>> map1;
map<pair<int,int>, int> map2;
 
// Insert some values into the map
map[1] = 1;
map1.emplace({"id", {10,20}});
map2.insert({{10,20}, 100});
map2[{10,20}] = 100;
 
// Get an iterator pointing to the first element in the map
map<string, int>::iterator it = map.begin();
 
// Iterate through the map and print the elements
while (it != map.end())
{
std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
++it;
}

// {
//     {1,2},
//     {2,3},
//     {3,1}
// }

map[1] -> 2
map[22] -> 0
auto it = map.find(3) // 0x123123123
*(it).second -> 1

map.find(21810) -> .end() // after the map

// same 
lower_bound()
upper_bound()
erase()
swap()
size()
empty()
