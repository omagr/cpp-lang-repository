#include <iostream>

//? when we lost access to mempory that is dynamically allocated

int main()
{
    //@ 1st situation
    int *p_number{
        new int{67}}; // Points to some address, let's call that address1
    // Should delete and reset here
    int number{55}; // stack variable
    p_number = &number;
    // Now p_number points to address2 , but address1 is still in use by
    // our program. But our program has lost access to that memory location.
    // Memory has been leaked.

    //@ 2nd situation - Double allocation
    int *p_number1{new int{55}};
    // Use the pointer
    // Should delete and reset here.
    p_number1 = new int{44}; // memory with int{55} leaked.

    //@ 3rd situation - Nested scopes with dynamically allocated memory
    {
        int *p_number2{new int{57}};
        // Use the dynamic memory
        // ...
    }
    //! p_number2 is died but the memory itself is not going to die, we just lost
    //! its access
    // Memory with int{57} leaked.

    // # plis do this
    delete p_number1;
    p_number1 = nullptr;
    return 0;
}

// [
//    - socho isi comapmny jo govt or high intense project pe kaam rhgii nsg raw
//    ya tesla car comap[mny ko service de rhe ek dum top notch bhai fir
//    billions of kui funcding ho
//    - dusri company jo creator economy mne jaise influcer aganecy jpo bhi
//    smabhal rhe ho
//    - tisri cpompany ecom stoir jo india me chle bhai usme bnillions ho
// - bhai aram se kar soch ki teri job ho remopte sofwtare eng ki 1.5l/m ki log
// toh wse hi mr gynhe sbhi bacche bhi
//    - mst bhai tuym dhkao ki cars ghr paisa sbkuch solid proff
// ]