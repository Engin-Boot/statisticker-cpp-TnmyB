    #include "stats.h"


    float avg(const std::vector<float>& numbers) {
        float sum = 0;
        for (int i=0;i<numbers.size();i++) {
            sum += numbers[i];
        }
        return sum / numbers.size();
    }

    float min(const std::vector<float>& numbers){
    float min = 9999;
    for (int i=0;i<numbers.size();i++) {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;
    }

    float max(const std::vector<float>& numbers){
    float max = -9999;
    for (int i=0;i<numbers.size();i++) {
        if (numbers[i]>max)
            max = numbers[i];
    }
    return max;
    }

    Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
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
