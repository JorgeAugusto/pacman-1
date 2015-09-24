#ifndef FUNNY_ANIMATION_H
#define FUNNY_ANIMATION_H
#include "screen.h"
#include "pacman_figur.h"
#include "ghost_figur.h"
#include "labyrinth.h"

class FunnyAnimation {
	public:
		FunnyAnimation();
		~FunnyAnimation();
		void animate();
	private:
		static const int MIN_FRAME_DURATION = 30;
		static const int NUM_FRUITS = 8;
		static const int ANIMATION_WAIT = 3000;
		static const int NUM_ANIMATIONS = 5;
		SDL_Rect animRect, animRectTmp;
		int xFruits[NUM_FRUITS], timeScore[NUM_FRUITS];
		bool redrawMenu;
		int animation_counter, timeScore200, timeScore400, timeScore800, timeScore1600;
		int xScore200, xScore400, xScore800, xScore1600;
		int xTarget;
		int idxAnimation, animationPart, animationTime, lastAnimTime, animWaitUntil;
		
		Screen *screen;
		Pacman *pacman;
		Ghost **ghosts;
		Labyrinth *labyrinth;
		SDL_Color textwhite = {255, 255, 255, 0};
		SDL_Color textgray    = {191, 191, 191, 0};
		SDL_Color textyellow  = {255, 255,   0, 0};
		SDL_Color textred     = {255,   0,   0, 0};
		SDL_Color textmagenta = {255,   0, 255, 0};
		SDL_Color textcyan    = {  0, 255, 255, 0};
		SDL_Color textorange  = {255, 127,   0, 0};
		TTF_Font *font, *smallFont, *largeFont, *veryLargeFont, *hugeFont;
		SDL_Surface *animScore200, *animScore400, *animScore800, *animScore1600;
		SDL_Surface *pacmanName, *blinkyName, *pinkyName, *inkyName, *clydeName;
		SDL_Surface **animFruits, **animScores;
};
#endif