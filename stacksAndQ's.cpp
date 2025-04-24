/*
 * Filename: stacksAndQ's.cpp 
 * Name: Huthsady Legend Boun
 * Professor: Grace A. Comp
 * Class: CISP-1020-S01
 * Date: 23 April 2025
 * Brief Description: Short program to demonstrate proficiency with stacks and maybe queues.
 *
*/


#include <iostream>
#include <stack>
#include <string>

template <class MyType>

class Stack
{
  public:

    std::stack<MyType> bando;

    Stack(MyType x)       // Constructor that makes and declares the top of the stack
    {
      bando.push(x);
      std::cout << "Leading the race is " << bando.top()
        << "                                 (DEVMSG: constructor)\n\n";
    }

    void stackAppend(MyType x)
    {
      bando.push(x);
      std::cout << x << " has overtaken " << bando.top()
          << "                               (DEVMSG:obj.push())\n\n";
    }
  
    void blueShell()
    {
      std::cout << "Oh there is a Blueshell out to wipe " << bando.top()
        << "\nQuite tragic for them..."
          "                                  (DEVMSG:obj.pop())\n\n";
      bando.pop();
    }
    
    void firstPlace()
    {
        std::cout << "In first place now: " << bando.top()
            << "                                (DEVMSG: obj.top())\n\n";
    }

};


int main()
{
  Stack<std::string> obj("Barry Manilow");
  obj.stackAppend("Lex Luger");
  obj.blueShell();
  obj.firstPlace();


  std::cout << "Here is a play-by-play, but with the livery numbers instead"
    << " for those running bets...\n\n";
  Stack<int> livery(32);
  livery.stackAppend(102);
  livery.blueShell();
  livery.firstPlace();



  return 0;
}
