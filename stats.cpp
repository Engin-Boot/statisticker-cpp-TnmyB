    #include "stats.h"


    float avg(const std::vector<float>& numbers) {
        float sum = 0;
        int size=numbers.size();
        for (int i=0;i<size;i++) {
            sum += numbers[i];
        }
        return sum / numbers.size();
    }

    float min(const std::vector<float>& numbers){
    float min = 9999;
    int size=numbers.size();
    for (int i=0;i<size;i++) {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;
    }

    float max(const std::vector<float>& numbers){
    float max = -9999;
    int size=numbers.size();
    for (int i=0;i<size;i++) {
        if (numbers[i]>max)
            max = numbers[i];
    }
    return max;
    }

    Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
        //Implement statistics here
        Stats answers;

        if (numbers.size() == 0) {
            answers.average = std::numeric_limits<float>::quiet_NaN();
            answers.min = std::numeric_limits<float>::quiet_NaN();
            answers.max = std::numeric_limits<float>::quiet_NaN();
            return answers;
        }

        answers.average = avg(numbers);
        answers.min = min(numbers);
        answers.max = max(numbers);

        return answers;
    }
