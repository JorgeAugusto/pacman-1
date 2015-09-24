#ifndef MENU_MAIN_H
#define MENU_MAIN_H
#include "pacman_figur.h"
#include "ghost_figur.h"
#include "menu_options.h"
#include "menu_about.h"
#include "funny_animation.h"

class MenuMain : public Menu {
	public:
		MenuMain();
		~MenuMain();
		int show();
	private:
		enum Entries {BACK, ABOUT, OPTIONS, STARTGAME};
		Menu *menuoptions;
		Menu *menuabout;
		SDL_Surface *appTitle1, *appTitle2, *titlePacman, *version;
		int handleSelection();
		void drawTitle();
};
#endif
