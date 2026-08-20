# get_BaseMissionExp_byRank

`_ZNK12CDataManager25get_BaseMissionExp_byRankEt`

`CDataManager::get_BaseMissionExp_byRank(unsigned short) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fb12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fb12  _ZNK12CDataManager25get_BaseMissionExp_byRankEt
#           CDataManager::get_BaseMissionExp_byRank(unsigned short) const
# range [0x0835fb12, 0x0835fb39]
0835fb12 +0x00:  push   %ebp
0835fb13 +0x01:  mov    %esp,%ebp
0835fb15 +0x03:  sub    $0x28,%esp
0835fb18 +0x06:  mov    0xc(%ebp),%eax
0835fb1b +0x09:  mov    %ax,-0xc(%ebp)
0835fb1f +0x0d:  movzwl -0xc(%ebp),%edx
0835fb23 +0x11:  mov    0x8(%ebp),%eax
0835fb26 +0x14:  mov    0xb454(%eax),%eax
0835fb2c +0x1a:  mov    %edx,0x4(%esp)
0835fb30 +0x1e:  mov    %eax,(%esp)
0835fb33 +0x21:  call   085e2e74 <_ZNK17PvP_MissionSystem25get_BaseMissionExp_byRankEt>  ; PvP_MissionSystem::get_BaseMissionExp_byRank(unsigned short) const
0835fb38 +0x26:  leave
0835fb39 +0x27:  ret
```

## 反编译 C

```c
// CDataManager::get_BaseMissionExp_byRank @ 0x835fb12

/* CDataManager::get_BaseMissionExp_byRank(unsigned short) const */

void __thiscall CDataManager::get_BaseMissionExp_byRank(CDataManager *this,ushort param_1)

{
  PvP_MissionSystem::get_BaseMissionExp_byRank(*(PvP_MissionSystem **)(this + 0xb454),param_1);
  return;
}
```
