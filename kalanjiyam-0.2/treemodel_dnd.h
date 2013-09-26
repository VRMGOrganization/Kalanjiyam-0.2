#ifndef GTKMM_TREEMODEL_DND_H
#define GTKMM_TREEMODEL_DND_H

#include <gtkmm.h>

class TreeModel_Dnd : public Gtk::TreeStore
{
  protected:
  TreeModel_Dnd();
  public:
  class Tree_View_Test_Columns : public Gtk::TreeModel::ColumnRecord
  {
    public:
    Tree_View_Test_Columns()
    { 
    add(my_Id_Number); add(my_Name_String);
    }
    Gtk::TreeModelColumn<Glib::RefPtr<Gdk::Pixbuf> > my_Id_Number;
    Gtk::TreeModelColumn<Glib::ustring> my_Name_String;
  };

  Tree_View_Test_Columns my_Tree_View_Test_Columns;
  static Glib::RefPtr<TreeModel_Dnd> create();
  Gtk::CellRendererText m_cellrenderer_validated;
  Gtk::TreeView::Column pcloumn;
  bool m_validate_retry;
  Glib::ustring m_invalid_text_for_retry;
};

#endif //GTKMM_TREEMODEL_DND_H
