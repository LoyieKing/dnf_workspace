# getUltimateDungeonList

`_ZNK12CDataManager22getUltimateDungeonListEv`

`CDataManager::getUltimateDungeonList() const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365edc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365edc  _ZNK12CDataManager22getUltimateDungeonListEv
#           CDataManager::getUltimateDungeonList() const
# range [0x08365edc, 0x08365ee9]
08365edc +0x00:  push   %ebp
08365edd +0x01:  mov    %esp,%ebp
08365edf +0x03:  mov    0x8(%ebp),%eax
08365ee2 +0x06:  add    $0xb488,%eax
08365ee7 +0x0b:  pop    %ebp
08365ee8 +0x0c:  ret
08365ee9 +0x0d:  nop
```

## 反编译 C

```c
// CDataManager::getUltimateDungeonList @ 0x8365edc

/* CDataManager::getUltimateDungeonList() const */

CDataManager * __thiscall CDataManager::getUltimateDungeonList(CDataManager *this)

{
  return this + 0xb488;
}
```
