#include <iostream>
#include <vector>
#include <cmath>

struct Ungrouped_Data{
    // Function to calculate the variance
    double calculateVariance(const std::vector<double>& data) {
        double mean = 0.0;
        for (double num : data) {
            mean += num;
        }
        mean /= data.size();

        double variance = 0.0;
        for (double num : data) {
            variance += pow(num - mean, 2);
        }
        variance /= data.size();

        return variance;
    }

    // Function to calculate the standard deviation
    double calculateStandardDeviation(const std::vector<double>& data) {
        return sqrt(calculateVariance(data));
    }
};