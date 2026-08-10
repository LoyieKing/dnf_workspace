#!/bin/bash
# ============================================================
# DNF 重建 GCC 4.x 工具链从零启动脚本（2026-08-10）
# ------------------------------------------------------------
# 还原工程依赖的旧工具链（CentOS 5/6 的 gcc 4.1.2 / 4.4.7 / 4.4.6 等），
# 让任何开发者在全新机器上一条命令搭好环境：
#   bash source/toolchain/bootstrap_toolchain.sh
#
# 产物（默认 $REPO_ROOT/toolchains/，可用 DNF_TC_ROOT 覆盖）:
#   c6root/          CentOS 6.10 gcc-4.4.7-23（x86_64 + i686，主编译器）
#   c5root/          CentOS 5.11 gcc-4.1.2-55.el5（x86_64 + i686）
#   c5r52tool/       CentOS 5.2  gcc-4.1.2-42.el5 x86_64（含 4.1.1/4.1.2 两套 libgcc）
#   c5r52i386/       CentOS 5.2  gcc-4.1.2-42.el5 i386（4.1.1/4.1.2 libstdc++）
#   cc1plus446bin/   CentOS 6.2  gcc-c++-4.4.6-3 的 cc1plus（auction/point 精确对齐用）
#   lsd44/v4.4.6/    CentOS 6.2  libstdc++-devel-4.4.6（4.4.6 头文件）
#   zlib32/lib/      32 位 zlib 静态库（链接用）
#   bin/             c6-g++ / c5-g++ / c6-g++-446r 包装脚本
#   toolchain.env    供 build 脚本 source 的环境变量
#
# 依赖: python3（内置 zlib/bz2/lzma）、curl 或 wget。
# 镜像: 默认清华 centos-vault（https://mirrors.tuna.tsinghua.edu.cn/centos-vault），
#       可用 DNF_MIRROR 覆盖（如 https://vault.centos.org）。
# ============================================================
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
TC_ROOT="${DNF_TC_ROOT:-$REPO_ROOT/toolchains}"
MIRROR="${DNF_MIRROR:-https://mirrors.tuna.tsinghua.edu.cn/centos-vault}"
RPM_DIR="$TC_ROOT/_rpm_cache"
PY="$REPO_ROOT/source/toolchain/rpm_extract.py"

mkdir -p "$TC_ROOT" "$RPM_DIR"

say()  { printf '\033[1;34m[boostrap]\033[0m %s\n' "$*"; }
die()  { printf '\033[1;31m[boostrap] ERROR:\033[0m %s\n' "$*" >&2; exit 1; }

command -v python3 >/dev/null || die "需要 python3"
if command -v curl >/dev/null; then
    fetch() { curl -fsSL --retry 3 -o "$1" "$2"; }
elif command -v wget >/dev/null; then
    fetch() { wget -q -O "$1" "$2"; }
else
    die "需要 curl 或 wget"
fi

# dl <rel> <arch> <layout:Packages|CentOS> <pkg> -> 解包到 $TC_ROOT/<root>
dl() {
    local rel="$1" arch="$2" layout="$3" pkg="$4" root="$5"
    local url="$MIRROR/$rel/os/$arch/$layout/$pkg"
    local rpm="$RPM_DIR/$pkg"
    if [ ! -s "$rpm" ]; then
        say "下载 $pkg"
        fetch "$rpm" "$url" || die "下载失败: $url"
    fi
    python3 "$PY" "$rpm" "$TC_ROOT/$root" || die "解包失败: $pkg"
}

need() { # need <root> <pkg> —— 若 root 已存在且含标记则跳过
    local root="$1" pkg="$2"
    [ -f "$TC_ROOT/$root/.bootstrap_done" ] && grep -q "^$pkg\$" "$TC_ROOT/$root/.bootstrap_done" 2>/dev/null
}
mark() { # mark <root> <pkg>
    local root="$1" pkg="$2"
    mkdir -p "$TC_ROOT/$root"
    echo "$pkg" >> "$TC_ROOT/$root/.bootstrap_done"
}

# ---------------- c6root: CentOS 6.10 gcc-4.4.7-23 ----------------
say "=== [1/7] c6root (CentOS 6.10, gcc-4.4.7-23) ==="
for p in \
    gcc-4.4.7-23.el6.x86_64.rpm \
    gcc-c%2B%2B-4.4.7-23.el6.x86_64.rpm \
    libgcc-4.4.7-23.el6.x86_64.rpm \
    libstdc%2B%2B-4.4.7-23.el6.x86_64.rpm \
    libstdc%2B%2B-devel-4.4.7-23.el6.x86_64.rpm \
    glibc-2.12-1.212.el6.x86_64.rpm \
    glibc-devel-2.12-1.212.el6.x86_64.rpm \
    glibc-headers-2.12-1.212.el6.x86_64.rpm \
    kernel-headers-2.6.32-754.el6.x86_64.rpm \
    mpfr-2.4.1-6.el6.x86_64.rpm \
    gmp-4.3.1-13.el6.x86_64.rpm \
    libgcc-4.4.7-23.el6.i686.rpm \
    libstdc%2B%2B-4.4.7-23.el6.i686.rpm \
    libstdc%2B%2B-devel-4.4.7-23.el6.i686.rpm \
    glibc-2.12-1.212.el6.i686.rpm \
    glibc-devel-2.12-1.212.el6.i686.rpm; do
    need c6root "$p" || { dl 6.10 x86_64 Packages "$p" c6root; mark c6root "$p"; }
done

# ---------------- c5root: CentOS 5.11 gcc-4.1.2-55.el5 ----------------
say "=== [2/7] c5root (CentOS 5.11, gcc-4.1.2-55) ==="
for p in \
    gcc-4.1.2-55.el5.x86_64.rpm \
    gcc-c%2B%2B-4.1.2-55.el5.x86_64.rpm \
    libgcc-4.1.2-55.el5.x86_64.rpm \
    libstdc%2B%2B-4.1.2-55.el5.x86_64.rpm \
    libstdc%2B%2B-devel-4.1.2-55.el5.x86_64.rpm \
    glibc-devel-2.5-123.x86_64.rpm \
    glibc-headers-2.5-123.x86_64.rpm \
    kernel-headers-2.6.18-398.el5.x86_64.rpm \
    libgcc-4.1.2-55.el5.i386.rpm \
    libstdc%2B%2B-devel-4.1.2-55.el5.i386.rpm \
    glibc-devel-2.5-123.i386.rpm; do
    need c5root "$p" || { dl 5.11 x86_64 CentOS "$p" c5root; mark c5root "$p"; }
done

# ---------------- c5r52tool: CentOS 5.2 x86_64 (4.1.1 + 4.1.2) ----------------
say "=== [3/7] c5r52tool (CentOS 5.2 x86_64) ==="
for p in \
    gcc-4.1.2-42.el5.x86_64.rpm \
    gcc-c%2B%2B-4.1.2-42.el5.x86_64.rpm \
    libgcc-4.1.2-42.el5.x86_64.rpm \
    libstdc%2B%2B-4.1.2-42.el5.x86_64.rpm \
    libstdc%2B%2B-devel-4.1.2-42.el5.x86_64.rpm; do
    need c5r52tool "$p" || { dl 5.2 x86_64 CentOS "$p" c5r52tool; mark c5r52tool "$p"; }
done

# ---------------- c5r52i386: CentOS 5.2 i386 (4.1.1 + 4.1.2 libstdc++) ----------------
say "=== [4/7] c5r52i386 (CentOS 5.2 i386) ==="
for p in \
    gcc-4.1.2-42.el5.i386.rpm \
    gcc-c%2B%2B-4.1.2-42.el5.i386.rpm \
    libgcc-4.1.2-42.el5.i386.rpm \
    libstdc%2B%2B-4.1.2-42.el5.i386.rpm \
    libstdc%2B%2B-devel-4.1.2-42.el5.i386.rpm; do
    need c5r52i386 "$p" || { dl 5.2 i386 CentOS "$p" c5r52i386; mark c5r52i386 "$p"; }
done

# ---------------- cc1plus446bin: CentOS 6.2 gcc-c++-4.4.6-3 的 cc1plus ----------------
say "=== [5/7] cc1plus446bin (CentOS 6.2, cc1plus 4.4.6-3) ==="
PKG446=gcc-c%2B%2B-4.4.6-3.el6.x86_64.rpm
if [ ! -x "$TC_ROOT/cc1plus446bin/cc1plus" ]; then
    dl 6.2 x86_64 Packages "$PKG446" cc1plus446_src
    mkdir -p "$TC_ROOT/cc1plus446bin"
    cp "$TC_ROOT/cc1plus446_src/usr/libexec/gcc/x86_64-redhat-linux/4.4.6/cc1plus" \
       "$TC_ROOT/cc1plus446bin/cc1plus" || die "6.2 包内未找到 cc1plus"
    chmod +x "$TC_ROOT/cc1plus446bin/cc1plus"
fi

# ---------------- lsd44: CentOS 6.2 libstdc++-devel-4.4.6（头文件） ----------------
say "=== [6/7] lsd44/v4.4.6 (libstdc++-devel 4.4.6) ==="
PKG446D=libstdc%2B%2B-devel-4.4.6-3.el6.x86_64.rpm
if [ ! -d "$TC_ROOT/lsd44/v4.4.6/usr/include/c++/4.4.6" ]; then
    dl 6.2 x86_64 Packages "$PKG446D" lsd44
    # 解包根就是 lsd44/v4.4.6（路径含 usr/include/c++/4.4.6）
fi

# ---------------- zlib32: 32 位 zlib 静态库（5.11 i386 zlib-devel 才带 libz.a） ----------------
say "=== [7/7] zlib32 (i386 zlib-devel) ==="
PKGZ=zlib-devel-1.2.3-7.el5.i386.rpm
if [ ! -f "$TC_ROOT/zlib32/lib/libz.a" ]; then
    dl 5.11 i386 CentOS "$PKGZ" zlib32_src
    mkdir -p "$TC_ROOT/zlib32/lib"
    cp "$TC_ROOT/zlib32_src/usr/lib/libz.a" "$TC_ROOT/zlib32/lib/libz.a"
    [ -f "$TC_ROOT/zlib32_src/usr/lib/libz.so" ] && \
        cp "$TC_ROOT/zlib32_src/usr/lib/libz.so" "$TC_ROOT/zlib32/lib/libz.so"
fi

# ---------------- 包装脚本与 env ----------------
say "生成包装脚本与 toolchain.env"
mkdir -p "$TC_ROOT/bin"
cat > "$TC_ROOT/bin/c6-g++" <<EOF
#!/bin/sh
# CentOS 6.10 gcc-4.4.7 包装（DNF_TC_ROOT=$TC_ROOT）
export GCC_EXEC_PREFIX="$TC_ROOT/c6root/usr/libexec/gcc/"
export LD_LIBRARY_PATH="$TC_ROOT/c6root/usr/lib64:$TC_ROOT/c6root/usr/lib"
exec "$TC_ROOT/c6root/usr/bin/g++" "\$@"
EOF
cat > "$TC_ROOT/bin/c5-g++" <<EOF
#!/bin/sh
# CentOS 5.11 gcc-4.1.2-55.el5 包装
export GCC_EXEC_PREFIX="$TC_ROOT/c5root/usr/libexec/gcc/"
export PATH="$TC_ROOT/c5root/usr/libexec/gcc/x86_64-redhat-linux/4.1.2:\$PATH"
exec "$TC_ROOT/c5root/usr/bin/g++" "\$@"
EOF
cat > "$TC_ROOT/bin/c6-g++-446r" <<EOF
#!/bin/sh
# c6root 驱动 + 4.4.6 cc1plus（auction/point 精确对齐）
export LD_LIBRARY_PATH="$TC_ROOT/c6root/usr/lib64:$TC_ROOT/c6root/usr/lib"
exec "$TC_ROOT/c6root/usr/bin/g++" -B "$TC_ROOT/cc1plus446bin/" "\$@"
EOF
chmod +x "$TC_ROOT/bin/c6-g++" "$TC_ROOT/bin/c5-g++" "$TC_ROOT/bin/c6-g++-446r"

cat > "$TC_ROOT/toolchain.env" <<EOF
# 由 bootstrap_toolchain.sh 生成（DNF_TC_ROOT=$TC_ROOT）
export DNF_TC_ROOT="$TC_ROOT"
export C6ROOT="$TC_ROOT/c6root"
export C5ROOT="$TC_ROOT/c5root"
export C5R52TOOL="$TC_ROOT/c5r52tool"
export C5R52I386="$TC_ROOT/c5r52i386"
export C6LIBSTDCXX446="$TC_ROOT/lsd44/v4.4.6"
export ZLIB32="$TC_ROOT/zlib32"
export CC1PLUS446="$TC_ROOT/cc1plus446bin"
export PATH="$TC_ROOT/bin:\$PATH"
EOF

# ---------------- 冒烟测试 ----------------
say "冒烟测试"
cat > "$TC_ROOT/_smoke.cpp" <<'EOF'
#include <string>
#include <cstdio>
int main(){ std::string s="smoke"; printf("%s\n", s.c_str()); return 0; }
EOF
if "$TC_ROOT/bin/c6-g++" -m32 -O0 "$TC_ROOT/_smoke.cpp" -o "$TC_ROOT/_smoke6" 2>/dev/null; then
    say "c6-g++ (-m32) OK"
else
    say "c6-g++ (-m32) 冒烟失败（缺少 -m32 系统库时属正常，见文档）"
fi
if "$TC_ROOT/bin/c5-g++" -m32 -O0 "$TC_ROOT/_smoke.cpp" -o "$TC_ROOT/_smoke5" 2>/dev/null; then
    say "c5-g++ (-m32) OK"
else
    say "c5-g++ (-m32) 冒烟失败（缺少 -m32 系统库时属正常，见文档）"
fi

say "完成。用法: source $TC_ROOT/toolchain.env 后运行 build-*.sh（或等 CMake 迁移后直接 cmake）"
