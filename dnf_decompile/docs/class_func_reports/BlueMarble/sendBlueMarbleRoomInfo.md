# sendBlueMarbleRoomInfo

`_ZNK10BlueMarble22sendBlueMarbleRoomInfoEv`

`BlueMarble::sendBlueMarbleRoomInfo() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d84b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d84b4  _ZNK10BlueMarble22sendBlueMarbleRoomInfoEv
#           BlueMarble::sendBlueMarbleRoomInfo() const
# range [0x080d84b4, 0x080d85ff]
080d84b4 +0x000:  push   %ebp
080d84b5 +0x001:  mov    %esp,%ebp
080d84b7 +0x003:  push   %esi
080d84b8 +0x004:  push   %ebx
080d84b9 +0x005:  sub    $0x20,%esp
080d84bc +0x008:  lea    -0x18(%ebp),%eax
080d84bf +0x00b:  mov    %eax,(%esp)
080d84c2 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080d84c7 +0x013:  movl   $0x1ae,0x8(%esp)
080d84cf +0x01b:  movl   $0x0,0x4(%esp)
080d84d7 +0x023:  lea    -0x18(%ebp),%eax
080d84da +0x026:  mov    %eax,(%esp)
080d84dd +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080d84e2 +0x02e:  mov    0x8(%ebp),%eax
080d84e5 +0x031:  mov    %eax,(%esp)
080d84e8 +0x034:  call   080d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>  ; BlueMarble::getMemoryPoolIndex() const
080d84ed +0x039:  mov    %eax,0x4(%esp)
080d84f1 +0x03d:  lea    -0x18(%ebp),%eax
080d84f4 +0x040:  mov    %eax,(%esp)
080d84f7 +0x043:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
080d84fc +0x048:  mov    0x8(%ebp),%eax
080d84ff +0x04b:  mov    %eax,(%esp)
080d8502 +0x04e:  call   080d90da <_ZNK10BlueMarble16getWaitUserCountEv>  ; BlueMarble::getWaitUserCount() const
080d8507 +0x053:  mov    %eax,0x4(%esp)
080d850b +0x057:  lea    -0x18(%ebp),%eax
080d850e +0x05a:  mov    %eax,(%esp)
080d8511 +0x05d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080d8516 +0x062:  movl   $0x0,-0xc(%ebp)
080d851d +0x069:  jmp    080d8595 <+0xe1>
080d851f +0x06b:  mov    -0xc(%ebp),%eax
080d8522 +0x06e:  mov    0x8(%ebp),%edx
080d8525 +0x071:  add    $0x4,%edx
080d8528 +0x074:  mov    %eax,0x4(%esp)
080d852c +0x078:  mov    %edx,(%esp)
080d852f +0x07b:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d8534 +0x080:  mov    %eax,(%esp)
080d8537 +0x083:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d853c +0x088:  test   %eax,%eax
080d853e +0x08a:  sete   %al
080d8541 +0x08d:  test   %al,%al
080d8543 +0x08f:  jne    080d8590 <+0xdc>
080d8545 +0x091:  mov    -0xc(%ebp),%eax
080d8548 +0x094:  mov    %eax,0x4(%esp)
080d854c +0x098:  lea    -0x18(%ebp),%eax
080d854f +0x09b:  mov    %eax,(%esp)
080d8552 +0x09e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080d8557 +0x0a3:  mov    -0xc(%ebp),%eax
080d855a +0x0a6:  mov    0x8(%ebp),%edx
080d855d +0x0a9:  add    $0x4,%edx
080d8560 +0x0ac:  mov    %eax,0x4(%esp)
080d8564 +0x0b0:  mov    %edx,(%esp)
080d8567 +0x0b3:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d856c +0x0b8:  mov    %eax,(%esp)
080d856f +0x0bb:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d8574 +0x0c0:  mov    %eax,(%esp)
080d8577 +0x0c3:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
080d857c +0x0c8:  movzwl %ax,%eax
080d857f +0x0cb:  mov    %eax,0x4(%esp)
080d8583 +0x0cf:  lea    -0x18(%ebp),%eax
080d8586 +0x0d2:  mov    %eax,(%esp)
080d8589 +0x0d5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
080d858e +0x0da:  jmp    080d8591 <+0xdd>
080d8590 +0x0dc:  nop
080d8591 +0x0dd:  addl   $0x1,-0xc(%ebp)
080d8595 +0x0e1:  mov    0x8(%ebp),%eax
080d8598 +0x0e4:  mov    0x38(%eax),%eax
080d859b +0x0e7:  mov    0x30(%eax),%eax
080d859e +0x0ea:  cmp    -0xc(%ebp),%eax
080d85a1 +0x0ed:  setg   %al
080d85a4 +0x0f0:  test   %al,%al
080d85a6 +0x0f2:  jne    080d851f <+0x6b>
080d85ac +0x0f8:  movl   $0x1,0x4(%esp)
080d85b4 +0x100:  lea    -0x18(%ebp),%eax
080d85b7 +0x103:  mov    %eax,(%esp)
080d85ba +0x106:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080d85bf +0x10b:  lea    -0x18(%ebp),%eax
080d85c2 +0x10e:  mov    %eax,0x4(%esp)
080d85c6 +0x112:  mov    0x8(%ebp),%eax
080d85c9 +0x115:  mov    %eax,(%esp)
080d85cc +0x118:  call   080d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>  ; BlueMarble::sendToBlueMarble(PacketGuard&) const
080d85d1 +0x11d:  jmp    080d85ee <+0x13a>
080d85d3 +0x11f:  mov    %edx,%ebx
080d85d5 +0x121:  mov    %eax,%esi
080d85d7 +0x123:  lea    -0x18(%ebp),%eax
080d85da +0x126:  mov    %eax,(%esp)
080d85dd +0x129:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d85e2 +0x12e:  mov    %esi,%eax
080d85e4 +0x130:  mov    %ebx,%edx
080d85e6 +0x132:  mov    %eax,(%esp)
080d85e9 +0x135:  call   08ae3750 <_Unwind_Resume>
080d85ee +0x13a:  lea    -0x18(%ebp),%eax
080d85f1 +0x13d:  mov    %eax,(%esp)
080d85f4 +0x140:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d85f9 +0x145:  add    $0x20,%esp
080d85fc +0x148:  pop    %ebx
080d85fd +0x149:  pop    %esi
080d85fe +0x14a:  pop    %ebp
080d85ff +0x14b:  ret
```

## 反编译 C

```c
// BlueMarble::sendBlueMarbleRoomInfo @ 0x80d84b4

/* BlueMarble::sendBlueMarbleRoomInfo() const */

void __thiscall BlueMarble::sendBlueMarbleRoomInfo(BlueMarble *this)

{
  int iVar1;
  BlueMarbleUserInfo *pBVar2;
  CUser *this_00;
  uint uVar3;
  PacketGuard local_1c [12];
  uint local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 080d84dd to 080d85d0 has its CatchHandler @ 080d85d3 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1ae);
  iVar1 = getMemoryPoolIndex(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar1);
  iVar1 = getWaitUserCount(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,iVar1);
  for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30); local_10 = local_10 + 1
      ) {
    pBVar2 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        local_10);
    iVar1 = BlueMarbleUserInfo::getUser(pBVar2);
    if (iVar1 != 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_10);
      this_00 = (CUser *)BlueMarbleUserInfo::getUser(pBVar2);
      uVar3 = CUser::get_unique_id(this_00);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar3 & 0xffff);
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  sendToBlueMarble(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
