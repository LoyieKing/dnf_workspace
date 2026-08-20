# _SendHoldVictory

`_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i`

`pvp_assault::CAssaultPlace::_SendHoldVictory(CUser*, CUser*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ecaee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ecaee  _ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i
#           pvp_assault::CAssaultPlace::_SendHoldVictory(CUser*, CUser*, int)
# range [0x082ecaee, 0x082ecdbb]
082ecaee +0x000:  push   %ebp
082ecaef +0x001:  mov    %esp,%ebp
082ecaf1 +0x003:  push   %esi
082ecaf2 +0x004:  push   %ebx
082ecaf3 +0x005:  sub    $0x60,%esp
082ecaf6 +0x008:  lea    -0x4c(%ebp),%eax
082ecaf9 +0x00b:  mov    %eax,(%esp)
082ecafc +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ecb01 +0x013:  movl   $0x109,0x8(%esp)
082ecb09 +0x01b:  movl   $0x0,0x4(%esp)
082ecb11 +0x023:  lea    -0x4c(%ebp),%eax
082ecb14 +0x026:  mov    %eax,(%esp)
082ecb17 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ecb1c +0x02e:  mov    0xc(%ebp),%eax
082ecb1f +0x031:  mov    %eax,(%esp)
082ecb22 +0x034:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ecb27 +0x039:  movsbl %al,%eax
082ecb2a +0x03c:  mov    %eax,0x4(%esp)
082ecb2e +0x040:  lea    -0x4c(%ebp),%eax
082ecb31 +0x043:  mov    %eax,(%esp)
082ecb34 +0x046:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ecb39 +0x04b:  mov    0x14(%ebp),%eax
082ecb3c +0x04e:  add    $0x1,%eax
082ecb3f +0x051:  mov    %eax,0x4(%esp)
082ecb43 +0x055:  lea    -0x4c(%ebp),%eax
082ecb46 +0x058:  mov    %eax,(%esp)
082ecb49 +0x05b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ecb4e +0x060:  mov    0xc(%ebp),%eax
082ecb51 +0x063:  mov    %eax,(%esp)
082ecb54 +0x066:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082ecb59 +0x06b:  mov    %eax,-0x40(%ebp)
082ecb5c +0x06e:  cmpl   $0x0,-0x40(%ebp)
082ecb60 +0x072:  je     082ecbfc <+0x10e>
082ecb66 +0x078:  mov    -0x40(%ebp),%eax
082ecb69 +0x07b:  mov    %eax,(%esp)
082ecb6c +0x07e:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
082ecb71 +0x083:  mov    %eax,0x4(%esp)
082ecb75 +0x087:  lea    -0x4c(%ebp),%eax
082ecb78 +0x08a:  mov    %eax,(%esp)
082ecb7b +0x08d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ecb80 +0x092:  movl   $0x0,-0x3c(%ebp)
082ecb87 +0x099:  jmp    082ecbef <+0x101>
082ecb89 +0x09b:  mov    -0x3c(%ebp),%eax
082ecb8c +0x09e:  mov    %eax,0x4(%esp)
082ecb90 +0x0a2:  mov    -0x40(%ebp),%eax
082ecb93 +0x0a5:  mov    %eax,(%esp)
082ecb96 +0x0a8:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
082ecb9b +0x0ad:  mov    %eax,-0x38(%ebp)
082ecb9e +0x0b0:  cmpl   $0x0,-0x38(%ebp)
082ecba2 +0x0b4:  je     082ecbeb <+0xfd>
082ecba4 +0x0b6:  mov    -0x38(%ebp),%eax
082ecba7 +0x0b9:  mov    %eax,(%esp)
082ecbaa +0x0bc:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082ecbaf +0x0c1:  mov    %eax,-0x34(%ebp)
082ecbb2 +0x0c4:  mov    -0x34(%ebp),%eax
082ecbb5 +0x0c7:  mov    %eax,(%esp)
082ecbb8 +0x0ca:  call   0807e3b0 <_init+0xca8>
082ecbbd +0x0cf:  mov    %eax,-0x30(%ebp)
082ecbc0 +0x0d2:  mov    -0x30(%ebp),%eax
082ecbc3 +0x0d5:  mov    %eax,0x4(%esp)
082ecbc7 +0x0d9:  lea    -0x4c(%ebp),%eax
082ecbca +0x0dc:  mov    %eax,(%esp)
082ecbcd +0x0df:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ecbd2 +0x0e4:  mov    -0x30(%ebp),%eax
082ecbd5 +0x0e7:  mov    %eax,0x8(%esp)
082ecbd9 +0x0eb:  mov    -0x34(%ebp),%eax
082ecbdc +0x0ee:  mov    %eax,0x4(%esp)
082ecbe0 +0x0f2:  lea    -0x4c(%ebp),%eax
082ecbe3 +0x0f5:  mov    %eax,(%esp)
082ecbe6 +0x0f8:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
082ecbeb +0x0fd:  addl   $0x1,-0x3c(%ebp)
082ecbef +0x101:  cmpl   $0x3,-0x3c(%ebp)
082ecbf3 +0x105:  setle  %al
082ecbf6 +0x108:  test   %al,%al
082ecbf8 +0x10a:  jne    082ecb89 <+0x9b>
082ecbfa +0x10c:  jmp    082ecc56 <+0x168>
082ecbfc +0x10e:  movl   $0x1,0x4(%esp)
082ecc04 +0x116:  lea    -0x4c(%ebp),%eax
082ecc07 +0x119:  mov    %eax,(%esp)
082ecc0a +0x11c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ecc0f +0x121:  mov    0xc(%ebp),%eax
082ecc12 +0x124:  mov    %eax,(%esp)
082ecc15 +0x127:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082ecc1a +0x12c:  mov    %eax,-0x2c(%ebp)
082ecc1d +0x12f:  mov    -0x2c(%ebp),%eax
082ecc20 +0x132:  mov    %eax,(%esp)
082ecc23 +0x135:  call   0807e3b0 <_init+0xca8>
082ecc28 +0x13a:  mov    %eax,-0x28(%ebp)
082ecc2b +0x13d:  mov    -0x28(%ebp),%eax
082ecc2e +0x140:  mov    %eax,0x4(%esp)
082ecc32 +0x144:  lea    -0x4c(%ebp),%eax
082ecc35 +0x147:  mov    %eax,(%esp)
082ecc38 +0x14a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ecc3d +0x14f:  mov    -0x28(%ebp),%eax
082ecc40 +0x152:  mov    %eax,0x8(%esp)
082ecc44 +0x156:  mov    -0x2c(%ebp),%eax
082ecc47 +0x159:  mov    %eax,0x4(%esp)
082ecc4b +0x15d:  lea    -0x4c(%ebp),%eax
082ecc4e +0x160:  mov    %eax,(%esp)
082ecc51 +0x163:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
082ecc56 +0x168:  mov    0x10(%ebp),%eax
082ecc59 +0x16b:  mov    %eax,(%esp)
082ecc5c +0x16e:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082ecc61 +0x173:  mov    %eax,-0x24(%ebp)
082ecc64 +0x176:  cmpl   $0x0,-0x24(%ebp)
082ecc68 +0x17a:  je     082ecd04 <+0x216>
082ecc6e +0x180:  mov    -0x24(%ebp),%eax
082ecc71 +0x183:  mov    %eax,(%esp)
082ecc74 +0x186:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
082ecc79 +0x18b:  mov    %eax,0x4(%esp)
082ecc7d +0x18f:  lea    -0x4c(%ebp),%eax
082ecc80 +0x192:  mov    %eax,(%esp)
082ecc83 +0x195:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ecc88 +0x19a:  movl   $0x0,-0x20(%ebp)
082ecc8f +0x1a1:  jmp    082eccf7 <+0x209>
082ecc91 +0x1a3:  mov    -0x20(%ebp),%eax
082ecc94 +0x1a6:  mov    %eax,0x4(%esp)
082ecc98 +0x1aa:  mov    -0x24(%ebp),%eax
082ecc9b +0x1ad:  mov    %eax,(%esp)
082ecc9e +0x1b0:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
082ecca3 +0x1b5:  mov    %eax,-0x1c(%ebp)
082ecca6 +0x1b8:  cmpl   $0x0,-0x1c(%ebp)
082eccaa +0x1bc:  je     082eccf3 <+0x205>
082eccac +0x1be:  mov    -0x1c(%ebp),%eax
082eccaf +0x1c1:  mov    %eax,(%esp)
082eccb2 +0x1c4:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082eccb7 +0x1c9:  mov    %eax,-0x18(%ebp)
082eccba +0x1cc:  mov    -0x18(%ebp),%eax
082eccbd +0x1cf:  mov    %eax,(%esp)
082eccc0 +0x1d2:  call   0807e3b0 <_init+0xca8>
082eccc5 +0x1d7:  mov    %eax,-0x14(%ebp)
082eccc8 +0x1da:  mov    -0x14(%ebp),%eax
082ecccb +0x1dd:  mov    %eax,0x4(%esp)
082ecccf +0x1e1:  lea    -0x4c(%ebp),%eax
082eccd2 +0x1e4:  mov    %eax,(%esp)
082eccd5 +0x1e7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082eccda +0x1ec:  mov    -0x14(%ebp),%eax
082eccdd +0x1ef:  mov    %eax,0x8(%esp)
082ecce1 +0x1f3:  mov    -0x18(%ebp),%eax
082ecce4 +0x1f6:  mov    %eax,0x4(%esp)
082ecce8 +0x1fa:  lea    -0x4c(%ebp),%eax
082ecceb +0x1fd:  mov    %eax,(%esp)
082eccee +0x200:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
082eccf3 +0x205:  addl   $0x1,-0x20(%ebp)
082eccf7 +0x209:  cmpl   $0x3,-0x20(%ebp)
082eccfb +0x20d:  setle  %al
082eccfe +0x210:  test   %al,%al
082ecd00 +0x212:  jne    082ecc91 <+0x1a3>
082ecd02 +0x214:  jmp    082ecd5e <+0x270>
082ecd04 +0x216:  movl   $0x1,0x4(%esp)
082ecd0c +0x21e:  lea    -0x4c(%ebp),%eax
082ecd0f +0x221:  mov    %eax,(%esp)
082ecd12 +0x224:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ecd17 +0x229:  mov    0x10(%ebp),%eax
082ecd1a +0x22c:  mov    %eax,(%esp)
082ecd1d +0x22f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082ecd22 +0x234:  mov    %eax,-0x10(%ebp)
082ecd25 +0x237:  mov    -0x10(%ebp),%eax
082ecd28 +0x23a:  mov    %eax,(%esp)
082ecd2b +0x23d:  call   0807e3b0 <_init+0xca8>
082ecd30 +0x242:  mov    %eax,-0xc(%ebp)
082ecd33 +0x245:  mov    -0xc(%ebp),%eax
082ecd36 +0x248:  mov    %eax,0x4(%esp)
082ecd3a +0x24c:  lea    -0x4c(%ebp),%eax
082ecd3d +0x24f:  mov    %eax,(%esp)
082ecd40 +0x252:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ecd45 +0x257:  mov    -0xc(%ebp),%eax
082ecd48 +0x25a:  mov    %eax,0x8(%esp)
082ecd4c +0x25e:  mov    -0x10(%ebp),%eax
082ecd4f +0x261:  mov    %eax,0x4(%esp)
082ecd53 +0x265:  lea    -0x4c(%ebp),%eax
082ecd56 +0x268:  mov    %eax,(%esp)
082ecd59 +0x26b:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
082ecd5e +0x270:  movl   $0x1,0x4(%esp)
082ecd66 +0x278:  lea    -0x4c(%ebp),%eax
082ecd69 +0x27b:  mov    %eax,(%esp)
082ecd6c +0x27e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ecd71 +0x283:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082ecd76 +0x288:  lea    -0x4c(%ebp),%edx
082ecd79 +0x28b:  mov    %edx,0x8(%esp)
082ecd7d +0x28f:  movl   $0x7,0x4(%esp)
082ecd85 +0x297:  mov    %eax,(%esp)
082ecd88 +0x29a:  call   086c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>  ; GameWorld::send_to_vill(int, PacketGuard&)
082ecd8d +0x29f:  jmp    082ecdaa <+0x2bc>
082ecd8f +0x2a1:  mov    %edx,%ebx
082ecd91 +0x2a3:  mov    %eax,%esi
082ecd93 +0x2a5:  lea    -0x4c(%ebp),%eax
082ecd96 +0x2a8:  mov    %eax,(%esp)
082ecd99 +0x2ab:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ecd9e +0x2b0:  mov    %esi,%eax
082ecda0 +0x2b2:  mov    %ebx,%edx
082ecda2 +0x2b4:  mov    %eax,(%esp)
082ecda5 +0x2b7:  call   08ae3750 <_Unwind_Resume>
082ecdaa +0x2bc:  lea    -0x4c(%ebp),%eax
082ecdad +0x2bf:  mov    %eax,(%esp)
082ecdb0 +0x2c2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ecdb5 +0x2c7:  add    $0x60,%esp
082ecdb8 +0x2ca:  pop    %ebx
082ecdb9 +0x2cb:  pop    %esi
082ecdba +0x2cc:  pop    %ebp
082ecdbb +0x2cd:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendHoldVictory @ 0x82ecaee

/* pvp_assault::CAssaultPlace::_SendHoldVictory(CUser*, CUser*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_SendHoldVictory
          (CAssaultPlace *this,CUser *param_1,CUser *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  GameWorld *this_00;
  PacketGuard local_50 [12];
  CParty *local_44;
  int local_40;
  CUserCharacInfo *local_3c;
  char *local_38;
  size_t local_34;
  char *local_30;
  size_t local_2c;
  CParty *local_28;
  int local_24;
  CUserCharacInfo *local_20;
  char *local_1c;
  size_t local_18;
  char *local_14;
  size_t local_10;
  
  PacketGuard::PacketGuard(local_50);
                    /* try { // try from 082ecb17 to 082ecd8c has its CatchHandler @ 082ecd8f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x109);
  cVar1 = CUser::getPowerSide(param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(int)cVar1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,param_3 + 1);
  local_44 = (CParty *)CUser::GetParty(param_1);
  if (local_44 == (CParty *)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
    local_30 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    local_2c = strlen(local_30);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_2c);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_30,local_2c);
  }
  else {
    iVar2 = CParty::get_member_count(local_44);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,iVar2);
    for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
      local_3c = (CUserCharacInfo *)CParty::get_user(local_44,local_40);
      if (local_3c != (CUserCharacInfo *)0x0) {
        local_38 = (char *)CUserCharacInfo::getCurCharacName(local_3c);
        local_34 = strlen(local_38);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_34);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_38,local_34);
      }
    }
  }
  local_28 = (CParty *)CUser::GetParty(param_2);
  if (local_28 == (CParty *)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
    local_14 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    local_10 = strlen(local_14);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_14,local_10);
  }
  else {
    iVar2 = CParty::get_member_count(local_28);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,iVar2);
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      local_20 = (CUserCharacInfo *)CParty::get_user(local_28,local_24);
      if (local_20 != (CUserCharacInfo *)0x0) {
        local_1c = (char *)CUserCharacInfo::getCurCharacName(local_20);
        local_18 = strlen(local_1c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_18);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_1c,local_18);
      }
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_to_vill(this_00,7,local_50);
  PacketGuard::~PacketGuard(local_50);
  return;
}
```
