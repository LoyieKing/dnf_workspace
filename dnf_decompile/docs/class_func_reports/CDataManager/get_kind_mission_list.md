# get_kind_mission_list

`_ZNK12CDataManager21get_kind_mission_listEi`

`CDataManager::get_kind_mission_list(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835faa6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835faa6  _ZNK12CDataManager21get_kind_mission_listEi
#           CDataManager::get_kind_mission_list(int) const
# range [0x0835faa6, 0x0835fac5]
0835faa6 +0x00:  push   %ebp
0835faa7 +0x01:  mov    %esp,%ebp
0835faa9 +0x03:  sub    $0x18,%esp
0835faac +0x06:  mov    0xc(%ebp),%edx
0835faaf +0x09:  mov    0x8(%ebp),%eax
0835fab2 +0x0c:  mov    0xb454(%eax),%eax
0835fab8 +0x12:  mov    %edx,0x4(%esp)
0835fabc +0x16:  mov    %eax,(%esp)
0835fabf +0x19:  call   085e2692 <_ZN17PvP_MissionSystem21get_kind_mission_listEj>  ; PvP_MissionSystem::get_kind_mission_list(unsigned int)
0835fac4 +0x1e:  leave
0835fac5 +0x1f:  ret
```

## 反编译 C

```c
// CDataManager::get_kind_mission_list @ 0x835faa6

/* CDataManager::get_kind_mission_list(int) const */

void __thiscall CDataManager::get_kind_mission_list(CDataManager *this,int param_1)

{
  PvP_MissionSystem::get_kind_mission_list(*(PvP_MissionSystem **)(this + 0xb454),param_1);
  return;
}
```
