# getStatIconIndex

`_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE`

`advancealtar::BuyUpgradeData::getStatIconIndex(advancealtar::FieldType::T) const`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyUpgradeData` | `0x088a3056` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a3056  _ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE
#           advancealtar::BuyUpgradeData::getStatIconIndex(advancealtar::FieldType::T) const
# range [0x088a3056, 0x088a3105]
088a3056 +0x00:  push   %ebp
088a3057 +0x01:  mov    %esp,%ebp
088a3059 +0x03:  sub    $0x10,%esp
088a305c +0x06:  movl   $0xffffffff,-0x4(%ebp)
088a3063 +0x0d:  mov    0xc(%ebp),%eax
088a3066 +0x10:  sub    $0xa,%eax
088a3069 +0x13:  cmp    $0xe,%eax
088a306c +0x16:  ja     088a3100 <+0xaa>
088a3072 +0x1c:  mov    &data#eb433a4e(.rodata)(,%eax,4),%eax
088a3079 +0x23:  jmp    *%eax
088a307b +0x25:  movl   $0x0,-0x4(%ebp)
088a3082 +0x2c:  jmp    088a3100 <+0xaa>
088a3084 +0x2e:  movl   $0x1,-0x4(%ebp)
088a308b +0x35:  jmp    088a3100 <+0xaa>
088a308d +0x37:  movl   $0x2,-0x4(%ebp)
088a3094 +0x3e:  jmp    088a3100 <+0xaa>
088a3096 +0x40:  movl   $0x3,-0x4(%ebp)
088a309d +0x47:  jmp    088a3100 <+0xaa>
088a309f +0x49:  movl   $0x4,-0x4(%ebp)
088a30a6 +0x50:  jmp    088a3100 <+0xaa>
088a30a8 +0x52:  movl   $0x5,-0x4(%ebp)
088a30af +0x59:  jmp    088a3100 <+0xaa>
088a30b1 +0x5b:  movl   $0x6,-0x4(%ebp)
088a30b8 +0x62:  jmp    088a3100 <+0xaa>
088a30ba +0x64:  movl   $0x7,-0x4(%ebp)
088a30c1 +0x6b:  jmp    088a3100 <+0xaa>
088a30c3 +0x6d:  movl   $0x8,-0x4(%ebp)
088a30ca +0x74:  jmp    088a3100 <+0xaa>
088a30cc +0x76:  movl   $0x9,-0x4(%ebp)
088a30d3 +0x7d:  jmp    088a3100 <+0xaa>
088a30d5 +0x7f:  movl   $0xa,-0x4(%ebp)
088a30dc +0x86:  jmp    088a3100 <+0xaa>
088a30de +0x88:  movl   $0xb,-0x4(%ebp)
088a30e5 +0x8f:  jmp    088a3100 <+0xaa>
088a30e7 +0x91:  movl   $0xc,-0x4(%ebp)
088a30ee +0x98:  jmp    088a3100 <+0xaa>
088a30f0 +0x9a:  movl   $0xd,-0x4(%ebp)
088a30f7 +0xa1:  jmp    088a3100 <+0xaa>
088a30f9 +0xa3:  movl   $0xe,-0x4(%ebp)
088a3100 +0xaa:  mov    -0x4(%ebp),%eax
088a3103 +0xad:  leave
088a3104 +0xae:  ret
088a3105 +0xaf:  nop
```

## 反编译 C

```c
// advancealtar::BuyUpgradeData::getStatIconIndex @ 0x88a3056

/* advancealtar::BuyUpgradeData::getStatIconIndex(advancealtar::FieldType::T) const */

undefined4 __thiscall
advancealtar::BuyUpgradeData::getStatIconIndex(undefined4 this,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  switch(param_2) {
  case 10:
    local_8 = 0;
    break;
  case 0xb:
    local_8 = 1;
    break;
  case 0xc:
    local_8 = 2;
    break;
  case 0xd:
    local_8 = 3;
    break;
  case 0xe:
    local_8 = 4;
    break;
  case 0xf:
    local_8 = 5;
    break;
  case 0x10:
    local_8 = 6;
    break;
  case 0x11:
    local_8 = 7;
    break;
  case 0x12:
    local_8 = 8;
    break;
  case 0x13:
    local_8 = 9;
    break;
  case 0x14:
    local_8 = 10;
    break;
  case 0x15:
    local_8 = 0xb;
    break;
  case 0x16:
    local_8 = 0xc;
    break;
  case 0x17:
    local_8 = 0xd;
    break;
  case 0x18:
    local_8 = 0xe;
  }
  return local_8;
}
```
