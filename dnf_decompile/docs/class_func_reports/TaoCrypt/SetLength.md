# SetLength

`_ZN8TaoCrypt9SetLengthEjPh`

`TaoCrypt::SetLength(unsigned int, unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x087544e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087544e0  _ZN8TaoCrypt9SetLengthEjPh
#           TaoCrypt::SetLength(unsigned int, unsigned char*)
# range [0x087544e0, 0x0875456f]
087544e0 +0x00:  push   %ebp
087544e1 +0x01:  mov    %esp,%ebp
087544e3 +0x03:  sub    $0x38,%esp
087544e6 +0x06:  mov    %esi,-0x8(%ebp)
087544e9 +0x09:  mov    0x8(%ebp),%esi
087544ec +0x0c:  mov    %ebx,-0xc(%ebp)
087544ef +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087544f4 +0x14:  add    $0xc186a4,%ebx
087544fa +0x1a:  mov    %edi,-0x4(%ebp)
087544fd +0x1d:  mov    0xc(%ebp),%edi
08754500 +0x20:  cmp    $0x7f,%esi
08754503 +0x23:  ja     08754520 <+0x40>
08754505 +0x25:  mov    %esi,%eax
08754507 +0x27:  mov    %al,(%edi)
08754509 +0x29:  mov    $0x1,%eax
0875450e +0x2e:  mov    -0xc(%ebp),%ebx
08754511 +0x31:  mov    -0x8(%ebp),%esi
08754514 +0x34:  mov    -0x4(%ebp),%edi
08754517 +0x37:  mov    %ebp,%esp
08754519 +0x39:  pop    %ebp
0875451a +0x3a:  ret
0875451b +0x3b:  nop
0875451c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
08754520 +0x40:  mov    %esi,(%esp)
08754523 +0x43:  call   08767500 <_ZN8TaoCrypt13BytePrecisionEj>  ; TaoCrypt::BytePrecision(unsigned int)
08754528 +0x48:  or     $0xffffff80,%eax
0875452b +0x4b:  mov    %al,(%edi)
0875452d +0x4d:  mov    %esi,(%esp)
08754530 +0x50:  call   08767500 <_ZN8TaoCrypt13BytePrecisionEj>  ; TaoCrypt::BytePrecision(unsigned int)
08754535 +0x55:  mov    %eax,%edx
08754537 +0x57:  mov    $0x1,%eax
0875453c +0x5c:  test   %edx,%edx
0875453e +0x5e:  je     0875450e <+0x2e>
08754540 +0x60:  lea    -0x8(,%edx,8),%ecx
08754547 +0x67:  add    $0x1,%edx
0875454a +0x6a:  mov    %edx,-0x1c(%ebp)
0875454d +0x6d:  lea    0x0(%esi),%esi
08754550 +0x70:  mov    %esi,%edx
08754552 +0x72:  shr    %cl,%edx
08754554 +0x74:  sub    $0x8,%ecx
08754557 +0x77:  mov    %dl,(%edi,%eax,1)
0875455a +0x7a:  add    $0x1,%eax
0875455d +0x7d:  cmp    -0x1c(%ebp),%eax
08754560 +0x80:  jne    08754550 <+0x70>
08754562 +0x82:  mov    -0xc(%ebp),%ebx
08754565 +0x85:  mov    -0x8(%ebp),%esi
08754568 +0x88:  mov    -0x4(%ebp),%edi
0875456b +0x8b:  mov    %ebp,%esp
0875456d +0x8d:  pop    %ebp
0875456e +0x8e:  ret
0875456f +0x8f:  nop
```

## 反编译 C

```c
// TaoCrypt::SetLength @ 0x87544e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SetLength(unsigned int, unsigned char*) */

int TaoCrypt::SetLength(uint param_1,uchar *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 0x80) {
    *param_2 = (uchar)param_1;
  }
  else {
    bVar1 = BytePrecision(param_1);
    *param_2 = bVar1 | 0x80;
    iVar2 = BytePrecision(param_1);
    iVar3 = 1;
    if (iVar2 != 0) {
      iVar4 = iVar2 * 8;
      do {
        iVar4 = iVar4 + -8;
        param_2[iVar3] = (uchar)(param_1 >> ((byte)iVar4 & 0x1f));
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar2 + 1);
      return iVar3;
    }
  }
  return 1;
}
```
