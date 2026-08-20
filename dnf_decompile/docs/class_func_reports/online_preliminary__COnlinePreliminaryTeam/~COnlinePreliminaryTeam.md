# ~COnlinePreliminaryTeam

`_ZN18online_preliminary22COnlinePreliminaryTeamD1Ev`

`online_preliminary::COnlinePreliminaryTeam::~COnlinePreliminaryTeam()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x08587ece` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08587ece  _ZN18online_preliminary22COnlinePreliminaryTeamD1Ev
#           online_preliminary::COnlinePreliminaryTeam::~COnlinePreliminaryTeam()
# range [0x08587ece, 0x08587ee3]
08587ece +0x00:  push   %ebp
08587ecf +0x01:  mov    %esp,%ebp
08587ed1 +0x03:  sub    $0x18,%esp
08587ed4 +0x06:  mov    0x8(%ebp),%eax
08587ed7 +0x09:  add    $0x24,%eax
08587eda +0x0c:  mov    %eax,(%esp)
08587edd +0x0f:  call   08588e06 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xf9>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xf9
08587ee2 +0x14:  leave
08587ee3 +0x15:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::~COnlinePreliminaryTeam @ 0x8587ece

/* online_preliminary::COnlinePreliminaryTeam::~COnlinePreliminaryTeam() */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::~COnlinePreliminaryTeam(COnlinePreliminaryTeam *this)

{
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::~map((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
          *)(this + 0x24));
  return;
}
```
