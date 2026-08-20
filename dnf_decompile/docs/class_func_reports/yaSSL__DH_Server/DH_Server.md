# DH_Server

`_ZN5yaSSL9DH_ServerC1Ev`

`yaSSL::DH_Server::DH_Server()`

| 类 | 地址 |
|---|---|
| `yaSSL::DH_Server` | `0x08746da0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746da0  _ZN5yaSSL9DH_ServerC1Ev
#           yaSSL::DH_Server::DH_Server()
# range [0x08746da0, 0x08746def]
08746da0 +0x00:  push   %ebp
08746da1 +0x01:  mov    %esp,%ebp
08746da3 +0x03:  sub    $0x18,%esp
08746da6 +0x06:  mov    %ebx,-0x8(%ebp)
08746da9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08746dae +0x0e:  add    $0xc25dea,%ebx
08746db4 +0x14:  mov    %esi,-0x4(%ebp)
08746db7 +0x17:  mov    0x8(%ebp),%esi
08746dba +0x1a:  mov    -0x2a0(%ebx),%eax
08746dc0 +0x20:  add    $0x8,%eax
08746dc3 +0x23:  mov    %eax,(%esi)
08746dc5 +0x25:  lea    0x4(%esi),%eax
08746dc8 +0x28:  mov    %eax,(%esp)
08746dcb +0x2b:  call   08746d60 <_ZN5yaSSL14ServerDHParamsC1Ev>  ; yaSSL::ServerDHParams::ServerDHParams()
08746dd0 +0x30:  movl   $0x0,0x1c(%esi)
08746dd7 +0x37:  movl   $0x0,0x20(%esi)
08746dde +0x3e:  movl   $0x0,0x24(%esi)
08746de5 +0x45:  mov    -0x8(%ebp),%ebx
08746de8 +0x48:  mov    -0x4(%ebp),%esi
08746deb +0x4b:  mov    %ebp,%esp
08746ded +0x4d:  pop    %ebp
08746dee +0x4e:  ret
08746def +0x4f:  nop
```

## 反编译 C

```c
// yaSSL::DH_Server::DH_Server @ 0x8746da0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DH_Server::DH_Server() */

void __thiscall yaSSL::DH_Server::DH_Server(DH_Server *this)

{
  *(undefined **)this = PTR_vtable_0936c8f8 + 8;
  ServerDHParams::ServerDHParams((ServerDHParams *)(this + 4));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}
```
