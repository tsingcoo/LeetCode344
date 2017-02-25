//
// Created by 王青龙 on 2017/2/25.
//

#include "solution.h"

std::string Solution::reverseString(std::string s) {
    int i = 0;
    int j = (int) s.size() - 1;
    while (i < j) {
        std::swap(s[i++], s[j--]);
    }
    return s;
}
