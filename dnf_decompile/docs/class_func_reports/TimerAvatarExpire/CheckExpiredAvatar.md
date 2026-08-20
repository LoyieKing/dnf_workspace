# CheckExpiredAvatar

`_ZN17TimerAvatarExpire18CheckExpiredAvatarEP5CUser`

`TimerAvatarExpire::CheckExpiredAvatar(CUser*)`

| 类 | 地址 |
|---|---|
| `TimerAvatarExpire` | `0x08632a82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08632a82  _ZN17TimerAvatarExpire18CheckExpiredAvatarEP5CUser
#           TimerAvatarExpire::CheckExpiredAvatar(CUser*)
# range [0x08632a82, 0x08632b31]
08632a82 +0x00:  push   %ebp
08632a83 +0x01:  mov    %esp,%ebp
08632a85 +0x03:  push   %esi
08632a86 +0x04:  push   %ebx
08632a87 +0x05:  sub    $0x20,%esp
08632a8a +0x08:  lea    -0x14(%ebp),%eax
08632a8d +0x0b:  mov    %eax,(%esp)
08632a90 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08632a95 +0x13:  mov    0xc(%ebp),%eax
08632a98 +0x16:  mov    %eax,(%esp)
08632a9b +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08632aa0 +0x1e:  test   %eax,%eax
08632aa2 +0x20:  sete   %al
08632aa5 +0x23:  test   %al,%al
08632aa7 +0x25:  je     08632ab0 <+0x2e>
08632aa9 +0x27:  mov    $0x1,%ebx
08632aae +0x2c:  jmp    08632b1e <+0x9c>
08632ab0 +0x2e:  mov    0xc(%ebp),%eax
08632ab3 +0x31:  mov    %eax,(%esp)
08632ab6 +0x34:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08632abb +0x39:  test   %eax,%eax
08632abd +0x3b:  sete   %al
08632ac0 +0x3e:  test   %al,%al
08632ac2 +0x40:  je     08632acb <+0x49>
08632ac4 +0x42:  mov    $0x0,%ebx
08632ac9 +0x47:  jmp    08632b1e <+0x9c>
08632acb +0x49:  mov    0xc(%ebp),%eax
08632ace +0x4c:  mov    %eax,(%esp)
08632ad1 +0x4f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08632ad6 +0x54:  mov    %eax,(%esp)
08632ad9 +0x57:  call   0850937e <_ZNK10CInventory22isAnyExpiredAvatarItemEv>  ; CInventory::isAnyExpiredAvatarItem() const
08632ade +0x5c:  test   %al,%al
08632ae0 +0x5e:  je     08632afc <+0x7a>
08632ae2 +0x60:  mov    0xc(%ebp),%eax
08632ae5 +0x63:  mov    %eax,(%esp)
08632ae8 +0x66:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08632aed +0x6b:  lea    -0x14(%ebp),%edx
08632af0 +0x6e:  mov    %edx,0x4(%esp)
08632af4 +0x72:  mov    %eax,(%esp)
08632af7 +0x75:  call   08509466 <_ZN10CInventory17ExpiredAvatarItemEP11PacketGuard>  ; CInventory::ExpiredAvatarItem(PacketGuard*)
08632afc +0x7a:  mov    $0x1,%ebx
08632b01 +0x7f:  jmp    08632b1e <+0x9c>
08632b03 +0x81:  mov    %edx,%ebx
08632b05 +0x83:  mov    %eax,%esi
08632b07 +0x85:  lea    -0x14(%ebp),%eax
08632b0a +0x88:  mov    %eax,(%esp)
08632b0d +0x8b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08632b12 +0x90:  mov    %esi,%eax
08632b14 +0x92:  mov    %ebx,%edx
08632b16 +0x94:  mov    %eax,(%esp)
08632b19 +0x97:  call   08ae3750 <_Unwind_Resume>
08632b1e +0x9c:  lea    -0x14(%ebp),%eax
08632b21 +0x9f:  mov    %eax,(%esp)
08632b24 +0xa2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08632b29 +0xa7:  mov    %ebx,%eax
08632b2b +0xa9:  add    $0x20,%esp
08632b2e +0xac:  pop    %ebx
08632b2f +0xad:  pop    %esi
08632b30 +0xae:  pop    %ebp
08632b31 +0xaf:  ret
```

## 反编译 C

```c
// TimerAvatarExpire::CheckExpiredAvatar @ 0x8632a82

/* TimerAvatarExpire::CheckExpiredAvatar(CUser*) */

undefined4 __thiscall TimerAvatarExpire::CheckExpiredAvatar(TimerAvatarExpire *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CInventory *this_00;
  PacketGuard *pPVar3;
  undefined4 uVar4;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    /* try { // try from 08632ad9 to 08632afb has its CatchHandler @ 08632b03 */
      cVar1 = CInventory::isAnyExpiredAvatarItem(this_00);
      if (cVar1 != '\0') {
        pPVar3 = (PacketGuard *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::ExpiredAvatarItem(pPVar3);
      }
      uVar4 = 1;
    }
  }
  PacketGuard::~PacketGuard(local_18);
  return uVar4;
}
```
