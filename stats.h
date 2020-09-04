#include <vector>
#include <limits>
#include <cmath>
namespace Statistics {
    struct Stats {
        float min;
        float max;
        float average;
    };

    Stats ComputeStatistics(const std::vector<float>& answer);
}
