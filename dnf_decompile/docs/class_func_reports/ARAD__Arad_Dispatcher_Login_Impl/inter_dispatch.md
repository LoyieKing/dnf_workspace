# inter_dispatch

`_ZN4ARAD26Arad_Dispatcher_Login_Impl14inter_dispatchEP5CUserPci`

`ARAD::Arad_Dispatcher_Login_Impl::inter_dispatch(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Login_Impl` | `0x0818ef42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ef42  _ZN4ARAD26Arad_Dispatcher_Login_Impl14inter_dispatchEP5CUserPci
#           ARAD::Arad_Dispatcher_Login_Impl::inter_dispatch(CUser*, char*, int)
# range [0x0818ef42, 0x0818ef4b]
0818ef42 +0x00:  push   %ebp
0818ef43 +0x01:  mov    %esp,%ebp
0818ef45 +0x03:  mov    $0x0,%eax
0818ef4a +0x08:  pop    %ebp
0818ef4b +0x09:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Login_Impl::inter_dispatch @ 0x818ef42

/* ARAD::Arad_Dispatcher_Login_Impl::inter_dispatch(CUser*, char*, int) */

undefined4
ARAD::Arad_Dispatcher_Login_Impl::inter_dispatch(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}
```
