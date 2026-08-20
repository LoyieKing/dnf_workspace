# ~DB_TerminateServer

`_ZN18DB_TerminateServerD0Ev`

`DB_TerminateServer::~DB_TerminateServer()`

| 类 | 地址 |
|---|---|
| `DB_TerminateServer` | `0x0841a2d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a2d0  _ZN18DB_TerminateServerD0Ev
#           DB_TerminateServer::~DB_TerminateServer()
# range [0x0841a2d0, 0x0841a2ed]
0841a2d0 +0x00:  push   %ebp
0841a2d1 +0x01:  mov    %esp,%ebp
0841a2d3 +0x03:  sub    $0x18,%esp
0841a2d6 +0x06:  mov    0x8(%ebp),%eax
0841a2d9 +0x09:  mov    %eax,(%esp)
0841a2dc +0x0c:  call   0841a2a0 <_ZN18DB_TerminateServerD1Ev>  ; DB_TerminateServer::~DB_TerminateServer()
0841a2e1 +0x11:  mov    0x8(%ebp),%eax
0841a2e4 +0x14:  mov    %eax,(%esp)
0841a2e7 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0841a2ec +0x1c:  leave
0841a2ed +0x1d:  ret
```

## 反编译 C

```c
// DB_TerminateServer::~DB_TerminateServer @ 0x841a2d0

/* DB_TerminateServer::~DB_TerminateServer() */

void __thiscall DB_TerminateServer::~DB_TerminateServer(DB_TerminateServer *this)

{
  ~DB_TerminateServer(this);
  operator_delete(this);
  return;
}
```
