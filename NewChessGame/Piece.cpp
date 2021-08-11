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

    void Pawn::Move()
    {
    }

    void Pawn::Promotion()
    {
    }

    int Pawn::GetColor() const
    {
        return m_color;
    }

    std::pair<int, int> Pawn::GetPosition() const
    {
        return std::make_pair(m_posX, m_posY);
    }

    Bishop::Bishop()
    {
    }

    Bishop::~Bishop()
    {
    }

    void Bishop::Move()
    {
    }

    Knight::Knight()
    {
    }

    Knight::~Knight()
    {
    }

    void Knight::Move()
    {
    }

    Rook::Rook()
    {
    }

    Rook::~Rook()
    {
    }

    void Rook::Move()
    {
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

    void Queen::Move()
    {
    }

    King::King()
    {
    }

    King::~King()
    {
    }

    void King::Move()
    {
    }

    void King::Castling()
    {
    }
}
