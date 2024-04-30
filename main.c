/*

    Compilation :

    === ARCH: =================================================================================
        BASH uniquement : 
            gcc $(pkg-config --cflags gtk+-3.0) main.c -o mon_app $(pkg-config --libs gtk+-3.0)
        Sinon
            bash
            gcc $(pkg-config --cflags gtk+-3.0) main.c -o mon_app $(pkg-config --libs gtk+-3.0)

    === Ubuntu: ===============================================================================
        AVEC pkg-config:
            gcc `pkg-config --cflags gtk+-3.0` main.c -o mon_app `pkg-config --libs gtk+-3.0`

        SANS pkg-config:
gcc -o mon_app main.c \
-I/usr/include/gtk-3.0 \
-I/usr/include/glib-2.0 \
-I/usr/lib/x86_64-linux-gnu/glib-2.0/include/ \
-I/usr/include/pango-1.0 \
-I/usr/include/harfbuzz \
-I/usr/include/cairo \
-I/usr/include/gdk-pixbuf-2.0 \
-I/usr/include/atk-1.0 \
-lgtk-3 -lgdk-3 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lcairo-gobject -lgobject-2.0 -lglib-2.0 -lgio-2.0




        Étape 1 : Vérifier l'installation de GTK+3
            sudo apt install libgtk-3-dev

        Étape 2 : Vérifier pkg-config
            pkg-config --cflags gtk+-3.0
            pkg-config --libs gtk+-3.0

        Étape 3 : Configurer PKG_CONFIG_PATH
            find /usr -name gtk+-3.0.pc

            ...Une fois trouvé, ajouter ce chemin à PKG_CONFIG_PATH :
            export PKG_CONFIG_PATH=/usr/lib/x86_64-linux-gnu/pkgconfig/:$PKG_CONFIG_PATH
    ===========================================================================================


    VSCode IncludePath:
${workspaceFolder}/**
/usr/include/gtk-3.0
/usr/include/glib-2.0
/usr/lib/glib-2.0/include/
/usr/include/pango-1.0
/usr/include/harfbuzz
/usr/include/cairo
/usr/include/gdk-pixbuf-2.0
/usr/include/atk-1.0
    
*/


#include <gtk/gtk.h>


static int counter = 0;

void greet( GtkWidget * widget, gpointer data )
{
    g_print( "Welcome to GTK\n" );
    g_print( "%s clicked %d times\n", (char *)data, ++counter );
}

void destroy( GtkWidget * widget, gpointer data )
{
    gtk_main_quit();
}


int main( int argc, char *argv[] )
{
    GtkWidget * window;
    GtkWidget * button;
    gtk_init( &argc, &argv );

    window = gtk_window_new( GTK_WINDOW_TOPLEVEL );
    g_signal_connect( window, "destroy", G_CALLBACK(destroy), NULL );
    gtk_container_set_border_width( GTK_CONTAINER(window), 20 );

    button = gtk_button_new_with_label( "Click me!" );
    g_signal_connect( button, "clicked", G_CALLBACK(greet), "button" );


    gtk_container_add( GTK_CONTAINER(window), button );

    
    gtk_widget_show_all( window );

    gtk_main();



    return 0;
}
