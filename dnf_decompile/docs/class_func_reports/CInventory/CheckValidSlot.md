# CheckValidSlot

`_ZNK10CInventory14CheckValidSlotEii`

`CInventory::CheckValidSlot(int, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb01e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb01e  _ZNK10CInventory14CheckValidSlotEii
#           CInventory::CheckValidSlot(int, int) const
# range [0x084fb01e, 0x084fb09f]
084fb01e +0x00:  push   %ebp
084fb01f +0x01:  mov    %esp,%ebp
084fb021 +0x03:  cmpl   $0x0,0x10(%ebp)
084fb025 +0x07:  jns    084fb02e <+0x10>
084fb027 +0x09:  mov    $0x0,%eax
084fb02c +0x0e:  jmp    084fb09e <+0x80>
084fb02e +0x10:  cmpl   $0x5,0xc(%ebp)
084fb032 +0x14:  ja     084fb099 <+0x7b>
084fb034 +0x16:  mov    0xc(%ebp),%eax
084fb037 +0x19:  shl    $0x2,%eax
084fb03a +0x1c:  mov    &data#61009340(.rodata)(%eax),%eax
084fb040 +0x22:  jmp    *%eax
084fb042 +0x24:  cmpl   $0x19,0x10(%ebp)
084fb046 +0x28:  jle    084fb08f <+0x71>
084fb048 +0x2a:  mov    $0x0,%eax
084fb04d +0x2f:  jmp    084fb09e <+0x80>
084fb04f +0x31:  cmpl   $0x137,0x10(%ebp)
084fb056 +0x38:  jle    084fb092 <+0x74>
084fb058 +0x3a:  mov    $0x0,%eax
084fb05d +0x3f:  jmp    084fb09e <+0x80>
084fb05f +0x41:  cmpl   $0x68,0x10(%ebp)
084fb063 +0x45:  jle    084fb095 <+0x77>
084fb065 +0x47:  mov    $0x0,%eax
084fb06a +0x4c:  jmp    084fb09e <+0x80>
084fb06c +0x4e:  cmpl   $0xf1,0x10(%ebp)
084fb073 +0x55:  jle    084fb098 <+0x7a>
084fb075 +0x57:  mov    $0x0,%eax
084fb07a +0x5c:  jmp    084fb09e <+0x80>
084fb07c +0x5e:  cmpl   $0x9,0x10(%ebp)
084fb080 +0x62:  jle    084fb088 <+0x6a>
084fb082 +0x64:  cmpl   $0x16,0x10(%ebp)
084fb086 +0x68:  jle    084fb099 <+0x7b>
084fb088 +0x6a:  mov    $0x0,%eax
084fb08d +0x6f:  jmp    084fb09e <+0x80>
084fb08f +0x71:  nop
084fb090 +0x72:  jmp    084fb099 <+0x7b>
084fb092 +0x74:  nop
084fb093 +0x75:  jmp    084fb099 <+0x7b>
084fb095 +0x77:  nop
084fb096 +0x78:  jmp    084fb099 <+0x7b>
084fb098 +0x7a:  nop
084fb099 +0x7b:  mov    $0x1,%eax
084fb09e +0x80:  pop    %ebp
084fb09f +0x81:  ret
```

## 反编译 C

```c
// CInventory::CheckValidSlot @ 0x84fb01e

/* CInventory::CheckValidSlot(int, int) const */

undefined4 __thiscall CInventory::CheckValidSlot(CInventory *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    switch(param_1) {
    case 0:
      if (0x19 < param_2) {
        return 0;
      }
      break;
    case 1:
      if (0x137 < param_2) {
        return 0;
      }
      break;
    case 2:
      if (0x68 < param_2) {
        return 0;
      }
      break;
    case 3:
      if (0xf1 < param_2) {
        return 0;
      }
      break;
    case 5:
      if ((param_2 < 10) || (0x16 < param_2)) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}
```
