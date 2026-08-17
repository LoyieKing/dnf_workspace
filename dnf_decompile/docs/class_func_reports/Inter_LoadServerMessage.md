# Inter_LoadServerMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084daeee Inter_LoadServerMessage::dispatch_sig  [0x084daeee-0x84daf2f] ===
 84daeee:	55                   	push   %ebp
 84daeef:	89 e5                	mov    %esp,%ebp
 84daef1:	83 ec 28             	sub    $0x28,%esp
 84daef4:	8b 45 10             	mov    0x10(%ebp),%eax
 84daef7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84daefa:	e8 8f 12 bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84daeff:	89 04 24             	mov    %eax,(%esp)
 84daf02:	e8 e5 df db ff       	call   8298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>
 84daf07:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84daf0a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84daf0e:	75 07                	jne    84daf17 <_ZN23Inter_LoadServerMessage12dispatch_sigEP5CUserPci+0x29>
 84daf10:	b8 00 00 00 00       	mov    $0x0,%eax
 84daf15:	eb 17                	jmp    84daf2e <_ZN23Inter_LoadServerMessage12dispatch_sigEP5CUserPci+0x40>
 84daf17:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84daf1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84daf1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84daf21:	89 04 24             	mov    %eax,(%esp)
 84daf24:	e8 51 5c 12 00       	call   8600b7a <_ZN27CSharedServerMessageManager16SetServerMessageEP24SIG_EVENT_SERVER_MESSAGE>
 84daf29:	b8 00 00 00 00       	mov    $0x0,%eax
 84daf2e:	c9                   	leave
 84daf2f:	c3                   	ret

```

```c
// Inter_LoadServerMessage::dispatch_sig @ 0x84daeee

/* Inter_LoadServerMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadServerMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CGameManager *this;
  CSharedServerMessageManager *this_00;
  
  this = (CGameManager *)G_CGameManager();
  this_00 = (CSharedServerMessageManager *)CGameManager::GetSharedServerMessageManager(this);
  if (this_00 != (CSharedServerMessageManager *)0x0) {
    CSharedServerMessageManager::SetServerMessage(this_00,(SIG_EVENT_SERVER_MESSAGE *)param_3);
  }
  return 0;
}

```

