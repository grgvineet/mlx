//
// Created by vineet on 5/11/16.
//

#ifndef UTILS_MATH_EUCLIDEAN_DISTANCE_H
#define UTILS_MATH_EUCLIDEAN_DISTANCE_H

#include <vector>

namespace utils {
    namespace math {

        double euclid_square(std::vector<double>& a, std::vector<double>& b);

        bool is_converged(std::vector<std::vector<double>>& a, std::vector<std::vector<double>>& b);

        // TODO : Either rename file or move it from here
        bool inverse(std::vector<std::vector<double>>& v, std::vector<std::vector<double>>& result);
    }
}

#endif
