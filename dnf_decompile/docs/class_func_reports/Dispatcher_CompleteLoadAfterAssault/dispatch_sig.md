# dispatch_sig

`_ZN35Dispatcher_CompleteLoadAfterAssault12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CompleteLoadAfterAssault::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompleteLoadAfterAssault` | `0x08206b5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08206b5c  _ZN35Dispatcher_CompleteLoadAfterAssault12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CompleteLoadAfterAssault::dispatch_sig(CUser*, PacketBuf&)
# range [0x08206b5c, 0x08206cf9]
08206b5c +0x000:  push   %ebp
08206b5d +0x001:  mov    %esp,%ebp
08206b5f +0x003:  push   %edi
08206b60 +0x004:  push   %esi
08206b61 +0x005:  push   %ebx
08206b62 +0x006:  sub    $0x4c,%esp
08206b65 +0x009:  mov    0xc(%ebp),%eax
08206b68 +0x00c:  mov    %eax,(%esp)
08206b6b +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08206b70 +0x014:  cmp    $0x1,%eax
08206b73 +0x017:  setle  %al
08206b76 +0x01a:  test   %al,%al
08206b78 +0x01c:  je     08206ba3 <+0x47>
08206b7a +0x01e:  movl   $0x0,0xc(%esp)
08206b82 +0x026:  movl   $0x0,0x8(%esp)
08206b8a +0x02e:  movl   $&_ZZN35Dispatcher_CompleteLoadAfterAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206b92 +0x036:  movl   $0xa151,(%esp)
08206b99 +0x03d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206b9e +0x042:  jmp    08206cf2 <+0x196>
08206ba3 +0x047:  mov    0xc(%ebp),%eax
08206ba6 +0x04a:  mov    %eax,(%esp)
08206ba9 +0x04d:  call   0822f6f4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d9e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d9e
08206bae +0x052:  test   %al,%al
08206bb0 +0x054:  je     08206c17 <+0xbb>
08206bb2 +0x056:  mov    0xc(%ebp),%eax
08206bb5 +0x059:  mov    %eax,(%esp)
08206bb8 +0x05c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08206bbd +0x061:  mov    %eax,%edi
08206bbf +0x063:  mov    0xc(%ebp),%eax
08206bc2 +0x066:  mov    %eax,(%esp)
08206bc5 +0x069:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08206bca +0x06e:  mov    %eax,%esi
08206bcc +0x070:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08206bd1 +0x075:  mov    0xa688(%eax),%eax
08206bd7 +0x07b:  mov    %eax,-0x2c(%ebp)
08206bda +0x07e:  mov    0xc(%ebp),%eax
08206bdd +0x081:  mov    %eax,(%esp)
08206be0 +0x084:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08206be5 +0x089:  mov    %eax,%ebx
08206be7 +0x08b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08206bec +0x090:  mov    %edi,0x18(%esp)
08206bf0 +0x094:  mov    %esi,0x14(%esp)
08206bf4 +0x098:  mov    -0x2c(%ebp),%edx
08206bf7 +0x09b:  mov    %edx,0x10(%esp)
08206bfb +0x09f:  movl   $0x7f,0xc(%esp)
08206c03 +0x0a7:  mov    %ebx,0x8(%esp)
08206c07 +0x0ab:  movl   $0x0,0x4(%esp)
08206c0f +0x0b3:  mov    %eax,(%esp)
08206c12 +0x0b6:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08206c17 +0x0bb:  mov    0xc(%ebp),%eax
08206c1a +0x0be:  mov    %eax,(%esp)
08206c1d +0x0c1:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08206c22 +0x0c6:  mov    %eax,-0x1c(%ebp)
08206c25 +0x0c9:  cmpl   $0x0,-0x1c(%ebp)
08206c29 +0x0cd:  je     08206ced <+0x191>
08206c2f +0x0d3:  mov    0xc(%ebp),%eax
08206c32 +0x0d6:  mov    %eax,0x4(%esp)
08206c36 +0x0da:  mov    -0x1c(%ebp),%eax
08206c39 +0x0dd:  mov    %eax,(%esp)
08206c3c +0x0e0:  call   085b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>  ; CParty::CheckRecvFromAllMember(CUser*)
08206c41 +0x0e5:  test   %al,%al
08206c43 +0x0e7:  je     08206ced <+0x191>
08206c49 +0x0ed:  lea    -0x28(%ebp),%eax
08206c4c +0x0f0:  mov    %eax,(%esp)
08206c4f +0x0f3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08206c54 +0x0f8:  lea    -0x28(%ebp),%eax
08206c57 +0x0fb:  mov    %eax,(%esp)
08206c5a +0x0fe:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08206c5f +0x103:  movl   $0xf8,0x8(%esp)
08206c67 +0x10b:  movl   $0x1,0x4(%esp)
08206c6f +0x113:  lea    -0x28(%ebp),%eax
08206c72 +0x116:  mov    %eax,(%esp)
08206c75 +0x119:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08206c7a +0x11e:  movl   $0x1,0x4(%esp)
08206c82 +0x126:  lea    -0x28(%ebp),%eax
08206c85 +0x129:  mov    %eax,(%esp)
08206c88 +0x12c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08206c8d +0x131:  movl   $0x1,0x4(%esp)
08206c95 +0x139:  lea    -0x28(%ebp),%eax
08206c98 +0x13c:  mov    %eax,(%esp)
08206c9b +0x13f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08206ca0 +0x144:  lea    -0x28(%ebp),%eax
08206ca3 +0x147:  mov    %eax,0x4(%esp)
08206ca7 +0x14b:  mov    -0x1c(%ebp),%eax
08206caa +0x14e:  mov    %eax,(%esp)
08206cad +0x151:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08206cb2 +0x156:  movl   $0x1,0x4(%esp)
08206cba +0x15e:  mov    -0x1c(%ebp),%eax
08206cbd +0x161:  mov    %eax,(%esp)
08206cc0 +0x164:  call   0822d81e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ec8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ec8
08206cc5 +0x169:  lea    -0x28(%ebp),%eax
08206cc8 +0x16c:  mov    %eax,(%esp)
08206ccb +0x16f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08206cd0 +0x174:  jmp    08206ced <+0x191>
08206cd2 +0x176:  mov    %edx,%ebx
08206cd4 +0x178:  mov    %eax,%esi
08206cd6 +0x17a:  lea    -0x28(%ebp),%eax
08206cd9 +0x17d:  mov    %eax,(%esp)
08206cdc +0x180:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08206ce1 +0x185:  mov    %esi,%eax
08206ce3 +0x187:  mov    %ebx,%edx
08206ce5 +0x189:  mov    %eax,(%esp)
08206ce8 +0x18c:  call   08ae3750 <_Unwind_Resume>
08206ced +0x191:  mov    $0x0,%eax
08206cf2 +0x196:  add    $0x4c,%esp
08206cf5 +0x199:  pop    %ebx
08206cf6 +0x19a:  pop    %esi
08206cf7 +0x19b:  pop    %edi
08206cf8 +0x19c:  pop    %ebp
08206cf9 +0x19d:  ret
```

## 反编译 C

```c
// Dispatcher_CompleteLoadAfterAssault::dispatch_sig @ 0x8206b5c

/* Dispatcher_CompleteLoadAfterAssault::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CompleteLoadAfterAssault::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  PacketGuard local_2c [12];
  CParty *local_20;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa151,
                     "virtual int Dispatcher_CompleteLoadAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    cVar1 = CUserCharacInfo::GetCurCharacSuperState((CUserCharacInfo *)param_2);
    if (cVar1 != '\0') {
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      uVar5 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_2);
      iVar2 = G_CDataManager();
      uVar3 = *(undefined4 *)(iVar2 + 0xa688);
      uVar6 = CUser::GetUID((CUser *)param_2);
      pTVar7 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar7,0,uVar6,0x7f,uVar3,uVar5,uVar4);
    }
    local_20 = (CParty *)CUser::GetParty((CUser *)param_2);
    if (local_20 != (CParty *)0x0) {
      cVar1 = CParty::CheckRecvFromAllMember(local_20,(CUser *)param_2);
      if (cVar1 != '\0') {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 08206c5a to 08206cb1 has its CatchHandler @ 08206cd2 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xf8);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CParty::send_to_party(local_20,local_2c);
        CParty::SetRecvResultFlag(local_20,true);
        PacketGuard::~PacketGuard(local_2c);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
```
