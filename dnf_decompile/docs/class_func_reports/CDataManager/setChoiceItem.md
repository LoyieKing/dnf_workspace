# setChoiceItem

`_ZN12CDataManager13setChoiceItemEbj`

`CDataManager::setChoiceItem(bool, unsigned int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083653b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083653b0  _ZN12CDataManager13setChoiceItemEbj
#           CDataManager::setChoiceItem(bool, unsigned int)
# range [0x083653b0, 0x083653d7]
083653b0 +0x00:  push   %ebp
083653b1 +0x01:  mov    %esp,%ebp
083653b3 +0x03:  sub    $0x4,%esp
083653b6 +0x06:  mov    0xc(%ebp),%eax
083653b9 +0x09:  mov    %al,-0x4(%ebp)
083653bc +0x0c:  mov    0x8(%ebp),%eax
083653bf +0x0f:  movzbl -0x4(%ebp),%edx
083653c3 +0x13:  mov    %dl,0xb4a0(%eax)
083653c9 +0x19:  mov    0x8(%ebp),%eax
083653cc +0x1c:  mov    0x10(%ebp),%edx
083653cf +0x1f:  mov    %edx,0xb4a4(%eax)
083653d5 +0x25:  leave
083653d6 +0x26:  ret
083653d7 +0x27:  nop
```

## 反编译 C

```c
// CDataManager::setChoiceItem @ 0x83653b0

/* CDataManager::setChoiceItem(bool, unsigned int) */

void __thiscall CDataManager::setChoiceItem(CDataManager *this,bool param_1,uint param_2)

{
  this[0xb4a0] = (CDataManager)param_1;
  *(uint *)(this + 0xb4a4) = param_2;
  return;
}
```
