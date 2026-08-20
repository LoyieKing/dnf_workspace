# useCrypto

`_ZN5yaSSL3SSL9useCryptoEv`

`yaSSL::SSL::useCrypto()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e2b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e2b0  _ZN5yaSSL3SSL9useCryptoEv
#           yaSSL::SSL::useCrypto()
# range [0x0874e2b0, 0x0874e2b9]
0874e2b0 +0x00:  push   %ebp
0874e2b1 +0x01:  mov    %esp,%ebp
0874e2b3 +0x03:  mov    0x8(%ebp),%eax
0874e2b6 +0x06:  pop    %ebp
0874e2b7 +0x07:  ret
0874e2b8 +0x08:  nop
0874e2b9 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::useCrypto @ 0x874e2b0

/* yaSSL::SSL::useCrypto() */

SSL * __thiscall yaSSL::SSL::useCrypto(SSL *this)

{
  return this;
}
```
