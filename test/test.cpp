#include "gtest/gtest.h"
#include "../src/factory_method_h.h"

using namespace std;

class Test : public testing::Test{
    public:
    Resturant* vr;
    Resturant* nvr;

    void SetUp(){
        vr = new VegResturant();
        nvr = new NonVegResturant();
    }

    void TearDown(){

    }
};


TEST_F(Test, VegResturant) {
    EXPECT_TRUE(vr->cost() == 420);
    EXPECT_FALSE(vr->cost() == 42);
    EXPECT_EQ(vr->cost(), 420);
    EXPECT_NE(vr->cost(), 69);
    EXPECT_LT(vr->cost(), 500);
    EXPECT_LE(vr->cost(), 420);
    EXPECT_GT(vr->cost(), 100);
    EXPECT_GE(vr->cost(), 420);
    EXPECT_FLOAT_EQ(vr->cost(), 420.00);
    EXPECT_DOUBLE_EQ(vr->cost(), 420.0);
    EXPECT_NEAR(vr->cost(), 420.0, 0.0001);
    EXPECT_EQ(vr->addSauce("Mayonnaise"), "Mayonnaise");
    EXPECT_NE(vr->addSauce("extra meyonig"), "Mayonnaise");
    // EXPECT_STREQ(vr->addSauce("Mayonnaise"), "Mayonnaise");
    // EXPECT_STRNE(vr->addSauce("extra meyonig"), "Mayonnaise");
    // EXPECT_STRCASEEQ(vr->addSauce("Mayonnaise"), "Mayonnaise");
    // EXPECT_STRCASENE(vr->addSauce("extra meyonig"), "Mayonnaise");
};

TEST_F(Test, NonVegResturant) {
    EXPECT_TRUE(nvr->cost() == 69);
    EXPECT_FALSE(nvr->cost() == 420);
    EXPECT_EQ(nvr->cost(), 69);
    EXPECT_NE(nvr->cost(), 420);
    EXPECT_LT(nvr->cost(), 500);
    EXPECT_LE(nvr->cost(), 69);
    EXPECT_GT(nvr->cost(), 50);
    EXPECT_GE(nvr->cost(), 69);
    EXPECT_FLOAT_EQ(nvr->cost(), 69.00);
    EXPECT_DOUBLE_EQ(nvr->cost(), 69.0);
    EXPECT_NEAR(nvr->cost(), 69.0, 0.0001);
    EXPECT_EQ(nvr->addSauce("Mayonnaise"), "Mayonnaise");
    EXPECT_NE(nvr->addSauce("extra meyonig"), "Mayonnaise");
    // EXPECT_STREQ(nvr->addSauce("Mayonnaise"), "Mayonnaise");
    // EXPECT_STRNE(nvr->addSauce("extra meyonig"), "Mayonnaise");
    // EXPECT_STRCASEEQ(nvr->addSauce("Mayonnaise"), "Mayonnaise");
    // EXPECT_STRCASENE(nvr->addSauce("extra meyonig"), "Mayonnaise");
};

int main(){
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}