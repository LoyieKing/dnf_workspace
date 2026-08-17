# Inter_Notice

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c5212 Inter_Notice::dispatch_sig  [0x084c5212-0x84c5289] ===
 84c5212:	55                   	push   %ebp
 84c5213:	89 e5                	mov    %esp,%ebp
 84c5215:	56                   	push   %esi
 84c5216:	53                   	push   %ebx
 84c5217:	83 ec 40             	sub    $0x40,%esp
 84c521a:	8b 45 10             	mov    0x10(%ebp),%eax
 84c521d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c5220:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c5223:	0f b6 40 51          	movzbl 0x51(%eax),%eax
 84c5227:	0f be d8             	movsbl %al,%ebx
 84c522a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c522d:	8d 70 01             	lea    0x1(%eax),%esi
 84c5230:	e8 72 51 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c5235:	c7 44 24 24 0c 00 00 	movl   $0xc,0x24(%esp)
 84c523c:	00 
 84c523d:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84c5244:	00 
 84c5245:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 84c524c:	00 
 84c524d:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84c5251:	89 74 24 14          	mov    %esi,0x14(%esp)
 84c5255:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84c525c:	00 
 84c525d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5264:	00 
 84c5265:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c526c:	00 
 84c526d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c5274:	00 
 84c5275:	89 04 24             	mov    %eax,(%esp)
 84c5278:	e8 e1 44 20 00       	call   86c975e <_ZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKET>
 84c527d:	b8 00 00 00 00       	mov    $0x0,%eax
 84c5282:	83 c4 40             	add    $0x40,%esp
 84c5285:	5b                   	pop    %ebx
 84c5286:	5e                   	pop    %esi
 84c5287:	5d                   	pop    %ebp
 84c5288:	c3                   	ret
 84c5289:	90                   	nop

```

```c
// Inter_Notice::dispatch_sig @ 0x84c5212

/* Inter_Notice::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Notice::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  GameWorld *pGVar2;
  
  cVar1 = *(char *)(param_3 + 0x51);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::send_chat_msg(pGVar2,0,0,0,0,param_3 + 1,(int)cVar1,0,0,0xc);
  return 0;
}

```

