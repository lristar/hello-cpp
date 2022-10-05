// g++ throw_error.cpp -I D:/environment/vcpkg/vcpkg/installed/x64-windows/include
// #define FMT_HEADER_ONLY
// #include <fmt/core.h>
#include <iostream>
#include <exception>

using namespace std;
double division(int a, int b)
{
  if (b == 0)
  {
    throw "Division by zero condition!";
  }
  return (a / b);
}

struct MyException : public exception
{
  // 重载了what
  const char *what() const throw()
  {
    return "C++ Exception";
  }
};

struct MyOtherError : public exception
{
  const char *what() const throw()
  {
    return "C++ other Exception";
  }
};


int main()
{
  try
  {
    throw MyException();
  }
  catch (MyException &e)
  {
    std::cout << "MyException caught" << std::endl;
    std::cout << e.what() << std::endl;
  }
  catch (MyOtherError &e)
  {
    std::cout << "MyOtherError caught" << std::endl;
    std::cout << e.what() << std::endl;
  }
  catch (std::exception &e)
  {
    //其他的错误
    std::cout << "other caught" << std::endl;
    std::cout << e.what() << std::endl;
  }
}