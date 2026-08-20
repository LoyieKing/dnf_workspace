# BytePrecision

`_ZN8TaoCrypt13BytePrecisionEj`

`TaoCrypt::BytePrecision(unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08767500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767500  _ZN8TaoCrypt13BytePrecisionEj
#           TaoCrypt::BytePrecision(unsigned int)
# range [0x08767500, 0x08767539]
08767500 +0x00:  push   %ebp
08767501 +0x01:  mov    $0x4,%eax
08767506 +0x06:  mov    %esp,%ebp
08767508 +0x08:  mov    0x8(%ebp),%edx
0876750b +0x0b:  mov    %edx,%ecx
0876750d +0x0d:  shr    $0x18,%ecx
08767510 +0x10:  test   %ecx,%ecx
08767512 +0x12:  jne    08767531 <+0x31>
08767514 +0x14:  mov    %edx,%ecx
08767516 +0x16:  mov    $0x3,%al
08767518 +0x18:  shr    $0x10,%ecx
0876751b +0x1b:  test   %ecx,%ecx
0876751d +0x1d:  jne    08767531 <+0x31>
0876751f +0x1f:  mov    %edx,%ecx
08767521 +0x21:  mov    $0x2,%al
08767523 +0x23:  shr    $0x8,%ecx
08767526 +0x26:  test   %ecx,%ecx
08767528 +0x28:  jne    08767531 <+0x31>
0876752a +0x2a:  xor    %eax,%eax
0876752c +0x2c:  test   %edx,%edx
0876752e +0x2e:  setne  %al
08767531 +0x31:  pop    %ebp
08767532 +0x32:  ret
08767533 +0x33:  lea    0x0(%esi),%esi
08767539 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::BytePrecision @ 0x8767500

/* TaoCrypt::BytePrecision(unsigned int) */

undefined1 TaoCrypt::BytePrecision(uint param_1)

{
  undefined1 uVar1;
  
  uVar1 = 4;
  if (((param_1 >> 0x18 == 0) && (uVar1 = 3, param_1 >> 0x10 == 0)) &&
     (uVar1 = 2, param_1 >> 8 == 0)) {
    uVar1 = param_1 != 0;
  }
  return uVar1;
}
```
