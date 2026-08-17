# StrikerScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 20

---

## StrikerScript

```asm
// === 08a9d88e StrikerScript::StrikerScript  [0x08a9d88e-0x8a9da27] ===
 8a9d88e:	55                   	push   %ebp
 8a9d88f:	89 e5                	mov    %esp,%ebp
 8a9d891:	56                   	push   %esi
 8a9d892:	53                   	push   %ebx
 8a9d893:	83 ec 10             	sub    $0x10,%esp
 8a9d896:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d899:	83 c0 14             	add    $0x14,%eax
 8a9d89c:	89 04 24             	mov    %eax,(%esp)
 8a9d89f:	e8 d2 14 00 00       	call   8a9ed76 <_ZNSt6vectorIN12ContentsType1TESaIS1_EEC1Ev>
 8a9d8a4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d8a7:	83 c0 20             	add    $0x20,%eax
 8a9d8aa:	89 04 24             	mov    %eax,(%esp)
 8a9d8ad:	e8 fa 08 5f ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a9d8b2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d8b5:	83 c0 2c             	add    $0x2c,%eax
 8a9d8b8:	89 04 24             	mov    %eax,(%esp)
 8a9d8bb:	e8 28 15 00 00       	call   8a9ede8 <_ZNSt6vectorI16ContentsRevisionSaIS0_EEC1Ev>
 8a9d8c0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d8c3:	83 c0 40             	add    $0x40,%eax
 8a9d8c6:	89 04 24             	mov    %eax,(%esp)
 8a9d8c9:	e8 8c 15 00 00       	call   8a9ee5a <_ZNSt6vectorI18StrikerSkillDataUpSaIS0_EEC1Ev>
 8a9d8ce:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d8d1:	83 c0 4c             	add    $0x4c,%eax
 8a9d8d4:	89 04 24             	mov    %eax,(%esp)
 8a9d8d7:	e8 f0 15 00 00       	call   8a9eecc <_ZNSt6vectorI15TagSkillPenaltySaIS0_EEC1Ev>
 8a9d8dc:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d8df:	83 c0 58             	add    $0x58,%eax
 8a9d8e2:	89 04 24             	mov    %eax,(%esp)
 8a9d8e5:	e8 e2 15 00 00       	call   8a9eecc <_ZNSt6vectorI15TagSkillPenaltySaIS0_EEC1Ev>
 8a9d8ea:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d8ed:	83 c0 6c             	add    $0x6c,%eax
 8a9d8f0:	89 04 24             	mov    %eax,(%esp)
 8a9d8f3:	e8 46 16 00 00       	call   8a9ef3e <_ZNSt6vectorI18ParentLevelPenaltySaIS0_EEC1Ev>
 8a9d8f8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d8fb:	83 c0 78             	add    $0x78,%eax
 8a9d8fe:	89 04 24             	mov    %eax,(%esp)
 8a9d901:	e8 aa 16 00 00       	call   8a9efb0 <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEEC1Ev>
 8a9d906:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d909:	05 94 00 00 00       	add    $0x94,%eax
 8a9d90e:	89 04 24             	mov    %eax,(%esp)
 8a9d911:	e8 14 17 00 00       	call   8a9f02a <_ZNSt6vectorI22StrikerSkillAddCommandSaIS0_EEC1Ev>
 8a9d916:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d919:	05 a8 00 00 00       	add    $0xa8,%eax
 8a9d91e:	89 04 24             	mov    %eax,(%esp)
 8a9d921:	e8 c6 fe ff ff       	call   8a9d7ec <_ZN20StrikerDirectionTypeC1Ev>
 8a9d926:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d929:	89 04 24             	mov    %eax,(%esp)
 8a9d92c:	e8 83 02 00 00       	call   8a9dbb4 <_ZN13StrikerScript5clearEv>
 8a9d931:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d934:	89 04 24             	mov    %eax,(%esp)
 8a9d937:	e8 34 03 00 00       	call   8a9dc70 <_ZN13StrikerScript6createEv>
 8a9d93c:	e9 e0 00 00 00       	jmp    8a9da21 <_ZN13StrikerScriptC1Ev+0x193>
 8a9d941:	89 d3                	mov    %edx,%ebx
 8a9d943:	89 c6                	mov    %eax,%esi
 8a9d945:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d948:	05 94 00 00 00       	add    $0x94,%eax
 8a9d94d:	89 04 24             	mov    %eax,(%esp)
 8a9d950:	e8 e9 16 00 00       	call   8a9f03e <_ZNSt6vectorI22StrikerSkillAddCommandSaIS0_EED1Ev>
 8a9d955:	89 f0                	mov    %esi,%eax
 8a9d957:	89 da                	mov    %ebx,%edx
 8a9d959:	eb 00                	jmp    8a9d95b <_ZN13StrikerScriptC1Ev+0xcd>
 8a9d95b:	89 d3                	mov    %edx,%ebx
 8a9d95d:	89 c6                	mov    %eax,%esi
 8a9d95f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d962:	83 c0 78             	add    $0x78,%eax
 8a9d965:	89 04 24             	mov    %eax,(%esp)
 8a9d968:	e8 9d 13 00 00       	call   8a9ed0a <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEED1Ev>
 8a9d96d:	89 f0                	mov    %esi,%eax
 8a9d96f:	89 da                	mov    %ebx,%edx
 8a9d971:	eb 00                	jmp    8a9d973 <_ZN13StrikerScriptC1Ev+0xe5>
 8a9d973:	89 d3                	mov    %edx,%ebx
 8a9d975:	89 c6                	mov    %eax,%esi
 8a9d977:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d97a:	83 c0 6c             	add    $0x6c,%eax
 8a9d97d:	89 04 24             	mov    %eax,(%esp)
 8a9d980:	e8 cd 15 00 00       	call   8a9ef52 <_ZNSt6vectorI18ParentLevelPenaltySaIS0_EED1Ev>
 8a9d985:	89 f0                	mov    %esi,%eax
 8a9d987:	89 da                	mov    %ebx,%edx
 8a9d989:	eb 00                	jmp    8a9d98b <_ZN13StrikerScriptC1Ev+0xfd>
 8a9d98b:	89 d3                	mov    %edx,%ebx
 8a9d98d:	89 c6                	mov    %eax,%esi
 8a9d98f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d992:	83 c0 58             	add    $0x58,%eax
 8a9d995:	89 04 24             	mov    %eax,(%esp)
 8a9d998:	e8 43 15 00 00       	call   8a9eee0 <_ZNSt6vectorI15TagSkillPenaltySaIS0_EED1Ev>
 8a9d99d:	89 f0                	mov    %esi,%eax
 8a9d99f:	89 da                	mov    %ebx,%edx
 8a9d9a1:	eb 00                	jmp    8a9d9a3 <_ZN13StrikerScriptC1Ev+0x115>
 8a9d9a3:	89 d3                	mov    %edx,%ebx
 8a9d9a5:	89 c6                	mov    %eax,%esi
 8a9d9a7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d9aa:	83 c0 4c             	add    $0x4c,%eax
 8a9d9ad:	89 04 24             	mov    %eax,(%esp)
 8a9d9b0:	e8 2b 15 00 00       	call   8a9eee0 <_ZNSt6vectorI15TagSkillPenaltySaIS0_EED1Ev>
 8a9d9b5:	89 f0                	mov    %esi,%eax
 8a9d9b7:	89 da                	mov    %ebx,%edx
 8a9d9b9:	eb 00                	jmp    8a9d9bb <_ZN13StrikerScriptC1Ev+0x12d>
 8a9d9bb:	89 d3                	mov    %edx,%ebx
 8a9d9bd:	89 c6                	mov    %eax,%esi
 8a9d9bf:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d9c2:	83 c0 40             	add    $0x40,%eax
 8a9d9c5:	89 04 24             	mov    %eax,(%esp)
 8a9d9c8:	e8 a1 14 00 00       	call   8a9ee6e <_ZNSt6vectorI18StrikerSkillDataUpSaIS0_EED1Ev>
 8a9d9cd:	89 f0                	mov    %esi,%eax
 8a9d9cf:	89 da                	mov    %ebx,%edx
 8a9d9d1:	eb 00                	jmp    8a9d9d3 <_ZN13StrikerScriptC1Ev+0x145>
 8a9d9d3:	89 d3                	mov    %edx,%ebx
 8a9d9d5:	89 c6                	mov    %eax,%esi
 8a9d9d7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d9da:	83 c0 2c             	add    $0x2c,%eax
 8a9d9dd:	89 04 24             	mov    %eax,(%esp)
 8a9d9e0:	e8 17 14 00 00       	call   8a9edfc <_ZNSt6vectorI16ContentsRevisionSaIS0_EED1Ev>
 8a9d9e5:	89 f0                	mov    %esi,%eax
 8a9d9e7:	89 da                	mov    %ebx,%edx
 8a9d9e9:	eb 00                	jmp    8a9d9eb <_ZN13StrikerScriptC1Ev+0x15d>
 8a9d9eb:	89 d3                	mov    %edx,%ebx
 8a9d9ed:	89 c6                	mov    %eax,%esi
 8a9d9ef:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d9f2:	83 c0 20             	add    $0x20,%eax
 8a9d9f5:	89 04 24             	mov    %eax,(%esp)
 8a9d9f8:	e8 dd 63 5e ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a9d9fd:	89 f0                	mov    %esi,%eax
 8a9d9ff:	89 da                	mov    %ebx,%edx
 8a9da01:	eb 00                	jmp    8a9da03 <_ZN13StrikerScriptC1Ev+0x175>
 8a9da03:	89 d3                	mov    %edx,%ebx
 8a9da05:	89 c6                	mov    %eax,%esi
 8a9da07:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9da0a:	83 c0 14             	add    $0x14,%eax
 8a9da0d:	89 04 24             	mov    %eax,(%esp)
 8a9da10:	e8 75 13 00 00       	call   8a9ed8a <_ZNSt6vectorIN12ContentsType1TESaIS1_EED1Ev>
 8a9da15:	89 f0                	mov    %esi,%eax
 8a9da17:	89 da                	mov    %ebx,%edx
 8a9da19:	89 04 24             	mov    %eax,(%esp)
 8a9da1c:	e8 2f 5d 04 00       	call   8ae3750 <_Unwind_Resume>
 8a9da21:	83 c4 10             	add    $0x10,%esp
 8a9da24:	5b                   	pop    %ebx
 8a9da25:	5e                   	pop    %esi
 8a9da26:	5d                   	pop    %ebp
 8a9da27:	c3                   	ret

```

```c
// StrikerScript::StrikerScript @ 0x8a9d88e

/* StrikerScript::StrikerScript() */

void __thiscall StrikerScript::StrikerScript(StrikerScript *this)

{
  std::vector<ContentsType::T,std::allocator<ContentsType::T>>::vector
            ((vector<ContentsType::T,std::allocator<ContentsType::T>> *)(this + 0x14));
                    /* try { // try from 08a9d8ad to 08a9d8b1 has its CatchHandler @ 08a9da03 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x20));
                    /* try { // try from 08a9d8bb to 08a9d8bf has its CatchHandler @ 08a9d9eb */
  std::vector<ContentsRevision,std::allocator<ContentsRevision>>::vector
            ((vector<ContentsRevision,std::allocator<ContentsRevision>> *)(this + 0x2c));
                    /* try { // try from 08a9d8c9 to 08a9d8cd has its CatchHandler @ 08a9d9d3 */
  std::vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>>::vector
            ((vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>> *)(this + 0x40));
                    /* try { // try from 08a9d8d7 to 08a9d8db has its CatchHandler @ 08a9d9bb */
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::vector
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x4c));
                    /* try { // try from 08a9d8e5 to 08a9d8e9 has its CatchHandler @ 08a9d9a3 */
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::vector
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x58));
                    /* try { // try from 08a9d8f3 to 08a9d8f7 has its CatchHandler @ 08a9d98b */
  std::vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>>::vector
            ((vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>> *)(this + 0x6c));
                    /* try { // try from 08a9d901 to 08a9d905 has its CatchHandler @ 08a9d973 */
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::map((map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
         *)(this + 0x78));
                    /* try { // try from 08a9d911 to 08a9d915 has its CatchHandler @ 08a9d95b */
  std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::vector
            ((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>> *)(this + 0x94))
  ;
  StrikerDirectionType::StrikerDirectionType((StrikerDirectionType *)(this + 0xa8));
                    /* try { // try from 08a9d92c to 08a9d93b has its CatchHandler @ 08a9d941 */
  clear(this);
  create(this);
  return;
}

```

---

## checkSkillIndex

```asm
// === 08a9e868 StrikerScript::checkSkillIndex  [0x08a9e868-0x8a9e979] ===
 8a9e868:	55                   	push   %ebp
 8a9e869:	89 e5                	mov    %esp,%ebp
 8a9e86b:	83 ec 48             	sub    $0x48,%esp
 8a9e86e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a9e871:	8b 45 10             	mov    0x10(%ebp),%eax
 8a9e874:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 8a9e878:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 8a9e87c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a9e883:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a9e88a:	e9 d5 00 00 00       	jmp    8a9e964 <_ZN13StrikerScript15checkSkillIndexEssi+0xfc>
 8a9e88f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8a9e893:	75 20                	jne    8a9e8b5 <_ZN13StrikerScript15checkSkillIndexEssi+0x4d>
 8a9e895:	0f bf 55 d0          	movswl -0x30(%ebp),%edx
 8a9e899:	0f bf 45 d4          	movswl -0x2c(%ebp),%eax
 8a9e89d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a9e8a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e8a5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e8a8:	89 04 24             	mov    %eax,(%esp)
 8a9e8ab:	e8 30 ff ff ff       	call   8a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>
 8a9e8b0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a9e8b3:	eb 1e                	jmp    8a9e8d3 <_ZN13StrikerScript15checkSkillIndexEssi+0x6b>
 8a9e8b5:	0f bf 45 d4          	movswl -0x2c(%ebp),%eax
 8a9e8b9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a9e8c0:	00 
 8a9e8c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e8c5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e8c8:	89 04 24             	mov    %eax,(%esp)
 8a9e8cb:	e8 10 ff ff ff       	call   8a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>
 8a9e8d0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a9e8d3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8a9e8d7:	75 0a                	jne    8a9e8e3 <_ZN13StrikerScript15checkSkillIndexEssi+0x7b>
 8a9e8d9:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9e8de:	e9 95 00 00 00       	jmp    8a9e978 <_ZN13StrikerScript15checkSkillIndexEssi+0x110>
 8a9e8e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a9e8e6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8a9e8e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9e8ed:	89 04 24             	mov    %eax,(%esp)
 8a9e8f0:	e8 79 0d 00 00       	call   8a9f66e <_ZNSt6vectorI12StrikerSkillSaIS0_EE5beginEv>
 8a9e8f5:	83 ec 04             	sub    $0x4,%esp
 8a9e8f8:	eb 3b                	jmp    8a9e935 <_ZN13StrikerScript15checkSkillIndexEssi+0xcd>
 8a9e8fa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a9e8fd:	89 04 24             	mov    %eax,(%esp)
 8a9e900:	e8 df 0d 00 00       	call   8a9f6e4 <_ZNK9__gnu_cxx17__normal_iteratorIP12StrikerSkillSt6vectorIS1_SaIS1_EEEptEv>
 8a9e905:	8b 00                	mov    (%eax),%eax
 8a9e907:	3b 45 14             	cmp    0x14(%ebp),%eax
 8a9e90a:	0f 94 c0             	sete   %al
 8a9e90d:	84 c0                	test   %al,%al
 8a9e90f:	74 07                	je     8a9e918 <_ZN13StrikerScript15checkSkillIndexEssi+0xb0>
 8a9e911:	b8 01 00 00 00       	mov    $0x1,%eax
 8a9e916:	eb 60                	jmp    8a9e978 <_ZN13StrikerScript15checkSkillIndexEssi+0x110>
 8a9e918:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a9e91b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a9e922:	00 
 8a9e923:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8a9e926:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9e92a:	89 04 24             	mov    %eax,(%esp)
 8a9e92d:	e8 bc 0d 00 00       	call   8a9f6ee <_ZN9__gnu_cxx17__normal_iteratorIP12StrikerSkillSt6vectorIS1_SaIS1_EEEppEi>
 8a9e932:	83 ec 04             	sub    $0x4,%esp
 8a9e935:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a9e938:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8a9e93b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9e93f:	89 04 24             	mov    %eax,(%esp)
 8a9e942:	e8 4b 0d 00 00       	call   8a9f692 <_ZNSt6vectorI12StrikerSkillSaIS0_EE3endEv>
 8a9e947:	83 ec 04             	sub    $0x4,%esp
 8a9e94a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a9e94d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e951:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a9e954:	89 04 24             	mov    %eax,(%esp)
 8a9e957:	e8 5c 0d 00 00       	call   8a9f6b8 <_ZN9__gnu_cxxneIP12StrikerSkillSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8a9e95c:	84 c0                	test   %al,%al
 8a9e95e:	75 9a                	jne    8a9e8fa <_ZN13StrikerScript15checkSkillIndexEssi+0x92>
 8a9e960:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a9e964:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8a9e968:	0f 9e c0             	setle  %al
 8a9e96b:	84 c0                	test   %al,%al
 8a9e96d:	0f 85 1c ff ff ff    	jne    8a9e88f <_ZN13StrikerScript15checkSkillIndexEssi+0x27>
 8a9e973:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9e978:	c9                   	leave
 8a9e979:	c3                   	ret

```

```c
// StrikerScript::checkSkillIndex @ 0x8a9e868

/* StrikerScript::checkSkillIndex(short, short, int) */

undefined4 __thiscall
StrikerScript::checkSkillIndex(StrikerScript *this,short param_1,short param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    if (1 < local_10) {
      return 0;
    }
    if (local_10 == 0) {
      local_14 = getStrikerSkillVector(this,param_1,param_2);
    }
    else {
      local_14 = getStrikerSkillVector(this,param_1,0);
    }
    if (local_14 == 0) break;
    std::vector<StrikerSkill,std::allocator<StrikerSkill>>::begin();
    while( true ) {
      std::vector<StrikerSkill,std::allocator<StrikerSkill>>::end();
      bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar1) break;
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
                      ::operator->(local_20);
      if (*piVar2 == param_3) {
        return 1;
      }
      __gnu_cxx::
      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>::
      operator++(local_18,(int)local_20);
    }
    local_10 = local_10 + 1;
  }
  return 0;
}

```

---

## clear

```asm
// === 08a9dbb4 StrikerScript::clear  [0x08a9dbb4-0x8a9dc6f] ===
 8a9dbb4:	55                   	push   %ebp
 8a9dbb5:	89 e5                	mov    %esp,%ebp
 8a9dbb7:	83 ec 18             	sub    $0x18,%esp
 8a9dbba:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dbbd:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8a9dbc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dbc6:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8a9dbcd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dbd0:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8a9dbd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dbda:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8a9dbe1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dbe4:	c7 40 10 f4 01 00 00 	movl   $0x1f4,0x10(%eax)
 8a9dbeb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dbee:	83 c0 14             	add    $0x14,%eax
 8a9dbf1:	89 04 24             	mov    %eax,(%esp)
 8a9dbf4:	e8 a3 14 00 00       	call   8a9f09c <_ZNSt6vectorIN12ContentsType1TESaIS1_EE5clearEv>
 8a9dbf9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dbfc:	83 c0 20             	add    $0x20,%eax
 8a9dbff:	89 04 24             	mov    %eax,(%esp)
 8a9dc02:	e8 67 8f 5f ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a9dc07:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dc0a:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 8a9dc11:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dc14:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 8a9dc1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dc1e:	c7 80 90 00 00 00 00 	movl   $0x0,0x90(%eax)
 8a9dc25:	00 00 00 
 8a9dc28:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dc2b:	c6 80 a0 00 00 00 00 	movb   $0x0,0xa0(%eax)
 8a9dc32:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dc35:	c7 40 64 00 00 00 00 	movl   $0x0,0x64(%eax)
 8a9dc3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dc3f:	c7 40 68 00 00 00 00 	movl   $0x0,0x68(%eax)
 8a9dc46:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dc49:	c7 80 a4 00 00 00 00 	movl   $0x0,0xa4(%eax)
 8a9dc50:	00 00 00 
 8a9dc53:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dc56:	c7 80 ac 00 00 00 00 	movl   $0x0,0xac(%eax)
 8a9dc5d:	00 00 00 
 8a9dc60:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dc63:	c7 80 b0 00 00 00 63 	movl   $0x63,0xb0(%eax)
 8a9dc6a:	00 00 00 
 8a9dc6d:	c9                   	leave
 8a9dc6e:	c3                   	ret
 8a9dc6f:	90                   	nop

```

```c
// StrikerScript::clear @ 0x8a9dbb4

/* StrikerScript::clear() */

void __thiscall StrikerScript::clear(StrikerScript *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 500;
  std::vector<ContentsType::T,std::allocator<ContentsType::T>>::clear
            ((vector<ContentsType::T,std::allocator<ContentsType::T>> *)(this + 0x14));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  this[0xa0] = (StrikerScript)0x0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 99;
  return;
}

```

---

## create

```asm
// === 08a9dc70 StrikerScript::create  [0x08a9dc70-0x8a9dcbd] ===
 8a9dc70:	55                   	push   %ebp
 8a9dc71:	89 e5                	mov    %esp,%ebp
 8a9dc73:	57                   	push   %edi
 8a9dc74:	56                   	push   %esi
 8a9dc75:	53                   	push   %ebx
 8a9dc76:	83 ec 1c             	sub    $0x1c,%esp
 8a9dc79:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 8a9dc80:	e8 cb 67 c8 ff       	call   8724450 <_Znwj>
 8a9dc85:	89 c3                	mov    %eax,%ebx
 8a9dc87:	89 d8                	mov    %ebx,%eax
 8a9dc89:	89 04 24             	mov    %eax,(%esp)
 8a9dc8c:	e8 67 d0 e1 ff       	call   88bacf8 <_ZN16STScriptFileListC1Ev>
 8a9dc91:	eb 18                	jmp    8a9dcab <_ZN13StrikerScript6createEv+0x3b>
 8a9dc93:	89 d6                	mov    %edx,%esi
 8a9dc95:	89 c7                	mov    %eax,%edi
 8a9dc97:	89 1c 24             	mov    %ebx,(%esp)
 8a9dc9a:	e8 51 68 c8 ff       	call   87244f0 <_ZdlPv>
 8a9dc9f:	89 f8                	mov    %edi,%eax
 8a9dca1:	89 f2                	mov    %esi,%edx
 8a9dca3:	89 04 24             	mov    %eax,(%esp)
 8a9dca6:	e8 a5 5a 04 00       	call   8ae3750 <_Unwind_Resume>
 8a9dcab:	89 da                	mov    %ebx,%edx
 8a9dcad:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dcb0:	89 90 90 00 00 00    	mov    %edx,0x90(%eax)
 8a9dcb6:	83 c4 1c             	add    $0x1c,%esp
 8a9dcb9:	5b                   	pop    %ebx
 8a9dcba:	5e                   	pop    %esi
 8a9dcbb:	5f                   	pop    %edi
 8a9dcbc:	5d                   	pop    %ebp
 8a9dcbd:	c3                   	ret

```

```c
// StrikerScript::create @ 0x8a9dc70

/* StrikerScript::create() */

void __thiscall StrikerScript::create(StrikerScript *this)

{
  STScriptFileList *this_00;
  
  this_00 = operator_new(0x18);
                    /* try { // try from 08a9dc8c to 08a9dc90 has its CatchHandler @ 08a9dc93 */
  STScriptFileList::STScriptFileList(this_00);
  *(STScriptFileList **)(this + 0x90) = this_00;
  return;
}

```

---

## destory

```asm
// === 08a9dcbe StrikerScript::destory  [0x08a9dcbe-0x8a9ddb1] ===
 8a9dcbe:	55                   	push   %ebp
 8a9dcbf:	89 e5                	mov    %esp,%ebp
 8a9dcc1:	53                   	push   %ebx
 8a9dcc2:	83 ec 24             	sub    $0x24,%esp
 8a9dcc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dcc8:	8b 80 90 00 00 00    	mov    0x90(%eax),%eax
 8a9dcce:	85 c0                	test   %eax,%eax
 8a9dcd0:	74 1d                	je     8a9dcef <_ZN13StrikerScript7destoryEv+0x31>
 8a9dcd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dcd5:	8b 98 90 00 00 00    	mov    0x90(%eax),%ebx
 8a9dcdb:	85 db                	test   %ebx,%ebx
 8a9dcdd:	74 10                	je     8a9dcef <_ZN13StrikerScript7destoryEv+0x31>
 8a9dcdf:	89 1c 24             	mov    %ebx,(%esp)
 8a9dce2:	e8 6b 36 65 ff       	call   80f1352 <_ZN16STScriptFileListD1Ev>
 8a9dce7:	89 1c 24             	mov    %ebx,(%esp)
 8a9dcea:	e8 01 68 c8 ff       	call   87244f0 <_ZdlPv>
 8a9dcef:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dcf2:	c7 80 90 00 00 00 00 	movl   $0x0,0x90(%eax)
 8a9dcf9:	00 00 00 
 8a9dcfc:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dcff:	8d 50 78             	lea    0x78(%eax),%edx
 8a9dd02:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a9dd05:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9dd09:	89 04 24             	mov    %eax,(%esp)
 8a9dd0c:	e8 a7 13 00 00       	call   8a9f0b8 <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEE5beginEv>
 8a9dd11:	83 ec 04             	sub    $0x4,%esp
 8a9dd14:	eb 56                	jmp    8a9dd6c <_ZN13StrikerScript7destoryEv+0xae>
 8a9dd16:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a9dd19:	89 04 24             	mov    %eax,(%esp)
 8a9dd1c:	e8 15 14 00 00       	call   8a9f136 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorI12StrikerSkillSaIS3_EEEEptEv>
 8a9dd21:	8b 40 04             	mov    0x4(%eax),%eax
 8a9dd24:	85 c0                	test   %eax,%eax
 8a9dd26:	0f 95 c0             	setne  %al
 8a9dd29:	84 c0                	test   %al,%al
 8a9dd2b:	74 22                	je     8a9dd4f <_ZN13StrikerScript7destoryEv+0x91>
 8a9dd2d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a9dd30:	89 04 24             	mov    %eax,(%esp)
 8a9dd33:	e8 fe 13 00 00       	call   8a9f136 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorI12StrikerSkillSaIS3_EEEEptEv>
 8a9dd38:	8b 58 04             	mov    0x4(%eax),%ebx
 8a9dd3b:	85 db                	test   %ebx,%ebx
 8a9dd3d:	74 10                	je     8a9dd4f <_ZN13StrikerScript7destoryEv+0x91>
 8a9dd3f:	89 1c 24             	mov    %ebx,(%esp)
 8a9dd42:	e8 fd 13 00 00       	call   8a9f144 <_ZNSt6vectorI12StrikerSkillSaIS0_EED1Ev>
 8a9dd47:	89 1c 24             	mov    %ebx,(%esp)
 8a9dd4a:	e8 a1 67 c8 ff       	call   87244f0 <_ZdlPv>
 8a9dd4f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a9dd52:	89 04 24             	mov    %eax,(%esp)
 8a9dd55:	e8 dc 13 00 00       	call   8a9f136 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorI12StrikerSkillSaIS3_EEEEptEv>
 8a9dd5a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8a9dd61:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a9dd64:	89 04 24             	mov    %eax,(%esp)
 8a9dd67:	e8 ac 13 00 00       	call   8a9f118 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorI12StrikerSkillSaIS3_EEEEppEv>
 8a9dd6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dd6f:	8d 50 78             	lea    0x78(%eax),%edx
 8a9dd72:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a9dd75:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9dd79:	89 04 24             	mov    %eax,(%esp)
 8a9dd7c:	e8 5d 13 00 00       	call   8a9f0de <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 8a9dd81:	83 ec 04             	sub    $0x4,%esp
 8a9dd84:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a9dd87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9dd8b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a9dd8e:	89 04 24             	mov    %eax,(%esp)
 8a9dd91:	e8 6e 13 00 00       	call   8a9f104 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorI12StrikerSkillSaIS3_EEEEneERKS8_>
 8a9dd96:	84 c0                	test   %al,%al
 8a9dd98:	0f 85 78 ff ff ff    	jne    8a9dd16 <_ZN13StrikerScript7destoryEv+0x58>
 8a9dd9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dda1:	83 c0 78             	add    $0x78,%eax
 8a9dda4:	89 04 24             	mov    %eax,(%esp)
 8a9dda7:	e8 f6 13 00 00       	call   8a9f1a2 <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEE5clearEv>
 8a9ddac:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8a9ddaf:	c9                   	leave
 8a9ddb0:	c3                   	ret
 8a9ddb1:	90                   	nop

```

```c
// StrikerScript::destory @ 0x8a9dcbe

/* StrikerScript::destory() */

void __thiscall StrikerScript::destory(StrikerScript *this)

{
  STScriptFileList *this_00;
  vector<StrikerSkill,std::allocator<StrikerSkill>> *this_01;
  char cVar1;
  int iVar2;
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  local_14 [4];
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  local_10 [8];
  
  if ((*(int *)(this + 0x90) != 0) &&
     (this_00 = *(STScriptFileList **)(this + 0x90), this_00 != (STScriptFileList *)0x0)) {
    STScriptFileList::~STScriptFileList(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 0x90) = 0;
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                          *)local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                          *)local_14);
    if (*(int *)(iVar2 + 4) != 0) {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                            *)local_14);
      this_01 = *(vector<StrikerSkill,std::allocator<StrikerSkill>> **)(iVar2 + 4);
      if (this_01 != (vector<StrikerSkill,std::allocator<StrikerSkill>> *)0x0) {
        std::vector<StrikerSkill,std::allocator<StrikerSkill>>::~vector(this_01);
        operator_delete(this_01);
      }
    }
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                          *)local_14);
    *(undefined4 *)(iVar2 + 4) = 0;
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                  *)local_14);
  }
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::clear((map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
           *)(this + 0x78));
  return;
}

```

---

## getAddCommand

```asm
// === 08a9eb3a StrikerScript::getAddCommand  [0x08a9eb3a-0x8a9ebed] ===
 8a9eb3a:	55                   	push   %ebp
 8a9eb3b:	89 e5                	mov    %esp,%ebp
 8a9eb3d:	53                   	push   %ebx
 8a9eb3e:	83 ec 34             	sub    $0x34,%esp
 8a9eb41:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a9eb44:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8a9eb48:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a9eb4f:	eb 73                	jmp    8a9ebc4 <_ZN13StrikerScript13getAddCommandEsi+0x8a>
 8a9eb51:	0f bf 5d e4          	movswl -0x1c(%ebp),%ebx
 8a9eb55:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9eb58:	8d 90 94 00 00 00    	lea    0x94(%eax),%edx
 8a9eb5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a9eb61:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9eb65:	89 14 24             	mov    %edx,(%esp)
 8a9eb68:	e8 05 0c 00 00       	call   8a9f772 <_ZNSt6vectorI22StrikerSkillAddCommandSaIS0_EEixEj>
 8a9eb6d:	8b 00                	mov    (%eax),%eax
 8a9eb6f:	39 c3                	cmp    %eax,%ebx
 8a9eb71:	75 27                	jne    8a9eb9a <_ZN13StrikerScript13getAddCommandEsi+0x60>
 8a9eb73:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9eb76:	8d 90 94 00 00 00    	lea    0x94(%eax),%edx
 8a9eb7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a9eb7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9eb83:	89 14 24             	mov    %edx,(%esp)
 8a9eb86:	e8 e7 0b 00 00       	call   8a9f772 <_ZNSt6vectorI22StrikerSkillAddCommandSaIS0_EEixEj>
 8a9eb8b:	8b 40 04             	mov    0x4(%eax),%eax
 8a9eb8e:	3b 45 10             	cmp    0x10(%ebp),%eax
 8a9eb91:	75 07                	jne    8a9eb9a <_ZN13StrikerScript13getAddCommandEsi+0x60>
 8a9eb93:	b8 01 00 00 00       	mov    $0x1,%eax
 8a9eb98:	eb 05                	jmp    8a9eb9f <_ZN13StrikerScript13getAddCommandEsi+0x65>
 8a9eb9a:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9eb9f:	84 c0                	test   %al,%al
 8a9eba1:	74 1d                	je     8a9ebc0 <_ZN13StrikerScript13getAddCommandEsi+0x86>
 8a9eba3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9eba6:	8d 90 94 00 00 00    	lea    0x94(%eax),%edx
 8a9ebac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a9ebaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9ebb3:	89 14 24             	mov    %edx,(%esp)
 8a9ebb6:	e8 b7 0b 00 00       	call   8a9f772 <_ZNSt6vectorI22StrikerSkillAddCommandSaIS0_EEixEj>
 8a9ebbb:	8b 40 08             	mov    0x8(%eax),%eax
 8a9ebbe:	eb 27                	jmp    8a9ebe7 <_ZN13StrikerScript13getAddCommandEsi+0xad>
 8a9ebc0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a9ebc4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9ebc7:	05 94 00 00 00       	add    $0x94,%eax
 8a9ebcc:	89 04 24             	mov    %eax,(%esp)
 8a9ebcf:	e8 7c 0b 00 00       	call   8a9f750 <_ZNKSt6vectorI22StrikerSkillAddCommandSaIS0_EE4sizeEv>
 8a9ebd4:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8a9ebd7:	0f 97 c0             	seta   %al
 8a9ebda:	84 c0                	test   %al,%al
 8a9ebdc:	0f 85 6f ff ff ff    	jne    8a9eb51 <_ZN13StrikerScript13getAddCommandEsi+0x17>
 8a9ebe2:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9ebe7:	83 c4 34             	add    $0x34,%esp
 8a9ebea:	5b                   	pop    %ebx
 8a9ebeb:	5d                   	pop    %ebp
 8a9ebec:	c3                   	ret
 8a9ebed:	90                   	nop

```

```c
// StrikerScript::getAddCommand @ 0x8a9eb3a

/* StrikerScript::getAddCommand(short, int) */

undefined4 __thiscall StrikerScript::getAddCommand(StrikerScript *this,short param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar4 = std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::size
                      ((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>> *)
                       (this + 0x94));
    if (uVar4 <= local_10) {
      return 0;
    }
    piVar2 = (int *)std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::
                    operator[]((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>
                                *)(this + 0x94),local_10);
    if (((int)param_1 == *piVar2) &&
       (iVar3 = std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::
                operator[]((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>> *)
                           (this + 0x94),local_10), *(int *)(iVar3 + 4) == param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    local_10 = local_10 + 1;
  }
  iVar3 = std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::operator[]
                    ((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>> *)
                     (this + 0x94),local_10);
  return *(undefined4 *)(iVar3 + 8);
}

```

---

## getComboIndex

```asm
// === 08a9e97a StrikerScript::getComboIndex  [0x08a9e97a-0x8a9ea95] ===
 8a9e97a:	55                   	push   %ebp
 8a9e97b:	89 e5                	mov    %esp,%ebp
 8a9e97d:	83 ec 48             	sub    $0x48,%esp
 8a9e980:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a9e983:	8b 45 10             	mov    0x10(%ebp),%eax
 8a9e986:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 8a9e98a:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 8a9e98e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a9e995:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a9e99c:	e9 de 00 00 00       	jmp    8a9ea7f <_ZN13StrikerScript13getComboIndexEssi+0x105>
 8a9e9a1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8a9e9a5:	75 20                	jne    8a9e9c7 <_ZN13StrikerScript13getComboIndexEssi+0x4d>
 8a9e9a7:	0f bf 55 d0          	movswl -0x30(%ebp),%edx
 8a9e9ab:	0f bf 45 d4          	movswl -0x2c(%ebp),%eax
 8a9e9af:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a9e9b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e9b7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e9ba:	89 04 24             	mov    %eax,(%esp)
 8a9e9bd:	e8 1e fe ff ff       	call   8a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>
 8a9e9c2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a9e9c5:	eb 1e                	jmp    8a9e9e5 <_ZN13StrikerScript13getComboIndexEssi+0x6b>
 8a9e9c7:	0f bf 45 d4          	movswl -0x2c(%ebp),%eax
 8a9e9cb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a9e9d2:	00 
 8a9e9d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e9d7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e9da:	89 04 24             	mov    %eax,(%esp)
 8a9e9dd:	e8 fe fd ff ff       	call   8a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>
 8a9e9e2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a9e9e5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8a9e9e9:	75 0a                	jne    8a9e9f5 <_ZN13StrikerScript13getComboIndexEssi+0x7b>
 8a9e9eb:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9e9f0:	e9 9e 00 00 00       	jmp    8a9ea93 <_ZN13StrikerScript13getComboIndexEssi+0x119>
 8a9e9f5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a9e9f8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8a9e9fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9e9ff:	89 04 24             	mov    %eax,(%esp)
 8a9ea02:	e8 67 0c 00 00       	call   8a9f66e <_ZNSt6vectorI12StrikerSkillSaIS0_EE5beginEv>
 8a9ea07:	83 ec 04             	sub    $0x4,%esp
 8a9ea0a:	eb 44                	jmp    8a9ea50 <_ZN13StrikerScript13getComboIndexEssi+0xd6>
 8a9ea0c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a9ea0f:	89 04 24             	mov    %eax,(%esp)
 8a9ea12:	e8 cd 0c 00 00       	call   8a9f6e4 <_ZNK9__gnu_cxx17__normal_iteratorIP12StrikerSkillSt6vectorIS1_SaIS1_EEEptEv>
 8a9ea17:	8b 00                	mov    (%eax),%eax
 8a9ea19:	3b 45 14             	cmp    0x14(%ebp),%eax
 8a9ea1c:	0f 94 c0             	sete   %al
 8a9ea1f:	84 c0                	test   %al,%al
 8a9ea21:	74 10                	je     8a9ea33 <_ZN13StrikerScript13getComboIndexEssi+0xb9>
 8a9ea23:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a9ea26:	89 04 24             	mov    %eax,(%esp)
 8a9ea29:	e8 b6 0c 00 00       	call   8a9f6e4 <_ZNK9__gnu_cxx17__normal_iteratorIP12StrikerSkillSt6vectorIS1_SaIS1_EEEptEv>
 8a9ea2e:	8b 40 04             	mov    0x4(%eax),%eax
 8a9ea31:	eb 60                	jmp    8a9ea93 <_ZN13StrikerScript13getComboIndexEssi+0x119>
 8a9ea33:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a9ea36:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a9ea3d:	00 
 8a9ea3e:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8a9ea41:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9ea45:	89 04 24             	mov    %eax,(%esp)
 8a9ea48:	e8 a1 0c 00 00       	call   8a9f6ee <_ZN9__gnu_cxx17__normal_iteratorIP12StrikerSkillSt6vectorIS1_SaIS1_EEEppEi>
 8a9ea4d:	83 ec 04             	sub    $0x4,%esp
 8a9ea50:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a9ea53:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8a9ea56:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9ea5a:	89 04 24             	mov    %eax,(%esp)
 8a9ea5d:	e8 30 0c 00 00       	call   8a9f692 <_ZNSt6vectorI12StrikerSkillSaIS0_EE3endEv>
 8a9ea62:	83 ec 04             	sub    $0x4,%esp
 8a9ea65:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a9ea68:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9ea6c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a9ea6f:	89 04 24             	mov    %eax,(%esp)
 8a9ea72:	e8 41 0c 00 00       	call   8a9f6b8 <_ZN9__gnu_cxxneIP12StrikerSkillSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8a9ea77:	84 c0                	test   %al,%al
 8a9ea79:	75 91                	jne    8a9ea0c <_ZN13StrikerScript13getComboIndexEssi+0x92>
 8a9ea7b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a9ea7f:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8a9ea83:	0f 9e c0             	setle  %al
 8a9ea86:	84 c0                	test   %al,%al
 8a9ea88:	0f 85 13 ff ff ff    	jne    8a9e9a1 <_ZN13StrikerScript13getComboIndexEssi+0x27>
 8a9ea8e:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9ea93:	c9                   	leave
 8a9ea94:	c3                   	ret
 8a9ea95:	90                   	nop

```

```c
// StrikerScript::getComboIndex @ 0x8a9e97a

/* StrikerScript::getComboIndex(short, short, int) */

undefined4 __thiscall
StrikerScript::getComboIndex(StrikerScript *this,short param_1,short param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    if (1 < local_10) {
      return 0;
    }
    if (local_10 == 0) {
      local_14 = getStrikerSkillVector(this,param_1,param_2);
    }
    else {
      local_14 = getStrikerSkillVector(this,param_1,0);
    }
    if (local_14 == 0) break;
    std::vector<StrikerSkill,std::allocator<StrikerSkill>>::begin();
    while( true ) {
      std::vector<StrikerSkill,std::allocator<StrikerSkill>>::end();
      bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar1) break;
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
                      ::operator->(local_20);
      if (*piVar2 == param_3) {
        iVar3 = __gnu_cxx::
                __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
                ::operator->(local_20);
        return *(undefined4 *)(iVar3 + 4);
      }
      __gnu_cxx::
      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>::
      operator++(local_18,(int)local_20);
    }
    local_10 = local_10 + 1;
  }
  return 0;
}

```

---

## getInsance

```asm
// === 08a9d836 StrikerScript::getInsance  [0x08a9d836-0x8a9d88d] ===
 8a9d836:	55                   	push   %ebp
 8a9d837:	89 e5                	mov    %esp,%ebp
 8a9d839:	57                   	push   %edi
 8a9d83a:	56                   	push   %esi
 8a9d83b:	53                   	push   %ebx
 8a9d83c:	83 ec 1c             	sub    $0x1c,%esp
 8a9d83f:	a1 78 09 50 09       	mov    0x9500978,%eax
 8a9d844:	85 c0                	test   %eax,%eax
 8a9d846:	75 39                	jne    8a9d881 <_ZN13StrikerScript10getInsanceEv+0x4b>
 8a9d848:	c7 04 24 b4 00 00 00 	movl   $0xb4,(%esp)
 8a9d84f:	e8 fc 6b c8 ff       	call   8724450 <_Znwj>
 8a9d854:	89 c3                	mov    %eax,%ebx
 8a9d856:	89 d8                	mov    %ebx,%eax
 8a9d858:	89 04 24             	mov    %eax,(%esp)
 8a9d85b:	e8 2e 00 00 00       	call   8a9d88e <_ZN13StrikerScriptC1Ev>
 8a9d860:	eb 18                	jmp    8a9d87a <_ZN13StrikerScript10getInsanceEv+0x44>
 8a9d862:	89 d6                	mov    %edx,%esi
 8a9d864:	89 c7                	mov    %eax,%edi
 8a9d866:	89 1c 24             	mov    %ebx,(%esp)
 8a9d869:	e8 82 6c c8 ff       	call   87244f0 <_ZdlPv>
 8a9d86e:	89 f8                	mov    %edi,%eax
 8a9d870:	89 f2                	mov    %esi,%edx
 8a9d872:	89 04 24             	mov    %eax,(%esp)
 8a9d875:	e8 d6 5e 04 00       	call   8ae3750 <_Unwind_Resume>
 8a9d87a:	89 d8                	mov    %ebx,%eax
 8a9d87c:	a3 78 09 50 09       	mov    %eax,0x9500978
 8a9d881:	a1 78 09 50 09       	mov    0x9500978,%eax
 8a9d886:	83 c4 1c             	add    $0x1c,%esp
 8a9d889:	5b                   	pop    %ebx
 8a9d88a:	5e                   	pop    %esi
 8a9d88b:	5f                   	pop    %edi
 8a9d88c:	5d                   	pop    %ebp
 8a9d88d:	c3                   	ret

```

```c
// StrikerScript::getInsance @ 0x8a9d836

/* StrikerScript::getInsance() */

StrikerScript * StrikerScript::getInsance(void)

{
  StrikerScript *this;
  
  if (instance_ == (StrikerScript *)0x0) {
    this = operator_new(0xb4);
                    /* try { // try from 08a9d85b to 08a9d85f has its CatchHandler @ 08a9d862 */
    StrikerScript(this);
    instance_ = this;
  }
  return instance_;
}

```

---

## getPrecedeSkillIndex

```asm
// === 08a9ea96 StrikerScript::getPrecedeSkillIndex  [0x08a9ea96-0x8a9eb39] ===
 8a9ea96:	55                   	push   %ebp
 8a9ea97:	89 e5                	mov    %esp,%ebp
 8a9ea99:	83 ec 38             	sub    $0x38,%esp
 8a9ea9c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a9ea9f:	8b 45 10             	mov    0x10(%ebp),%eax
 8a9eaa2:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 8a9eaa6:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 8a9eaaa:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a9eab1:	0f bf 55 e0          	movswl -0x20(%ebp),%edx
 8a9eab5:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 8a9eab9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a9eabd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9eac1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9eac4:	89 04 24             	mov    %eax,(%esp)
 8a9eac7:	e8 14 fd ff ff       	call   8a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>
 8a9eacc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a9eacf:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8a9ead3:	75 07                	jne    8a9eadc <_ZN13StrikerScript20getPrecedeSkillIndexEssi+0x46>
 8a9ead5:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9eada:	eb 5c                	jmp    8a9eb38 <_ZN13StrikerScript20getPrecedeSkillIndexEssi+0xa2>
 8a9eadc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a9eae3:	eb 39                	jmp    8a9eb1e <_ZN13StrikerScript20getPrecedeSkillIndexEssi+0x88>
 8a9eae5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a9eae8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9eaec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a9eaef:	89 04 24             	mov    %eax,(%esp)
 8a9eaf2:	e8 47 0c 00 00       	call   8a9f73e <_ZNSt6vectorI12StrikerSkillSaIS0_EEixEj>
 8a9eaf7:	8b 00                	mov    (%eax),%eax
 8a9eaf9:	3b 45 14             	cmp    0x14(%ebp),%eax
 8a9eafc:	0f 94 c0             	sete   %al
 8a9eaff:	84 c0                	test   %al,%al
 8a9eb01:	74 17                	je     8a9eb1a <_ZN13StrikerScript20getPrecedeSkillIndexEssi+0x84>
 8a9eb03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a9eb06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9eb0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a9eb0d:	89 04 24             	mov    %eax,(%esp)
 8a9eb10:	e8 29 0c 00 00       	call   8a9f73e <_ZNSt6vectorI12StrikerSkillSaIS0_EEixEj>
 8a9eb15:	8b 40 08             	mov    0x8(%eax),%eax
 8a9eb18:	eb 1e                	jmp    8a9eb38 <_ZN13StrikerScript20getPrecedeSkillIndexEssi+0xa2>
 8a9eb1a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a9eb1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a9eb21:	89 04 24             	mov    %eax,(%esp)
 8a9eb24:	e8 f9 0b 00 00       	call   8a9f722 <_ZNKSt6vectorI12StrikerSkillSaIS0_EE4sizeEv>
 8a9eb29:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8a9eb2c:	0f 97 c0             	seta   %al
 8a9eb2f:	84 c0                	test   %al,%al
 8a9eb31:	75 b2                	jne    8a9eae5 <_ZN13StrikerScript20getPrecedeSkillIndexEssi+0x4f>
 8a9eb33:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9eb38:	c9                   	leave
 8a9eb39:	c3                   	ret

```

```c
// StrikerScript::getPrecedeSkillIndex @ 0x8a9ea96

/* StrikerScript::getPrecedeSkillIndex(short, short, int) */

undefined4 __thiscall
StrikerScript::getPrecedeSkillIndex(StrikerScript *this,short param_1,short param_2,int param_3)

{
  vector<StrikerSkill,std::allocator<StrikerSkill>> *this_00;
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  this_00 = (vector<StrikerSkill,std::allocator<StrikerSkill>> *)
            getStrikerSkillVector(this,param_1,param_2);
  if (this_00 != (vector<StrikerSkill,std::allocator<StrikerSkill>> *)0x0) {
    for (local_10 = 0; uVar3 = std::vector<StrikerSkill,std::allocator<StrikerSkill>>::size(this_00)
        , local_10 < uVar3; local_10 = local_10 + 1) {
      piVar1 = (int *)std::vector<StrikerSkill,std::allocator<StrikerSkill>>::operator[]
                                (this_00,local_10);
      if (*piVar1 == param_3) {
        iVar2 = std::vector<StrikerSkill,std::allocator<StrikerSkill>>::operator[](this_00,local_10)
        ;
        return *(undefined4 *)(iVar2 + 8);
      }
    }
  }
  return 0;
}

```

---

## getStrikerSkillVector

```asm
// === 08a9e7e0 StrikerScript::getStrikerSkillVector  [0x08a9e7e0-0x8a9e867] ===
 8a9e7e0:	55                   	push   %ebp
 8a9e7e1:	89 e5                	mov    %esp,%ebp
 8a9e7e3:	83 ec 38             	sub    $0x38,%esp
 8a9e7e6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a9e7e9:	8b 45 10             	mov    0x10(%ebp),%eax
 8a9e7ec:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 8a9e7f0:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 8a9e7f4:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 8a9e7f8:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 8a9e7fc:	0f b7 45 e0          	movzwl -0x20(%ebp),%eax
 8a9e800:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 8a9e804:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e807:	8d 48 78             	lea    0x78(%eax),%ecx
 8a9e80a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a9e80d:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8a9e810:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a9e814:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a9e818:	89 04 24             	mov    %eax,(%esp)
 8a9e81b:	e8 c0 09 00 00       	call   8a9f1e0 <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 8a9e820:	83 ec 04             	sub    $0x4,%esp
 8a9e823:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e826:	8d 50 78             	lea    0x78(%eax),%edx
 8a9e829:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a9e82c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9e830:	89 04 24             	mov    %eax,(%esp)
 8a9e833:	e8 a6 08 00 00       	call   8a9f0de <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 8a9e838:	83 ec 04             	sub    $0x4,%esp
 8a9e83b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a9e83e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e842:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a9e845:	89 04 24             	mov    %eax,(%esp)
 8a9e848:	e8 b7 08 00 00       	call   8a9f104 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorI12StrikerSkillSaIS3_EEEEneERKS8_>
 8a9e84d:	84 c0                	test   %al,%al
 8a9e84f:	74 10                	je     8a9e861 <_ZN13StrikerScript21getStrikerSkillVectorEss+0x81>
 8a9e851:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a9e854:	89 04 24             	mov    %eax,(%esp)
 8a9e857:	e8 da 08 00 00       	call   8a9f136 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorI12StrikerSkillSaIS3_EEEEptEv>
 8a9e85c:	8b 40 04             	mov    0x4(%eax),%eax
 8a9e85f:	eb 05                	jmp    8a9e866 <_ZN13StrikerScript21getStrikerSkillVectorEss+0x86>
 8a9e861:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9e866:	c9                   	leave
 8a9e867:	c3                   	ret

```

```c
// StrikerScript::getStrikerSkillVector @ 0x8a9e7e0

/* StrikerScript::getStrikerSkillVector(short, short) */

undefined4 __thiscall
StrikerScript::getStrikerSkillVector(StrikerScript *this,short param_1,short param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
  local_18 [4];
  short local_14;
  short local_12;
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  local_10 [12];
  
  local_14 = param_1;
  local_12 = param_2;
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::find((int *)local_18);
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
          ::operator!=(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
            ::operator->(local_18);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## importComboList

```asm
// === 08a9e79c StrikerScript::importComboList  [0x08a9e79c-0x8a9e7df] ===
 8a9e79c:	55                   	push   %ebp
 8a9e79d:	89 e5                	mov    %esp,%ebp
 8a9e79f:	83 ec 18             	sub    $0x18,%esp
 8a9e7a2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e7a5:	8b 80 90 00 00 00    	mov    0x90(%eax),%eax
 8a9e7ab:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8a9e7b2:	00 
 8a9e7b3:	c7 44 24 08 40 a3 e2 	movl   $0x8e2a340,0x8(%esp)
 8a9e7ba:	08 
 8a9e7bb:	c7 44 24 04 a0 a1 e2 	movl   $0x8e2a1a0,0x4(%esp)
 8a9e7c2:	08 
 8a9e7c3:	89 04 24             	mov    %eax,(%esp)
 8a9e7c6:	e8 ac d5 e1 ff       	call   88bbd77 <_Z22loadRDARScriptListFileP16STScriptFileListPKcS2_PSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 8a9e7cb:	83 f0 01             	xor    $0x1,%eax
 8a9e7ce:	84 c0                	test   %al,%al
 8a9e7d0:	74 07                	je     8a9e7d9 <_ZN13StrikerScript15importComboListEv+0x3d>
 8a9e7d2:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9e7d7:	eb 05                	jmp    8a9e7de <_ZN13StrikerScript15importComboListEv+0x42>
 8a9e7d9:	b8 01 00 00 00       	mov    $0x1,%eax
 8a9e7de:	c9                   	leave
 8a9e7df:	c3                   	ret

```

```c
// StrikerScript::importComboList @ 0x8a9e79c

/* StrikerScript::importComboList() */

bool __thiscall StrikerScript::importComboList(StrikerScript *this)

{
  char cVar1;
  
  cVar1 = loadRDARScriptListFile
                    (*(STScriptFileList **)(this + 0x90),"","etc/LinkSystem/strikercombo.lst",
                     (map *)0x0);
  return cVar1 == '\x01';
}

```

---

## importParentLevelPenlaty

```asm
// === 08a9e654 StrikerScript::importParentLevelPenlaty  [0x08a9e654-0x8a9e6cb] ===
 8a9e654:	55                   	push   %ebp
 8a9e655:	89 e5                	mov    %esp,%ebp
 8a9e657:	83 ec 38             	sub    $0x38,%esp
 8a9e65a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e65d:	83 c0 6c             	add    $0x6c,%eax
 8a9e660:	89 04 24             	mov    %eax,(%esp)
 8a9e663:	e8 02 0f 00 00       	call   8a9f56a <_ZNSt6vectorI18ParentLevelPenaltySaIS0_EE5clearEv>
 8a9e668:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8a9e66c:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8a9e66f:	89 04 24             	mov    %eax,(%esp)
 8a9e672:	e8 04 dd e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e677:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8a9e67a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8a9e67e:	83 f0 01             	xor    $0x1,%eax
 8a9e681:	84 c0                	test   %al,%al
 8a9e683:	75 44                	jne    8a9e6c9 <_ZN13StrikerScript24importParentLevelPenlatyEv+0x75>
 8a9e685:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e68c:	e8 ea dc e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e691:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8a9e694:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e69b:	e8 45 de e1 ff       	call   88bc4e5 <_Z9ScanFloatPb>
 8a9e6a0:	d9 5d ec             	fstps  -0x14(%ebp)
 8a9e6a3:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e6aa:	e8 36 de e1 ff       	call   88bc4e5 <_Z9ScanFloatPb>
 8a9e6af:	d9 5d f0             	fstps  -0x10(%ebp)
 8a9e6b2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e6b5:	8d 50 6c             	lea    0x6c(%eax),%edx
 8a9e6b8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a9e6bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e6bf:	89 14 24             	mov    %edx,(%esp)
 8a9e6c2:	e8 bf 0e 00 00       	call   8a9f586 <_ZNSt6vectorI18ParentLevelPenaltySaIS0_EE9push_backERKS0_>
 8a9e6c7:	eb a3                	jmp    8a9e66c <_ZN13StrikerScript24importParentLevelPenlatyEv+0x18>
 8a9e6c9:	90                   	nop
 8a9e6ca:	c9                   	leave
 8a9e6cb:	c3                   	ret

```

```c
// StrikerScript::importParentLevelPenlaty @ 0x8a9e654

/* StrikerScript::importParentLevelPenlaty() */

void __thiscall StrikerScript::importParentLevelPenlaty(StrikerScript *this)

{
  longdouble lVar1;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  bool local_d [9];
  
  std::vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>>::clear
            ((vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>> *)(this + 0x6c));
  local_d[0] = true;
  while( true ) {
    local_20 = ScanInt(local_d);
    if (local_d[0] != true) break;
    local_1c = ScanInt((bool *)0x0);
    lVar1 = (longdouble)ScanFloat((bool *)0x0);
    local_18 = (float)lVar1;
    lVar1 = (longdouble)ScanFloat((bool *)0x0);
    local_14 = (float)lVar1;
    std::vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>>::push_back
              ((vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>> *)(this + 0x6c),
               (ParentLevelPenalty *)&local_20);
  }
  return;
}

```

---

## importScript

```asm
// === 08a9ddb2 StrikerScript::importScript  [0x08a9ddb2-0x8a9e4d5] ===
 8a9ddb2:	55                   	push   %ebp
 8a9ddb3:	89 e5                	mov    %esp,%ebp
 8a9ddb5:	57                   	push   %edi
 8a9ddb6:	56                   	push   %esi
 8a9ddb7:	53                   	push   %ebx
 8a9ddb8:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 8a9ddbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a9ddc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9ddc5:	c7 04 24 a0 a1 e2 08 	movl   $0x8e2a1a0,(%esp)
 8a9ddcc:	e8 58 df e1 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8a9ddd1:	83 f0 01             	xor    $0x1,%eax
 8a9ddd4:	84 c0                	test   %al,%al
 8a9ddd6:	74 0a                	je     8a9dde2 <_ZN13StrikerScript12importScriptEPKc+0x30>
 8a9ddd8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a9dddd:	e9 e6 06 00 00       	jmp    8a9e4c8 <_ZN13StrikerScript12importScriptEPKc+0x716>
 8a9dde2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9dde5:	89 04 24             	mov    %eax,(%esp)
 8a9dde8:	e8 e3 87 c6 ff       	call   87065d0 <_ZNSsC1Ev>
 8a9dded:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a9ddf0:	89 04 24             	mov    %eax,(%esp)
 8a9ddf3:	e8 d8 87 c6 ff       	call   87065d0 <_ZNSsC1Ev>
 8a9ddf8:	c6 45 bf 00          	movb   $0x0,-0x41(%ebp)
 8a9ddfc:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8a9de03:	eb 04                	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9de05:	90                   	nop
 8a9de06:	eb 01                	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9de08:	90                   	nop
 8a9de09:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8a9de10:	00 
 8a9de11:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9de14:	89 04 24             	mov    %eax,(%esp)
 8a9de17:	e8 43 ea e1 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8a9de1c:	83 f0 01             	xor    $0x1,%eax
 8a9de1f:	84 c0                	test   %al,%al
 8a9de21:	0f 85 49 06 00 00    	jne    8a9e470 <_ZN13StrikerScript12importScriptEPKc+0x6be>
 8a9de27:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9de2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9de2e:	c7 04 24 a1 a1 e2 08 	movl   $0x8e2a1a1,(%esp)
 8a9de35:	e8 a6 9c 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9de3a:	84 c0                	test   %al,%al
 8a9de3c:	74 10                	je     8a9de4e <_ZN13StrikerScript12importScriptEPKc+0x9c>
 8a9de3e:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8a9de41:	89 04 24             	mov    %eax,(%esp)
 8a9de44:	e8 32 e5 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9de49:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8a9de4c:	eb bb                	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9de4e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9de51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9de55:	c7 04 24 ac a1 e2 08 	movl   $0x8e2a1ac,(%esp)
 8a9de5c:	e8 7f 9c 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9de61:	84 c0                	test   %al,%al
 8a9de63:	74 18                	je     8a9de7d <_ZN13StrikerScript12importScriptEPKc+0xcb>
 8a9de65:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8a9de68:	89 04 24             	mov    %eax,(%esp)
 8a9de6b:	e8 0b e5 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9de70:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8a9de73:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8a9de76:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9de79:	89 10                	mov    %edx,(%eax)
 8a9de7b:	eb 8c                	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9de7d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9de80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9de84:	c7 04 24 bc a1 e2 08 	movl   $0x8e2a1bc,(%esp)
 8a9de8b:	e8 50 9c 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9de90:	84 c0                	test   %al,%al
 8a9de92:	74 16                	je     8a9deaa <_ZN13StrikerScript12importScriptEPKc+0xf8>
 8a9de94:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8a9de97:	89 04 24             	mov    %eax,(%esp)
 8a9de9a:	e8 dc e4 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9de9f:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9dea2:	89 42 04             	mov    %eax,0x4(%edx)
 8a9dea5:	e9 5f ff ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9deaa:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9dead:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9deb1:	c7 04 24 d4 a1 e2 08 	movl   $0x8e2a1d4,(%esp)
 8a9deb8:	e8 23 9c 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9debd:	84 c0                	test   %al,%al
 8a9debf:	74 16                	je     8a9ded7 <_ZN13StrikerScript12importScriptEPKc+0x125>
 8a9dec1:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8a9dec4:	89 04 24             	mov    %eax,(%esp)
 8a9dec7:	e8 af e4 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9decc:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9decf:	89 42 08             	mov    %eax,0x8(%edx)
 8a9ded2:	e9 32 ff ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9ded7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9deda:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9dede:	c7 04 24 e4 a1 e2 08 	movl   $0x8e2a1e4,(%esp)
 8a9dee5:	e8 f6 9b 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9deea:	84 c0                	test   %al,%al
 8a9deec:	74 1c                	je     8a9df0a <_ZN13StrikerScript12importScriptEPKc+0x158>
 8a9deee:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8a9def1:	89 04 24             	mov    %eax,(%esp)
 8a9def4:	e8 82 e4 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9def9:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8a9defc:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8a9deff:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9df02:	89 50 0c             	mov    %edx,0xc(%eax)
 8a9df05:	e9 ff fe ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9df0a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9df0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9df11:	c7 04 24 f9 a1 e2 08 	movl   $0x8e2a1f9,(%esp)
 8a9df18:	e8 c3 9b 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9df1d:	84 c0                	test   %al,%al
 8a9df1f:	74 10                	je     8a9df31 <_ZN13StrikerScript12importScriptEPKc+0x17f>
 8a9df21:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9df24:	89 04 24             	mov    %eax,(%esp)
 8a9df27:	e8 aa 05 00 00       	call   8a9e4d6 <_ZN13StrikerScript23importSkillDataUpVectorEv>
 8a9df2c:	e9 d8 fe ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9df31:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9df34:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9df38:	c7 04 24 14 a2 e2 08 	movl   $0x8e2a214,(%esp)
 8a9df3f:	e8 9c 9b 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9df44:	84 c0                	test   %al,%al
 8a9df46:	74 10                	je     8a9df58 <_ZN13StrikerScript12importScriptEPKc+0x1a6>
 8a9df48:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9df4b:	89 04 24             	mov    %eax,(%esp)
 8a9df4e:	e8 7d 06 00 00       	call   8a9e5d0 <_ZN13StrikerScript24importSkillAttackPenaltyEv>
 8a9df53:	e9 b1 fe ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9df58:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9df5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9df5f:	c7 04 24 34 a2 e2 08 	movl   $0x8e2a234,(%esp)
 8a9df66:	e8 75 9b 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9df6b:	84 c0                	test   %al,%al
 8a9df6d:	74 10                	je     8a9df7f <_ZN13StrikerScript12importScriptEPKc+0x1cd>
 8a9df6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9df72:	89 04 24             	mov    %eax,(%esp)
 8a9df75:	e8 82 06 00 00       	call   8a9e5fc <_ZN13StrikerScript26importSkillCoolTimePenaltyEv>
 8a9df7a:	e9 8a fe ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9df7f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9df82:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9df86:	c7 04 24 55 a2 e2 08 	movl   $0x8e2a255,(%esp)
 8a9df8d:	e8 4e 9b 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9df92:	84 c0                	test   %al,%al
 8a9df94:	74 10                	je     8a9dfa6 <_ZN13StrikerScript12importScriptEPKc+0x1f4>
 8a9df96:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9df99:	89 04 24             	mov    %eax,(%esp)
 8a9df9c:	e8 b3 06 00 00       	call   8a9e654 <_ZN13StrikerScript24importParentLevelPenlatyEv>
 8a9dfa1:	e9 63 fe ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9dfa6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9dfa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9dfad:	c7 04 24 6d a2 e2 08 	movl   $0x8e2a26d,(%esp)
 8a9dfb4:	e8 27 9b 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9dfb9:	84 c0                	test   %al,%al
 8a9dfbb:	74 53                	je     8a9e010 <_ZN13StrikerScript12importScriptEPKc+0x25e>
 8a9dfbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dfc0:	83 c0 14             	add    $0x14,%eax
 8a9dfc3:	89 04 24             	mov    %eax,(%esp)
 8a9dfc6:	e8 d1 10 00 00       	call   8a9f09c <_ZNSt6vectorIN12ContentsType1TESaIS1_EE5clearEv>
 8a9dfcb:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a9dfce:	89 04 24             	mov    %eax,(%esp)
 8a9dfd1:	e8 cc e7 e1 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a9dfd6:	83 f0 01             	xor    $0x1,%eax
 8a9dfd9:	84 c0                	test   %al,%al
 8a9dfdb:	74 06                	je     8a9dfe3 <_ZN13StrikerScript12importScriptEPKc+0x231>
 8a9dfdd:	90                   	nop
 8a9dfde:	e9 26 fe ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9dfe3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a9dfe6:	89 04 24             	mov    %eax,(%esp)
 8a9dfe9:	e8 02 85 c6 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8a9dfee:	89 04 24             	mov    %eax,(%esp)
 8a9dff1:	e8 ae 54 02 00       	call   8ac34a4 <_ZN12ContentsType7getTypeEPKc>
 8a9dff6:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8a9dff9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dffc:	8d 50 14             	lea    0x14(%eax),%edx
 8a9dfff:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a9e002:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e006:	89 14 24             	mov    %edx,(%esp)
 8a9e009:	e8 a8 11 00 00       	call   8a9f1b6 <_ZNSt6vectorIN12ContentsType1TESaIS1_EE9push_backEOS1_>
 8a9e00e:	eb bb                	jmp    8a9dfcb <_ZN13StrikerScript12importScriptEPKc+0x219>
 8a9e010:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e013:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e017:	c7 04 24 89 a2 e2 08 	movl   $0x8e2a289,(%esp)
 8a9e01e:	e8 bd 9a 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9e023:	84 c0                	test   %al,%al
 8a9e025:	74 3d                	je     8a9e064 <_ZN13StrikerScript12importScriptEPKc+0x2b2>
 8a9e027:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e02a:	83 c0 20             	add    $0x20,%eax
 8a9e02d:	89 04 24             	mov    %eax,(%esp)
 8a9e030:	e8 39 8b 5f ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a9e035:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8a9e038:	89 04 24             	mov    %eax,(%esp)
 8a9e03b:	e8 e4 e3 e1 ff       	call   88bc424 <_Z7ScanIntPi>
 8a9e040:	83 f0 01             	xor    $0x1,%eax
 8a9e043:	84 c0                	test   %al,%al
 8a9e045:	74 06                	je     8a9e04d <_ZN13StrikerScript12importScriptEPKc+0x29b>
 8a9e047:	90                   	nop
 8a9e048:	e9 bc fd ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9e04d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e050:	8d 50 20             	lea    0x20(%eax),%edx
 8a9e053:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8a9e056:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e05a:	89 14 24             	mov    %edx,(%esp)
 8a9e05d:	e8 c4 30 67 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8a9e062:	eb d1                	jmp    8a9e035 <_ZN13StrikerScript12importScriptEPKc+0x283>
 8a9e064:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e067:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e06b:	c7 04 24 a6 a2 e2 08 	movl   $0x8e2a2a6,(%esp)
 8a9e072:	e8 69 9a 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9e077:	84 c0                	test   %al,%al
 8a9e079:	74 17                	je     8a9e092 <_ZN13StrikerScript12importScriptEPKc+0x2e0>
 8a9e07b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e082:	e8 f4 e2 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e087:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9e08a:	89 42 10             	mov    %eax,0x10(%edx)
 8a9e08d:	e9 77 fd ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9e092:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e095:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e099:	c7 04 24 b9 a2 e2 08 	movl   $0x8e2a2b9,(%esp)
 8a9e0a0:	e8 3b 9a 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9e0a5:	84 c0                	test   %al,%al
 8a9e0a7:	74 3e                	je     8a9e0e7 <_ZN13StrikerScript12importScriptEPKc+0x335>
 8a9e0a9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e0b0:	e8 c6 e2 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e0b5:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9e0b8:	89 82 ac 00 00 00    	mov    %eax,0xac(%edx)
 8a9e0be:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e0c5:	e8 b1 e2 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e0ca:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9e0cd:	89 42 38             	mov    %eax,0x38(%edx)
 8a9e0d0:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e0d7:	e8 9f e2 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e0dc:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9e0df:	89 42 3c             	mov    %eax,0x3c(%edx)
 8a9e0e2:	e9 22 fd ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9e0e7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e0ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e0ee:	c7 04 24 c4 a2 e2 08 	movl   $0x8e2a2c4,(%esp)
 8a9e0f5:	e8 e6 99 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9e0fa:	84 c0                	test   %al,%al
 8a9e0fc:	0f 84 a7 01 00 00    	je     8a9e2a9 <_ZN13StrikerScript12importScriptEPKc+0x4f7>
 8a9e102:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a9e105:	89 04 24             	mov    %eax,(%esp)
 8a9e108:	e8 11 0c 00 00       	call   8a9ed1e <_ZN12StrikerSkillC1Ev>
 8a9e10d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8a9e110:	89 04 24             	mov    %eax,(%esp)
 8a9e113:	e8 0c e3 e1 ff       	call   88bc424 <_Z7ScanIntPi>
 8a9e118:	83 f0 01             	xor    $0x1,%eax
 8a9e11b:	84 c0                	test   %al,%al
 8a9e11d:	74 0a                	je     8a9e129 <_ZN13StrikerScript12importScriptEPKc+0x377>
 8a9e11f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a9e124:	e9 68 01 00 00       	jmp    8a9e291 <_ZN13StrikerScript12importScriptEPKc+0x4df>
 8a9e129:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8a9e12c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8a9e12f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e136:	e8 40 e2 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e13b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8a9e13e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e145:	e8 31 e2 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e14a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8a9e14d:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e154:	e8 22 e2 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e159:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8a9e15c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e163:	e8 13 e2 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e168:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8a9e16b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a9e16e:	89 04 24             	mov    %eax,(%esp)
 8a9e171:	e8 2c e6 e1 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a9e176:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8a9e179:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8a9e17c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8a9e17f:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8a9e182:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8a9e185:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8a9e188:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a9e18b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e18f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a9e192:	83 c0 0c             	add    $0xc,%eax
 8a9e195:	89 04 24             	mov    %eax,(%esp)
 8a9e198:	e8 63 9b c6 ff       	call   8707d00 <_ZNSsaSERKSs>
 8a9e19d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8a9e1a0:	66 89 45 a4          	mov    %ax,-0x5c(%ebp)
 8a9e1a4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8a9e1a7:	66 89 45 a6          	mov    %ax,-0x5a(%ebp)
 8a9e1ab:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e1ae:	8d 48 78             	lea    0x78(%eax),%ecx
 8a9e1b1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8a9e1b4:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8a9e1b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a9e1bb:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a9e1bf:	89 04 24             	mov    %eax,(%esp)
 8a9e1c2:	e8 19 10 00 00       	call   8a9f1e0 <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 8a9e1c7:	83 ec 04             	sub    $0x4,%esp
 8a9e1ca:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e1cd:	8d 50 78             	lea    0x78(%eax),%edx
 8a9e1d0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8a9e1d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9e1d7:	89 04 24             	mov    %eax,(%esp)
 8a9e1da:	e8 ff 0e 00 00       	call   8a9f0de <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 8a9e1df:	83 ec 04             	sub    $0x4,%esp
 8a9e1e2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8a9e1e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e1e9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8a9e1ec:	89 04 24             	mov    %eax,(%esp)
 8a9e1ef:	e8 18 10 00 00       	call   8a9f20c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorI12StrikerSkillSaIS3_EEEEeqERKS8_>
 8a9e1f4:	84 c0                	test   %al,%al
 8a9e1f6:	74 5d                	je     8a9e255 <_ZN13StrikerScript12importScriptEPKc+0x4a3>
 8a9e1f8:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8a9e1ff:	e8 4c 62 c8 ff       	call   8724450 <_Znwj>
 8a9e204:	89 c3                	mov    %eax,%ebx
 8a9e206:	89 d8                	mov    %ebx,%eax
 8a9e208:	89 04 24             	mov    %eax,(%esp)
 8a9e20b:	e8 10 10 00 00       	call   8a9f220 <_ZNSt6vectorI12StrikerSkillSaIS0_EEC1Ev>
 8a9e210:	eb 12                	jmp    8a9e224 <_ZN13StrikerScript12importScriptEPKc+0x472>
 8a9e212:	89 d6                	mov    %edx,%esi
 8a9e214:	89 c7                	mov    %eax,%edi
 8a9e216:	89 1c 24             	mov    %ebx,(%esp)
 8a9e219:	e8 d2 62 c8 ff       	call   87244f0 <_ZdlPv>
 8a9e21e:	89 f8                	mov    %edi,%eax
 8a9e220:	89 f2                	mov    %esi,%edx
 8a9e222:	eb 55                	jmp    8a9e279 <_ZN13StrikerScript12importScriptEPKc+0x4c7>
 8a9e224:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 8a9e227:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a9e22a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e22e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8a9e231:	89 04 24             	mov    %eax,(%esp)
 8a9e234:	e8 fb 0f 00 00       	call   8a9f234 <_ZNSt6vectorI12StrikerSkillSaIS0_EE9push_backERKS0_>
 8a9e239:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e23c:	8d 50 78             	lea    0x78(%eax),%edx
 8a9e23f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8a9e242:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e246:	89 14 24             	mov    %edx,(%esp)
 8a9e249:	e8 5a 10 00 00       	call   8a9f2a8 <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEEixERS8_>
 8a9e24e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8a9e251:	89 10                	mov    %edx,(%eax)
 8a9e253:	eb 1d                	jmp    8a9e272 <_ZN13StrikerScript12importScriptEPKc+0x4c0>
 8a9e255:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8a9e258:	89 04 24             	mov    %eax,(%esp)
 8a9e25b:	e8 d6 0e 00 00       	call   8a9f136 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorI12StrikerSkillSaIS3_EEEEptEv>
 8a9e260:	8b 40 04             	mov    0x4(%eax),%eax
 8a9e263:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8a9e266:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9e26a:	89 04 24             	mov    %eax,(%esp)
 8a9e26d:	e8 c2 0f 00 00       	call   8a9f234 <_ZNSt6vectorI12StrikerSkillSaIS0_EE9push_backERKS0_>
 8a9e272:	bb 01 00 00 00       	mov    $0x1,%ebx
 8a9e277:	eb 18                	jmp    8a9e291 <_ZN13StrikerScript12importScriptEPKc+0x4df>
 8a9e279:	89 d3                	mov    %edx,%ebx
 8a9e27b:	89 c6                	mov    %eax,%esi
 8a9e27d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a9e280:	89 04 24             	mov    %eax,(%esp)
 8a9e283:	e8 ac 0a 00 00       	call   8a9ed34 <_ZN12StrikerSkillD1Ev>
 8a9e288:	89 f0                	mov    %esi,%eax
 8a9e28a:	89 da                	mov    %ebx,%edx
 8a9e28c:	e9 fc 01 00 00       	jmp    8a9e48d <_ZN13StrikerScript12importScriptEPKc+0x6db>
 8a9e291:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a9e294:	89 04 24             	mov    %eax,(%esp)
 8a9e297:	e8 98 0a 00 00       	call   8a9ed34 <_ZN12StrikerSkillD1Ev>
 8a9e29c:	85 db                	test   %ebx,%ebx
 8a9e29e:	0f 84 61 fb ff ff    	je     8a9de05 <_ZN13StrikerScript12importScriptEPKc+0x53>
 8a9e2a4:	e9 59 fe ff ff       	jmp    8a9e102 <_ZN13StrikerScript12importScriptEPKc+0x350>
 8a9e2a9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e2ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e2b0:	c7 04 24 d4 a2 e2 08 	movl   $0x8e2a2d4,(%esp)
 8a9e2b7:	e8 24 98 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9e2bc:	84 c0                	test   %al,%al
 8a9e2be:	74 72                	je     8a9e332 <_ZN13StrikerScript12importScriptEPKc+0x580>
 8a9e2c0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e2c3:	05 94 00 00 00       	add    $0x94,%eax
 8a9e2c8:	89 04 24             	mov    %eax,(%esp)
 8a9e2cb:	e8 ce 10 00 00       	call   8a9f39e <_ZNSt6vectorI22StrikerSkillAddCommandSaIS0_EE5clearEv>
 8a9e2d0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8a9e2d3:	89 04 24             	mov    %eax,(%esp)
 8a9e2d6:	e8 49 e1 e1 ff       	call   88bc424 <_Z7ScanIntPi>
 8a9e2db:	83 f0 01             	xor    $0x1,%eax
 8a9e2de:	84 c0                	test   %al,%al
 8a9e2e0:	74 06                	je     8a9e2e8 <_ZN13StrikerScript12importScriptEPKc+0x536>
 8a9e2e2:	90                   	nop
 8a9e2e3:	e9 21 fb ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9e2e8:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8a9e2eb:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8a9e2ee:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e2f5:	e8 81 e0 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e2fa:	89 45 98             	mov    %eax,-0x68(%ebp)
 8a9e2fd:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e304:	e8 72 e0 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e309:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e30d:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8a9e310:	89 04 24             	mov    %eax,(%esp)
 8a9e313:	e8 b4 f4 ff ff       	call   8a9d7cc <_ZN22StrikerSkillAddCommand7setTypeEi>
 8a9e318:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e31b:	8d 90 94 00 00 00    	lea    0x94(%eax),%edx
 8a9e321:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8a9e324:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e328:	89 14 24             	mov    %edx,(%esp)
 8a9e32b:	e8 8a 10 00 00       	call   8a9f3ba <_ZNSt6vectorI22StrikerSkillAddCommandSaIS0_EE9push_backERKS0_>
 8a9e330:	eb 9e                	jmp    8a9e2d0 <_ZN13StrikerScript12importScriptEPKc+0x51e>
 8a9e332:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e335:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e339:	c7 04 24 ea a2 e2 08 	movl   $0x8e2a2ea,(%esp)
 8a9e340:	e8 9b 97 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9e345:	84 c0                	test   %al,%al
 8a9e347:	74 1a                	je     8a9e363 <_ZN13StrikerScript12importScriptEPKc+0x5b1>
 8a9e349:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e350:	e8 26 e0 e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e355:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9e358:	89 82 a4 00 00 00    	mov    %eax,0xa4(%edx)
 8a9e35e:	e9 a6 fa ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9e363:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e366:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e36a:	c7 04 24 fd a2 e2 08 	movl   $0x8e2a2fd,(%esp)
 8a9e371:	e8 6a 97 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9e376:	84 c0                	test   %al,%al
 8a9e378:	74 26                	je     8a9e3a0 <_ZN13StrikerScript12importScriptEPKc+0x5ee>
 8a9e37a:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e381:	e8 f5 df e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e386:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9e389:	81 c2 a8 00 00 00    	add    $0xa8,%edx
 8a9e38f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e393:	89 14 24             	mov    %edx,(%esp)
 8a9e396:	e8 5f f4 ff ff       	call   8a9d7fa <_ZN20StrikerDirectionType7setTypeEi>
 8a9e39b:	e9 69 fa ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9e3a0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e3a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e3a7:	c7 04 24 0e a3 e2 08 	movl   $0x8e2a30e,(%esp)
 8a9e3ae:	e8 2d 97 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9e3b3:	84 c0                	test   %al,%al
 8a9e3b5:	0f 84 80 00 00 00    	je     8a9e43b <_ZN13StrikerScript12importScriptEPKc+0x689>
 8a9e3bb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e3be:	83 c0 2c             	add    $0x2c,%eax
 8a9e3c1:	89 04 24             	mov    %eax,(%esp)
 8a9e3c4:	e8 65 10 00 00       	call   8a9f42e <_ZNSt6vectorI16ContentsRevisionSaIS0_EE5clearEv>
 8a9e3c9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a9e3cc:	89 04 24             	mov    %eax,(%esp)
 8a9e3cf:	e8 ce e3 e1 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a9e3d4:	83 f0 01             	xor    $0x1,%eax
 8a9e3d7:	84 c0                	test   %al,%al
 8a9e3d9:	74 06                	je     8a9e3e1 <_ZN13StrikerScript12importScriptEPKc+0x62f>
 8a9e3db:	90                   	nop
 8a9e3dc:	e9 28 fa ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9e3e1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a9e3e4:	89 04 24             	mov    %eax,(%esp)
 8a9e3e7:	e8 04 81 c6 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8a9e3ec:	89 04 24             	mov    %eax,(%esp)
 8a9e3ef:	e8 b0 50 02 00       	call   8ac34a4 <_ZN12ContentsType7getTypeEPKc>
 8a9e3f4:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8a9e3f7:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e3fe:	e8 78 df e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e403:	89 45 88             	mov    %eax,-0x78(%ebp)
 8a9e406:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e40d:	e8 69 df e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e412:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8a9e415:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e41c:	e8 5a df e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e421:	89 45 90             	mov    %eax,-0x70(%ebp)
 8a9e424:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e427:	8d 50 2c             	lea    0x2c(%eax),%edx
 8a9e42a:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8a9e42d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e431:	89 14 24             	mov    %edx,(%esp)
 8a9e434:	e8 11 10 00 00       	call   8a9f44a <_ZNSt6vectorI16ContentsRevisionSaIS0_EE9push_backERKS0_>
 8a9e439:	eb 8e                	jmp    8a9e3c9 <_ZN13StrikerScript12importScriptEPKc+0x617>
 8a9e43b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e43e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e442:	c7 04 24 22 a3 e2 08 	movl   $0x8e2a322,(%esp)
 8a9e449:	e8 92 96 79 ff       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 8a9e44e:	84 c0                	test   %al,%al
 8a9e450:	0f 84 b2 f9 ff ff    	je     8a9de08 <_ZN13StrikerScript12importScriptEPKc+0x56>
 8a9e456:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e45d:	e8 19 df e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e462:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9e465:	89 82 b0 00 00 00    	mov    %eax,0xb0(%edx)
 8a9e46b:	e9 99 f9 ff ff       	jmp    8a9de09 <_ZN13StrikerScript12importScriptEPKc+0x57>
 8a9e470:	90                   	nop
 8a9e471:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e474:	c6 80 a0 00 00 00 01 	movb   $0x1,0xa0(%eax)
 8a9e47b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8a9e480:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a9e483:	89 04 24             	mov    %eax,(%esp)
 8a9e486:	e8 55 97 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8a9e48b:	eb 30                	jmp    8a9e4bd <_ZN13StrikerScript12importScriptEPKc+0x70b>
 8a9e48d:	89 d3                	mov    %edx,%ebx
 8a9e48f:	89 c6                	mov    %eax,%esi
 8a9e491:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a9e494:	89 04 24             	mov    %eax,(%esp)
 8a9e497:	e8 44 97 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8a9e49c:	89 f0                	mov    %esi,%eax
 8a9e49e:	89 da                	mov    %ebx,%edx
 8a9e4a0:	eb 00                	jmp    8a9e4a2 <_ZN13StrikerScript12importScriptEPKc+0x6f0>
 8a9e4a2:	89 d3                	mov    %edx,%ebx
 8a9e4a4:	89 c6                	mov    %eax,%esi
 8a9e4a6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e4a9:	89 04 24             	mov    %eax,(%esp)
 8a9e4ac:	e8 2f 97 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8a9e4b1:	89 f0                	mov    %esi,%eax
 8a9e4b3:	89 da                	mov    %ebx,%edx
 8a9e4b5:	89 04 24             	mov    %eax,(%esp)
 8a9e4b8:	e8 93 52 04 00       	call   8ae3750 <_Unwind_Resume>
 8a9e4bd:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a9e4c0:	89 04 24             	mov    %eax,(%esp)
 8a9e4c3:	e8 18 97 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8a9e4c8:	89 d8                	mov    %ebx,%eax
 8a9e4ca:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8a9e4cd:	83 c4 00             	add    $0x0,%esp
 8a9e4d0:	5b                   	pop    %ebx
 8a9e4d1:	5e                   	pop    %esi
 8a9e4d2:	5f                   	pop    %edi
 8a9e4d3:	5d                   	pop    %ebp
 8a9e4d4:	c3                   	ret
 8a9e4d5:	90                   	nop

```

```c
// StrikerScript::importScript @ 0x8a9ddb2

/* StrikerScript::importScript(char const*) */

undefined4 __thiscall StrikerScript::importScript(StrikerScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  vector<StrikerSkill,std::allocator<StrikerSkill>> *this_00;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
  local_64 [4];
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  string asStack_50 [4];
  int local_4c;
  bool local_45;
  string local_44 [4];
  string local_40;
  undefined4 local_3c;
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  vector<StrikerSkill,std::allocator<StrikerSkill>> *local_20;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_40);
                    /* try { // try from 08a9ddf3 to 08a9ddf7 has its CatchHandler @ 08a9e4a2 */
    std::string::string(local_44);
    local_45 = false;
    local_4c = 0;
                    /* try { // try from 08a9de17 to 08a9e10c has its CatchHandler @ 08a9e48d */
    while (cVar1 = ScanType((string *)&local_40,true), cVar1 == '\x01') {
      bVar2 = std::operator==("[tag mode]",&local_40);
      if (bVar2) {
        local_4c = ScanInt(&local_45);
      }
      else {
        bVar2 = std::operator==("[tag cost time]",&local_40);
        if (bVar2) {
          local_4c = ScanInt(&local_45);
          *(int *)this = local_4c;
        }
        else {
          bVar2 = std::operator==("[tag character setting]",&local_40);
          if (bVar2) {
            uVar6 = ScanInt(&local_45);
            *(undefined4 *)(this + 4) = uVar6;
          }
          else {
            bVar2 = std::operator==("[striker combo]",&local_40);
            if (bVar2) {
              uVar6 = ScanInt(&local_45);
              *(undefined4 *)(this + 8) = uVar6;
            }
            else {
              bVar2 = std::operator==("[striker start time]",&local_40);
              if (bVar2) {
                local_4c = ScanInt(&local_45);
                *(int *)(this + 0xc) = local_4c;
              }
              else {
                bVar2 = std::operator==("[striker skill data up]",&local_40);
                if (bVar2) {
                  importSkillDataUpVector(this);
                }
                else {
                  bVar2 = std::operator==("[striker skill attack penalty]",&local_40);
                  if (bVar2) {
                    importSkillAttackPenalty(this);
                  }
                  else {
                    bVar2 = std::operator==("[striker skill cooltime penalty]",&local_40);
                    if (bVar2) {
                      importSkillCoolTimePenalty(this);
                    }
                    else {
                      bVar2 = std::operator==("[striker level penalty]",&local_40);
                      if (bVar2) {
                        importParentLevelPenlaty(this);
                      }
                      else {
                        bVar2 = std::operator==("[striker module impossible]",&local_40);
                        if (bVar2) {
                          std::vector<ContentsType::T,std::allocator<ContentsType::T>>::clear
                                    ((vector<ContentsType::T,std::allocator<ContentsType::T>> *)
                                     (this + 0x14));
                          while (cVar1 = ScanStr(local_44), cVar1 == '\x01') {
                            pcVar3 = (char *)std::string::c_str(local_44);
                            local_3c = ContentsType::getType(pcVar3);
                            std::vector<ContentsType::T,std::allocator<ContentsType::T>>::push_back
                                      ((vector<ContentsType::T,std::allocator<ContentsType::T>> *)
                                       (this + 0x14),(T *)&local_3c);
                          }
                        }
                        else {
                          bVar2 = std::operator==("[striker dungeon impossible]",&local_40);
                          if (bVar2) {
                            std::vector<int,std::allocator<int>>::clear
                                      ((vector<int,std::allocator<int>> *)(this + 0x20));
                            while (cVar1 = ScanInt(&local_4c), cVar1 == '\x01') {
                              std::vector<int,std::allocator<int>>::push_back
                                        ((vector<int,std::allocator<int>> *)(this + 0x20),&local_4c)
                              ;
                            }
                          }
                          else {
                            bVar2 = std::operator==("[striker end time]",&local_40);
                            if (bVar2) {
                              uVar6 = ScanInt((bool *)0x0);
                              *(undefined4 *)(this + 0x10) = uVar6;
                            }
                            else {
                              bVar2 = std::operator==("[position]",&local_40);
                              if (bVar2) {
                                uVar6 = ScanInt((bool *)0x0);
                                *(undefined4 *)(this + 0xac) = uVar6;
                                uVar6 = ScanInt((bool *)0x0);
                                *(undefined4 *)(this + 0x38) = uVar6;
                                uVar6 = ScanInt((bool *)0x0);
                                *(undefined4 *)(this + 0x3c) = uVar6;
                              }
                              else {
                                bVar2 = std::operator==("[striker skill]",&local_40);
                                if (bVar2) {
                                  do {
                                    StrikerSkill::StrikerSkill((StrikerSkill *)&local_5c);
                    /* try { // try from 08a9e113 to 08a9e203 has its CatchHandler @ 08a9e279 */
                                    cVar1 = ScanInt(&local_4c);
                                    if (cVar1 == '\x01') {
                                      local_34 = local_4c;
                                      local_30 = ScanInt((bool *)0x0);
                                      local_2c = ScanInt((bool *)0x0);
                                      local_28 = ScanInt((bool *)0x0);
                                      local_24 = ScanInt((bool *)0x0);
                                      ScanStr(local_44);
                                      local_5c = local_2c;
                                      local_58 = local_28;
                                      local_54 = local_24;
                                      std::string::operator=(asStack_50,local_44);
                                      local_60 = (undefined2)local_34;
                                      local_5e = (undefined2)local_30;
                                      std::
                                      map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
                                      ::find((int *)local_64);
                                      std::
                                      map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
                                      ::end(local_38);
                                      cVar1 = std::
                                              _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                                              ::operator==(local_64,(_Rb_tree_iterator *)local_38);
                                      if (cVar1 == '\0') {
                                        iVar5 = std::
                                                _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                                                ::operator->(local_64);
                                        std::vector<StrikerSkill,std::allocator<StrikerSkill>>::
                                        push_back(*(
                                                  vector<StrikerSkill,std::allocator<StrikerSkill>>
                                                  **)(iVar5 + 4),(StrikerSkill *)&local_5c);
                                      }
                                      else {
                                        this_00 = operator_new(0xc);
                    /* try { // try from 08a9e20b to 08a9e20f has its CatchHandler @ 08a9e212 */
                                        std::vector<StrikerSkill,std::allocator<StrikerSkill>>::
                                        vector(this_00);
                                        local_20 = this_00;
                    /* try { // try from 08a9e234 to 08a9e271 has its CatchHandler @ 08a9e279 */
                                        std::vector<StrikerSkill,std::allocator<StrikerSkill>>::
                                        push_back(this_00,(StrikerSkill *)&local_5c);
                                        puVar4 = (undefined4 *)
                                                 std::
                                                 map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
                                                 ::operator[]((
                                                  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
                                                  *)(this + 0x78),(int *)&local_60);
                                        *puVar4 = local_20;
                                      }
                                      bVar2 = true;
                                    }
                                    else {
                                      bVar2 = false;
                                    }
                    /* try { // try from 08a9e297 to 08a9e461 has its CatchHandler @ 08a9e48d */
                                    StrikerSkill::~StrikerSkill((StrikerSkill *)&local_5c);
                                  } while (bVar2);
                                }
                                else {
                                  bVar2 = std::operator==("[striker skill macro]",&local_40);
                                  if (bVar2) {
                                    std::
                                    vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>
                                    ::clear((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>
                                             *)(this + 0x94));
                                    while (cVar1 = ScanInt(&local_4c), cVar1 == '\x01') {
                                      local_70 = local_4c;
                                      local_6c = ScanInt((bool *)0x0);
                                      iVar5 = ScanInt((bool *)0x0);
                                      StrikerSkillAddCommand::setType
                                                ((StrikerSkillAddCommand *)&local_70,iVar5);
                                      std::
                                      vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>
                                      ::push_back((
                                                  vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>
                                                  *)(this + 0x94),
                                                  (StrikerSkillAddCommand *)&local_70);
                                    }
                                  }
                                  else {
                                    bVar2 = std::operator==("[common cool time]",&local_40);
                                    if (bVar2) {
                                      uVar6 = ScanInt((bool *)0x0);
                                      *(undefined4 *)(this + 0xa4) = uVar6;
                                    }
                                    else {
                                      bVar2 = std::operator==("[direction type]",&local_40);
                                      if (bVar2) {
                                        iVar5 = ScanInt((bool *)0x0);
                                        StrikerDirectionType::setType
                                                  ((StrikerDirectionType *)(this + 0xa8),iVar5);
                                      }
                                      else {
                                        bVar2 = std::operator==("[contents revision]",&local_40);
                                        if (bVar2) {
                                          std::
                                          vector<ContentsRevision,std::allocator<ContentsRevision>>
                                          ::clear((
                                                  vector<ContentsRevision,std::allocator<ContentsRevision>>
                                                  *)(this + 0x2c));
                                          while (cVar1 = ScanStr(local_44), cVar1 == '\x01') {
                                            pcVar3 = (char *)std::string::c_str(local_44);
                                            local_80 = ContentsType::getType(pcVar3);
                                            local_7c = ScanInt((bool *)0x0);
                                            local_78 = ScanInt((bool *)0x0);
                                            local_74 = ScanInt((bool *)0x0);
                                            std::
                                            vector<ContentsRevision,std::allocator<ContentsRevision>>
                                            ::push_back((
                                                  vector<ContentsRevision,std::allocator<ContentsRevision>>
                                                  *)(this + 0x2c),(ContentsRevision *)&local_80);
                                          }
                                        }
                                        else {
                                          bVar2 = std::operator==("[upgrade revision]",&local_40);
                                          if (bVar2) {
                                            uVar6 = ScanInt((bool *)0x0);
                                            *(undefined4 *)(this + 0xb0) = uVar6;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    this[0xa0] = (StrikerScript)0x1;
    uVar6 = 1;
                    /* try { // try from 08a9e486 to 08a9e48a has its CatchHandler @ 08a9e4a2 */
    std::string::~string(local_44);
    std::string::~string((string *)&local_40);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## importSkillAttackPenalty

```asm
// === 08a9e5d0 StrikerScript::importSkillAttackPenalty  [0x08a9e5d0-0x8a9e5fb] ===
 8a9e5d0:	55                   	push   %ebp
 8a9e5d1:	89 e5                	mov    %esp,%ebp
 8a9e5d3:	83 ec 18             	sub    $0x18,%esp
 8a9e5d6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e5d9:	83 c0 4c             	add    $0x4c,%eax
 8a9e5dc:	89 04 24             	mov    %eax,(%esp)
 8a9e5df:	e8 6a 0f 00 00       	call   8a9f54e <_ZNSt6vectorI15TagSkillPenaltySaIS0_EE5clearEv>
 8a9e5e4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e5e7:	83 c0 4c             	add    $0x4c,%eax
 8a9e5ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e5ee:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e5f1:	89 04 24             	mov    %eax,(%esp)
 8a9e5f4:	e8 d3 00 00 00       	call   8a9e6cc <_ZN13StrikerScript16readSkillPenaltyERSt6vectorI15TagSkillPenaltySaIS1_EE>
 8a9e5f9:	c9                   	leave
 8a9e5fa:	c3                   	ret
 8a9e5fb:	90                   	nop

```

```c
// StrikerScript::importSkillAttackPenalty @ 0x8a9e5d0

/* StrikerScript::importSkillAttackPenalty() */

void __thiscall StrikerScript::importSkillAttackPenalty(StrikerScript *this)

{
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::clear
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x4c));
  readSkillPenalty(this,(vector *)(this + 0x4c));
  return;
}

```

---

## importSkillCoolTimePenalty

```asm
// === 08a9e5fc StrikerScript::importSkillCoolTimePenalty  [0x08a9e5fc-0x8a9e627] ===
 8a9e5fc:	55                   	push   %ebp
 8a9e5fd:	89 e5                	mov    %esp,%ebp
 8a9e5ff:	83 ec 18             	sub    $0x18,%esp
 8a9e602:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e605:	83 c0 58             	add    $0x58,%eax
 8a9e608:	89 04 24             	mov    %eax,(%esp)
 8a9e60b:	e8 3e 0f 00 00       	call   8a9f54e <_ZNSt6vectorI15TagSkillPenaltySaIS0_EE5clearEv>
 8a9e610:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e613:	83 c0 58             	add    $0x58,%eax
 8a9e616:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e61a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e61d:	89 04 24             	mov    %eax,(%esp)
 8a9e620:	e8 a7 00 00 00       	call   8a9e6cc <_ZN13StrikerScript16readSkillPenaltyERSt6vectorI15TagSkillPenaltySaIS1_EE>
 8a9e625:	c9                   	leave
 8a9e626:	c3                   	ret
 8a9e627:	90                   	nop

```

```c
// StrikerScript::importSkillCoolTimePenalty @ 0x8a9e5fc

/* StrikerScript::importSkillCoolTimePenalty() */

void __thiscall StrikerScript::importSkillCoolTimePenalty(StrikerScript *this)

{
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::clear
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x58));
  readSkillPenalty(this,(vector *)(this + 0x58));
  return;
}

```

---

## importSkillDataUpVector

```asm
// === 08a9e4d6 StrikerScript::importSkillDataUpVector  [0x08a9e4d6-0x8a9e5cf] ===
 8a9e4d6:	55                   	push   %ebp
 8a9e4d7:	89 e5                	mov    %esp,%ebp
 8a9e4d9:	56                   	push   %esi
 8a9e4da:	53                   	push   %ebx
 8a9e4db:	83 ec 30             	sub    $0x30,%esp
 8a9e4de:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a9e4e1:	89 04 24             	mov    %eax,(%esp)
 8a9e4e4:	e8 e7 80 c6 ff       	call   87065d0 <_ZNSsC1Ev>
 8a9e4e9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e4ec:	83 c0 40             	add    $0x40,%eax
 8a9e4ef:	89 04 24             	mov    %eax,(%esp)
 8a9e4f2:	e8 c7 0f 00 00       	call   8a9f4be <_ZNSt6vectorI18StrikerSkillDataUpSaIS0_EE5clearEv>
 8a9e4f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8a9e4fe:	00 
 8a9e4ff:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a9e502:	89 04 24             	mov    %eax,(%esp)
 8a9e505:	e8 55 e3 e1 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8a9e50a:	83 f0 01             	xor    $0x1,%eax
 8a9e50d:	84 c0                	test   %al,%al
 8a9e50f:	0f 85 8a 00 00 00    	jne    8a9e59f <_ZN13StrikerScript23importSkillDataUpVectorEv+0xc9>
 8a9e515:	c7 44 24 04 35 a3 e2 	movl   $0x8e2a335,0x4(%esp)
 8a9e51c:	08 
 8a9e51d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a9e520:	89 04 24             	mov    %eax,(%esp)
 8a9e523:	e8 79 24 5e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a9e528:	84 c0                	test   %al,%al
 8a9e52a:	74 76                	je     8a9e5a2 <_ZN13StrikerScript23importSkillDataUpVectorEv+0xcc>
 8a9e52c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a9e52f:	89 04 24             	mov    %eax,(%esp)
 8a9e532:	e8 13 08 00 00       	call   8a9ed4a <_ZN18StrikerSkillDataUpC1Ev>
 8a9e537:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e53e:	e8 38 de e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e543:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8a9e546:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e54d:	e8 29 de e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e552:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8a9e555:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a9e558:	83 c0 08             	add    $0x8,%eax
 8a9e55b:	89 04 24             	mov    %eax,(%esp)
 8a9e55e:	e8 39 1f e2 ff       	call   88c049c <_Z17importSkillDataUpRSt6vectorI20EquipmentSkillDataUpSaIS0_EE>
 8a9e563:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9e566:	8d 50 40             	lea    0x40(%eax),%edx
 8a9e569:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a9e56c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e570:	89 14 24             	mov    %edx,(%esp)
 8a9e573:	e8 62 0f 00 00       	call   8a9f4da <_ZNSt6vectorI18StrikerSkillDataUpSaIS0_EE9push_backERKS0_>
 8a9e578:	eb 15                	jmp    8a9e58f <_ZN13StrikerScript23importSkillDataUpVectorEv+0xb9>
 8a9e57a:	89 d3                	mov    %edx,%ebx
 8a9e57c:	89 c6                	mov    %eax,%esi
 8a9e57e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a9e581:	89 04 24             	mov    %eax,(%esp)
 8a9e584:	e8 d7 07 00 00       	call   8a9ed60 <_ZN18StrikerSkillDataUpD1Ev>
 8a9e589:	89 f0                	mov    %esi,%eax
 8a9e58b:	89 da                	mov    %ebx,%edx
 8a9e58d:	eb 26                	jmp    8a9e5b5 <_ZN13StrikerScript23importSkillDataUpVectorEv+0xdf>
 8a9e58f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a9e592:	89 04 24             	mov    %eax,(%esp)
 8a9e595:	e8 c6 07 00 00       	call   8a9ed60 <_ZN18StrikerSkillDataUpD1Ev>
 8a9e59a:	e9 58 ff ff ff       	jmp    8a9e4f7 <_ZN13StrikerScript23importSkillDataUpVectorEv+0x21>
 8a9e59f:	90                   	nop
 8a9e5a0:	eb 01                	jmp    8a9e5a3 <_ZN13StrikerScript23importSkillDataUpVectorEv+0xcd>
 8a9e5a2:	90                   	nop
 8a9e5a3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a9e5a6:	89 04 24             	mov    %eax,(%esp)
 8a9e5a9:	e8 32 96 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8a9e5ae:	83 c4 30             	add    $0x30,%esp
 8a9e5b1:	5b                   	pop    %ebx
 8a9e5b2:	5e                   	pop    %esi
 8a9e5b3:	5d                   	pop    %ebp
 8a9e5b4:	c3                   	ret
 8a9e5b5:	89 d3                	mov    %edx,%ebx
 8a9e5b7:	89 c6                	mov    %eax,%esi
 8a9e5b9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a9e5bc:	89 04 24             	mov    %eax,(%esp)
 8a9e5bf:	e8 1c 96 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8a9e5c4:	89 f0                	mov    %esi,%eax
 8a9e5c6:	89 da                	mov    %ebx,%edx
 8a9e5c8:	89 04 24             	mov    %eax,(%esp)
 8a9e5cb:	e8 80 51 04 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// StrikerScript::importSkillDataUpVector @ 0x8a9e4d6

/* StrikerScript::importSkillDataUpVector() */

void __thiscall StrikerScript::importSkillDataUpVector(StrikerScript *this)

{
  char cVar1;
  bool bVar2;
  undefined4 local_24;
  undefined4 local_20;
  vector avStack_1c [12];
  string local_10;
  
  std::string::string((string *)&local_10);
                    /* try { // try from 08a9e4f2 to 08a9e536 has its CatchHandler @ 08a9e5b5 */
  std::vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>>::clear
            ((vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>> *)(this + 0x40));
  while ((cVar1 = ScanType((string *)&local_10,true), cVar1 == '\x01' &&
         (bVar2 = std::operator==(&local_10,"[level]"), bVar2))) {
    StrikerSkillDataUp::StrikerSkillDataUp((StrikerSkillDataUp *)&local_24);
                    /* try { // try from 08a9e53e to 08a9e577 has its CatchHandler @ 08a9e57a */
    local_24 = ScanInt((bool *)0x0);
    local_20 = ScanInt((bool *)0x0);
    importSkillDataUp(avStack_1c);
    std::vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>>::push_back
              ((vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>> *)(this + 0x40),
               (StrikerSkillDataUp *)&local_24);
                    /* try { // try from 08a9e595 to 08a9e599 has its CatchHandler @ 08a9e5b5 */
    StrikerSkillDataUp::~StrikerSkillDataUp((StrikerSkillDataUp *)&local_24);
  }
  std::string::~string((string *)&local_10);
  return;
}

```

---

## importStrikerLevelPenalty

```asm
// === 08a9e628 StrikerScript::importStrikerLevelPenalty  [0x08a9e628-0x8a9e653] ===
 8a9e628:	55                   	push   %ebp
 8a9e629:	89 e5                	mov    %esp,%ebp
 8a9e62b:	83 ec 18             	sub    $0x18,%esp
 8a9e62e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e635:	e8 41 dd e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e63a:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9e63d:	89 42 64             	mov    %eax,0x64(%edx)
 8a9e640:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e647:	e8 2f dd e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e64c:	8b 55 08             	mov    0x8(%ebp),%edx
 8a9e64f:	89 42 68             	mov    %eax,0x68(%edx)
 8a9e652:	c9                   	leave
 8a9e653:	c3                   	ret

```

```c
// StrikerScript::importStrikerLevelPenalty @ 0x8a9e628

/* StrikerScript::importStrikerLevelPenalty() */

void __thiscall StrikerScript::importStrikerLevelPenalty(StrikerScript *this)

{
  undefined4 uVar1;
  
  uVar1 = ScanInt((bool *)0x0);
  *(undefined4 *)(this + 100) = uVar1;
  uVar1 = ScanInt((bool *)0x0);
  *(undefined4 *)(this + 0x68) = uVar1;
  return;
}

```

---

## isCommonSkill

```asm
// === 08a9ebee StrikerScript::isCommonSkill  [0x08a9ebee-0x8a9ecac] ===
 8a9ebee:	55                   	push   %ebp
 8a9ebef:	89 e5                	mov    %esp,%ebp
 8a9ebf1:	83 ec 38             	sub    $0x38,%esp
 8a9ebf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a9ebf7:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8a9ebfb:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 8a9ebff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a9ec06:	00 
 8a9ec07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9ec0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9ec0e:	89 04 24             	mov    %eax,(%esp)
 8a9ec11:	e8 ca fb ff ff       	call   8a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>
 8a9ec16:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a9ec19:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8a9ec1d:	75 0a                	jne    8a9ec29 <_ZN13StrikerScript13isCommonSkillEsi+0x3b>
 8a9ec1f:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9ec24:	e9 82 00 00 00       	jmp    8a9ecab <_ZN13StrikerScript13isCommonSkillEsi+0xbd>
 8a9ec29:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a9ec2c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a9ec2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9ec33:	89 04 24             	mov    %eax,(%esp)
 8a9ec36:	e8 33 0a 00 00       	call   8a9f66e <_ZNSt6vectorI12StrikerSkillSaIS0_EE5beginEv>
 8a9ec3b:	83 ec 04             	sub    $0x4,%esp
 8a9ec3e:	eb 3b                	jmp    8a9ec7b <_ZN13StrikerScript13isCommonSkillEsi+0x8d>
 8a9ec40:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a9ec43:	89 04 24             	mov    %eax,(%esp)
 8a9ec46:	e8 99 0a 00 00       	call   8a9f6e4 <_ZNK9__gnu_cxx17__normal_iteratorIP12StrikerSkillSt6vectorIS1_SaIS1_EEEptEv>
 8a9ec4b:	8b 00                	mov    (%eax),%eax
 8a9ec4d:	3b 45 10             	cmp    0x10(%ebp),%eax
 8a9ec50:	0f 94 c0             	sete   %al
 8a9ec53:	84 c0                	test   %al,%al
 8a9ec55:	74 07                	je     8a9ec5e <_ZN13StrikerScript13isCommonSkillEsi+0x70>
 8a9ec57:	b8 01 00 00 00       	mov    $0x1,%eax
 8a9ec5c:	eb 4d                	jmp    8a9ecab <_ZN13StrikerScript13isCommonSkillEsi+0xbd>
 8a9ec5e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a9ec61:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a9ec68:	00 
 8a9ec69:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8a9ec6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9ec70:	89 04 24             	mov    %eax,(%esp)
 8a9ec73:	e8 76 0a 00 00       	call   8a9f6ee <_ZN9__gnu_cxx17__normal_iteratorIP12StrikerSkillSt6vectorIS1_SaIS1_EEEppEi>
 8a9ec78:	83 ec 04             	sub    $0x4,%esp
 8a9ec7b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a9ec7e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a9ec81:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a9ec85:	89 04 24             	mov    %eax,(%esp)
 8a9ec88:	e8 05 0a 00 00       	call   8a9f692 <_ZNSt6vectorI12StrikerSkillSaIS0_EE3endEv>
 8a9ec8d:	83 ec 04             	sub    $0x4,%esp
 8a9ec90:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a9ec93:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9ec97:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a9ec9a:	89 04 24             	mov    %eax,(%esp)
 8a9ec9d:	e8 16 0a 00 00       	call   8a9f6b8 <_ZN9__gnu_cxxneIP12StrikerSkillSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8a9eca2:	84 c0                	test   %al,%al
 8a9eca4:	75 9a                	jne    8a9ec40 <_ZN13StrikerScript13isCommonSkillEsi+0x52>
 8a9eca6:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9ecab:	c9                   	leave
 8a9ecac:	c3                   	ret

```

```c
// StrikerScript::isCommonSkill @ 0x8a9ebee

/* StrikerScript::isCommonSkill(short, int) */

undefined4 __thiscall StrikerScript::isCommonSkill(StrikerScript *this,short param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_14 [4];
  int local_10;
  
  local_10 = getStrikerSkillVector(this,param_1,0);
  if (local_10 != 0) {
    std::vector<StrikerSkill,std::allocator<StrikerSkill>>::begin();
    while( true ) {
      std::vector<StrikerSkill,std::allocator<StrikerSkill>>::end();
      bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
      if (!bVar1) break;
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
                      ::operator->(local_1c);
      if (*piVar2 == param_2) {
        return 1;
      }
      __gnu_cxx::
      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>::
      operator++(local_14,(int)local_1c);
    }
  }
  return 0;
}

```

---

## readSkillPenalty

```asm
// === 08a9e6cc StrikerScript::readSkillPenalty  [0x08a9e6cc-0x8a9e79b] ===
 8a9e6cc:	55                   	push   %ebp
 8a9e6cd:	89 e5                	mov    %esp,%ebp
 8a9e6cf:	56                   	push   %esi
 8a9e6d0:	53                   	push   %ebx
 8a9e6d1:	83 ec 30             	sub    $0x30,%esp
 8a9e6d4:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8a9e6d8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a9e6db:	89 04 24             	mov    %eax,(%esp)
 8a9e6de:	e8 85 f0 ff ff       	call   8a9d768 <_ZN15TagSkillPenaltyC1Ev>
 8a9e6e3:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8a9e6e6:	89 04 24             	mov    %eax,(%esp)
 8a9e6e9:	e8 8d dc e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e6ee:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8a9e6f1:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8a9e6f5:	83 f0 01             	xor    $0x1,%eax
 8a9e6f8:	84 c0                	test   %al,%al
 8a9e6fa:	0f 85 94 00 00 00    	jne    8a9e794 <_ZN13StrikerScript16readSkillPenaltyERSt6vectorI15TagSkillPenaltySaIS1_EE+0xc8>
 8a9e700:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e707:	e8 6f dc e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e70c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8a9e70f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a9e712:	89 04 24             	mov    %eax,(%esp)
 8a9e715:	e8 b6 7e c6 ff       	call   87065d0 <_ZNSsC1Ev>
 8a9e71a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a9e71d:	89 04 24             	mov    %eax,(%esp)
 8a9e720:	e8 7d e0 e1 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a9e725:	c7 44 24 04 3d a3 e2 	movl   $0x8e2a33d,0x4(%esp)
 8a9e72c:	08 
 8a9e72d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a9e730:	89 04 24             	mov    %eax,(%esp)
 8a9e733:	e8 69 22 5e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a9e738:	84 c0                	test   %al,%al
 8a9e73a:	74 06                	je     8a9e742 <_ZN13StrikerScript16readSkillPenaltyERSt6vectorI15TagSkillPenaltySaIS1_EE+0x76>
 8a9e73c:	c6 45 ec 01          	movb   $0x1,-0x14(%ebp)
 8a9e740:	eb 04                	jmp    8a9e746 <_ZN13StrikerScript16readSkillPenaltyERSt6vectorI15TagSkillPenaltySaIS1_EE+0x7a>
 8a9e742:	c6 45 ec 00          	movb   $0x0,-0x14(%ebp)
 8a9e746:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a9e74d:	e8 29 dc e1 ff       	call   88bc37b <_Z7ScanIntPb>
 8a9e752:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a9e755:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a9e758:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a9e75c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a9e75f:	89 04 24             	mov    %eax,(%esp)
 8a9e762:	e8 93 0e 00 00       	call   8a9f5fa <_ZNSt6vectorI15TagSkillPenaltySaIS0_EE9push_backERKS0_>
 8a9e767:	eb 1b                	jmp    8a9e784 <_ZN13StrikerScript16readSkillPenaltyERSt6vectorI15TagSkillPenaltySaIS1_EE+0xb8>
 8a9e769:	89 d3                	mov    %edx,%ebx
 8a9e76b:	89 c6                	mov    %eax,%esi
 8a9e76d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a9e770:	89 04 24             	mov    %eax,(%esp)
 8a9e773:	e8 68 94 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8a9e778:	89 f0                	mov    %esi,%eax
 8a9e77a:	89 da                	mov    %ebx,%edx
 8a9e77c:	89 04 24             	mov    %eax,(%esp)
 8a9e77f:	e8 cc 4f 04 00       	call   8ae3750 <_Unwind_Resume>
 8a9e784:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a9e787:	89 04 24             	mov    %eax,(%esp)
 8a9e78a:	e8 51 94 c6 ff       	call   8707be0 <_ZNSsD1Ev>
 8a9e78f:	e9 40 ff ff ff       	jmp    8a9e6d4 <_ZN13StrikerScript16readSkillPenaltyERSt6vectorI15TagSkillPenaltySaIS1_EE+0x8>
 8a9e794:	90                   	nop
 8a9e795:	83 c4 30             	add    $0x30,%esp
 8a9e798:	5b                   	pop    %ebx
 8a9e799:	5e                   	pop    %esi
 8a9e79a:	5d                   	pop    %ebp
 8a9e79b:	c3                   	ret

```

```c
// StrikerScript::readSkillPenalty @ 0x8a9e6cc

/* StrikerScript::readSkillPenalty(std::vector<TagSkillPenalty, std::allocator<TagSkillPenalty> >&)
    */

void __thiscall StrikerScript::readSkillPenalty(StrikerScript *this,vector *param_1)

{
  string local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  bool local_d;
  
  while( true ) {
    local_d = true;
    TagSkillPenalty::TagSkillPenalty((TagSkillPenalty *)&local_20);
    local_20 = ScanInt(&local_d);
    if (local_d != true) break;
    local_1c = ScanInt((bool *)0x0);
    std::string::string((string *)&local_24);
                    /* try { // try from 08a9e720 to 08a9e766 has its CatchHandler @ 08a9e769 */
    ScanStr((string *)&local_24);
    local_18 = std::operator==(&local_24,"%");
    local_14 = ScanInt((bool *)0x0);
    std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::push_back
              ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)param_1,
               (TagSkillPenalty *)&local_20);
    std::string::~string((string *)&local_24);
  }
  return;
}

```

---

## ~StrikerScript

```asm
// === 08a9da28 StrikerScript::~StrikerScript  [0x08a9da28-0x8a9dbb3] ===
 8a9da28:	55                   	push   %ebp
 8a9da29:	89 e5                	mov    %esp,%ebp
 8a9da2b:	56                   	push   %esi
 8a9da2c:	53                   	push   %ebx
 8a9da2d:	83 ec 10             	sub    $0x10,%esp
 8a9da30:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9da33:	89 04 24             	mov    %eax,(%esp)
 8a9da36:	e8 83 02 00 00       	call   8a9dcbe <_ZN13StrikerScript7destoryEv>
 8a9da3b:	eb 1a                	jmp    8a9da57 <_ZN13StrikerScriptD1Ev+0x2f>
 8a9da3d:	89 d3                	mov    %edx,%ebx
 8a9da3f:	89 c6                	mov    %eax,%esi
 8a9da41:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9da44:	05 94 00 00 00       	add    $0x94,%eax
 8a9da49:	89 04 24             	mov    %eax,(%esp)
 8a9da4c:	e8 ed 15 00 00       	call   8a9f03e <_ZNSt6vectorI22StrikerSkillAddCommandSaIS0_EED1Ev>
 8a9da51:	89 f0                	mov    %esi,%eax
 8a9da53:	89 da                	mov    %ebx,%edx
 8a9da55:	eb 12                	jmp    8a9da69 <_ZN13StrikerScriptD1Ev+0x41>
 8a9da57:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9da5a:	05 94 00 00 00       	add    $0x94,%eax
 8a9da5f:	89 04 24             	mov    %eax,(%esp)
 8a9da62:	e8 d7 15 00 00       	call   8a9f03e <_ZNSt6vectorI22StrikerSkillAddCommandSaIS0_EED1Ev>
 8a9da67:	eb 18                	jmp    8a9da81 <_ZN13StrikerScriptD1Ev+0x59>
 8a9da69:	89 d3                	mov    %edx,%ebx
 8a9da6b:	89 c6                	mov    %eax,%esi
 8a9da6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9da70:	83 c0 78             	add    $0x78,%eax
 8a9da73:	89 04 24             	mov    %eax,(%esp)
 8a9da76:	e8 8f 12 00 00       	call   8a9ed0a <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEED1Ev>
 8a9da7b:	89 f0                	mov    %esi,%eax
 8a9da7d:	89 da                	mov    %ebx,%edx
 8a9da7f:	eb 10                	jmp    8a9da91 <_ZN13StrikerScriptD1Ev+0x69>
 8a9da81:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9da84:	83 c0 78             	add    $0x78,%eax
 8a9da87:	89 04 24             	mov    %eax,(%esp)
 8a9da8a:	e8 7b 12 00 00       	call   8a9ed0a <_ZNSt3mapIiPSt6vectorI12StrikerSkillSaIS1_EESt4lessIiESaISt4pairIKiS4_EEED1Ev>
 8a9da8f:	eb 18                	jmp    8a9daa9 <_ZN13StrikerScriptD1Ev+0x81>
 8a9da91:	89 d3                	mov    %edx,%ebx
 8a9da93:	89 c6                	mov    %eax,%esi
 8a9da95:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9da98:	83 c0 6c             	add    $0x6c,%eax
 8a9da9b:	89 04 24             	mov    %eax,(%esp)
 8a9da9e:	e8 af 14 00 00       	call   8a9ef52 <_ZNSt6vectorI18ParentLevelPenaltySaIS0_EED1Ev>
 8a9daa3:	89 f0                	mov    %esi,%eax
 8a9daa5:	89 da                	mov    %ebx,%edx
 8a9daa7:	eb 10                	jmp    8a9dab9 <_ZN13StrikerScriptD1Ev+0x91>
 8a9daa9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9daac:	83 c0 6c             	add    $0x6c,%eax
 8a9daaf:	89 04 24             	mov    %eax,(%esp)
 8a9dab2:	e8 9b 14 00 00       	call   8a9ef52 <_ZNSt6vectorI18ParentLevelPenaltySaIS0_EED1Ev>
 8a9dab7:	eb 18                	jmp    8a9dad1 <_ZN13StrikerScriptD1Ev+0xa9>
 8a9dab9:	89 d3                	mov    %edx,%ebx
 8a9dabb:	89 c6                	mov    %eax,%esi
 8a9dabd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dac0:	83 c0 58             	add    $0x58,%eax
 8a9dac3:	89 04 24             	mov    %eax,(%esp)
 8a9dac6:	e8 15 14 00 00       	call   8a9eee0 <_ZNSt6vectorI15TagSkillPenaltySaIS0_EED1Ev>
 8a9dacb:	89 f0                	mov    %esi,%eax
 8a9dacd:	89 da                	mov    %ebx,%edx
 8a9dacf:	eb 10                	jmp    8a9dae1 <_ZN13StrikerScriptD1Ev+0xb9>
 8a9dad1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dad4:	83 c0 58             	add    $0x58,%eax
 8a9dad7:	89 04 24             	mov    %eax,(%esp)
 8a9dada:	e8 01 14 00 00       	call   8a9eee0 <_ZNSt6vectorI15TagSkillPenaltySaIS0_EED1Ev>
 8a9dadf:	eb 18                	jmp    8a9daf9 <_ZN13StrikerScriptD1Ev+0xd1>
 8a9dae1:	89 d3                	mov    %edx,%ebx
 8a9dae3:	89 c6                	mov    %eax,%esi
 8a9dae5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dae8:	83 c0 4c             	add    $0x4c,%eax
 8a9daeb:	89 04 24             	mov    %eax,(%esp)
 8a9daee:	e8 ed 13 00 00       	call   8a9eee0 <_ZNSt6vectorI15TagSkillPenaltySaIS0_EED1Ev>
 8a9daf3:	89 f0                	mov    %esi,%eax
 8a9daf5:	89 da                	mov    %ebx,%edx
 8a9daf7:	eb 10                	jmp    8a9db09 <_ZN13StrikerScriptD1Ev+0xe1>
 8a9daf9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dafc:	83 c0 4c             	add    $0x4c,%eax
 8a9daff:	89 04 24             	mov    %eax,(%esp)
 8a9db02:	e8 d9 13 00 00       	call   8a9eee0 <_ZNSt6vectorI15TagSkillPenaltySaIS0_EED1Ev>
 8a9db07:	eb 18                	jmp    8a9db21 <_ZN13StrikerScriptD1Ev+0xf9>
 8a9db09:	89 d3                	mov    %edx,%ebx
 8a9db0b:	89 c6                	mov    %eax,%esi
 8a9db0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9db10:	83 c0 40             	add    $0x40,%eax
 8a9db13:	89 04 24             	mov    %eax,(%esp)
 8a9db16:	e8 53 13 00 00       	call   8a9ee6e <_ZNSt6vectorI18StrikerSkillDataUpSaIS0_EED1Ev>
 8a9db1b:	89 f0                	mov    %esi,%eax
 8a9db1d:	89 da                	mov    %ebx,%edx
 8a9db1f:	eb 10                	jmp    8a9db31 <_ZN13StrikerScriptD1Ev+0x109>
 8a9db21:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9db24:	83 c0 40             	add    $0x40,%eax
 8a9db27:	89 04 24             	mov    %eax,(%esp)
 8a9db2a:	e8 3f 13 00 00       	call   8a9ee6e <_ZNSt6vectorI18StrikerSkillDataUpSaIS0_EED1Ev>
 8a9db2f:	eb 18                	jmp    8a9db49 <_ZN13StrikerScriptD1Ev+0x121>
 8a9db31:	89 d3                	mov    %edx,%ebx
 8a9db33:	89 c6                	mov    %eax,%esi
 8a9db35:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9db38:	83 c0 2c             	add    $0x2c,%eax
 8a9db3b:	89 04 24             	mov    %eax,(%esp)
 8a9db3e:	e8 b9 12 00 00       	call   8a9edfc <_ZNSt6vectorI16ContentsRevisionSaIS0_EED1Ev>
 8a9db43:	89 f0                	mov    %esi,%eax
 8a9db45:	89 da                	mov    %ebx,%edx
 8a9db47:	eb 10                	jmp    8a9db59 <_ZN13StrikerScriptD1Ev+0x131>
 8a9db49:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9db4c:	83 c0 2c             	add    $0x2c,%eax
 8a9db4f:	89 04 24             	mov    %eax,(%esp)
 8a9db52:	e8 a5 12 00 00       	call   8a9edfc <_ZNSt6vectorI16ContentsRevisionSaIS0_EED1Ev>
 8a9db57:	eb 18                	jmp    8a9db71 <_ZN13StrikerScriptD1Ev+0x149>
 8a9db59:	89 d3                	mov    %edx,%ebx
 8a9db5b:	89 c6                	mov    %eax,%esi
 8a9db5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9db60:	83 c0 20             	add    $0x20,%eax
 8a9db63:	89 04 24             	mov    %eax,(%esp)
 8a9db66:	e8 6f 62 5e ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a9db6b:	89 f0                	mov    %esi,%eax
 8a9db6d:	89 da                	mov    %ebx,%edx
 8a9db6f:	eb 10                	jmp    8a9db81 <_ZN13StrikerScriptD1Ev+0x159>
 8a9db71:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9db74:	83 c0 20             	add    $0x20,%eax
 8a9db77:	89 04 24             	mov    %eax,(%esp)
 8a9db7a:	e8 5b 62 5e ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a9db7f:	eb 1e                	jmp    8a9db9f <_ZN13StrikerScriptD1Ev+0x177>
 8a9db81:	89 d3                	mov    %edx,%ebx
 8a9db83:	89 c6                	mov    %eax,%esi
 8a9db85:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9db88:	83 c0 14             	add    $0x14,%eax
 8a9db8b:	89 04 24             	mov    %eax,(%esp)
 8a9db8e:	e8 f7 11 00 00       	call   8a9ed8a <_ZNSt6vectorIN12ContentsType1TESaIS1_EED1Ev>
 8a9db93:	89 f0                	mov    %esi,%eax
 8a9db95:	89 da                	mov    %ebx,%edx
 8a9db97:	89 04 24             	mov    %eax,(%esp)
 8a9db9a:	e8 b1 5b 04 00       	call   8ae3750 <_Unwind_Resume>
 8a9db9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9dba2:	83 c0 14             	add    $0x14,%eax
 8a9dba5:	89 04 24             	mov    %eax,(%esp)
 8a9dba8:	e8 dd 11 00 00       	call   8a9ed8a <_ZNSt6vectorIN12ContentsType1TESaIS1_EED1Ev>
 8a9dbad:	83 c4 10             	add    $0x10,%esp
 8a9dbb0:	5b                   	pop    %ebx
 8a9dbb1:	5e                   	pop    %esi
 8a9dbb2:	5d                   	pop    %ebp
 8a9dbb3:	c3                   	ret

```

```c
// StrikerScript::~StrikerScript @ 0x8a9da28

/* StrikerScript::~StrikerScript() */

void __thiscall StrikerScript::~StrikerScript(StrikerScript *this)

{
                    /* try { // try from 08a9da36 to 08a9da3a has its CatchHandler @ 08a9da3d */
  destory(this);
                    /* try { // try from 08a9da62 to 08a9da66 has its CatchHandler @ 08a9da69 */
  std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::~vector
            ((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>> *)(this + 0x94))
  ;
                    /* try { // try from 08a9da8a to 08a9da8e has its CatchHandler @ 08a9da91 */
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::~map((map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
          *)(this + 0x78));
                    /* try { // try from 08a9dab2 to 08a9dab6 has its CatchHandler @ 08a9dab9 */
  std::vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>>::~vector
            ((vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>> *)(this + 0x6c));
                    /* try { // try from 08a9dada to 08a9dade has its CatchHandler @ 08a9dae1 */
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::~vector
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x58));
                    /* try { // try from 08a9db02 to 08a9db06 has its CatchHandler @ 08a9db09 */
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::~vector
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x4c));
                    /* try { // try from 08a9db2a to 08a9db2e has its CatchHandler @ 08a9db31 */
  std::vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>>::~vector
            ((vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>> *)(this + 0x40));
                    /* try { // try from 08a9db52 to 08a9db56 has its CatchHandler @ 08a9db59 */
  std::vector<ContentsRevision,std::allocator<ContentsRevision>>::~vector
            ((vector<ContentsRevision,std::allocator<ContentsRevision>> *)(this + 0x2c));
                    /* try { // try from 08a9db7a to 08a9db7e has its CatchHandler @ 08a9db81 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::vector<ContentsType::T,std::allocator<ContentsType::T>>::~vector
            ((vector<ContentsType::T,std::allocator<ContentsType::T>> *)(this + 0x14));
  return;
}

```

