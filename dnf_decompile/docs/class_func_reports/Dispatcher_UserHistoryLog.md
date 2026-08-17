# Dispatcher_UserHistoryLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081da6c0 Dispatcher_UserHistoryLog::process  [0x081da6c0-0x81da6fd] ===
 81da6c0:	55                   	push   %ebp
 81da6c1:	89 e5                	mov    %esp,%ebp
 81da6c3:	83 ec 28             	sub    $0x28,%esp
 81da6c6:	8b 45 10             	mov    0x10(%ebp),%eax
 81da6c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81da6cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da6cf:	8d 50 14             	lea    0x14(%eax),%edx
 81da6d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da6d5:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da6d9:	0f b6 c0             	movzbl %al,%eax
 81da6dc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81da6e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81da6e4:	c7 44 24 04 da 19 bc 	movl   $0x8bc19da,0x4(%esp)
 81da6eb:	08 
 81da6ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da6ef:	89 04 24             	mov    %eax,(%esp)
 81da6f2:	e8 07 22 4a 00       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 81da6f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81da6fc:	c9                   	leave
 81da6fd:	c3                   	ret

```

```c
// Dispatcher_UserHistoryLog::process @ 0x81da6c0

/* Dispatcher_UserHistoryLog::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_UserHistoryLog::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  CUser::LogHistory((CUser *)param_2,"act,%d,%s",(uint)(byte)param_3[0xd],param_3 + 0x14);
  return 0;
}

```

---

## read

```asm
// === 081da5d2 Dispatcher_UserHistoryLog::read  [0x081da5d2-0x81da6bf] ===
 81da5d2:	55                   	push   %ebp
 81da5d3:	89 e5                	mov    %esp,%ebp
 81da5d5:	83 ec 28             	sub    $0x28,%esp
 81da5d8:	8b 45 10             	mov    0x10(%ebp),%eax
 81da5db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81da5de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da5e1:	83 c0 0d             	add    $0xd,%eax
 81da5e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da5e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da5eb:	89 04 24             	mov    %eax,(%esp)
 81da5ee:	e8 7d 29 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81da5f3:	83 f0 01             	xor    $0x1,%eax
 81da5f6:	84 c0                	test   %al,%al
 81da5f8:	74 29                	je     81da623 <_ZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASE+0x51>
 81da5fa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81da601:	00 
 81da602:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da609:	00 
 81da60a:	c7 44 24 04 a0 23 bd 	movl   $0x8bd23a0,0x4(%esp)
 81da611:	08 
 81da612:	c7 04 24 a9 48 00 00 	movl   $0x48a9,(%esp)
 81da619:	e8 b9 62 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da61e:	e9 9b 00 00 00       	jmp    81da6be <_ZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASE+0xec>
 81da623:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da626:	83 c0 10             	add    $0x10,%eax
 81da629:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da62d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da630:	89 04 24             	mov    %eax,(%esp)
 81da633:	e8 b8 2a 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81da638:	83 f0 01             	xor    $0x1,%eax
 81da63b:	84 c0                	test   %al,%al
 81da63d:	74 26                	je     81da665 <_ZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASE+0x93>
 81da63f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81da646:	00 
 81da647:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da64e:	00 
 81da64f:	c7 44 24 04 a0 23 bd 	movl   $0x8bd23a0,0x4(%esp)
 81da656:	08 
 81da657:	c7 04 24 ac 48 00 00 	movl   $0x48ac,(%esp)
 81da65e:	e8 74 62 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da663:	eb 59                	jmp    81da6be <_ZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASE+0xec>
 81da665:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da668:	8b 40 10             	mov    0x10(%eax),%eax
 81da66b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81da66e:	83 c2 14             	add    $0x14,%edx
 81da671:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81da675:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 81da67c:	00 
 81da67d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81da681:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da684:	89 04 24             	mov    %eax,(%esp)
 81da687:	e8 30 2c 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81da68c:	83 f0 01             	xor    $0x1,%eax
 81da68f:	84 c0                	test   %al,%al
 81da691:	74 26                	je     81da6b9 <_ZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASE+0xe7>
 81da693:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81da69a:	00 
 81da69b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da6a2:	00 
 81da6a3:	c7 44 24 04 a0 23 bd 	movl   $0x8bd23a0,0x4(%esp)
 81da6aa:	08 
 81da6ab:	c7 04 24 af 48 00 00 	movl   $0x48af,(%esp)
 81da6b2:	e8 20 62 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da6b7:	eb 05                	jmp    81da6be <_ZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASE+0xec>
 81da6b9:	b8 00 00 00 00       	mov    $0x0,%eax
 81da6be:	c9                   	leave
 81da6bf:	c3                   	ret

```

```c
// Dispatcher_UserHistoryLog::read @ 0x81da5d2

/* Dispatcher_UserHistoryLog::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UserHistoryLog::read
          (Dispatcher_UserHistoryLog *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x14),0x100,*(int *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x48af,"virtual int Dispatcher_UserHistoryLog::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x48ac,"virtual int Dispatcher_UserHistoryLog::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x48a9,"virtual int Dispatcher_UserHistoryLog::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}

```

