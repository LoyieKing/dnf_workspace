# inter_dispatch

`_ZN4ARAD15Arad_Dispatcher14inter_dispatchEP5CUserPci`

`ARAD::Arad_Dispatcher::inter_dispatch(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher` | `0x0818e856` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818e856  _ZN4ARAD15Arad_Dispatcher14inter_dispatchEP5CUserPci
#           ARAD::Arad_Dispatcher::inter_dispatch(CUser*, char*, int)
# range [0x0818e856, 0x0818e85f]
0818e856 +0x00:  push   %ebp
0818e857 +0x01:  mov    %esp,%ebp
0818e859 +0x03:  mov    $0x0,%eax
0818e85e +0x08:  pop    %ebp
0818e85f +0x09:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher::inter_dispatch @ 0x818e856

/* ARAD::Arad_Dispatcher::inter_dispatch(CUser*, char*, int) */

undefined4 ARAD::Arad_Dispatcher::inter_dispatch(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}
```
