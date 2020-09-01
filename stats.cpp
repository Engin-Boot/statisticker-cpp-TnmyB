#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    //Implement statistics here
    Stats answers;

    if (numbers.size() == 0) {
        answers.average = NAN;
        answers.min = NAN;
        answers.max = NAN;
    }

    float sum = 0;
    float min = numbers[0];
    float max = numbers[0];

    for (auto i : numbers) {
        sum += i;

        if (min > i) {
            min = i;
        }

        if (max < i) {
            max = i;
        }
    }

    if (numbers.size() != 0) {
        answers.min = min;
        answers.max = max;
        answers.average = (sum / numbers.size());
    }

    return answer;
}
