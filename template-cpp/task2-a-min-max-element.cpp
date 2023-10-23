#include <stdexcept>
#include <utility>
#include <vector>

/**
 * @brief deterministic algorithm for calculating min/max value in the given vector
 *
 * @param v - vector to find min/max value in
 *
 * Constraints:
 *      1. @p v is not empty
 *      2. first element of the returned pair should be <= than the second element
 *      3. no constraints on the values inside @p v
 *
 * @return std::pair<int, int> pair of min and max elements of @p v
 */
std::pair<int, int> minMaxElement(const std::vector<int> &v)
{
    // TODO: implement
    throw std::logic_error{ "minMaxElement: not implemented!" };
}

// lengths of vectors to benchmark (feel free to change)
const std::vector<long long> Ns{ 1, 5, 10, 100, 10000 };

// don't touch
#include "utils/min-max-element.h"
