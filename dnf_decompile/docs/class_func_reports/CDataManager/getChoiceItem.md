# getChoiceItem

`_ZN12CDataManager13getChoiceItemEv`

`CDataManager::getChoiceItem()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083653e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083653e8  _ZN12CDataManager13getChoiceItemEv
#           CDataManager::getChoiceItem()
# range [0x083653e8, 0x083653f5]
083653e8 +0x00:  push   %ebp
083653e9 +0x01:  mov    %esp,%ebp
083653eb +0x03:  mov    0x8(%ebp),%eax
083653ee +0x06:  mov    0xb4a4(%eax),%eax
083653f4 +0x0c:  pop    %ebp
083653f5 +0x0d:  ret
```

## 反编译 C

```c
// CDataManager::getChoiceItem @ 0x83653e8

/* CDataManager::getChoiceItem() */

undefined4 __thiscall CDataManager::getChoiceItem(CDataManager *this)

{
  return *(undefined4 *)(this + 0xb4a4);
}
```
