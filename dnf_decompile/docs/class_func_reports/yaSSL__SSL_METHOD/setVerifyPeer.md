# setVerifyPeer

`_ZN5yaSSL10SSL_METHOD13setVerifyPeerEv`

`yaSSL::SSL_METHOD::setVerifyPeer()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_METHOD` | `0x0874e3f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e3f0  _ZN5yaSSL10SSL_METHOD13setVerifyPeerEv
#           yaSSL::SSL_METHOD::setVerifyPeer()
# range [0x0874e3f0, 0x0874e3fc]
0874e3f0 +0x00:  push   %ebp
0874e3f1 +0x01:  mov    %esp,%ebp
0874e3f3 +0x03:  mov    0x8(%ebp),%eax
0874e3f6 +0x06:  movb   $0x1,0x8(%eax)
0874e3fa +0x0a:  pop    %ebp
0874e3fb +0x0b:  ret
0874e3fc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_METHOD::setVerifyPeer @ 0x874e3f0

/* yaSSL::SSL_METHOD::setVerifyPeer() */

void __thiscall yaSSL::SSL_METHOD::setVerifyPeer(SSL_METHOD *this)

{
  this[8] = (SSL_METHOD)0x1;
  return;
}
```
