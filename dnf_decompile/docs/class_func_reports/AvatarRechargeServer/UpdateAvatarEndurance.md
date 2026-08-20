# UpdateAvatarEndurance

`_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s`

`AvatarRechargeServer::UpdateAvatarEndurance(CUser::eSendTarget, CUser*, short)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x081913f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081913f6  _ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s
#           AvatarRechargeServer::UpdateAvatarEndurance(CUser::eSendTarget, CUser*, short)
# range [0x081913f6, 0x0819155d]
081913f6 +0x000:  push   %ebp
081913f7 +0x001:  mov    %esp,%ebp
081913f9 +0x003:  push   %esi
081913fa +0x004:  push   %ebx
081913fb +0x005:  sub    $0x30,%esp
081913fe +0x008:  mov    0x10(%ebp),%eax
08191401 +0x00b:  mov    %ax,-0x1c(%ebp)
08191405 +0x00f:  cmpw   $0x0,-0x1c(%ebp)
0819140a +0x014:  js     0819154f <+0x159>
08191410 +0x01a:  cmpw   $0x9,-0x1c(%ebp)
08191415 +0x01f:  jg     08191552 <+0x15c>
0819141b +0x025:  movswl -0x1c(%ebp),%ebx
0819141f +0x029:  mov    0xc(%ebp),%eax
08191422 +0x02c:  mov    %eax,(%esp)
08191425 +0x02f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0819142a +0x034:  mov    %ebx,0x8(%esp)
0819142e +0x038:  movl   $0x0,0x4(%esp)
08191436 +0x040:  mov    %eax,(%esp)
08191439 +0x043:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0819143e +0x048:  mov    %eax,-0xc(%ebp)
08191441 +0x04b:  cmpl   $0x0,-0xc(%ebp)
08191445 +0x04f:  je     08191456 <+0x60>
08191447 +0x051:  mov    -0xc(%ebp),%eax
0819144a +0x054:  mov    %eax,(%esp)
0819144d +0x057:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08191452 +0x05c:  test   %al,%al
08191454 +0x05e:  je     0819145d <+0x67>
08191456 +0x060:  mov    $0x1,%eax
0819145b +0x065:  jmp    08191462 <+0x6c>
0819145d +0x067:  mov    $0x0,%eax
08191462 +0x06c:  test   %al,%al
08191464 +0x06e:  jne    08191555 <+0x15f>
0819146a +0x074:  lea    -0x18(%ebp),%eax
0819146d +0x077:  mov    %eax,(%esp)
08191470 +0x07a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08191475 +0x07f:  lea    -0x18(%ebp),%eax
08191478 +0x082:  mov    %eax,(%esp)
0819147b +0x085:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08191480 +0x08a:  movl   $0x220,0x8(%esp)
08191488 +0x092:  movl   $0x0,0x4(%esp)
08191490 +0x09a:  lea    -0x18(%ebp),%eax
08191493 +0x09d:  mov    %eax,(%esp)
08191496 +0x0a0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0819149b +0x0a5:  mov    0xc(%ebp),%eax
0819149e +0x0a8:  mov    %eax,(%esp)
081914a1 +0x0ab:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081914a6 +0x0b0:  movzwl %ax,%eax
081914a9 +0x0b3:  mov    %eax,0x4(%esp)
081914ad +0x0b7:  lea    -0x18(%ebp),%eax
081914b0 +0x0ba:  mov    %eax,(%esp)
081914b3 +0x0bd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081914b8 +0x0c2:  movswl -0x1c(%ebp),%eax
081914bc +0x0c6:  mov    %eax,0x4(%esp)
081914c0 +0x0ca:  lea    -0x18(%ebp),%eax
081914c3 +0x0cd:  mov    %eax,(%esp)
081914c6 +0x0d0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081914cb +0x0d5:  mov    -0xc(%ebp),%eax
081914ce +0x0d8:  mov    0x2(%eax),%eax
081914d1 +0x0db:  mov    %eax,0x4(%esp)
081914d5 +0x0df:  lea    -0x18(%ebp),%eax
081914d8 +0x0e2:  mov    %eax,(%esp)
081914db +0x0e5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081914e0 +0x0ea:  mov    -0xc(%ebp),%eax
081914e3 +0x0ed:  movzwl 0xf(%eax),%eax
081914e7 +0x0f1:  movzwl %ax,%eax
081914ea +0x0f4:  mov    %eax,0x4(%esp)
081914ee +0x0f8:  lea    -0x18(%ebp),%eax
081914f1 +0x0fb:  mov    %eax,(%esp)
081914f4 +0x0fe:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081914f9 +0x103:  movl   $0x1,0x4(%esp)
08191501 +0x10b:  lea    -0x18(%ebp),%eax
08191504 +0x10e:  mov    %eax,(%esp)
08191507 +0x111:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0819150c +0x116:  lea    -0x18(%ebp),%eax
0819150f +0x119:  mov    %eax,0x8(%esp)
08191513 +0x11d:  mov    0x8(%ebp),%eax
08191516 +0x120:  mov    %eax,0x4(%esp)
0819151a +0x124:  mov    0xc(%ebp),%eax
0819151d +0x127:  mov    %eax,(%esp)
08191520 +0x12a:  call   0867b8fe <_ZN5CUser10SendPacketENS_11eSendTargetER11PacketGuard>  ; CUser::SendPacket(CUser::eSendTarget, PacketGuard&)
08191525 +0x12f:  jmp    08191542 <+0x14c>
08191527 +0x131:  mov    %edx,%ebx
08191529 +0x133:  mov    %eax,%esi
0819152b +0x135:  lea    -0x18(%ebp),%eax
0819152e +0x138:  mov    %eax,(%esp)
08191531 +0x13b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08191536 +0x140:  mov    %esi,%eax
08191538 +0x142:  mov    %ebx,%edx
0819153a +0x144:  mov    %eax,(%esp)
0819153d +0x147:  call   08ae3750 <_Unwind_Resume>
08191542 +0x14c:  lea    -0x18(%ebp),%eax
08191545 +0x14f:  mov    %eax,(%esp)
08191548 +0x152:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819154d +0x157:  jmp    08191556 <+0x160>
0819154f +0x159:  nop
08191550 +0x15a:  jmp    08191556 <+0x160>
08191552 +0x15c:  nop
08191553 +0x15d:  jmp    08191556 <+0x160>
08191555 +0x15f:  nop
08191556 +0x160:  add    $0x30,%esp
08191559 +0x163:  pop    %ebx
0819155a +0x164:  pop    %esi
0819155b +0x165:  pop    %ebp
0819155c +0x166:  ret
0819155d +0x167:  nop
```

## 反编译 C

```c
// AvatarRechargeServer::UpdateAvatarEndurance @ 0x81913f6

/* AvatarRechargeServer::UpdateAvatarEndurance(CUser::eSendTarget, CUser*, short) */

void AvatarRechargeServer::UpdateAvatarEndurance(undefined4 param_1,CUser *param_2,short param_3)

{
  bool bVar1;
  char cVar2;
  CInventory *this;
  uint uVar3;
  PacketGuard local_1c [12];
  Inven_Item *local_10;
  
  if ((-1 < param_3) && (param_3 < 10)) {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    local_10 = (Inven_Item *)CInventory::GetInvenRef(this,0,(int)param_3);
    if ((local_10 == (Inven_Item *)0x0) || (cVar2 = Inven_Item::isEmpty(local_10), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0819147b to 08191524 has its CatchHandler @ 08191527 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x220);
      uVar3 = CUser::get_unique_id(param_2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar3 & 0xffff);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)param_3);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 2));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 0xf));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::SendPacket(param_2,param_1,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}
```
