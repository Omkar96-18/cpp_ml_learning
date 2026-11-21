#include <emscripten/bind.h>



#include "linear.hpp"

EMSCRIPTEN_BINDINGS(regression_module) {
    emscripten::class_<LinearRegression>("LinearRegression")
        .constructor<>().function("fit", &LinearRegression::fit)
        .function("predict", &LinearRegression::predict)
        .property("slope", &LinearRegression::slope)
        .property("intercept", &LinearRegression::intercept);

}