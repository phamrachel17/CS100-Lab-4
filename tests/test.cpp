#include "gtest/gtest.h"
#include "../src/rectangle.cpp"


TEST(Constructors, PosNum) {
        Rectangle r1(3, 4);
        int width = r1.get_width();
        int height = r1.get_height();
	EXPECT_TRUE(width == 3);
	EXPECT_TRUE(height == 4);
}

TEST(Constructors, Zero) {
        Rectangle r1(0, 0);
        int width = r1.get_width();
        int height = r1.get_height();
        EXPECT_TRUE(width == 0);
        EXPECT_TRUE(height == 0);
}

TEST(Constructors, LargeNum) {
        Rectangle r1(800, 400);
        int width = r1.get_width();
        int height = r1.get_height();
        EXPECT_TRUE(width == 800);
        EXPECT_TRUE(height == 400);
}

TEST(Area, PosNum) {
	Rectangle r1(3, 4);
	int res = r1.area();
	EXPECT_TRUE(res == 12);
}

TEST(Area, ZeroNum) {
        Rectangle r1(0, 80);
        int res = r1.area();
        EXPECT_TRUE(res == 0);
}

TEST(Area, LargeNum) {
        Rectangle r1(800, 400);
        int res = r1.area();
        EXPECT_TRUE(res == 320000);
}

TEST(Perimeter, PosNum) {
        Rectangle r1(8, 4);
        int res = r1.perimeter();
        EXPECT_TRUE(res == 24);
}

TEST(Perimeter, LargeNum) {
        Rectangle r1(800, 400);
        int res = r1.perimeter();
        EXPECT_TRUE(res == 2400);
}

TEST(Perimeter, ZeroNum) {
        Rectangle r1(0, 400);
        int res = r1.perimeter();
        EXPECT_TRUE(res == 800);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
