/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of the play-scene that main game is displayed.
 */
#pragma once
#ifndef __PLAY_SCENE__
#define __PLAY_SCENE__
#include "Scene.h"
#include "SlotMachineBg.h"
#include "SpinButton.h"
#include "Resetbutton.h"
#include "Bell.h"
#include "Bar.h"
#include "Cherry.h"
#include "Clover.h"
#include "Heart.h"
#include "Lemon.h"
#include "Melon.h"
#include "Seven.h"
#include "ExitButton.h"
#include "Label.h"
#include "BettingUpButton.h"
#include "BettingDownButton.h"


class PlayScene:public Scene
{
public:
	PlayScene();
	~PlayScene();

	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;
	
	void pushSpinButon();
	void resetFruitally();
	void resetAll();
	void checkJackPot();
	bool checkRange(int value, int lowerBounds, int upperBounds);
	void reel();
	void determineWinnings();
	
	glm::vec2 PlayScene::getMousePosition();
private:

	//UI
	//Buttons
	SlotMachineBg* m_pSlotMachineBg;
	SpinButton* m_pSpinButton;
	ResetButton* m_pResetButton;
	ExitButton* m_pExitButton;
	BettingUpButton* m_pBettingUpButton;
	BettingDownButton* m_pBettingDownButton;
	//Labels
	glm::vec2 m_mousePosition;
	Label* m_pPlayerStatLabel;
	Label* m_pJackpotLabel;
	Label* m_pPlayerMoneyLabel;
	Label* m_pTurnLabel;
	Label* m_pWinsLabel;
	Label* m_pLosesLabel;
	Label* m_pWinRatioLabel;
	Label* m_pResultLabel;
	Label* m_pPlayerBetLabel;
	Label* m_pJackpotResultLabel;

	//Slotmachine Symbols

	std::vector<Lemon*> m_pLemons;
	std::vector<Melon*> m_pMelons;
	std::vector<Clover*> m_pClovers;
	std::vector<Heart*> m_pHearts;
	std::vector<Cherry*> m_pCherrys;
	std::vector<Bar*> m_pBars;
	std::vector<Bell*> m_pBells;
	std::vector<Seven*> m_pSevens;

	//SlotMachine properties
	int playerMoney = 1000;
	int winnings = 0;
	int jackpot = 5000;
	int turn = 0;
	int playerBet = 0;
	int winNumber = 0;
	int lossNumber = 0;
	std::string spinResult[3] = {"","",""};
	std::string fruits = "";
	float winRatio = 0.0f;
	int lemons = 0;
	int melons = 0;
	int clovers = 0;
	int hearts = 0;
	int cherries = 0;
	int bars = 0;
	int bells = 0;
	int sevens = 0;
	std::string result = "Not played yet";

	//Methods
	void check();
	void bettingUp();
	void bettingDown();

};
#endif /*Defined __PLAY_SCENE__*/

