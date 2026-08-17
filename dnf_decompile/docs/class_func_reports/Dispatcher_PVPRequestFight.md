# Dispatcher_PVPRequestFight

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820464e Dispatcher_PVPRequestFight::dispatch_sig  [0x0820464e-0x820470f] ===
 820464e:	55                   	push   %ebp
 820464f:	89 e5                	mov    %esp,%ebp
 8204651:	83 ec 28             	sub    $0x28,%esp
 8204654:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204657:	89 04 24             	mov    %eax,(%esp)
 820465a:	e8 2d 5d ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820465f:	83 f8 07             	cmp    $0x7,%eax
 8204662:	0f 95 c0             	setne  %al
 8204665:	84 c0                	test   %al,%al
 8204667:	74 26                	je     820468f <_ZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBuf+0x41>
 8204669:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204670:	00 
 8204671:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204678:	00 
 8204679:	c7 44 24 04 00 f0 bc 	movl   $0x8bcf000,0x4(%esp)
 8204680:	08 
 8204681:	c7 04 24 25 9c 00 00 	movl   $0x9c25,(%esp)
 8204688:	e8 4a c2 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820468d:	eb 7e                	jmp    820470d <_ZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBuf+0xbf>
 820468f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204692:	89 04 24             	mov    %eax,(%esp)
 8204695:	e8 f4 0a 45 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 820469a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820469d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82046a1:	75 26                	jne    82046c9 <_ZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBuf+0x7b>
 82046a3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82046aa:	00 
 82046ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82046b2:	00 
 82046b3:	c7 44 24 04 00 f0 bc 	movl   $0x8bcf000,0x4(%esp)
 82046ba:	08 
 82046bb:	c7 04 24 2b 9c 00 00 	movl   $0x9c2b,(%esp)
 82046c2:	e8 10 c2 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82046c7:	eb 44                	jmp    820470d <_ZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBuf+0xbf>
 82046c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82046cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 82046d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82046d3:	89 04 24             	mov    %eax,(%esp)
 82046d6:	e8 e3 98 3d 00       	call   85ddfbe <_ZN8PvP_Room13request_fightEP5CUser>
 82046db:	83 f0 01             	xor    $0x1,%eax
 82046de:	84 c0                	test   %al,%al
 82046e0:	74 26                	je     8204708 <_ZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBuf+0xba>
 82046e2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82046e9:	00 
 82046ea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82046f1:	00 
 82046f2:	c7 44 24 04 00 f0 bc 	movl   $0x8bcf000,0x4(%esp)
 82046f9:	08 
 82046fa:	c7 04 24 30 9c 00 00 	movl   $0x9c30,(%esp)
 8204701:	e8 d1 c1 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204706:	eb 05                	jmp    820470d <_ZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBuf+0xbf>
 8204708:	b8 00 00 00 00       	mov    $0x0,%eax
 820470d:	c9                   	leave
 820470e:	c3                   	ret
 820470f:	90                   	nop

```

```c
// Dispatcher_PVPRequestFight::dispatch_sig @ 0x820464e

/* Dispatcher_PVPRequestFight::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_PVPRequestFight::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PvP_Room *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 7) {
    this = (PvP_Room *)CUser::GetPVPRoom((CUser *)param_2);
    if (this == (PvP_Room *)0x0) {
      uVar3 = LineFunc(0x9c2b,
                       "virtual int Dispatcher_PVPRequestFight::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
    else {
      cVar1 = PvP_Room::request_fight(this,(CUser *)param_2);
      if (cVar1 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0x9c30,
                         "virtual int Dispatcher_PVPRequestFight::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
  }
  else {
    uVar3 = LineFunc(0x9c25,
                     "virtual int Dispatcher_PVPRequestFight::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  return uVar3;
}

```

