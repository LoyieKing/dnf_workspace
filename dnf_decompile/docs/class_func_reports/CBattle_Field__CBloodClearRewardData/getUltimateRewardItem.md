# getUltimateRewardItem

`_ZN13CBattle_Field21CBloodClearRewardData21getUltimateRewardItemEv`

`CBattle_Field::CBloodClearRewardData::getUltimateRewardItem()`

| 类 | 地址 |
|---|---|
| `CBattle_Field::CBloodClearRewardData` | `0x083070ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083070ca  _ZN13CBattle_Field21CBloodClearRewardData21getUltimateRewardItemEv
#           CBattle_Field::CBloodClearRewardData::getUltimateRewardItem()
# range [0x083070ca, 0x083071a5]
083070ca +0x00:  push   %ebp
083070cb +0x01:  mov    %esp,%ebp
083070cd +0x03:  sub    $0x38,%esp
083070d0 +0x06:  mov    0x8(%ebp),%eax
083070d3 +0x09:  mov    %eax,(%esp)
083070d6 +0x0c:  call   0830ec94 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x879>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x879
083070db +0x11:  mov    %eax,-0x18(%ebp)
083070de +0x14:  movl   $0x0,-0x14(%ebp)
083070e5 +0x1b:  movl   $0x0,-0x10(%ebp)
083070ec +0x22:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083070f1 +0x27:  lea    0x6188(%eax),%edx
083070f7 +0x2d:  lea    -0x1c(%ebp),%eax
083070fa +0x30:  mov    %edx,0x4(%esp)
083070fe +0x34:  mov    %eax,(%esp)
08307101 +0x37:  call   08311a0a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x35ef>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x35ef
08307106 +0x3c:  sub    $0x4,%esp
08307109 +0x3f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830710e +0x44:  lea    0x6188(%eax),%ecx
08307114 +0x4a:  lea    -0x20(%ebp),%eax
08307117 +0x4d:  lea    -0x18(%ebp),%edx
0830711a +0x50:  mov    %edx,0x8(%esp)
0830711e +0x54:  mov    %ecx,0x4(%esp)
08307122 +0x58:  mov    %eax,(%esp)
08307125 +0x5b:  call   08311a30 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3615>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3615
0830712a +0x60:  sub    $0x4,%esp
0830712d +0x63:  lea    -0x1c(%ebp),%eax
08307130 +0x66:  mov    %eax,0x4(%esp)
08307134 +0x6a:  lea    -0x20(%ebp),%eax
08307137 +0x6d:  mov    %eax,(%esp)
0830713a +0x70:  call   08311a5c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3641>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3641
0830713f +0x75:  test   %al,%al
08307141 +0x77:  je     0830714a <+0x80>
08307143 +0x79:  mov    $0xffffffff,%eax
08307148 +0x7e:  jmp    083071a4 <+0xda>
0830714a +0x80:  movl   $0x64,(%esp)
08307151 +0x87:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08307156 +0x8c:  mov    %eax,-0xc(%ebp)
08307159 +0x8f:  lea    -0x20(%ebp),%eax
0830715c +0x92:  mov    %eax,(%esp)
0830715f +0x95:  call   08311a70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3655
08307164 +0x9a:  mov    0x4(%eax),%eax
08307167 +0x9d:  mov    %eax,-0x14(%ebp)
0830716a +0xa0:  lea    -0x20(%ebp),%eax
0830716d +0xa3:  mov    %eax,(%esp)
08307170 +0xa6:  call   08311a70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3655
08307175 +0xab:  mov    0x8(%eax),%eax
08307178 +0xae:  mov    %eax,-0x10(%ebp)
0830717b +0xb1:  mov    -0xc(%ebp),%eax
0830717e +0xb4:  cmp    -0x10(%ebp),%eax
08307181 +0xb7:  jg     0830718a <+0xc0>
08307183 +0xb9:  mov    $0x4e4,%eax
08307188 +0xbe:  jmp    083071a4 <+0xda>
0830718a +0xc0:  mov    -0x10(%ebp),%eax
0830718d +0xc3:  add    %eax,-0x14(%ebp)
08307190 +0xc6:  mov    -0xc(%ebp),%eax
08307193 +0xc9:  cmp    -0x14(%ebp),%eax
08307196 +0xcc:  jg     0830719f <+0xd5>
08307198 +0xce:  mov    $0x4e3,%eax
0830719d +0xd3:  jmp    083071a4 <+0xda>
0830719f +0xd5:  mov    $0xffffffff,%eax
083071a4 +0xda:  leave
083071a5 +0xdb:  ret
```

## 反编译 C

```c
// CBattle_Field::CBloodClearRewardData::getUltimateRewardItem @ 0x83070ca

/* CBattle_Field::CBloodClearRewardData::getUltimateRewardItem() */

undefined4 __thiscall
CBattle_Field::CBloodClearRewardData::getUltimateRewardItem(CBloodClearRewardData *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,STUltimateRewardProb>> local_24 [4];
  map<int,STUltimateRewardProb,std::less<int>,std::allocator<std::pair<int_const,STUltimateRewardProb>>>
  local_20 [4];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  local_1c = getUltimateRoundClearPoint(this);
  local_18 = 0;
  local_14 = 0;
  G_CDataManager();
  std::
  map<int,STUltimateRewardProb,std::less<int>,std::allocator<std::pair<int_const,STUltimateRewardProb>>>
  ::end(local_20);
  G_CDataManager();
  std::
  map<int,STUltimateRewardProb,std::less<int>,std::allocator<std::pair<int_const,STUltimateRewardProb>>>
  ::find((int *)local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STUltimateRewardProb>>::operator==
                    (local_24,(_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    local_10 = get_rand_int(100);
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STUltimateRewardProb>>::operator->(local_24);
    local_18 = *(int *)(iVar3 + 4);
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STUltimateRewardProb>>::operator->(local_24);
    if (*(int *)(iVar3 + 8) < local_10) {
      if (local_18 + *(int *)(iVar3 + 8) < local_10) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0x4e3;
      }
    }
    else {
      uVar2 = 0x4e4;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
