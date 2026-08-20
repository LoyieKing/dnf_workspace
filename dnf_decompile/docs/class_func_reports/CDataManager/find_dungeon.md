# find_dungeon

`_ZNK12CDataManager12find_dungeonEi`

`CDataManager::find_dungeon(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835f9f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835f9f8  _ZNK12CDataManager12find_dungeonEi
#           CDataManager::find_dungeon(int) const
# range [0x0835f9f8, 0x0835fa13]
0835f9f8 +0x00:  push   %ebp
0835f9f9 +0x01:  mov    %esp,%ebp
0835f9fb +0x03:  sub    $0x18,%esp
0835f9fe +0x06:  mov    0x8(%ebp),%eax
0835fa01 +0x09:  mov    (%eax),%eax
0835fa03 +0x0b:  mov    0xc(%ebp),%edx
0835fa06 +0x0e:  mov    %edx,0x4(%esp)
0835fa0a +0x12:  mov    %eax,(%esp)
0835fa0d +0x15:  call   0834d7ca <_ZNK12CDungeonList12find_dungeonEi>  ; CDungeonList::find_dungeon(int) const
0835fa12 +0x1a:  leave
0835fa13 +0x1b:  ret
```

## 反编译 C

```c
// CDataManager::find_dungeon @ 0x835f9f8

/* CDataManager::find_dungeon(int) const */

void CDataManager::find_dungeon(int param_1)

{
  CDungeonList::find_dungeon(*(int *)param_1);
  return;
}
```
