# use_connection

`_ZN5yaSSL8Security14use_connectionEv`

`yaSSL::Security::use_connection()`

| 类 | 地址 |
|---|---|
| `yaSSL::Security` | `0x0874ed00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ed00  _ZN5yaSSL8Security14use_connectionEv
#           yaSSL::Security::use_connection()
# range [0x0874ed00, 0x0874ed09]
0874ed00 +0x00:  push   %ebp
0874ed01 +0x01:  mov    %esp,%ebp
0874ed03 +0x03:  mov    0x8(%ebp),%eax
0874ed06 +0x06:  pop    %ebp
0874ed07 +0x07:  ret
0874ed08 +0x08:  nop
0874ed09 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Security::use_connection @ 0x874ed00

/* yaSSL::Security::use_connection() */

Security * __thiscall yaSSL::Security::use_connection(Security *this)

{
  return this;
}
```
