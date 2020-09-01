#include <vector>

namespace Statistics {
    class Stats {
        float min;
        float max;
        float average;
    };

    Stats ComputeStatistics(const std::vector<float>& answer);
}
