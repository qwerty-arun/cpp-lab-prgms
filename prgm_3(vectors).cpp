#include <iostream>
#include <vector>
#include <list>
int main ()
{
  std::vector < int >original_Vector = { 5, 11, 17,3,7,19,25,8,1,4};
  std::list < int >newList (original_Vector.begin (), original_Vector.end ());
  newList.sort ();
  std::vector < int >filtered_Vector;
for (const int &num:newList)
    {
      if (num < 10)
        {
         filtered_Vector.push_back (num);}
         }
std::cout << "Original Vector: "; for (const int &num:original_Vector)
         {
         std::cout << num << " ";}
         std::cout << std::endl;
std::cout << "Sorted List: "; for (const int &num:newList)
         {
         std::cout << num << " ";}
         std::cout << std::endl;
std::cout << "Filtered Vector (Elements less than 10): "; for (const int &num:filtered_Vector)
         {
         std::cout << num << " ";}
         std::cout << std::endl; return 0;}
