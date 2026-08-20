# setVerifyNone

`_ZN5yaSSL7SSL_CTX13setVerifyNoneEv`

`yaSSL::SSL_CTX::setVerifyNone()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e5b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e5b0  _ZN5yaSSL7SSL_CTX13setVerifyNoneEv
#           yaSSL::SSL_CTX::setVerifyNone()
# range [0x0874e5b0, 0x0874e5d9]
0874e5b0 +0x00:  push   %ebp
0874e5b1 +0x01:  mov    %esp,%ebp
0874e5b3 +0x03:  push   %ebx
0874e5b4 +0x04:  sub    $0x14,%esp
0874e5b7 +0x07:  mov    0x8(%ebp),%eax
0874e5ba +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e5bf +0x0f:  add    $0xc1e5d9,%ebx
0874e5c5 +0x15:  mov    (%eax),%eax
0874e5c7 +0x17:  mov    %eax,(%esp)
0874e5ca +0x1a:  call   0874e400 <_ZN5yaSSL10SSL_METHOD13setVerifyNoneEv>  ; yaSSL::SSL_METHOD::setVerifyNone()
0874e5cf +0x1f:  add    $0x14,%esp
0874e5d2 +0x22:  pop    %ebx
0874e5d3 +0x23:  pop    %ebp
0874e5d4 +0x24:  ret
0874e5d5 +0x25:  nop
0874e5d6 +0x26:  lea    0x0(%esi),%esi
0874e5d9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::setVerifyNone @ 0x874e5b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::setVerifyNone() */

void __thiscall yaSSL::SSL_CTX::setVerifyNone(SSL_CTX *this)

{
  SSL_METHOD::setVerifyNone(*(SSL_METHOD **)this);
  return;
}
```
