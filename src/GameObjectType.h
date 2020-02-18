/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: header file of enum that defines type of game objects.
 */
#pragma once
#ifndef __GAME_OBJECT_TYPE__
#define __GAME_OBJECT_TYPE__
enum GameObjectType {
	NONE = -1,
	START_BUTTON,
	SPIN_BUTTON,
	RESET_BUTTON,
	EXIT_BUTTON,
	BACKGROUND,
	BETTING_UP_BUTTON,
	BETTING_DOWN_BUTTON,
	SLOT_MACHINE_BG,
	BELL,
	BAR,
	LEMON,
	CHERRY,
	MELON,
	CLOVER,
	HEART,
	SEVEN,
	BLANK,
	NUM_OF_TYPES
};

#endif /* defined (__GAME_OBJECT_TYPE__)*/