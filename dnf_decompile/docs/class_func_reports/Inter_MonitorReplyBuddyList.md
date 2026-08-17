# Inter_MonitorReplyBuddyList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c9148 Inter_MonitorReplyBuddyList::dispatch_sig  [0x084c9148-0x84c9193] ===
 84c9148:	55                   	push   %ebp
 84c9149:	89 e5                	mov    %esp,%ebp
 84c914b:	57                   	push   %edi
 84c914c:	56                   	push   %esi
 84c914d:	53                   	push   %ebx
 84c914e:	83 ec 2c             	sub    $0x2c,%esp
 84c9151:	8b 45 10             	mov    0x10(%ebp),%eax
 84c9154:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c9157:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c915a:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84c915e:	0f b6 f0             	movzbl %al,%esi
 84c9161:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c9164:	8d 78 0f             	lea    0xf(%eax),%edi
 84c9167:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c916a:	8b 58 0a             	mov    0xa(%eax),%ebx
 84c916d:	e8 35 12 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c9172:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c9176:	89 7c 24 08          	mov    %edi,0x8(%esp)
 84c917a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c917e:	89 04 24             	mov    %eax,(%esp)
 84c9181:	e8 0e f5 1f 00       	call   86c8694 <_ZN9GameWorld20send_buddy_conn_listEjP9BuddyListi>
 84c9186:	b8 00 00 00 00       	mov    $0x0,%eax
 84c918b:	83 c4 2c             	add    $0x2c,%esp
 84c918e:	5b                   	pop    %ebx
 84c918f:	5e                   	pop    %esi
 84c9190:	5f                   	pop    %edi
 84c9191:	5d                   	pop    %ebp
 84c9192:	c3                   	ret
 84c9193:	90                   	nop

```

```c
// Inter_MonitorReplyBuddyList::dispatch_sig @ 0x84c9148

/* Inter_MonitorReplyBuddyList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorReplyBuddyList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  GameWorld *this;
  
  bVar1 = *(byte *)(param_3 + 0xe);
  uVar2 = *(uint *)(param_3 + 10);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_buddy_conn_list(this,uVar2,(BuddyList *)(param_3 + 0xf),(uint)bVar1);
  return 0;
}

```

