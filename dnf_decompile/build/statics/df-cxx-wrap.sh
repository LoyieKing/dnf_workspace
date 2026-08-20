#!/bin/sh
export LD_LIBRARY_PATH="/home/wangyilei/dnf_workspace/dnf_decompile/toolchains/c6root/usr/lib64:/home/wangyilei/dnf_workspace/dnf_decompile/toolchains/c6root/usr/lib"
exec "/home/wangyilei/dnf_workspace/dnf_decompile/toolchains/c6root/usr/bin/g++" -B "/home/wangyilei/dnf_workspace/dnf_decompile/toolchains/cc1plus446bin/" "$@"
