#include <stdexcept>
#include <vector>

#include "common.h"

/**
 * @brief selects median as pivot in deterministic fashion
 *
 * @param data - pointer to the part of array
 * @param n - number of elements in (sub)array pointed to by @p data
 *
 * Constraints (should hold in quickSortMedianPivot(...) implementation)
 *      1. @p data is not nullptr
 *      2. @p n > 0
 *
 * @return size_t index of pivot element (should be in range [0; n - 1])
 */
size_t deterministicMedianPivot(int *data, size_t n)
{
    // TODO: implement
    throw std::logic_error{ "deterministicMedianPivot: not implemented!" };
}

/**
 * @brief selects median as pivot using randomized approach
 *
 * @param data - pointer to the part of array
 * @param n - number of elements in (sub)array pointed to by @p data
 *
 * Constraints (should hold in quickSortMedianPivot(...) implementation)
 *      1. @p data is not nullptr
 *      2. @p n > 0
 *
 * @return size_t index of pivot element (should be in range [0; n - 1])
 */
size_t uniformRandomMedianPivot(int *data, size_t n)
{
    // TODO: implement
    throw std::logic_error{ "uniformRandomMedianPivot: not implemented!" };
}

// --------------------
// --------------------
// --------------------

// note: the quicksort logic of applying pivot function that finds the median might
// be different as opposed to simple pivot functions (i.e. deterministicPivot,
// uniformRandomPivot), hence there are 2 implementations of quickSort to be done

/**
 * @brief quicksort implementation for simple pivot selection methods
 *
 * @param v - vector to sort
 * @param pivotFunction - function pointer that specifies the algorithm to select
 * pivot element. quickSortSimplePivot will be tested/benchmarked with
 * deterministicPivot and uniformRandomPivot implementations from common.h
 */
void quickSortSimplePivot(std::vector<int> &v, Pivot_f pivotFunction)
{
    // TODO: implement
    throw std::logic_error{ "quickSortSimplePivot: not implemented!" };
}

/**
 * @brief quicksort implementation with median element as pivot
 *
 * @param v - vector to sort
 * @param pivotFunction - function pointer that specifies the algorithm to select
 * pivot element. quickSortMedianPivot will be tested/benchmarked with
 * deterministicMedianPivot and uniformRandomMedianPivot implementations
 */
void quickSortMedianPivot(std::vector<int> &v, Pivot_f pivotFunction)
{
    // TODO: implement
    throw std::logic_error{ "quickSortMedianPivot: not implemented!" };
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
        .add(PivotPolicy::Deterministic, InputData::SortedArray,                { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::Deterministic, InputData::ReversedSortedArray,        { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::Deterministic, InputData::RandomArray,                { 1LL, 2LL, 5LL, 10LL, 20LL })

        .add(PivotPolicy::UniformRandom, InputData::SortedArray,                { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::UniformRandom, InputData::ReversedSortedArray,        { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::UniformRandom, InputData::RandomArray,                { 1LL, 2LL, 5LL, 10LL, 20LL })

        .add(PivotPolicy::MedianDeterministic, InputData::SortedArray,          { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::MedianDeterministic, InputData::ReversedSortedArray,  { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::MedianDeterministic, InputData::RandomArray,          { 1LL, 2LL, 5LL, 10LL, 20LL })

        .add(PivotPolicy::MedianUniformRandom, InputData::SortedArray,          { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::MedianUniformRandom, InputData::ReversedSortedArray,  { 1LL, 2LL, 5LL, 10LL, 20LL })
        .add(PivotPolicy::MedianUniformRandom, InputData::RandomArray,          { 1LL, 2LL, 5LL, 10LL, 20LL })
    .build()
};
// clang-format on

// don't touch
#include "utils/quicksort.h"
