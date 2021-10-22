#include "stats.h"
#include <bits/stdc++.h>
#include <cmath>

Stats Statistics::ComputeStatistics(const std::vector<float>& i_lstData) {
    Stats tempStatsObj;
    if(i_lstData.empty())
    {
        tempStatsObj.average = NAN;
        tempStatsObj.min = NAN;
        tempStatsObj.max = NAN;
        return tempStatsObj;
    }
    tempStatsObj.average = accumulate(i_lstData.begin(), i_lstData.end(), 0)/i_lstData.size();
    tempStatsObj.min = *min_element(i_lstData.begin(), i_lstData.end());
    tempStatsObj.max = *max_element(i_lstData.begin(), i_lstData.end());
    return tempStatsObj;
}
