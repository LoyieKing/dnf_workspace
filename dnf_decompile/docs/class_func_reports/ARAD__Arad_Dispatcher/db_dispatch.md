# db_dispatch

`_ZN4ARAD15Arad_Dispatcher11db_dispatchEiiP6Stream`

`ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher` | `0x0818e84c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818e84c  _ZN4ARAD15Arad_Dispatcher11db_dispatchEiiP6Stream
#           ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*)
# range [0x0818e84c, 0x0818e855]
0818e84c +0x00:  push   %ebp
0818e84d +0x01:  mov    %esp,%ebp
0818e84f +0x03:  mov    $0x0,%eax
0818e854 +0x08:  pop    %ebp
0818e855 +0x09:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher::db_dispatch @ 0x818e84c

/* ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*) */

undefined4 ARAD::Arad_Dispatcher::db_dispatch(int param_1,int param_2,Stream *param_3)

{
  return 0;
}
```
