# Dispatcher_Security_PI_HashModulation_C2C

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08227256 Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig  [0x08227256-0x82272cd] ===
 8227256:	55                   	push   %ebp
 8227257:	89 e5                	mov    %esp,%ebp
 8227259:	83 ec 18             	sub    $0x18,%esp
 822725c:	8b 45 10             	mov    0x10(%ebp),%eax
 822725f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227263:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227266:	89 04 24             	mov    %eax,(%esp)
 8227269:	e8 22 e0 04 00       	call   8275290 <_Z44_NS_PI_2ND_RecvPacketIntegrityModulation_C2CP5CUserR9PacketBuf>
 822726e:	83 f8 01             	cmp    $0x1,%eax
 8227271:	74 07                	je     822727a <_ZN41Dispatcher_Security_PI_HashModulation_C2C12dispatch_sigEP5CUserR9PacketBuf+0x24>
 8227273:	83 f8 02             	cmp    $0x2,%eax
 8227276:	74 28                	je     82272a0 <_ZN41Dispatcher_Security_PI_HashModulation_C2C12dispatch_sigEP5CUserR9PacketBuf+0x4a>
 8227278:	eb 4c                	jmp    82272c6 <_ZN41Dispatcher_Security_PI_HashModulation_C2C12dispatch_sigEP5CUserR9PacketBuf+0x70>
 822727a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8227281:	00 
 8227282:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8227289:	00 
 822728a:	c7 44 24 04 60 c2 bc 	movl   $0x8bcc260,0x4(%esp)
 8227291:	08 
 8227292:	c7 04 24 2f e3 00 00 	movl   $0xe32f,(%esp)
 8227299:	e8 39 96 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822729e:	eb 2b                	jmp    82272cb <_ZN41Dispatcher_Security_PI_HashModulation_C2C12dispatch_sigEP5CUserR9PacketBuf+0x75>
 82272a0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82272a7:	00 
 82272a8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82272af:	00 
 82272b0:	c7 44 24 04 60 c2 bc 	movl   $0x8bcc260,0x4(%esp)
 82272b7:	08 
 82272b8:	c7 04 24 31 e3 00 00 	movl   $0xe331,(%esp)
 82272bf:	e8 13 96 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82272c4:	eb 05                	jmp    82272cb <_ZN41Dispatcher_Security_PI_HashModulation_C2C12dispatch_sigEP5CUserR9PacketBuf+0x75>
 82272c6:	b8 00 00 00 00       	mov    $0x0,%eax
 82272cb:	c9                   	leave
 82272cc:	c3                   	ret
 82272cd:	90                   	nop

```

```c
// Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig @ 0x8227256

/* Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig
          (Dispatcher_Security_PI_HashModulation_C2C *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_PI_2ND_RecvPacketIntegrityModulation_C2C(param_1,param_2);
  if (iVar1 == 1) {
    uVar2 = LineFunc(0xe32f,
                     "virtual int Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 2) {
    uVar2 = LineFunc(0xe331,
                     "virtual int Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

