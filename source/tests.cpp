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

TEST_CASE("Vec2 + Vec2", "[Vec2 add]"){
  Vec2 v{1.5, -1.5};
  Vec2 u{v};
  Vec2 z = v + u;
  Vec2 w = z + v;
  REQUIRE(z.x == Approx(3.0));
  REQUIRE(z.y == Approx(-3.0));
  REQUIRE(w.x == Approx(4.5));
  REQUIRE(w.y == Approx(-4.5));
}

TEST_CASE("Vec2 - Vec2", "[Vec2 sub]"){
  Vec2 v{1.5, -1.5};
  Vec2 u{v};
  Vec2 z = v - u;
  Vec2 w = z - v;
  REQUIRE(z.x == 0.0);
  REQUIRE(z.y == 0.0);
  REQUIRE(w.x == Approx(-1.5));
  REQUIRE(w.y == Approx(1.5));
}

TEST_CASE("Vec2 * float", "[Vec2 mult]"){
  Vec2 v{1.5, -1.5};
  float u = 2.0;
  float zero = 0.0;
  Vec2 z = v * u;
  Vec2 w = z * u;
  Vec2 y = zero * v;
  REQUIRE(z.x == Approx(3.0));
  REQUIRE(z.y == Approx(-3.0));
  REQUIRE(w.x == Approx(6.0));
  REQUIRE(w.y == Approx(-6.0));
  REQUIRE(y.x == 0.0);
  REQUIRE(y.y == 0.0);
}

TEST_CASE("Vec2 / float", "[Vec2 div]"){
  Vec2 v{1.5, -1.5};
  float u = 2.0;
  float zero = 0.0;
  Vec2 z = v / u;
  Vec2 w = z / u;
  Vec2 y = v / zero;
  REQUIRE(z.x == Approx(0.75));
  REQUIRE(z.y == Approx(-0.75));
  REQUIRE(w.x == Approx(0.375));
  REQUIRE(w.y == Approx(-0.375));
  REQUIRE(y.x == Approx(1.5));
  REQUIRE(y.y == Approx(-1.5));
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
