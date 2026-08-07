# df_stun_r 还原报告

生成时间：2026-08-07

## 结论

`df_stun_r`（STUN 服务器）已完成源码重建并通过验收水位：**全部 26 个唯一项目函数语义等价**，
机器码助记符级匹配 25/26（96.2%），唯一 DIFF 为 1 条编译器寄存器分配差异，语义完全相同。

原始二进制：`dnf_installer/build/dnf_data/home/template/neople/stun/df_stun_r`
重建产物：`source/build-stun/df_stun_r`（可运行，已用 `test` 参数冒烟验证端口 2311/2312/2313 正常打开）

## 原始二进制特征（实测）

| 项目 | 值 |
|---|---|
| ELF | 64 位 x86-64 EXEC（非 PIE），入口 0x401440 |
| 编译器 | GCC 4.1.2 20080704（Red Hat 4.1.2-52），`.comment` 9 条全部一致 |
| DWARF | 完整，4 个 CU：`stun.cpp` / `udp.cpp` / `server.cpp` / `global_func.cpp` |
| 命名函数 | 42 个 T/t/W/w 符号，去重后 26 个唯一项目函数 |
| 动态依赖 | libpthread / libcrypt / libz / libstdc++.so.6 / libm / libgcc_s / libc |
| 源路径 | `/home/neople/source/DNFServer/StunServer/stun_server/` |

## 源码还原（4 个 TU + 4 个头文件）

- `stun.h`：`Address{ushort port; uint ip;}`、`MSG_BINDING_RESPONSE`（packed，7 字节）、
  `MSG_MTU_ECHO{ushort recv_len;}`，以及三个线程函数/msgProcess 声明（DWARF 确认布局）。
- `udp.h`：`typedef int Socket`、`INVALID_SOCKET=-1`、`SOCKET_ERROR=-1`、
  `udpMaxMessageLength=16384`、`inline int getErrno()`（生成弱符号 `_Z8getErrnov`）。
- `stun.cpp`：`stunProcess1/2/3`、`msgProcess`（switch 形态，见下）。
- `udp.cpp`：`openPort` / `getMessage` / `sendMessage` / `initNetwork`（空函数，字节级 IDENTICAL）。
- `global_func.cpp`：`check_argv` / `check_pid_file` / `daemon_init` / `save_pid` /
  `send_term_signal` / `rdar_terminate` / `regist_signal` / `signal_handler` /
  `regist_signals` / `make_dir` / `write_log`。
- `server.cpp`：全局 `socketRealIp_` / `socketNat_` / `socketPortResctric_` + `main`。

### 还原中确认的关键源码形态（与 Ghidra 反编译/反汇编逐一核对）

1. **错误分支几乎全是 switch**：`getMessage`（0x58/0x68/0xb/default）、
   `sendMessage`（0x61/0x6f,0x70,0x71/default）、`openPort`（0/0x62/0x63/default）
   的反汇编都是 `cmp; je` 链 + `jmp default`，对应 switch 而非 if-else。
   `openPort` 的 case 顺序必须为 `0, EADDRINUSE, 99, default` 才能复现原始块布局。
2. **`sendMessage` 尾部**：`else { if (sent != l) { only...; return false; } return true; }`
   的嵌套形态才能复现 `je` 直达末尾 return-true 的布局。
3. **`getMessage` 参数求值序**：`sockaddr_in from; int fromLen = 16;` +
   `recvfrom(fd, buf, *len, 0, (sockaddr*)&from, (socklen_t*)&fromLen)` 精确复现
   原始的参数求值顺序（&fromLen → &from → *len → buf → fd）。
4. **布尔判断用 `!x` 而非 `x == false`**：原始反汇编为 `xor eax,1; test al,al; je`，
   `== false` 会产生 `sete al` 序列。
5. **`msgProcess` 是 `switch (recv[0])`**（对 char 直接 switch 产生字节比较，
   对中间变量 switch 会产生 DWORD 提升）。
6. **`regist_signal`**：`act.sa_flags = 0;` 后再按 `sig == SIGALRM` 置位；
   失败判定 `if (sigaction(...) < 0)`（shr+test+je 模式）。
7. **`check_argv`**：`if (argc != 2) return false;` 前置（复现顶部返回块）；
   `strcmp` 由 GCC 内联为 `repz cmps`，常量 "start"/"stop"/"test"。
8. **`main`**：独立 `if` 序列（非 else-if），每个失败 `return 0`；
   `int ret;` 未初始化 + `ret = 0;` 后再三次 `pthread_create`；
   `while (true) usleep(100000);`。
9. **`write_log`**：`if (argv != 0) { %s(%d) } else { %s }`（复现分支布局）。

## 构建参数

```sh
sh source/toolchain/build-stun.sh
```

- 编译器：CentOS 5 gcc-c++ 4.1.2-55（`/tmp/c5root`，与原始 4.1.2-52 仅差补丁小版本）
- 编译：`-O0 -D_GNU_SOURCE -std=gnu++98 -nostdinc` + c5root 4.1.2 头文件（64 位）
- 链接：宿主 `g++ -no-pie`（动态 libstdc++/libc；原始亦为动态链接）
- 原始依赖含 libz，但项目代码无 zlib 调用，重建未链 libz（不影响函数体）

## 逐函数对比结果（docs/data/df_stun_r_all_function_compare.tsv）

| 分类 | 数量 | 说明 |
|---|---:|---|
| IDENTICAL | 1 | `initNetwork`（空函数，逐字节一致） |
| NEAR | 24 | 助记符序列完全一致，仅地址/栈偏移差异 |
| DIFF | 1 | `write_log`：memset 参数多 1 条 `mov rdi,rax`（寄存器分配产物） |
| MISSING | 0 | — |
| EXTRA | 0 | — |

### write_log 唯一差异说明

原始：`lea rdi,[logFileName]; mov edx,0x100; mov esi,0; call memset`
重建：`lea rax,[logFileName]; mov rdi,rax; mov edx,0x100; mov esi,0; call memset`

同二进制内 `save_pid` 的 memset 即使用 lea-rax 形态，故这是 -O0 下随上下文变化的
寄存器分配产物（4.1.2-52 与 -55 补丁差异所致），语义完全等价。
已穷尽尝试 `sizeof`/字面量/`&buf[0]`/`(void*)` 强转/`'\0'`/声明顺序等源码形态均无法消除。

## 与 community 水位的对照

community 最终：490/490 语义等价，助记符级 93.9%（30 个 DIFF 分类为语义等价）。
stun 达到：26/26 语义等价，助记符级 96.2%，DIFF 仅 1 个且为单指令寄存器产物。
机器码相似度水位不低于 community 验收线。
