#include <iostream> 
/* Preprocessor Directive, the line above will be processed before compliation. 
   The io part of iostream stands for input/output and is part of the C++ standard library. It allows us to deal with basic input and output.
*/

int main() // The name of a function is called an 'identifier'
{
   std::cout << "Hello world!"; 
   
   /* Statements must end with a ;
      cout stands for "character output".
      << is known as the insertion operator. It sends bytes to an output stream object. 
   */

   int x {5}; // This is known as direct-list-intialization and is the preferred form.

   std::cout << "Hello" << " world!"; // The insertion operator can be used to concatenate multiple pieces of output.

   std::cout << "x is equal to: " << x;

   /* Unlike in python, separate output statements don't result in separate lines of output on the console.
      Therefore we need to output a newline. One way to do this is using std::endl
   */

   std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
   std::cout << "My name is Prince." << std::endl;

   /* One downside to std::endl is that it causes the buffer to flush which is slow. (Remember that std::cout is buffered like a toilet)
      It's more efficient to let C++ to self-flush and hence we can use '\n' to create a new line.
   */

   std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
   
   return 0; // Returning 0 indicates that the function worked properly 
}
