# DisPatcher_SetIP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f468c DisPatcher_SetIP::dispatch_sig  [0x081f468c-0x81f4ce5] ===
 81f468c:	55                   	push   %ebp
 81f468d:	89 e5                	mov    %esp,%ebp
 81f468f:	57                   	push   %edi
 81f4690:	56                   	push   %esi
 81f4691:	53                   	push   %ebx
 81f4692:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 81f4698:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f469b:	89 04 24             	mov    %eax,(%esp)
 81f469e:	e8 e9 5c ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f46a3:	83 f8 03             	cmp    $0x3,%eax
 81f46a6:	0f 9f c0             	setg   %al
 81f46a9:	84 c0                	test   %al,%al
 81f46ab:	74 0a                	je     81f46b7 <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 81f46ad:	b8 00 00 00 00       	mov    $0x0,%eax
 81f46b2:	e9 24 06 00 00       	jmp    81f4cdb <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x64f>
 81f46b7:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 81f46bd:	83 c0 0d             	add    $0xd,%eax
 81f46c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f46c4:	8b 45 10             	mov    0x10(%ebp),%eax
 81f46c7:	89 04 24             	mov    %eax,(%esp)
 81f46ca:	e8 53 88 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f46cf:	83 f0 01             	xor    $0x1,%eax
 81f46d2:	84 c0                	test   %al,%al
 81f46d4:	74 29                	je     81f46ff <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x73>
 81f46d6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f46dd:	00 
 81f46de:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f46e5:	00 
 81f46e6:	c7 44 24 04 60 01 bd 	movl   $0x8bd0160,0x4(%esp)
 81f46ed:	08 
 81f46ee:	c7 04 24 e4 80 00 00 	movl   $0x80e4,(%esp)
 81f46f5:	e8 dd c1 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f46fa:	e9 dc 05 00 00       	jmp    81f4cdb <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x64f>
 81f46ff:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 81f4705:	83 c0 0e             	add    $0xe,%eax
 81f4708:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f470c:	8b 45 10             	mov    0x10(%ebp),%eax
 81f470f:	89 04 24             	mov    %eax,(%esp)
 81f4712:	e8 29 8b 39 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81f4717:	83 f0 01             	xor    $0x1,%eax
 81f471a:	84 c0                	test   %al,%al
 81f471c:	74 29                	je     81f4747 <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0xbb>
 81f471e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4725:	00 
 81f4726:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f472d:	00 
 81f472e:	c7 44 24 04 60 01 bd 	movl   $0x8bd0160,0x4(%esp)
 81f4735:	08 
 81f4736:	c7 04 24 e5 80 00 00 	movl   $0x80e5,(%esp)
 81f473d:	e8 95 c1 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f4742:	e9 94 05 00 00       	jmp    81f4cdb <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x64f>
 81f4747:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 81f474d:	83 c0 12             	add    $0x12,%eax
 81f4750:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4754:	8b 45 10             	mov    0x10(%ebp),%eax
 81f4757:	89 04 24             	mov    %eax,(%esp)
 81f475a:	e8 e1 8a 39 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81f475f:	83 f0 01             	xor    $0x1,%eax
 81f4762:	84 c0                	test   %al,%al
 81f4764:	74 29                	je     81f478f <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x103>
 81f4766:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f476d:	00 
 81f476e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4775:	00 
 81f4776:	c7 44 24 04 60 01 bd 	movl   $0x8bd0160,0x4(%esp)
 81f477d:	08 
 81f477e:	c7 04 24 e6 80 00 00 	movl   $0x80e6,(%esp)
 81f4785:	e8 4d c1 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f478a:	e9 4c 05 00 00       	jmp    81f4cdb <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x64f>
 81f478f:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 81f4795:	83 c0 16             	add    $0x16,%eax
 81f4798:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f479c:	8b 45 10             	mov    0x10(%ebp),%eax
 81f479f:	89 04 24             	mov    %eax,(%esp)
 81f47a2:	e8 09 89 39 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81f47a7:	83 f0 01             	xor    $0x1,%eax
 81f47aa:	84 c0                	test   %al,%al
 81f47ac:	74 29                	je     81f47d7 <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x14b>
 81f47ae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f47b5:	00 
 81f47b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f47bd:	00 
 81f47be:	c7 44 24 04 60 01 bd 	movl   $0x8bd0160,0x4(%esp)
 81f47c5:	08 
 81f47c6:	c7 04 24 e7 80 00 00 	movl   $0x80e7,(%esp)
 81f47cd:	e8 05 c1 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f47d2:	e9 04 05 00 00       	jmp    81f4cdb <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x64f>
 81f47d7:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 81f47dd:	83 c0 18             	add    $0x18,%eax
 81f47e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f47e4:	8b 45 10             	mov    0x10(%ebp),%eax
 81f47e7:	89 04 24             	mov    %eax,(%esp)
 81f47ea:	e8 51 8a 39 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81f47ef:	83 f0 01             	xor    $0x1,%eax
 81f47f2:	84 c0                	test   %al,%al
 81f47f4:	74 29                	je     81f481f <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x193>
 81f47f6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f47fd:	00 
 81f47fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4805:	00 
 81f4806:	c7 44 24 04 60 01 bd 	movl   $0x8bd0160,0x4(%esp)
 81f480d:	08 
 81f480e:	c7 04 24 e8 80 00 00 	movl   $0x80e8,(%esp)
 81f4815:	e8 bd c0 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f481a:	e9 bc 04 00 00       	jmp    81f4cdb <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x64f>
 81f481f:	8b b5 22 ff ff ff    	mov    -0xde(%ebp),%esi
 81f4825:	0f b7 85 20 ff ff ff 	movzwl -0xe0(%ebp),%eax
 81f482c:	0f b7 d8             	movzwl %ax,%ebx
 81f482f:	8b 8d 1c ff ff ff    	mov    -0xe4(%ebp),%ecx
 81f4835:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 81f483b:	0f b6 85 17 ff ff ff 	movzbl -0xe9(%ebp),%eax
 81f4842:	0f be c0             	movsbl %al,%eax
 81f4845:	8b 7d 0c             	mov    0xc(%ebp),%edi
 81f4848:	81 c7 e0 00 00 00    	add    $0xe0,%edi
 81f484e:	89 74 24 14          	mov    %esi,0x14(%esp)
 81f4852:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81f4856:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81f485a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f485e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4862:	89 3c 24             	mov    %edi,(%esp)
 81f4865:	e8 34 2f 04 00       	call   823779e <_ZN8CNetworkILi4096ELi450000EE7set_natEcjjtj>
 81f486a:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 81f4870:	83 c0 1c             	add    $0x1c,%eax
 81f4873:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4877:	8b 45 10             	mov    0x10(%ebp),%eax
 81f487a:	89 04 24             	mov    %eax,(%esp)
 81f487d:	e8 be 89 39 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81f4882:	83 f0 01             	xor    $0x1,%eax
 81f4885:	84 c0                	test   %al,%al
 81f4887:	74 29                	je     81f48b2 <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x226>
 81f4889:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4890:	00 
 81f4891:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4898:	00 
 81f4899:	c7 44 24 04 60 01 bd 	movl   $0x8bd0160,0x4(%esp)
 81f48a0:	08 
 81f48a1:	c7 04 24 00 81 00 00 	movl   $0x8100,(%esp)
 81f48a8:	e8 2a c0 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f48ad:	e9 29 04 00 00       	jmp    81f4cdb <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x64f>
 81f48b2:	8b 85 26 ff ff ff    	mov    -0xda(%ebp),%eax
 81f48b8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81f48bc:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 81f48c3:	00 
 81f48c4:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 81f48ca:	83 c0 20             	add    $0x20,%eax
 81f48cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f48d1:	8b 45 10             	mov    0x10(%ebp),%eax
 81f48d4:	89 04 24             	mov    %eax,(%esp)
 81f48d7:	e8 e0 89 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81f48dc:	83 f0 01             	xor    $0x1,%eax
 81f48df:	84 c0                	test   %al,%al
 81f48e1:	74 29                	je     81f490c <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x280>
 81f48e3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f48ea:	00 
 81f48eb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f48f2:	00 
 81f48f3:	c7 44 24 04 60 01 bd 	movl   $0x8bd0160,0x4(%esp)
 81f48fa:	08 
 81f48fb:	c7 04 24 02 81 00 00 	movl   $0x8102,(%esp)
 81f4902:	e8 d0 bf 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f4907:	e9 cf 03 00 00       	jmp    81f4cdb <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x64f>
 81f490c:	8d 95 6b ff ff ff    	lea    -0x95(%ebp),%edx
 81f4912:	bb 41 00 00 00       	mov    $0x41,%ebx
 81f4917:	b8 00 00 00 00       	mov    $0x0,%eax
 81f491c:	89 d1                	mov    %edx,%ecx
 81f491e:	83 e1 01             	and    $0x1,%ecx
 81f4921:	85 c9                	test   %ecx,%ecx
 81f4923:	74 08                	je     81f492d <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x2a1>
 81f4925:	88 02                	mov    %al,(%edx)
 81f4927:	83 c2 01             	add    $0x1,%edx
 81f492a:	83 eb 01             	sub    $0x1,%ebx
 81f492d:	89 d1                	mov    %edx,%ecx
 81f492f:	83 e1 02             	and    $0x2,%ecx
 81f4932:	85 c9                	test   %ecx,%ecx
 81f4934:	74 09                	je     81f493f <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x2b3>
 81f4936:	66 89 02             	mov    %ax,(%edx)
 81f4939:	83 c2 02             	add    $0x2,%edx
 81f493c:	83 eb 02             	sub    $0x2,%ebx
 81f493f:	89 d9                	mov    %ebx,%ecx
 81f4941:	c1 e9 02             	shr    $0x2,%ecx
 81f4944:	89 d7                	mov    %edx,%edi
 81f4946:	f3 ab                	rep stos %eax,%es:(%edi)
 81f4948:	89 fa                	mov    %edi,%edx
 81f494a:	89 d9                	mov    %ebx,%ecx
 81f494c:	83 e1 02             	and    $0x2,%ecx
 81f494f:	85 c9                	test   %ecx,%ecx
 81f4951:	74 06                	je     81f4959 <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x2cd>
 81f4953:	66 89 02             	mov    %ax,(%edx)
 81f4956:	83 c2 02             	add    $0x2,%edx
 81f4959:	89 d9                	mov    %ebx,%ecx
 81f495b:	83 e1 01             	and    $0x1,%ecx
 81f495e:	85 c9                	test   %ecx,%ecx
 81f4960:	74 05                	je     81f4967 <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 81f4962:	88 02                	mov    %al,(%edx)
 81f4964:	83 c2 01             	add    $0x1,%edx
 81f4967:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 81f496d:	8d 50 20             	lea    0x20(%eax),%edx
 81f4970:	8d 85 6b ff ff ff    	lea    -0x95(%ebp),%eax
 81f4976:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f497a:	c7 44 24 04 41 00 00 	movl   $0x41,0x4(%esp)
 81f4981:	00 
 81f4982:	89 14 24             	mov    %edx,(%esp)
 81f4985:	e8 e0 82 e9 ff       	call   808cc6a <_Z18getSha256UsingSaltPKhiPc>
 81f498a:	8b 85 22 ff ff ff    	mov    -0xde(%ebp),%eax
 81f4990:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 81f4996:	0f b7 85 20 ff ff ff 	movzwl -0xe0(%ebp),%eax
 81f499d:	0f b7 c0             	movzwl %ax,%eax
 81f49a0:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 81f49a6:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 81f49ac:	89 bd 04 ff ff ff    	mov    %edi,-0xfc(%ebp)
 81f49b2:	8b bd 18 ff ff ff    	mov    -0xe8(%ebp),%edi
 81f49b8:	0f b6 85 17 ff ff ff 	movzbl -0xe9(%ebp),%eax
 81f49bf:	0f be f0             	movsbl %al,%esi
 81f49c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f49c5:	89 04 24             	mov    %eax,(%esp)
 81f49c8:	e8 a1 59 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81f49cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f49d4:	00 
 81f49d5:	89 04 24             	mov    %eax,(%esp)
 81f49d8:	e8 6e 46 f1 ff       	call   810904b <_Z14NumberToStringji>
 81f49dd:	89 c3                	mov    %eax,%ebx
 81f49df:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f49e6:	00 
 81f49e7:	c7 44 24 08 0b 81 00 	movl   $0x810b,0x8(%esp)
 81f49ee:	00 
 81f49ef:	c7 44 24 04 60 01 bd 	movl   $0x8bd0160,0x4(%esp)
 81f49f6:	08 
 81f49f7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f49fa:	89 04 24             	mov    %eax,(%esp)
 81f49fd:	e8 16 ad 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81f4a02:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 81f4a08:	89 44 24 20          	mov    %eax,0x20(%esp)
 81f4a0c:	8d 85 6b ff ff ff    	lea    -0x95(%ebp),%eax
 81f4a12:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81f4a16:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 81f4a1c:	89 44 24 18          	mov    %eax,0x18(%esp)
 81f4a20:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 81f4a26:	89 44 24 14          	mov    %eax,0x14(%esp)
 81f4a2a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81f4a2e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81f4a32:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f4a36:	c7 44 24 04 ec 21 bc 	movl   $0x8bc21ec,0x4(%esp)
 81f4a3d:	08 
 81f4a3e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f4a41:	89 04 24             	mov    %eax,(%esp)
 81f4a44:	e8 3f ad 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81f4a49:	0f b7 85 20 ff ff ff 	movzwl -0xe0(%ebp),%eax
 81f4a50:	0f b7 d8             	movzwl %ax,%ebx
 81f4a53:	8b 8d 1c ff ff ff    	mov    -0xe4(%ebp),%ecx
 81f4a59:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 81f4a5f:	0f b6 85 17 ff ff ff 	movzbl -0xe9(%ebp),%eax
 81f4a66:	0f be c0             	movsbl %al,%eax
 81f4a69:	8b 75 0c             	mov    0xc(%ebp),%esi
 81f4a6c:	8d be e0 00 00 00    	lea    0xe0(%esi),%edi
 81f4a72:	8d b5 6b ff ff ff    	lea    -0x95(%ebp),%esi
 81f4a78:	89 74 24 14          	mov    %esi,0x14(%esp)
 81f4a7c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81f4a80:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81f4a84:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f4a88:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4a8c:	89 3c 24             	mov    %edi,(%esp)
 81f4a8f:	e8 92 2d 04 00       	call   8237826 <_ZN8CNetworkILi4096ELi450000EE7set_natEcjjtPKc>
 81f4a94:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 81f4a9b:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81f4aa2:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 81f4aa9:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 81f4ab0:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81f4ab7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4aba:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 81f4ac0:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81f4ac7:	00 
 81f4ac8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81f4acb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4acf:	89 14 24             	mov    %edx,(%esp)
 81f4ad2:	e8 57 dd f6 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 81f4ad7:	89 c3                	mov    %eax,%ebx
 81f4ad9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4adc:	05 e0 00 00 00       	add    $0xe0,%eax
 81f4ae1:	89 04 24             	mov    %eax,(%esp)
 81f4ae4:	e8 23 22 04 00       	call   8236d0c <_ZN8CNetworkILi4096ELi450000EE10get_str_ipEv>
 81f4ae9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f4aed:	89 04 24             	mov    %eax,(%esp)
 81f4af0:	e8 c6 f9 ff ff       	call   81f44bb <_Z11checkDenyIPPKcS0_>
 81f4af5:	84 c0                	test   %al,%al
 81f4af7:	0f 84 53 01 00 00    	je     81f4c50 <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x5c4>
 81f4afd:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81f4b02:	c7 44 24 08 1d 81 00 	movl   $0x811d,0x8(%esp)
 81f4b09:	00 
 81f4b0a:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81f4b11:	08 
 81f4b12:	89 04 24             	mov    %eax,(%esp)
 81f4b15:	e8 6c af 09 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81f4b1a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81f4b21:	00 
 81f4b22:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4b26:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81f4b29:	89 04 24             	mov    %eax,(%esp)
 81f4b2c:	e8 f5 40 ed ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81f4b31:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81f4b34:	89 04 24             	mov    %eax,(%esp)
 81f4b37:	e8 0a 41 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81f4b3c:	c7 44 24 04 9e 00 00 	movl   $0x9e,0x4(%esp)
 81f4b43:	00 
 81f4b44:	89 04 24             	mov    %eax,(%esp)
 81f4b47:	e8 0a 41 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81f4b4c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81f4b4f:	89 04 24             	mov    %eax,(%esp)
 81f4b52:	e8 ef 40 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81f4b57:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81f4b5e:	ff 
 81f4b5f:	89 04 24             	mov    %eax,(%esp)
 81f4b62:	e8 ef 40 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81f4b67:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81f4b6a:	89 04 24             	mov    %eax,(%esp)
 81f4b6d:	e8 dc 40 ed ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81f4b72:	89 04 24             	mov    %eax,(%esp)
 81f4b75:	e8 48 2d 04 00       	call   82378c2 <_ZN12CStreamGuard11GetInBufferI18SIG_SAVE_PROXY_LOGEEPT_v>
 81f4b7a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81f4b7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4b80:	89 04 24             	mov    %eax,(%esp)
 81f4b83:	e8 e6 57 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81f4b88:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81f4b8b:	89 02                	mov    %eax,(%edx)
 81f4b8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4b90:	05 e0 00 00 00       	add    $0xe0,%eax
 81f4b95:	89 04 24             	mov    %eax,(%esp)
 81f4b98:	e8 6f 21 04 00       	call   8236d0c <_ZN8CNetworkILi4096ELi450000EE10get_str_ipEv>
 81f4b9d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81f4ba0:	83 c2 04             	add    $0x4,%edx
 81f4ba3:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81f4baa:	00 
 81f4bab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4baf:	89 14 24             	mov    %edx,(%esp)
 81f4bb2:	e8 19 8d e8 ff       	call   807d8d0 <strncpy@plt>
 81f4bb7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f4bba:	8d 50 18             	lea    0x18(%eax),%edx
 81f4bbd:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81f4bc4:	00 
 81f4bc5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81f4bc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4bcc:	89 14 24             	mov    %edx,(%esp)
 81f4bcf:	e8 fc 8c e8 ff       	call   807d8d0 <strncpy@plt>
 81f4bd4:	0f b6 85 17 ff ff ff 	movzbl -0xe9(%ebp),%eax
 81f4bdb:	89 c2                	mov    %eax,%edx
 81f4bdd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f4be0:	88 50 2c             	mov    %dl,0x2c(%eax)
 81f4be3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81f4be8:	8d 55 b8             	lea    -0x48(%ebp),%edx
 81f4beb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f4bef:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81f4bf6:	00 
 81f4bf7:	89 04 24             	mov    %eax,(%esp)
 81f4bfa:	e8 df c3 37 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81f4bff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4c02:	89 04 24             	mov    %eax,(%esp)
 81f4c05:	e8 64 57 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81f4c0a:	89 c3                	mov    %eax,%ebx
 81f4c0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4c0f:	89 04 24             	mov    %eax,(%esp)
 81f4c12:	e8 7f 40 ed ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81f4c17:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f4c1b:	89 04 24             	mov    %eax,(%esp)
 81f4c1e:	e8 b1 86 25 00       	call   844d2d4 <_ZN23DB_SelectAllowProxyUser11makeRequestEij>
 81f4c23:	eb 1b                	jmp    81f4c40 <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x5b4>
 81f4c25:	89 d3                	mov    %edx,%ebx
 81f4c27:	89 c6                	mov    %eax,%esi
 81f4c29:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81f4c2c:	89 04 24             	mov    %eax,(%esp)
 81f4c2f:	e8 9e 7c 42 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81f4c34:	89 f0                	mov    %esi,%eax
 81f4c36:	89 da                	mov    %ebx,%edx
 81f4c38:	89 04 24             	mov    %eax,(%esp)
 81f4c3b:	e8 10 eb 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f4c40:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81f4c43:	89 04 24             	mov    %eax,(%esp)
 81f4c46:	e8 87 7c 42 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81f4c4b:	e9 86 00 00 00       	jmp    81f4cd6 <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x64a>
 81f4c50:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81f4c53:	89 04 24             	mov    %eax,(%esp)
 81f4c56:	e8 f1 90 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f4c5b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81f4c62:	00 
 81f4c63:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f4c6a:	00 
 81f4c6b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81f4c6e:	89 04 24             	mov    %eax,(%esp)
 81f4c71:	e8 86 6c ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f4c76:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f4c7d:	00 
 81f4c7e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81f4c81:	89 04 24             	mov    %eax,(%esp)
 81f4c84:	e8 97 6c ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f4c89:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f4c90:	00 
 81f4c91:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81f4c94:	89 04 24             	mov    %eax,(%esp)
 81f4c97:	e8 bc 6c ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f4c9c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81f4c9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4ca3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4ca6:	89 04 24             	mov    %eax,(%esp)
 81f4ca9:	e8 0c 39 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f4cae:	eb 1b                	jmp    81f4ccb <_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf+0x63f>
 81f4cb0:	89 d3                	mov    %edx,%ebx
 81f4cb2:	89 c6                	mov    %eax,%esi
 81f4cb4:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81f4cb7:	89 04 24             	mov    %eax,(%esp)
 81f4cba:	e8 c1 91 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f4cbf:	89 f0                	mov    %esi,%eax
 81f4cc1:	89 da                	mov    %ebx,%edx
 81f4cc3:	89 04 24             	mov    %eax,(%esp)
 81f4cc6:	e8 85 ea 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f4ccb:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81f4cce:	89 04 24             	mov    %eax,(%esp)
 81f4cd1:	e8 aa 91 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f4cd6:	b8 00 00 00 00       	mov    $0x0,%eax
 81f4cdb:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 81f4ce1:	5b                   	pop    %ebx
 81f4ce2:	5e                   	pop    %esi
 81f4ce3:	5f                   	pop    %edi
 81f4ce4:	5d                   	pop    %ebp
 81f4ce5:	c3                   	ret

```

```c
// DisPatcher_SetIP::dispatch_sig @ 0x81f468c

/* DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetIP::dispatch_sig(DisPatcher_SetIP *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  Stream *pSVar7;
  CStreamGuard *pCVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  byte bVar13;
  SIG_SAVE_PROXY_LOG local_ed;
  uint local_ec;
  uint local_e8;
  ushort local_e4;
  uint local_e2;
  uint local_de;
  uchar local_da [65];
  char local_99;
  char local_98 [64];
  PacketGuard local_58 [12];
  CStreamGuard local_4c [8];
  char local_44 [20];
  cMyTrace local_30 [16];
  SIG_SAVE_PROXY_LOG *local_20;
  
  bVar13 = 0;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 4) {
    cVar1 = PacketBuf::get_byte(param_2,(char *)&local_ed);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,&local_ec);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&local_e8);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,&local_e4);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_2,&local_e2);
            if (cVar1 == '\x01') {
              CNetwork<4096,450000>::set_nat
                        ((CNetwork<4096,450000> *)(param_1 + 0xe0),(char)local_ed,local_ec,local_e8,
                         local_e4,local_e2);
              cVar1 = PacketBuf::get_int(param_2,&local_de);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_str(param_2,(char *)local_da,0x41,local_de);
                if (cVar1 == '\x01') {
                  pcVar10 = &local_99;
                  uVar11 = 0x41;
                  bVar12 = ((uint)pcVar10 & 1) != 0;
                  if (bVar12) {
                    local_99 = '\0';
                    pcVar10 = local_98;
                    uVar11 = 0x40;
                  }
                  if (((uint)pcVar10 & 2) != 0) {
                    pcVar10[0] = '\0';
                    pcVar10[1] = '\0';
                    pcVar10 = pcVar10 + 2;
                    uVar11 = uVar11 - 2;
                  }
                  for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    pcVar10[0] = '\0';
                    pcVar10[1] = '\0';
                    pcVar10[2] = '\0';
                    pcVar10[3] = '\0';
                    pcVar10 = pcVar10 + ((uint)bVar13 * -2 + 1) * 4;
                  }
                  if ((uVar11 & 2) != 0) {
                    pcVar10[0] = '\0';
                    pcVar10[1] = '\0';
                    pcVar10 = pcVar10 + 2;
                  }
                  if (!bVar12) {
                    *pcVar10 = '\0';
                  }
                  getSha256UsingSalt(local_da,0x41,&local_99);
                  uVar9 = local_e8;
                  uVar11 = local_ec;
                  uVar4 = (uint)local_e4;
                  iVar2 = (int)(char)local_ed;
                  uVar5 = CUser::get_acc_id(param_1);
                  uVar3 = NumberToString(uVar5,0);
                  cMyTrace::cMyTrace(local_30,
                                     "virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x810b,0);
                  cMyTrace::operator()
                            (local_30,
                             "(acc_id: %s) (nat type: %d) (inner_ip: %d) (nat_ip: %d) (nat_port: %d) (mac_addr: %s) (mtu: %d)"
                             ,uVar3,iVar2,uVar11,uVar9,uVar4,&local_99,local_e2);
                  CNetwork<4096,450000>::set_nat
                            ((CNetwork<4096,450000> *)(param_1 + 0xe0),(char)local_ed,local_ec,
                             local_e8,local_e4,&local_99);
                  local_44[0] = '\0';
                  local_44[1] = '\0';
                  local_44[2] = '\0';
                  local_44[3] = '\0';
                  local_44[4] = '\0';
                  local_44[5] = '\0';
                  local_44[6] = '\0';
                  local_44[7] = '\0';
                  local_44[8] = '\0';
                  local_44[9] = '\0';
                  local_44[10] = '\0';
                  local_44[0xb] = '\0';
                  local_44[0xc] = '\0';
                  local_44[0xd] = '\0';
                  local_44[0xe] = '\0';
                  local_44[0xf] = '\0';
                  local_44[0x10] = '\0';
                  local_44[0x11] = '\0';
                  local_44[0x12] = '\0';
                  local_44[0x13] = '\0';
                  pcVar10 = (char *)CNetwork<4096,450000>::GetPeerIP2
                                              ((CNetwork<4096,450000> *)(param_1 + 0xe0),local_44,
                                               0x14);
                  pcVar6 = (char *)CNetwork<4096,450000>::get_str_ip
                                             ((CNetwork<4096,450000> *)(param_1 + 0xe0));
                  cVar1 = checkDenyIP(pcVar6,pcVar10);
                  if (cVar1 == '\0') {
                    PacketGuard::PacketGuard(local_58);
                    /* try { // try from 081f4c71 to 081f4cad has its CatchHandler @ 081f4cb0 */
                    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,1,2);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,1);
                    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
                    CUser::Send(param_1,local_58);
                    PacketGuard::~PacketGuard(local_58);
                  }
                  else {
                    pSVar7 = (Stream *)
                             StreamPool::Acquire(GlobalData::s_stream_pool,
                                                 "PacketDispatcher_Impl_1.cpp",0x811d);
                    CStreamGuard::CStreamGuard(local_4c,pSVar7,true);
                    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 081f4b47 to 081f4c22 has its CatchHandler @ 081f4c25 */
                    CStreamGuard::operator<<(pCVar8,0x9e);
                    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    CStreamGuard::operator<<(pCVar8,-1);
                    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
                    local_20 = CStreamGuard::GetInBuffer<SIG_SAVE_PROXY_LOG>(pCVar8);
                    uVar3 = CUser::get_acc_id(param_1);
                    *(undefined4 *)local_20 = uVar3;
                    pcVar10 = (char *)CNetwork<4096,450000>::get_str_ip
                                                ((CNetwork<4096,450000> *)(param_1 + 0xe0));
                    strncpy((char *)(local_20 + 4),pcVar10,0x10);
                    strncpy((char *)(local_20 + 0x18),local_44,0x10);
                    local_20[0x2c] = local_ed;
                    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_4c);
                    uVar11 = CUser::get_acc_id(param_1);
                    iVar2 = CUser::GetUID(param_1);
                    DB_SelectAllowProxyUser::makeRequest(iVar2,uVar11);
                    CStreamGuard::~CStreamGuard(local_4c);
                  }
                  uVar3 = 0;
                }
                else {
                  uVar3 = LineFunc(0x8102,
                                   "virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",
                                   0,0);
                }
              }
              else {
                uVar3 = LineFunc(0x8100,
                                 "virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",0,
                                 0);
              }
            }
            else {
              uVar3 = LineFunc(33000,
                               "virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",0,0)
              ;
            }
          }
          else {
            uVar3 = LineFunc(32999,"virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",
                             0,0);
          }
        }
        else {
          uVar3 = LineFunc(0x80e6,"virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",0
                           ,0);
        }
      }
      else {
        uVar3 = LineFunc(0x80e5,"virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
    else {
      uVar3 = LineFunc(0x80e4,"virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

