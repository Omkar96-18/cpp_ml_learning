#include <emscripten/bind.h>

class LinearRegression{
    public:
    double slope = 0.0;
    double intercept = 0.0;

    void fit(double x1, double y1, double x2, double y2) {
        if(x1 == x2) {
            slope = 0.0;
            intercept = y1;
            return;
        }

        slope = (y2-y1) / (x2-x1);
        intercept = y1 - slope * x1;
    }

    double predict(double x) const {
        return intercept + slope * x;
    }
};

EMSCRIPTEN_BINDINGS(regression_module) {
    emscripten::class_<LinearRegression>("LinearRegression").constructor<>().function("fit", &LinearRegression::fit).function("predict", &LinearRegression::predict).property("slope", &LinearRegression::slope).property("intercept", &LinearRegression::intercept);

}