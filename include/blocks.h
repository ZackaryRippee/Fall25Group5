#ifndef _BLOCKS_H_
#define _BLOCKS_H_

/*
 * XBoing - An X11 bl#define TINY_BLOCK_WIDTH        21  /* Width for tiny blocks (TIMER_BLK) */
#define TINY_BLOCK_HEIGHT 21 /* Height for tiny blocks (TIMER_BLK) */

/*
 *  Animation state
 */
#define INITIAL_SLIDE_FRAME 0 /* Initial animation frame for blocks */

/*
 *  Dependencies on other include files:t style computer game
 *
 * (c) Copyright 1993, 1994, 1995, Justin C. Kibell, All Rights Reserved
 *
 * The X Consortium, and any party obtaining a copy of these files from
 * the X Consortium, directly or indirectly, is granted, free of charge, a
 * full and unrestricted irrevocable, world-wide, paid up, royalty-free,
 * nonexclusive right and license to deal in this software and
 * documentation files (the "Software"), including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons who receive
 * copies from any such party to do so.  This license includes without
 * limitation a license to do the foregoing actions under any patents of
 * the party supplying this software to the X Consortium.
 *
 * In no event shall the author be liable to any party for direct, indirect,
 * special, incidental, or consequential damages arising out of the use of
 * this software and its documentation, even if the author has been advised
 * of the possibility of such damage.
 *
 * The author specifically disclaims any warranties, including, but not limited
 * to, the implied warranties of merchantability and fitness for a particular
 * purpose.  The software provided hereunder is on an "AS IS" basis, and the
 * author has no obligation to provide maintenance, support, updates,
 * enhancements, or modifications.
 */

/*
 * =========================================================================
 *
 * $Id: blocks.h,v 1.1.1.1 1994/12/16 01:36:50 jck Exp $
 * $Source: /usr5/legends/jck/xb/master/xboing/include/blocks.h,v $
 * $Revision: 1.1.1.1 $
 * $Date: 1994/12/16 01:36:50 $
 *
 * $Log: blocks.h,v $
 * Revision 1.1.1.1  1994/12/16  01:36:50  jck
 * The XBoing distribution requires configuration management. This is why the
 * cvs utility is being used. This is the initial import of all source etc..
 *
 *
 * =========================================================================
 */

/*
 *  Block animation frame counts
 */
#define EXPLODING_BLOCK_FRAMES 3 /* Number of frames for exploding blocks */
#define BONUS_FRAMES 4			 /* Number of frames for bonus animations */
#define DEATH_FRAMES 5			 /* Number of frames for death animations */
#define COUNTER_FRAMES 6		 /* Number of frames for counter block */
#define ROAMER_FRAMES 5			 /* Number of frames for roamer animations */
#define SFX_SHAKE_FRAMES 140     /* Number of frames for shaking frame animations*/

/*
 *  Block dimensions
 */
#define STANDARD_BLOCK_WIDTH 40	 /* Standard width for most blocks */
#define STANDARD_BLOCK_HEIGHT 20 /* Standard height for most blocks */
#define LARGE_BLOCK_WIDTH 50	 /* Width for large blocks (BLACK_BLK) */
#define LARGE_BLOCK_HEIGHT 30	 /* Height for large blocks (BLACK_BLK) */
#define SQUARE_BLOCK_SIZE 30	 /* Size for square blocks (BOMB_BLK, DEATH_BLK) */
#define SMALL_BLOCK_WIDTH 27	 /* Width for small blocks */
#define SMALL_BLOCK_HEIGHT 27	 /* Height for small blocks */
#define TINY_BLOCK_WIDTH 21		 /* Width for tiny blocks (TIMER_BLK) */
#define TINY_BLOCK_HEIGHT 21	 /* Height for tiny blocks (TIMER_BLK) */

/* Additional specific block dimensions and drawing offsets */
#define DYNAMITE_WIDTH 29
#define DYNAMITE_HEIGHT 15
#define SHORT_BLOCK_HEIGHT 15 /* Used for paddle/mgun/dynamite short blocks */
#define BULLET_XOFF1 6
#define BULLET_XOFF2 15
#define BULLET_XOFF3 24
#define BULLET_XOFF4 33
#define BULLET_YOFF 10
#define STICKY_WIDTH 32
#define ROAMER_WIDTH 25
#define REVERSE_WIDTH 33
#define REVERSE_HEIGHT 16
#define EXTRABALL_HEIGHT 19
#define HYPERSPACE_SIZE 31
#define MGUN_WIDTH 35
#define WALLOFF_HEIGHT 23

/*
 *  Dependencies on other include files:
 */

// TODO: Remove X11 #include <X11/Xlib.h>
#include <faketypes.h>

/*
 *  Constants and macros:
 */

/*
 * ALWAYS change the SetupBlockInfo() function as well if you change defines.
 */

#define NONE_BLK -2
#define KILL_BLK -1

#define RED_BLK 0
#define BLUE_BLK 1
#define GREEN_BLK 2
#define TAN_BLK 3
#define YELLOW_BLK 4
#define PURPLE_BLK 5
#define BULLET_BLK 6
#define BLACK_BLK 7
#define COUNTER_BLK 8
#define BOMB_BLK 9
#define DEATH_BLK 10
#define REVERSE_BLK 11
#define HYPERSPACE_BLK 12
#define EXTRABALL_BLK 13
#define MGUN_BLK 14
#define WALLOFF_BLK 15
#define MULTIBALL_BLK 16
#define STICKY_BLK 17
#define PAD_SHRINK_BLK 18
#define PAD_EXPAND_BLK 19
#define DROP_BLK 20
#define MAXAMMO_BLK 21
#define ROAMER_BLK 22
#define TIMER_BLK 23
#define RANDOM_BLK 24

#define DYNAMITE_BLK 25
#define BONUSX2_BLK 26
#define BONUSX4_BLK 27
#define BONUS_BLK 28
#define BLACKHIT_BLK 29

#define MAX_STATIC_BLOCKS 25
#define MAX_BLOCKS 30

#define MAX_ROW 18
#define MAX_COL 9

#define BLOCK_WIDTH 40
#define BLOCK_HEIGHT 20

#define SPACE 7

/* Default hit point values for block types */
#define HP_NONE_BLK 0
#define HP_KILL_BLK 0
#define HP_RED_BLK 100
#define HP_BLUE_BLK 110
#define HP_GREEN_BLK 120
#define HP_TAN_BLK 130
#define HP_YELLOW_BLK 140
#define HP_PURPLE_BLK 150
#define HP_BOMB_BLK 50
#define HP_ROAMER_BLK 400
#define HP_COUNTER_BLK 200
#define HP_EXTRABALL_BLK 100
#define HP_GENERIC_POWERUP 100

#define REGION_NONE 0
#define REGION_TOP 1
#define REGION_BOTTOM 2
#define REGION_LEFT 4
#define REGION_RIGHT 8

#define EXPLODE_DELAY 10
#define BONUS_DELAY 150
#define BONUS_LENGTH 1500
#define NUMBER_OF_BULLETS_NEW_LEVEL 4
#define DEATH_DELAY1 100
#define DEATH_DELAY2 700
#define EXTRABALL_DELAY 300
#define RANDOM_DELAY 500
#define DROP_DELAY 1000
#define INFINITE_DELAY 9999999
#define ROAM_EYES_DELAY 300
#define ROAM_DELAY 1000
#define EXTRA_TIME 20

/*
 *  Type declarations:
 */

struct blockInfo
{
	int blockType;
	int width;
	int height;
	int slide;
};

struct aBlock
{
	/* General properties of the block */
	int occupied;
	int blockType;
	int hitPoints;

	/* Used when block explodes */
	int exploding;
	int explodeStartFrame;
	int explodeNextFrame;
	int explodeSlide;

	/* Used for animation of object */
	int currentFrame;
	int nextFrame;
	int lastFrame;

	/* Used for positioning of block in arena */
	int blockOffsetX;
	int blockOffsetY;
	int x;
	int y;
	int width;
	int height;

	/* Used for ball collision with block */
	Region regionTop;
	Region regionBottom;
	Region regionLeft;
	Region regionRight;

	/* Indexes into animation frames for object */
	int counterSlide; /* For counter blocks only */
	int bonusSlide;	  /* For bonus blocks only */

	/* Special types of block flags */
	int random;
	int drop;
	int specialPopup;
	int explodeAll;

	/* Used for splitting of the ball in multiball mode */
	int ballHitIndex;
	int balldx;
	int balldy;
};

typedef struct aBlock **BLOCKPTR;

/*
 *  Function prototypes:
 */

void FreeBlockPixmaps(Display *display);
void InitialiseBlocks(Display *display, Window window, Colormap colormap);
void DrawBlock(Display *display, Window window, int row, int col,
			   int blockType);
void ExplodeBlocksPending(Display *display, Window window);
void RedrawAllBlocks(Display *display, Window window);
void DrawTheBlock(Display *display, Window window, int x, int y,
				  int blockType, int slide, int r, int c);
void ExplodeBlockType(Display *display, Window window, int x, int y,
					  int row, int col, int type, int slide);
void AddNewBlock(Display *display, Window window, int row, int col,
				 int blockType, int counterSlide, int drawIt);
void HandlePendingAnimations(Display *display, Window window);
void AddBonusBlock(Display *display, Window window, int *row, int *col,
				   int type);
void ClearBlockArray(void);
int StillActiveBlocks(void);
void SkipToNextLevel(Display *display, Window window);
void PlaySoundForBlock(int type);
void AddSpecialBlock(Display *display, Window window, int *row, int *col,
					 int type, int kill_shots);
void HandlePendingSpecials(Display *display, Window window, int type,
						   int r, int c);
int GetRandomType(int blankBlock);
void SetExplodeAllType(Display *display, Window window, int type);
void EraseVisibleBlock(Display *display, Window window, int row, int col);
void ClearBlock(int row, int col);
void SetupBlockInfo(void);

extern struct aBlock blocks[MAX_ROW][MAX_COL];
extern int rowHeight;
extern int colWidth;
extern int blocksExploding;
extern Pixmap exyellowblock[3], exyellowblockM[3];
extern struct blockInfo BlockInfo[MAX_BLOCKS];

#endif
