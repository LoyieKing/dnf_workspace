# doLinkCharacDisconnect

`_ZN5CUser22doLinkCharacDisconnectEv`

`CUser::doLinkCharacDisconnect()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08652c8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08652c8e  _ZN5CUser22doLinkCharacDisconnectEv
#           CUser::doLinkCharacDisconnect()
# range [0x08652c8e, 0x08652dd7]
08652c8e +0x000:  push   %ebp
08652c8f +0x001:  mov    %esp,%ebp
08652c91 +0x003:  sub    $0x38,%esp
08652c94 +0x006:  mov    0x8(%ebp),%eax
08652c97 +0x009:  mov    %eax,(%esp)
08652c9a +0x00c:  call   086973f8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3c4d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3c4d
08652c9f +0x011:  test   %al,%al
08652ca1 +0x013:  je     08652dd5 <+0x147>
08652ca7 +0x019:  mov    0x8(%ebp),%eax
08652caa +0x01c:  mov    %eax,(%esp)
08652cad +0x01f:  call   0864aa0a <_ZN5CUser17isLocked4DataLoadEv>  ; CUser::isLocked4DataLoad()
08652cb2 +0x024:  test   %al,%al
08652cb4 +0x026:  jne    08652cc5 <+0x37>
08652cb6 +0x028:  mov    0x8(%ebp),%eax
08652cb9 +0x02b:  mov    %eax,(%esp)
08652cbc +0x02e:  call   0864aae6 <_ZN5CUser20isLockedCreateCharacEv>  ; CUser::isLockedCreateCharac()
08652cc1 +0x033:  test   %al,%al
08652cc3 +0x035:  je     08652ccc <+0x3e>
08652cc5 +0x037:  mov    $0x1,%eax
08652cca +0x03c:  jmp    08652cd1 <+0x43>
08652ccc +0x03e:  mov    $0x0,%eax
08652cd1 +0x043:  mov    %al,-0xd(%ebp)
08652cd4 +0x046:  cmpb   $0x0,-0xd(%ebp)
08652cd8 +0x04a:  jne    08652ce9 <+0x5b>
08652cda +0x04c:  mov    0x8(%ebp),%eax
08652cdd +0x04f:  mov    %eax,(%esp)
08652ce0 +0x052:  call   0864aa78 <_ZN5CUser20isLockedDeleteCharacEv>  ; CUser::isLockedDeleteCharac()
08652ce5 +0x057:  test   %al,%al
08652ce7 +0x059:  je     08652cf0 <+0x62>
08652ce9 +0x05b:  mov    $0x1,%eax
08652cee +0x060:  jmp    08652cf5 <+0x67>
08652cf0 +0x062:  mov    $0x0,%eax
08652cf5 +0x067:  mov    %al,-0xd(%ebp)
08652cf8 +0x06a:  cmpb   $0x0,-0xd(%ebp)
08652cfc +0x06e:  je     08652d4e <+0xc0>
08652cfe +0x070:  mov    0x8(%ebp),%eax
08652d01 +0x073:  mov    %eax,(%esp)
08652d04 +0x076:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08652d09 +0x07b:  movl   $0x0,0x4(%esp)
08652d11 +0x083:  mov    %eax,(%esp)
08652d14 +0x086:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08652d19 +0x08b:  mov    %eax,0x14(%esp)
08652d1d +0x08f:  movl   $"LINK_LOG : checkLinkCharacDisconnect ERROR!! m_id(%s)",0x10(%esp)
08652d25 +0x097:  movl   $0x1cc1,0xc(%esp)
08652d2d +0x09f:  movl   $&_ZZN5CUser22doLinkCharacDisconnectEvE19__PRETTY_FUNCTION__,0x8(%esp)
08652d35 +0x0a7:  movl   $"user.cpp",0x4(%esp)
08652d3d +0x0af:  movl   $0x1,(%esp)
08652d44 +0x0b6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08652d49 +0x0bb:  jmp    08652dd5 <+0x147>
08652d4e +0x0c0:  mov    0x8(%ebp),%eax
08652d51 +0x0c3:  mov    %eax,(%esp)
08652d54 +0x0c6:  call   08697408 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3c5d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3c5d
08652d59 +0x0cb:  movsbl %al,%eax
08652d5c +0x0ce:  mov    %eax,-0xc(%ebp)
08652d5f +0x0d1:  mov    0x8(%ebp),%eax
08652d62 +0x0d4:  add    $0x796e8,%eax
08652d67 +0x0d9:  mov    %eax,(%esp)
08652d6a +0x0dc:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
08652d6f +0x0e1:  lea    -0x1(%eax),%edx
08652d72 +0x0e4:  mov    -0xc(%ebp),%eax
08652d75 +0x0e7:  sub    $0x1,%eax
08652d78 +0x0ea:  mov    %edx,0x8(%esp)
08652d7c +0x0ee:  mov    %eax,0x4(%esp)
08652d80 +0x0f2:  mov    0x8(%ebp),%eax
08652d83 +0x0f5:  mov    %eax,(%esp)
08652d86 +0x0f8:  call   08651b7a <_ZN5CUser16ChangeCharacSlotEjj>  ; CUser::ChangeCharacSlot(unsigned int, unsigned int)
08652d8b +0x0fd:  mov    0x8(%ebp),%eax
08652d8e +0x100:  add    $0x796e8,%eax
08652d93 +0x105:  mov    %eax,(%esp)
08652d96 +0x108:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
08652d9b +0x10d:  lea    -0x1(%eax),%edx
08652d9e +0x110:  mov    -0xc(%ebp),%eax
08652da1 +0x113:  sub    $0x1,%eax
08652da4 +0x116:  mov    %edx,0x8(%esp)
08652da8 +0x11a:  mov    %eax,0x4(%esp)
08652dac +0x11e:  mov    0x8(%ebp),%eax
08652daf +0x121:  mov    %eax,(%esp)
08652db2 +0x124:  call   08651b7a <_ZN5CUser16ChangeCharacSlotEjj>  ; CUser::ChangeCharacSlot(unsigned int, unsigned int)
08652db7 +0x129:  movl   $0x0,0x4(%esp)
08652dbf +0x131:  mov    0x8(%ebp),%eax
08652dc2 +0x134:  mov    %eax,(%esp)
08652dc5 +0x137:  call   086973dc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3c31>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3c31
08652dca +0x13c:  mov    0x8(%ebp),%eax
08652dcd +0x13f:  mov    %eax,(%esp)
08652dd0 +0x142:  call   08651740 <_ZN5CUser16UpdateCharacViewEv>  ; CUser::UpdateCharacView()
08652dd5 +0x147:  leave
08652dd6 +0x148:  ret
08652dd7 +0x149:  nop
```

## 反编译 C

```c
// CUser::doLinkCharacDisconnect @ 0x8652c8e

/* CUser::doLinkCharacDisconnect() */

void __thiscall CUser::doLinkCharacDisconnect(CUser *this)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  cVar2 = isLinkCharacDisconnectFlag(this);
  if (cVar2 != '\0') {
    cVar2 = isLocked4DataLoad(this);
    if ((cVar2 == '\0') && (cVar2 = isLockedCreateCharac(this), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) || (cVar2 = isLockedDeleteCharac(this), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar3 = get_acc_id(this);
      uVar4 = NumberToString(uVar3,0);
      LogManager::logFormat
                (1,"user.cpp","void CUser::doLinkCharacDisconnect()",0x1cc1,
                 "LINK_LOG : checkLinkCharacDisconnect ERROR!! m_id(%s)",uVar4);
    }
    else {
      cVar2 = getDisconnectLinkCharacSlotIdx(this);
      iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
      ChangeCharacSlot(this,(int)cVar2 - 1,iVar5 - 1);
      iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
      ChangeCharacSlot(this,(int)cVar2 - 1,iVar5 - 1);
      setLinkCharacDisconnectFlag(this,false);
      UpdateCharacView(this);
    }
    return;
  }
  return;
}
```
