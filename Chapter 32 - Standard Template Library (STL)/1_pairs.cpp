/***
 * @Pair
 * *Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heterogeneous objects as a single unit. 
 * *It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 
 * *One of the key benefits of the STL is that it provides a way to write generic, reusable code that can be applied to different data types. 
 * #components 
 * -The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
 * -Pair can be assigned, copied, and compared. The array of objects allocated in a map or hash_map is of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
 * -To access the elements, we use variable name followed by dot operator followed by the keyword first or second.
*/


// #include <utility>

int main(int argc, char const *argv[])
{
    // defining a pair
    pair<int, char> Pair = {111, 'Z'};
    cout << Pair.first << " " << Pair.second << endl;
    Pair.first = 100;
    Pair.second = 'A';
    cout << Pair.first << " " << Pair.second << endl;

    // defining a nested pair
    pair<int, pair<char, double>> nPair = {111, {'g', 2.0}};
    cout << nPair.first << " " << nPair.second.first << " " << nPair.second.second << endl;

    // defining a array of pair
    pair<char, int> arrPair[] = { {'a',1}, {'b',2}, {'c',3} }; //! its {}, not [] remeber that
    for (auto a: arrPair) {
        cout << a.first << " -> " << a.second << endl;
    }
    return 0;
}
