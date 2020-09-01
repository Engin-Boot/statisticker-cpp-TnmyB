#include "stats.h"


float avg(const std::vector<float>& numbers) {
    float sum = 0;
    for (auto i : numbers) {
        sum += i;
    }
    return sum / numbers.size();
}

float min(const std::vector<float)& numbers){
float min = 9999;
for (auto i : numbers) {
    if (i < min)
        min = i;
}
return min;
}

float max(const std::vector<float)& numbers){
float min = -9999;
for (auto i : numbers) {
    if (i>max)
        max = i;
}
return max;
}

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    //Implement statistics here
    Stats answers;

    if (numbers.size() == 0) {
        answers.average = NAN;
        answers.min = NAN;
        answers.max = NAN;
        return answers;
    }

    answers.average = avg(numbers);
    answers.min = min(numbers);
    answers.max = max(numbers);

    return answers;
}
