#pragma once

namespace jy
{
    class Pawn : public IPiece
    {
    private:
        int posX;
        int posY;

    public:
        Pawn();
        virtual ~Pawn();

    public:
        void Move() override;
        void Promotion();
    };

    class Bishop : public IPiece
    {
    private:
        int posX;
        int posY;

    public:
        Bishop();
        virtual ~Bishop();

    public:
        void Move() override;
    };

    class Knight : public IPiece
    {
    private:
        int posX;
        int posY;

    public:
        Knight();
        virtual ~Knight();

    public:
        void Move() override;
    };

    class Rook : public IPiece
    {
    private:
        int posX;
        int posY;

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
        int posX;
        int posY;

    public:
        Queen();
        virtual ~Queen();

    public:
        void Move() override;
    };

    class King : public IPiece
    {
    private:
        int posX;
        int posY;

    public:
        King();
        virtual ~King();

    public:
        void Move() override;
        void Castling();
    };
}
