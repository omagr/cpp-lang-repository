/**
 *@ Queue AS Abstract data type (Queue ADT)
 *# First-In-First-Out (FIFO)
 *# Definition
 *-     A list with the restrictionthat insertion can be performed only from one end called rear, and deletion can be performed only from another end, called front.
 *-     we define it is only a logical model, so we talk only about opeartions or features.
 *-     it states that the element that is inserted last will come out first.
 *# Opeartions
 *-     1. enQueue (push) (Insertion) [O(1)]: When this operation is performed, an element is inserted into the last of Queue.
 *-     2. deQueue (pop) (deletion) [O(1)]: When this operation is performed, an element is removed from the top of the Queue.
 *-     3. fornt () [O(1)]: This operation will return the  element that is at the front without removing it.
 *-     4. size () [O(n)]: This operation will return the size of the Queue.  
 *-     5. isEmpty () [O(1)]: This operation indicates whether the Queue is empty or not.
 *# Application
 *-     1. process scheduling in os.
 *-     2. simuliting wait.
 *-     2. shared network resources such as printer and server etc.
*/