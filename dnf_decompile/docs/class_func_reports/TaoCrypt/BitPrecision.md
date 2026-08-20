# BitPrecision

`_ZN8TaoCrypt12BitPrecisionEj`

`TaoCrypt::BitPrecision(unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08767540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767540  _ZN8TaoCrypt12BitPrecisionEj
#           TaoCrypt::BitPrecision(unsigned int)
# range [0x08767540, 0x0876757c]
08767540 +0x00:  push   %ebp
08767541 +0x01:  xor    %edx,%edx
08767543 +0x03:  mov    %esp,%ebp
08767545 +0x05:  mov    $0x20,%eax
0876754a +0x0a:  push   %edi
0876754b +0x0b:  push   %esi
0876754c +0x0c:  mov    0x8(%ebp),%esi
0876754f +0x0f:  test   %esi,%esi
08767551 +0x11:  jne    08767569 <+0x29>
08767553 +0x13:  jmp    08767576 <+0x36>
08767555 +0x15:  lea    0x0(%esi),%esi
08767558 +0x18:  lea    (%edx,%eax,1),%ecx
0876755b +0x1b:  mov    %esi,%edi
0876755d +0x1d:  shr    %ecx
0876755f +0x1f:  shr    %cl,%edi
08767561 +0x21:  test   %edi,%edi
08767563 +0x23:  cmovne %ecx,%edx
08767566 +0x26:  cmove  %ecx,%eax
08767569 +0x29:  mov    %eax,%ecx
0876756b +0x2b:  sub    %edx,%ecx
0876756d +0x2d:  cmp    $0x1,%ecx
08767570 +0x30:  ja     08767558 <+0x18>
08767572 +0x32:  pop    %esi
08767573 +0x33:  pop    %edi
08767574 +0x34:  pop    %ebp
08767575 +0x35:  ret
08767576 +0x36:  xor    %al,%al
08767578 +0x38:  pop    %esi
08767579 +0x39:  pop    %edi
0876757a +0x3a:  pop    %ebp
0876757b +0x3b:  ret
0876757c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::BitPrecision @ 0x8767540

/* TaoCrypt::BitPrecision(unsigned int) */

uint TaoCrypt::BitPrecision(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0x20;
  uVar2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  while (uVar3 = uVar2, 1 < uVar1 - uVar3) {
    uVar2 = uVar3 + uVar1 >> 1;
    if (param_1 >> ((byte)uVar2 & 0x1f) == 0) {
      uVar1 = uVar2;
      uVar2 = uVar3;
    }
  }
  return uVar1;
}
```
