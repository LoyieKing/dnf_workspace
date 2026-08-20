# userThrowDice

`_ZN10BlueMarble13userThrowDiceEP5CUser`

`BlueMarble::userThrowDice(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d93d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d93d8  _ZN10BlueMarble13userThrowDiceEP5CUser
#           BlueMarble::userThrowDice(CUser*)
# range [0x080d93d8, 0x080d94f5]
080d93d8 +0x000:  push   %ebp
080d93d9 +0x001:  mov    %esp,%ebp
080d93db +0x003:  push   %ebx
080d93dc +0x004:  sub    $0x34,%esp
080d93df +0x007:  cmpl   $0x0,0xc(%ebp)
080d93e3 +0x00b:  je     080d94ef <+0x117>
080d93e9 +0x011:  mov    0xc(%ebp),%eax
080d93ec +0x014:  mov    %eax,0x4(%esp)
080d93f0 +0x018:  mov    0x8(%ebp),%eax
080d93f3 +0x01b:  mov    %eax,(%esp)
080d93f6 +0x01e:  call   080d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>  ; BlueMarble::getUserSlot(CUser*) const
080d93fb +0x023:  mov    %eax,-0xc(%ebp)
080d93fe +0x026:  cmpl   $0xffffffff,-0xc(%ebp)
080d9402 +0x02a:  jne    080d943c <+0x64>
080d9404 +0x02c:  mov    -0xc(%ebp),%eax
080d9407 +0x02f:  mov    %eax,0x14(%esp)
080d940b +0x033:  movl   $"BlueMarble::userThrowDice slot(%d)",0x10(%esp)
080d9413 +0x03b:  movl   $0x446,0xc(%esp)
080d941b +0x043:  movl   $&_ZZN10BlueMarble13userThrowDiceEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
080d9423 +0x04b:  movl   $"BlueMarble.cpp",0x4(%esp)
080d942b +0x053:  movl   $0x1,(%esp)
080d9432 +0x05a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d9437 +0x05f:  jmp    080d94f0 <+0x118>
080d943c +0x064:  mov    -0xc(%ebp),%eax
080d943f +0x067:  mov    %eax,0x4(%esp)
080d9443 +0x06b:  mov    0x8(%ebp),%eax
080d9446 +0x06e:  mov    %eax,(%esp)
080d9449 +0x071:  call   080d6ed8 <_ZN10BlueMarble14checkThrowDiceEi>  ; BlueMarble::checkThrowDice(int)
080d944e +0x076:  test   %al,%al
080d9450 +0x078:  je     080d94f0 <+0x118>
080d9456 +0x07e:  mov    -0xc(%ebp),%eax
080d9459 +0x081:  mov    %eax,0x4(%esp)
080d945d +0x085:  mov    0x8(%ebp),%eax
080d9460 +0x088:  mov    %eax,(%esp)
080d9463 +0x08b:  call   080d6da2 <_ZN10BlueMarble14resetIndexInfoEi>  ; BlueMarble::resetIndexInfo(int)
080d9468 +0x090:  mov    -0xc(%ebp),%eax
080d946b +0x093:  mov    %eax,0x4(%esp)
080d946f +0x097:  mov    0x8(%ebp),%eax
080d9472 +0x09a:  mov    %eax,(%esp)
080d9475 +0x09d:  call   080d6f62 <_ZN10BlueMarble9throwDiceEi>  ; BlueMarble::throwDice(int)
080d947a +0x0a2:  mov    0x8(%ebp),%eax
080d947d +0x0a5:  mov    %eax,(%esp)
080d9480 +0x0a8:  call   080d6fc4 <_ZNK10BlueMarble13getDiceNumberEv>  ; BlueMarble::getDiceNumber() const
080d9485 +0x0ad:  mov    %eax,0x8(%esp)
080d9489 +0x0b1:  mov    -0xc(%ebp),%eax
080d948c +0x0b4:  mov    %eax,0x4(%esp)
080d9490 +0x0b8:  mov    0x8(%ebp),%eax
080d9493 +0x0bb:  mov    %eax,(%esp)
080d9496 +0x0be:  call   080d6fd0 <_ZN10BlueMarble15setMovePositionEii>  ; BlueMarble::setMovePosition(int, int)
080d949b +0x0c3:  mov    -0xc(%ebp),%eax
080d949e +0x0c6:  mov    %eax,0x4(%esp)
080d94a2 +0x0ca:  mov    0x8(%ebp),%eax
080d94a5 +0x0cd:  mov    %eax,(%esp)
080d94a8 +0x0d0:  call   080d7038 <_ZN10BlueMarble13intoBoardZoneEi>  ; BlueMarble::intoBoardZone(int)
080d94ad +0x0d5:  mov    -0xc(%ebp),%eax
080d94b0 +0x0d8:  mov    %eax,0x4(%esp)
080d94b4 +0x0dc:  mov    0x8(%ebp),%eax
080d94b7 +0x0df:  mov    %eax,(%esp)
080d94ba +0x0e2:  call   080d7778 <_ZNK10BlueMarble12getItemIndexEi>  ; BlueMarble::getItemIndex(int) const
080d94bf +0x0e7:  mov    %eax,%ebx
080d94c1 +0x0e9:  mov    -0xc(%ebp),%eax
080d94c4 +0x0ec:  mov    %eax,0x4(%esp)
080d94c8 +0x0f0:  mov    0x8(%ebp),%eax
080d94cb +0x0f3:  mov    %eax,(%esp)
080d94ce +0x0f6:  call   080d73b6 <_ZNK10BlueMarble15getDungeonIndexEi>  ; BlueMarble::getDungeonIndex(int) const
080d94d3 +0x0fb:  mov    %ebx,0xc(%esp)
080d94d7 +0x0ff:  mov    %eax,0x8(%esp)
080d94db +0x103:  mov    -0xc(%ebp),%eax
080d94de +0x106:  mov    %eax,0x4(%esp)
080d94e2 +0x10a:  mov    0x8(%ebp),%eax
080d94e5 +0x10d:  mov    %eax,(%esp)
080d94e8 +0x110:  call   080d8802 <_ZNK10BlueMarble23sendBoardZoneActionInfoEiij>  ; BlueMarble::sendBoardZoneActionInfo(int, int, unsigned int) const
080d94ed +0x115:  jmp    080d94f0 <+0x118>
080d94ef +0x117:  nop
080d94f0 +0x118:  add    $0x34,%esp
080d94f3 +0x11b:  pop    %ebx
080d94f4 +0x11c:  pop    %ebp
080d94f5 +0x11d:  ret
```

## 反编译 C

```c
// BlueMarble::userThrowDice @ 0x80d93d8

/* BlueMarble::userThrowDice(CUser*) */

void __thiscall BlueMarble::userThrowDice(BlueMarble *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = getUserSlot(this,param_1);
    if (iVar2 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::userThrowDice(CUser*)",0x446,
                 "BlueMarble::userThrowDice slot(%d)",0xffffffff);
    }
    else {
      cVar1 = checkThrowDice(this,iVar2);
      if (cVar1 != '\0') {
        resetIndexInfo(this,iVar2);
        throwDice(this,iVar2);
        iVar3 = getDiceNumber(this);
        setMovePosition(this,iVar2,iVar3);
        intoBoardZone(this,iVar2);
        uVar4 = getItemIndex(this,iVar2);
        iVar3 = getDungeonIndex(this,iVar2);
        sendBoardZoneActionInfo(this,iVar2,iVar3,uVar4);
      }
    }
  }
  return;
}
```
