# ~DH_Server

`_ZN5yaSSL9DH_ServerD1Ev`

`yaSSL::DH_Server::~DH_Server()`

| 类 | 地址 |
|---|---|
| `yaSSL::DH_Server` | `0x0874b9a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b9a0  _ZN5yaSSL9DH_ServerD1Ev
#           yaSSL::DH_Server::~DH_Server()
# range [0x0874b9a0, 0x0874ba09]
0874b9a0 +0x00:  push   %ebp
0874b9a1 +0x01:  mov    %esp,%ebp
0874b9a3 +0x03:  sub    $0x18,%esp
0874b9a6 +0x06:  mov    %ebx,-0x8(%ebp)
0874b9a9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b9ae +0x0e:  add    $0xc211ea,%ebx
0874b9b4 +0x14:  mov    %esi,-0x4(%ebp)
0874b9b7 +0x17:  mov    0x8(%ebp),%esi
0874b9ba +0x1a:  mov    -0x2a0(%ebx),%eax
0874b9c0 +0x20:  add    $0x8,%eax
0874b9c3 +0x23:  mov    %eax,(%esi)
0874b9c5 +0x25:  movb   $0x0,0x4(%esp)
0874b9ca +0x2a:  mov    0x24(%esi),%eax
0874b9cd +0x2d:  mov    %eax,(%esp)
0874b9d0 +0x30:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874b9d5 +0x35:  movb   $0x0,0x4(%esp)
0874b9da +0x3a:  mov    0x1c(%esi),%eax
0874b9dd +0x3d:  mov    %eax,(%esp)
0874b9e0 +0x40:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874b9e5 +0x45:  lea    0x4(%esi),%eax
0874b9e8 +0x48:  mov    %eax,(%esp)
0874b9eb +0x4b:  call   0874b940 <_ZN5yaSSL14ServerDHParamsD1Ev>  ; yaSSL::ServerDHParams::~ServerDHParams()
0874b9f0 +0x50:  mov    -0x458(%ebx),%eax
0874b9f6 +0x56:  add    $0x8,%eax
0874b9f9 +0x59:  mov    %eax,(%esi)
0874b9fb +0x5b:  mov    -0x8(%ebp),%ebx
0874b9fe +0x5e:  mov    -0x4(%ebp),%esi
0874ba01 +0x61:  mov    %ebp,%esp
0874ba03 +0x63:  pop    %ebp
0874ba04 +0x64:  ret
0874ba05 +0x65:  nop
0874ba06 +0x66:  lea    0x0(%esi),%esi
0874ba09 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::DH_Server::~DH_Server @ 0x874b9a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DH_Server::~DH_Server() */

void __thiscall yaSSL::DH_Server::~DH_Server(DH_Server *this)

{
  *(undefined **)this = PTR_vtable_0936c8f8 + 8;
  operator_delete__(*(undefined4 *)(this + 0x24),0);
  operator_delete__(*(undefined4 *)(this + 0x1c),0);
  ServerDHParams::~ServerDHParams((ServerDHParams *)(this + 4));
  *(undefined **)this = PTR_vtable_0936c740 + 8;
  return;
}
```
