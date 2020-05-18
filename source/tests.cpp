#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

TEST_CASE("Vec2 init", "[Vec2]"){
  Vec2 v;
  REQUIRE(v.x == 0.0);
  REQUIRE(v.y == 0.0);
  Vec2 z{1.5, -3.5};
  REQUIRE(z.x == Approx(1.5));
  REQUIRE(z.y == Approx(-3.5));
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
