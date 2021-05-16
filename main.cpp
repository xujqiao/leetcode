//
// Created by cam xu on 2021/5/16.
//

#include "gtest/gtest.h"
#include "No41_first-missing-positive.h"

using namespace std;

TEST(No41, MYTEST) {
    ns41::Solution solution;

    vector<int> nums = {1};
    ASSERT_EQ(solution.firstMissingPositive(nums), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

