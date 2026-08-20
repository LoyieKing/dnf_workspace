# GetCoinPerDay

`_ZN8WongWork9CEventMgr13GetCoinPerDayEv`

`WongWork::CEventMgr::GetCoinPerDay()`

| 类 | 地址 |
|---|---|
| `WongWork::CEventMgr` | `0x0848eff8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848eff8  _ZN8WongWork9CEventMgr13GetCoinPerDayEv
#           WongWork::CEventMgr::GetCoinPerDay()
# range [0x0848eff8, 0x0848f001]
0848eff8 +0x00:  push   %ebp
0848eff9 +0x01:  mov    %esp,%ebp
0848effb +0x03:  mov    $0x1,%eax
0848f000 +0x08:  pop    %ebp
0848f001 +0x09:  ret
```

## 反编译 C

```c
// WongWork::CEventMgr::GetCoinPerDay @ 0x848eff8

/* WongWork::CEventMgr::GetCoinPerDay() */

undefined4 WongWork::CEventMgr::GetCoinPerDay(void)

{
  return 1;
}
```
