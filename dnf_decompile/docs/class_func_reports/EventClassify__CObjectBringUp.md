# EventClassify__CObjectBringUp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## get_db_table_name

```asm
// === 0810fcdc EventClassify::CObjectBringUp::get_db_table_name  [0x0810fcdc-0x810fce9] ===
 810fcdc:	55                   	push   %ebp
 810fcdd:	89 e5                	mov    %esp,%ebp
 810fcdf:	8b 45 08             	mov    0x8(%ebp),%eax
 810fce2:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fce5:	83 c0 08             	add    $0x8,%eax
 810fce8:	5d                   	pop    %ebp
 810fce9:	c3                   	ret

```

```c
// EventClassify::CObjectBringUp::get_db_table_name @ 0x810fcdc

/* EventClassify::CObjectBringUp::get_db_table_name() */

int __thiscall EventClassify::CObjectBringUp::get_db_table_name(CObjectBringUp *this)

{
  return *(int *)(this + 0x1c) + 8;
}

```

---

## sendBringUpReward

```asm
// === 0810fe90 EventClassify::CObjectBringUp::sendBringUpReward  [0x0810fe90-0x8110385] ===
 810fe90:	55                   	push   %ebp
 810fe91:	89 e5                	mov    %esp,%ebp
 810fe93:	56                   	push   %esi
 810fe94:	53                   	push   %ebx
 810fe95:	83 ec 60             	sub    $0x60,%esp
 810fe98:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810fe9c:	75 36                	jne    810fed4 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x44>
 810fe9e:	c7 44 24 10 18 c4 b4 	movl   $0x8b4c418,0x10(%esp)
 810fea5:	08 
 810fea6:	c7 44 24 0c ad 07 00 	movl   $0x7ad,0xc(%esp)
 810fead:	00 
 810feae:	c7 44 24 08 c0 d2 b4 	movl   $0x8b4d2c0,0x8(%esp)
 810feb5:	08 
 810feb6:	c7 44 24 04 c0 c2 b4 	movl   $0x8b4c2c0,0x4(%esp)
 810febd:	08 
 810febe:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 810fec5:	e8 40 3d 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 810feca:	b8 00 00 00 00       	mov    $0x0,%eax
 810fecf:	e9 a8 04 00 00       	jmp    811037c <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x4ec>
 810fed4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 810fedb:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 810fee2:	8b 45 08             	mov    0x8(%ebp),%eax
 810fee5:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fee8:	8d 50 28             	lea    0x28(%eax),%edx
 810feeb:	8d 45 c0             	lea    -0x40(%ebp),%eax
 810feee:	89 54 24 04          	mov    %edx,0x4(%esp)
 810fef2:	89 04 24             	mov    %eax,(%esp)
 810fef5:	e8 70 1f 00 00       	call   8111e6a <_ZNSt6vectorISt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESaIS4_EE5beginEv>
 810fefa:	83 ec 04             	sub    $0x4,%esp
 810fefd:	e9 40 04 00 00       	jmp    8110342 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x4b2>
 810ff02:	8b 45 0c             	mov    0xc(%ebp),%eax
 810ff05:	89 04 24             	mov    %eax,(%esp)
 810ff08:	e8 05 0e 00 00       	call   8110d12 <_ZNK15CUserCharacInfo29getCurUseBringUpMaterialTotalEv>
 810ff0d:	0f b6 d8             	movzbl %al,%ebx
 810ff10:	8d 45 c0             	lea    -0x40(%ebp),%eax
 810ff13:	89 04 24             	mov    %eax,(%esp)
 810ff16:	e8 db 1f 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 810ff1b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810ff1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ff23:	8b 45 08             	mov    0x8(%ebp),%eax
 810ff26:	89 04 24             	mov    %eax,(%esp)
 810ff29:	e8 ec fe ff ff       	call   810fe1a <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi>
 810ff2e:	83 f0 01             	xor    $0x1,%eax
 810ff31:	84 c0                	test   %al,%al
 810ff33:	0f 85 fa 03 00 00    	jne    8110333 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x4a3>
 810ff39:	8b 45 08             	mov    0x8(%ebp),%eax
 810ff3c:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ff3f:	83 c0 28             	add    $0x28,%eax
 810ff42:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810ff49:	00 
 810ff4a:	89 04 24             	mov    %eax,(%esp)
 810ff4d:	e8 ae 1f 00 00       	call   8111f00 <_ZNSt6vectorISt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESaIS4_EEixEj>
 810ff52:	8b 58 2c             	mov    0x2c(%eax),%ebx
 810ff55:	8d 45 c0             	lea    -0x40(%ebp),%eax
 810ff58:	89 04 24             	mov    %eax,(%esp)
 810ff5b:	e8 96 1f 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 810ff60:	8b 40 2c             	mov    0x2c(%eax),%eax
 810ff63:	39 c3                	cmp    %eax,%ebx
 810ff65:	0f 94 c0             	sete   %al
 810ff68:	84 c0                	test   %al,%al
 810ff6a:	0f 84 88 02 00 00    	je     81101f8 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x368>
 810ff70:	8b 45 0c             	mov    0xc(%ebp),%eax
 810ff73:	89 04 24             	mov    %eax,(%esp)
 810ff76:	e8 fb 0d 00 00       	call   8110d76 <_ZNK15CUserCharacInfo20getBringUpRewardFlagEv>
 810ff7b:	84 c0                	test   %al,%al
 810ff7d:	0f 85 b3 03 00 00    	jne    8110336 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x4a6>
 810ff83:	8d 45 c0             	lea    -0x40(%ebp),%eax
 810ff86:	89 04 24             	mov    %eax,(%esp)
 810ff89:	e8 68 1f 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 810ff8e:	83 c0 0c             	add    $0xc,%eax
 810ff91:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810ff98:	00 
 810ff99:	89 44 24 08          	mov    %eax,0x8(%esp)
 810ff9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 810ffa0:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ffa4:	8d 45 c7             	lea    -0x39(%ebp),%eax
 810ffa7:	89 04 24             	mov    %eax,(%esp)
 810ffaa:	e8 83 cf ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 810ffaf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 810ffb2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 810ffb6:	74 68                	je     8110020 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x190>
 810ffb8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 810ffbb:	89 04 24             	mov    %eax,(%esp)
 810ffbe:	e8 33 1f 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 810ffc3:	8b 70 2c             	mov    0x2c(%eax),%esi
 810ffc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 810ffc9:	89 04 24             	mov    %eax,(%esp)
 810ffcc:	e8 7d bc fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810ffd1:	89 c3                	mov    %eax,%ebx
 810ffd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 810ffd6:	89 04 24             	mov    %eax,(%esp)
 810ffd9:	e8 90 a3 fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 810ffde:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 810ffe2:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 810ffe6:	89 44 24 14          	mov    %eax,0x14(%esp)
 810ffea:	c7 44 24 10 48 c4 b4 	movl   $0x8b4c448,0x10(%esp)
 810fff1:	08 
 810fff2:	c7 44 24 0c c3 07 00 	movl   $0x7c3,0xc(%esp)
 810fff9:	00 
 810fffa:	c7 44 24 08 c0 d2 b4 	movl   $0x8b4d2c0,0x8(%esp)
 8110001:	08 
 8110002:	c7 44 24 04 c0 c2 b4 	movl   $0x8b4c2c0,0x4(%esp)
 8110009:	08 
 811000a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8110011:	e8 f4 3b 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8110016:	b8 00 00 00 00       	mov    $0x0,%eax
 811001b:	e9 5c 03 00 00       	jmp    811037c <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x4ec>
 8110020:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8110023:	8b 55 10             	mov    0x10(%ebp),%edx
 8110026:	89 54 24 04          	mov    %edx,0x4(%esp)
 811002a:	89 04 24             	mov    %eax,(%esp)
 811002d:	e8 e8 1e 00 00       	call   8111f1a <_ZSt13back_inserterISt6vectorIiSaIiEEESt20back_insert_iteratorIT_ERS4_>
 8110032:	83 ec 04             	sub    $0x4,%esp
 8110035:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8110038:	89 04 24             	mov    %eax,(%esp)
 811003b:	e8 b6 1e 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 8110040:	8d 50 44             	lea    0x44(%eax),%edx
 8110043:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8110046:	89 54 24 04          	mov    %edx,0x4(%esp)
 811004a:	89 04 24             	mov    %eax,(%esp)
 811004d:	e8 1a e2 f7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8110052:	83 ec 04             	sub    $0x4,%esp
 8110055:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8110058:	89 04 24             	mov    %eax,(%esp)
 811005b:	e8 96 1e 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 8110060:	8d 50 44             	lea    0x44(%eax),%edx
 8110063:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8110066:	89 54 24 04          	mov    %edx,0x4(%esp)
 811006a:	89 04 24             	mov    %eax,(%esp)
 811006d:	e8 d6 e1 f7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8110072:	83 ec 04             	sub    $0x4,%esp
 8110075:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8110078:	8b 55 d0             	mov    -0x30(%ebp),%edx
 811007b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 811007f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8110082:	89 54 24 08          	mov    %edx,0x8(%esp)
 8110086:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8110089:	89 54 24 04          	mov    %edx,0x4(%esp)
 811008d:	89 04 24             	mov    %eax,(%esp)
 8110090:	e8 a8 1e 00 00       	call   8111f3d <_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt20back_insert_iteratorIS5_EET0_T_SA_S9_>
 8110095:	83 ec 04             	sub    $0x4,%esp
 8110098:	8d 45 c0             	lea    -0x40(%ebp),%eax
 811009b:	89 04 24             	mov    %eax,(%esp)
 811009e:	e8 53 1e 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 81100a3:	83 c0 44             	add    $0x44,%eax
 81100a6:	89 04 24             	mov    %eax,(%esp)
 81100a9:	e8 c0 6a f8 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 81100ae:	8b 45 14             	mov    0x14(%ebp),%eax
 81100b1:	0f b6 00             	movzbl (%eax),%eax
 81100b4:	8d 50 01             	lea    0x1(%eax),%edx
 81100b7:	8b 45 14             	mov    0x14(%ebp),%eax
 81100ba:	88 10                	mov    %dl,(%eax)
 81100bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81100bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81100c6:	00 
 81100c7:	89 04 24             	mov    %eax,(%esp)
 81100ca:	e8 cb 0c 00 00       	call   8110d9a <_ZN15CUserCharacInfo20setBringUpRewardFlagEb>
 81100cf:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81100d4:	c7 44 24 08 cc 07 00 	movl   $0x7cc,0x8(%esp)
 81100db:	00 
 81100dc:	c7 44 24 04 c0 c2 b4 	movl   $0x8b4c2c0,0x4(%esp)
 81100e3:	08 
 81100e4:	89 04 24             	mov    %eax,(%esp)
 81100e7:	e8 9a f9 17 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81100ec:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81100f3:	00 
 81100f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81100f8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81100fb:	89 04 24             	mov    %eax,(%esp)
 81100fe:	e8 23 8b fb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8110103:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8110106:	89 04 24             	mov    %eax,(%esp)
 8110109:	e8 38 8b fb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 811010e:	c7 44 24 04 ca 02 00 	movl   $0x2ca,0x4(%esp)
 8110115:	00 
 8110116:	89 04 24             	mov    %eax,(%esp)
 8110119:	e8 38 8b fb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 811011e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8110121:	89 04 24             	mov    %eax,(%esp)
 8110124:	e8 1d 8b fb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8110129:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8110130:	ff 
 8110131:	89 04 24             	mov    %eax,(%esp)
 8110134:	e8 1d 8b fb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8110139:	8d 45 b8             	lea    -0x48(%ebp),%eax
 811013c:	89 04 24             	mov    %eax,(%esp)
 811013f:	e8 0a 8b fb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8110144:	89 04 24             	mov    %eax,(%esp)
 8110147:	e8 4e 1e 00 00       	call   8111f9a <_ZN12CStreamGuard11GetInBufferI19SIG_OBJECT_BRING_UPEEPT_v>
 811014c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 811014f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110152:	89 04 24             	mov    %eax,(%esp)
 8110155:	e8 14 a2 fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 811015a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 811015d:	89 02                	mov    %eax,(%edx)
 811015f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110162:	89 04 24             	mov    %eax,(%esp)
 8110165:	e8 e4 ba fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 811016a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 811016d:	89 42 04             	mov    %eax,0x4(%edx)
 8110170:	e8 0c c0 fb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8110175:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 811017b:	0f b6 d0             	movzbl %al,%edx
 811017e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8110181:	89 50 08             	mov    %edx,0x8(%eax)
 8110184:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110187:	89 04 24             	mov    %eax,(%esp)
 811018a:	e8 c3 0b 00 00       	call   8110d52 <_ZNK15CUserCharacInfo29getCurUseBringUpMaterialCountEv>
 811018f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8110192:	88 42 0c             	mov    %al,0xc(%edx)
 8110195:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110198:	89 04 24             	mov    %eax,(%esp)
 811019b:	e8 d6 0b 00 00       	call   8110d76 <_ZNK15CUserCharacInfo20getBringUpRewardFlagEv>
 81101a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81101a3:	88 42 0d             	mov    %al,0xd(%edx)
 81101a6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81101ab:	8d 55 b8             	lea    -0x48(%ebp),%edx
 81101ae:	89 54 24 08          	mov    %edx,0x8(%esp)
 81101b2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81101b9:	00 
 81101ba:	89 04 24             	mov    %eax,(%esp)
 81101bd:	e8 1c 0e 46 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81101c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81101c5:	89 04 24             	mov    %eax,(%esp)
 81101c8:	e8 69 0b 00 00       	call   8110d36 <_ZN15CUserCharacInfo31resetCurUseBringUpMaterialCountEv>
 81101cd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81101d0:	89 04 24             	mov    %eax,(%esp)
 81101d3:	e8 fa c6 50 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81101d8:	e9 5a 01 00 00       	jmp    8110337 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x4a7>
 81101dd:	89 d3                	mov    %edx,%ebx
 81101df:	89 c6                	mov    %eax,%esi
 81101e1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81101e4:	89 04 24             	mov    %eax,(%esp)
 81101e7:	e8 e6 c6 50 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81101ec:	89 f0                	mov    %esi,%eax
 81101ee:	89 da                	mov    %ebx,%edx
 81101f0:	89 04 24             	mov    %eax,(%esp)
 81101f3:	e8 58 35 9d 00       	call   8ae3750 <_Unwind_Resume>
 81101f8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81101fb:	89 04 24             	mov    %eax,(%esp)
 81101fe:	e8 f3 1c 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 8110203:	83 c0 0c             	add    $0xc,%eax
 8110206:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811020d:	00 
 811020e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8110212:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110215:	89 44 24 04          	mov    %eax,0x4(%esp)
 8110219:	8d 45 c7             	lea    -0x39(%ebp),%eax
 811021c:	89 04 24             	mov    %eax,(%esp)
 811021f:	e8 0e cd ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 8110224:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8110227:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 811022b:	74 68                	je     8110295 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x405>
 811022d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8110230:	89 04 24             	mov    %eax,(%esp)
 8110233:	e8 be 1c 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 8110238:	8b 70 2c             	mov    0x2c(%eax),%esi
 811023b:	8b 45 0c             	mov    0xc(%ebp),%eax
 811023e:	89 04 24             	mov    %eax,(%esp)
 8110241:	e8 08 ba fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8110246:	89 c3                	mov    %eax,%ebx
 8110248:	8b 45 0c             	mov    0xc(%ebp),%eax
 811024b:	89 04 24             	mov    %eax,(%esp)
 811024e:	e8 1b a1 fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8110253:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8110257:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 811025b:	89 44 24 14          	mov    %eax,0x14(%esp)
 811025f:	c7 44 24 10 48 c4 b4 	movl   $0x8b4c448,0x10(%esp)
 8110266:	08 
 8110267:	c7 44 24 0c e2 07 00 	movl   $0x7e2,0xc(%esp)
 811026e:	00 
 811026f:	c7 44 24 08 c0 d2 b4 	movl   $0x8b4d2c0,0x8(%esp)
 8110276:	08 
 8110277:	c7 44 24 04 c0 c2 b4 	movl   $0x8b4c2c0,0x4(%esp)
 811027e:	08 
 811027f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8110286:	e8 7f 39 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 811028b:	b8 00 00 00 00       	mov    $0x0,%eax
 8110290:	e9 e7 00 00 00       	jmp    811037c <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x4ec>
 8110295:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8110298:	8b 55 10             	mov    0x10(%ebp),%edx
 811029b:	89 54 24 04          	mov    %edx,0x4(%esp)
 811029f:	89 04 24             	mov    %eax,(%esp)
 81102a2:	e8 73 1c 00 00       	call   8111f1a <_ZSt13back_inserterISt6vectorIiSaIiEEESt20back_insert_iteratorIT_ERS4_>
 81102a7:	83 ec 04             	sub    $0x4,%esp
 81102aa:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81102ad:	89 04 24             	mov    %eax,(%esp)
 81102b0:	e8 41 1c 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 81102b5:	8d 50 44             	lea    0x44(%eax),%edx
 81102b8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81102bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81102bf:	89 04 24             	mov    %eax,(%esp)
 81102c2:	e8 a5 df f7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 81102c7:	83 ec 04             	sub    $0x4,%esp
 81102ca:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81102cd:	89 04 24             	mov    %eax,(%esp)
 81102d0:	e8 21 1c 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 81102d5:	8d 50 44             	lea    0x44(%eax),%edx
 81102d8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81102db:	89 54 24 04          	mov    %edx,0x4(%esp)
 81102df:	89 04 24             	mov    %eax,(%esp)
 81102e2:	e8 61 df f7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 81102e7:	83 ec 04             	sub    $0x4,%esp
 81102ea:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81102ed:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81102f0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81102f4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81102f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81102fb:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81102fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8110302:	89 04 24             	mov    %eax,(%esp)
 8110305:	e8 33 1c 00 00       	call   8111f3d <_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt20back_insert_iteratorIS5_EET0_T_SA_S9_>
 811030a:	83 ec 04             	sub    $0x4,%esp
 811030d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8110310:	89 04 24             	mov    %eax,(%esp)
 8110313:	e8 de 1b 00 00       	call   8111ef6 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 8110318:	83 c0 44             	add    $0x44,%eax
 811031b:	89 04 24             	mov    %eax,(%esp)
 811031e:	e8 4b 68 f8 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8110323:	8b 45 14             	mov    0x14(%ebp),%eax
 8110326:	0f b6 00             	movzbl (%eax),%eax
 8110329:	8d 50 01             	lea    0x1(%eax),%edx
 811032c:	8b 45 14             	mov    0x14(%ebp),%eax
 811032f:	88 10                	mov    %dl,(%eax)
 8110331:	eb 04                	jmp    8110337 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x4a7>
 8110333:	90                   	nop
 8110334:	eb 01                	jmp    8110337 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x4a7>
 8110336:	90                   	nop
 8110337:	8d 45 c0             	lea    -0x40(%ebp),%eax
 811033a:	89 04 24             	mov    %eax,(%esp)
 811033d:	e8 9e 1b 00 00       	call   8111ee0 <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEppEv>
 8110342:	8b 45 08             	mov    0x8(%ebp),%eax
 8110345:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110348:	8d 50 28             	lea    0x28(%eax),%edx
 811034b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 811034e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8110352:	89 04 24             	mov    %eax,(%esp)
 8110355:	e8 34 1b 00 00       	call   8111e8e <_ZNSt6vectorISt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESaIS4_EE3endEv>
 811035a:	83 ec 04             	sub    $0x4,%esp
 811035d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8110360:	89 44 24 04          	mov    %eax,0x4(%esp)
 8110364:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8110367:	89 04 24             	mov    %eax,(%esp)
 811036a:	e8 45 1b 00 00       	call   8111eb4 <_ZN9__gnu_cxxneIPSt4pairIN19ObjectBringUpScript17ObjectBringUpRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESF_>
 811036f:	84 c0                	test   %al,%al
 8110371:	0f 85 8b fb ff ff    	jne    810ff02 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh+0x72>
 8110377:	b8 01 00 00 00       	mov    $0x1,%eax
 811037c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 811037f:	83 c4 00             	add    $0x0,%esp
 8110382:	5b                   	pop    %ebx
 8110383:	5e                   	pop    %esi
 8110384:	5d                   	pop    %ebp
 8110385:	c3                   	ret

```

```c
// EventClassify::CObjectBringUp::sendBringUpReward @ 0x810fe90

/* EventClassify::CObjectBringUp::sendBringUpReward(CUser*, std::vector<int, std::allocator<int> >&,
   unsigned char&) */

undefined4 __thiscall
EventClassify::CObjectBringUp::sendBringUpReward
          (CObjectBringUp *this,CUser *param_1,vector *param_2,uchar *param_3)

{
  char cVar1;
  SIG_OBJECT_BRING_UP SVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_74 [2];
  int local_58 [3];
  undefined1 local_4c [8];
  undefined1 local_44 [7];
  undefined1 local_3d;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  SIG_OBJECT_BRING_UP *local_10;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"EventClassify.cpp",
               "bool EventClassify::CObjectBringUp::sendBringUpReward(CUser*, IntVector&, unsigned char&)"
               ,0x7ad,"CObjectBringUp::sendBringUpReward(pUser(NULL))");
    uVar4 = 0;
  }
  else {
    local_18 = 0;
    local_14 = 1;
    std::
    vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>
    ::begin();
    piVar9 = (int *)&stack0xffffff94;
    while( true ) {
      piVar9[1] = *(int *)(this + 0x1c) + 0x28;
      *piVar9 = (int)local_3c;
      piVar9[-1] = 0x811035a;
      std::
      vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>
      ::end();
      piVar9[1] = (int)local_3c;
      *piVar9 = (int)local_44;
      piVar9[-1] = 0x811036f;
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)*piVar9,(__normal_iterator *)piVar9[1]);
      if (!bVar3) break;
      *piVar9 = (int)param_1;
      piVar9[-1] = 0x810ff0d;
      uVar5 = CUserCharacInfo::getCurUseBringUpMaterialTotal((CUserCharacInfo *)*piVar9);
      *piVar9 = (int)local_44;
      piVar9[-1] = 0x810ff1b;
      iVar6 = __gnu_cxx::
              __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
              ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                            *)*piVar9);
      piVar9[2] = uVar5 & 0xff;
      piVar9[1] = iVar6;
      *piVar9 = (int)this;
      piVar9[-1] = 0x810ff2e;
      cVar1 = verifyGiveBringUpReward
                        ((CObjectBringUp *)*piVar9,(ObjectBringUpRule *)piVar9[1],piVar9[2]);
      if (cVar1 == '\x01') {
        iVar6 = *(int *)(this + 0x1c);
        piVar9[1] = 1;
        *piVar9 = iVar6 + 0x28;
        piVar9[-1] = 0x810ff52;
        iVar6 = std::
                vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>
                ::operator[]((vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>
                              *)*piVar9,piVar9[1]);
        iVar6 = *(int *)(iVar6 + 0x2c);
        *piVar9 = (int)local_44;
        piVar9[-1] = 0x810ff60;
        iVar7 = __gnu_cxx::
                __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                              *)*piVar9);
        if (iVar6 == *(int *)(iVar7 + 0x2c)) {
          *piVar9 = (int)param_1;
          piVar9[-1] = 0x810ff7b;
          cVar1 = CUserCharacInfo::getBringUpRewardFlag((CUserCharacInfo *)*piVar9);
          if (cVar1 == '\0') {
            *piVar9 = (int)local_44;
            piVar9[-1] = 0x810ff8e;
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                  *)*piVar9);
            piVar9[3] = 0;
            piVar9[2] = iVar6 + 0xc;
            piVar9[1] = (int)param_1;
            *piVar9 = (int)&local_3d;
            piVar9[-1] = 0x810ffaf;
            local_18 = CEventActionMng::process_action_send_mail
                                 ((CEventActionMng *)*piVar9,(CUser *)piVar9[1],
                                  (Action_SendMail *)piVar9[2],SUB41(piVar9[3],0));
            if (local_18 != 0) {
              *piVar9 = (int)local_44;
              piVar9[-1] = 0x810ffc3;
              iVar6 = __gnu_cxx::
                      __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                      ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                    *)*piVar9);
              iVar6 = *(int *)(iVar6 + 0x2c);
              *piVar9 = (int)param_1;
              piVar9[-1] = 0x810ffd1;
              iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*piVar9);
              *piVar9 = (int)param_1;
              piVar9[-1] = 0x810ffde;
              iVar8 = CUser::get_acc_id((CUser *)*piVar9);
              piVar9[7] = iVar6;
              piVar9[6] = iVar7;
              piVar9[5] = iVar8;
              piVar9[4] = (int)"CObjectBringUp::sendBringUpReward(m_id:%d, charac_no:%d, reward:%d)"
              ;
              piVar9[3] = 0x7c3;
              piVar9[2] = (int)
                          "bool EventClassify::CObjectBringUp::sendBringUpReward(CUser*, IntVector&, unsigned char&)"
              ;
              piVar9[1] = (int)"EventClassify.cpp";
              *piVar9 = 1;
              piVar9[-1] = 0x8110016;
              LogManager::logFormat
                        (*piVar9,(char *)piVar9[1],(char *)piVar9[2],piVar9[3],(char *)piVar9[4]);
              return 0;
            }
            piVar9[1] = (int)param_2;
            *piVar9 = (int)&local_34;
            piVar9[-1] = 0x8110032;
            std::back_inserter<std::vector<int,std::allocator<int>>>((vector *)*piVar9);
            *piVar9 = (int)local_44;
            piVar9[-1] = 0x8110040;
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                  *)*piVar9);
            piVar9[1] = iVar6 + 0x44;
            *piVar9 = (int)&local_30;
            piVar9[-1] = 0x8110052;
            std::vector<int,std::allocator<int>>::end();
            *piVar9 = (int)local_44;
            piVar9[-1] = 0x8110060;
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                  *)*piVar9);
            piVar9[1] = iVar6 + 0x44;
            *piVar9 = (int)&local_2c;
            piVar9[-1] = 0x8110072;
            std::vector<int,std::allocator<int>>::begin();
            piVar9[3] = local_34;
            piVar9[2] = local_30;
            piVar9[1] = local_2c;
            *piVar9 = (int)local_38;
            piVar9[-1] = 0x8110095;
            std::
            copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::back_insert_iterator<std::vector<int,std::allocator<int>>>>
                      ();
            piVar9[-1] = (int)local_44;
            piVar9[-2] = 0x81100a3;
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                  *)piVar9[-1]);
            piVar9[-1] = iVar6 + 0x44;
            piVar9[-2] = 0x81100ae;
            std::vector<int,std::allocator<int>>::clear
                      ((vector<int,std::allocator<int>> *)piVar9[-1]);
            *param_3 = *param_3 + '\x01';
            *piVar9 = 1;
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x81100cf;
            CUserCharacInfo::setBringUpRewardFlag((CUserCharacInfo *)piVar9[-1],SUB41(*piVar9,0));
            piVar9[1] = 0x7cc;
            *piVar9 = (int)"EventClassify.cpp";
            piVar9[-1] = GlobalData::s_stream_pool;
            piVar9[-2] = 0x81100ec;
            uVar4 = StreamPool::Acquire((StreamPool *)piVar9[-1],(char *)*piVar9,piVar9[1]);
            piVar9[1] = 1;
            *piVar9 = uVar4;
            piVar9[-1] = (int)local_4c;
            piVar9[-2] = 0x8110103;
            CStreamGuard::CStreamGuard
                      ((CStreamGuard *)piVar9[-1],(Stream *)*piVar9,SUB41(piVar9[1],0));
            piVar9[-1] = (int)local_4c;
            piVar9[-2] = 0x811010e;
            uVar4 = CStreamGuard::operator*((CStreamGuard *)piVar9[-1]);
            *piVar9 = 0x2ca;
            piVar9[-1] = uVar4;
                    /* try { // try from 08110119 to 081101c1 has its CatchHandler @ 081101dd */
            piVar9[-2] = 0x811011e;
            CStreamGuard::operator<<((CStreamGuard *)piVar9[-1],*piVar9);
            piVar9[-1] = (int)local_4c;
            piVar9[-2] = 0x8110129;
            uVar4 = CStreamGuard::operator*((CStreamGuard *)piVar9[-1]);
            *piVar9 = 0xffffffff;
            piVar9[-1] = uVar4;
            piVar9[-2] = 0x8110139;
            CStreamGuard::operator<<((CStreamGuard *)piVar9[-1],*piVar9);
            piVar9[-1] = (int)local_4c;
            piVar9[-2] = 0x8110144;
            uVar4 = CStreamGuard::operator->((CStreamGuard *)piVar9[-1]);
            piVar9[-1] = uVar4;
            piVar9[-2] = 0x811014c;
            local_10 = CStreamGuard::GetInBuffer<SIG_OBJECT_BRING_UP>((CStreamGuard *)piVar9[-1]);
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x811015a;
            uVar4 = CUser::get_acc_id((CUser *)piVar9[-1]);
            *(undefined4 *)local_10 = uVar4;
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x811016a;
            uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)piVar9[-1]);
            *(undefined4 *)(local_10 + 4) = uVar4;
            piVar9[-2] = 0x8110175;
            iVar6 = G_CEnvironment();
            *(uint *)(local_10 + 8) = *(uint *)(iVar6 + 0x378) & 0xff;
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x811018f;
            SVar2 = (SIG_OBJECT_BRING_UP)
                    CUserCharacInfo::getCurUseBringUpMaterialCount((CUserCharacInfo *)piVar9[-1]);
            local_10[0xc] = SVar2;
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x81101a0;
            SVar2 = (SIG_OBJECT_BRING_UP)
                    CUserCharacInfo::getBringUpRewardFlag((CUserCharacInfo *)piVar9[-1]);
            local_10[0xd] = SVar2;
            piVar9[1] = (int)local_4c;
            *piVar9 = 2;
            piVar9[-1] = GlobalData::s_msgq_mgr;
            piVar9[-2] = 0x81101c2;
            MsgQueueMgr::put();
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x81101cd;
            CUserCharacInfo::resetCurUseBringUpMaterialCount((CUserCharacInfo *)piVar9[-1]);
            piVar9[-1] = (int)local_4c;
            piVar9[-2] = 0x81101d8;
            CStreamGuard::~CStreamGuard((CStreamGuard *)piVar9[-1]);
            piVar9 = piVar9 + -1;
          }
        }
        else {
          *piVar9 = (int)local_44;
          piVar9[-1] = 0x8110203;
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                  ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                *)*piVar9);
          piVar9[3] = 0;
          piVar9[2] = iVar6 + 0xc;
          piVar9[1] = (int)param_1;
          *piVar9 = (int)&local_3d;
          piVar9[-1] = 0x8110224;
          local_18 = CEventActionMng::process_action_send_mail
                               ((CEventActionMng *)*piVar9,(CUser *)piVar9[1],
                                (Action_SendMail *)piVar9[2],SUB41(piVar9[3],0));
          if (local_18 != 0) {
            *piVar9 = (int)local_44;
            piVar9[-1] = 0x8110238;
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                  *)*piVar9);
            iVar6 = *(int *)(iVar6 + 0x2c);
            *piVar9 = (int)param_1;
            piVar9[-1] = 0x8110246;
            iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*piVar9);
            *piVar9 = (int)param_1;
            piVar9[-1] = 0x8110253;
            iVar8 = CUser::get_acc_id((CUser *)*piVar9);
            piVar9[7] = iVar6;
            piVar9[6] = iVar7;
            piVar9[5] = iVar8;
            piVar9[4] = (int)"CObjectBringUp::sendBringUpReward(m_id:%d, charac_no:%d, reward:%d)";
            piVar9[3] = 0x7e2;
            piVar9[2] = (int)
                        "bool EventClassify::CObjectBringUp::sendBringUpReward(CUser*, IntVector&, unsigned char&)"
            ;
            piVar9[1] = (int)"EventClassify.cpp";
            *piVar9 = 1;
            piVar9[-1] = 0x811028b;
            LogManager::logFormat
                      (*piVar9,(char *)piVar9[1],(char *)piVar9[2],piVar9[3],(char *)piVar9[4]);
            return 0;
          }
          piVar9[1] = (int)param_2;
          *piVar9 = (int)&local_24;
          piVar9[-1] = 0x81102a7;
          std::back_inserter<std::vector<int,std::allocator<int>>>((vector *)*piVar9);
          *piVar9 = (int)local_44;
          piVar9[-1] = 0x81102b5;
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                  ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                *)*piVar9);
          piVar9[1] = iVar6 + 0x44;
          *piVar9 = (int)&local_20;
          piVar9[-1] = 0x81102c7;
          std::vector<int,std::allocator<int>>::end();
          *piVar9 = (int)local_44;
          piVar9[-1] = 0x81102d5;
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                  ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                *)*piVar9);
          piVar9[1] = iVar6 + 0x44;
          *piVar9 = (int)&local_1c;
          piVar9[-1] = 0x81102e7;
          std::vector<int,std::allocator<int>>::begin();
          piVar9[3] = local_24;
          piVar9[2] = local_20;
          piVar9[1] = local_1c;
          *piVar9 = (int)local_28;
          piVar9[-1] = 0x811030a;
          std::
          copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::back_insert_iterator<std::vector<int,std::allocator<int>>>>
                    ();
          piVar9[-1] = (int)local_44;
          piVar9[-2] = 0x8110318;
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                  ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                *)piVar9[-1]);
          piVar9[-1] = iVar6 + 0x44;
          piVar9[-2] = 0x8110323;
          std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)piVar9[-1])
          ;
          *param_3 = *param_3 + '\x01';
          piVar9 = piVar9 + -1;
        }
      }
      *piVar9 = (int)local_44;
      piVar9[-1] = 0x8110342;
      __gnu_cxx::
      __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
      ::operator++((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    *)*piVar9);
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## sendEventItemFromFatigue

```asm
// === 08110386 EventClassify::CObjectBringUp::sendEventItemFromFatigue  [0x08110386-0x811056d] ===
 8110386:	55                   	push   %ebp
 8110387:	89 e5                	mov    %esp,%ebp
 8110389:	56                   	push   %esi
 811038a:	53                   	push   %ebx
 811038b:	83 ec 40             	sub    $0x40,%esp
 811038e:	8b 45 08             	mov    0x8(%ebp),%eax
 8110391:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110394:	83 c0 1c             	add    $0x1c,%eax
 8110397:	89 04 24             	mov    %eax,(%esp)
 811039a:	e8 11 1c 00 00       	call   8111fb0 <_ZNKSt6vectorISt4pairIS_IjSaIjEE15Action_SendMailESaIS4_EE5emptyEv>
 811039f:	84 c0                	test   %al,%al
 81103a1:	0f 85 bb 01 00 00    	jne    8110562 <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0x1dc>
 81103a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81103aa:	89 04 24             	mov    %eax,(%esp)
 81103ad:	e8 08 09 00 00       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 81103b2:	0f b7 c0             	movzwl %ax,%eax
 81103b5:	2b 45 10             	sub    0x10(%ebp),%eax
 81103b8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81103bb:	8b 45 08             	mov    0x8(%ebp),%eax
 81103be:	8b 40 1c             	mov    0x1c(%eax),%eax
 81103c1:	8d 50 1c             	lea    0x1c(%eax),%edx
 81103c4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81103c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81103cb:	89 04 24             	mov    %eax,(%esp)
 81103ce:	e8 21 1c 00 00       	call   8111ff4 <_ZNSt6vectorISt4pairIS_IjSaIjEE15Action_SendMailESaIS4_EE5beginEv>
 81103d3:	83 ec 04             	sub    $0x4,%esp
 81103d6:	e9 50 01 00 00       	jmp    811052b <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0x1a5>
 81103db:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81103de:	89 04 24             	mov    %eax,(%esp)
 81103e1:	e8 9a 1c 00 00       	call   8112080 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairISt6vectorIjSaIjEE15Action_SendMailES2_IS6_SaIS6_EEEptEv>
 81103e6:	89 c2                	mov    %eax,%edx
 81103e8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81103eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81103ef:	89 04 24             	mov    %eax,(%esp)
 81103f2:	e8 57 34 fd ff       	call   80e384e <_ZNSt6vectorIjSaIjEE5beginEv>
 81103f7:	83 ec 04             	sub    $0x4,%esp
 81103fa:	e9 e8 00 00 00       	jmp    81104e7 <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0x161>
 81103ff:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8110402:	89 04 24             	mov    %eax,(%esp)
 8110405:	e8 94 33 fd ff       	call   80e379e <_ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEdeEv>
 811040a:	8b 00                	mov    (%eax),%eax
 811040c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 811040f:	76 26                	jbe    8110437 <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0xb1>
 8110411:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8110414:	89 04 24             	mov    %eax,(%esp)
 8110417:	e8 82 33 fd ff       	call   80e379e <_ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEdeEv>
 811041c:	8b 18                	mov    (%eax),%ebx
 811041e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110421:	89 04 24             	mov    %eax,(%esp)
 8110424:	e8 91 08 00 00       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 8110429:	0f b7 c0             	movzwl %ax,%eax
 811042c:	39 c3                	cmp    %eax,%ebx
 811042e:	77 07                	ja     8110437 <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0xb1>
 8110430:	b8 01 00 00 00       	mov    $0x1,%eax
 8110435:	eb 05                	jmp    811043c <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0xb6>
 8110437:	b8 00 00 00 00       	mov    $0x0,%eax
 811043c:	84 c0                	test   %al,%al
 811043e:	0f 84 98 00 00 00    	je     81104dc <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0x156>
 8110444:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8110447:	89 04 24             	mov    %eax,(%esp)
 811044a:	e8 31 1c 00 00       	call   8112080 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairISt6vectorIjSaIjEE15Action_SendMailES2_IS6_SaIS6_EEEptEv>
 811044f:	83 c0 0c             	add    $0xc,%eax
 8110452:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8110459:	00 
 811045a:	89 44 24 08          	mov    %eax,0x8(%esp)
 811045e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110461:	89 44 24 04          	mov    %eax,0x4(%esp)
 8110465:	8d 45 df             	lea    -0x21(%ebp),%eax
 8110468:	89 04 24             	mov    %eax,(%esp)
 811046b:	e8 c2 ca ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 8110470:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8110473:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8110477:	74 63                	je     81104dc <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0x156>
 8110479:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 811047c:	89 04 24             	mov    %eax,(%esp)
 811047f:	e8 fc 1b 00 00       	call   8112080 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairISt6vectorIjSaIjEE15Action_SendMailES2_IS6_SaIS6_EEEptEv>
 8110484:	8b 70 2c             	mov    0x2c(%eax),%esi
 8110487:	8b 45 0c             	mov    0xc(%ebp),%eax
 811048a:	89 04 24             	mov    %eax,(%esp)
 811048d:	e8 bc b7 fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8110492:	89 c3                	mov    %eax,%ebx
 8110494:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110497:	89 04 24             	mov    %eax,(%esp)
 811049a:	e8 cf 9e fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 811049f:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81104a3:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81104a7:	89 44 24 14          	mov    %eax,0x14(%esp)
 81104ab:	c7 44 24 10 8c c4 b4 	movl   $0x8b4c48c,0x10(%esp)
 81104b2:	08 
 81104b3:	c7 44 24 0c 03 08 00 	movl   $0x803,0xc(%esp)
 81104ba:	00 
 81104bb:	c7 44 24 08 60 d2 b4 	movl   $0x8b4d260,0x8(%esp)
 81104c2:	08 
 81104c3:	c7 44 24 04 c0 c2 b4 	movl   $0x8b4c2c0,0x4(%esp)
 81104ca:	08 
 81104cb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81104d2:	e8 33 37 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81104d7:	e9 87 00 00 00       	jmp    8110563 <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0x1dd>
 81104dc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81104df:	89 04 24             	mov    %eax,(%esp)
 81104e2:	e8 35 0e 00 00       	call   811131c <_ZN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEppEv>
 81104e7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81104ea:	89 04 24             	mov    %eax,(%esp)
 81104ed:	e8 8e 1b 00 00       	call   8112080 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairISt6vectorIjSaIjEE15Action_SendMailES2_IS6_SaIS6_EEEptEv>
 81104f2:	89 c2                	mov    %eax,%edx
 81104f4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81104f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81104fb:	89 04 24             	mov    %eax,(%esp)
 81104fe:	e8 87 25 fd ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 8110503:	83 ec 04             	sub    $0x4,%esp
 8110506:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8110509:	89 44 24 04          	mov    %eax,0x4(%esp)
 811050d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8110510:	89 04 24             	mov    %eax,(%esp)
 8110513:	e8 d8 0d 00 00       	call   81112f0 <_ZN9__gnu_cxxneIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8110518:	84 c0                	test   %al,%al
 811051a:	0f 85 df fe ff ff    	jne    81103ff <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0x79>
 8110520:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8110523:	89 04 24             	mov    %eax,(%esp)
 8110526:	e8 3f 1b 00 00       	call   811206a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairISt6vectorIjSaIjEE15Action_SendMailES2_IS6_SaIS6_EEEppEv>
 811052b:	8b 45 08             	mov    0x8(%ebp),%eax
 811052e:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110531:	8d 50 1c             	lea    0x1c(%eax),%edx
 8110534:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8110537:	89 54 24 04          	mov    %edx,0x4(%esp)
 811053b:	89 04 24             	mov    %eax,(%esp)
 811053e:	e8 d5 1a 00 00       	call   8112018 <_ZNSt6vectorISt4pairIS_IjSaIjEE15Action_SendMailESaIS4_EE3endEv>
 8110543:	83 ec 04             	sub    $0x4,%esp
 8110546:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8110549:	89 44 24 04          	mov    %eax,0x4(%esp)
 811054d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8110550:	89 04 24             	mov    %eax,(%esp)
 8110553:	e8 e6 1a 00 00       	call   811203e <_ZN9__gnu_cxxneIPSt4pairISt6vectorIjSaIjEE15Action_SendMailES2_IS6_SaIS6_EEEEbRKNS_17__normal_iteratorIT_T0_EESF_>
 8110558:	84 c0                	test   %al,%al
 811055a:	0f 85 7b fe ff ff    	jne    81103db <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0x55>
 8110560:	eb 01                	jmp    8110563 <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj+0x1dd>
 8110562:	90                   	nop
 8110563:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8110566:	83 c4 00             	add    $0x0,%esp
 8110569:	5b                   	pop    %ebx
 811056a:	5e                   	pop    %esi
 811056b:	5d                   	pop    %ebp
 811056c:	c3                   	ret
 811056d:	90                   	nop

```

```c
// EventClassify::CObjectBringUp::sendEventItemFromFatigue @ 0x8110386

/* EventClassify::CObjectBringUp::sendEventItemFromFatigue(CUser*, unsigned int) */

void __thiscall
EventClassify::CObjectBringUp::sendEventItemFromFatigue
          (CObjectBringUp *this,CUser *param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  CEventActionMng local_25;
  __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
  local_24 [4];
  __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  uint local_14;
  int local_10;
  
  cVar2 = std::
          vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>
          ::empty();
  if (cVar2 == '\0') {
    uVar4 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
    local_14 = (uVar4 & 0xffff) - param_2;
    std::
    vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>
    ::begin();
    while( true ) {
      std::
      vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>
      ::end();
      bVar3 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar3) break;
      __gnu_cxx::
      __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
      ::operator->(local_20);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
      while( true ) {
        __gnu_cxx::
        __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
        ::operator->(local_20);
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        bVar3 = __gnu_cxx::operator!=(local_24,local_18);
        if (!bVar3) break;
        puVar5 = (uint *)__gnu_cxx::
                         __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                         ::operator*(local_24);
        if (local_14 < *puVar5) {
          puVar5 = (uint *)__gnu_cxx::
                           __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                           ::operator*(local_24);
          uVar4 = *puVar5;
          uVar6 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
          if ((uVar6 & 0xffff) < uVar4) goto LAB_08110437;
          bVar3 = true;
        }
        else {
LAB_08110437:
          bVar3 = false;
        }
        if (bVar3) {
          iVar7 = __gnu_cxx::
                  __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
                  ::operator->(local_20);
          local_10 = CEventActionMng::process_action_send_mail
                               (&local_25,param_1,(Action_SendMail *)(iVar7 + 0xc),true);
          if (local_10 != 0) {
            iVar7 = __gnu_cxx::
                    __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
                    ::operator->(local_20);
            uVar1 = *(undefined4 *)(iVar7 + 0x2c);
            uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            uVar9 = CUser::get_acc_id(param_1);
            LogManager::logFormat
                      (1,"EventClassify.cpp",
                       "void EventClassify::CObjectBringUp::sendEventItemFromFatigue(CUser*, unsigned int)"
                       ,0x803,
                       "CObjectBringUp::sendEventItemFromFatigue(m_id:%d, charac_no:%d, reward:%d)",
                       uVar9,uVar8,uVar1);
            return;
          }
        }
        __gnu_cxx::
        __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
        operator++(local_24);
      }
      __gnu_cxx::
      __normal_iterator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>*,std::vector<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>,std::allocator<std::pair<std::vector<unsigned_int,std::allocator<unsigned_int>>,Action_SendMail>>>>
      ::operator++(local_20);
    }
  }
  return;
}

```

---

## set_event_data

```asm
// === 0810fcb2 EventClassify::CObjectBringUp::set_event_data  [0x0810fcb2-0x810fcdb] ===
 810fcb2:	55                   	push   %ebp
 810fcb3:	89 e5                	mov    %esp,%ebp
 810fcb5:	83 ec 18             	sub    $0x18,%esp
 810fcb8:	8b 45 08             	mov    0x8(%ebp),%eax
 810fcbb:	8b 00                	mov    (%eax),%eax
 810fcbd:	83 c0 18             	add    $0x18,%eax
 810fcc0:	8b 08                	mov    (%eax),%ecx
 810fcc2:	8b 45 08             	mov    0x8(%ebp),%eax
 810fcc5:	8b 55 0c             	mov    0xc(%ebp),%edx
 810fcc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 810fccc:	89 04 24             	mov    %eax,(%esp)
 810fccf:	ff d1                	call   *%ecx
 810fcd1:	8b 55 10             	mov    0x10(%ebp),%edx
 810fcd4:	8b 45 08             	mov    0x8(%ebp),%eax
 810fcd7:	89 50 1c             	mov    %edx,0x1c(%eax)
 810fcda:	c9                   	leave
 810fcdb:	c3                   	ret

```

```c
// EventClassify::CObjectBringUp::set_event_data @ 0x810fcb2

/* EventClassify::CObjectBringUp::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CObjectBringUp::set_event_data
          (CObjectBringUp *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}

```

---

## verifyGiveBringUpReward

```asm
// === 0810fe1a EventClassify::CObjectBringUp::verifyGiveBringUpReward  [0x0810fe1a-0x810fe8f] ===
 810fe1a:	55                   	push   %ebp
 810fe1b:	89 e5                	mov    %esp,%ebp
 810fe1d:	83 ec 04             	sub    $0x4,%esp
 810fe20:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fe23:	8b 40 08             	mov    0x8(%eax),%eax
 810fe26:	85 c0                	test   %eax,%eax
 810fe28:	75 18                	jne    810fe42 <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi+0x28>
 810fe2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fe2d:	8b 00                	mov    (%eax),%eax
 810fe2f:	3b 45 10             	cmp    0x10(%ebp),%eax
 810fe32:	75 07                	jne    810fe3b <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi+0x21>
 810fe34:	b8 01 00 00 00       	mov    $0x1,%eax
 810fe39:	eb 53                	jmp    810fe8e <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi+0x74>
 810fe3b:	b8 00 00 00 00       	mov    $0x0,%eax
 810fe40:	eb 4c                	jmp    810fe8e <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi+0x74>
 810fe42:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fe45:	8b 00                	mov    (%eax),%eax
 810fe47:	3b 45 10             	cmp    0x10(%ebp),%eax
 810fe4a:	7f 3d                	jg     810fe89 <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi+0x6f>
 810fe4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fe4f:	8b 40 04             	mov    0x4(%eax),%eax
 810fe52:	3b 45 10             	cmp    0x10(%ebp),%eax
 810fe55:	7d 0a                	jge    810fe61 <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi+0x47>
 810fe57:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fe5a:	8b 40 04             	mov    0x4(%eax),%eax
 810fe5d:	85 c0                	test   %eax,%eax
 810fe5f:	75 28                	jne    810fe89 <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi+0x6f>
 810fe61:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fe64:	8b 00                	mov    (%eax),%eax
 810fe66:	8b 55 10             	mov    0x10(%ebp),%edx
 810fe69:	29 c2                	sub    %eax,%edx
 810fe6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fe6e:	8b 40 08             	mov    0x8(%eax),%eax
 810fe71:	89 45 fc             	mov    %eax,-0x4(%ebp)
 810fe74:	89 d0                	mov    %edx,%eax
 810fe76:	c1 fa 1f             	sar    $0x1f,%edx
 810fe79:	f7 7d fc             	idivl  -0x4(%ebp)
 810fe7c:	89 d0                	mov    %edx,%eax
 810fe7e:	85 c0                	test   %eax,%eax
 810fe80:	75 07                	jne    810fe89 <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi+0x6f>
 810fe82:	b8 01 00 00 00       	mov    $0x1,%eax
 810fe87:	eb 05                	jmp    810fe8e <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi+0x74>
 810fe89:	b8 00 00 00 00       	mov    $0x0,%eax
 810fe8e:	c9                   	leave
 810fe8f:	c3                   	ret

```

```c
// EventClassify::CObjectBringUp::verifyGiveBringUpReward @ 0x810fe1a

/* EventClassify::CObjectBringUp::verifyGiveBringUpReward(ObjectBringUpScript::ObjectBringUpRule&,
   int) */

undefined4 __thiscall
EventClassify::CObjectBringUp::verifyGiveBringUpReward
          (CObjectBringUp *this,ObjectBringUpRule *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)param_1 == param_2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else if ((param_2 < *(int *)param_1) ||
          (((*(int *)(param_1 + 4) < param_2 && (*(int *)(param_1 + 4) != 0)) ||
           ((param_2 - *(int *)param_1) % *(int *)(param_1 + 8) != 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## verifyMaterialItemByRule

```asm
// === 0810fcea EventClassify::CObjectBringUp::verifyMaterialItemByRule  [0x0810fcea-0x810fe19] ===
 810fcea:	55                   	push   %ebp
 810fceb:	89 e5                	mov    %esp,%ebp
 810fced:	53                   	push   %ebx
 810fcee:	83 ec 24             	sub    $0x24,%esp
 810fcf1:	8b 45 08             	mov    0x8(%ebp),%eax
 810fcf4:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fcf7:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 810fcfb:	84 c0                	test   %al,%al
 810fcfd:	0f 84 8e 00 00 00    	je     810fd91 <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj+0xa7>
 810fd03:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810fd0a:	8b 45 08             	mov    0x8(%ebp),%eax
 810fd0d:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fd10:	83 c0 10             	add    $0x10,%eax
 810fd13:	89 04 24             	mov    %eax,(%esp)
 810fd16:	e8 a5 e4 f7 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 810fd1b:	89 c3                	mov    %eax,%ebx
 810fd1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fd20:	89 04 24             	mov    %eax,(%esp)
 810fd23:	e8 ea 0f 00 00       	call   8110d12 <_ZNK15CUserCharacInfo29getCurUseBringUpMaterialTotalEv>
 810fd28:	0f b6 c0             	movzbl %al,%eax
 810fd2b:	39 c3                	cmp    %eax,%ebx
 810fd2d:	0f 96 c0             	setbe  %al
 810fd30:	84 c0                	test   %al,%al
 810fd32:	74 19                	je     810fd4d <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj+0x63>
 810fd34:	8b 45 08             	mov    0x8(%ebp),%eax
 810fd37:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fd3a:	83 c0 10             	add    $0x10,%eax
 810fd3d:	89 04 24             	mov    %eax,(%esp)
 810fd40:	e8 7b e4 f7 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 810fd45:	83 e8 01             	sub    $0x1,%eax
 810fd48:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810fd4b:	eb 12                	jmp    810fd5f <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj+0x75>
 810fd4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fd50:	89 04 24             	mov    %eax,(%esp)
 810fd53:	e8 ba 0f 00 00       	call   8110d12 <_ZNK15CUserCharacInfo29getCurUseBringUpMaterialTotalEv>
 810fd58:	0f b6 c0             	movzbl %al,%eax
 810fd5b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810fd5e:	90                   	nop
 810fd5f:	8b 45 08             	mov    0x8(%ebp),%eax
 810fd62:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fd65:	8d 50 10             	lea    0x10(%eax),%edx
 810fd68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810fd6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 810fd6f:	89 14 24             	mov    %edx,(%esp)
 810fd72:	e8 65 e4 f7 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 810fd77:	8b 00                	mov    (%eax),%eax
 810fd79:	3b 45 10             	cmp    0x10(%ebp),%eax
 810fd7c:	0f 95 c0             	setne  %al
 810fd7f:	84 c0                	test   %al,%al
 810fd81:	0f 84 88 00 00 00    	je     810fe0f <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj+0x125>
 810fd87:	b8 00 00 00 00       	mov    $0x0,%eax
 810fd8c:	e9 83 00 00 00       	jmp    810fe14 <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj+0x12a>
 810fd91:	8b 45 08             	mov    0x8(%ebp),%eax
 810fd94:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fd97:	8d 50 10             	lea    0x10(%eax),%edx
 810fd9a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810fd9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 810fda1:	89 04 24             	mov    %eax,(%esp)
 810fda4:	e8 9f e4 f7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 810fda9:	83 ec 04             	sub    $0x4,%esp
 810fdac:	eb 29                	jmp    810fdd7 <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj+0xed>
 810fdae:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810fdb1:	89 04 24             	mov    %eax,(%esp)
 810fdb4:	e8 13 ea f7 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 810fdb9:	8b 00                	mov    (%eax),%eax
 810fdbb:	3b 45 10             	cmp    0x10(%ebp),%eax
 810fdbe:	0f 94 c0             	sete   %al
 810fdc1:	84 c0                	test   %al,%al
 810fdc3:	74 07                	je     810fdcc <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj+0xe2>
 810fdc5:	b8 01 00 00 00       	mov    $0x1,%eax
 810fdca:	eb 48                	jmp    810fe14 <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj+0x12a>
 810fdcc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810fdcf:	89 04 24             	mov    %eax,(%esp)
 810fdd2:	e8 b5 ab fd ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 810fdd7:	8b 45 08             	mov    0x8(%ebp),%eax
 810fdda:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fddd:	8d 50 10             	lea    0x10(%eax),%edx
 810fde0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810fde3:	89 54 24 04          	mov    %edx,0x4(%esp)
 810fde7:	89 04 24             	mov    %eax,(%esp)
 810fdea:	e8 7d e4 f7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 810fdef:	83 ec 04             	sub    $0x4,%esp
 810fdf2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810fdf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 810fdf9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810fdfc:	89 04 24             	mov    %eax,(%esp)
 810fdff:	e8 5e a6 fd ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 810fe04:	84 c0                	test   %al,%al
 810fe06:	75 a6                	jne    810fdae <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj+0xc4>
 810fe08:	b8 00 00 00 00       	mov    $0x0,%eax
 810fe0d:	eb 05                	jmp    810fe14 <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj+0x12a>
 810fe0f:	b8 01 00 00 00       	mov    $0x1,%eax
 810fe14:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 810fe17:	c9                   	leave
 810fe18:	c3                   	ret
 810fe19:	90                   	nop

```

```c
// EventClassify::CObjectBringUp::verifyMaterialItemByRule @ 0x810fcea

/* EventClassify::CObjectBringUp::verifyMaterialItemByRule(CUser*, unsigned int) */

undefined4 __thiscall
EventClassify::CObjectBringUp::verifyMaterialItemByRule
          (CObjectBringUp *this,CUser *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  uint local_10;
  
  if (*(char *)(*(int *)(this + 0x1c) + 0xc) == '\0') {
    std::vector<int,std::allocator<int>>::begin();
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar1 = __gnu_cxx::operator!=(local_18,local_14);
      if (!bVar1) break;
      puVar5 = (uint *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                       operator*(local_18);
      if (*puVar5 == param_2) {
        return 1;
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_18);
    }
    uVar6 = 0;
  }
  else {
    local_10 = 0;
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x10));
    uVar3 = CUserCharacInfo::getCurUseBringUpMaterialTotal((CUserCharacInfo *)param_1);
    if ((uVar3 & 0xff) < uVar2) {
      local_10 = CUserCharacInfo::getCurUseBringUpMaterialTotal((CUserCharacInfo *)param_1);
      local_10 = local_10 & 0xff;
    }
    else {
      iVar4 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x10));
      local_10 = iVar4 - 1;
    }
    puVar5 = (uint *)std::vector<int,std::allocator<int>>::operator[]
                               ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x10),
                                local_10);
    if (*puVar5 == param_2) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

```

