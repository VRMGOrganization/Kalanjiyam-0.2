#ifndef GTKMM_IMAGETREEMODEL_DND_H
#define GTKMM_IMAGETREEMODEL_DND_H

#include <gtkmm.h>

class ImageTreeModel_Dnd : public Gtk::TreeStore
{
  protected:
  ImageTreeModel_Dnd();
  public:
  class Image_Tree_View_Test_Columns : public Gtk::TreeModel::ColumnRecord
  {
    public:
    Image_Tree_View_Test_Columns()
    { 
    add(my_Image_String);
    add(my_Image_Number); 
    }
    Gtk::TreeModelColumn<Glib::RefPtr<Gdk::Pixbuf> > my_Image_String;
    Gtk::TreeModelColumn<Glib::ustring> my_Image_Number;
  };
  Image_Tree_View_Test_Columns Image_my_Tree_View_Test_Columns;
  static Glib::RefPtr<ImageTreeModel_Dnd> create();
  Gtk::CellRendererText m_cellrenderer_validated;
  Gtk::TreeView::Column pcloumn;
  bool m_validate_retry;
  Glib::ustring m_invalid_text_for_retry;
};

#endif //GTKMM_IMAGETREEMODEL_DND_H
