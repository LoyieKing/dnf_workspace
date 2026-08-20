# CleanPreMaster

`_ZN5yaSSL10Connection14CleanPreMasterEv`

`yaSSL::Connection::CleanPreMaster()`

| 类 | 地址 |
|---|---|
| `yaSSL::Connection` | `0x0874bb40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874bb40  _ZN5yaSSL10Connection14CleanPreMasterEv
#           yaSSL::Connection::CleanPreMaster()
# range [0x0874bb40, 0x0874bb9c]
0874bb40 +0x00:  push   %ebp
0874bb41 +0x01:  mov    %esp,%ebp
0874bb43 +0x03:  sub    $0x18,%esp
0874bb46 +0x06:  mov    %esi,-0x4(%ebp)
0874bb49 +0x09:  mov    0x8(%ebp),%esi
0874bb4c +0x0c:  mov    %ebx,-0x8(%ebp)
0874bb4f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
0874bb54 +0x14:  add    $0xc21044,%ebx
0874bb5a +0x1a:  mov    (%esi),%eax
0874bb5c +0x1c:  test   %eax,%eax
0874bb5e +0x1e:  je     0874bb91 <+0x51>
0874bb60 +0x20:  mov    0x134(%esi),%edx
0874bb66 +0x26:  mov    %edx,0x8(%esp)
0874bb6a +0x2a:  mov    0x124(%esi),%edx
0874bb70 +0x30:  mov    %eax,(%esp)
0874bb73 +0x33:  mov    %edx,0x4(%esp)
0874bb77 +0x37:  call   08747c30 <_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE>  ; yaSSL::clean(unsigned char volatile*, unsigned int, yaSSL::RandomPool&)
0874bb7c +0x3c:  movb   $0x0,0x4(%esp)
0874bb81 +0x41:  mov    (%esi),%eax
0874bb83 +0x43:  mov    %eax,(%esp)
0874bb86 +0x46:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874bb8b +0x4b:  movl   $0x0,(%esi)
0874bb91 +0x51:  mov    -0x8(%ebp),%ebx
0874bb94 +0x54:  mov    -0x4(%ebp),%esi
0874bb97 +0x57:  mov    %ebp,%esp
0874bb99 +0x59:  pop    %ebp
0874bb9a +0x5a:  ret
0874bb9b +0x5b:  nop
0874bb9c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Connection::CleanPreMaster @ 0x874bb40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Connection::CleanPreMaster() */

void __thiscall yaSSL::Connection::CleanPreMaster(Connection *this)

{
  uint uVar1;
  
  if (*(uchar **)this != (uchar *)0x0) {
    uVar1 = *(uint *)(this + 0x124);
    clean(*(uchar **)this,uVar1,*(RandomPool **)(this + 0x134));
    operator_delete__(*(undefined4 *)this,uVar1 & 0xffffff00);
    *(undefined4 *)this = 0;
  }
  return;
}
```
