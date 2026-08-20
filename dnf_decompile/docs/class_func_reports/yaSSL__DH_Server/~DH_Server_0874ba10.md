# ~DH_Server

`_ZN5yaSSL9DH_ServerD0Ev`

`yaSSL::DH_Server::~DH_Server()`

| 类 | 地址 |
|---|---|
| `yaSSL::DH_Server` | `0x0874ba10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ba10  _ZN5yaSSL9DH_ServerD0Ev
#           yaSSL::DH_Server::~DH_Server()
# range [0x0874ba10, 0x0874ba3a]
0874ba10 +0x00:  push   %ebp
0874ba11 +0x01:  mov    %esp,%ebp
0874ba13 +0x03:  push   %ebx
0874ba14 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874ba19 +0x09:  add    $0xc2117f,%ebx
0874ba1f +0x0f:  sub    $0x14,%esp
0874ba22 +0x12:  mov    0x8(%ebp),%eax
0874ba25 +0x15:  mov    %eax,(%esp)
0874ba28 +0x18:  call   0874b9a0 <_ZN5yaSSL9DH_ServerD1Ev>  ; yaSSL::DH_Server::~DH_Server()
0874ba2d +0x1d:  add    $0x14,%esp
0874ba30 +0x20:  pop    %ebx
0874ba31 +0x21:  pop    %ebp
0874ba32 +0x22:  ret
0874ba33 +0x23:  nop
0874ba34 +0x24:  lea    0x0(%esi),%esi
0874ba3a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::DH_Server::~DH_Server @ 0x874ba10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DH_Server::~DH_Server() */

void __thiscall yaSSL::DH_Server::~DH_Server(DH_Server *this)

{
  ~DH_Server(this);
  return;
}
```
