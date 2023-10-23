#include <stdexcept>
#include <vector>

#include "common.h"

// Note: pivot functions are not used in this source file, since
// calculation of median might require finding 2 middle elements
// in case the array length is even (and pivot functions in common.h)
// are not really designed for this

/**
 * @brief calculate median of @p v in deterministic fashion
 *
 * @param v
 *
 * Constraints:
 *      1. v.size() >= 1
 * Examples:
 *      v = [1]     ---> 1
 *      v = [1,2]   ---> 1.5
 *      v = [3,4,4] ---> 4
 *
 * @return double - median of @p v
 */
double medianDeterministicPivot(std::vector<int> &v)
{
    // TODO: implement
    throw std::runtime_error{ "medianDeterministicPivot: not implemented!" };
}

/**
 * @brief calculates median of @p v by selecting pivot uniformly at random
 *
 * @param v
 *
 * Constraints:
 *      1. v.size() >= 1
 * Examples:
 *      v = [1]     ---> 1
 *      v = [1,2]   ---> 1.5
 *      v = [3,4,4] ---> 4
 *
 * @return double - median of @p v
 */
double medianUniformRandomPivot(std::vector<int> &v)
{
    // TODO: implement
    throw std::runtime_error{ "medianUniformRandomPivot: not implemented!" };
}

// --------------------
// --------------------
// --------------------

// clang-format off
#include "utils/benchmarkdata.h"

// lengths of arrays to benchmark (for different combinations of pivot policy and input data)
// feel free to change the numbers or add more if necessary
const BenchmarkData benchmarksData {
    BenchmarkData::Builder{}
        .add(PivotPolicy::Deterministic, InputData::SortedArray,            { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::Deterministic, InputData::ReversedSortedArray,    { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::Deterministic, InputData::RandomArray,            { 1LL, 2LL, 5LL, 10LL, 20LL })
        
        .add(PivotPolicy::UniformRandom, InputData::SortedArray,            { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::UniformRandom, InputData::ReversedSortedArray,    { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::UniformRandom, InputData::RandomArray,            { 1LL, 2LL, 5LL, 10LL, 20LL })
    .build()
};
// clang-format on

// don't touch
#include "utils/median.h"
