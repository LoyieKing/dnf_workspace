# dispatch_sig

`_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Change_PartyMemberPosition::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Change_PartyMemberPosition` | `0x0822759c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822759c  _ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Change_PartyMemberPosition::dispatch_sig(CUser*, PacketBuf&)
# range [0x0822759c, 0x08227861]
0822759c +0x000:  push   %ebp
0822759d +0x001:  mov    %esp,%ebp
0822759f +0x003:  push   %esi
082275a0 +0x004:  push   %ebx
082275a1 +0x005:  sub    $0x30,%esp
082275a4 +0x008:  mov    0xc(%ebp),%eax
082275a7 +0x00b:  mov    %eax,(%esp)
082275aa +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082275af +0x013:  cmp    $0x3,%eax
082275b2 +0x016:  jne    082275c3 <+0x27>
082275b4 +0x018:  mov    0xc(%ebp),%eax
082275b7 +0x01b:  mov    %eax,(%esp)
082275ba +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082275bf +0x023:  test   %eax,%eax
082275c1 +0x025:  jne    082275ca <+0x2e>
082275c3 +0x027:  mov    $0x1,%eax
082275c8 +0x02c:  jmp    082275cf <+0x33>
082275ca +0x02e:  mov    $0x0,%eax
082275cf +0x033:  test   %al,%al
082275d1 +0x035:  je     082275dd <+0x41>
082275d3 +0x037:  mov    $0x0,%ebx
082275d8 +0x03c:  jmp    08227858 <+0x2bc>
082275dd +0x041:  mov    0xc(%ebp),%eax
082275e0 +0x044:  mov    %eax,(%esp)
082275e3 +0x047:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082275e8 +0x04c:  mov    %eax,-0xc(%ebp)
082275eb +0x04f:  cmpl   $0x0,-0xc(%ebp)
082275ef +0x053:  jne    082275fb <+0x5f>
082275f1 +0x055:  mov    $0x0,%ebx
082275f6 +0x05a:  jmp    08227858 <+0x2bc>
082275fb +0x05f:  mov    -0xc(%ebp),%eax
082275fe +0x062:  mov    %eax,(%esp)
08227601 +0x065:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
08227606 +0x06a:  cmp    0xc(%ebp),%eax
08227609 +0x06d:  setne  %al
0822760c +0x070:  test   %al,%al
0822760e +0x072:  je     0822761a <+0x7e>
08227610 +0x074:  mov    $0x0,%ebx
08227615 +0x079:  jmp    08227858 <+0x2bc>
0822761a +0x07e:  movb   $0x4,-0xd(%ebp)
0822761e +0x082:  movb   $0x0,-0xe(%ebp)
08227622 +0x086:  lea    -0xd(%ebp),%eax
08227625 +0x089:  mov    %eax,0x4(%esp)
08227629 +0x08d:  mov    0x10(%ebp),%eax
0822762c +0x090:  mov    %eax,(%esp)
0822762f +0x093:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08227634 +0x098:  xor    $0x1,%eax
08227637 +0x09b:  test   %al,%al
08227639 +0x09d:  je     08227666 <+0xca>
0822763b +0x09f:  movl   $0x0,0xc(%esp)
08227643 +0x0a7:  movl   $0x0,0x8(%esp)
0822764b +0x0af:  movl   $&_ZZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08227653 +0x0b7:  movl   $0xe384,(%esp)
0822765a +0x0be:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822765f +0x0c3:  mov    %eax,%ebx
08227661 +0x0c5:  jmp    08227858 <+0x2bc>
08227666 +0x0ca:  lea    -0xe(%ebp),%eax
08227669 +0x0cd:  mov    %eax,0x4(%esp)
0822766d +0x0d1:  mov    0x10(%ebp),%eax
08227670 +0x0d4:  mov    %eax,(%esp)
08227673 +0x0d7:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08227678 +0x0dc:  xor    $0x1,%eax
0822767b +0x0df:  test   %al,%al
0822767d +0x0e1:  je     082276aa <+0x10e>
0822767f +0x0e3:  movl   $0x0,0xc(%esp)
08227687 +0x0eb:  movl   $0x0,0x8(%esp)
0822768f +0x0f3:  movl   $&_ZZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08227697 +0x0fb:  movl   $0xe385,(%esp)
0822769e +0x102:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082276a3 +0x107:  mov    %eax,%ebx
082276a5 +0x109:  jmp    08227858 <+0x2bc>
082276aa +0x10e:  lea    -0x1c(%ebp),%eax
082276ad +0x111:  mov    %eax,(%esp)
082276b0 +0x114:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082276b5 +0x119:  movzbl -0xd(%ebp),%eax
082276b9 +0x11d:  test   %al,%al
082276bb +0x11f:  js     082277ac <+0x210>
082276c1 +0x125:  movzbl -0xd(%ebp),%eax
082276c5 +0x129:  cmp    $0x3,%al
082276c7 +0x12b:  jg     082277ac <+0x210>
082276cd +0x131:  movzbl -0xe(%ebp),%eax
082276d1 +0x135:  cmp    $0x3,%al
082276d3 +0x137:  je     082276e1 <+0x145>
082276d5 +0x139:  movzbl -0xe(%ebp),%eax
082276d9 +0x13d:  cmp    $0x1,%al
082276db +0x13f:  jne    082277ac <+0x210>
082276e1 +0x145:  movzbl -0xd(%ebp),%eax
082276e5 +0x149:  mov    %eax,%edx
082276e7 +0x14b:  movzbl -0xe(%ebp),%eax
082276eb +0x14f:  lea    (%edx,%eax,1),%eax
082276ee +0x152:  and    $0x3,%eax
082276f1 +0x155:  mov    %al,-0xe(%ebp)
082276f4 +0x158:  movzbl -0xe(%ebp),%eax
082276f8 +0x15c:  movsbl %al,%edx
082276fb +0x15f:  movzbl -0xd(%ebp),%eax
082276ff +0x163:  movsbl %al,%eax
08227702 +0x166:  mov    %edx,0x8(%esp)
08227706 +0x16a:  mov    %eax,0x4(%esp)
0822770a +0x16e:  mov    -0xc(%ebp),%eax
0822770d +0x171:  mov    %eax,(%esp)
08227710 +0x174:  call   085ba680 <_ZN6CParty13switchPostionEcc>  ; CParty::switchPostion(char, char)
08227715 +0x179:  mov    -0xc(%ebp),%eax
08227718 +0x17c:  mov    %eax,(%esp)
0822771b +0x17f:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
08227720 +0x184:  mov    -0xc(%ebp),%eax
08227723 +0x187:  mov    %eax,(%esp)
08227726 +0x18a:  call   0859cea2 <_ZN6CParty17send_party_ipinfoEv>  ; CParty::send_party_ipinfo()
0822772b +0x18f:  movl   $0x150,0x8(%esp)
08227733 +0x197:  movl   $0x1,0x4(%esp)
0822773b +0x19f:  lea    -0x1c(%ebp),%eax
0822773e +0x1a2:  mov    %eax,(%esp)
08227741 +0x1a5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08227746 +0x1aa:  movl   $0x1,0x4(%esp)
0822774e +0x1b2:  lea    -0x1c(%ebp),%eax
08227751 +0x1b5:  mov    %eax,(%esp)
08227754 +0x1b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08227759 +0x1bd:  movzbl -0xd(%ebp),%eax
0822775d +0x1c1:  movsbl %al,%eax
08227760 +0x1c4:  mov    %eax,0x4(%esp)
08227764 +0x1c8:  lea    -0x1c(%ebp),%eax
08227767 +0x1cb:  mov    %eax,(%esp)
0822776a +0x1ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0822776f +0x1d3:  movzbl -0xe(%ebp),%eax
08227773 +0x1d7:  movsbl %al,%eax
08227776 +0x1da:  mov    %eax,0x4(%esp)
0822777a +0x1de:  lea    -0x1c(%ebp),%eax
0822777d +0x1e1:  mov    %eax,(%esp)
08227780 +0x1e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08227785 +0x1e9:  movl   $0x1,0x4(%esp)
0822778d +0x1f1:  lea    -0x1c(%ebp),%eax
08227790 +0x1f4:  mov    %eax,(%esp)
08227793 +0x1f7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08227798 +0x1fc:  lea    -0x1c(%ebp),%eax
0822779b +0x1ff:  mov    %eax,0x4(%esp)
0822779f +0x203:  mov    0xc(%ebp),%eax
082277a2 +0x206:  mov    %eax,(%esp)
082277a5 +0x209:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082277aa +0x20e:  jmp    0822782b <+0x28f>
082277ac +0x210:  movl   $0x150,0x8(%esp)
082277b4 +0x218:  movl   $0x1,0x4(%esp)
082277bc +0x220:  lea    -0x1c(%ebp),%eax
082277bf +0x223:  mov    %eax,(%esp)
082277c2 +0x226:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082277c7 +0x22b:  movl   $0x0,0x4(%esp)
082277cf +0x233:  lea    -0x1c(%ebp),%eax
082277d2 +0x236:  mov    %eax,(%esp)
082277d5 +0x239:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082277da +0x23e:  movzbl -0xd(%ebp),%eax
082277de +0x242:  movsbl %al,%eax
082277e1 +0x245:  mov    %eax,0x4(%esp)
082277e5 +0x249:  lea    -0x1c(%ebp),%eax
082277e8 +0x24c:  mov    %eax,(%esp)
082277eb +0x24f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082277f0 +0x254:  movzbl -0xe(%ebp),%eax
082277f4 +0x258:  movsbl %al,%eax
082277f7 +0x25b:  mov    %eax,0x4(%esp)
082277fb +0x25f:  lea    -0x1c(%ebp),%eax
082277fe +0x262:  mov    %eax,(%esp)
08227801 +0x265:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08227806 +0x26a:  movl   $0x1,0x4(%esp)
0822780e +0x272:  lea    -0x1c(%ebp),%eax
08227811 +0x275:  mov    %eax,(%esp)
08227814 +0x278:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08227819 +0x27d:  lea    -0x1c(%ebp),%eax
0822781c +0x280:  mov    %eax,0x4(%esp)
08227820 +0x284:  mov    0xc(%ebp),%eax
08227823 +0x287:  mov    %eax,(%esp)
08227826 +0x28a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0822782b +0x28f:  mov    $0x0,%ebx
08227830 +0x294:  lea    -0x1c(%ebp),%eax
08227833 +0x297:  mov    %eax,(%esp)
08227836 +0x29a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0822783b +0x29f:  jmp    08227858 <+0x2bc>
0822783d +0x2a1:  mov    %edx,%ebx
0822783f +0x2a3:  mov    %eax,%esi
08227841 +0x2a5:  lea    -0x1c(%ebp),%eax
08227844 +0x2a8:  mov    %eax,(%esp)
08227847 +0x2ab:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0822784c +0x2b0:  mov    %esi,%eax
0822784e +0x2b2:  mov    %ebx,%edx
08227850 +0x2b4:  mov    %eax,(%esp)
08227853 +0x2b7:  call   08ae3750 <_Unwind_Resume>
08227858 +0x2bc:  mov    %ebx,%eax
0822785a +0x2be:  add    $0x30,%esp
0822785d +0x2c1:  pop    %ebx
0822785e +0x2c2:  pop    %esi
0822785f +0x2c3:  pop    %ebp
08227860 +0x2c4:  ret
08227861 +0x2c5:  nop
```

## 反编译 C

```c
// Dispatcher_Change_PartyMemberPosition::dispatch_sig @ 0x822759c

/* Dispatcher_Change_PartyMemberPosition::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Change_PartyMemberPosition::dispatch_sig
          (Dispatcher_Change_PartyMemberPosition *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUser *pCVar4;
  undefined4 uVar5;
  PacketGuard local_20 [14];
  byte local_12;
  char local_11;
  CParty *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_082275cf;
    }
  }
  bVar1 = true;
LAB_082275cf:
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    local_10 = (CParty *)CUser::GetParty(param_1);
    if (local_10 == (CParty *)0x0) {
      uVar5 = 0;
    }
    else {
      pCVar4 = (CUser *)CParty::getManager(local_10);
      if (pCVar4 == param_1) {
        local_11 = '\x04';
        local_12 = 0;
        cVar2 = PacketBuf::get_byte(param_2,&local_11);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_byte(param_2,(char *)&local_12);
          if (cVar2 == '\x01') {
            PacketGuard::PacketGuard(local_20);
            if (((local_11 < '\0') || ('\x03' < local_11)) || ((local_12 != 3 && (local_12 != 1))))
            {
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x150);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)local_11);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_12);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
              CUser::Send(param_1,local_20);
            }
            else {
              local_12 = local_11 + local_12 & 3;
                    /* try { // try from 08227710 to 0822782a has its CatchHandler @ 0822783d */
              CParty::switchPostion(local_10,local_11,local_12);
              CParty::send_party_realtime_info(local_10);
              CParty::send_party_ipinfo(local_10);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x150);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)local_11);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_12);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
              CUser::Send(param_1,local_20);
            }
            uVar5 = 0;
            PacketGuard::~PacketGuard(local_20);
          }
          else {
            uVar5 = LineFunc(0xe385,
                             "virtual int Dispatcher_Change_PartyMemberPosition::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar5 = LineFunc(0xe384,
                           "virtual int Dispatcher_Change_PartyMemberPosition::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}
```
