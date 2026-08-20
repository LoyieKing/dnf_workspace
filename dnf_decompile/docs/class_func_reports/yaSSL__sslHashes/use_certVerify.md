# use_certVerify

`_ZN5yaSSL9sslHashes14use_certVerifyEv`

`yaSSL::sslHashes::use_certVerify()`

| 类 | 地址 |
|---|---|
| `yaSSL::sslHashes` | `0x0874e8a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e8a0  _ZN5yaSSL9sslHashes14use_certVerifyEv
#           yaSSL::sslHashes::use_certVerify()
# range [0x0874e8a0, 0x0874e8ac]
0874e8a0 +0x00:  push   %ebp
0874e8a1 +0x01:  mov    %esp,%ebp
0874e8a3 +0x03:  mov    0x8(%ebp),%eax
0874e8a6 +0x06:  pop    %ebp
0874e8a7 +0x07:  add    $0x3c,%eax
0874e8aa +0x0a:  ret
0874e8ab +0x0b:  nop
0874e8ac +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslHashes::use_certVerify @ 0x874e8a0

/* yaSSL::sslHashes::use_certVerify() */

sslHashes * __thiscall yaSSL::sslHashes::use_certVerify(sslHashes *this)

{
  return this + 0x3c;
}
```
