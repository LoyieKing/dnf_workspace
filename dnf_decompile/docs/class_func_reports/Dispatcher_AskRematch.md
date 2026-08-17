# Dispatcher_AskRematch

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08227862 Dispatcher_AskRematch::dispatch_sig  [0x08227862-0x822793b] ===
 8227862:	55                   	push   %ebp
 8227863:	89 e5                	mov    %esp,%ebp
 8227865:	83 ec 28             	sub    $0x28,%esp
 8227868:	8b 45 0c             	mov    0xc(%ebp),%eax
 822786b:	89 04 24             	mov    %eax,(%esp)
 822786e:	e8 19 2b eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8227873:	83 f8 02             	cmp    $0x2,%eax
 8227876:	7e 0f                	jle    8227887 <_ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf+0x25>
 8227878:	8b 45 0c             	mov    0xc(%ebp),%eax
 822787b:	89 04 24             	mov    %eax,(%esp)
 822787e:	e8 af 8b ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8227883:	85 c0                	test   %eax,%eax
 8227885:	75 07                	jne    822788e <_ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf+0x2c>
 8227887:	b8 01 00 00 00       	mov    $0x1,%eax
 822788c:	eb 05                	jmp    8227893 <_ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf+0x31>
 822788e:	b8 00 00 00 00       	mov    $0x0,%eax
 8227893:	84 c0                	test   %al,%al
 8227895:	74 0a                	je     82278a1 <_ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf+0x3f>
 8227897:	b8 00 00 00 00       	mov    $0x0,%eax
 822789c:	e9 99 00 00 00       	jmp    822793a <_ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf+0xd8>
 82278a1:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 82278a5:	8d 45 f3             	lea    -0xd(%ebp),%eax
 82278a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82278ac:	8b 45 10             	mov    0x10(%ebp),%eax
 82278af:	89 04 24             	mov    %eax,(%esp)
 82278b2:	e8 6b 56 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82278b7:	83 f0 01             	xor    $0x1,%eax
 82278ba:	84 c0                	test   %al,%al
 82278bc:	74 26                	je     82278e4 <_ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf+0x82>
 82278be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82278c5:	00 
 82278c6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82278cd:	00 
 82278ce:	c7 44 24 04 a0 c1 bc 	movl   $0x8bcc1a0,0x4(%esp)
 82278d5:	08 
 82278d6:	c7 04 24 af e3 00 00 	movl   $0xe3af,(%esp)
 82278dd:	e8 f5 8f 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82278e2:	eb 56                	jmp    822793a <_ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf+0xd8>
 82278e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82278e7:	89 04 24             	mov    %eax,(%esp)
 82278ea:	e8 9f d8 42 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 82278ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82278f2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82278f6:	74 3d                	je     8227935 <_ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf+0xd3>
 82278f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82278fb:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8227901:	85 c0                	test   %eax,%eax
 8227903:	74 30                	je     8227935 <_ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf+0xd3>
 8227905:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8227908:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 822790e:	8b 00                	mov    (%eax),%eax
 8227910:	83 c0 68             	add    $0x68,%eax
 8227913:	8b 08                	mov    (%eax),%ecx
 8227915:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8227919:	0f be d0             	movsbl %al,%edx
 822791c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 822791f:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8227925:	89 54 24 08          	mov    %edx,0x8(%esp)
 8227929:	8b 55 0c             	mov    0xc(%ebp),%edx
 822792c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8227930:	89 04 24             	mov    %eax,(%esp)
 8227933:	ff d1                	call   *%ecx
 8227935:	b8 00 00 00 00       	mov    $0x0,%eax
 822793a:	c9                   	leave
 822793b:	c3                   	ret

```

```c
// Dispatcher_AskRematch::dispatch_sig @ 0x8227862

/* Dispatcher_AskRematch::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AskRematch::dispatch_sig(Dispatcher_AskRematch *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char local_11;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08227893;
    }
  }
  bVar1 = true;
LAB_08227893:
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    local_11 = '\0';
    cVar2 = PacketBuf::get_byte(param_2,&local_11);
    if (cVar2 == '\x01') {
      local_10 = CUser::GetPVPRoom(param_1);
      if ((local_10 != 0) && (*(int *)(local_10 + 0x6e4) != 0)) {
        (**(code **)(**(int **)(local_10 + 0x6e4) + 0x68))
                  (*(undefined4 *)(local_10 + 0x6e4),param_1,(int)local_11);
      }
      uVar4 = 0;
    }
    else {
      uVar4 = LineFunc(0xe3af,"virtual int Dispatcher_AskRematch::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar4;
}

```

