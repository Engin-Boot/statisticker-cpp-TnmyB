#include <vector>
#include <limits>
namespace Statistics {
    struct Stats {
        float min;
        float max;
        float average;
    };

    Stats ComputeStatistics(const std::vector<float>& answer);
}
