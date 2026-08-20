# MakeTournamentMonsterList

`_ZN13CBattle_Field25MakeTournamentMonsterListERSt3mapIsSt6vectorINS_14TournamentInfoESaIS2_EESt4lessIsESaISt4pairIKsS4_EEERSt4listI11_mapMonsterSaISE_EE`

`CBattle_Field::MakeTournamentMonsterList(std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&, std::list<_mapMonster, std::allocator<_mapMonster> >&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08304594` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08304594  _ZN13CBattle_Field25MakeTournamentMonsterListERSt3mapIsSt6vectorINS_14TournamentInfoESaIS2_EESt4lessIsESaISt4pairIKsS4_EEERSt4listI11_mapMonsterSaISE_EE
#           CBattle_Field::MakeTournamentMonsterList(std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&, std::list<_mapMonster, std::allocator<_mapMonster> >&)
# range [0x08304594, 0x08304717]
08304594 +0x000:  push   %ebp
08304595 +0x001:  mov    %esp,%ebp
08304597 +0x003:  sub    $0x48,%esp
0830459a +0x006:  movl   $0x1,-0x18(%ebp)
083045a1 +0x00d:  jmp    0830468b <+0xf7>
083045a6 +0x012:  mov    -0x18(%ebp),%eax
083045a9 +0x015:  mov    %ax,-0x26(%ebp)
083045ad +0x019:  lea    -0x26(%ebp),%eax
083045b0 +0x01c:  mov    %eax,0x4(%esp)
083045b4 +0x020:  mov    0xc(%ebp),%eax
083045b7 +0x023:  mov    %eax,(%esp)
083045ba +0x026:  call   083115dc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x31c1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x31c1
083045bf +0x02b:  mov    %eax,-0x14(%ebp)
083045c2 +0x02e:  movl   $0xffffffff,-0x10(%ebp)
083045c9 +0x035:  movl   $0x0,-0xc(%ebp)
083045d0 +0x03c:  jmp    08304614 <+0x80>
083045d2 +0x03e:  mov    -0xc(%ebp),%eax
083045d5 +0x041:  mov    %eax,0x4(%esp)
083045d9 +0x045:  mov    -0x14(%ebp),%eax
083045dc +0x048:  mov    %eax,(%esp)
083045df +0x04b:  call   08311728 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x330d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x330d
083045e4 +0x050:  mov    0x4(%eax),%eax
083045e7 +0x053:  test   %eax,%eax
083045e9 +0x055:  sete   %al
083045ec +0x058:  test   %al,%al
083045ee +0x05a:  je     08304610 <+0x7c>
083045f0 +0x05c:  mov    -0xc(%ebp),%eax
083045f3 +0x05f:  and    $0x1,%eax
083045f6 +0x062:  test   %eax,%eax
083045f8 +0x064:  jne    08304605 <+0x71>
083045fa +0x066:  mov    -0xc(%ebp),%eax
083045fd +0x069:  add    $0x1,%eax
08304600 +0x06c:  mov    %eax,-0x10(%ebp)
08304603 +0x06f:  jmp    0830461f <+0x8b>
08304605 +0x071:  mov    -0xc(%ebp),%eax
08304608 +0x074:  sub    $0x1,%eax
0830460b +0x077:  mov    %eax,-0x10(%ebp)
0830460e +0x07a:  jmp    0830461f <+0x8b>
08304610 +0x07c:  addl   $0x1,-0xc(%ebp)
08304614 +0x080:  cmpl   $0xf,-0xc(%ebp)
08304618 +0x084:  setle  %al
0830461b +0x087:  test   %al,%al
0830461d +0x089:  jne    083045d2 <+0x3e>
0830461f +0x08b:  cmpl   $0x4,-0x18(%ebp)
08304623 +0x08f:  jne    08304657 <+0xc3>
08304625 +0x091:  mov    -0x10(%ebp),%eax
08304628 +0x094:  mov    %eax,0x4(%esp)
0830462c +0x098:  mov    -0x14(%ebp),%eax
0830462f +0x09b:  mov    %eax,(%esp)
08304632 +0x09e:  call   08311728 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x330d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x330d
08304637 +0x0a3:  movl   $0x1,0xc(%esp)
0830463f +0x0ab:  mov    0x10(%ebp),%edx
08304642 +0x0ae:  mov    %edx,0x8(%esp)
08304646 +0x0b2:  mov    %eax,0x4(%esp)
0830464a +0x0b6:  mov    0x8(%ebp),%eax
0830464d +0x0b9:  mov    %eax,(%esp)
08304650 +0x0bc:  call   08304718 <_ZN13CBattle_Field20AddTournamentMonsterERKNS_14TournamentInfoERSt4listI11_mapMonsterSaIS4_EEb>  ; CBattle_Field::AddTournamentMonster(CBattle_Field::TournamentInfo const&, std::list<_mapMonster, std::allocator<_mapMonster> >&, bool)
08304655 +0x0c1:  jmp    08304687 <+0xf3>
08304657 +0x0c3:  mov    -0x10(%ebp),%eax
0830465a +0x0c6:  mov    %eax,0x4(%esp)
0830465e +0x0ca:  mov    -0x14(%ebp),%eax
08304661 +0x0cd:  mov    %eax,(%esp)
08304664 +0x0d0:  call   08311728 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x330d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x330d
08304669 +0x0d5:  movl   $0x0,0xc(%esp)
08304671 +0x0dd:  mov    0x10(%ebp),%edx
08304674 +0x0e0:  mov    %edx,0x8(%esp)
08304678 +0x0e4:  mov    %eax,0x4(%esp)
0830467c +0x0e8:  mov    0x8(%ebp),%eax
0830467f +0x0eb:  mov    %eax,(%esp)
08304682 +0x0ee:  call   08304718 <_ZN13CBattle_Field20AddTournamentMonsterERKNS_14TournamentInfoERSt4listI11_mapMonsterSaIS4_EEb>  ; CBattle_Field::AddTournamentMonster(CBattle_Field::TournamentInfo const&, std::list<_mapMonster, std::allocator<_mapMonster> >&, bool)
08304687 +0x0f3:  addl   $0x1,-0x18(%ebp)
0830468b +0x0f7:  cmpl   $0x4,-0x18(%ebp)
0830468f +0x0fb:  setle  %al
08304692 +0x0fe:  test   %al,%al
08304694 +0x100:  jne    083045a6 <+0x12>
0830469a +0x106:  lea    -0x2c(%ebp),%eax
0830469d +0x109:  mov    0x10(%ebp),%edx
083046a0 +0x10c:  mov    %edx,0x4(%esp)
083046a4 +0x110:  mov    %eax,(%esp)
083046a7 +0x113:  call   0815281c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2151>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2151
083046ac +0x118:  sub    $0x4,%esp
083046af +0x11b:  movl   $0x0,-0x1c(%ebp)
083046b6 +0x122:  jmp    083046ea <+0x156>
083046b8 +0x124:  lea    -0x2c(%ebp),%eax
083046bb +0x127:  mov    %eax,(%esp)
083046be +0x12a:  call   08311756 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x333b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x333b
083046c3 +0x12f:  mov    -0x1c(%ebp),%edx
083046c6 +0x132:  mov    %edx,0x2c(%eax)
083046c9 +0x135:  addl   $0x1,-0x1c(%ebp)
083046cd +0x139:  lea    -0x20(%ebp),%eax
083046d0 +0x13c:  movl   $0x0,0x8(%esp)
083046d8 +0x144:  lea    -0x2c(%ebp),%edx
083046db +0x147:  mov    %edx,0x4(%esp)
083046df +0x14b:  mov    %eax,(%esp)
083046e2 +0x14e:  call   08311764 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3349>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3349
083046e7 +0x153:  sub    $0x4,%esp
083046ea +0x156:  lea    -0x24(%ebp),%eax
083046ed +0x159:  mov    0x10(%ebp),%edx
083046f0 +0x15c:  mov    %edx,0x4(%esp)
083046f4 +0x160:  mov    %eax,(%esp)
083046f7 +0x163:  call   0813ba0c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7613>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7613
083046fc +0x168:  sub    $0x4,%esp
083046ff +0x16b:  lea    -0x24(%ebp),%eax
08304702 +0x16e:  mov    %eax,0x4(%esp)
08304706 +0x172:  lea    -0x2c(%ebp),%eax
08304709 +0x175:  mov    %eax,(%esp)
0830470c +0x178:  call   08311742 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3327>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3327
08304711 +0x17d:  test   %al,%al
08304713 +0x17f:  jne    083046b8 <+0x124>
08304715 +0x181:  leave
08304716 +0x182:  ret
08304717 +0x183:  nop
```

## 反编译 C

```c
// CBattle_Field::MakeTournamentMonsterList @ 0x8304594

/* CBattle_Field::MakeTournamentMonsterList(std::map<short,
   std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >,
   std::less<short>, std::allocator<std::pair<short const,
   std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > >
   >&, std::list<_mapMonster, std::allocator<_mapMonster> >&) */

void __thiscall
CBattle_Field::MakeTournamentMonsterList(CBattle_Field *this,map *param_1,list *param_2)

{
  char cVar1;
  TournamentInfo *pTVar2;
  int iVar3;
  _List_iterator<_mapMonster> local_30 [6];
  short local_2a;
  _List_iterator local_28 [4];
  _List_iterator<_mapMonster> local_24 [4];
  int local_20;
  int local_1c;
  vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>> *local_18;
  uint local_14;
  uint local_10;
  
  local_1c = 1;
  do {
    if (4 < local_1c) {
      std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
      local_20 = 0;
      while( true ) {
        std::list<_mapMonster,std::allocator<_mapMonster>>::end();
        cVar1 = std::_List_iterator<_mapMonster>::operator!=(local_30,local_28);
        if (cVar1 == '\0') break;
        iVar3 = std::_List_iterator<_mapMonster>::operator->(local_30);
        *(int *)(iVar3 + 0x2c) = local_20;
        local_20 = local_20 + 1;
        std::_List_iterator<_mapMonster>::operator++(local_24,(int)local_30);
      }
      return;
    }
    local_2a = (short)local_1c;
    local_18 = (vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>
                *)std::
                  map<short,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>>>
                  ::operator[]((map<short,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>>>
                                *)param_1,&local_2a);
    local_14 = 0xffffffff;
    for (local_10 = 0; (int)local_10 < 0x10; local_10 = local_10 + 1) {
      iVar3 = std::
              vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
              operator[](local_18,local_10);
      if (*(int *)(iVar3 + 4) == 0) {
        if ((local_10 & 1) == 0) {
          local_14 = local_10 + 1;
        }
        else {
          local_14 = local_10 - 1;
        }
        break;
      }
    }
    if (local_1c == 4) {
      pTVar2 = (TournamentInfo *)
               std::
               vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
               operator[](local_18,local_14);
      AddTournamentMonster(this,pTVar2,param_2,true);
    }
    else {
      pTVar2 = (TournamentInfo *)
               std::
               vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
               operator[](local_18,local_14);
      AddTournamentMonster(this,pTVar2,param_2,false);
    }
    local_1c = local_1c + 1;
  } while( true );
}
```
