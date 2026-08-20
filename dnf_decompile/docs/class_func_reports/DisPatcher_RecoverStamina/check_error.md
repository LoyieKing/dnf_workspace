# check_error

`_ZN25DisPatcher_RecoverStamina11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_RecoverStamina::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RecoverStamina` | `0x081c3f4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c3f4a  _ZN25DisPatcher_RecoverStamina11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_RecoverStamina::check_error(CUser*, MSG_BASE&)
# range [0x081c3f4a, 0x081c3fb7]
081c3f4a +0x00:  push   %ebp
081c3f4b +0x01:  mov    %esp,%ebp
081c3f4d +0x03:  sub    $0x28,%esp
081c3f50 +0x06:  mov    0xc(%ebp),%eax
081c3f53 +0x09:  mov    %eax,(%esp)
081c3f56 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c3f5b +0x11:  cmp    $0x3,%eax
081c3f5e +0x14:  setne  %al
081c3f61 +0x17:  test   %al,%al
081c3f63 +0x19:  je     081c3f6c <+0x22>
081c3f65 +0x1b:  mov    $0x63,%eax
081c3f6a +0x20:  jmp    081c3fb6 <+0x6c>
081c3f6c +0x22:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081c3f71 +0x27:  movl   $0x2f,0x8(%esp)
081c3f79 +0x2f:  mov    0xc(%ebp),%edx
081c3f7c +0x32:  mov    %edx,0x4(%esp)
081c3f80 +0x36:  mov    %eax,(%esp)
081c3f83 +0x39:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081c3f88 +0x3e:  mov    %eax,-0xc(%ebp)
081c3f8b +0x41:  cmpl   $0x0,-0xc(%ebp)
081c3f8f +0x45:  je     081c3f96 <+0x4c>
081c3f91 +0x47:  mov    -0xc(%ebp),%eax
081c3f94 +0x4a:  jmp    081c3fb6 <+0x6c>
081c3f96 +0x4c:  mov    0xc(%ebp),%eax
081c3f99 +0x4f:  mov    %eax,(%esp)
081c3f9c +0x52:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081c3fa1 +0x57:  test   %eax,%eax
081c3fa3 +0x59:  sete   %al
081c3fa6 +0x5c:  test   %al,%al
081c3fa8 +0x5e:  je     081c3fb1 <+0x67>
081c3faa +0x60:  mov    $0xffffffff,%eax
081c3faf +0x65:  jmp    081c3fb6 <+0x6c>
081c3fb1 +0x67:  mov    $0x0,%eax
081c3fb6 +0x6c:  leave
081c3fb7 +0x6d:  ret
```

## 反编译 C

```c
// DisPatcher_RecoverStamina::check_error @ 0x81c3f4a

/* DisPatcher_RecoverStamina::check_error(CUser*, MSG_BASE&) */

int DisPatcher_RecoverStamina::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 3) {
    iVar1 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0x2f);
    if (iVar1 == 0) {
      iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar1 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = 0;
      }
    }
  }
  else {
    iVar1 = 99;
  }
  return iVar1;
}
```
