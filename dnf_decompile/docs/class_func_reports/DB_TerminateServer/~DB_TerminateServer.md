# ~DB_TerminateServer

`_ZN18DB_TerminateServerD1Ev`

`DB_TerminateServer::~DB_TerminateServer()`

| 类 | 地址 |
|---|---|
| `DB_TerminateServer` | `0x0841a2a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a2a0  _ZN18DB_TerminateServerD1Ev
#           DB_TerminateServer::~DB_TerminateServer()
# range [0x0841a2a0, 0x0841a2cf]
0841a2a0 +0x00:  push   %ebp
0841a2a1 +0x01:  mov    %esp,%ebp
0841a2a3 +0x03:  sub    $0x18,%esp
0841a2a6 +0x06:  mov    0x8(%ebp),%eax
0841a2a9 +0x09:  movl   $&_ZTV18DB_TerminateServer+0x8,(%eax)
0841a2af +0x0f:  mov    0x8(%ebp),%eax
0841a2b2 +0x12:  mov    %eax,(%esp)
0841a2b5 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
0841a2ba +0x1a:  mov    $0x0,%eax
0841a2bf +0x1f:  test   %al,%al
0841a2c1 +0x21:  je     0841a2ce <+0x2e>
0841a2c3 +0x23:  mov    0x8(%ebp),%eax
0841a2c6 +0x26:  mov    %eax,(%esp)
0841a2c9 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0841a2ce +0x2e:  leave
0841a2cf +0x2f:  ret
```

## 反编译 C

```c
// DB_TerminateServer::~DB_TerminateServer @ 0x841a2a0

/* WARNING: Removing unreachable block (ram,0x0841a2c3) */
/* DB_TerminateServer::~DB_TerminateServer() */

void __thiscall DB_TerminateServer::~DB_TerminateServer(DB_TerminateServer *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f930;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
