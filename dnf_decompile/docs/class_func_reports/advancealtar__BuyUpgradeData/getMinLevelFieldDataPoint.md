# getMinLevelFieldDataPoint

`_ZN12advancealtar14BuyUpgradeData25getMinLevelFieldDataPointENS_9FieldType1TERi`

`advancealtar::BuyUpgradeData::getMinLevelFieldDataPoint(advancealtar::FieldType::T, int&)`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyUpgradeData` | `0x088a2f1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a2f1a  _ZN12advancealtar14BuyUpgradeData25getMinLevelFieldDataPointENS_9FieldType1TERi
#           advancealtar::BuyUpgradeData::getMinLevelFieldDataPoint(advancealtar::FieldType::T, int&)
# range [0x088a2f1a, 0x088a2f79]
088a2f1a +0x00:  push   %ebp
088a2f1b +0x01:  mov    %esp,%ebp
088a2f1d +0x03:  sub    $0x28,%esp
088a2f20 +0x06:  mov    0x10(%ebp),%eax
088a2f23 +0x09:  movl   $0x0,(%eax)
088a2f29 +0x0f:  mov    0x10(%ebp),%eax
088a2f2c +0x12:  mov    (%eax),%eax
088a2f2e +0x14:  mov    0xc(%ebp),%edx
088a2f31 +0x17:  mov    %edx,0x8(%esp)
088a2f35 +0x1b:  mov    %eax,0x4(%esp)
088a2f39 +0x1f:  mov    0x8(%ebp),%eax
088a2f3c +0x22:  mov    %eax,(%esp)
088a2f3f +0x25:  call   088a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>  ; advancealtar::BuyUpgradeData::getFieldDataPoint(int, advancealtar::FieldType::T)
088a2f44 +0x2a:  mov    %eax,-0xc(%ebp)
088a2f47 +0x2d:  cmpl   $0x0,-0xc(%ebp)
088a2f4b +0x31:  jne    088a2f74 <+0x5a>
088a2f4d +0x33:  mov    0x10(%ebp),%eax
088a2f50 +0x36:  movl   $0x1,(%eax)
088a2f56 +0x3c:  mov    0x10(%ebp),%eax
088a2f59 +0x3f:  mov    (%eax),%eax
088a2f5b +0x41:  mov    0xc(%ebp),%edx
088a2f5e +0x44:  mov    %edx,0x8(%esp)
088a2f62 +0x48:  mov    %eax,0x4(%esp)
088a2f66 +0x4c:  mov    0x8(%ebp),%eax
088a2f69 +0x4f:  mov    %eax,(%esp)
088a2f6c +0x52:  call   088a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>  ; advancealtar::BuyUpgradeData::getFieldDataPoint(int, advancealtar::FieldType::T)
088a2f71 +0x57:  mov    %eax,-0xc(%ebp)
088a2f74 +0x5a:  mov    -0xc(%ebp),%eax
088a2f77 +0x5d:  leave
088a2f78 +0x5e:  ret
088a2f79 +0x5f:  nop
```

## 反编译 C

```c
// advancealtar::BuyUpgradeData::getMinLevelFieldDataPoint @ 0x88a2f1a

/* advancealtar::BuyUpgradeData::getMinLevelFieldDataPoint(advancealtar::FieldType::T, int&) */

int __thiscall
advancealtar::BuyUpgradeData::getMinLevelFieldDataPoint
          (BuyUpgradeData *this,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_10;
  
  *param_3 = 0;
  local_10 = getFieldDataPoint(this,*param_3,param_2);
  if (local_10 == 0) {
    *param_3 = 1;
    local_10 = getFieldDataPoint(this,*param_3,param_2);
  }
  return local_10;
}
```
