# set_reconnect_option

`_ZN5MySQL20set_reconnect_optionEv`

`MySQL::set_reconnect_option()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f3c0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f3c0c  _ZN5MySQL20set_reconnect_optionEv
#           MySQL::set_reconnect_option()
# range [0x083f3c0c, 0x083f3c15]
083f3c0c +0x00:  push   %ebp
083f3c0d +0x01:  mov    %esp,%ebp
083f3c0f +0x03:  mov    $0x1,%eax
083f3c14 +0x08:  pop    %ebp
083f3c15 +0x09:  ret
```

## 反编译 C

```c
// MySQL::set_reconnect_option @ 0x83f3c0c

/* MySQL::set_reconnect_option() */

undefined4 MySQL::set_reconnect_option(void)

{
  return 1;
}
```
