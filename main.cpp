#include <iostream>
#include <string>

#include "Employee.hpp"

using namespace std;

int main() {
    Employee worker{"John", "Doe", 42};
    cout << worker.getFullName() << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
