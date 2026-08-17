# Inter_SecurityCardIssue

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d3a22 Inter_SecurityCardIssue::dispatch_sig  [0x084d3a22-0x84d3d55] ===
 84d3a22:	55                   	push   %ebp
 84d3a23:	89 e5                	mov    %esp,%ebp
 84d3a25:	57                   	push   %edi
 84d3a26:	56                   	push   %esi
 84d3a27:	53                   	push   %ebx
 84d3a28:	81 ec fc 00 00 00    	sub    $0xfc,%esp
 84d3a2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3a31:	89 04 24             	mov    %eax,(%esp)
 84d3a34:	e8 53 69 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d3a39:	83 f8 02             	cmp    $0x2,%eax
 84d3a3c:	0f 9e c0             	setle  %al
 84d3a3f:	84 c0                	test   %al,%al
 84d3a41:	74 0a                	je     84d3a4d <_ZN23Inter_SecurityCardIssue12dispatch_sigEP5CUserPci+0x2b>
 84d3a43:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3a48:	e9 fe 02 00 00       	jmp    84d3d4b <_ZN23Inter_SecurityCardIssue12dispatch_sigEP5CUserPci+0x329>
 84d3a4d:	8b 45 10             	mov    0x10(%ebp),%eax
 84d3a50:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d3a53:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3a56:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 84d3a5c:	85 c0                	test   %eax,%eax
 84d3a5e:	0f 85 bf 02 00 00    	jne    84d3d23 <_ZN23Inter_SecurityCardIssue12dispatch_sigEP5CUserPci+0x301>
 84d3a64:	8d 95 66 ff ff ff    	lea    -0x9a(%ebp),%edx
 84d3a6a:	bb 42 00 00 00       	mov    $0x42,%ebx
 84d3a6f:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3a74:	89 d1                	mov    %edx,%ecx
 84d3a76:	83 e1 02             	and    $0x2,%ecx
 84d3a79:	85 c9                	test   %ecx,%ecx
 84d3a7b:	74 09                	je     84d3a86 <_ZN23Inter_SecurityCardIssue12dispatch_sigEP5CUserPci+0x64>
 84d3a7d:	66 89 02             	mov    %ax,(%edx)
 84d3a80:	83 c2 02             	add    $0x2,%edx
 84d3a83:	83 eb 02             	sub    $0x2,%ebx
 84d3a86:	89 d9                	mov    %ebx,%ecx
 84d3a88:	c1 e9 02             	shr    $0x2,%ecx
 84d3a8b:	89 d7                	mov    %edx,%edi
 84d3a8d:	f3 ab                	rep stos %eax,%es:(%edi)
 84d3a8f:	89 fa                	mov    %edi,%edx
 84d3a91:	89 d9                	mov    %ebx,%ecx
 84d3a93:	83 e1 02             	and    $0x2,%ecx
 84d3a96:	85 c9                	test   %ecx,%ecx
 84d3a98:	74 06                	je     84d3aa0 <_ZN23Inter_SecurityCardIssue12dispatch_sigEP5CUserPci+0x7e>
 84d3a9a:	66 89 02             	mov    %ax,(%edx)
 84d3a9d:	83 c2 02             	add    $0x2,%edx
 84d3aa0:	89 d9                	mov    %ebx,%ecx
 84d3aa2:	83 e1 01             	and    $0x1,%ecx
 84d3aa5:	85 c9                	test   %ecx,%ecx
 84d3aa7:	74 05                	je     84d3aae <_ZN23Inter_SecurityCardIssue12dispatch_sigEP5CUserPci+0x8c>
 84d3aa9:	88 02                	mov    %al,(%edx)
 84d3aab:	83 c2 01             	add    $0x1,%edx
 84d3aae:	8d 5d a8             	lea    -0x58(%ebp),%ebx
 84d3ab1:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3ab6:	ba 0c 00 00 00       	mov    $0xc,%edx
 84d3abb:	89 df                	mov    %ebx,%edi
 84d3abd:	89 d1                	mov    %edx,%ecx
 84d3abf:	f3 ab                	rep stos %eax,%es:(%edi)
 84d3ac1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3ac4:	89 04 24             	mov    %eax,(%esp)
 84d3ac7:	e8 a2 68 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d3acc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d3ad3:	00 
 84d3ad4:	89 04 24             	mov    %eax,(%esp)
 84d3ad7:	e8 6f 55 c3 ff       	call   810904b <_Z14NumberToStringji>
 84d3adc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d3ae0:	c7 44 24 08 6f 7d c8 	movl   $0x8c87d6f,0x8(%esp)
 84d3ae7:	08 
 84d3ae8:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 84d3aef:	00 
 84d3af0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84d3af3:	89 04 24             	mov    %eax,(%esp)
 84d3af6:	e8 21 8d 0b 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84d3afb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3afe:	8d 48 04             	lea    0x4(%eax),%ecx
 84d3b01:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 84d3b06:	8d 95 66 ff ff ff    	lea    -0x9a(%ebp),%edx
 84d3b0c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d3b10:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84d3b14:	89 04 24             	mov    %eax,(%esp)
 84d3b17:	e8 c6 a7 12 00       	call   85fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>
 84d3b1c:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 84d3b21:	8d 55 a8             	lea    -0x58(%ebp),%edx
 84d3b24:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d3b28:	8d 55 a8             	lea    -0x58(%ebp),%edx
 84d3b2b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d3b2f:	89 04 24             	mov    %eax,(%esp)
 84d3b32:	e8 ab a7 12 00       	call   85fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>
 84d3b37:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 84d3b3e:	00 
 84d3b3f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d3b46:	00 
 84d3b47:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84d3b4d:	89 04 24             	mov    %eax,(%esp)
 84d3b50:	e8 6b a1 ba ff       	call   807dcc0 <memset@plt>
 84d3b55:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3b58:	8d 48 25             	lea    0x25(%eax),%ecx
 84d3b5b:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 84d3b60:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 84d3b66:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d3b6a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84d3b6e:	89 04 24             	mov    %eax,(%esp)
 84d3b71:	e8 6c a7 12 00       	call   85fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>
 84d3b76:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3b79:	89 04 24             	mov    %eax,(%esp)
 84d3b7c:	e8 cb a1 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d3b81:	c7 44 24 08 a4 00 00 	movl   $0xa4,0x8(%esp)
 84d3b88:	00 
 84d3b89:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3b90:	00 
 84d3b91:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3b94:	89 04 24             	mov    %eax,(%esp)
 84d3b97:	e8 60 7d bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d3b9c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3ba3:	00 
 84d3ba4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3ba7:	89 04 24             	mov    %eax,(%esp)
 84d3baa:	e8 71 7d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d3baf:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84d3bb2:	89 04 24             	mov    %eax,(%esp)
 84d3bb5:	e8 f6 a7 ba ff       	call   807e3b0 <strlen@plt>
 84d3bba:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3bbe:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3bc1:	89 04 24             	mov    %eax,(%esp)
 84d3bc4:	e8 73 7d bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d3bc9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84d3bcc:	89 04 24             	mov    %eax,(%esp)
 84d3bcf:	e8 dc a7 ba ff       	call   807e3b0 <strlen@plt>
 84d3bd4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d3bd8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84d3bdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3bdf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3be2:	89 04 24             	mov    %eax,(%esp)
 84d3be5:	e8 fa 37 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d3bea:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 84d3bf0:	89 04 24             	mov    %eax,(%esp)
 84d3bf3:	e8 b8 a7 ba ff       	call   807e3b0 <strlen@plt>
 84d3bf8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3bfc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3bff:	89 04 24             	mov    %eax,(%esp)
 84d3c02:	e8 35 7d bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d3c07:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 84d3c0d:	89 04 24             	mov    %eax,(%esp)
 84d3c10:	e8 9b a7 ba ff       	call   807e3b0 <strlen@plt>
 84d3c15:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d3c19:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 84d3c1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3c23:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3c26:	89 04 24             	mov    %eax,(%esp)
 84d3c29:	e8 b6 37 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d3c2e:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84d3c34:	89 04 24             	mov    %eax,(%esp)
 84d3c37:	e8 74 a7 ba ff       	call   807e3b0 <strlen@plt>
 84d3c3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3c40:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3c43:	89 04 24             	mov    %eax,(%esp)
 84d3c46:	e8 f1 7c bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d3c4b:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84d3c51:	89 04 24             	mov    %eax,(%esp)
 84d3c54:	e8 57 a7 ba ff       	call   807e3b0 <strlen@plt>
 84d3c59:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d3c5d:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84d3c63:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3c67:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3c6a:	89 04 24             	mov    %eax,(%esp)
 84d3c6d:	e8 72 37 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d3c72:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3c79:	00 
 84d3c7a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3c7d:	89 04 24             	mov    %eax,(%esp)
 84d3c80:	e8 d3 7c bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d3c85:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3c88:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3c8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3c8f:	89 04 24             	mov    %eax,(%esp)
 84d3c92:	e8 23 49 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d3c97:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3c9a:	89 04 24             	mov    %eax,(%esp)
 84d3c9d:	e8 7e c0 d5 ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 84d3ca2:	89 04 24             	mov    %eax,(%esp)
 84d3ca5:	e8 be a0 12 00       	call   85fdd68 <_ZN8WongWork13CSecurityCard4initEv>
 84d3caa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3cad:	8d 70 5e             	lea    0x5e(%eax),%esi
 84d3cb0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3cb3:	8d 58 37             	lea    0x37(%eax),%ebx
 84d3cb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3cb9:	89 04 24             	mov    %eax,(%esp)
 84d3cbc:	e8 5f c0 d5 ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 84d3cc1:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 84d3cc5:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84d3ccc:	00 
 84d3ccd:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84d3cd4:	00 
 84d3cd5:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d3cdc:	00 
 84d3cdd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d3ce4:	00 
 84d3ce5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d3cec:	00 
 84d3ced:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d3cf1:	89 04 24             	mov    %eax,(%esp)
 84d3cf4:	e8 a3 a1 12 00       	call   85fde9c <_ZN8WongWork13CSecurityCard19setSecurityCardInfoEPKcbbiiiPc>
 84d3cf9:	eb 1b                	jmp    84d3d16 <_ZN23Inter_SecurityCardIssue12dispatch_sigEP5CUserPci+0x2f4>
 84d3cfb:	89 d3                	mov    %edx,%ebx
 84d3cfd:	89 c6                	mov    %eax,%esi
 84d3cff:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3d02:	89 04 24             	mov    %eax,(%esp)
 84d3d05:	e8 76 a1 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3d0a:	89 f0                	mov    %esi,%eax
 84d3d0c:	89 da                	mov    %ebx,%edx
 84d3d0e:	89 04 24             	mov    %eax,(%esp)
 84d3d11:	e8 3a fa 60 00       	call   8ae3750 <_Unwind_Resume>
 84d3d16:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3d19:	89 04 24             	mov    %eax,(%esp)
 84d3d1c:	e8 5f a1 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3d21:	eb 23                	jmp    84d3d46 <_ZN23Inter_SecurityCardIssue12dispatch_sigEP5CUserPci+0x324>
 84d3d23:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3d26:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 84d3d2c:	0f b6 c0             	movzbl %al,%eax
 84d3d2f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d3d33:	c7 44 24 04 a4 00 00 	movl   $0xa4,0x4(%esp)
 84d3d3a:	00 
 84d3d3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3d3e:	89 04 24             	mov    %eax,(%esp)
 84d3d41:	e8 fc 81 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d3d46:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3d4b:	81 c4 fc 00 00 00    	add    $0xfc,%esp
 84d3d51:	5b                   	pop    %ebx
 84d3d52:	5e                   	pop    %esi
 84d3d53:	5f                   	pop    %edi
 84d3d54:	5d                   	pop    %ebp
 84d3d55:	c3                   	ret

```

```c
// Inter_SecurityCardIssue::dispatch_sig @ 0x84d3a22

/* WARNING: Removing unreachable block (ram,0x084d3aa9) */
/* Inter_SecurityCardIssue::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SecurityCardIssue::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  CSecurityCard *pCVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_e0 [66];
  char local_9e [66];
  char local_5c [48];
  PacketGuard local_2c [12];
  int local_20;
  
  bVar9 = 0;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    local_20 = param_3;
    if (*(int *)(param_3 + 0x8c) == 0) {
      pcVar6 = local_9e;
      uVar7 = 0x42;
      bVar8 = ((uint)pcVar6 & 2) != 0;
      if (bVar8) {
        local_9e[0] = '\0';
        local_9e[1] = '\0';
        pcVar6 = local_9e + 2;
        uVar7 = 0x40;
      }
      for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
      }
      if (!bVar8) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
      }
      pcVar6 = local_5c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
      }
      uVar7 = CUser::get_acc_id((CUser *)param_2);
      uVar3 = NumberToString(uVar7,0);
      OS_API::snprintf(local_5c,0x30,"%s",uVar3);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,(char *)(local_20 + 4),local_9e);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,local_5c,local_5c);
      memset(local_e0,0,0x42);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,(char *)(local_20 + 0x25),local_e0);
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084d3b97 to 084d3cf8 has its CatchHandler @ 084d3cfb */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xa4);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      sVar4 = strlen(local_5c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar4);
      sVar4 = strlen(local_5c);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_5c,sVar4);
      sVar4 = strlen(local_9e);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar4);
      sVar4 = strlen(local_9e);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_9e,sVar4);
      sVar4 = strlen(local_e0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar4);
      sVar4 = strlen(local_e0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_e0,sVar4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      pCVar5 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::init(pCVar5);
      pcVar6 = (char *)(local_20 + 0x5e);
      pcVar1 = (char *)(local_20 + 0x37);
      pCVar5 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::setSecurityCardInfo(pCVar5,pcVar1,false,false,0,0,0,pcVar6);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xa4,*(uint *)(param_3 + 0x8c) & 0xff);
    }
  }
  return 0;
}

```

