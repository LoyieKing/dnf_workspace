# Dispatcher_PvPBuddyConnList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08224e08 Dispatcher_PvPBuddyConnList::dispatch_sig  [0x08224e08-0x8224e63] ===
 8224e08:	55                   	push   %ebp
 8224e09:	89 e5                	mov    %esp,%ebp
 8224e0b:	53                   	push   %ebx
 8224e0c:	83 ec 14             	sub    $0x14,%esp
 8224e0f:	e8 93 55 eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 8224e14:	89 04 24             	mov    %eax,(%esp)
 8224e17:	e8 02 c5 ec ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 8224e1c:	83 f0 01             	xor    $0x1,%eax
 8224e1f:	84 c0                	test   %al,%al
 8224e21:	74 07                	je     8224e2a <_ZN27Dispatcher_PvPBuddyConnList12dispatch_sigEP5CUserR9PacketBuf+0x22>
 8224e23:	b8 00 00 00 00       	mov    $0x0,%eax
 8224e28:	eb 33                	jmp    8224e5d <_ZN27Dispatcher_PvPBuddyConnList12dispatch_sigEP5CUserR9PacketBuf+0x55>
 8224e2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224e2d:	89 04 24             	mov    %eax,(%esp)
 8224e30:	e8 19 6e ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8224e35:	89 c3                	mov    %eax,%ebx
 8224e37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224e3a:	89 04 24             	mov    %eax,(%esp)
 8224e3d:	e8 2c 55 eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8224e42:	8b 15 44 be 40 09    	mov    0x940be44,%edx
 8224e48:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8224e4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224e50:	89 14 24             	mov    %edx,(%esp)
 8224e53:	e8 28 7d 24 00       	call   846cb80 <_ZN21CCommunityServerProxy16SendPvPBuddyListEjj>
 8224e58:	b8 00 00 00 00       	mov    $0x0,%eax
 8224e5d:	83 c4 14             	add    $0x14,%esp
 8224e60:	5b                   	pop    %ebx
 8224e61:	5d                   	pop    %ebp
 8224e62:	c3                   	ret
 8224e63:	90                   	nop

```

```c
// Dispatcher_PvPBuddyConnList::dispatch_sig @ 0x8224e08

/* Dispatcher_PvPBuddyConnList::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_PvPBuddyConnList::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  GameWorld *this;
  uint uVar2;
  uint uVar3;
  
  this = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    CCommunityServerProxy::SendPvPBuddyList(GlobalData::s_community_proxy,uVar3,uVar2);
  }
  return 0;
}

```

