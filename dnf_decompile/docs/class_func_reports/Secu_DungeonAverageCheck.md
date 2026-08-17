# Secu_DungeonAverageCheck

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CheckHackTypeEndDungeon

```asm
// === 08279a12 Secu_DungeonAverageCheck::CheckHackTypeEndDungeon  [0x08279a12-0x8279cd2] ===
 8279a12:	55                   	push   %ebp
 8279a13:	89 e5                	mov    %esp,%ebp
 8279a15:	56                   	push   %esi
 8279a16:	53                   	push   %ebx
 8279a17:	83 ec 60             	sub    $0x60,%esp
 8279a1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8279a1d:	8b 00                	mov    (%eax),%eax
 8279a1f:	85 c0                	test   %eax,%eax
 8279a21:	0f 84 a1 02 00 00    	je     8279cc8 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x2b6>
 8279a27:	8b 45 08             	mov    0x8(%ebp),%eax
 8279a2a:	8d 50 04             	lea    0x4(%eax),%edx
 8279a2d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8279a30:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279a34:	89 04 24             	mov    %eax,(%esp)
 8279a37:	e8 ca 03 00 00       	call   8279e06 <_ZNSt6vectorI18SecKillMonsterInfoSaIS0_EE5beginEv>
 8279a3c:	83 ec 04             	sub    $0x4,%esp
 8279a3f:	e9 50 02 00 00       	jmp    8279c94 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x282>
 8279a44:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8279a47:	89 04 24             	mov    %eax,(%esp)
 8279a4a:	e8 8b 03 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 8279a4f:	8b 58 10             	mov    0x10(%eax),%ebx
 8279a52:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8279a59:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8279a5c:	89 04 24             	mov    %eax,(%esp)
 8279a5f:	e8 76 03 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 8279a64:	8b 40 04             	mov    0x4(%eax),%eax
 8279a67:	ba 00 00 00 00       	mov    $0x0,%edx
 8279a6c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8279a6f:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8279a72:	df 6d c0             	fildll -0x40(%ebp)
 8279a75:	dd 05 80 27 c0 08    	fldl   0x8c02780
 8279a7b:	de c9                	fmulp  %st,%st(1)
 8279a7d:	dd 05 88 27 c0 08    	fldl   0x8c02788
 8279a83:	de c1                	faddp  %st,%st(1)
 8279a85:	d9 7d be             	fnstcw -0x42(%ebp)
 8279a88:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 8279a8c:	b4 0c                	mov    $0xc,%ah
 8279a8e:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 8279a92:	d9 6d bc             	fldcw  -0x44(%ebp)
 8279a95:	db 5d b8             	fistpl -0x48(%ebp)
 8279a98:	d9 6d be             	fldcw  -0x42(%ebp)
 8279a9b:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8279a9e:	83 e8 04             	sub    $0x4,%eax
 8279aa1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8279aa4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8279aa7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8279aab:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8279aae:	89 04 24             	mov    %eax,(%esp)
 8279ab1:	e8 62 47 e1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8279ab6:	8b 00                	mov    (%eax),%eax
 8279ab8:	89 da                	mov    %ebx,%edx
 8279aba:	29 c2                	sub    %eax,%edx
 8279abc:	89 d0                	mov    %edx,%eax
 8279abe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8279ac1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8279ac4:	89 04 24             	mov    %eax,(%esp)
 8279ac7:	e8 0e 03 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 8279acc:	8b 58 14             	mov    0x14(%eax),%ebx
 8279acf:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8279ad6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8279ad9:	89 04 24             	mov    %eax,(%esp)
 8279adc:	e8 f9 02 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 8279ae1:	8b 40 04             	mov    0x4(%eax),%eax
 8279ae4:	ba 00 00 00 00       	mov    $0x0,%edx
 8279ae9:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8279aec:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8279aef:	df 6d c0             	fildll -0x40(%ebp)
 8279af2:	dd 05 80 27 c0 08    	fldl   0x8c02780
 8279af8:	de c9                	fmulp  %st,%st(1)
 8279afa:	dd 05 88 27 c0 08    	fldl   0x8c02788
 8279b00:	de c1                	faddp  %st,%st(1)
 8279b02:	d9 7d be             	fnstcw -0x42(%ebp)
 8279b05:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 8279b09:	b4 0c                	mov    $0xc,%ah
 8279b0b:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 8279b0f:	d9 6d bc             	fldcw  -0x44(%ebp)
 8279b12:	db 5d b8             	fistpl -0x48(%ebp)
 8279b15:	d9 6d be             	fldcw  -0x42(%ebp)
 8279b18:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8279b1b:	83 e8 04             	sub    $0x4,%eax
 8279b1e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8279b21:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8279b24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8279b28:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8279b2b:	89 04 24             	mov    %eax,(%esp)
 8279b2e:	e8 e5 46 e1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8279b33:	8b 00                	mov    (%eax),%eax
 8279b35:	89 da                	mov    %ebx,%edx
 8279b37:	29 c2                	sub    %eax,%edx
 8279b39:	89 d0                	mov    %edx,%eax
 8279b3b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8279b3e:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8279b42:	7f 0a                	jg     8279b4e <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x13c>
 8279b44:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8279b48:	0f 8e 3b 01 00 00    	jle    8279c89 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x277>
 8279b4e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8279b55:	e9 20 01 00 00       	jmp    8279c7a <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x268>
 8279b5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8279b5d:	8b 00                	mov    (%eax),%eax
 8279b5f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8279b62:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279b66:	89 04 24             	mov    %eax,(%esp)
 8279b69:	e8 fa bc ec ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8279b6e:	84 c0                	test   %al,%al
 8279b70:	0f 84 00 01 00 00    	je     8279c76 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x264>
 8279b76:	8b 45 08             	mov    0x8(%ebp),%eax
 8279b79:	8b 00                	mov    (%eax),%eax
 8279b7b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8279b7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279b82:	89 04 24             	mov    %eax,(%esp)
 8279b85:	e8 da bb ec ff       	call   8145764 <_ZN6CParty8get_userEi>
 8279b8a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8279b8d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8279b90:	89 04 24             	mov    %eax,(%esp)
 8279b93:	e8 88 43 e8 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8279b98:	6b d8 64             	imul   $0x64,%eax,%ebx
 8279b9b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8279b9e:	89 04 24             	mov    %eax,(%esp)
 8279ba1:	e8 ee 70 e9 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8279ba6:	0f be d0             	movsbl %al,%edx
 8279ba9:	89 d0                	mov    %edx,%eax
 8279bab:	c1 e0 02             	shl    $0x2,%eax
 8279bae:	01 d0                	add    %edx,%eax
 8279bb0:	01 c0                	add    %eax,%eax
 8279bb2:	01 c3                	add    %eax,%ebx
 8279bb4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8279bb7:	89 04 24             	mov    %eax,(%esp)
 8279bba:	e8 7d 56 fb ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 8279bbf:	0f be c0             	movsbl %al,%eax
 8279bc2:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8279bc5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8279bc8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8279bcc:	7e 51                	jle    8279c1f <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x20d>
 8279bce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8279bd1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8279bd5:	c7 44 24 04 e8 00 00 	movl   $0xe8,0x4(%esp)
 8279bdc:	00 
 8279bdd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8279be0:	89 04 24             	mov    %eax,(%esp)
 8279be3:	e8 80 fd e7 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 8279be8:	89 c6                	mov    %eax,%esi
 8279bea:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8279bed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8279bf0:	89 04 24             	mov    %eax,(%esp)
 8279bf3:	e8 62 fd e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8279bf8:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8279bff:	00 
 8279c00:	89 74 24 10          	mov    %esi,0x10(%esp)
 8279c04:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8279c08:	c7 44 24 08 e8 00 00 	movl   $0xe8,0x8(%esp)
 8279c0f:	00 
 8279c10:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8279c13:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279c17:	89 04 24             	mov    %eax,(%esp)
 8279c1a:	e8 5f f0 e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8279c1f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8279c23:	7e 51                	jle    8279c76 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x264>
 8279c25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8279c28:	89 44 24 08          	mov    %eax,0x8(%esp)
 8279c2c:	c7 44 24 04 e9 00 00 	movl   $0xe9,0x4(%esp)
 8279c33:	00 
 8279c34:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8279c37:	89 04 24             	mov    %eax,(%esp)
 8279c3a:	e8 29 fd e7 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 8279c3f:	89 c6                	mov    %eax,%esi
 8279c41:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8279c44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8279c47:	89 04 24             	mov    %eax,(%esp)
 8279c4a:	e8 0b fd e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8279c4f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8279c56:	00 
 8279c57:	89 74 24 10          	mov    %esi,0x10(%esp)
 8279c5b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8279c5f:	c7 44 24 08 e9 00 00 	movl   $0xe9,0x8(%esp)
 8279c66:	00 
 8279c67:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8279c6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279c6e:	89 04 24             	mov    %eax,(%esp)
 8279c71:	e8 08 f0 e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8279c76:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8279c7a:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 8279c7e:	0f 9e c0             	setle  %al
 8279c81:	84 c0                	test   %al,%al
 8279c83:	0f 85 d1 fe ff ff    	jne    8279b5a <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x148>
 8279c89:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8279c8c:	89 04 24             	mov    %eax,(%esp)
 8279c8f:	e8 96 01 00 00       	call   8279e2a <_ZN9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEppEv>
 8279c94:	8b 45 08             	mov    0x8(%ebp),%eax
 8279c97:	8d 50 04             	lea    0x4(%eax),%edx
 8279c9a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8279c9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279ca1:	89 04 24             	mov    %eax,(%esp)
 8279ca4:	e8 df 00 00 00       	call   8279d88 <_ZNSt6vectorI18SecKillMonsterInfoSaIS0_EE3endEv>
 8279ca9:	83 ec 04             	sub    $0x4,%esp
 8279cac:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8279caf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8279cb3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8279cb6:	89 04 24             	mov    %eax,(%esp)
 8279cb9:	e8 f0 00 00 00       	call   8279dae <_ZN9__gnu_cxxneIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8279cbe:	84 c0                	test   %al,%al
 8279cc0:	0f 85 7e fd ff ff    	jne    8279a44 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x32>
 8279cc6:	eb 01                	jmp    8279cc9 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv+0x2b7>
 8279cc8:	90                   	nop
 8279cc9:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8279ccc:	83 c4 00             	add    $0x0,%esp
 8279ccf:	5b                   	pop    %ebx
 8279cd0:	5e                   	pop    %esi
 8279cd1:	5d                   	pop    %ebp
 8279cd2:	c3                   	ret

```

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

---

## SetPartyPtr

```asm
// === 082794a6 Secu_DungeonAverageCheck::SetPartyPtr  [0x082794a6-0x82794c1] ===
 82794a6:	55                   	push   %ebp
 82794a7:	89 e5                	mov    %esp,%ebp
 82794a9:	83 ec 18             	sub    $0x18,%esp
 82794ac:	8b 45 08             	mov    0x8(%ebp),%eax
 82794af:	8b 55 0c             	mov    0xc(%ebp),%edx
 82794b2:	89 10                	mov    %edx,(%eax)
 82794b4:	8b 45 08             	mov    0x8(%ebp),%eax
 82794b7:	89 04 24             	mov    %eax,(%esp)
 82794ba:	e8 d1 ff ff ff       	call   8279490 <_ZN24Secu_DungeonAverageCheck5resetEv>
 82794bf:	c9                   	leave
 82794c0:	c3                   	ret
 82794c1:	90                   	nop

```

```c
// Secu_DungeonAverageCheck::SetPartyPtr @ 0x82794a6

/* Secu_DungeonAverageCheck::SetPartyPtr(CParty*) */

void __thiscall
Secu_DungeonAverageCheck::SetPartyPtr(Secu_DungeonAverageCheck *this,CParty *param_1)

{
  *(CParty **)this = param_1;
  reset(this);
  return;
}

```

---

## dungeonClear

```asm
// === 082799d6 Secu_DungeonAverageCheck::dungeonClear  [0x082799d6-0x82799f3] ===
 82799d6:	55                   	push   %ebp
 82799d7:	89 e5                	mov    %esp,%ebp
 82799d9:	83 ec 18             	sub    $0x18,%esp
 82799dc:	8b 45 08             	mov    0x8(%ebp),%eax
 82799df:	89 04 24             	mov    %eax,(%esp)
 82799e2:	e8 2b 00 00 00       	call   8279a12 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv>
 82799e7:	8b 45 08             	mov    0x8(%ebp),%eax
 82799ea:	89 04 24             	mov    %eax,(%esp)
 82799ed:	e8 9e fa ff ff       	call   8279490 <_ZN24Secu_DungeonAverageCheck5resetEv>
 82799f2:	c9                   	leave
 82799f3:	c3                   	ret

```

```c
// Secu_DungeonAverageCheck::dungeonClear @ 0x82799d6

/* Secu_DungeonAverageCheck::dungeonClear() */

void __thiscall Secu_DungeonAverageCheck::dungeonClear(Secu_DungeonAverageCheck *this)

{
  CheckHackTypeEndDungeon(this);
  reset(this);
  return;
}

```

---

## dungeonFail

```asm
// === 082799f4 Secu_DungeonAverageCheck::dungeonFail  [0x082799f4-0x8279a11] ===
 82799f4:	55                   	push   %ebp
 82799f5:	89 e5                	mov    %esp,%ebp
 82799f7:	83 ec 18             	sub    $0x18,%esp
 82799fa:	8b 45 08             	mov    0x8(%ebp),%eax
 82799fd:	89 04 24             	mov    %eax,(%esp)
 8279a00:	e8 0d 00 00 00       	call   8279a12 <_ZN24Secu_DungeonAverageCheck23CheckHackTypeEndDungeonEv>
 8279a05:	8b 45 08             	mov    0x8(%ebp),%eax
 8279a08:	89 04 24             	mov    %eax,(%esp)
 8279a0b:	e8 80 fa ff ff       	call   8279490 <_ZN24Secu_DungeonAverageCheck5resetEv>
 8279a10:	c9                   	leave
 8279a11:	c3                   	ret

```

```c
// Secu_DungeonAverageCheck::dungeonFail @ 0x82799f4

/* Secu_DungeonAverageCheck::dungeonFail() */

void __thiscall Secu_DungeonAverageCheck::dungeonFail(Secu_DungeonAverageCheck *this)

{
  CheckHackTypeEndDungeon(this);
  reset(this);
  return;
}

```

---

## findKillMonsterInfo

```asm
// === 0827993c Secu_DungeonAverageCheck::findKillMonsterInfo  [0x0827993c-0x82799d5] ===
 827993c:	55                   	push   %ebp
 827993d:	89 e5                	mov    %esp,%ebp
 827993f:	53                   	push   %ebx
 8279940:	83 ec 24             	sub    $0x24,%esp
 8279943:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8279946:	8b 45 0c             	mov    0xc(%ebp),%eax
 8279949:	8d 50 04             	lea    0x4(%eax),%edx
 827994c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827994f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279953:	89 04 24             	mov    %eax,(%esp)
 8279956:	e8 ab 04 00 00       	call   8279e06 <_ZNSt6vectorI18SecKillMonsterInfoSaIS0_EE5beginEv>
 827995b:	83 ec 04             	sub    $0x4,%esp
 827995e:	eb 29                	jmp    8279989 <_ZN24Secu_DungeonAverageCheck19findKillMonsterInfoEj+0x4d>
 8279960:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8279963:	89 04 24             	mov    %eax,(%esp)
 8279966:	e8 6f 04 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 827996b:	8b 00                	mov    (%eax),%eax
 827996d:	3b 45 10             	cmp    0x10(%ebp),%eax
 8279970:	0f 94 c0             	sete   %al
 8279973:	84 c0                	test   %al,%al
 8279975:	74 07                	je     827997e <_ZN24Secu_DungeonAverageCheck19findKillMonsterInfoEj+0x42>
 8279977:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827997a:	89 03                	mov    %eax,(%ebx)
 827997c:	eb 4e                	jmp    82799cc <_ZN24Secu_DungeonAverageCheck19findKillMonsterInfoEj+0x90>
 827997e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8279981:	89 04 24             	mov    %eax,(%esp)
 8279984:	e8 a1 04 00 00       	call   8279e2a <_ZN9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEppEv>
 8279989:	8b 45 0c             	mov    0xc(%ebp),%eax
 827998c:	8d 50 04             	lea    0x4(%eax),%edx
 827998f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8279992:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279996:	89 04 24             	mov    %eax,(%esp)
 8279999:	e8 ea 03 00 00       	call   8279d88 <_ZNSt6vectorI18SecKillMonsterInfoSaIS0_EE3endEv>
 827999e:	83 ec 04             	sub    $0x4,%esp
 82799a1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82799a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82799a8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82799ab:	89 04 24             	mov    %eax,(%esp)
 82799ae:	e8 fb 03 00 00       	call   8279dae <_ZN9__gnu_cxxneIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 82799b3:	84 c0                	test   %al,%al
 82799b5:	75 a9                	jne    8279960 <_ZN24Secu_DungeonAverageCheck19findKillMonsterInfoEj+0x24>
 82799b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82799ba:	83 c0 04             	add    $0x4,%eax
 82799bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82799c1:	89 1c 24             	mov    %ebx,(%esp)
 82799c4:	e8 bf 03 00 00       	call   8279d88 <_ZNSt6vectorI18SecKillMonsterInfoSaIS0_EE3endEv>
 82799c9:	83 ec 04             	sub    $0x4,%esp
 82799cc:	89 d8                	mov    %ebx,%eax
 82799ce:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 82799d1:	c9                   	leave
 82799d2:	c2 04 00             	ret    $0x4
 82799d5:	90                   	nop

```

```c
// Secu_DungeonAverageCheck::findKillMonsterInfo @ 0x827993c

/* Secu_DungeonAverageCheck::findKillMonsterInfo(unsigned int) */

uint Secu_DungeonAverageCheck::findKillMonsterInfo(uint param_1)

{
  bool bVar1;
  int *piVar2;
  int in_stack_0000000c;
  undefined4 local_14;
  __normal_iterator local_10 [8];
  
  std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::begin();
  while( true ) {
    std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_14,local_10);
    if (!bVar1) {
      std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::end();
      return param_1;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                    ::operator->((__normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                                  *)&local_14);
    if (*piVar2 == in_stack_0000000c) break;
    __gnu_cxx::
    __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
    ::operator++((__normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                  *)&local_14);
  }
  *(undefined4 *)param_1 = local_14;
  return param_1;
}

```

---

## reset

```asm
// === 08279490 Secu_DungeonAverageCheck::reset  [0x08279490-0x82794a5] ===
 8279490:	55                   	push   %ebp
 8279491:	89 e5                	mov    %esp,%ebp
 8279493:	83 ec 18             	sub    $0x18,%esp
 8279496:	8b 45 08             	mov    0x8(%ebp),%eax
 8279499:	83 c0 04             	add    $0x4,%eax
 827949c:	89 04 24             	mov    %eax,(%esp)
 827949f:	e8 c8 08 00 00       	call   8279d6c <_ZNSt6vectorI18SecKillMonsterInfoSaIS0_EE5clearEv>
 82794a4:	c9                   	leave
 82794a5:	c3                   	ret

```

```c
// Secu_DungeonAverageCheck::reset @ 0x8279490

/* Secu_DungeonAverageCheck::reset() */

void __thiscall Secu_DungeonAverageCheck::reset(Secu_DungeonAverageCheck *this)

{
  std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::clear
            ((vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>> *)(this + 4));
  return;
}

```

---

## setKillMonsterInfo

```asm
// === 082794d6 Secu_DungeonAverageCheck::setKillMonsterInfo  [0x082794d6-0x827993b] ===
 82794d6:	55                   	push   %ebp
 82794d7:	89 e5                	mov    %esp,%ebp
 82794d9:	53                   	push   %ebx
 82794da:	81 ec 94 00 00 00    	sub    $0x94,%esp
 82794e0:	8b 45 08             	mov    0x8(%ebp),%eax
 82794e3:	8b 00                	mov    (%eax),%eax
 82794e5:	85 c0                	test   %eax,%eax
 82794e7:	0f 84 49 04 00 00    	je     8279936 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x460>
 82794ed:	8b 45 10             	mov    0x10(%ebp),%eax
 82794f0:	89 04 24             	mov    %eax,(%esp)
 82794f3:	e8 8a 7c ed ff       	call   8151182 <_ZN11map_monster14isNamedMonsterEv>
 82794f8:	83 f0 01             	xor    $0x1,%eax
 82794fb:	84 c0                	test   %al,%al
 82794fd:	74 12                	je     8279511 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x3b>
 82794ff:	8b 45 10             	mov    0x10(%ebp),%eax
 8279502:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8279506:	84 c0                	test   %al,%al
 8279508:	75 07                	jne    8279511 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x3b>
 827950a:	b8 01 00 00 00       	mov    $0x1,%eax
 827950f:	eb 05                	jmp    8279516 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x40>
 8279511:	b8 00 00 00 00       	mov    $0x0,%eax
 8279516:	84 c0                	test   %al,%al
 8279518:	0f 84 19 04 00 00    	je     8279937 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x461>
 827951e:	8b 45 10             	mov    0x10(%ebp),%eax
 8279521:	8b 40 0c             	mov    0xc(%eax),%eax
 8279524:	89 c2                	mov    %eax,%edx
 8279526:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8279529:	89 54 24 08          	mov    %edx,0x8(%esp)
 827952d:	8b 55 08             	mov    0x8(%ebp),%edx
 8279530:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279534:	89 04 24             	mov    %eax,(%esp)
 8279537:	e8 00 04 00 00       	call   827993c <_ZN24Secu_DungeonAverageCheck19findKillMonsterInfoEj>
 827953c:	83 ec 04             	sub    $0x4,%esp
 827953f:	8b 45 08             	mov    0x8(%ebp),%eax
 8279542:	8d 50 04             	lea    0x4(%eax),%edx
 8279545:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8279548:	89 54 24 04          	mov    %edx,0x4(%esp)
 827954c:	89 04 24             	mov    %eax,(%esp)
 827954f:	e8 34 08 00 00       	call   8279d88 <_ZNSt6vectorI18SecKillMonsterInfoSaIS0_EE3endEv>
 8279554:	83 ec 04             	sub    $0x4,%esp
 8279557:	8d 45 b8             	lea    -0x48(%ebp),%eax
 827955a:	89 44 24 04          	mov    %eax,0x4(%esp)
 827955e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8279561:	89 04 24             	mov    %eax,(%esp)
 8279564:	e8 45 08 00 00       	call   8279dae <_ZN9__gnu_cxxneIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8279569:	84 c0                	test   %al,%al
 827956b:	0f 84 77 03 00 00    	je     82798e8 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x412>
 8279571:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8279574:	89 04 24             	mov    %eax,(%esp)
 8279577:	e8 5e 08 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 827957c:	8b 40 04             	mov    0x4(%eax),%eax
 827957f:	83 f8 04             	cmp    $0x4,%eax
 8279582:	0f 97 c0             	seta   %al
 8279585:	84 c0                	test   %al,%al
 8279587:	0f 84 0b 03 00 00    	je     8279898 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x3c2>
 827958d:	b8 00 00 00 00       	mov    $0x0,%eax
 8279592:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8279595:	b8 00 00 00 00       	mov    $0x0,%eax
 827959a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 827959d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82795a0:	89 04 24             	mov    %eax,(%esp)
 82795a3:	e8 32 08 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 82795a8:	8b 40 08             	mov    0x8(%eax),%eax
 82795ab:	ba 00 00 00 00       	mov    $0x0,%edx
 82795b0:	89 45 98             	mov    %eax,-0x68(%ebp)
 82795b3:	89 55 9c             	mov    %edx,-0x64(%ebp)
 82795b6:	df 6d 98             	fildll -0x68(%ebp)
 82795b9:	d9 5d 8c             	fstps  -0x74(%ebp)
 82795bc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82795bf:	89 04 24             	mov    %eax,(%esp)
 82795c2:	e8 13 08 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 82795c7:	8b 40 04             	mov    0x4(%eax),%eax
 82795ca:	ba 00 00 00 00       	mov    $0x0,%edx
 82795cf:	89 45 98             	mov    %eax,-0x68(%ebp)
 82795d2:	89 55 9c             	mov    %edx,-0x64(%ebp)
 82795d5:	df 6d 98             	fildll -0x68(%ebp)
 82795d8:	d8 7d 8c             	fdivrs -0x74(%ebp)
 82795db:	d9 5d d4             	fstps  -0x2c(%ebp)
 82795de:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82795e1:	89 04 24             	mov    %eax,(%esp)
 82795e4:	e8 f1 07 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 82795e9:	8b 40 0c             	mov    0xc(%eax),%eax
 82795ec:	ba 00 00 00 00       	mov    $0x0,%edx
 82795f1:	89 45 98             	mov    %eax,-0x68(%ebp)
 82795f4:	89 55 9c             	mov    %edx,-0x64(%ebp)
 82795f7:	df 6d 98             	fildll -0x68(%ebp)
 82795fa:	d9 5d 90             	fstps  -0x70(%ebp)
 82795fd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8279600:	89 04 24             	mov    %eax,(%esp)
 8279603:	e8 d2 07 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 8279608:	8b 40 04             	mov    0x4(%eax),%eax
 827960b:	ba 00 00 00 00       	mov    $0x0,%edx
 8279610:	89 45 98             	mov    %eax,-0x68(%ebp)
 8279613:	89 55 9c             	mov    %edx,-0x64(%ebp)
 8279616:	df 6d 98             	fildll -0x68(%ebp)
 8279619:	d8 7d 90             	fdivrs -0x70(%ebp)
 827961c:	d9 5d d8             	fstps  -0x28(%ebp)
 827961f:	b8 00 00 00 00       	mov    $0x0,%eax
 8279624:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8279627:	d9 45 d4             	flds   -0x2c(%ebp)
 827962a:	d9 7d a6             	fnstcw -0x5a(%ebp)
 827962d:	0f b7 45 a6          	movzwl -0x5a(%ebp),%eax
 8279631:	b4 0c                	mov    $0xc,%ah
 8279633:	66 89 45 a4          	mov    %ax,-0x5c(%ebp)
 8279637:	d9 6d a4             	fldcw  -0x5c(%ebp)
 827963a:	db 5d 94             	fistpl -0x6c(%ebp)
 827963d:	d9 6d a6             	fldcw  -0x5a(%ebp)
 8279640:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8279643:	83 f8 09             	cmp    $0x9,%eax
 8279646:	7f 0a                	jg     8279652 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x17c>
 8279648:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 827964d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8279650:	eb 0e                	jmp    8279660 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x18a>
 8279652:	d9 45 d4             	flds   -0x2c(%ebp)
 8279655:	d9 05 70 27 c0 08    	flds   0x8c02770
 827965b:	de c9                	fmulp  %st,%st(1)
 827965d:	d9 5d dc             	fstps  -0x24(%ebp)
 8279660:	d9 45 d4             	flds   -0x2c(%ebp)
 8279663:	d8 45 dc             	fadds  -0x24(%ebp)
 8279666:	d9 05 74 27 c0 08    	flds   0x8c02774
 827966c:	de c1                	faddp  %st,%st(1)
 827966e:	d9 6d a4             	fldcw  -0x5c(%ebp)
 8279671:	df 7d 98             	fistpll -0x68(%ebp)
 8279674:	d9 6d a6             	fldcw  -0x5a(%ebp)
 8279677:	8b 45 98             	mov    -0x68(%ebp),%eax
 827967a:	8b 55 9c             	mov    -0x64(%ebp),%edx
 827967d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8279680:	d9 45 d4             	flds   -0x2c(%ebp)
 8279683:	d8 65 dc             	fsubs  -0x24(%ebp)
 8279686:	d9 6d a4             	fldcw  -0x5c(%ebp)
 8279689:	df 7d 98             	fistpll -0x68(%ebp)
 827968c:	d9 6d a6             	fldcw  -0x5a(%ebp)
 827968f:	8b 45 98             	mov    -0x68(%ebp),%eax
 8279692:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8279695:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8279698:	d9 45 d8             	flds   -0x28(%ebp)
 827969b:	d9 05 78 27 c0 08    	flds   0x8c02778
 82796a1:	de c9                	fmulp  %st,%st(1)
 82796a3:	d9 5d dc             	fstps  -0x24(%ebp)
 82796a6:	d9 45 d8             	flds   -0x28(%ebp)
 82796a9:	d8 45 dc             	fadds  -0x24(%ebp)
 82796ac:	d9 05 74 27 c0 08    	flds   0x8c02774
 82796b2:	de c1                	faddp  %st,%st(1)
 82796b4:	d9 6d a4             	fldcw  -0x5c(%ebp)
 82796b7:	df 7d 98             	fistpll -0x68(%ebp)
 82796ba:	d9 6d a6             	fldcw  -0x5a(%ebp)
 82796bd:	8b 45 98             	mov    -0x68(%ebp),%eax
 82796c0:	8b 55 9c             	mov    -0x64(%ebp),%edx
 82796c3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82796c6:	d9 45 d8             	flds   -0x28(%ebp)
 82796c9:	d8 65 dc             	fsubs  -0x24(%ebp)
 82796cc:	d9 6d a4             	fldcw  -0x5c(%ebp)
 82796cf:	df 7d 98             	fistpll -0x68(%ebp)
 82796d2:	d9 6d a6             	fldcw  -0x5a(%ebp)
 82796d5:	8b 45 98             	mov    -0x68(%ebp),%eax
 82796d8:	8b 55 9c             	mov    -0x64(%ebp),%edx
 82796db:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82796de:	8b 45 08             	mov    0x8(%ebp),%eax
 82796e1:	8b 00                	mov    (%eax),%eax
 82796e3:	8b 80 74 18 00 00    	mov    0x1874(%eax),%eax
 82796e9:	85 c0                	test   %eax,%eax
 82796eb:	0f 8e ca 00 00 00    	jle    82797bb <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x2e5>
 82796f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82796f4:	8b 80 1e 0a 00 00    	mov    0xa1e(%eax),%eax
 82796fa:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 82796fd:	0f 82 b8 00 00 00    	jb     82797bb <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x2e5>
 8279703:	8b 45 0c             	mov    0xc(%ebp),%eax
 8279706:	8b 80 1e 0a 00 00    	mov    0xa1e(%eax),%eax
 827970c:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 827970f:	0f 87 a6 00 00 00    	ja     82797bb <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x2e5>
 8279715:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8279718:	89 04 24             	mov    %eax,(%esp)
 827971b:	e8 ba 06 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 8279720:	8b 50 10             	mov    0x10(%eax),%edx
 8279723:	83 c2 01             	add    $0x1,%edx
 8279726:	89 50 10             	mov    %edx,0x10(%eax)
 8279729:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8279730:	eb 7a                	jmp    82797ac <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x2d6>
 8279732:	8b 45 08             	mov    0x8(%ebp),%eax
 8279735:	8b 00                	mov    (%eax),%eax
 8279737:	8b 55 f0             	mov    -0x10(%ebp),%edx
 827973a:	89 54 24 04          	mov    %edx,0x4(%esp)
 827973e:	89 04 24             	mov    %eax,(%esp)
 8279741:	e8 22 c1 ec ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8279746:	84 c0                	test   %al,%al
 8279748:	74 5e                	je     82797a8 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x2d2>
 827974a:	8b 45 08             	mov    0x8(%ebp),%eax
 827974d:	8b 00                	mov    (%eax),%eax
 827974f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8279752:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279756:	89 04 24             	mov    %eax,(%esp)
 8279759:	e8 06 c0 ec ff       	call   8145764 <_ZN6CParty8get_userEi>
 827975e:	89 c3                	mov    %eax,%ebx
 8279760:	8b 45 08             	mov    0x8(%ebp),%eax
 8279763:	8b 00                	mov    (%eax),%eax
 8279765:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8279768:	89 54 24 04          	mov    %edx,0x4(%esp)
 827976c:	89 04 24             	mov    %eax,(%esp)
 827976f:	e8 f0 bf ec ff       	call   8145764 <_ZN6CParty8get_userEi>
 8279774:	89 04 24             	mov    %eax,(%esp)
 8279777:	e8 de 01 e8 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827977c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8279783:	00 
 8279784:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827978b:	00 
 827978c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8279793:	00 
 8279794:	c7 44 24 08 e6 00 00 	movl   $0xe6,0x8(%esp)
 827979b:	00 
 827979c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82797a0:	89 04 24             	mov    %eax,(%esp)
 82797a3:	e8 d6 f4 e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 82797a8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82797ac:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 82797b0:	0f 9e c0             	setle  %al
 82797b3:	84 c0                	test   %al,%al
 82797b5:	0f 85 77 ff ff ff    	jne    8279732 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x25c>
 82797bb:	8b 45 08             	mov    0x8(%ebp),%eax
 82797be:	8b 00                	mov    (%eax),%eax
 82797c0:	8b 80 74 18 00 00    	mov    0x1874(%eax),%eax
 82797c6:	85 c0                	test   %eax,%eax
 82797c8:	0f 8e ca 00 00 00    	jle    8279898 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x3c2>
 82797ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 82797d1:	8b 80 1a 0a 00 00    	mov    0xa1a(%eax),%eax
 82797d7:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 82797da:	0f 82 b8 00 00 00    	jb     8279898 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x3c2>
 82797e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82797e3:	8b 80 1a 0a 00 00    	mov    0xa1a(%eax),%eax
 82797e9:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 82797ec:	0f 87 a6 00 00 00    	ja     8279898 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x3c2>
 82797f2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82797f5:	89 04 24             	mov    %eax,(%esp)
 82797f8:	e8 dd 05 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 82797fd:	8b 50 14             	mov    0x14(%eax),%edx
 8279800:	83 c2 01             	add    $0x1,%edx
 8279803:	89 50 14             	mov    %edx,0x14(%eax)
 8279806:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 827980d:	eb 7a                	jmp    8279889 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x3b3>
 827980f:	8b 45 08             	mov    0x8(%ebp),%eax
 8279812:	8b 00                	mov    (%eax),%eax
 8279814:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8279817:	89 54 24 04          	mov    %edx,0x4(%esp)
 827981b:	89 04 24             	mov    %eax,(%esp)
 827981e:	e8 45 c0 ec ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8279823:	84 c0                	test   %al,%al
 8279825:	74 5e                	je     8279885 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x3af>
 8279827:	8b 45 08             	mov    0x8(%ebp),%eax
 827982a:	8b 00                	mov    (%eax),%eax
 827982c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 827982f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279833:	89 04 24             	mov    %eax,(%esp)
 8279836:	e8 29 bf ec ff       	call   8145764 <_ZN6CParty8get_userEi>
 827983b:	89 c3                	mov    %eax,%ebx
 827983d:	8b 45 08             	mov    0x8(%ebp),%eax
 8279840:	8b 00                	mov    (%eax),%eax
 8279842:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8279845:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279849:	89 04 24             	mov    %eax,(%esp)
 827984c:	e8 13 bf ec ff       	call   8145764 <_ZN6CParty8get_userEi>
 8279851:	89 04 24             	mov    %eax,(%esp)
 8279854:	e8 01 01 e8 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8279859:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8279860:	00 
 8279861:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8279868:	00 
 8279869:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8279870:	00 
 8279871:	c7 44 24 08 e7 00 00 	movl   $0xe7,0x8(%esp)
 8279878:	00 
 8279879:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827987d:	89 04 24             	mov    %eax,(%esp)
 8279880:	e8 f9 f3 e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8279885:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8279889:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 827988d:	0f 9e c0             	setle  %al
 8279890:	84 c0                	test   %al,%al
 8279892:	0f 85 77 ff ff ff    	jne    827980f <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x339>
 8279898:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 827989b:	89 04 24             	mov    %eax,(%esp)
 827989e:	e8 37 05 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 82798a3:	8b 50 04             	mov    0x4(%eax),%edx
 82798a6:	83 c2 01             	add    $0x1,%edx
 82798a9:	89 50 04             	mov    %edx,0x4(%eax)
 82798ac:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82798af:	89 04 24             	mov    %eax,(%esp)
 82798b2:	e8 23 05 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 82798b7:	8b 48 08             	mov    0x8(%eax),%ecx
 82798ba:	8b 55 0c             	mov    0xc(%ebp),%edx
 82798bd:	8b 92 1e 0a 00 00    	mov    0xa1e(%edx),%edx
 82798c3:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 82798c6:	89 50 08             	mov    %edx,0x8(%eax)
 82798c9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82798cc:	89 04 24             	mov    %eax,(%esp)
 82798cf:	e8 06 05 00 00       	call   8279dda <_ZNK9__gnu_cxx17__normal_iteratorIP18SecKillMonsterInfoSt6vectorIS1_SaIS1_EEEptEv>
 82798d4:	8b 48 0c             	mov    0xc(%eax),%ecx
 82798d7:	8b 55 0c             	mov    0xc(%ebp),%edx
 82798da:	8b 92 1a 0a 00 00    	mov    0xa1a(%edx),%edx
 82798e0:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 82798e3:	89 50 0c             	mov    %edx,0xc(%eax)
 82798e6:	eb 4f                	jmp    8279937 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x461>
 82798e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82798eb:	8b 88 1a 0a 00 00    	mov    0xa1a(%eax),%ecx
 82798f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82798f4:	8b 90 1e 0a 00 00    	mov    0xa1e(%eax),%edx
 82798fa:	8b 45 10             	mov    0x10(%ebp),%eax
 82798fd:	8b 40 0c             	mov    0xc(%eax),%eax
 8279900:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8279904:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8279908:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 827990f:	00 
 8279910:	89 44 24 04          	mov    %eax,0x4(%esp)
 8279914:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8279917:	89 04 24             	mov    %eax,(%esp)
 827991a:	e8 11 04 00 00       	call   8279d30 <_ZN18SecKillMonsterInfoC1Ejjjj>
 827991f:	8b 45 08             	mov    0x8(%ebp),%eax
 8279922:	8d 50 04             	lea    0x4(%eax),%edx
 8279925:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8279928:	89 44 24 04          	mov    %eax,0x4(%esp)
 827992c:	89 14 24             	mov    %edx,(%esp)
 827992f:	e8 b0 04 00 00       	call   8279de4 <_ZNSt6vectorI18SecKillMonsterInfoSaIS0_EE9push_backEOS0_>
 8279934:	eb 01                	jmp    8279937 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster+0x461>
 8279936:	90                   	nop
 8279937:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 827993a:	c9                   	leave
 827993b:	c3                   	ret

```

```c
// Secu_DungeonAverageCheck::setKillMonsterInfo @ 0x82794d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Secu_DungeonAverageCheck::setKillMonsterInfo(MSG_MONSTER_DIE const*, map_monster*) */

void __thiscall
Secu_DungeonAverageCheck::setKillMonsterInfo
          (Secu_DungeonAverageCheck *this,MSG_MONSTER_DIE *param_1,map_monster *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  CUser *pCVar8;
  CHackAnalyzer *pCVar9;
  ulonglong local_6c;
  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
  local_50 [4];
  __normal_iterator local_4c [4];
  SecKillMonsterInfo local_48 [24];
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    cVar4 = map_monster::isNamedMonster(param_2);
    if ((cVar4 == '\x01') || (param_2[8] != (map_monster)0x0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      findKillMonsterInfo((uint)local_50);
      std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::end();
      bVar5 = __gnu_cxx::operator!=(local_50,local_4c);
      if (bVar5) {
        iVar6 = __gnu_cxx::
                __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                ::operator->(local_50);
        if (4 < *(uint *)(iVar6 + 4)) {
          local_30 = 0.0;
          local_2c = 0.0;
          iVar6 = __gnu_cxx::
                  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                  ::operator->(local_50);
          local_6c = (ulonglong)*(uint *)(iVar6 + 8);
          fVar1 = (float)local_6c;
          iVar6 = __gnu_cxx::
                  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                  ::operator->(local_50);
          local_6c = (ulonglong)*(uint *)(iVar6 + 4);
          local_30 = fVar1 / (float)local_6c;
          iVar6 = __gnu_cxx::
                  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                  ::operator->(local_50);
          local_6c = (ulonglong)*(uint *)(iVar6 + 0xc);
          fVar1 = (float)local_6c;
          iVar6 = __gnu_cxx::
                  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                  ::operator->(local_50);
          local_6c = (ulonglong)*(uint *)(iVar6 + 4);
          local_2c = fVar1 / (float)local_6c;
          if ((int)ROUND(local_30) < 10) {
            local_28 = 1.0;
          }
          else {
            local_28 = _DAT_08c02770 * local_30;
          }
          local_6c._0_4_ = (uint)(longlong)ROUND(_DAT_08c02774 + local_30 + local_28);
          uVar2 = (uint)local_6c;
          local_24 = (uint)local_6c;
          local_6c._0_4_ = (uint)(longlong)ROUND(local_30 - local_28);
          uVar3 = (uint)local_6c;
          local_20 = (uint)local_6c;
          local_28 = _DAT_08c02778 * local_2c;
          local_6c._0_4_ = (uint)(longlong)ROUND(_DAT_08c02774 + local_2c + local_28);
          local_1c = (uint)local_6c;
          local_6c._0_4_ = (uint)(longlong)ROUND(local_2c - local_28);
          local_18 = (uint)local_6c;
          if (((0 < *(int *)(*(int *)this + 0x1874)) && (uVar3 <= *(uint *)(param_1 + 0xa1e))) &&
             (*(uint *)(param_1 + 0xa1e) <= uVar2)) {
            iVar6 = __gnu_cxx::
                    __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                    ::operator->(local_50);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
              cVar4 = CParty::checkValidUser(*(CParty **)this,local_14);
              if (cVar4 != '\0') {
                uVar7 = CParty::get_user(*(CParty **)this,local_14);
                pCVar8 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
                pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(pCVar8);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,uVar7,0xe6,1,0,0);
              }
            }
          }
          if (((0 < *(int *)(*(int *)this + 0x1874)) && (local_18 <= *(uint *)(param_1 + 0xa1a))) &&
             (*(uint *)(param_1 + 0xa1a) <= local_1c)) {
            iVar6 = __gnu_cxx::
                    __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                    ::operator->(local_50);
            *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
            for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
              cVar4 = CParty::checkValidUser(*(CParty **)this,local_10);
              if (cVar4 != '\0') {
                uVar7 = CParty::get_user(*(CParty **)this,local_10);
                pCVar8 = (CUser *)CParty::get_user(*(CParty **)this,local_10);
                pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(pCVar8);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,uVar7,0xe7,1,0,0);
              }
            }
          }
        }
        iVar6 = __gnu_cxx::
                __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                ::operator->(local_50);
        *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
        iVar6 = __gnu_cxx::
                __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                ::operator->(local_50);
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + *(int *)(param_1 + 0xa1e);
        iVar6 = __gnu_cxx::
                __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                ::operator->(local_50);
        *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + *(int *)(param_1 + 0xa1a);
      }
      else {
        SecKillMonsterInfo::SecKillMonsterInfo
                  (local_48,*(uint *)(param_2 + 0xc),1,*(uint *)(param_1 + 0xa1e),
                   *(uint *)(param_1 + 0xa1a));
        std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::push_back
                  ((vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>> *)(this + 4),
                   local_48);
      }
    }
  }
  return;
}

```

---

## startDungeon

```asm
// === 082794c2 Secu_DungeonAverageCheck::startDungeon  [0x082794c2-0x82794d5] ===
 82794c2:	55                   	push   %ebp
 82794c3:	89 e5                	mov    %esp,%ebp
 82794c5:	83 ec 18             	sub    $0x18,%esp
 82794c8:	8b 45 08             	mov    0x8(%ebp),%eax
 82794cb:	89 04 24             	mov    %eax,(%esp)
 82794ce:	e8 bd ff ff ff       	call   8279490 <_ZN24Secu_DungeonAverageCheck5resetEv>
 82794d3:	c9                   	leave
 82794d4:	c3                   	ret
 82794d5:	90                   	nop

```

```c
// Secu_DungeonAverageCheck::startDungeon @ 0x82794c2

/* Secu_DungeonAverageCheck::startDungeon() */

void __thiscall Secu_DungeonAverageCheck::startDungeon(Secu_DungeonAverageCheck *this)

{
  reset(this);
  return;
}

```

