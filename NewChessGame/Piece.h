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
        bool Move(int posX, int posY) override;
        void Promote();

    public:
        int GetColor() const;
        int GetPositionX() const;
        int GetPositionY() const;
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
        bool Move(int posX, int posY) override;
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
        bool Move(int posX, int posY) override;
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
        bool Move(int posX, int posY) override;
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
        bool Move(int posX, int posY) override;
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
        bool Move(int posX, int posY) override;
        void Castling();
    };
}
