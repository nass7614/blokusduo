
#include "player_human_cui.h"

player_t * make_player_human_cui(role_t role){
    player_t * ret;
    ret = malloc(sizeof(player_t));

    ret->role = role;
    ret->ui = UI_CURSES;
    ret->type = PLAYER_HUMAN_CUI;

    return ret;
}

void player_human_cui_init(player_t * player){
    ui_init(player->ui);
}

void player_human_cui_exit(player_t * player){
    ui_exit(player->ui);
}

uint32_t player_human_cui_ask_next_move(player_t * player, board_t * board){
    return ui_curses_get_move(board, player->role);
}


