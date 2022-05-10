#pragma once

#include <iostream>
#include <Windows.h>
#include <vector>
#include "TerSearchForm.h"
#include <string>
using namespace std;

const double eps = 10e-9;

double ternary_max(vector<double>& a, double n);
double ternary_min(vector<double>& a, double n);
