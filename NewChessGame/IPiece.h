#pragma once

namespace jy
{
    class IPiece
    {
        virtual bool Move(int posX, int posY) = 0;
    };
}
