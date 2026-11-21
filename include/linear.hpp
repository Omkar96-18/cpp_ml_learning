#pragma once

class LinearRegression{
    public:
        double slope = 0.0;
        double intercept = 0.0;

        void fit(double x1, double y1, double x2, double y2);

        double predict(double x) const;
};