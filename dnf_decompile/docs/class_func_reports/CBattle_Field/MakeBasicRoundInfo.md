# MakeBasicRoundInfo

`_ZN13CBattle_Field18MakeBasicRoundInfoEiRSt6vectorI17TournamentMonsterSaIS1_EERS0_INS_14TournamentInfoESaIS5_EE`

`CBattle_Field::MakeBasicRoundInfo(int, std::vector<TournamentMonster, std::allocator<TournamentMonster> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08303896` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08303896  _ZN13CBattle_Field18MakeBasicRoundInfoEiRSt6vectorI17TournamentMonsterSaIS1_EERS0_INS_14TournamentInfoESaIS5_EE
#           CBattle_Field::MakeBasicRoundInfo(int, std::vector<TournamentMonster, std::allocator<TournamentMonster> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&)
# range [0x08303896, 0x08303a1b]
08303896 +0x000:  push   %ebp
08303897 +0x001:  mov    %esp,%ebp
08303899 +0x003:  push   %ebx
0830389a +0x004:  sub    $0x54,%esp
0830389d +0x007:  lea    -0x24(%ebp),%eax
083038a0 +0x00a:  mov    0x10(%ebp),%edx
083038a3 +0x00d:  mov    %edx,0x4(%esp)
083038a7 +0x011:  mov    %eax,(%esp)
083038aa +0x014:  call   08310e46 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2a2b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2a2b
083038af +0x019:  sub    $0x4,%esp
083038b2 +0x01c:  lea    -0x20(%ebp),%eax
083038b5 +0x01f:  mov    0x10(%ebp),%edx
083038b8 +0x022:  mov    %edx,0x4(%esp)
083038bc +0x026:  mov    %eax,(%esp)
083038bf +0x029:  call   08310e22 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2a07>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2a07
083038c4 +0x02e:  sub    $0x4,%esp
083038c7 +0x031:  mov    -0x24(%ebp),%eax
083038ca +0x034:  mov    %eax,0x4(%esp)
083038ce +0x038:  mov    -0x20(%ebp),%eax
083038d1 +0x03b:  mov    %eax,(%esp)
083038d4 +0x03e:  call   08310e6c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2a51>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2a51
083038d9 +0x043:  lea    -0x28(%ebp),%eax
083038dc +0x046:  mov    0x10(%ebp),%edx
083038df +0x049:  mov    %edx,0x4(%esp)
083038e3 +0x04d:  mov    %eax,(%esp)
083038e6 +0x050:  call   08310e22 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2a07>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2a07
083038eb +0x055:  sub    $0x4,%esp
083038ee +0x058:  lea    -0x1c(%ebp),%eax
083038f1 +0x05b:  mov    0x10(%ebp),%edx
083038f4 +0x05e:  mov    %edx,0x4(%esp)
083038f8 +0x062:  mov    %eax,(%esp)
083038fb +0x065:  call   08310e46 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2a2b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2a2b
08303900 +0x06a:  sub    $0x4,%esp
08303903 +0x06d:  lea    -0x1c(%ebp),%eax
08303906 +0x070:  mov    %eax,0x4(%esp)
0830390a +0x074:  lea    -0x28(%ebp),%eax
0830390d +0x077:  mov    %eax,(%esp)
08303910 +0x07a:  call   08310f34 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2b19>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2b19
08303915 +0x07f:  test   %al,%al
08303917 +0x081:  je     08303923 <+0x8d>
08303919 +0x083:  mov    $0x0,%eax
0830391e +0x088:  jmp    08303a17 <+0x181>
08303923 +0x08d:  movl   $0x0,-0x10(%ebp)
0830392a +0x094:  movl   $0x0,-0x10(%ebp)
08303931 +0x09b:  jmp    083039c0 <+0x12a>
08303936 +0x0a0:  lea    -0x40(%ebp),%eax
08303939 +0x0a3:  mov    %eax,(%esp)
0830393c +0x0a6:  call   0830ea64 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x649>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x649
08303941 +0x0ab:  movl   $0x0,-0xc(%ebp)
08303948 +0x0b2:  jmp    0830399d <+0x107>
0830394a +0x0b4:  mov    -0xc(%ebp),%ebx
0830394d +0x0b7:  lea    -0x28(%ebp),%eax
08303950 +0x0ba:  mov    %eax,(%esp)
08303953 +0x0bd:  call   08310f8c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2b71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2b71
08303958 +0x0c2:  mov    0x4(%eax),%edx
0830395b +0x0c5:  mov    (%eax),%eax
0830395d +0x0c7:  mov    %eax,-0x3c(%ebp,%ebx,8)
08303961 +0x0cb:  mov    %edx,-0x38(%ebp,%ebx,8)
08303965 +0x0cf:  mov    -0x2c(%ebp),%ebx
08303968 +0x0d2:  lea    -0x28(%ebp),%eax
0830396b +0x0d5:  mov    %eax,(%esp)
0830396e +0x0d8:  call   08310f96 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2b7b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2b7b
08303973 +0x0dd:  mov    0x4(%eax),%eax
08303976 +0x0e0:  lea    (%ebx,%eax,1),%eax
08303979 +0x0e3:  mov    %eax,-0x2c(%ebp)
0830397c +0x0e6:  lea    -0x14(%ebp),%eax
0830397f +0x0e9:  movl   $0x0,0x8(%esp)
08303987 +0x0f1:  lea    -0x28(%ebp),%edx
0830398a +0x0f4:  mov    %edx,0x4(%esp)
0830398e +0x0f8:  mov    %eax,(%esp)
08303991 +0x0fb:  call   08310fa0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2b85>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2b85
08303996 +0x100:  sub    $0x4,%esp
08303999 +0x103:  addl   $0x1,-0xc(%ebp)
0830399d +0x107:  mov    -0xc(%ebp),%eax
083039a0 +0x10a:  cmp    0xc(%ebp),%eax
083039a3 +0x10d:  setl   %al
083039a6 +0x110:  test   %al,%al
083039a8 +0x112:  jne    0830394a <+0xb4>
083039aa +0x114:  lea    -0x40(%ebp),%eax
083039ad +0x117:  mov    %eax,0x4(%esp)
083039b1 +0x11b:  mov    0x14(%ebp),%eax
083039b4 +0x11e:  mov    %eax,(%esp)
083039b7 +0x121:  call   08310fd4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2bb9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2bb9
083039bc +0x126:  addl   $0x1,-0x10(%ebp)
083039c0 +0x12a:  cmpl   $0xe,-0x10(%ebp)
083039c4 +0x12e:  jg     083039f8 <+0x162>
083039c6 +0x130:  lea    -0x18(%ebp),%eax
083039c9 +0x133:  mov    0x10(%ebp),%edx
083039cc +0x136:  mov    %edx,0x4(%esp)
083039d0 +0x13a:  mov    %eax,(%esp)
083039d3 +0x13d:  call   08310e46 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2a2b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2a2b
083039d8 +0x142:  sub    $0x4,%esp
083039db +0x145:  lea    -0x18(%ebp),%eax
083039de +0x148:  mov    %eax,0x4(%esp)
083039e2 +0x14c:  lea    -0x28(%ebp),%eax
083039e5 +0x14f:  mov    %eax,(%esp)
083039e8 +0x152:  call   08310f60 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2b45>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2b45
083039ed +0x157:  test   %al,%al
083039ef +0x159:  je     083039f8 <+0x162>
083039f1 +0x15b:  mov    $0x1,%eax
083039f6 +0x160:  jmp    083039fd <+0x167>
083039f8 +0x162:  mov    $0x0,%eax
083039fd +0x167:  test   %al,%al
083039ff +0x169:  jne    08303936 <+0xa0>
08303a05 +0x16f:  cmpl   $0xf,-0x10(%ebp)
08303a09 +0x173:  je     08303a12 <+0x17c>
08303a0b +0x175:  mov    $0x0,%eax
08303a10 +0x17a:  jmp    08303a17 <+0x181>
08303a12 +0x17c:  mov    $0x1,%eax
08303a17 +0x181:  mov    -0x4(%ebp),%ebx
08303a1a +0x184:  leave
08303a1b +0x185:  ret
```

## 反编译 C

```c
// CBattle_Field::MakeBasicRoundInfo @ 0x8303896

/* CBattle_Field::MakeBasicRoundInfo(int, std::vector<TournamentMonster,
   std::allocator<TournamentMonster> >&, std::vector<CBattle_Field::TournamentInfo,
   std::allocator<CBattle_Field::TournamentInfo> >&) */

undefined4 __thiscall
CBattle_Field::MakeBasicRoundInfo(CBattle_Field *this,int param_1,vector *param_2,vector *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  TournamentInfo local_44 [4];
  int aiStack_40 [4];
  int local_30;
  __normal_iterator<TournamentMonster*,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>
  local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  __normal_iterator local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<TournamentMonster*,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  std::vector<TournamentMonster,std::allocator<TournamentMonster>>::end();
  std::vector<TournamentMonster,std::allocator<TournamentMonster>>::begin();
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<TournamentMonster*,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>
            (local_24,local_28);
  std::vector<TournamentMonster,std::allocator<TournamentMonster>>::begin();
  std::vector<TournamentMonster,std::allocator<TournamentMonster>>::end();
  bVar2 = __gnu_cxx::operator==(local_2c,local_20);
  if (bVar2) {
    return 0;
  }
  local_14 = 0;
  do {
    if (local_14 < 0xf) {
      std::vector<TournamentMonster,std::allocator<TournamentMonster>>::end();
      bVar2 = __gnu_cxx::operator!=(local_2c,local_1c);
      if (!bVar2) goto LAB_083039f8;
      bVar2 = true;
    }
    else {
LAB_083039f8:
      bVar2 = false;
    }
    if (!bVar2) {
      if (local_14 != 0xf) {
        return 0;
      }
      return 1;
    }
    TournamentInfo::TournamentInfo(local_44);
    for (local_10 = 0; iVar1 = local_10, local_10 < param_1; local_10 = local_10 + 1) {
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<TournamentMonster*,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>
                      ::operator*(local_2c);
      iVar4 = piVar3[1];
      aiStack_40[iVar1 * 2] = *piVar3;
      aiStack_40[iVar1 * 2 + 1] = iVar4;
      iVar1 = local_30;
      iVar4 = __gnu_cxx::
              __normal_iterator<TournamentMonster*,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>
              ::operator->(local_2c);
      local_30 = iVar1 + *(int *)(iVar4 + 4);
      __gnu_cxx::
      __normal_iterator<TournamentMonster*,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>
      ::operator++(local_18,(int)local_2c);
    }
    std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
    push_back((vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>> *
              )param_3,local_44);
    local_14 = local_14 + 1;
  } while( true );
}
```
