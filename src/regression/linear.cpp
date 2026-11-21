// include the header declarations
#include "linear.hpp"

// Linear regression in two points

void LinearRegression::fit(double x1, double y1, double x2, double y2) {

    // check if the two points are same. it the points are same then slope is just zero
    if(x2 == x1) {
        slope = 0.0;
        intercept = y1;
        return;
    }

    // the ppoints are not same, so calculate slope and intercept

    slope = (y2 - y1) / (x2 - x1); // basic slope formula
    intercept = y1 - slope * x1;


}

//predict
double LinearRegression::predict(double x) const {
    return intercept + slope * x;
}
