#include <vector>

namespace Statistics {
    class stats
    {
        float x,y,z,max,min,avg; 
        stats();
        stats(float X, float Y, float Z); 
        void ComputeStatistics();
    }
}
