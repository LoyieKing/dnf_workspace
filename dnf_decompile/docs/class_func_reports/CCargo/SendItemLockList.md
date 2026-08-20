# SendItemLockList

`_ZNK6CCargo16SendItemLockListEv`

`CCargo::SendItemLockList() const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850bd50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850bd50  _ZNK6CCargo16SendItemLockListEv
#           CCargo::SendItemLockList() const
# range [0x0850bd50, 0x0850bee1]
0850bd50 +0x000:  push   %ebp
0850bd51 +0x001:  mov    %esp,%ebp
0850bd53 +0x003:  push   %esi
0850bd54 +0x004:  push   %ebx
0850bd55 +0x005:  sub    $0x30,%esp
0850bd58 +0x008:  mov    0x8(%ebp),%eax
0850bd5b +0x00b:  mov    (%eax),%eax
0850bd5d +0x00d:  test   %eax,%eax
0850bd5f +0x00f:  je     0850beda <+0x18a>
0850bd65 +0x015:  lea    -0x1c(%ebp),%eax
0850bd68 +0x018:  mov    %eax,(%esp)
0850bd6b +0x01b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0850bd70 +0x020:  lea    -0x1c(%ebp),%eax
0850bd73 +0x023:  mov    %eax,(%esp)
0850bd76 +0x026:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0850bd7b +0x02b:  movl   $0xfb,0x8(%esp)
0850bd83 +0x033:  movl   $0x0,0x4(%esp)
0850bd8b +0x03b:  lea    -0x1c(%ebp),%eax
0850bd8e +0x03e:  mov    %eax,(%esp)
0850bd91 +0x041:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0850bd96 +0x046:  lea    -0x1c(%ebp),%eax
0850bd99 +0x049:  mov    %eax,(%esp)
0850bd9c +0x04c:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0850bda1 +0x051:  mov    %eax,-0x20(%ebp)
0850bda4 +0x054:  movl   $0x0,-0x10(%ebp)
0850bdab +0x05b:  mov    -0x10(%ebp),%eax
0850bdae +0x05e:  mov    %eax,0x4(%esp)
0850bdb2 +0x062:  lea    -0x1c(%ebp),%eax
0850bdb5 +0x065:  mov    %eax,(%esp)
0850bdb8 +0x068:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850bdbd +0x06d:  movl   $0x0,-0xc(%ebp)
0850bdc4 +0x074:  jmp    0850be5e <+0x10e>
0850bdc9 +0x079:  mov    0x8(%ebp),%eax
0850bdcc +0x07c:  mov    0x4(%eax),%edx
0850bdcf +0x07f:  mov    -0xc(%ebp),%eax
0850bdd2 +0x082:  imul   $0x3d,%eax,%eax
0850bdd5 +0x085:  lea    (%edx,%eax,1),%eax
0850bdd8 +0x088:  add    $0x11,%eax
0850bddb +0x08b:  mov    %eax,(%esp)
0850bdde +0x08e:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
0850bde3 +0x093:  test   %al,%al
0850bde5 +0x095:  setne  %al
0850bde8 +0x098:  test   %al,%al
0850bdea +0x09a:  je     0850be5a <+0x10a>
0850bdec +0x09c:  movl   $0x2,0x4(%esp)
0850bdf4 +0x0a4:  lea    -0x1c(%ebp),%eax
0850bdf7 +0x0a7:  mov    %eax,(%esp)
0850bdfa +0x0aa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850bdff +0x0af:  mov    -0xc(%ebp),%eax
0850be02 +0x0b2:  mov    %eax,0x4(%esp)
0850be06 +0x0b6:  lea    -0x1c(%ebp),%eax
0850be09 +0x0b9:  mov    %eax,(%esp)
0850be0c +0x0bc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850be11 +0x0c1:  mov    0x8(%ebp),%eax
0850be14 +0x0c4:  mov    0x4(%eax),%edx
0850be17 +0x0c7:  mov    -0xc(%ebp),%eax
0850be1a +0x0ca:  imul   $0x3d,%eax,%eax
0850be1d +0x0cd:  lea    (%edx,%eax,1),%eax
0850be20 +0x0d0:  add    $0x11,%eax
0850be23 +0x0d3:  mov    %eax,(%esp)
0850be26 +0x0d6:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
0850be2b +0x0db:  movzbl %al,%ebx
0850be2e +0x0de:  mov    0x8(%ebp),%eax
0850be31 +0x0e1:  mov    (%eax),%eax
0850be33 +0x0e3:  movl   $0x2,0x4(%esp)
0850be3b +0x0eb:  mov    %eax,(%esp)
0850be3e +0x0ee:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
0850be43 +0x0f3:  mov    %ebx,0x8(%esp)
0850be47 +0x0f7:  lea    -0x1c(%ebp),%edx
0850be4a +0x0fa:  mov    %edx,0x4(%esp)
0850be4e +0x0fe:  mov    %eax,(%esp)
0850be51 +0x101:  call   085426a6 <_ZNK9item_lock9CItemLock18MakeItemLockPacketER11PacketGuardh>  ; item_lock::CItemLock::MakeItemLockPacket(PacketGuard&, unsigned char) const
0850be56 +0x106:  addl   $0x1,-0x10(%ebp)
0850be5a +0x10a:  addl   $0x1,-0xc(%ebp)
0850be5e +0x10e:  cmpl   $0x97,-0xc(%ebp)
0850be65 +0x115:  setle  %al
0850be68 +0x118:  test   %al,%al
0850be6a +0x11a:  jne    0850bdc9 <+0x79>
0850be70 +0x120:  mov    -0x10(%ebp),%eax
0850be73 +0x123:  mov    %eax,0x8(%esp)
0850be77 +0x127:  lea    -0x20(%ebp),%eax
0850be7a +0x12a:  mov    %eax,0x4(%esp)
0850be7e +0x12e:  lea    -0x1c(%ebp),%eax
0850be81 +0x131:  mov    %eax,(%esp)
0850be84 +0x134:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0850be89 +0x139:  movl   $0x1,0x4(%esp)
0850be91 +0x141:  lea    -0x1c(%ebp),%eax
0850be94 +0x144:  mov    %eax,(%esp)
0850be97 +0x147:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0850be9c +0x14c:  mov    0x8(%ebp),%eax
0850be9f +0x14f:  mov    (%eax),%eax
0850bea1 +0x151:  lea    -0x1c(%ebp),%edx
0850bea4 +0x154:  mov    %edx,0x4(%esp)
0850bea8 +0x158:  mov    %eax,(%esp)
0850beab +0x15b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0850beb0 +0x160:  jmp    0850becd <+0x17d>
0850beb2 +0x162:  mov    %edx,%ebx
0850beb4 +0x164:  mov    %eax,%esi
0850beb6 +0x166:  lea    -0x1c(%ebp),%eax
0850beb9 +0x169:  mov    %eax,(%esp)
0850bebc +0x16c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0850bec1 +0x171:  mov    %esi,%eax
0850bec3 +0x173:  mov    %ebx,%edx
0850bec5 +0x175:  mov    %eax,(%esp)
0850bec8 +0x178:  call   08ae3750 <_Unwind_Resume>
0850becd +0x17d:  lea    -0x1c(%ebp),%eax
0850bed0 +0x180:  mov    %eax,(%esp)
0850bed3 +0x183:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0850bed8 +0x188:  jmp    0850bedb <+0x18b>
0850beda +0x18a:  nop
0850bedb +0x18b:  add    $0x30,%esp
0850bede +0x18e:  pop    %ebx
0850bedf +0x18f:  pop    %esi
0850bee0 +0x190:  pop    %ebp
0850bee1 +0x191:  ret
```

## 反编译 C

```c
// CCargo::SendItemLockList @ 0x850bd50

/* CCargo::SendItemLockList() const */

void __thiscall CCargo::SendItemLockList(CCargo *this)

{
  char cVar1;
  PacketGuard *pPVar2;
  int local_24;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0850bd76 to 0850beaf has its CatchHandler @ 0850beb2 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xfb);
    local_24 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_20);
    local_14 = 0;
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,0);
    for (local_10 = 0; local_10 < 0x98; local_10 = local_10 + 1) {
      cVar1 = stAmplifyOption_t::GetLock
                        ((stAmplifyOption_t *)(*(int *)(this + 4) + local_10 * 0x3d + 0x11));
      if (cVar1 != '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,2);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,local_10);
        stAmplifyOption_t::GetLock
                  ((stAmplifyOption_t *)(*(int *)(this + 4) + local_10 * 0x3d + 0x11));
        pPVar2 = (PacketGuard *)CUser::GetCharacExpandDataR(*(CUser **)this,2);
        item_lock::CItemLock::MakeItemLockPacket(pPVar2,(uchar)local_20);
        local_14 = local_14 + 1;
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,&local_24,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send(*(CUser **)this,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return;
}
```
