# check_error

`_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_UpgradeItemSeparate::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeItemSeparate` | `0x081cbe84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cbe84  _ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_UpgradeItemSeparate::check_error(CUser*, MSG_BASE&)
# range [0x081cbe84, 0x081cbf23]
081cbe84 +0x00:  push   %ebp
081cbe85 +0x01:  mov    %esp,%ebp
081cbe87 +0x03:  sub    $0x28,%esp
081cbe8a +0x06:  mov    0xc(%ebp),%eax
081cbe8d +0x09:  mov    %eax,(%esp)
081cbe90 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cbe95 +0x11:  cmp    $0x3,%eax
081cbe98 +0x14:  jne    081cbea9 <+0x25>
081cbe9a +0x16:  mov    0xc(%ebp),%eax
081cbe9d +0x19:  mov    %eax,(%esp)
081cbea0 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cbea5 +0x21:  test   %eax,%eax
081cbea7 +0x23:  jne    081cbeb0 <+0x2c>
081cbea9 +0x25:  mov    $0x1,%eax
081cbeae +0x2a:  jmp    081cbeb5 <+0x31>
081cbeb0 +0x2c:  mov    $0x0,%eax
081cbeb5 +0x31:  test   %al,%al
081cbeb7 +0x33:  je     081cbec0 <+0x3c>
081cbeb9 +0x35:  mov    $0x7,%eax
081cbebe +0x3a:  jmp    081cbf21 <+0x9d>
081cbec0 +0x3c:  mov    0x10(%ebp),%eax
081cbec3 +0x3f:  mov    %eax,-0x10(%ebp)
081cbec6 +0x42:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081cbecb +0x47:  movl   $0x27,0x8(%esp)
081cbed3 +0x4f:  mov    0xc(%ebp),%edx
081cbed6 +0x52:  mov    %edx,0x4(%esp)
081cbeda +0x56:  mov    %eax,(%esp)
081cbedd +0x59:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081cbee2 +0x5e:  mov    %eax,-0xc(%ebp)
081cbee5 +0x61:  cmpl   $0x0,-0xc(%ebp)
081cbee9 +0x65:  je     081cbef0 <+0x6c>
081cbeeb +0x67:  mov    -0xc(%ebp),%eax
081cbeee +0x6a:  jmp    081cbf21 <+0x9d>
081cbef0 +0x6c:  mov    -0x10(%ebp),%eax
081cbef3 +0x6f:  movzwl 0x1b(%eax),%eax
081cbef7 +0x73:  movzwl %ax,%eax
081cbefa +0x76:  mov    %eax,0x8(%esp)
081cbefe +0x7a:  movl   $0x1,0x4(%esp)
081cbf06 +0x82:  mov    0xc(%ebp),%eax
081cbf09 +0x85:  mov    %eax,(%esp)
081cbf0c +0x88:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081cbf11 +0x8d:  test   %al,%al
081cbf13 +0x8f:  je     081cbf1c <+0x98>
081cbf15 +0x91:  mov    $0xd5,%eax
081cbf1a +0x96:  jmp    081cbf21 <+0x9d>
081cbf1c +0x98:  mov    $0x0,%eax
081cbf21 +0x9d:  leave
081cbf22 +0x9e:  ret
081cbf23 +0x9f:  nop
```

## 反编译 C

```c
// Dispatcher_UpgradeItemSeparate::check_error @ 0x81cbe84

/* Dispatcher_UpgradeItemSeparate::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_UpgradeItemSeparate::check_error
          (Dispatcher_UpgradeItemSeparate *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = 7;
  }
  else {
    iVar3 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x27);
    if (iVar3 == 0) {
      cVar2 = CUser::CheckItemLock(param_1,1,(uint)*(ushort *)(param_2 + 0x1b));
      if (cVar2 == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = 0xd5;
      }
    }
  }
  return iVar3;
}
```
