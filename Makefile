##
## EPITECH PROJECT, 2020
## B-MUL-200-COT-2-1-myrpg-seth.houndete
## File description:
## Makefile
##

NAME	= my_rpg

CC	= gcc

RM	= rm -f

SRCS	= ./menu/src/animtion/anim_epi_fantasy.c \
	  ./menu/src/animtion/animation_one.c \
	  ./menu/src/animtion/animation_store.c \
	  ./menu/src/animtion/animation_two.c \
	  ./menu/src/destroy/destroy.c \
	  ./menu/src/destroy/destroy_f.c \
	  ./menu/src/destroy/destroy_one.c \
	  ./menu/src/destroy/destroy_three.c \
	  ./menu/src/destroy/destroy_two.c \
	  ./menu/src/evenement/controle_action.c \
	  ./menu/src/evenement/controle_action_two.c \
	  ./menu/src/init_game/initialise_game.c \
	  ./menu/src/loading/loading.c \
	  ./menu/src/loading/loading_enter_game.c \
	  ./menu/src/loading/loading_go_to_play.c \
	  ./menu/src/main.c \
	  ./menu/src/menu/choose_menu.c \
	  ./menu/src/menu/menu.c \
	  ./menu/src/menu/menu_pos.c \
	  ./menu/src/menu/select_me.c \
	  ./menu/src/menu/select_menu.c \
	  ./menu/src/more/more.c \
	  ./menu/src/my_sleep.c \
	  ./menu/src/player/player_life.c \
	  ./menu/src/position_ctrl/position_five.c \
	  ./menu/src/position_ctrl/position_one.c \
	  ./menu/src/position_ctrl/position_or.c \
	  ./menu/src/position_ctrl/position_six.c \
	  ./menu/src/position_ctrl/position_two.c \
	  ./menu/src/position_ctrl/positionn.c \
	  ./menu/src/rect/rec_pos_one.c \
	  ./menu/src/rect/rect_pos.c \
	  ./menu/src/rect/set_pos_rec.c \
	  ./menu/src/setg/position_setting.c \
	  ./menu/src/setg/set_music_setting.c \
	  ./menu/src/setg/set_volume_setting.c \
	  ./menu/src/setg/settings.c \
	  ./menu/src/sprite/create_sp_one.c \
	  ./menu/src/sprite/create_sp_two.c \
	  ./menu/src/sprite/sprite_create.c \
	  ./menu/src/store/position_store.c \
	  ./menu/src/store/store.c \
	  ./menu/src/store/store_buy_life.c \
	  ./menu/src/store/store_buy_power.c \
	  ./menu/src/store/write_store.c \
	  ./menu/src/texture/create_txtre_two.c \
	  ./menu/src/texture/create_txture_three.c \
	  ./menu/src/texture/set_texture_rect.c \
	  ./menu/src/texture/set_txture_t.c \
	  ./menu/src/texture/texture_create.c \
	  ./rpg_move/src/animation1.c \
	  ./rpg_move/src/animation2.c \
	  ./rpg_move/src/check_action.c \
	  ./rpg_move/src/check_attack1.c \
	  ./rpg_move/src/check_attack2.c \
	  ./rpg_move/src/check_dialogue.c \
	  ./rpg_move/src/check_direction.c \
	  ./rpg_move/src/check_ini_position.c \
	  ./rpg_move/src/check_mov_ani.c \
	  ./rpg_move/src/check_mov_ani2.c \
	  ./rpg_move/src/check_obs.c \
	  ./rpg_move/src/check_turn.c \
	  ./rpg_move/src/cine2.c \
	  ./rpg_move/src/cine_rect.c \
	  ./rpg_move/src/cine_sprite.c \
	  ./rpg_move/src/cinematic.c \
	  ./rpg_move/src/destroy_fc.c \
	  ./rpg_move/src/destroy_war.c \
	  ./rpg_move/src/ia_player_action.c \
	  ./rpg_move/src/move_instruction.c \
	  ./rpg_move/src/move_instruction1.c \
	  ./rpg_move/src/move_instruction2.c \
	  ./rpg_move/src/my_putstr.c \
	  ./rpg_move/src/my_rpg.c \
	  ./rpg_move/src/pause.c \
	  ./rpg_move/src/print_ele_war.c \
	  ./rpg_move/src/set_texture.c \
	  ./rpg_move/src/settex_setpos.c \
	  ./rpg_move/src/sprite_cloud.c \
	  ./rpg_move/src/sprite_sound.c \
	  ./rpg_move/src/status.c \
	  ./rpg_move/src/usage.c \
	  ./rpg_move/src/war.c \
	  ./rpg_move/src/war_sprite1.c \
	  ./rpg_move/src/war_sprite2.c \
	  ./rpg_move/src/war_win_lose.c \
	  ./rpg_move/src/win_cine.c \
	  ./rpg_move/src/mouvement_house.c \
	  ./rpg_move/src/fenetre.c	\
	  ./rpg_move/src/asked.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -g3 -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system
	 $(RM) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
