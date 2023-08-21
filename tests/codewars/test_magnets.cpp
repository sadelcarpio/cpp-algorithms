#include "gtest/gtest.h"
#include "codewars/magnet_particles_in_boxes.cpp"

TEST(MagnetsTestSuite, TestDoubles) {
    EXPECT_NEAR(Magnets::doubles(1, 10), 0.5580321939764581, 1e-6);
    EXPECT_NEAR(Magnets::doubles(10, 1000), 0.6921486500921933, 1e-6);
    EXPECT_NEAR(Magnets::doubles(10, 10000), 0.6930471674194457, 1e-6);
    EXPECT_NEAR(Magnets::doubles(20, 10000), 0.6930471955575918, 1e-6);
}
