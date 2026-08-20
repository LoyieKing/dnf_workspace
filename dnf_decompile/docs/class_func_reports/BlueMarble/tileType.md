# tileType

`_ZN10BlueMarble8tileTypeEi`

`BlueMarble::tileType(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d70ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d70ae  _ZN10BlueMarble8tileTypeEi
#           BlueMarble::tileType(int)
# range [0x080d70ae, 0x080d7389]
080d70ae +0x000:  push   %ebp
080d70af +0x001:  mov    %esp,%ebp
080d70b1 +0x003:  push   %ebx
080d70b2 +0x004:  sub    $0x24,%esp
080d70b5 +0x007:  mov    0xc(%ebp),%eax
080d70b8 +0x00a:  mov    0x8(%ebp),%edx
080d70bb +0x00d:  add    $0x4,%edx
080d70be +0x010:  mov    %eax,0x4(%esp)
080d70c2 +0x014:  mov    %edx,(%esp)
080d70c5 +0x017:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d70ca +0x01c:  mov    %eax,(%esp)
080d70cd +0x01f:  call   080d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>  ; BlueMarbleUserInfo::getBoardZone() const
080d70d2 +0x024:  mov    %eax,-0x10(%ebp)
080d70d5 +0x027:  mov    0x8(%ebp),%eax
080d70d8 +0x02a:  mov    %eax,(%esp)
080d70db +0x02d:  call   080d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>  ; BlueMarble::getBlueMarbleMap() const
080d70e0 +0x032:  mov    0x8(%ebp),%edx
080d70e3 +0x035:  mov    0x38(%edx),%edx
080d70e6 +0x038:  mov    %eax,0x4(%esp)
080d70ea +0x03c:  mov    %edx,(%esp)
080d70ed +0x03f:  call   088d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>  ; BlueMarbleScriptManager::getMap(int)
080d70f2 +0x044:  test   %eax,%eax
080d70f4 +0x046:  sete   %al
080d70f7 +0x049:  test   %al,%al
080d70f9 +0x04b:  jne    080d737c <+0x2ce>
080d70ff +0x051:  mov    -0x10(%ebp),%ebx
080d7102 +0x054:  mov    0x8(%ebp),%eax
080d7105 +0x057:  mov    %eax,(%esp)
080d7108 +0x05a:  call   080d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>  ; BlueMarble::getBlueMarbleMap() const
080d710d +0x05f:  mov    0x8(%ebp),%edx
080d7110 +0x062:  mov    0x38(%edx),%edx
080d7113 +0x065:  mov    %eax,0x4(%esp)
080d7117 +0x069:  mov    %edx,(%esp)
080d711a +0x06c:  call   088d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>  ; BlueMarbleScriptManager::getMap(int)
080d711f +0x071:  mov    %ebx,0x4(%esp)
080d7123 +0x075:  mov    %eax,(%esp)
080d7126 +0x078:  call   088d5644 <_ZN19BlueMarbleMapScript7getTileEj>  ; BlueMarbleMapScript::getTile(unsigned int)
080d712b +0x07d:  mov    %eax,-0xc(%ebp)
080d712e +0x080:  cmpl   $0x0,-0xc(%ebp)
080d7132 +0x084:  je     080d737f <+0x2d1>
080d7138 +0x08a:  mov    -0xc(%ebp),%eax
080d713b +0x08d:  mov    (%eax),%eax
080d713d +0x08f:  cmp    $0xd,%eax
080d7140 +0x092:  ja     080d7383 <+0x2d5>
080d7146 +0x098:  mov    &data#5f3cd575(.rodata)(,%eax,4),%eax
080d714d +0x09f:  jmp    *%eax
080d714f +0x0a1:  movl   $0x2,0x8(%esp)
080d7157 +0x0a9:  mov    0xc(%ebp),%eax
080d715a +0x0ac:  mov    %eax,0x4(%esp)
080d715e +0x0b0:  mov    0x8(%ebp),%eax
080d7161 +0x0b3:  mov    %eax,(%esp)
080d7164 +0x0b6:  call   080d73dc <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE>  ; BlueMarble::getRandomDungeon(int, BlueMarbleTileScript::Type) const
080d7169 +0x0bb:  mov    %eax,0x8(%esp)
080d716d +0x0bf:  mov    0xc(%ebp),%eax
080d7170 +0x0c2:  mov    %eax,0x4(%esp)
080d7174 +0x0c6:  mov    0x8(%ebp),%eax
080d7177 +0x0c9:  mov    %eax,(%esp)
080d717a +0x0cc:  call   080d738a <_ZN10BlueMarble15setDungeonIndexEii>  ; BlueMarble::setDungeonIndex(int, int)
080d717f +0x0d1:  jmp    080d7383 <+0x2d5>
080d7184 +0x0d6:  mov    -0xc(%ebp),%eax
080d7187 +0x0d9:  mov    0x8(%eax),%eax
080d718a +0x0dc:  mov    %eax,0x8(%esp)
080d718e +0x0e0:  mov    0xc(%ebp),%eax
080d7191 +0x0e3:  mov    %eax,0x4(%esp)
080d7195 +0x0e7:  mov    0x8(%ebp),%eax
080d7198 +0x0ea:  mov    %eax,(%esp)
080d719b +0x0ed:  call   080d77f0 <_ZN10BlueMarble11setGoldBuffEii>  ; BlueMarble::setGoldBuff(int, int)
080d71a0 +0x0f2:  jmp    080d7383 <+0x2d5>
080d71a5 +0x0f7:  mov    -0xc(%ebp),%eax
080d71a8 +0x0fa:  mov    0x8(%eax),%eax
080d71ab +0x0fd:  mov    %eax,0x8(%esp)
080d71af +0x101:  mov    0xc(%ebp),%eax
080d71b2 +0x104:  mov    %eax,0x4(%esp)
080d71b6 +0x108:  mov    0x8(%ebp),%eax
080d71b9 +0x10b:  mov    %eax,(%esp)
080d71bc +0x10e:  call   080d779e <_ZN10BlueMarble10setExpBuffEii>  ; BlueMarble::setExpBuff(int, int)
080d71c1 +0x113:  jmp    080d7383 <+0x2d5>
080d71c6 +0x118:  mov    -0xc(%ebp),%eax
080d71c9 +0x11b:  mov    0x8(%eax),%eax
080d71cc +0x11e:  mov    %eax,0x8(%esp)
080d71d0 +0x122:  mov    0xc(%ebp),%eax
080d71d3 +0x125:  mov    %eax,0x4(%esp)
080d71d7 +0x129:  mov    0x8(%ebp),%eax
080d71da +0x12c:  mov    %eax,(%esp)
080d71dd +0x12f:  call   080d7842 <_ZN10BlueMarble11setDropBuffEii>  ; BlueMarble::setDropBuff(int, int)
080d71e2 +0x134:  jmp    080d7383 <+0x2d5>
080d71e7 +0x139:  mov    0x8(%ebp),%eax
080d71ea +0x13c:  mov    %eax,(%esp)
080d71ed +0x13f:  call   080d7690 <_ZNK10BlueMarble13getRandomItemEv>  ; BlueMarble::getRandomItem() const
080d71f2 +0x144:  mov    %eax,0x8(%esp)
080d71f6 +0x148:  mov    0xc(%ebp),%eax
080d71f9 +0x14b:  mov    %eax,0x4(%esp)
080d71fd +0x14f:  mov    0x8(%ebp),%eax
080d7200 +0x152:  mov    %eax,(%esp)
080d7203 +0x155:  call   080d7746 <_ZN10BlueMarble12setItemIndexEii>  ; BlueMarble::setItemIndex(int, int)
080d7208 +0x15a:  jmp    080d7383 <+0x2d5>
080d720d +0x15f:  mov    -0x10(%ebp),%eax
080d7210 +0x162:  mov    %eax,0x4(%esp)
080d7214 +0x166:  mov    0x8(%ebp),%eax
080d7217 +0x169:  mov    %eax,(%esp)
080d721a +0x16c:  call   080d7a9a <_ZNK10BlueMarble12getVisitZoneEi>  ; BlueMarble::getVisitZone(int) const
080d721f +0x171:  xor    $0x1,%eax
080d7222 +0x174:  test   %al,%al
080d7224 +0x176:  je     080d7382 <+0x2d4>
080d722a +0x17c:  movl   $0x7,0x8(%esp)
080d7232 +0x184:  mov    0xc(%ebp),%eax
080d7235 +0x187:  mov    %eax,0x4(%esp)
080d7239 +0x18b:  mov    0x8(%ebp),%eax
080d723c +0x18e:  mov    %eax,(%esp)
080d723f +0x191:  call   080d73dc <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE>  ; BlueMarble::getRandomDungeon(int, BlueMarbleTileScript::Type) const
080d7244 +0x196:  mov    %eax,0x8(%esp)
080d7248 +0x19a:  mov    0xc(%ebp),%eax
080d724b +0x19d:  mov    %eax,0x4(%esp)
080d724f +0x1a1:  mov    0x8(%ebp),%eax
080d7252 +0x1a4:  mov    %eax,(%esp)
080d7255 +0x1a7:  call   080d738a <_ZN10BlueMarble15setDungeonIndexEii>  ; BlueMarble::setDungeonIndex(int, int)
080d725a +0x1ac:  jmp    080d7383 <+0x2d5>
080d725f +0x1b1:  mov    -0x10(%ebp),%eax
080d7262 +0x1b4:  mov    %eax,0x4(%esp)
080d7266 +0x1b8:  mov    0x8(%ebp),%eax
080d7269 +0x1bb:  mov    %eax,(%esp)
080d726c +0x1be:  call   080d7a26 <_ZN10BlueMarble12setVisitZoneEi>  ; BlueMarble::setVisitZone(int)
080d7271 +0x1c3:  mov    -0xc(%ebp),%eax
080d7274 +0x1c6:  mov    0x8(%eax),%eax
080d7277 +0x1c9:  mov    %eax,0x8(%esp)
080d727b +0x1cd:  mov    0xc(%ebp),%eax
080d727e +0x1d0:  mov    %eax,0x4(%esp)
080d7282 +0x1d4:  mov    0x8(%ebp),%eax
080d7285 +0x1d7:  mov    %eax,(%esp)
080d7288 +0x1da:  call   080d6fd0 <_ZN10BlueMarble15setMovePositionEii>  ; BlueMarble::setMovePosition(int, int)
080d728d +0x1df:  movl   $0x9,0x8(%esp)
080d7295 +0x1e7:  mov    0xc(%ebp),%eax
080d7298 +0x1ea:  mov    %eax,0x4(%esp)
080d729c +0x1ee:  mov    0x8(%ebp),%eax
080d729f +0x1f1:  mov    %eax,(%esp)
080d72a2 +0x1f4:  call   080d78f0 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE>  ; BlueMarble::checkMoveFirstZone(int, BlueMarbleTileScript::Type)
080d72a7 +0x1f9:  test   %al,%al
080d72a9 +0x1fb:  je     080d72bd <+0x20f>
080d72ab +0x1fd:  mov    0xc(%ebp),%eax
080d72ae +0x200:  mov    %eax,0x4(%esp)
080d72b2 +0x204:  mov    0x8(%ebp),%eax
080d72b5 +0x207:  mov    %eax,(%esp)
080d72b8 +0x20a:  call   080d6d7c <_ZN10BlueMarble13resetBuffInfoEi>  ; BlueMarble::resetBuffInfo(int)
080d72bd +0x20f:  mov    0xc(%ebp),%eax
080d72c0 +0x212:  mov    %eax,0x4(%esp)
080d72c4 +0x216:  mov    0x8(%ebp),%eax
080d72c7 +0x219:  mov    %eax,(%esp)
080d72ca +0x21c:  call   080d7038 <_ZN10BlueMarble13intoBoardZoneEi>  ; BlueMarble::intoBoardZone(int)
080d72cf +0x221:  jmp    080d7383 <+0x2d5>
080d72d4 +0x226:  mov    -0x10(%ebp),%eax
080d72d7 +0x229:  mov    %eax,0x4(%esp)
080d72db +0x22d:  mov    0x8(%ebp),%eax
080d72de +0x230:  mov    %eax,(%esp)
080d72e1 +0x233:  call   080d7a26 <_ZN10BlueMarble12setVisitZoneEi>  ; BlueMarble::setVisitZone(int)
080d72e6 +0x238:  mov    -0xc(%ebp),%eax
080d72e9 +0x23b:  mov    0x8(%eax),%ebx
080d72ec +0x23e:  mov    0xc(%ebp),%eax
080d72ef +0x241:  mov    %eax,0x4(%esp)
080d72f3 +0x245:  mov    0x8(%ebp),%eax
080d72f6 +0x248:  mov    %eax,(%esp)
080d72f9 +0x24b:  call   080d7012 <_ZNK10BlueMarble15getMovePositionEi>  ; BlueMarble::getMovePosition(int) const
080d72fe +0x250:  mov    %ebx,%edx
080d7300 +0x252:  sub    %eax,%edx
080d7302 +0x254:  mov    %edx,%eax
080d7304 +0x256:  mov    %eax,0x8(%esp)
080d7308 +0x25a:  mov    0xc(%ebp),%eax
080d730b +0x25d:  mov    %eax,0x4(%esp)
080d730f +0x261:  mov    0x8(%ebp),%eax
080d7312 +0x264:  mov    %eax,(%esp)
080d7315 +0x267:  call   080d6fd0 <_ZN10BlueMarble15setMovePositionEii>  ; BlueMarble::setMovePosition(int, int)
080d731a +0x26c:  movl   $0xa,0x8(%esp)
080d7322 +0x274:  mov    0xc(%ebp),%eax
080d7325 +0x277:  mov    %eax,0x4(%esp)
080d7329 +0x27b:  mov    0x8(%ebp),%eax
080d732c +0x27e:  mov    %eax,(%esp)
080d732f +0x281:  call   080d78f0 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE>  ; BlueMarble::checkMoveFirstZone(int, BlueMarbleTileScript::Type)
080d7334 +0x286:  test   %al,%al
080d7336 +0x288:  je     080d734a <+0x29c>
080d7338 +0x28a:  mov    0xc(%ebp),%eax
080d733b +0x28d:  mov    %eax,0x4(%esp)
080d733f +0x291:  mov    0x8(%ebp),%eax
080d7342 +0x294:  mov    %eax,(%esp)
080d7345 +0x297:  call   080d6d7c <_ZN10BlueMarble13resetBuffInfoEi>  ; BlueMarble::resetBuffInfo(int)
080d734a +0x29c:  mov    0xc(%ebp),%eax
080d734d +0x29f:  mov    %eax,0x4(%esp)
080d7351 +0x2a3:  mov    0x8(%ebp),%eax
080d7354 +0x2a6:  mov    %eax,(%esp)
080d7357 +0x2a9:  call   080d7038 <_ZN10BlueMarble13intoBoardZoneEi>  ; BlueMarble::intoBoardZone(int)
080d735c +0x2ae:  jmp    080d7383 <+0x2d5>
080d735e +0x2b0:  mov    -0xc(%ebp),%eax
080d7361 +0x2b3:  mov    0x8(%eax),%eax
080d7364 +0x2b6:  mov    %eax,0x8(%esp)
080d7368 +0x2ba:  mov    0xc(%ebp),%eax
080d736b +0x2bd:  mov    %eax,0x4(%esp)
080d736f +0x2c1:  mov    0x8(%ebp),%eax
080d7372 +0x2c4:  mov    %eax,(%esp)
080d7375 +0x2c7:  call   080d738a <_ZN10BlueMarble15setDungeonIndexEii>  ; BlueMarble::setDungeonIndex(int, int)
080d737a +0x2cc:  jmp    080d7383 <+0x2d5>
080d737c +0x2ce:  nop
080d737d +0x2cf:  jmp    080d7383 <+0x2d5>
080d737f +0x2d1:  nop
080d7380 +0x2d2:  jmp    080d7383 <+0x2d5>
080d7382 +0x2d4:  nop
080d7383 +0x2d5:  add    $0x24,%esp
080d7386 +0x2d8:  pop    %ebx
080d7387 +0x2d9:  pop    %ebp
080d7388 +0x2da:  ret
080d7389 +0x2db:  nop
```

## 反编译 C

```c
// BlueMarble::tileType @ 0x80d70ae

/* BlueMarble::tileType(int) */

void __thiscall BlueMarble::tileType(BlueMarble *this,int param_1)

{
  char cVar1;
  BlueMarbleUserInfo *this_00;
  uint uVar2;
  int iVar3;
  BlueMarbleMapScript *this_01;
  undefined4 *puVar4;
  int iVar5;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  uVar2 = BlueMarbleUserInfo::getBoardZone(this_00);
  getBlueMarbleMap(this);
  iVar3 = BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
  if (iVar3 != 0) {
    getBlueMarbleMap(this);
    this_01 = (BlueMarbleMapScript *)BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
    puVar4 = (undefined4 *)BlueMarbleMapScript::getTile(this_01,uVar2);
    if (puVar4 != (undefined4 *)0x0) {
      switch(*puVar4) {
      case 2:
      case 8:
        iVar3 = getRandomDungeon(this,param_1,2);
        setDungeonIndex(this,param_1,iVar3);
        break;
      case 3:
        setGoldBuff(this,param_1,puVar4[2]);
        break;
      case 4:
        setExpBuff(this,param_1,puVar4[2]);
        break;
      case 5:
        setDropBuff(this,param_1,puVar4[2]);
        break;
      case 6:
        iVar3 = getRandomItem(this);
        setItemIndex(this,param_1,iVar3);
        break;
      case 7:
        cVar1 = getVisitZone((int)this);
        if (cVar1 != '\x01') {
          iVar3 = getRandomDungeon(this,param_1,7);
          setDungeonIndex(this,param_1,iVar3);
        }
        break;
      case 9:
        setVisitZone((int)this);
        setMovePosition(this,param_1,puVar4[2]);
        cVar1 = checkMoveFirstZone(this,param_1,9);
        if (cVar1 != '\0') {
          resetBuffInfo(this,param_1);
        }
        intoBoardZone(this,param_1);
        break;
      case 10:
        setVisitZone((int)this);
        iVar3 = puVar4[2];
        iVar5 = getMovePosition(this,param_1);
        setMovePosition(this,param_1,iVar3 - iVar5);
        cVar1 = checkMoveFirstZone(this,param_1,10);
        if (cVar1 != '\0') {
          resetBuffInfo(this,param_1);
        }
        intoBoardZone(this,param_1);
        break;
      case 0xb:
      case 0xc:
      case 0xd:
        setDungeonIndex(this,param_1,puVar4[2]);
      }
    }
  }
  return;
}
```
