# getCrypto

`_ZNK5yaSSL3SSL9getCryptoEv`

`yaSSL::SSL::getCrypto() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e060` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e060  _ZNK5yaSSL3SSL9getCryptoEv
#           yaSSL::SSL::getCrypto() const
# range [0x0874e060, 0x0874e069]
0874e060 +0x00:  push   %ebp
0874e061 +0x01:  mov    %esp,%ebp
0874e063 +0x03:  mov    0x8(%ebp),%eax
0874e066 +0x06:  pop    %ebp
0874e067 +0x07:  ret
0874e068 +0x08:  nop
0874e069 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::getCrypto @ 0x874e060

/* yaSSL::SSL::getCrypto() const */

SSL * __thiscall yaSSL::SSL::getCrypto(SSL *this)

{
  return this;
}
```
