// This code was taken from https://www.techiedelight.com/queue-implementation-cpp/
// The code has been modified from the original to provide opportunities to learn


/* Poor Attributes in the Code:
1. Lack of Comments: The code lacks sufficient comments and documentation. 

2. Global Namespace: The code uses the global namespace in both main.cpp and queue.h

3. Magic Numbers: The code uses the number '10' as the default capacity for the queue ('#define SIZE 10'). 
It's better to use named constants or class constants.

4. Limited Error Handling: The code lacks robust error handling.

5. 
*/


#include "testQueue.h"
#include "queue.h"
using namespace std;

// main function
int main()
{
    // call your test functions here!
    testSize();
    testIsEmpty();
    testIsFull();
    testDequeue();
    testEnqueue();
    testPeek();

    return 0;
}
