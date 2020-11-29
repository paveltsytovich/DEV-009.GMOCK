#include "pch.h"
#include "mockturtile.h"
#include "Painter.h"

using ::testing::AtLeast;                         

TEST(Gmock, SimpleDemo) {
    MockTurtle turtle;                              
    EXPECT_CALL(turtle, PenDown())                 
        .Times(AtLeast(1));

    Painter painter(&turtle);

    EXPECT_TRUE(painter.DrawCircle(0, 0, 10));      
}