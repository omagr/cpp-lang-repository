#include <array>
#include <iostream>

// double sum( double scores[], size_t count){
double sum(double *scores, size_t count)
{
    double score_sum {};
    std::cout << "sizeof(scores)  : " << sizeof(scores) << std::endl;
    std::cout << "scores  : " << scores << std::endl;
    for (size_t i{0}; i < count; ++i)
    {
        score_sum += scores[i];
    }
    return score_sum;
}

int main()
{
    double my_scores[]{10.5, 34.3, 4.8, 6.5};
    double result = sum(my_scores, std::size(my_scores));
    std::cout << "result : " << result << std::endl;
    std::cout << "my_scores : " << my_scores << std::endl;
    return 0;
};