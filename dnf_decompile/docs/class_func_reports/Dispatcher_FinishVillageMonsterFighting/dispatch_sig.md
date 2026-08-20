# dispatch_sig

`_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_FinishVillageMonsterFighting::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_FinishVillageMonsterFighting` | `0x0822284a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822284a  _ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_FinishVillageMonsterFighting::dispatch_sig(CUser*, PacketBuf&)
# range [0x0822284a, 0x08222957]
0822284a +0x000:  push   %ebp
0822284b +0x001:  mov    %esp,%ebp
0822284d +0x003:  sub    $0x28,%esp
08222850 +0x006:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08222855 +0x00b:  mov    %eax,(%esp)
08222858 +0x00e:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0822285d +0x013:  test   %al,%al
0822285f +0x015:  je     0822286b <+0x21>
08222861 +0x017:  mov    $0x0,%eax
08222866 +0x01c:  jmp    08222955 <+0x10b>
0822286b +0x021:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08222870 +0x026:  mov    0x1a8(%eax),%eax
08222876 +0x02c:  cmp    $0x1,%eax
08222879 +0x02f:  je     0822288b <+0x41>
0822287b +0x031:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08222880 +0x036:  mov    0x1a8(%eax),%eax
08222886 +0x03c:  cmp    $0x2,%eax
08222889 +0x03f:  jne    08222892 <+0x48>
0822288b +0x041:  mov    $0x1,%eax
08222890 +0x046:  jmp    08222897 <+0x4d>
08222892 +0x048:  mov    $0x0,%eax
08222897 +0x04d:  test   %al,%al
08222899 +0x04f:  je     082228a5 <+0x5b>
0822289b +0x051:  mov    $0x0,%eax
082228a0 +0x056:  jmp    08222955 <+0x10b>
082228a5 +0x05b:  cmpl   $0x0,0xc(%ebp)
082228a9 +0x05f:  jne    082228d4 <+0x8a>
082228ab +0x061:  movl   $0x0,0xc(%esp)
082228b3 +0x069:  movl   $0x0,0x8(%esp)
082228bb +0x071:  movl   $&_ZZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082228c3 +0x079:  movl   $0xdc66,(%esp)
082228ca +0x080:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082228cf +0x085:  jmp    08222955 <+0x10b>
082228d4 +0x08a:  mov    0xc(%ebp),%eax
082228d7 +0x08d:  mov    %eax,(%esp)
082228da +0x090:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082228df +0x095:  cmp    $0x5,%eax
082228e2 +0x098:  setne  %al
082228e5 +0x09b:  test   %al,%al
082228e7 +0x09d:  je     082228f0 <+0xa6>
082228e9 +0x09f:  mov    $0x0,%eax
082228ee +0x0a4:  jmp    08222955 <+0x10b>
082228f0 +0x0a6:  mov    0xc(%ebp),%eax
082228f3 +0x0a9:  mov    %eax,(%esp)
082228f6 +0x0ac:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082228fb +0x0b1:  mov    %eax,-0x10(%ebp)
082228fe +0x0b4:  cmpl   $0x0,-0x10(%ebp)
08222902 +0x0b8:  je     08222950 <+0x106>
08222904 +0x0ba:  movl   $0x0,-0xc(%ebp)
0822290b +0x0c1:  movl   $0x0,0x8(%esp)
08222913 +0x0c9:  mov    0xc(%ebp),%eax
08222916 +0x0cc:  mov    %eax,0x4(%esp)
0822291a +0x0d0:  mov    -0x10(%ebp),%eax
0822291d +0x0d3:  mov    %eax,(%esp)
08222920 +0x0d6:  call   085b99ac <_ZN6CParty30OnFinishVillageMonsterFightingEP5CUserb>  ; CParty::OnFinishVillageMonsterFighting(CUser*, bool)
08222925 +0x0db:  mov    %eax,-0xc(%ebp)
08222928 +0x0de:  cmpl   $0x0,-0xc(%ebp)
0822292c +0x0e2:  setne  %al
0822292f +0x0e5:  test   %al,%al
08222931 +0x0e7:  je     08222950 <+0x106>
08222933 +0x0e9:  mov    -0xc(%ebp),%eax
08222936 +0x0ec:  movzbl %al,%eax
08222939 +0x0ef:  mov    %eax,0x8(%esp)
0822293d +0x0f3:  movl   $0x10c,0x4(%esp)
08222945 +0x0fb:  mov    0xc(%ebp),%eax
08222948 +0x0fe:  mov    %eax,(%esp)
0822294b +0x101:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222950 +0x106:  mov    $0x0,%eax
08222955 +0x10b:  leave
08222956 +0x10c:  ret
08222957 +0x10d:  nop
```

## 反编译 C

```c
// Dispatcher_FinishVillageMonsterFighting::dispatch_sig @ 0x822284a

/* Dispatcher_FinishVillageMonsterFighting::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_FinishVillageMonsterFighting::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  undefined4 uVar4;
  CParty *this_00;
  uint uVar5;
  
  this = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
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
    else if (param_2 == (PacketBuf *)0x0) {
      uVar4 = LineFunc(0xdc66,
                       "virtual int Dispatcher_FinishVillageMonsterFighting::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      iVar3 = CUser::get_state((CUser *)param_2);
      if (iVar3 == 5) {
        this_00 = (CParty *)CUser::GetParty((CUser *)param_2);
        if ((this_00 != (CParty *)0x0) &&
           (uVar5 = CParty::OnFinishVillageMonsterFighting(this_00,(CUser *)param_2,false),
           uVar5 != 0)) {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x10c,uVar5 & 0xff);
        }
        uVar4 = 0;
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
