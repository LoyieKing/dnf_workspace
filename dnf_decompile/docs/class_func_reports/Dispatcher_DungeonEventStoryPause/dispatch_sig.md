# dispatch_sig

`_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_DungeonEventStoryPause::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DungeonEventStoryPause` | `0x08216dcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08216dcc  _ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_DungeonEventStoryPause::dispatch_sig(CUser*, PacketBuf&)
# range [0x08216dcc, 0x08217019]
08216dcc +0x000:  push   %ebp
08216dcd +0x001:  mov    %esp,%ebp
08216dcf +0x003:  push   %esi
08216dd0 +0x004:  push   %ebx
08216dd1 +0x005:  sub    $0x30,%esp
08216dd4 +0x008:  mov    0xc(%ebp),%eax
08216dd7 +0x00b:  mov    %eax,(%esp)
08216dda +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08216ddf +0x013:  cmp    $0x5,%eax
08216de2 +0x016:  setne  %al
08216de5 +0x019:  test   %al,%al
08216de7 +0x01b:  je     08216df3 <+0x27>
08216de9 +0x01d:  mov    $0x0,%eax
08216dee +0x022:  jmp    08217013 <+0x247>
08216df3 +0x027:  lea    -0x19(%ebp),%eax
08216df6 +0x02a:  mov    %eax,0x4(%esp)
08216dfa +0x02e:  mov    0x10(%ebp),%eax
08216dfd +0x031:  mov    %eax,(%esp)
08216e00 +0x034:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08216e05 +0x039:  xor    $0x1,%eax
08216e08 +0x03c:  test   %al,%al
08216e0a +0x03e:  je     08216e35 <+0x69>
08216e0c +0x040:  movl   $0x0,0xc(%esp)
08216e14 +0x048:  movl   $0x0,0x8(%esp)
08216e1c +0x050:  movl   $&_ZZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216e24 +0x058:  movl   $0xc886,(%esp)
08216e2b +0x05f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216e30 +0x064:  jmp    08217013 <+0x247>
08216e35 +0x069:  lea    -0x1a(%ebp),%eax
08216e38 +0x06c:  mov    %eax,0x4(%esp)
08216e3c +0x070:  mov    0x10(%ebp),%eax
08216e3f +0x073:  mov    %eax,(%esp)
08216e42 +0x076:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08216e47 +0x07b:  xor    $0x1,%eax
08216e4a +0x07e:  test   %al,%al
08216e4c +0x080:  je     08216e77 <+0xab>
08216e4e +0x082:  movl   $0x0,0xc(%esp)
08216e56 +0x08a:  movl   $0x0,0x8(%esp)
08216e5e +0x092:  movl   $&_ZZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08216e66 +0x09a:  movl   $0xc88b,(%esp)
08216e6d +0x0a1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08216e72 +0x0a6:  jmp    08217013 <+0x247>
08216e77 +0x0ab:  mov    0xc(%ebp),%eax
08216e7a +0x0ae:  mov    %eax,(%esp)
08216e7d +0x0b1:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08216e82 +0x0b6:  test   %eax,%eax
08216e84 +0x0b8:  setne  %al
08216e87 +0x0bb:  test   %al,%al
08216e89 +0x0bd:  je     0821700e <+0x242>
08216e8f +0x0c3:  mov    0xc(%ebp),%eax
08216e92 +0x0c6:  mov    %eax,(%esp)
08216e95 +0x0c9:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08216e9a +0x0ce:  mov    %eax,-0x18(%ebp)
08216e9d +0x0d1:  mov    0xc(%ebp),%eax
08216ea0 +0x0d4:  mov    %eax,(%esp)
08216ea3 +0x0d7:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08216ea8 +0x0dc:  mov    %eax,-0x14(%ebp)
08216eab +0x0df:  cmpl   $0x0,-0x14(%ebp)
08216eaf +0x0e3:  jne    08216ebb <+0xef>
08216eb1 +0x0e5:  mov    $0x0,%eax
08216eb6 +0x0ea:  jmp    08217013 <+0x247>
08216ebb +0x0ef:  cmpl   $0x0,-0x18(%ebp)
08216ebf +0x0f3:  jne    08216ecb <+0xff>
08216ec1 +0x0f5:  mov    $0x0,%eax
08216ec6 +0x0fa:  jmp    08217013 <+0x247>
08216ecb +0x0ff:  movb   $0x0,-0xd(%ebp)
08216ecf +0x103:  movzbl -0x1a(%ebp),%eax
08216ed3 +0x107:  movsbl %al,%eax
08216ed6 +0x10a:  test   %eax,%eax
08216ed8 +0x10c:  je     08216ee1 <+0x115>
08216eda +0x10e:  cmp    $0x1,%eax
08216edd +0x111:  je     08216f3e <+0x172>
08216edf +0x113:  jmp    08216f48 <+0x17c>
08216ee1 +0x115:  mov    -0x18(%ebp),%eax
08216ee4 +0x118:  add    $0xb24,%eax
08216ee9 +0x11d:  mov    %eax,(%esp)
08216eec +0x120:  call   0822d052 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26fc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26fc
08216ef1 +0x125:  mov    %eax,-0xc(%ebp)
08216ef4 +0x128:  cmpl   $0x0,-0xc(%ebp)
08216ef8 +0x12c:  je     08216f44 <+0x178>
08216efa +0x12e:  mov    -0xc(%ebp),%eax
08216efd +0x131:  mov    0x50(%eax),%esi
08216f00 +0x134:  mov    -0x18(%ebp),%eax
08216f03 +0x137:  add    $0xb24,%eax
08216f08 +0x13c:  mov    %eax,(%esp)
08216f0b +0x13f:  call   0822d05e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2708>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2708
08216f10 +0x144:  mov    %eax,%ebx
08216f12 +0x146:  mov    0xc(%ebp),%eax
08216f15 +0x149:  mov    %eax,(%esp)
08216f18 +0x14c:  call   0867cb82 <_ZN5CUser22getPlayingDungeonIndexEv>  ; CUser::getPlayingDungeonIndex()
08216f1d +0x151:  mov    %esi,0xc(%esp)
08216f21 +0x155:  mov    %ebx,0x8(%esp)
08216f25 +0x159:  mov    %eax,0x4(%esp)
08216f29 +0x15d:  mov    -0x14(%ebp),%eax
08216f2c +0x160:  mov    %eax,(%esp)
08216f2f +0x163:  call   086ad054 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii>  ; UserQuest::CheckDungeonEventStoryPause(int, int, int) const
08216f34 +0x168:  test   %al,%al
08216f36 +0x16a:  je     08216f47 <+0x17b>
08216f38 +0x16c:  movb   $0x1,-0xd(%ebp)
08216f3c +0x170:  jmp    08216f48 <+0x17c>
08216f3e +0x172:  movb   $0x1,-0xd(%ebp)
08216f42 +0x176:  jmp    08216f48 <+0x17c>
08216f44 +0x178:  nop
08216f45 +0x179:  jmp    08216f48 <+0x17c>
08216f47 +0x17b:  nop
08216f48 +0x17c:  cmpb   $0x0,-0xd(%ebp)
08216f4c +0x180:  je     0821700e <+0x242>
08216f52 +0x186:  lea    -0x28(%ebp),%eax
08216f55 +0x189:  mov    %eax,(%esp)
08216f58 +0x18c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08216f5d +0x191:  movl   $0xaa,0x8(%esp)
08216f65 +0x199:  movl   $0x0,0x4(%esp)
08216f6d +0x1a1:  lea    -0x28(%ebp),%eax
08216f70 +0x1a4:  mov    %eax,(%esp)
08216f73 +0x1a7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08216f78 +0x1ac:  mov    0xc(%ebp),%eax
08216f7b +0x1af:  mov    %eax,(%esp)
08216f7e +0x1b2:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08216f83 +0x1b7:  movzwl %ax,%eax
08216f86 +0x1ba:  mov    %eax,0x4(%esp)
08216f8a +0x1be:  lea    -0x28(%ebp),%eax
08216f8d +0x1c1:  mov    %eax,(%esp)
08216f90 +0x1c4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08216f95 +0x1c9:  movzbl -0x19(%ebp),%eax
08216f99 +0x1cd:  movsbl %al,%eax
08216f9c +0x1d0:  mov    %eax,0x4(%esp)
08216fa0 +0x1d4:  lea    -0x28(%ebp),%eax
08216fa3 +0x1d7:  mov    %eax,(%esp)
08216fa6 +0x1da:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08216fab +0x1df:  movzbl -0x1a(%ebp),%eax
08216faf +0x1e3:  movsbl %al,%eax
08216fb2 +0x1e6:  mov    %eax,0x4(%esp)
08216fb6 +0x1ea:  lea    -0x28(%ebp),%eax
08216fb9 +0x1ed:  mov    %eax,(%esp)
08216fbc +0x1f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08216fc1 +0x1f5:  movl   $0x1,0x4(%esp)
08216fc9 +0x1fd:  lea    -0x28(%ebp),%eax
08216fcc +0x200:  mov    %eax,(%esp)
08216fcf +0x203:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08216fd4 +0x208:  lea    -0x28(%ebp),%eax
08216fd7 +0x20b:  mov    %eax,0x4(%esp)
08216fdb +0x20f:  mov    -0x18(%ebp),%eax
08216fde +0x212:  mov    %eax,(%esp)
08216fe1 +0x215:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08216fe6 +0x21a:  jmp    08217003 <+0x237>
08216fe8 +0x21c:  mov    %edx,%ebx
08216fea +0x21e:  mov    %eax,%esi
08216fec +0x220:  lea    -0x28(%ebp),%eax
08216fef +0x223:  mov    %eax,(%esp)
08216ff2 +0x226:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08216ff7 +0x22b:  mov    %esi,%eax
08216ff9 +0x22d:  mov    %ebx,%edx
08216ffb +0x22f:  mov    %eax,(%esp)
08216ffe +0x232:  call   08ae3750 <_Unwind_Resume>
08217003 +0x237:  lea    -0x28(%ebp),%eax
08217006 +0x23a:  mov    %eax,(%esp)
08217009 +0x23d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821700e +0x242:  mov    $0x0,%eax
08217013 +0x247:  add    $0x30,%esp
08217016 +0x24a:  pop    %ebx
08217017 +0x24b:  pop    %esi
08217018 +0x24c:  pop    %ebp
08217019 +0x24d:  ret
```

## 反编译 C

```c
// Dispatcher_DungeonEventStoryPause::dispatch_sig @ 0x8216dcc

/* Dispatcher_DungeonEventStoryPause::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DungeonEventStoryPause::dispatch_sig
          (Dispatcher_DungeonEventStoryPause *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  PacketGuard local_2c [14];
  char local_1e;
  char local_1d;
  CParty *local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 5) {
    cVar1 = PacketBuf::get_byte(param_2,&local_1d);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_2,&local_1e);
      if (cVar1 == '\x01') {
        iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
        if (iVar2 != 0) {
          local_1c = (CParty *)CUser::GetParty(param_1);
          local_18 = CUser::getCurCharacQuestR(param_1);
          if (local_18 == 0) {
            return 0;
          }
          if (local_1c == (CParty *)0x0) {
            return 0;
          }
          local_11 = '\0';
          if (local_1e == '\0') {
            local_10 = CBattle_Field::getMaze((CBattle_Field *)(local_1c + 0xb24));
            if (local_10 != 0) {
              iVar2 = CBattle_Field::GetCurrentMapIndex((CBattle_Field *)(local_1c + 0xb24));
              iVar4 = CUser::getPlayingDungeonIndex(param_1);
              cVar1 = UserQuest::CheckDungeonEventStoryPause(local_18,iVar4,iVar2);
              if (cVar1 != '\0') {
                local_11 = '\x01';
              }
            }
          }
          else if (local_1e == '\x01') {
            local_11 = '\x01';
          }
          if (local_11 != '\0') {
            PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 08216f73 to 08216fe5 has its CatchHandler @ 08216fe8 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xaa);
            uVar5 = CUser::get_unique_id(param_1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar5 & 0xffff);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)local_1d);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)local_1e);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
            CParty::send_to_party(local_1c,local_2c);
            PacketGuard::~PacketGuard(local_2c);
          }
        }
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xc88b,
                         "virtual int Dispatcher_DungeonEventStoryPause::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xc886,
                       "virtual int Dispatcher_DungeonEventStoryPause::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
