#ifndef STRUCT_H
#define STRUCT_H

typedef struct s_board_t
{
	int	values[4][4];
	struct	s_board_t	*next;
}				t_board_t;

typedef struct s_conditions_t
{
	int	values[16];
}				t_conditions_t;

typedef struct s_resolutions_t
{
	struct s_board_t *first;
	struct s_board_t *last;
}				t_resolutions_t;

typedef struct s_possibilities_t
{
	unsigned int	count;
	unsigned int	values[11][4];
}					t_possibilities_t;

#endif

