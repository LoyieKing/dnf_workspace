# Inter_PunishCancel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4b02 Inter_PunishCancel::dispatch_sig  [0x084e4b02-0x84e4c29] ===
 84e4b02:	55                   	push   %ebp
 84e4b03:	89 e5                	mov    %esp,%ebp
 84e4b05:	56                   	push   %esi
 84e4b06:	53                   	push   %ebx
 84e4b07:	83 ec 20             	sub    $0x20,%esp
 84e4b0a:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4b0d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4b10:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e4b14:	0f 84 03 01 00 00    	je     84e4c1d <_ZN18Inter_PunishCancel12dispatch_sigEP5CUserPci+0x11b>
 84e4b1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4b1d:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 84e4b21:	66 83 f8 02          	cmp    $0x2,%ax
 84e4b25:	75 2b                	jne    84e4b52 <_ZN18Inter_PunishCancel12dispatch_sigEP5CUserPci+0x50>
 84e4b27:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4b2a:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 84e4b2e:	66 83 f8 20          	cmp    $0x20,%ax
 84e4b32:	75 1e                	jne    84e4b52 <_ZN18Inter_PunishCancel12dispatch_sigEP5CUserPci+0x50>
 84e4b34:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 84e4b3b:	00 
 84e4b3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4b3f:	89 04 24             	mov    %eax,(%esp)
 84e4b42:	e8 d5 4d 1a 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 84e4b47:	84 c0                	test   %al,%al
 84e4b49:	74 07                	je     84e4b52 <_ZN18Inter_PunishCancel12dispatch_sigEP5CUserPci+0x50>
 84e4b4b:	b8 01 00 00 00       	mov    $0x1,%eax
 84e4b50:	eb 05                	jmp    84e4b57 <_ZN18Inter_PunishCancel12dispatch_sigEP5CUserPci+0x55>
 84e4b52:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4b57:	84 c0                	test   %al,%al
 84e4b59:	0f 84 be 00 00 00    	je     84e4c1d <_ZN18Inter_PunishCancel12dispatch_sigEP5CUserPci+0x11b>
 84e4b5f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4b62:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 84e4b66:	0f b7 c0             	movzwl %ax,%eax
 84e4b69:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4b6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4b70:	89 04 24             	mov    %eax,(%esp)
 84e4b73:	e8 4a 4d 1a 00       	call   86898c2 <_ZN5CUser18DelTradePunishTypeEi>
 84e4b78:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4b7b:	89 04 24             	mov    %eax,(%esp)
 84e4b7e:	e8 c9 91 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e4b83:	c7 44 24 08 3f 01 00 	movl   $0x13f,0x8(%esp)
 84e4b8a:	00 
 84e4b8b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e4b92:	00 
 84e4b93:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4b96:	89 04 24             	mov    %eax,(%esp)
 84e4b99:	e8 5e 6d be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e4b9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4ba1:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 84e4ba5:	0f b7 c0             	movzwl %ax,%eax
 84e4ba8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4bac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4baf:	89 04 24             	mov    %eax,(%esp)
 84e4bb2:	e8 ed 52 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e4bb7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4bba:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 84e4bbe:	0f b7 c0             	movzwl %ax,%eax
 84e4bc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4bc5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4bc8:	89 04 24             	mov    %eax,(%esp)
 84e4bcb:	e8 d4 52 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e4bd0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e4bd7:	00 
 84e4bd8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4bdb:	89 04 24             	mov    %eax,(%esp)
 84e4bde:	e8 75 6d be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e4be3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4be6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4bea:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4bed:	89 04 24             	mov    %eax,(%esp)
 84e4bf0:	e8 c5 39 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e4bf5:	eb 1b                	jmp    84e4c12 <_ZN18Inter_PunishCancel12dispatch_sigEP5CUserPci+0x110>
 84e4bf7:	89 d3                	mov    %edx,%ebx
 84e4bf9:	89 c6                	mov    %eax,%esi
 84e4bfb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4bfe:	89 04 24             	mov    %eax,(%esp)
 84e4c01:	e8 7a 92 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e4c06:	89 f0                	mov    %esi,%eax
 84e4c08:	89 da                	mov    %ebx,%edx
 84e4c0a:	89 04 24             	mov    %eax,(%esp)
 84e4c0d:	e8 3e eb 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e4c12:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4c15:	89 04 24             	mov    %eax,(%esp)
 84e4c18:	e8 63 92 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e4c1d:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4c22:	83 c4 20             	add    $0x20,%esp
 84e4c25:	5b                   	pop    %ebx
 84e4c26:	5e                   	pop    %esi
 84e4c27:	5d                   	pop    %ebp
 84e4c28:	c3                   	ret
 84e4c29:	90                   	nop

```

```c
// Inter_PunishCancel::dispatch_sig @ 0x84e4b02

/* Inter_PunishCancel::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PunishCancel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if (param_2 != (char *)0x0) {
    if (((*(short *)(param_3 + 0xe) == 2) && (*(short *)(param_3 + 0x10) == 0x20)) &&
       (cVar2 = CUser::isTradePunishType((CUser *)param_2,0x20), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CUser::DelTradePunishType((CUser *)param_2,(uint)*(ushort *)(local_10 + 0x10));
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e4b99 to 084e4bf4 has its CatchHandler @ 084e4bf7 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x13f);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 0xe));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 0x10));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    return 0;
  }
  return 0;
}

```

