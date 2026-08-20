# dispatch_sig

`_ZN21TimerCheckMailTimeOut12dispatch_sigEiij`

`TimerCheckMailTimeOut::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCheckMailTimeOut` | `0x08635d20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635d20  _ZN21TimerCheckMailTimeOut12dispatch_sigEiij
#           TimerCheckMailTimeOut::dispatch_sig(int, int, unsigned int)
# range [0x08635d20, 0x08635e95]
08635d20 +0x000:  push   %ebp
08635d21 +0x001:  mov    %esp,%ebp
08635d23 +0x003:  push   %esi
08635d24 +0x004:  push   %ebx
08635d25 +0x005:  sub    $0x30,%esp
08635d28 +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08635d2d +0x00d:  movl   $0x7,0x8(%esp)
08635d35 +0x015:  mov    0xc(%ebp),%edx
08635d38 +0x018:  mov    %edx,0x4(%esp)
08635d3c +0x01c:  mov    %eax,(%esp)
08635d3f +0x01f:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08635d44 +0x024:  mov    %eax,-0x10(%ebp)
08635d47 +0x027:  cmpl   $0x0,-0x10(%ebp)
08635d4b +0x02b:  jne    08635d57 <+0x37>
08635d4d +0x02d:  mov    $0x0,%ebx
08635d52 +0x032:  jmp    08635e8c <+0x16c>
08635d57 +0x037:  mov    -0x10(%ebp),%eax
08635d5a +0x03a:  mov    %eax,(%esp)
08635d5d +0x03d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08635d62 +0x042:  cmp    $0x1,%eax
08635d65 +0x045:  setle  %al
08635d68 +0x048:  test   %al,%al
08635d6a +0x04a:  je     08635d76 <+0x56>
08635d6c +0x04c:  mov    $0x0,%ebx
08635d71 +0x051:  jmp    08635e8c <+0x16c>
08635d76 +0x056:  mov    -0x10(%ebp),%eax
08635d79 +0x059:  mov    %eax,(%esp)
08635d7c +0x05c:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08635d81 +0x061:  cmp    0x10(%ebp),%eax
08635d84 +0x064:  setne  %al
08635d87 +0x067:  test   %al,%al
08635d89 +0x069:  je     08635d95 <+0x75>
08635d8b +0x06b:  mov    $0x0,%ebx
08635d90 +0x070:  jmp    08635e8c <+0x16c>
08635d95 +0x075:  mov    -0x10(%ebp),%eax
08635d98 +0x078:  mov    %eax,(%esp)
08635d9b +0x07b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08635da0 +0x080:  cmp    0x14(%ebp),%eax
08635da3 +0x083:  setne  %al
08635da6 +0x086:  test   %al,%al
08635da8 +0x088:  je     08635db4 <+0x94>
08635daa +0x08a:  mov    $0x0,%ebx
08635daf +0x08f:  jmp    08635e8c <+0x16c>
08635db4 +0x094:  lea    -0x1c(%ebp),%eax
08635db7 +0x097:  mov    %eax,(%esp)
08635dba +0x09a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08635dbf +0x09f:  movl   $0x62,0x8(%esp)
08635dc7 +0x0a7:  movl   $0x0,0x4(%esp)
08635dcf +0x0af:  lea    -0x1c(%ebp),%eax
08635dd2 +0x0b2:  mov    %eax,(%esp)
08635dd5 +0x0b5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08635dda +0x0ba:  lea    -0x1c(%ebp),%eax
08635ddd +0x0bd:  mov    %eax,(%esp)
08635de0 +0x0c0:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08635de5 +0x0c5:  mov    %eax,-0x20(%ebp)
08635de8 +0x0c8:  movl   $0x0,0x4(%esp)
08635df0 +0x0d0:  lea    -0x1c(%ebp),%eax
08635df3 +0x0d3:  mov    %eax,(%esp)
08635df6 +0x0d6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08635dfb +0x0db:  lea    -0x1c(%ebp),%eax
08635dfe +0x0de:  mov    %eax,0x4(%esp)
08635e02 +0x0e2:  mov    -0x10(%ebp),%eax
08635e05 +0x0e5:  mov    %eax,(%esp)
08635e08 +0x0e8:  call   08554e90 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard>  ; WongWork::CMailBoxHelper::CheckMailTimeout(CUser*, PacketGuard*)
08635e0d +0x0ed:  mov    %eax,-0xc(%ebp)
08635e10 +0x0f0:  cmpl   $0x0,-0xc(%ebp)
08635e14 +0x0f4:  je     08635e54 <+0x134>
08635e16 +0x0f6:  mov    -0xc(%ebp),%eax
08635e19 +0x0f9:  mov    %eax,0x8(%esp)
08635e1d +0x0fd:  lea    -0x20(%ebp),%eax
08635e20 +0x100:  mov    %eax,0x4(%esp)
08635e24 +0x104:  lea    -0x1c(%ebp),%eax
08635e27 +0x107:  mov    %eax,(%esp)
08635e2a +0x10a:  call   084b804a <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x8d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x8d
08635e2f +0x10f:  movl   $0x1,0x4(%esp)
08635e37 +0x117:  lea    -0x1c(%ebp),%eax
08635e3a +0x11a:  mov    %eax,(%esp)
08635e3d +0x11d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08635e42 +0x122:  lea    -0x1c(%ebp),%eax
08635e45 +0x125:  mov    %eax,0x4(%esp)
08635e49 +0x129:  mov    -0x10(%ebp),%eax
08635e4c +0x12c:  mov    %eax,(%esp)
08635e4f +0x12f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08635e54 +0x134:  mov    -0x10(%ebp),%eax
08635e57 +0x137:  mov    %eax,(%esp)
08635e5a +0x13a:  call   085523e2 <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser>  ; WongWork::CMailBoxHelper::SetPeriodCheckTimer(CUser*)
08635e5f +0x13f:  mov    $0x1,%ebx
08635e64 +0x144:  lea    -0x1c(%ebp),%eax
08635e67 +0x147:  mov    %eax,(%esp)
08635e6a +0x14a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08635e6f +0x14f:  jmp    08635e8c <+0x16c>
08635e71 +0x151:  mov    %edx,%ebx
08635e73 +0x153:  mov    %eax,%esi
08635e75 +0x155:  lea    -0x1c(%ebp),%eax
08635e78 +0x158:  mov    %eax,(%esp)
08635e7b +0x15b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08635e80 +0x160:  mov    %esi,%eax
08635e82 +0x162:  mov    %ebx,%edx
08635e84 +0x164:  mov    %eax,(%esp)
08635e87 +0x167:  call   08ae3750 <_Unwind_Resume>
08635e8c +0x16c:  mov    %ebx,%eax
08635e8e +0x16e:  add    $0x30,%esp
08635e91 +0x171:  pop    %ebx
08635e92 +0x172:  pop    %esi
08635e93 +0x173:  pop    %ebp
08635e94 +0x174:  ret
08635e95 +0x175:  nop
```

## 反编译 C

```c
// TimerCheckMailTimeOut::dispatch_sig @ 0x8635d20

/* TimerCheckMailTimeOut::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerCheckMailTimeOut::dispatch_sig
          (TimerCheckMailTimeOut *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_24;
  PacketGuard local_20 [12];
  CUserCharacInfo *local_14;
  int local_10;
  
  iVar1 = G_CGameManager();
  local_14 = (CUserCharacInfo *)CGameManager::getUser(iVar1,param_1);
  if (local_14 == (CUserCharacInfo *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = CUser::get_state((CUser *)local_14);
    if (iVar1 < 2) {
      uVar3 = 0;
    }
    else {
      iVar1 = CUserCharacInfo::GetLoginTick(local_14);
      if (iVar1 == param_2) {
        uVar2 = CUserCharacInfo::getCurCharacNo(local_14);
        if (uVar2 == param_3) {
          PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08635dd5 to 08635e5e has its CatchHandler @ 08635e71 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x62);
          local_24 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_20);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
          local_10 = WongWork::CMailBoxHelper::CheckMailTimeout((CUser *)local_14,local_20);
          if (local_10 != 0) {
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,&local_24,local_10);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
            CUser::Send((CUser *)local_14,local_20);
          }
          WongWork::CMailBoxHelper::SetPeriodCheckTimer((CUser *)local_14);
          uVar3 = 1;
          PacketGuard::~PacketGuard(local_20);
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```
