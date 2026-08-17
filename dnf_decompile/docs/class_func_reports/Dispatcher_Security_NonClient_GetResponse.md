# Dispatcher_Security_NonClient_GetResponse

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08224e64 Dispatcher_Security_NonClient_GetResponse::dispatch_sig  [0x08224e64-0x8224edb] ===
 8224e64:	55                   	push   %ebp
 8224e65:	89 e5                	mov    %esp,%ebp
 8224e67:	83 ec 18             	sub    $0x18,%esp
 8224e6a:	8b 45 10             	mov    0x10(%ebp),%eax
 8224e6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224e71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224e74:	89 04 24             	mov    %eax,(%esp)
 8224e77:	e8 47 fe 04 00       	call   8274cc3 <_Z25_NS_NonClient_GetResponseP5CUserR9PacketBuf>
 8224e7c:	83 f8 01             	cmp    $0x1,%eax
 8224e7f:	74 07                	je     8224e88 <_ZN41Dispatcher_Security_NonClient_GetResponse12dispatch_sigEP5CUserR9PacketBuf+0x24>
 8224e81:	83 f8 02             	cmp    $0x2,%eax
 8224e84:	74 28                	je     8224eae <_ZN41Dispatcher_Security_NonClient_GetResponse12dispatch_sigEP5CUserR9PacketBuf+0x4a>
 8224e86:	eb 4c                	jmp    8224ed4 <_ZN41Dispatcher_Security_NonClient_GetResponse12dispatch_sigEP5CUserR9PacketBuf+0x70>
 8224e88:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224e8f:	00 
 8224e90:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224e97:	00 
 8224e98:	c7 44 24 04 e0 c6 bc 	movl   $0x8bcc6e0,0x4(%esp)
 8224e9f:	08 
 8224ea0:	c7 04 24 88 df 00 00 	movl   $0xdf88,(%esp)
 8224ea7:	e8 2b ba 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224eac:	eb 2b                	jmp    8224ed9 <_ZN41Dispatcher_Security_NonClient_GetResponse12dispatch_sigEP5CUserR9PacketBuf+0x75>
 8224eae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224eb5:	00 
 8224eb6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224ebd:	00 
 8224ebe:	c7 44 24 04 e0 c6 bc 	movl   $0x8bcc6e0,0x4(%esp)
 8224ec5:	08 
 8224ec6:	c7 04 24 8a df 00 00 	movl   $0xdf8a,(%esp)
 8224ecd:	e8 05 ba 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224ed2:	eb 05                	jmp    8224ed9 <_ZN41Dispatcher_Security_NonClient_GetResponse12dispatch_sigEP5CUserR9PacketBuf+0x75>
 8224ed4:	b8 00 00 00 00       	mov    $0x0,%eax
 8224ed9:	c9                   	leave
 8224eda:	c3                   	ret
 8224edb:	90                   	nop

```

```c
// Dispatcher_Security_NonClient_GetResponse::dispatch_sig @ 0x8224e64

/* Dispatcher_Security_NonClient_GetResponse::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_NonClient_GetResponse::dispatch_sig
          (Dispatcher_Security_NonClient_GetResponse *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_NonClient_GetResponse(param_1,param_2);
  if (iVar1 == 1) {
    uVar2 = LineFunc(0xdf88,
                     "virtual int Dispatcher_Security_NonClient_GetResponse::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 2) {
    uVar2 = LineFunc(0xdf8a,
                     "virtual int Dispatcher_Security_NonClient_GetResponse::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

