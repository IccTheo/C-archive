#include <iostream>
#include <vector>
#include <cmath>

struct Grouped_Data{
    // Function to calculate the variance from grouped data
    double calculateVariance(const std::vector<double>& values, const std::vector<int>& frequencies) {
    double mean = 0.0;
    int totalFrequency = 0;

        // Calculate the mean
    for (size_t i = 0; i < values.size(); ++i) {
        mean += values[i] * frequencies[i];
        totalFrequency += frequencies[i];
    }
    mean /= totalFrequency;

        // Calculate the variance
    double variance = 0.0;
    for (size_t i = 0; i < values.size(); ++i) {
         variance += frequencies[i] * pow(values[i] - mean, 2);
    }
        variance /= totalFrequency;

        return variance;
    }

    // Function to calculate the standard deviation from grouped data
    double calculateStandardDeviation(const std::vector<double>& values, const std::vector<int>& frequencies) {
        return sqrt(calculateVariance(values, frequencies));
    }
};