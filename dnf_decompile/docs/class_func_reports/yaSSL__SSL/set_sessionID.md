# set_sessionID

`_ZN5yaSSL3SSL13set_sessionIDEPKh`

`yaSSL::SSL::set_sessionID(unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874f2d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f2d0  _ZN5yaSSL3SSL13set_sessionIDEPKh
#           yaSSL::SSL::set_sessionID(unsigned char const*)
# range [0x0874f2d0, 0x0874f34a]
0874f2d0 +0x00:  push   %ebp
0874f2d1 +0x01:  mov    %esp,%ebp
0874f2d3 +0x03:  sub    $0x28,%esp
0874f2d6 +0x06:  mov    %ebx,-0xc(%ebp)
0874f2d9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f2de +0x0e:  add    $0xc1d8ba,%ebx
0874f2e4 +0x14:  mov    %edi,-0x4(%ebp)
0874f2e7 +0x17:  mov    0x8(%ebp),%edi
0874f2ea +0x1a:  mov    %esi,-0x8(%ebp)
0874f2ed +0x1d:  mov    0xc(%ebp),%esi
0874f2f0 +0x20:  add    $0x68,%edi
0874f2f3 +0x23:  mov    %edi,(%esp)
0874f2f6 +0x26:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f2fb +0x2b:  mov    (%esi),%ecx
0874f2fd +0x2d:  lea    0x74(%eax),%edx
0874f300 +0x30:  mov    %ecx,0x74(%eax)
0874f303 +0x33:  mov    0x4(%esi),%eax
0874f306 +0x36:  mov    %eax,0x4(%edx)
0874f309 +0x39:  mov    0x8(%esi),%eax
0874f30c +0x3c:  mov    %eax,0x8(%edx)
0874f30f +0x3f:  mov    0xc(%esi),%eax
0874f312 +0x42:  mov    %eax,0xc(%edx)
0874f315 +0x45:  mov    0x10(%esi),%eax
0874f318 +0x48:  mov    %eax,0x10(%edx)
0874f31b +0x4b:  mov    0x14(%esi),%eax
0874f31e +0x4e:  mov    %eax,0x14(%edx)
0874f321 +0x51:  mov    0x18(%esi),%eax
0874f324 +0x54:  mov    %eax,0x18(%edx)
0874f327 +0x57:  mov    0x1c(%esi),%eax
0874f32a +0x5a:  mov    %eax,0x1c(%edx)
0874f32d +0x5d:  mov    %edi,(%esp)
0874f330 +0x60:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f335 +0x65:  movb   $0x1,0x12c(%eax)
0874f33c +0x6c:  mov    -0xc(%ebp),%ebx
0874f33f +0x6f:  mov    -0x8(%ebp),%esi
0874f342 +0x72:  mov    -0x4(%ebp),%edi
0874f345 +0x75:  mov    %ebp,%esp
0874f347 +0x77:  pop    %ebp
0874f348 +0x78:  ret
0874f349 +0x79:  nop
0874f34a +0x7a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL::set_sessionID @ 0x874f2d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_sessionID(unsigned char const*) */

void __thiscall yaSSL::SSL::set_sessionID(SSL *this,uchar *param_1)

{
  int iVar1;
  
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x1c);
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  *(undefined1 *)(iVar1 + 300) = 1;
  return;
}
```
