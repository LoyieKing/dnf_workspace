# Dispatcher_OpenGuildCreateWindow

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08208a26 Dispatcher_OpenGuildCreateWindow::dispatch_sig  [0x08208a26-0x8208a9d] ===
 8208a26:	55                   	push   %ebp
 8208a27:	89 e5                	mov    %esp,%ebp
 8208a29:	83 ec 18             	sub    $0x18,%esp
 8208a2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208a2f:	89 04 24             	mov    %eax,(%esp)
 8208a32:	e8 55 19 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8208a37:	83 f8 02             	cmp    $0x2,%eax
 8208a3a:	7e 0f                	jle    8208a4b <_ZN32Dispatcher_OpenGuildCreateWindow12dispatch_sigEP5CUserR9PacketBuf+0x25>
 8208a3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208a3f:	89 04 24             	mov    %eax,(%esp)
 8208a42:	e8 eb 79 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8208a47:	85 c0                	test   %eax,%eax
 8208a49:	75 07                	jne    8208a52 <_ZN32Dispatcher_OpenGuildCreateWindow12dispatch_sigEP5CUserR9PacketBuf+0x2c>
 8208a4b:	b8 01 00 00 00       	mov    $0x1,%eax
 8208a50:	eb 05                	jmp    8208a57 <_ZN32Dispatcher_OpenGuildCreateWindow12dispatch_sigEP5CUserR9PacketBuf+0x31>
 8208a52:	b8 00 00 00 00       	mov    $0x0,%eax
 8208a57:	84 c0                	test   %al,%al
 8208a59:	74 26                	je     8208a81 <_ZN32Dispatcher_OpenGuildCreateWindow12dispatch_sigEP5CUserR9PacketBuf+0x5b>
 8208a5b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208a62:	00 
 8208a63:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208a6a:	00 
 8208a6b:	c7 44 24 04 40 e6 bc 	movl   $0x8bce640,0x4(%esp)
 8208a72:	08 
 8208a73:	c7 04 24 e3 a3 00 00 	movl   $0xa3e3,(%esp)
 8208a7a:	e8 58 7e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208a7f:	eb 1b                	jmp    8208a9c <_ZN32Dispatcher_OpenGuildCreateWindow12dispatch_sigEP5CUserR9PacketBuf+0x76>
 8208a81:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208a84:	89 04 24             	mov    %eax,(%esp)
 8208a87:	e8 02 6a 02 00       	call   822f48e <_ZN15CUserCharacInfo20resetGuildCreateFlagEv>
 8208a8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208a8f:	89 04 24             	mov    %eax,(%esp)
 8208a92:	e8 15 6a 02 00       	call   822f4ac <_ZN15CUserCharacInfo22resetTempGuildNameAddrEv>
 8208a97:	b8 00 00 00 00       	mov    $0x0,%eax
 8208a9c:	c9                   	leave
 8208a9d:	c3                   	ret

```

```c
// Dispatcher_OpenGuildCreateWindow::dispatch_sig @ 0x8208a26

/* Dispatcher_OpenGuildCreateWindow::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_OpenGuildCreateWindow::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_08208a57;
    }
  }
  bVar1 = true;
LAB_08208a57:
  if (bVar1) {
    uVar3 = LineFunc(0xa3e3,
                     "virtual int Dispatcher_OpenGuildCreateWindow::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    CUserCharacInfo::resetGuildCreateFlag((CUserCharacInfo *)param_2);
    CUserCharacInfo::resetTempGuildNameAddr((CUserCharacInfo *)param_2);
    uVar3 = 0;
  }
  return uVar3;
}

```

