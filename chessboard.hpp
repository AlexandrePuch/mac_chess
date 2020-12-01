#ifndef chessboard_hpp
#define chessboard_hpp

#include <stdio.h>

namespace chess {

    class chess_board
    {

        bool can_move(const position_type& start, const position_typ& stop) const;
        void move(const position_type& start, const position_typ& stop);

    private:

        chess_array<std::array<chess_piece*, 9>> m_board;
    };

}


#endif /* chessboard_hpp */
