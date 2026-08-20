# ResetAllPassPadFailCount

`_ZN9GameWorld24ResetAllPassPadFailCountEv`

`GameWorld::ResetAllPassPadFailCount()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cc992` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cc992  _ZN9GameWorld24ResetAllPassPadFailCountEv
#           GameWorld::ResetAllPassPadFailCount()
# range [0x086cc992, 0x086ccb21]
086cc992 +0x000:  push   %ebp
086cc993 +0x001:  mov    %esp,%ebp
086cc995 +0x003:  push   %esi
086cc996 +0x004:  push   %ebx
086cc997 +0x005:  sub    $0x40,%esp
086cc99a +0x008:  movl   $0x0,-0x10(%ebp)
086cc9a1 +0x00f:  mov    0x8(%ebp),%eax
086cc9a4 +0x012:  lea    0x134(%eax),%edx
086cc9aa +0x018:  lea    -0x2c(%ebp),%eax
086cc9ad +0x01b:  mov    %edx,0x4(%esp)
086cc9b1 +0x01f:  mov    %eax,(%esp)
086cc9b4 +0x022:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cc9b9 +0x027:  sub    $0x4,%esp
086cc9bc +0x02a:  jmp    086ccaa5 <+0x113>
086cc9c1 +0x02f:  lea    -0x2c(%ebp),%eax
086cc9c4 +0x032:  mov    %eax,(%esp)
086cc9c7 +0x035:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cc9cc +0x03a:  mov    0x4(%eax),%eax
086cc9cf +0x03d:  mov    %eax,-0xc(%ebp)
086cc9d2 +0x040:  mov    -0xc(%ebp),%eax
086cc9d5 +0x043:  mov    %eax,(%esp)
086cc9d8 +0x046:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086cc9dd +0x04b:  cmp    $0x2,%eax
086cc9e0 +0x04e:  setle  %al
086cc9e3 +0x051:  test   %al,%al
086cc9e5 +0x053:  jne    086cca87 <+0xf5>
086cc9eb +0x059:  mov    -0xc(%ebp),%eax
086cc9ee +0x05c:  mov    %eax,(%esp)
086cc9f1 +0x05f:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086cc9f6 +0x064:  mov    %eax,(%esp)
086cc9f9 +0x067:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
086cc9fe +0x06c:  test   %al,%al
086cca00 +0x06e:  je     086cca20 <+0x8e>
086cca02 +0x070:  mov    -0xc(%ebp),%eax
086cca05 +0x073:  mov    %eax,(%esp)
086cca08 +0x076:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086cca0d +0x07b:  mov    %eax,(%esp)
086cca10 +0x07e:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
086cca15 +0x083:  test   %eax,%eax
086cca17 +0x085:  jle    086cca20 <+0x8e>
086cca19 +0x087:  mov    $0x1,%eax
086cca1e +0x08c:  jmp    086cca25 <+0x93>
086cca20 +0x08e:  mov    $0x0,%eax
086cca25 +0x093:  test   %al,%al
086cca27 +0x095:  je     086cca88 <+0xf6>
086cca29 +0x097:  mov    -0xc(%ebp),%eax
086cca2c +0x09a:  mov    %eax,(%esp)
086cca2f +0x09d:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086cca34 +0x0a2:  movl   $0x0,0x4(%esp)
086cca3c +0x0aa:  mov    %eax,(%esp)
086cca3f +0x0ad:  call   0828712c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x6a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x6a
086cca44 +0x0b2:  mov    -0xc(%ebp),%eax
086cca47 +0x0b5:  mov    %eax,(%esp)
086cca4a +0x0b8:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
086cca4f +0x0bd:  mov    %eax,%ebx
086cca51 +0x0bf:  mov    -0xc(%ebp),%eax
086cca54 +0x0c2:  mov    %eax,(%esp)
086cca57 +0x0c5:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086cca5c +0x0ca:  mov    %eax,(%esp)
086cca5f +0x0cd:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
086cca64 +0x0d2:  mov    %eax,%esi
086cca66 +0x0d4:  mov    -0xc(%ebp),%eax
086cca69 +0x0d7:  mov    %eax,(%esp)
086cca6c +0x0da:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086cca71 +0x0df:  mov    %ebx,0x8(%esp)
086cca75 +0x0e3:  mov    %esi,0x4(%esp)
086cca79 +0x0e7:  mov    %eax,(%esp)
086cca7c +0x0ea:  call   08423eb4 <_ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc>  ; DB_PassPadUpdateFailCnt::makeRequest(unsigned int, unsigned int, char*)
086cca81 +0x0ef:  addl   $0x1,-0x10(%ebp)
086cca85 +0x0f3:  jmp    086cca88 <+0xf6>
086cca87 +0x0f5:  nop
086cca88 +0x0f6:  lea    -0x24(%ebp),%eax
086cca8b +0x0f9:  movl   $0x0,0x8(%esp)
086cca93 +0x101:  lea    -0x2c(%ebp),%edx
086cca96 +0x104:  mov    %edx,0x4(%esp)
086cca9a +0x108:  mov    %eax,(%esp)
086cca9d +0x10b:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086ccaa2 +0x110:  sub    $0x4,%esp
086ccaa5 +0x113:  mov    0x8(%ebp),%eax
086ccaa8 +0x116:  lea    0x134(%eax),%edx
086ccaae +0x11c:  lea    -0x28(%ebp),%eax
086ccab1 +0x11f:  mov    %edx,0x4(%esp)
086ccab5 +0x123:  mov    %eax,(%esp)
086ccab8 +0x126:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086ccabd +0x12b:  sub    $0x4,%esp
086ccac0 +0x12e:  lea    -0x28(%ebp),%eax
086ccac3 +0x131:  mov    %eax,0x4(%esp)
086ccac7 +0x135:  lea    -0x2c(%ebp),%eax
086ccaca +0x138:  mov    %eax,(%esp)
086ccacd +0x13b:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086ccad2 +0x140:  test   %al,%al
086ccad4 +0x142:  jne    086cc9c1 <+0x2f>
086ccada +0x148:  movl   $0x0,0xc(%esp)
086ccae2 +0x150:  movl   $0x139d,0x8(%esp)
086ccaea +0x158:  movl   $&_ZZN9GameWorld24ResetAllPassPadFailCountEvE19__PRETTY_FUNCTION__,0x4(%esp)
086ccaf2 +0x160:  lea    -0x20(%ebp),%eax
086ccaf5 +0x163:  mov    %eax,(%esp)
086ccaf8 +0x166:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ccafd +0x16b:  mov    -0x10(%ebp),%eax
086ccb00 +0x16e:  mov    %eax,0x8(%esp)
086ccb04 +0x172:  movl   $"RESET %d USERS GOBLIN PAD RESETT OK!!!!",0x4(%esp)
086ccb0c +0x17a:  lea    -0x20(%ebp),%eax
086ccb0f +0x17d:  mov    %eax,(%esp)
086ccb12 +0x180:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ccb17 +0x185:  lea    -0x8(%ebp),%esp
086ccb1a +0x188:  add    $0x0,%esp
086ccb1d +0x18b:  pop    %ebx
086ccb1e +0x18c:  pop    %esi
086ccb1f +0x18d:  pop    %ebp
086ccb20 +0x18e:  ret
086ccb21 +0x18f:  nop
```

## 反编译 C

```c
// GameWorld::ResetAllPassPadFailCount @ 0x86cc992

/* GameWorld::ResetAllPassPadFailCount() */

void GameWorld::ResetAllPassPadFailCount(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CPad *pCVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_30 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_2c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_28 [4];
  cMyTrace local_24 [16];
  int local_14;
  CUser *local_10;
  
  local_14 = 0;
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_30);
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_2c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_30,
                       (_Rb_tree_iterator *)local_2c);
    if (cVar2 == '\0') {
      cMyTrace::cMyTrace(local_24,"void GameWorld::ResetAllPassPadFailCount()",0x139d,0);
      cMyTrace::operator()(local_24,"RESET %d USERS GOBLIN PAD RESETT OK!!!!",local_14);
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_30);
    local_10 = *(CUser **)(iVar3 + 4);
    iVar3 = CUser::get_state(local_10);
    if (2 < iVar3) {
      pCVar4 = (CPad *)CUser::getPad(local_10);
      cVar2 = Sanicova::CPad::isActivate(pCVar4);
      if (cVar2 == '\0') {
LAB_086cca20:
        bVar1 = false;
      }
      else {
        pCVar4 = (CPad *)CUser::getPad(local_10);
        iVar3 = Sanicova::CPad::getFailCnt(pCVar4);
        if (iVar3 < 1) goto LAB_086cca20;
        bVar1 = true;
      }
      if (bVar1) {
        pCVar4 = (CPad *)CUser::getPad(local_10);
        Sanicova::CPad::setFailCnt(pCVar4,0);
        pcVar5 = (char *)CUser::getWebAddress(local_10);
        pCVar4 = (CPad *)CUser::getPad(local_10);
        uVar6 = Sanicova::CPad::getFailCnt(pCVar4);
        uVar7 = CUser::get_acc_id(local_10);
        DB_PassPadUpdateFailCnt::makeRequest(uVar7,uVar6,pcVar5);
        local_14 = local_14 + 1;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_28,(int)local_30);
  } while( true );
}
```
