#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    std::string res;
    res = s.reverseString("Hello, World!");
    std::cout << res << std::endl;
    return 0;
}