
// # sort(begin (1st iterator), end (2nd iterator))
// {2,4,5,1,3}
//* ascending order,
sort(vec.begin(), vec.end()); // {1,2,3,4,5}
//* descending order, greater<int>, inbuilt compritor
sort(vec.begin(), vec.end()), greater<int>; // {5,4,3,2,1}
//* my own order, comp self written compritor
pair<int,int> a[] = {{2,1},{2,4},{2,2},{6,2}};
/**
 * condition
 * - sort it acc to sec element
 * - if sec ele is same, then sort acc to first ele but in descending
*/
bool comp (pair<int, int> p1, pair<int, int> p2) {
    /**
     * {2,1} {2,4} return true
    */
    if (p1.second < p2.second) return true;
    /**
     * {2,4} {2,1} return false
     * #now the compritor automatically swap it interlly
    */
    if (p1.second > p2.second) return false;
    /**
     * {3,4} {4,4} return false
     * #now the compritor automatically swap it interlly
    */
    if (p1.first > p2.first) return true;
    return false
}
sort(vec.begin(), vec.end()), comp; // {{2,1},{6,2},{2,2},{2,4}}

// # othrs
num = 6 // 0110
long long num = 77777777777777;
string s = "123";

__builtin_popcount(num) -> 2
__builtin_popcountll(num) -> 23
do {
    cout << s;
    // 123 132 213 231 312 321
} while (next_permutation(s.begin(), s.end()));
string s = "231";
do {
    cout << s;
    // 231 321 312 
    //! imp it has to be sorted first
    sort(s.begin,s.end())
} while (next_permutation(s.begin(), s.end()));

arr [ 0, 10 , 200, 100 ];
*max_element(a, a+n) -> 200
*min_element(a, a+n) -> 0