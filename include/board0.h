#ifndef BOARD0_H
#define BOARD0_H

#include "struct.h"

struct s_board_t	*map_clone(struct s_board_t *src);

void	board_show(struct s_board_t *board);

void	resolutions_init(struct s_resolutions_t *resolutions);

void	resolutions_append(struct s_resolutions_t *resolutions, struct s_board_t *board);

#endif
