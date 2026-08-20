# ChoiceFirstGroup

`_ZN13CBattle_Field16ChoiceFirstGroupERSt6vectorINS_14TournamentInfoESaIS1_EES4_`

`CBattle_Field::ChoiceFirstGroup(std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08303a1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08303a1c  _ZN13CBattle_Field16ChoiceFirstGroupERSt6vectorINS_14TournamentInfoESaIS1_EES4_
#           CBattle_Field::ChoiceFirstGroup(std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&)
# range [0x08303a1c, 0x08303acd]
08303a1c +0x00:  push   %ebp
08303a1d +0x01:  mov    %esp,%ebp
08303a1f +0x03:  sub    $0x38,%esp
08303a22 +0x06:  lea    -0x14(%ebp),%eax
08303a25 +0x09:  mov    0xc(%ebp),%edx
08303a28 +0x0c:  mov    %edx,0x4(%esp)
08303a2c +0x10:  mov    %eax,(%esp)
08303a2f +0x13:  call   08310d76 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x295b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x295b
08303a34 +0x18:  sub    $0x4,%esp
08303a37 +0x1b:  lea    -0x14(%ebp),%eax
08303a3a +0x1e:  mov    %eax,(%esp)
08303a3d +0x21:  call   08311048 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c2d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c2d
08303a42 +0x26:  mov    0x14(%eax),%eax
08303a45 +0x29:  mov    %eax,-0xc(%ebp)
08303a48 +0x2c:  jmp    08303a9e <+0x82>
08303a4a +0x2e:  lea    -0x14(%ebp),%eax
08303a4d +0x31:  mov    %eax,(%esp)
08303a50 +0x34:  call   08311048 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c2d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c2d
08303a55 +0x39:  mov    0x14(%eax),%eax
08303a58 +0x3c:  cmp    -0xc(%ebp),%eax
08303a5b +0x3f:  sete   %al
08303a5e +0x42:  test   %al,%al
08303a60 +0x44:  je     08303acb <+0xaf>
08303a62 +0x46:  lea    -0x14(%ebp),%eax
08303a65 +0x49:  mov    %eax,(%esp)
08303a68 +0x4c:  call   0831107e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c63>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c63
08303a6d +0x51:  mov    %eax,0x4(%esp)
08303a71 +0x55:  mov    0x10(%ebp),%eax
08303a74 +0x58:  mov    %eax,(%esp)
08303a77 +0x5b:  call   08310fd4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2bb9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2bb9
08303a7c +0x60:  lea    -0x1c(%ebp),%eax
08303a7f +0x63:  mov    -0x14(%ebp),%edx
08303a82 +0x66:  mov    %edx,0x8(%esp)
08303a86 +0x6a:  mov    0xc(%ebp),%edx
08303a89 +0x6d:  mov    %edx,0x4(%esp)
08303a8d +0x71:  mov    %eax,(%esp)
08303a90 +0x74:  call   08311088 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c6d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c6d
08303a95 +0x79:  sub    $0x4,%esp
08303a98 +0x7c:  mov    -0x1c(%ebp),%eax
08303a9b +0x7f:  mov    %eax,-0x14(%ebp)
08303a9e +0x82:  lea    -0x10(%ebp),%eax
08303aa1 +0x85:  mov    0xc(%ebp),%edx
08303aa4 +0x88:  mov    %edx,0x4(%esp)
08303aa8 +0x8c:  mov    %eax,(%esp)
08303aab +0x8f:  call   08310d9a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x297f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x297f
08303ab0 +0x94:  sub    $0x4,%esp
08303ab3 +0x97:  lea    -0x10(%ebp),%eax
08303ab6 +0x9a:  mov    %eax,0x4(%esp)
08303aba +0x9e:  lea    -0x14(%ebp),%eax
08303abd +0xa1:  mov    %eax,(%esp)
08303ac0 +0xa4:  call   08311052 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c37>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c37
08303ac5 +0xa9:  test   %al,%al
08303ac7 +0xab:  jne    08303a4a <+0x2e>
08303ac9 +0xad:  jmp    08303acc <+0xb0>
08303acb +0xaf:  nop
08303acc +0xb0:  leave
08303acd +0xb1:  ret
```

## 反编译 C

```c
// CBattle_Field::ChoiceFirstGroup @ 0x8303a1c

/* CBattle_Field::ChoiceFirstGroup(std::vector<CBattle_Field::TournamentInfo,
   std::allocator<CBattle_Field::TournamentInfo> >&, std::vector<CBattle_Field::TournamentInfo,
   std::allocator<CBattle_Field::TournamentInfo> >&) */

void __thiscall CBattle_Field::ChoiceFirstGroup(CBattle_Field *this,vector *param_1,vector *param_2)

{
  bool bVar1;
  int iVar2;
  TournamentInfo *pTVar3;
  undefined4 local_20 [2];
  undefined4 local_18;
  __normal_iterator local_14 [4];
  int local_10;
  
  std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::begin();
  iVar2 = __gnu_cxx::
          __normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
          ::operator->((__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
                        *)&local_18);
  local_10 = *(int *)(iVar2 + 0x14);
  while( true ) {
    std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,local_14);
    if ((!bVar1) ||
       (iVar2 = __gnu_cxx::
                __normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
                ::operator->((__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
                              *)&local_18), *(int *)(iVar2 + 0x14) != local_10)) break;
    pTVar3 = (TournamentInfo *)
             __gnu_cxx::
             __normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
             ::operator*((__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
                          *)&local_18);
    std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
    push_back((vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>> *
              )param_2,pTVar3);
    std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::erase
              (local_20,param_1,local_18);
    local_18 = local_20[0];
  }
  return;
}
```
