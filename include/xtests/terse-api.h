/* /////////////////////////////////////////////////////////////////////////
 * File:    xtests/terse-api.h
 *
 * Purpose: Alternative main header file for xTests, provide terse forms of
 *          the assertion macros (and other simplifications).
 *
 * Created: 20th November 2024
 * Updated: 1st December 2024
 *
 * Home:    https://github.com/synesissoftware/xTests/
 *
 * Copyright (c) 2024, Matthew Wilson and Synesis Information Systems
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer;
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution;
 * - Neither the name of the copyright holder nor the names of its
 *   ontributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/**file xtests/xtests.h
 *
 * [C, C++] Simple unit/component-testing library.
 */

#ifndef XTESTS_INCL_XTESTS_H_XTESTS_TERSE
#define XTESTS_INCL_XTESTS_H_XTESTS_TERSE

#ifndef XTESTS_DOCUMENTATION_SKIP_SECTION
# define XTESTS_VER_XTESTS_H_XTESTS_TERSE_MAJOR     1
# define XTESTS_VER_XTESTS_H_XTESTS_TERSE_MINOR     1
# define XTESTS_VER_XTESTS_H_XTESTS_TERSE_REVISION  1
# define XTESTS_VER_XTESTS_H_XTESTS_TERSE_EDIT      3
#endif /* !XTESTS_DOCUMENTATION_SKIP_SECTION */


/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <xtests/xtests.h>


/* /////////////////////////////////////////////////////////////////////////
 * macros
 */

#ifdef XTESTS_ABEND
# define ABEND                                              XTESTS_ABEND
#endif /* XTESTS_ABEND */
#ifdef XTESTS_END_RUNNER
# define END_RUNNER                                         XTESTS_END_RUNNER
#endif /* XTESTS_END_RUNNER */
#ifdef XTESTS_PRINT_RESULTS
# define PRINT_RESULTS                                      XTESTS_PRINT_RESULTS
#endif /* XTESTS_PRINT_RESULTS */
#ifdef XTESTS_START_RUNNER
# define START_RUNNER                                       XTESTS_START_RUNNER
#endif /* XTESTS_START_RUNNER */
#ifdef XTESTS_START_RUNNER_WITH_FLAGS
# define START_RUNNER_WITH_FLAGS                            XTESTS_START_RUNNER_WITH_FLAGS
#endif /* XTESTS_START_RUNNER_WITH_FLAGS */
#ifdef XTESTS_START_RUNNER_WITH_REPORTER
# define START_RUNNER_WITH_REPORTER                         XTESTS_START_RUNNER_WITH_REPORTER
#endif /* XTESTS_START_RUNNER_WITH_REPORTER */
#ifdef XTESTS_START_RUNNER_WITH_REPORTER_AND_STREAM
# define START_RUNNER_WITH_REPORTER_AND_STREAM              XTESTS_START_RUNNER_WITH_REPORTER_AND_STREAM
#endif /* XTESTS_START_RUNNER_WITH_REPORTER_AND_STREAM */
#ifdef XTESTS_START_RUNNER_WITH_REPORTER_AND_STREAM_AND_FLAGS
# define START_RUNNER_WITH_REPORTER_AND_STREAM_AND_FLAGS    XTESTS_START_RUNNER_WITH_REPORTER_AND_STREAM_AND_FLAGS
#endif /* XTESTS_START_RUNNER_WITH_REPORTER_AND_STREAM_AND_FLAGS */
#ifdef XTESTS_START_RUNNER_WITH_REPORTER_AND_STREAM_AND_FLAGS_AND_SETUP_FNS
# define START_RUNNER_WITH_REPORTER_AND_STREAM_AND_FLAGS_AND_SETUP_FNS XTESTS_START_RUNNER_WITH_REPORTER_AND_STREAM_AND_FLAGS_AND_SETUP_FNS
#endif /* XTESTS_START_RUNNER_WITH_REPORTER_AND_STREAM_AND_FLAGS_AND_SETUP_FNS */
#ifdef XTESTS_START_RUNNER_WITH_SETUP_FNS
# define START_RUNNER_WITH_SETUP_FNS                        XTESTS_START_RUNNER_WITH_SETUP_FNS
#endif /* XTESTS_START_RUNNER_WITH_SETUP_FNS */
#ifdef XTESTS_START_RUNNER_WITH_STREAM
# define START_RUNNER_WITH_STREAM                           XTESTS_START_RUNNER_WITH_STREAM
#endif /* XTESTS_START_RUNNER_WITH_STREAM */

#ifdef XTESTS_CASE_BEGIN
# define CASE_BEGIN                                         XTESTS_CASE_BEGIN
#endif /* XTESTS_CASE_BEGIN */
#ifdef XTESTS_CASE_END
# define CASE_END                                           XTESTS_CASE_END
#endif /* XTESTS_CASE_END */
#ifdef XTESTS_RUN_CASE
# define RUN_CASE                                           XTESTS_RUN_CASE
#endif /* XTESTS_RUN_CASE */
#ifdef XTESTS_RUN_CASE_THAT_THROWS
# define RUN_CASE_THAT_THROWS                               XTESTS_RUN_CASE_THAT_THROWS
#endif /* XTESTS_RUN_CASE_THAT_THROWS */
#ifdef XTESTS_RUN_CASE_THAT_THROWS_WITH_DESC
# define RUN_CASE_THAT_THROWS_WITH_DESC                     XTESTS_RUN_CASE_THAT_THROWS_WITH_DESC
#endif /* XTESTS_RUN_CASE_THAT_THROWS_WITH_DESC */
#ifdef XTESTS_RUN_CASE_THAT_THROWS_WITH_NAME_AND_DESC
# define RUN_CASE_THAT_THROWS_WITH_NAME_AND_DESC            XTESTS_RUN_CASE_THAT_THROWS_WITH_NAME_AND_DESC
#endif /* XTESTS_RUN_CASE_THAT_THROWS_WITH_NAME_AND_DESC */
#ifdef XTESTS_RUN_CASE_WITH_DESC
# define RUN_CASE_WITH_DESC                                 XTESTS_RUN_CASE_WITH_DESC
#endif /* XTESTS_RUN_CASE_WITH_DESC */
#ifdef XTESTS_RUN_CASE_WITH_NAME_AND_DESC
# define RUN_CASE_WITH_NAME_AND_DESC                        XTESTS_RUN_CASE_WITH_NAME_AND_DESC
#endif /* XTESTS_RUN_CASE_WITH_NAME_AND_DESC */

#ifdef XTESTS_TEST_FAIL
# define TEST_FAIL                                          XTESTS_TEST_FAIL
#endif /* XTESTS_TEST_FAIL */
#ifdef XTESTS_TEST_FAIL_WITH_QUALIFIER
# define TEST_FAIL_WITH_QUALIFIER                           XTESTS_TEST_FAIL_WITH_QUALIFIER
#endif /* XTESTS_TEST_FAIL_WITH_QUALIFIER */
#ifdef XTESTS_TEST_PASSED
# define TEST_PASSED                                        XTESTS_TEST_PASSED
#endif /* XTESTS_TEST_PASSED */
#ifdef XTESTS_TEST_WITH_MESSAGE
# define TEST_WITH_MESSAGE                                  XTESTS_TEST_WITH_MESSAGE
#endif /* XTESTS_TEST_WITH_MESSAGE */
#ifdef XTESTS_TEST
# define TEST                                               XTESTS_TEST
#endif /* XTESTS_TEST */

#ifdef XTESTS_TEST_BOOLEAN_EQUAL
# define TEST_BOOLEAN_EQUAL                                 XTESTS_TEST_BOOLEAN_EQUAL
# define TEST_BOOLEAN_EQ                                    XTESTS_TEST_BOOLEAN_EQUAL
#endif /* XTESTS_TEST_BOOLEAN_EQUAL */
#ifdef XTESTS_TEST_BOOLEAN_FALSE
# define TEST_BOOLEAN_FALSE                                 XTESTS_TEST_BOOLEAN_FALSE
#endif /* XTESTS_TEST_BOOLEAN_FALSE */
#ifdef XTESTS_TEST_BOOLEAN_NOT_EQUAL
# define TEST_BOOLEAN_NOT_EQUAL                             XTESTS_TEST_BOOLEAN_NOT_EQUAL
# define TEST_BOOLEAN_NE                                    XTESTS_TEST_BOOLEAN_NOT_EQUAL
#endif /* XTESTS_TEST_BOOLEAN_NOT_EQUAL */
#ifdef XTESTS_TEST_BOOLEAN_TRUE
# define TEST_BOOLEAN_TRUE                                  XTESTS_TEST_BOOLEAN_TRUE
#endif /* XTESTS_TEST_BOOLEAN_TRUE */
#ifdef XTESTS_TEST_CHARACTER_EQUAL
# define TEST_CHARACTER_EQUAL                               XTESTS_TEST_CHARACTER_EQUAL
# define TEST_CHAR_EQ                                       XTESTS_TEST_CHARACTER_EQUAL
#endif /* XTESTS_TEST_CHARACTER_EQUAL */
#ifdef XTESTS_TEST_CHARACTER_EQUAL_EXACT
# define TEST_CHARACTER_EQUAL_EXACT                         XTESTS_TEST_CHARACTER_EQUAL_EXACT
#endif /* XTESTS_TEST_CHARACTER_EQUAL_EXACT */
#ifdef XTESTS_TEST_CHARACTER_GREATER
# define TEST_CHARACTER_GREATER                             XTESTS_TEST_CHARACTER_GREATER
# define TEST_CHAR_GT                                       XTESTS_TEST_CHARACTER_GREATER
#endif /* XTESTS_TEST_CHARACTER_GREATER */
#ifdef XTESTS_TEST_CHARACTER_GREATER_OR_EQUAL
# define TEST_CHARACTER_GREATER_OR_EQUAL                    XTESTS_TEST_CHARACTER_GREATER_OR_EQUAL
# define TEST_CHAR_GE                                       XTESTS_TEST_CHARACTER_GREATER_OR_EQUAL
#endif /* XTESTS_TEST_CHARACTER_GREATER_OR_EQUAL */
#ifdef XTESTS_TEST_CHARACTER_LESS
# define TEST_CHARACTER_LESS                                XTESTS_TEST_CHARACTER_LESS
# define TEST_CHAR_LT                                       XTESTS_TEST_CHARACTER_LESS
#endif /* XTESTS_TEST_CHARACTER_LESS */
#ifdef XTESTS_TEST_CHARACTER_LESS_OR_EQUAL
# define TEST_CHARACTER_LESS_OR_EQUAL                       XTESTS_TEST_CHARACTER_LESS_OR_EQUAL
# define TEST_CHAR_LE                                       XTESTS_TEST_CHARACTER_LESS_OR_EQUAL
#endif /* XTESTS_TEST_CHARACTER_LESS_OR_EQUAL */
#ifdef XTESTS_TEST_CHARACTER_NOT_EQUAL
# define TEST_CHARACTER_NOT_EQUAL                           XTESTS_TEST_CHARACTER_NOT_EQUAL
# define TEST_CHAR_NE                                       XTESTS_TEST_CHARACTER_NOT_EQUAL
#endif /* XTESTS_TEST_CHARACTER_NOT_EQUAL */
#ifdef XTESTS_TEST_ENUM_EQUAL
# define TEST_ENUM_EQUAL                                    XTESTS_TEST_ENUM_EQUAL
# define TEST_ENUM_EQ                                       XTESTS_TEST_ENUM_EQUAL
#endif /* XTESTS_TEST_ENUM_EQUAL */
#ifdef XTESTS_TEST_ENUM_NOT_EQUAL
# define TEST_ENUM_NOT_EQUAL                                XTESTS_TEST_ENUM_NOT_EQUAL
# define TEST_ENUM_NE                                       XTESTS_TEST_ENUM_NOT_EQUAL
#endif /* XTESTS_TEST_ENUM_NOT_EQUAL */
#ifdef XTESTS_TEST_FLOATINGPOINT_EQUAL
# define TEST_FLOATINGPOINT_EQUAL                           XTESTS_TEST_FLOATINGPOINT_EQUAL
# define TEST_FP_EQ                                         XTESTS_TEST_FLOATINGPOINT_EQUAL
#endif /* XTESTS_TEST_FLOATINGPOINT_EQUAL */
#ifdef XTESTS_TEST_FLOATINGPOINT_EQUAL_APPROX
# define TEST_FLOATINGPOINT_EQUAL_APPROX                    XTESTS_TEST_FLOATINGPOINT_EQUAL_APPROX
#endif /* XTESTS_TEST_FLOATINGPOINT_EQUAL_APPROX */
#ifdef XTESTS_TEST_FLOATINGPOINT_EQUAL_EXACT
# define TEST_FLOATINGPOINT_EQUAL_EXACT                     XTESTS_TEST_FLOATINGPOINT_EQUAL_EXACT
#endif /* XTESTS_TEST_FLOATINGPOINT_EQUAL_EXACT */
#ifdef XTESTS_TEST_FLOATINGPOINT_NOT_EQUAL
# define TEST_FLOATINGPOINT_NOT_EQUAL                       XTESTS_TEST_FLOATINGPOINT_NOT_EQUAL
# define TEST_FP_NE                                         XTESTS_TEST_FLOATINGPOINT_NOT_EQUAL
#endif /* XTESTS_TEST_FLOATINGPOINT_NOT_EQUAL */
#ifdef XTESTS_TEST_FLOATINGPOINT_NOT_EQUAL_APPROX
# define TEST_FLOATINGPOINT_NOT_EQUAL_APPROX                XTESTS_TEST_FLOATINGPOINT_NOT_EQUAL_APPROX
#endif /* XTESTS_TEST_FLOATINGPOINT_NOT_EQUAL_APPROX */
#ifdef XTESTS_TEST_FLOATINGPOINT_NOT_EQUAL_EXACT
# define TEST_FLOATINGPOINT_NOT_EQUAL_EXACT                 XTESTS_TEST_FLOATINGPOINT_NOT_EQUAL_EXACT
#endif /* XTESTS_TEST_FLOATINGPOINT_NOT_EQUAL_EXACT */
#ifdef XTESTS_TEST_FUNCTION_POINTER_EQUAL
# define TEST_FUNCTION_POINTER_EQUAL                        XTESTS_TEST_FUNCTION_POINTER_EQUAL
# define TEST_FNPTR_EQ                                      XTESTS_TEST_FUNCTION_POINTER_EQUAL
#endif /* XTESTS_TEST_FUNCTION_POINTER_EQUAL */
#ifdef XTESTS_TEST_FUNCTION_POINTER_NOT_EQUAL
# define TEST_FUNCTION_POINTER_NOT_EQUAL                    XTESTS_TEST_FUNCTION_POINTER_NOT_EQUAL
# define TEST_FNPTR_NE                                      XTESTS_TEST_FUNCTION_POINTER_NOT_EQUAL
#endif /* XTESTS_TEST_FUNCTION_POINTER_NOT_EQUAL */
#ifdef XTESTS_TEST_INTEGER_EQUAL
# define TEST_INTEGER_EQUAL                                 XTESTS_TEST_INTEGER_EQUAL
# define TEST_INT_EQ                                        XTESTS_TEST_INTEGER_EQUAL
#endif /* XTESTS_TEST_INTEGER_EQUAL */
#ifdef XTESTS_TEST_INTEGER_EQUAL_ANY_IN_RANGE
# define TEST_INTEGER_EQUAL_ANY_IN_RANGE                    XTESTS_TEST_INTEGER_EQUAL_ANY_IN_RANGE
#endif /* XTESTS_TEST_INTEGER_EQUAL_ANY_IN_RANGE */
#ifdef XTESTS_TEST_INTEGER_EQUAL_ANY_NOT_IN_RANGE
# define TEST_INTEGER_EQUAL_ANY_NOT_IN_RANGE                XTESTS_TEST_INTEGER_EQUAL_ANY_NOT_IN_RANGE
#endif /* XTESTS_TEST_INTEGER_EQUAL_ANY_NOT_IN_RANGE */
#ifdef XTESTS_TEST_INTEGER_EQUAL_ANY_OF
# define TEST_INTEGER_EQUAL_ANY_OF                          XTESTS_TEST_INTEGER_EQUAL_ANY_OF
#endif /* XTESTS_TEST_INTEGER_EQUAL_ANY_OF */
#ifdef XTESTS_TEST_INTEGER_EQUAL_ANY_OF2
# define TEST_INTEGER_EQUAL_ANY_OF2                         XTESTS_TEST_INTEGER_EQUAL_ANY_OF2
#endif /* XTESTS_TEST_INTEGER_EQUAL_ANY_OF2 */
#ifdef XTESTS_TEST_INTEGER_EQUAL_ANY_OF3
# define TEST_INTEGER_EQUAL_ANY_OF3                         XTESTS_TEST_INTEGER_EQUAL_ANY_OF3
#endif /* XTESTS_TEST_INTEGER_EQUAL_ANY_OF3 */
#ifdef XTESTS_TEST_INTEGER_EQUAL_EXACT
# define TEST_INTEGER_EQUAL_EXACT                           XTESTS_TEST_INTEGER_EQUAL_EXACT
#endif /* XTESTS_TEST_INTEGER_EQUAL_EXACT */
#ifdef XTESTS_TEST_INTEGER_GREATER
# define TEST_INTEGER_GREATER                               XTESTS_TEST_INTEGER_GREATER
# define TEST_INT_GT                                        XTESTS_TEST_INTEGER_GREATER
#endif /* XTESTS_TEST_INTEGER_GREATER */
#ifdef XTESTS_TEST_INTEGER_GREATER_OR_EQUAL
# define TEST_INTEGER_GREATER_OR_EQUAL                      XTESTS_TEST_INTEGER_GREATER_OR_EQUAL
# define TEST_INT_GE                                        XTESTS_TEST_INTEGER_GREATER_OR_EQUAL
#endif /* XTESTS_TEST_INTEGER_GREATER_OR_EQUAL */
#ifdef XTESTS_TEST_INTEGER_LESS
# define TEST_INTEGER_LESS                                  XTESTS_TEST_INTEGER_LESS
# define TEST_INT_LT                                        XTESTS_TEST_INTEGER_LESS
#endif /* XTESTS_TEST_INTEGER_LESS */
#ifdef XTESTS_TEST_INTEGER_LESS_OR_EQUAL
# define TEST_INTEGER_LESS_OR_EQUAL                         XTESTS_TEST_INTEGER_LESS_OR_EQUAL
# define TEST_INT_LE                                        XTESTS_TEST_INTEGER_LESS_OR_EQUAL
#endif /* XTESTS_TEST_INTEGER_LESS_OR_EQUAL */
#ifdef XTESTS_TEST_INTEGER_NOT_EQUAL
# define TEST_INTEGER_NOT_EQUAL                             XTESTS_TEST_INTEGER_NOT_EQUAL
# define TEST_INT_NE                                        XTESTS_TEST_INTEGER_NOT_EQUAL
#endif /* XTESTS_TEST_INTEGER_NOT_EQUAL */
#ifdef XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL
# define TEST_MULTIBYTE_STRINGS_EQUAL                       XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL
#endif /* XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_CONTAIN
# define TEST_MULTIBYTE_STRING_CONTAIN                      XTESTS_TEST_MULTIBYTE_STRING_CONTAIN
#endif /* XTESTS_TEST_MULTIBYTE_STRING_CONTAIN */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_CONTAIN_APPROX
# define TEST_MULTIBYTE_STRING_CONTAIN_APPROX               XTESTS_TEST_MULTIBYTE_STRING_CONTAIN_APPROX
#endif /* XTESTS_TEST_MULTIBYTE_STRING_CONTAIN_APPROX */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_DOES_NOT_MATCH
# define TEST_MULTIBYTE_STRING_DOES_NOT_MATCH               XTESTS_TEST_MULTIBYTE_STRING_DOES_NOT_MATCH
#endif /* XTESTS_TEST_MULTIBYTE_STRING_DOES_NOT_MATCH */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_EQUAL
# define TEST_MULTIBYTE_STRING_EQUAL                        XTESTS_TEST_MULTIBYTE_STRING_EQUAL
# define TEST_MS_EQ                                         XTESTS_TEST_MULTIBYTE_STRING_EQUAL
#endif /* XTESTS_TEST_MULTIBYTE_STRING_EQUAL */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_EQUAL_APPROX
# define TEST_MULTIBYTE_STRING_EQUAL_APPROX                 XTESTS_TEST_MULTIBYTE_STRING_EQUAL_APPROX
#endif /* XTESTS_TEST_MULTIBYTE_STRING_EQUAL_APPROX */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_EQUAL_N
# define TEST_MULTIBYTE_STRING_EQUAL_N                      XTESTS_TEST_MULTIBYTE_STRING_EQUAL_N
#endif /* XTESTS_TEST_MULTIBYTE_STRING_EQUAL_N */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_EQUAL_N_APPROX
# define TEST_MULTIBYTE_STRING_EQUAL_N_APPROX               XTESTS_TEST_MULTIBYTE_STRING_EQUAL_N_APPROX
#endif /* XTESTS_TEST_MULTIBYTE_STRING_EQUAL_N_APPROX */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_MATCHES
# define TEST_MULTIBYTE_STRING_MATCHES                      XTESTS_TEST_MULTIBYTE_STRING_MATCHES
#endif /* XTESTS_TEST_MULTIBYTE_STRING_MATCHES */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_NOT_CONTAIN
# define TEST_MULTIBYTE_STRING_NOT_CONTAIN                  XTESTS_TEST_MULTIBYTE_STRING_NOT_CONTAIN
#endif /* XTESTS_TEST_MULTIBYTE_STRING_NOT_CONTAIN */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_NOT_CONTAIN_APPROX
# define TEST_MULTIBYTE_STRING_NOT_CONTAIN_APPROX           XTESTS_TEST_MULTIBYTE_STRING_NOT_CONTAIN_APPROX
#endif /* XTESTS_TEST_MULTIBYTE_STRING_NOT_CONTAIN_APPROX */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL
# define TEST_MULTIBYTE_STRING_NOT_EQUAL                    XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL
# define TEST_MS_NE                                         XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL
#endif /* XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL_APPROX
# define TEST_MULTIBYTE_STRING_NOT_EQUAL_APPROX             XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL_APPROX
#endif /* XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL_APPROX */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL_N
# define TEST_MULTIBYTE_STRING_NOT_EQUAL_N                  XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL_N
#endif /* XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL_N */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL_N_APPROX
# define TEST_MULTIBYTE_STRING_NOT_EQUAL_N_APPROX           XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL_N_APPROX
#endif /* XTESTS_TEST_MULTIBYTE_STRING_NOT_EQUAL_N_APPROX */
#ifdef XTESTS_TEST_MULTIBYTE_STRING_SLICE_EQUAL
# define TEST_MULTIBYTE_STRING_SLICE_EQUAL                  XTESTS_TEST_MULTIBYTE_STRING_SLICE_EQUAL
#endif /* XTESTS_TEST_MULTIBYTE_STRING_SLICE_EQUAL */
#ifdef XTESTS_TEST_POINTER_EQUAL
# define TEST_POINTER_EQUAL                                 XTESTS_TEST_POINTER_EQUAL
# define TEST_PTR_EQ                                        XTESTS_TEST_POINTER_EQUAL
#endif /* XTESTS_TEST_POINTER_EQUAL */
#ifdef XTESTS_TEST_POINTER_GREATER
# define TEST_POINTER_GREATER                               XTESTS_TEST_POINTER_GREATER
# define TEST_PTR_GT                                        XTESTS_TEST_POINTER_GREATER
#endif /* XTESTS_TEST_POINTER_GREATER */
#ifdef XTESTS_TEST_POINTER_GREATER_OR_EQUAL
# define TEST_POINTER_GREATER_OR_EQUAL                      XTESTS_TEST_POINTER_GREATER_OR_EQUAL
# define TEST_PTR_GE                                        XTESTS_TEST_POINTER_GREATER_OR_EQUAL
#endif /* XTESTS_TEST_POINTER_GREATER_OR_EQUAL */
#ifdef XTESTS_TEST_POINTER_LESS
# define TEST_POINTER_LESS                                  XTESTS_TEST_POINTER_LESS
# define TEST_PTR_LT                                        XTESTS_TEST_POINTER_LESS
#endif /* XTESTS_TEST_POINTER_LESS */
#ifdef XTESTS_TEST_POINTER_LESS_OR_EQUAL
# define TEST_POINTER_LESS_OR_EQUAL                         XTESTS_TEST_POINTER_LESS_OR_EQUAL
# define TEST_PTR_LE                                        XTESTS_TEST_POINTER_LESS_OR_EQUAL
#endif /* XTESTS_TEST_POINTER_LESS_OR_EQUAL */
#ifdef XTESTS_TEST_POINTER_NOT_EQUAL
# define TEST_POINTER_NOT_EQUAL                             XTESTS_TEST_POINTER_NOT_EQUAL
# define TEST_PTR_NE                                        XTESTS_TEST_POINTER_NOT_EQUAL
#endif /* XTESTS_TEST_POINTER_NOT_EQUAL */
#ifdef XTESTS_TEST_WIDE_STRING_CONTAIN
# define TEST_WIDE_STRING_CONTAIN                           XTESTS_TEST_WIDE_STRING_CONTAIN
#endif /* XTESTS_TEST_WIDE_STRING_CONTAIN */
#ifdef XTESTS_TEST_WIDE_STRING_CONTAIN_APPROX
# define TEST_WIDE_STRING_CONTAIN_APPROX                    XTESTS_TEST_WIDE_STRING_CONTAIN_APPROX
#endif /* XTESTS_TEST_WIDE_STRING_CONTAIN_APPROX */
#ifdef XTESTS_TEST_WIDE_STRING_EQUAL
# define TEST_WIDE_STRING_EQUAL                             XTESTS_TEST_WIDE_STRING_EQUAL
# define TEST_WS_EQ                                         XTESTS_TEST_WIDE_STRING_EQUAL
#endif /* XTESTS_TEST_WIDE_STRING_EQUAL */
#ifdef XTESTS_TEST_WIDE_STRING_EQUAL_APPROX
# define TEST_WIDE_STRING_EQUAL_APPROX                      XTESTS_TEST_WIDE_STRING_EQUAL_APPROX
#endif /* XTESTS_TEST_WIDE_STRING_EQUAL_APPROX */
#ifdef XTESTS_TEST_WIDE_STRING_EQUAL_N
# define TEST_WIDE_STRING_EQUAL_N                           XTESTS_TEST_WIDE_STRING_EQUAL_N
#endif /* XTESTS_TEST_WIDE_STRING_EQUAL_N */
#ifdef XTESTS_TEST_WIDE_STRING_EQUAL_N_APPROX
# define TEST_WIDE_STRING_EQUAL_N_APPROX                    XTESTS_TEST_WIDE_STRING_EQUAL_N_APPROX
#endif /* XTESTS_TEST_WIDE_STRING_EQUAL_N_APPROX */
#ifdef XTESTS_TEST_WIDE_STRING_NOT_CONTAIN
# define TEST_WIDE_STRING_NOT_CONTAIN                       XTESTS_TEST_WIDE_STRING_NOT_CONTAIN
#endif /* XTESTS_TEST_WIDE_STRING_NOT_CONTAIN */
#ifdef XTESTS_TEST_WIDE_STRING_NOT_CONTAIN_APPROX
# define TEST_WIDE_STRING_NOT_CONTAIN_APPROX                XTESTS_TEST_WIDE_STRING_NOT_CONTAIN_APPROX
#endif /* XTESTS_TEST_WIDE_STRING_NOT_CONTAIN_APPROX */
#ifdef XTESTS_TEST_WIDE_STRING_NOT_EQUAL
# define TEST_WIDE_STRING_NOT_EQUAL                         XTESTS_TEST_WIDE_STRING_NOT_EQUAL
# define TEST_WS_NE                                         XTESTS_TEST_WIDE_STRING_NOT_EQUAL
#endif /* XTESTS_TEST_WIDE_STRING_NOT_EQUAL */
#ifdef XTESTS_TEST_WIDE_STRING_NOT_EQUAL_APPROX
# define TEST_WIDE_STRING_NOT_EQUAL_APPROX                  XTESTS_TEST_WIDE_STRING_NOT_EQUAL_APPROX
#endif /* XTESTS_TEST_WIDE_STRING_NOT_EQUAL_APPROX */
#ifdef XTESTS_TEST_WIDE_STRING_NOT_EQUAL_N
# define TEST_WIDE_STRING_NOT_EQUAL_N                       XTESTS_TEST_WIDE_STRING_NOT_EQUAL_N
#endif /* XTESTS_TEST_WIDE_STRING_NOT_EQUAL_N */
#ifdef XTESTS_TEST_WIDE_STRING_NOT_EQUAL_N_APPROX
# define TEST_WIDE_STRING_NOT_EQUAL_N_APPROX                XTESTS_TEST_WIDE_STRING_NOT_EQUAL_N_APPROX
#endif /* XTESTS_TEST_WIDE_STRING_NOT_EQUAL_N_APPROX */
#ifdef XTESTS_TEST_WIDE_STRING_SLICE_EQUAL
# define TEST_WIDE_STRING_SLICE_EQUAL                       XTESTS_TEST_WIDE_STRING_SLICE_EQUAL
#endif /* XTESTS_TEST_WIDE_STRING_SLICE_EQUAL */

#ifdef XTESTS_FAIL
# define FAIL                                               XTESTS_FAIL
#endif /* XTESTS_FAIL */
#ifdef XTESTS_FAIL_WITH_QUALIFIER
# define FAIL_WITH_QUALIFIER                                XTESTS_FAIL_WITH_QUALIFIER
#endif /* XTESTS_FAIL_WITH_QUALIFIER */
#ifdef XTESTS_REQUIRE
# define REQUIRE                                            XTESTS_REQUIRE
#endif /* XTESTS_REQUIRE */
#ifdef XTESTS_PASSED
# define PASSED                                             XTESTS_PASSED
#endif /* XTESTS_PASSED */


/* /////////////////////////////////////////////////////////////////////////
 * inclusion control
 */

#ifdef STLSOFT_CF_PRAGMA_ONCE_SUPPORT
# pragma once
#endif /* STLSOFT_CF_PRAGMA_ONCE_SUPPORT */

#endif /* !XTESTS_INCL_XTESTS_H_XTESTS_TERSE */

/* ///////////////////////////// end of file //////////////////////////// */

