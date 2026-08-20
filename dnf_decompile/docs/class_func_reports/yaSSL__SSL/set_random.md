# set_random

`_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE`

`yaSSL::SSL::set_random(unsigned char const*, yaSSL::ConnectionEnd)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874f3d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f3d0  _ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE
#           yaSSL::SSL::set_random(unsigned char const*, yaSSL::ConnectionEnd)
# range [0x0874f3d0, 0x0874f44e]
0874f3d0 +0x00:  push   %ebp
0874f3d1 +0x01:  mov    %esp,%ebp
0874f3d3 +0x03:  push   %esi
0874f3d4 +0x04:  push   %ebx
0874f3d5 +0x05:  sub    $0x10,%esp
0874f3d8 +0x08:  mov    0x8(%ebp),%eax
0874f3db +0x0b:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f3e0 +0x10:  add    $0xc1d7b8,%ebx
0874f3e6 +0x16:  mov    0xc(%ebp),%esi
0874f3e9 +0x19:  cmpl   $0x1,0x10(%ebp)
0874f3ed +0x1d:  je     0874f438 <+0x68>
0874f3ef +0x1f:  add    $0x68,%eax
0874f3f2 +0x22:  mov    %eax,(%esp)
0874f3f5 +0x25:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f3fa +0x2a:  mov    (%esi),%ecx
0874f3fc +0x2c:  lea    0x54(%eax),%edx
0874f3ff +0x2f:  mov    %ecx,0x54(%eax)
0874f402 +0x32:  mov    0x4(%esi),%eax
0874f405 +0x35:  mov    %eax,0x4(%edx)
0874f408 +0x38:  mov    0x8(%esi),%eax
0874f40b +0x3b:  mov    %eax,0x8(%edx)
0874f40e +0x3e:  mov    0xc(%esi),%eax
0874f411 +0x41:  mov    %eax,0xc(%edx)
0874f414 +0x44:  mov    0x10(%esi),%eax
0874f417 +0x47:  mov    %eax,0x10(%edx)
0874f41a +0x4a:  mov    0x14(%esi),%eax
0874f41d +0x4d:  mov    %eax,0x14(%edx)
0874f420 +0x50:  mov    0x18(%esi),%eax
0874f423 +0x53:  mov    %eax,0x18(%edx)
0874f426 +0x56:  mov    0x1c(%esi),%eax
0874f429 +0x59:  mov    %eax,0x1c(%edx)
0874f42c +0x5c:  add    $0x10,%esp
0874f42f +0x5f:  pop    %ebx
0874f430 +0x60:  pop    %esi
0874f431 +0x61:  pop    %ebp
0874f432 +0x62:  ret
0874f433 +0x63:  nop
0874f434 +0x64:  lea    0x0(%esi,%eiz,1),%esi
0874f438 +0x68:  add    $0x68,%eax
0874f43b +0x6b:  mov    %eax,(%esp)
0874f43e +0x6e:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f443 +0x73:  mov    (%esi),%ecx
0874f445 +0x75:  lea    0x34(%eax),%edx
0874f448 +0x78:  mov    %ecx,0x34(%eax)
0874f44b +0x7b:  jmp    0874f402 <+0x32>
0874f44d +0x7d:  nop
0874f44e +0x7e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::set_random @ 0x874f3d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_random(unsigned char const*, yaSSL::ConnectionEnd) */

void __thiscall yaSSL::SSL::set_random(SSL *this,undefined4 *param_1,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 1) {
    iVar1 = Security::use_connection((Security *)(this + 0x68));
    iVar2 = iVar1 + 0x34;
    *(undefined4 *)(iVar1 + 0x34) = *param_1;
  }
  else {
    iVar1 = Security::use_connection((Security *)(this + 0x68));
    iVar2 = iVar1 + 0x54;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
  }
  *(undefined4 *)(iVar2 + 4) = param_1[1];
  *(undefined4 *)(iVar2 + 8) = param_1[2];
  *(undefined4 *)(iVar2 + 0xc) = param_1[3];
  *(undefined4 *)(iVar2 + 0x10) = param_1[4];
  *(undefined4 *)(iVar2 + 0x14) = param_1[5];
  *(undefined4 *)(iVar2 + 0x18) = param_1[6];
  *(undefined4 *)(iVar2 + 0x1c) = param_1[7];
  return;
}
```
