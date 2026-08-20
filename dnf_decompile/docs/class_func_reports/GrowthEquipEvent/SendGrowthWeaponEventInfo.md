# SendGrowthWeaponEventInfo

`_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser`

`GrowthEquipEvent::SendGrowthWeaponEventInfo(CUser&)`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f7226` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7226  _ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser
#           GrowthEquipEvent::SendGrowthWeaponEventInfo(CUser&)
# range [0x080f7226, 0x080f73bd]
080f7226 +0x000:  push   %ebp
080f7227 +0x001:  mov    %esp,%ebp
080f7229 +0x003:  push   %esi
080f722a +0x004:  push   %ebx
080f722b +0x005:  sub    $0x20,%esp
080f722e +0x008:  lea    -0x18(%ebp),%eax
080f7231 +0x00b:  mov    %eax,(%esp)
080f7234 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080f7239 +0x013:  movl   $0x1b9,0x8(%esp)
080f7241 +0x01b:  movl   $0x0,0x4(%esp)
080f7249 +0x023:  lea    -0x18(%ebp),%eax
080f724c +0x026:  mov    %eax,(%esp)
080f724f +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080f7254 +0x02e:  movl   $0x0,-0xc(%ebp)
080f725b +0x035:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
080f7260 +0x03a:  mov    %eax,(%esp)
080f7263 +0x03d:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
080f7268 +0x042:  test   %al,%al
080f726a +0x044:  je     080f727c <+0x56>
080f726c +0x046:  mov    0xc(%ebp),%eax
080f726f +0x049:  mov    %eax,(%esp)
080f7272 +0x04c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
080f7277 +0x051:  mov    %eax,-0xc(%ebp)
080f727a +0x054:  jmp    080f728a <+0x64>
080f727c +0x056:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
080f7281 +0x05b:  mov    0x378(%eax),%eax
080f7287 +0x061:  mov    %eax,-0xc(%ebp)
080f728a +0x064:  mov    0xc(%ebp),%eax
080f728d +0x067:  mov    %eax,(%esp)
080f7290 +0x06a:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f7295 +0x06f:  mov    0xc(%eax),%eax
080f7298 +0x072:  test   %eax,%eax
080f729a +0x074:  setne  %al
080f729d +0x077:  test   %al,%al
080f729f +0x079:  je     080f72b6 <+0x90>
080f72a1 +0x07b:  movl   $0x2,0x4(%esp)
080f72a9 +0x083:  lea    -0x18(%ebp),%eax
080f72ac +0x086:  mov    %eax,(%esp)
080f72af +0x089:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080f72b4 +0x08e:  jmp    080f732e <+0x108>
080f72b6 +0x090:  movl   $0xffffffff,0x4(%esp)
080f72be +0x098:  mov    0xc(%ebp),%eax
080f72c1 +0x09b:  mov    %eax,(%esp)
080f72c4 +0x09e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
080f72c9 +0x0a3:  mov    %eax,%ebx
080f72cb +0x0a5:  mov    0xc(%ebp),%eax
080f72ce +0x0a8:  mov    %eax,(%esp)
080f72d1 +0x0ab:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f72d6 +0x0b0:  mov    0x4(%eax),%eax
080f72d9 +0x0b3:  cmp    %eax,%ebx
080f72db +0x0b5:  jne    080f72fd <+0xd7>
080f72dd +0x0b7:  mov    0xc(%ebp),%eax
080f72e0 +0x0ba:  mov    %eax,(%esp)
080f72e3 +0x0bd:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f72e8 +0x0c2:  movzwl 0x12(%eax),%eax
080f72ec +0x0c6:  movswl %ax,%edx
080f72ef +0x0c9:  mov    -0xc(%ebp),%eax
080f72f2 +0x0cc:  cmp    %eax,%edx
080f72f4 +0x0ce:  jne    080f72fd <+0xd7>
080f72f6 +0x0d0:  mov    $0x1,%eax
080f72fb +0x0d5:  jmp    080f7302 <+0xdc>
080f72fd +0x0d7:  mov    $0x0,%eax
080f7302 +0x0dc:  test   %al,%al
080f7304 +0x0de:  je     080f731b <+0xf5>
080f7306 +0x0e0:  movl   $0x1,0x4(%esp)
080f730e +0x0e8:  lea    -0x18(%ebp),%eax
080f7311 +0x0eb:  mov    %eax,(%esp)
080f7314 +0x0ee:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080f7319 +0x0f3:  jmp    080f732e <+0x108>
080f731b +0x0f5:  movl   $0x0,0x4(%esp)
080f7323 +0x0fd:  lea    -0x18(%ebp),%eax
080f7326 +0x100:  mov    %eax,(%esp)
080f7329 +0x103:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080f732e +0x108:  mov    0xc(%ebp),%eax
080f7331 +0x10b:  mov    %eax,(%esp)
080f7334 +0x10e:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f7339 +0x113:  mov    0x8(%eax),%eax
080f733c +0x116:  mov    %eax,0x4(%esp)
080f7340 +0x11a:  lea    -0x18(%ebp),%eax
080f7343 +0x11d:  mov    %eax,(%esp)
080f7346 +0x120:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
080f734b +0x125:  mov    0xc(%ebp),%eax
080f734e +0x128:  mov    %eax,(%esp)
080f7351 +0x12b:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f7356 +0x130:  movzwl 0x10(%eax),%eax
080f735a +0x134:  cwtl
080f735b +0x135:  mov    %eax,0x4(%esp)
080f735f +0x139:  lea    -0x18(%ebp),%eax
080f7362 +0x13c:  mov    %eax,(%esp)
080f7365 +0x13f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
080f736a +0x144:  movl   $0x1,0x4(%esp)
080f7372 +0x14c:  lea    -0x18(%ebp),%eax
080f7375 +0x14f:  mov    %eax,(%esp)
080f7378 +0x152:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080f737d +0x157:  lea    -0x18(%ebp),%eax
080f7380 +0x15a:  mov    %eax,0x4(%esp)
080f7384 +0x15e:  mov    0xc(%ebp),%eax
080f7387 +0x161:  mov    %eax,(%esp)
080f738a +0x164:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080f738f +0x169:  jmp    080f73ac <+0x186>
080f7391 +0x16b:  mov    %edx,%ebx
080f7393 +0x16d:  mov    %eax,%esi
080f7395 +0x16f:  lea    -0x18(%ebp),%eax
080f7398 +0x172:  mov    %eax,(%esp)
080f739b +0x175:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080f73a0 +0x17a:  mov    %esi,%eax
080f73a2 +0x17c:  mov    %ebx,%edx
080f73a4 +0x17e:  mov    %eax,(%esp)
080f73a7 +0x181:  call   08ae3750 <_Unwind_Resume>
080f73ac +0x186:  lea    -0x18(%ebp),%eax
080f73af +0x189:  mov    %eax,(%esp)
080f73b2 +0x18c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080f73b7 +0x191:  add    $0x20,%esp
080f73ba +0x194:  pop    %ebx
080f73bb +0x195:  pop    %esi
080f73bc +0x196:  pop    %ebp
080f73bd +0x197:  ret
```

## 反编译 C

```c
// GrowthEquipEvent::SendGrowthWeaponEventInfo @ 0x80f7226

/* GrowthEquipEvent::SendGrowthWeaponEventInfo(CUser&) */

void __thiscall GrowthEquipEvent::SendGrowthWeaponEventInfo(GrowthEquipEvent *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  int iVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 080f724f to 080f738e has its CatchHandler @ 080f7391 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1b9);
  local_10 = 0;
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar2 == '\0') {
    iVar3 = G_CEnvironment();
    local_10 = *(int *)(iVar3 + 0x378);
  }
  else {
    local_10 = CUser::GetServerGroup(param_1);
  }
  iVar3 = CUser::getGrowthWeaponEventdata(param_1);
  if (*(int *)(iVar3 + 0xc) != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
    goto LAB_080f732e;
  }
  iVar3 = CUser::get_charac_no(param_1,-1);
  iVar4 = CUser::getGrowthWeaponEventdata(param_1);
  if (iVar3 == *(int *)(iVar4 + 4)) {
    iVar3 = CUser::getGrowthWeaponEventdata(param_1);
    if (*(short *)(iVar3 + 0x12) != local_10) goto LAB_080f72fd;
    bVar1 = true;
  }
  else {
LAB_080f72fd:
    bVar1 = false;
  }
  if (bVar1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  }
LAB_080f732e:
  iVar3 = CUser::getGrowthWeaponEventdata(param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(iVar3 + 8));
  iVar3 = CUser::getGrowthWeaponEventdata(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(iVar3 + 0x10));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
