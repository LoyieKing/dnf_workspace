# isExistUpgradableLevel

`_ZN17STEquipmentScript22isExistUpgradableLevelEv`

`STEquipmentScript::isExistUpgradableLevel()`

| 类 | 地址 |
|---|---|
| `STEquipmentScript` | `0x0898f066` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898f066  _ZN17STEquipmentScript22isExistUpgradableLevelEv
#           STEquipmentScript::isExistUpgradableLevel()
# range [0x0898f066, 0x0898f083]
0898f066 +0x00:  push   %ebp
0898f067 +0x01:  mov    %esp,%ebp
0898f069 +0x03:  sub    $0x18,%esp
0898f06c +0x06:  mov    0x8(%ebp),%eax
0898f06f +0x09:  add    $0x6fc,%eax
0898f074 +0x0e:  mov    %eax,(%esp)
0898f077 +0x11:  call   08519210 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5845>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5845
0898f07c +0x16:  test   %eax,%eax
0898f07e +0x18:  setne  %al
0898f081 +0x1b:  leave
0898f082 +0x1c:  ret
0898f083 +0x1d:  nop
```

## 反编译 C

```c
// STEquipmentScript::isExistUpgradableLevel @ 0x898f066

/* STEquipmentScript::isExistUpgradableLevel() */

bool __thiscall STEquipmentScript::isExistUpgradableLevel(STEquipmentScript *this)

{
  int iVar1;
  
  iVar1 = std::
          map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
          ::size((map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
                  *)(this + 0x6fc));
  return iVar1 != 0;
}
```
