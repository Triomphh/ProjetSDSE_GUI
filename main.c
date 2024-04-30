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










ÉTAPE PRÉLIMINAIRE
Télécharger m4            et le mettre dans dependancies : https://ftp.gnu.org/gnu/m4/
Télécharger autoconf      et le mettre dans dependancies : http://ftp.gnu.org/gnu/autoconf/
Télécharger automake 1.13 et le mettre dans dependancies : https://ftp.gnu.org/gnu/automake/
Télécharger libtool       et le mettre dans dependancies : https://mirror.cyberbits.eu/gnu/libtool/
Télécharger libffi        et le mettre dans dependancies : https://github.com/libffi/libffi/releases/download/v3.4.5/libffi-3.4.5.tar.gz
Télécharger gettext       et le mettre dans dependancies : https://ftp.gnu.org/pub/gnu/gettext/gettext-0.22.5.tar.gz
Télécharger glib          et le mettre dans dependancies : https://download.gnome.org/sources/glib/2.9/glib-2.9.6.tar.gz

git clone https://github.com/madler/zlib



SCRIPT:

mkdir dependancies;
cd dependancies;
    mkdir zlib_installed;
    cd zlib;
    ./configure --prefix=$HOME/Documents/ProjetSDSE_GUI/dependancies/zlib_installed;
    make;
    make install;
    export CFLAGS="-I$HOME/Documents/ProjetSDSE_GUI/dependancies/zlib_installed/include $CFLAGS";
    export LDFLAGS="-L$HOME/Documents/ProjetSDSE_GUI/dependancies/zlib_installed/lib $LDFLAGS";
    export PKG_CONFIG_PATH="$HOME/Documents/ProjetSDSE_GUI/dependancies/zlib_installed/lib/pkgconfig:$PKG_CONFIG_PATH";
    cd ..;

    


    mkdir m4-1.4.19_installed;
    cd m4-1.4.19;
    ./configure --prefix=$HOME/Documents/ProjetSDSE_GUI/dependancies/m4-1.4.19_installed;
    make;
    make install;
    export PATH=$HOME/Documents/ProjetSDSE_GUI/dependancies/m4-1.4.19_installed/bin:$PATH;
    cd ..;

    mkdir autoconf-2.72_installed;
    cd autoconf-2.72;
    ./configure --prefix=$HOME/Documents/ProjetSDSE_GUI/dependancies/autoconf-2.72_installed;
    make;
    make install;
    export PATH=$HOME/Documents/ProjetSDSE_GUI/dependancies/autoconf-2.72_installed/bin:$PATH;
    cd ..;

    mkdir automake-1.13_installed;
    cd automake-1.13;
    ./configure --prefix=$HOME/Documents/ProjetSDSE_GUI/dependancies/automake-1.13_installed;
    make;
    make install;
    export PATH=$HOME/Documents/ProjetSDSE_GUI/dependancies/automake-1.13_installed/bin:$PATH;
    cd ..;

    mkdir libtool-2.4.7_installed;
    cd libtool-2.4.7;
    ./configure --prefix=$HOME/Documents/ProjetSDSE_GUI/dependancies/libtool-2.4.7_installed;
    make;
    make install;
    export PATH=$HOME/Documents/ProjetSDSE_GUI/dependancies/libtool-2.4.7_installed/bin:$PATH;
    cd ..;


    mkdir libffi-3.4.5_installed;
    cd libffi-3.4.5;
    ./configure --prefix=$HOME/Documents/ProjetSDSE_GUI/dependancies/libffi-3.4.5_installed;
    make;
    make install;
    export LIBFFI_CFLAGS="-I$HOME/Documents/ProjetSDSE_GUI/dependancies/libffi_installed/include";
    export LIBFFI_LIBS="-L$HOME/Documents/ProjetSDSE_GUI/dependancies/libffi_installed/lib -lffi";
    cd ..;

    mkdir gettext-0.22.5_installed;
    cd gettext-0.22.5;
    ./configure --prefix=$HOME/Documents/ProjetSDSE_GUI/dependancies/gettext-0.22.5_installed;
    make;
    make install;
    export PATH=$HOME/Documents/ProjetSDSE_GUI/dependancies/gettext-0.22.5_installed/bin:$PATH;
    cd ..;


    mkdir glib-2.9.6_installed;
    cd glib-2.9.6;
    ./configure --prefix=$HOME/Documents/ProjetSDSE_GUI/dependancies/glib-2.9.6_installed;
    make;


    git clone https://github.com/gooroom/gtk3;
    mkdir gtk3_installed;
    cd gtk3;
    ./configure --prefix=$HOME/Documents/ProjetSDSE_GUI/dependancies/gtk3_installed;


ÉTAPE Annexe - Vérifier les packages dans l'ordre
    zlib

    m4
    automake 1.13
    autoconf

    libffi

    gettext

    glib-2.0

    atk

    pango

    fribidi

    cairo

    cairo-gobject

    gdk-pixbuf-2.0

    gtk3

            
    


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
