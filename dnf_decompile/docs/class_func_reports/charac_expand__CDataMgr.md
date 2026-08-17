# charac_expand__CDataMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CDataMgr

```asm
// === 0832a778 charac_expand::CDataMgr::CDataMgr  [0x0832a778-0x832ac47] ===
 832a778:	55                   	push   %ebp
 832a779:	89 e5                	mov    %esp,%ebp
 832a77b:	57                   	push   %edi
 832a77c:	56                   	push   %esi
 832a77d:	53                   	push   %ebx
 832a77e:	83 ec 2c             	sub    $0x2c,%esp
 832a781:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 832a788:	e8 c3 9c 3f 00       	call   8724450 <_Znwj>
 832a78d:	89 c6                	mov    %eax,%esi
 832a78f:	89 f3                	mov    %esi,%ebx
 832a791:	89 da                	mov    %ebx,%edx
 832a793:	b8 00 00 00 00       	mov    $0x0,%eax
 832a798:	b9 0b 00 00 00       	mov    $0xb,%ecx
 832a79d:	89 d7                	mov    %edx,%edi
 832a79f:	f3 ab                	rep stos %eax,%es:(%edi)
 832a7a1:	89 fa                	mov    %edi,%edx
 832a7a3:	66 89 02             	mov    %ax,(%edx)
 832a7a6:	83 c2 02             	add    $0x2,%edx
 832a7a9:	89 1c 24             	mov    %ebx,(%esp)
 832a7ac:	e8 a1 07 00 00       	call   832af52 <_ZN10expert_job16CCharacExpertJobC1Ev>
 832a7b1:	89 f0                	mov    %esi,%eax
 832a7b3:	89 c2                	mov    %eax,%edx
 832a7b5:	8b 45 08             	mov    0x8(%ebp),%eax
 832a7b8:	89 10                	mov    %edx,(%eax)
 832a7ba:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 832a7c1:	e8 8a 9c 3f 00       	call   8724450 <_Znwj>
 832a7c6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 832a7c9:	8b 75 e0             	mov    -0x20(%ebp),%esi
 832a7cc:	89 f3                	mov    %esi,%ebx
 832a7ce:	b8 00 00 00 00       	mov    $0x0,%eax
 832a7d3:	ba 0b 00 00 00       	mov    $0xb,%edx
 832a7d8:	89 df                	mov    %ebx,%edi
 832a7da:	89 d1                	mov    %edx,%ecx
 832a7dc:	f3 ab                	rep stos %eax,%es:(%edi)
 832a7de:	89 34 24             	mov    %esi,(%esp)
 832a7e1:	e8 88 07 00 00       	call   832af6e <_ZN19CCharacBloodDungeonC1Ev>
 832a7e6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 832a7e9:	89 c2                	mov    %eax,%edx
 832a7eb:	8b 45 08             	mov    0x8(%ebp),%eax
 832a7ee:	89 50 04             	mov    %edx,0x4(%eax)
 832a7f1:	c7 04 24 58 00 00 00 	movl   $0x58,(%esp)
 832a7f8:	e8 53 9c 3f 00       	call   8724450 <_Znwj>
 832a7fd:	89 c3                	mov    %eax,%ebx
 832a7ff:	89 d8                	mov    %ebx,%eax
 832a801:	89 04 24             	mov    %eax,(%esp)
 832a804:	e8 61 6d 21 00       	call   854156a <_ZN9item_lock9CItemLockC1Ev>
 832a809:	eb 18                	jmp    832a823 <_ZN13charac_expand8CDataMgrC1Ev+0xab>
 832a80b:	89 d6                	mov    %edx,%esi
 832a80d:	89 c7                	mov    %eax,%edi
 832a80f:	89 1c 24             	mov    %ebx,(%esp)
 832a812:	e8 d9 9c 3f 00       	call   87244f0 <_ZdlPv>
 832a817:	89 f8                	mov    %edi,%eax
 832a819:	89 f2                	mov    %esi,%edx
 832a81b:	89 04 24             	mov    %eax,(%esp)
 832a81e:	e8 2d 8f 7b 00       	call   8ae3750 <_Unwind_Resume>
 832a823:	89 d8                	mov    %ebx,%eax
 832a825:	89 c2                	mov    %eax,%edx
 832a827:	8b 45 08             	mov    0x8(%ebp),%eax
 832a82a:	89 50 08             	mov    %edx,0x8(%eax)
 832a82d:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 832a834:	e8 17 9c 3f 00       	call   8724450 <_Znwj>
 832a839:	89 c3                	mov    %eax,%ebx
 832a83b:	89 d8                	mov    %ebx,%eax
 832a83d:	89 04 24             	mov    %eax,(%esp)
 832a840:	e8 0f e8 f3 ff       	call   8269054 <_ZN17CPvPLiveEventDataC1Ev>
 832a845:	eb 18                	jmp    832a85f <_ZN13charac_expand8CDataMgrC1Ev+0xe7>
 832a847:	89 d6                	mov    %edx,%esi
 832a849:	89 c7                	mov    %eax,%edi
 832a84b:	89 1c 24             	mov    %ebx,(%esp)
 832a84e:	e8 9d 9c 3f 00       	call   87244f0 <_ZdlPv>
 832a853:	89 f8                	mov    %edi,%eax
 832a855:	89 f2                	mov    %esi,%edx
 832a857:	89 04 24             	mov    %eax,(%esp)
 832a85a:	e8 f1 8e 7b 00       	call   8ae3750 <_Unwind_Resume>
 832a85f:	89 d8                	mov    %ebx,%eax
 832a861:	89 c2                	mov    %eax,%edx
 832a863:	8b 45 08             	mov    0x8(%ebp),%eax
 832a866:	89 50 0c             	mov    %edx,0xc(%eax)
 832a869:	c7 04 24 14 00 00 00 	movl   $0x14,(%esp)
 832a870:	e8 db 9b 3f 00       	call   8724450 <_Znwj>
 832a875:	89 c3                	mov    %eax,%ebx
 832a877:	89 d8                	mov    %ebx,%eax
 832a879:	89 04 24             	mov    %eax,(%esp)
 832a87c:	e8 b3 b6 25 00       	call   8585f34 <_ZN18online_preliminary24COnlinePreliminaryMemberC1Ev>
 832a881:	eb 18                	jmp    832a89b <_ZN13charac_expand8CDataMgrC1Ev+0x123>
 832a883:	89 d6                	mov    %edx,%esi
 832a885:	89 c7                	mov    %eax,%edi
 832a887:	89 1c 24             	mov    %ebx,(%esp)
 832a88a:	e8 61 9c 3f 00       	call   87244f0 <_ZdlPv>
 832a88f:	89 f8                	mov    %edi,%eax
 832a891:	89 f2                	mov    %esi,%edx
 832a893:	89 04 24             	mov    %eax,(%esp)
 832a896:	e8 b5 8e 7b 00       	call   8ae3750 <_Unwind_Resume>
 832a89b:	89 d8                	mov    %ebx,%eax
 832a89d:	89 c2                	mov    %eax,%edx
 832a89f:	8b 45 08             	mov    0x8(%ebp),%eax
 832a8a2:	89 50 10             	mov    %edx,0x10(%eax)
 832a8a5:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 832a8ac:	e8 9f 9b 3f 00       	call   8724450 <_Znwj>
 832a8b1:	89 c3                	mov    %eax,%ebx
 832a8b3:	89 d8                	mov    %ebx,%eax
 832a8b5:	89 04 24             	mov    %eax,(%esp)
 832a8b8:	e8 db ba 25 00       	call   8586398 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchListC1Ev>
 832a8bd:	eb 18                	jmp    832a8d7 <_ZN13charac_expand8CDataMgrC1Ev+0x15f>
 832a8bf:	89 d6                	mov    %edx,%esi
 832a8c1:	89 c7                	mov    %eax,%edi
 832a8c3:	89 1c 24             	mov    %ebx,(%esp)
 832a8c6:	e8 25 9c 3f 00       	call   87244f0 <_ZdlPv>
 832a8cb:	89 f8                	mov    %edi,%eax
 832a8cd:	89 f2                	mov    %esi,%edx
 832a8cf:	89 04 24             	mov    %eax,(%esp)
 832a8d2:	e8 79 8e 7b 00       	call   8ae3750 <_Unwind_Resume>
 832a8d7:	89 d8                	mov    %ebx,%eax
 832a8d9:	89 c2                	mov    %eax,%edx
 832a8db:	8b 45 08             	mov    0x8(%ebp),%eax
 832a8de:	89 50 14             	mov    %edx,0x14(%eax)
 832a8e1:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 832a8e8:	e8 63 9b 3f 00       	call   8724450 <_Znwj>
 832a8ed:	89 c3                	mov    %eax,%ebx
 832a8ef:	89 d8                	mov    %ebx,%eax
 832a8f1:	89 04 24             	mov    %eax,(%esp)
 832a8f4:	e8 47 c7 2c 00       	call   85f7040 <_ZN11Redeem_Item11CRedeemItemC1Ev>
 832a8f9:	eb 18                	jmp    832a913 <_ZN13charac_expand8CDataMgrC1Ev+0x19b>
 832a8fb:	89 d6                	mov    %edx,%esi
 832a8fd:	89 c7                	mov    %eax,%edi
 832a8ff:	89 1c 24             	mov    %ebx,(%esp)
 832a902:	e8 e9 9b 3f 00       	call   87244f0 <_ZdlPv>
 832a907:	89 f8                	mov    %edi,%eax
 832a909:	89 f2                	mov    %esi,%edx
 832a90b:	89 04 24             	mov    %eax,(%esp)
 832a90e:	e8 3d 8e 7b 00       	call   8ae3750 <_Unwind_Resume>
 832a913:	89 d8                	mov    %ebx,%eax
 832a915:	89 c2                	mov    %eax,%edx
 832a917:	8b 45 08             	mov    0x8(%ebp),%eax
 832a91a:	89 50 18             	mov    %edx,0x18(%eax)
 832a91d:	c7 04 24 5c 00 00 00 	movl   $0x5c,(%esp)
 832a924:	e8 27 9b 3f 00       	call   8724450 <_Znwj>
 832a929:	89 c3                	mov    %eax,%ebx
 832a92b:	89 d8                	mov    %ebx,%eax
 832a92d:	89 04 24             	mov    %eax,(%esp)
 832a930:	e8 a7 9e 17 00       	call   84a47dc <_ZN8fair_pvp13CFairPvPScoreC1Ev>
 832a935:	eb 18                	jmp    832a94f <_ZN13charac_expand8CDataMgrC1Ev+0x1d7>
 832a937:	89 d6                	mov    %edx,%esi
 832a939:	89 c7                	mov    %eax,%edi
 832a93b:	89 1c 24             	mov    %ebx,(%esp)
 832a93e:	e8 ad 9b 3f 00       	call   87244f0 <_ZdlPv>
 832a943:	89 f8                	mov    %edi,%eax
 832a945:	89 f2                	mov    %esi,%edx
 832a947:	89 04 24             	mov    %eax,(%esp)
 832a94a:	e8 01 8e 7b 00       	call   8ae3750 <_Unwind_Resume>
 832a94f:	89 d8                	mov    %ebx,%eax
 832a951:	89 c2                	mov    %eax,%edx
 832a953:	8b 45 08             	mov    0x8(%ebp),%eax
 832a956:	89 50 1c             	mov    %edx,0x1c(%eax)
 832a959:	c7 04 24 58 01 00 00 	movl   $0x158,(%esp)
 832a960:	e8 eb 9a 3f 00       	call   8724450 <_Znwj>
 832a965:	89 c3                	mov    %eax,%ebx
 832a967:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 832a96a:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 832a96d:	b8 00 00 00 00       	mov    $0x0,%eax
 832a972:	ba 56 00 00 00       	mov    $0x56,%edx
 832a977:	89 f7                	mov    %esi,%edi
 832a979:	89 d1                	mov    %edx,%ecx
 832a97b:	f3 ab                	rep stos %eax,%es:(%edi)
 832a97d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 832a980:	89 04 24             	mov    %eax,(%esp)
 832a983:	e8 02 06 00 00       	call   832af8a <_ZN19CMissionList_CharacC1Ev>
 832a988:	eb 18                	jmp    832a9a2 <_ZN13charac_expand8CDataMgrC1Ev+0x22a>
 832a98a:	89 d6                	mov    %edx,%esi
 832a98c:	89 c7                	mov    %eax,%edi
 832a98e:	89 1c 24             	mov    %ebx,(%esp)
 832a991:	e8 5a 9b 3f 00       	call   87244f0 <_ZdlPv>
 832a996:	89 f8                	mov    %edi,%eax
 832a998:	89 f2                	mov    %esi,%edx
 832a99a:	89 04 24             	mov    %eax,(%esp)
 832a99d:	e8 ae 8d 7b 00       	call   8ae3750 <_Unwind_Resume>
 832a9a2:	89 d8                	mov    %ebx,%eax
 832a9a4:	89 c2                	mov    %eax,%edx
 832a9a6:	8b 45 08             	mov    0x8(%ebp),%eax
 832a9a9:	89 50 20             	mov    %edx,0x20(%eax)
 832a9ac:	c7 04 24 9c 08 00 00 	movl   $0x89c,(%esp)
 832a9b3:	e8 98 9a 3f 00       	call   8724450 <_Znwj>
 832a9b8:	89 c3                	mov    %eax,%ebx
 832a9ba:	89 d8                	mov    %ebx,%eax
 832a9bc:	89 04 24             	mov    %eax,(%esp)
 832a9bf:	e8 fc e8 16 00       	call   84992c0 <_ZN16CExpandEquipslotC1Ev>
 832a9c4:	eb 18                	jmp    832a9de <_ZN13charac_expand8CDataMgrC1Ev+0x266>
 832a9c6:	89 d6                	mov    %edx,%esi
 832a9c8:	89 c7                	mov    %eax,%edi
 832a9ca:	89 1c 24             	mov    %ebx,(%esp)
 832a9cd:	e8 1e 9b 3f 00       	call   87244f0 <_ZdlPv>
 832a9d2:	89 f8                	mov    %edi,%eax
 832a9d4:	89 f2                	mov    %esi,%edx
 832a9d6:	89 04 24             	mov    %eax,(%esp)
 832a9d9:	e8 72 8d 7b 00       	call   8ae3750 <_Unwind_Resume>
 832a9de:	89 d8                	mov    %ebx,%eax
 832a9e0:	89 c2                	mov    %eax,%edx
 832a9e2:	8b 45 08             	mov    0x8(%ebp),%eax
 832a9e5:	89 50 24             	mov    %edx,0x24(%eax)
 832a9e8:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 832a9ef:	e8 5c 9a 3f 00       	call   8724450 <_Znwj>
 832a9f4:	89 c3                	mov    %eax,%ebx
 832a9f6:	89 d8                	mov    %ebx,%eax
 832a9f8:	89 04 24             	mov    %eax,(%esp)
 832a9fb:	e8 08 a7 21 00       	call   8545108 <_ZN16CItemMakingSkillC1Ev>
 832aa00:	eb 18                	jmp    832aa1a <_ZN13charac_expand8CDataMgrC1Ev+0x2a2>
 832aa02:	89 d6                	mov    %edx,%esi
 832aa04:	89 c7                	mov    %eax,%edi
 832aa06:	89 1c 24             	mov    %ebx,(%esp)
 832aa09:	e8 e2 9a 3f 00       	call   87244f0 <_ZdlPv>
 832aa0e:	89 f8                	mov    %edi,%eax
 832aa10:	89 f2                	mov    %esi,%edx
 832aa12:	89 04 24             	mov    %eax,(%esp)
 832aa15:	e8 36 8d 7b 00       	call   8ae3750 <_Unwind_Resume>
 832aa1a:	89 d8                	mov    %ebx,%eax
 832aa1c:	89 c2                	mov    %eax,%edx
 832aa1e:	8b 45 08             	mov    0x8(%ebp),%eax
 832aa21:	89 50 28             	mov    %edx,0x28(%eax)
 832aa24:	c7 04 24 48 00 00 00 	movl   $0x48,(%esp)
 832aa2b:	e8 20 9a 3f 00       	call   8724450 <_Znwj>
 832aa30:	89 c3                	mov    %eax,%ebx
 832aa32:	89 d8                	mov    %ebx,%eax
 832aa34:	89 04 24             	mov    %eax,(%esp)
 832aa37:	e8 8c 41 2c 00       	call   85eebc8 <_ZN10CQuestShopC1Ev>
 832aa3c:	eb 18                	jmp    832aa56 <_ZN13charac_expand8CDataMgrC1Ev+0x2de>
 832aa3e:	89 d6                	mov    %edx,%esi
 832aa40:	89 c7                	mov    %eax,%edi
 832aa42:	89 1c 24             	mov    %ebx,(%esp)
 832aa45:	e8 a6 9a 3f 00       	call   87244f0 <_ZdlPv>
 832aa4a:	89 f8                	mov    %edi,%eax
 832aa4c:	89 f2                	mov    %esi,%edx
 832aa4e:	89 04 24             	mov    %eax,(%esp)
 832aa51:	e8 fa 8c 7b 00       	call   8ae3750 <_Unwind_Resume>
 832aa56:	89 d8                	mov    %ebx,%eax
 832aa58:	89 c2                	mov    %eax,%edx
 832aa5a:	8b 45 08             	mov    0x8(%ebp),%eax
 832aa5d:	89 50 2c             	mov    %edx,0x2c(%eax)
 832aa60:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 832aa67:	e8 e4 99 3f 00       	call   8724450 <_Znwj>
 832aa6c:	89 c3                	mov    %eax,%ebx
 832aa6e:	89 d8                	mov    %ebx,%eax
 832aa70:	89 04 24             	mov    %eax,(%esp)
 832aa73:	e8 e8 89 31 00       	call   8643460 <_ZN13TOD_UserStateC1Ev>
 832aa78:	eb 18                	jmp    832aa92 <_ZN13charac_expand8CDataMgrC1Ev+0x31a>
 832aa7a:	89 d6                	mov    %edx,%esi
 832aa7c:	89 c7                	mov    %eax,%edi
 832aa7e:	89 1c 24             	mov    %ebx,(%esp)
 832aa81:	e8 6a 9a 3f 00       	call   87244f0 <_ZdlPv>
 832aa86:	89 f8                	mov    %edi,%eax
 832aa88:	89 f2                	mov    %esi,%edx
 832aa8a:	89 04 24             	mov    %eax,(%esp)
 832aa8d:	e8 be 8c 7b 00       	call   8ae3750 <_Unwind_Resume>
 832aa92:	89 d8                	mov    %ebx,%eax
 832aa94:	89 c2                	mov    %eax,%edx
 832aa96:	8b 45 08             	mov    0x8(%ebp),%eax
 832aa99:	89 50 34             	mov    %edx,0x34(%eax)
 832aa9c:	c7 04 24 50 00 00 00 	movl   $0x50,(%esp)
 832aaa3:	e8 a8 99 3f 00       	call   8724450 <_Znwj>
 832aaa8:	89 c3                	mov    %eax,%ebx
 832aaaa:	89 d8                	mov    %ebx,%eax
 832aaac:	89 04 24             	mov    %eax,(%esp)
 832aaaf:	e8 00 1f 22 00       	call   854c9b4 <_ZN16CKillMonsterInfoC1Ev>
 832aab4:	eb 18                	jmp    832aace <_ZN13charac_expand8CDataMgrC1Ev+0x356>
 832aab6:	89 d6                	mov    %edx,%esi
 832aab8:	89 c7                	mov    %eax,%edi
 832aaba:	89 1c 24             	mov    %ebx,(%esp)
 832aabd:	e8 2e 9a 3f 00       	call   87244f0 <_ZdlPv>
 832aac2:	89 f8                	mov    %edi,%eax
 832aac4:	89 f2                	mov    %esi,%edx
 832aac6:	89 04 24             	mov    %eax,(%esp)
 832aac9:	e8 82 8c 7b 00       	call   8ae3750 <_Unwind_Resume>
 832aace:	89 d8                	mov    %ebx,%eax
 832aad0:	89 c2                	mov    %eax,%edx
 832aad2:	8b 45 08             	mov    0x8(%ebp),%eax
 832aad5:	89 50 30             	mov    %edx,0x30(%eax)
 832aad8:	c7 04 24 58 6b 00 00 	movl   $0x6b58,(%esp)
 832aadf:	e8 6c 99 3f 00       	call   8724450 <_Znwj>
 832aae4:	89 c3                	mov    %eax,%ebx
 832aae6:	89 d8                	mov    %ebx,%eax
 832aae8:	89 04 24             	mov    %eax,(%esp)
 832aaeb:	e8 4c 65 31 00       	call   864103c <_ZN10CTitleBookC1Ev>
 832aaf0:	eb 18                	jmp    832ab0a <_ZN13charac_expand8CDataMgrC1Ev+0x392>
 832aaf2:	89 d6                	mov    %edx,%esi
 832aaf4:	89 c7                	mov    %eax,%edi
 832aaf6:	89 1c 24             	mov    %ebx,(%esp)
 832aaf9:	e8 f2 99 3f 00       	call   87244f0 <_ZdlPv>
 832aafe:	89 f8                	mov    %edi,%eax
 832ab00:	89 f2                	mov    %esi,%edx
 832ab02:	89 04 24             	mov    %eax,(%esp)
 832ab05:	e8 46 8c 7b 00       	call   8ae3750 <_Unwind_Resume>
 832ab0a:	89 d8                	mov    %ebx,%eax
 832ab0c:	89 c2                	mov    %eax,%edx
 832ab0e:	8b 45 08             	mov    0x8(%ebp),%eax
 832ab11:	89 50 38             	mov    %edx,0x38(%eax)
 832ab14:	c7 04 24 28 00 00 00 	movl   $0x28,(%esp)
 832ab1b:	e8 30 99 3f 00       	call   8724450 <_Znwj>
 832ab20:	89 c3                	mov    %eax,%ebx
 832ab22:	89 d8                	mov    %ebx,%eax
 832ab24:	89 04 24             	mov    %eax,(%esp)
 832ab27:	e8 e8 0a f6 ff       	call   828b614 <_ZN12CAchievementC1Ev>
 832ab2c:	eb 18                	jmp    832ab46 <_ZN13charac_expand8CDataMgrC1Ev+0x3ce>
 832ab2e:	89 d6                	mov    %edx,%esi
 832ab30:	89 c7                	mov    %eax,%edi
 832ab32:	89 1c 24             	mov    %ebx,(%esp)
 832ab35:	e8 b6 99 3f 00       	call   87244f0 <_ZdlPv>
 832ab3a:	89 f8                	mov    %edi,%eax
 832ab3c:	89 f2                	mov    %esi,%edx
 832ab3e:	89 04 24             	mov    %eax,(%esp)
 832ab41:	e8 0a 8c 7b 00       	call   8ae3750 <_Unwind_Resume>
 832ab46:	89 d8                	mov    %ebx,%eax
 832ab48:	89 c2                	mov    %eax,%edx
 832ab4a:	8b 45 08             	mov    0x8(%ebp),%eax
 832ab4d:	89 50 3c             	mov    %edx,0x3c(%eax)
 832ab50:	c7 04 24 90 13 00 00 	movl   $0x1390,(%esp)
 832ab57:	e8 f4 98 3f 00       	call   8724450 <_Znwj>
 832ab5c:	89 c3                	mov    %eax,%ebx
 832ab5e:	89 d8                	mov    %ebx,%eax
 832ab60:	89 04 24             	mov    %eax,(%esp)
 832ab63:	e8 6c 2a df ff       	call   811d5d4 <_ZN15CItemDictionaryC1Ev>
 832ab68:	eb 18                	jmp    832ab82 <_ZN13charac_expand8CDataMgrC1Ev+0x40a>
 832ab6a:	89 d6                	mov    %edx,%esi
 832ab6c:	89 c7                	mov    %eax,%edi
 832ab6e:	89 1c 24             	mov    %ebx,(%esp)
 832ab71:	e8 7a 99 3f 00       	call   87244f0 <_ZdlPv>
 832ab76:	89 f8                	mov    %edi,%eax
 832ab78:	89 f2                	mov    %esi,%edx
 832ab7a:	89 04 24             	mov    %eax,(%esp)
 832ab7d:	e8 ce 8b 7b 00       	call   8ae3750 <_Unwind_Resume>
 832ab82:	89 d8                	mov    %ebx,%eax
 832ab84:	89 c2                	mov    %eax,%edx
 832ab86:	8b 45 08             	mov    0x8(%ebp),%eax
 832ab89:	89 50 40             	mov    %edx,0x40(%eax)
 832ab8c:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 832ab93:	e8 b8 98 3f 00       	call   8724450 <_Znwj>
 832ab98:	89 c3                	mov    %eax,%ebx
 832ab9a:	89 d8                	mov    %ebx,%eax
 832ab9c:	89 04 24             	mov    %eax,(%esp)
 832ab9f:	e8 62 03 00 00       	call   832af06 <_ZN12CBoosterGageC1Ev>
 832aba4:	eb 18                	jmp    832abbe <_ZN13charac_expand8CDataMgrC1Ev+0x446>
 832aba6:	89 d6                	mov    %edx,%esi
 832aba8:	89 c7                	mov    %eax,%edi
 832abaa:	89 1c 24             	mov    %ebx,(%esp)
 832abad:	e8 3e 99 3f 00       	call   87244f0 <_ZdlPv>
 832abb2:	89 f8                	mov    %edi,%eax
 832abb4:	89 f2                	mov    %esi,%edx
 832abb6:	89 04 24             	mov    %eax,(%esp)
 832abb9:	e8 92 8b 7b 00       	call   8ae3750 <_Unwind_Resume>
 832abbe:	89 d8                	mov    %ebx,%eax
 832abc0:	89 c2                	mov    %eax,%edx
 832abc2:	8b 45 08             	mov    0x8(%ebp),%eax
 832abc5:	89 50 44             	mov    %edx,0x44(%eax)
 832abc8:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 832abcf:	e8 7c 98 3f 00       	call   8724450 <_Znwj>
 832abd4:	89 c3                	mov    %eax,%ebx
 832abd6:	89 d8                	mov    %ebx,%eax
 832abd8:	89 04 24             	mov    %eax,(%esp)
 832abdb:	e8 3c d9 d9 ff       	call   80c851c <_ZN13BestClearTimeC1Ev>
 832abe0:	eb 18                	jmp    832abfa <_ZN13charac_expand8CDataMgrC1Ev+0x482>
 832abe2:	89 d6                	mov    %edx,%esi
 832abe4:	89 c7                	mov    %eax,%edi
 832abe6:	89 1c 24             	mov    %ebx,(%esp)
 832abe9:	e8 02 99 3f 00       	call   87244f0 <_ZdlPv>
 832abee:	89 f8                	mov    %edi,%eax
 832abf0:	89 f2                	mov    %esi,%edx
 832abf2:	89 04 24             	mov    %eax,(%esp)
 832abf5:	e8 56 8b 7b 00       	call   8ae3750 <_Unwind_Resume>
 832abfa:	89 d8                	mov    %ebx,%eax
 832abfc:	89 c2                	mov    %eax,%edx
 832abfe:	8b 45 08             	mov    0x8(%ebp),%eax
 832ac01:	89 50 48             	mov    %edx,0x48(%eax)
 832ac04:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 832ac0b:	e8 40 98 3f 00       	call   8724450 <_Znwj>
 832ac10:	89 c3                	mov    %eax,%ebx
 832ac12:	89 d8                	mov    %ebx,%eax
 832ac14:	89 04 24             	mov    %eax,(%esp)
 832ac17:	e8 74 9b db ff       	call   80e4790 <_ZN19CCharacInformNoticeC1Ev>
 832ac1c:	eb 18                	jmp    832ac36 <_ZN13charac_expand8CDataMgrC1Ev+0x4be>
 832ac1e:	89 d6                	mov    %edx,%esi
 832ac20:	89 c7                	mov    %eax,%edi
 832ac22:	89 1c 24             	mov    %ebx,(%esp)
 832ac25:	e8 c6 98 3f 00       	call   87244f0 <_ZdlPv>
 832ac2a:	89 f8                	mov    %edi,%eax
 832ac2c:	89 f2                	mov    %esi,%edx
 832ac2e:	89 04 24             	mov    %eax,(%esp)
 832ac31:	e8 1a 8b 7b 00       	call   8ae3750 <_Unwind_Resume>
 832ac36:	89 d8                	mov    %ebx,%eax
 832ac38:	89 c2                	mov    %eax,%edx
 832ac3a:	8b 45 08             	mov    0x8(%ebp),%eax
 832ac3d:	89 50 4c             	mov    %edx,0x4c(%eax)
 832ac40:	83 c4 2c             	add    $0x2c,%esp
 832ac43:	5b                   	pop    %ebx
 832ac44:	5e                   	pop    %esi
 832ac45:	5f                   	pop    %edi
 832ac46:	5d                   	pop    %ebp
 832ac47:	c3                   	ret

```

```c
// charac_expand::CDataMgr::CDataMgr @ 0x832a778

/* charac_expand::CDataMgr::CDataMgr() */

void __thiscall charac_expand::CDataMgr::CDataMgr(CDataMgr *this)

{
  CCharacExpertJob *this_00;
  CCharacBloodDungeon *this_01;
  CItemLock *this_02;
  CPvPLiveEventData *this_03;
  COnlinePreliminaryMember *this_04;
  COnlinePreliminaryMemberMatchList *this_05;
  CRedeemItem *this_06;
  CFairPvPScore *this_07;
  CMissionList_Charac *this_08;
  CExpandEquipslot *this_09;
  CItemMakingSkill *this_10;
  CQuestShop *this_11;
  TOD_UserState *this_12;
  CKillMonsterInfo *this_13;
  CTitleBook *this_14;
  CAchievement *this_15;
  CItemDictionary *this_16;
  CBoosterGage *this_17;
  BestClearTime *this_18;
  CCharacInformNotice *this_19;
  int iVar1;
  CCharacExpertJob *pCVar2;
  CCharacBloodDungeon *pCVar3;
  CMissionList_Charac *pCVar4;
  byte bVar5;
  
  bVar5 = 0;
  this_00 = operator_new(0x30);
  pCVar2 = this_00;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + (uint)bVar5 * -8 + 4;
  }
  *(undefined2 *)pCVar2 = 0;
  expert_job::CCharacExpertJob::CCharacExpertJob(this_00);
  *(CCharacExpertJob **)this = this_00;
  this_01 = operator_new(0x2c);
  pCVar3 = this_01;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + (uint)bVar5 * -8 + 4;
  }
  CCharacBloodDungeon::CCharacBloodDungeon(this_01);
  *(CCharacBloodDungeon **)(this + 4) = this_01;
  this_02 = operator_new(0x58);
                    /* try { // try from 0832a804 to 0832a808 has its CatchHandler @ 0832a80b */
  item_lock::CItemLock::CItemLock(this_02);
  *(CItemLock **)(this + 8) = this_02;
  this_03 = operator_new(0xc);
                    /* try { // try from 0832a840 to 0832a844 has its CatchHandler @ 0832a847 */
  CPvPLiveEventData::CPvPLiveEventData(this_03);
  *(CPvPLiveEventData **)(this + 0xc) = this_03;
  this_04 = operator_new(0x14);
                    /* try { // try from 0832a87c to 0832a880 has its CatchHandler @ 0832a883 */
  online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember(this_04);
  *(COnlinePreliminaryMember **)(this + 0x10) = this_04;
  this_05 = operator_new(0x20);
                    /* try { // try from 0832a8b8 to 0832a8bc has its CatchHandler @ 0832a8bf */
  online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList(this_05);
  *(COnlinePreliminaryMemberMatchList **)(this + 0x14) = this_05;
  this_06 = operator_new(0x10);
                    /* try { // try from 0832a8f4 to 0832a8f8 has its CatchHandler @ 0832a8fb */
  Redeem_Item::CRedeemItem::CRedeemItem(this_06);
  *(CRedeemItem **)(this + 0x18) = this_06;
  this_07 = operator_new(0x5c);
                    /* try { // try from 0832a930 to 0832a934 has its CatchHandler @ 0832a937 */
  fair_pvp::CFairPvPScore::CFairPvPScore(this_07);
  *(CFairPvPScore **)(this + 0x1c) = this_07;
  this_08 = operator_new(0x158);
  pCVar4 = this_08;
  for (iVar1 = 0x56; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + (uint)bVar5 * -8 + 4;
  }
                    /* try { // try from 0832a983 to 0832a987 has its CatchHandler @ 0832a98a */
  CMissionList_Charac::CMissionList_Charac(this_08);
  *(CMissionList_Charac **)(this + 0x20) = this_08;
  this_09 = operator_new(0x89c);
                    /* try { // try from 0832a9bf to 0832a9c3 has its CatchHandler @ 0832a9c6 */
  CExpandEquipslot::CExpandEquipslot(this_09);
  *(CExpandEquipslot **)(this + 0x24) = this_09;
  this_10 = operator_new(0x20);
                    /* try { // try from 0832a9fb to 0832a9ff has its CatchHandler @ 0832aa02 */
  CItemMakingSkill::CItemMakingSkill(this_10);
  *(CItemMakingSkill **)(this + 0x28) = this_10;
  this_11 = operator_new(0x48);
                    /* try { // try from 0832aa37 to 0832aa3b has its CatchHandler @ 0832aa3e */
  CQuestShop::CQuestShop(this_11);
  *(CQuestShop **)(this + 0x2c) = this_11;
  this_12 = operator_new(0x20);
                    /* try { // try from 0832aa73 to 0832aa77 has its CatchHandler @ 0832aa7a */
  TOD_UserState::TOD_UserState(this_12);
  *(TOD_UserState **)(this + 0x34) = this_12;
  this_13 = operator_new(0x50);
                    /* try { // try from 0832aaaf to 0832aab3 has its CatchHandler @ 0832aab6 */
  CKillMonsterInfo::CKillMonsterInfo(this_13);
  *(CKillMonsterInfo **)(this + 0x30) = this_13;
  this_14 = operator_new(0x6b58);
                    /* try { // try from 0832aaeb to 0832aaef has its CatchHandler @ 0832aaf2 */
  CTitleBook::CTitleBook(this_14);
  *(CTitleBook **)(this + 0x38) = this_14;
  this_15 = operator_new(0x28);
                    /* try { // try from 0832ab27 to 0832ab2b has its CatchHandler @ 0832ab2e */
  CAchievement::CAchievement(this_15);
  *(CAchievement **)(this + 0x3c) = this_15;
  this_16 = operator_new(0x1390);
                    /* try { // try from 0832ab63 to 0832ab67 has its CatchHandler @ 0832ab6a */
  CItemDictionary::CItemDictionary(this_16);
  *(CItemDictionary **)(this + 0x40) = this_16;
  this_17 = operator_new(0xc);
                    /* try { // try from 0832ab9f to 0832aba3 has its CatchHandler @ 0832aba6 */
  CBoosterGage::CBoosterGage(this_17);
  *(CBoosterGage **)(this + 0x44) = this_17;
  this_18 = operator_new(0x24);
                    /* try { // try from 0832abdb to 0832abdf has its CatchHandler @ 0832abe2 */
  BestClearTime::BestClearTime(this_18);
  *(BestClearTime **)(this + 0x48) = this_18;
  this_19 = operator_new(0x18);
                    /* try { // try from 0832ac17 to 0832ac1b has its CatchHandler @ 0832ac1e */
  CCharacInformNotice::CCharacInformNotice(this_19);
  *(CCharacInformNotice **)(this + 0x4c) = this_19;
  return;
}

```

---

## GetData

```asm
// === 0832ac94 charac_expand::CDataMgr::GetData  [0x0832ac94-0x832acb1] ===
 832ac94:	55                   	push   %ebp
 832ac95:	89 e5                	mov    %esp,%ebp
 832ac97:	8b 45 0c             	mov    0xc(%ebp),%eax
 832ac9a:	83 f8 13             	cmp    $0x13,%eax
 832ac9d:	76 07                	jbe    832aca6 <_ZNK13charac_expand8CDataMgr7GetDataE23ENUM_CHARAC_EXPAND_TYPE+0x12>
 832ac9f:	b8 00 00 00 00       	mov    $0x0,%eax
 832aca4:	eb 09                	jmp    832acaf <_ZNK13charac_expand8CDataMgr7GetDataE23ENUM_CHARAC_EXPAND_TYPE+0x1b>
 832aca6:	8b 55 0c             	mov    0xc(%ebp),%edx
 832aca9:	8b 45 08             	mov    0x8(%ebp),%eax
 832acac:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832acaf:	5d                   	pop    %ebp
 832acb0:	c3                   	ret
 832acb1:	90                   	nop

```

```c
// charac_expand::CDataMgr::GetData @ 0x832ac94

/* charac_expand::CDataMgr::GetData(ENUM_CHARAC_EXPAND_TYPE) const */

undefined4 __thiscall charac_expand::CDataMgr::GetData(CDataMgr *this,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x14) {
    uVar1 = *(undefined4 *)(this + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## GetDataR

```asm
// === 0832acb2 charac_expand::CDataMgr::GetDataR  [0x0832acb2-0x832accf] ===
 832acb2:	55                   	push   %ebp
 832acb3:	89 e5                	mov    %esp,%ebp
 832acb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 832acb8:	83 f8 13             	cmp    $0x13,%eax
 832acbb:	76 07                	jbe    832acc4 <_ZNK13charac_expand8CDataMgr8GetDataRE23ENUM_CHARAC_EXPAND_TYPE+0x12>
 832acbd:	b8 00 00 00 00       	mov    $0x0,%eax
 832acc2:	eb 09                	jmp    832accd <_ZNK13charac_expand8CDataMgr8GetDataRE23ENUM_CHARAC_EXPAND_TYPE+0x1b>
 832acc4:	8b 55 0c             	mov    0xc(%ebp),%edx
 832acc7:	8b 45 08             	mov    0x8(%ebp),%eax
 832acca:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832accd:	5d                   	pop    %ebp
 832acce:	c3                   	ret
 832accf:	90                   	nop

```

```c
// charac_expand::CDataMgr::GetDataR @ 0x832acb2

/* charac_expand::CDataMgr::GetDataR(ENUM_CHARAC_EXPAND_TYPE) const */

undefined4 __thiscall charac_expand::CDataMgr::GetDataR(CDataMgr *this,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x14) {
    uVar1 = *(undefined4 *)(this + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## ResetDaily

```asm
// === 0832adaa charac_expand::CDataMgr::ResetDaily  [0x0832adaa-0x832ade7] ===
 832adaa:	55                   	push   %ebp
 832adab:	89 e5                	mov    %esp,%ebp
 832adad:	83 ec 28             	sub    $0x28,%esp
 832adb0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832adb7:	eb 22                	jmp    832addb <_ZN13charac_expand8CDataMgr10ResetDailyEv+0x31>
 832adb9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832adbc:	8b 45 08             	mov    0x8(%ebp),%eax
 832adbf:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832adc2:	8b 00                	mov    (%eax),%eax
 832adc4:	83 c0 0c             	add    $0xc,%eax
 832adc7:	8b 08                	mov    (%eax),%ecx
 832adc9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832adcc:	8b 45 08             	mov    0x8(%ebp),%eax
 832adcf:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832add2:	89 04 24             	mov    %eax,(%esp)
 832add5:	ff d1                	call   *%ecx
 832add7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832addb:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 832addf:	0f 9e c0             	setle  %al
 832ade2:	84 c0                	test   %al,%al
 832ade4:	75 d3                	jne    832adb9 <_ZN13charac_expand8CDataMgr10ResetDailyEv+0xf>
 832ade6:	c9                   	leave
 832ade7:	c3                   	ret

```

```c
// charac_expand::CDataMgr::ResetDaily @ 0x832adaa

/* charac_expand::CDataMgr::ResetDaily() */

void __thiscall charac_expand::CDataMgr::ResetDaily(CDataMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    (**(code **)(**(int **)(this + local_10 * 4) + 0xc))(*(undefined4 *)(this + local_10 * 4));
  }
  return;
}

```

---

## ResetDailyMidnight

```asm
// === 0832ade8 charac_expand::CDataMgr::ResetDailyMidnight  [0x0832ade8-0x832ae22] ===
 832ade8:	55                   	push   %ebp
 832ade9:	89 e5                	mov    %esp,%ebp
 832adeb:	83 ec 28             	sub    $0x28,%esp
 832adee:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832adf5:	eb 1f                	jmp    832ae16 <_ZN13charac_expand8CDataMgr18ResetDailyMidnightEv+0x2e>
 832adf7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832adfa:	8b 45 08             	mov    0x8(%ebp),%eax
 832adfd:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832ae00:	8b 00                	mov    (%eax),%eax
 832ae02:	8b 08                	mov    (%eax),%ecx
 832ae04:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832ae07:	8b 45 08             	mov    0x8(%ebp),%eax
 832ae0a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832ae0d:	89 04 24             	mov    %eax,(%esp)
 832ae10:	ff d1                	call   *%ecx
 832ae12:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832ae16:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 832ae1a:	0f 9e c0             	setle  %al
 832ae1d:	84 c0                	test   %al,%al
 832ae1f:	75 d6                	jne    832adf7 <_ZN13charac_expand8CDataMgr18ResetDailyMidnightEv+0xf>
 832ae21:	c9                   	leave
 832ae22:	c3                   	ret

```

```c
// charac_expand::CDataMgr::ResetDailyMidnight @ 0x832ade8

/* charac_expand::CDataMgr::ResetDailyMidnight() */

void __thiscall charac_expand::CDataMgr::ResetDailyMidnight(CDataMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    (**(code **)**(undefined4 **)(this + local_10 * 4))(*(undefined4 *)(this + local_10 * 4));
  }
  return;
}

```

---

## reset

```asm
// === 0832ad78 charac_expand::CDataMgr::reset  [0x0832ad78-0x832ada9] ===
 832ad78:	55                   	push   %ebp
 832ad79:	89 e5                	mov    %esp,%ebp
 832ad7b:	83 ec 28             	sub    $0x28,%esp
 832ad7e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832ad85:	eb 15                	jmp    832ad9c <_ZN13charac_expand8CDataMgr5resetEv+0x24>
 832ad87:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832ad8a:	8b 45 08             	mov    0x8(%ebp),%eax
 832ad8d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832ad90:	89 04 24             	mov    %eax,(%esp)
 832ad93:	e8 24 01 00 00       	call   832aebc <_ZN13charac_expand5CData5resetEv>
 832ad98:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832ad9c:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 832ada0:	0f 9e c0             	setle  %al
 832ada3:	84 c0                	test   %al,%al
 832ada5:	75 e0                	jne    832ad87 <_ZN13charac_expand8CDataMgr5resetEv+0xf>
 832ada7:	c9                   	leave
 832ada8:	c3                   	ret
 832ada9:	90                   	nop

```

```c
// charac_expand::CDataMgr::reset @ 0x832ad78

/* charac_expand::CDataMgr::reset() */

void __thiscall charac_expand::CDataMgr::reset(CDataMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    CData::reset(*(CData **)(this + local_10 * 4));
  }
  return;
}

```

---

## update

```asm
// === 0832acd0 charac_expand::CDataMgr::update  [0x0832acd0-0x832ad2f] ===
 832acd0:	55                   	push   %ebp
 832acd1:	89 e5                	mov    %esp,%ebp
 832acd3:	83 ec 28             	sub    $0x28,%esp
 832acd6:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 832acda:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832ace1:	eb 3c                	jmp    832ad1f <_ZN13charac_expand8CDataMgr6updateEP5CUser+0x4f>
 832ace3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832ace6:	8b 45 08             	mov    0x8(%ebp),%eax
 832ace9:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832acec:	89 04 24             	mov    %eax,(%esp)
 832acef:	e8 8c 01 00 00       	call   832ae80 <_ZN13charac_expand5CData6isSaveEv>
 832acf4:	84 c0                	test   %al,%al
 832acf6:	74 23                	je     832ad1b <_ZN13charac_expand8CDataMgr6updateEP5CUser+0x4b>
 832acf8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832acfb:	8b 45 08             	mov    0x8(%ebp),%eax
 832acfe:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832ad01:	8b 55 0c             	mov    0xc(%ebp),%edx
 832ad04:	89 54 24 04          	mov    %edx,0x4(%esp)
 832ad08:	89 04 24             	mov    %eax,(%esp)
 832ad0b:	e8 7c 01 00 00       	call   832ae8c <_ZN13charac_expand5CData8saveDataEP5CUser>
 832ad10:	83 f0 01             	xor    $0x1,%eax
 832ad13:	84 c0                	test   %al,%al
 832ad15:	74 04                	je     832ad1b <_ZN13charac_expand8CDataMgr6updateEP5CUser+0x4b>
 832ad17:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 832ad1b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832ad1f:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 832ad23:	0f 9e c0             	setle  %al
 832ad26:	84 c0                	test   %al,%al
 832ad28:	75 b9                	jne    832ace3 <_ZN13charac_expand8CDataMgr6updateEP5CUser+0x13>
 832ad2a:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 832ad2e:	c9                   	leave
 832ad2f:	c3                   	ret

```

```c
// charac_expand::CDataMgr::update @ 0x832acd0

/* charac_expand::CDataMgr::update(CUser*) */

undefined1 __thiscall charac_expand::CDataMgr::update(CDataMgr *this,CUser *param_1)

{
  char cVar1;
  undefined1 local_11;
  int local_10;
  
  local_11 = 1;
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    cVar1 = CData::isSave(*(CData **)(this + local_10 * 4));
    if (cVar1 != '\0') {
      cVar1 = CData::saveData(*(CData **)(this + local_10 * 4),param_1);
      if (cVar1 != '\x01') {
        local_11 = 0;
      }
    }
  }
  return local_11;
}

```

---

## update_0832ad30

```asm
// === 0832ad30 charac_expand::CDataMgr::update  [0x0832ad30-0x832ad77] ===
 832ad30:	55                   	push   %ebp
 832ad31:	89 e5                	mov    %esp,%ebp
 832ad33:	83 ec 28             	sub    $0x28,%esp
 832ad36:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 832ad3a:	8b 55 10             	mov    0x10(%ebp),%edx
 832ad3d:	8b 45 08             	mov    0x8(%ebp),%eax
 832ad40:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832ad43:	89 04 24             	mov    %eax,(%esp)
 832ad46:	e8 35 01 00 00       	call   832ae80 <_ZN13charac_expand5CData6isSaveEv>
 832ad4b:	84 c0                	test   %al,%al
 832ad4d:	74 23                	je     832ad72 <_ZN13charac_expand8CDataMgr6updateEP5CUser23ENUM_CHARAC_EXPAND_TYPE+0x42>
 832ad4f:	8b 55 10             	mov    0x10(%ebp),%edx
 832ad52:	8b 45 08             	mov    0x8(%ebp),%eax
 832ad55:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832ad58:	8b 55 0c             	mov    0xc(%ebp),%edx
 832ad5b:	89 54 24 04          	mov    %edx,0x4(%esp)
 832ad5f:	89 04 24             	mov    %eax,(%esp)
 832ad62:	e8 25 01 00 00       	call   832ae8c <_ZN13charac_expand5CData8saveDataEP5CUser>
 832ad67:	83 f0 01             	xor    $0x1,%eax
 832ad6a:	84 c0                	test   %al,%al
 832ad6c:	74 04                	je     832ad72 <_ZN13charac_expand8CDataMgr6updateEP5CUser23ENUM_CHARAC_EXPAND_TYPE+0x42>
 832ad6e:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 832ad72:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 832ad76:	c9                   	leave
 832ad77:	c3                   	ret

```

```c
// charac_expand::CDataMgr::update @ 0x832ad30

/* charac_expand::CDataMgr::update(CUser*, ENUM_CHARAC_EXPAND_TYPE) */

undefined1 __thiscall charac_expand::CDataMgr::update(CDataMgr *this,CUser *param_1,int param_3)

{
  char cVar1;
  undefined1 local_d;
  
  local_d = 1;
  cVar1 = CData::isSave(*(CData **)(this + param_3 * 4));
  if (cVar1 != '\0') {
    cVar1 = CData::saveData(*(CData **)(this + param_3 * 4),param_1);
    if (cVar1 != '\x01') {
      local_d = 0;
    }
  }
  return local_d;
}

```

---

## ~CDataMgr

```asm
// === 0832ac48 charac_expand::CDataMgr::~CDataMgr  [0x0832ac48-0x832ac93] ===
 832ac48:	55                   	push   %ebp
 832ac49:	89 e5                	mov    %esp,%ebp
 832ac4b:	83 ec 28             	sub    $0x28,%esp
 832ac4e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832ac55:	eb 2f                	jmp    832ac86 <_ZN13charac_expand8CDataMgrD1Ev+0x3e>
 832ac57:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832ac5a:	8b 45 08             	mov    0x8(%ebp),%eax
 832ac5d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832ac60:	85 c0                	test   %eax,%eax
 832ac62:	74 1e                	je     832ac82 <_ZN13charac_expand8CDataMgrD1Ev+0x3a>
 832ac64:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832ac67:	8b 45 08             	mov    0x8(%ebp),%eax
 832ac6a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832ac6d:	8b 00                	mov    (%eax),%eax
 832ac6f:	83 c0 14             	add    $0x14,%eax
 832ac72:	8b 08                	mov    (%eax),%ecx
 832ac74:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832ac77:	8b 45 08             	mov    0x8(%ebp),%eax
 832ac7a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 832ac7d:	89 04 24             	mov    %eax,(%esp)
 832ac80:	ff d1                	call   *%ecx
 832ac82:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832ac86:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 832ac8a:	0f 9e c0             	setle  %al
 832ac8d:	84 c0                	test   %al,%al
 832ac8f:	75 c6                	jne    832ac57 <_ZN13charac_expand8CDataMgrD1Ev+0xf>
 832ac91:	c9                   	leave
 832ac92:	c3                   	ret
 832ac93:	90                   	nop

```

```c
// charac_expand::CDataMgr::~CDataMgr @ 0x832ac48

/* charac_expand::CDataMgr::~CDataMgr() */

void __thiscall charac_expand::CDataMgr::~CDataMgr(CDataMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4) != 0) {
      (**(code **)(**(int **)(this + local_10 * 4) + 0x14))(*(undefined4 *)(this + local_10 * 4));
    }
  }
  return;
}

```

