//
// Created by Admin on 01.10.2023.
//

#include "Solution.h"

#include <map>

int RomanToInt::Solution::romanToInt(const std::string& str) {
    std::map<char, int> numsTable = {
        {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000},
    };

    int output(0);

    for(size_t i = 0; i < str.length(); ++i) {
        if(numsTable[str[i]] < numsTable[str[i + 1]]) {
            output += numsTable[str[i + 1]] - numsTable[str[i]];
            i++;
        } else {
            output += numsTable[str[i]];
        }
    }

    return output;
}
