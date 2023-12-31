//
// Created by ttlto on 2023/12/31.
//

#include "leecode_温度转换.h"
#include<iostream>
#include<vector>
using namespace std;
class Solution {

public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius  + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        vector<double> v;
        v.push_back(kelvin);
        v.push_back(fahrenheit);
        return v;
    }
};