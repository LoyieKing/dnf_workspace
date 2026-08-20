# GetIssuer

`_ZN5yaSSL4X5099GetIssuerEv`

`yaSSL::X509::GetIssuer()`

| 类 | 地址 |
|---|---|
| `yaSSL::X509` | `0x0874f000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f000  _ZN5yaSSL4X5099GetIssuerEv
#           yaSSL::X509::GetIssuer()
# range [0x0874f000, 0x0874f009]
0874f000 +0x00:  push   %ebp
0874f001 +0x01:  mov    %esp,%ebp
0874f003 +0x03:  mov    0x8(%ebp),%eax
0874f006 +0x06:  pop    %ebp
0874f007 +0x07:  ret
0874f008 +0x08:  nop
0874f009 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::X509::GetIssuer @ 0x874f000

/* yaSSL::X509::GetIssuer() */

X509 * __thiscall yaSSL::X509::GetIssuer(X509 *this)

{
  return this;
}
```
