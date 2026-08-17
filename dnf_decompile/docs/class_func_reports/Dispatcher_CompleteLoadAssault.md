# Dispatcher_CompleteLoadAssault

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08206f10 Dispatcher_CompleteLoadAssault::dispatch_sig  [0x08206f10-0x8206fe9] ===
 8206f10:	55                   	push   %ebp
 8206f11:	89 e5                	mov    %esp,%ebp
 8206f13:	83 ec 28             	sub    $0x28,%esp
 8206f16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206f19:	89 04 24             	mov    %eax,(%esp)
 8206f1c:	e8 6b 34 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8206f21:	83 f8 01             	cmp    $0x1,%eax
 8206f24:	0f 9e c0             	setle  %al
 8206f27:	84 c0                	test   %al,%al
 8206f29:	74 29                	je     8206f54 <_ZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBuf+0x44>
 8206f2b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206f32:	00 
 8206f33:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206f3a:	00 
 8206f3b:	c7 44 24 04 c0 ea bc 	movl   $0x8bceac0,0x4(%esp)
 8206f42:	08 
 8206f43:	c7 04 24 99 a1 00 00 	movl   $0xa199,(%esp)
 8206f4a:	e8 88 99 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206f4f:	e9 93 00 00 00       	jmp    8206fe7 <_ZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBuf+0xd7>
 8206f54:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206f57:	89 04 24             	mov    %eax,(%esp)
 8206f5a:	e8 2f e2 44 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 8206f5f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8206f62:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8206f66:	74 39                	je     8206fa1 <_ZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBuf+0x91>
 8206f68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8206f6b:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8206f71:	85 c0                	test   %eax,%eax
 8206f73:	74 2c                	je     8206fa1 <_ZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBuf+0x91>
 8206f75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8206f78:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8206f7e:	8b 00                	mov    (%eax),%eax
 8206f80:	83 c0 54             	add    $0x54,%eax
 8206f83:	8b 08                	mov    (%eax),%ecx
 8206f85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8206f88:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8206f8e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8206f91:	89 54 24 04          	mov    %edx,0x4(%esp)
 8206f95:	89 04 24             	mov    %eax,(%esp)
 8206f98:	ff d1                	call   *%ecx
 8206f9a:	b8 00 00 00 00       	mov    $0x0,%eax
 8206f9f:	eb 46                	jmp    8206fe7 <_ZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBuf+0xd7>
 8206fa1:	e8 fa e0 02 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 8206fa6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8206fa9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8206fad:	89 04 24             	mov    %eax,(%esp)
 8206fb0:	e8 2d 82 0e 00       	call   82ef1e2 <_ZN11pvp_assault11CAssaultMgr14OnCompleteLoadEP5CUser>
 8206fb5:	83 f0 01             	xor    $0x1,%eax
 8206fb8:	84 c0                	test   %al,%al
 8206fba:	74 26                	je     8206fe2 <_ZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBuf+0xd2>
 8206fbc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206fc3:	00 
 8206fc4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206fcb:	00 
 8206fcc:	c7 44 24 04 c0 ea bc 	movl   $0x8bceac0,0x4(%esp)
 8206fd3:	08 
 8206fd4:	c7 04 24 a8 a1 00 00 	movl   $0xa1a8,(%esp)
 8206fdb:	e8 f7 98 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206fe0:	eb 05                	jmp    8206fe7 <_ZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBuf+0xd7>
 8206fe2:	b8 00 00 00 00       	mov    $0x0,%eax
 8206fe7:	c9                   	leave
 8206fe8:	c3                   	ret
 8206fe9:	90                   	nop

```

```c
// Dispatcher_CompleteLoadAssault::dispatch_sig @ 0x8206f10

/* Dispatcher_CompleteLoadAssault::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CompleteLoadAssault::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CAssaultMgr *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa199,
                     "virtual int Dispatcher_CompleteLoadAssault::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    iVar2 = CUser::GetPVPRoom((CUser *)param_2);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x6e4) == 0)) {
      this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      cVar1 = pvp_assault::CAssaultMgr::OnCompleteLoad(this,(CUser *)param_2);
      if (cVar1 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xa1a8,
                         "virtual int Dispatcher_CompleteLoadAssault::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      (**(code **)(**(int **)(iVar2 + 0x6e4) + 0x54))(*(undefined4 *)(iVar2 + 0x6e4),param_2);
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

