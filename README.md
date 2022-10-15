# Climbing-the-Leaderboard

My solution to the [Hackkerrank Climbing the Leaderboard](https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem) challange in C++17.

The solution2.cpp contains a correctly working solution but it can not solve the problem in given time.

The solution1.cpp includes a custom binary search algorithm to find the rank of the given score with in the the given time constraint.
Since the ranks are sorted in descending order the binary search algorithm had to be customized by exchanging the conditions of low and high pointers.
Also the pointers are defined in the lambda's scope because the last position of the pointers is important and effects the calculated return value.

[C++ iterators](https://en.cppreference.com/w/cpp/iterator/iterator) were used as pointers. The index and rank calculations were made using the [std::distance](https://en.cppreference.com/w/cpp/iterator/distance).
Call to this function with [std::begin(v)](https://en.cppreference.com/w/cpp/iterator/begin) as first argument and an iterator returns the index of the element pointed by that iterator (v being the the container).
