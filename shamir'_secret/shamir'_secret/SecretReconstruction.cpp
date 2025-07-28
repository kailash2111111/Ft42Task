#include "SecretReconstruction.h"

int SecretReconstruction::reconstructSecret(const declaration& dl, std::vector<std::pair<int, int>>& sl) {
    int secret = 0;
    int n = sl.size();
    for (int i = 0; i < n; ++i) {
    

        int xi = sl[i].first;
        int yi = sl[i].second;

        double numerator = 1.0;
        double denominator = 1.0;

        for (int j = 0; j < n; ++j) {
            if (i != j) {
                int xj = sl[j].first;
                numerator *= (0.0 - xj);
                denominator *= (xi - xj);
            }
        }

        secret += yi * (numerator / denominator);
    }

    return static_cast<int>(secret);
}
