# dispatch_sig

`_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_FightVillageMonster::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_FightVillageMonster` | `0x082226c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082226c0  _ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_FightVillageMonster::dispatch_sig(CUser*, PacketBuf&)
# range [0x082226c0, 0x08222849]
082226c0 +0x000:  push   %ebp
082226c1 +0x001:  mov    %esp,%ebp
082226c3 +0x003:  sub    $0x28,%esp
082226c6 +0x006:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082226cb +0x00b:  mov    %eax,(%esp)
082226ce +0x00e:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
082226d3 +0x013:  test   %al,%al
082226d5 +0x015:  je     082226e1 <+0x21>
082226d7 +0x017:  mov    $0x0,%eax
082226dc +0x01c:  jmp    08222847 <+0x187>
082226e1 +0x021:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082226e6 +0x026:  mov    0x1a8(%eax),%eax
082226ec +0x02c:  cmp    $0x1,%eax
082226ef +0x02f:  je     08222701 <+0x41>
082226f1 +0x031:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082226f6 +0x036:  mov    0x1a8(%eax),%eax
082226fc +0x03c:  cmp    $0x2,%eax
082226ff +0x03f:  jne    08222708 <+0x48>
08222701 +0x041:  mov    $0x1,%eax
08222706 +0x046:  jmp    0822270d <+0x4d>
08222708 +0x048:  mov    $0x0,%eax
0822270d +0x04d:  test   %al,%al
0822270f +0x04f:  je     0822271b <+0x5b>
08222711 +0x051:  mov    $0x0,%eax
08222716 +0x056:  jmp    08222847 <+0x187>
0822271b +0x05b:  cmpl   $0x0,0xc(%ebp)
0822271f +0x05f:  jne    0822274a <+0x8a>
08222721 +0x061:  movl   $0x0,0xc(%esp)
08222729 +0x069:  movl   $0x0,0x8(%esp)
08222731 +0x071:  movl   $&_ZZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08222739 +0x079:  movl   $0xdc18,(%esp)
08222740 +0x080:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08222745 +0x085:  jmp    08222847 <+0x187>
0822274a +0x08a:  mov    0xc(%ebp),%eax
0822274d +0x08d:  mov    %eax,(%esp)
08222750 +0x090:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08222755 +0x095:  cmp    $0x3,%eax
08222758 +0x098:  setne  %al
0822275b +0x09b:  test   %al,%al
0822275d +0x09d:  je     08222769 <+0xa9>
0822275f +0x09f:  mov    $0x0,%eax
08222764 +0x0a4:  jmp    08222847 <+0x187>
08222769 +0x0a9:  movw   $0x0,-0x12(%ebp)
0822276f +0x0af:  lea    -0x12(%ebp),%eax
08222772 +0x0b2:  mov    %eax,0x4(%esp)
08222776 +0x0b6:  mov    0x10(%ebp),%eax
08222779 +0x0b9:  mov    %eax,(%esp)
0822277c +0x0bc:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08222781 +0x0c1:  xor    $0x1,%eax
08222784 +0x0c4:  test   %al,%al
08222786 +0x0c6:  je     082227b1 <+0xf1>
08222788 +0x0c8:  movl   $0x0,0xc(%esp)
08222790 +0x0d0:  movl   $0x0,0x8(%esp)
08222798 +0x0d8:  movl   $&_ZZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082227a0 +0x0e0:  movl   $0xdc26,(%esp)
082227a7 +0x0e7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082227ac +0x0ec:  jmp    08222847 <+0x187>
082227b1 +0x0f1:  mov    0xc(%ebp),%eax
082227b4 +0x0f4:  mov    %eax,(%esp)
082227b7 +0x0f7:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082227bc +0x0fc:  mov    %eax,-0x10(%ebp)
082227bf +0x0ff:  cmpl   $0x0,-0x10(%ebp)
082227c3 +0x103:  jne    082227ed <+0x12d>
082227c5 +0x105:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082227ca +0x10a:  mov    %eax,(%esp)
082227cd +0x10d:  call   08294e10 <_ZN12CGameManager8GetPartyEv>  ; CGameManager::GetParty()
082227d2 +0x112:  mov    %eax,-0x10(%ebp)
082227d5 +0x115:  cmpl   $0x0,-0x10(%ebp)
082227d9 +0x119:  je     082227ed <+0x12d>
082227db +0x11b:  mov    0xc(%ebp),%eax
082227de +0x11e:  mov    %eax,0x4(%esp)
082227e2 +0x122:  mov    -0x10(%ebp),%eax
082227e5 +0x125:  mov    %eax,(%esp)
082227e8 +0x128:  call   0859b142 <_ZN6CParty15set_single_playEP5CUser>  ; CParty::set_single_play(CUser*)
082227ed +0x12d:  cmpl   $0x0,-0x10(%ebp)
082227f1 +0x131:  je     08222842 <+0x182>
082227f3 +0x133:  movl   $0x0,-0xc(%ebp)
082227fa +0x13a:  movzwl -0x12(%ebp),%eax
082227fe +0x13e:  movzwl %ax,%eax
08222801 +0x141:  mov    %eax,0x8(%esp)
08222805 +0x145:  mov    0xc(%ebp),%eax
08222808 +0x148:  mov    %eax,0x4(%esp)
0822280c +0x14c:  mov    -0x10(%ebp),%eax
0822280f +0x14f:  mov    %eax,(%esp)
08222812 +0x152:  call   085b9596 <_ZN6CParty21OnFightVillageMonsterEP5CUseri>  ; CParty::OnFightVillageMonster(CUser*, int)
08222817 +0x157:  mov    %eax,-0xc(%ebp)
0822281a +0x15a:  cmpl   $0x0,-0xc(%ebp)
0822281e +0x15e:  setne  %al
08222821 +0x161:  test   %al,%al
08222823 +0x163:  je     08222842 <+0x182>
08222825 +0x165:  mov    -0xc(%ebp),%eax
08222828 +0x168:  movzbl %al,%eax
0822282b +0x16b:  mov    %eax,0x8(%esp)
0822282f +0x16f:  movl   $0x10b,0x4(%esp)
08222837 +0x177:  mov    0xc(%ebp),%eax
0822283a +0x17a:  mov    %eax,(%esp)
0822283d +0x17d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222842 +0x182:  mov    $0x0,%eax
08222847 +0x187:  leave
08222848 +0x188:  ret
08222849 +0x189:  nop
```

## 反编译 C

```c
// Dispatcher_FightVillageMonster::dispatch_sig @ 0x82226c0

/* Dispatcher_FightVillageMonster::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_FightVillageMonster::dispatch_sig
          (Dispatcher_FightVillageMonster *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  undefined4 uVar4;
  CGameManager *this_01;
  ushort local_16;
  CParty *local_14;
  uint local_10;
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar2 == '\0') {
    iVar3 = G_CEnvironment();
    if ((*(int *)(iVar3 + 0x1a8) == 1) || (iVar3 = G_CEnvironment(), *(int *)(iVar3 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else if (param_1 == (CUser *)0x0) {
      uVar4 = LineFunc(0xdc18,
                       "virtual int Dispatcher_FightVillageMonster::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      iVar3 = CUser::get_state(param_1);
      if (iVar3 == 3) {
        local_16 = 0;
        cVar2 = PacketBuf::get_short(param_2,&local_16);
        if (cVar2 == '\x01') {
          local_14 = (CParty *)CUser::GetParty(param_1);
          if (local_14 == (CParty *)0x0) {
            this_01 = (CGameManager *)G_CGameManager();
            local_14 = (CParty *)CGameManager::GetParty(this_01);
            if (local_14 != (CParty *)0x0) {
              CParty::set_single_play(local_14,param_1);
            }
          }
          if (local_14 != (CParty *)0x0) {
            local_10 = 0;
            local_10 = CParty::OnFightVillageMonster(local_14,param_1,(uint)local_16);
            if (local_10 != 0) {
              CUser::SendCmdErrorPacket(param_1,0x10b,local_10 & 0xff);
            }
          }
          uVar4 = 0;
        }
        else {
          uVar4 = LineFunc(0xdc26,
                           "virtual int Dispatcher_FightVillageMonster::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar4 = 0;
      }
    }
    return uVar4;
  }
  return 0;
}
```
