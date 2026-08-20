# DB_TerminateServer

`_ZN18DB_TerminateServerC1Ev`

`DB_TerminateServer::DB_TerminateServer()`

| 类 | 地址 |
|---|---|
| `DB_TerminateServer` | `0x0841a284` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a284  _ZN18DB_TerminateServerC1Ev
#           DB_TerminateServer::DB_TerminateServer()
# range [0x0841a284, 0x0841a29f]
0841a284 +0x00:  push   %ebp
0841a285 +0x01:  mov    %esp,%ebp
0841a287 +0x03:  sub    $0x18,%esp
0841a28a +0x06:  mov    0x8(%ebp),%eax
0841a28d +0x09:  mov    %eax,(%esp)
0841a290 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
0841a295 +0x11:  mov    0x8(%ebp),%eax
0841a298 +0x14:  movl   $&_ZTV18DB_TerminateServer+0x8,(%eax)
0841a29e +0x1a:  leave
0841a29f +0x1b:  ret
```

## 反编译 C

```c
// DB_TerminateServer::DB_TerminateServer @ 0x841a284

/* DB_TerminateServer::DB_TerminateServer() */

void __thiscall DB_TerminateServer::DB_TerminateServer(DB_TerminateServer *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f930;
  return;
}
```
