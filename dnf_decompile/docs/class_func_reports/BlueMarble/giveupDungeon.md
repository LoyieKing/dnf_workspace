# giveupDungeon

`_ZN10BlueMarble13giveupDungeonEP5CUser`

`BlueMarble::giveupDungeon(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d9572` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d9572  _ZN10BlueMarble13giveupDungeonEP5CUser
#           BlueMarble::giveupDungeon(CUser*)
# range [0x080d9572, 0x080d96f3]
080d9572 +0x000:  push   %ebp
080d9573 +0x001:  mov    %esp,%ebp
080d9575 +0x003:  push   %ebx
080d9576 +0x004:  sub    $0x34,%esp
080d9579 +0x007:  cmpl   $0x0,0xc(%ebp)
080d957d +0x00b:  je     080d96e7 <+0x175>
080d9583 +0x011:  mov    0xc(%ebp),%eax
080d9586 +0x014:  mov    %eax,0x4(%esp)
080d958a +0x018:  mov    0x8(%ebp),%eax
080d958d +0x01b:  mov    %eax,(%esp)
080d9590 +0x01e:  call   080d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>  ; BlueMarble::getUserSlot(CUser*) const
080d9595 +0x023:  mov    %eax,-0x10(%ebp)
080d9598 +0x026:  cmpl   $0xffffffff,-0x10(%ebp)
080d959c +0x02a:  jne    080d95d6 <+0x64>
080d959e +0x02c:  mov    -0x10(%ebp),%eax
080d95a1 +0x02f:  mov    %eax,0x14(%esp)
080d95a5 +0x033:  movl   $"BlueMarble::giveupDungeon slot(%d)",0x10(%esp)
080d95ad +0x03b:  movl   $0x46b,0xc(%esp)
080d95b5 +0x043:  movl   $&_ZZN10BlueMarble13giveupDungeonEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
080d95bd +0x04b:  movl   $"BlueMarble.cpp",0x4(%esp)
080d95c5 +0x053:  movl   $0x1,(%esp)
080d95cc +0x05a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d95d1 +0x05f:  jmp    080d96ee <+0x17c>
080d95d6 +0x064:  mov    0x8(%ebp),%eax
080d95d9 +0x067:  mov    %eax,(%esp)
080d95dc +0x06a:  call   080d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>  ; BlueMarble::getBlueMarbleMap() const
080d95e1 +0x06f:  mov    0x8(%ebp),%edx
080d95e4 +0x072:  mov    0x38(%edx),%edx
080d95e7 +0x075:  mov    %eax,0x4(%esp)
080d95eb +0x079:  mov    %edx,(%esp)
080d95ee +0x07c:  call   088d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>  ; BlueMarbleScriptManager::getMap(int)
080d95f3 +0x081:  test   %eax,%eax
080d95f5 +0x083:  sete   %al
080d95f8 +0x086:  test   %al,%al
080d95fa +0x088:  jne    080d96ea <+0x178>
080d9600 +0x08e:  mov    -0x10(%ebp),%eax
080d9603 +0x091:  mov    0x8(%ebp),%edx
080d9606 +0x094:  add    $0x4,%edx
080d9609 +0x097:  mov    %eax,0x4(%esp)
080d960d +0x09b:  mov    %edx,(%esp)
080d9610 +0x09e:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d9615 +0x0a3:  mov    %eax,(%esp)
080d9618 +0x0a6:  call   080d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>  ; BlueMarbleUserInfo::getBoardZone() const
080d961d +0x0ab:  mov    %eax,%ebx
080d961f +0x0ad:  mov    0x8(%ebp),%eax
080d9622 +0x0b0:  mov    %eax,(%esp)
080d9625 +0x0b3:  call   080d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>  ; BlueMarble::getBlueMarbleMap() const
080d962a +0x0b8:  mov    0x8(%ebp),%edx
080d962d +0x0bb:  mov    0x38(%edx),%edx
080d9630 +0x0be:  mov    %eax,0x4(%esp)
080d9634 +0x0c2:  mov    %edx,(%esp)
080d9637 +0x0c5:  call   088d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>  ; BlueMarbleScriptManager::getMap(int)
080d963c +0x0ca:  mov    %ebx,0x4(%esp)
080d9640 +0x0ce:  mov    %eax,(%esp)
080d9643 +0x0d1:  call   088d5644 <_ZN19BlueMarbleMapScript7getTileEj>  ; BlueMarbleMapScript::getTile(unsigned int)
080d9648 +0x0d6:  mov    %eax,-0xc(%ebp)
080d964b +0x0d9:  cmpl   $0x0,-0xc(%ebp)
080d964f +0x0dd:  je     080d96ed <+0x17b>
080d9655 +0x0e3:  mov    -0xc(%ebp),%eax
080d9658 +0x0e6:  mov    (%eax),%eax
080d965a +0x0e8:  mov    %eax,0x8(%esp)
080d965e +0x0ec:  mov    -0x10(%ebp),%eax
080d9661 +0x0ef:  mov    %eax,0x4(%esp)
080d9665 +0x0f3:  mov    0x8(%ebp),%eax
080d9668 +0x0f6:  mov    %eax,(%esp)
080d966b +0x0f9:  call   080d78f0 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE>  ; BlueMarble::checkMoveFirstZone(int, BlueMarbleTileScript::Type)
080d9670 +0x0fe:  test   %al,%al
080d9672 +0x100:  je     080d96cb <+0x159>
080d9674 +0x102:  mov    -0x10(%ebp),%eax
080d9677 +0x105:  mov    %eax,0x4(%esp)
080d967b +0x109:  mov    0x8(%ebp),%eax
080d967e +0x10c:  mov    %eax,(%esp)
080d9681 +0x10f:  call   080d7012 <_ZNK10BlueMarble15getMovePositionEi>  ; BlueMarble::getMovePosition(int) const
080d9686 +0x114:  mov    $0x1,%edx
080d968b +0x119:  mov    %edx,%ecx
080d968d +0x11b:  sub    %eax,%ecx
080d968f +0x11d:  mov    %ecx,%eax
080d9691 +0x11f:  mov    %eax,0x8(%esp)
080d9695 +0x123:  mov    -0x10(%ebp),%eax
080d9698 +0x126:  mov    %eax,0x4(%esp)
080d969c +0x12a:  mov    0x8(%ebp),%eax
080d969f +0x12d:  mov    %eax,(%esp)
080d96a2 +0x130:  call   080d6fd0 <_ZN10BlueMarble15setMovePositionEii>  ; BlueMarble::setMovePosition(int, int)
080d96a7 +0x135:  mov    -0x10(%ebp),%eax
080d96aa +0x138:  mov    %eax,0x4(%esp)
080d96ae +0x13c:  mov    0x8(%ebp),%eax
080d96b1 +0x13f:  mov    %eax,(%esp)
080d96b4 +0x142:  call   080d6d7c <_ZN10BlueMarble13resetBuffInfoEi>  ; BlueMarble::resetBuffInfo(int)
080d96b9 +0x147:  mov    -0x10(%ebp),%eax
080d96bc +0x14a:  mov    %eax,0x4(%esp)
080d96c0 +0x14e:  mov    0x8(%ebp),%eax
080d96c3 +0x151:  mov    %eax,(%esp)
080d96c6 +0x154:  call   080d88c2 <_ZNK10BlueMarble18sendTileGiveUpInfoEi>  ; BlueMarble::sendTileGiveUpInfo(int) const
080d96cb +0x159:  movl   $0x1,0x8(%esp)
080d96d3 +0x161:  mov    -0x10(%ebp),%eax
080d96d6 +0x164:  mov    %eax,0x4(%esp)
080d96da +0x168:  mov    0x8(%ebp),%eax
080d96dd +0x16b:  mov    %eax,(%esp)
080d96e0 +0x16e:  call   080d793a <_ZN10BlueMarble12setUserStateEiN19BlueMarbleUserState1TE>  ; BlueMarble::setUserState(int, BlueMarbleUserState::T)
080d96e5 +0x173:  jmp    080d96ee <+0x17c>
080d96e7 +0x175:  nop
080d96e8 +0x176:  jmp    080d96ee <+0x17c>
080d96ea +0x178:  nop
080d96eb +0x179:  jmp    080d96ee <+0x17c>
080d96ed +0x17b:  nop
080d96ee +0x17c:  add    $0x34,%esp
080d96f1 +0x17f:  pop    %ebx
080d96f2 +0x180:  pop    %ebp
080d96f3 +0x181:  ret
```

## 反编译 C

```c
// BlueMarble::giveupDungeon @ 0x80d9572

/* BlueMarble::giveupDungeon(CUser*) */

void __thiscall BlueMarble::giveupDungeon(BlueMarble *this,CUser *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BlueMarbleUserInfo *this_00;
  uint uVar4;
  BlueMarbleMapScript *this_01;
  undefined4 *puVar5;
  
  if (param_1 != (CUser *)0x0) {
    uVar2 = getUserSlot(this,param_1);
    if (uVar2 == 0xffffffff) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::giveupDungeon(CUser*)",0x46b,
                 "BlueMarble::giveupDungeon slot(%d)",0xffffffff);
    }
    else {
      getBlueMarbleMap(this);
      iVar3 = BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
      if (iVar3 != 0) {
        this_00 = (BlueMarbleUserInfo *)
                  std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                            ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                             (this + 4),uVar2);
        uVar4 = BlueMarbleUserInfo::getBoardZone(this_00);
        getBlueMarbleMap(this);
        this_01 = (BlueMarbleMapScript *)BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
        puVar5 = (undefined4 *)BlueMarbleMapScript::getTile(this_01,uVar4);
        if (puVar5 != (undefined4 *)0x0) {
          cVar1 = checkMoveFirstZone(this,uVar2,*puVar5);
          if (cVar1 != '\0') {
            iVar3 = getMovePosition(this,uVar2);
            setMovePosition(this,uVar2,1 - iVar3);
            resetBuffInfo(this,uVar2);
            sendTileGiveUpInfo(this,uVar2);
          }
          setUserState(this,uVar2,1);
        }
      }
    }
  }
  return;
}
```
