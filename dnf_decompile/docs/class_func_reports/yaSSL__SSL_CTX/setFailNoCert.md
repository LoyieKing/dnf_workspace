# setFailNoCert

`_ZN5yaSSL7SSL_CTX13setFailNoCertEv`

`yaSSL::SSL_CTX::setFailNoCert()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e5e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e5e0  _ZN5yaSSL7SSL_CTX13setFailNoCertEv
#           yaSSL::SSL_CTX::setFailNoCert()
# range [0x0874e5e0, 0x0874e609]
0874e5e0 +0x00:  push   %ebp
0874e5e1 +0x01:  mov    %esp,%ebp
0874e5e3 +0x03:  push   %ebx
0874e5e4 +0x04:  sub    $0x14,%esp
0874e5e7 +0x07:  mov    0x8(%ebp),%eax
0874e5ea +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e5ef +0x0f:  add    $0xc1e5a9,%ebx
0874e5f5 +0x15:  mov    (%eax),%eax
0874e5f7 +0x17:  mov    %eax,(%esp)
0874e5fa +0x1a:  call   0874e410 <_ZN5yaSSL10SSL_METHOD13setFailNoCertEv>  ; yaSSL::SSL_METHOD::setFailNoCert()
0874e5ff +0x1f:  add    $0x14,%esp
0874e602 +0x22:  pop    %ebx
0874e603 +0x23:  pop    %ebp
0874e604 +0x24:  ret
0874e605 +0x25:  nop
0874e606 +0x26:  lea    0x0(%esi),%esi
0874e609 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::setFailNoCert @ 0x874e5e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::setFailNoCert() */

void __thiscall yaSSL::SSL_CTX::setFailNoCert(SSL_CTX *this)

{
  SSL_METHOD::setFailNoCert(*(SSL_METHOD **)this);
  return;
}
```
