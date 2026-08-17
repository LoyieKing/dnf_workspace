# Inter_GuildCargoMoveItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084debb4 Inter_GuildCargoMoveItem::dispatch_sig  [0x084debb4-0x84ded41] ===
 84debb4:	55                   	push   %ebp
 84debb5:	89 e5                	mov    %esp,%ebp
 84debb7:	56                   	push   %esi
 84debb8:	53                   	push   %ebx
 84debb9:	83 ec 30             	sub    $0x30,%esp
 84debbc:	8b 45 10             	mov    0x10(%ebp),%eax
 84debbf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84debc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84debc5:	89 04 24             	mov    %eax,(%esp)
 84debc8:	e8 bf b7 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84debcd:	83 f8 02             	cmp    $0x2,%eax
 84debd0:	0f 9e c0             	setle  %al
 84debd3:	84 c0                	test   %al,%al
 84debd5:	74 0a                	je     84debe1 <_ZN24Inter_GuildCargoMoveItem12dispatch_sigEP5CUserPci+0x2d>
 84debd7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84debdc:	e9 57 01 00 00       	jmp    84ded38 <_ZN24Inter_GuildCargoMoveItem12dispatch_sigEP5CUserPci+0x184>
 84debe1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84debe8:	ff 
 84debe9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84debec:	89 04 24             	mov    %eax,(%esp)
 84debef:	e8 ac f3 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84debf4:	89 c2                	mov    %eax,%edx
 84debf6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84debf9:	8b 40 0e             	mov    0xe(%eax),%eax
 84debfc:	39 c2                	cmp    %eax,%edx
 84debfe:	0f 95 c0             	setne  %al
 84dec01:	84 c0                	test   %al,%al
 84dec03:	74 0a                	je     84dec0f <_ZN24Inter_GuildCargoMoveItem12dispatch_sigEP5CUserPci+0x5b>
 84dec05:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dec0a:	e9 29 01 00 00       	jmp    84ded38 <_ZN24Inter_GuildCargoMoveItem12dispatch_sigEP5CUserPci+0x184>
 84dec0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dec12:	8b 48 17             	mov    0x17(%eax),%ecx
 84dec15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dec18:	8b 50 13             	mov    0x13(%eax),%edx
 84dec1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dec1e:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84dec22:	0f b6 c0             	movzbl %al,%eax
 84dec25:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 84dec28:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 84dec2e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84dec32:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84dec36:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dec3a:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84dec41:	00 
 84dec42:	89 1c 24             	mov    %ebx,(%esp)
 84dec45:	e8 b6 7b 1a 00       	call   8686800 <_ZN15cUserHistoryLog24GuildCargoMoveItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiii>
 84dec4a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dec4d:	89 04 24             	mov    %eax,(%esp)
 84dec50:	e8 f7 f0 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dec55:	c7 44 24 08 fd 00 00 	movl   $0xfd,0x8(%esp)
 84dec5c:	00 
 84dec5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dec64:	00 
 84dec65:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dec68:	89 04 24             	mov    %eax,(%esp)
 84dec6b:	e8 8c cc be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dec70:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dec73:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84dec77:	3c c1                	cmp    $0xc1,%al
 84dec79:	74 2e                	je     84deca9 <_ZN24Inter_GuildCargoMoveItem12dispatch_sigEP5CUserPci+0xf5>
 84dec7b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dec82:	00 
 84dec83:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dec86:	89 04 24             	mov    %eax,(%esp)
 84dec89:	e8 92 cc be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dec8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dec91:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84dec95:	0f b6 c0             	movzbl %al,%eax
 84dec98:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dec9c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dec9f:	89 04 24             	mov    %eax,(%esp)
 84deca2:	e8 79 cc be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84deca7:	eb 13                	jmp    84decbc <_ZN24Inter_GuildCargoMoveItem12dispatch_sigEP5CUserPci+0x108>
 84deca9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84decb0:	00 
 84decb1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84decb4:	89 04 24             	mov    %eax,(%esp)
 84decb7:	e8 64 cc be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84decbc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84decbf:	8b 40 13             	mov    0x13(%eax),%eax
 84decc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84decc6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84decc9:	89 04 24             	mov    %eax,(%esp)
 84deccc:	e8 d3 b1 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84decd1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84decd4:	8b 40 17             	mov    0x17(%eax),%eax
 84decd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84decdb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84decde:	89 04 24             	mov    %eax,(%esp)
 84dece1:	e8 be b1 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84dece6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84deced:	00 
 84decee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84decf1:	89 04 24             	mov    %eax,(%esp)
 84decf4:	e8 5f cc be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84decf9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84decfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ded00:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ded03:	89 04 24             	mov    %eax,(%esp)
 84ded06:	e8 af 98 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ded0b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ded10:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ded13:	89 04 24             	mov    %eax,(%esp)
 84ded16:	e8 65 f1 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ded1b:	eb 1b                	jmp    84ded38 <_ZN24Inter_GuildCargoMoveItem12dispatch_sigEP5CUserPci+0x184>
 84ded1d:	89 d3                	mov    %edx,%ebx
 84ded1f:	89 c6                	mov    %eax,%esi
 84ded21:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ded24:	89 04 24             	mov    %eax,(%esp)
 84ded27:	e8 54 f1 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ded2c:	89 f0                	mov    %esi,%eax
 84ded2e:	89 da                	mov    %ebx,%edx
 84ded30:	89 04 24             	mov    %eax,(%esp)
 84ded33:	e8 18 4a 60 00       	call   8ae3750 <_Unwind_Resume>
 84ded38:	89 d8                	mov    %ebx,%eax
 84ded3a:	83 c4 30             	add    $0x30,%esp
 84ded3d:	5b                   	pop    %ebx
 84ded3e:	5e                   	pop    %esi
 84ded3f:	5d                   	pop    %ebp
 84ded40:	c3                   	ret
 84ded41:	90                   	nop

```

```c
// Inter_GuildCargoMoveItem::dispatch_sig @ 0x84debb4

/* Inter_GuildCargoMoveItem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoMoveItem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUser::get_charac_no((CUser *)param_2,-1), iVar1 == *(int *)(local_10 + 0xe))) {
    cUserHistoryLog::GuildCargoMoveItemResult
              ((cUserHistoryLog *)(param_2 + 0x79700),0xe,*(undefined1 *)(local_10 + 0x12),
               *(undefined4 *)(local_10 + 0x13),*(undefined4 *)(local_10 + 0x17));
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dec6b to 084ded0a has its CatchHandler @ 084ded1d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xfd);
    if (*(char *)(local_10 + 0x12) == -0x3f) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x13));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x17));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

