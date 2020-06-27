#include <vector>
#include "tspvector.h"
#include <vector>

class ENN{

    public:
        ENN(std::vector<City>* cities, double alpha = 1.0, double beta = 1.0, double initialK = 0.1, int KUpdatePeriod = 25, double radius = 0.1, double numPointFactor = 2.5);

        //Generates numPoints Network Points with the given radius around the center (0.5,0.5)
        std::vector<NetworkPoint>* generateNetworkPoints(double radius, unsigned int numPoints);
        //Optimize Network Points for a single Iteration. Returns the updated NetworkPoints
        std::vector<NetworkPoint>* optimizeNetworkPoints();
        //Optimize Network Points for the given Iterations. Returns the updated NetworkPoints
        std::vector<NetworkPoint>* optimizeNetworkPoints(int iterations);
        //Returns an ordered List of the Cities for the current NetworkPoints
        std::vector<int>* getTSPList();
        
    private:
        double alpha;
        double beta;
        double K;
        int KUpdatePeriod;
        double radius;
        double numPointFactor;
        std::vector<City>* cities;
        std::vector<NetworkPoint>* networkPoints;

        double getKNew();
        double v_ia(City& i, NetworkPoint& a);
        double v_ia_helper(City& i, NetworkPoint& a);
        TSPVector deltaY_a(TSPVector& a);

};