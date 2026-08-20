# setFailNoCert

`_ZN5yaSSL10SSL_METHOD13setFailNoCertEv`

`yaSSL::SSL_METHOD::setFailNoCert()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_METHOD` | `0x0874e410` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e410  _ZN5yaSSL10SSL_METHOD13setFailNoCertEv
#           yaSSL::SSL_METHOD::setFailNoCert()
# range [0x0874e410, 0x0874e41c]
0874e410 +0x00:  push   %ebp
0874e411 +0x01:  mov    %esp,%ebp
0874e413 +0x03:  mov    0x8(%ebp),%eax
0874e416 +0x06:  movb   $0x1,0xa(%eax)
0874e41a +0x0a:  pop    %ebp
0874e41b +0x0b:  ret
0874e41c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_METHOD::setFailNoCert @ 0x874e410

/* yaSSL::SSL_METHOD::setFailNoCert() */

void __thiscall yaSSL::SSL_METHOD::setFailNoCert(SSL_METHOD *this)

{
  this[10] = (SSL_METHOD)0x1;
  return;
}
```
