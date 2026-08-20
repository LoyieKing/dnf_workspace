# OnDestroyVillageMonster

`_ZN16village_attacked18CVillageMonsterMgr23OnDestroyVillageMonsterE28ENUM_VILLAGE_ATTACKED_REWARD`

`village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster(ENUM_VILLAGE_ATTACKED_REWARD)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b43d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b43d4  _ZN16village_attacked18CVillageMonsterMgr23OnDestroyVillageMonsterE28ENUM_VILLAGE_ATTACKED_REWARD
#           village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster(ENUM_VILLAGE_ATTACKED_REWARD)
# range [0x086b43d4, 0x086b44eb]
086b43d4 +0x000:  push   %ebp
086b43d5 +0x001:  mov    %esp,%ebp
086b43d7 +0x003:  push   %esi
086b43d8 +0x004:  push   %ebx
086b43d9 +0x005:  sub    $0x30,%esp
086b43dc +0x008:  mov    0x8(%ebp),%eax
086b43df +0x00b:  lea    0x8(%eax),%edx
086b43e2 +0x00e:  lea    -0x1c(%ebp),%eax
086b43e5 +0x011:  mov    %edx,0x4(%esp)
086b43e9 +0x015:  mov    %eax,(%esp)
086b43ec +0x018:  call   086b53fa <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x924>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x924
086b43f1 +0x01d:  sub    $0x4,%esp
086b43f4 +0x020:  jmp    086b4417 <+0x43>
086b43f6 +0x022:  lea    -0x1c(%ebp),%eax
086b43f9 +0x025:  mov    %eax,(%esp)
086b43fc +0x028:  call   086b5478 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9a2>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9a2
086b4401 +0x02d:  add    $0x4,%eax
086b4404 +0x030:  mov    %eax,(%esp)
086b4407 +0x033:  call   086b3ee0 <_ZN16village_attacked19CVillageMonsterArea23OnDestroyVillageMonsterEv>  ; village_attacked::CVillageMonsterArea::OnDestroyVillageMonster()
086b440c +0x038:  lea    -0x1c(%ebp),%eax
086b440f +0x03b:  mov    %eax,(%esp)
086b4412 +0x03e:  call   086b545a <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x984>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x984
086b4417 +0x043:  mov    0x8(%ebp),%eax
086b441a +0x046:  lea    0x8(%eax),%edx
086b441d +0x049:  lea    -0xc(%ebp),%eax
086b4420 +0x04c:  mov    %edx,0x4(%esp)
086b4424 +0x050:  mov    %eax,(%esp)
086b4427 +0x053:  call   086b5420 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x94a>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x94a
086b442c +0x058:  sub    $0x4,%esp
086b442f +0x05b:  lea    -0xc(%ebp),%eax
086b4432 +0x05e:  mov    %eax,0x4(%esp)
086b4436 +0x062:  lea    -0x1c(%ebp),%eax
086b4439 +0x065:  mov    %eax,(%esp)
086b443c +0x068:  call   086b5446 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x970>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x970
086b4441 +0x06d:  test   %al,%al
086b4443 +0x06f:  jne    086b43f6 <+0x22>
086b4445 +0x071:  mov    0x8(%ebp),%eax
086b4448 +0x074:  movl   $0x0,0x4(%eax)
086b444f +0x07b:  mov    0x8(%ebp),%eax
086b4452 +0x07e:  movl   $0x0,(%eax)
086b4458 +0x084:  mov    0x8(%ebp),%eax
086b445b +0x087:  mov    0xc(%ebp),%edx
086b445e +0x08a:  mov    %edx,0x20(%eax)
086b4461 +0x08d:  lea    -0x18(%ebp),%eax
086b4464 +0x090:  mov    %eax,(%esp)
086b4467 +0x093:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086b446c +0x098:  lea    -0x18(%ebp),%eax
086b446f +0x09b:  mov    %eax,(%esp)
086b4472 +0x09e:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086b4477 +0x0a3:  movl   $0xf2,0x8(%esp)
086b447f +0x0ab:  movl   $0x0,0x4(%esp)
086b4487 +0x0b3:  lea    -0x18(%ebp),%eax
086b448a +0x0b6:  mov    %eax,(%esp)
086b448d +0x0b9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b4492 +0x0be:  movl   $0x1,0x4(%esp)
086b449a +0x0c6:  lea    -0x18(%ebp),%eax
086b449d +0x0c9:  mov    %eax,(%esp)
086b44a0 +0x0cc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b44a5 +0x0d1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086b44aa +0x0d6:  lea    -0x18(%ebp),%edx
086b44ad +0x0d9:  mov    %edx,0x4(%esp)
086b44b1 +0x0dd:  mov    %eax,(%esp)
086b44b4 +0x0e0:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086b44b9 +0x0e5:  jmp    086b44d6 <+0x102>
086b44bb +0x0e7:  mov    %edx,%ebx
086b44bd +0x0e9:  mov    %eax,%esi
086b44bf +0x0eb:  lea    -0x18(%ebp),%eax
086b44c2 +0x0ee:  mov    %eax,(%esp)
086b44c5 +0x0f1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b44ca +0x0f6:  mov    %esi,%eax
086b44cc +0x0f8:  mov    %ebx,%edx
086b44ce +0x0fa:  mov    %eax,(%esp)
086b44d1 +0x0fd:  call   08ae3750 <_Unwind_Resume>
086b44d6 +0x102:  lea    -0x18(%ebp),%eax
086b44d9 +0x105:  mov    %eax,(%esp)
086b44dc +0x108:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b44e1 +0x10d:  lea    -0x8(%ebp),%esp
086b44e4 +0x110:  add    $0x0,%esp
086b44e7 +0x113:  pop    %ebx
086b44e8 +0x114:  pop    %esi
086b44e9 +0x115:  pop    %ebp
086b44ea +0x116:  ret
086b44eb +0x117:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster @ 0x86b43d4

/* village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster(ENUM_VILLAGE_ATTACKED_REWARD) */

void __thiscall
village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster
          (CVillageMonsterMgr *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  GameWorld *this_00;
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_20 [4];
  PacketGuard local_1c [12];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_10 [4];
  
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::begin(local_20);
  while( true ) {
    std::
    map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator!=((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_20,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_20);
    CVillageMonsterArea::OnDestroyVillageMonster((CVillageMonsterArea *)(iVar2 + 4));
    std::
    _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
    ::operator++((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                  *)local_20);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x20) = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 086b4472 to 086b44b8 has its CatchHandler @ 086b44bb */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xf2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
