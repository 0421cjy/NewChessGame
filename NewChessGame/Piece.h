#pragma once

#include<utility>

namespace jy
{
    class Pawn : public IPiece
    {
    private:
        int m_color;
        int m_posX;
        int m_posY;

    public:
        Pawn(int color, int posX, int posY);
        virtual ~Pawn();

    public:
        void Move() override;
        void Promotion();
        int GetColor() const;
        std::pair<int, int> GetPosition() const;
    };

    class Bishop : public IPiece
    {
    private:
        int m_color;
        int m_posX;
        int m_posY;

    public:
        Bishop();
        virtual ~Bishop();

    public:
        void Move() override;
    };

    class Knight : public IPiece
    {
    private:
        int m_color;
        int m_posX;
        int m_posY;

    public:
        Knight();
        virtual ~Knight();

    public:
        void Move() override;
    };

    class Rook : public IPiece
    {
    private:
        int m_color;
        int m_posX;
        int m_posY;

    public:
        Rook();
        virtual ~Rook();

    public:
        void Move() override;
        void Castling();
    };

    class Queen : public IPiece
    {
    private:
        int m_color;
        int m_posX;
        int m_posY;

    public:
        Queen();
        virtual ~Queen();

    public:
        void Move() override;
    };

    class King : public IPiece
    {
    private:
        int m_color;
        int m_posX;
        int m_posY;

    public:
        King();
        virtual ~King();

    public:
        void Move() override;
        void Castling();
    };
}
