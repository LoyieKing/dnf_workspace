# _SendResult

`_ZN8WongWork15CCompoundAvatar11_SendResultEP5CUserRKNS0_15tagCompoundInfoE`

`WongWork::CCompoundAvatar::_SendResult(CUser*, WongWork::CCompoundAvatar::tagCompoundInfo const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x08333a9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08333a9c  _ZN8WongWork15CCompoundAvatar11_SendResultEP5CUserRKNS0_15tagCompoundInfoE
#           WongWork::CCompoundAvatar::_SendResult(CUser*, WongWork::CCompoundAvatar::tagCompoundInfo const&)
# range [0x08333a9c, 0x08333df1]
08333a9c +0x000:  push   %ebp
08333a9d +0x001:  mov    %esp,%ebp
08333a9f +0x003:  push   %esi
08333aa0 +0x004:  push   %ebx
08333aa1 +0x005:  sub    $0x90,%esp
08333aa7 +0x00b:  lea    -0x28(%ebp),%eax
08333aaa +0x00e:  mov    %eax,(%esp)
08333aad +0x011:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08333ab2 +0x016:  movl   $0x66,0x8(%esp)
08333aba +0x01e:  movl   $0x1,0x4(%esp)
08333ac2 +0x026:  lea    -0x28(%ebp),%eax
08333ac5 +0x029:  mov    %eax,(%esp)
08333ac8 +0x02c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08333acd +0x031:  movl   $0x1,0x4(%esp)
08333ad5 +0x039:  lea    -0x28(%ebp),%eax
08333ad8 +0x03c:  mov    %eax,(%esp)
08333adb +0x03f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08333ae0 +0x044:  mov    0x10(%ebp),%eax
08333ae3 +0x047:  add    $0xdc,%eax
08333ae8 +0x04c:  mov    %eax,(%esp)
08333aeb +0x04f:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08333af0 +0x054:  mov    %eax,-0x7c(%ebp)
08333af3 +0x057:  mov    $0xaaaaaaab,%edx
08333af8 +0x05c:  mov    -0x7c(%ebp),%eax
08333afb +0x05f:  mul    %edx
08333afd +0x061:  mov    %edx,%eax
08333aff +0x063:  shr    %eax
08333b01 +0x065:  mov    %eax,0x4(%esp)
08333b05 +0x069:  lea    -0x28(%ebp),%eax
08333b08 +0x06c:  mov    %eax,(%esp)
08333b0b +0x06f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08333b10 +0x074:  mov    0x10(%ebp),%eax
08333b13 +0x077:  lea    0xdc(%eax),%edx
08333b19 +0x07d:  lea    -0x2c(%ebp),%eax
08333b1c +0x080:  mov    %edx,0x4(%esp)
08333b20 +0x084:  mov    %eax,(%esp)
08333b23 +0x087:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08333b28 +0x08c:  sub    $0x4,%esp
08333b2b +0x08f:  mov    0x10(%ebp),%eax
08333b2e +0x092:  lea    0xdc(%eax),%edx
08333b34 +0x098:  lea    -0x30(%ebp),%eax
08333b37 +0x09b:  mov    %edx,0x4(%esp)
08333b3b +0x09f:  mov    %eax,(%esp)
08333b3e +0x0a2:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08333b43 +0x0a7:  sub    $0x4,%esp
08333b46 +0x0aa:  jmp    08333bf6 <+0x15a>
08333b4b +0x0af:  lea    -0x1c(%ebp),%eax
08333b4e +0x0b2:  movl   $0x0,0x8(%esp)
08333b56 +0x0ba:  lea    -0x2c(%ebp),%edx
08333b59 +0x0bd:  mov    %edx,0x4(%esp)
08333b5d +0x0c1:  mov    %eax,(%esp)
08333b60 +0x0c4:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08333b65 +0x0c9:  sub    $0x4,%esp
08333b68 +0x0cc:  lea    -0x1c(%ebp),%eax
08333b6b +0x0cf:  mov    %eax,(%esp)
08333b6e +0x0d2:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08333b73 +0x0d7:  mov    (%eax),%eax
08333b75 +0x0d9:  mov    %eax,0x4(%esp)
08333b79 +0x0dd:  lea    -0x28(%ebp),%eax
08333b7c +0x0e0:  mov    %eax,(%esp)
08333b7f +0x0e3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08333b84 +0x0e8:  lea    -0x18(%ebp),%eax
08333b87 +0x0eb:  movl   $0x0,0x8(%esp)
08333b8f +0x0f3:  lea    -0x2c(%ebp),%edx
08333b92 +0x0f6:  mov    %edx,0x4(%esp)
08333b96 +0x0fa:  mov    %eax,(%esp)
08333b99 +0x0fd:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08333b9e +0x102:  sub    $0x4,%esp
08333ba1 +0x105:  lea    -0x18(%ebp),%eax
08333ba4 +0x108:  mov    %eax,(%esp)
08333ba7 +0x10b:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08333bac +0x110:  mov    (%eax),%eax
08333bae +0x112:  mov    %eax,0x4(%esp)
08333bb2 +0x116:  lea    -0x28(%ebp),%eax
08333bb5 +0x119:  mov    %eax,(%esp)
08333bb8 +0x11c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08333bbd +0x121:  lea    -0x14(%ebp),%eax
08333bc0 +0x124:  movl   $0x0,0x8(%esp)
08333bc8 +0x12c:  lea    -0x2c(%ebp),%edx
08333bcb +0x12f:  mov    %edx,0x4(%esp)
08333bcf +0x133:  mov    %eax,(%esp)
08333bd2 +0x136:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08333bd7 +0x13b:  sub    $0x4,%esp
08333bda +0x13e:  lea    -0x14(%ebp),%eax
08333bdd +0x141:  mov    %eax,(%esp)
08333be0 +0x144:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08333be5 +0x149:  mov    (%eax),%eax
08333be7 +0x14b:  mov    %eax,0x4(%esp)
08333beb +0x14f:  lea    -0x28(%ebp),%eax
08333bee +0x152:  mov    %eax,(%esp)
08333bf1 +0x155:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08333bf6 +0x15a:  lea    -0x30(%ebp),%eax
08333bf9 +0x15d:  mov    %eax,0x4(%esp)
08333bfd +0x161:  lea    -0x2c(%ebp),%eax
08333c00 +0x164:  mov    %eax,(%esp)
08333c03 +0x167:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
08333c08 +0x16c:  test   %al,%al
08333c0a +0x16e:  jne    08333b4b <+0xaf>
08333c10 +0x174:  mov    0x10(%ebp),%eax
08333c13 +0x177:  movzwl 0xd8(%eax),%eax
08333c1a +0x17e:  movswl %ax,%ebx
08333c1d +0x181:  mov    0xc(%ebp),%eax
08333c20 +0x184:  mov    %eax,(%esp)
08333c23 +0x187:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08333c28 +0x18c:  lea    -0x71(%ebp),%edx
08333c2b +0x18f:  mov    %ebx,0xc(%esp)
08333c2f +0x193:  movl   $0x2,0x8(%esp)
08333c37 +0x19b:  mov    %eax,0x4(%esp)
08333c3b +0x19f:  mov    %edx,(%esp)
08333c3e +0x1a2:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08333c43 +0x1a7:  sub    $0x4,%esp
08333c46 +0x1aa:  mov    0x10(%ebp),%eax
08333c49 +0x1ad:  movzwl 0xd8(%eax),%eax
08333c50 +0x1b4:  cwtl
08333c51 +0x1b5:  mov    %eax,0x4(%esp)
08333c55 +0x1b9:  lea    -0x28(%ebp),%eax
08333c58 +0x1bc:  mov    %eax,(%esp)
08333c5b +0x1bf:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08333c60 +0x1c4:  mov    -0x6f(%ebp),%eax
08333c63 +0x1c7:  mov    %eax,0x4(%esp)
08333c67 +0x1cb:  lea    -0x28(%ebp),%eax
08333c6a +0x1ce:  mov    %eax,(%esp)
08333c6d +0x1d1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08333c72 +0x1d6:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08333c79 +0x1dd:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08333c7e +0x1e2:  mov    %eax,-0x10(%ebp)
08333c81 +0x1e5:  mov    -0x6a(%ebp),%ebx
08333c84 +0x1e8:  mov    0xc(%ebp),%eax
08333c87 +0x1eb:  mov    %eax,(%esp)
08333c8a +0x1ee:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08333c8f +0x1f3:  mov    %eax,(%esp)
08333c92 +0x1f6:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08333c97 +0x1fb:  mov    -0x10(%ebp),%edx
08333c9a +0x1fe:  mov    %edx,0x8(%esp)
08333c9e +0x202:  mov    %ebx,0x4(%esp)
08333ca2 +0x206:  mov    %eax,(%esp)
08333ca5 +0x209:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
08333caa +0x20e:  mov    %eax,0x4(%esp)
08333cae +0x212:  lea    -0x28(%ebp),%eax
08333cb1 +0x215:  mov    %eax,(%esp)
08333cb4 +0x218:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08333cb9 +0x21d:  movzwl -0x66(%ebp),%eax
08333cbd +0x221:  movzwl %ax,%eax
08333cc0 +0x224:  mov    %eax,0x4(%esp)
08333cc4 +0x228:  lea    -0x28(%ebp),%eax
08333cc7 +0x22b:  mov    %eax,(%esp)
08333cca +0x22e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08333ccf +0x233:  movl   $0x1e,0x4(%esp)
08333cd7 +0x23b:  lea    -0x28(%ebp),%eax
08333cda +0x23e:  mov    %eax,(%esp)
08333cdd +0x241:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08333ce2 +0x246:  mov    -0x6a(%ebp),%ebx
08333ce5 +0x249:  mov    0xc(%ebp),%eax
08333ce8 +0x24c:  mov    %eax,(%esp)
08333ceb +0x24f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08333cf0 +0x254:  mov    %eax,(%esp)
08333cf3 +0x257:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08333cf8 +0x25c:  mov    %ebx,0x4(%esp)
08333cfc +0x260:  mov    %eax,(%esp)
08333cff +0x263:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
08333d04 +0x268:  movl   $0x1e,0x8(%esp)
08333d0c +0x270:  mov    %eax,0x4(%esp)
08333d10 +0x274:  lea    -0x28(%ebp),%eax
08333d13 +0x277:  mov    %eax,(%esp)
08333d16 +0x27a:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
08333d1b +0x27f:  mov    -0x6a(%ebp),%ebx
08333d1e +0x282:  mov    0xc(%ebp),%eax
08333d21 +0x285:  mov    %eax,(%esp)
08333d24 +0x288:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08333d29 +0x28d:  mov    %eax,(%esp)
08333d2c +0x290:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08333d31 +0x295:  mov    %ebx,0x4(%esp)
08333d35 +0x299:  mov    %eax,(%esp)
08333d38 +0x29c:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
08333d3d +0x2a1:  mov    %eax,-0xc(%ebp)
08333d40 +0x2a4:  movl   $0x4,0x4(%esp)
08333d48 +0x2ac:  lea    -0x28(%ebp),%eax
08333d4b +0x2af:  mov    %eax,(%esp)
08333d4e +0x2b2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08333d53 +0x2b7:  cmpl   $0x0,-0xc(%ebp)
08333d57 +0x2bb:  je     08333d75 <+0x2d9>
08333d59 +0x2bd:  mov    -0xc(%ebp),%eax
08333d5c +0x2c0:  movl   $0x4,0x8(%esp)
08333d64 +0x2c8:  mov    %eax,0x4(%esp)
08333d68 +0x2cc:  lea    -0x28(%ebp),%eax
08333d6b +0x2cf:  mov    %eax,(%esp)
08333d6e +0x2d2:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
08333d73 +0x2d7:  jmp    08333d9a <+0x2fe>
08333d75 +0x2d9:  lea    -0x34(%ebp),%eax
08333d78 +0x2dc:  mov    %eax,(%esp)
08333d7b +0x2df:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
08333d80 +0x2e4:  lea    -0x34(%ebp),%eax
08333d83 +0x2e7:  movl   $0x4,0x8(%esp)
08333d8b +0x2ef:  mov    %eax,0x4(%esp)
08333d8f +0x2f3:  lea    -0x28(%ebp),%eax
08333d92 +0x2f6:  mov    %eax,(%esp)
08333d95 +0x2f9:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
08333d9a +0x2fe:  movl   $0x1,0x4(%esp)
08333da2 +0x306:  lea    -0x28(%ebp),%eax
08333da5 +0x309:  mov    %eax,(%esp)
08333da8 +0x30c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08333dad +0x311:  lea    -0x28(%ebp),%eax
08333db0 +0x314:  mov    %eax,0x4(%esp)
08333db4 +0x318:  mov    0xc(%ebp),%eax
08333db7 +0x31b:  mov    %eax,(%esp)
08333dba +0x31e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08333dbf +0x323:  mov    $0x1,%ebx
08333dc4 +0x328:  lea    -0x28(%ebp),%eax
08333dc7 +0x32b:  mov    %eax,(%esp)
08333dca +0x32e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08333dcf +0x333:  mov    %ebx,%eax
08333dd1 +0x335:  lea    -0x8(%ebp),%esp
08333dd4 +0x338:  add    $0x0,%esp
08333dd7 +0x33b:  pop    %ebx
08333dd8 +0x33c:  pop    %esi
08333dd9 +0x33d:  pop    %ebp
08333dda +0x33e:  ret
08333ddb +0x33f:  mov    %edx,%ebx
08333ddd +0x341:  mov    %eax,%esi
08333ddf +0x343:  lea    -0x28(%ebp),%eax
08333de2 +0x346:  mov    %eax,(%esp)
08333de5 +0x349:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08333dea +0x34e:  mov    %esi,%eax
08333dec +0x350:  mov    %ebx,%edx
08333dee +0x352:  mov    %eax,(%esp)
08333df1 +0x355:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::_SendResult @ 0x8333a9c

/* WongWork::CCompoundAvatar::_SendResult(CUser*, WongWork::CCompoundAvatar::tagCompoundInfo const&)
    */

undefined4 __thiscall
WongWork::CCompoundAvatar::_SendResult
          (CCompoundAvatar *this,CUser *param_1,tagCompoundInfo *param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  CInventory *pCVar5;
  CAvatarItemMgr *pCVar6;
  char *pcVar7;
  undefined1 local_75 [2];
  int local_73;
  int local_6e;
  ushort local_6a;
  stAvatarExpansionInfo_t local_38 [4];
  __normal_iterator local_34 [4];
  undefined1 local_30 [4];
  PacketGuard local_2c [12];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [4];
  int local_14;
  char *local_10;
  
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 08333ac8 to 08333dbe has its CatchHandler @ 08333ddb */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x66);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
  uVar2 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(param_2 + 0xdc));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,uVar2 / 3);
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_30,local_34);
    if (!bVar1) break;
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_20,(int)local_30);
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_20);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,*piVar3);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_1c,(int)local_30);
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_1c);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,*piVar3);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_18,(int)local_30);
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_18);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*piVar3);
  }
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_75,iVar4);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(param_2 + 0xd8));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_73);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar4 = local_6e;
  pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  pCVar6 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
  iVar4 = CAvatarItemMgr::GetRemainDate(pCVar6,iVar4,local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,iVar4);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(uint)local_6a);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,0x1e);
  iVar4 = local_6e;
  pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  pCVar6 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
  pcVar7 = (char *)CAvatarItemMgr::getJewelSocketData(pCVar6,iVar4);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_2c,pcVar7,0x1e);
  pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  pCVar6 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar5);
  local_10 = (char *)CAvatarItemMgr::GetExpansionInfo(pCVar6,local_6e);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,4);
  if (local_10 == (char *)0x0) {
    stAvatarExpansionInfo_t::init(local_38);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_2c,(char *)local_38,4);
  }
  else {
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_2c,local_10,4);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  CUser::Send(param_1,local_2c);
  PacketGuard::~PacketGuard(local_2c);
  return 1;
}
```
