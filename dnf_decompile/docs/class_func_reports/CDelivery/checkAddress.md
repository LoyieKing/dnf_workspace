# checkAddress

`_ZN9CDelivery12checkAddressEi`

`CDelivery::checkAddress(int)`

| 类 | 地址 |
|---|---|
| `CDelivery` | `0x081163dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081163dc  _ZN9CDelivery12checkAddressEi
#           CDelivery::checkAddress(int)
# range [0x081163dc, 0x081163f9]
081163dc +0x00:  push   %ebp
081163dd +0x01:  mov    %esp,%ebp
081163df +0x03:  cmpl   $0x0,0xc(%ebp)
081163e3 +0x07:  jle    081163f2 <+0x16>
081163e5 +0x09:  cmpl   $0x2,0xc(%ebp)
081163e9 +0x0d:  jg     081163f2 <+0x16>
081163eb +0x0f:  mov    $0x1,%eax
081163f0 +0x14:  jmp    081163f7 <+0x1b>
081163f2 +0x16:  mov    $0x0,%eax
081163f7 +0x1b:  pop    %ebp
081163f8 +0x1c:  ret
081163f9 +0x1d:  nop
```

## 反编译 C

```c
// CDelivery::checkAddress @ 0x81163dc

/* CDelivery::checkAddress(int) */

undefined4 __thiscall CDelivery::checkAddress(CDelivery *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (2 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
