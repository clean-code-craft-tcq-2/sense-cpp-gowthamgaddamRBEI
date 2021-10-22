#include <vector>

struct Stats
{
    float average;
    float max;
    float min;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& i_lstData);
}


class IAlerter
{

};

class EmailAlert : public IAlerter
{
public:
    bool emailSent;
};

class LEDAlert : public IAlerter
{
public:
    bool ledGlows;
};

class StatsAlerter
{
public:
    StatsAlerter(float i_maxThreshold, std::vector<IAlerter*> i_lstAlerts);
    void checkAndAlert(const std::vector<float>& i_lstData);
private:
    float m_maxThreshold;
    std::vector<IAlerter*> m_lstAlerts;
};
