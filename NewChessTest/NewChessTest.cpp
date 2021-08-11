#define BOOST_TEST_MODULE NewChessTest
#include <boost/test/included/unit_test.hpp>
#include "../NewChessGame/IPiece.h"
#include "../NewChessGame/Piece.h"
#include "../NewChessGame/Piece.cpp"
#include <iostream>
#include <string>

using namespace jy;

BOOST_AUTO_TEST_SUITE(chess_test)

BOOST_AUTO_TEST_CASE(piece_test1)
{
    int expected_value = 0;

    Pawn pawn(0, 0, 0);
    BOOST_CHECK(expected_value == pawn.GetColor());
}

BOOST_AUTO_TEST_CASE(piece_test2)
{
    int expected_value = 1;

    Pawn pawn(0, 0, 0);
    BOOST_CHECK(expected_value == pawn.GetColor());
}

BOOST_AUTO_TEST_SUITE_END()