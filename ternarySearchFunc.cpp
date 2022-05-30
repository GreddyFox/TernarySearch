#include "Header.h"




double ternary_max(vector<double>& a, double n) {
	double l = 0;
	double r = n - 1;

	while (r - l > eps) {
		double m1 = l + (r - l) / 3;
		double m2 = r - (r - l) / 3;
		if (a[m1] < a[m2]) {
			l = m1;
		}
		else
		{
			r = m2;
		}
	}
	return a[l + 1];

}


double ternary_min(vector<double>& a, double n) {
	double l = 0;
	double r = n - 1;
	while (r - l > eps) {
		double m1 = l + (r - l) / 3;
		double m2 = r - (r - l) / 3;
		if (a[m1] > a[m2]) {
			l = m1;
		}
		else
		{
			r = m2;
		}
	}
	return a[l + 1];
}
