# getUpgradeItemRepairCostRate

`_ZN12CDataManager28getUpgradeItemRepairCostRateEib`

`CDataManager::getUpgradeItemRepairCostRate(int, bool)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083635d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083635d4  _ZN12CDataManager28getUpgradeItemRepairCostRateEib
#           CDataManager::getUpgradeItemRepairCostRate(int, bool)
# range [0x083635d4, 0x0836360b]
083635d4 +0x00:  push   %ebp
083635d5 +0x01:  mov    %esp,%ebp
083635d7 +0x03:  sub    $0x38,%esp
083635da +0x06:  mov    0x10(%ebp),%eax
083635dd +0x09:  mov    %al,-0xc(%ebp)
083635e0 +0x0c:  movzbl -0xc(%ebp),%edx
083635e4 +0x10:  mov    0x8(%ebp),%eax
083635e7 +0x13:  mov    0x20(%eax),%eax
083635ea +0x16:  mov    %edx,0x8(%esp)
083635ee +0x1a:  mov    0xc(%ebp),%edx
083635f1 +0x1d:  mov    %edx,0x4(%esp)
083635f5 +0x21:  mov    %eax,(%esp)
083635f8 +0x24:  call   08549148 <_ZNK8WongWork12CItemUpgrade28getUpgradeItemRepairCostRateEib>  ; WongWork::CItemUpgrade::getUpgradeItemRepairCostRate(int, bool) const
083635fd +0x29:  fstps  -0x1c(%ebp)
08363600 +0x2c:  mov    -0x1c(%ebp),%eax
08363603 +0x2f:  mov    %eax,-0x1c(%ebp)
08363606 +0x32:  flds   -0x1c(%ebp)
08363609 +0x35:  leave
0836360a +0x36:  ret
0836360b +0x37:  nop
```

## 反编译 C

```c
// CDataManager::getUpgradeItemRepairCostRate @ 0x83635d4

/* CDataManager::getUpgradeItemRepairCostRate(int, bool) */

longdouble __thiscall
CDataManager::getUpgradeItemRepairCostRate(CDataManager *this,int param_1,bool param_2)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)
          WongWork::CItemUpgrade::getUpgradeItemRepairCostRate
                    (*(CItemUpgrade **)(this + 0x20),param_1,param_2);
  return (longdouble)(float)lVar1;
}
```
