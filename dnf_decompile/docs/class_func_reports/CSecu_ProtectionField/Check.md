# Check

`_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION`

`CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x08288a02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08288a02  _ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION
#           CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
# range [0x08288a02, 0x08288ac7]
08288a02 +0x00:  push   %ebp
08288a03 +0x01:  mov    %esp,%ebp
08288a05 +0x03:  sub    $0x28,%esp
08288a08 +0x06:  cmpl   $0x0,0xc(%ebp)
08288a0c +0x0a:  jne    08288a18 <+0x16>
08288a0e +0x0c:  mov    $0x1,%eax
08288a13 +0x11:  jmp    08288ac5 <+0xc3>
08288a18 +0x16:  mov    0x10(%ebp),%eax
08288a1b +0x19:  mov    %eax,0x4(%esp)
08288a1f +0x1d:  mov    0x8(%ebp),%eax
08288a22 +0x20:  mov    %eax,(%esp)
08288a25 +0x23:  call   082880dc <_ZN21CSecu_ProtectionField17GetProtectionTypeE18SECURITY_PROTCTION>  ; CSecu_ProtectionField::GetProtectionType(SECURITY_PROTCTION)
08288a2a +0x28:  mov    %eax,-0x10(%ebp)
08288a2d +0x2b:  cmpl   $0x0,-0x10(%ebp)
08288a31 +0x2f:  jne    08288a3d <+0x3b>
08288a33 +0x31:  mov    $0x0,%eax
08288a38 +0x36:  jmp    08288ac5 <+0xc3>
08288a3d +0x3b:  movl   $0x0,-0xc(%ebp)
08288a44 +0x42:  mov    -0x10(%ebp),%eax
08288a47 +0x45:  mov    %eax,0x8(%esp)
08288a4b +0x49:  mov    0xc(%ebp),%eax
08288a4e +0x4c:  mov    %eax,0x4(%esp)
08288a52 +0x50:  mov    0x8(%ebp),%eax
08288a55 +0x53:  mov    %eax,(%esp)
08288a58 +0x56:  call   08288bf2 <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm>  ; CSecu_ProtectionField::CheckRestoreType(CUser*, unsigned long)
08288a5d +0x5b:  mov    %eax,-0xc(%ebp)
08288a60 +0x5e:  cmpl   $0x0,-0xc(%ebp)
08288a64 +0x62:  je     08288a6b <+0x69>
08288a66 +0x64:  mov    -0xc(%ebp),%eax
08288a69 +0x67:  jmp    08288ac5 <+0xc3>
08288a6b +0x69:  mov    0x10(%ebp),%eax
08288a6e +0x6c:  mov    %eax,0xc(%esp)
08288a72 +0x70:  mov    -0x10(%ebp),%eax
08288a75 +0x73:  mov    %eax,0x8(%esp)
08288a79 +0x77:  mov    0xc(%ebp),%eax
08288a7c +0x7a:  mov    %eax,0x4(%esp)
08288a80 +0x7e:  mov    0x8(%ebp),%eax
08288a83 +0x81:  mov    %eax,(%esp)
08288a86 +0x84:  call   08288c46 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION>  ; CSecu_ProtectionField::CheckTradingType(CUser*, unsigned long, SECURITY_PROTCTION)
08288a8b +0x89:  mov    %eax,-0xc(%ebp)
08288a8e +0x8c:  cmpl   $0x0,-0xc(%ebp)
08288a92 +0x90:  je     08288a99 <+0x97>
08288a94 +0x92:  mov    -0xc(%ebp),%eax
08288a97 +0x95:  jmp    08288ac5 <+0xc3>
08288a99 +0x97:  mov    0x10(%ebp),%eax
08288a9c +0x9a:  mov    %eax,0x8(%esp)
08288aa0 +0x9e:  mov    0xc(%ebp),%eax
08288aa3 +0xa1:  mov    %eax,0x4(%esp)
08288aa7 +0xa5:  mov    0x8(%ebp),%eax
08288aaa +0xa8:  mov    %eax,(%esp)
08288aad +0xab:  call   08288dbc <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::CheckEtcType(CUser*, SECURITY_PROTCTION)
08288ab2 +0xb0:  mov    %eax,-0xc(%ebp)
08288ab5 +0xb3:  cmpl   $0x0,-0xc(%ebp)
08288ab9 +0xb7:  je     08288ac0 <+0xbe>
08288abb +0xb9:  mov    -0xc(%ebp),%eax
08288abe +0xbc:  jmp    08288ac5 <+0xc3>
08288ac0 +0xbe:  mov    $0x0,%eax
08288ac5 +0xc3:  leave
08288ac6 +0xc4:  ret
08288ac7 +0xc5:  nop
```

## 反编译 C

```c
// CSecu_ProtectionField::Check @ 0x8288a02

/* CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION) */

int __thiscall
CSecu_ProtectionField::Check(CSecu_ProtectionField *this,CUser *param_1,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 == (CUser *)0x0) {
    iVar1 = 1;
  }
  else {
    uVar2 = GetProtectionType(this,param_3);
    if (uVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = CheckRestoreType(this,param_1,uVar2);
      if (((iVar1 == 0) && (iVar1 = CheckTradingType(this,param_1,uVar2,param_3), iVar1 == 0)) &&
         (iVar1 = CheckEtcType(this,param_1,param_3), iVar1 == 0)) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}
```
