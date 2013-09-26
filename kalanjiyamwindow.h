#ifndef _GOOCANVASMM_KALANJIYAMWINDOW_H
#define _GOOCANVASMM_KALANJIYAMWINDOW_H

#include <gtkmm.h>
#include <goocanvasmm.h>  
#include "treemodel_dnd.h"
#include "image_treemodel_dnd.h"
#include <string>

const char* open_file_name; 

class KalanjiyamWindow : public Gtk::Window
{
  public:
  KalanjiyamWindow();
  //protected:
  Goocanvas::Canvas m_canvas;
  Glib::RefPtr<Goocanvas::Rect> m_table;
  Glib::RefPtr< Goocanvas::Item > _dragging ;
  int _drag_x ;
  int _drag_y ;

  double xx;
  double yy;
  double ww;
  double hh;
  void first(int a,int b,int c,int d);
  void second(int a,int b,int c,int d);
  void third(int a,int b,int c,int d);
  void fourth(int a,int b,int c,int d);
  void fifth(int a,int b,int c,int d);
  void sixth(int a,int b,int c,int d);
  void seventh(int a,int b,int c,int d);
  void eighth(int a,int b,int c,int d);
  Glib::RefPtr< Goocanvas::Item > changed_item;
  Glib::RefPtr< Goocanvas::Item > control_path;
  Glib::RefPtr< Goocanvas::Item > control_item1;
  Glib::RefPtr< Goocanvas::Item > control_item2;
  Glib::RefPtr< Goocanvas::Item > control_item3;
  Glib::RefPtr< Goocanvas::Item > control_item4;
  Glib::RefPtr< Goocanvas::Item > control_item5;
  Glib::RefPtr< Goocanvas::Item > control_item6;
  Glib::RefPtr< Goocanvas::Item > control_item7;
  Glib::RefPtr< Goocanvas::Item > control_item8;
  int control_item_num;	

  virtual bool on_button_press_event(GdkEventButton* event);
  double new_x;
  double new_y;
  double old_x;
  double old_y;
  double x;
  double y;
  double z;

  /*Brush tool variable declaratin starts*/ 
  double new_a;
  double new_b;
  double a;
  double b;
  double c;
  /*Brush tool variable declaratin ends*/ 

  double i;
  double j;

  /*Arroow tool variable declaration starts*/
  double w;
  double h;
  double p1_x,p1_y,p2_x,p2_y,p3_x,p3_y;
  /*Arroow tool variable declaration ends*/
  /*star*/
  double p4_x,p4_y,p5_x,p5_y;	
  /*star*/

  /*star1*/
  double p6_x,p6_y,p7_x,p7_y,p8_x,p8_y,p9_x,p9_y,p10_x,p10_y;	
  /*star1*/

  bool on_rect_button_press(const Glib::RefPtr<Goocanvas::Item>& target, GdkEventButton* event);
  bool on_rect_button_release_event(const Glib::RefPtr<Goocanvas::Item>& item, GdkEventButton* event);
  bool on_rect_motion_notify_event(const Glib::RefPtr<Goocanvas::Item>& item, GdkEventMotion* event);

  bool on_rect_leave_notify_event(const Glib::RefPtr<Goocanvas::Item>& item,  GdkEventCrossing* event);
  bool on_rect_enter_notify_event(const Glib::RefPtr<Goocanvas::Item>& item,  GdkEventCrossing* event);


  void select_move();   //select_move tool signal declaration
  //void rotate();
  bool on_rotate_motion_notify_event(const Glib::RefPtr<Goocanvas::Item>& item, GdkEventMotion* event);

  void draw_line_shape();   //Line tool signal declaration
  void draw_brush(); //Brush tool signal declaration
  void draw_eraser(); //Eraser tool signal declaration
  void draw_ellipse(); //Ellipse tool signal declaration
  void draw_rectangle(); //Ellipse tool signal declaration
  void draw_star_shape(); //Star tool signal declaration
  void draw_star1_shape(); //Star1 tool signal declaration
  void draw_triangle_shape(); //Triangle tool signal declaration
  void draw_arrow_shape(); //Arrow tool signal declaration
  void show_img_collection(); //Image collection signal declaration
  void show_thumbnail();
  void draw_polyline(); //Polyline tool signal declaration
  void draw_curve(); //Curve tool signal declaration
  void zoom_in(); //zoom_in tool connection
  void zoom_out(); //zoom_out tool connection
  void full_screen();		
  void about_okay();
  bool on_Window_key_press_event(GdkEventKey *Key);
  bool on_Window_key_release_event(GdkEventKey *Key);
  bool on_PopUpWindow_key_press_event(GdkEventKey *Key);
  
  void show_cursor(int);
  std::string open_file_dialog_box();
  /*Combobox begins*/
  //Signal handlers:
  void on_combo_changed();
  void preference_on_combo_changed();
  void destination_on_combo_changed();
  //Child widgets:
  Gtk::ComboBoxText m_Combo;
  Gtk::ComboBoxText preference_m_Combo;
  Gtk::ComboBoxText source_Combo;
  Gtk::ComboBoxText destination_Combo;  
  /*Combobox ends*/
  bool on_button_press_event1(GdkEventButton* event);
  bool on_button_press_event2(GdkEventButton* event);

  /*file menu signal declaration begins*/
  //void file_new();
  void reset_global_variables();
  void reset_window();
  void file_new();
  void file_open();
  void file_save();
  void file_saveAs(); 
  void file_existance_check_for_save();
  void file_existance_check_for_saveAs();
  std::string combine_kljm_file_contents();
  std::string Encrypt(std::string &strTarget);
  std::string Decrypt(std::string strTarget);
  void file_properties();
  void file_properties_okay();
  
  void file_export(); 
  void file_export1(); 
  void file_export2(); 
  void file_export_full(); 
  void file_export_to_pdf(); 
  void file_export_to_pdf1(); 
  void file_export_to_pdf2(); 
  void file_export_to_pdf_full(); 

  void file_pPreview1(); 
  void file_pPreview2(); 
  void file_pPreview3(); 
  void show_pdf_file(Glib::ustring);
  void file_print(Glib::ustring);
  void file_print_all();
  void file_print_file1();
  void file_print_file2();
  void file_print_file3();

  void file_quit_confirm(); 
  void file_quit(); 
  /*file menu signal declaration ends*/

  /*edit menu signal declaration begins*/
  //void edit_undo();
  //void edit_redo();
  //void edit_cut(); 
  void edit_copy();
  void edit_paste();
  void edit_undo();
  void edit_redo();
  void edit_moveUp();
  void edit_moveDown();
  void edit_moveLeft();
  void edit_moveRight();
  void edit_group();	
  void edit_ungroup();
  void edit_raise_to_front();
  void edit_raise_to_top();
  void edit_lower_to_back();
  void edit_lower_to_bottom(); 
  void edit_clear_selected_object();
  void edit_clear_window(); 
  void edit_clear_window1(); 
  void clear_global_varaiables_values(); 
  /*edit menu signal declaration ends*/

  /*view menu signal declaration begins*/  
  void view_toolbar(); 
  void view_propertyBar();
  void view_toolPallete();
  void view_kalanjiyamInfo();
  void view_thumbnail();   
  void view_grid();
  void view_grid_on_off();
  void view_zoomIn(); 
  void view_zoomOut();
  void view_resetZoom();
  void view_fullScreen();
  /*view menu signal declaration ends*/

  /*navigation menu signal declaration begins*/
  void nav_firstPanel();
  void nav_previousPanel();
  void nav_nextPanel();
  void nav_lasttPanel();
  void nav_expandLayer();
  void nav_collapseLayer();	
  /*navigation menu signal declaration ends*/

  /*kalanjiyam menu signal declaration begins*/
  void addScene();
  void addShot();
  void sc_sh_add_from_any_panel();
  void scShotMove();  
  void moveOkay();
  void moveCancel();   
  void clear_info_contents();
  void addImportImage();
  void addExportImage();  
  void addExternalImageEditor();
  void addShortcut();
  /*kalanjiyam menu signal declaration ends*/

  /*About menu signal declaration begins*/
  void quickStart();
  void onTheWeb();
  void about();
  /*About menu signal declaration ends*/

  /**/
  void show_selected_thumbnail_contents_in_window();	
  /**/
  
  /*Confirmation Dialog box*/
  void ConfirmOkay();
  void ConfirmCancel();
  /*Confirmation Dialog box*/

  /*Text tool*/
  void text_tool();
  void text_okay();
  void text_cancel();	 	
  /*Text tool*/	
  void font_choose_dialogBox(); 

  /*Layer window*/
  Gtk::TreeView my_Tree_View_Test_Tree_View;
  Glib::RefPtr<TreeModel_Dnd> my_Tree_View_Test_Tree_Model;
  Gtk::Menu m_Menu_Popup;

  //virtual void on_checkbox_in_list_view_clicked(const Glib::ustring& path_string);
  virtual bool on_right_button_press_event(GdkEventButton *ev);

  //Signal handler for popup menu items:
  void on_menu_file_popup_edit();
  //void on_button_add_layer();
  void on_button_delete_layer_confirm();
  void on_button_delete_layer();
  //void on_button_addchild_layer(); 
  /*Layer window*/  
  /**/
  Gtk::TreeView my_Tree_View_Image_Test_Tree_View;
  Glib::RefPtr<ImageTreeModel_Dnd> my_Tree_View_Image_Test_Tree_Model;
  virtual bool image_tab_button_press_event(GdkEventButton *ev); 
  virtual void  on_selection_changed();
  virtual void  on_selection1_changed();  
  virtual void  image_on_selection_changed();
  /**/ 

  /*Spin Button*/
  void on_pAdjBorder_value_changed();
  void on_pAdjEraser_value_changed();
  void on_pAdjBorder_xRadius_value_changed();
  void on_pAdjBorder_yRadius_value_changed();
  void on_total_frames_selection_changed();
  /*Spin Button*/	

  /*Pdf*/
  void to_png();
  void to_pdf1();
  void to_pdf2();
  void to_pdf3();
  void get_kalanjiyam_properties();
  /*Pdf*/

  /**/
  void open_create_rectangle();
  void open_create_ellipse();
  void open_create_line();
  void open_create_path();
  void open_create_image();
  void open_create_text();
  void open_create_group();
  /**/

  /**/
  void create_xml_for_rectangle();
  void create_xml_for_ellipse();
  void create_xml_for_line();
  void create_xml_for_path(Glib::ustring path_name);
  void create_xml_for_image();
  void create_xml_for_text();
  Glib::ustring create_xml_for_group();
  /**/
  /*xml tag creation
  void create_xml_for_line();
  void create_xml_for_arrow();
  void create_xml_for_brush();
  void create_xml_for_ellipse();
  void create_xml_for_rectangle();
  void create_xml_for_path();
  xml tag creation*/
  void find_current_node_to_get_attribute_value(const char* node_name);
  void call_function_according_to_node_name(const char* open_node_name);
  void create_thumbnail_window();	
  Glib::ustring create_temp_scene_xml();
  /*1*/
  void on_parse_layers();
  void on_parse_layers_for_scene();
  void on_parse_layers_for_shot();
  void on_parse_layers_for_delete_scene();
  void on_parse_layers_for_delete_shot();

  /*1*/

  void get_property(const Glib::RefPtr<Goocanvas::Item>& item,int item_pos);

  void control_points_remove();
  void control_points_selected_items_remove();
  void selected_items_remove();
  void find_group_or_not(int child, Glib::ustring if_condi_type, Glib::ustring sort_condi_type, Glib::ustring event_type);
  void navi_movement(Glib::ustring move_type);
  void selected_objects_delete();
  void multi_selected_objects_delete(int a);
  void polyline_cnt_curve_cnt();
  int find_correct_scene_shot_position();
  void update_tag_values();
  bool for_image_move();

  //void asdf();
  bool dragging_erase();
  bool for_image_group_move1(int child_number);

  bool image_resize(double a, double b, double c, double d);  
  bool group_image_resize(int num, double a, double b, double c, double d);  
  
};

#endif //_GOOCANVASMM_KALANJIYAMWINDOW_H

