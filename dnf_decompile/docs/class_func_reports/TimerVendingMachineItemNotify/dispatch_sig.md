# dispatch_sig

`_ZN29TimerVendingMachineItemNotify12dispatch_sigEiij`

`TimerVendingMachineItemNotify::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerVendingMachineItemNotify` | `0x08637f40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637f40  _ZN29TimerVendingMachineItemNotify12dispatch_sigEiij
#           TimerVendingMachineItemNotify::dispatch_sig(int, int, unsigned int)
# range [0x08637f40, 0x08638073]
08637f40 +0x000:  push   %ebp
08637f41 +0x001:  mov    %esp,%ebp
08637f43 +0x003:  push   %esi
08637f44 +0x004:  push   %ebx
08637f45 +0x005:  sub    $0x20,%esp
08637f48 +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08637f4d +0x00d:  movl   $0x2,0x8(%esp)
08637f55 +0x015:  mov    0xc(%ebp),%edx
08637f58 +0x018:  mov    %edx,0x4(%esp)
08637f5c +0x01c:  mov    %eax,(%esp)
08637f5f +0x01f:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08637f64 +0x024:  mov    %eax,-0xc(%ebp)
08637f67 +0x027:  cmpl   $0x0,-0xc(%ebp)
08637f6b +0x02b:  jne    08637f77 <+0x37>
08637f6d +0x02d:  mov    $0x0,%ebx
08637f72 +0x032:  jmp    0863806b <+0x12b>
08637f77 +0x037:  lea    -0x18(%ebp),%eax
08637f7a +0x03a:  mov    %eax,(%esp)
08637f7d +0x03d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08637f82 +0x042:  movl   $0x56,0x8(%esp)
08637f8a +0x04a:  movl   $0x0,0x4(%esp)
08637f92 +0x052:  lea    -0x18(%ebp),%eax
08637f95 +0x055:  mov    %eax,(%esp)
08637f98 +0x058:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08637f9d +0x05d:  movl   $0x3,0x4(%esp)
08637fa5 +0x065:  lea    -0x18(%ebp),%eax
08637fa8 +0x068:  mov    %eax,(%esp)
08637fab +0x06b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08637fb0 +0x070:  movl   $0x1,0x4(%esp)
08637fb8 +0x078:  lea    -0x18(%ebp),%eax
08637fbb +0x07b:  mov    %eax,(%esp)
08637fbe +0x07e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08637fc3 +0x083:  mov    -0xc(%ebp),%eax
08637fc6 +0x086:  mov    %eax,(%esp)
08637fc9 +0x089:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08637fce +0x08e:  movzwl %ax,%eax
08637fd1 +0x091:  mov    %eax,0x4(%esp)
08637fd5 +0x095:  lea    -0x18(%ebp),%eax
08637fd8 +0x098:  mov    %eax,(%esp)
08637fdb +0x09b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08637fe0 +0x0a0:  mov    0x10(%ebp),%eax
08637fe3 +0x0a3:  mov    %eax,0x4(%esp)
08637fe7 +0x0a7:  lea    -0x18(%ebp),%eax
08637fea +0x0aa:  mov    %eax,(%esp)
08637fed +0x0ad:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
08637ff2 +0x0b2:  movl   $0x0,0x4(%esp)
08637ffa +0x0ba:  lea    -0x18(%ebp),%eax
08637ffd +0x0bd:  mov    %eax,(%esp)
08638000 +0x0c0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08638005 +0x0c5:  mov    0x14(%ebp),%eax
08638008 +0x0c8:  mov    %eax,0x4(%esp)
0863800c +0x0cc:  lea    -0x18(%ebp),%eax
0863800f +0x0cf:  mov    %eax,(%esp)
08638012 +0x0d2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08638017 +0x0d7:  movl   $0x1,0x4(%esp)
0863801f +0x0df:  lea    -0x18(%ebp),%eax
08638022 +0x0e2:  mov    %eax,(%esp)
08638025 +0x0e5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0863802a +0x0ea:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863802f +0x0ef:  lea    -0x18(%ebp),%edx
08638032 +0x0f2:  mov    %edx,0x4(%esp)
08638036 +0x0f6:  mov    %eax,(%esp)
08638039 +0x0f9:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0863803e +0x0fe:  mov    $0x1,%ebx
08638043 +0x103:  lea    -0x18(%ebp),%eax
08638046 +0x106:  mov    %eax,(%esp)
08638049 +0x109:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863804e +0x10e:  jmp    0863806b <+0x12b>
08638050 +0x110:  mov    %edx,%ebx
08638052 +0x112:  mov    %eax,%esi
08638054 +0x114:  lea    -0x18(%ebp),%eax
08638057 +0x117:  mov    %eax,(%esp)
0863805a +0x11a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863805f +0x11f:  mov    %esi,%eax
08638061 +0x121:  mov    %ebx,%edx
08638063 +0x123:  mov    %eax,(%esp)
08638066 +0x126:  call   08ae3750 <_Unwind_Resume>
0863806b +0x12b:  mov    %ebx,%eax
0863806d +0x12d:  add    $0x20,%esp
08638070 +0x130:  pop    %ebx
08638071 +0x131:  pop    %esi
08638072 +0x132:  pop    %ebp
08638073 +0x133:  ret
```

## 反编译 C

```c
// TimerVendingMachineItemNotify::dispatch_sig @ 0x8637f40

/* TimerVendingMachineItemNotify::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerVendingMachineItemNotify::dispatch_sig
          (TimerVendingMachineItemNotify *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  GameWorld *this_00;
  bool bVar3;
  PacketGuard local_1c [12];
  CUser *local_10;
  
  iVar1 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar1,param_1);
  bVar3 = local_10 != (CUser *)0x0;
  if (bVar3) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08637f98 to 0863803d has its CatchHandler @ 08638050 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x56);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    uVar2 = CUser::get_unique_id(local_10);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
    InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)local_1c,param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return bVar3;
}
```
