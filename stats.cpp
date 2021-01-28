#include "stats.h"
using namespace std;

namespace Statistics
{
   stats::stats(float X, float Y, float Z)
   {
       x = X;
       y = Y;
       z = Z;
   }
void stats::ComputeStatistics() 
{
    //Implement statistics here
    avg = (x + y + z)/3;
    max = std::max({x, y, z});
    min = std::min({x, y, z});
    
}

}
