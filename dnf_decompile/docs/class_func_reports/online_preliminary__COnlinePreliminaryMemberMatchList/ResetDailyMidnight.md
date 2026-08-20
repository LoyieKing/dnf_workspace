# ResetDailyMidnight

`_ZN18online_preliminary33COnlinePreliminaryMemberMatchList18ResetDailyMidnightEv`

`online_preliminary::COnlinePreliminaryMemberMatchList::ResetDailyMidnight()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMemberMatchList` | `0x0858685e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858685e  _ZN18online_preliminary33COnlinePreliminaryMemberMatchList18ResetDailyMidnightEv
#           online_preliminary::COnlinePreliminaryMemberMatchList::ResetDailyMidnight()
# range [0x0858685e, 0x08586877]
0858685e +0x00:  push   %ebp
0858685f +0x01:  mov    %esp,%ebp
08586861 +0x03:  sub    $0x18,%esp
08586864 +0x06:  mov    0x8(%ebp),%eax
08586867 +0x09:  mov    (%eax),%eax
08586869 +0x0b:  add    $0x1c,%eax
0858686c +0x0e:  mov    (%eax),%edx
0858686e +0x10:  mov    0x8(%ebp),%eax
08586871 +0x13:  mov    %eax,(%esp)
08586874 +0x16:  call   *%edx
08586876 +0x18:  leave
08586877 +0x19:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::ResetDailyMidnight @ 0x858685e

/* online_preliminary::COnlinePreliminaryMemberMatchList::ResetDailyMidnight() */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::ResetDailyMidnight
          (COnlinePreliminaryMemberMatchList *this)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  return;
}
```
