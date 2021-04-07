#include "doctest.h"
#include "Direction.hpp"
#include "Board.hpp"
using ariel::Direction;

#include <algorithm>
using namespace std;






ariel::Board board;

TEST_CASE("clean") {
    CHECK(board.read(0,0,Direction::Horizontal,4) == "____");
    CHECK(board.read(0,0,Direction::Vertical,4) == "____");
};

TEST_CASE("TESTHorizontal ") {
        board.post(100, 200, Direction::Horizontal, "ohad");
        CHECK(board.read(100,200,Direction::Horizontal,4) == "ohad");
        CHECK(board.read(100,199,Direction::Horizontal,6) == "_ohad_");

        board.post(50, 50, Direction::Horizontal, "sos");
        CHECK(board.read(50,55,Direction::Horizontal,5) == "sosss");
        CHECK(board.read(50,49,Direction::Horizontal,6) == "ssoss");

    board.post(100, 205, Direction::Horizontal, "ohad");
        CHECK(board.read(100,199,Direction::Horizontal,9) == "_sosohad_");

};
TEST_CASE("TESTVertical ") {
        CHECK(board.read(99,199,Direction::Vertical,4) ==  "____");
        CHECK(board.read(100,200,Direction::Vertical,5) == "o____");
        CHECK(board.read(100,201,Direction::Vertical,5) == "h____");
        CHECK(board.read(100,202,Direction::Vertical,5) == "a____");
        CHECK(board.read(100,203,Direction::Vertical,5) == "d____");
        CHECK(board.read(50,50,Direction::Vertical,5) == "s____");
        CHECK(board.read(50,51,Direction::Vertical,5) ==  "o____");
        CHECK(board.read(50,52,Direction::Vertical,5) ==  "s____");
        CHECK(board.read(49,52,Direction::Vertical,5) ==  "_s____");
        CHECK(board.read(99,204,Direction::Vertical,5) ==  "____");

};
TEST_CASE("Vertical and Horizontal") {

        board.post(50, 54, Direction::Vertical, "ariel");
        CHECK(board.read(50,54,Direction::Vertical,7) ==  "_ariel");

    board.post(150, 212, Direction::Vertical, "lolo");
        CHECK(board.read(149,212,Direction::Vertical,5) ==  "_lolo");
};
