# get_blood_spawn_time_of_next_small_round

`_ZN13CBattle_Field40get_blood_spawn_time_of_next_small_roundEs`

`CBattle_Field::get_blood_spawn_time_of_next_small_round(short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830676a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830676a  _ZN13CBattle_Field40get_blood_spawn_time_of_next_small_roundEs
#           CBattle_Field::get_blood_spawn_time_of_next_small_round(short)
# range [0x0830676a, 0x08306909]
0830676a +0x000:  push   %ebp
0830676b +0x001:  mov    %esp,%ebp
0830676d +0x003:  push   %esi
0830676e +0x004:  push   %ebx
0830676f +0x005:  sub    $0x30,%esp
08306772 +0x008:  mov    0xc(%ebp),%eax
08306775 +0x00b:  mov    %ax,-0x1c(%ebp)
08306779 +0x00f:  mov    0x8(%ebp),%eax
0830677c +0x012:  add    $0x24c,%eax
08306781 +0x017:  mov    %eax,(%esp)
08306784 +0x01a:  call   0831179c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3381>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3381
08306789 +0x01f:  test   %al,%al
0830678b +0x021:  jne    083067a1 <+0x37>
0830678d +0x023:  mov    0x8(%ebp),%eax
08306790 +0x026:  add    $0x240,%eax
08306795 +0x02b:  mov    %eax,(%esp)
08306798 +0x02e:  call   083117e0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x33c5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x33c5
0830679d +0x033:  test   %al,%al
0830679f +0x035:  je     083067a8 <+0x3e>
083067a1 +0x037:  mov    $0x1,%eax
083067a6 +0x03c:  jmp    083067ad <+0x43>
083067a8 +0x03e:  mov    $0x0,%eax
083067ad +0x043:  test   %al,%al
083067af +0x045:  je     083067bb <+0x51>
083067b1 +0x047:  mov    $0xffffffff,%eax
083067b6 +0x04c:  jmp    08306903 <+0x199>
083067bb +0x051:  mov    0x8(%ebp),%eax
083067be +0x054:  add    $0x24c,%eax
083067c3 +0x059:  mov    %eax,(%esp)
083067c6 +0x05c:  call   0830ffee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bd3
083067cb +0x061:  cmp    -0x1c(%ebp),%ax
083067cf +0x065:  jle    083067d8 <+0x6e>
083067d1 +0x067:  cmpw   $0x0,-0x1c(%ebp)
083067d6 +0x06c:  jns    083067df <+0x75>
083067d8 +0x06e:  mov    $0x1,%eax
083067dd +0x073:  jmp    083067e4 <+0x7a>
083067df +0x075:  mov    $0x0,%eax
083067e4 +0x07a:  test   %al,%al
083067e6 +0x07c:  je     083067f2 <+0x88>
083067e8 +0x07e:  mov    $0xffffffff,%eax
083067ed +0x083:  jmp    08306903 <+0x199>
083067f2 +0x088:  movl   $0x0,-0x10(%ebp)
083067f9 +0x08f:  movswl -0x1c(%ebp),%eax
083067fd +0x093:  mov    0x8(%ebp),%edx
08306800 +0x096:  add    $0x24c,%edx
08306806 +0x09c:  mov    %eax,0x4(%esp)
0830680a +0x0a0:  mov    %edx,(%esp)
0830680d +0x0a3:  call   08311960 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3545>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3545
08306812 +0x0a8:  mov    0x4(%eax),%eax
08306815 +0x0ab:  mov    %eax,-0xc(%ebp)
08306818 +0x0ae:  cmpl   $0xffffffff,-0xc(%ebp)
0830681c +0x0b2:  jne    08306882 <+0x118>
0830681e +0x0b4:  mov    0x8(%ebp),%eax
08306821 +0x0b7:  add    $0x258,%eax
08306826 +0x0bc:  mov    %eax,(%esp)
08306829 +0x0bf:  call   08311982 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3567>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3567
0830682e +0x0c4:  test   %al,%al
08306830 +0x0c6:  jne    08306848 <+0xde>
08306832 +0x0c8:  mov    0x8(%ebp),%eax
08306835 +0x0cb:  add    $0x258,%eax
0830683a +0x0d0:  mov    %eax,(%esp)
0830683d +0x0d3:  call   0816eece <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1bc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1bc
08306842 +0x0d8:  cmp    -0x1c(%ebp),%ax
08306846 +0x0dc:  jg     0830684f <+0xe5>
08306848 +0x0de:  mov    $0x1,%eax
0830684d +0x0e3:  jmp    08306854 <+0xea>
0830684f +0x0e5:  mov    $0x0,%eax
08306854 +0x0ea:  test   %al,%al
08306856 +0x0ec:  je     08306862 <+0xf8>
08306858 +0x0ee:  mov    $0xffffffff,%eax
0830685d +0x0f3:  jmp    08306903 <+0x199>
08306862 +0x0f8:  movswl -0x1c(%ebp),%eax
08306866 +0x0fc:  mov    0x8(%ebp),%edx
08306869 +0x0ff:  add    $0x258,%edx
0830686f +0x105:  mov    %eax,0x4(%esp)
08306873 +0x109:  mov    %edx,(%esp)
08306876 +0x10c:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
0830687b +0x111:  movzwl (%eax),%eax
0830687e +0x114:  cwtl
0830687f +0x115:  mov    %eax,-0xc(%ebp)
08306882 +0x118:  mov    0x8(%ebp),%eax
08306885 +0x11b:  add    $0x240,%eax
0830688a +0x120:  mov    %eax,(%esp)
0830688d +0x123:  call   08311824 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3409>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3409
08306892 +0x128:  cmp    -0xc(%ebp),%eax
08306895 +0x12b:  setle  %al
08306898 +0x12e:  test   %al,%al
0830689a +0x130:  je     083068a3 <+0x139>
0830689c +0x132:  mov    $0xffffffff,%eax
083068a1 +0x137:  jmp    08306903 <+0x199>
083068a3 +0x139:  mov    -0xc(%ebp),%eax
083068a6 +0x13c:  mov    0x8(%ebp),%edx
083068a9 +0x13f:  add    $0x240,%edx
083068af +0x145:  mov    %eax,0x4(%esp)
083068b3 +0x149:  mov    %edx,(%esp)
083068b6 +0x14c:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
083068bb +0x151:  mov    0x14(%eax),%ebx
083068be +0x154:  mov    -0xc(%ebp),%eax
083068c1 +0x157:  mov    0x8(%ebp),%edx
083068c4 +0x15a:  add    $0x240,%edx
083068ca +0x160:  mov    %eax,0x4(%esp)
083068ce +0x164:  mov    %edx,(%esp)
083068d1 +0x167:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
083068d6 +0x16c:  mov    0x18(%eax),%esi
083068d9 +0x16f:  mov    -0xc(%ebp),%eax
083068dc +0x172:  mov    0x8(%ebp),%edx
083068df +0x175:  add    $0x240,%edx
083068e5 +0x17b:  mov    %eax,0x4(%esp)
083068e9 +0x17f:  mov    %edx,(%esp)
083068ec +0x182:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
083068f1 +0x187:  mov    0x24(%eax),%eax
083068f4 +0x18a:  imul   %esi,%eax
083068f7 +0x18d:  mov    %ebx,%edx
083068f9 +0x18f:  sub    %eax,%edx
083068fb +0x191:  mov    %edx,%eax
083068fd +0x193:  mov    %eax,-0x10(%ebp)
08306900 +0x196:  mov    -0x10(%ebp),%eax
08306903 +0x199:  add    $0x30,%esp
08306906 +0x19c:  pop    %ebx
08306907 +0x19d:  pop    %esi
08306908 +0x19e:  pop    %ebp
08306909 +0x19f:  ret
```

## 反编译 C

```c
// CBattle_Field::get_blood_spawn_time_of_next_small_round @ 0x830676a

/* CBattle_Field::get_blood_spawn_time_of_next_small_round(short) */

int __thiscall
CBattle_Field::get_blood_spawn_time_of_next_small_round(CBattle_Field *this,short param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  uint local_10;
  
  cVar2 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::empty();
  if ((cVar2 == '\0') &&
     (cVar2 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::empty(),
     cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return -1;
  }
  sVar3 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::size
                    ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                     (this + 0x24c));
  if ((param_1 < sVar3) && (-1 < param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    iVar4 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::operator[]
                      ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                       (this + 0x24c),(int)param_1);
    local_10 = *(uint *)(iVar4 + 4);
    if (local_10 == 0xffffffff) {
      cVar2 = std::vector<short,std::allocator<short>>::empty();
      if ((cVar2 == '\0') &&
         (sVar3 = std::vector<short,std::allocator<short>>::size
                            ((vector<short,std::allocator<short>> *)(this + 600)), param_1 < sVar3))
      {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return -1;
      }
      psVar5 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                  ((vector<short,std::allocator<short>> *)(this + 600),(int)param_1)
      ;
      local_10 = (uint)*psVar5;
    }
    iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::size
                      ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)
                       (this + 0x240));
    if ((int)local_10 < iVar4) {
      iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                        ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)
                         (this + 0x240),local_10);
      iVar4 = *(int *)(iVar4 + 0x14);
      iVar6 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                        ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)
                         (this + 0x240),local_10);
      iVar6 = *(int *)(iVar6 + 0x18);
      iVar7 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                        ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)
                         (this + 0x240),local_10);
      iVar4 = iVar4 - *(int *)(iVar7 + 0x24) * iVar6;
    }
    else {
      iVar4 = -1;
    }
    return iVar4;
  }
  return -1;
}
```
