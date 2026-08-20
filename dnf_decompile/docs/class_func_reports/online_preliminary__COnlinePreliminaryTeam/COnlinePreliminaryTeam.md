# COnlinePreliminaryTeam

`_ZN18online_preliminary22COnlinePreliminaryTeamC1Ev`

`online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x08587eb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08587eb8  _ZN18online_preliminary22COnlinePreliminaryTeamC1Ev
#           online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()
# range [0x08587eb8, 0x08587ecd]
08587eb8 +0x00:  push   %ebp
08587eb9 +0x01:  mov    %esp,%ebp
08587ebb +0x03:  sub    $0x18,%esp
08587ebe +0x06:  mov    0x8(%ebp),%eax
08587ec1 +0x09:  add    $0x24,%eax
08587ec4 +0x0c:  mov    %eax,(%esp)
08587ec7 +0x0f:  call   085890b8 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x3ab>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x3ab
08587ecc +0x14:  leave
08587ecd +0x15:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam @ 0x8587eb8

/* online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam() */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam(COnlinePreliminaryTeam *this)

{
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::map((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
         *)(this + 0x24));
  return;
}
```
