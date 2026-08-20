# getUpgradeItemRepairCostRate

`_ZNK8WongWork12CItemUpgrade28getUpgradeItemRepairCostRateEib`

`WongWork::CItemUpgrade::getUpgradeItemRepairCostRate(int, bool) const`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08549148` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08549148  _ZNK8WongWork12CItemUpgrade28getUpgradeItemRepairCostRateEib
#           WongWork::CItemUpgrade::getUpgradeItemRepairCostRate(int, bool) const
# range [0x08549148, 0x08549199]
08549148 +0x00:  push   %ebp
08549149 +0x01:  mov    %esp,%ebp
0854914b +0x03:  sub    $0x38,%esp
0854914e +0x06:  mov    0x10(%ebp),%eax
08549151 +0x09:  mov    %al,-0xc(%ebp)
08549154 +0x0c:  cmpb   $0x0,-0xc(%ebp)
08549158 +0x10:  je     08549176 <+0x2e>
0854915a +0x12:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
0854915f +0x17:  mov    %eax,(%esp)
08549162 +0x1a:  call   0854b560 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3e8>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3e8
08549167 +0x1f:  mov    0xc(%ebp),%edx
0854916a +0x22:  add    $0x9c,%edx
08549170 +0x28:  mov    0x4(%eax,%edx,4),%eax
08549174 +0x2c:  jmp    08549191 <+0x49>
08549176 +0x2e:  mov    0x8(%ebp),%eax
08549179 +0x31:  add    $0x4,%eax
0854917c +0x34:  mov    %eax,(%esp)
0854917f +0x37:  call   0854b382 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x20a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x20a
08549184 +0x3c:  mov    0xc(%ebp),%edx
08549187 +0x3f:  add    $0x9c,%edx
0854918d +0x45:  mov    0x4(%eax,%edx,4),%eax
08549191 +0x49:  mov    %eax,-0x1c(%ebp)
08549194 +0x4c:  flds   -0x1c(%ebp)
08549197 +0x4f:  leave
08549198 +0x50:  ret
08549199 +0x51:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::getUpgradeItemRepairCostRate @ 0x8549148

/* WongWork::CItemUpgrade::getUpgradeItemRepairCostRate(int, bool) const */

longdouble __thiscall
WongWork::CItemUpgrade::getUpgradeItemRepairCostRate(CItemUpgrade *this,int param_1,bool param_2)

{
  int iVar1;
  float fVar2;
  
  if (param_2) {
    iVar1 = CItemAmplifier::getUpgradeInfoTable(GlobalData::s_itemAmplifier_);
    fVar2 = *(float *)(iVar1 + 4 + (param_1 + 0x9c) * 4);
  }
  else {
    iVar1 = CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
    fVar2 = *(float *)(iVar1 + 4 + (param_1 + 0x9c) * 4);
  }
  return (longdouble)fVar2;
}
```
