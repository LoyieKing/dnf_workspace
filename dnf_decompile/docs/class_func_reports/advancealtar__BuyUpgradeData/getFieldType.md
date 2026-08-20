# getFieldType

`_ZNK12advancealtar14BuyUpgradeData12getFieldTypeEi`

`advancealtar::BuyUpgradeData::getFieldType(int) const`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyUpgradeData` | `0x088a3012` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a3012  _ZNK12advancealtar14BuyUpgradeData12getFieldTypeEi
#           advancealtar::BuyUpgradeData::getFieldType(int) const
# range [0x088a3012, 0x088a3055]
088a3012 +0x00:  push   %ebp
088a3013 +0x01:  mov    %esp,%ebp
088a3015 +0x03:  sub    $0x28,%esp
088a3018 +0x06:  movl   $0xffffffff,-0xc(%ebp)
088a301f +0x0d:  mov    0x8(%ebp),%eax
088a3022 +0x10:  add    $0x10,%eax
088a3025 +0x13:  mov    %eax,(%esp)
088a3028 +0x16:  call   088a3d7c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x89a>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x89a
088a302d +0x1b:  cmp    0xc(%ebp),%eax
088a3030 +0x1e:  setg   %al
088a3033 +0x21:  test   %al,%al
088a3035 +0x23:  je     088a3051 <+0x3f>
088a3037 +0x25:  mov    0xc(%ebp),%eax
088a303a +0x28:  mov    0x8(%ebp),%edx
088a303d +0x2b:  add    $0x10,%edx
088a3040 +0x2e:  mov    %eax,0x4(%esp)
088a3044 +0x32:  mov    %edx,(%esp)
088a3047 +0x35:  call   088a4568 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x1086>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x1086
088a304c +0x3a:  mov    (%eax),%eax
088a304e +0x3c:  mov    %eax,-0xc(%ebp)
088a3051 +0x3f:  mov    -0xc(%ebp),%eax
088a3054 +0x42:  leave
088a3055 +0x43:  ret
```

## 反编译 C

```c
// advancealtar::BuyUpgradeData::getFieldType @ 0x88a3012

/* advancealtar::BuyUpgradeData::getFieldType(int) const */

undefined4 __thiscall advancealtar::BuyUpgradeData::getFieldType(BuyUpgradeData *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  iVar1 = std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>::size
                    ((vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                      *)(this + 0x10));
  if (param_1 < iVar1) {
    puVar2 = (undefined4 *)
             std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>::
             operator[]((vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                         *)(this + 0x10),param_1);
    local_10 = *puVar2;
  }
  return local_10;
}
```
