# game_master__CUserPremiumDelete

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084abf4e game_master::CUserPremiumDelete::execute  [0x084abf4e-0x84ac2a9] ===
 84abf4e:	55                   	push   %ebp
 84abf4f:	89 e5                	mov    %esp,%ebp
 84abf51:	56                   	push   %esi
 84abf52:	53                   	push   %ebx
 84abf53:	83 ec 60             	sub    $0x60,%esp
 84abf56:	8b 45 08             	mov    0x8(%ebp),%eax
 84abf59:	89 04 24             	mov    %eax,(%esp)
 84abf5c:	e8 59 80 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84abf61:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84abf64:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84abf67:	89 04 24             	mov    %eax,(%esp)
 84abf6a:	e8 b9 0e c8 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 84abf6f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84abf72:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84abf75:	89 04 24             	mov    %eax,(%esp)
 84abf78:	e8 79 c5 e7 ff       	call   83284f6 <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEC1Ev>
 84abf7d:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 84abf84:	eb 42                	jmp    84abfc8 <_ZN11game_master18CUserPremiumDelete7executeEv+0x7a>
 84abf86:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84abf89:	89 44 24 04          	mov    %eax,0x4(%esp)
 84abf8d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84abf90:	89 04 24             	mov    %eax,(%esp)
 84abf93:	e8 ba 1f 20 00       	call   86adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>
 84abf98:	8b 00                	mov    (%eax),%eax
 84abf9a:	85 c0                	test   %eax,%eax
 84abf9c:	0f 95 c0             	setne  %al
 84abf9f:	84 c0                	test   %al,%al
 84abfa1:	74 21                	je     84abfc4 <_ZN11game_master18CUserPremiumDelete7executeEv+0x76>
 84abfa3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84abfa6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84abfaa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84abfad:	89 04 24             	mov    %eax,(%esp)
 84abfb0:	e8 9d 1f 20 00       	call   86adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>
 84abfb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84abfb9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84abfbc:	89 04 24             	mov    %eax,(%esp)
 84abfbf:	e8 a4 c5 e7 ff       	call   8328568 <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE9push_backERKS1_>
 84abfc4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84abfc8:	83 7d f4 69          	cmpl   $0x69,-0xc(%ebp)
 84abfcc:	0f 9e c0             	setle  %al
 84abfcf:	84 c0                	test   %al,%al
 84abfd1:	75 b3                	jne    84abf86 <_ZN11game_master18CUserPremiumDelete7executeEv+0x38>
 84abfd3:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84abfda:	e8 bf fc c1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84abfdf:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84abfe2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84abfe5:	83 c0 01             	add    $0x1,%eax
 84abfe8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84abfeb:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84abff2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84abff5:	8d 55 d0             	lea    -0x30(%ebp),%edx
 84abff8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84abffc:	89 04 24             	mov    %eax,(%esp)
 84abfff:	e8 d8 c5 e7 ff       	call   83285dc <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE5beginEv>
 84ac004:	83 ec 04             	sub    $0x4,%esp
 84ac007:	e9 3d 02 00 00       	jmp    84ac249 <_ZN11game_master18CUserPremiumDelete7executeEv+0x2fb>
 84ac00c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84ac013:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ac016:	89 04 24             	mov    %eax,(%esp)
 84ac019:	e8 4a c6 e7 ff       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84ac01e:	8b 10                	mov    (%eax),%edx
 84ac020:	89 d0                	mov    %edx,%eax
 84ac022:	c1 e0 03             	shl    $0x3,%eax
 84ac025:	01 d0                	add    %edx,%eax
 84ac027:	c1 e0 05             	shl    $0x5,%eax
 84ac02a:	8b 80 9c 3a 48 09    	mov    0x9483a9c(%eax),%eax
 84ac030:	83 f8 01             	cmp    $0x1,%eax
 84ac033:	0f 94 c0             	sete   %al
 84ac036:	84 c0                	test   %al,%al
 84ac038:	74 0e                	je     84ac048 <_ZN11game_master18CUserPremiumDelete7executeEv+0xfa>
 84ac03a:	e8 42 01 c2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84ac03f:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 84ac045:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ac048:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84ac04d:	c7 44 24 08 89 09 00 	movl   $0x989,0x8(%esp)
 84ac054:	00 
 84ac055:	c7 44 24 04 63 fa c7 	movl   $0x8c7fa63,0x4(%esp)
 84ac05c:	08 
 84ac05d:	89 04 24             	mov    %eax,(%esp)
 84ac060:	e8 21 3a de ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84ac065:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84ac06c:	00 
 84ac06d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac071:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac074:	89 04 24             	mov    %eax,(%esp)
 84ac077:	e8 aa cb c1 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84ac07c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac07f:	89 04 24             	mov    %eax,(%esp)
 84ac082:	e8 bf cb c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ac087:	c7 44 24 04 54 00 00 	movl   $0x54,0x4(%esp)
 84ac08e:	00 
 84ac08f:	89 04 24             	mov    %eax,(%esp)
 84ac092:	e8 bf cb c1 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84ac097:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84ac09a:	89 04 24             	mov    %eax,(%esp)
 84ac09d:	e8 f4 cb c1 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84ac0a2:	89 c3                	mov    %eax,%ebx
 84ac0a4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac0a7:	89 04 24             	mov    %eax,(%esp)
 84ac0aa:	e8 97 cb c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ac0af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ac0b3:	89 04 24             	mov    %eax,(%esp)
 84ac0b6:	e8 9b cb c1 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84ac0bb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84ac0be:	89 04 24             	mov    %eax,(%esp)
 84ac0c1:	e8 a8 e2 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84ac0c6:	89 c3                	mov    %eax,%ebx
 84ac0c8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac0cb:	89 04 24             	mov    %eax,(%esp)
 84ac0ce:	e8 73 cb c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ac0d3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ac0d7:	89 04 24             	mov    %eax,(%esp)
 84ac0da:	e8 b3 61 c3 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84ac0df:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ac0e2:	89 04 24             	mov    %eax,(%esp)
 84ac0e5:	e8 7e c5 e7 ff       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84ac0ea:	8b 18                	mov    (%eax),%ebx
 84ac0ec:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac0ef:	89 04 24             	mov    %eax,(%esp)
 84ac0f2:	e8 4f cb c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ac0f7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ac0fb:	89 04 24             	mov    %eax,(%esp)
 84ac0fe:	e8 53 cb c1 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84ac103:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac106:	89 04 24             	mov    %eax,(%esp)
 84ac109:	e8 38 cb c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ac10e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84ac111:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ac115:	89 04 24             	mov    %eax,(%esp)
 84ac118:	e8 59 61 c3 ff       	call   80e2276 <_ZN12CStreamGuardlsEl>
 84ac11d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac120:	89 04 24             	mov    %eax,(%esp)
 84ac123:	e8 1e cb c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ac128:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84ac12b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ac12f:	89 04 24             	mov    %eax,(%esp)
 84ac132:	e8 3f 61 c3 ff       	call   80e2276 <_ZN12CStreamGuardlsEl>
 84ac137:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ac13a:	89 04 24             	mov    %eax,(%esp)
 84ac13d:	e8 26 c5 e7 ff       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84ac142:	8b 58 0c             	mov    0xc(%eax),%ebx
 84ac145:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac148:	89 04 24             	mov    %eax,(%esp)
 84ac14b:	e8 f6 ca c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ac150:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ac154:	89 04 24             	mov    %eax,(%esp)
 84ac157:	e8 fa ca c1 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84ac15c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac15f:	89 04 24             	mov    %eax,(%esp)
 84ac162:	e8 df ca c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ac167:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84ac16a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ac16e:	89 04 24             	mov    %eax,(%esp)
 84ac171:	e8 1c 61 c3 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84ac176:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84ac17b:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 84ac17e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ac182:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84ac189:	00 
 84ac18a:	89 04 24             	mov    %eax,(%esp)
 84ac18d:	e8 4c 4e 0c 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84ac192:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ac195:	89 04 24             	mov    %eax,(%esp)
 84ac198:	e8 cb c4 e7 ff       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84ac19d:	8b 58 0c             	mov    0xc(%eax),%ebx
 84ac1a0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ac1a3:	89 04 24             	mov    %eax,(%esp)
 84ac1a6:	e8 bd c4 e7 ff       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84ac1ab:	8b 00                	mov    (%eax),%eax
 84ac1ad:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84ac1b4:	00 
 84ac1b5:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84ac1b9:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84ac1bc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84ac1c0:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84ac1c3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ac1c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac1cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84ac1ce:	89 04 24             	mov    %eax,(%esp)
 84ac1d1:	e8 12 36 20 00       	call   86af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>
 84ac1d6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ac1d9:	89 04 24             	mov    %eax,(%esp)
 84ac1dc:	e8 87 c4 e7 ff       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84ac1e1:	8b 00                	mov    (%eax),%eax
 84ac1e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac1e7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84ac1ea:	89 04 24             	mov    %eax,(%esp)
 84ac1ed:	e8 40 3a 20 00       	call   86afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>
 84ac1f2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84ac1f5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84ac1f8:	89 d3                	mov    %edx,%ebx
 84ac1fa:	29 c3                	sub    %eax,%ebx
 84ac1fc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ac1ff:	89 04 24             	mov    %eax,(%esp)
 84ac202:	e8 61 c4 e7 ff       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84ac207:	8b 00                	mov    (%eax),%eax
 84ac209:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84ac20d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac211:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84ac214:	89 04 24             	mov    %eax,(%esp)
 84ac217:	e8 98 36 20 00       	call   86af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>
 84ac21c:	eb 15                	jmp    84ac233 <_ZN11game_master18CUserPremiumDelete7executeEv+0x2e5>
 84ac21e:	89 d3                	mov    %edx,%ebx
 84ac220:	89 c6                	mov    %eax,%esi
 84ac222:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac225:	89 04 24             	mov    %eax,(%esp)
 84ac228:	e8 a5 06 17 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84ac22d:	89 f0                	mov    %esi,%eax
 84ac22f:	89 da                	mov    %ebx,%edx
 84ac231:	eb 47                	jmp    84ac27a <_ZN11game_master18CUserPremiumDelete7executeEv+0x32c>
 84ac233:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ac236:	89 04 24             	mov    %eax,(%esp)
 84ac239:	e8 94 06 17 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84ac23e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ac241:	89 04 24             	mov    %eax,(%esp)
 84ac244:	e8 09 c4 e7 ff       	call   8328652 <_ZN9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEppEv>
 84ac249:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ac24c:	8d 55 d0             	lea    -0x30(%ebp),%edx
 84ac24f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ac253:	89 04 24             	mov    %eax,(%esp)
 84ac256:	e8 a5 c3 e7 ff       	call   8328600 <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE3endEv>
 84ac25b:	83 ec 04             	sub    $0x4,%esp
 84ac25e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ac261:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac265:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ac268:	89 04 24             	mov    %eax,(%esp)
 84ac26b:	e8 b6 c3 e7 ff       	call   8328626 <_ZN9__gnu_cxxneIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84ac270:	84 c0                	test   %al,%al
 84ac272:	0f 85 94 fd ff ff    	jne    84ac00c <_ZN11game_master18CUserPremiumDelete7executeEv+0xbe>
 84ac278:	eb 1b                	jmp    84ac295 <_ZN11game_master18CUserPremiumDelete7executeEv+0x347>
 84ac27a:	89 d3                	mov    %edx,%ebx
 84ac27c:	89 c6                	mov    %eax,%esi
 84ac27e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84ac281:	89 04 24             	mov    %eax,(%esp)
 84ac284:	e8 81 c2 e7 ff       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 84ac289:	89 f0                	mov    %esi,%eax
 84ac28b:	89 da                	mov    %ebx,%edx
 84ac28d:	89 04 24             	mov    %eax,(%esp)
 84ac290:	e8 bb 74 63 00       	call   8ae3750 <_Unwind_Resume>
 84ac295:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84ac298:	89 04 24             	mov    %eax,(%esp)
 84ac29b:	e8 6a c2 e7 ff       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 84ac2a0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84ac2a3:	83 c4 00             	add    $0x0,%esp
 84ac2a6:	5b                   	pop    %ebx
 84ac2a7:	5e                   	pop    %esi
 84ac2a8:	5d                   	pop    %ebp
 84ac2a9:	c3                   	ret

```

```c
// game_master::CUserPremiumDelete::execute @ 0x84abf4e

/* game_master::CUserPremiumDelete::execute() */

void __thiscall game_master::CUserPremiumDelete::execute(CUserPremiumDelete *this)

{
  undefined4 uVar1;
  bool bVar2;
  SUserPremiumInfo *pSVar3;
  int *piVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  CStreamGuard local_40 [8];
  __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
  local_38 [4];
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_34 [12];
  __normal_iterator local_28 [4];
  CUser *local_24;
  CUserPremium *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_24 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_20 = (CUserPremium *)CUser::GetPremiumInfo(local_24);
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::vector
            (local_34);
  for (local_10 = 1; local_10 < 0x6a; local_10 = local_10 + 1) {
                    /* try { // try from 084abf93 to 084ac064 has its CatchHandler @ 084ac27a */
    piVar4 = (int *)WongWork::CUserPremium::GetPremiumInfo(local_20,local_10);
    if (*piVar4 != 0) {
      pSVar3 = (SUserPremiumInfo *)WongWork::CUserPremium::GetPremiumInfo(local_20,local_10);
      std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::push_back
                (local_34,pSVar3);
    }
  }
  local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_18 = local_1c + 1;
  local_14 = 0;
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::begin();
  while( true ) {
    std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::end();
    bVar2 = __gnu_cxx::operator!=(local_38,local_28);
    if (!bVar2) break;
    local_14 = 0;
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_38);
    if (*(int *)(g_SPremiumInfo + *piVar4 * 0x120 + 0x5c) == 1) {
      iVar5 = G_CEnvironment();
      local_14 = *(uint *)(iVar5 + 0x378);
    }
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"GameMaster.cpp",0x989);
    CStreamGuard::CStreamGuard(local_40,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 084ac092 to 084ac21b has its CatchHandler @ 084ac21e */
    CStreamGuard::operator<<(pCVar7,0x54);
    iVar5 = CUser::GetUID(local_24);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,iVar5);
    uVar8 = CUser::get_acc_id(local_24);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,uVar8);
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_38);
    iVar5 = *piVar4;
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,iVar5);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,local_1c);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,local_18);
    iVar5 = __gnu_cxx::
            __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
            ::operator->(local_38);
    iVar5 = *(int *)(iVar5 + 0xc);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,iVar5);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,local_14);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_40);
    iVar5 = __gnu_cxx::
            __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
            ::operator->(local_38);
    uVar1 = *(undefined4 *)(iVar5 + 0xc);
    puVar9 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
             ::operator->(local_38);
    WongWork::CHandlePremium::handleSetUserPremium(local_24,*puVar9,local_1c,local_18,uVar1,0);
    puVar9 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
             ::operator->(local_38);
    WongWork::CHandlePremium::handlePremiumEffect(local_24,*puVar9);
    iVar5 = local_18 - local_1c;
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_38);
    WongWork::CHandlePremium::handleNotifyPremiumInfo(local_24,*piVar4,iVar5);
                    /* try { // try from 084ac239 to 084ac26f has its CatchHandler @ 084ac27a */
    CStreamGuard::~CStreamGuard(local_40);
    __gnu_cxx::
    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
    ::operator++(local_38);
  }
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
            (local_34);
  return;
}

```

