# getRandomDungeon

`_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE`

`BlueMarble::getRandomDungeon(int, BlueMarbleTileScript::Type) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d73dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d73dc  _ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE
#           BlueMarble::getRandomDungeon(int, BlueMarbleTileScript::Type) const
# range [0x080d73dc, 0x080d768f]
080d73dc +0x000:  push   %ebp
080d73dd +0x001:  mov    %esp,%ebp
080d73df +0x003:  push   %esi
080d73e0 +0x004:  push   %ebx
080d73e1 +0x005:  sub    $0x50,%esp
080d73e4 +0x008:  lea    -0x44(%ebp),%eax
080d73e7 +0x00b:  mov    %eax,(%esp)
080d73ea +0x00e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
080d73ef +0x013:  mov    0xc(%ebp),%eax
080d73f2 +0x016:  mov    0x8(%ebp),%edx
080d73f5 +0x019:  add    $0x4,%edx
080d73f8 +0x01c:  mov    %eax,0x4(%esp)
080d73fc +0x020:  mov    %edx,(%esp)
080d73ff +0x023:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d7404 +0x028:  mov    %eax,(%esp)
080d7407 +0x02b:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d740c +0x030:  mov    %eax,(%esp)
080d740f +0x033:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
080d7414 +0x038:  mov    %eax,-0x14(%ebp)
080d7417 +0x03b:  mov    0x8(%ebp),%eax
080d741a +0x03e:  mov    %eax,(%esp)
080d741d +0x041:  call   080d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>  ; BlueMarble::getBlueMarbleMap() const
080d7422 +0x046:  mov    0x8(%ebp),%edx
080d7425 +0x049:  mov    0x38(%edx),%edx
080d7428 +0x04c:  mov    %eax,0x4(%esp)
080d742c +0x050:  mov    %edx,(%esp)
080d742f +0x053:  call   088d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>  ; BlueMarbleScriptManager::getMap(int)
080d7434 +0x058:  test   %eax,%eax
080d7436 +0x05a:  sete   %al
080d7439 +0x05d:  test   %al,%al
080d743b +0x05f:  je     080d7447 <+0x6b>
080d743d +0x061:  mov    $0x0,%ebx
080d7442 +0x066:  jmp    080d7679 <+0x29d>
080d7447 +0x06b:  mov    0xc(%ebp),%eax
080d744a +0x06e:  mov    0x8(%ebp),%edx
080d744d +0x071:  add    $0x4,%edx
080d7450 +0x074:  mov    %eax,0x4(%esp)
080d7454 +0x078:  mov    %edx,(%esp)
080d7457 +0x07b:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d745c +0x080:  mov    %eax,(%esp)
080d745f +0x083:  call   080d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>  ; BlueMarbleUserInfo::getBoardZone() const
080d7464 +0x088:  mov    %eax,%ebx
080d7466 +0x08a:  mov    0x8(%ebp),%eax
080d7469 +0x08d:  mov    %eax,(%esp)
080d746c +0x090:  call   080d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>  ; BlueMarble::getBlueMarbleMap() const
080d7471 +0x095:  mov    0x8(%ebp),%edx
080d7474 +0x098:  mov    0x38(%edx),%edx
080d7477 +0x09b:  mov    %eax,0x4(%esp)
080d747b +0x09f:  mov    %edx,(%esp)
080d747e +0x0a2:  call   088d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>  ; BlueMarbleScriptManager::getMap(int)
080d7483 +0x0a7:  mov    %ebx,0x4(%esp)
080d7487 +0x0ab:  mov    %eax,(%esp)
080d748a +0x0ae:  call   088d5644 <_ZN19BlueMarbleMapScript7getTileEj>  ; BlueMarbleMapScript::getTile(unsigned int)
080d748f +0x0b3:  mov    %eax,-0x10(%ebp)
080d7492 +0x0b6:  cmpl   $0x0,-0x10(%ebp)
080d7496 +0x0ba:  jne    080d74a2 <+0xc6>
080d7498 +0x0bc:  mov    $0x0,%ebx
080d749d +0x0c1:  jmp    080d7679 <+0x29d>
080d74a2 +0x0c6:  mov    -0x10(%ebp),%eax
080d74a5 +0x0c9:  movzbl 0x4(%eax),%eax
080d74a9 +0x0cd:  xor    $0x1,%eax
080d74ac +0x0d0:  test   %al,%al
080d74ae +0x0d2:  je     080d74ba <+0xde>
080d74b0 +0x0d4:  mov    $0x0,%ebx
080d74b5 +0x0d9:  jmp    080d7679 <+0x29d>
080d74ba +0x0de:  mov    0x10(%ebp),%eax
080d74bd +0x0e1:  cmp    $0x7,%eax
080d74c0 +0x0e4:  je     080d74d1 <+0xf5>
080d74c2 +0x0e6:  cmp    $0x8,%eax
080d74c5 +0x0e9:  je     080d752f <+0x153>
080d74c7 +0x0eb:  cmp    $0x2,%eax
080d74ca +0x0ee:  je     080d752f <+0x153>
080d74cc +0x0f0:  jmp    080d758a <+0x1ae>
080d74d1 +0x0f5:  mov    0x8(%ebp),%eax
080d74d4 +0x0f8:  mov    0x38(%eax),%eax
080d74d7 +0x0fb:  lea    0x30(%eax),%ecx
080d74da +0x0fe:  lea    -0x38(%ebp),%eax
080d74dd +0x101:  mov    -0x14(%ebp),%edx
080d74e0 +0x104:  mov    %edx,0x8(%esp)
080d74e4 +0x108:  mov    %ecx,0x4(%esp)
080d74e8 +0x10c:  mov    %eax,(%esp)
080d74eb +0x10f:  call   088d5fde <_ZN20BlueMarbleInfoScript21getUniqueDungeonIndexEi>  ; BlueMarbleInfoScript::getUniqueDungeonIndex(int)
080d74f0 +0x114:  sub    $0x4,%esp
080d74f3 +0x117:  lea    -0x38(%ebp),%eax
080d74f6 +0x11a:  mov    %eax,0x4(%esp)
080d74fa +0x11e:  lea    -0x44(%ebp),%eax
080d74fd +0x121:  mov    %eax,(%esp)
080d7500 +0x124:  call   080da51e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6bb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6bb
080d7505 +0x129:  jmp    080d751f <+0x143>
080d7507 +0x12b:  mov    %edx,%ebx
080d7509 +0x12d:  mov    %eax,%esi
080d750b +0x12f:  lea    -0x38(%ebp),%eax
080d750e +0x132:  mov    %eax,(%esp)
080d7511 +0x135:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080d7516 +0x13a:  mov    %esi,%eax
080d7518 +0x13c:  mov    %ebx,%edx
080d751a +0x13e:  jmp    080d765e <+0x282>
080d751f +0x143:  lea    -0x38(%ebp),%eax
080d7522 +0x146:  mov    %eax,(%esp)
080d7525 +0x149:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080d752a +0x14e:  jmp    080d75e3 <+0x207>
080d752f +0x153:  mov    0x8(%ebp),%eax
080d7532 +0x156:  mov    0x38(%eax),%eax
080d7535 +0x159:  lea    0x30(%eax),%ecx
080d7538 +0x15c:  lea    -0x2c(%ebp),%eax
080d753b +0x15f:  mov    -0x14(%ebp),%edx
080d753e +0x162:  mov    %edx,0x8(%esp)
080d7542 +0x166:  mov    %ecx,0x4(%esp)
080d7546 +0x16a:  mov    %eax,(%esp)
080d7549 +0x16d:  call   088d5f38 <_ZN20BlueMarbleInfoScript19getBossDungeonIndexEi>  ; BlueMarbleInfoScript::getBossDungeonIndex(int)
080d754e +0x172:  sub    $0x4,%esp
080d7551 +0x175:  lea    -0x2c(%ebp),%eax
080d7554 +0x178:  mov    %eax,0x4(%esp)
080d7558 +0x17c:  lea    -0x44(%ebp),%eax
080d755b +0x17f:  mov    %eax,(%esp)
080d755e +0x182:  call   080da51e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6bb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6bb
080d7563 +0x187:  jmp    080d757d <+0x1a1>
080d7565 +0x189:  mov    %edx,%ebx
080d7567 +0x18b:  mov    %eax,%esi
080d7569 +0x18d:  lea    -0x2c(%ebp),%eax
080d756c +0x190:  mov    %eax,(%esp)
080d756f +0x193:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080d7574 +0x198:  mov    %esi,%eax
080d7576 +0x19a:  mov    %ebx,%edx
080d7578 +0x19c:  jmp    080d765e <+0x282>
080d757d +0x1a1:  lea    -0x2c(%ebp),%eax
080d7580 +0x1a4:  mov    %eax,(%esp)
080d7583 +0x1a7:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080d7588 +0x1ac:  jmp    080d75e3 <+0x207>
080d758a +0x1ae:  mov    0x8(%ebp),%eax
080d758d +0x1b1:  mov    0x38(%eax),%eax
080d7590 +0x1b4:  lea    0x30(%eax),%ecx
080d7593 +0x1b7:  lea    -0x20(%ebp),%eax
080d7596 +0x1ba:  mov    -0x14(%ebp),%edx
080d7599 +0x1bd:  mov    %edx,0x8(%esp)
080d759d +0x1c1:  mov    %ecx,0x4(%esp)
080d75a1 +0x1c5:  mov    %eax,(%esp)
080d75a4 +0x1c8:  call   088d5e92 <_ZN20BlueMarbleInfoScript21getRandomDungeonIndexEi>  ; BlueMarbleInfoScript::getRandomDungeonIndex(int)
080d75a9 +0x1cd:  sub    $0x4,%esp
080d75ac +0x1d0:  lea    -0x20(%ebp),%eax
080d75af +0x1d3:  mov    %eax,0x4(%esp)
080d75b3 +0x1d7:  lea    -0x44(%ebp),%eax
080d75b6 +0x1da:  mov    %eax,(%esp)
080d75b9 +0x1dd:  call   080da51e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6bb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6bb
080d75be +0x1e2:  jmp    080d75d8 <+0x1fc>
080d75c0 +0x1e4:  mov    %edx,%ebx
080d75c2 +0x1e6:  mov    %eax,%esi
080d75c4 +0x1e8:  lea    -0x20(%ebp),%eax
080d75c7 +0x1eb:  mov    %eax,(%esp)
080d75ca +0x1ee:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080d75cf +0x1f3:  mov    %esi,%eax
080d75d1 +0x1f5:  mov    %ebx,%edx
080d75d3 +0x1f7:  jmp    080d765e <+0x282>
080d75d8 +0x1fc:  lea    -0x20(%ebp),%eax
080d75db +0x1ff:  mov    %eax,(%esp)
080d75de +0x202:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080d75e3 +0x207:  lea    -0x44(%ebp),%eax
080d75e6 +0x20a:  mov    %eax,(%esp)
080d75e9 +0x20d:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080d75ee +0x212:  test   %eax,%eax
080d75f0 +0x214:  sete   %al
080d75f3 +0x217:  test   %al,%al
080d75f5 +0x219:  je     080d75fe <+0x222>
080d75f7 +0x21b:  mov    $0x0,%ebx
080d75fc +0x220:  jmp    080d7679 <+0x29d>
080d75fe +0x222:  mov    0x8(%ebp),%eax
080d7601 +0x225:  mov    0x14(%eax),%eax
080d7604 +0x228:  add    $0x1390,%eax
080d7609 +0x22d:  mov    %eax,(%esp)
080d760c +0x230:  call   080cba46 <_GLOBAL__I__ZN10BingoEventC2Ev+0x893>  ; global constructors keyed to BingoEvent::BingoEvent()+0x893
080d7611 +0x235:  mov    %eax,%ebx
080d7613 +0x237:  lea    -0x44(%ebp),%eax
080d7616 +0x23a:  mov    %eax,(%esp)
080d7619 +0x23d:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080d761e +0x242:  mov    %eax,%ecx
080d7620 +0x244:  mov    %ebx,%eax
080d7622 +0x246:  mov    $0x0,%edx
080d7627 +0x24b:  div    %ecx
080d7629 +0x24d:  mov    %edx,-0xc(%ebp)
080d762c +0x250:  lea    -0x44(%ebp),%eax
080d762f +0x253:  mov    %eax,(%esp)
080d7632 +0x256:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080d7637 +0x25b:  cmp    -0xc(%ebp),%eax
080d763a +0x25e:  setbe  %al
080d763d +0x261:  test   %al,%al
080d763f +0x263:  je     080d7648 <+0x26c>
080d7641 +0x265:  mov    $0x0,%ebx
080d7646 +0x26a:  jmp    080d7679 <+0x29d>
080d7648 +0x26c:  mov    -0xc(%ebp),%eax
080d764b +0x26f:  mov    %eax,0x4(%esp)
080d764f +0x273:  lea    -0x44(%ebp),%eax
080d7652 +0x276:  mov    %eax,(%esp)
080d7655 +0x279:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080d765a +0x27e:  mov    (%eax),%ebx
080d765c +0x280:  jmp    080d7679 <+0x29d>
080d765e +0x282:  mov    %edx,%ebx
080d7660 +0x284:  mov    %eax,%esi
080d7662 +0x286:  lea    -0x44(%ebp),%eax
080d7665 +0x289:  mov    %eax,(%esp)
080d7668 +0x28c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080d766d +0x291:  mov    %esi,%eax
080d766f +0x293:  mov    %ebx,%edx
080d7671 +0x295:  mov    %eax,(%esp)
080d7674 +0x298:  call   08ae3750 <_Unwind_Resume>
080d7679 +0x29d:  lea    -0x44(%ebp),%eax
080d767c +0x2a0:  mov    %eax,(%esp)
080d767f +0x2a3:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080d7684 +0x2a8:  mov    %ebx,%eax
080d7686 +0x2aa:  lea    -0x8(%ebp),%esp
080d7689 +0x2ad:  add    $0x0,%esp
080d768c +0x2b0:  pop    %ebx
080d768d +0x2b1:  pop    %esi
080d768e +0x2b2:  pop    %ebp
080d768f +0x2b3:  ret
```

## 反编译 C

```c
// BlueMarble::getRandomDungeon @ 0x80d73dc

/* BlueMarble::getRandomDungeon(int, BlueMarbleTileScript::Type) const */

undefined4 __thiscall BlueMarble::getRandomDungeon(BlueMarble *this,uint param_1,int param_3)

{
  BlueMarbleUserInfo *pBVar1;
  CUserCharacInfo *this_00;
  int iVar2;
  uint uVar3;
  BlueMarbleMapScript *this_01;
  undefined4 *puVar4;
  undefined4 uVar5;
  vector<int,std::allocator<int>> local_48 [12];
  vector local_3c [12];
  vector local_30 [12];
  vector local_24 [12];
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  std::vector<int,std::allocator<int>>::vector(local_48);
  pBVar1 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  this_00 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(pBVar1);
  local_18 = CUserCharacInfo::get_charac_level(this_00);
  getBlueMarbleMap(this);
                    /* try { // try from 080d742f to 080d74ef has its CatchHandler @ 080d765e */
  iVar2 = BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    uVar3 = BlueMarbleUserInfo::getBoardZone(pBVar1);
    getBlueMarbleMap(this);
    this_01 = (BlueMarbleMapScript *)BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
    local_14 = BlueMarbleMapScript::getTile(this_01,uVar3);
    if (local_14 == 0) {
      uVar5 = 0;
    }
    else if (*(char *)(local_14 + 4) == '\x01') {
      if (param_3 == 7) {
        BlueMarbleInfoScript::getUniqueDungeonIndex((int)local_3c);
                    /* try { // try from 080d7500 to 080d7504 has its CatchHandler @ 080d7507 */
        std::vector<int,std::allocator<int>>::operator=(local_48,local_3c);
                    /* try { // try from 080d7525 to 080d754d has its CatchHandler @ 080d765e */
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_3c);
      }
      else if ((param_3 == 8) || (param_3 == 2)) {
        BlueMarbleInfoScript::getBossDungeonIndex((int)local_30);
                    /* try { // try from 080d755e to 080d7562 has its CatchHandler @ 080d7565 */
        std::vector<int,std::allocator<int>>::operator=(local_48,local_30);
                    /* try { // try from 080d7583 to 080d75a8 has its CatchHandler @ 080d765e */
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_30);
      }
      else {
        BlueMarbleInfoScript::getRandomDungeonIndex((int)local_24);
                    /* try { // try from 080d75b9 to 080d75bd has its CatchHandler @ 080d75c0 */
        std::vector<int,std::allocator<int>>::operator=(local_48,local_24);
                    /* try { // try from 080d75de to 080d75e2 has its CatchHandler @ 080d765e */
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_24);
      }
      iVar2 = std::vector<int,std::allocator<int>>::size(local_48);
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar3 = CMTRand::randInt((CMTRand *)(*(int *)(this + 0x14) + 0x1390));
        local_10 = std::vector<int,std::allocator<int>>::size(local_48);
        local_10 = uVar3 % local_10;
        uVar3 = std::vector<int,std::allocator<int>>::size(local_48);
        if (local_10 < uVar3) {
          puVar4 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_48,local_10)
          ;
          uVar5 = *puVar4;
        }
        else {
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = 0;
    }
  }
  std::vector<int,std::allocator<int>>::~vector(local_48);
  return uVar5;
}
```
