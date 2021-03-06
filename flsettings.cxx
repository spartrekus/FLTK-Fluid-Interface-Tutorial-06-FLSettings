// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "flsettings.h"
#include <stdio.h>
#include <stdlib.h>

static void cb_Setterm(Fl_Button*, void*) {
  system( "   setterm -blank 0 -powerdown 0 ") ;
}

static void cb_xterm(Fl_Button*, void*) {
  system( " xterm -bg black -fg green " );
}

static void cb_xterm1(Fl_Button*, void*) {
  system( " xterm -fa 15 -bg black -fg green " );
}

Fl_Double_Window* make_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(555, 295);
    w = o;
    { Fl_Button* o = new Fl_Button(15, 110, 145, 35, "Setterm (noblank)");
      o->callback((Fl_Callback*)cb_Setterm);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(15, 35, 145, 35, "xterm (default)");
      o->callback((Fl_Callback*)cb_xterm);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(15, 75, 145, 30, "xterm (msx)");
      o->callback((Fl_Callback*)cb_xterm1);
    } // Fl_Button* o
    o->end();
  } // Fl_Double_Window* o
  w->show();
  return w;
}

int main() {
  printf("Hello, World!\n");
  
   make_window();
  
   Fl::run();
}
