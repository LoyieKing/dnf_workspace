# CheckRestoreType

`_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm`

`CSecu_ProtectionField::CheckRestoreType(CUser*, unsigned long)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x08288bf2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08288bf2  _ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm
#           CSecu_ProtectionField::CheckRestoreType(CUser*, unsigned long)
# range [0x08288bf2, 0x08288c45]
08288bf2 +0x00:  push   %ebp
08288bf3 +0x01:  mov    %esp,%ebp
08288bf5 +0x03:  sub    $0x18,%esp
08288bf8 +0x06:  cmpl   $0x0,0xc(%ebp)
08288bfc +0x0a:  jne    08288c05 <+0x13>
08288bfe +0x0c:  mov    $0x1,%eax
08288c03 +0x11:  jmp    08288c44 <+0x52>
08288c05 +0x13:  mov    0x10(%ebp),%eax
08288c08 +0x16:  and    $0x80,%eax
08288c0d +0x1b:  test   %eax,%eax
08288c0f +0x1d:  je     08288c2f <+0x3d>
08288c11 +0x1f:  movl   $0x80,0x4(%esp)
08288c19 +0x27:  mov    0xc(%ebp),%eax
08288c1c +0x2a:  mov    %eax,(%esp)
08288c1f +0x2d:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
08288c24 +0x32:  test   %al,%al
08288c26 +0x34:  je     08288c2f <+0x3d>
08288c28 +0x36:  mov    $0x1,%eax
08288c2d +0x3b:  jmp    08288c34 <+0x42>
08288c2f +0x3d:  mov    $0x0,%eax
08288c34 +0x42:  test   %al,%al
08288c36 +0x44:  je     08288c3f <+0x4d>
08288c38 +0x46:  mov    $0xe5,%eax
08288c3d +0x4b:  jmp    08288c44 <+0x52>
08288c3f +0x4d:  mov    $0x0,%eax
08288c44 +0x52:  leave
08288c45 +0x53:  ret
```

## 反编译 C

```c
// CSecu_ProtectionField::CheckRestoreType @ 0x8288bf2

/* CSecu_ProtectionField::CheckRestoreType(CUser*, unsigned long) */

undefined4 __thiscall
CSecu_ProtectionField::CheckRestoreType(CSecu_ProtectionField *this,CUser *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (param_1 != (CUser *)0x0) {
    if (((param_2 & 0x80) == 0) || (cVar2 = CUser::isTradePunishType(param_1,0x80), cVar2 == '\0'))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 0xe5;
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 1;
}
```
