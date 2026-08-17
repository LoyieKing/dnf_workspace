# Inter_EmergencyPatchMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e7b84 Inter_EmergencyPatchMessage::dispatch_sig  [0x084e7b84-0x84e7bfd] ===
 84e7b84:	55                   	push   %ebp
 84e7b85:	89 e5                	mov    %esp,%ebp
 84e7b87:	56                   	push   %esi
 84e7b88:	53                   	push   %ebx
 84e7b89:	83 ec 20             	sub    $0x20,%esp
 84e7b8c:	8b 45 10             	mov    0x10(%ebp),%eax
 84e7b8f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e7b92:	e8 21 e6 c0 ff       	call   80f61b8 <_Z30GameserverDemonManagerInstancev>
 84e7b97:	89 04 24             	mov    %eax,(%esp)
 84e7b9a:	e8 65 58 00 00       	call   84ed404 <_ZN22GameServerDemonManager22IsProhibitConnectStateEv>
 84e7b9f:	84 c0                	test   %al,%al
 84e7ba1:	74 07                	je     84e7baa <_ZN27Inter_EmergencyPatchMessage12dispatch_sigEP5CUserPci+0x26>
 84e7ba3:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7ba8:	eb 4c                	jmp    84e7bf6 <_ZN27Inter_EmergencyPatchMessage12dispatch_sigEP5CUserPci+0x72>
 84e7baa:	e8 09 e6 c0 ff       	call   80f61b8 <_Z30GameserverDemonManagerInstancev>
 84e7baf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e7bb6:	00 
 84e7bb7:	89 04 24             	mov    %eax,(%esp)
 84e7bba:	e8 63 e6 c0 ff       	call   80f6222 <_ZN22GameServerDemonManager19SetUserProhibitFlagEb>
 84e7bbf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7bc2:	8d 70 0b             	lea    0xb(%eax),%esi
 84e7bc5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7bc8:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84e7bcc:	0f b6 d8             	movzbl %al,%ebx
 84e7bcf:	e8 e4 e5 c0 ff       	call   80f61b8 <_Z30GameserverDemonManagerInstancev>
 84e7bd4:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e7bd8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e7bdc:	89 04 24             	mov    %eax,(%esp)
 84e7bdf:	e8 9c e6 c0 ff       	call   80f6280 <_ZN22GameServerDemonManager16SetNoticeMessageEhPc>
 84e7be4:	e8 cf e5 c0 ff       	call   80f61b8 <_Z30GameserverDemonManagerInstancev>
 84e7be9:	89 04 24             	mov    %eax,(%esp)
 84e7bec:	e8 49 e6 c0 ff       	call   80f623a <_ZN22GameServerDemonManager26Notice10MinShutDownMessageEv>
 84e7bf1:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7bf6:	83 c4 20             	add    $0x20,%esp
 84e7bf9:	5b                   	pop    %ebx
 84e7bfa:	5e                   	pop    %esi
 84e7bfb:	5d                   	pop    %ebp
 84e7bfc:	c3                   	ret
 84e7bfd:	90                   	nop

```

```c
// Inter_EmergencyPatchMessage::dispatch_sig @ 0x84e7b84

/* Inter_EmergencyPatchMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_EmergencyPatchMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uchar uVar1;
  char cVar2;
  GameServerDemonManager *pGVar3;
  
  pGVar3 = (GameServerDemonManager *)GameserverDemonManagerInstance();
  cVar2 = GameServerDemonManager::IsProhibitConnectState(pGVar3);
  if (cVar2 == '\0') {
    pGVar3 = (GameServerDemonManager *)GameserverDemonManagerInstance();
    GameServerDemonManager::SetUserProhibitFlag(pGVar3,true);
    uVar1 = *(uchar *)(param_3 + 10);
    pGVar3 = (GameServerDemonManager *)GameserverDemonManagerInstance();
    GameServerDemonManager::SetNoticeMessage(pGVar3,uVar1,(char *)(param_3 + 0xb));
    GameserverDemonManagerInstance();
    GameServerDemonManager::Notice10MinShutDownMessage();
  }
  return 0;
}

```

