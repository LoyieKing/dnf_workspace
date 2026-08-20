# _CompareSlot

`_ZN6CCargo12_CompareSlotEPKvS1_`

`CCargo::_CompareSlot(void const*, void const*)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850bc5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850bc5a  _ZN6CCargo12_CompareSlotEPKvS1_
#           CCargo::_CompareSlot(void const*, void const*)
# range [0x0850bc5a, 0x0850bd0b]
0850bc5a +0x00:  push   %ebp
0850bc5b +0x01:  mov    %esp,%ebp
0850bc5d +0x03:  sub    $0x10,%esp
0850bc60 +0x06:  mov    0x8(%ebp),%eax
0850bc63 +0x09:  mov    %eax,-0x10(%ebp)
0850bc66 +0x0c:  mov    0xc(%ebp),%eax
0850bc69 +0x0f:  mov    %eax,-0xc(%ebp)
0850bc6c +0x12:  mov    -0x10(%ebp),%eax
0850bc6f +0x15:  mov    0x2(%eax),%eax
0850bc72 +0x18:  test   %eax,%eax
0850bc74 +0x1a:  je     0850bc82 <+0x28>
0850bc76 +0x1c:  mov    -0x10(%ebp),%eax
0850bc79 +0x1f:  movzbl 0x1(%eax),%eax
0850bc7d +0x23:  movzbl %al,%eax
0850bc80 +0x26:  jmp    0850bc87 <+0x2d>
0850bc82 +0x28:  mov    $0x270f,%eax
0850bc87 +0x2d:  mov    %eax,-0x8(%ebp)
0850bc8a +0x30:  mov    -0xc(%ebp),%eax
0850bc8d +0x33:  mov    0x2(%eax),%eax
0850bc90 +0x36:  test   %eax,%eax
0850bc92 +0x38:  je     0850bca0 <+0x46>
0850bc94 +0x3a:  mov    -0xc(%ebp),%eax
0850bc97 +0x3d:  movzbl 0x1(%eax),%eax
0850bc9b +0x41:  movzbl %al,%eax
0850bc9e +0x44:  jmp    0850bca5 <+0x4b>
0850bca0 +0x46:  mov    $0x270f,%eax
0850bca5 +0x4b:  mov    %eax,-0x4(%ebp)
0850bca8 +0x4e:  mov    -0x8(%ebp),%eax
0850bcab +0x51:  cmp    -0x4(%ebp),%eax
0850bcae +0x54:  jge    0850bcb7 <+0x5d>
0850bcb0 +0x56:  mov    $0xffffffff,%eax
0850bcb5 +0x5b:  jmp    0850bd09 <+0xaf>
0850bcb7 +0x5d:  mov    -0x8(%ebp),%eax
0850bcba +0x60:  cmp    -0x4(%ebp),%eax
0850bcbd +0x63:  jle    0850bcc6 <+0x6c>
0850bcbf +0x65:  mov    $0x1,%eax
0850bcc4 +0x6a:  jmp    0850bd09 <+0xaf>
0850bcc6 +0x6c:  cmpl   $0x270f,-0x8(%ebp)
0850bccd +0x73:  je     0850bd04 <+0xaa>
0850bccf +0x75:  mov    -0x10(%ebp),%eax
0850bcd2 +0x78:  mov    0x2(%eax),%edx
0850bcd5 +0x7b:  mov    -0xc(%ebp),%eax
0850bcd8 +0x7e:  mov    0x2(%eax),%eax
0850bcdb +0x81:  cmp    %eax,%edx
0850bcdd +0x83:  je     0850bcfd <+0xa3>
0850bcdf +0x85:  mov    -0x10(%ebp),%eax
0850bce2 +0x88:  mov    0x2(%eax),%edx
0850bce5 +0x8b:  mov    -0xc(%ebp),%eax
0850bce8 +0x8e:  mov    0x2(%eax),%eax
0850bceb +0x91:  cmp    %eax,%edx
0850bced +0x93:  jae    0850bcf6 <+0x9c>
0850bcef +0x95:  mov    $0xffffffff,%eax
0850bcf4 +0x9a:  jmp    0850bcfb <+0xa1>
0850bcf6 +0x9c:  mov    $0x1,%eax
0850bcfb +0xa1:  jmp    0850bd02 <+0xa8>
0850bcfd +0xa3:  mov    $0x0,%eax
0850bd02 +0xa8:  jmp    0850bd09 <+0xaf>
0850bd04 +0xaa:  mov    $0x0,%eax
0850bd09 +0xaf:  leave
0850bd0a +0xb0:  ret
0850bd0b +0xb1:  nop
```

## 反编译 C

```c
// CCargo::_CompareSlot @ 0x850bc5a

/* CCargo::_CompareSlot(void const*, void const*) */

undefined4 CCargo::_CompareSlot(void *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)param_1 + 2) == 0) {
    uVar1 = 9999;
  }
  else {
    uVar1 = (uint)*(byte *)((int)param_1 + 1);
  }
  if (*(int *)((int)param_2 + 2) == 0) {
    uVar2 = 9999;
  }
  else {
    uVar2 = (uint)*(byte *)((int)param_2 + 1);
  }
  if (uVar1 < uVar2) {
    uVar3 = 0xffffffff;
  }
  else if (uVar2 < uVar1) {
    uVar3 = 1;
  }
  else if (uVar1 == 9999) {
    uVar3 = 0;
  }
  else if (*(int *)((int)param_1 + 2) == *(int *)((int)param_2 + 2)) {
    uVar3 = 0;
  }
  else if (*(uint *)((int)param_1 + 2) < *(uint *)((int)param_2 + 2)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
