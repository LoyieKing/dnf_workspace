# CheckOpposite

`_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_`

`CSecu_ProtectionField::CheckOpposite(CUser*, SECURITY_PROTCTION, CUser*)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x08288994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08288994  _ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_
#           CSecu_ProtectionField::CheckOpposite(CUser*, SECURITY_PROTCTION, CUser*)
# range [0x08288994, 0x08288a01]
08288994 +0x00:  push   %ebp
08288995 +0x01:  mov    %esp,%ebp
08288997 +0x03:  sub    $0x28,%esp
0828899a +0x06:  cmpl   $0x0,0xc(%ebp)
0828899e +0x0a:  je     082889a6 <+0x12>
082889a0 +0x0c:  cmpl   $0x0,0x14(%ebp)
082889a4 +0x10:  jne    082889ad <+0x19>
082889a6 +0x12:  mov    $0x1,%eax
082889ab +0x17:  jmp    08288a00 <+0x6c>
082889ad +0x19:  mov    0x10(%ebp),%eax
082889b0 +0x1c:  mov    %eax,0x8(%esp)
082889b4 +0x20:  mov    0xc(%ebp),%eax
082889b7 +0x23:  mov    %eax,0x4(%esp)
082889bb +0x27:  mov    0x8(%ebp),%eax
082889be +0x2a:  mov    %eax,(%esp)
082889c1 +0x2d:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
082889c6 +0x32:  mov    %eax,-0xc(%ebp)
082889c9 +0x35:  cmpl   $0x0,-0xc(%ebp)
082889cd +0x39:  jne    082889ed <+0x59>
082889cf +0x3b:  movl   $0x0,0x4(%esp)
082889d7 +0x43:  mov    0x14(%ebp),%eax
082889da +0x46:  mov    %eax,(%esp)
082889dd +0x49:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
082889e2 +0x4e:  test   %al,%al
082889e4 +0x50:  je     082889ed <+0x59>
082889e6 +0x52:  mov    $0x1,%eax
082889eb +0x57:  jmp    082889f2 <+0x5e>
082889ed +0x59:  mov    $0x0,%eax
082889f2 +0x5e:  test   %al,%al
082889f4 +0x60:  je     082889fd <+0x69>
082889f6 +0x62:  movl   $0x73,-0xc(%ebp)
082889fd +0x69:  mov    -0xc(%ebp),%eax
08288a00 +0x6c:  leave
08288a01 +0x6d:  ret
```

## 反编译 C

```c
// CSecu_ProtectionField::CheckOpposite @ 0x8288994

/* CSecu_ProtectionField::CheckOpposite(CUser*, SECURITY_PROTCTION, CUser*) */

int __thiscall
CSecu_ProtectionField::CheckOpposite
          (CSecu_ProtectionField *this,int param_1,undefined4 param_3,CUser *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 local_10;
  
  if ((param_1 == 0) || (param_4 == (CUser *)0x0)) {
    local_10 = 1;
  }
  else {
    local_10 = Check(this,param_1,param_3);
    if ((local_10 == 0) && (cVar2 = CUser::isTradePunishType(param_4,0), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_10 = 0x73;
    }
  }
  return local_10;
}
```
