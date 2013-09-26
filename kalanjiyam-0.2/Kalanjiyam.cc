#include <gtkmm.h>

/*Directory Access*/
#include <sys/types.h> 
#include <sys/stat.h>
/*Directory Access*/

/*Directory deletion*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ftw.h>
/*Directory deletion*/

#include "kalanjiyamwindow.h"
#include "kalanjiyamwindow.cc"

int main(int argc, char* argv[])
{
  Gtk::Main app(&argc, &argv);
  KalanjiyamWindow sw ;
  /*Directory existance check begins*/
  std::string Kalanjiyam_temp_folder_path = "/tmp/Kalanjiyam";
  //gtk_rc_parse ( "test.rc" );
  if ( access( Kalanjiyam_temp_folder_path.c_str(), 0 ) == 0 )
  {
    try
    {
      if(system("exec rm -r /tmp/Kalanjiyam")!=0)
      {
      throw 1;	
      }
    }
    catch(int e)
    {
      pInfoLabel->set_text("Kalanjiyam - 0.2 is Unable to Access Temp Directory...");
      pInfoDialog->show();
    }
  }
  /*Directory existance check ends*/

  /*Folder creation begins */
  mkdir("/tmp/Kalanjiyam",0777);
  mkdir("/tmp/Kalanjiyam/Images",0777);
  mkdir("/tmp/Kalanjiyam/Images/convert_png",0777);
  mkdir("/tmp/Kalanjiyam/Thumbnails",0777);
  /*Folder Creation ends */
  Gtk::Main::run(*pDialog);
  
  return 0;
}
