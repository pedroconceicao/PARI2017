/*File generated automatically in pedro by pedro on Qua Dez  6 12:00:10 WET 2017*/
#ifdef __cplusplus
extern "C" {
#endif
/* callbacks.c */
gboolean on_drawingarea1_expose_event (GtkWidget * widget, GdkEvent * event, gpointer user_data);
gboolean p_ForceRefreshDA (gpointer user_data);
void p_InitTimer ();
void pari_ProcessUserOperations ();
gboolean pari_UpdateImageAreas (gpointer data);
/* main.c */
int main (int argc, char *argv[]);
/* myf.c */
GdkPixbuf *pari_ConvertOpenCv2Gtk (IplImage * image, int dst_w, int dst_h);
void pari_PerformImageAcquisition (CvCapture * capt);
void pari_RefreshDrawingArea (char *widgetName, IplImage * img);
CvCapture *pari_StartImageAcquisition ();
#ifdef __cplusplus
}
#endif
