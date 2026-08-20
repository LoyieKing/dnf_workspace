# ConsistTournamentRound

`_ZN13CBattle_Field22ConsistTournamentRoundERSt6vectorINS_14TournamentInfoESaIS1_EES4_RSt3mapIsS3_St4lessIsESaISt4pairIKsS3_EEERSt4listI11_mapMonsterSaISF_EE`

`CBattle_Field::ConsistTournamentRound(std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&, std::list<_mapMonster, std::allocator<_mapMonster> >&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08303ace` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08303ace  _ZN13CBattle_Field22ConsistTournamentRoundERSt6vectorINS_14TournamentInfoESaIS1_EES4_RSt3mapIsS3_St4lessIsESaISt4pairIKsS3_EEERSt4listI11_mapMonsterSaISF_EE
#           CBattle_Field::ConsistTournamentRound(std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&, std::list<_mapMonster, std::allocator<_mapMonster> >&)
# range [0x08303ace, 0x08303e01]
08303ace +0x000:  push   %ebp
08303acf +0x001:  mov    %esp,%ebp
08303ad1 +0x003:  push   %esi
08303ad2 +0x004:  push   %ebx
08303ad3 +0x005:  sub    $0xf0,%esp
08303ad9 +0x00b:  movl   $0xffffffff,-0x10(%ebp)
08303ae0 +0x012:  movl   $0x10,(%esp)
08303ae7 +0x019:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08303aec +0x01e:  mov    %eax,-0x10(%ebp)
08303aef +0x021:  lea    -0xbc(%ebp),%eax
08303af5 +0x027:  mov    %eax,(%esp)
08303af8 +0x02a:  call   0831116e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2d53>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2d53
08303afd +0x02f:  lea    -0xd4(%ebp),%eax
08303b03 +0x035:  mov    %eax,(%esp)
08303b06 +0x038:  call   0830ea64 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x649>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x649
08303b0b +0x03d:  mov    -0x10(%ebp),%eax
08303b0e +0x040:  mov    %ax,-0xd4(%ebp)
08303b15 +0x047:  lea    -0x80(%ebp),%eax
08303b18 +0x04a:  lea    -0xd4(%ebp),%edx
08303b1e +0x050:  mov    %edx,0x8(%esp)
08303b22 +0x054:  lea    -0xd4(%ebp),%edx
08303b28 +0x05a:  mov    %edx,0x4(%esp)
08303b2c +0x05e:  mov    %eax,(%esp)
08303b2f +0x061:  call   083111e7 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2dcc>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2dcc
08303b34 +0x066:  sub    $0x4,%esp
08303b37 +0x069:  lea    -0x80(%ebp),%eax
08303b3a +0x06c:  mov    %eax,0x4(%esp)
08303b3e +0x070:  lea    -0x9c(%ebp),%eax
08303b44 +0x076:  mov    %eax,(%esp)
08303b47 +0x079:  call   08311226 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e0b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e0b
08303b4c +0x07e:  lea    -0xa4(%ebp),%eax
08303b52 +0x084:  lea    -0x9c(%ebp),%edx
08303b58 +0x08a:  mov    %edx,0x8(%esp)
08303b5c +0x08e:  lea    -0xbc(%ebp),%edx
08303b62 +0x094:  mov    %edx,0x4(%esp)
08303b66 +0x098:  mov    %eax,(%esp)
08303b69 +0x09b:  call   08311276 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e5b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e5b
08303b6e +0x0a0:  sub    $0x4,%esp
08303b71 +0x0a3:  movl   $0xffffffff,-0xc(%ebp)
08303b78 +0x0aa:  mov    -0x10(%ebp),%eax
08303b7b +0x0ad:  and    $0x1,%eax
08303b7e +0x0b0:  test   %eax,%eax
08303b80 +0x0b2:  jne    08303b8d <+0xbf>
08303b82 +0x0b4:  mov    -0x10(%ebp),%eax
08303b85 +0x0b7:  add    $0x1,%eax
08303b88 +0x0ba:  mov    %eax,-0xc(%ebp)
08303b8b +0x0bd:  jmp    08303b96 <+0xc8>
08303b8d +0x0bf:  mov    -0x10(%ebp),%eax
08303b90 +0x0c2:  sub    $0x1,%eax
08303b93 +0x0c5:  mov    %eax,-0xc(%ebp)
08303b96 +0x0c8:  lea    -0x64(%ebp),%eax
08303b99 +0x0cb:  mov    0xc(%ebp),%edx
08303b9c +0x0ce:  mov    %edx,0x4(%esp)
08303ba0 +0x0d2:  mov    %eax,(%esp)
08303ba3 +0x0d5:  call   08310d9a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x297f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x297f
08303ba8 +0x0da:  sub    $0x4,%esp
08303bab +0x0dd:  lea    -0x60(%ebp),%eax
08303bae +0x0e0:  mov    0xc(%ebp),%edx
08303bb1 +0x0e3:  mov    %edx,0x4(%esp)
08303bb5 +0x0e7:  mov    %eax,(%esp)
08303bb8 +0x0ea:  call   08310d76 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x295b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x295b
08303bbd +0x0ef:  sub    $0x4,%esp
08303bc0 +0x0f2:  mov    -0x64(%ebp),%eax
08303bc3 +0x0f5:  mov    %eax,0x4(%esp)
08303bc7 +0x0f9:  mov    -0x60(%ebp),%eax
08303bca +0x0fc:  mov    %eax,(%esp)
08303bcd +0x0ff:  call   083112a2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e87>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e87
08303bd2 +0x104:  lea    -0xd8(%ebp),%eax
08303bd8 +0x10a:  mov    0xc(%ebp),%edx
08303bdb +0x10d:  mov    %edx,0x4(%esp)
08303bdf +0x111:  mov    %eax,(%esp)
08303be2 +0x114:  call   08310d76 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x295b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x295b
08303be7 +0x119:  sub    $0x4,%esp
08303bea +0x11c:  lea    -0xd8(%ebp),%eax
08303bf0 +0x122:  mov    %eax,(%esp)
08303bf3 +0x125:  call   08311048 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c2d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c2d
08303bf8 +0x12a:  mov    -0xc(%ebp),%edx
08303bfb +0x12d:  mov    %dx,(%eax)
08303bfe +0x130:  lea    -0xd8(%ebp),%eax
08303c04 +0x136:  mov    %eax,(%esp)
08303c07 +0x139:  call   0831107e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c63>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c63
08303c0c +0x13e:  mov    %eax,%ebx
08303c0e +0x140:  lea    -0xd8(%ebp),%eax
08303c14 +0x146:  mov    %eax,(%esp)
08303c17 +0x149:  call   08311048 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c2d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c2d
08303c1c +0x14e:  mov    %eax,%edx
08303c1e +0x150:  lea    -0x38(%ebp),%eax
08303c21 +0x153:  mov    %ebx,0x8(%esp)
08303c25 +0x157:  mov    %edx,0x4(%esp)
08303c29 +0x15b:  mov    %eax,(%esp)
08303c2c +0x15e:  call   083111e7 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2dcc>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2dcc
08303c31 +0x163:  sub    $0x4,%esp
08303c34 +0x166:  lea    -0x38(%ebp),%eax
08303c37 +0x169:  mov    %eax,0x4(%esp)
08303c3b +0x16d:  lea    -0x54(%ebp),%eax
08303c3e +0x170:  mov    %eax,(%esp)
08303c41 +0x173:  call   08311226 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e0b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e0b
08303c46 +0x178:  lea    -0x5c(%ebp),%eax
08303c49 +0x17b:  lea    -0x54(%ebp),%edx
08303c4c +0x17e:  mov    %edx,0x8(%esp)
08303c50 +0x182:  lea    -0xbc(%ebp),%edx
08303c56 +0x188:  mov    %edx,0x4(%esp)
08303c5a +0x18c:  mov    %eax,(%esp)
08303c5d +0x18f:  call   08311276 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2e5b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2e5b
08303c62 +0x194:  sub    $0x4,%esp
08303c65 +0x197:  lea    -0x1c(%ebp),%eax
08303c68 +0x19a:  mov    -0xd8(%ebp),%edx
08303c6e +0x1a0:  mov    %edx,0x8(%esp)
08303c72 +0x1a4:  mov    0xc(%ebp),%edx
08303c75 +0x1a7:  mov    %edx,0x4(%esp)
08303c79 +0x1ab:  mov    %eax,(%esp)
08303c7c +0x1ae:  call   08311088 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2c6d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2c6d
08303c81 +0x1b3:  sub    $0x4,%esp
08303c84 +0x1b6:  lea    -0xe4(%ebp),%eax
08303c8a +0x1bc:  mov    %eax,(%esp)
08303c8d +0x1bf:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08303c92 +0x1c4:  movl   $0x0,-0xe8(%ebp)
08303c9c +0x1ce:  jmp    08303ce1 <+0x213>
08303c9e +0x1d0:  mov    -0xe8(%ebp),%eax
08303ca4 +0x1d6:  cmp    -0x10(%ebp),%eax
08303ca7 +0x1d9:  je     08303cce <+0x200>
08303ca9 +0x1db:  mov    -0xe8(%ebp),%eax
08303caf +0x1e1:  cmp    -0xc(%ebp),%eax
08303cb2 +0x1e4:  je     08303cd1 <+0x203>
08303cb4 +0x1e6:  lea    -0xe8(%ebp),%eax
08303cba +0x1ec:  mov    %eax,0x4(%esp)
08303cbe +0x1f0:  lea    -0xe4(%ebp),%eax
08303cc4 +0x1f6:  mov    %eax,(%esp)
08303cc7 +0x1f9:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08303ccc +0x1fe:  jmp    08303cd2 <+0x204>
08303cce +0x200:  nop
08303ccf +0x201:  jmp    08303cd2 <+0x204>
08303cd1 +0x203:  nop
08303cd2 +0x204:  mov    -0xe8(%ebp),%eax
08303cd8 +0x20a:  add    $0x1,%eax
08303cdb +0x20d:  mov    %eax,-0xe8(%ebp)
08303ce1 +0x213:  mov    -0xe8(%ebp),%eax
08303ce7 +0x219:  cmp    $0xf,%eax
08303cea +0x21c:  setle  %al
08303ced +0x21f:  test   %al,%al
08303cef +0x221:  jne    08303c9e <+0x1d0>
08303cf1 +0x223:  lea    -0x18(%ebp),%eax
08303cf4 +0x226:  lea    -0xe4(%ebp),%edx
08303cfa +0x22c:  mov    %edx,0x4(%esp)
08303cfe +0x230:  mov    %eax,(%esp)
08303d01 +0x233:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08303d06 +0x238:  sub    $0x4,%esp
08303d09 +0x23b:  lea    -0x14(%ebp),%eax
08303d0c +0x23e:  lea    -0xe4(%ebp),%edx
08303d12 +0x244:  mov    %edx,0x4(%esp)
08303d16 +0x248:  mov    %eax,(%esp)
08303d19 +0x24b:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08303d1e +0x250:  sub    $0x4,%esp
08303d21 +0x253:  mov    -0x18(%ebp),%eax
08303d24 +0x256:  mov    %eax,0x4(%esp)
08303d28 +0x25a:  mov    -0x14(%ebp),%eax
08303d2b +0x25d:  mov    %eax,(%esp)
08303d2e +0x260:  call   08134d8e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x995>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x995
08303d33 +0x265:  lea    -0xbc(%ebp),%eax
08303d39 +0x26b:  mov    %eax,0xc(%esp)
08303d3d +0x26f:  mov    0xc(%ebp),%eax
08303d40 +0x272:  mov    %eax,0x8(%esp)
08303d44 +0x276:  lea    -0xe4(%ebp),%eax
08303d4a +0x27c:  mov    %eax,0x4(%esp)
08303d4e +0x280:  mov    0x8(%ebp),%eax
08303d51 +0x283:  mov    %eax,(%esp)
08303d54 +0x286:  call   08303e02 <_ZN13CBattle_Field20InsertTournamentInfoERSt6vectorIiSaIiEERS0_INS_14TournamentInfoESaIS4_EERSt3mapIsS4_St4lessIsESaISt4pairIKsS4_EEE>  ; CBattle_Field::InsertTournamentInfo(std::vector<int, std::allocator<int> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&)
08303d59 +0x28b:  lea    -0xbc(%ebp),%eax
08303d5f +0x291:  mov    %eax,0xc(%esp)
08303d63 +0x295:  mov    0x10(%ebp),%eax
08303d66 +0x298:  mov    %eax,0x8(%esp)
08303d6a +0x29c:  lea    -0xe4(%ebp),%eax
08303d70 +0x2a2:  mov    %eax,0x4(%esp)
08303d74 +0x2a6:  mov    0x8(%ebp),%eax
08303d77 +0x2a9:  mov    %eax,(%esp)
08303d7a +0x2ac:  call   08303e02 <_ZN13CBattle_Field20InsertTournamentInfoERSt6vectorIiSaIiEERS0_INS_14TournamentInfoESaIS4_EERSt3mapIsS4_St4lessIsESaISt4pairIKsS4_EEE>  ; CBattle_Field::InsertTournamentInfo(std::vector<int, std::allocator<int> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&)
08303d7f +0x2b1:  mov    0x18(%ebp),%eax
08303d82 +0x2b4:  mov    %eax,0xc(%esp)
08303d86 +0x2b8:  mov    0x14(%ebp),%eax
08303d89 +0x2bb:  mov    %eax,0x8(%esp)
08303d8d +0x2bf:  lea    -0xbc(%ebp),%eax
08303d93 +0x2c5:  mov    %eax,0x4(%esp)
08303d97 +0x2c9:  mov    0x8(%ebp),%eax
08303d9a +0x2cc:  mov    %eax,(%esp)
08303d9d +0x2cf:  call   08303f66 <_ZN13CBattle_Field13MakeRoundInfoERSt3mapIsNS_14TournamentInfoESt4lessIsESaISt4pairIKsS1_EEERS0_IsSt6vectorIS1_SaIS1_EES3_SaIS4_IS5_SC_EEERSt4listI11_mapMonsterSaISI_EE>  ; CBattle_Field::MakeRoundInfo(std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&, std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&, std::list<_mapMonster, std::allocator<_mapMonster> >&)
08303da2 +0x2d4:  jmp    08303dbc <+0x2ee>
08303da4 +0x2d6:  mov    %edx,%ebx
08303da6 +0x2d8:  mov    %eax,%esi
08303da8 +0x2da:  lea    -0xe4(%ebp),%eax
08303dae +0x2e0:  mov    %eax,(%esp)
08303db1 +0x2e3:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08303db6 +0x2e8:  mov    %esi,%eax
08303db8 +0x2ea:  mov    %ebx,%edx
08303dba +0x2ec:  jmp    08303dcc <+0x2fe>
08303dbc +0x2ee:  lea    -0xe4(%ebp),%eax
08303dc2 +0x2f4:  mov    %eax,(%esp)
08303dc5 +0x2f7:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08303dca +0x2fc:  jmp    08303dea <+0x31c>
08303dcc +0x2fe:  mov    %edx,%ebx
08303dce +0x300:  mov    %eax,%esi
08303dd0 +0x302:  lea    -0xbc(%ebp),%eax
08303dd6 +0x308:  mov    %eax,(%esp)
08303dd9 +0x30b:  call   0830ee78 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa5d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa5d
08303dde +0x310:  mov    %esi,%eax
08303de0 +0x312:  mov    %ebx,%edx
08303de2 +0x314:  mov    %eax,(%esp)
08303de5 +0x317:  call   08ae3750 <_Unwind_Resume>
08303dea +0x31c:  lea    -0xbc(%ebp),%eax
08303df0 +0x322:  mov    %eax,(%esp)
08303df3 +0x325:  call   0830ee78 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa5d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa5d
08303df8 +0x32a:  lea    -0x8(%ebp),%esp
08303dfb +0x32d:  add    $0x0,%esp
08303dfe +0x330:  pop    %ebx
08303dff +0x331:  pop    %esi
08303e00 +0x332:  pop    %ebp
08303e01 +0x333:  ret
```

## 反编译 C

```c
// CBattle_Field::ConsistTournamentRound @ 0x8303ace

/* CBattle_Field::ConsistTournamentRound(std::vector<CBattle_Field::TournamentInfo,
   std::allocator<CBattle_Field::TournamentInfo> >&, std::vector<CBattle_Field::TournamentInfo,
   std::allocator<CBattle_Field::TournamentInfo> >&, std::map<short,
   std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >,
   std::less<short>, std::allocator<std::pair<short const,
   std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > >
   >&, std::list<_mapMonster, std::allocator<_mapMonster> >&) */

void __thiscall
CBattle_Field::ConsistTournamentRound
          (CBattle_Field *this,vector *param_1,vector *param_2,map *param_3,list *param_4)

{
  undefined2 *puVar1;
  TournamentInfo *pTVar2;
  pair<short_const,CBattle_Field::TournamentInfo> *ppVar3;
  uint local_ec;
  vector<int,std::allocator<int>> local_e8 [12];
  undefined4 local_dc;
  undefined2 local_d8 [12];
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  local_c0 [24];
  pair local_a8 [8];
  pair<short_const,CBattle_Field::TournamentInfo> local_a0 [28];
  short local_84 [14];
  undefined4 local_68;
  undefined4 local_64;
  pair local_60 [8];
  pair<short_const,CBattle_Field::TournamentInfo> local_58 [28];
  short local_3c [14];
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  local_14 = 0xffffffff;
  local_14 = get_rand_int(0x10);
  std::
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  ::map(local_c0);
  TournamentInfo::TournamentInfo((TournamentInfo *)local_d8);
  local_d8[0] = (undefined2)local_14;
                    /* try { // try from 08303b2f to 08303c91 has its CatchHandler @ 08303dcc */
  std::make_pair<short&,CBattle_Field::TournamentInfo&>(local_84,(TournamentInfo *)local_d8);
  std::pair<short_const,CBattle_Field::TournamentInfo>::pair<short,CBattle_Field::TournamentInfo>
            (local_a0,(pair *)local_84);
  ppVar3 = local_a0;
  std::
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  ::insert(local_a8);
  if ((local_14 & 1) == 0) {
    local_10 = local_14 + 1;
  }
  else {
    local_10 = local_14 - 1;
  }
  std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::end();
  std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::begin();
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>>
            (local_64,local_68,ppVar3);
  std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::begin();
  puVar1 = (undefined2 *)
           __gnu_cxx::
           __normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
           ::operator->((__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
                         *)&local_dc);
  *puVar1 = (short)local_10;
  __gnu_cxx::
  __normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
  ::operator*((__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
               *)&local_dc);
  pTVar2 = (TournamentInfo *)
           __gnu_cxx::
           __normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
           ::operator->((__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
                         *)&local_dc);
  std::make_pair<short&,CBattle_Field::TournamentInfo&>(local_3c,pTVar2);
  std::pair<short_const,CBattle_Field::TournamentInfo>::pair<short,CBattle_Field::TournamentInfo>
            (local_58,(pair *)local_3c);
  std::
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  ::insert(local_60);
  std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::erase
            (local_20,param_1,local_dc);
  std::vector<int,std::allocator<int>>::vector(local_e8);
  for (local_ec = 0; (int)local_ec < 0x10; local_ec = local_ec + 1) {
    if ((local_ec != local_14) && (local_ec != local_10)) {
                    /* try { // try from 08303cc7 to 08303da1 has its CatchHandler @ 08303da4 */
      std::vector<int,std::allocator<int>>::push_back(local_e8,(int *)&local_ec);
    }
  }
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (local_18,local_1c);
  InsertTournamentInfo((vector *)this,(vector *)local_e8,(map *)param_1);
  InsertTournamentInfo((vector *)this,(vector *)local_e8,(map *)param_2);
  MakeRoundInfo(this,(map *)local_c0,param_3,param_4);
                    /* try { // try from 08303dc5 to 08303dc9 has its CatchHandler @ 08303dcc */
  std::vector<int,std::allocator<int>>::~vector(local_e8);
  std::
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  ::~map(local_c0);
  return;
}
```
