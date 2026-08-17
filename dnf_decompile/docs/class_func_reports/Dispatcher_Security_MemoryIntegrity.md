# Dispatcher_Security_MemoryIntegrity

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08224edc Dispatcher_Security_MemoryIntegrity::dispatch_sig  [0x08224edc-0x8224f7b] ===
 8224edc:	55                   	push   %ebp
 8224edd:	89 e5                	mov    %esp,%ebp
 8224edf:	83 ec 18             	sub    $0x18,%esp
 8224ee2:	8b 45 10             	mov    0x10(%ebp),%eax
 8224ee5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224ee9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224eec:	89 04 24             	mov    %eax,(%esp)
 8224eef:	e8 15 fc 04 00       	call   8274b09 <_Z36_NS_MI_RecvMemoryIntegrityModulationP5CUserR9PacketBuf>
 8224ef4:	83 f8 02             	cmp    $0x2,%eax
 8224ef7:	74 30                	je     8224f29 <_ZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBuf+0x4d>
 8224ef9:	83 f8 03             	cmp    $0x3,%eax
 8224efc:	74 51                	je     8224f4f <_ZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBuf+0x73>
 8224efe:	83 f8 01             	cmp    $0x1,%eax
 8224f01:	75 72                	jne    8224f75 <_ZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBuf+0x99>
 8224f03:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224f0a:	00 
 8224f0b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224f12:	00 
 8224f13:	c7 44 24 04 80 c6 bc 	movl   $0x8bcc680,0x4(%esp)
 8224f1a:	08 
 8224f1b:	c7 04 24 95 df 00 00 	movl   $0xdf95,(%esp)
 8224f22:	e8 b0 b9 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224f27:	eb 51                	jmp    8224f7a <_ZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 8224f29:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224f30:	00 
 8224f31:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224f38:	00 
 8224f39:	c7 44 24 04 80 c6 bc 	movl   $0x8bcc680,0x4(%esp)
 8224f40:	08 
 8224f41:	c7 04 24 97 df 00 00 	movl   $0xdf97,(%esp)
 8224f48:	e8 8a b9 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224f4d:	eb 2b                	jmp    8224f7a <_ZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 8224f4f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224f56:	00 
 8224f57:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224f5e:	00 
 8224f5f:	c7 44 24 04 80 c6 bc 	movl   $0x8bcc680,0x4(%esp)
 8224f66:	08 
 8224f67:	c7 04 24 99 df 00 00 	movl   $0xdf99,(%esp)
 8224f6e:	e8 64 b9 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224f73:	eb 05                	jmp    8224f7a <_ZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 8224f75:	b8 00 00 00 00       	mov    $0x0,%eax
 8224f7a:	c9                   	leave
 8224f7b:	c3                   	ret

```

```c
// Dispatcher_Security_MemoryIntegrity::dispatch_sig @ 0x8224edc

/* Dispatcher_Security_MemoryIntegrity::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_MemoryIntegrity::dispatch_sig
          (Dispatcher_Security_MemoryIntegrity *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_MI_RecvMemoryIntegrityModulation(param_1,param_2);
  if (iVar1 == 2) {
    uVar2 = LineFunc(0xdf97,
                     "virtual int Dispatcher_Security_MemoryIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 3) {
    uVar2 = LineFunc(0xdf99,
                     "virtual int Dispatcher_Security_MemoryIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 1) {
    uVar2 = LineFunc(0xdf95,
                     "virtual int Dispatcher_Security_MemoryIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

