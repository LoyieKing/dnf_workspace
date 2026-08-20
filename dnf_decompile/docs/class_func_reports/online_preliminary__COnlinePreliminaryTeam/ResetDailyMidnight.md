# ResetDailyMidnight

`_ZN18online_preliminary22COnlinePreliminaryTeam18ResetDailyMidnightEv`

`online_preliminary::COnlinePreliminaryTeam::ResetDailyMidnight()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x08588374` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08588374  _ZN18online_preliminary22COnlinePreliminaryTeam18ResetDailyMidnightEv
#           online_preliminary::COnlinePreliminaryTeam::ResetDailyMidnight()
# range [0x08588374, 0x08588389]
08588374 +0x00:  push   %ebp
08588375 +0x01:  mov    %esp,%ebp
08588377 +0x03:  sub    $0x18,%esp
0858837a +0x06:  mov    0x8(%ebp),%eax
0858837d +0x09:  add    $0x24,%eax
08588380 +0x0c:  mov    %eax,(%esp)
08588383 +0x0f:  call   085892e4 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x5d7>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x5d7
08588388 +0x14:  leave
08588389 +0x15:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::ResetDailyMidnight @ 0x8588374

/* online_preliminary::COnlinePreliminaryTeam::ResetDailyMidnight() */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::ResetDailyMidnight(COnlinePreliminaryTeam *this)

{
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::clear((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
           *)(this + 0x24));
  return;
}
```
