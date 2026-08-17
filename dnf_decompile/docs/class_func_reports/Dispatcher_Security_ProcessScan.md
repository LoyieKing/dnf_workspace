# Dispatcher_Security_ProcessScan

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08223cf6 Dispatcher_Security_ProcessScan::dispatch_sig  [0x08223cf6-0x8223d95] ===
 8223cf6:	55                   	push   %ebp
 8223cf7:	89 e5                	mov    %esp,%ebp
 8223cf9:	83 ec 18             	sub    $0x18,%esp
 8223cfc:	8b 45 10             	mov    0x10(%ebp),%eax
 8223cff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223d03:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223d06:	89 04 24             	mov    %eax,(%esp)
 8223d09:	e8 15 08 05 00       	call   8274523 <_Z15_NS_ProcessScanP5CUserR9PacketBuf>
 8223d0e:	83 f8 02             	cmp    $0x2,%eax
 8223d11:	74 30                	je     8223d43 <_ZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBuf+0x4d>
 8223d13:	83 f8 03             	cmp    $0x3,%eax
 8223d16:	74 51                	je     8223d69 <_ZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBuf+0x73>
 8223d18:	83 f8 01             	cmp    $0x1,%eax
 8223d1b:	75 72                	jne    8223d8f <_ZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBuf+0x99>
 8223d1d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223d24:	00 
 8223d25:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223d2c:	00 
 8223d2d:	c7 44 24 04 e0 c9 bc 	movl   $0x8bcc9e0,0x4(%esp)
 8223d34:	08 
 8223d35:	c7 04 24 84 de 00 00 	movl   $0xde84,(%esp)
 8223d3c:	e8 96 cb 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223d41:	eb 51                	jmp    8223d94 <_ZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 8223d43:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223d4a:	00 
 8223d4b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223d52:	00 
 8223d53:	c7 44 24 04 e0 c9 bc 	movl   $0x8bcc9e0,0x4(%esp)
 8223d5a:	08 
 8223d5b:	c7 04 24 86 de 00 00 	movl   $0xde86,(%esp)
 8223d62:	e8 70 cb 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223d67:	eb 2b                	jmp    8223d94 <_ZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 8223d69:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223d70:	00 
 8223d71:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223d78:	00 
 8223d79:	c7 44 24 04 e0 c9 bc 	movl   $0x8bcc9e0,0x4(%esp)
 8223d80:	08 
 8223d81:	c7 04 24 88 de 00 00 	movl   $0xde88,(%esp)
 8223d88:	e8 4a cb 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223d8d:	eb 05                	jmp    8223d94 <_ZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 8223d8f:	b8 00 00 00 00       	mov    $0x0,%eax
 8223d94:	c9                   	leave
 8223d95:	c3                   	ret

```

```c
// Dispatcher_Security_ProcessScan::dispatch_sig @ 0x8223cf6

/* Dispatcher_Security_ProcessScan::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_ProcessScan::dispatch_sig
          (Dispatcher_Security_ProcessScan *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_ProcessScan(param_1,param_2);
  if (iVar1 == 2) {
    uVar2 = LineFunc(0xde86,
                     "virtual int Dispatcher_Security_ProcessScan::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 3) {
    uVar2 = LineFunc(0xde88,
                     "virtual int Dispatcher_Security_ProcessScan::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 1) {
    uVar2 = LineFunc(0xde84,
                     "virtual int Dispatcher_Security_ProcessScan::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

