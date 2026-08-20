# check

`_ZN5yaSSL5Check5checkEjj`

`yaSSL::Check::check(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::Check` | `0x08796ce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796ce0  _ZN5yaSSL5Check5checkEjj
#           yaSSL::Check::check(unsigned int, unsigned int)
# range [0x08796ce0, 0x08796ce9]
08796ce0 +0x00:  push   %ebp
08796ce1 +0x01:  mov    %esp,%ebp
08796ce3 +0x03:  pop    %ebp
08796ce4 +0x04:  ret
08796ce5 +0x05:  nop
08796ce6 +0x06:  lea    0x0(%esi),%esi
08796ce9 +0x09:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Check::check @ 0x8796ce0

/* yaSSL::Check::check(unsigned int, unsigned int) */

void yaSSL::Check::check(uint param_1,uint param_2)

{
  return;
}
```
