# Inter_NoticeGuildMemo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dad96 Inter_NoticeGuildMemo::dispatch_sig  [0x084dad96-0x84daeed] ===
 84dad96:	55                   	push   %ebp
 84dad97:	89 e5                	mov    %esp,%ebp
 84dad99:	56                   	push   %esi
 84dad9a:	53                   	push   %ebx
 84dad9b:	83 ec 30             	sub    $0x30,%esp
 84dad9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dada1:	89 04 24             	mov    %eax,(%esp)
 84dada4:	e8 e3 f5 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84dada9:	85 c0                	test   %eax,%eax
 84dadab:	0f 94 c0             	sete   %al
 84dadae:	84 c0                	test   %al,%al
 84dadb0:	74 0a                	je     84dadbc <_ZN21Inter_NoticeGuildMemo12dispatch_sigEP5CUserPci+0x26>
 84dadb2:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dadb7:	e9 28 01 00 00       	jmp    84daee4 <_ZN21Inter_NoticeGuildMemo12dispatch_sigEP5CUserPci+0x14e>
 84dadbc:	8b 45 10             	mov    0x10(%ebp),%eax
 84dadbf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84dadc2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dadc5:	8b 58 0e             	mov    0xe(%eax),%ebx
 84dadc8:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dadcf:	ff 
 84dadd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dadd3:	89 04 24             	mov    %eax,(%esp)
 84dadd6:	e8 c5 31 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84daddb:	39 c3                	cmp    %eax,%ebx
 84daddd:	0f 95 c0             	setne  %al
 84dade0:	84 c0                	test   %al,%al
 84dade2:	74 0a                	je     84dadee <_ZN21Inter_NoticeGuildMemo12dispatch_sigEP5CUserPci+0x58>
 84dade4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dade9:	e9 f6 00 00 00       	jmp    84daee4 <_ZN21Inter_NoticeGuildMemo12dispatch_sigEP5CUserPci+0x14e>
 84dadee:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84dadf1:	89 04 24             	mov    %eax,(%esp)
 84dadf4:	e8 53 2f 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dadf9:	c7 44 24 08 c5 00 00 	movl   $0xc5,0x8(%esp)
 84dae00:	00 
 84dae01:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dae08:	00 
 84dae09:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84dae0c:	89 04 24             	mov    %eax,(%esp)
 84dae0f:	e8 e8 0a bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dae14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dae17:	83 c0 12             	add    $0x12,%eax
 84dae1a:	89 04 24             	mov    %eax,(%esp)
 84dae1d:	e8 8e 35 ba ff       	call   807e3b0 <strlen@plt>
 84dae22:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dae25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dae28:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dae2c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84dae2f:	89 04 24             	mov    %eax,(%esp)
 84dae32:	e8 05 0b bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dae37:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dae3a:	8d 50 12             	lea    0x12(%eax),%edx
 84dae3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dae40:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dae44:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dae48:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84dae4b:	89 04 24             	mov    %eax,(%esp)
 84dae4e:	e8 91 c5 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84dae53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dae56:	83 c0 30             	add    $0x30,%eax
 84dae59:	89 04 24             	mov    %eax,(%esp)
 84dae5c:	e8 4f 35 ba ff       	call   807e3b0 <strlen@plt>
 84dae61:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dae64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dae67:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dae6b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84dae6e:	89 04 24             	mov    %eax,(%esp)
 84dae71:	e8 c6 0a bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dae76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dae79:	8d 50 30             	lea    0x30(%eax),%edx
 84dae7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dae7f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dae83:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dae87:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84dae8a:	89 04 24             	mov    %eax,(%esp)
 84dae8d:	e8 52 c5 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84dae92:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dae99:	00 
 84dae9a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84dae9d:	89 04 24             	mov    %eax,(%esp)
 84daea0:	e8 b3 0a bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84daea5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84daea8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84daeac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84daeaf:	89 04 24             	mov    %eax,(%esp)
 84daeb2:	e8 03 d7 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84daeb7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84daebc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84daebf:	89 04 24             	mov    %eax,(%esp)
 84daec2:	e8 b9 2f 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84daec7:	eb 1b                	jmp    84daee4 <_ZN21Inter_NoticeGuildMemo12dispatch_sigEP5CUserPci+0x14e>
 84daec9:	89 d3                	mov    %edx,%ebx
 84daecb:	89 c6                	mov    %eax,%esi
 84daecd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84daed0:	89 04 24             	mov    %eax,(%esp)
 84daed3:	e8 a8 2f 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84daed8:	89 f0                	mov    %esi,%eax
 84daeda:	89 da                	mov    %ebx,%edx
 84daedc:	89 04 24             	mov    %eax,(%esp)
 84daedf:	e8 6c 88 60 00       	call   8ae3750 <_Unwind_Resume>
 84daee4:	89 d8                	mov    %ebx,%eax
 84daee6:	83 c4 30             	add    $0x30,%esp
 84daee9:	5b                   	pop    %ebx
 84daeea:	5e                   	pop    %esi
 84daeeb:	5d                   	pop    %ebp
 84daeec:	c3                   	ret
 84daeed:	90                   	nop

```

```c
// Inter_NoticeGuildMemo::dispatch_sig @ 0x84dad96

/* Inter_NoticeGuildMemo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeGuildMemo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_14 = param_3;
    iVar1 = *(int *)(param_3 + 0xe);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084dae0f to 084daeb6 has its CatchHandler @ 084daec9 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xc5);
      local_10 = strlen((char *)(local_14 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10)
      ;
      local_10 = strlen((char *)(local_14 + 0x30));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x30),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}

```

