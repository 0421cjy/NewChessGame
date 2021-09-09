#include "IPiece.h"
#include "Piece.h"

using namespace jy;

namespace jy
{
    Pawn::Pawn(int color, int posX, int posY)
        :m_color(color), m_posX(posX), m_posY(posY)
    {
    }

    Pawn::~Pawn()
    {
    }

    bool Pawn::Move(int posX, int posY)
    {



        return true;
    }

    void Pawn::Promote()
    {
    }

    int Pawn::GetColor() const
    {
        return m_color;
    }

    int Pawn::GetPositionX() const
    {
        return m_posX;
    }

    int Pawn::GetPositionY() const
    {
        return m_posY;
    }

    Bishop::Bishop()
    {
    }

    Bishop::~Bishop()
    {
    }

    bool Bishop::Move(int posX, int posY)
    {
        return true;
    }

    Knight::Knight()
    {
    }

    Knight::~Knight()
    {
    }

    bool Knight::Move(int posX, int posY)
    {
        return true;
    }

    Rook::Rook()
    {
    }

    Rook::~Rook()
    {
    }

    bool Rook::Move(int posX, int posY)
    {
        return true;
    }

    void Rook::Castling()
    {
    }

    Queen::Queen()
    {
    }

    Queen::~Queen()
    {
    }

    bool Queen::Move(int posX, int posY)
    {
        return true;
    }

    King::King()
    {
    }

    King::~King()
    {
    }

    bool King::Move(int posX, int posY)
    {
        return true;
    }

    void King::Castling()
    {
    }
}
