//
// Created by Javi on 1/4/17.
//


#include <catch/catch.hpp>
#include <Password.h>

TEST_CASE("Password","[password]") {
    SECTION("is valid if it fulfills all the requirements") {
        REQUIRE(Password("ABcd123_").isValid());
    }
    SECTION("must have at least 8 characters") {
        REQUIRE_FALSE(Password("ABcv12_").isValid());
    }
    SECTION("must have at least one uppercase letter") {
        REQUIRE_FALSE(Password("abcd123_").isValid());
    }

}
