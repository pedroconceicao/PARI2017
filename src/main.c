#define _MAIN_C_
#include "myf.h"

int main(int argc, char *argv[])
{
        gtk_init(&argc, &argv);

        /* load the interface after a configuration file*/
		builderG = gtk_builder_new();
		gtk_builder_add_from_file(builderG, "mydr2.glade", NULL);

		/* connect the signals in the interface */
		gtk_builder_connect_signals(builderG, NULL);

		// initializes the timer
		p_InitTimer();


        g_timeout_add(30, (GSourceFunc) pari_UpdateImageAreas, (gpointer) NULL);
        captureG=pari_StartImageAcquisition();

        /* start the event loop */
        gtk_main();

        cvReleaseCapture(&captureG);             //Release capture device.
        cvReleaseImage(&dst_imageG);             //Release image (free pointer when no longer used)
        cvReleaseImage(&src_imageG);             //Release image (free pointer when no longer used).
        return 0;
}
