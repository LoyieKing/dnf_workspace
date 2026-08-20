# set_masterSecret

`_ZN5yaSSL3SSL16set_masterSecretEPKh`

`yaSSL::SSL::set_masterSecret(unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874f350` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f350  _ZN5yaSSL3SSL16set_masterSecretEPKh
#           yaSSL::SSL::set_masterSecret(unsigned char const*)
# range [0x0874f350, 0x0874f3c9]
0874f350 +0x00:  push   %ebp
0874f351 +0x01:  mov    %esp,%ebp
0874f353 +0x03:  push   %esi
0874f354 +0x04:  push   %ebx
0874f355 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f35a +0x0a:  add    $0xc1d83e,%ebx
0874f360 +0x10:  sub    $0x10,%esp
0874f363 +0x13:  mov    0x8(%ebp),%eax
0874f366 +0x16:  mov    0xc(%ebp),%esi
0874f369 +0x19:  add    $0x68,%eax
0874f36c +0x1c:  mov    %eax,(%esp)
0874f36f +0x1f:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f374 +0x24:  mov    (%esi),%ecx
0874f376 +0x26:  lea    0x4(%eax),%edx
0874f379 +0x29:  mov    %ecx,0x4(%eax)
0874f37c +0x2c:  mov    0x4(%esi),%eax
0874f37f +0x2f:  mov    %eax,0x4(%edx)
0874f382 +0x32:  mov    0x8(%esi),%eax
0874f385 +0x35:  mov    %eax,0x8(%edx)
0874f388 +0x38:  mov    0xc(%esi),%eax
0874f38b +0x3b:  mov    %eax,0xc(%edx)
0874f38e +0x3e:  mov    0x10(%esi),%eax
0874f391 +0x41:  mov    %eax,0x10(%edx)
0874f394 +0x44:  mov    0x14(%esi),%eax
0874f397 +0x47:  mov    %eax,0x14(%edx)
0874f39a +0x4a:  mov    0x18(%esi),%eax
0874f39d +0x4d:  mov    %eax,0x18(%edx)
0874f3a0 +0x50:  mov    0x1c(%esi),%eax
0874f3a3 +0x53:  mov    %eax,0x1c(%edx)
0874f3a6 +0x56:  mov    0x20(%esi),%eax
0874f3a9 +0x59:  mov    %eax,0x20(%edx)
0874f3ac +0x5c:  mov    0x24(%esi),%eax
0874f3af +0x5f:  mov    %eax,0x24(%edx)
0874f3b2 +0x62:  mov    0x28(%esi),%eax
0874f3b5 +0x65:  mov    %eax,0x28(%edx)
0874f3b8 +0x68:  mov    0x2c(%esi),%eax
0874f3bb +0x6b:  mov    %eax,0x2c(%edx)
0874f3be +0x6e:  add    $0x10,%esp
0874f3c1 +0x71:  pop    %ebx
0874f3c2 +0x72:  pop    %esi
0874f3c3 +0x73:  pop    %ebp
0874f3c4 +0x74:  ret
0874f3c5 +0x75:  nop
0874f3c6 +0x76:  lea    0x0(%esi),%esi
0874f3c9 +0x79:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::set_masterSecret @ 0x874f350

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_masterSecret(unsigned char const*) */

void __thiscall yaSSL::SSL::set_masterSecret(SSL *this,uchar *param_1)

{
  int iVar1;
  
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
  return;
}
```
