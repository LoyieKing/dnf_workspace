# execute

`_ZN11game_master14CSecretShopNpc7executeEv`

`game_master::CSecretShopNpc::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CSecretShopNpc` | `0x084aba12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aba12  _ZN11game_master14CSecretShopNpc7executeEv
#           game_master::CSecretShopNpc::execute()
# range [0x084aba12, 0x084abcaf]
084aba12 +0x000:  push   %ebp
084aba13 +0x001:  mov    %esp,%ebp
084aba15 +0x003:  push   %edi
084aba16 +0x004:  push   %esi
084aba17 +0x005:  push   %ebx
084aba18 +0x006:  sub    $0x16c,%esp
084aba1e +0x00c:  mov    0x8(%ebp),%eax
084aba21 +0x00f:  mov    %eax,(%esp)
084aba24 +0x012:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aba29 +0x017:  mov    %eax,-0x28(%ebp)
084aba2c +0x01a:  mov    -0x28(%ebp),%eax
084aba2f +0x01d:  mov    %eax,(%esp)
084aba32 +0x020:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084aba37 +0x025:  cmp    $0x5,%eax
084aba3a +0x028:  setne  %al
084aba3d +0x02b:  test   %al,%al
084aba3f +0x02d:  jne    084abc9a <+0x288>
084aba45 +0x033:  mov    -0x28(%ebp),%eax
084aba48 +0x036:  mov    %eax,(%esp)
084aba4b +0x039:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084aba50 +0x03e:  mov    %eax,-0x24(%ebp)
084aba53 +0x041:  mov    -0x28(%ebp),%eax
084aba56 +0x044:  mov    %eax,(%esp)
084aba59 +0x047:  call   086885a6 <_ZN5CUser17GetSecretShopDataEv>  ; CUser::GetSecretShopData()
084aba5e +0x04c:  mov    %eax,-0x20(%ebp)
084aba61 +0x04f:  cmpl   $0x0,-0x20(%ebp)
084aba65 +0x053:  je     084abc9d <+0x28b>
084aba6b +0x059:  mov    0x8(%ebp),%eax
084aba6e +0x05c:  mov    0x8(%eax),%eax
084aba71 +0x05f:  cmp    $0x3e8,%eax
084aba76 +0x064:  je     084abaa3 <+0x91>
084aba78 +0x066:  mov    0x8(%ebp),%eax
084aba7b +0x069:  mov    0x8(%eax),%eax
084aba7e +0x06c:  cmp    $0x3ea,%eax
084aba83 +0x071:  je     084abaa3 <+0x91>
084aba85 +0x073:  mov    0x8(%ebp),%eax
084aba88 +0x076:  mov    0x8(%eax),%eax
084aba8b +0x079:  cmp    $0x3eb,%eax
084aba90 +0x07e:  je     084abaa3 <+0x91>
084aba92 +0x080:  mov    0x8(%ebp),%eax
084aba95 +0x083:  mov    0x8(%eax),%eax
084aba98 +0x086:  cmp    $0x3ec,%eax
084aba9d +0x08b:  jne    084abca0 <+0x28e>
084abaa3 +0x091:  cmpl   $0x0,-0x24(%ebp)
084abaa7 +0x095:  je     084abacd <+0xbb>
084abaa9 +0x097:  mov    -0x24(%ebp),%eax
084abaac +0x09a:  mov    0xcac(%eax),%eax
084abab2 +0x0a0:  mov    %eax,-0x1c(%ebp)
084abab5 +0x0a3:  cmpl   $0x0,-0x1c(%ebp)
084abab9 +0x0a7:  je     084abacd <+0xbb>
084ababb +0x0a9:  mov    -0x1c(%ebp),%eax
084ababe +0x0ac:  movzbl 0x89f(%eax),%eax
084abac5 +0x0b3:  test   %al,%al
084abac7 +0x0b5:  jg     084abca3 <+0x291>
084abacd +0x0bb:  mov    0x8(%ebp),%eax
084abad0 +0x0be:  mov    0x8(%eax),%edx
084abad3 +0x0c1:  mov    -0x20(%ebp),%eax
084abad6 +0x0c4:  mov    %edx,(%eax)
084abad8 +0x0c6:  lea    -0x150(%ebp),%ebx
084abade +0x0cc:  mov    $0x0,%eax
084abae3 +0x0d1:  mov    $0x40,%edx
084abae8 +0x0d6:  mov    %ebx,%edi
084abaea +0x0d8:  mov    %edx,%ecx
084abaec +0x0da:  rep stos %eax,%es:(%edi)
084abaee +0x0dc:  mov    -0x20(%ebp),%eax
084abaf1 +0x0df:  mov    (%eax),%eax
084abaf3 +0x0e1:  mov    %eax,0x8(%esp)
084abaf7 +0x0e5:  movl   $"비밀상점 npc가 %d로 교체되었습니다",0x4(%esp)
084abaff +0x0ed:  lea    -0x150(%ebp),%eax
084abb05 +0x0f3:  mov    %eax,(%esp)
084abb08 +0x0f6:  call   0807e440 <_init+0xd38>
084abb0d +0x0fb:  mov    -0x20(%ebp),%eax
084abb10 +0x0fe:  mov    (%eax),%esi
084abb12 +0x100:  mov    -0x28(%ebp),%eax
084abb15 +0x103:  mov    %eax,(%esp)
084abb18 +0x106:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084abb1d +0x10b:  mov    %eax,%ebx
084abb1f +0x10d:  movl   $0x0,0xc(%esp)
084abb27 +0x115:  movl   $0x73f,0x8(%esp)
084abb2f +0x11d:  movl   $&_ZZN11game_master14CSecretShopNpc7executeEvE19__PRETTY_FUNCTION__,0x4(%esp)
084abb37 +0x125:  lea    -0x38(%ebp),%eax
084abb3a +0x128:  mov    %eax,(%esp)
084abb3d +0x12b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084abb42 +0x130:  mov    %esi,0xc(%esp)
084abb46 +0x134:  mov    %ebx,0x8(%esp)
084abb4a +0x138:  movl   $"[SECRETSHOP] change npc(%s, %d)",0x4(%esp)
084abb52 +0x140:  lea    -0x38(%ebp),%eax
084abb55 +0x143:  mov    %eax,(%esp)
084abb58 +0x146:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084abb5d +0x14b:  lea    -0x44(%ebp),%eax
084abb60 +0x14e:  mov    %eax,(%esp)
084abb63 +0x151:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084abb68 +0x156:  lea    -0x150(%ebp),%eax
084abb6e +0x15c:  mov    %eax,(%esp)
084abb71 +0x15f:  call   0807e3b0 <_init+0xca8>
084abb76 +0x164:  mov    %eax,%ebx
084abb78 +0x166:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084abb7d +0x16b:  movl   $0xc,0x18(%esp)
084abb85 +0x173:  movl   $0x2,0x14(%esp)
084abb8d +0x17b:  mov    %ebx,0x10(%esp)
084abb91 +0x17f:  lea    -0x150(%ebp),%edx
084abb97 +0x185:  mov    %edx,0xc(%esp)
084abb9b +0x189:  mov    -0x28(%ebp),%edx
084abb9e +0x18c:  mov    %edx,0x8(%esp)
084abba2 +0x190:  lea    -0x44(%ebp),%edx
084abba5 +0x193:  mov    %edx,0x4(%esp)
084abba9 +0x197:  mov    %eax,(%esp)
084abbac +0x19a:  call   086c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>  ; GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
084abbb1 +0x19f:  lea    -0x50(%ebp),%eax
084abbb4 +0x1a2:  mov    %eax,(%esp)
084abbb7 +0x1a5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084abbbc +0x1aa:  movl   $0x114,0x8(%esp)
084abbc4 +0x1b2:  movl   $0x0,0x4(%esp)
084abbcc +0x1ba:  lea    -0x50(%ebp),%eax
084abbcf +0x1bd:  mov    %eax,(%esp)
084abbd2 +0x1c0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084abbd7 +0x1c5:  mov    -0x20(%ebp),%eax
084abbda +0x1c8:  mov    (%eax),%eax
084abbdc +0x1ca:  mov    %eax,0x4(%esp)
084abbe0 +0x1ce:  lea    -0x50(%ebp),%eax
084abbe3 +0x1d1:  mov    %eax,(%esp)
084abbe6 +0x1d4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084abbeb +0x1d9:  movl   $0x1,0x4(%esp)
084abbf3 +0x1e1:  lea    -0x50(%ebp),%eax
084abbf6 +0x1e4:  mov    %eax,(%esp)
084abbf9 +0x1e7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084abbfe +0x1ec:  cmpl   $0x0,-0x24(%ebp)
084abc02 +0x1f0:  je     084abc2a <+0x218>
084abc04 +0x1f2:  lea    -0x44(%ebp),%eax
084abc07 +0x1f5:  mov    %eax,0x4(%esp)
084abc0b +0x1f9:  mov    -0x24(%ebp),%eax
084abc0e +0x1fc:  mov    %eax,(%esp)
084abc11 +0x1ff:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
084abc16 +0x204:  lea    -0x50(%ebp),%eax
084abc19 +0x207:  mov    %eax,0x4(%esp)
084abc1d +0x20b:  mov    -0x24(%ebp),%eax
084abc20 +0x20e:  mov    %eax,(%esp)
084abc23 +0x211:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
084abc28 +0x216:  jmp    084abc65 <+0x253>
084abc2a +0x218:  lea    -0x44(%ebp),%eax
084abc2d +0x21b:  mov    %eax,0x4(%esp)
084abc31 +0x21f:  mov    -0x28(%ebp),%eax
084abc34 +0x222:  mov    %eax,(%esp)
084abc37 +0x225:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084abc3c +0x22a:  lea    -0x50(%ebp),%eax
084abc3f +0x22d:  mov    %eax,0x4(%esp)
084abc43 +0x231:  mov    -0x28(%ebp),%eax
084abc46 +0x234:  mov    %eax,(%esp)
084abc49 +0x237:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084abc4e +0x23c:  jmp    084abc65 <+0x253>
084abc50 +0x23e:  mov    %edx,%ebx
084abc52 +0x240:  mov    %eax,%esi
084abc54 +0x242:  lea    -0x50(%ebp),%eax
084abc57 +0x245:  mov    %eax,(%esp)
084abc5a +0x248:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084abc5f +0x24d:  mov    %esi,%eax
084abc61 +0x24f:  mov    %ebx,%edx
084abc63 +0x251:  jmp    084abc72 <+0x260>
084abc65 +0x253:  lea    -0x50(%ebp),%eax
084abc68 +0x256:  mov    %eax,(%esp)
084abc6b +0x259:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084abc70 +0x25e:  jmp    084abc8d <+0x27b>
084abc72 +0x260:  mov    %edx,%ebx
084abc74 +0x262:  mov    %eax,%esi
084abc76 +0x264:  lea    -0x44(%ebp),%eax
084abc79 +0x267:  mov    %eax,(%esp)
084abc7c +0x26a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084abc81 +0x26f:  mov    %esi,%eax
084abc83 +0x271:  mov    %ebx,%edx
084abc85 +0x273:  mov    %eax,(%esp)
084abc88 +0x276:  call   08ae3750 <_Unwind_Resume>
084abc8d +0x27b:  lea    -0x44(%ebp),%eax
084abc90 +0x27e:  mov    %eax,(%esp)
084abc93 +0x281:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084abc98 +0x286:  jmp    084abca4 <+0x292>
084abc9a +0x288:  nop
084abc9b +0x289:  jmp    084abca4 <+0x292>
084abc9d +0x28b:  nop
084abc9e +0x28c:  jmp    084abca4 <+0x292>
084abca0 +0x28e:  nop
084abca1 +0x28f:  jmp    084abca4 <+0x292>
084abca3 +0x291:  nop
084abca4 +0x292:  add    $0x16c,%esp
084abcaa +0x298:  pop    %ebx
084abcab +0x299:  pop    %esi
084abcac +0x29a:  pop    %edi
084abcad +0x29b:  pop    %ebp
084abcae +0x29c:  ret
084abcaf +0x29d:  nop
```

## 反编译 C

```c
// game_master::CSecretShopNpc::execute @ 0x84aba12

/* game_master::CSecretShopNpc::execute() */

void __thiscall game_master::CSecretShopNpc::execute(CSecretShopNpc *this)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  GameWorld *pGVar4;
  char *pcVar5;
  byte bVar6;
  char local_154 [256];
  PacketGuard local_54 [12];
  PacketGuard local_48 [12];
  cMyTrace local_3c [16];
  CUser *local_2c;
  CParty *local_28;
  int *local_24;
  int local_20;
  
  bVar6 = 0;
  local_2c = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar1 = CUser::get_state(local_2c);
  if (iVar1 == 5) {
    local_28 = (CParty *)CUser::GetParty(local_2c);
    local_24 = (int *)CUser::GetSecretShopData(local_2c);
    if (((local_24 != (int *)0x0) &&
        ((((*(int *)(this + 8) == 1000 || (*(int *)(this + 8) == 0x3ea)) ||
          (*(int *)(this + 8) == 0x3eb)) || (*(int *)(this + 8) == 0x3ec)))) &&
       (((local_28 == (CParty *)0x0 || (local_20 = *(int *)(local_28 + 0xcac), local_20 == 0)) ||
        (*(char *)(local_20 + 0x89f) < '\x01')))) {
      *local_24 = *(int *)(this + 8);
      pcVar5 = local_154;
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
      }
      sprintf(local_154,&DAT_08c7fc78,*local_24);
      iVar1 = *local_24;
      uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_2c);
      cMyTrace::cMyTrace(local_3c,"virtual void game_master::CSecretShopNpc::execute()",0x73f,0);
      cMyTrace::operator()(local_3c,"[SECRETSHOP] change npc(%s, %d)",uVar2,iVar1);
      PacketGuard::PacketGuard(local_48);
      sVar3 = strlen(local_154);
                    /* try { // try from 084abb78 to 084abbbb has its CatchHandler @ 084abc72 */
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::make_packet_chat_msg(pGVar4,local_48,local_2c,local_154,sVar3,2,0xc);
      PacketGuard::PacketGuard(local_54);
                    /* try { // try from 084abbd2 to 084abc4d has its CatchHandler @ 084abc50 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0x114);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_54,*local_24);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
      if (local_28 == (CParty *)0x0) {
        CUser::Send(local_2c,local_48);
        CUser::Send(local_2c,local_54);
      }
      else {
        CParty::send_to_party(local_28,local_48);
        CParty::send_to_party(local_28,local_54);
      }
                    /* try { // try from 084abc6b to 084abc6f has its CatchHandler @ 084abc72 */
      PacketGuard::~PacketGuard(local_54);
      PacketGuard::~PacketGuard(local_48);
    }
  }
  return;
}
```
