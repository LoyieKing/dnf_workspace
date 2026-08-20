# ResetDaily

`_ZN19CMissionList_Charac10ResetDailyEv`

`CMissionList_Charac::ResetDaily()`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e5514` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e5514  _ZN19CMissionList_Charac10ResetDailyEv
#           CMissionList_Charac::ResetDaily()
# range [0x085e5514, 0x085e5527]
085e5514 +0x00:  push   %ebp
085e5515 +0x01:  mov    %esp,%ebp
085e5517 +0x03:  sub    $0x18,%esp
085e551a +0x06:  mov    0x8(%ebp),%eax
085e551d +0x09:  mov    %eax,(%esp)
085e5520 +0x0c:  call   085e5528 <_ZN19CMissionList_Charac18Reset_DailyMissionEv>  ; CMissionList_Charac::Reset_DailyMission()
085e5525 +0x11:  leave
085e5526 +0x12:  ret
085e5527 +0x13:  nop
```

## 反编译 C

```c
// CMissionList_Charac::ResetDaily @ 0x85e5514

/* CMissionList_Charac::ResetDaily() */

void __thiscall CMissionList_Charac::ResetDaily(CMissionList_Charac *this)

{
  Reset_DailyMission(this);
  return;
}
```
