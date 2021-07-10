#pragma once

namespace jy
{
    class Board
    {
    private:
        const int m_rowNumber = 8;
        const int m_colNumber = 8;

    public:
        Board();
        virtual ~Board();
    };
}
