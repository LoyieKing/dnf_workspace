# ShowData

`_ZN5yaSSL3Log8ShowDataEjb`

`yaSSL::Log::ShowData(unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::Log` | `0x087a1480` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1480  _ZN5yaSSL3Log8ShowDataEjb
#           yaSSL::Log::ShowData(unsigned int, bool)
# range [0x087a1480, 0x087a148f]
087a1480 +0x00:  push   %ebp
087a1481 +0x01:  mov    %esp,%ebp
087a1483 +0x03:  pop    %ebp
087a1484 +0x04:  ret
087a1485 +0x05:  nop
087a1486 +0x06:  nop
087a1487 +0x07:  nop
087a1488 +0x08:  nop
087a1489 +0x09:  nop
087a148a +0x0a:  nop
087a148b +0x0b:  nop
087a148c +0x0c:  nop
087a148d +0x0d:  nop
087a148e +0x0e:  nop
087a148f +0x0f:  nop
```

## 反编译 C

```c
// yaSSL::Log::ShowData @ 0x87a1480

/* yaSSL::Log::ShowData(unsigned int, bool) */

void yaSSL::Log::ShowData(uint param_1,bool param_2)

{
  return;
}
```
