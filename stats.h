#include <iostream>
using namespace std;
#include <vector>
namespace Statistics {
   class ComputeStatistics {
    private:
        std::vector<float> computeStatistics;

   public:
    float maxi;
    float min;
    float average;
   ComputeStatistics(const std::vector<float> &ar);
   
};// just tell the compiler to expect a class def
}
