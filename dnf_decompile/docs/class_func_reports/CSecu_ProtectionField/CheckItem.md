# CheckItem

`_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONm`

`CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, unsigned long)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x0828873a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828873a  _ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONm
#           CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, unsigned long)
# range [0x0828873a, 0x08288785]
0828873a +0x00:  push   %ebp
0828873b +0x01:  mov    %esp,%ebp
0828873d +0x03:  sub    $0x18,%esp
08288740 +0x06:  cmpl   $0x1f70,0x14(%ebp)
08288747 +0x0d:  je     08288764 <+0x2a>
08288749 +0x0f:  cmpl   $0x1f71,0x14(%ebp)
08288750 +0x16:  je     08288764 <+0x2a>
08288752 +0x18:  cmpl   $0x989a13,0x14(%ebp)
08288759 +0x1f:  je     08288764 <+0x2a>
0828875b +0x21:  cmpl   $0x292090e1,0x14(%ebp)
08288762 +0x28:  jne    0828877f <+0x45>
08288764 +0x2a:  mov    0x10(%ebp),%eax
08288767 +0x2d:  mov    %eax,0x8(%esp)
0828876b +0x31:  mov    0xc(%ebp),%eax
0828876e +0x34:  mov    %eax,0x4(%esp)
08288772 +0x38:  mov    0x8(%ebp),%eax
08288775 +0x3b:  mov    %eax,(%esp)
08288778 +0x3e:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0828877d +0x43:  jmp    08288784 <+0x4a>
0828877f +0x45:  mov    $0x0,%eax
08288784 +0x4a:  leave
08288785 +0x4b:  ret
```

## 反编译 C

```c
// CSecu_ProtectionField::CheckItem @ 0x828873a

/* CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, unsigned long) */

undefined4 __thiscall
CSecu_ProtectionField::CheckItem
          (CSecu_ProtectionField *this,undefined4 param_1,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((((param_4 == 0x1f70) || (param_4 == 0x1f71)) || (param_4 == 0x989a13)) ||
     (param_4 == 0x292090e1)) {
    uVar1 = Check(this,param_1,param_3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
