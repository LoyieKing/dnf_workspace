# get_WithinMissionIndex

`_ZNK12CDataManager22get_WithinMissionIndexEi`

`CDataManager::get_WithinMissionIndex(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fb3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fb3a  _ZNK12CDataManager22get_WithinMissionIndexEi
#           CDataManager::get_WithinMissionIndex(int) const
# range [0x0835fb3a, 0x0835fb59]
0835fb3a +0x00:  push   %ebp
0835fb3b +0x01:  mov    %esp,%ebp
0835fb3d +0x03:  sub    $0x18,%esp
0835fb40 +0x06:  mov    0x8(%ebp),%eax
0835fb43 +0x09:  mov    0xb454(%eax),%eax
0835fb49 +0x0f:  mov    0xc(%ebp),%edx
0835fb4c +0x12:  mov    %edx,0x4(%esp)
0835fb50 +0x16:  mov    %eax,(%esp)
0835fb53 +0x19:  call   085e2f00 <_ZNK17PvP_MissionSystem22get_WithinMissionIndexEi>  ; PvP_MissionSystem::get_WithinMissionIndex(int) const
0835fb58 +0x1e:  leave
0835fb59 +0x1f:  ret
```

## 反编译 C

```c
// CDataManager::get_WithinMissionIndex @ 0x835fb3a

/* CDataManager::get_WithinMissionIndex(int) const */

void __thiscall CDataManager::get_WithinMissionIndex(CDataManager *this,int param_1)

{
  PvP_MissionSystem::get_WithinMissionIndex(*(PvP_MissionSystem **)(this + 0xb454),param_1);
  return;
}
```
