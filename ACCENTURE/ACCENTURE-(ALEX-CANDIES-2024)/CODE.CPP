#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        // Find the maximum number of candies in any pile
        int maxCandies = *std::max_element(piles.begin(), piles.end());

        // Binary search for the minimum eating speed
        long start = 1;
        long end = maxCandies;
        long ans = maxCandies;

        while (start <= end) {
            long mid = start + (end - start) / 2;
            long totalHours = 0;

            // Calculate the total hours needed if eating `mid` candies per hour
            for (int pile : piles) {
                totalHours += std::ceil((double)pile / mid);
            }

            // If total hours is within the limit, try a smaller eating speed
            if (totalHours <= h) {
                ans = mid;
                end = mid - 1;
            } else {
                // If total hours exceeds the limit, try a larger eating speed
                start = mid + 1;
            }
        }

        return (int)ans;
    }
};