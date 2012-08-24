#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CatPicture3App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void CatPicture3App::setup()
{
}

void CatPicture3App::mouseDown( MouseEvent event )
{
}

void CatPicture3App::update()
{
}

void CatPicture3App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( CatPicture3App, RendererGl )
