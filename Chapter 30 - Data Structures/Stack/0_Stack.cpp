/**
 *@ Stack AS Abstract data type (Stack ADT)
 *# Last-In-First-Out (LIFO)
 *# Definition
 *-     A list with the restrictionthat insertion and deletion can be performed only from one end, called top.
 *-     we define it is only a logical model, so we talk only about opeartions or features.
 *-     it states that the element that is inserted last will come out first.
 *# Opeartions
 *-     1. push (Insertion) [O(1)]: When this operation is performed, an element is inserted into the stack.
 *-     2. pop (deletion) [O(1)]: When this operation is performed, an element is removed from the top of the stack and is returned.
 *-     3. top () [O(1)]: This operation will return the last inserted element that is at the top without removing it.
 *-     4. size () [O(n)]: This operation will return the size of the stack  
 *-     5. isEmpty () [O(1)]: This operation indicates whether the stack is empty or not.
 *# Application
 *-     1. Function calls/ Recrrsion
 *-     2. undo function in any editor
 *-     2. compiler verfities weather parentheses is balanced or not
*/