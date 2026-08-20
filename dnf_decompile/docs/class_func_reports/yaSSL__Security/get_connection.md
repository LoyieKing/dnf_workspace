# get_connection

`_ZNK5yaSSL8Security14get_connectionEv`

`yaSSL::Security::get_connection() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Security` | `0x0874e960` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e960  _ZNK5yaSSL8Security14get_connectionEv
#           yaSSL::Security::get_connection() const
# range [0x0874e960, 0x0874e969]
0874e960 +0x00:  push   %ebp
0874e961 +0x01:  mov    %esp,%ebp
0874e963 +0x03:  mov    0x8(%ebp),%eax
0874e966 +0x06:  pop    %ebp
0874e967 +0x07:  ret
0874e968 +0x08:  nop
0874e969 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Security::get_connection @ 0x874e960

/* yaSSL::Security::get_connection() const */

Security * __thiscall yaSSL::Security::get_connection(Security *this)

{
  return this;
}
```
