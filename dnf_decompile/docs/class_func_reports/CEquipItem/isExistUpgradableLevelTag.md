# isExistUpgradableLevelTag

`_ZN10CEquipItem25isExistUpgradableLevelTagEv`

`CEquipItem::isExistUpgradableLevelTag()`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x0851378a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0851378a  _ZN10CEquipItem25isExistUpgradableLevelTagEv
#           CEquipItem::isExistUpgradableLevelTag()
# range [0x0851378a, 0x085137a7]
0851378a +0x00:  push   %ebp
0851378b +0x01:  mov    %esp,%ebp
0851378d +0x03:  sub    $0x18,%esp
08513790 +0x06:  mov    0x8(%ebp),%eax
08513793 +0x09:  add    $0x200,%eax
08513798 +0x0e:  mov    %eax,(%esp)
0851379b +0x11:  call   08519210 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5845>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5845
085137a0 +0x16:  test   %eax,%eax
085137a2 +0x18:  setne  %al
085137a5 +0x1b:  leave
085137a6 +0x1c:  ret
085137a7 +0x1d:  nop
```

## 反编译 C

```c
// CEquipItem::isExistUpgradableLevelTag @ 0x851378a

/* CEquipItem::isExistUpgradableLevelTag() */

bool __thiscall CEquipItem::isExistUpgradableLevelTag(CEquipItem *this)

{
  int iVar1;
  
  iVar1 = std::
          map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
          ::size((map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
                  *)(this + 0x200));
  return iVar1 != 0;
}
```
