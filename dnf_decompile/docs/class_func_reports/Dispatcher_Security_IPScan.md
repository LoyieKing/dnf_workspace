# Dispatcher_Security_IPScan

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08223d96 Dispatcher_Security_IPScan::dispatch_sig  [0x08223d96-0x8223ddf] ===
 8223d96:	55                   	push   %ebp
 8223d97:	89 e5                	mov    %esp,%ebp
 8223d99:	83 ec 18             	sub    $0x18,%esp
 8223d9c:	8b 45 10             	mov    0x10(%ebp),%eax
 8223d9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223da3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223da6:	89 04 24             	mov    %eax,(%esp)
 8223da9:	e8 c8 08 05 00       	call   8274676 <_Z10_NS_IPScanP5CUserR9PacketBuf>
 8223dae:	83 f8 01             	cmp    $0x1,%eax
 8223db1:	75 26                	jne    8223dd9 <_ZN26Dispatcher_Security_IPScan12dispatch_sigEP5CUserR9PacketBuf+0x43>
 8223db3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223dba:	00 
 8223dbb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223dc2:	00 
 8223dc3:	c7 44 24 04 80 c9 bc 	movl   $0x8bcc980,0x4(%esp)
 8223dca:	08 
 8223dcb:	c7 04 24 94 de 00 00 	movl   $0xde94,(%esp)
 8223dd2:	e8 00 cb 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223dd7:	eb 05                	jmp    8223dde <_ZN26Dispatcher_Security_IPScan12dispatch_sigEP5CUserR9PacketBuf+0x48>
 8223dd9:	b8 00 00 00 00       	mov    $0x0,%eax
 8223dde:	c9                   	leave
 8223ddf:	c3                   	ret

```

```c
// Dispatcher_Security_IPScan::dispatch_sig @ 0x8223d96

/* Dispatcher_Security_IPScan::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_IPScan::dispatch_sig
          (Dispatcher_Security_IPScan *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_IPScan(param_1,param_2);
  if (iVar1 == 1) {
    uVar2 = LineFunc(0xde94,
                     "virtual int Dispatcher_Security_IPScan::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

