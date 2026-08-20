# setVerifyNone

`_ZN5yaSSL10SSL_METHOD13setVerifyNoneEv`

`yaSSL::SSL_METHOD::setVerifyNone()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_METHOD` | `0x0874e400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e400  _ZN5yaSSL10SSL_METHOD13setVerifyNoneEv
#           yaSSL::SSL_METHOD::setVerifyNone()
# range [0x0874e400, 0x0874e40c]
0874e400 +0x00:  push   %ebp
0874e401 +0x01:  mov    %esp,%ebp
0874e403 +0x03:  mov    0x8(%ebp),%eax
0874e406 +0x06:  movb   $0x1,0x9(%eax)
0874e40a +0x0a:  pop    %ebp
0874e40b +0x0b:  ret
0874e40c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_METHOD::setVerifyNone @ 0x874e400

/* yaSSL::SSL_METHOD::setVerifyNone() */

void __thiscall yaSSL::SSL_METHOD::setVerifyNone(SSL_METHOD *this)

{
  this[9] = (SSL_METHOD)0x1;
  return;
}
```
