# getDungeonIndexList

`_ZN12CDataManager19getDungeonIndexListEv`

`CDataManager::getDungeonIndexList()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365434` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365434  _ZN12CDataManager19getDungeonIndexListEv
#           CDataManager::getDungeonIndexList()
# range [0x08365434, 0x08365449]
08365434 +0x00:  push   %ebp
08365435 +0x01:  mov    %esp,%ebp
08365437 +0x03:  sub    $0x4,%esp
0836543a +0x06:  mov    0x8(%ebp),%eax
0836543d +0x09:  mov    (%eax),%eax
0836543f +0x0b:  mov    %eax,(%esp)
08365442 +0x0e:  call   0836542c <_ZN12CDungeonList19getDungeonIndexListEv>  ; CDungeonList::getDungeonIndexList()
08365447 +0x13:  leave
08365448 +0x14:  ret
08365449 +0x15:  nop
```

## 反编译 C

```c
// CDataManager::getDungeonIndexList @ 0x8365434

/* CDataManager::getDungeonIndexList() */

void __thiscall CDataManager::getDungeonIndexList(CDataManager *this)

{
  CDungeonList::getDungeonIndexList(*(CDungeonList **)this);
  return;
}
```
