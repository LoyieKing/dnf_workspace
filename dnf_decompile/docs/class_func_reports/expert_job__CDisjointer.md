# expert_job__CDisjointer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## CDisjointer

```asm
// === 085d1d3c expert_job::CDisjointer::CDisjointer  [0x085d1d3c-0x85d1d89] ===
 85d1d3c:	55                   	push   %ebp
 85d1d3d:	89 e5                	mov    %esp,%ebp
 85d1d3f:	56                   	push   %esi
 85d1d40:	53                   	push   %ebx
 85d1d41:	83 ec 10             	sub    $0x10,%esp
 85d1d44:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1d47:	89 04 24             	mov    %eax,(%esp)
 85d1d4a:	e8 65 d5 ec ff       	call   849f2b4 <_ZN10expert_job10CExpertJobC1Ev>
 85d1d4f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1d52:	c7 00 28 08 cc 08    	movl   $0x8cc0828,(%eax)
 85d1d58:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1d5b:	83 c0 08             	add    $0x8,%eax
 85d1d5e:	89 04 24             	mov    %eax,(%esp)
 85d1d61:	e8 18 20 00 00       	call   85d3d7e <_ZN10expert_job16CDisjointMachineC1Ev>
 85d1d66:	eb 1b                	jmp    85d1d83 <_ZN10expert_job11CDisjointerC1Ev+0x47>
 85d1d68:	89 d3                	mov    %edx,%ebx
 85d1d6a:	89 c6                	mov    %eax,%esi
 85d1d6c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1d6f:	89 04 24             	mov    %eax,(%esp)
 85d1d72:	e8 83 d4 ec ff       	call   849f1fa <_ZN10expert_job10CExpertJobD1Ev>
 85d1d77:	89 f0                	mov    %esi,%eax
 85d1d79:	89 da                	mov    %ebx,%edx
 85d1d7b:	89 04 24             	mov    %eax,(%esp)
 85d1d7e:	e8 cd 19 51 00       	call   8ae3750 <_Unwind_Resume>
 85d1d83:	83 c4 10             	add    $0x10,%esp
 85d1d86:	5b                   	pop    %ebx
 85d1d87:	5e                   	pop    %esi
 85d1d88:	5d                   	pop    %ebp
 85d1d89:	c3                   	ret

```

```c
// expert_job::CDisjointer::CDisjointer @ 0x85d1d3c

/* expert_job::CDisjointer::CDisjointer() */

void __thiscall expert_job::CDisjointer::CDisjointer(CDisjointer *this)

{
  CExpertJob::CExpertJob((CExpertJob *)this);
  *(undefined ***)this = &PTR_OnStartMission_08cc0828;
                    /* try { // try from 085d1d61 to 085d1d65 has its CatchHandler @ 085d1d68 */
  CDisjointMachine::CDisjointMachine((CDisjointMachine *)(this + 8));
  return;
}

```

---

## GetEtcScript

```asm
// === 085d1e3a expert_job::CDisjointer::GetEtcScript  [0x085d1e3a-0x85d1e61] ===
 85d1e3a:	55                   	push   %ebp
 85d1e3b:	89 e5                	mov    %esp,%ebp
 85d1e3d:	83 ec 18             	sub    $0x18,%esp
 85d1e40:	a1 94 2f 47 09       	mov    0x9472f94,%eax
 85d1e45:	85 c0                	test   %eax,%eax
 85d1e47:	75 12                	jne    85d1e5b <_ZN10expert_job11CDisjointer12GetEtcScriptEv+0x21>
 85d1e49:	e8 4d a3 af ff       	call   80cc19b <_Z14G_CDataManagerv>
 85d1e4e:	89 04 24             	mov    %eax,(%esp)
 85d1e51:	e8 c0 d6 ec ff       	call   849f516 <_ZN12CDataManager21GetExpertJobEtcScriptEv>
 85d1e56:	a3 94 2f 47 09       	mov    %eax,0x9472f94
 85d1e5b:	a1 94 2f 47 09       	mov    0x9472f94,%eax
 85d1e60:	c9                   	leave
 85d1e61:	c3                   	ret

```

```c
// expert_job::CDisjointer::GetEtcScript @ 0x85d1e3a

/* expert_job::CDisjointer::GetEtcScript() */

int expert_job::CDisjointer::GetEtcScript(void)

{
  CDataManager *this;
  
  if (GetEtcScript()::script == 0) {
    this = (CDataManager *)G_CDataManager();
    GetEtcScript()::script = CDataManager::GetExpertJobEtcScript(this);
  }
  return GetEtcScript()::script;
}

```

---

## GetPredictResult

```asm
// === 085d1f68 expert_job::CDisjointer::GetPredictResult  [0x085d1f68-0x85d2349] ===
 85d1f68:	55                   	push   %ebp
 85d1f69:	89 e5                	mov    %esp,%ebp
 85d1f6b:	57                   	push   %edi
 85d1f6c:	56                   	push   %esi
 85d1f6d:	53                   	push   %ebx
 85d1f6e:	83 ec 7c             	sub    $0x7c,%esp
 85d1f71:	b8 80 2f 47 09       	mov    $0x9472f80,%eax
 85d1f76:	0f b6 00             	movzbl (%eax),%eax
 85d1f79:	84 c0                	test   %al,%al
 85d1f7b:	75 71                	jne    85d1fee <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x86>
 85d1f7d:	c7 04 24 80 2f 47 09 	movl   $0x9472f80,(%esp)
 85d1f84:	e8 a7 33 15 00       	call   8725330 <__cxa_guard_acquire>
 85d1f89:	85 c0                	test   %eax,%eax
 85d1f8b:	0f 95 c0             	setne  %al
 85d1f8e:	84 c0                	test   %al,%al
 85d1f90:	74 5c                	je     85d1fee <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x86>
 85d1f92:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d1f97:	c7 04 24 88 2f 47 09 	movl   $0x9472f88,(%esp)
 85d1f9e:	e8 09 c2 ab ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85d1fa3:	c7 04 24 80 2f 47 09 	movl   $0x9472f80,(%esp)
 85d1faa:	e8 a1 32 15 00       	call   8725250 <__cxa_guard_release>
 85d1faf:	b8 da 3d 08 08       	mov    $0x8083dda,%eax
 85d1fb4:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 85d1fbb:	08 
 85d1fbc:	c7 44 24 04 88 2f 47 	movl   $0x9472f88,0x4(%esp)
 85d1fc3:	09 
 85d1fc4:	89 04 24             	mov    %eax,(%esp)
 85d1fc7:	e8 04 be aa ff       	call   807ddd0 <__cxa_atexit@plt>
 85d1fcc:	eb 20                	jmp    85d1fee <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x86>
 85d1fce:	89 d6                	mov    %edx,%esi
 85d1fd0:	89 c7                	mov    %eax,%edi
 85d1fd2:	84 db                	test   %bl,%bl
 85d1fd4:	75 0c                	jne    85d1fe2 <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x7a>
 85d1fd6:	c7 04 24 80 2f 47 09 	movl   $0x9472f80,(%esp)
 85d1fdd:	e8 de 32 15 00       	call   87252c0 <__cxa_guard_abort>
 85d1fe2:	89 f8                	mov    %edi,%eax
 85d1fe4:	89 f2                	mov    %esi,%edx
 85d1fe6:	89 04 24             	mov    %eax,(%esp)
 85d1fe9:	e8 62 17 51 00       	call   8ae3750 <_Unwind_Resume>
 85d1fee:	c7 04 24 88 2f 47 09 	movl   $0x9472f88,(%esp)
 85d1ff5:	e8 74 4b ac ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 85d1ffa:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 85d1ffe:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 85d2002:	74 24                	je     85d2028 <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0xc0>
 85d2004:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2007:	83 c0 11             	add    $0x11,%eax
 85d200a:	89 04 24             	mov    %eax,(%esp)
 85d200d:	e8 aa e7 b7 ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 85d2012:	83 f0 01             	xor    $0x1,%eax
 85d2015:	84 c0                	test   %al,%al
 85d2017:	74 07                	je     85d2020 <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0xb8>
 85d2019:	b8 01 00 00 00       	mov    $0x1,%eax
 85d201e:	eb 05                	jmp    85d2025 <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0xbd>
 85d2020:	b8 00 00 00 00       	mov    $0x0,%eax
 85d2025:	88 45 e3             	mov    %al,-0x1d(%ebp)
 85d2028:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d202b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d202f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2032:	89 04 24             	mov    %eax,(%esp)
 85d2035:	e8 1a 28 c6 ff       	call   8234854 <_ZN10expert_job11CDisjointer6isMineEP5CUser>
 85d203a:	84 c0                	test   %al,%al
 85d203c:	74 33                	je     85d2071 <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x109>
 85d203e:	8b 45 10             	mov    0x10(%ebp),%eax
 85d2041:	89 04 24             	mov    %eax,(%esp)
 85d2044:	e8 8d f2 b1 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85d2049:	83 f8 01             	cmp    $0x1,%eax
 85d204c:	0f 9f c0             	setg   %al
 85d204f:	84 c0                	test   %al,%al
 85d2051:	74 1e                	je     85d2071 <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x109>
 85d2053:	e8 b2 fd ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d2058:	8b 40 34             	mov    0x34(%eax),%eax
 85d205b:	89 45 ac             	mov    %eax,-0x54(%ebp)
 85d205e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85d2061:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2065:	c7 04 24 88 2f 47 09 	movl   $0x9472f88,(%esp)
 85d206c:	e8 b5 f0 b3 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 85d2071:	0f b6 75 e3          	movzbl -0x1d(%ebp),%esi
 85d2075:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2078:	89 04 24             	mov    %eax,(%esp)
 85d207b:	e8 8a fe ff ff       	call   85d1f0a <_ZN10expert_job11CDisjointer26get_disjoint_machine_gradeEv>
 85d2080:	0f b6 d8             	movzbl %al,%ebx
 85d2083:	8b 45 10             	mov    0x10(%ebp),%eax
 85d2086:	89 04 24             	mov    %eax,(%esp)
 85d2089:	e8 48 f2 b1 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85d208e:	0f b6 c0             	movzbl %al,%eax
 85d2091:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85d2095:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d2099:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d209d:	8d 45 b5             	lea    -0x4b(%ebp),%eax
 85d20a0:	89 04 24             	mov    %eax,(%esp)
 85d20a3:	e8 f6 1a 00 00       	call   85d3b9e <_ZN20DisjointMachineGradeC1Ehhh>
 85d20a8:	e8 5d fd ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d20ad:	8d 88 bc 01 00 00    	lea    0x1bc(%eax),%ecx
 85d20b3:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d20b6:	8d 55 b5             	lea    -0x4b(%ebp),%edx
 85d20b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d20bd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85d20c1:	89 04 24             	mov    %eax,(%esp)
 85d20c4:	e8 e5 1e 00 00       	call   85d3fae <_ZNSt3mapI20DisjointMachineGrade16stDisjointResultSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85d20c9:	83 ec 04             	sub    $0x4,%esp
 85d20cc:	e8 39 fd ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d20d1:	8d 90 bc 01 00 00    	lea    0x1bc(%eax),%edx
 85d20d7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d20da:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d20de:	89 04 24             	mov    %eax,(%esp)
 85d20e1:	e8 f4 1e 00 00       	call   85d3fda <_ZNSt3mapI20DisjointMachineGrade16stDisjointResultSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85d20e6:	83 ec 04             	sub    $0x4,%esp
 85d20e9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d20ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d20f0:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d20f3:	89 04 24             	mov    %eax,(%esp)
 85d20f6:	e8 05 1f 00 00       	call   85d4000 <_ZNKSt17_Rb_tree_iteratorISt4pairIK20DisjointMachineGrade16stDisjointResultEEneERKS5_>
 85d20fb:	84 c0                	test   %al,%al
 85d20fd:	0f 84 37 02 00 00    	je     85d233a <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x3d2>
 85d2103:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d2106:	89 04 24             	mov    %eax,(%esp)
 85d2109:	e8 06 1f 00 00       	call   85d4014 <_ZNKSt17_Rb_tree_iteratorISt4pairIK20DisjointMachineGrade16stDisjointResultEEptEv>
 85d210e:	83 c0 04             	add    $0x4,%eax
 85d2111:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d2114:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d2117:	8b 00                	mov    (%eax),%eax
 85d2119:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85d211c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85d211f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2123:	c7 04 24 88 2f 47 09 	movl   $0x9472f88,(%esp)
 85d212a:	e8 bf c0 ab ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 85d212f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d2132:	89 04 24             	mov    %eax,(%esp)
 85d2135:	e8 e8 1e 00 00       	call   85d4022 <_ZN9__gnu_cxx17__normal_iteratorIP16stItemSelectRateSt6vectorIS1_SaIS1_EEEC1Ev>
 85d213a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d213d:	8d 50 08             	lea    0x8(%eax),%edx
 85d2140:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d2143:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d2147:	89 04 24             	mov    %eax,(%esp)
 85d214a:	e8 e1 1e 00 00       	call   85d4030 <_ZNSt6vectorI16stItemSelectRateSaIS0_EE5beginEv>
 85d214f:	83 ec 04             	sub    $0x4,%esp
 85d2152:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85d2155:	89 45 a8             	mov    %eax,-0x58(%ebp)
 85d2158:	e9 ab 00 00 00       	jmp    85d2208 <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x2a0>
 85d215d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d2160:	89 04 24             	mov    %eax,(%esp)
 85d2163:	e8 54 1f 00 00       	call   85d40bc <_ZNK9__gnu_cxx17__normal_iteratorIP16stItemSelectRateSt6vectorIS1_SaIS1_EEEdeEv>
 85d2168:	89 c3                	mov    %eax,%ebx
 85d216a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85d216d:	c7 44 24 04 88 2f 47 	movl   $0x9472f88,0x4(%esp)
 85d2174:	09 
 85d2175:	89 04 24             	mov    %eax,(%esp)
 85d2178:	e8 ef c0 ab ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 85d217d:	83 ec 04             	sub    $0x4,%esp
 85d2180:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85d2183:	c7 44 24 04 88 2f 47 	movl   $0x9472f88,0x4(%esp)
 85d218a:	09 
 85d218b:	89 04 24             	mov    %eax,(%esp)
 85d218e:	e8 b5 c0 ab ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 85d2193:	83 ec 04             	sub    $0x4,%esp
 85d2196:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85d2199:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d219d:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85d21a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d21a4:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d21a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d21ab:	89 04 24             	mov    %eax,(%esp)
 85d21ae:	e8 e4 77 b2 ff       	call   80f9997 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_>
 85d21b3:	83 ec 04             	sub    $0x4,%esp
 85d21b6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85d21b9:	c7 44 24 04 88 2f 47 	movl   $0x9472f88,0x4(%esp)
 85d21c0:	09 
 85d21c1:	89 04 24             	mov    %eax,(%esp)
 85d21c4:	e8 a3 c0 ab ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 85d21c9:	83 ec 04             	sub    $0x4,%esp
 85d21cc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85d21cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d21d3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85d21d6:	89 04 24             	mov    %eax,(%esp)
 85d21d9:	e8 fc 66 c9 ff       	call   82688da <_ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 85d21de:	84 c0                	test   %al,%al
 85d21e0:	74 1b                	je     85d21fd <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x295>
 85d21e2:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d21e5:	89 04 24             	mov    %eax,(%esp)
 85d21e8:	e8 cf 1e 00 00       	call   85d40bc <_ZNK9__gnu_cxx17__normal_iteratorIP16stItemSelectRateSt6vectorIS1_SaIS1_EEEdeEv>
 85d21ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d21f1:	c7 04 24 88 2f 47 09 	movl   $0x9472f88,(%esp)
 85d21f8:	e8 29 ef b3 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 85d21fd:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d2200:	89 04 24             	mov    %eax,(%esp)
 85d2203:	e8 9e 1e 00 00       	call   85d40a6 <_ZN9__gnu_cxx17__normal_iteratorIP16stItemSelectRateSt6vectorIS1_SaIS1_EEEppEv>
 85d2208:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d220b:	8d 50 08             	lea    0x8(%eax),%edx
 85d220e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85d2211:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d2215:	89 04 24             	mov    %eax,(%esp)
 85d2218:	e8 37 1e 00 00       	call   85d4054 <_ZNSt6vectorI16stItemSelectRateSaIS0_EE3endEv>
 85d221d:	83 ec 04             	sub    $0x4,%esp
 85d2220:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85d2223:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2227:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d222a:	89 04 24             	mov    %eax,(%esp)
 85d222d:	e8 48 1e 00 00       	call   85d407a <_ZN9__gnu_cxxneIP16stItemSelectRateSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 85d2232:	84 c0                	test   %al,%al
 85d2234:	0f 85 23 ff ff ff    	jne    85d215d <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x1f5>
 85d223a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d223d:	8d 50 14             	lea    0x14(%eax),%edx
 85d2240:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d2243:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d2247:	89 04 24             	mov    %eax,(%esp)
 85d224a:	e8 e1 1d 00 00       	call   85d4030 <_ZNSt6vectorI16stItemSelectRateSaIS0_EE5beginEv>
 85d224f:	83 ec 04             	sub    $0x4,%esp
 85d2252:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85d2255:	89 45 a8             	mov    %eax,-0x58(%ebp)
 85d2258:	e9 ab 00 00 00       	jmp    85d2308 <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x3a0>
 85d225d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d2260:	89 04 24             	mov    %eax,(%esp)
 85d2263:	e8 54 1e 00 00       	call   85d40bc <_ZNK9__gnu_cxx17__normal_iteratorIP16stItemSelectRateSt6vectorIS1_SaIS1_EEEdeEv>
 85d2268:	89 c3                	mov    %eax,%ebx
 85d226a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d226d:	c7 44 24 04 88 2f 47 	movl   $0x9472f88,0x4(%esp)
 85d2274:	09 
 85d2275:	89 04 24             	mov    %eax,(%esp)
 85d2278:	e8 ef bf ab ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 85d227d:	83 ec 04             	sub    $0x4,%esp
 85d2280:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85d2283:	c7 44 24 04 88 2f 47 	movl   $0x9472f88,0x4(%esp)
 85d228a:	09 
 85d228b:	89 04 24             	mov    %eax,(%esp)
 85d228e:	e8 b5 bf ab ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 85d2293:	83 ec 04             	sub    $0x4,%esp
 85d2296:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d2299:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d229d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85d22a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d22a4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85d22a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d22ab:	89 04 24             	mov    %eax,(%esp)
 85d22ae:	e8 e4 76 b2 ff       	call   80f9997 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_>
 85d22b3:	83 ec 04             	sub    $0x4,%esp
 85d22b6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d22b9:	c7 44 24 04 88 2f 47 	movl   $0x9472f88,0x4(%esp)
 85d22c0:	09 
 85d22c1:	89 04 24             	mov    %eax,(%esp)
 85d22c4:	e8 a3 bf ab ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 85d22c9:	83 ec 04             	sub    $0x4,%esp
 85d22cc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d22cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d22d3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d22d6:	89 04 24             	mov    %eax,(%esp)
 85d22d9:	e8 fc 65 c9 ff       	call   82688da <_ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 85d22de:	84 c0                	test   %al,%al
 85d22e0:	74 1b                	je     85d22fd <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x395>
 85d22e2:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d22e5:	89 04 24             	mov    %eax,(%esp)
 85d22e8:	e8 cf 1d 00 00       	call   85d40bc <_ZNK9__gnu_cxx17__normal_iteratorIP16stItemSelectRateSt6vectorIS1_SaIS1_EEEdeEv>
 85d22ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d22f1:	c7 04 24 88 2f 47 09 	movl   $0x9472f88,(%esp)
 85d22f8:	e8 29 ee b3 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 85d22fd:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d2300:	89 04 24             	mov    %eax,(%esp)
 85d2303:	e8 9e 1d 00 00       	call   85d40a6 <_ZN9__gnu_cxx17__normal_iteratorIP16stItemSelectRateSt6vectorIS1_SaIS1_EEEppEv>
 85d2308:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d230b:	8d 50 14             	lea    0x14(%eax),%edx
 85d230e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d2311:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d2315:	89 04 24             	mov    %eax,(%esp)
 85d2318:	e8 37 1d 00 00       	call   85d4054 <_ZNSt6vectorI16stItemSelectRateSaIS0_EE3endEv>
 85d231d:	83 ec 04             	sub    $0x4,%esp
 85d2320:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d2323:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2327:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d232a:	89 04 24             	mov    %eax,(%esp)
 85d232d:	e8 48 1d 00 00       	call   85d407a <_ZN9__gnu_cxxneIP16stItemSelectRateSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 85d2332:	84 c0                	test   %al,%al
 85d2334:	0f 85 23 ff ff ff    	jne    85d225d <_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item+0x2f5>
 85d233a:	b8 88 2f 47 09       	mov    $0x9472f88,%eax
 85d233f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 85d2342:	83 c4 00             	add    $0x0,%esp
 85d2345:	5b                   	pop    %ebx
 85d2346:	5e                   	pop    %esi
 85d2347:	5f                   	pop    %edi
 85d2348:	5d                   	pop    %ebp
 85d2349:	c3                   	ret

```

```c
// expert_job::CDisjointer::GetPredictResult @ 0x85d1f68

/* expert_job::CDisjointer::GetPredictResult(CUser*, CItem*, Inven_Item*) */

undefined1 * __thiscall
expert_job::CDisjointer::GetPredictResult
          (CDisjointer *this,CUser *param_1,CItem *param_2,Inven_Item *param_3)

{
  char cVar1;
  uchar uVar2;
  uchar uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_94 [2];
  undefined4 local_70 [3];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined4 local_5c;
  int local_58;
  DisjointMachineGrade local_54 [5];
  DisjointMachineGrade local_4f [3];
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  local_4c [4];
  int local_48;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [7];
  bool local_21;
  int *local_20;
  
  if ((GetPredictResult(CUser*,CItem*,Inven_Item*)::result == '\0') &&
     (iVar5 = __cxa_guard_acquire(), iVar5 != 0)) {
                    /* try { // try from 085d1f9e to 085d1fa2 has its CatchHandler @ 085d1fce */
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)
               GetPredictResult(CUser*,CItem*,Inven_Item*)::result);
    __cxa_guard_release();
    __cxa_atexit();
  }
  std::vector<int,std::allocator<int>>::clear
            ((vector<int,std::allocator<int>> *)GetPredictResult(CUser*,CItem*,Inven_Item*)::result)
  ;
  local_21 = false;
  if (param_3 != (Inven_Item *)0x0) {
    cVar1 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(param_3 + 0x11));
    local_21 = cVar1 != '\x01';
  }
  cVar1 = isMine(this,param_1);
  if ((cVar1 != '\0') && (iVar5 = CItem::get_rarity(param_2), 1 < iVar5)) {
    iVar5 = GetScript();
    local_58 = *(int *)(iVar5 + 0x34);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)
               GetPredictResult(CUser*,CItem*,Inven_Item*)::result,&local_58);
  }
  bVar4 = local_21;
  uVar2 = get_disjoint_machine_grade(this);
  uVar3 = CItem::get_rarity(param_2);
  DisjointMachineGrade::DisjointMachineGrade(local_4f,uVar3,uVar2,bVar4);
  GetScript();
  std::
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  ::find(local_54);
  GetScript();
  std::
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  ::end(local_4c);
  cVar1 = std::_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>>::operator!=
                    ((_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>> *)
                     local_54,(_Rb_tree_iterator *)local_4c);
  if (cVar1 != '\0') {
    iVar5 = std::_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>>::
            operator->((_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>> *)
                       local_54);
    local_20 = (int *)(iVar5 + 4);
    local_48 = *local_20;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)
               GetPredictResult(CUser*,CItem*,Inven_Item*)::result,&local_48);
    __gnu_cxx::
    __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
    ::__normal_iterator((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                         *)&local_5c);
    std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::begin();
    local_5c = local_70[0];
    piVar7 = (int *)&stack0xffffff74;
    while( true ) {
      piVar7[1] = (int)(local_20 + 2);
      *piVar7 = (int)local_44;
      piVar7[-1] = 0x85d221d;
      std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::end();
      piVar7[1] = (int)local_44;
      *piVar7 = (int)&local_5c;
      piVar7[-1] = 0x85d2232;
      bVar4 = __gnu_cxx::operator!=((__normal_iterator *)*piVar7,(__normal_iterator *)piVar7[1]);
      if (!bVar4) break;
      *piVar7 = (int)&local_5c;
      piVar7[-1] = 0x85d2168;
      iVar5 = __gnu_cxx::
              __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
              ::operator*((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                           *)*piVar7);
      piVar7[1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      *piVar7 = (int)&local_40;
      piVar7[-1] = 0x85d217d;
      std::vector<int,std::allocator<int>>::end();
      piVar7[1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      *piVar7 = (int)&local_3c;
      piVar7[-1] = 0x85d2193;
      std::vector<int,std::allocator<int>>::begin();
      piVar7[3] = iVar5;
      piVar7[2] = local_40;
      piVar7[1] = local_3c;
      *piVar7 = (int)local_60;
      piVar7[-1] = 0x85d21b3;
      std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>();
      *piVar7 = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      piVar7[-1] = (int)local_38;
      piVar7[-2] = 0x85d21c9;
      std::vector<int,std::allocator<int>>::end();
      *piVar7 = (int)local_38;
      piVar7[-1] = (int)local_60;
      piVar7[-2] = 0x85d21de;
      bVar4 = __gnu_cxx::operator==((__normal_iterator *)piVar7[-1],(__normal_iterator *)*piVar7);
      if (bVar4) {
        piVar7[-1] = (int)&local_5c;
        piVar7[-2] = 0x85d21ed;
        uVar6 = __gnu_cxx::
                __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                ::operator*((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                             *)piVar7[-1]);
        *piVar7 = uVar6;
        piVar7[-1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
        piVar7[-2] = 0x85d21fd;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)piVar7[-1],(int *)*piVar7);
      }
      piVar7[-1] = (int)&local_5c;
      piVar7[-2] = 0x85d2208;
      __gnu_cxx::
      __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
      ::operator++((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                    *)piVar7[-1]);
      piVar7 = piVar7 + -1;
    }
    piVar7[1] = (int)(local_20 + 5);
    *piVar7 = (int)local_70;
    piVar7[-1] = 0x85d224f;
    std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::begin();
    local_5c = local_70[0];
    while( true ) {
      piVar7[1] = (int)(local_20 + 5);
      *piVar7 = (int)local_34;
      piVar7[-1] = 0x85d231d;
      std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::end();
      piVar7[1] = (int)local_34;
      *piVar7 = (int)&local_5c;
      piVar7[-1] = 0x85d2332;
      bVar4 = __gnu_cxx::operator!=((__normal_iterator *)*piVar7,(__normal_iterator *)piVar7[1]);
      if (!bVar4) break;
      *piVar7 = (int)&local_5c;
      piVar7[-1] = 0x85d2268;
      iVar5 = __gnu_cxx::
              __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
              ::operator*((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                           *)*piVar7);
      piVar7[1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      *piVar7 = (int)&local_30;
      piVar7[-1] = 0x85d227d;
      std::vector<int,std::allocator<int>>::end();
      piVar7[1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      *piVar7 = (int)&local_2c;
      piVar7[-1] = 0x85d2293;
      std::vector<int,std::allocator<int>>::begin();
      piVar7[3] = iVar5;
      piVar7[2] = local_30;
      piVar7[1] = local_2c;
      *piVar7 = (int)local_64;
      piVar7[-1] = 0x85d22b3;
      std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>();
      *piVar7 = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      piVar7[-1] = (int)local_28;
      piVar7[-2] = 0x85d22c9;
      std::vector<int,std::allocator<int>>::end();
      *piVar7 = (int)local_28;
      piVar7[-1] = (int)local_64;
      piVar7[-2] = 0x85d22de;
      bVar4 = __gnu_cxx::operator==((__normal_iterator *)piVar7[-1],(__normal_iterator *)*piVar7);
      if (bVar4) {
        piVar7[-1] = (int)&local_5c;
        piVar7[-2] = 0x85d22ed;
        uVar6 = __gnu_cxx::
                __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                ::operator*((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                             *)piVar7[-1]);
        *piVar7 = uVar6;
        piVar7[-1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
        piVar7[-2] = 0x85d22fd;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)piVar7[-1],(int *)*piVar7);
      }
      piVar7[-1] = (int)&local_5c;
      piVar7[-2] = 0x85d2308;
      __gnu_cxx::
      __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
      ::operator++((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                    *)piVar7[-1]);
      piVar7 = piVar7 + -1;
    }
  }
  return GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
}

```

---

## GetScript

```asm
// === 085d1e0a expert_job::CDisjointer::GetScript  [0x085d1e0a-0x85d1e39] ===
 85d1e0a:	55                   	push   %ebp
 85d1e0b:	89 e5                	mov    %esp,%ebp
 85d1e0d:	83 ec 18             	sub    $0x18,%esp
 85d1e10:	a1 98 2f 47 09       	mov    0x9472f98,%eax
 85d1e15:	85 c0                	test   %eax,%eax
 85d1e17:	75 1a                	jne    85d1e33 <_ZN10expert_job11CDisjointer9GetScriptEv+0x29>
 85d1e19:	e8 7d a3 af ff       	call   80cc19b <_Z14G_CDataManagerv>
 85d1e1e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 85d1e25:	00 
 85d1e26:	89 04 24             	mov    %eax,(%esp)
 85d1e29:	e8 c4 97 c5 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 85d1e2e:	a3 98 2f 47 09       	mov    %eax,0x9472f98
 85d1e33:	a1 98 2f 47 09       	mov    0x9472f98,%eax
 85d1e38:	c9                   	leave
 85d1e39:	c3                   	ret

```

```c
// expert_job::CDisjointer::GetScript @ 0x85d1e0a

/* expert_job::CDisjointer::GetScript() */

int expert_job::CDisjointer::GetScript(void)

{
  int iVar1;
  
  if (GetScript()::script == 0) {
    iVar1 = G_CDataManager();
    GetScript()::script = CDataManager::GetExpertJobScript(iVar1);
  }
  return GetScript()::script;
}

```

---

## OnCloseMission

```asm
// === 085d2b74 expert_job::CDisjointer::OnCloseMission  [0x085d2b74-0x85d2cf1] ===
 85d2b74:	55                   	push   %ebp
 85d2b75:	89 e5                	mov    %esp,%ebp
 85d2b77:	56                   	push   %esi
 85d2b78:	53                   	push   %ebx
 85d2b79:	83 ec 30             	sub    $0x30,%esp
 85d2b7c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d2b7f:	89 04 24             	mov    %eax,(%esp)
 85d2b82:	e8 c5 b1 fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d2b87:	c7 44 24 08 d9 00 00 	movl   $0xd9,0x8(%esp)
 85d2b8e:	00 
 85d2b8f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2b96:	00 
 85d2b97:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d2b9a:	89 04 24             	mov    %eax,(%esp)
 85d2b9d:	e8 5a 8d af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d2ba2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2ba5:	89 04 24             	mov    %eax,(%esp)
 85d2ba8:	e8 cf 77 b0 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85d2bad:	0f b7 c0             	movzwl %ax,%eax
 85d2bb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2bb4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d2bb7:	89 04 24             	mov    %eax,(%esp)
 85d2bba:	e8 e5 72 b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d2bbf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d2bc6:	00 
 85d2bc7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d2bca:	89 04 24             	mov    %eax,(%esp)
 85d2bcd:	e8 86 8d af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d2bd2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2bd9:	00 
 85d2bda:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2bdd:	89 04 24             	mov    %eax,(%esp)
 85d2be0:	e8 d9 e7 0a 00       	call   86813be <_ZN5CUser8get_areaEb>
 85d2be5:	89 c3                	mov    %eax,%ebx
 85d2be7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2bea:	89 04 24             	mov    %eax,(%esp)
 85d2bed:	e8 72 29 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85d2bf2:	0f be f0             	movsbl %al,%esi
 85d2bf5:	e8 ad 77 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d2bfa:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85d2bfd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d2c01:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d2c05:	89 74 24 04          	mov    %esi,0x4(%esp)
 85d2c09:	89 04 24             	mov    %eax,(%esp)
 85d2c0c:	e8 57 55 0f 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 85d2c11:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2c14:	8d 70 08             	lea    0x8(%eax),%esi
 85d2c17:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2c1e:	00 
 85d2c1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2c22:	89 04 24             	mov    %eax,(%esp)
 85d2c25:	e8 94 e7 0a 00       	call   86813be <_ZN5CUser8get_areaEb>
 85d2c2a:	0f b6 d8             	movzbl %al,%ebx
 85d2c2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2c30:	89 04 24             	mov    %eax,(%esp)
 85d2c33:	e8 2c 29 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85d2c38:	0f b6 c0             	movzbl %al,%eax
 85d2c3b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d2c3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2c43:	8d 45 f6             	lea    -0xa(%ebp),%eax
 85d2c46:	89 04 24             	mov    %eax,(%esp)
 85d2c49:	e8 ec 89 ff ff       	call   85cb63a <_ZN14village_object4ZoneC1Ehh>
 85d2c4e:	a1 74 f7 41 09       	mov    0x941f774,%eax
 85d2c53:	89 74 24 08          	mov    %esi,0x8(%esp)
 85d2c57:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
 85d2c5b:	66 89 54 24 04       	mov    %dx,0x4(%esp)
 85d2c60:	89 04 24             	mov    %eax,(%esp)
 85d2c63:	e8 68 44 0e 00       	call   86b70d0 <_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE>
 85d2c68:	83 f0 01             	xor    $0x1,%eax
 85d2c6b:	84 c0                	test   %al,%al
 85d2c6d:	74 2c                	je     85d2c9b <_ZN10expert_job11CDisjointer14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0x127>
 85d2c6f:	c7 44 24 10 cd fa cb 	movl   $0x8cbfacd,0x10(%esp)
 85d2c76:	08 
 85d2c77:	c7 44 24 0c 5b 01 00 	movl   $0x15b,0xc(%esp)
 85d2c7e:	00 
 85d2c7f:	c7 44 24 08 40 07 cc 	movl   $0x8cc0740,0x8(%esp)
 85d2c86:	08 
 85d2c87:	c7 44 24 04 e5 fa cb 	movl   $0x8cbfae5,0x4(%esp)
 85d2c8e:	08 
 85d2c8f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85d2c96:	e8 6f 0f 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85d2c9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2c9e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2ca5:	00 
 85d2ca6:	89 04 24             	mov    %eax,(%esp)
 85d2ca9:	e8 08 cc c5 ff       	call   822f8b6 <_ZN15CUserCharacInfo21SetCurCharacExpertJobEPN10expert_job10CExpertJobE>
 85d2cae:	8b 55 08             	mov    0x8(%ebp),%edx
 85d2cb1:	a1 68 f7 41 09       	mov    0x941f768,%eax
 85d2cb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d2cba:	89 04 24             	mov    %eax,(%esp)
 85d2cbd:	e8 36 b5 ec ff       	call   849e1f8 <_ZN10expert_job13CExpertJobMgr13FreeExpertJobEPNS_10CExpertJobE>
 85d2cc2:	eb 1b                	jmp    85d2cdf <_ZN10expert_job11CDisjointer14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0x16b>
 85d2cc4:	89 d3                	mov    %edx,%ebx
 85d2cc6:	89 c6                	mov    %eax,%esi
 85d2cc8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d2ccb:	89 04 24             	mov    %eax,(%esp)
 85d2cce:	e8 ad b1 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d2cd3:	89 f0                	mov    %esi,%eax
 85d2cd5:	89 da                	mov    %ebx,%edx
 85d2cd7:	89 04 24             	mov    %eax,(%esp)
 85d2cda:	e8 71 0a 51 00       	call   8ae3750 <_Unwind_Resume>
 85d2cdf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d2ce2:	89 04 24             	mov    %eax,(%esp)
 85d2ce5:	e8 96 b1 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d2cea:	83 c4 30             	add    $0x30,%esp
 85d2ced:	5b                   	pop    %ebx
 85d2cee:	5e                   	pop    %esi
 85d2cef:	5d                   	pop    %ebp
 85d2cf0:	c3                   	ret
 85d2cf1:	90                   	nop

```

```c
// expert_job::CDisjointer::OnCloseMission @ 0x85d2b74

/* expert_job::CDisjointer::OnCloseMission(CUser*, expert_job::ENUM_CLOSE_MISSION_TYPE) */

void expert_job::CDisjointer::OnCloseMission(CExpertJob *param_1,CUser *param_2)

{
  char cVar1;
  uchar uVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  GameWorld *this;
  undefined2 uVar6;
  PacketGuard local_1c [14];
  undefined2 local_e;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 085d2b9d to 085d2cc1 has its CatchHandler @ 085d2cc4 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xd9);
  uVar4 = CUser::get_unique_id(param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  iVar5 = CUser::get_area(param_2,false);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_to_area(this,(int)cVar1,iVar5,local_1c);
  uVar2 = CUser::get_area(param_2,false);
  uVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  uVar6 = 0;
  village_object::Zone::Zone((Zone *)&local_e,uVar3,uVar2);
  cVar1 = village_object::CVillageObjectMgr::unregister_object
                    (GlobalData::s_villageObjectMgr,CONCAT22(uVar6,local_e),param_1 + 8);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"ProfessionDisjointer.cpp",
               "virtual void expert_job::CDisjointer::OnCloseMission(CUser*, expert_job::ENUM_CLOSE_MISSION_TYPE)"
               ,0x15b,"unregister_object error");
  }
  CUserCharacInfo::SetCurCharacExpertJob((CUserCharacInfo *)param_2,(CExpertJob *)0x0);
  CExpertJobMgr::FreeExpertJob(GlobalData::s_ExpertJobMgr,param_1);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## OnCreateDisjointStore

```asm
// === 085d2d08 expert_job::CDisjointer::OnCreateDisjointStore  [0x085d2d08-0x85d3099] ===
 85d2d08:	55                   	push   %ebp
 85d2d09:	89 e5                	mov    %esp,%ebp
 85d2d0b:	56                   	push   %esi
 85d2d0c:	53                   	push   %ebx
 85d2d0d:	83 ec 60             	sub    $0x60,%esp
 85d2d10:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 85d2d14:	78 10                	js     85d2d26 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x1e>
 85d2d16:	e8 ef f0 ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d2d1b:	8b 80 8c 02 00 00    	mov    0x28c(%eax),%eax
 85d2d21:	3b 45 14             	cmp    0x14(%ebp),%eax
 85d2d24:	7d 07                	jge    85d2d2d <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x25>
 85d2d26:	b8 01 00 00 00       	mov    $0x1,%eax
 85d2d2b:	eb 05                	jmp    85d2d32 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x2a>
 85d2d2d:	b8 00 00 00 00       	mov    $0x0,%eax
 85d2d32:	84 c0                	test   %al,%al
 85d2d34:	74 0a                	je     85d2d40 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x38>
 85d2d36:	bb 0a 00 00 00       	mov    $0xa,%ebx
 85d2d3b:	e9 50 03 00 00       	jmp    85d3090 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x388>
 85d2d40:	e8 a3 1e ff ff       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 85d2d45:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d2d48:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d2d4c:	89 04 24             	mov    %eax,(%esp)
 85d2d4f:	e8 0a 80 ff ff       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 85d2d54:	84 c0                	test   %al,%al
 85d2d56:	74 0a                	je     85d2d62 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x5a>
 85d2d58:	bb be 00 00 00       	mov    $0xbe,%ebx
 85d2d5d:	e9 2e 03 00 00       	jmp    85d3090 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x388>
 85d2d62:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2d65:	89 04 24             	mov    %eax,(%esp)
 85d2d68:	e8 f7 27 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85d2d6d:	3c 07                	cmp    $0x7,%al
 85d2d6f:	0f 94 c0             	sete   %al
 85d2d72:	84 c0                	test   %al,%al
 85d2d74:	74 0a                	je     85d2d80 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x78>
 85d2d76:	bb be 00 00 00       	mov    $0xbe,%ebx
 85d2d7b:	e9 10 03 00 00       	jmp    85d3090 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x388>
 85d2d80:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2d87:	00 
 85d2d88:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2d8b:	89 04 24             	mov    %eax,(%esp)
 85d2d8e:	e8 2b e6 0a 00       	call   86813be <_ZN5CUser8get_areaEb>
 85d2d93:	89 c3                	mov    %eax,%ebx
 85d2d95:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2d98:	89 04 24             	mov    %eax,(%esp)
 85d2d9b:	e8 c4 27 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85d2da0:	0f be f0             	movsbl %al,%esi
 85d2da3:	e8 ff 75 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d2da8:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85d2dab:	89 54 24 10          	mov    %edx,0x10(%esp)
 85d2daf:	8b 55 18             	mov    0x18(%ebp),%edx
 85d2db2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d2db6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d2dba:	89 74 24 04          	mov    %esi,0x4(%esp)
 85d2dbe:	89 04 24             	mov    %eax,(%esp)
 85d2dc1:	e8 4e 1a 0f 00       	call   86c4814 <_ZNK9GameWorld18is_available_pointEiiii>
 85d2dc6:	83 f0 01             	xor    $0x1,%eax
 85d2dc9:	84 c0                	test   %al,%al
 85d2dcb:	74 0a                	je     85d2dd7 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0xcf>
 85d2dcd:	bb be 00 00 00       	mov    $0xbe,%ebx
 85d2dd2:	e9 b9 02 00 00       	jmp    85d3090 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x388>
 85d2dd7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2dde:	00 
 85d2ddf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2de2:	89 04 24             	mov    %eax,(%esp)
 85d2de5:	e8 d4 e5 0a 00       	call   86813be <_ZN5CUser8get_areaEb>
 85d2dea:	89 c3                	mov    %eax,%ebx
 85d2dec:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2def:	89 04 24             	mov    %eax,(%esp)
 85d2df2:	e8 6d 27 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85d2df7:	0f be f0             	movsbl %al,%esi
 85d2dfa:	e8 a8 75 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d2dff:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85d2e02:	89 54 24 10          	mov    %edx,0x10(%esp)
 85d2e06:	8b 55 18             	mov    0x18(%ebp),%edx
 85d2e09:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d2e0d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d2e11:	89 74 24 04          	mov    %esi,0x4(%esp)
 85d2e15:	89 04 24             	mov    %eax,(%esp)
 85d2e18:	e8 8d 17 0f 00       	call   86c45aa <_ZN9GameWorld45check_restrictive_commercial_transaction_zoneEiiii>
 85d2e1d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d2e20:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85d2e24:	74 08                	je     85d2e2e <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x126>
 85d2e26:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85d2e29:	e9 62 02 00 00       	jmp    85d3090 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x388>
 85d2e2e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2e35:	00 
 85d2e36:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2e39:	89 04 24             	mov    %eax,(%esp)
 85d2e3c:	e8 43 a7 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d2e41:	89 04 24             	mov    %eax,(%esp)
 85d2e44:	e8 1d 10 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d2e49:	85 c0                	test   %eax,%eax
 85d2e4b:	0f 9e c0             	setle  %al
 85d2e4e:	84 c0                	test   %al,%al
 85d2e50:	74 0a                	je     85d2e5c <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x154>
 85d2e52:	bb 16 00 00 00       	mov    $0x16,%ebx
 85d2e57:	e9 34 02 00 00       	jmp    85d3090 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x388>
 85d2e5c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2e63:	00 
 85d2e64:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2e67:	89 04 24             	mov    %eax,(%esp)
 85d2e6a:	e8 15 a7 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d2e6f:	89 04 24             	mov    %eax,(%esp)
 85d2e72:	e8 17 10 00 00       	call   85d3e8e <_ZNK10expert_job16CCharacExpertJob26get_disjoint_machine_gradeEv>
 85d2e77:	0f be c0             	movsbl %al,%eax
 85d2e7a:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85d2e7d:	89 54 24 18          	mov    %edx,0x18(%esp)
 85d2e81:	8b 55 18             	mov    0x18(%ebp),%edx
 85d2e84:	89 54 24 14          	mov    %edx,0x14(%esp)
 85d2e88:	89 44 24 10          	mov    %eax,0x10(%esp)
 85d2e8c:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2e8f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85d2e93:	8b 45 10             	mov    0x10(%ebp),%eax
 85d2e96:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d2e9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2e9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2ea1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85d2ea4:	89 04 24             	mov    %eax,(%esp)
 85d2ea7:	e8 3c ec ff ff       	call   85d1ae8 <_ZN10expert_job16CDisjointMachineC1EP5CUserPKcicii>
 85d2eac:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2eaf:	8d 50 08             	lea    0x8(%eax),%edx
 85d2eb2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85d2eb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2eb9:	89 14 24             	mov    %edx,(%esp)
 85d2ebc:	e8 15 10 00 00       	call   85d3ed6 <_ZN10expert_job16CDisjointMachineaSERKS0_>
 85d2ec1:	eb 1b                	jmp    85d2ede <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x1d6>
 85d2ec3:	89 d3                	mov    %edx,%ebx
 85d2ec5:	89 c6                	mov    %eax,%esi
 85d2ec7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85d2eca:	89 04 24             	mov    %eax,(%esp)
 85d2ecd:	e8 e4 0f 00 00       	call   85d3eb6 <_ZN10expert_job16CDisjointMachineD1Ev>
 85d2ed2:	89 f0                	mov    %esi,%eax
 85d2ed4:	89 da                	mov    %ebx,%edx
 85d2ed6:	89 04 24             	mov    %eax,(%esp)
 85d2ed9:	e8 72 08 51 00       	call   8ae3750 <_Unwind_Resume>
 85d2ede:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85d2ee1:	89 04 24             	mov    %eax,(%esp)
 85d2ee4:	e8 cd 0f 00 00       	call   85d3eb6 <_ZN10expert_job16CDisjointMachineD1Ev>
 85d2ee9:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d2eec:	0f b7 d0             	movzwl %ax,%edx
 85d2eef:	8b 45 18             	mov    0x18(%ebp),%eax
 85d2ef2:	0f b7 c0             	movzwl %ax,%eax
 85d2ef5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d2efc:	00 
 85d2efd:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d2f01:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2f05:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2f08:	89 04 24             	mov    %eax,(%esp)
 85d2f0b:	e8 1a df d1 ff       	call   82f0e2a <_ZN5CUser12set_positionEttc>
 85d2f10:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2f13:	8d 70 08             	lea    0x8(%eax),%esi
 85d2f16:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2f1d:	00 
 85d2f1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2f21:	89 04 24             	mov    %eax,(%esp)
 85d2f24:	e8 95 e4 0a 00       	call   86813be <_ZN5CUser8get_areaEb>
 85d2f29:	0f b6 d8             	movzbl %al,%ebx
 85d2f2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2f2f:	89 04 24             	mov    %eax,(%esp)
 85d2f32:	e8 2d 26 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85d2f37:	0f b6 c0             	movzbl %al,%eax
 85d2f3a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d2f3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2f42:	8d 45 f2             	lea    -0xe(%ebp),%eax
 85d2f45:	89 04 24             	mov    %eax,(%esp)
 85d2f48:	e8 ed 86 ff ff       	call   85cb63a <_ZN14village_object4ZoneC1Ehh>
 85d2f4d:	a1 74 f7 41 09       	mov    0x941f774,%eax
 85d2f52:	89 74 24 08          	mov    %esi,0x8(%esp)
 85d2f56:	0f b7 55 f2          	movzwl -0xe(%ebp),%edx
 85d2f5a:	66 89 54 24 04       	mov    %dx,0x4(%esp)
 85d2f5f:	89 04 24             	mov    %eax,(%esp)
 85d2f62:	e8 f1 3f 0e 00       	call   86b6f58 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE>
 85d2f67:	83 f0 01             	xor    $0x1,%eax
 85d2f6a:	84 c0                	test   %al,%al
 85d2f6c:	74 0a                	je     85d2f78 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x270>
 85d2f6e:	bb 14 00 00 00       	mov    $0x14,%ebx
 85d2f73:	e9 18 01 00 00       	jmp    85d3090 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x388>
 85d2f78:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d2f7b:	89 04 24             	mov    %eax,(%esp)
 85d2f7e:	e8 c9 ad fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d2f83:	c7 44 24 08 ce 00 00 	movl   $0xce,0x8(%esp)
 85d2f8a:	00 
 85d2f8b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2f92:	00 
 85d2f93:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d2f96:	89 04 24             	mov    %eax,(%esp)
 85d2f99:	e8 5e 89 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d2f9e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2fa1:	8d 50 08             	lea    0x8(%eax),%edx
 85d2fa4:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d2fa7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2fab:	89 14 24             	mov    %edx,(%esp)
 85d2fae:	e8 0d ec ff ff       	call   85d1bc0 <_ZN10expert_job16CDisjointMachine25put_disjoint_machine_infoER11PacketGuard>
 85d2fb3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d2fba:	00 
 85d2fbb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d2fbe:	89 04 24             	mov    %eax,(%esp)
 85d2fc1:	e8 92 89 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d2fc6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d2fcd:	00 
 85d2fce:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2fd1:	89 04 24             	mov    %eax,(%esp)
 85d2fd4:	e8 e5 e3 0a 00       	call   86813be <_ZN5CUser8get_areaEb>
 85d2fd9:	89 c3                	mov    %eax,%ebx
 85d2fdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2fde:	89 04 24             	mov    %eax,(%esp)
 85d2fe1:	e8 7e 25 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85d2fe6:	0f be f0             	movsbl %al,%esi
 85d2fe9:	e8 b9 73 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d2fee:	8d 55 b8             	lea    -0x48(%ebp),%edx
 85d2ff1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d2ff5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d2ff9:	89 74 24 04          	mov    %esi,0x4(%esp)
 85d2ffd:	89 04 24             	mov    %eax,(%esp)
 85d3000:	e8 63 51 0f 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 85d3005:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d3008:	89 04 24             	mov    %eax,(%esp)
 85d300b:	e8 d6 88 af ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85d3010:	c7 44 24 08 ee 00 00 	movl   $0xee,0x8(%esp)
 85d3017:	00 
 85d3018:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d301f:	00 
 85d3020:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d3023:	89 04 24             	mov    %eax,(%esp)
 85d3026:	e8 d1 88 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d302b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d3032:	00 
 85d3033:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d3036:	89 04 24             	mov    %eax,(%esp)
 85d3039:	e8 e2 88 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d303e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d3045:	00 
 85d3046:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d3049:	89 04 24             	mov    %eax,(%esp)
 85d304c:	e8 07 89 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d3051:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d3054:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3058:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d305b:	89 04 24             	mov    %eax,(%esp)
 85d305e:	e8 57 55 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85d3063:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d3068:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d306b:	89 04 24             	mov    %eax,(%esp)
 85d306e:	e8 0d ae fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d3073:	eb 1b                	jmp    85d3090 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii+0x388>
 85d3075:	89 d3                	mov    %edx,%ebx
 85d3077:	89 c6                	mov    %eax,%esi
 85d3079:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d307c:	89 04 24             	mov    %eax,(%esp)
 85d307f:	e8 fc ad fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d3084:	89 f0                	mov    %esi,%eax
 85d3086:	89 da                	mov    %ebx,%edx
 85d3088:	89 04 24             	mov    %eax,(%esp)
 85d308b:	e8 c0 06 51 00       	call   8ae3750 <_Unwind_Resume>
 85d3090:	89 d8                	mov    %ebx,%eax
 85d3092:	83 c4 60             	add    $0x60,%esp
 85d3095:	5b                   	pop    %ebx
 85d3096:	5e                   	pop    %esi
 85d3097:	5d                   	pop    %ebp
 85d3098:	c3                   	ret
 85d3099:	90                   	nop

```

```c
// expert_job::CDisjointer::OnCreateDisjointStore @ 0x85d2d08

/* expert_job::CDisjointer::OnCreateDisjointStore(CUser*, char const*, int, int, int) */

int __thiscall
expert_job::CDisjointer::OnCreateDisjointStore
          (CDisjointer *this,CUser *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  uchar uVar4;
  int iVar5;
  CPrivateStoreMgr *this_00;
  GameWorld *pGVar6;
  CCharacExpertJob *pCVar7;
  undefined2 uVar8;
  PacketGuard local_4c [12];
  CDisjointMachine local_40 [46];
  undefined2 local_12;
  int local_10;
  
  if ((param_3 < 0) || (iVar5 = GetScript(), *(int *)(iVar5 + 0x28c) < param_3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    iVar5 = 10;
  }
  else {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
    if (cVar2 == '\0') {
      cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      if (cVar2 == '\a') {
        iVar5 = 0xbe;
      }
      else {
        iVar5 = CUser::get_area(param_1,false);
        cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
        pGVar6 = (GameWorld *)G_GameWorld();
        cVar2 = GameWorld::is_available_point(pGVar6,(int)cVar2,iVar5,param_4,param_5);
        if (cVar2 == '\x01') {
          iVar5 = CUser::get_area(param_1,false);
          cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
          pGVar6 = (GameWorld *)G_GameWorld();
          iVar5 = GameWorld::check_restrictive_commercial_transaction_zone
                            (pGVar6,(int)cVar2,iVar5,param_4,param_5);
          if (iVar5 == 0) {
            local_10 = iVar5;
            pCVar7 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
            iVar5 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar7);
            if (iVar5 < 1) {
              iVar5 = 0x16;
            }
            else {
              pCVar7 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
              cVar2 = CCharacExpertJob::get_disjoint_machine_grade(pCVar7);
              CDisjointMachine::CDisjointMachine
                        (local_40,param_1,param_2,param_3,cVar2,param_4,param_5);
                    /* try { // try from 085d2ebc to 085d2ec0 has its CatchHandler @ 085d2ec3 */
              CDisjointMachine::operator=((CDisjointMachine *)(this + 8),local_40);
              CDisjointMachine::~CDisjointMachine(local_40);
              CUser::set_position(param_1,(ushort)param_4,(ushort)param_5,'\0');
              uVar3 = CUser::get_area(param_1,false);
              uVar4 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
              uVar8 = 0;
              village_object::Zone::Zone((Zone *)&local_12,uVar4,uVar3);
              cVar2 = village_object::CVillageObjectMgr::register_object
                                (GlobalData::s_villageObjectMgr,CONCAT22(uVar8,local_12),this + 8);
              if (cVar2 == '\x01') {
                PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 085d2f99 to 085d3062 has its CatchHandler @ 085d3075 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,0,0xce);
                CDisjointMachine::put_disjoint_machine_info((CDisjointMachine *)(this + 8),local_4c)
                ;
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
                iVar5 = CUser::get_area(param_1,false);
                cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
                pGVar6 = (GameWorld *)G_GameWorld();
                GameWorld::send_to_area(pGVar6,(int)cVar2,iVar5,local_4c);
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_4c);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,1,0xee);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
                CUser::Send(param_1,local_4c);
                iVar5 = 0;
                PacketGuard::~PacketGuard(local_4c);
              }
              else {
                iVar5 = 0x14;
              }
            }
          }
        }
        else {
          iVar5 = 0xbe;
        }
      }
    }
    else {
      iVar5 = 0xbe;
    }
  }
  return iVar5;
}

```

---

## OnEnterDisjointStore

```asm
// === 085d309a expert_job::CDisjointer::OnEnterDisjointStore  [0x085d309a-0x85d319f] ===
 85d309a:	55                   	push   %ebp
 85d309b:	89 e5                	mov    %esp,%ebp
 85d309d:	56                   	push   %esi
 85d309e:	53                   	push   %ebx
 85d309f:	83 ec 20             	sub    $0x20,%esp
 85d30a2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d30a5:	89 04 24             	mov    %eax,(%esp)
 85d30a8:	e8 9f ac fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d30ad:	c7 44 24 08 f5 00 00 	movl   $0xf5,0x8(%esp)
 85d30b4:	00 
 85d30b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d30bc:	00 
 85d30bd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d30c0:	89 04 24             	mov    %eax,(%esp)
 85d30c3:	e8 34 88 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d30c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d30cf:	00 
 85d30d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d30d3:	89 04 24             	mov    %eax,(%esp)
 85d30d6:	e8 45 88 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d30db:	8b 45 08             	mov    0x8(%ebp),%eax
 85d30de:	89 04 24             	mov    %eax,(%esp)
 85d30e1:	e8 24 ee ff ff       	call   85d1f0a <_ZN10expert_job11CDisjointer26get_disjoint_machine_gradeEv>
 85d30e6:	83 c0 01             	add    $0x1,%eax
 85d30e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d30ed:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d30f0:	89 04 24             	mov    %eax,(%esp)
 85d30f3:	e8 28 88 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d30f8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d30fb:	89 04 24             	mov    %eax,(%esp)
 85d30fe:	e8 4d 0d 00 00       	call   85d3e50 <_ZNK10expert_job11CDisjointer17get_disjoint_costEv>
 85d3103:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3107:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d310a:	89 04 24             	mov    %eax,(%esp)
 85d310d:	e8 2a 88 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d3112:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3115:	83 c0 08             	add    $0x8,%eax
 85d3118:	89 04 24             	mov    %eax,(%esp)
 85d311b:	e8 c0 16 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d3120:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d3127:	00 
 85d3128:	89 04 24             	mov    %eax,(%esp)
 85d312b:	e8 54 a4 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d3130:	89 04 24             	mov    %eax,(%esp)
 85d3133:	e8 2e 0d 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d3138:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d313c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d313f:	89 04 24             	mov    %eax,(%esp)
 85d3142:	e8 f5 87 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d3147:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d314e:	00 
 85d314f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d3152:	89 04 24             	mov    %eax,(%esp)
 85d3155:	e8 fe 87 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d315a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d315d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3161:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d3164:	89 04 24             	mov    %eax,(%esp)
 85d3167:	e8 4e 54 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85d316c:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d3171:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d3174:	89 04 24             	mov    %eax,(%esp)
 85d3177:	e8 04 ad fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d317c:	89 d8                	mov    %ebx,%eax
 85d317e:	83 c4 20             	add    $0x20,%esp
 85d3181:	5b                   	pop    %ebx
 85d3182:	5e                   	pop    %esi
 85d3183:	5d                   	pop    %ebp
 85d3184:	c3                   	ret
 85d3185:	89 d3                	mov    %edx,%ebx
 85d3187:	89 c6                	mov    %eax,%esi
 85d3189:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d318c:	89 04 24             	mov    %eax,(%esp)
 85d318f:	e8 ec ac fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d3194:	89 f0                	mov    %esi,%eax
 85d3196:	89 da                	mov    %ebx,%edx
 85d3198:	89 04 24             	mov    %eax,(%esp)
 85d319b:	e8 b0 05 51 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// expert_job::CDisjointer::OnEnterDisjointStore @ 0x85d309a

/* expert_job::CDisjointer::OnEnterDisjointStore(CUser*) */

undefined4 __thiscall
expert_job::CDisjointer::OnEnterDisjointStore(CDisjointer *this,CUser *param_1)

{
  int iVar1;
  CUser *pCVar2;
  CCharacExpertJob *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085d30c3 to 085d316b has its CatchHandler @ 085d3185 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0xf5);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  iVar1 = get_disjoint_machine_grade(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,iVar1 + 1);
  iVar1 = get_disjoint_cost(this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  pCVar2 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  this_00 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar2,0);
  iVar1 = CCharacExpertJob::get_disjoint_machine_endurance(this_00);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 0;
}

```

---

## OnRepairDisjointMachine

```asm
// === 085d35ce expert_job::CDisjointer::OnRepairDisjointMachine  [0x085d35ce-0x85d37e7] ===
 85d35ce:	55                   	push   %ebp
 85d35cf:	89 e5                	mov    %esp,%ebp
 85d35d1:	56                   	push   %esi
 85d35d2:	53                   	push   %ebx
 85d35d3:	83 ec 30             	sub    $0x30,%esp
 85d35d6:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85d35dd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d35e4:	00 
 85d35e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d35e8:	89 04 24             	mov    %eax,(%esp)
 85d35eb:	e8 94 9f b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d35f0:	89 04 24             	mov    %eax,(%esp)
 85d35f3:	e8 6e 08 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d35f8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d35fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d3602:	00 
 85d3603:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3606:	89 04 24             	mov    %eax,(%esp)
 85d3609:	e8 76 9f b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d360e:	89 04 24             	mov    %eax,(%esp)
 85d3611:	e8 78 08 00 00       	call   85d3e8e <_ZNK10expert_job16CCharacExpertJob26get_disjoint_machine_gradeEv>
 85d3616:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d3619:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d361c:	8d 58 01             	lea    0x1(%eax),%ebx
 85d361f:	e8 e6 e7 ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d3624:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85d3627:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d362b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d362f:	89 04 24             	mov    %eax,(%esp)
 85d3632:	e8 3d 06 00 00       	call   85d3c74 <_ZN17STExpertJobScript28GetDisjointMachineRepairCostEii>
 85d3637:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d363a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d363d:	89 04 24             	mov    %eax,(%esp)
 85d3640:	e8 43 6b ba ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 85d3645:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85d3648:	39 d0                	cmp    %edx,%eax
 85d364a:	0f 9c c0             	setl   %al
 85d364d:	84 c0                	test   %al,%al
 85d364f:	74 37                	je     85d3688 <_ZN10expert_job11CDisjointer23OnRepairDisjointMachineEP5CUser+0xba>
 85d3651:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3654:	89 04 24             	mov    %eax,(%esp)
 85d3657:	e8 2c 6b ba ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 85d365c:	89 c3                	mov    %eax,%ebx
 85d365e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d3661:	8d 70 01             	lea    0x1(%eax),%esi
 85d3664:	e8 a1 e7 ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d3669:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85d366c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d3670:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d3674:	89 74 24 04          	mov    %esi,0x4(%esp)
 85d3678:	89 04 24             	mov    %eax,(%esp)
 85d367b:	e8 48 06 00 00       	call   85d3cc8 <_ZN17STExpertJobScript24GetDisjointMachineRepairEiiRi>
 85d3680:	03 45 ec             	add    -0x14(%ebp),%eax
 85d3683:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85d3686:	eb 2b                	jmp    85d36b3 <_ZN10expert_job11CDisjointer23OnRepairDisjointMachineEP5CUser+0xe5>
 85d3688:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d368b:	83 c0 01             	add    $0x1,%eax
 85d368e:	89 c3                	mov    %eax,%ebx
 85d3690:	e8 75 e7 ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d3695:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d3699:	89 04 24             	mov    %eax,(%esp)
 85d369c:	e8 85 05 00 00       	call   85d3c26 <_ZN17STExpertJobScript23_GetEnduranceRepairCostEj>
 85d36a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d36a4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85d36a8:	74 09                	je     85d36b3 <_ZN10expert_job11CDisjointer23OnRepairDisjointMachineEP5CUser+0xe5>
 85d36aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d36ad:	8b 40 04             	mov    0x4(%eax),%eax
 85d36b0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85d36b3:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 85d36b7:	7f 0a                	jg     85d36c3 <_ZN10expert_job11CDisjointer23OnRepairDisjointMachineEP5CUser+0xf5>
 85d36b9:	bb 16 00 00 00       	mov    $0x16,%ebx
 85d36be:	e9 1b 01 00 00       	jmp    85d37de <_ZN10expert_job11CDisjointer23OnRepairDisjointMachineEP5CUser+0x210>
 85d36c3:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85d36c6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d36c9:	89 04 24             	mov    %eax,(%esp)
 85d36cc:	e8 bd 6b b0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85d36d1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85d36d8:	00 
 85d36d9:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 85d36e0:	00 
 85d36e1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d36e5:	89 04 24             	mov    %eax,(%esp)
 85d36e8:	e8 5f be f2 ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 85d36ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d36f4:	00 
 85d36f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d36f8:	89 04 24             	mov    %eax,(%esp)
 85d36fb:	e8 84 9e b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d3700:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85d3703:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d3707:	89 04 24             	mov    %eax,(%esp)
 85d370a:	e8 63 07 00 00       	call   85d3e72 <_ZN10expert_job16CCharacExpertJob30set_disjoint_machine_enduranceEi>
 85d370f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85d3712:	89 04 24             	mov    %eax,(%esp)
 85d3715:	e8 32 a6 fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d371a:	c7 44 24 08 f0 00 00 	movl   $0xf0,0x8(%esp)
 85d3721:	00 
 85d3722:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d3729:	00 
 85d372a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85d372d:	89 04 24             	mov    %eax,(%esp)
 85d3730:	e8 c7 81 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d3735:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d373c:	00 
 85d373d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85d3740:	89 04 24             	mov    %eax,(%esp)
 85d3743:	e8 d8 81 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d3748:	8b 45 08             	mov    0x8(%ebp),%eax
 85d374b:	89 04 24             	mov    %eax,(%esp)
 85d374e:	e8 35 6a ba ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 85d3753:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3757:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85d375a:	89 04 24             	mov    %eax,(%esp)
 85d375d:	e8 da 81 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d3762:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d3769:	00 
 85d376a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d376d:	89 04 24             	mov    %eax,(%esp)
 85d3770:	e8 0f 9e b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d3775:	89 04 24             	mov    %eax,(%esp)
 85d3778:	e8 e9 06 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d377d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3781:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85d3784:	89 04 24             	mov    %eax,(%esp)
 85d3787:	e8 b0 81 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d378c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d3793:	00 
 85d3794:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85d3797:	89 04 24             	mov    %eax,(%esp)
 85d379a:	e8 b9 81 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d379f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85d37a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d37a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d37a9:	89 04 24             	mov    %eax,(%esp)
 85d37ac:	e8 09 4e 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85d37b1:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d37b6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85d37b9:	89 04 24             	mov    %eax,(%esp)
 85d37bc:	e8 bf a6 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d37c1:	eb 1b                	jmp    85d37de <_ZN10expert_job11CDisjointer23OnRepairDisjointMachineEP5CUser+0x210>
 85d37c3:	89 d3                	mov    %edx,%ebx
 85d37c5:	89 c6                	mov    %eax,%esi
 85d37c7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85d37ca:	89 04 24             	mov    %eax,(%esp)
 85d37cd:	e8 ae a6 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d37d2:	89 f0                	mov    %esi,%eax
 85d37d4:	89 da                	mov    %ebx,%edx
 85d37d6:	89 04 24             	mov    %eax,(%esp)
 85d37d9:	e8 72 ff 50 00       	call   8ae3750 <_Unwind_Resume>
 85d37de:	89 d8                	mov    %ebx,%eax
 85d37e0:	83 c4 30             	add    $0x30,%esp
 85d37e3:	5b                   	pop    %ebx
 85d37e4:	5e                   	pop    %esi
 85d37e5:	5d                   	pop    %ebp
 85d37e6:	c3                   	ret
 85d37e7:	90                   	nop

```

```c
// expert_job::CDisjointer::OnRepairDisjointMachine @ 0x85d35ce

/* expert_job::CDisjointer::OnRepairDisjointMachine(CUser*) */

undefined4 expert_job::CDisjointer::OnRepairDisjointMachine(CUser *param_1)

{
  CCharacExpertJob *pCVar1;
  STExpertJobScript *pSVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  PacketGuard local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = 0;
  pCVar1 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
  local_18 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar1);
  pCVar1 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
  local_14 = CCharacExpertJob::get_disjoint_machine_grade(pCVar1);
  iVar3 = local_14 + 1;
  pSVar2 = (STExpertJobScript *)GetScript();
  local_20 = STExpertJobScript::GetDisjointMachineRepairCost(pSVar2,iVar3,local_18);
  iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
  if (iVar3 < local_20) {
    iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    iVar3 = local_14 + 1;
    pSVar2 = (STExpertJobScript *)GetScript();
    local_1c = STExpertJobScript::GetDisjointMachineRepair(pSVar2,iVar3,iVar4,&local_20);
    local_1c = local_1c + local_18;
  }
  else {
    uVar5 = local_14 + 1;
    pSVar2 = (STExpertJobScript *)GetScript();
    local_10 = STExpertJobScript::_GetEnduranceRepairCost(pSVar2,uVar5);
    if (local_10 != 0) {
      local_1c = *(int *)(local_10 + 4);
    }
  }
  iVar3 = local_20;
  if (local_1c < 1) {
    uVar7 = 0x16;
  }
  else {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::use_money(pCVar6,iVar3,0x20,1);
    pCVar1 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
    CCharacExpertJob::set_disjoint_machine_endurance(pCVar1,local_1c);
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 085d3730 to 085d37b0 has its CatchHandler @ 085d37c3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xf0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
    iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,iVar3);
    pCVar1 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
    iVar3 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,iVar3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CUser::Send(param_1,local_2c);
    uVar7 = 0;
    PacketGuard::~PacketGuard(local_2c);
  }
  return uVar7;
}

```

---

## OnStartMission

```asm
// === 085d2a16 expert_job::CDisjointer::OnStartMission  [0x085d2a16-0x85d2b73] ===
 85d2a16:	55                   	push   %ebp
 85d2a17:	89 e5                	mov    %esp,%ebp
 85d2a19:	53                   	push   %ebx
 85d2a1a:	83 ec 14             	sub    $0x14,%esp
 85d2a1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2a20:	3b 45 10             	cmp    0x10(%ebp),%eax
 85d2a23:	74 26                	je     85d2a4b <_ZN10expert_job11CDisjointer14OnStartMissionEP5CUserS2_+0x35>
 85d2a25:	8b 45 10             	mov    0x10(%ebp),%eax
 85d2a28:	89 04 24             	mov    %eax,(%esp)
 85d2a2b:	e8 58 77 ba ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 85d2a30:	89 c3                	mov    %eax,%ebx
 85d2a32:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2a35:	83 c0 08             	add    $0x8,%eax
 85d2a38:	89 04 24             	mov    %eax,(%esp)
 85d2a3b:	e8 c6 13 00 00       	call   85d3e06 <_ZNK10expert_job16CDisjointMachine8get_costEv>
 85d2a40:	39 c3                	cmp    %eax,%ebx
 85d2a42:	7d 07                	jge    85d2a4b <_ZN10expert_job11CDisjointer14OnStartMissionEP5CUserS2_+0x35>
 85d2a44:	b8 01 00 00 00       	mov    $0x1,%eax
 85d2a49:	eb 05                	jmp    85d2a50 <_ZN10expert_job11CDisjointer14OnStartMissionEP5CUserS2_+0x3a>
 85d2a4b:	b8 00 00 00 00       	mov    $0x0,%eax
 85d2a50:	84 c0                	test   %al,%al
 85d2a52:	74 2c                	je     85d2a80 <_ZN10expert_job11CDisjointer14OnStartMissionEP5CUserS2_+0x6a>
 85d2a54:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 85d2a5b:	e8 a0 2d 15 00       	call   8725800 <__cxa_allocate_exception>
 85d2a60:	89 c2                	mov    %eax,%edx
 85d2a62:	c7 02 15 00 00 00    	movl   $0x15,(%edx)
 85d2a68:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85d2a6f:	00 
 85d2a70:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 85d2a77:	08 
 85d2a78:	89 04 24             	mov    %eax,(%esp)
 85d2a7b:	e8 d0 21 15 00       	call   8724c50 <__cxa_throw>
 85d2a80:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2a83:	83 c0 08             	add    $0x8,%eax
 85d2a86:	89 04 24             	mov    %eax,(%esp)
 85d2a89:	e8 78 13 00 00       	call   85d3e06 <_ZNK10expert_job16CDisjointMachine8get_costEv>
 85d2a8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2a92:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2a95:	89 04 24             	mov    %eax,(%esp)
 85d2a98:	e8 7f 84 09 00       	call   866af1c <_ZN5CUser10CheckMoneyEi>
 85d2a9d:	83 f0 01             	xor    $0x1,%eax
 85d2aa0:	84 c0                	test   %al,%al
 85d2aa2:	74 72                	je     85d2b16 <_ZN10expert_job11CDisjointer14OnStartMissionEP5CUserS2_+0x100>
 85d2aa4:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 85d2aab:	00 
 85d2aac:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2aaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2ab3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2ab6:	89 04 24             	mov    %eax,(%esp)
 85d2ab9:	e8 a4 f3 ff ff       	call   85d1e62 <_ZN10expert_job11CDisjointer10send_errorEP5CUseri>
 85d2abe:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2ac1:	8b 00                	mov    (%eax),%eax
 85d2ac3:	83 c0 04             	add    $0x4,%eax
 85d2ac6:	8b 18                	mov    (%eax),%ebx
 85d2ac8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2acb:	83 c0 08             	add    $0x8,%eax
 85d2ace:	89 04 24             	mov    %eax,(%esp)
 85d2ad1:	e8 0a 1d c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d2ad6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85d2add:	00 
 85d2ade:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2ae2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2ae5:	89 04 24             	mov    %eax,(%esp)
 85d2ae8:	ff d3                	call   *%ebx
 85d2aea:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 85d2af1:	e8 0a 2d 15 00       	call   8725800 <__cxa_allocate_exception>
 85d2af6:	89 c2                	mov    %eax,%edx
 85d2af8:	c7 02 0a 00 00 00    	movl   $0xa,(%edx)
 85d2afe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85d2b05:	00 
 85d2b06:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 85d2b0d:	08 
 85d2b0e:	89 04 24             	mov    %eax,(%esp)
 85d2b11:	e8 3a 21 15 00       	call   8724c50 <__cxa_throw>
 85d2b16:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2b19:	89 04 24             	mov    %eax,(%esp)
 85d2b1c:	e8 03 f4 ff ff       	call   85d1f24 <_ZN10expert_job11CDisjointer24check_disjoint_enduranceEv>
 85d2b21:	83 f0 01             	xor    $0x1,%eax
 85d2b24:	84 c0                	test   %al,%al
 85d2b26:	74 46                	je     85d2b6e <_ZN10expert_job11CDisjointer14OnStartMissionEP5CUserS2_+0x158>
 85d2b28:	c7 44 24 08 bd 00 00 	movl   $0xbd,0x8(%esp)
 85d2b2f:	00 
 85d2b30:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d2b33:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2b37:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2b3a:	89 04 24             	mov    %eax,(%esp)
 85d2b3d:	e8 20 f3 ff ff       	call   85d1e62 <_ZN10expert_job11CDisjointer10send_errorEP5CUseri>
 85d2b42:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 85d2b49:	e8 b2 2c 15 00       	call   8725800 <__cxa_allocate_exception>
 85d2b4e:	89 c2                	mov    %eax,%edx
 85d2b50:	c7 02 bd 00 00 00    	movl   $0xbd,(%edx)
 85d2b56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85d2b5d:	00 
 85d2b5e:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 85d2b65:	08 
 85d2b66:	89 04 24             	mov    %eax,(%esp)
 85d2b69:	e8 e2 20 15 00       	call   8724c50 <__cxa_throw>
 85d2b6e:	83 c4 14             	add    $0x14,%esp
 85d2b71:	5b                   	pop    %ebx
 85d2b72:	5d                   	pop    %ebp
 85d2b73:	c3                   	ret

```

```c
// expert_job::CDisjointer::OnStartMission @ 0x85d2a16

/* expert_job::CDisjointer::OnStartMission(CUser*, CUser*) */

void __thiscall
expert_job::CDisjointer::OnStartMission(CDisjointer *this,CUser *param_1,CUser *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (param_1 != param_2) {
    iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_2);
    iVar5 = CDisjointMachine::get_cost((CDisjointMachine *)(this + 8));
    if (iVar4 < iVar5) {
      bVar2 = true;
      goto LAB_085d2a50;
    }
  }
  bVar2 = false;
LAB_085d2a50:
  if (bVar2) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CDisjointMachine::get_cost((CDisjointMachine *)(this + 8));
  cVar3 = CUser::CheckMoney(param_1,iVar4);
  if (cVar3 != '\x01') {
    send_error(this,param_1,10);
    pcVar1 = *(code **)(*(int *)this + 4);
    uVar7 = CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    (*pcVar1)(this,uVar7,0);
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar3 = check_disjoint_endurance(this);
  if (cVar3 != '\x01') {
    send_error(this,param_1,0xbd);
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0xbd;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  return;
}

```

---

## OnUpgradeDisjointMachine

```asm
// === 085d37e8 expert_job::CDisjointer::OnUpgradeDisjointMachine  [0x085d37e8-0x85d3aca] ===
 85d37e8:	55                   	push   %ebp
 85d37e9:	89 e5                	mov    %esp,%ebp
 85d37eb:	56                   	push   %esi
 85d37ec:	53                   	push   %ebx
 85d37ed:	83 ec 40             	sub    $0x40,%esp
 85d37f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d37f7:	00 
 85d37f8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d37fb:	89 04 24             	mov    %eax,(%esp)
 85d37fe:	e8 81 9d b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d3803:	89 04 24             	mov    %eax,(%esp)
 85d3806:	e8 83 06 00 00       	call   85d3e8e <_ZNK10expert_job16CCharacExpertJob26get_disjoint_machine_gradeEv>
 85d380b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85d380e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d3811:	8d 58 01             	lea    0x1(%eax),%ebx
 85d3814:	e8 f1 e5 ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d3819:	89 04 24             	mov    %eax,(%esp)
 85d381c:	e8 ed 03 00 00       	call   85d3c0e <_ZN17STExpertJobScript26GetDisjointMachineMaxGradeEv>
 85d3821:	39 c3                	cmp    %eax,%ebx
 85d3823:	0f 9d c0             	setge  %al
 85d3826:	84 c0                	test   %al,%al
 85d3828:	74 0a                	je     85d3834 <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x4c>
 85d382a:	bb 13 00 00 00       	mov    $0x13,%ebx
 85d382f:	e9 8b 02 00 00       	jmp    85d3abf <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x2d7>
 85d3834:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3837:	89 04 24             	mov    %eax,(%esp)
 85d383a:	e8 e7 17 da ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 85d383f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3843:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3846:	89 04 24             	mov    %eax,(%esp)
 85d3849:	e8 2e 84 0b 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 85d384e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d3851:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d3854:	83 c0 01             	add    $0x1,%eax
 85d3857:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85d385a:	7c 0a                	jl     85d3866 <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x7e>
 85d385c:	bb 13 00 00 00       	mov    $0x13,%ebx
 85d3861:	e9 59 02 00 00       	jmp    85d3abf <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x2d7>
 85d3866:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d3869:	83 c0 02             	add    $0x2,%eax
 85d386c:	88 45 e3             	mov    %al,-0x1d(%ebp)
 85d386f:	e8 c6 e5 ff ff       	call   85d1e3a <_ZN10expert_job11CDisjointer12GetEtcScriptEv>
 85d3874:	89 c2                	mov    %eax,%edx
 85d3876:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d3879:	8d 4d e3             	lea    -0x1d(%ebp),%ecx
 85d387c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d3880:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d3884:	89 04 24             	mov    %eax,(%esp)
 85d3887:	e8 ba c4 ec ff       	call   849fd46 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE4findERS3_>
 85d388c:	83 ec 04             	sub    $0x4,%esp
 85d388f:	e8 a6 e5 ff ff       	call   85d1e3a <_ZN10expert_job11CDisjointer12GetEtcScriptEv>
 85d3894:	89 c2                	mov    %eax,%edx
 85d3896:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85d3899:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d389d:	89 04 24             	mov    %eax,(%esp)
 85d38a0:	e8 db c8 e7 ff       	call   8450180 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 85d38a5:	83 ec 04             	sub    $0x4,%esp
 85d38a8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85d38ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d38af:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d38b2:	89 04 24             	mov    %eax,(%esp)
 85d38b5:	e8 ec c8 e7 ff       	call   84501a6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEneERKS3_>
 85d38ba:	84 c0                	test   %al,%al
 85d38bc:	74 30                	je     85d38ee <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x106>
 85d38be:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d38c1:	89 04 24             	mov    %eax,(%esp)
 85d38c4:	e8 f1 c8 e7 ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 85d38c9:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85d38cd:	0f bf d8             	movswl %ax,%ebx
 85d38d0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d38d3:	89 04 24             	mov    %eax,(%esp)
 85d38d6:	e8 dd 69 b0 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 85d38db:	39 c3                	cmp    %eax,%ebx
 85d38dd:	0f 9f c0             	setg   %al
 85d38e0:	84 c0                	test   %al,%al
 85d38e2:	74 14                	je     85d38f8 <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x110>
 85d38e4:	bb 0e 00 00 00       	mov    $0xe,%ebx
 85d38e9:	e9 d1 01 00 00       	jmp    85d3abf <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x2d7>
 85d38ee:	bb 13 00 00 00       	mov    $0x13,%ebx
 85d38f3:	e9 c7 01 00 00       	jmp    85d3abf <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x2d7>
 85d38f8:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 85d38fc:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 85d38ff:	e8 06 e5 ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d3904:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d3908:	89 04 24             	mov    %eax,(%esp)
 85d390b:	e8 2a 04 00 00       	call   85d3d3a <_ZN17STExpertJobScript14GetUpgradeCostEj>
 85d3910:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d3913:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85d3917:	78 06                	js     85d391f <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x137>
 85d3919:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85d391d:	75 0a                	jne    85d3929 <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x141>
 85d391f:	bb 16 00 00 00       	mov    $0x16,%ebx
 85d3924:	e9 96 01 00 00       	jmp    85d3abf <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x2d7>
 85d3929:	8b 45 08             	mov    0x8(%ebp),%eax
 85d392c:	89 04 24             	mov    %eax,(%esp)
 85d392f:	e8 54 68 ba ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 85d3934:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85d3937:	0f 9c c0             	setl   %al
 85d393a:	84 c0                	test   %al,%al
 85d393c:	74 0a                	je     85d3948 <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x160>
 85d393e:	bb 16 00 00 00       	mov    $0x16,%ebx
 85d3943:	e9 77 01 00 00       	jmp    85d3abf <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x2d7>
 85d3948:	8b 45 08             	mov    0x8(%ebp),%eax
 85d394b:	89 04 24             	mov    %eax,(%esp)
 85d394e:	e8 3b 69 b0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85d3953:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85d395a:	00 
 85d395b:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 85d3962:	00 
 85d3963:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85d3966:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d396a:	89 04 24             	mov    %eax,(%esp)
 85d396d:	e8 da bb f2 ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 85d3972:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d3979:	00 
 85d397a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d397d:	89 04 24             	mov    %eax,(%esp)
 85d3980:	e8 ff 9b b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d3985:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85d3988:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d398c:	89 04 24             	mov    %eax,(%esp)
 85d398f:	e8 06 05 00 00       	call   85d3e9a <_ZN10expert_job16CCharacExpertJob26set_disjoint_machine_gradeEi>
 85d3994:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d3997:	83 c0 01             	add    $0x1,%eax
 85d399a:	89 c3                	mov    %eax,%ebx
 85d399c:	e8 69 e4 ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d39a1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d39a5:	89 04 24             	mov    %eax,(%esp)
 85d39a8:	e8 79 02 00 00       	call   85d3c26 <_ZN17STExpertJobScript23_GetEnduranceRepairCostEj>
 85d39ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d39b0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85d39b4:	74 25                	je     85d39db <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x1f3>
 85d39b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d39b9:	8b 58 04             	mov    0x4(%eax),%ebx
 85d39bc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d39c3:	00 
 85d39c4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d39c7:	89 04 24             	mov    %eax,(%esp)
 85d39ca:	e8 b5 9b b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d39cf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d39d3:	89 04 24             	mov    %eax,(%esp)
 85d39d6:	e8 97 04 00 00       	call   85d3e72 <_ZN10expert_job16CCharacExpertJob30set_disjoint_machine_enduranceEi>
 85d39db:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d39de:	89 04 24             	mov    %eax,(%esp)
 85d39e1:	e8 66 a3 fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d39e6:	c7 44 24 08 f4 00 00 	movl   $0xf4,0x8(%esp)
 85d39ed:	00 
 85d39ee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d39f5:	00 
 85d39f6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d39f9:	89 04 24             	mov    %eax,(%esp)
 85d39fc:	e8 fb 7e af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d3a01:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d3a08:	00 
 85d3a09:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3a0c:	89 04 24             	mov    %eax,(%esp)
 85d3a0f:	e8 0c 7f af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d3a14:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3a17:	89 04 24             	mov    %eax,(%esp)
 85d3a1a:	e8 69 67 ba ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 85d3a1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3a23:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3a26:	89 04 24             	mov    %eax,(%esp)
 85d3a29:	e8 0e 7f af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d3a2e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d3a31:	83 c0 01             	add    $0x1,%eax
 85d3a34:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3a38:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3a3b:	89 04 24             	mov    %eax,(%esp)
 85d3a3e:	e8 f9 7e af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d3a43:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d3a4a:	00 
 85d3a4b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3a4e:	89 04 24             	mov    %eax,(%esp)
 85d3a51:	e8 2e 9b b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d3a56:	89 04 24             	mov    %eax,(%esp)
 85d3a59:	e8 08 04 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d3a5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3a62:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3a65:	89 04 24             	mov    %eax,(%esp)
 85d3a68:	e8 cf 7e af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d3a6d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d3a74:	00 
 85d3a75:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3a78:	89 04 24             	mov    %eax,(%esp)
 85d3a7b:	e8 d8 7e af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d3a80:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3a83:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3a87:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3a8a:	89 04 24             	mov    %eax,(%esp)
 85d3a8d:	e8 28 4b 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85d3a92:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d3a97:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3a9a:	89 04 24             	mov    %eax,(%esp)
 85d3a9d:	e8 de a3 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d3aa2:	eb 1b                	jmp    85d3abf <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser+0x2d7>
 85d3aa4:	89 d3                	mov    %edx,%ebx
 85d3aa6:	89 c6                	mov    %eax,%esi
 85d3aa8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3aab:	89 04 24             	mov    %eax,(%esp)
 85d3aae:	e8 cd a3 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d3ab3:	89 f0                	mov    %esi,%eax
 85d3ab5:	89 da                	mov    %ebx,%edx
 85d3ab7:	89 04 24             	mov    %eax,(%esp)
 85d3aba:	e8 91 fc 50 00       	call   8ae3750 <_Unwind_Resume>
 85d3abf:	89 d8                	mov    %ebx,%eax
 85d3ac1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85d3ac4:	83 c4 00             	add    $0x0,%esp
 85d3ac7:	5b                   	pop    %ebx
 85d3ac8:	5e                   	pop    %esi
 85d3ac9:	5d                   	pop    %ebp
 85d3aca:	c3                   	ret

```

```c
// expert_job::CDisjointer::OnUpgradeDisjointMachine @ 0x85d37e8

/* expert_job::CDisjointer::OnUpgradeDisjointMachine(CUser*) */

undefined4 expert_job::CDisjointer::OnUpgradeDisjointMachine(CUser *param_1)

{
  short sVar1;
  char cVar2;
  CCharacExpertJob *pCVar3;
  STExpertJobScript *pSVar4;
  int iVar5;
  int iVar6;
  CInventory *pCVar7;
  uint uVar8;
  undefined4 uVar9;
  PacketGuard local_34 [12];
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_28 [7];
  char local_21;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_20 [4];
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pCVar3 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
  local_1c = CCharacExpertJob::get_disjoint_machine_grade(pCVar3);
  iVar6 = local_1c + 1;
  pSVar4 = (STExpertJobScript *)GetScript();
  iVar5 = STExpertJobScript::GetDisjointMachineMaxGrade(pSVar4);
  if (iVar6 < iVar5) {
    iVar6 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
    local_18 = CUser::GetCurExpertJobLevel(param_1,iVar6);
    if ((int)(local_1c + 1) < local_18) {
      local_21 = (char)local_1c + '\x02';
      GetEtcScript();
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::find((uchar *)local_28);
      GetEtcScript();
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                        (local_28,(_Rb_tree_iterator *)local_20);
      if (cVar2 == '\0') {
        uVar9 = 0x13;
      }
      else {
        iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_28);
        sVar1 = *(short *)(iVar6 + 2);
        iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        if (iVar6 < sVar1) {
          uVar9 = 0xe;
        }
        else {
          uVar8 = local_1c + 1;
          local_1c = uVar8;
          pSVar4 = (STExpertJobScript *)GetScript();
          local_14 = STExpertJobScript::GetUpgradeCost(pSVar4,uVar8);
          if ((local_14 < 0) || (local_14 == 0)) {
            uVar9 = 0x16;
          }
          else {
            iVar6 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
            if (iVar6 < local_14) {
              uVar9 = 0x16;
            }
            else {
              pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              CInventory::use_money(pCVar7,local_14,0x20,1);
              pCVar3 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
              CCharacExpertJob::set_disjoint_machine_grade(pCVar3,local_1c);
              uVar8 = local_1c + 1;
              pSVar4 = (STExpertJobScript *)GetScript();
              local_10 = STExpertJobScript::_GetEnduranceRepairCost(pSVar4,uVar8);
              if (local_10 != 0) {
                iVar6 = *(int *)(local_10 + 4);
                pCVar3 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
                CCharacExpertJob::set_disjoint_machine_endurance(pCVar3,iVar6);
              }
              PacketGuard::PacketGuard(local_34);
                    /* try { // try from 085d39fc to 085d3a91 has its CatchHandler @ 085d3aa4 */
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xf4);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
              iVar6 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar6);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_1c + 1);
              pCVar3 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
              iVar6 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar3);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar6);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
              CUser::Send(param_1,local_34);
              uVar9 = 0;
              PacketGuard::~PacketGuard(local_34);
            }
          }
        }
      }
    }
    else {
      uVar9 = 0x13;
    }
  }
  else {
    uVar9 = 0x13;
  }
  return uVar9;
}

```

---

## Reset

```asm
// === 085d2cf2 expert_job::CDisjointer::Reset  [0x085d2cf2-0x85d2d07] ===
 85d2cf2:	55                   	push   %ebp
 85d2cf3:	89 e5                	mov    %esp,%ebp
 85d2cf5:	83 ec 18             	sub    $0x18,%esp
 85d2cf8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2cfb:	83 c0 08             	add    $0x8,%eax
 85d2cfe:	89 04 24             	mov    %eax,(%esp)
 85d2d01:	e8 18 11 00 00       	call   85d3e1e <_ZN10expert_job16CDisjointMachine5resetEv>
 85d2d06:	c9                   	leave
 85d2d07:	c3                   	ret

```

```c
// expert_job::CDisjointer::Reset @ 0x85d2cf2

/* expert_job::CDisjointer::Reset() */

void __thiscall expert_job::CDisjointer::Reset(CDisjointer *this)

{
  CDisjointMachine::reset((CDisjointMachine *)(this + 8));
  return;
}

```

---

## check_disjoint_endurance

```asm
// === 085d1f24 expert_job::CDisjointer::check_disjoint_endurance  [0x085d1f24-0x85d1f67] ===
 85d1f24:	55                   	push   %ebp
 85d1f25:	89 e5                	mov    %esp,%ebp
 85d1f27:	83 ec 18             	sub    $0x18,%esp
 85d1f2a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1f2d:	83 c0 08             	add    $0x8,%eax
 85d1f30:	89 04 24             	mov    %eax,(%esp)
 85d1f33:	e8 a8 28 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d1f38:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d1f3f:	00 
 85d1f40:	89 04 24             	mov    %eax,(%esp)
 85d1f43:	e8 3c b6 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d1f48:	89 04 24             	mov    %eax,(%esp)
 85d1f4b:	e8 16 1f 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d1f50:	85 c0                	test   %eax,%eax
 85d1f52:	0f 9e c0             	setle  %al
 85d1f55:	84 c0                	test   %al,%al
 85d1f57:	74 07                	je     85d1f60 <_ZN10expert_job11CDisjointer24check_disjoint_enduranceEv+0x3c>
 85d1f59:	b8 00 00 00 00       	mov    $0x0,%eax
 85d1f5e:	eb 05                	jmp    85d1f65 <_ZN10expert_job11CDisjointer24check_disjoint_enduranceEv+0x41>
 85d1f60:	b8 01 00 00 00       	mov    $0x1,%eax
 85d1f65:	c9                   	leave
 85d1f66:	c3                   	ret
 85d1f67:	90                   	nop

```

```c
// expert_job::CDisjointer::check_disjoint_endurance @ 0x85d1f24

/* expert_job::CDisjointer::check_disjoint_endurance() */

bool __thiscall expert_job::CDisjointer::check_disjoint_endurance(CDisjointer *this)

{
  CUser *pCVar1;
  CCharacExpertJob *this_00;
  int iVar2;
  
  pCVar1 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  this_00 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar1,0);
  iVar2 = CCharacExpertJob::get_disjoint_machine_endurance(this_00);
  return 0 < iVar2;
}

```

---

## complete_disjoint

```asm
// === 085d31a0 expert_job::CDisjointer::complete_disjoint  [0x085d31a0-0x85d35cd] ===
 85d31a0:	55                   	push   %ebp
 85d31a1:	89 e5                	mov    %esp,%ebp
 85d31a3:	56                   	push   %esi
 85d31a4:	53                   	push   %ebx
 85d31a5:	83 ec 60             	sub    $0x60,%esp
 85d31a8:	e8 5d ec ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d31ad:	8b 98 70 02 00 00    	mov    0x270(%eax),%ebx
 85d31b3:	e8 52 ec ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d31b8:	8b 80 6c 02 00 00    	mov    0x26c(%eax),%eax
 85d31be:	89 da                	mov    %ebx,%edx
 85d31c0:	29 c2                	sub    %eax,%edx
 85d31c2:	89 d0                	mov    %edx,%eax
 85d31c4:	83 c0 01             	add    $0x1,%eax
 85d31c7:	89 04 24             	mov    %eax,(%esp)
 85d31ca:	e8 b8 e9 0d 00       	call   86b1b87 <_Z12get_rand_inti>
 85d31cf:	89 c3                	mov    %eax,%ebx
 85d31d1:	e8 34 ec ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d31d6:	8b 80 6c 02 00 00    	mov    0x26c(%eax),%eax
 85d31dc:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85d31df:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d31e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d31e5:	83 c0 08             	add    $0x8,%eax
 85d31e8:	89 04 24             	mov    %eax,(%esp)
 85d31eb:	e8 f0 15 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d31f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d31f7:	00 
 85d31f8:	89 04 24             	mov    %eax,(%esp)
 85d31fb:	e8 84 a3 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d3200:	89 04 24             	mov    %eax,(%esp)
 85d3203:	e8 5e 0c 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d3208:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85d320b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d320e:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 85d3211:	7d 06                	jge    85d3219 <_ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard+0x79>
 85d3213:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d3216:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d3219:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d321c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85d321f:	89 d3                	mov    %edx,%ebx
 85d3221:	29 c3                	sub    %eax,%ebx
 85d3223:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3226:	83 c0 08             	add    $0x8,%eax
 85d3229:	89 04 24             	mov    %eax,(%esp)
 85d322c:	e8 af 15 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d3231:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d3238:	00 
 85d3239:	89 04 24             	mov    %eax,(%esp)
 85d323c:	e8 43 a3 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d3241:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d3245:	89 04 24             	mov    %eax,(%esp)
 85d3248:	e8 25 0c 00 00       	call   85d3e72 <_ZN10expert_job16CCharacExpertJob30set_disjoint_machine_enduranceEi>
 85d324d:	e8 b8 eb ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d3252:	8b 98 88 02 00 00    	mov    0x288(%eax),%ebx
 85d3258:	e8 ad eb ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d325d:	8b 80 84 02 00 00    	mov    0x284(%eax),%eax
 85d3263:	89 da                	mov    %ebx,%edx
 85d3265:	29 c2                	sub    %eax,%edx
 85d3267:	89 d0                	mov    %edx,%eax
 85d3269:	83 c0 01             	add    $0x1,%eax
 85d326c:	89 04 24             	mov    %eax,(%esp)
 85d326f:	e8 13 e9 0d 00       	call   86b1b87 <_Z12get_rand_inti>
 85d3274:	89 c3                	mov    %eax,%ebx
 85d3276:	e8 8f eb ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d327b:	8b 80 84 02 00 00    	mov    0x284(%eax),%eax
 85d3281:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85d3284:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d3287:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d328a:	89 04 24             	mov    %eax,(%esp)
 85d328d:	e8 ec 6f b0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85d3292:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d3295:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d3298:	89 04 24             	mov    %eax,(%esp)
 85d329b:	e8 ac c0 ec ff       	call   849f34c <_ZN12STItemScript10SEXPERTJOB24stExpertJobAdditionalExpC1Ev>
 85d32a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d32a3:	89 04 24             	mov    %eax,(%esp)
 85d32a6:	e8 7b 1d da ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 85d32ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d32af:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d32b2:	89 04 24             	mov    %eax,(%esp)
 85d32b5:	e8 c2 89 0b 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 85d32ba:	89 c3                	mov    %eax,%ebx
 85d32bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d32bf:	89 04 24             	mov    %eax,(%esp)
 85d32c2:	e8 cd c5 c5 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 85d32c7:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85d32ca:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d32ce:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d32d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d32d6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d32d9:	89 04 24             	mov    %eax,(%esp)
 85d32dc:	e8 65 99 f3 ff       	call   850cc46 <_ZNK10CInventory24GetExpertJobAddtionalExpE20ENUM_EXPERT_JOB_TYPEiRN12STItemScript10SEXPERTJOB24stExpertJobAdditionalExpE>
 85d32e1:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 85d32e8:	e8 9a e8 0d 00       	call   86b1b87 <_Z12get_rand_inti>
 85d32ed:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85d32f0:	db 45 c4             	fildl  -0x3c(%ebp)
 85d32f3:	d9 45 dc             	flds   -0x24(%ebp)
 85d32f6:	da e9                	fucompp
 85d32f8:	df e0                	fnstsw %ax
 85d32fa:	f6 c4 45             	test   $0x45,%ah
 85d32fd:	0f 94 c0             	sete   %al
 85d3300:	84 c0                	test   %al,%al
 85d3302:	74 0c                	je     85d3310 <_ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard+0x170>
 85d3304:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85d3307:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d330a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85d330d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d3310:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85d3314:	7e 35                	jle    85d334b <_ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard+0x1ab>
 85d3316:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3319:	83 c0 08             	add    $0x8,%eax
 85d331c:	89 04 24             	mov    %eax,(%esp)
 85d331f:	e8 bc 14 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d3324:	89 04 24             	mov    %eax,(%esp)
 85d3327:	e8 fa 1c da ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 85d332c:	89 c3                	mov    %eax,%ebx
 85d332e:	03 5d ec             	add    -0x14(%ebp),%ebx
 85d3331:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3334:	83 c0 08             	add    $0x8,%eax
 85d3337:	89 04 24             	mov    %eax,(%esp)
 85d333a:	e8 a1 14 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d333f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d3343:	89 04 24             	mov    %eax,(%esp)
 85d3346:	e8 f5 7a ec ff       	call   849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>
 85d334b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d334e:	83 c0 08             	add    $0x8,%eax
 85d3351:	89 04 24             	mov    %eax,(%esp)
 85d3354:	e8 87 14 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d3359:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d335c:	0f 94 c0             	sete   %al
 85d335f:	84 c0                	test   %al,%al
 85d3361:	74 54                	je     85d33b7 <_ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard+0x217>
 85d3363:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d3366:	89 04 24             	mov    %eax,(%esp)
 85d3369:	e8 1a 6e ba ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 85d336e:	8b 55 10             	mov    0x10(%ebp),%edx
 85d3371:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3375:	89 14 24             	mov    %edx,(%esp)
 85d3378:	e8 bf 85 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d337d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3380:	83 c0 08             	add    $0x8,%eax
 85d3383:	89 04 24             	mov    %eax,(%esp)
 85d3386:	e8 55 14 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d338b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d3392:	00 
 85d3393:	89 04 24             	mov    %eax,(%esp)
 85d3396:	e8 e9 a1 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d339b:	89 04 24             	mov    %eax,(%esp)
 85d339e:	e8 c3 0a 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d33a3:	8b 55 10             	mov    0x10(%ebp),%edx
 85d33a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d33aa:	89 14 24             	mov    %edx,(%esp)
 85d33ad:	e8 8a 85 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d33b2:	e9 af 01 00 00       	jmp    85d3566 <_ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard+0x3c6>
 85d33b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d33ba:	89 04 24             	mov    %eax,(%esp)
 85d33bd:	e8 8e 0a 00 00       	call   85d3e50 <_ZNK10expert_job11CDisjointer17get_disjoint_costEv>
 85d33c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d33c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d33c8:	89 04 24             	mov    %eax,(%esp)
 85d33cb:	e8 be 6e b0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85d33d0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85d33d7:	00 
 85d33d8:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 85d33df:	00 
 85d33e0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d33e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d33e7:	89 04 24             	mov    %eax,(%esp)
 85d33ea:	e8 5d c1 f2 ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 85d33ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d33f2:	89 04 24             	mov    %eax,(%esp)
 85d33f5:	e8 8e 6d ba ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 85d33fa:	8b 55 10             	mov    0x10(%ebp),%edx
 85d33fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3401:	89 14 24             	mov    %edx,(%esp)
 85d3404:	e8 33 85 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d3409:	8b 45 08             	mov    0x8(%ebp),%eax
 85d340c:	83 c0 08             	add    $0x8,%eax
 85d340f:	89 04 24             	mov    %eax,(%esp)
 85d3412:	e8 c9 13 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d3417:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d341e:	00 
 85d341f:	89 04 24             	mov    %eax,(%esp)
 85d3422:	e8 5d a1 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d3427:	89 04 24             	mov    %eax,(%esp)
 85d342a:	e8 37 0a 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d342f:	8b 55 10             	mov    0x10(%ebp),%edx
 85d3432:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3436:	89 14 24             	mov    %edx,(%esp)
 85d3439:	e8 fe 84 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d343e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3441:	83 c0 08             	add    $0x8,%eax
 85d3444:	89 04 24             	mov    %eax,(%esp)
 85d3447:	e8 94 13 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d344c:	89 04 24             	mov    %eax,(%esp)
 85d344f:	e8 3a 6e b0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85d3454:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85d345b:	00 
 85d345c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85d3463:	00 
 85d3464:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 85d346b:	00 
 85d346c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d346f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d3473:	89 04 24             	mov    %eax,(%esp)
 85d3476:	e8 21 be f2 ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 85d347b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d347e:	89 04 24             	mov    %eax,(%esp)
 85d3481:	e8 c6 a8 fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d3486:	c7 44 24 08 cb 00 00 	movl   $0xcb,0x8(%esp)
 85d348d:	00 
 85d348e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d3495:	00 
 85d3496:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3499:	89 04 24             	mov    %eax,(%esp)
 85d349c:	e8 5b 84 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d34a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d34a8:	00 
 85d34a9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d34ac:	89 04 24             	mov    %eax,(%esp)
 85d34af:	e8 6c 84 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d34b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d34b7:	83 c0 08             	add    $0x8,%eax
 85d34ba:	89 04 24             	mov    %eax,(%esp)
 85d34bd:	e8 1e 13 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d34c2:	89 04 24             	mov    %eax,(%esp)
 85d34c5:	e8 be 6c ba ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 85d34ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d34ce:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d34d1:	89 04 24             	mov    %eax,(%esp)
 85d34d4:	e8 63 84 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d34d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d34dc:	83 c0 08             	add    $0x8,%eax
 85d34df:	89 04 24             	mov    %eax,(%esp)
 85d34e2:	e8 f9 12 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d34e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d34ee:	00 
 85d34ef:	89 04 24             	mov    %eax,(%esp)
 85d34f2:	e8 8d a0 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d34f7:	89 04 24             	mov    %eax,(%esp)
 85d34fa:	e8 67 09 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d34ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d3503:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3506:	89 04 24             	mov    %eax,(%esp)
 85d3509:	e8 2e 84 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d350e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d3515:	00 
 85d3516:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3519:	89 04 24             	mov    %eax,(%esp)
 85d351c:	e8 37 84 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d3521:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3524:	83 c0 08             	add    $0x8,%eax
 85d3527:	89 04 24             	mov    %eax,(%esp)
 85d352a:	e8 b1 12 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d352f:	8d 55 d0             	lea    -0x30(%ebp),%edx
 85d3532:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d3536:	89 04 24             	mov    %eax,(%esp)
 85d3539:	e8 7c 50 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85d353e:	eb 1b                	jmp    85d355b <_ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard+0x3bb>
 85d3540:	89 d3                	mov    %edx,%ebx
 85d3542:	89 c6                	mov    %eax,%esi
 85d3544:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d3547:	89 04 24             	mov    %eax,(%esp)
 85d354a:	e8 31 a9 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d354f:	89 f0                	mov    %esi,%eax
 85d3551:	89 da                	mov    %ebx,%edx
 85d3553:	89 04 24             	mov    %eax,(%esp)
 85d3556:	e8 f5 01 51 00       	call   8ae3750 <_Unwind_Resume>
 85d355b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d355e:	89 04 24             	mov    %eax,(%esp)
 85d3561:	e8 1a a9 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d3566:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3569:	83 c0 08             	add    $0x8,%eax
 85d356c:	89 04 24             	mov    %eax,(%esp)
 85d356f:	e8 6c 12 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d3574:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d357b:	00 
 85d357c:	89 04 24             	mov    %eax,(%esp)
 85d357f:	e8 00 a0 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d3584:	89 04 24             	mov    %eax,(%esp)
 85d3587:	e8 da 08 00 00       	call   85d3e66 <_ZNK10expert_job16CCharacExpertJob30get_disjoint_machine_enduranceEv>
 85d358c:	85 c0                	test   %eax,%eax
 85d358e:	0f 9e c0             	setle  %al
 85d3591:	84 c0                	test   %al,%al
 85d3593:	74 2c                	je     85d35c1 <_ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard+0x421>
 85d3595:	8b 45 08             	mov    0x8(%ebp),%eax
 85d3598:	8b 00                	mov    (%eax),%eax
 85d359a:	83 c0 04             	add    $0x4,%eax
 85d359d:	8b 18                	mov    (%eax),%ebx
 85d359f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d35a2:	83 c0 08             	add    $0x8,%eax
 85d35a5:	89 04 24             	mov    %eax,(%esp)
 85d35a8:	e8 33 12 c6 ff       	call   82347e0 <_ZNK10expert_job16CDisjointMachine8get_userEv>
 85d35ad:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85d35b4:	00 
 85d35b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d35b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d35bc:	89 04 24             	mov    %eax,(%esp)
 85d35bf:	ff d3                	call   *%ebx
 85d35c1:	b8 01 00 00 00       	mov    $0x1,%eax
 85d35c6:	83 c4 60             	add    $0x60,%esp
 85d35c9:	5b                   	pop    %ebx
 85d35ca:	5e                   	pop    %esi
 85d35cb:	5d                   	pop    %ebp
 85d35cc:	c3                   	ret
 85d35cd:	90                   	nop

```

```c
// expert_job::CDisjointer::complete_disjoint @ 0x85d31a0

/* expert_job::CDisjointer::complete_disjoint(CUser*, PacketGuard&) */

undefined4 __thiscall
expert_job::CDisjointer::complete_disjoint(CDisjointer *this,CUser *param_1,PacketGuard *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  CUser *pCVar4;
  CCharacExpertJob *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CUserCharacInfo *pCVar8;
  CInventory *pCVar9;
  PacketGuard local_34 [12];
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CInventory *local_14;
  undefined4 local_10;
  
  iVar2 = GetScript();
  iVar2 = *(int *)(iVar2 + 0x270);
  iVar3 = GetScript();
  iVar2 = get_rand_int((iVar2 - *(int *)(iVar3 + 0x26c)) + 1);
  iVar3 = GetScript();
  local_20 = iVar2 + *(int *)(iVar3 + 0x26c);
  pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
  local_1c = CCharacExpertJob::get_disjoint_machine_endurance(pCVar5);
  if (local_1c < local_20) {
    local_20 = local_1c;
  }
  iVar2 = local_1c - local_20;
  pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
  CCharacExpertJob::set_disjoint_machine_endurance(pCVar5,iVar2);
  iVar2 = GetScript();
  iVar2 = *(int *)(iVar2 + 0x288);
  iVar3 = GetScript();
  iVar2 = get_rand_int((iVar2 - *(int *)(iVar3 + 0x284)) + 1);
  iVar3 = GetScript();
  local_18 = iVar2 + *(int *)(iVar3 + 0x284);
  local_14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  STItemScript::SEXPERTJOB::stExpertJobAdditionalExp::stExpertJobAdditionalExp
            ((stExpertJobAdditionalExp *)&local_28);
  iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
  uVar6 = CUser::GetCurExpertJobLevel(param_1,iVar2);
  uVar7 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  CInventory::GetExpertJobAddtionalExp(local_14,uVar7,uVar6,&local_28);
  iVar2 = get_rand_int(100);
  if ((float)iVar2 < local_28) {
    local_18 = local_24 + local_18;
  }
  if (0 < local_18) {
    pCVar8 = (CUserCharacInfo *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp(pCVar8);
    iVar2 = iVar2 + local_18;
    pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    CExpertJob::IncreaseExpertJobExp(pCVar4,iVar2);
  }
  pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  if (pCVar4 == param_1) {
    iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar2);
    pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
    iVar2 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar2);
  }
  else {
    local_10 = get_disjoint_cost(this);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::use_money(pCVar9,local_10,0x1d,1);
    iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar2);
    pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
    iVar2 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar2);
    pCVar8 = (CUserCharacInfo *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(pCVar8);
    CInventory::gain_money(pCVar9,local_10,0x16,1,0);
    PacketGuard::PacketGuard(local_34);
                    /* try { // try from 085d349c to 085d353d has its CatchHandler @ 085d3540 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xcb);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
    pCVar8 = (CUserCharacInfo *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    iVar2 = CUserCharacInfo::getCurCharacMoney(pCVar8);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar2);
    pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
    iVar2 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
    pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    CUser::Send(pCVar4,local_34);
    PacketGuard::~PacketGuard(local_34);
  }
  pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
  iVar2 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar5);
  if (iVar2 < 1) {
    pcVar1 = *(code **)(*(int *)this + 4);
    uVar6 = CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    (*pcVar1)(this,uVar6,0);
  }
  return 1;
}

```

---

## get_disjoint_machine_grade

```asm
// === 085d1f0a expert_job::CDisjointer::get_disjoint_machine_grade  [0x085d1f0a-0x85d1f23] ===
 85d1f0a:	55                   	push   %ebp
 85d1f0b:	89 e5                	mov    %esp,%ebp
 85d1f0d:	83 ec 18             	sub    $0x18,%esp
 85d1f10:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1f13:	83 c0 08             	add    $0x8,%eax
 85d1f16:	89 04 24             	mov    %eax,(%esp)
 85d1f19:	e8 f4 1e 00 00       	call   85d3e12 <_ZNK10expert_job16CDisjointMachine9get_gradeEv>
 85d1f1e:	0f be c0             	movsbl %al,%eax
 85d1f21:	c9                   	leave
 85d1f22:	c3                   	ret
 85d1f23:	90                   	nop

```

```c
// expert_job::CDisjointer::get_disjoint_machine_grade @ 0x85d1f0a

/* expert_job::CDisjointer::get_disjoint_machine_grade() */

int __thiscall expert_job::CDisjointer::get_disjoint_machine_grade(CDisjointer *this)

{
  char cVar1;
  
  cVar1 = CDisjointMachine::get_grade((CDisjointMachine *)(this + 8));
  return (int)cVar1;
}

```

---

## get_disjoint_result_

```asm
// === 085d234a expert_job::CDisjointer::get_disjoint_result_  [0x085d234a-0x85d2a15] ===
 85d234a:	55                   	push   %ebp
 85d234b:	89 e5                	mov    %esp,%ebp
 85d234d:	53                   	push   %ebx
 85d234e:	81 ec d4 00 00 00    	sub    $0xd4,%esp
 85d2354:	8b 45 18             	mov    0x18(%ebp),%eax
 85d2357:	88 85 54 ff ff ff    	mov    %al,-0xac(%ebp)
 85d235d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d2360:	89 04 24             	mov    %eax,(%esp)
 85d2363:	e8 e0 e8 b3 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 85d2368:	89 45 ac             	mov    %eax,-0x54(%ebp)
 85d236b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d236e:	89 04 24             	mov    %eax,(%esp)
 85d2371:	e8 9c 12 ea ff       	call   8473612 <_ZNK5CItem12GetSellPriceEv>
 85d2376:	89 45 b0             	mov    %eax,-0x50(%ebp)
 85d2379:	8b 45 08             	mov    0x8(%ebp),%eax
 85d237c:	89 04 24             	mov    %eax,(%esp)
 85d237f:	e8 52 ef b1 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85d2384:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85d2387:	8b 45 08             	mov    0x8(%ebp),%eax
 85d238a:	89 04 24             	mov    %eax,(%esp)
 85d238d:	e8 c2 e8 b3 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 85d2392:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85d2395:	c6 45 bf 00          	movb   $0x0,-0x41(%ebp)
 85d2399:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d239d:	74 24                	je     85d23c3 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x79>
 85d239f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d23a2:	83 c0 11             	add    $0x11,%eax
 85d23a5:	89 04 24             	mov    %eax,(%esp)
 85d23a8:	e8 0f e4 b7 ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 85d23ad:	83 f0 01             	xor    $0x1,%eax
 85d23b0:	84 c0                	test   %al,%al
 85d23b2:	74 07                	je     85d23bb <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x71>
 85d23b4:	b8 01 00 00 00       	mov    $0x1,%eax
 85d23b9:	eb 05                	jmp    85d23c0 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x76>
 85d23bb:	b8 00 00 00 00       	mov    $0x0,%eax
 85d23c0:	88 45 bf             	mov    %al,-0x41(%ebp)
 85d23c3:	0f b6 4d bf          	movzbl -0x41(%ebp),%ecx
 85d23c7:	8b 45 10             	mov    0x10(%ebp),%eax
 85d23ca:	0f b6 d0             	movzbl %al,%edx
 85d23cd:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85d23d0:	0f b6 c0             	movzbl %al,%eax
 85d23d3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85d23d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d23db:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d23df:	8d 45 9d             	lea    -0x63(%ebp),%eax
 85d23e2:	89 04 24             	mov    %eax,(%esp)
 85d23e5:	e8 b4 17 00 00       	call   85d3b9e <_ZN20DisjointMachineGradeC1Ehhh>
 85d23ea:	e8 1b fa ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d23ef:	8d 88 bc 01 00 00    	lea    0x1bc(%eax),%ecx
 85d23f5:	8d 45 98             	lea    -0x68(%ebp),%eax
 85d23f8:	8d 55 9d             	lea    -0x63(%ebp),%edx
 85d23fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d23ff:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85d2403:	89 04 24             	mov    %eax,(%esp)
 85d2406:	e8 a3 1b 00 00       	call   85d3fae <_ZNSt3mapI20DisjointMachineGrade16stDisjointResultSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85d240b:	83 ec 04             	sub    $0x4,%esp
 85d240e:	e8 f7 f9 ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d2413:	8d 90 bc 01 00 00    	lea    0x1bc(%eax),%edx
 85d2419:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d241c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d2420:	89 04 24             	mov    %eax,(%esp)
 85d2423:	e8 b2 1b 00 00       	call   85d3fda <_ZNSt3mapI20DisjointMachineGrade16stDisjointResultSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85d2428:	83 ec 04             	sub    $0x4,%esp
 85d242b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d242e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2432:	8d 45 98             	lea    -0x68(%ebp),%eax
 85d2435:	89 04 24             	mov    %eax,(%esp)
 85d2438:	e8 89 1c 00 00       	call   85d40c6 <_ZNKSt17_Rb_tree_iteratorISt4pairIK20DisjointMachineGrade16stDisjointResultEEeqERKS5_>
 85d243d:	84 c0                	test   %al,%al
 85d243f:	74 1a                	je     85d245b <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x111>
 85d2441:	80 7d bf 00          	cmpb   $0x0,-0x41(%ebp)
 85d2445:	74 0a                	je     85d2451 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x107>
 85d2447:	b8 d3 00 00 00       	mov    $0xd3,%eax
 85d244c:	e9 c0 05 00 00       	jmp    85d2a11 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x6c7>
 85d2451:	b8 11 00 00 00       	mov    $0x11,%eax
 85d2456:	e9 b6 05 00 00       	jmp    85d2a11 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x6c7>
 85d245b:	8d 45 98             	lea    -0x68(%ebp),%eax
 85d245e:	89 04 24             	mov    %eax,(%esp)
 85d2461:	e8 ae 1b 00 00       	call   85d4014 <_ZNKSt17_Rb_tree_iteratorISt4pairIK20DisjointMachineGrade16stDisjointResultEEptEv>
 85d2466:	83 c0 04             	add    $0x4,%eax
 85d2469:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85d246c:	db 45 b0             	fildl  -0x50(%ebp)
 85d246f:	d9 05 0c 08 cc 08    	flds   0x8cc080c
 85d2475:	de c9                	fmulp  %st,%st(1)
 85d2477:	d9 bd 4e ff ff ff    	fnstcw -0xb2(%ebp)
 85d247d:	0f b7 85 4e ff ff ff 	movzwl -0xb2(%ebp),%eax
 85d2484:	b4 0c                	mov    $0xc,%ah
 85d2486:	66 89 85 4c ff ff ff 	mov    %ax,-0xb4(%ebp)
 85d248d:	d9 ad 4c ff ff ff    	fldcw  -0xb4(%ebp)
 85d2493:	db 5d b0             	fistpl -0x50(%ebp)
 85d2496:	d9 ad 4e ff ff ff    	fldcw  -0xb2(%ebp)
 85d249c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85d249f:	8b 40 04             	mov    0x4(%eax),%eax
 85d24a2:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85d24a5:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85d24a8:	8b 00                	mov    (%eax),%eax
 85d24aa:	89 c2                	mov    %eax,%edx
 85d24ac:	8b 45 14             	mov    0x14(%ebp),%eax
 85d24af:	89 50 14             	mov    %edx,0x14(%eax)
 85d24b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d24b5:	8b 00                	mov    (%eax),%eax
 85d24b7:	83 c0 4c             	add    $0x4c,%eax
 85d24ba:	8b 10                	mov    (%eax),%edx
 85d24bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d24bf:	89 04 24             	mov    %eax,(%esp)
 85d24c2:	ff d2                	call   *%edx
 85d24c4:	0f b6 c0             	movzbl %al,%eax
 85d24c7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85d24cb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85d24d2:	00 
 85d24d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d24da:	00 
 85d24db:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85d24de:	89 04 24             	mov    %eax,(%esp)
 85d24e1:	e8 88 a3 3b 00       	call   898c86e <_Z16getItemSellPriceiiib>
 85d24e6:	69 d8 e8 03 00 00    	imul   $0x3e8,%eax,%ebx
 85d24ec:	e8 19 f9 ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d24f1:	8b 80 d4 01 00 00    	mov    0x1d4(%eax),%eax
 85d24f7:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 85d24fd:	89 da                	mov    %ebx,%edx
 85d24ff:	89 d0                	mov    %edx,%eax
 85d2501:	c1 fa 1f             	sar    $0x1f,%edx
 85d2504:	f7 bd 44 ff ff ff    	idivl  -0xbc(%ebp)
 85d250a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85d250d:	db 45 c8             	fildl  -0x38(%ebp)
 85d2510:	d8 4d c4             	fmuls  -0x3c(%ebp)
 85d2513:	d9 05 10 08 cc 08    	flds   0x8cc0810
 85d2519:	de f9                	fdivrp %st,%st(1)
 85d251b:	d9 bd 4e ff ff ff    	fnstcw -0xb2(%ebp)
 85d2521:	0f b7 85 4e ff ff ff 	movzwl -0xb2(%ebp),%eax
 85d2528:	b4 0c                	mov    $0xc,%ah
 85d252a:	66 89 85 4c ff ff ff 	mov    %ax,-0xb4(%ebp)
 85d2531:	d9 ad 4c ff ff ff    	fldcw  -0xb4(%ebp)
 85d2537:	db 9d 50 ff ff ff    	fistpl -0xb0(%ebp)
 85d253d:	d9 ad 4e ff ff ff    	fldcw  -0xb2(%ebp)
 85d2543:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 85d2549:	8b 45 14             	mov    0x14(%ebp),%eax
 85d254c:	89 10                	mov    %edx,(%eax)
 85d254e:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2551:	8b 00                	mov    (%eax),%eax
 85d2553:	85 c0                	test   %eax,%eax
 85d2555:	7f 09                	jg     85d2560 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x216>
 85d2557:	8b 45 14             	mov    0x14(%ebp),%eax
 85d255a:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 85d2560:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2563:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 85d256a:	8b 45 14             	mov    0x14(%ebp),%eax
 85d256d:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85d2574:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85d2577:	8b 40 20             	mov    0x20(%eax),%eax
 85d257a:	6b c0 64             	imul   $0x64,%eax,%eax
 85d257d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85d2580:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 85d2587:	80 bd 54 ff ff ff 00 	cmpb   $0x0,-0xac(%ebp)
 85d258e:	0f 84 32 01 00 00    	je     85d26c6 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x37c>
 85d2594:	8b 45 10             	mov    0x10(%ebp),%eax
 85d2597:	83 c0 01             	add    $0x1,%eax
 85d259a:	88 45 a7             	mov    %al,-0x59(%ebp)
 85d259d:	e8 98 f8 ff ff       	call   85d1e3a <_ZN10expert_job11CDisjointer12GetEtcScriptEv>
 85d25a2:	8d 48 18             	lea    0x18(%eax),%ecx
 85d25a5:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d25a8:	8d 55 a7             	lea    -0x59(%ebp),%edx
 85d25ab:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d25af:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85d25b3:	89 04 24             	mov    %eax,(%esp)
 85d25b6:	e8 1f 1b 00 00       	call   85d40da <_ZNSt3mapIhhSt4lessIhESaISt4pairIKhhEEE4findERS3_>
 85d25bb:	83 ec 04             	sub    $0x4,%esp
 85d25be:	e8 77 f8 ff ff       	call   85d1e3a <_ZN10expert_job11CDisjointer12GetEtcScriptEv>
 85d25c3:	8d 50 18             	lea    0x18(%eax),%edx
 85d25c6:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d25c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d25cd:	89 04 24             	mov    %eax,(%esp)
 85d25d0:	e8 31 1b 00 00       	call   85d4106 <_ZNSt3mapIhhSt4lessIhESaISt4pairIKhhEEE3endEv>
 85d25d5:	83 ec 04             	sub    $0x4,%esp
 85d25d8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d25db:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d25df:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d25e2:	89 04 24             	mov    %eax,(%esp)
 85d25e5:	e8 42 1b 00 00       	call   85d412c <_ZNKSt17_Rb_tree_iteratorISt4pairIKhhEEneERKS3_>
 85d25ea:	84 c0                	test   %al,%al
 85d25ec:	74 15                	je     85d2603 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x2b9>
 85d25ee:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d25f1:	89 04 24             	mov    %eax,(%esp)
 85d25f4:	e8 47 1b 00 00       	call   85d4140 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhhEEptEv>
 85d25f9:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85d25fd:	0f b6 c0             	movzbl %al,%eax
 85d2600:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85d2603:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85d2606:	6b c0 64             	imul   $0x64,%eax,%eax
 85d2609:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85d260c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85d260f:	01 45 cc             	add    %eax,-0x34(%ebp)
 85d2612:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 85d2616:	0f 84 aa 00 00 00    	je     85d26c6 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x37c>
 85d261c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d261f:	89 04 24             	mov    %eax,(%esp)
 85d2622:	e8 65 7d b0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 85d2627:	83 f8 02             	cmp    $0x2,%eax
 85d262a:	7e 16                	jle    85d2642 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x2f8>
 85d262c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d262f:	89 04 24             	mov    %eax,(%esp)
 85d2632:	e8 fb dd b4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85d2637:	85 c0                	test   %eax,%eax
 85d2639:	74 07                	je     85d2642 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x2f8>
 85d263b:	b8 01 00 00 00       	mov    $0x1,%eax
 85d2640:	eb 05                	jmp    85d2647 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x2fd>
 85d2642:	b8 00 00 00 00       	mov    $0x0,%eax
 85d2647:	84 c0                	test   %al,%al
 85d2649:	74 7b                	je     85d26c6 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x37c>
 85d264b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d264e:	89 04 24             	mov    %eax,(%esp)
 85d2651:	e8 28 7c b0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85d2656:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85d2659:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d265c:	89 04 24             	mov    %eax,(%esp)
 85d265f:	e8 c2 29 da ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 85d2664:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2668:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d266b:	89 04 24             	mov    %eax,(%esp)
 85d266e:	e8 09 96 0b 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 85d2673:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d2677:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 85d267e:	00 
 85d267f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d2682:	89 04 24             	mov    %eax,(%esp)
 85d2685:	e8 58 a4 f3 ff       	call   850cae2 <_ZNK10CInventory34GetExpertJobSelfDisjointBigWinRateE20ENUM_EXPERT_JOB_TYPEi>
 85d268a:	d9 5d d8             	fstps  -0x28(%ebp)
 85d268d:	d9 45 d8             	flds   -0x28(%ebp)
 85d2690:	d9 05 14 08 cc 08    	flds   0x8cc0814
 85d2696:	de c9                	fmulp  %st,%st(1)
 85d2698:	d9 5d d8             	fstps  -0x28(%ebp)
 85d269b:	db 45 cc             	fildl  -0x34(%ebp)
 85d269e:	d8 45 d8             	fadds  -0x28(%ebp)
 85d26a1:	d9 bd 4e ff ff ff    	fnstcw -0xb2(%ebp)
 85d26a7:	0f b7 85 4e ff ff ff 	movzwl -0xb2(%ebp),%eax
 85d26ae:	b4 0c                	mov    $0xc,%ah
 85d26b0:	66 89 85 4c ff ff ff 	mov    %ax,-0xb4(%ebp)
 85d26b7:	d9 ad 4c ff ff ff    	fldcw  -0xb4(%ebp)
 85d26bd:	db 5d cc             	fistpl -0x34(%ebp)
 85d26c0:	d9 ad 4e ff ff ff    	fldcw  -0xb2(%ebp)
 85d26c6:	c7 04 24 10 27 00 00 	movl   $0x2710,(%esp)
 85d26cd:	e8 b5 f4 0d 00       	call   86b1b87 <_Z12get_rand_inti>
 85d26d2:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 85d26d5:	0f 9c c0             	setl   %al
 85d26d8:	84 c0                	test   %al,%al
 85d26da:	0f 84 b2 00 00 00    	je     85d2792 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x448>
 85d26e0:	8d 45 80             	lea    -0x80(%ebp),%eax
 85d26e3:	89 04 24             	mov    %eax,(%esp)
 85d26e6:	e8 eb 14 00 00       	call   85d3bd6 <_ZN16stItemSelectRateC1Ev>
 85d26eb:	c7 45 80 ff ff ff ff 	movl   $0xffffffff,-0x80(%ebp)
 85d26f2:	c7 04 24 10 27 00 00 	movl   $0x2710,(%esp)
 85d26f9:	e8 89 f4 0d 00       	call   86b1b87 <_Z12get_rand_inti>
 85d26fe:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85d2701:	8d 4a 14             	lea    0x14(%edx),%ecx
 85d2704:	8b 55 b8             	mov    -0x48(%ebp),%edx
 85d2707:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d270b:	8d 55 80             	lea    -0x80(%ebp),%edx
 85d270e:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d2712:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2716:	89 0c 24             	mov    %ecx,(%esp)
 85d2719:	e8 8d af 39 00       	call   896d6ab <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i>
 85d271e:	8b 45 80             	mov    -0x80(%ebp),%eax
 85d2721:	83 f8 ff             	cmp    $0xffffffff,%eax
 85d2724:	0f 84 1f 01 00 00    	je     85d2849 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x4ff>
 85d272a:	8b 55 80             	mov    -0x80(%ebp),%edx
 85d272d:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2730:	89 50 18             	mov    %edx,0x18(%eax)
 85d2733:	db 45 b8             	fildl  -0x48(%ebp)
 85d2736:	d9 45 88             	flds   -0x78(%ebp)
 85d2739:	de f9                	fdivrp %st,%st(1)
 85d273b:	d9 5d dc             	fstps  -0x24(%ebp)
 85d273e:	d9 45 dc             	flds   -0x24(%ebp)
 85d2741:	d9 bd 4e ff ff ff    	fnstcw -0xb2(%ebp)
 85d2747:	0f b7 85 4e ff ff ff 	movzwl -0xb2(%ebp),%eax
 85d274e:	b4 0c                	mov    $0xc,%ah
 85d2750:	66 89 85 4c ff ff ff 	mov    %ax,-0xb4(%ebp)
 85d2757:	d9 ad 4c ff ff ff    	fldcw  -0xb4(%ebp)
 85d275d:	db 9d 50 ff ff ff    	fistpl -0xb0(%ebp)
 85d2763:	d9 ad 4e ff ff ff    	fldcw  -0xb2(%ebp)
 85d2769:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 85d276f:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2772:	89 50 04             	mov    %edx,0x4(%eax)
 85d2775:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2778:	8b 40 04             	mov    0x4(%eax),%eax
 85d277b:	85 c0                	test   %eax,%eax
 85d277d:	0f 8f c6 00 00 00    	jg     85d2849 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x4ff>
 85d2783:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2786:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 85d278d:	e9 b7 00 00 00       	jmp    85d2849 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x4ff>
 85d2792:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 85d2798:	89 04 24             	mov    %eax,(%esp)
 85d279b:	e8 36 14 00 00       	call   85d3bd6 <_ZN16stItemSelectRateC1Ev>
 85d27a0:	c7 85 6c ff ff ff ff 	movl   $0xffffffff,-0x94(%ebp)
 85d27a7:	ff ff ff 
 85d27aa:	c7 04 24 10 27 00 00 	movl   $0x2710,(%esp)
 85d27b1:	e8 d1 f3 0d 00       	call   86b1b87 <_Z12get_rand_inti>
 85d27b6:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85d27b9:	8d 4a 08             	lea    0x8(%edx),%ecx
 85d27bc:	8b 55 b8             	mov    -0x48(%ebp),%edx
 85d27bf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d27c3:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 85d27c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d27cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d27d1:	89 0c 24             	mov    %ecx,(%esp)
 85d27d4:	e8 d2 ae 39 00       	call   896d6ab <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i>
 85d27d9:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 85d27df:	83 f8 ff             	cmp    $0xffffffff,%eax
 85d27e2:	74 65                	je     85d2849 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x4ff>
 85d27e4:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 85d27ea:	8b 45 14             	mov    0x14(%ebp),%eax
 85d27ed:	89 50 18             	mov    %edx,0x18(%eax)
 85d27f0:	db 45 b8             	fildl  -0x48(%ebp)
 85d27f3:	d9 85 74 ff ff ff    	flds   -0x8c(%ebp)
 85d27f9:	de f9                	fdivrp %st,%st(1)
 85d27fb:	d9 5d e0             	fstps  -0x20(%ebp)
 85d27fe:	d9 45 e0             	flds   -0x20(%ebp)
 85d2801:	d9 bd 4e ff ff ff    	fnstcw -0xb2(%ebp)
 85d2807:	0f b7 85 4e ff ff ff 	movzwl -0xb2(%ebp),%eax
 85d280e:	b4 0c                	mov    $0xc,%ah
 85d2810:	66 89 85 4c ff ff ff 	mov    %ax,-0xb4(%ebp)
 85d2817:	d9 ad 4c ff ff ff    	fldcw  -0xb4(%ebp)
 85d281d:	db 9d 50 ff ff ff    	fistpl -0xb0(%ebp)
 85d2823:	d9 ad 4e ff ff ff    	fldcw  -0xb2(%ebp)
 85d2829:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 85d282f:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2832:	89 50 04             	mov    %edx,0x4(%eax)
 85d2835:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2838:	8b 40 04             	mov    0x4(%eax),%eax
 85d283b:	85 c0                	test   %eax,%eax
 85d283d:	7f 0a                	jg     85d2849 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x4ff>
 85d283f:	8b 45 14             	mov    0x14(%ebp),%eax
 85d2842:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 85d2849:	80 bd 54 ff ff ff 00 	cmpb   $0x0,-0xac(%ebp)
 85d2850:	0f 84 b6 01 00 00    	je     85d2a0c <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x6c2>
 85d2856:	e8 af f5 ff ff       	call   85d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>
 85d285b:	83 c0 30             	add    $0x30,%eax
 85d285e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d2861:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d2864:	8b 00                	mov    (%eax),%eax
 85d2866:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85d2869:	83 7d b4 01          	cmpl   $0x1,-0x4c(%ebp)
 85d286d:	7e 18                	jle    85d2887 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x53d>
 85d286f:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 85d2876:	e8 0c f3 0d 00       	call   86b1b87 <_Z12get_rand_inti>
 85d287b:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 85d287e:	7d 07                	jge    85d2887 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x53d>
 85d2880:	b8 01 00 00 00       	mov    $0x1,%eax
 85d2885:	eb 05                	jmp    85d288c <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x542>
 85d2887:	b8 00 00 00 00       	mov    $0x0,%eax
 85d288c:	84 c0                	test   %al,%al
 85d288e:	74 1c                	je     85d28ac <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x562>
 85d2890:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d2893:	8b 40 08             	mov    0x8(%eax),%eax
 85d2896:	89 c2                	mov    %eax,%edx
 85d2898:	8b 45 14             	mov    0x14(%ebp),%eax
 85d289b:	89 50 08             	mov    %edx,0x8(%eax)
 85d289e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d28a1:	8b 40 04             	mov    0x4(%eax),%eax
 85d28a4:	89 c2                	mov    %eax,%edx
 85d28a6:	8b 45 14             	mov    0x14(%ebp),%eax
 85d28a9:	89 50 1c             	mov    %edx,0x1c(%eax)
 85d28ac:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 85d28b0:	0f 84 56 01 00 00    	je     85d2a0c <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x6c2>
 85d28b6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d28b9:	89 04 24             	mov    %eax,(%esp)
 85d28bc:	e8 cb 7a b0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 85d28c1:	83 f8 02             	cmp    $0x2,%eax
 85d28c4:	7e 16                	jle    85d28dc <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x592>
 85d28c6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d28c9:	89 04 24             	mov    %eax,(%esp)
 85d28cc:	e8 61 db b4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85d28d1:	85 c0                	test   %eax,%eax
 85d28d3:	74 07                	je     85d28dc <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x592>
 85d28d5:	b8 01 00 00 00       	mov    $0x1,%eax
 85d28da:	eb 05                	jmp    85d28e1 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x597>
 85d28dc:	b8 00 00 00 00       	mov    $0x0,%eax
 85d28e1:	84 c0                	test   %al,%al
 85d28e3:	0f 84 23 01 00 00    	je     85d2a0c <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x6c2>
 85d28e9:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d28ec:	89 04 24             	mov    %eax,(%esp)
 85d28ef:	e8 8a 79 b0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85d28f4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d28f7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d28fa:	89 04 24             	mov    %eax,(%esp)
 85d28fd:	e8 24 27 da ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 85d2902:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d2906:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d2909:	89 04 24             	mov    %eax,(%esp)
 85d290c:	e8 6b 93 0b 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 85d2911:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d2915:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 85d291c:	00 
 85d291d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d2920:	89 04 24             	mov    %eax,(%esp)
 85d2923:	e8 6c a2 f3 ff       	call   850cb94 <_ZNK10CInventory39GetExpertJobSelfDisjointResultVariationE20ENUM_EXPERT_JOB_TYPEi>
 85d2928:	d9 5d f0             	fstps  -0x10(%ebp)
 85d292b:	d9 45 f0             	flds   -0x10(%ebp)
 85d292e:	d9 05 14 08 cc 08    	flds   0x8cc0814
 85d2934:	de f9                	fdivrp %st,%st(1)
 85d2936:	d9 5d f0             	fstps  -0x10(%ebp)
 85d2939:	c7 85 58 ff ff ff 00 	movl   $0x0,-0xa8(%ebp)
 85d2940:	00 00 00 
 85d2943:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
 85d294a:	00 00 00 
 85d294d:	c7 85 60 ff ff ff 00 	movl   $0x0,-0xa0(%ebp)
 85d2954:	00 00 00 
 85d2957:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
 85d295e:	00 00 00 
 85d2961:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%ebp)
 85d2968:	00 00 00 
 85d296b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d2972:	e9 86 00 00 00       	jmp    85d29fd <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x6b3>
 85d2977:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d297a:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85d297d:	8b 55 14             	mov    0x14(%ebp),%edx
 85d2980:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
 85d2983:	89 94 85 58 ff ff ff 	mov    %edx,-0xa8(%ebp,%eax,4)
 85d298a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d298d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d2990:	8b 84 85 58 ff ff ff 	mov    -0xa8(%ebp,%eax,4),%eax
 85d2997:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 85d299d:	db 85 50 ff ff ff    	fildl  -0xb0(%ebp)
 85d29a3:	d8 4d f0             	fmuls  -0x10(%ebp)
 85d29a6:	d9 bd 4e ff ff ff    	fnstcw -0xb2(%ebp)
 85d29ac:	0f b7 85 4e ff ff ff 	movzwl -0xb2(%ebp),%eax
 85d29b3:	b4 0c                	mov    $0xc,%ah
 85d29b5:	66 89 85 4c ff ff ff 	mov    %ax,-0xb4(%ebp)
 85d29bc:	d9 ad 4c ff ff ff    	fldcw  -0xb4(%ebp)
 85d29c2:	db 9d 50 ff ff ff    	fistpl -0xb0(%ebp)
 85d29c8:	d9 ad 4e ff ff ff    	fldcw  -0xb2(%ebp)
 85d29ce:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 85d29d4:	89 84 95 58 ff ff ff 	mov    %eax,-0xa8(%ebp,%edx,4)
 85d29db:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d29de:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85d29e1:	8b 45 14             	mov    0x14(%ebp),%eax
 85d29e4:	8b 0c 88             	mov    (%eax,%ecx,4),%ecx
 85d29e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d29ea:	8b 84 85 58 ff ff ff 	mov    -0xa8(%ebp,%eax,4),%eax
 85d29f1:	01 c1                	add    %eax,%ecx
 85d29f3:	8b 45 14             	mov    0x14(%ebp),%eax
 85d29f6:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 85d29f9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d29fd:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 85d2a01:	0f 9e c0             	setle  %al
 85d2a04:	84 c0                	test   %al,%al
 85d2a06:	0f 85 6b ff ff ff    	jne    85d2977 <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser+0x62d>
 85d2a0c:	b8 00 00 00 00       	mov    $0x0,%eax
 85d2a11:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85d2a14:	c9                   	leave
 85d2a15:	c3                   	ret

```

```c
// expert_job::CDisjointer::get_disjoint_result_ @ 0x85d234a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* expert_job::CDisjointer::get_disjoint_result_(CItem*, Inven_Item*, int, DisJointResult&, bool,
   CUser*) */

undefined4
expert_job::CDisjointer::get_disjoint_result_
          (CItem *param_1,Inven_Item *param_2,int param_3,DisJointResult *param_4,bool param_5,
          CUser *param_6)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longdouble lVar7;
  int local_ac [5];
  int local_98 [2];
  float local_90;
  int local_84 [2];
  float local_7c;
  _Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_char>> local_70 [4];
  DisjointMachineGrade local_6c [5];
  DisjointMachineGrade local_67 [3];
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  local_64 [7];
  char local_5d;
  map<unsigned_char,unsigned_char,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_char>>>
  local_5c [4];
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  bool local_45;
  undefined4 *local_44;
  float local_40;
  int local_3c;
  int local_38;
  uint local_34;
  CInventory *local_30;
  float local_2c;
  float local_28;
  float local_24;
  int *local_20;
  int local_1c;
  CInventory *local_18;
  int local_10;
  
  local_58 = CItem::get_index(param_1);
  local_54 = CItem::GetSellPrice(param_1);
  local_50 = CItem::get_rarity(param_1);
  local_4c = CItem::get_grade(param_1);
  local_45 = false;
  if (param_2 != (Inven_Item *)0x0) {
    cVar2 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(param_2 + 0x11));
    local_45 = cVar2 != '\x01';
  }
  DisjointMachineGrade::DisjointMachineGrade(local_67,(uchar)local_50,(uchar)param_3,local_45);
  GetScript();
  std::
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  ::find(local_6c);
  GetScript();
  std::
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  ::end(local_64);
  cVar2 = std::_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>>::operator==
                    ((_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>> *)
                     local_6c,(_Rb_tree_iterator *)local_64);
  if (cVar2 == '\0') {
    iVar5 = std::_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>>::
            operator->((_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>> *)
                       local_6c);
    local_44 = (undefined4 *)(iVar5 + 4);
    local_54 = (int)ROUND(_DAT_08cc080c * (float)local_54);
    local_40 = *(float *)(iVar5 + 8);
    *(undefined4 *)(param_4 + 0x14) = *local_44;
    bVar3 = (bool)(**(code **)(*(int *)param_1 + 0x4c))(param_1);
    iVar5 = getItemSellPrice(local_54,0,0,bVar3);
    iVar6 = GetScript();
    local_3c = (iVar5 * 1000) / *(int *)(iVar6 + 0x1d4);
    *(int *)param_4 = (int)ROUND(((float)local_3c * local_40) / _DAT_08cc0810);
    if (*(int *)param_4 < 1) {
      *(undefined4 *)param_4 = 1;
    }
    *(undefined4 *)(param_4 + 0x18) = 0;
    *(undefined4 *)(param_4 + 4) = 0;
    local_38 = local_44[8] * 100;
    local_34 = 0;
    if (param_5) {
      local_5d = (uchar)param_3 + '\x01';
      GetEtcScript();
      std::
      map<unsigned_char,unsigned_char,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_char>>>
      ::find((uchar *)local_70);
      GetEtcScript();
      std::
      map<unsigned_char,unsigned_char,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_char>>>
      ::end(local_5c);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_char>>::operator!=
                        (local_70,(_Rb_tree_iterator *)local_5c);
      if (cVar2 != '\0') {
        iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_char>>::operator->
                          (local_70);
        local_34 = (uint)*(byte *)(iVar5 + 1);
      }
      local_34 = local_34 * 100;
      local_38 = local_38 + local_34;
      if (param_6 != (CUser *)0x0) {
        iVar5 = CUser::get_state(param_6);
        if ((iVar5 < 3) ||
           (iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_6), iVar5 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_30 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_6);
          iVar5 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_6);
          uVar4 = CUser::GetCurExpertJobLevel(param_6,iVar5);
          lVar7 = (longdouble)CInventory::GetExpertJobSelfDisjointBigWinRate(local_30,3,uVar4);
          local_2c = _DAT_08cc0814 * (float)lVar7;
          local_38 = (int)ROUND((float)local_38 + local_2c);
        }
      }
    }
    iVar5 = get_rand_int(10000);
    if (iVar5 < local_38) {
      stItemSelectRate::stItemSelectRate((stItemSelectRate *)local_84);
      local_84[0] = -1;
      iVar5 = get_rand_int(10000);
      get_additional_item((vector *)(local_44 + 5),iVar5,(stItemSelectRate *)local_84,local_4c);
      if (local_84[0] != -1) {
        *(int *)(param_4 + 0x18) = local_84[0];
        local_28 = (float)local_4c / local_7c;
        *(int *)(param_4 + 4) = (int)ROUND(local_28);
        if (*(int *)(param_4 + 4) < 1) {
          *(undefined4 *)(param_4 + 4) = 1;
        }
      }
    }
    else {
      stItemSelectRate::stItemSelectRate((stItemSelectRate *)local_98);
      local_98[0] = -1;
      iVar5 = get_rand_int(10000);
      get_additional_item((vector *)(local_44 + 2),iVar5,(stItemSelectRate *)local_98,local_4c);
      if (local_98[0] != -1) {
        *(int *)(param_4 + 0x18) = local_98[0];
        local_24 = (float)local_4c / local_90;
        *(int *)(param_4 + 4) = (int)ROUND(local_24);
        if (*(int *)(param_4 + 4) < 1) {
          *(undefined4 *)(param_4 + 4) = 1;
        }
      }
    }
    if (param_5) {
      iVar5 = GetScript();
      local_20 = (int *)(iVar5 + 0x30);
      local_1c = *local_20;
      if ((local_50 < 2) || (iVar5 = get_rand_int(100), local_1c <= iVar5)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(int *)(param_4 + 8) = local_20[2];
        *(int *)(param_4 + 0x1c) = local_20[1];
      }
      if (param_6 != (CUser *)0x0) {
        iVar5 = CUser::get_state(param_6);
        if ((iVar5 < 3) ||
           (iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_6), iVar5 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_18 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_6);
          iVar5 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_6);
          uVar4 = CUser::GetCurExpertJobLevel(param_6,iVar5);
          lVar7 = (longdouble)CInventory::GetExpertJobSelfDisjointResultVariation(local_18,3,uVar4);
          fVar1 = (float)lVar7 / _DAT_08cc0814;
          local_ac[0] = 0;
          local_ac[1] = 0;
          local_ac[2] = 0;
          local_ac[3] = 0;
          local_ac[4] = 0;
          for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
            local_ac[local_10] = *(int *)(param_4 + local_10 * 4);
            local_ac[local_10] = (int)ROUND((float)local_ac[local_10] * fVar1);
            *(int *)(param_4 + local_10 * 4) = *(int *)(param_4 + local_10 * 4) + local_ac[local_10]
            ;
          }
        }
      }
    }
    uVar4 = 0;
  }
  else if (local_45 == false) {
    uVar4 = 0x11;
  }
  else {
    uVar4 = 0xd3;
  }
  return uVar4;
}

```

---

## send_error

```asm
// === 085d1e62 expert_job::CDisjointer::send_error  [0x085d1e62-0x85d1f09] ===
 85d1e62:	55                   	push   %ebp
 85d1e63:	89 e5                	mov    %esp,%ebp
 85d1e65:	56                   	push   %esi
 85d1e66:	53                   	push   %ebx
 85d1e67:	83 ec 20             	sub    $0x20,%esp
 85d1e6a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d1e6d:	89 04 24             	mov    %eax,(%esp)
 85d1e70:	e8 d7 be fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d1e75:	c7 44 24 08 cb 00 00 	movl   $0xcb,0x8(%esp)
 85d1e7c:	00 
 85d1e7d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d1e84:	00 
 85d1e85:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d1e88:	89 04 24             	mov    %eax,(%esp)
 85d1e8b:	e8 6c 9a af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d1e90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d1e97:	00 
 85d1e98:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d1e9b:	89 04 24             	mov    %eax,(%esp)
 85d1e9e:	e8 7d 9a af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d1ea3:	8b 45 10             	mov    0x10(%ebp),%eax
 85d1ea6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d1eaa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d1ead:	89 04 24             	mov    %eax,(%esp)
 85d1eb0:	e8 6b 9a af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d1eb5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d1ebc:	00 
 85d1ebd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d1ec0:	89 04 24             	mov    %eax,(%esp)
 85d1ec3:	e8 90 9a af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d1ec8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d1ecb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d1ecf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1ed2:	89 04 24             	mov    %eax,(%esp)
 85d1ed5:	e8 e0 66 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85d1eda:	eb 1b                	jmp    85d1ef7 <_ZN10expert_job11CDisjointer10send_errorEP5CUseri+0x95>
 85d1edc:	89 d3                	mov    %edx,%ebx
 85d1ede:	89 c6                	mov    %eax,%esi
 85d1ee0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d1ee3:	89 04 24             	mov    %eax,(%esp)
 85d1ee6:	e8 95 bf fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d1eeb:	89 f0                	mov    %esi,%eax
 85d1eed:	89 da                	mov    %ebx,%edx
 85d1eef:	89 04 24             	mov    %eax,(%esp)
 85d1ef2:	e8 59 18 51 00       	call   8ae3750 <_Unwind_Resume>
 85d1ef7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d1efa:	89 04 24             	mov    %eax,(%esp)
 85d1efd:	e8 7e bf fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d1f02:	83 c4 20             	add    $0x20,%esp
 85d1f05:	5b                   	pop    %ebx
 85d1f06:	5e                   	pop    %esi
 85d1f07:	5d                   	pop    %ebp
 85d1f08:	c3                   	ret
 85d1f09:	90                   	nop

```

```c
// expert_job::CDisjointer::send_error @ 0x85d1e62

/* expert_job::CDisjointer::send_error(CUser*, int) */

void __thiscall expert_job::CDisjointer::send_error(CDisjointer *this,CUser *param_1,int param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085d1e8b to 085d1ed9 has its CatchHandler @ 085d1edc */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xcb);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## ~CDisjointer

```asm
// === 085d1d8a expert_job::CDisjointer::~CDisjointer  [0x085d1d8a-0x85d1deb] ===
 85d1d8a:	55                   	push   %ebp
 85d1d8b:	89 e5                	mov    %esp,%ebp
 85d1d8d:	56                   	push   %esi
 85d1d8e:	53                   	push   %ebx
 85d1d8f:	83 ec 10             	sub    $0x10,%esp
 85d1d92:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1d95:	c7 00 28 08 cc 08    	movl   $0x8cc0828,(%eax)
 85d1d9b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1d9e:	83 c0 08             	add    $0x8,%eax
 85d1da1:	89 04 24             	mov    %eax,(%esp)
 85d1da4:	e8 0d 21 00 00       	call   85d3eb6 <_ZN10expert_job16CDisjointMachineD1Ev>
 85d1da9:	eb 1b                	jmp    85d1dc6 <_ZN10expert_job11CDisjointerD1Ev+0x3c>
 85d1dab:	89 d3                	mov    %edx,%ebx
 85d1dad:	89 c6                	mov    %eax,%esi
 85d1daf:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1db2:	89 04 24             	mov    %eax,(%esp)
 85d1db5:	e8 40 d4 ec ff       	call   849f1fa <_ZN10expert_job10CExpertJobD1Ev>
 85d1dba:	89 f0                	mov    %esi,%eax
 85d1dbc:	89 da                	mov    %ebx,%edx
 85d1dbe:	89 04 24             	mov    %eax,(%esp)
 85d1dc1:	e8 8a 19 51 00       	call   8ae3750 <_Unwind_Resume>
 85d1dc6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1dc9:	89 04 24             	mov    %eax,(%esp)
 85d1dcc:	e8 29 d4 ec ff       	call   849f1fa <_ZN10expert_job10CExpertJobD1Ev>
 85d1dd1:	b8 00 00 00 00       	mov    $0x0,%eax
 85d1dd6:	84 c0                	test   %al,%al
 85d1dd8:	74 0b                	je     85d1de5 <_ZN10expert_job11CDisjointerD1Ev+0x5b>
 85d1dda:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1ddd:	89 04 24             	mov    %eax,(%esp)
 85d1de0:	e8 0b 27 15 00       	call   87244f0 <_ZdlPv>
 85d1de5:	83 c4 10             	add    $0x10,%esp
 85d1de8:	5b                   	pop    %ebx
 85d1de9:	5e                   	pop    %esi
 85d1dea:	5d                   	pop    %ebp
 85d1deb:	c3                   	ret

```

```c
// expert_job::CDisjointer::~CDisjointer @ 0x85d1d8a

/* WARNING: Removing unreachable block (ram,0x085d1dda) */
/* expert_job::CDisjointer::~CDisjointer() */

void __thiscall expert_job::CDisjointer::~CDisjointer(CDisjointer *this)

{
  *(undefined ***)this = &PTR_OnStartMission_08cc0828;
                    /* try { // try from 085d1da4 to 085d1da8 has its CatchHandler @ 085d1dab */
  CDisjointMachine::~CDisjointMachine((CDisjointMachine *)(this + 8));
  CExpertJob::~CExpertJob((CExpertJob *)this);
  return;
}

```

---

## ~CDisjointer_085d1dec

```asm
// === 085d1dec expert_job::CDisjointer::~CDisjointer  [0x085d1dec-0x85d1e09] ===
 85d1dec:	55                   	push   %ebp
 85d1ded:	89 e5                	mov    %esp,%ebp
 85d1def:	83 ec 18             	sub    $0x18,%esp
 85d1df2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1df5:	89 04 24             	mov    %eax,(%esp)
 85d1df8:	e8 8d ff ff ff       	call   85d1d8a <_ZN10expert_job11CDisjointerD1Ev>
 85d1dfd:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1e00:	89 04 24             	mov    %eax,(%esp)
 85d1e03:	e8 e8 26 15 00       	call   87244f0 <_ZdlPv>
 85d1e08:	c9                   	leave
 85d1e09:	c3                   	ret

```

```c
// expert_job::CDisjointer::~CDisjointer @ 0x85d1dec

/* expert_job::CDisjointer::~CDisjointer() */

void __thiscall expert_job::CDisjointer::~CDisjointer(CDisjointer *this)

{
  ~CDisjointer(this);
  operator_delete(this);
  return;
}

```

