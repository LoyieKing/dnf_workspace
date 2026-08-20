# getDungeonIndexList

`_ZN12CDungeonList19getDungeonIndexListEv`

`CDungeonList::getDungeonIndexList()`

| 类 | 地址 |
|---|---|
| `CDungeonList` | `0x0836542c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836542c  _ZN12CDungeonList19getDungeonIndexListEv
#           CDungeonList::getDungeonIndexList()
# range [0x0836542c, 0x08365433]
0836542c +0x00:  push   %ebp
0836542d +0x01:  mov    %esp,%ebp
0836542f +0x03:  mov    0x8(%ebp),%eax
08365432 +0x06:  pop    %ebp
08365433 +0x07:  ret
```

## 反编译 C

```c
// CDungeonList::getDungeonIndexList @ 0x836542c

/* CDungeonList::getDungeonIndexList() */

CDungeonList * __thiscall CDungeonList::getDungeonIndexList(CDungeonList *this)

{
  return this;
}
```
