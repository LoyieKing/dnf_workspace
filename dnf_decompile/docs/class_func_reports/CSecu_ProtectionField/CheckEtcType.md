# CheckEtcType

`_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION`

`CSecu_ProtectionField::CheckEtcType(CUser*, SECURITY_PROTCTION)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x08288dbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08288dbc  _ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION
#           CSecu_ProtectionField::CheckEtcType(CUser*, SECURITY_PROTCTION)
# range [0x08288dbc, 0x08288e20]
08288dbc +0x00:  push   %ebp
08288dbd +0x01:  mov    %esp,%ebp
08288dbf +0x03:  sub    $0x18,%esp
08288dc2 +0x06:  cmpl   $0x0,0xc(%ebp)
08288dc6 +0x0a:  jne    08288dcf <+0x13>
08288dc8 +0x0c:  mov    $0x1,%eax
08288dcd +0x11:  jmp    08288e1f <+0x63>
08288dcf +0x13:  mov    0xc(%ebp),%eax
08288dd2 +0x16:  mov    %eax,(%esp)
08288dd5 +0x19:  call   08288e7e <_GLOBAL__I__Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_+0x1d>  ; global constructors keyed to ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)+0x1d
08288dda +0x1e:  test   %al,%al
08288ddc +0x20:  je     08288de5 <+0x29>
08288dde +0x22:  mov    $0xcf,%eax
08288de3 +0x27:  jmp    08288e1f <+0x63>
08288de5 +0x29:  cmpl   $0x8,0x10(%ebp)
08288de9 +0x2d:  je     08288df1 <+0x35>
08288deb +0x2f:  cmpl   $0x9,0x10(%ebp)
08288def +0x33:  jne    08288e0a <+0x4e>
08288df1 +0x35:  mov    0xc(%ebp),%eax
08288df4 +0x38:  mov    %eax,(%esp)
08288df7 +0x3b:  call   0868866e <_ZN5CUser21isSecurityServiceUsedEv>  ; CUser::isSecurityServiceUsed()
08288dfc +0x40:  xor    $0x1,%eax
08288dff +0x43:  test   %al,%al
08288e01 +0x45:  je     08288e0a <+0x4e>
08288e03 +0x47:  mov    $0x1,%eax
08288e08 +0x4c:  jmp    08288e0f <+0x53>
08288e0a +0x4e:  mov    $0x0,%eax
08288e0f +0x53:  test   %al,%al
08288e11 +0x55:  je     08288e1a <+0x5e>
08288e13 +0x57:  mov    $0xe9,%eax
08288e18 +0x5c:  jmp    08288e1f <+0x63>
08288e1a +0x5e:  mov    $0x0,%eax
08288e1f +0x63:  leave
08288e20 +0x64:  ret
```

## 反编译 C

```c
// CSecu_ProtectionField::CheckEtcType @ 0x8288dbc

/* CSecu_ProtectionField::CheckEtcType(CUser*, SECURITY_PROTCTION) */

undefined4 __thiscall
CSecu_ProtectionField::CheckEtcType(undefined4 this,CUser *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (param_1 == (CUser *)0x0) {
    return 1;
  }
  cVar2 = CUser::isRestingUser(param_1);
  if (cVar2 == '\0') {
    if (((param_3 == 8) || (param_3 == 9)) &&
       (cVar2 = CUser::isSecurityServiceUsed(param_1), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar3 = 0xe9;
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0xcf;
}
```
