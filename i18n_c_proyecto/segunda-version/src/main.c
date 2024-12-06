#include <stdio.h>
#include <libintl.h>
#include <locale.h>

#define _(x) gettext(x)

int main(int argc, char *argv[]) {
    // Establecer el locale según las variables de entorno
    setlocale(LC_ALL, "");

    // Especificar el dominio de texto y el directorio de locales
    bindtextdomain("intlapp", "/usr/local/share/locale");
    bind_textdomain_codeset("intlapp", "UTF-8");
    textdomain("intlapp");

    // Mensajes a traducir
    printf(_("Aplicación creada\n"));
    printf(_("Aplicación comenzada\n"));
    printf(_("Aplicación terminada\n"));
    printf(_("Aplicación borrada\n"));

    return 0;
}
