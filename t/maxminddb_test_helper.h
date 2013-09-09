#if HAVE_CONFIG_H
#include <config.h>
#endif
#include <math.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include "maxminddb.h"
#include "libtap/tap.h"

#ifndef MMDB_TEST_HELPER_C
#define MMDB_TEST_HELPER_C (1)

#define MAX_DESCRIPTION_LENGTH 500

    /* --prototypes automatically generated by dev-bin/regen-prototypes.pl - don't remove this comment */
    extern void for_all_record_sizes(const char *filename_fmt,
                                     void (*tests) (int record_size, const char *filename,
                                                    const char *description));
    extern void for_all_modes(void (*tests) (int mode, const char *description));
    extern const char *test_database_path(const char *filename);
    extern MMDB_s *open_ok(const char *db_file, int mode, const char *mode_desc);
    extern MMDB_lookup_result_s lookup_ok(MMDB_s *mmdb, const char *ip,
                                           const char *file, const char *mode_desc);
    extern MMDB_entry_data_s data_ok(MMDB_lookup_result_s *result, int expect_type,
                                     const char *description, ...);
    extern void compare_double(double got, double expect);
    extern void compare_float(float got, float expect);
    /* --prototypes end - don't remove this comment-- */

#endif
