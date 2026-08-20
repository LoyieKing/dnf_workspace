# dispatch_sig

`_ZN21TimerFinishItemEffect12dispatch_sigEiij`

`TimerFinishItemEffect::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerFinishItemEffect` | `0x08637aac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637aac  _ZN21TimerFinishItemEffect12dispatch_sigEiij
#           TimerFinishItemEffect::dispatch_sig(int, int, unsigned int)
# range [0x08637aac, 0x08637d63]
08637aac +0x000:  push   %ebp
08637aad +0x001:  mov    %esp,%ebp
08637aaf +0x003:  push   %edi
08637ab0 +0x004:  push   %esi
08637ab1 +0x005:  push   %ebx
08637ab2 +0x006:  sub    $0x5c,%esp
08637ab5 +0x009:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08637aba +0x00e:  movl   $0x3,0x8(%esp)
08637ac2 +0x016:  mov    0xc(%ebp),%edx
08637ac5 +0x019:  mov    %edx,0x4(%esp)
08637ac9 +0x01d:  mov    %eax,(%esp)
08637acc +0x020:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08637ad1 +0x025:  mov    %eax,-0x2c(%ebp)
08637ad4 +0x028:  cmpl   $0x0,-0x2c(%ebp)
08637ad8 +0x02c:  jne    08637ae4 <+0x38>
08637ada +0x02e:  mov    $0x0,%ebx
08637adf +0x033:  jmp    08637d5a <+0x2ae>
08637ae4 +0x038:  mov    -0x2c(%ebp),%eax
08637ae7 +0x03b:  mov    %eax,(%esp)
08637aea +0x03e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08637aef +0x043:  cmp    $0x2,%eax
08637af2 +0x046:  setle  %al
08637af5 +0x049:  test   %al,%al
08637af7 +0x04b:  je     08637b03 <+0x57>
08637af9 +0x04d:  mov    $0x0,%ebx
08637afe +0x052:  jmp    08637d5a <+0x2ae>
08637b03 +0x057:  cmpl   $0x0,0x14(%ebp)
08637b07 +0x05b:  je     08637b20 <+0x74>
08637b09 +0x05d:  mov    -0x2c(%ebp),%eax
08637b0c +0x060:  mov    %eax,(%esp)
08637b0f +0x063:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08637b14 +0x068:  cmp    0x14(%ebp),%eax
08637b17 +0x06b:  je     08637b20 <+0x74>
08637b19 +0x06d:  mov    $0x1,%eax
08637b1e +0x072:  jmp    08637b25 <+0x79>
08637b20 +0x074:  mov    $0x0,%eax
08637b25 +0x079:  test   %al,%al
08637b27 +0x07b:  je     08637b33 <+0x87>
08637b29 +0x07d:  mov    $0x0,%ebx
08637b2e +0x082:  jmp    08637d5a <+0x2ae>
08637b33 +0x087:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08637b3a +0x08e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08637b3f +0x093:  mov    %eax,-0x28(%ebp)
08637b42 +0x096:  mov    -0x2c(%ebp),%eax
08637b45 +0x099:  mov    %eax,(%esp)
08637b48 +0x09c:  call   085d19fa <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0x41>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0x41
08637b4d +0x0a1:  mov    %eax,-0x24(%ebp)
08637b50 +0x0a4:  cmpl   $0x0,-0x24(%ebp)
08637b54 +0x0a8:  jne    08637b60 <+0xb4>
08637b56 +0x0aa:  mov    $0x0,%ebx
08637b5b +0x0af:  jmp    08637d5a <+0x2ae>
08637b60 +0x0b4:  movl   $0x0,-0x20(%ebp)
08637b67 +0x0bb:  jmp    08637d3c <+0x290>
08637b6c +0x0c0:  mov    -0x20(%ebp),%eax
08637b6f +0x0c3:  mov    %eax,0x4(%esp)
08637b73 +0x0c7:  mov    -0x24(%ebp),%eax
08637b76 +0x0ca:  mov    %eax,(%esp)
08637b79 +0x0cd:  call   0863d2dc <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17ed>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17ed
08637b7e +0x0d2:  mov    (%eax),%edx
08637b80 +0x0d4:  mov    0x10(%ebp),%eax
08637b83 +0x0d7:  cmp    %eax,%edx
08637b85 +0x0d9:  sete   %al
08637b88 +0x0dc:  test   %al,%al
08637b8a +0x0de:  je     08637d38 <+0x28c>
08637b90 +0x0e4:  lea    -0x38(%ebp),%eax
08637b93 +0x0e7:  mov    %eax,(%esp)
08637b96 +0x0ea:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08637b9b +0x0ef:  movl   $0xae,0x8(%esp)
08637ba3 +0x0f7:  movl   $0x0,0x4(%esp)
08637bab +0x0ff:  lea    -0x38(%ebp),%eax
08637bae +0x102:  mov    %eax,(%esp)
08637bb1 +0x105:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08637bb6 +0x10a:  movl   $0x1,0x4(%esp)
08637bbe +0x112:  lea    -0x38(%ebp),%eax
08637bc1 +0x115:  mov    %eax,(%esp)
08637bc4 +0x118:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08637bc9 +0x11d:  mov    0x10(%ebp),%eax
08637bcc +0x120:  mov    %eax,0x4(%esp)
08637bd0 +0x124:  lea    -0x38(%ebp),%eax
08637bd3 +0x127:  mov    %eax,(%esp)
08637bd6 +0x12a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08637bdb +0x12f:  movl   $0x0,0x4(%esp)
08637be3 +0x137:  lea    -0x38(%ebp),%eax
08637be6 +0x13a:  mov    %eax,(%esp)
08637be9 +0x13d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08637bee +0x142:  movl   $0x1,0x4(%esp)
08637bf6 +0x14a:  lea    -0x38(%ebp),%eax
08637bf9 +0x14d:  mov    %eax,(%esp)
08637bfc +0x150:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08637c01 +0x155:  mov    -0x20(%ebp),%eax
08637c04 +0x158:  mov    %eax,0x4(%esp)
08637c08 +0x15c:  mov    -0x24(%ebp),%eax
08637c0b +0x15f:  mov    %eax,(%esp)
08637c0e +0x162:  call   0863d2dc <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17ed>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17ed
08637c13 +0x167:  mov    0x4(%eax),%eax
08637c16 +0x16a:  cmp    -0x28(%ebp),%eax
08637c19 +0x16d:  setbe  %al
08637c1c +0x170:  test   %al,%al
08637c1e +0x172:  je     08637c57 <+0x1ab>
08637c20 +0x174:  mov    0x10(%ebp),%eax
08637c23 +0x177:  mov    %eax,0x8(%esp)
08637c27 +0x17b:  mov    -0x2c(%ebp),%eax
08637c2a +0x17e:  mov    %eax,0x4(%esp)
08637c2e +0x182:  mov    0x8(%ebp),%eax
08637c31 +0x185:  mov    %eax,(%esp)
08637c34 +0x188:  call   08637d64 <_ZN21TimerFinishItemEffect36_processSepecialEffectContinuousItemEP5CUserj>  ; TimerFinishItemEffect::_processSepecialEffectContinuousItem(CUser*, unsigned int)
08637c39 +0x18d:  lea    -0x38(%ebp),%eax
08637c3c +0x190:  mov    %eax,0x4(%esp)
08637c40 +0x194:  mov    -0x2c(%ebp),%eax
08637c43 +0x197:  mov    %eax,(%esp)
08637c46 +0x19a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08637c4b +0x19f:  mov    %eax,%ebx
08637c4d +0x1a1:  mov    $0x0,%esi
08637c52 +0x1a6:  jmp    08637d29 <+0x27d>
08637c57 +0x1ab:  mov    -0x20(%ebp),%eax
08637c5a +0x1ae:  mov    %eax,0x4(%esp)
08637c5e +0x1b2:  mov    -0x24(%ebp),%eax
08637c61 +0x1b5:  mov    %eax,(%esp)
08637c64 +0x1b8:  call   0863d2dc <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17ed>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17ed
08637c69 +0x1bd:  mov    0x4(%eax),%eax
08637c6c +0x1c0:  sub    -0x28(%ebp),%eax
08637c6f +0x1c3:  mov    %eax,-0x1c(%ebp)
08637c72 +0x1c6:  cmpl   $0x5,-0x1c(%ebp)
08637c76 +0x1ca:  ja     08637c7e <+0x1d2>
08637c78 +0x1cc:  cmpl   $0x3c,-0x1c(%ebp)
08637c7c +0x1d0:  ja     08637cd3 <+0x227>
08637c7e +0x1d2:  mov    -0x2c(%ebp),%eax
08637c81 +0x1d5:  mov    %eax,(%esp)
08637c84 +0x1d8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08637c89 +0x1dd:  mov    %eax,%edi
08637c8b +0x1df:  mov    -0x1c(%ebp),%eax
08637c8e +0x1e2:  mov    %eax,-0x3c(%ebp)
08637c91 +0x1e5:  mov    -0x2c(%ebp),%eax
08637c94 +0x1e8:  mov    %eax,(%esp)
08637c97 +0x1eb:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08637c9c +0x1f0:  mov    %eax,%esi
08637c9e +0x1f2:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08637ca3 +0x1f7:  mov    %edi,0x18(%esp)
08637ca7 +0x1fb:  mov    0x10(%ebp),%edx
08637caa +0x1fe:  mov    %edx,0x14(%esp)
08637cae +0x202:  mov    -0x3c(%ebp),%edx
08637cb1 +0x205:  mov    %edx,0x10(%esp)
08637cb5 +0x209:  movl   $0x76,0xc(%esp)
08637cbd +0x211:  mov    %esi,0x8(%esp)
08637cc1 +0x215:  movl   $0x0,0x4(%esp)
08637cc9 +0x21d:  mov    %eax,(%esp)
08637ccc +0x220:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08637cd1 +0x225:  jmp    08637d07 <+0x25b>
08637cd3 +0x227:  mov    0x10(%ebp),%eax
08637cd6 +0x22a:  mov    %eax,0x8(%esp)
08637cda +0x22e:  mov    -0x2c(%ebp),%eax
08637cdd +0x231:  mov    %eax,0x4(%esp)
08637ce1 +0x235:  mov    0x8(%ebp),%eax
08637ce4 +0x238:  mov    %eax,(%esp)
08637ce7 +0x23b:  call   08637d64 <_ZN21TimerFinishItemEffect36_processSepecialEffectContinuousItemEP5CUserj>  ; TimerFinishItemEffect::_processSepecialEffectContinuousItem(CUser*, unsigned int)
08637cec +0x240:  lea    -0x38(%ebp),%eax
08637cef +0x243:  mov    %eax,0x4(%esp)
08637cf3 +0x247:  mov    -0x2c(%ebp),%eax
08637cf6 +0x24a:  mov    %eax,(%esp)
08637cf9 +0x24d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08637cfe +0x252:  mov    %eax,%ebx
08637d00 +0x254:  mov    $0x0,%esi
08637d05 +0x259:  jmp    08637d29 <+0x27d>
08637d07 +0x25b:  mov    $0x1,%esi
08637d0c +0x260:  jmp    08637d29 <+0x27d>
08637d0e +0x262:  mov    %edx,%ebx
08637d10 +0x264:  mov    %eax,%esi
08637d12 +0x266:  lea    -0x38(%ebp),%eax
08637d15 +0x269:  mov    %eax,(%esp)
08637d18 +0x26c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08637d1d +0x271:  mov    %esi,%eax
08637d1f +0x273:  mov    %ebx,%edx
08637d21 +0x275:  mov    %eax,(%esp)
08637d24 +0x278:  call   08ae3750 <_Unwind_Resume>
08637d29 +0x27d:  lea    -0x38(%ebp),%eax
08637d2c +0x280:  mov    %eax,(%esp)
08637d2f +0x283:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08637d34 +0x288:  test   %esi,%esi
08637d36 +0x28a:  je     08637d5a <+0x2ae>
08637d38 +0x28c:  addl   $0x1,-0x20(%ebp)
08637d3c +0x290:  mov    -0x24(%ebp),%eax
08637d3f +0x293:  mov    %eax,(%esp)
08637d42 +0x296:  call   0863d2c0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17d1
08637d47 +0x29b:  cmp    -0x20(%ebp),%eax
08637d4a +0x29e:  seta   %al
08637d4d +0x2a1:  test   %al,%al
08637d4f +0x2a3:  jne    08637b6c <+0xc0>
08637d55 +0x2a9:  mov    $0x1,%ebx
08637d5a +0x2ae:  mov    %ebx,%eax
08637d5c +0x2b0:  add    $0x5c,%esp
08637d5f +0x2b3:  pop    %ebx
08637d60 +0x2b4:  pop    %esi
08637d61 +0x2b5:  pop    %edi
08637d62 +0x2b6:  pop    %ebp
08637d63 +0x2b7:  ret
```

## 反编译 C

```c
// TimerFinishItemEffect::dispatch_sig @ 0x8637aac

/* TimerFinishItemEffect::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerFinishItemEffect::dispatch_sig
          (TimerFinishItemEffect *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  undefined4 unaff_EBX;
  undefined4 uVar7;
  PacketGuard local_3c [12];
  CUserCharacInfo *local_30;
  uint local_2c;
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *local_28;
  uint local_24;
  uint local_20;
  
  iVar2 = G_CGameManager();
  local_30 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (local_30 == (CUserCharacInfo *)0x0) {
    return 0;
  }
  iVar2 = CUser::get_state((CUser *)local_30);
  if (2 < iVar2) {
    if ((param_3 == 0) || (uVar3 = CUserCharacInfo::getCurCharacNo(local_30), uVar3 == param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar7 = 0;
    }
    else {
      local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_28 = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
                 CUserCharacInfo::GetCurCharacEffectItemListR(local_30);
      if (local_28 == (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)0x0) {
        uVar7 = 0;
      }
      else {
        local_24 = 0;
        while (uVar3 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size
                                 (local_28), local_24 < uVar3) {
          piVar4 = (int *)std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::
                          operator[](local_28,local_24);
          if (*piVar4 == param_2) {
            PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08637bb1 to 08637cfd has its CatchHandler @ 08637d0e */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xae);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_2);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,0);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
            iVar2 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                              (local_28,local_24);
            if (local_2c < *(uint *)(iVar2 + 4)) {
              iVar2 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                                (local_28,local_24);
              local_20 = *(int *)(iVar2 + 4) - local_2c;
              if ((local_20 < 6) && (0x3c < local_20)) {
                _processSepecialEffectContinuousItem(this,(CUser *)local_30,param_2);
                unaff_EBX = CUser::Send((CUser *)local_30,local_3c);
                bVar1 = false;
              }
              else {
                uVar7 = CUserCharacInfo::getCurCharacNo(local_30);
                uVar3 = local_20;
                uVar5 = CUser::GetUID((CUser *)local_30);
                pTVar6 = (TimerQueue *)G_TimerQueue();
                TimerQueue::InsertTimer(pTVar6,0,uVar5,0x76,uVar3,param_2,uVar7);
                bVar1 = true;
              }
            }
            else {
              _processSepecialEffectContinuousItem(this,(CUser *)local_30,param_2);
              unaff_EBX = CUser::Send((CUser *)local_30,local_3c);
              bVar1 = false;
            }
            PacketGuard::~PacketGuard(local_3c);
            if (!bVar1) {
              return unaff_EBX;
            }
          }
          local_24 = local_24 + 1;
        }
        uVar7 = 1;
      }
    }
    return uVar7;
  }
  return 0;
}
```
