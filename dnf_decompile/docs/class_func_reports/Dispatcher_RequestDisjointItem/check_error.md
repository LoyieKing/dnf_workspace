# check_error

`_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RequestDisjointItem::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestDisjointItem` | `0x081cfc04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cfc04  _ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RequestDisjointItem::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cfc04, 0x081cfcab]
081cfc04 +0x00:  push   %ebp
081cfc05 +0x01:  mov    %esp,%ebp
081cfc07 +0x03:  push   %ebx
081cfc08 +0x04:  sub    $0x24,%esp
081cfc0b +0x07:  mov    0xc(%ebp),%eax
081cfc0e +0x0a:  mov    %eax,(%esp)
081cfc11 +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cfc16 +0x12:  cmp    $0x2,%eax
081cfc19 +0x15:  jle    081cfc2a <+0x26>
081cfc1b +0x17:  mov    0xc(%ebp),%eax
081cfc1e +0x1a:  mov    %eax,(%esp)
081cfc21 +0x1d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cfc26 +0x22:  test   %eax,%eax
081cfc28 +0x24:  jne    081cfc31 <+0x2d>
081cfc2a +0x26:  mov    $0x1,%eax
081cfc2f +0x2b:  jmp    081cfc36 <+0x32>
081cfc31 +0x2d:  mov    $0x0,%eax
081cfc36 +0x32:  test   %al,%al
081cfc38 +0x34:  je     081cfc41 <+0x3d>
081cfc3a +0x36:  mov    $0xffffffff,%eax
081cfc3f +0x3b:  jmp    081cfca6 <+0xa2>
081cfc41 +0x3d:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081cfc46 +0x42:  movl   $0x13,0xc(%esp)
081cfc4e +0x4a:  movl   $0x1,0x8(%esp)
081cfc56 +0x52:  mov    0xc(%ebp),%edx
081cfc59 +0x55:  mov    %edx,0x4(%esp)
081cfc5d +0x59:  mov    %eax,(%esp)
081cfc60 +0x5c:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081cfc65 +0x61:  test   %al,%al
081cfc67 +0x63:  je     081cfc70 <+0x6c>
081cfc69 +0x65:  mov    $0xd1,%eax
081cfc6e +0x6a:  jmp    081cfca6 <+0xa2>
081cfc70 +0x6c:  mov    0x10(%ebp),%eax
081cfc73 +0x6f:  mov    %eax,-0x10(%ebp)
081cfc76 +0x72:  mov    -0x10(%ebp),%eax
081cfc79 +0x75:  movzwl 0xe(%eax),%eax
081cfc7d +0x79:  movzwl %ax,%ebx
081cfc80 +0x7c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081cfc85 +0x81:  mov    %ebx,0x4(%esp)
081cfc89 +0x85:  mov    %eax,(%esp)
081cfc8c +0x88:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081cfc91 +0x8d:  mov    %eax,-0xc(%ebp)
081cfc94 +0x90:  cmpl   $0x0,-0xc(%ebp)
081cfc98 +0x94:  jne    081cfca1 <+0x9d>
081cfc9a +0x96:  mov    $0x3,%eax
081cfc9f +0x9b:  jmp    081cfca6 <+0xa2>
081cfca1 +0x9d:  mov    $0x0,%eax
081cfca6 +0xa2:  add    $0x24,%esp
081cfca9 +0xa5:  pop    %ebx
081cfcaa +0xa6:  pop    %ebp
081cfcab +0xa7:  ret
```

## 反编译 C

```c
// Dispatcher_RequestDisjointItem::check_error @ 0x81cfc04

/* Dispatcher_RequestDisjointItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_RequestDisjointItem::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ServiceRestrictManager *pSVar6;
  GameWorld *this;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (2 < iVar4) {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar4 != 0) {
      bVar2 = false;
      goto LAB_081cfc36;
    }
  }
  bVar2 = true;
LAB_081cfc36:
  if (bVar2) {
    uVar5 = 0xffffffff;
  }
  else {
    pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar6,param_2,1,0x13);
    if (cVar3 == '\0') {
      uVar1 = *(ushort *)(param_3 + 0xe);
      this = (GameWorld *)G_GameWorld();
      iVar4 = GameWorld::find_from_world(this,uVar1);
      if (iVar4 == 0) {
        uVar5 = 3;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0xd1;
    }
  }
  return uVar5;
}
```
