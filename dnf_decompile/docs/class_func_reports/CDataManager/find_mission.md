# find_mission

`_ZNK12CDataManager12find_missionEi`

`CDataManager::find_mission(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fa86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fa86  _ZNK12CDataManager12find_missionEi
#           CDataManager::find_mission(int) const
# range [0x0835fa86, 0x0835faa5]
0835fa86 +0x00:  push   %ebp
0835fa87 +0x01:  mov    %esp,%ebp
0835fa89 +0x03:  sub    $0x18,%esp
0835fa8c +0x06:  mov    0x8(%ebp),%eax
0835fa8f +0x09:  mov    0xb454(%eax),%eax
0835fa95 +0x0f:  mov    0xc(%ebp),%edx
0835fa98 +0x12:  mov    %edx,0x4(%esp)
0835fa9c +0x16:  mov    %eax,(%esp)
0835fa9f +0x19:  call   085e262e <_ZN17PvP_MissionSystem12find_missionEi>  ; PvP_MissionSystem::find_mission(int)
0835faa4 +0x1e:  leave
0835faa5 +0x1f:  ret
```

## 反编译 C

```c
// CDataManager::find_mission @ 0x835fa86

/* CDataManager::find_mission(int) const */

void CDataManager::find_mission(int param_1)

{
  PvP_MissionSystem::find_mission(*(int *)(param_1 + 0xb454));
  return;
}
```
