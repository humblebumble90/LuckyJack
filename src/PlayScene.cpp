/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The cpp file of the play-scene that main game is displayed.
 */
#include "PlayScene.h"
#include <SDL.h>
#include "Game.h"
#include <iomanip>

PlayScene::PlayScene()
{
	start();
}

PlayScene::~PlayScene()
{
	
}

void PlayScene::draw()
{
	//UI
	m_pSlotMachineBg->draw();
	//Labels
	m_pPlayerStatLabel->draw();
	m_pJackpotLabel->draw();
	m_pPlayerMoneyLabel->draw();
	m_pTurnLabel->draw();
	m_pWinsLabel->draw();
	m_pLosesLabel->draw();
	m_pWinRatioLabel->draw();
	m_pResultLabel->draw();
	m_pPlayerBetLabel->draw();
	//Buttons
	m_pSpinButton->draw();
	m_pResetButton->draw();
	m_pExitButton->draw();
	m_pBettingUpButton->draw();
	m_pBettingDownButton->draw();


	//Drawing Slotmachine Symbols through string values in the 
		if (lemons >= 1) 
		{
			for(int i =0 ;i < lemons; i++)
			{
				m_pLemons.push_back(new Lemon());
				for (Lemon* lemon : m_pLemons)
				{
					if(spinResult[0] == "Lemon")
					{
						lemon->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.23, Config::SCREEN_HEIGHT * 0.25));
						lemon->draw();
					}
					if (spinResult[1] == "Lemon")
					{
						lemon->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.25));
						lemon->draw();
					}
					if (spinResult[2] == "Lemon")
					{
						lemon->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.77, Config::SCREEN_HEIGHT * 0.25));
						lemon->draw();
					}
				}
			}
		}
		if (melons >= 1)
		{
			for (int i = 0; i < melons; i++)
			{
				m_pMelons.push_back(new Melon());
				for (Melon* melon : m_pMelons)
				{
					if (spinResult[0] == "Melon")
					{
						melon->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.23, Config::SCREEN_HEIGHT * 0.25));
						melon->draw();
					}
					if (spinResult[1] == "Melon")
					{
						melon->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.25));
						melon->draw();
					}
					if (spinResult[2] == "Melon")
					{
						melon->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.77, Config::SCREEN_HEIGHT * 0.25));
						melon->draw();
					}
				}
			}
		}
		if (clovers >= 1)
		{
			for (int i = 0; i < clovers; i++)
			{
				m_pClovers.push_back(new Clover());
				for (Clover* clover : m_pClovers)
				{
					if (spinResult[0] == "Clover")
					{
						clover->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.23, Config::SCREEN_HEIGHT * 0.25));
						clover->draw();
					}
					if (spinResult[1] == "Clover")
					{
						clover->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.25));
						clover->draw();
					}
					if (spinResult[2] == "Clover")
					{
						clover->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.77, Config::SCREEN_HEIGHT * 0.25));
						clover->draw();
					}
				}
			}
		}
		if (hearts >= 1)
		{
			for (int i = 0; i < hearts; i++)
			{
				m_pHearts.push_back(new Heart());
				for (Heart* heart : m_pHearts)
				{
					if (spinResult[0] == "Heart")
					{
						heart->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.23, Config::SCREEN_HEIGHT * 0.25));
						heart->draw();
					}
					if (spinResult[1] == "Heart")
					{
						heart->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.25));
						heart->draw();
					}
					if (spinResult[2] == "Heart")
					{
						heart->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.77, Config::SCREEN_HEIGHT * 0.25));
						heart->draw();
					}
				}
			}
		}
		if (cherries >= 1)
		{
			for (int i = 0; i < cherries; i++)
			{
				m_pCherrys.push_back(new Cherry());
				for (Cherry* cherry : m_pCherrys)
				{
					if (spinResult[0] == "Cherry")
					{
						cherry->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.23, Config::SCREEN_HEIGHT * 0.25));
						cherry->draw();
					}
					if (spinResult[1] == "Cherry")
					{
						cherry->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.25));
						cherry->draw();
					}
					if (spinResult[2] == "Cherry")
					{
						cherry->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.77, Config::SCREEN_HEIGHT * 0.25));
						cherry->draw();
					}
				}
			}
		}
		if (bars >= 1)
		{
			for (int i = 0; i < bars; i++)
			{
				m_pBars.push_back(new Bar());
				for (Bar* bar : m_pBars)
				{
					if (spinResult[0] == "Bar")
					{
						bar->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.23, Config::SCREEN_HEIGHT * 0.25));
						bar->draw();
					}
					if (spinResult[1] == "Bar")
					{
						bar->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.25));
						bar->draw();
					}
					if (spinResult[2] == "Bar")
					{
						bar->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.77, Config::SCREEN_HEIGHT * 0.25));
						bar->draw();
					}
				}
			}
		}
		if (bells >= 1)
		{
			for (int i = 0; i < bells; i++)
			{
				m_pBells.push_back(new Bell());
				for (Bell* bell : m_pBells)
				{
					if (spinResult[0] == "Bell")
					{
						bell->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.23, Config::SCREEN_HEIGHT * 0.25));
						bell->draw();
					}
					if (spinResult[1] == "Bell")
					{
						bell->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.25));
						bell->draw();
					}
					if (spinResult[2] == "Bell")
					{
						bell->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.77, Config::SCREEN_HEIGHT * 0.25));
						bell->draw();
					}
				}
			}
		}
		if (sevens >= 1)
		{
			for (int i = 0; i < sevens; i++)
			{
				m_pSevens.push_back(new Seven());
				for (Seven* seven : m_pSevens)
				{
					if (spinResult[0] == "Seven")
					{
						seven->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.23, Config::SCREEN_HEIGHT * 0.25));
						seven->draw();
					}
					if (spinResult[1] == "Seven")
					{
						seven->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.25));
						seven->draw();
					}
					if (spinResult[2] == "Seven")
					{
						seven->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.77, Config::SCREEN_HEIGHT * 0.25));
						seven->draw();
					}
				}
			}
		}
}

void PlayScene::update()
{
	check();
	if(m_pSpinButton->ButtonClick())
	{
		pushSpinButon();
		m_pSpinButton->setMouseButtonClicked(false);
	}
	if(m_pBettingUpButton->ButtonClick())
	{
		bettingUp();
		m_pBettingUpButton->setMouseButtonClicked(false);
	}
	if(m_pBettingDownButton->ButtonClick())
	{
		bettingDown();
		m_pBettingDownButton->setMouseButtonClicked(false);
	}
	if(m_pResetButton->ButtonClick())
	{
		resetAll();
		m_pResetButton->setMouseButtonClicked(false);
	}
}

void PlayScene::clean()
{
	
}

void PlayScene::handleEvents()
{
	int wheel = 0;
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
					m_pSpinButton->setMouseButtonClicked(true);
				m_pResetButton->setMouseButtonClicked(true);
				m_pExitButton->setMouseButtonClicked(true);
				m_pBettingUpButton->setMouseButtonClicked(true);
				m_pBettingDownButton->setMouseButtonClicked(true);
				break;
			}

			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pSpinButton->setMouseButtonClicked(false);
				m_pResetButton->setMouseButtonClicked(false);
				m_pExitButton->setMouseButtonClicked(false);
				m_pBettingUpButton->setMouseButtonClicked(false);
				m_pBettingDownButton->setMouseButtonClicked(false);
				break;
			}
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;






		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			case SDLK_SPACE:
				pushSpinButon();
				break;
			case SDLK_r:
				resetAll();
				break;
			case SDLK_KP_PLUS:
				bettingUp();
				break;
			case SDLK_KP_MINUS:
				bettingDown();
				break;
			}
			break;

		default:
			break;
		}
	}
}



void PlayScene::pushSpinButon()
{
	resetFruitally();
	if(playerBet != 0)
	{
		if (playerMoney == 0)
		{
			result = "Your money is run out. Push reset button to restart the game.";
		}
		else if (playerBet > playerMoney) {
			result = "Your betting money is greater than your money.";
		}
		else if (playerBet <= playerMoney) {
			reel();
			fruits = spinResult[0] + "-" + spinResult[1] + "-" + spinResult[2];
			result += fruits;
			determineWinnings();
			turn++;
			winRatio = (winNumber*1.0f / turn*1.0f) * 100;
			std::cout << spinResult[3] << std::endl;
		}
	}
		else
		{
			result = "You have to bet money to play the game";
		}
}

void PlayScene::resetFruitally()
{
	lemons = 0;
	m_pLemons.clear();
	melons = 0;
	m_pMelons.clear();
	clovers = 0;
	m_pClovers.clear();
	hearts = 0;
	m_pHearts.clear();
	cherries = 0;
	m_pCherrys.clear();
	bars = 0;
	m_pBars.clear();
	bells = 0;
	m_pBells.clear();
	sevens = 0;
	m_pSevens.clear();
}

void PlayScene::resetAll()
{
	playerMoney = 1000;
	winnings = 0;
	jackpot = 5000;
	turn = 0;
	playerBet = 0;
	winNumber = 0;
	lossNumber = 0;
	winRatio = 0;
}

void PlayScene::checkJackPot()
{
	/* compare two random values */
	auto jackPotTry = rand() % 51 + 1;
	auto jackPotWin = rand() % 51 + 1;
	if (jackPotTry == jackPotWin) {
		playerMoney += jackpot;
		jackpot = 1000;
		m_pJackpotLabel->setText("Jackpot result: Jackpot!!!!!!");
	}
	else
	{
		m_pJackpotLabel->setText("Jackpot result: No luck. :(");
	}
}

bool PlayScene::checkRange(int value, int lowerBounds, int upperBounds)
{
	if (value >= lowerBounds && value <= upperBounds)
	{
		return true;
	}
	else {
		return false;
	}
}

void PlayScene::reel()
{
	std::string betLine[3] = { "","","" };
	int outCome[3] = { 0,0,0 };

	for (auto spin = 0; spin < 3; spin++) {
		outCome[spin] = rand() % 65 + 1;
		if(checkRange(outCome[spin],1,27)) // 41.5% probability
		{
			betLine[spin] = "Lemon";
			lemons++;
		}
		else if(checkRange(outCome[spin],28,37)) // 15.4% probability
		{
			betLine[spin] = "Melon";
			melons++;
		}
		else if(checkRange(outCome[spin],38,46))  // 13.8% probability
		{
			betLine[spin] = "Clover";
			clovers++;
		}
		else if(checkRange(outCome[spin],47,54))// 12.3% probability
		{
			betLine[spin] = "Heart";
			hearts++;
		}
		else if(checkRange(outCome[spin],55,59))//  7.7% probability
		{
			betLine[spin] = "Cherry";
			cherries++;
		}
		else if(checkRange(outCome[spin],60,62))//  4.6% probability
		{
			betLine[spin] = "Bar";
			bars++;
		}
		else if(checkRange(outCome[spin],63,64)) //  3.1% probability
		{
			betLine[spin] = "Bell";
			bells++;
		}
		else if(checkRange(outCome[spin],65,65)) //  1.5% probability
		{
			betLine[spin] = "Seven";
			sevens++;
		}
	}
	spinResult[0] = betLine[0];
	spinResult[1] = betLine[1];
	spinResult[2] = betLine[2];
}

void PlayScene::determineWinnings()
{
	if (lemons == 0)
	{
		if (melons == 3) {
			winnings = playerBet * 10;
		}
		else if (clovers == 3) {
			winnings = playerBet * 20;
		}
		else if (hearts == 3) {
			winnings = playerBet * 30;
		}
		else if (cherries == 3) {
			winnings = playerBet * 40;
		}
		else if (bars == 3) {
			winnings = playerBet * 50;
		}
		else if (bells == 3) {
			winnings = playerBet * 75;
		}
		else if (sevens == 3) {
			winnings = playerBet * 100;
		}
		else if (lemons == 2) {
			winnings = playerBet * 2;
		}
		else if (clovers == 2) {
			winnings = playerBet * 2;
		}
		else if (hearts == 2) {
			winnings = playerBet * 3;
		}
		else if (cherries == 2) {
			winnings = playerBet * 4;
		}
		else if (bars == 2) {
			winnings = playerBet * 5;
		}
		else if (bells == 2) {
			winnings = playerBet * 10;
		}
		else if (sevens == 2) {
			winnings = playerBet * 20;
		}
		else if (sevens == 1) {
			winnings = playerBet * 5;
		}
		else {
			winnings = playerBet * 1;
		}
		winNumber++;
		playerMoney += winnings;
		result = "Win! You won " + std::to_string(winnings) + "$";
		checkJackPot();
		
	}
	else
	{
		lossNumber++;
		result = "Lose";
		playerMoney -= playerBet;
	}

}

glm::vec2 PlayScene::getMousePosition()
{
	return m_mousePosition;
}

//Check values or necessary things
void PlayScene::check()
{
	m_pSpinButton->setMousePosition(m_mousePosition);
	m_pSpinButton->ButtonClick();
	m_pResetButton->setMousePosition(m_mousePosition);
	m_pResetButton->ButtonClick();
	m_pExitButton->setMousePosition(m_mousePosition);
	m_pExitButton->ButtonClick();
	m_pBettingUpButton->setMousePosition(m_mousePosition);
	m_pBettingUpButton->ButtonClick();
	m_pBettingDownButton->setMousePosition(m_mousePosition);
	m_pBettingDownButton->ButtonClick();

	m_pPlayerBetLabel->setText("Player Bet: " + std::to_string(playerBet));
	m_pTurnLabel->setText("Turn: " + std::to_string(turn));
	m_pPlayerMoneyLabel->setText("Player Money: " + std::to_string(playerMoney));
	m_pWinsLabel->setText("Wins: " + std::to_string(winNumber));
	m_pLosesLabel->setText("Losses: " + std::to_string(lossNumber));
	m_pWinRatioLabel->setText("Win ratio: " + std::to_string(winRatio) + "%");
	m_pResultLabel->setText("Result: " + result);
}

void PlayScene::bettingUp()
{
	playerBet += 10;
}

void PlayScene::bettingDown()
{
	if(playerBet >= 10)
	{
		playerBet -= 10;
	}
	else
	{
		result = "Betting amount cannot be negative value.";
	}
}

void PlayScene::start() /* Initialize to instantiate several objects. Static objects are just initialized,
							but flexible objects are updated in the check() method.*/
{
	m_pSlotMachineBg = new SlotMachineBg();
	addChild(m_pSlotMachineBg);
	m_pSpinButton = new SpinButton();
	m_pSpinButton->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.75f, Config::SCREEN_HEIGHT * 0.95f));
	m_pSpinButton->setParent(this);
	addChild(m_pSpinButton);

	m_pResetButton = new ResetButton();
	m_pResetButton->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.95f));
	m_pResetButton->setParent(this);
	addChild(m_pResetButton);

	m_pExitButton = new ExitButton();
	m_pExitButton->setParent(this);
	addChild(m_pExitButton);

	m_pBettingUpButton = new BettingUpButton();
	m_pBettingUpButton->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.18f, Config::SCREEN_HEIGHT * 0.8f));
	m_pBettingUpButton->setParent(this);
	addChild(m_pBettingUpButton);

	m_pBettingDownButton = new BettingDownButton();
	m_pBettingDownButton->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.8f));
	m_pBettingDownButton->setParent(this);
	addChild(m_pBettingDownButton);

	SDL_Color black = { 0,0,0,255 };
	m_pPlayerStatLabel = new Label("Player Statistics", "AlexandriaFLF-Bold", 20,
		black, glm::vec2(Config::SCREEN_WIDTH * 0.5f, Config::SCREEN_HEIGHT * 0.58f));
	m_pPlayerStatLabel->setParent(this);
	addChild(m_pPlayerStatLabel);

	m_pJackpotLabel = new Label("Jackpot: " + std::to_string(jackpot), "AlexandriaFLF-Bold", 15,
		black, glm::vec2(Config::SCREEN_WIDTH * 0.35f, Config::SCREEN_HEIGHT * 0.65f), true, false);
	m_pJackpotLabel->setParent(this);
	addChild(m_pJackpotLabel);

	m_pPlayerMoneyLabel = new Label("Player Money: " + std::to_string(playerMoney), "AlexandriaFLF-Bold", 15,
		black, glm::vec2(Config::SCREEN_WIDTH * 0.35f, Config::SCREEN_HEIGHT * 0.67f),true,false);
	m_pPlayerMoneyLabel->setParent(this);
	addChild(m_pPlayerMoneyLabel);

	m_pTurnLabel = new Label("Turn: " + std::to_string(turn), "AlexandriaFLF-Bold", 15,
		black, glm::vec2(Config::SCREEN_WIDTH * 0.35f, Config::SCREEN_HEIGHT * 0.69f),true,false);
	m_pTurnLabel->setParent(this);
	addChild(m_pTurnLabel);

	m_pWinsLabel = new Label("Wins: " + std::to_string(winNumber), "AlexandriaFLF-Bold", 15,
		black, glm::vec2(Config::SCREEN_WIDTH * 0.35f, Config::SCREEN_HEIGHT * 0.71f), true, false);
	m_pWinsLabel->setParent(this);
	addChild(m_pWinsLabel);

	m_pLosesLabel = new Label("Losses: " + std::to_string(lossNumber), "AlexandriaFLF-Bold",15,
		black, glm::vec2(Config::SCREEN_WIDTH * 0.35f,Config::SCREEN_HEIGHT * 0.73f), true, false);
	m_pLosesLabel->setParent(this);
	addChild(m_pLosesLabel);

	m_pWinRatioLabel = new Label("Win ratio: " + std::to_string(winRatio) + "%", "AlexandriaFLF-Bold",15,
		black, glm::vec2(Config::SCREEN_WIDTH * 0.35f, Config::SCREEN_HEIGHT*0.75f),true,false);
	m_pWinRatioLabel->setParent(this);
	addChild(m_pWinRatioLabel);

	m_pResultLabel = new Label("Result: " + result, "AlexandriaFLF-Bold", 15,
		black,glm::vec2(Config::SCREEN_WIDTH * 0.35f, Config::SCREEN_HEIGHT * 0.77f), true, false);
	m_pResultLabel->setParent(this);
	addChild(m_pResultLabel);

	m_pJackpotLabel = new Label("Jackpot Result: Not played yet","AlexandriaFLF-Bold",15,
	black, glm::vec2(Config::SCREEN_WIDTH * 0.35f, Config::SCREEN_HEIGHT * 0.79f),true,false);

	m_pPlayerBetLabel = new Label("Player bet: " + std::to_string(playerBet), "AlexandriaFLF-Bold", 15,
		black, glm::vec2(Config::SCREEN_WIDTH * 0.15f, Config::SCREEN_HEIGHT * 0.65f), true, false);
	m_pPlayerBetLabel->setParent(this);
	addChild(m_pPlayerBetLabel);
}
