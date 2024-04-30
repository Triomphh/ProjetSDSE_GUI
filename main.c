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


    ./configure 
checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking for a BSD-compatible install... /usr/bin/install -c
checking whether build environment is sane... yes
checking for a thread-safe mkdir -p... /usr/bin/mkdir -p
checking for gawk... gawk
checking whether make sets $(MAKE)... yes
checking whether make supports nested variables... yes
checking whether UID '114494' is supported by ustar format... yes
checking whether GID '198' is supported by ustar format... yes
checking how to create a ustar tar archive... gnutar
checking whether to enable maintainer-specific portions of Makefiles... yes
checking whether make supports nested variables... (cached) yes
checking for gcc... gcc
checking whether the C compiler works... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... 
checking whether we are cross compiling... no
checking for suffix of object files... o
checking whether we are using the GNU C compiler... yes
checking whether gcc accepts -g... yes
checking for gcc option to accept ISO C89... none needed
checking whether gcc understands -c and -o together... yes
checking whether make supports the include directive... yes (GNU style)
checking dependency style of gcc... gcc3
checking how to run the C preprocessor... gcc -E
checking for gcc... gcc
checking whether we are using the GNU C compiler... (cached) yes
checking whether gcc accepts -g... yes
checking for gcc option to accept ISO C89... (cached) none needed
checking whether gcc understands -c and -o together... (cached) yes
checking dependency style of gcc... (cached) gcc3
checking how to run the C preprocessor... gcc -E
checking whether gcc and cc understand -c and -o together... yes
checking whether make sets $(MAKE)... (cached) yes
checking for grep that handles long lines and -e... /usr/bin/grep
checking for egrep... /usr/bin/grep -E
checking for ANSI C header files... yes
checking for sys/types.h... yes
checking for sys/stat.h... yes
checking for stdlib.h... yes
checking for string.h... yes
checking for memory.h... yes
checking for strings.h... yes
checking for inttypes.h... yes
checking for stdint.h... yes
checking for unistd.h... yes
checking minix/config.h usability... no
checking minix/config.h presence... no
checking for minix/config.h... no
checking whether it is safe to define __EXTENSIONS__... yes
checking for a sed that does not truncate output... /usr/bin/sed
checking whether NLS is requested... yes
checking for msgfmt... no
checking for gmsgfmt... :
checking for xgettext... no
checking for msgmerge... no
checking for ld used by gcc... /usr/bin/ld
checking if the linker (/usr/bin/ld) is GNU ld... yes
checking for shared library run path origin... done
checking for CFPreferencesCopyAppValue... no
checking for CFLocaleCopyCurrent... no
checking for GNU gettext in libc... yes
checking whether to use NLS... yes
checking where the gettext function comes from... libc
checking for native Win32... no
checking for c++... c++
checking whether we are using the GNU C++ compiler... yes
checking whether c++ accepts -g... yes
checking dependency style of c++... gcc3
checking how to print strings... printf
checking for a sed that does not truncate output... (cached) /usr/bin/sed
checking for fgrep... /usr/bin/grep -F
checking for ld used by gcc... /usr/bin/ld
checking if the linker (/usr/bin/ld) is GNU ld... yes
checking for BSD- or MS-compatible name lister (nm)... /usr/bin/nm -B
checking the name lister (/usr/bin/nm -B) interface... BSD nm
checking whether ln -s works... yes
checking the maximum length of command line arguments... 1572864
checking how to convert x86_64-pc-linux-gnu file names to x86_64-pc-linux-gnu format... func_convert_file_noop
checking how to convert x86_64-pc-linux-gnu file names to toolchain format... func_convert_file_noop
checking for /usr/bin/ld option to reload object files... -r
checking for objdump... objdump
checking how to recognize dependent libraries... pass_all
checking for dlltool... no
checking how to associate runtime and link libraries... printf %s\n
checking for ar... ar
checking for archiver @FILE support... @
checking for strip... strip
checking for ranlib... ranlib
checking command to parse /usr/bin/nm -B output from gcc object... ok
checking for sysroot... no
checking for a working dd... /usr/bin/dd
checking how to truncate binary pipes... /usr/bin/dd bs=4096 count=1
checking for mt... mt
checking if mt is a manifest tool... no
checking for dlfcn.h... yes
checking for objdir... .libs
checking if gcc supports -fno-rtti -fno-exceptions... no
checking for gcc option to produce PIC... -fPIC -DPIC
checking if gcc PIC flag -fPIC -DPIC works... yes
checking if gcc static flag -static works... yes
checking if gcc supports -c -o file.o... yes
checking if gcc supports -c -o file.o... (cached) yes
checking whether the gcc linker (/usr/bin/ld -m elf_x86_64) supports shared libraries... yes
checking whether -lc should be explicitly linked in... no
checking dynamic linker characteristics... GNU/Linux ld.so
checking how to hardcode library paths into programs... immediate
checking whether stripping libraries is possible... yes
checking if libtool supports shared libraries... yes
checking whether to build shared libraries... yes
checking whether to build static libraries... no
checking how to run the C++ preprocessor... c++ -E
checking for ld used by c++... /usr/bin/ld -m elf_x86_64
checking if the linker (/usr/bin/ld -m elf_x86_64) is GNU ld... yes
checking whether the c++ linker (/usr/bin/ld -m elf_x86_64) supports shared libraries... yes
checking for c++ option to produce PIC... -fPIC -DPIC
checking if c++ PIC flag -fPIC -DPIC works... yes
checking if c++ static flag -static works... yes
checking if c++ supports -c -o file.o... yes
checking if c++ supports -c -o file.o... (cached) yes
checking whether the c++ linker (/usr/bin/ld -m elf_x86_64) supports shared libraries... yes
checking dynamic linker characteristics... (cached) GNU/Linux ld.so
checking how to hardcode library paths into programs... immediate
configure: creating ./config.lt
config.lt: creating libtool
checking for special C compiler options needed for large files... no
checking for _FILE_OFFSET_BITS value needed for large files... no
checking dependency style of gcc... gcc3
checking for nm... /usr/bin/nm -B
checking for some Win32 platform... no
checking for shm_open in -lrt... yes
checking for posix_fallocate... yes
checking for flockfile... yes
checking for _lock_file... no
checking for pkg-config... /usr/bin/pkg-config
checking pkg-config is at least version 0.9.0... yes
checking for wayland-scanner... no
checking for WAYLAND_DEPENDENCIES... no
checking whether build environment is sane... yes
checking for BASE_DEPENDENCIES... no
configure: error: Package requirements (glib-2.0 >= 2.57.2    atk >= 2.32.0    pango >= 1.41.0    fribidi >= 0.19.7    cairo >= 1.14.0    cairo-gobject >= 1.14.0    gdk-pixbuf-2.0 >= 2.30.0) were not met:

No package 'atk' found
No package 'pango' found
No package 'cairo' found
No package 'cairo-gobject' found
No package 'gdk-pixbuf-2.0' found

Consider adjusting the PKG_CONFIG_PATH environment variable if you
installed software in a non-standard prefix.

Alternatively, you may set the environment variables BASE_DEPENDENCIES_CFLAGS
and BASE_DEPENDENCIES_LIBS to avoid the need to call pkg-config.
See the pkg-config man page for more details.

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
