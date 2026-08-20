# use_digest

`_ZN5yaSSL6Crypto10use_digestEv`

`yaSSL::Crypto::use_digest()`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e7a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e7a0  _ZN5yaSSL6Crypto10use_digestEv
#           yaSSL::Crypto::use_digest()
# range [0x0874e7a0, 0x0874e7aa]
0874e7a0 +0x00:  push   %ebp
0874e7a1 +0x01:  mov    %esp,%ebp
0874e7a3 +0x03:  mov    0x8(%ebp),%eax
0874e7a6 +0x06:  pop    %ebp
0874e7a7 +0x07:  mov    (%eax),%eax
0874e7a9 +0x09:  ret
0874e7aa +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Crypto::use_digest @ 0x874e7a0

/* yaSSL::Crypto::use_digest() */

undefined4 __thiscall yaSSL::Crypto::use_digest(Crypto *this)

{
  return *(undefined4 *)this;
}
```
