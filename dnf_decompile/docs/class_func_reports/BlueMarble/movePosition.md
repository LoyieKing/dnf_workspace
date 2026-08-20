# movePosition

`_ZN10BlueMarble12movePositionEP5CUseri`

`BlueMarble::movePosition(CUser*, int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d9a4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d9a4c  _ZN10BlueMarble12movePositionEP5CUseri
#           BlueMarble::movePosition(CUser*, int)
# range [0x080d9a4c, 0x080d9c11]
080d9a4c +0x000:  push   %ebp
080d9a4d +0x001:  mov    %esp,%ebp
080d9a4f +0x003:  push   %esi
080d9a50 +0x004:  push   %ebx
080d9a51 +0x005:  sub    $0x30,%esp
080d9a54 +0x008:  mov    0xc(%ebp),%eax
080d9a57 +0x00b:  mov    %eax,0x4(%esp)
080d9a5b +0x00f:  mov    0x8(%ebp),%eax
080d9a5e +0x012:  mov    %eax,(%esp)
080d9a61 +0x015:  call   080d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>  ; BlueMarble::getUserSlot(CUser*) const
080d9a66 +0x01a:  mov    %eax,-0xc(%ebp)
080d9a69 +0x01d:  cmpl   $0xffffffff,-0xc(%ebp)
080d9a6d +0x021:  jne    080d9aa7 <+0x5b>
080d9a6f +0x023:  mov    -0xc(%ebp),%eax
080d9a72 +0x026:  mov    %eax,0x14(%esp)
080d9a76 +0x02a:  movl   $"BlueMarble::movePosition slot(%d)",0x10(%esp)
080d9a7e +0x032:  movl   $0x4f4,0xc(%esp)
080d9a86 +0x03a:  movl   $&_ZZN10BlueMarble12movePositionEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
080d9a8e +0x042:  movl   $"BlueMarble.cpp",0x4(%esp)
080d9a96 +0x04a:  movl   $0x1,(%esp)
080d9a9d +0x051:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d9aa2 +0x056:  jmp    080d9c0b <+0x1bf>
080d9aa7 +0x05b:  mov    -0xc(%ebp),%eax
080d9aaa +0x05e:  mov    %eax,0x4(%esp)
080d9aae +0x062:  mov    0x8(%ebp),%eax
080d9ab1 +0x065:  mov    %eax,(%esp)
080d9ab4 +0x068:  call   080d6ed8 <_ZN10BlueMarble14checkThrowDiceEi>  ; BlueMarble::checkThrowDice(int)
080d9ab9 +0x06d:  xor    $0x1,%eax
080d9abc +0x070:  test   %al,%al
080d9abe +0x072:  jne    080d9c0a <+0x1be>
080d9ac4 +0x078:  lea    -0x18(%ebp),%eax
080d9ac7 +0x07b:  mov    %eax,(%esp)
080d9aca +0x07e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080d9acf +0x083:  movl   $0x1af,0x8(%esp)
080d9ad7 +0x08b:  movl   $0x0,0x4(%esp)
080d9adf +0x093:  lea    -0x18(%ebp),%eax
080d9ae2 +0x096:  mov    %eax,(%esp)
080d9ae5 +0x099:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080d9aea +0x09e:  mov    -0xc(%ebp),%eax
080d9aed +0x0a1:  mov    %eax,0x4(%esp)
080d9af1 +0x0a5:  lea    -0x18(%ebp),%eax
080d9af4 +0x0a8:  mov    %eax,(%esp)
080d9af7 +0x0ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080d9afc +0x0b0:  mov    -0xc(%ebp),%eax
080d9aff +0x0b3:  mov    %eax,0x4(%esp)
080d9b03 +0x0b7:  mov    0x8(%ebp),%eax
080d9b06 +0x0ba:  mov    %eax,(%esp)
080d9b09 +0x0bd:  call   080d7012 <_ZNK10BlueMarble15getMovePositionEi>  ; BlueMarble::getMovePosition(int) const
080d9b0e +0x0c2:  mov    0x10(%ebp),%edx
080d9b11 +0x0c5:  mov    %edx,%ecx
080d9b13 +0x0c7:  sub    %eax,%ecx
080d9b15 +0x0c9:  mov    %ecx,%eax
080d9b17 +0x0cb:  mov    %eax,0x4(%esp)
080d9b1b +0x0cf:  lea    -0x18(%ebp),%eax
080d9b1e +0x0d2:  mov    %eax,(%esp)
080d9b21 +0x0d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080d9b26 +0x0da:  movl   $0x1,0x4(%esp)
080d9b2e +0x0e2:  lea    -0x18(%ebp),%eax
080d9b31 +0x0e5:  mov    %eax,(%esp)
080d9b34 +0x0e8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080d9b39 +0x0ed:  lea    -0x18(%ebp),%eax
080d9b3c +0x0f0:  mov    %eax,0x4(%esp)
080d9b40 +0x0f4:  mov    0x8(%ebp),%eax
080d9b43 +0x0f7:  mov    %eax,(%esp)
080d9b46 +0x0fa:  call   080d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>  ; BlueMarble::sendToBlueMarble(PacketGuard&) const
080d9b4b +0x0ff:  mov    -0xc(%ebp),%eax
080d9b4e +0x102:  mov    %eax,0x4(%esp)
080d9b52 +0x106:  mov    0x8(%ebp),%eax
080d9b55 +0x109:  mov    %eax,(%esp)
080d9b58 +0x10c:  call   080d6da2 <_ZN10BlueMarble14resetIndexInfoEi>  ; BlueMarble::resetIndexInfo(int)
080d9b5d +0x111:  mov    -0xc(%ebp),%eax
080d9b60 +0x114:  mov    %eax,0x4(%esp)
080d9b64 +0x118:  mov    0x8(%ebp),%eax
080d9b67 +0x11b:  mov    %eax,(%esp)
080d9b6a +0x11e:  call   080d7012 <_ZNK10BlueMarble15getMovePositionEi>  ; BlueMarble::getMovePosition(int) const
080d9b6f +0x123:  mov    0x10(%ebp),%edx
080d9b72 +0x126:  mov    %edx,%ecx
080d9b74 +0x128:  sub    %eax,%ecx
080d9b76 +0x12a:  mov    %ecx,%eax
080d9b78 +0x12c:  mov    %eax,0x8(%esp)
080d9b7c +0x130:  mov    -0xc(%ebp),%eax
080d9b7f +0x133:  mov    %eax,0x4(%esp)
080d9b83 +0x137:  mov    0x8(%ebp),%eax
080d9b86 +0x13a:  mov    %eax,(%esp)
080d9b89 +0x13d:  call   080d6fd0 <_ZN10BlueMarble15setMovePositionEii>  ; BlueMarble::setMovePosition(int, int)
080d9b8e +0x142:  mov    -0xc(%ebp),%eax
080d9b91 +0x145:  mov    %eax,0x4(%esp)
080d9b95 +0x149:  mov    0x8(%ebp),%eax
080d9b98 +0x14c:  mov    %eax,(%esp)
080d9b9b +0x14f:  call   080d7038 <_ZN10BlueMarble13intoBoardZoneEi>  ; BlueMarble::intoBoardZone(int)
080d9ba0 +0x154:  mov    -0xc(%ebp),%eax
080d9ba3 +0x157:  mov    %eax,0x4(%esp)
080d9ba7 +0x15b:  mov    0x8(%ebp),%eax
080d9baa +0x15e:  mov    %eax,(%esp)
080d9bad +0x161:  call   080d7778 <_ZNK10BlueMarble12getItemIndexEi>  ; BlueMarble::getItemIndex(int) const
080d9bb2 +0x166:  mov    %eax,%ebx
080d9bb4 +0x168:  mov    -0xc(%ebp),%eax
080d9bb7 +0x16b:  mov    %eax,0x4(%esp)
080d9bbb +0x16f:  mov    0x8(%ebp),%eax
080d9bbe +0x172:  mov    %eax,(%esp)
080d9bc1 +0x175:  call   080d73b6 <_ZNK10BlueMarble15getDungeonIndexEi>  ; BlueMarble::getDungeonIndex(int) const
080d9bc6 +0x17a:  mov    %ebx,0xc(%esp)
080d9bca +0x17e:  mov    %eax,0x8(%esp)
080d9bce +0x182:  mov    -0xc(%ebp),%eax
080d9bd1 +0x185:  mov    %eax,0x4(%esp)
080d9bd5 +0x189:  mov    0x8(%ebp),%eax
080d9bd8 +0x18c:  mov    %eax,(%esp)
080d9bdb +0x18f:  call   080d8802 <_ZNK10BlueMarble23sendBoardZoneActionInfoEiij>  ; BlueMarble::sendBoardZoneActionInfo(int, int, unsigned int) const
080d9be0 +0x194:  jmp    080d9bfd <+0x1b1>
080d9be2 +0x196:  mov    %edx,%ebx
080d9be4 +0x198:  mov    %eax,%esi
080d9be6 +0x19a:  lea    -0x18(%ebp),%eax
080d9be9 +0x19d:  mov    %eax,(%esp)
080d9bec +0x1a0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d9bf1 +0x1a5:  mov    %esi,%eax
080d9bf3 +0x1a7:  mov    %ebx,%edx
080d9bf5 +0x1a9:  mov    %eax,(%esp)
080d9bf8 +0x1ac:  call   08ae3750 <_Unwind_Resume>
080d9bfd +0x1b1:  lea    -0x18(%ebp),%eax
080d9c00 +0x1b4:  mov    %eax,(%esp)
080d9c03 +0x1b7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d9c08 +0x1bc:  jmp    080d9c0b <+0x1bf>
080d9c0a +0x1be:  nop
080d9c0b +0x1bf:  add    $0x30,%esp
080d9c0e +0x1c2:  pop    %ebx
080d9c0f +0x1c3:  pop    %esi
080d9c10 +0x1c4:  pop    %ebp
080d9c11 +0x1c5:  ret
```

## 反编译 C

```c
// BlueMarble::movePosition @ 0x80d9a4c

/* BlueMarble::movePosition(CUser*, int) */

void __thiscall BlueMarble::movePosition(BlueMarble *this,CUser *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = getUserSlot(this,param_1);
  if (local_10 == -1) {
    LogManager::logFormat
              (1,"BlueMarble.cpp","void BlueMarble::movePosition(CUser*, int)",0x4f4,
               "BlueMarble::movePosition slot(%d)",0xffffffff);
  }
  else {
    cVar1 = checkThrowDice(this,local_10);
    if (cVar1 == '\x01') {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 080d9ae5 to 080d9bdf has its CatchHandler @ 080d9be2 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1af);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
      iVar2 = getMovePosition(this,local_10);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,param_2 - iVar2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      sendToBlueMarble(this,local_1c);
      resetIndexInfo(this,local_10);
      iVar2 = getMovePosition(this,local_10);
      setMovePosition(this,local_10,param_2 - iVar2);
      intoBoardZone(this,local_10);
      uVar3 = getItemIndex(this,local_10);
      iVar2 = getDungeonIndex(this,local_10);
      sendBoardZoneActionInfo(this,local_10,iVar2,uVar3);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}
```
