#! /bin/bash

ScriptPath=$0
Dir=$(cd $(dirname "$ScriptPath"); pwd)
Basename=$(basename "$ScriptPath")
CMakePath=$Dir/_build


CmakeVerboseMakefile=0
Configuration=Release
RunMake=0
# STLSoftDirEnvVar=${STLSOFT}
STLSoftDirGiven=


# ##########################################################
# command-line handling

while [[ $# -gt 0 ]]; do
    case $1 in
        -d|--debug-configuration)

            Configuration=Debug
            ;;
        -m|--run-make)

            RunMake=1
            ;;
        -s|--stlsoft-root-dir)

            shift
            STLSoftDirGiven=$1
            ;;
        -v|--cmake-verbose-makefile)

            CmakeVerboseMakefile=1
            ;;
        --help)

            cat << EOF
xTests is a small, lightweight, portable, simple unit- and component-test framework suitable for exercising C and C++ libraries
Copyright (c) 2023-2024 Synesis Information Systems
Creates/reinitialises the CMake build script(s)

$ScriptPath [ ... flags/options ... ]

Flags/options:

    behaviour:

    -d
    --debug-configuration
        uses Debug configuration. Default is to use Release

    -m
    --run-make
        runs make after a successful running of CMake

    -s <dir>
    --stlsoft-root-dir <dir>
        specifies the STLSoft root-directory, which will be passed to CMake
        as the variable STLSOFT, and which will override the environment
        variable STLSOFT (if present)

    -v
    --cmake-verbose-makefile
        configures CMake to run verbosely (by setting CMAKE_VERBOSE_MAKEFILE
        to be ON)


    standard flags:

    --help
        displays this help and terminates

EOF

            exit 0
            ;;
        *)

            >&2 echo "$ScriptPath: unrecognised argument '$1'; use --help for usage"

            exit 1
            ;;
    esac

    shift
done


# ##########################################################
# main()

mkdir -p $CMakePath || exit 1

cd $CMakePath

echo "Executing CMake"

if [ $CmakeVerboseMakefile -eq 0 ]; then CmakeVerboseMakefileFlag="OFF" ; else CmakeVerboseMakefileFlag="ON" ; fi
if [ -z $STLSoftDirGiven ]; then CmakeSTLSoftVariable="" ; else CmakeSTLSoftVariable="-DSTLSOFT=$STLSoftDirGiven/" ; fi

cmake \
    $CmakeSTLSoftVariable \
    -DCMAKE_BUILD_TYPE=$Configuration \
    -DCMAKE_VERBOSE_MAKEFILE:BOOL=$CmakeVerboseMakefileFlag \
    .. || (cd ->/dev/null ; exit 1)

status=0

if [ $RunMake -ne 0 ]; then

    echo "Executing make"

    make

    status=$?
fi

cd ->/dev/null

if [ $CmakeVerboseMakefile -ne 0 ]; then

    echo -e "contents of $CMakePath:"
    ls -al $CMakePath
fi

exit $status


# ############################## end of file ############################# #

