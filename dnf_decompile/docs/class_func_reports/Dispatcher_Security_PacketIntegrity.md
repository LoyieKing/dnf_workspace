# Dispatcher_Security_PacketIntegrity

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0822449a Dispatcher_Security_PacketIntegrity::dispatch_sig  [0x0822449a-0x822458b] ===
 822449a:	55                   	push   %ebp
 822449b:	89 e5                	mov    %esp,%ebp
 822449d:	83 ec 18             	sub    $0x18,%esp
 82244a0:	8b 45 10             	mov    0x10(%ebp),%eax
 82244a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82244a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82244aa:	89 04 24             	mov    %eax,(%esp)
 82244ad:	e8 c3 04 05 00       	call   8274975 <_Z19_NS_PacketIntegrityP5CUserR9PacketBuf>
 82244b2:	83 f8 05             	cmp    $0x5,%eax
 82244b5:	0f 87 ca 00 00 00    	ja     8224585 <_ZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBuf+0xeb>
 82244bb:	8b 04 85 90 35 bc 08 	mov    0x8bc3590(,%eax,4),%eax
 82244c2:	ff e0                	jmp    *%eax
 82244c4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82244cb:	00 
 82244cc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82244d3:	00 
 82244d4:	c7 44 24 04 c0 c8 bc 	movl   $0x8bcc8c0,0x4(%esp)
 82244db:	08 
 82244dc:	c7 04 24 d7 de 00 00 	movl   $0xded7,(%esp)
 82244e3:	e8 ef c3 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82244e8:	e9 9d 00 00 00       	jmp    822458a <_ZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 82244ed:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82244f4:	00 
 82244f5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82244fc:	00 
 82244fd:	c7 44 24 04 c0 c8 bc 	movl   $0x8bcc8c0,0x4(%esp)
 8224504:	08 
 8224505:	c7 04 24 d9 de 00 00 	movl   $0xded9,(%esp)
 822450c:	e8 c6 c3 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224511:	eb 77                	jmp    822458a <_ZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 8224513:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822451a:	00 
 822451b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224522:	00 
 8224523:	c7 44 24 04 c0 c8 bc 	movl   $0x8bcc8c0,0x4(%esp)
 822452a:	08 
 822452b:	c7 04 24 db de 00 00 	movl   $0xdedb,(%esp)
 8224532:	e8 a0 c3 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224537:	eb 51                	jmp    822458a <_ZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 8224539:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224540:	00 
 8224541:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224548:	00 
 8224549:	c7 44 24 04 c0 c8 bc 	movl   $0x8bcc8c0,0x4(%esp)
 8224550:	08 
 8224551:	c7 04 24 dd de 00 00 	movl   $0xdedd,(%esp)
 8224558:	e8 7a c3 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822455d:	eb 2b                	jmp    822458a <_ZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 822455f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224566:	00 
 8224567:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822456e:	00 
 822456f:	c7 44 24 04 c0 c8 bc 	movl   $0x8bcc8c0,0x4(%esp)
 8224576:	08 
 8224577:	c7 04 24 df de 00 00 	movl   $0xdedf,(%esp)
 822457e:	e8 54 c3 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224583:	eb 05                	jmp    822458a <_ZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 8224585:	b8 00 00 00 00       	mov    $0x0,%eax
 822458a:	c9                   	leave
 822458b:	c3                   	ret

```

```c
// Dispatcher_Security_PacketIntegrity::dispatch_sig @ 0x822449a

/* Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_PacketIntegrity::dispatch_sig
          (Dispatcher_Security_PacketIntegrity *this,CUser *param_1,PacketBuf *param_2)

{
  undefined4 uVar1;
  
  uVar1 = _NS_PacketIntegrity(param_1,param_2);
  switch(uVar1) {
  default:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = LineFunc(0xded7,
                     "virtual int Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    break;
  case 2:
    uVar1 = LineFunc(0xded9,
                     "virtual int Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    break;
  case 3:
    uVar1 = LineFunc(0xdedb,
                     "virtual int Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    break;
  case 4:
    uVar1 = LineFunc(0xdedd,
                     "virtual int Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    break;
  case 5:
    uVar1 = LineFunc(0xdedf,
                     "virtual int Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar1;
}

```

