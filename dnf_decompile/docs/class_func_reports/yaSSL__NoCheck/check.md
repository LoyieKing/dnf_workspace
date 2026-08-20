# check

`_ZN5yaSSL7NoCheck5checkEjj`

`yaSSL::NoCheck::check(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::NoCheck` | `0x08796cf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796cf0  _ZN5yaSSL7NoCheck5checkEjj
#           yaSSL::NoCheck::check(unsigned int, unsigned int)
# range [0x08796cf0, 0x08796cf9]
08796cf0 +0x00:  push   %ebp
08796cf1 +0x01:  mov    %esp,%ebp
08796cf3 +0x03:  pop    %ebp
08796cf4 +0x04:  ret
08796cf5 +0x05:  nop
08796cf6 +0x06:  lea    0x0(%esi),%esi
08796cf9 +0x09:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::NoCheck::check @ 0x8796cf0

/* yaSSL::NoCheck::check(unsigned int, unsigned int) */

void yaSSL::NoCheck::check(uint param_1,uint param_2)

{
  return;
}
```
