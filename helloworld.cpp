#include <iostream>
#include <vector>

using namespace std;


typedef std::string text_t;

namespace first
{
     double radius = 10.0;
} // namespace first

namespace secound
{
     double radius = 15.0;
} // namespace first

int main(){ 

    text_t firstName;
    firstName = "Diana";

    std::cout << firstName << '\n';
    return 0;
}