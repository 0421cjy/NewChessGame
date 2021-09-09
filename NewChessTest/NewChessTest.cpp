#define BOOST_TEST_MODULE NewChessTest
#include <boost/test/included/unit_test.hpp>
#include "../NewChessGame/IPiece.h"
#include "../NewChessGame/Piece.h"
#include "../NewChessGame/Piece.cpp"
#include "../NewChessGame/Enum.h"
#include <iostream>
#include <string>

using namespace jy;

BOOST_AUTO_TEST_SUITE(chess_test)

BOOST_AUTO_TEST_CASE(piece_test1)
{
    int expected_color = EColorType::White;
    int expected_posX = 0;
    int expected_posY = 0;

    Pawn pawn(EColorType::White, 0, 0);
    BOOST_CHECK(expected_color == pawn.GetColor());
    BOOST_CHECK(expected_posX == pawn.GetPositionX());
    BOOST_CHECK(expected_posY == pawn.GetPositionY());

    Pawn pawn1(EColorType::White, 0, 0);
    BOOST_CHECK(true == pawn1.Move(0, 1));

    Pawn pawn2(EColorType::White, 0, 0);
    BOOST_CHECK(true == pawn2.Move(0, 2));

    Pawn pawn3(EColorType::White, 0, 0);
    BOOST_CHECK(false == pawn3.Move(0, 3));

    Pawn pawn4(EColorType::White, 0, 0);
    BOOST_CHECK(false == pawn4.Move(1, 0));
}

BOOST_AUTO_TEST_CASE(piece_test2)
{
    int expected_color = EColorType::Black;

    Pawn pawn(EColorType::Black, 0, 0);
    BOOST_CHECK(expected_color == pawn.GetColor());
}

BOOST_AUTO_TEST_SUITE_END()