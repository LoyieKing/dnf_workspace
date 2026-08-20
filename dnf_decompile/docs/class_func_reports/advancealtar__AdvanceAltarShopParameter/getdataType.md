# getdataType

`_ZN12advancealtar25AdvanceAltarShopParameter11getdataTypeENS_9FieldType1TE`

`advancealtar::AdvanceAltarShopParameter::getdataType(advancealtar::FieldType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarShopParameter` | `0x088a2b8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a2b8e  _ZN12advancealtar25AdvanceAltarShopParameter11getdataTypeENS_9FieldType1TE
#           advancealtar::AdvanceAltarShopParameter::getdataType(advancealtar::FieldType::T)
# range [0x088a2b8e, 0x088a2bbf]
088a2b8e +0x00:  push   %ebp
088a2b8f +0x01:  mov    %esp,%ebp
088a2b91 +0x03:  push   %ebx
088a2b92 +0x04:  mov    0xc(%ebp),%eax
088a2b95 +0x07:  cmp    $0x7,%eax
088a2b98 +0x0a:  ja     088a2bb7 <+0x29>
088a2b9a +0x0c:  mov    $0x1,%edx
088a2b9f +0x11:  mov    %edx,%ebx
088a2ba1 +0x13:  mov    %eax,%ecx
088a2ba3 +0x15:  shl    %cl,%ebx
088a2ba5 +0x17:  mov    %ebx,%eax
088a2ba7 +0x19:  and    $0xc8,%eax
088a2bac +0x1e:  test   %eax,%eax
088a2bae +0x20:  je     088a2bb7 <+0x29>
088a2bb0 +0x22:  mov    $0x0,%eax
088a2bb5 +0x27:  jmp    088a2bbc <+0x2e>
088a2bb7 +0x29:  mov    $0x1,%eax
088a2bbc +0x2e:  pop    %ebx
088a2bbd +0x2f:  pop    %ebp
088a2bbe +0x30:  ret
088a2bbf +0x31:  nop
```

## 反编译 C

```c
// advancealtar::AdvanceAltarShopParameter::getdataType @ 0x88a2b8e

/* advancealtar::AdvanceAltarShopParameter::getdataType(advancealtar::FieldType::T) */

undefined4 __thiscall
advancealtar::AdvanceAltarShopParameter::getdataType(undefined4 this,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 8) && ((1 << ((byte)param_2 & 0x1f) & 200U) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
