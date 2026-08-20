# hellPartySpecificItem

`_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE`

`WongWork::CMonsterDrop_Hell::hellPartySpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop_Hell` | `0x08535b08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08535b08  _ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE
#           WongWork::CMonsterDrop_Hell::hellPartySpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
# range [0x08535b08, 0x08535cf7]
08535b08 +0x000:  push   %ebp
08535b09 +0x001:  mov    %esp,%ebp
08535b0b +0x003:  push   %ebx
08535b0c +0x004:  sub    $0x34,%esp
08535b0f +0x007:  movl   $0x0,-0x1c(%ebp)
08535b16 +0x00e:  mov    0xc(%ebp),%eax
08535b19 +0x011:  mov    0x38(%eax),%eax
08535b1c +0x014:  mov    %eax,%ebx
08535b1e +0x016:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08535b23 +0x01b:  mov    0x869c(%eax),%eax
08535b29 +0x021:  mov    %ebx,0x4(%esp)
08535b2d +0x025:  mov    %eax,(%esp)
08535b30 +0x028:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
08535b35 +0x02d:  mov    %eax,-0x18(%ebp)
08535b38 +0x030:  cmpl   $0x0,-0x18(%ebp)
08535b3c +0x034:  je     08535baa <+0xa2>
08535b3e +0x036:  mov    -0x18(%ebp),%eax
08535b41 +0x039:  mov    %eax,(%esp)
08535b44 +0x03c:  call   08539de8 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x74>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x74
08535b49 +0x041:  test   %al,%al
08535b4b +0x043:  je     08535b56 <+0x4e>
08535b4d +0x045:  movl   $0x0,-0x1c(%ebp)
08535b54 +0x04c:  jmp    08535b63 <+0x5b>
08535b56 +0x04e:  mov    0xc(%ebp),%eax
08535b59 +0x051:  movzbl 0x3d(%eax),%eax
08535b5d +0x055:  movsbl %al,%eax
08535b60 +0x058:  mov    %eax,-0x1c(%ebp)
08535b63 +0x05b:  mov    0x10(%ebp),%eax
08535b66 +0x05e:  mov    %eax,0x8(%esp)
08535b6a +0x062:  mov    0xc(%ebp),%eax
08535b6d +0x065:  mov    %eax,0x4(%esp)
08535b71 +0x069:  mov    -0x18(%ebp),%eax
08535b74 +0x06c:  mov    %eax,(%esp)
08535b77 +0x06f:  call   0834a13a <_ZNK12CAICharacter23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>  ; CAICharacter::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
08535b7c +0x074:  mov    0x10(%ebp),%ecx
08535b7f +0x077:  mov    0xc(%ebp),%eax
08535b82 +0x07a:  movzbl 0x3e(%eax),%eax
08535b86 +0x07e:  movzbl %al,%edx
08535b89 +0x081:  mov    0xc(%ebp),%eax
08535b8c +0x084:  movzbl 0x36(%eax),%eax
08535b90 +0x088:  movzbl %al,%eax
08535b93 +0x08b:  mov    %ecx,0xc(%esp)
08535b97 +0x08f:  mov    %edx,0x8(%esp)
08535b9b +0x093:  mov    %eax,0x4(%esp)
08535b9f +0x097:  mov    -0x18(%ebp),%eax
08535ba2 +0x09a:  mov    %eax,(%esp)
08535ba5 +0x09d:  call   0834a15e <_ZNK12CAICharacter22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE>  ; CAICharacter::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
08535baa +0x0a2:  mov    0xc(%ebp),%eax
08535bad +0x0a5:  add    $0x34,%eax
08535bb0 +0x0a8:  mov    %eax,-0x14(%ebp)
08535bb3 +0x0ab:  mov    -0x14(%ebp),%eax
08535bb6 +0x0ae:  mov    0x4(%eax),%ebx
08535bb9 +0x0b1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08535bbe +0x0b6:  mov    %ebx,0x4(%esp)
08535bc2 +0x0ba:  mov    %eax,(%esp)
08535bc5 +0x0bd:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
08535bca +0x0c2:  mov    %eax,-0x10(%ebp)
08535bcd +0x0c5:  cmpl   $0x0,-0x10(%ebp)
08535bd1 +0x0c9:  je     08535cac <+0x1a4>
08535bd7 +0x0cf:  mov    -0x10(%ebp),%eax
08535bda +0x0d2:  mov    %eax,(%esp)
08535bdd +0x0d5:  call   08539df4 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x80>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x80
08535be2 +0x0da:  test   %al,%al
08535be4 +0x0dc:  je     08535bef <+0xe7>
08535be6 +0x0de:  movl   $0x0,-0x1c(%ebp)
08535bed +0x0e5:  jmp    08535bfc <+0xf4>
08535bef +0x0e7:  mov    0xc(%ebp),%eax
08535bf2 +0x0ea:  movzbl 0x3d(%eax),%eax
08535bf6 +0x0ee:  movsbl %al,%eax
08535bf9 +0x0f1:  mov    %eax,-0x1c(%ebp)
08535bfc +0x0f4:  mov    -0x10(%ebp),%eax
08535bff +0x0f7:  mov    %eax,(%esp)
08535c02 +0x0fa:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
08535c07 +0x0ff:  add    $0x3ac,%eax
08535c0c +0x104:  mov    %eax,(%esp)
08535c0f +0x107:  call   084b4b9c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xc4f>  ; global constructors keyed to game_master::CMacro::Reset()+0xc4f
08535c14 +0x10c:  xor    $0x1,%eax
08535c17 +0x10f:  test   %al,%al
08535c19 +0x111:  je     08535c34 <+0x12c>
08535c1b +0x113:  mov    0x10(%ebp),%eax
08535c1e +0x116:  mov    %eax,0x8(%esp)
08535c22 +0x11a:  mov    0xc(%ebp),%eax
08535c25 +0x11d:  mov    %eax,0x4(%esp)
08535c29 +0x121:  mov    -0x10(%ebp),%eax
08535c2c +0x124:  mov    %eax,(%esp)
08535c2f +0x127:  call   0834f876 <_ZNK8CMonster23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>  ; CMonster::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
08535c34 +0x12c:  mov    0x10(%ebp),%ecx
08535c37 +0x12f:  mov    0xc(%ebp),%eax
08535c3a +0x132:  movzbl 0x3e(%eax),%eax
08535c3e +0x136:  movzbl %al,%edx
08535c41 +0x139:  mov    0xc(%ebp),%eax
08535c44 +0x13c:  movzbl 0x36(%eax),%eax
08535c48 +0x140:  movzbl %al,%eax
08535c4b +0x143:  mov    %ecx,0xc(%esp)
08535c4f +0x147:  mov    %edx,0x8(%esp)
08535c53 +0x14b:  mov    %eax,0x4(%esp)
08535c57 +0x14f:  mov    -0x10(%ebp),%eax
08535c5a +0x152:  mov    %eax,(%esp)
08535c5d +0x155:  call   0834f8a6 <_ZNK8CMonster22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE>  ; CMonster::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
08535c62 +0x15a:  mov    -0x10(%ebp),%eax
08535c65 +0x15d:  mov    %eax,(%esp)
08535c68 +0x160:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
08535c6d +0x165:  add    $0x70,%eax
08535c70 +0x168:  mov    %eax,(%esp)
08535c73 +0x16b:  call   0853b616 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x18a2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x18a2
08535c78 +0x170:  xor    $0x1,%eax
08535c7b +0x173:  test   %al,%al
08535c7d +0x175:  je     08535c91 <+0x189>
08535c7f +0x177:  mov    0xc(%ebp),%eax
08535c82 +0x17a:  movzbl 0x45(%eax),%eax
08535c86 +0x17e:  test   %al,%al
08535c88 +0x180:  je     08535c91 <+0x189>
08535c8a +0x182:  mov    $0x1,%eax
08535c8f +0x187:  jmp    08535c96 <+0x18e>
08535c91 +0x189:  mov    $0x0,%eax
08535c96 +0x18e:  test   %al,%al
08535c98 +0x190:  je     08535cac <+0x1a4>
08535c9a +0x192:  mov    0x10(%ebp),%eax
08535c9d +0x195:  mov    %eax,0x4(%esp)
08535ca1 +0x199:  mov    -0x10(%ebp),%eax
08535ca4 +0x19c:  mov    %eax,(%esp)
08535ca7 +0x19f:  call   0834f8e8 <_ZNK8CMonster24generateCatchMonsterItemERSt6vectorI10Inven_ItemSaIS1_EE>  ; CMonster::generateCatchMonsterItem(std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
08535cac +0x1a4:  mov    0xc(%ebp),%eax
08535caf +0x1a7:  movzbl 0x40(%eax),%eax
08535cb3 +0x1ab:  test   %al,%al
08535cb5 +0x1ad:  je     08535cf1 <+0x1e9>
08535cb7 +0x1af:  movl   $0x0,-0xc(%ebp)
08535cbe +0x1b6:  jmp    08535ce4 <+0x1dc>
08535cc0 +0x1b8:  mov    0x8(%ebp),%eax
08535cc3 +0x1bb:  mov    (%eax),%eax
08535cc5 +0x1bd:  add    $0xc,%eax
08535cc8 +0x1c0:  mov    (%eax),%edx
08535cca +0x1c2:  mov    0x10(%ebp),%eax
08535ccd +0x1c5:  mov    %eax,0x8(%esp)
08535cd1 +0x1c9:  mov    0xc(%ebp),%eax
08535cd4 +0x1cc:  mov    %eax,0x4(%esp)
08535cd8 +0x1d0:  mov    0x8(%ebp),%eax
08535cdb +0x1d3:  mov    %eax,(%esp)
08535cde +0x1d6:  call   *%edx
08535ce0 +0x1d8:  addl   $0x1,-0xc(%ebp)
08535ce4 +0x1dc:  mov    -0xc(%ebp),%eax
08535ce7 +0x1df:  cmp    -0x1c(%ebp),%eax
08535cea +0x1e2:  setl   %al
08535ced +0x1e5:  test   %al,%al
08535cef +0x1e7:  jne    08535cc0 <+0x1b8>
08535cf1 +0x1e9:  add    $0x34,%esp
08535cf4 +0x1ec:  pop    %ebx
08535cf5 +0x1ed:  pop    %ebp
08535cf6 +0x1ee:  ret
08535cf7 +0x1ef:  nop
```

## 反编译 C

```c
// WongWork::CMonsterDrop_Hell::hellPartySpecificItem @ 0x8535b08

/* WongWork::CMonsterDrop_Hell::hellPartySpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CMonsterDrop_Hell::hellPartySpecificItem
          (CMonsterDrop_Hell *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CAICharacter *this_00;
  CMonster *this_01;
  int local_20;
  int local_10;
  
  local_20 = 0;
  uVar1 = *(uint *)(param_1 + 0x38);
  iVar4 = G_CDataManager();
  this_00 = (CAICharacter *)CAICharacterList::get(*(CAICharacterList **)(iVar4 + 0x869c),uVar1);
  if (this_00 != (CAICharacter *)0x0) {
    cVar3 = CAICharacter::IsHellMonster(this_00);
    if (cVar3 == '\0') {
      local_20 = (int)(char)param_1[0x3d];
    }
    else {
      local_20 = 0;
    }
    CAICharacter::generateIndependentItem(this_00,param_1,(vector *)param_2);
    CAICharacter::generateDropAvatarItem
              (this_00,(uchar)param_1[0x36],(uchar)param_1[0x3e],(vector *)param_2);
  }
  iVar4 = G_CDataManager();
  this_01 = (CMonster *)CDataManager::find_monster(iVar4);
  if (this_01 != (CMonster *)0x0) {
    cVar3 = CMonster::IsHellMonster(this_01);
    if (cVar3 == '\0') {
      local_20 = (int)(char)param_1[0x3d];
    }
    else {
      local_20 = 0;
    }
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
  }
  if (param_1[0x40] != (stGenerateRefData_t)0x0) {
    for (local_10 = 0; local_10 < local_20; local_10 = local_10 + 1) {
      (**(code **)(*(int *)this + 0xc))(this,param_1,param_2);
    }
  }
  return;
}
```
