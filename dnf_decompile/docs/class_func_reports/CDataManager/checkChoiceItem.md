# checkChoiceItem

`_ZN12CDataManager15checkChoiceItemEv`

`CDataManager::checkChoiceItem()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083653d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083653d8  _ZN12CDataManager15checkChoiceItemEv
#           CDataManager::checkChoiceItem()
# range [0x083653d8, 0x083653e7]
083653d8 +0x00:  push   %ebp
083653d9 +0x01:  mov    %esp,%ebp
083653db +0x03:  mov    0x8(%ebp),%eax
083653de +0x06:  movzbl 0xb4a0(%eax),%eax
083653e5 +0x0d:  pop    %ebp
083653e6 +0x0e:  ret
083653e7 +0x0f:  nop
```

## 反编译 C

```c
// CDataManager::checkChoiceItem @ 0x83653d8

/* CDataManager::checkChoiceItem() */

CDataManager __thiscall CDataManager::checkChoiceItem(CDataManager *this)

{
  return this[0xb4a0];
}
```
