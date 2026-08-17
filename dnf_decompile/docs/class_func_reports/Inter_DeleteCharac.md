# Inter_DeleteCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084bf810 Inter_DeleteCharac::dispatch_sig  [0x084bf810-0x84bfb83] ===
 84bf810:	55                   	push   %ebp
 84bf811:	89 e5                	mov    %esp,%ebp
 84bf813:	56                   	push   %esi
 84bf814:	53                   	push   %ebx
 84bf815:	83 ec 40             	sub    $0x40,%esp
 84bf818:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf81b:	89 04 24             	mov    %eax,(%esp)
 84bf81e:	e8 69 ab c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84bf823:	85 c0                	test   %eax,%eax
 84bf825:	0f 94 c0             	sete   %al
 84bf828:	84 c0                	test   %al,%al
 84bf82a:	74 0a                	je     84bf836 <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x26>
 84bf82c:	bb 12 08 00 00       	mov    $0x812,%ebx
 84bf831:	e9 45 03 00 00       	jmp    84bfb7b <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x36b>
 84bf836:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf839:	89 04 24             	mov    %eax,(%esp)
 84bf83c:	e8 07 b2 18 00       	call   864aa48 <_ZN5CUser18unlockDeleteCharacEv>
 84bf841:	83 f0 01             	xor    $0x1,%eax
 84bf844:	84 c0                	test   %al,%al
 84bf846:	74 0a                	je     84bf852 <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x42>
 84bf848:	bb 17 08 00 00       	mov    $0x817,%ebx
 84bf84d:	e9 29 03 00 00       	jmp    84bfb7b <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x36b>
 84bf852:	8b 45 10             	mov    0x10(%ebp),%eax
 84bf855:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84bf858:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf85b:	89 04 24             	mov    %eax,(%esp)
 84bf85e:	e8 e9 e4 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84bf863:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 84bf86a:	00 
 84bf86b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bf872:	00 
 84bf873:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf876:	89 04 24             	mov    %eax,(%esp)
 84bf879:	e8 7e c0 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84bf87e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84bf881:	8b 40 08             	mov    0x8(%eax),%eax
 84bf884:	83 f8 01             	cmp    $0x1,%eax
 84bf887:	75 55                	jne    84bf8de <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0xce>
 84bf889:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84bf890:	00 
 84bf891:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf894:	89 04 24             	mov    %eax,(%esp)
 84bf897:	e8 84 c0 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bf89c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84bf8a3:	00 
 84bf8a4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf8a7:	89 04 24             	mov    %eax,(%esp)
 84bf8aa:	e8 71 c0 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bf8af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bf8b6:	00 
 84bf8b7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf8ba:	89 04 24             	mov    %eax,(%esp)
 84bf8bd:	e8 96 c0 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84bf8c2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf8c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf8c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf8cc:	89 04 24             	mov    %eax,(%esp)
 84bf8cf:	e8 e6 8c 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84bf8d4:	bb 25 08 00 00       	mov    $0x825,%ebx
 84bf8d9:	e9 92 02 00 00       	jmp    84bfb70 <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x360>
 84bf8de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84bf8e1:	8b 40 08             	mov    0x8(%eax),%eax
 84bf8e4:	83 f8 02             	cmp    $0x2,%eax
 84bf8e7:	75 55                	jne    84bf93e <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x12e>
 84bf8e9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84bf8f0:	00 
 84bf8f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf8f4:	89 04 24             	mov    %eax,(%esp)
 84bf8f7:	e8 24 c0 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bf8fc:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 84bf903:	00 
 84bf904:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf907:	89 04 24             	mov    %eax,(%esp)
 84bf90a:	e8 11 c0 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bf90f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bf916:	00 
 84bf917:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf91a:	89 04 24             	mov    %eax,(%esp)
 84bf91d:	e8 36 c0 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84bf922:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf925:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf929:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf92c:	89 04 24             	mov    %eax,(%esp)
 84bf92f:	e8 86 8c 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84bf934:	bb 00 00 00 00       	mov    $0x0,%ebx
 84bf939:	e9 32 02 00 00       	jmp    84bfb70 <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x360>
 84bf93e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84bf941:	8b 40 08             	mov    0x8(%eax),%eax
 84bf944:	83 f8 03             	cmp    $0x3,%eax
 84bf947:	75 55                	jne    84bf99e <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x18e>
 84bf949:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84bf950:	00 
 84bf951:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf954:	89 04 24             	mov    %eax,(%esp)
 84bf957:	e8 c4 bf c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bf95c:	c7 44 24 04 d5 00 00 	movl   $0xd5,0x4(%esp)
 84bf963:	00 
 84bf964:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf967:	89 04 24             	mov    %eax,(%esp)
 84bf96a:	e8 b1 bf c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bf96f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bf976:	00 
 84bf977:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf97a:	89 04 24             	mov    %eax,(%esp)
 84bf97d:	e8 d6 bf c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84bf982:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bf985:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf989:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf98c:	89 04 24             	mov    %eax,(%esp)
 84bf98f:	e8 26 8c 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84bf994:	bb 00 00 00 00       	mov    $0x0,%ebx
 84bf999:	e9 d2 01 00 00       	jmp    84bfb70 <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x360>
 84bf99e:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 84bf9a1:	89 04 24             	mov    %eax,(%esp)
 84bf9a4:	e8 6f 99 02 00       	call   84e9318 <_ZN28Packet_Monitor_Charac_DeleteC1Ev>
 84bf9a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf9ac:	89 04 24             	mov    %eax,(%esp)
 84bf9af:	e8 ba a9 c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84bf9b4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84bf9b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84bf9ba:	8b 40 04             	mov    0x4(%eax),%eax
 84bf9bd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84bf9c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84bf9c3:	8b 40 0c             	mov    0xc(%eax),%eax
 84bf9c6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84bf9c9:	8d 5d d2             	lea    -0x2e(%ebp),%ebx
 84bf9cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf9cf:	89 04 24             	mov    %eax,(%esp)
 84bf9d2:	e8 b9 c2 c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84bf9d7:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84bf9dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf9e1:	89 14 24             	mov    %edx,(%esp)
 84bf9e4:	e8 a1 26 c5 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84bf9e9:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 84bf9f0:	00 
 84bf9f1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84bf9f5:	89 04 24             	mov    %eax,(%esp)
 84bf9f8:	e8 47 14 fb ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84bf9fd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84bfa00:	85 c0                	test   %eax,%eax
 84bfa02:	74 34                	je     84bfa38 <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x228>
 84bfa04:	8d 5d d2             	lea    -0x2e(%ebp),%ebx
 84bfa07:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bfa0a:	89 04 24             	mov    %eax,(%esp)
 84bfa0d:	e8 7e c2 c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84bfa12:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84bfa18:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bfa1c:	89 14 24             	mov    %edx,(%esp)
 84bfa1f:	e8 94 d9 c5 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84bfa24:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 84bfa2b:	00 
 84bfa2c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84bfa30:	89 04 24             	mov    %eax,(%esp)
 84bfa33:	e8 96 e2 fa ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 84bfa38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84bfa3b:	8b 40 04             	mov    0x4(%eax),%eax
 84bfa3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bfa42:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bfa45:	89 04 24             	mov    %eax,(%esp)
 84bfa48:	e8 ed ab 18 00       	call   864a63a <_ZN5CUser12DeleteCharacEj>
 84bfa4d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bfa54:	00 
 84bfa55:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfa58:	89 04 24             	mov    %eax,(%esp)
 84bfa5b:	e8 c0 be c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bfa60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84bfa63:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 84bfa67:	84 c0                	test   %al,%al
 84bfa69:	74 28                	je     84bfa93 <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x283>
 84bfa6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bfa6e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84bfa75:	00 
 84bfa76:	89 04 24             	mov    %eax,(%esp)
 84bfa79:	e8 68 c5 02 00       	call   84ebfe6 <_ZN15CUserCharacInfo25setUserEventCharacterFlagEh>
 84bfa7e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bfa85:	00 
 84bfa86:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfa89:	89 04 24             	mov    %eax,(%esp)
 84bfa8c:	e8 8f be c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bfa91:	eb 13                	jmp    84bfaa6 <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x296>
 84bfa93:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84bfa9a:	00 
 84bfa9b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfa9e:	89 04 24             	mov    %eax,(%esp)
 84bfaa1:	e8 7a be c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bfaa6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bfaad:	00 
 84bfaae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfab1:	89 04 24             	mov    %eax,(%esp)
 84bfab4:	e8 9f be c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84bfab9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfabc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bfac0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bfac3:	89 04 24             	mov    %eax,(%esp)
 84bfac6:	e8 ef 8a 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84bfacb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bface:	89 04 24             	mov    %eax,(%esp)
 84bfad1:	e8 10 be c0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84bfad6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84bfadd:	00 
 84bfade:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84bfae5:	00 
 84bfae6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfae9:	89 04 24             	mov    %eax,(%esp)
 84bfaec:	e8 0b be c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84bfaf1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84bfaf8:	00 
 84bfaf9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfafc:	89 04 24             	mov    %eax,(%esp)
 84bfaff:	e8 1c be c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bfb04:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfb07:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84bfb0e:	00 
 84bfb0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bfb13:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bfb16:	89 04 24             	mov    %eax,(%esp)
 84bfb19:	e8 30 a9 19 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 84bfb1e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bfb25:	00 
 84bfb26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfb29:	89 04 24             	mov    %eax,(%esp)
 84bfb2c:	e8 27 be c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84bfb31:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfb34:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bfb38:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bfb3b:	89 04 24             	mov    %eax,(%esp)
 84bfb3e:	e8 77 8a 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84bfb43:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bfb46:	89 04 24             	mov    %eax,(%esp)
 84bfb49:	e8 f2 1b 19 00       	call   8651740 <_ZN5CUser16UpdateCharacViewEv>
 84bfb4e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84bfb53:	eb 1b                	jmp    84bfb70 <_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci+0x360>
 84bfb55:	89 d3                	mov    %edx,%ebx
 84bfb57:	89 c6                	mov    %eax,%esi
 84bfb59:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfb5c:	89 04 24             	mov    %eax,(%esp)
 84bfb5f:	e8 1c e3 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84bfb64:	89 f0                	mov    %esi,%eax
 84bfb66:	89 da                	mov    %ebx,%edx
 84bfb68:	89 04 24             	mov    %eax,(%esp)
 84bfb6b:	e8 e0 3b 62 00       	call   8ae3750 <_Unwind_Resume>
 84bfb70:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84bfb73:	89 04 24             	mov    %eax,(%esp)
 84bfb76:	e8 05 e3 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84bfb7b:	89 d8                	mov    %ebx,%eax
 84bfb7d:	83 c4 40             	add    $0x40,%esp
 84bfb80:	5b                   	pop    %ebx
 84bfb81:	5e                   	pop    %esi
 84bfb82:	5d                   	pop    %ebp
 84bfb83:	c3                   	ret

```

```c
// Inter_DeleteCharac::dispatch_sig @ 0x84bf810

/* Inter_DeleteCharac::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DeleteCharac::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CMonitorServerProxy *this;
  CGuildServerProxy *this_00;
  undefined4 uVar3;
  Packet_Monitor_Charac_Delete local_32 [10];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 0) {
    uVar3 = 0x812;
  }
  else {
    cVar1 = CUser::unlockDeleteCharac((CUser *)param_2);
    if (cVar1 == '\x01') {
      local_10 = param_3;
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084bf879 to 084bfb4d has its CatchHandler @ 084bfb55 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,6);
      if (*(int *)(local_10 + 8) == 1) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        uVar3 = 0x825;
      }
      else if (*(int *)(local_10 + 8) == 2) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x24);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        uVar3 = 0;
      }
      else if (*(int *)(local_10 + 8) == 3) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0xd5);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        uVar3 = 0;
      }
      else {
        Packet_Monitor_Charac_Delete::Packet_Monitor_Charac_Delete(local_32);
        local_28 = CUser::get_acc_id((CUser *)param_2);
        local_24 = *(undefined4 *)(local_10 + 4);
        local_20 = *(int *)(local_10 + 0xc);
        uVar3 = CUser::GetServerGroup((CUser *)param_2);
        this = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,uVar3);
        CMonitorServerProxy::SendTcpPacket(this,(char *)local_32,0x16);
        if (local_20 != 0) {
          uVar3 = CUser::GetServerGroup((CUser *)param_2);
          this_00 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                              (GlobalData::s_guild_proxy_mgr,uVar3);
          CGuildServerProxy::SendTcpPacket(this_00,(char *)local_32,0x16);
        }
        CUser::DeleteCharac((CUser *)param_2,*(uint *)(local_10 + 4));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        if (*(char *)(local_10 + 0x10) == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        }
        else {
          CUserCharacInfo::setUserEventCharacterFlag((CUserCharacInfo *)param_2,'\0');
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
        CUser::make_basic_info((CUser *)param_2,(char *)local_1c,'\x02');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        CUser::UpdateCharacView((CUser *)param_2);
        uVar3 = 0;
      }
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar3 = 0x817;
    }
  }
  return uVar3;
}

```

