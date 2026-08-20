# InsertTournamentInfo

`_ZN13CBattle_Field20InsertTournamentInfoERSt6vectorIiSaIiEERS0_INS_14TournamentInfoESaIS4_EERSt3mapIsS4_St4lessIsESaISt4pairIKsS4_EEE`

`CBattle_Field::InsertTournamentInfo(std::vector<int, std::allocator<int> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08303e02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08303e02  _ZN13CBattle_Field20InsertTournamentInfoERSt6vectorIiSaIiEERS0_INS_14TournamentInfoESaIS4_EERSt3mapIsS4_St4lessIsESaISt4pairIKsS4_EEE
#           CBattle_Field::InsertTournamentInfo(std::vector<int, std::allocator<int> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&)
# range [0x08303e02, 0x08303f65]
08303e02 +0x000:  push   %ebp
08303e03 +0x001:  mov    %esp,%ebp
08303e05 +0x003:  push   %ebx
08303e06 +0x004:  sub    $0x74,%esp
08303e09 +0x007:  lea    -0x54(%ebp),%eax
08303e0c +0x00a:  mov    0x10(%ebp),%edx
08303e0f +0x00d:  mov    %edx,0x4(%esp)
08303e13 +0x011:  mov    %eax,(%esp)
08303e16 +0x014:  call   08310d76 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x295b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x295b
08303e1b +0x019:  sub    $0x4,%esp
08303e1e +0x01c:  lea    -0x58(%ebp),%eax
08303e21 +0x01f:  mov    0xc(%ebp),%edx
08303e24 +0x022:  mov    %edx,0x4(%esp)
08303e28 +0x026:  mov    %eax,(%esp)
08303e2b +0x029:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08303e30 +0x02e:  sub    $0x4,%esp
08303e33 +0x031:  jmp    08303ef7 <+0xf5>
08303e38 +0x036:  lea    -0x54(%ebp),%eax
08303e3b +0x039:  mov    %eax,(%esp)
08303e3e +0x03c:  call   08311048 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c2d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c2d
08303e43 +0x041:  mov    %eax,%ebx
08303e45 +0x043:  lea    -0x58(%ebp),%eax
08303e48 +0x046:  mov    %eax,(%esp)
08303e4b +0x049:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08303e50 +0x04e:  mov    (%eax),%eax
08303e52 +0x050:  mov    %ax,(%ebx)
08303e55 +0x053:  lea    -0x54(%ebp),%eax
08303e58 +0x056:  mov    %eax,(%esp)
08303e5b +0x059:  call   0831107e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c63>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c63
08303e60 +0x05e:  mov    %eax,%ebx
08303e62 +0x060:  lea    -0x54(%ebp),%eax
08303e65 +0x063:  mov    %eax,(%esp)
08303e68 +0x066:  call   08311048 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c2d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c2d
08303e6d +0x06b:  mov    %eax,%edx
08303e6f +0x06d:  lea    -0x24(%ebp),%eax
08303e72 +0x070:  mov    %ebx,0x8(%esp)
08303e76 +0x074:  mov    %edx,0x4(%esp)
08303e7a +0x078:  mov    %eax,(%esp)
08303e7d +0x07b:  call   083111e7 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2dcc>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2dcc
08303e82 +0x080:  sub    $0x4,%esp
08303e85 +0x083:  lea    -0x24(%ebp),%eax
08303e88 +0x086:  mov    %eax,0x4(%esp)
08303e8c +0x08a:  lea    -0x40(%ebp),%eax
08303e8f +0x08d:  mov    %eax,(%esp)
08303e92 +0x090:  call   08311226 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e0b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e0b
08303e97 +0x095:  lea    -0x48(%ebp),%eax
08303e9a +0x098:  lea    -0x40(%ebp),%edx
08303e9d +0x09b:  mov    %edx,0x8(%esp)
08303ea1 +0x09f:  mov    0x14(%ebp),%edx
08303ea4 +0x0a2:  mov    %edx,0x4(%esp)
08303ea8 +0x0a6:  mov    %eax,(%esp)
08303eab +0x0a9:  call   08311276 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e5b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e5b
08303eb0 +0x0ae:  sub    $0x4,%esp
08303eb3 +0x0b1:  lea    -0x5c(%ebp),%eax
08303eb6 +0x0b4:  mov    -0x54(%ebp),%edx
08303eb9 +0x0b7:  mov    %edx,0x8(%esp)
08303ebd +0x0bb:  mov    0x10(%ebp),%edx
08303ec0 +0x0be:  mov    %edx,0x4(%esp)
08303ec4 +0x0c2:  mov    %eax,(%esp)
08303ec7 +0x0c5:  call   08311088 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c6d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c6d
08303ecc +0x0ca:  sub    $0x4,%esp
08303ecf +0x0cd:  mov    -0x5c(%ebp),%eax
08303ed2 +0x0d0:  mov    %eax,-0x54(%ebp)
08303ed5 +0x0d3:  lea    -0x5c(%ebp),%eax
08303ed8 +0x0d6:  mov    -0x58(%ebp),%edx
08303edb +0x0d9:  mov    %edx,0x8(%esp)
08303edf +0x0dd:  mov    0xc(%ebp),%edx
08303ee2 +0x0e0:  mov    %edx,0x4(%esp)
08303ee6 +0x0e4:  mov    %eax,(%esp)
08303ee9 +0x0e7:  call   080ea48e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xc7>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xc7
08303eee +0x0ec:  sub    $0x4,%esp
08303ef1 +0x0ef:  mov    -0x5c(%ebp),%eax
08303ef4 +0x0f2:  mov    %eax,-0x58(%ebp)
08303ef7 +0x0f5:  lea    -0x50(%ebp),%eax
08303efa +0x0f8:  mov    0x10(%ebp),%edx
08303efd +0x0fb:  mov    %edx,0x4(%esp)
08303f01 +0x0ff:  mov    %eax,(%esp)
08303f04 +0x102:  call   08310d9a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x297f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x297f
08303f09 +0x107:  sub    $0x4,%esp
08303f0c +0x10a:  lea    -0x50(%ebp),%eax
08303f0f +0x10d:  mov    %eax,0x4(%esp)
08303f13 +0x111:  lea    -0x54(%ebp),%eax
08303f16 +0x114:  mov    %eax,(%esp)
08303f19 +0x117:  call   08311052 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c37>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c37
08303f1e +0x11c:  test   %al,%al
08303f20 +0x11e:  je     08303f54 <+0x152>
08303f22 +0x120:  lea    -0x4c(%ebp),%eax
08303f25 +0x123:  mov    0xc(%ebp),%edx
08303f28 +0x126:  mov    %edx,0x4(%esp)
08303f2c +0x12a:  mov    %eax,(%esp)
08303f2f +0x12d:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08303f34 +0x132:  sub    $0x4,%esp
08303f37 +0x135:  lea    -0x4c(%ebp),%eax
08303f3a +0x138:  mov    %eax,0x4(%esp)
08303f3e +0x13c:  lea    -0x58(%ebp),%eax
08303f41 +0x13f:  mov    %eax,(%esp)
08303f44 +0x142:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08303f49 +0x147:  test   %al,%al
08303f4b +0x149:  je     08303f54 <+0x152>
08303f4d +0x14b:  mov    $0x1,%eax
08303f52 +0x150:  jmp    08303f59 <+0x157>
08303f54 +0x152:  mov    $0x0,%eax
08303f59 +0x157:  test   %al,%al
08303f5b +0x159:  jne    08303e38 <+0x36>
08303f61 +0x15f:  mov    -0x4(%ebp),%ebx
08303f64 +0x162:  leave
08303f65 +0x163:  ret
```

## 反编译 C

```c
// CBattle_Field::InsertTournamentInfo @ 0x8303e02

/* CBattle_Field::InsertTournamentInfo(std::vector<int, std::allocator<int> >&,
   std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&,
   std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short
   const, CBattle_Field::TournamentInfo> > >&) */

void CBattle_Field::InsertTournamentInfo(vector *param_1,vector *param_2,map *param_3)

{
  bool bVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  TournamentInfo *pTVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  __normal_iterator local_54 [4];
  __normal_iterator local_50 [4];
  pair local_4c [8];
  pair<short_const,CBattle_Field::TournamentInfo> local_44 [28];
  short local_28 [16];
  
  std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::begin();
  std::vector<int,std::allocator<int>>::begin();
  do {
    std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,local_54);
    if (bVar1) {
      std::vector<int,std::allocator<int>>::end();
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_5c,local_50);
      if (!bVar1) goto LAB_08303f54;
      bVar1 = true;
    }
    else {
LAB_08303f54:
      bVar1 = false;
    }
    if (!bVar1) {
      return;
    }
    puVar2 = (undefined2 *)
             __gnu_cxx::
             __normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
             ::operator->((__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
                           *)&local_58);
    puVar3 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_5c);
    *puVar2 = (short)*puVar3;
    __gnu_cxx::
    __normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
    ::operator*((__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
                 *)&local_58);
    pTVar4 = (TournamentInfo *)
             __gnu_cxx::
             __normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
             ::operator->((__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
                           *)&local_58);
    std::make_pair<short&,CBattle_Field::TournamentInfo&>(local_28,pTVar4);
    std::pair<short_const,CBattle_Field::TournamentInfo>::pair<short,CBattle_Field::TournamentInfo>
              (local_44,(pair *)local_28);
    std::
    map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
    ::insert(local_4c);
    std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::erase
              (&local_60,param_3,local_58);
    local_58 = local_60;
    std::vector<int,std::allocator<int>>::erase(&local_60,param_2,local_5c);
    local_5c = local_60;
  } while( true );
}
```
