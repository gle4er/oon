#include "lab3.h"

extern int SCREEN_WIDTH;
extern int SCREEN_HEIGHT;

int main()
{
    tPoint point;     
    tLine line;
    tCircle circle;
    tRectangle rect;
    tRiangle trig;
    initGfx(SCREEN_WIDTH, SCREEN_HEIGHT);
	bool quit = false;
	SDL_Event e;
	while(!quit) {
		while(SDL_PollEvent( &e ) != 0)
			if(e.type == SDL_QUIT) 
				quit = true;
        drawThatShit(point, line, circle, rect, trig);
        point.move();
        line.move();
        circle.move();
        rect.move();
        trig.move();
    }
    clearJunk();
    return 0;
}