#ifndef EC_I18N_H
#define EC_I18N_H

#ifdef WITH_NLS
#   include <libintl.h>
#   define _(String) gettext(String)
#   ifdef gettext_noop
#       define N_(String) gettext_noop(String)
#   else
#       define N_(String) (String)
#   endif
#else
#   define _(String) (String)
#   define N_(String) (String)
#   define bindtextdomain(Domain, Directory)
#   define bind_textdomain_codeset(Domain, Codeset)
#   define textdomain(Domain)
#endif


#endif /* EC_I18N_H */
/* EOF */

// vim:ts=3:expandtab
