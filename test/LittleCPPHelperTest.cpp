#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>

#include <LittleCPPHelper/strings.h>


TEST_CASE("Trim some strings", "[LittleCPPHelper::strings]") {
    std::string teststring = "   This is a test string   ";

    REQUIRE (LittleCPPHelper::ltrim_copy(teststring) == "This is a test string   ");
    REQUIRE (LittleCPPHelper::rtrim_copy(teststring) == "   This is a test string");
    REQUIRE (LittleCPPHelper::trim_copy(teststring) == "This is a test string");
}
