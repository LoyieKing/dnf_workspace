# CheckHackTypeEndDungeon

`_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv`

`Secu_DungeonAverageCheck::CheckHackTypeEndDungeon()`

| 类 | 地址 |
|---|---|
| `Secu_DungeonAverageCheck` | `0x08279a12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08279a12  _ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv
#           Secu_DungeonAverageCheck::CheckHackTypeEndDungeon()
# range [0x08279a12, 0x08279cd2]
08279a12 +0x000:  push   %ebp
08279a13 +0x001:  mov    %esp,%ebp
08279a15 +0x003:  push   %esi
08279a16 +0x004:  push   %ebx
08279a17 +0x005:  sub    $0x60,%esp
08279a1a +0x008:  mov    0x8(%ebp),%eax
08279a1d +0x00b:  mov    (%eax),%eax
08279a1f +0x00d:  test   %eax,%eax
08279a21 +0x00f:  je     08279cc8 <+0x2b6>
08279a27 +0x015:  mov    0x8(%ebp),%eax
08279a2a +0x018:  lea    0x4(%eax),%edx
08279a2d +0x01b:  lea    -0x34(%ebp),%eax
08279a30 +0x01e:  mov    %edx,0x4(%esp)
08279a34 +0x022:  mov    %eax,(%esp)
08279a37 +0x025:  call   08279e06 <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xf3>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xf3
08279a3c +0x02a:  sub    $0x4,%esp
08279a3f +0x02d:  jmp    08279c94 <+0x282>
08279a44 +0x032:  lea    -0x34(%ebp),%eax
08279a47 +0x035:  mov    %eax,(%esp)
08279a4a +0x038:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
08279a4f +0x03d:  mov    0x10(%eax),%ebx
08279a52 +0x040:  movl   $0x0,-0x2c(%ebp)
08279a59 +0x047:  lea    -0x34(%ebp),%eax
08279a5c +0x04a:  mov    %eax,(%esp)
08279a5f +0x04d:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
08279a64 +0x052:  mov    0x4(%eax),%eax
08279a67 +0x055:  mov    $0x0,%edx
08279a6c +0x05a:  mov    %eax,-0x40(%ebp)
08279a6f +0x05d:  mov    %edx,-0x3c(%ebp)
08279a72 +0x060:  fildll -0x40(%ebp)
08279a75 +0x063:  fldl   &data#a3841abf(.rodata)
08279a7b +0x069:  fmulp  %st,%st(1)
08279a7d +0x06b:  fldl   &data#78e7013f(.rodata)
08279a83 +0x071:  faddp  %st,%st(1)
08279a85 +0x073:  fnstcw -0x42(%ebp)
08279a88 +0x076:  movzwl -0x42(%ebp),%eax
08279a8c +0x07a:  mov    $0xc,%ah
08279a8e +0x07c:  mov    %ax,-0x44(%ebp)
08279a92 +0x080:  fldcw  -0x44(%ebp)
08279a95 +0x083:  fistpl -0x48(%ebp)
08279a98 +0x086:  fldcw  -0x42(%ebp)
08279a9b +0x089:  mov    -0x48(%ebp),%eax
08279a9e +0x08c:  sub    $0x4,%eax
08279aa1 +0x08f:  mov    %eax,-0x28(%ebp)
08279aa4 +0x092:  lea    -0x2c(%ebp),%eax
08279aa7 +0x095:  mov    %eax,0x4(%esp)
08279aab +0x099:  lea    -0x28(%ebp),%eax
08279aae +0x09c:  mov    %eax,(%esp)
08279ab1 +0x09f:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08279ab6 +0x0a4:  mov    (%eax),%eax
08279ab8 +0x0a6:  mov    %ebx,%edx
08279aba +0x0a8:  sub    %eax,%edx
08279abc +0x0aa:  mov    %edx,%eax
08279abe +0x0ac:  mov    %eax,-0x1c(%ebp)
08279ac1 +0x0af:  lea    -0x34(%ebp),%eax
08279ac4 +0x0b2:  mov    %eax,(%esp)
08279ac7 +0x0b5:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
08279acc +0x0ba:  mov    0x14(%eax),%ebx
08279acf +0x0bd:  movl   $0x0,-0x24(%ebp)
08279ad6 +0x0c4:  lea    -0x34(%ebp),%eax
08279ad9 +0x0c7:  mov    %eax,(%esp)
08279adc +0x0ca:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
08279ae1 +0x0cf:  mov    0x4(%eax),%eax
08279ae4 +0x0d2:  mov    $0x0,%edx
08279ae9 +0x0d7:  mov    %eax,-0x40(%ebp)
08279aec +0x0da:  mov    %edx,-0x3c(%ebp)
08279aef +0x0dd:  fildll -0x40(%ebp)
08279af2 +0x0e0:  fldl   &data#a3841abf(.rodata)
08279af8 +0x0e6:  fmulp  %st,%st(1)
08279afa +0x0e8:  fldl   &data#78e7013f(.rodata)
08279b00 +0x0ee:  faddp  %st,%st(1)
08279b02 +0x0f0:  fnstcw -0x42(%ebp)
08279b05 +0x0f3:  movzwl -0x42(%ebp),%eax
08279b09 +0x0f7:  mov    $0xc,%ah
08279b0b +0x0f9:  mov    %ax,-0x44(%ebp)
08279b0f +0x0fd:  fldcw  -0x44(%ebp)
08279b12 +0x100:  fistpl -0x48(%ebp)
08279b15 +0x103:  fldcw  -0x42(%ebp)
08279b18 +0x106:  mov    -0x48(%ebp),%eax
08279b1b +0x109:  sub    $0x4,%eax
08279b1e +0x10c:  mov    %eax,-0x20(%ebp)
08279b21 +0x10f:  lea    -0x24(%ebp),%eax
08279b24 +0x112:  mov    %eax,0x4(%esp)
08279b28 +0x116:  lea    -0x20(%ebp),%eax
08279b2b +0x119:  mov    %eax,(%esp)
08279b2e +0x11c:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08279b33 +0x121:  mov    (%eax),%eax
08279b35 +0x123:  mov    %ebx,%edx
08279b37 +0x125:  sub    %eax,%edx
08279b39 +0x127:  mov    %edx,%eax
08279b3b +0x129:  mov    %eax,-0x18(%ebp)
08279b3e +0x12c:  cmpl   $0x0,-0x1c(%ebp)
08279b42 +0x130:  jg     08279b4e <+0x13c>
08279b44 +0x132:  cmpl   $0x0,-0x18(%ebp)
08279b48 +0x136:  jle    08279c89 <+0x277>
08279b4e +0x13c:  movl   $0x0,-0x14(%ebp)
08279b55 +0x143:  jmp    08279c7a <+0x268>
08279b5a +0x148:  mov    0x8(%ebp),%eax
08279b5d +0x14b:  mov    (%eax),%eax
08279b5f +0x14d:  mov    -0x14(%ebp),%edx
08279b62 +0x150:  mov    %edx,0x4(%esp)
08279b66 +0x154:  mov    %eax,(%esp)
08279b69 +0x157:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08279b6e +0x15c:  test   %al,%al
08279b70 +0x15e:  je     08279c76 <+0x264>
08279b76 +0x164:  mov    0x8(%ebp),%eax
08279b79 +0x167:  mov    (%eax),%eax
08279b7b +0x169:  mov    -0x14(%ebp),%edx
08279b7e +0x16c:  mov    %edx,0x4(%esp)
08279b82 +0x170:  mov    %eax,(%esp)
08279b85 +0x173:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08279b8a +0x178:  mov    %eax,-0x10(%ebp)
08279b8d +0x17b:  mov    -0x10(%ebp),%eax
08279b90 +0x17e:  mov    %eax,(%esp)
08279b93 +0x181:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08279b98 +0x186:  imul   $0x64,%eax,%ebx
08279b9b +0x189:  mov    -0x10(%ebp),%eax
08279b9e +0x18c:  mov    %eax,(%esp)
08279ba1 +0x18f:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08279ba6 +0x194:  movsbl %al,%edx
08279ba9 +0x197:  mov    %edx,%eax
08279bab +0x199:  shl    $0x2,%eax
08279bae +0x19c:  add    %edx,%eax
08279bb0 +0x19e:  add    %eax,%eax
08279bb2 +0x1a0:  add    %eax,%ebx
08279bb4 +0x1a2:  mov    -0x10(%ebp),%eax
08279bb7 +0x1a5:  mov    %eax,(%esp)
08279bba +0x1a8:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08279bbf +0x1ad:  movsbl %al,%eax
08279bc2 +0x1b0:  lea    (%ebx,%eax,1),%eax
08279bc5 +0x1b3:  mov    %eax,-0xc(%ebp)
08279bc8 +0x1b6:  cmpl   $0x0,-0x1c(%ebp)
08279bcc +0x1ba:  jle    08279c1f <+0x20d>
08279bce +0x1bc:  mov    -0xc(%ebp),%eax
08279bd1 +0x1bf:  mov    %eax,0x8(%esp)
08279bd5 +0x1c3:  movl   $0xe8,0x4(%esp)
08279bdd +0x1cb:  mov    -0x10(%ebp),%eax
08279be0 +0x1ce:  mov    %eax,(%esp)
08279be3 +0x1d1:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
08279be8 +0x1d6:  mov    %eax,%esi
08279bea +0x1d8:  mov    -0x1c(%ebp),%ebx
08279bed +0x1db:  mov    -0x10(%ebp),%eax
08279bf0 +0x1de:  mov    %eax,(%esp)
08279bf3 +0x1e1:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08279bf8 +0x1e6:  movl   $0x0,0x14(%esp)
08279c00 +0x1ee:  mov    %esi,0x10(%esp)
08279c04 +0x1f2:  mov    %ebx,0xc(%esp)
08279c08 +0x1f6:  movl   $0xe8,0x8(%esp)
08279c10 +0x1fe:  mov    -0x10(%ebp),%edx
08279c13 +0x201:  mov    %edx,0x4(%esp)
08279c17 +0x205:  mov    %eax,(%esp)
08279c1a +0x208:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08279c1f +0x20d:  cmpl   $0x0,-0x18(%ebp)
08279c23 +0x211:  jle    08279c76 <+0x264>
08279c25 +0x213:  mov    -0xc(%ebp),%eax
08279c28 +0x216:  mov    %eax,0x8(%esp)
08279c2c +0x21a:  movl   $0xe9,0x4(%esp)
08279c34 +0x222:  mov    -0x10(%ebp),%eax
08279c37 +0x225:  mov    %eax,(%esp)
08279c3a +0x228:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
08279c3f +0x22d:  mov    %eax,%esi
08279c41 +0x22f:  mov    -0x18(%ebp),%ebx
08279c44 +0x232:  mov    -0x10(%ebp),%eax
08279c47 +0x235:  mov    %eax,(%esp)
08279c4a +0x238:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08279c4f +0x23d:  movl   $0x0,0x14(%esp)
08279c57 +0x245:  mov    %esi,0x10(%esp)
08279c5b +0x249:  mov    %ebx,0xc(%esp)
08279c5f +0x24d:  movl   $0xe9,0x8(%esp)
08279c67 +0x255:  mov    -0x10(%ebp),%edx
08279c6a +0x258:  mov    %edx,0x4(%esp)
08279c6e +0x25c:  mov    %eax,(%esp)
08279c71 +0x25f:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08279c76 +0x264:  addl   $0x1,-0x14(%ebp)
08279c7a +0x268:  cmpl   $0x3,-0x14(%ebp)
08279c7e +0x26c:  setle  %al
08279c81 +0x26f:  test   %al,%al
08279c83 +0x271:  jne    08279b5a <+0x148>
08279c89 +0x277:  lea    -0x34(%ebp),%eax
08279c8c +0x27a:  mov    %eax,(%esp)
08279c8f +0x27d:  call   08279e2a <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x117>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x117
08279c94 +0x282:  mov    0x8(%ebp),%eax
08279c97 +0x285:  lea    0x4(%eax),%edx
08279c9a +0x288:  lea    -0x30(%ebp),%eax
08279c9d +0x28b:  mov    %edx,0x4(%esp)
08279ca1 +0x28f:  mov    %eax,(%esp)
08279ca4 +0x292:  call   08279d88 <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x75>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x75
08279ca9 +0x297:  sub    $0x4,%esp
08279cac +0x29a:  lea    -0x30(%ebp),%eax
08279caf +0x29d:  mov    %eax,0x4(%esp)
08279cb3 +0x2a1:  lea    -0x34(%ebp),%eax
08279cb6 +0x2a4:  mov    %eax,(%esp)
08279cb9 +0x2a7:  call   08279dae <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x9b>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x9b
08279cbe +0x2ac:  test   %al,%al
08279cc0 +0x2ae:  jne    08279a44 <+0x32>
08279cc6 +0x2b4:  jmp    08279cc9 <+0x2b7>
08279cc8 +0x2b6:  nop
08279cc9 +0x2b7:  lea    -0x8(%ebp),%esp
08279ccc +0x2ba:  add    $0x0,%esp
08279ccf +0x2bd:  pop    %ebx
08279cd0 +0x2be:  pop    %esi
08279cd1 +0x2bf:  pop    %ebp
08279cd2 +0x2c0:  ret
```

## 反编译 C

```c
// Secu_DungeonAverageCheck::CheckHackTypeEndDungeon @ 0x8279a12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Secu_DungeonAverageCheck::CheckHackTypeEndDungeon() */

void __thiscall Secu_DungeonAverageCheck::CheckHackTypeEndDungeon(Secu_DungeonAverageCheck *this)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  CHackAnalyzer *pCVar8;
  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
  local_38 [4];
  __normal_iterator local_34 [4];
  int local_30;
  int local_2c [3];
  int local_20;
  int local_1c;
  int local_18;
  CUserCharacInfo *local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::begin();
    while( true ) {
      std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::end();
      bVar3 = __gnu_cxx::operator!=(local_38,local_34);
      if (!bVar3) break;
      iVar4 = __gnu_cxx::
              __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
              ::operator->(local_38);
      iVar4 = *(int *)(iVar4 + 0x10);
      local_30 = 0;
      iVar5 = __gnu_cxx::
              __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
              ::operator->(local_38);
      local_2c[0] = (int)ROUND(_DAT_08c02788 + _DAT_08c02780 * (double)*(uint *)(iVar5 + 4)) + -4;
      piVar6 = std::max<int>(local_2c,&local_30);
      local_20 = iVar4 - *piVar6;
      iVar4 = __gnu_cxx::
              __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
              ::operator->(local_38);
      iVar4 = *(int *)(iVar4 + 0x14);
      local_2c[1] = 0;
      iVar5 = __gnu_cxx::
              __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
              ::operator->(local_38);
      local_2c[2] = (int)ROUND(_DAT_08c02788 + _DAT_08c02780 * (double)*(uint *)(iVar5 + 4)) + -4;
      piVar6 = std::max<int>(local_2c + 2,local_2c + 1);
      local_1c = iVar4 - *piVar6;
      if ((0 < local_20) || (0 < local_1c)) {
        for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
          cVar1 = CParty::checkValidUser(*(CParty **)this,local_18);
          if (cVar1 != '\0') {
            local_14 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_18);
            iVar4 = CUserCharacInfo::get_charac_job(local_14);
            cVar1 = CUserCharacInfo::getCurCharFirstGrowType(local_14);
            cVar2 = CUserCharacInfo::getCurCharSecondGrowType(local_14);
            local_10 = iVar4 * 100 + cVar1 * 10 + (int)cVar2;
            if (0 < local_20) {
              uVar7 = CUser::SetETC((CUser *)local_14,0xe8,local_10);
              iVar4 = local_20;
              pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)local_14);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,local_14,0xe8,iVar4,uVar7,0);
            }
            if (0 < local_1c) {
              uVar7 = CUser::SetETC((CUser *)local_14,0xe9,local_10);
              iVar4 = local_1c;
              pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)local_14);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,local_14,0xe9,iVar4,uVar7,0);
            }
          }
        }
      }
      __gnu_cxx::
      __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
      ::operator++(local_38);
    }
  }
  return;
}
```
