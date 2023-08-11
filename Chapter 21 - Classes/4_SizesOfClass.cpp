#include <iostream>

/*
 * member fucntions and static variables do not contribute in class size
 * compiler follows the greedy approch to gen padding
 */
 
/*
 * Dog
 * ----------------------- 4 byte (int) -------------------------------- *
 * ---- 1 byte (char) ---- | ---------------- padding (3 byte) --------- *
 */
class Dog {
    int leg_count {};   // 4
    char arm_count;     // 1
    static int ign;     //# ignore
    public: 
        void prin_info() { }    //# ignore
};

/*
 * Cat
 * ----------------------- 4 byte (int) -------------------------------- *
 * ---- 1 byte (char) ---- | ---------------- padding (3 byte) --------- *
 * ----------------------- 4 byte (int) -------------------------------- *
 * ---- 1 byte (char) ---- | ---------------- padding (3 byte) --------- *
 */
class Cat {
    int a {};   // 4
    char b;     // 1
    int c {};   // 4
    char d;     // 1 
};

/*
 * Rabbit
 * ----------------------- 8 byte (pointer) ---------------------------------- *
 * ---- 1 byte (char) ---- | -------------------- padding (7 byte) ----------- *
 * ---- 4 byte (int) ----- | --- 1 byte (char) ---- | --- padding (3 byte) --- *
 */
class Rabbit {
    int *p_age; // 8
    char b;     // 1
    int a {};   // 4
    char d;     // 1 
};

/*
 * Lion
 * ----------------------- 4 byte (int) ----------------------------------------- *
 * ---- 1 byte (char) ---- | ---------------- padding (3 byte) ------------------ *
 * ----------------------- 4 byte (int) ----------------------------------------- *
 * ---- 1 byte (char) ---- | ---------------- padding (3 byte) ------------------ *
 * ----------------------- 4 byte (int) ----------------------------------------- *
 * ---- 1 byte (char) ---- | ---- 1 byte (char) ---- | padding (2 byte) --------- *
 * ----------------------- 4 byte (int) ----------------------------------------- *
 */
class Lion : Cat {
    int e {};   // 4
    char f;     // 1
    char g;     // 1 
    int h {};   // 4
};

/*
 * Empty
 * ----------------------- 1 byte -------------------------------- *
 * for trackinig its presence
 */
class Empty { };

int main()
{
    std::cout << "sizeof(Dog) : " << sizeof(Dog) << std::endl;
    std::cout << "sizeof(Cat) : " << sizeof(Cat) << std::endl;
    std::cout << "sizeof(Rabbit) : " << sizeof(Rabbit) << std::endl;
    std::cout << "sizeof(Lion) : " << sizeof(Lion) << std::endl;
    std::cout << "sizeof(Empty) : " << sizeof(Empty) << std::endl;  
    return 0;
}