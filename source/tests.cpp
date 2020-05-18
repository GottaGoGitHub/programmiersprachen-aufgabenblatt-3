#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>
#include "vec2.hpp"

TEST_CASE("Vec2 init", "[Vec2]"){
  Vec2 v;
  REQUIRE(v.x == 0.0);
  REQUIRE(v.y == 0.0);
  Vec2 z{1.5, -3.5};
  REQUIRE(z.x == Approx(1.5));
  REQUIRE(z.y == Approx(-3.5));
}

TEST_CASE("Vec2 +=", "[Vec2 plus]"){
  Vec2 v{2.5, 3.5};
  Vec2 z{1.3, -7.6};
  v += z;
  REQUIRE(v.x == Approx(3.8));
  REQUIRE(v.y == Approx(-4.1));
}

TEST_CASE("Vec2 -=", "[Vec2 minus]"){
  Vec2 v{2.5, 3.5};
  Vec2 z{1.3, -7.6};
  v -= z;
  v += z;
  REQUIRE(v.x == Approx(2.5));
  REQUIRE(v.y == Approx(3.5));
}

TEST_CASE("Vec2 *=", "[Vec2 times]"){
  Vec2 v{2.5, 3.5};
  float z = 2.5;
  v *= z;
  REQUIRE(v.x == Approx(6.25));
  REQUIRE(v.y == Approx(8.75));
}

TEST_CASE("Vec2 /=", "[Vec2 divide]"){
  Vec2 v{2.5, 3.5};
  float z = 2.5;
  float zero = 0;
  v /= z;
  REQUIRE(v.x == Approx(1.0));
  REQUIRE(v.y == Approx(1.4));
  v/= zero;
  REQUIRE(v.x == Approx(1.0));
  REQUIRE(v.y == Approx(1.4));
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
