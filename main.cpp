#include <iostream>

using namespace std;

class NumberPrint
{
  private:
         initializer_list <int> numbers;

  public:
         NumberPrint(initializer_list <int> nums) : numbers(nums) {}  

  void print()
  {
    for(auto n : numbers)
    {
      cout << n << " " ;
    }
  }


};



int main()
{

    NumberPrint printer {1, 2, 3, 4, 5};
    printer.print(); 

    return 0;
}