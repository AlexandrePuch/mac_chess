#include "chessboard.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <utility>

namespace chess {

    bool chess_board::can_move(const position_type& start, const position_typ& stop) const
    {
        chess_piece* pce = m_board[start.first][start.second];
        return pce->can_move(stop)
    }

    // can_move(start, stop) must be true
    void chess_board::move(const position_type& start, const position_typ& stop)
    {
        chess_piece* pce = m_board[start.first][start.second];
        pce->move(stop);
    }

}
