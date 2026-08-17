# Dispatcher_TraceError

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08204b0c Dispatcher_TraceError::dispatch_sig  [0x08204b0c-0x8204c1d] ===
 8204b0c:	55                   	push   %ebp
 8204b0d:	89 e5                	mov    %esp,%ebp
 8204b0f:	53                   	push   %ebx
 8204b10:	83 ec 34             	sub    $0x34,%esp
 8204b13:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8204b16:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204b1a:	8b 45 10             	mov    0x10(%ebp),%eax
 8204b1d:	89 04 24             	mov    %eax,(%esp)
 8204b20:	e8 fd 83 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8204b25:	83 f0 01             	xor    $0x1,%eax
 8204b28:	84 c0                	test   %al,%al
 8204b2a:	74 29                	je     8204b55 <_ZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBuf+0x49>
 8204b2c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204b33:	00 
 8204b34:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204b3b:	00 
 8204b3c:	c7 44 24 04 40 ef bc 	movl   $0x8bcef40,0x4(%esp)
 8204b43:	08 
 8204b44:	c7 04 24 74 9c 00 00 	movl   $0x9c74,(%esp)
 8204b4b:	e8 87 bd 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204b50:	e9 c3 00 00 00       	jmp    8204c18 <_ZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBuf+0x10c>
 8204b55:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8204b59:	0f be c0             	movsbl %al,%eax
 8204b5c:	83 f8 02             	cmp    $0x2,%eax
 8204b5f:	74 32                	je     8204b93 <_ZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBuf+0x87>
 8204b61:	83 f8 03             	cmp    $0x3,%eax
 8204b64:	0f 85 a9 00 00 00    	jne    8204c13 <_ZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBuf+0x107>
 8204b6a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204b71:	00 
 8204b72:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204b79:	00 
 8204b7a:	c7 44 24 04 40 ef bc 	movl   $0x8bcef40,0x4(%esp)
 8204b81:	08 
 8204b82:	c7 04 24 85 9c 00 00 	movl   $0x9c85,(%esp)
 8204b89:	e8 49 bd 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204b8e:	e9 85 00 00 00       	jmp    8204c18 <_ZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBuf+0x10c>
 8204b93:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8204b96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204b9a:	8b 45 10             	mov    0x10(%ebp),%eax
 8204b9d:	89 04 24             	mov    %eax,(%esp)
 8204ba0:	e8 7d 83 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8204ba5:	83 f0 01             	xor    $0x1,%eax
 8204ba8:	84 c0                	test   %al,%al
 8204baa:	74 26                	je     8204bd2 <_ZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBuf+0xc6>
 8204bac:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204bb3:	00 
 8204bb4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204bbb:	00 
 8204bbc:	c7 44 24 04 40 ef bc 	movl   $0x8bcef40,0x4(%esp)
 8204bc3:	08 
 8204bc4:	c7 04 24 b3 9c 00 00 	movl   $0x9cb3,(%esp)
 8204bcb:	e8 07 bd 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204bd0:	eb 46                	jmp    8204c18 <_ZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBuf+0x10c>
 8204bd2:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 8204bd6:	0f be d8             	movsbl %al,%ebx
 8204bd9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204be0:	00 
 8204be1:	c7 44 24 08 b5 9c 00 	movl   $0x9cb5,0x8(%esp)
 8204be8:	00 
 8204be9:	c7 44 24 04 40 ef bc 	movl   $0x8bcef40,0x4(%esp)
 8204bf0:	08 
 8204bf1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8204bf4:	89 04 24             	mov    %eax,(%esp)
 8204bf7:	e8 1c ab 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8204bfc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8204c00:	c7 44 24 04 bc 29 bc 	movl   $0x8bc29bc,0x4(%esp)
 8204c07:	08 
 8204c08:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8204c0b:	89 04 24             	mov    %eax,(%esp)
 8204c0e:	e8 75 ab 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8204c13:	b8 00 00 00 00       	mov    $0x0,%eax
 8204c18:	83 c4 34             	add    $0x34,%esp
 8204c1b:	5b                   	pop    %ebx
 8204c1c:	5d                   	pop    %ebp
 8204c1d:	c3                   	ret

```

```c
// Dispatcher_TraceError::dispatch_sig @ 0x8204b0c

/* Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_TraceError::dispatch_sig(Dispatcher_TraceError *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char local_1e;
  char local_1d;
  cMyTrace local_1c [20];
  
  cVar1 = PacketBuf::get_byte(param_2,&local_1d);
  if (cVar1 == '\x01') {
    if (local_1d == '\x02') {
      cVar1 = PacketBuf::get_byte(param_2,&local_1e);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0x9cb3,
                         "virtual int Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&)",0,0);
        return uVar2;
      }
      cMyTrace::cMyTrace(local_1c,
                         "virtual int Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&)",
                         0x9cb5,0);
      cMyTrace::operator()(local_1c,"KILLBOSS2 client - error type(%d)",(int)local_1e);
    }
    else if (local_1d == '\x03') {
      uVar2 = LineFunc(0x9c85,"virtual int Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x9c74,"virtual int Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  return uVar2;
}

```

