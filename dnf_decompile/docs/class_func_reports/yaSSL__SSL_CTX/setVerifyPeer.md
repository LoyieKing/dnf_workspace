# setVerifyPeer

`_ZN5yaSSL7SSL_CTX13setVerifyPeerEv`

`yaSSL::SSL_CTX::setVerifyPeer()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e580  _ZN5yaSSL7SSL_CTX13setVerifyPeerEv
#           yaSSL::SSL_CTX::setVerifyPeer()
# range [0x0874e580, 0x0874e5a9]
0874e580 +0x00:  push   %ebp
0874e581 +0x01:  mov    %esp,%ebp
0874e583 +0x03:  push   %ebx
0874e584 +0x04:  sub    $0x14,%esp
0874e587 +0x07:  mov    0x8(%ebp),%eax
0874e58a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e58f +0x0f:  add    $0xc1e609,%ebx
0874e595 +0x15:  mov    (%eax),%eax
0874e597 +0x17:  mov    %eax,(%esp)
0874e59a +0x1a:  call   0874e3f0 <_ZN5yaSSL10SSL_METHOD13setVerifyPeerEv>  ; yaSSL::SSL_METHOD::setVerifyPeer()
0874e59f +0x1f:  add    $0x14,%esp
0874e5a2 +0x22:  pop    %ebx
0874e5a3 +0x23:  pop    %ebp
0874e5a4 +0x24:  ret
0874e5a5 +0x25:  nop
0874e5a6 +0x26:  lea    0x0(%esi),%esi
0874e5a9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::setVerifyPeer @ 0x874e580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::setVerifyPeer() */

void __thiscall yaSSL::SSL_CTX::setVerifyPeer(SSL_CTX *this)

{
  SSL_METHOD::setVerifyPeer(*(SSL_METHOD **)this);
  return;
}
```
