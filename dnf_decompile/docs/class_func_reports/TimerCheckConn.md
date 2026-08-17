# TimerCheckConn

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08632bbc TimerCheckConn::dispatch_sig  [0x08632bbc-0x8632f59] ===
 8632bbc:	55                   	push   %ebp
 8632bbd:	89 e5                	mov    %esp,%ebp
 8632bbf:	57                   	push   %edi
 8632bc0:	56                   	push   %esi
 8632bc1:	53                   	push   %ebx
 8632bc2:	83 ec 7c             	sub    $0x7c,%esp
 8632bc5:	e8 c4 95 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8632bca:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8632bd1:	00 
 8632bd2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8632bd5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8632bd9:	89 04 24             	mov    %eax,(%esp)
 8632bdc:	e8 c3 1b c6 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8632be1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8632be4:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8632be8:	75 0a                	jne    8632bf4 <_ZN14TimerCheckConn12dispatch_sigEiij+0x38>
 8632bea:	bb 00 00 00 00       	mov    $0x0,%ebx
 8632bef:	e9 5b 03 00 00       	jmp    8632f4f <_ZN14TimerCheckConn12dispatch_sigEiij+0x393>
 8632bf4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632bf7:	89 04 24             	mov    %eax,(%esp)
 8632bfa:	e8 7d 77 aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8632bff:	0f b7 c0             	movzwl %ax,%eax
 8632c02:	3b 45 10             	cmp    0x10(%ebp),%eax
 8632c05:	0f 95 c0             	setne  %al
 8632c08:	84 c0                	test   %al,%al
 8632c0a:	74 0a                	je     8632c16 <_ZN14TimerCheckConn12dispatch_sigEiij+0x5a>
 8632c0c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8632c11:	e9 39 03 00 00       	jmp    8632f4f <_ZN14TimerCheckConn12dispatch_sigEiij+0x393>
 8632c16:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8632c19:	89 04 24             	mov    %eax,(%esp)
 8632c1c:	e8 af d4 0a 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8632c21:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632c24:	89 04 24             	mov    %eax,(%esp)
 8632c27:	e8 46 e4 ac ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 8632c2c:	8d 55 bb             	lea    -0x45(%ebp),%edx
 8632c2f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8632c33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8632c37:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8632c3a:	89 04 24             	mov    %eax,(%esp)
 8632c3d:	e8 ee 49 0d 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8632c42:	eb 1b                	jmp    8632c5f <_ZN14TimerCheckConn12dispatch_sigEiij+0xa3>
 8632c44:	89 d3                	mov    %edx,%ebx
 8632c46:	89 c6                	mov    %eax,%esi
 8632c48:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8632c4b:	89 04 24             	mov    %eax,(%esp)
 8632c4e:	e8 9d d4 0a 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8632c53:	89 f0                	mov    %esi,%eax
 8632c55:	89 da                	mov    %ebx,%edx
 8632c57:	89 04 24             	mov    %eax,(%esp)
 8632c5a:	e8 f1 0a 4b 00       	call   8ae3750 <_Unwind_Resume>
 8632c5f:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8632c62:	89 04 24             	mov    %eax,(%esp)
 8632c65:	e8 86 d4 0a 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8632c6a:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8632c71:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8632c78:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8632c7f:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8632c86:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632c89:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 8632c8f:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8632c96:	00 
 8632c97:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8632c9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8632c9e:	89 14 24             	mov    %edx,(%esp)
 8632ca1:	e8 88 fb b2 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 8632ca6:	e8 e3 94 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8632cab:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8632cae:	89 54 24 08          	mov    %edx,0x8(%esp)
 8632cb2:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8632cb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8632cb9:	89 04 24             	mov    %eax,(%esp)
 8632cbc:	e8 83 08 c7 ff       	call   82a3544 <_ZN12CGameManager24IsNoGameGuardApplingUserERSsPc>
 8632cc1:	88 45 e3             	mov    %al,-0x1d(%ebp)
 8632cc4:	80 7d e3 00          	cmpb   $0x0,-0x1d(%ebp)
 8632cc8:	74 51                	je     8632d1b <_ZN14TimerCheckConn12dispatch_sigEiij+0x15f>
 8632cca:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8632ccd:	89 04 24             	mov    %eax,(%esp)
 8632cd0:	e8 1b 38 0d 00       	call   87064f0 <_ZNKSs5c_strEv>
 8632cd5:	89 c3                	mov    %eax,%ebx
 8632cd7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8632cde:	00 
 8632cdf:	c7 44 24 08 a4 03 00 	movl   $0x3a4,0x8(%esp)
 8632ce6:	00 
 8632ce7:	c7 44 24 04 00 85 ce 	movl   $0x8ce8500,0x4(%esp)
 8632cee:	08 
 8632cef:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8632cf2:	89 04 24             	mov    %eax,(%esp)
 8632cf5:	e8 1e ca f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8632cfa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8632cfe:	c7 44 24 04 a0 6c ce 	movl   $0x8ce6ca0,0x4(%esp)
 8632d05:	08 
 8632d06:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8632d09:	89 04 24             	mov    %eax,(%esp)
 8632d0c:	e8 77 ca f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8632d11:	bb 01 00 00 00       	mov    $0x1,%ebx
 8632d16:	e9 29 02 00 00       	jmp    8632f44 <_ZN14TimerCheckConn12dispatch_sigEiij+0x388>
 8632d1b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632d1e:	89 04 24             	mov    %eax,(%esp)
 8632d21:	e8 66 76 aa ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8632d26:	85 c0                	test   %eax,%eax
 8632d28:	0f 95 c0             	setne  %al
 8632d2b:	84 c0                	test   %al,%al
 8632d2d:	0f 84 ef 01 00 00    	je     8632f22 <_ZN14TimerCheckConn12dispatch_sigEiij+0x366>
 8632d33:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632d36:	89 04 24             	mov    %eax,(%esp)
 8632d39:	e8 24 92 00 00       	call   863bf62 <_ZN5CUser17get_connect_countEv>
 8632d3e:	66 83 f8 02          	cmp    $0x2,%ax
 8632d42:	0f 9e c0             	setle  %al
 8632d45:	84 c0                	test   %al,%al
 8632d47:	0f 84 77 01 00 00    	je     8632ec4 <_ZN14TimerCheckConn12dispatch_sigEiij+0x308>
 8632d4d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632d50:	89 04 24             	mov    %eax,(%esp)
 8632d53:	e8 0a 92 00 00       	call   863bf62 <_ZN5CUser17get_connect_countEv>
 8632d58:	66 83 f8 01          	cmp    $0x1,%ax
 8632d5c:	0f 9f c0             	setg   %al
 8632d5f:	84 c0                	test   %al,%al
 8632d61:	0f 84 8a 00 00 00    	je     8632df1 <_ZN14TimerCheckConn12dispatch_sigEiij+0x235>
 8632d67:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632d6a:	89 04 24             	mov    %eax,(%esp)
 8632d6d:	e8 f0 91 00 00       	call   863bf62 <_ZN5CUser17get_connect_countEv>
 8632d72:	0f bf f0             	movswl %ax,%esi
 8632d75:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632d78:	89 04 24             	mov    %eax,(%esp)
 8632d7b:	e8 a8 e2 ac ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8632d80:	89 c3                	mov    %eax,%ebx
 8632d82:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8632d89:	00 
 8632d8a:	c7 44 24 08 bc 03 00 	movl   $0x3bc,0x8(%esp)
 8632d91:	00 
 8632d92:	c7 44 24 04 00 85 ce 	movl   $0x8ce8500,0x4(%esp)
 8632d99:	08 
 8632d9a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8632d9d:	89 04 24             	mov    %eax,(%esp)
 8632da0:	e8 73 c9 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8632da5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8632da9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8632dad:	c7 44 24 04 c4 6c ce 	movl   $0x8ce6cc4,0x4(%esp)
 8632db4:	08 
 8632db5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8632db8:	89 04 24             	mov    %eax,(%esp)
 8632dbb:	e8 c8 c9 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8632dc0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8632dc7:	e8 d2 8e a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8632dcc:	89 c3                	mov    %eax,%ebx
 8632dce:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632dd1:	89 04 24             	mov    %eax,(%esp)
 8632dd4:	e8 9b 90 00 00       	call   863be74 <_ZN5CUser20GetCheckConnIntervalEv>
 8632dd9:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8632ddc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8632ddf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8632de2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8632de6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632de9:	89 04 24             	mov    %eax,(%esp)
 8632dec:	e8 91 90 00 00       	call   863be82 <_ZN5CUser21SetResumeChecksumTimeEi>
 8632df1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632df4:	89 04 24             	mov    %eax,(%esp)
 8632df7:	e8 4a 91 00 00       	call   863bf46 <_ZN5CUser17incre_check_countEv>
 8632dfc:	8d 45 98             	lea    -0x68(%ebp),%eax
 8632dff:	89 04 24             	mov    %eax,(%esp)
 8632e02:	e8 45 af f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8632e07:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8632e0e:	00 
 8632e0f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8632e16:	00 
 8632e17:	8d 45 98             	lea    -0x68(%ebp),%eax
 8632e1a:	89 04 24             	mov    %eax,(%esp)
 8632e1d:	e8 da 8a a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8632e22:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8632e29:	00 
 8632e2a:	8d 45 98             	lea    -0x68(%ebp),%eax
 8632e2d:	89 04 24             	mov    %eax,(%esp)
 8632e30:	e8 23 8b a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8632e35:	8d 45 98             	lea    -0x68(%ebp),%eax
 8632e38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8632e3c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632e3f:	89 04 24             	mov    %eax,(%esp)
 8632e42:	e8 73 57 01 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8632e47:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632e4a:	89 04 24             	mov    %eax,(%esp)
 8632e4d:	e8 2a 75 aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8632e52:	0f b7 f8             	movzwl %ax,%edi
 8632e55:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632e58:	89 04 24             	mov    %eax,(%esp)
 8632e5b:	e8 14 90 00 00       	call   863be74 <_ZN5CUser20GetCheckConnIntervalEv>
 8632e60:	89 c6                	mov    %eax,%esi
 8632e62:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632e65:	89 04 24             	mov    %eax,(%esp)
 8632e68:	e8 29 5e a9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8632e6d:	89 c3                	mov    %eax,%ebx
 8632e6f:	e8 08 36 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 8632e74:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8632e7b:	00 
 8632e7c:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8632e80:	89 74 24 10          	mov    %esi,0x10(%esp)
 8632e84:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8632e8b:	00 
 8632e8c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8632e90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8632e97:	00 
 8632e98:	89 04 24             	mov    %eax,(%esp)
 8632e9b:	e8 76 df ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8632ea0:	eb 15                	jmp    8632eb7 <_ZN14TimerCheckConn12dispatch_sigEiij+0x2fb>
 8632ea2:	89 d3                	mov    %edx,%ebx
 8632ea4:	89 c6                	mov    %eax,%esi
 8632ea6:	8d 45 98             	lea    -0x68(%ebp),%eax
 8632ea9:	89 04 24             	mov    %eax,(%esp)
 8632eac:	e8 cf af f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8632eb1:	89 f0                	mov    %esi,%eax
 8632eb3:	89 da                	mov    %ebx,%edx
 8632eb5:	eb 72                	jmp    8632f29 <_ZN14TimerCheckConn12dispatch_sigEiij+0x36d>
 8632eb7:	8d 45 98             	lea    -0x68(%ebp),%eax
 8632eba:	89 04 24             	mov    %eax,(%esp)
 8632ebd:	e8 be af f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8632ec2:	eb 5e                	jmp    8632f22 <_ZN14TimerCheckConn12dispatch_sigEiij+0x366>
 8632ec4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632ec7:	89 04 24             	mov    %eax,(%esp)
 8632eca:	e8 59 e1 ac ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8632ecf:	89 44 24 14          	mov    %eax,0x14(%esp)
 8632ed3:	c7 44 24 10 e4 6c ce 	movl   $0x8ce6ce4,0x10(%esp)
 8632eda:	08 
 8632edb:	c7 44 24 0c 0a 04 00 	movl   $0x40a,0xc(%esp)
 8632ee2:	00 
 8632ee3:	c7 44 24 08 00 85 ce 	movl   $0x8ce8500,0x8(%esp)
 8632eea:	08 
 8632eeb:	c7 44 24 04 0e 6d ce 	movl   $0x8ce6d0e,0x4(%esp)
 8632ef2:	08 
 8632ef3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8632efa:	e8 0b 0d 4a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8632eff:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8632f06:	00 
 8632f07:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8632f0e:	00 
 8632f0f:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8632f16:	00 
 8632f17:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632f1a:	89 04 24             	mov    %eax,(%esp)
 8632f1d:	e8 d2 5a 01 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 8632f22:	bb 01 00 00 00       	mov    $0x1,%ebx
 8632f27:	eb 1b                	jmp    8632f44 <_ZN14TimerCheckConn12dispatch_sigEiij+0x388>
 8632f29:	89 d3                	mov    %edx,%ebx
 8632f2b:	89 c6                	mov    %eax,%esi
 8632f2d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8632f30:	89 04 24             	mov    %eax,(%esp)
 8632f33:	e8 a8 4c 0d 00       	call   8707be0 <_ZNSsD1Ev>
 8632f38:	89 f0                	mov    %esi,%eax
 8632f3a:	89 da                	mov    %ebx,%edx
 8632f3c:	89 04 24             	mov    %eax,(%esp)
 8632f3f:	e8 0c 08 4b 00       	call   8ae3750 <_Unwind_Resume>
 8632f44:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8632f47:	89 04 24             	mov    %eax,(%esp)
 8632f4a:	e8 91 4c 0d 00       	call   8707be0 <_ZNSsD1Ev>
 8632f4f:	89 d8                	mov    %ebx,%eax
 8632f51:	83 c4 7c             	add    $0x7c,%esp
 8632f54:	5b                   	pop    %ebx
 8632f55:	5e                   	pop    %esi
 8632f56:	5f                   	pop    %edi
 8632f57:	5d                   	pop    %ebp
 8632f58:	c3                   	ret
 8632f59:	90                   	nop

```

```c
// TimerCheckConn::dispatch_sig @ 0x8632bbc

/* TimerCheckConn::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCheckConn::dispatch_sig(int param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  string *psVar6;
  undefined4 uVar7;
  TimerQueue *pTVar8;
  undefined4 uVar9;
  PacketGuard local_6c [12];
  char local_60 [16];
  string local_50 [7];
  allocator<char> local_49;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  CUser *local_28;
  char local_21;
  int local_20;
  
  iVar3 = G_CGameManager();
  local_28 = (CUser *)CGameManager::getUser(iVar3,param_2);
  if (local_28 == (CUser *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar4 = CUser::get_unique_id(local_28);
    if ((uVar4 & 0xffff) == param_3) {
      std::allocator<char>::allocator();
      pcVar5 = (char *)CUser::get_acc_name(local_28);
                    /* try { // try from 08632c3d to 08632c41 has its CatchHandler @ 08632c44 */
      std::string::string(local_50,pcVar5,(allocator *)&local_49);
      std::allocator<char>::~allocator(&local_49);
      local_60[0] = '\0';
      local_60[1] = '\0';
      local_60[2] = '\0';
      local_60[3] = '\0';
      local_60[4] = '\0';
      local_60[5] = '\0';
      local_60[6] = '\0';
      local_60[7] = '\0';
      local_60[8] = '\0';
      local_60[9] = '\0';
      local_60[10] = '\0';
      local_60[0xb] = '\0';
      local_60[0xc] = '\0';
      local_60[0xd] = '\0';
      local_60[0xe] = '\0';
      local_60[0xf] = '\0';
      CNetwork<4096,450000>::GetPeerIP2((CNetwork<4096,450000> *)(local_28 + 0xe0),local_60,0x10);
                    /* try { // try from 08632ca6 to 08632e06 has its CatchHandler @ 08632f29 */
      psVar6 = (string *)G_CGameManager();
      local_21 = CGameManager::IsNoGameGuardApplingUser(psVar6,(char *)local_50);
      if (local_21 == '\0') {
        iVar3 = CUser::get_state(local_28);
        if (iVar3 != 0) {
          sVar1 = CUser::get_connect_count(local_28);
          if (sVar1 < 3) {
            sVar1 = CUser::get_connect_count(local_28);
            if (1 < sVar1) {
              sVar1 = CUser::get_connect_count(local_28);
              uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_28);
              cMyTrace::cMyTrace(local_38,
                                 "virtual bool TimerCheckConn::dispatch_sig(int, int, memberIdentificationNumber_t)"
                                 ,0x3bc,0);
              cMyTrace::operator()(local_38,"User %s - no response %dth ping",uVar9,(int)sVar1);
              iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
              local_20 = CUser::GetCheckConnInterval(local_28);
              local_20 = iVar3 + local_20;
              CUser::SetResumeChecksumTime(local_28,local_20);
            }
            CUser::incre_check_count(local_28);
            PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 08632e1d to 08632e9f has its CatchHandler @ 08632ea2 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
            CUser::Send(local_28,local_6c);
            uVar2 = CUser::get_unique_id(local_28);
            uVar9 = CUser::GetCheckConnInterval(local_28);
            uVar7 = CUser::GetUID(local_28);
            pTVar8 = (TimerQueue *)G_TimerQueue();
            TimerQueue::InsertTimer(pTVar8,0,uVar7,0,uVar9,uVar2,0);
                    /* try { // try from 08632ebd to 08632f21 has its CatchHandler @ 08632f29 */
            PacketGuard::~PacketGuard(local_6c);
          }
          else {
            uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_28);
            LogManager::logFormat
                      (1,"TimerDispatcher.cpp",
                       "virtual bool TimerCheckConn::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x40a,"User %s - no response during 3 times ping",uVar9);
            CUser::DisConnSig(local_28,8,0,0);
          }
        }
      }
      else {
        uVar9 = std::string::c_str(local_50);
        cMyTrace::cMyTrace(local_48,
                           "virtual bool TimerCheckConn::dispatch_sig(int, int, memberIdentificationNumber_t)"
                           ,0x3a4,0);
        cMyTrace::operator()(local_48,"Try To Login By No Game Guard : %s",uVar9);
      }
      uVar9 = 1;
      std::string::~string(local_50);
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9;
}

```

