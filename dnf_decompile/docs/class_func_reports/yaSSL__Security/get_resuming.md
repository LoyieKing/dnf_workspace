# get_resuming

`_ZNK5yaSSL8Security12get_resumingEv`

`yaSSL::Security::get_resuming() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Security` | `0x0874ecf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ecf0  _ZNK5yaSSL8Security12get_resumingEv
#           yaSSL::Security::get_resuming() const
# range [0x0874ecf0, 0x0874ecff]
0874ecf0 +0x00:  push   %ebp
0874ecf1 +0x01:  mov    %esp,%ebp
0874ecf3 +0x03:  mov    0x8(%ebp),%eax
0874ecf6 +0x06:  pop    %ebp
0874ecf7 +0x07:  movzbl 0x880(%eax),%eax
0874ecfe +0x0e:  ret
0874ecff +0x0f:  nop
```

## 反编译 C

```c
// yaSSL::Security::get_resuming @ 0x874ecf0

/* yaSSL::Security::get_resuming() const */

Security __thiscall yaSSL::Security::get_resuming(Security *this)

{
  return this[0x880];
}
```
