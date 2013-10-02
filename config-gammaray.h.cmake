#define GAMMARAY_LIB_INSTALL_DIR "${GAMMARAY_LOCAL_INSTALL_PREFIX}/${LIB_INSTALL_DIR}"
#define GAMMARAY_PLUGIN_INSTALL_DIR "${GAMMARAY_LOCAL_INSTALL_PREFIX}/${PLUGIN_INSTALL_DIR}"
// for finding the probe during automatic tests
#define GAMMARAY_BUILD_DIR "${CMAKE_BINARY_DIR}"

#cmakedefine BUILD_TIMER_PLUGIN

#cmakedefine HAVE_PRIVATE_QT_HEADERS

#cmakedefine HAVE_STDINT_H

#cmakedefine HAVE_QT_SVG
#cmakedefine HAVE_QT_DESIGNER
#cmakedefine HAVE_QT_PRINTSUPPORT

#cmakedefine HAVE_VTK
