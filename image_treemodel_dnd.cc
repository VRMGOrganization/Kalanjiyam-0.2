#include "kalanjiyamwindow.h"
#include "image_treemodel_dnd.h"
#include <iostream>

ImageTreeModel_Dnd::ImageTreeModel_Dnd()
{
  set_column_types(Image_my_Tree_View_Test_Columns);
}

Glib::RefPtr<ImageTreeModel_Dnd> ImageTreeModel_Dnd::create()
{
  return Glib::RefPtr<ImageTreeModel_Dnd>( new ImageTreeModel_Dnd() );
}

