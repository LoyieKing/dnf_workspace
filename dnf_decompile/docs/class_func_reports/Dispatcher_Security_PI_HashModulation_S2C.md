# Dispatcher_Security_PI_HashModulation_S2C

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082271b6 Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig  [0x082271b6-0x8227255] ===
 82271b6:	55                   	push   %ebp
 82271b7:	89 e5                	mov    %esp,%ebp
 82271b9:	83 ec 18             	sub    $0x18,%esp
 82271bc:	8b 45 10             	mov    0x10(%ebp),%eax
 82271bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82271c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82271c6:	89 04 24             	mov    %eax,(%esp)
 82271c9:	e8 72 df 04 00       	call   8275140 <_Z44_NS_PI_2ND_RecvPacketIntegrityModulation_S2CP5CUserR9PacketBuf>
 82271ce:	83 f8 02             	cmp    $0x2,%eax
 82271d1:	74 30                	je     8227203 <_ZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBuf+0x4d>
 82271d3:	83 f8 03             	cmp    $0x3,%eax
 82271d6:	74 51                	je     8227229 <_ZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBuf+0x73>
 82271d8:	83 f8 01             	cmp    $0x1,%eax
 82271db:	75 72                	jne    822724f <_ZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBuf+0x99>
 82271dd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82271e4:	00 
 82271e5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82271ec:	00 
 82271ed:	c7 44 24 04 c0 c2 bc 	movl   $0x8bcc2c0,0x4(%esp)
 82271f4:	08 
 82271f5:	c7 04 24 1e e3 00 00 	movl   $0xe31e,(%esp)
 82271fc:	e8 d6 96 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8227201:	eb 51                	jmp    8227254 <_ZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 8227203:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822720a:	00 
 822720b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8227212:	00 
 8227213:	c7 44 24 04 c0 c2 bc 	movl   $0x8bcc2c0,0x4(%esp)
 822721a:	08 
 822721b:	c7 04 24 20 e3 00 00 	movl   $0xe320,(%esp)
 8227222:	e8 b0 96 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8227227:	eb 2b                	jmp    8227254 <_ZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 8227229:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8227230:	00 
 8227231:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8227238:	00 
 8227239:	c7 44 24 04 c0 c2 bc 	movl   $0x8bcc2c0,0x4(%esp)
 8227240:	08 
 8227241:	c7 04 24 22 e3 00 00 	movl   $0xe322,(%esp)
 8227248:	e8 8a 96 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822724d:	eb 05                	jmp    8227254 <_ZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 822724f:	b8 00 00 00 00       	mov    $0x0,%eax
 8227254:	c9                   	leave
 8227255:	c3                   	ret

```

```c
// Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig @ 0x82271b6

/* Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig
          (Dispatcher_Security_PI_HashModulation_S2C *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_PI_2ND_RecvPacketIntegrityModulation_S2C(param_1,param_2);
  if (iVar1 == 2) {
    uVar2 = LineFunc(0xe320,
                     "virtual int Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 3) {
    uVar2 = LineFunc(0xe322,
                     "virtual int Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 1) {
    uVar2 = LineFunc(0xe31e,
                     "virtual int Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

