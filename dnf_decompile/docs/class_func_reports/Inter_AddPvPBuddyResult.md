# Inter_AddPvPBuddyResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e1978 Inter_AddPvPBuddyResult::dispatch_sig  [0x084e1978-0x84e1c1d] ===
 84e1978:	55                   	push   %ebp
 84e1979:	89 e5                	mov    %esp,%ebp
 84e197b:	56                   	push   %esi
 84e197c:	53                   	push   %ebx
 84e197d:	83 ec 40             	sub    $0x40,%esp
 84e1980:	8b 45 10             	mov    0x10(%ebp),%eax
 84e1983:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84e1986:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1989:	89 04 24             	mov    %eax,(%esp)
 84e198c:	e8 fb 89 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e1991:	83 f8 02             	cmp    $0x2,%eax
 84e1994:	0f 9e c0             	setle  %al
 84e1997:	84 c0                	test   %al,%al
 84e1999:	74 0a                	je     84e19a5 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x2d>
 84e199b:	b8 00 00 00 00       	mov    $0x0,%eax
 84e19a0:	e9 71 02 00 00       	jmp    84e1c16 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x29e>
 84e19a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e19a8:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e19ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e19ae:	89 04 24             	mov    %eax,(%esp)
 84e19b1:	e8 98 a2 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e19b6:	39 c3                	cmp    %eax,%ebx
 84e19b8:	0f 95 c0             	setne  %al
 84e19bb:	84 c0                	test   %al,%al
 84e19bd:	74 0a                	je     84e19c9 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x51>
 84e19bf:	b8 00 00 00 00       	mov    $0x0,%eax
 84e19c4:	e9 4d 02 00 00       	jmp    84e1c16 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x29e>
 84e19c9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e19cc:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84e19d0:	84 c0                	test   %al,%al
 84e19d2:	0f 85 1f 01 00 00    	jne    84e1af7 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x17f>
 84e19d8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e19db:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 84e19df:	84 c0                	test   %al,%al
 84e19e1:	74 26                	je     84e1a09 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x91>
 84e19e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e19e6:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 84e19ea:	0f b6 c0             	movzbl %al,%eax
 84e19ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e19f1:	c7 44 24 04 21 01 00 	movl   $0x121,0x4(%esp)
 84e19f8:	00 
 84e19f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e19fc:	89 04 24             	mov    %eax,(%esp)
 84e19ff:	e8 3e a5 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e1a04:	e9 08 02 00 00       	jmp    84e1c11 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x299>
 84e1a09:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1a0c:	89 04 24             	mov    %eax,(%esp)
 84e1a0f:	e8 38 c3 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e1a14:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1a17:	89 04 24             	mov    %eax,(%esp)
 84e1a1a:	e8 c7 9e be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84e1a1f:	c7 44 24 08 21 01 00 	movl   $0x121,0x8(%esp)
 84e1a26:	00 
 84e1a27:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1a2e:	00 
 84e1a2f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1a32:	89 04 24             	mov    %eax,(%esp)
 84e1a35:	e8 c2 9e be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e1a3a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1a41:	00 
 84e1a42:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1a45:	89 04 24             	mov    %eax,(%esp)
 84e1a48:	e8 d3 9e be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e1a4d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e1a50:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 84e1a54:	0f be c0             	movsbl %al,%eax
 84e1a57:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1a5b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1a5e:	89 04 24             	mov    %eax,(%esp)
 84e1a61:	e8 ba 9e be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e1a66:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e1a69:	83 c0 14             	add    $0x14,%eax
 84e1a6c:	89 04 24             	mov    %eax,(%esp)
 84e1a6f:	e8 3c c9 b9 ff       	call   807e3b0 <strlen@plt>
 84e1a74:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e1a77:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1a7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1a7e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1a81:	89 04 24             	mov    %eax,(%esp)
 84e1a84:	e8 b3 9e be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e1a89:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e1a8c:	8d 50 14             	lea    0x14(%eax),%edx
 84e1a8f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1a92:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e1a96:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e1a9a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1a9d:	89 04 24             	mov    %eax,(%esp)
 84e1aa0:	e8 3f 59 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e1aa5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1aac:	00 
 84e1aad:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1ab0:	89 04 24             	mov    %eax,(%esp)
 84e1ab3:	e8 a0 9e be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e1ab8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1abb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1abf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1ac2:	89 04 24             	mov    %eax,(%esp)
 84e1ac5:	e8 f0 6a 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e1aca:	eb 1b                	jmp    84e1ae7 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x16f>
 84e1acc:	89 d3                	mov    %edx,%ebx
 84e1ace:	89 c6                	mov    %eax,%esi
 84e1ad0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1ad3:	89 04 24             	mov    %eax,(%esp)
 84e1ad6:	e8 a5 c3 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e1adb:	89 f0                	mov    %esi,%eax
 84e1add:	89 da                	mov    %ebx,%edx
 84e1adf:	89 04 24             	mov    %eax,(%esp)
 84e1ae2:	e8 69 1c 60 00       	call   8ae3750 <_Unwind_Resume>
 84e1ae7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e1aea:	89 04 24             	mov    %eax,(%esp)
 84e1aed:	e8 8e c3 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e1af2:	e9 1a 01 00 00       	jmp    84e1c11 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x299>
 84e1af7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e1afa:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 84e1afe:	84 c0                	test   %al,%al
 84e1b00:	74 26                	je     84e1b28 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x1b0>
 84e1b02:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e1b05:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 84e1b09:	0f b6 c0             	movzbl %al,%eax
 84e1b0c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e1b10:	c7 44 24 04 22 01 00 	movl   $0x122,0x4(%esp)
 84e1b17:	00 
 84e1b18:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1b1b:	89 04 24             	mov    %eax,(%esp)
 84e1b1e:	e8 1f a4 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e1b23:	e9 e9 00 00 00       	jmp    84e1c11 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x299>
 84e1b28:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1b2b:	89 04 24             	mov    %eax,(%esp)
 84e1b2e:	e8 19 c2 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e1b33:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1b36:	89 04 24             	mov    %eax,(%esp)
 84e1b39:	e8 a8 9d be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84e1b3e:	c7 44 24 08 22 01 00 	movl   $0x122,0x8(%esp)
 84e1b45:	00 
 84e1b46:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1b4d:	00 
 84e1b4e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1b51:	89 04 24             	mov    %eax,(%esp)
 84e1b54:	e8 a3 9d be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e1b59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1b60:	00 
 84e1b61:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1b64:	89 04 24             	mov    %eax,(%esp)
 84e1b67:	e8 b4 9d be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e1b6c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e1b6f:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 84e1b73:	0f be c0             	movsbl %al,%eax
 84e1b76:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1b7a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1b7d:	89 04 24             	mov    %eax,(%esp)
 84e1b80:	e8 9b 9d be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e1b85:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e1b88:	83 c0 14             	add    $0x14,%eax
 84e1b8b:	89 04 24             	mov    %eax,(%esp)
 84e1b8e:	e8 1d c8 b9 ff       	call   807e3b0 <strlen@plt>
 84e1b93:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e1b96:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e1b99:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1b9d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1ba0:	89 04 24             	mov    %eax,(%esp)
 84e1ba3:	e8 94 9d be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e1ba8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e1bab:	8d 50 14             	lea    0x14(%eax),%edx
 84e1bae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e1bb1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e1bb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e1bb9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1bbc:	89 04 24             	mov    %eax,(%esp)
 84e1bbf:	e8 20 58 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e1bc4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1bcb:	00 
 84e1bcc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1bcf:	89 04 24             	mov    %eax,(%esp)
 84e1bd2:	e8 81 9d be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e1bd7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1bda:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1bde:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1be1:	89 04 24             	mov    %eax,(%esp)
 84e1be4:	e8 d1 69 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e1be9:	eb 1b                	jmp    84e1c06 <_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci+0x28e>
 84e1beb:	89 d3                	mov    %edx,%ebx
 84e1bed:	89 c6                	mov    %eax,%esi
 84e1bef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1bf2:	89 04 24             	mov    %eax,(%esp)
 84e1bf5:	e8 86 c2 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e1bfa:	89 f0                	mov    %esi,%eax
 84e1bfc:	89 da                	mov    %ebx,%edx
 84e1bfe:	89 04 24             	mov    %eax,(%esp)
 84e1c01:	e8 4a 1b 60 00       	call   8ae3750 <_Unwind_Resume>
 84e1c06:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1c09:	89 04 24             	mov    %eax,(%esp)
 84e1c0c:	e8 6f c2 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e1c11:	b8 00 00 00 00       	mov    $0x0,%eax
 84e1c16:	83 c4 40             	add    $0x40,%esp
 84e1c19:	5b                   	pop    %ebx
 84e1c1a:	5e                   	pop    %esi
 84e1c1b:	5d                   	pop    %ebp
 84e1c1c:	c3                   	ret
 84e1c1d:	90                   	nop

```

```c
// Inter_AddPvPBuddyResult::dispatch_sig @ 0x84e1978

/* Inter_AddPvPBuddyResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AddPvPBuddyResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  size_t local_10;
  
  local_18 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_18 + 10),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    if (*(char *)(local_18 + 0x12) == '\0') {
      if (*(char *)(local_18 + 0x32) == '\0') {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084e1a1a to 084e1ac9 has its CatchHandler @ 084e1acc */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x121);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)*(char *)(local_18 + 0x13))
        ;
        local_14 = strlen((char *)(local_18 + 0x14));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x14),local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
      else {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x121,*(undefined1 *)(local_18 + 0x32));
      }
    }
    else if (*(char *)(local_18 + 0x32) == '\0') {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084e1b39 to 084e1be8 has its CatchHandler @ 084e1beb */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x122);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)*(char *)(local_18 + 0x13));
      local_10 = strlen((char *)(local_18 + 0x14));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_30,(char *)(local_18 + 0x14),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x122,*(undefined1 *)(local_18 + 0x32));
    }
  }
  return 0;
}

```

