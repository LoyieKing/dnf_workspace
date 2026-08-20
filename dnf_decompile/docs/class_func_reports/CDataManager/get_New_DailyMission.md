# get_New_DailyMission

`_ZN12CDataManager20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE`

`CDataManager::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fac6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fac6  _ZN12CDataManager20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE
#           CDataManager::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)
# range [0x0835fac6, 0x0835fae5]
0835fac6 +0x00:  push   %ebp
0835fac7 +0x01:  mov    %esp,%ebp
0835fac9 +0x03:  sub    $0x18,%esp
0835facc +0x06:  mov    0x8(%ebp),%eax
0835facf +0x09:  mov    0xb454(%eax),%eax
0835fad5 +0x0f:  mov    0xc(%ebp),%edx
0835fad8 +0x12:  mov    %edx,0x4(%esp)
0835fadc +0x16:  mov    %eax,(%esp)
0835fadf +0x19:  call   085e26e0 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE>  ; PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)
0835fae4 +0x1e:  leave
0835fae5 +0x1f:  ret
```

## 反编译 C

```c
// CDataManager::get_New_DailyMission @ 0x835fac6

/* CDataManager::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>,
   std::allocator<std::pair<unsigned int, unsigned int> > >&) */

void __thiscall CDataManager::get_New_DailyMission(CDataManager *this,vector *param_1)

{
  PvP_MissionSystem::get_New_DailyMission(*(PvP_MissionSystem **)(this + 0xb454),param_1);
  return;
}
```
