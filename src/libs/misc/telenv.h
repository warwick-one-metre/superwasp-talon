extern FILE *telfopen (char *name, char *how);
extern int telopen (char *name, int flags, ...);
extern void telfixpath (char *new, char *old);
extern int telOELog(char *progname);
extern char *timestamp (time_t t);
extern void daemonLog (char *fmt, ...);

/* For RCS Only -- Do Not Edit
 * @(#) $RCSfile: telenv.h,v $ $Date: 2006/01/13 20:44:04 $ $Revision: 1.1.1.1 $ $Name:  $
 */
