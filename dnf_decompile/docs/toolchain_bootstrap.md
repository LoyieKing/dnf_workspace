# GCC 4.x 工具链从零启动（2026-08-10）

重建工程需要旧编译器（原始 DNF 服务器二进制是 GCC 4.1.2/4.4.x 时代产物）。
本仓库自带的构建脚本（`source/toolchain/build-*.sh`）依赖一组从 CentOS 5/6 的
vault 仓库解包出来的工具链根（老开发者机器上的 `/tmp/c6root` 等）。任何新机器
都可一键重建这套环境：

```bash
cd dnf_decompile
bash source/toolchain/bootstrap_toolchain.sh
source toolchains/toolchain.env          # 或自定义根: DNF_TC_ROOT=/path bash ...
```

## 产物（默认 `dnf_decompile/toolchains/`，可用 `DNF_TC_ROOT` 覆盖）

| 目录 | 内容 | 用途 |
|---|---|---|
| `c6root/` | CentOS 6.10 gcc-4.4.7-23（x86_64 + i686） | 主编译器（社区/多数服务） |
| `c5root/` | CentOS 5.11 gcc-4.1.2-55.el5 | 4.1.2 静态运行时 / C5 编译组 |
| `c5r52tool/` | CentOS 5.2 gcc-4.1.2-42 x86_64 | 4.1.1/4.1.2 32 位 libgcc |
| `c5r52i386/` | CentOS 5.2 gcc-4.1.2-42 i386 | 4.1.1/4.1.2 libstdc++（i386） |
| `cc1plus446bin/` | CentOS 6.2 gcc-c++-4.4.6-3 的 cc1plus | auction/point 精确对齐（ORIG=4.4.6-3） |
| `lsd44/v4.4.6/` | CentOS 6.2 libstdc++-devel-4.4.6 头 | 4.4.6 头文件 |
| `zlib32/lib/` | i386 zlib 静态库 | 链接用 |
| `bin/` | `c6-g++` / `c5-g++` / `c6-g++-446r` 包装脚本 | 直接调用 |
| `toolchain.env` | 环境变量（C6ROOT/C5ROOT/C5R52TOOL/C5R52I386/C6LIBSTDCXX446/ZLIB32/CC1PLUS446） | build 脚本 source |

## 依赖与镜像

- 只需 `python3`（内置 zlib/bz2/lzma）+ `curl`（或 `wget`）；**不需要** rpm/bsdtar/cpio。
- RPM 解包由 `source/toolchain/rpm_extract.py` 纯 Python 完成（支持 gzip/bzip2/xz 载荷）。
- 镜像默认清华 `https://mirrors.tuna.tsinghua.edu.cn/centos-vault`，可用
  `DNF_MIRROR` 覆盖（如 `https://vault.centos.org`）。CentOS 5 的包在
  `os/<arch>/CentOS/`，CentOS 6 在 `os/<arch>/Packages/`，脚本已按发行版适配。

## 冒烟测试

脚本末尾自动验证：

```
c6-g++ (-m32) OK
c5-g++ (-m32) OK
```

若宿主缺 32 位系统库（`-m32` 链接 glibc），编译可能失败——那只是宿主环境问题，
工具链根本身已就绪；构建脚本用 `-nostdinc` + 自带头文件链 + 静态 libstdc++/libgcc，
不依赖宿主 32 位开发包。

## 与构建脚本的对接

- 旧构建脚本硬编码 `/tmp/c6root` 等路径；新环境用 `source toolchains/toolchain.env`
  后运行（或等 CMake 迁移完成后直接 `cmake`，工具链文件引用 `$DNF_TC_ROOT`）。
- 包装脚本等价物：`toolchains/bin/c6-g++` ≈ 旧 `/tmp/c6-g++`，`c5-g++` ≈ 旧
  `/tmp/c5-g++`，`c6-g++-446r` ≈ 旧 `/tmp/c6-g++-446r`。
