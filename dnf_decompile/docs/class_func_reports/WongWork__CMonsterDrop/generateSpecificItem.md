# generateSpecificItem

`_ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE`

`WongWork::CMonsterDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop` | `0x08537070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08537070  _ZN8WongWork12CMonsterDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE
#           WongWork::CMonsterDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
# range [0x08537070, 0x085372ed]
08537070 +0x000:  push   %ebp
08537071 +0x001:  mov    %esp,%ebp
08537073 +0x003:  push   %ebx
08537074 +0x004:  sub    $0x34,%esp
08537077 +0x007:  mov    0xc(%ebp),%eax
0853707a +0x00a:  movzbl 0x41(%eax),%eax
0853707e +0x00e:  test   %al,%al
08537080 +0x010:  je     085370a6 <+0x36>
08537082 +0x012:  mov    0x8(%ebp),%eax
08537085 +0x015:  lea    &_ZL14gUnicodeBuffer+0x19380(%eax),%edx
0853708b +0x01b:  mov    0x10(%ebp),%eax
0853708e +0x01e:  mov    %eax,0x8(%esp)
08537092 +0x022:  mov    0xc(%ebp),%eax
08537095 +0x025:  mov    %eax,0x4(%esp)
08537099 +0x029:  mov    %edx,(%esp)
0853709c +0x02c:  call   08535b08 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE>  ; WongWork::CMonsterDrop_Hell::hellPartySpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
085370a1 +0x031:  jmp    085372e7 <+0x277>
085370a6 +0x036:  mov    0xc(%ebp),%eax
085370a9 +0x039:  movzbl 0x3c(%eax),%eax
085370ad +0x03d:  cmp    $0x4,%al
085370af +0x03f:  jle    0853716d <+0xfd>
085370b5 +0x045:  movl   $0x0,-0x10(%ebp)
085370bc +0x04c:  jmp    085370e1 <+0x71>
085370be +0x04e:  mov    0x8(%ebp),%eax
085370c1 +0x051:  lea    &_ZL14gUnicodeBuffer+0x19380(%eax),%edx
085370c7 +0x057:  mov    0x10(%ebp),%eax
085370ca +0x05a:  mov    %eax,0x8(%esp)
085370ce +0x05e:  mov    0xc(%ebp),%eax
085370d1 +0x061:  mov    %eax,0x4(%esp)
085370d5 +0x065:  mov    %edx,(%esp)
085370d8 +0x068:  call   08535726 <_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE>  ; WongWork::CMonsterDrop_Hell::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
085370dd +0x06d:  addl   $0x1,-0x10(%ebp)
085370e1 +0x071:  mov    0xc(%ebp),%eax
085370e4 +0x074:  movzbl 0x3d(%eax),%eax
085370e8 +0x078:  movsbl %al,%eax
085370eb +0x07b:  cmp    -0x10(%ebp),%eax
085370ee +0x07e:  setg   %al
085370f1 +0x081:  test   %al,%al
085370f3 +0x083:  jne    085370be <+0x4e>
085370f5 +0x085:  mov    0xc(%ebp),%eax
085370f8 +0x088:  mov    0x38(%eax),%eax
085370fb +0x08b:  mov    %eax,%ebx
085370fd +0x08d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08537102 +0x092:  mov    0x869c(%eax),%eax
08537108 +0x098:  mov    %ebx,0x4(%esp)
0853710c +0x09c:  mov    %eax,(%esp)
0853710f +0x09f:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
08537114 +0x0a4:  mov    %eax,-0x14(%ebp)
08537117 +0x0a7:  cmpl   $0x0,-0x14(%ebp)
0853711b +0x0ab:  je     085372e3 <+0x273>
08537121 +0x0b1:  mov    0x10(%ebp),%eax
08537124 +0x0b4:  mov    %eax,0x8(%esp)
08537128 +0x0b8:  mov    0xc(%ebp),%eax
0853712b +0x0bb:  mov    %eax,0x4(%esp)
0853712f +0x0bf:  mov    -0x14(%ebp),%eax
08537132 +0x0c2:  mov    %eax,(%esp)
08537135 +0x0c5:  call   0834a13a <_ZNK12CAICharacter23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>  ; CAICharacter::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
0853713a +0x0ca:  mov    0x10(%ebp),%ecx
0853713d +0x0cd:  mov    0xc(%ebp),%eax
08537140 +0x0d0:  movzbl 0x3e(%eax),%eax
08537144 +0x0d4:  movzbl %al,%edx
08537147 +0x0d7:  mov    0xc(%ebp),%eax
0853714a +0x0da:  movzbl 0x36(%eax),%eax
0853714e +0x0de:  movzbl %al,%eax
08537151 +0x0e1:  mov    %ecx,0xc(%esp)
08537155 +0x0e5:  mov    %edx,0x8(%esp)
08537159 +0x0e9:  mov    %eax,0x4(%esp)
0853715d +0x0ed:  mov    -0x14(%ebp),%eax
08537160 +0x0f0:  mov    %eax,(%esp)
08537163 +0x0f3:  call   0834a15e <_ZNK12CAICharacter22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE>  ; CAICharacter::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
08537168 +0x0f8:  jmp    085372e7 <+0x277>
0853716d +0x0fd:  mov    0xc(%ebp),%eax
08537170 +0x100:  add    $0x34,%eax
08537173 +0x103:  mov    %eax,-0x20(%ebp)
08537176 +0x106:  mov    -0x20(%ebp),%eax
08537179 +0x109:  mov    0x4(%eax),%ebx
0853717c +0x10c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08537181 +0x111:  mov    %ebx,0x4(%esp)
08537185 +0x115:  mov    %eax,(%esp)
08537188 +0x118:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
0853718d +0x11d:  mov    %eax,-0x1c(%ebp)
08537190 +0x120:  cmpl   $0x0,-0x1c(%ebp)
08537194 +0x124:  je     085372e6 <+0x276>
0853719a +0x12a:  movl   $0xffffffff,-0x18(%ebp)
085371a1 +0x131:  mov    -0x1c(%ebp),%eax
085371a4 +0x134:  mov    %eax,(%esp)
085371a7 +0x137:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
085371ac +0x13c:  add    $0x3ac,%eax
085371b1 +0x141:  mov    %eax,(%esp)
085371b4 +0x144:  call   084b4b9c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xc4f>  ; global constructors keyed to game_master::CMacro::Reset()+0xc4f
085371b9 +0x149:  xor    $0x1,%eax
085371bc +0x14c:  test   %al,%al
085371be +0x14e:  je     085371d9 <+0x169>
085371c0 +0x150:  mov    0x10(%ebp),%eax
085371c3 +0x153:  mov    %eax,0x8(%esp)
085371c7 +0x157:  mov    0xc(%ebp),%eax
085371ca +0x15a:  mov    %eax,0x4(%esp)
085371ce +0x15e:  mov    -0x1c(%ebp),%eax
085371d1 +0x161:  mov    %eax,(%esp)
085371d4 +0x164:  call   0834f876 <_ZNK8CMonster23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>  ; CMonster::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
085371d9 +0x169:  mov    0x10(%ebp),%ecx
085371dc +0x16c:  mov    0xc(%ebp),%eax
085371df +0x16f:  movzbl 0x3e(%eax),%eax
085371e3 +0x173:  movzbl %al,%edx
085371e6 +0x176:  mov    0xc(%ebp),%eax
085371e9 +0x179:  movzbl 0x36(%eax),%eax
085371ed +0x17d:  movzbl %al,%eax
085371f0 +0x180:  mov    %ecx,0xc(%esp)
085371f4 +0x184:  mov    %edx,0x8(%esp)
085371f8 +0x188:  mov    %eax,0x4(%esp)
085371fc +0x18c:  mov    -0x1c(%ebp),%eax
085371ff +0x18f:  mov    %eax,(%esp)
08537202 +0x192:  call   0834f8a6 <_ZNK8CMonster22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE>  ; CMonster::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
08537207 +0x197:  mov    -0x1c(%ebp),%eax
0853720a +0x19a:  mov    %eax,(%esp)
0853720d +0x19d:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
08537212 +0x1a2:  add    $0x70,%eax
08537215 +0x1a5:  mov    %eax,(%esp)
08537218 +0x1a8:  call   0853b616 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x18a2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x18a2
0853721d +0x1ad:  xor    $0x1,%eax
08537220 +0x1b0:  test   %al,%al
08537222 +0x1b2:  je     08537236 <+0x1c6>
08537224 +0x1b4:  mov    0xc(%ebp),%eax
08537227 +0x1b7:  movzbl 0x45(%eax),%eax
0853722b +0x1bb:  test   %al,%al
0853722d +0x1bd:  je     08537236 <+0x1c6>
0853722f +0x1bf:  mov    $0x1,%eax
08537234 +0x1c4:  jmp    0853723b <+0x1cb>
08537236 +0x1c6:  mov    $0x0,%eax
0853723b +0x1cb:  test   %al,%al
0853723d +0x1cd:  je     08537251 <+0x1e1>
0853723f +0x1cf:  mov    0x10(%ebp),%eax
08537242 +0x1d2:  mov    %eax,0x4(%esp)
08537246 +0x1d6:  mov    -0x1c(%ebp),%eax
08537249 +0x1d9:  mov    %eax,(%esp)
0853724c +0x1dc:  call   0834f8e8 <_ZNK8CMonster24generateCatchMonsterItemERSt6vectorI10Inven_ItemSaIS1_EE>  ; CMonster::generateCatchMonsterItem(std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
08537251 +0x1e1:  mov    0xc(%ebp),%eax
08537254 +0x1e4:  movzbl 0x43(%eax),%eax
08537258 +0x1e8:  xor    $0x1,%eax
0853725b +0x1eb:  test   %al,%al
0853725d +0x1ed:  je     085372af <+0x23f>
0853725f +0x1ef:  mov    0xc(%ebp),%eax
08537262 +0x1f2:  movzbl 0x44(%eax),%eax
08537266 +0x1f6:  xor    $0x1,%eax
08537269 +0x1f9:  test   %al,%al
0853726b +0x1fb:  je     085372af <+0x23f>
0853726d +0x1fd:  movl   $0x0,-0xc(%ebp)
08537274 +0x204:  jmp    0853729b <+0x22b>
08537276 +0x206:  mov    0x10(%ebp),%eax
08537279 +0x209:  mov    %eax,0xc(%esp)
0853727d +0x20d:  movl   $0x0,0x8(%esp)
08537285 +0x215:  mov    -0x1c(%ebp),%eax
08537288 +0x218:  mov    %eax,0x4(%esp)
0853728c +0x21c:  mov    0x8(%ebp),%eax
0853728f +0x21f:  mov    %eax,(%esp)
08537292 +0x222:  call   08536fce <_ZN8WongWork12CMonsterDrop29_generateMonseterSpecificItemEPK8CMonstercRNS_18stGenerateResult_tE>  ; WongWork::CMonsterDrop::_generateMonseterSpecificItem(CMonster const*, char, WongWork::stGenerateResult_t&)
08537297 +0x227:  addl   $0x1,-0xc(%ebp)
0853729b +0x22b:  mov    -0x20(%ebp),%eax
0853729e +0x22e:  movzbl 0x9(%eax),%eax
085372a2 +0x232:  movsbl %al,%eax
085372a5 +0x235:  cmp    -0xc(%ebp),%eax
085372a8 +0x238:  setg   %al
085372ab +0x23b:  test   %al,%al
085372ad +0x23d:  jne    08537276 <+0x206>
085372af +0x23f:  mov    -0x20(%ebp),%eax
085372b2 +0x242:  movzbl 0x8(%eax),%eax
085372b6 +0x246:  test   %al,%al
085372b8 +0x248:  je     085372e7 <+0x277>
085372ba +0x24a:  mov    -0x20(%ebp),%eax
085372bd +0x24d:  movzbl 0x8(%eax),%eax
085372c1 +0x251:  movsbl %al,%eax
085372c4 +0x254:  mov    0x10(%ebp),%edx
085372c7 +0x257:  mov    %edx,0xc(%esp)
085372cb +0x25b:  mov    %eax,0x8(%esp)
085372cf +0x25f:  mov    -0x1c(%ebp),%eax
085372d2 +0x262:  mov    %eax,0x4(%esp)
085372d6 +0x266:  mov    0x8(%ebp),%eax
085372d9 +0x269:  mov    %eax,(%esp)
085372dc +0x26c:  call   08536fce <_ZN8WongWork12CMonsterDrop29_generateMonseterSpecificItemEPK8CMonstercRNS_18stGenerateResult_tE>  ; WongWork::CMonsterDrop::_generateMonseterSpecificItem(CMonster const*, char, WongWork::stGenerateResult_t&)
085372e1 +0x271:  jmp    085372e7 <+0x277>
085372e3 +0x273:  nop
085372e4 +0x274:  jmp    085372e7 <+0x277>
085372e6 +0x276:  nop
085372e7 +0x277:  add    $0x34,%esp
085372ea +0x27a:  pop    %ebx
085372eb +0x27b:  pop    %ebp
085372ec +0x27c:  ret
085372ed +0x27d:  nop
```

## 反编译 C

```c
// WongWork::CMonsterDrop::generateSpecificItem @ 0x8537070

/* WongWork::CMonsterDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CMonsterDrop::generateSpecificItem
          (CMonsterDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CAICharacter *this_00;
  CMonster *this_01;
  int local_14;
  int local_10;
  
  if (param_1[0x41] == (stGenerateRefData_t)0x0) {
    if ((char)param_1[0x3c] < '\x05') {
      iVar4 = G_CDataManager();
      this_01 = (CMonster *)CDataManager::find_monster(iVar4);
      if (this_01 != (CMonster *)0x0) {
        CMonster::getMonsterScript(this_01);
        cVar3 = std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
                empty();
        if (cVar3 != '\x01') {
          CMonster::generateIndependentItem(this_01,param_1,(vector *)param_2);
        }
        CMonster::generateDropAvatarItem
                  (this_01,(uchar)param_1[0x36],(uchar)param_1[0x3e],(vector *)param_2);
        CMonster::getMonsterScript(this_01);
        cVar3 = std::vector<CatchItemInfo,std::allocator<CatchItemInfo>>::empty();
        if ((cVar3 == '\x01') || (param_1[0x45] == (stGenerateRefData_t)0x0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          CMonster::generateCatchMonsterItem(this_01,(vector *)param_2);
        }
        if ((param_1[0x43] != (stGenerateRefData_t)0x1) &&
           (param_1[0x44] != (stGenerateRefData_t)0x1)) {
          for (local_10 = 0; local_10 < (char)param_1[0x3d]; local_10 = local_10 + 1) {
            _generateMonseterSpecificItem(this,this_01,'\0',param_2);
          }
        }
        if (param_1[0x3c] != (stGenerateRefData_t)0x0) {
          _generateMonseterSpecificItem(this,this_01,(char)param_1[0x3c],param_2);
        }
      }
    }
    else {
      for (local_14 = 0; local_14 < (char)param_1[0x3d]; local_14 = local_14 + 1) {
        CMonsterDrop_Hell::generateSpecificItem
                  ((CMonsterDrop_Hell *)(this + 0x238ac),param_1,param_2);
      }
      uVar1 = *(uint *)(param_1 + 0x38);
      iVar4 = G_CDataManager();
      this_00 = (CAICharacter *)CAICharacterList::get(*(CAICharacterList **)(iVar4 + 0x869c),uVar1);
      if (this_00 != (CAICharacter *)0x0) {
        CAICharacter::generateIndependentItem(this_00,param_1,(vector *)param_2);
        CAICharacter::generateDropAvatarItem
                  (this_00,(uchar)param_1[0x36],(uchar)param_1[0x3e],(vector *)param_2);
      }
    }
  }
  else {
    CMonsterDrop_Hell::hellPartySpecificItem((CMonsterDrop_Hell *)(this + 0x238ac),param_1,param_2);
  }
  return;
}
```
