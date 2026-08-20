# CheckAppearRidableObject

`_ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard`

`CRidable::CheckAppearRidableObject(CParty*, int, int, PacketGuard*)`

| 类 | 地址 |
|---|---|
| `CRidable` | `0x082fe9c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fe9c8  _ZN8CRidable24CheckAppearRidableObjectEP6CPartyiiP11PacketGuard
#           CRidable::CheckAppearRidableObject(CParty*, int, int, PacketGuard*)
# range [0x082fe9c8, 0x082feb5d]
082fe9c8 +0x000:  push   %ebp
082fe9c9 +0x001:  mov    %esp,%ebp
082fe9cb +0x003:  push   %edi
082fe9cc +0x004:  push   %esi
082fe9cd +0x005:  push   %ebx
082fe9ce +0x006:  sub    $0x3c,%esp
082fe9d1 +0x009:  mov    0x8(%ebp),%edx
082fe9d4 +0x00c:  lea    -0x24(%ebp),%eax
082fe9d7 +0x00f:  mov    %edx,0x4(%esp)
082fe9db +0x013:  mov    %eax,(%esp)
082fe9de +0x016:  call   0830f73a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x131f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x131f
082fe9e3 +0x01b:  sub    $0x4,%esp
082fe9e6 +0x01e:  movl   $0x0,-0x1c(%ebp)
082fe9ed +0x025:  mov    0x18(%ebp),%eax
082fe9f0 +0x028:  mov    %eax,(%esp)
082fe9f3 +0x02b:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082fe9f8 +0x030:  mov    %eax,-0x28(%ebp)
082fe9fb +0x033:  mov    0x18(%ebp),%eax
082fe9fe +0x036:  mov    -0x1c(%ebp),%edx
082fea01 +0x039:  mov    %edx,0x4(%esp)
082fea05 +0x03d:  mov    %eax,(%esp)
082fea08 +0x040:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082fea0d +0x045:  jmp    082feb0a <+0x142>
082fea12 +0x04a:  lea    -0x24(%ebp),%eax
082fea15 +0x04d:  mov    %eax,(%esp)
082fea18 +0x050:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082fea1d +0x055:  mov    0x4(%eax),%eax
082fea20 +0x058:  cmp    0x10(%ebp),%eax
082fea23 +0x05b:  jne    082fea3f <+0x77>
082fea25 +0x05d:  lea    -0x24(%ebp),%eax
082fea28 +0x060:  mov    %eax,(%esp)
082fea2b +0x063:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082fea30 +0x068:  mov    0x8(%eax),%eax
082fea33 +0x06b:  cmp    0x14(%ebp),%eax
082fea36 +0x06e:  jne    082fea3f <+0x77>
082fea38 +0x070:  mov    $0x1,%eax
082fea3d +0x075:  jmp    082fea44 <+0x7c>
082fea3f +0x077:  mov    $0x0,%eax
082fea44 +0x07c:  test   %al,%al
082fea46 +0x07e:  je     082feaff <+0x137>
082fea4c +0x084:  lea    -0x24(%ebp),%eax
082fea4f +0x087:  mov    %eax,(%esp)
082fea52 +0x08a:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082fea57 +0x08f:  mov    0x1c(%eax),%eax
082fea5a +0x092:  cmp    $0x4,%eax
082fea5d +0x095:  je     082fea7d <+0xb5>
082fea5f +0x097:  lea    -0x24(%ebp),%eax
082fea62 +0x09a:  mov    %eax,(%esp)
082fea65 +0x09d:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082fea6a +0x0a2:  mov    0x1c(%eax),%eax
082fea6d +0x0a5:  cmp    $0x3,%eax
082fea70 +0x0a8:  jne    082fea84 <+0xbc>
082fea72 +0x0aa:  mov    0x8(%ebp),%eax
082fea75 +0x0ad:  movzbl 0x18(%eax),%eax
082fea79 +0x0b1:  test   %al,%al
082fea7b +0x0b3:  je     082fea84 <+0xbc>
082fea7d +0x0b5:  mov    $0x1,%eax
082fea82 +0x0ba:  jmp    082fea89 <+0xc1>
082fea84 +0x0bc:  mov    $0x0,%eax
082fea89 +0x0c1:  test   %al,%al
082fea8b +0x0c3:  je     082feaff <+0x137>
082fea8d +0x0c5:  lea    -0x24(%ebp),%eax
082fea90 +0x0c8:  mov    %eax,(%esp)
082fea93 +0x0cb:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082fea98 +0x0d0:  movl   $0x1,0x1c(%eax)
082fea9f +0x0d7:  addl   $0x1,-0x1c(%ebp)
082feaa3 +0x0db:  lea    -0x24(%ebp),%eax
082feaa6 +0x0de:  mov    %eax,(%esp)
082feaa9 +0x0e1:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082feaae +0x0e6:  mov    0x18(%eax),%eax
082feab1 +0x0e9:  mov    %eax,%edi
082feab3 +0x0eb:  lea    -0x24(%ebp),%eax
082feab6 +0x0ee:  mov    %eax,(%esp)
082feab9 +0x0f1:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082feabe +0x0f6:  mov    0xc(%eax),%esi
082feac1 +0x0f9:  lea    -0x24(%ebp),%eax
082feac4 +0x0fc:  mov    %eax,(%esp)
082feac7 +0x0ff:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082feacc +0x104:  mov    0x14(%eax),%ebx
082feacf +0x107:  lea    -0x24(%ebp),%eax
082fead2 +0x10a:  mov    %eax,(%esp)
082fead5 +0x10d:  call   0830f79a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x137f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x137f
082feada +0x112:  mov    0x10(%eax),%eax
082feadd +0x115:  mov    %edi,0x14(%esp)
082feae1 +0x119:  mov    %esi,0x10(%esp)
082feae5 +0x11d:  mov    %ebx,0xc(%esp)
082feae9 +0x121:  mov    %eax,0x8(%esp)
082feaed +0x125:  mov    0x18(%ebp),%eax
082feaf0 +0x128:  mov    %eax,0x4(%esp)
082feaf4 +0x12c:  mov    0x8(%ebp),%eax
082feaf7 +0x12f:  mov    %eax,(%esp)
082feafa +0x132:  call   082fece2 <_ZN8CRidable22SendSpawnRidableObjectEP11PacketGuardiiii>  ; CRidable::SendSpawnRidableObject(PacketGuard*, int, int, int, int)
082feaff +0x137:  lea    -0x24(%ebp),%eax
082feb02 +0x13a:  mov    %eax,(%esp)
082feb05 +0x13d:  call   0830f7a8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x138d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x138d
082feb0a +0x142:  mov    0x8(%ebp),%edx
082feb0d +0x145:  lea    -0x20(%ebp),%eax
082feb10 +0x148:  mov    %edx,0x4(%esp)
082feb14 +0x14c:  mov    %eax,(%esp)
082feb17 +0x14f:  call   0830f760 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1345>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1345
082feb1c +0x154:  sub    $0x4,%esp
082feb1f +0x157:  lea    -0x20(%ebp),%eax
082feb22 +0x15a:  mov    %eax,0x4(%esp)
082feb26 +0x15e:  lea    -0x24(%ebp),%eax
082feb29 +0x161:  mov    %eax,(%esp)
082feb2c +0x164:  call   0830f786 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x136b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x136b
082feb31 +0x169:  test   %al,%al
082feb33 +0x16b:  jne    082fea12 <+0x4a>
082feb39 +0x171:  mov    0x18(%ebp),%eax
082feb3c +0x174:  mov    -0x1c(%ebp),%edx
082feb3f +0x177:  mov    %edx,0x8(%esp)
082feb43 +0x17b:  lea    -0x28(%ebp),%edx
082feb46 +0x17e:  mov    %edx,0x4(%esp)
082feb4a +0x182:  mov    %eax,(%esp)
082feb4d +0x185:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
082feb52 +0x18a:  lea    -0xc(%ebp),%esp
082feb55 +0x18d:  add    $0x0,%esp
082feb58 +0x190:  pop    %ebx
082feb59 +0x191:  pop    %esi
082feb5a +0x192:  pop    %edi
082feb5b +0x193:  pop    %ebp
082feb5c +0x194:  ret
082feb5d +0x195:  nop
```

## 反编译 C

```c
// CRidable::CheckAppearRidableObject @ 0x82fe9c8

/* CRidable::CheckAppearRidableObject(CParty*, int, int, PacketGuard*) */

void __thiscall
CRidable::CheckAppearRidableObject
          (CRidable *this,CParty *param_1,int param_2,int param_3,PacketGuard *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  local_28 [4];
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  local_24 [4];
  int local_20;
  
  std::
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  ::begin(local_28);
  local_20 = 0;
  local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_4);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,local_20);
  do {
    std::
    map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
    ::end(local_24);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28,
                       (_Rb_tree_iterator *)local_24);
    if (cVar2 == '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,&local_2c,local_20);
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28);
    if (*(int *)(iVar3 + 4) == param_2) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28);
      if (*(int *)(iVar3 + 8) != param_3) goto LAB_082fea3f;
      bVar1 = true;
    }
    else {
LAB_082fea3f:
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28);
      if (*(int *)(iVar3 + 0x1c) == 4) {
LAB_082fea7d:
        bVar1 = true;
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        if ((*(int *)(iVar3 + 0x1c) == 3) && (this[0x18] != (CRidable)0x0)) goto LAB_082fea7d;
        bVar1 = false;
      }
      if (bVar1) {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        *(undefined4 *)(iVar3 + 0x1c) = 1;
        local_20 = local_20 + 1;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        iVar3 = *(int *)(iVar3 + 0x18);
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        iVar4 = *(int *)(iVar4 + 0xc);
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        iVar5 = *(int *)(iVar5 + 0x14);
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28)
        ;
        SendSpawnRidableObject(this,param_4,*(int *)(iVar6 + 0x10),iVar5,iVar4,iVar3);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,DungeonRidableObject>> *)local_28);
  } while( true );
}
```
