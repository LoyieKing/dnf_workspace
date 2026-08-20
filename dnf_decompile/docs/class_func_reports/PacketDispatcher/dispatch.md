# dispatch

`_ZN16PacketDispatcher8dispatchEiPci`

`PacketDispatcher::dispatch(int, char*, int)`

| 类 | 地址 |
|---|---|
| `PacketDispatcher` | `0x08594e52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08594e52  _ZN16PacketDispatcher8dispatchEiPci
#           PacketDispatcher::dispatch(int, char*, int)
# range [0x08594e52, 0x08594fdf]
08594e52 +0x000:  push   %ebp
08594e53 +0x001:  mov    %esp,%ebp
08594e55 +0x003:  push   %esi
08594e56 +0x004:  push   %ebx
08594e57 +0x005:  sub    $0x30,%esp
08594e5a +0x008:  mov    0x10(%ebp),%eax
08594e5d +0x00b:  movzbl (%eax),%eax
08594e60 +0x00e:  movsbl %al,%eax
08594e63 +0x011:  mov    %eax,-0x14(%ebp)
08594e66 +0x014:  mov    0x10(%ebp),%eax
08594e69 +0x017:  add    $0x1,%eax
08594e6c +0x01a:  movzwl (%eax),%eax
08594e6f +0x01d:  mov    %ax,-0xe(%ebp)
08594e73 +0x021:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08594e78 +0x026:  movl   $0x5,0x8(%esp)
08594e80 +0x02e:  mov    0xc(%ebp),%edx
08594e83 +0x031:  mov    %edx,0x4(%esp)
08594e87 +0x035:  mov    %eax,(%esp)
08594e8a +0x038:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08594e8f +0x03d:  mov    %eax,-0xc(%ebp)
08594e92 +0x040:  cmpl   $0x0,-0xc(%ebp)
08594e96 +0x044:  jne    08594ea2 <+0x50>
08594e98 +0x046:  mov    $0x0,%eax
08594e9d +0x04b:  jmp    08594fd9 <+0x187>
08594ea2 +0x050:  mov    -0xc(%ebp),%eax
08594ea5 +0x053:  mov    %eax,(%esp)
08594ea8 +0x056:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08594ead +0x05b:  mov    &_ZN16PacketDispatcher19pUserPacketCounter_E,%edx
08594eb3 +0x061:  mov    %eax,0x4(%esp)
08594eb7 +0x065:  mov    %edx,(%esp)
08594eba +0x068:  call   0856ff24 <_ZN15message_counter18CUserPacketCounter14IncreasePacketEj>  ; message_counter::CUserPacketCounter::IncreasePacket(unsigned int)
08594ebf +0x06d:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
08594ec4 +0x072:  mov    (%eax),%eax
08594ec6 +0x074:  add    $0x3c,%eax
08594ec9 +0x077:  mov    (%eax),%esi
08594ecb +0x079:  movswl -0xe(%ebp),%ebx
08594ecf +0x07d:  mov    -0xc(%ebp),%eax
08594ed2 +0x080:  mov    %eax,(%esp)
08594ed5 +0x083:  call   0822fce4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x538e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x538e
08594eda +0x088:  mov    %eax,%edx
08594edc +0x08a:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
08594ee1 +0x08f:  mov    %ebx,0x8(%esp)
08594ee5 +0x093:  mov    %edx,0x4(%esp)
08594ee9 +0x097:  mov    %eax,(%esp)
08594eec +0x09a:  call   *%esi
08594eee +0x09c:  test   %eax,%eax
08594ef0 +0x09e:  setne  %al
08594ef3 +0x0a1:  test   %al,%al
08594ef5 +0x0a3:  je     08594f3c <+0xea>
08594ef7 +0x0a5:  mov    -0xc(%ebp),%eax
08594efa +0x0a8:  mov    %eax,(%esp)
08594efd +0x0ab:  call   0822fce4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x538e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x538e
08594f02 +0x0b0:  movzwl -0xe(%ebp),%edx
08594f06 +0x0b4:  movzwl %dx,%edx
08594f09 +0x0b7:  mov    -0xc(%ebp),%ecx
08594f0c +0x0ba:  add    $0x79700,%ecx
08594f12 +0x0c0:  movl   $0x0,0x10(%esp)
08594f1a +0x0c8:  mov    %eax,0xc(%esp)
08594f1e +0x0cc:  mov    %edx,0x8(%esp)
08594f22 +0x0d0:  movl   $0x0,0x4(%esp)
08594f2a +0x0d8:  mov    %ecx,(%esp)
08594f2d +0x0db:  call   08686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>  ; cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int)
08594f32 +0x0e0:  mov    $0x0,%eax
08594f37 +0x0e5:  jmp    08594fd9 <+0x187>
08594f3c +0x0ea:  movzwl -0xe(%ebp),%eax
08594f40 +0x0ee:  movzwl %ax,%eax
08594f43 +0x0f1:  movl   $0x0,0x1c(%esp)
08594f4b +0x0f9:  movl   $0x0,0x18(%esp)
08594f53 +0x101:  mov    0x14(%ebp),%edx
08594f56 +0x104:  mov    %edx,0x14(%esp)
08594f5a +0x108:  mov    0x10(%ebp),%edx
08594f5d +0x10b:  mov    %edx,0x10(%esp)
08594f61 +0x10f:  mov    %eax,0xc(%esp)
08594f65 +0x113:  mov    -0x14(%ebp),%eax
08594f68 +0x116:  mov    %eax,0x8(%esp)
08594f6c +0x11a:  mov    -0xc(%ebp),%eax
08594f6f +0x11d:  mov    %eax,0x4(%esp)
08594f73 +0x121:  mov    0x8(%ebp),%eax
08594f76 +0x124:  mov    %eax,(%esp)
08594f79 +0x127:  call   08594922 <_ZN16PacketDispatcher10doDispatchEP5CUser16ENUM_PACKETCLASStPciS2_t>  ; PacketDispatcher::doDispatch(CUser*, ENUM_PACKETCLASS, unsigned short, char*, int, ENUM_PACKETCLASS, unsigned short)
08594f7e +0x12c:  xor    $0x1,%eax
08594f81 +0x12f:  test   %al,%al
08594f83 +0x131:  je     08594f8c <+0x13a>
08594f85 +0x133:  mov    $0x0,%eax
08594f8a +0x138:  jmp    08594fd9 <+0x187>
08594f8c +0x13a:  mov    -0xc(%ebp),%eax
08594f8f +0x13d:  mov    %eax,(%esp)
08594f92 +0x140:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08594f97 +0x145:  test   %eax,%eax
08594f99 +0x147:  setne  %al
08594f9c +0x14a:  test   %al,%al
08594f9e +0x14c:  je     08594fd4 <+0x182>
08594fa0 +0x14e:  mov    -0xc(%ebp),%eax
08594fa3 +0x151:  mov    %eax,(%esp)
08594fa6 +0x154:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
08594fab +0x159:  test   %al,%al
08594fad +0x15b:  je     08594fd4 <+0x182>
08594faf +0x15d:  mov    -0xc(%ebp),%eax
08594fb2 +0x160:  mov    %eax,(%esp)
08594fb5 +0x163:  call   0859503c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1c
08594fba +0x168:  test   %al,%al
08594fbc +0x16a:  je     08594fd4 <+0x182>
08594fbe +0x16c:  mov    -0xc(%ebp),%eax
08594fc1 +0x16f:  mov    %eax,(%esp)
08594fc4 +0x172:  call   08646406 <_ZN15CUserCharacInfo13LiveCurCharacEv>  ; CUserCharacInfo::LiveCurCharac()
08594fc9 +0x177:  mov    -0xc(%ebp),%eax
08594fcc +0x17a:  mov    %eax,(%esp)
08594fcf +0x17d:  call   082e83c4 <_ZN11pvp_assault13CAssaultPlace13SendUserStateEP5CUser>  ; pvp_assault::CAssaultPlace::SendUserState(CUser*)
08594fd4 +0x182:  mov    $0x1,%eax
08594fd9 +0x187:  add    $0x30,%esp
08594fdc +0x18a:  pop    %ebx
08594fdd +0x18b:  pop    %esi
08594fde +0x18c:  pop    %ebp
08594fdf +0x18d:  ret
```

## 反编译 C

```c
// PacketDispatcher::dispatch @ 0x8594e52

/* PacketDispatcher::dispatch(int, char*, int) */

undefined4 __thiscall
PacketDispatcher::dispatch(PacketDispatcher *this,int param_1,char *param_2,int param_3)

{
  short sVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  CUser *this_00;
  undefined4 uVar5;
  
  cVar3 = *param_2;
  sVar1 = *(short *)(param_2 + 1);
  iVar4 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar4,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar5 = 0;
  }
  else {
    CUser::get_acc_id(this_00);
    message_counter::CUserPacketCounter::IncreasePacket(pUserPacketCounter_);
    pcVar2 = *(code **)(*GlobalData::s_antibotChecker_ + 0x3c);
    uVar5 = CUser::getAntibotKey(this_00);
    iVar4 = (*pcVar2)(GlobalData::s_antibotChecker_,uVar5,(int)sVar1);
    if (iVar4 == 0) {
      cVar3 = doDispatch(this,this_00,(int)cVar3,sVar1,param_2,param_3,0,0);
      if (cVar3 == '\x01') {
        iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this_00);
        if (iVar4 != 0) {
          cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)this_00);
          if (cVar3 != '\0') {
            cVar3 = CUserCharacInfo::IsCurCharacLeaveTimeout((CUserCharacInfo *)this_00);
            if (cVar3 != '\0') {
              CUserCharacInfo::LiveCurCharac((CUserCharacInfo *)this_00);
              pvp_assault::CAssaultPlace::SendUserState(this_00);
            }
          }
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = CUser::getAntibotKey(this_00);
      cUserHistoryLog::AbnormalUser((cUserHistoryLog *)(this_00 + 0x79700),0,sVar1,uVar5,0);
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
