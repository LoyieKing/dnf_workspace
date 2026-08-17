# DB_UpdateCreatureItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## GetField

```asm
// === 084200a8 DB_UpdateCreatureItem::GetField  [0x084200a8-0x84203e7] ===
 84200a8:	55                   	push   %ebp
 84200a9:	89 e5                	mov    %esp,%ebp
 84200ab:	56                   	push   %esi
 84200ac:	53                   	push   %ebx
 84200ad:	83 ec 40             	sub    $0x40,%esp
 84200b0:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 84200b4:	8d 45 da             	lea    -0x26(%ebp),%eax
 84200b7:	bb 19 00 00 00       	mov    $0x19,%ebx
 84200bc:	ba 00 00 00 00       	mov    $0x0,%edx
 84200c1:	89 c1                	mov    %eax,%ecx
 84200c3:	83 e1 02             	and    $0x2,%ecx
 84200c6:	85 c9                	test   %ecx,%ecx
 84200c8:	74 09                	je     84200d3 <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM+0x2b>
 84200ca:	66 89 10             	mov    %dx,(%eax)
 84200cd:	83 c0 02             	add    $0x2,%eax
 84200d0:	83 eb 02             	sub    $0x2,%ebx
 84200d3:	89 de                	mov    %ebx,%esi
 84200d5:	83 e6 fc             	and    $0xfffffffc,%esi
 84200d8:	b9 00 00 00 00       	mov    $0x0,%ecx
 84200dd:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 84200e0:	83 c1 04             	add    $0x4,%ecx
 84200e3:	39 f1                	cmp    %esi,%ecx
 84200e5:	72 f6                	jb     84200dd <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM+0x35>
 84200e7:	01 c8                	add    %ecx,%eax
 84200e9:	89 d9                	mov    %ebx,%ecx
 84200eb:	83 e1 02             	and    $0x2,%ecx
 84200ee:	85 c9                	test   %ecx,%ecx
 84200f0:	74 06                	je     84200f8 <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM+0x50>
 84200f2:	66 89 10             	mov    %dx,(%eax)
 84200f5:	83 c0 02             	add    $0x2,%eax
 84200f8:	89 d9                	mov    %ebx,%ecx
 84200fa:	83 e1 01             	and    $0x1,%ecx
 84200fd:	85 c9                	test   %ecx,%ecx
 84200ff:	74 05                	je     8420106 <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM+0x5e>
 8420101:	88 10                	mov    %dl,(%eax)
 8420103:	83 c0 01             	add    $0x1,%eax
 8420106:	8b 45 14             	mov    0x14(%ebp),%eax
 8420109:	83 c0 34             	add    $0x34,%eax
 842010c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420110:	8d 45 da             	lea    -0x26(%ebp),%eax
 8420113:	89 44 24 04          	mov    %eax,0x4(%esp)
 8420117:	8b 45 0c             	mov    0xc(%ebp),%eax
 842011a:	89 04 24             	mov    %eax,(%esp)
 842011d:	e8 88 47 fd ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8420122:	8b 45 14             	mov    0x14(%ebp),%eax
 8420125:	8b 00                	mov    (%eax),%eax
 8420127:	8d 55 da             	lea    -0x26(%ebp),%edx
 842012a:	89 54 24 14          	mov    %edx,0x14(%esp)
 842012e:	c7 44 24 10 3f c6 c4 	movl   $0x8c4c63f,0x10(%esp)
 8420135:	08 
 8420136:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 842013d:	00 
 842013e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420142:	8b 45 10             	mov    0x10(%ebp),%eax
 8420145:	89 44 24 04          	mov    %eax,0x4(%esp)
 8420149:	8d 45 f3             	lea    -0xd(%ebp),%eax
 842014c:	89 04 24             	mov    %eax,(%esp)
 842014f:	e8 a4 fe ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 8420154:	8b 45 14             	mov    0x14(%ebp),%eax
 8420157:	8b 50 44             	mov    0x44(%eax),%edx
 842015a:	8b 45 14             	mov    0x14(%ebp),%eax
 842015d:	8b 00                	mov    (%eax),%eax
 842015f:	89 54 24 14          	mov    %edx,0x14(%esp)
 8420163:	c7 44 24 10 49 c6 c4 	movl   $0x8c4c649,0x10(%esp)
 842016a:	08 
 842016b:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 8420172:	00 
 8420173:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420177:	8b 45 10             	mov    0x10(%ebp),%eax
 842017a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842017e:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8420181:	89 04 24             	mov    %eax,(%esp)
 8420184:	e8 6f fe ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 8420189:	8b 45 14             	mov    0x14(%ebp),%eax
 842018c:	0f b6 40 50          	movzbl 0x50(%eax),%eax
 8420190:	0f be d0             	movsbl %al,%edx
 8420193:	8b 45 14             	mov    0x14(%ebp),%eax
 8420196:	8b 00                	mov    (%eax),%eax
 8420198:	89 54 24 14          	mov    %edx,0x14(%esp)
 842019c:	c7 44 24 10 54 c6 c4 	movl   $0x8c4c654,0x10(%esp)
 84201a3:	08 
 84201a4:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 84201ab:	00 
 84201ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 84201b0:	8b 45 10             	mov    0x10(%ebp),%eax
 84201b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84201b7:	8d 45 f3             	lea    -0xd(%ebp),%eax
 84201ba:	89 04 24             	mov    %eax,(%esp)
 84201bd:	e8 36 fe ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 84201c2:	8b 45 14             	mov    0x14(%ebp),%eax
 84201c5:	8b 50 4c             	mov    0x4c(%eax),%edx
 84201c8:	8b 45 14             	mov    0x14(%ebp),%eax
 84201cb:	8b 00                	mov    (%eax),%eax
 84201cd:	89 54 24 14          	mov    %edx,0x14(%esp)
 84201d1:	c7 44 24 10 65 c6 c4 	movl   $0x8c4c665,0x10(%esp)
 84201d8:	08 
 84201d9:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 84201e0:	00 
 84201e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84201e5:	8b 45 10             	mov    0x10(%ebp),%eax
 84201e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84201ec:	8d 45 f3             	lea    -0xd(%ebp),%eax
 84201ef:	89 04 24             	mov    %eax,(%esp)
 84201f2:	e8 01 fe ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 84201f7:	8b 45 14             	mov    0x14(%ebp),%eax
 84201fa:	8b 50 48             	mov    0x48(%eax),%edx
 84201fd:	8b 45 14             	mov    0x14(%ebp),%eax
 8420200:	8b 00                	mov    (%eax),%eax
 8420202:	89 54 24 14          	mov    %edx,0x14(%esp)
 8420206:	c7 44 24 10 6c c6 c4 	movl   $0x8c4c66c,0x10(%esp)
 842020d:	08 
 842020e:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 8420215:	00 
 8420216:	89 44 24 08          	mov    %eax,0x8(%esp)
 842021a:	8b 45 10             	mov    0x10(%ebp),%eax
 842021d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8420221:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8420224:	89 04 24             	mov    %eax,(%esp)
 8420227:	e8 cc fd ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 842022c:	8b 45 14             	mov    0x14(%ebp),%eax
 842022f:	8b 50 2c             	mov    0x2c(%eax),%edx
 8420232:	8b 45 14             	mov    0x14(%ebp),%eax
 8420235:	8b 00                	mov    (%eax),%eax
 8420237:	89 54 24 14          	mov    %edx,0x14(%esp)
 842023b:	c7 44 24 10 79 c6 c4 	movl   $0x8c4c679,0x10(%esp)
 8420242:	08 
 8420243:	c7 44 24 0c 20 00 00 	movl   $0x20,0xc(%esp)
 842024a:	00 
 842024b:	89 44 24 08          	mov    %eax,0x8(%esp)
 842024f:	8b 45 10             	mov    0x10(%ebp),%eax
 8420252:	89 44 24 04          	mov    %eax,0x4(%esp)
 8420256:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8420259:	89 04 24             	mov    %eax,(%esp)
 842025c:	e8 97 fd ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 8420261:	8b 45 14             	mov    0x14(%ebp),%eax
 8420264:	8b 50 08             	mov    0x8(%eax),%edx
 8420267:	8b 45 14             	mov    0x14(%ebp),%eax
 842026a:	8b 00                	mov    (%eax),%eax
 842026c:	89 54 24 14          	mov    %edx,0x14(%esp)
 8420270:	c7 44 24 10 81 c6 c4 	movl   $0x8c4c681,0x10(%esp)
 8420277:	08 
 8420278:	c7 44 24 0c 40 00 00 	movl   $0x40,0xc(%esp)
 842027f:	00 
 8420280:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420284:	8b 45 10             	mov    0x10(%ebp),%eax
 8420287:	89 44 24 04          	mov    %eax,0x4(%esp)
 842028b:	8d 45 f3             	lea    -0xd(%ebp),%eax
 842028e:	89 04 24             	mov    %eax,(%esp)
 8420291:	e8 62 fd ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 8420296:	8b 45 14             	mov    0x14(%ebp),%eax
 8420299:	0f b6 40 52          	movzbl 0x52(%eax),%eax
 842029d:	0f be d0             	movsbl %al,%edx
 84202a0:	8b 45 14             	mov    0x14(%ebp),%eax
 84202a3:	8b 00                	mov    (%eax),%eax
 84202a5:	89 54 24 14          	mov    %edx,0x14(%esp)
 84202a9:	c7 44 24 10 8a c6 c4 	movl   $0x8c4c68a,0x10(%esp)
 84202b0:	08 
 84202b1:	c7 44 24 0c 80 00 00 	movl   $0x80,0xc(%esp)
 84202b8:	00 
 84202b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84202bd:	8b 45 10             	mov    0x10(%ebp),%eax
 84202c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84202c4:	8d 45 f3             	lea    -0xd(%ebp),%eax
 84202c7:	89 04 24             	mov    %eax,(%esp)
 84202ca:	e8 29 fd ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 84202cf:	8b 45 14             	mov    0x14(%ebp),%eax
 84202d2:	0f b6 40 53          	movzbl 0x53(%eax),%eax
 84202d6:	0f be d0             	movsbl %al,%edx
 84202d9:	8b 45 14             	mov    0x14(%ebp),%eax
 84202dc:	8b 00                	mov    (%eax),%eax
 84202de:	89 54 24 14          	mov    %edx,0x14(%esp)
 84202e2:	c7 44 24 10 97 c6 c4 	movl   $0x8c4c697,0x10(%esp)
 84202e9:	08 
 84202ea:	c7 44 24 0c 00 01 00 	movl   $0x100,0xc(%esp)
 84202f1:	00 
 84202f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84202f6:	8b 45 10             	mov    0x10(%ebp),%eax
 84202f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84202fd:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8420300:	89 04 24             	mov    %eax,(%esp)
 8420303:	e8 f0 fc ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 8420308:	8b 45 14             	mov    0x14(%ebp),%eax
 842030b:	8b 40 54             	mov    0x54(%eax),%eax
 842030e:	85 c0                	test   %eax,%eax
 8420310:	75 3a                	jne    842034c <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM+0x2a4>
 8420312:	8b 45 14             	mov    0x14(%ebp),%eax
 8420315:	8b 40 58             	mov    0x58(%eax),%eax
 8420318:	85 c0                	test   %eax,%eax
 842031a:	75 30                	jne    842034c <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM+0x2a4>
 842031c:	8b 45 14             	mov    0x14(%ebp),%eax
 842031f:	8b 00                	mov    (%eax),%eax
 8420321:	c7 44 24 10 a0 c6 c4 	movl   $0x8c4c6a0,0x10(%esp)
 8420328:	08 
 8420329:	c7 44 24 0c 00 02 00 	movl   $0x200,0xc(%esp)
 8420330:	00 
 8420331:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420335:	8b 45 10             	mov    0x10(%ebp),%eax
 8420338:	89 44 24 04          	mov    %eax,0x4(%esp)
 842033c:	8d 45 f3             	lea    -0xd(%ebp),%eax
 842033f:	89 04 24             	mov    %eax,(%esp)
 8420342:	e8 b1 fc ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 8420347:	e9 94 00 00 00       	jmp    84203e0 <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM+0x338>
 842034c:	8b 45 14             	mov    0x14(%ebp),%eax
 842034f:	8b 40 54             	mov    0x54(%eax),%eax
 8420352:	85 c0                	test   %eax,%eax
 8420354:	75 41                	jne    8420397 <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM+0x2ef>
 8420356:	8b 45 14             	mov    0x14(%ebp),%eax
 8420359:	8b 40 58             	mov    0x58(%eax),%eax
 842035c:	85 c0                	test   %eax,%eax
 842035e:	74 37                	je     8420397 <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM+0x2ef>
 8420360:	8b 45 14             	mov    0x14(%ebp),%eax
 8420363:	8b 50 58             	mov    0x58(%eax),%edx
 8420366:	8b 45 14             	mov    0x14(%ebp),%eax
 8420369:	8b 00                	mov    (%eax),%eax
 842036b:	89 54 24 14          	mov    %edx,0x14(%esp)
 842036f:	c7 44 24 10 c4 c6 c4 	movl   $0x8c4c6c4,0x10(%esp)
 8420376:	08 
 8420377:	c7 44 24 0c 00 02 00 	movl   $0x200,0xc(%esp)
 842037e:	00 
 842037f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420383:	8b 45 10             	mov    0x10(%ebp),%eax
 8420386:	89 44 24 04          	mov    %eax,0x4(%esp)
 842038a:	8d 45 f3             	lea    -0xd(%ebp),%eax
 842038d:	89 04 24             	mov    %eax,(%esp)
 8420390:	e8 63 fc ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 8420395:	eb 49                	jmp    84203e0 <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM+0x338>
 8420397:	e8 66 c4 16 00       	call   858c802 <_ZN6OS_API15GetDateTimeTickEv>
 842039c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842039f:	8b 45 14             	mov    0x14(%ebp),%eax
 84203a2:	8b 40 54             	mov    0x54(%eax),%eax
 84203a5:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 84203ab:	01 45 f4             	add    %eax,-0xc(%ebp)
 84203ae:	8b 45 14             	mov    0x14(%ebp),%eax
 84203b1:	8b 00                	mov    (%eax),%eax
 84203b3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84203b6:	89 54 24 14          	mov    %edx,0x14(%esp)
 84203ba:	c7 44 24 10 c4 c6 c4 	movl   $0x8c4c6c4,0x10(%esp)
 84203c1:	08 
 84203c2:	c7 44 24 0c 00 02 00 	movl   $0x200,0xc(%esp)
 84203c9:	00 
 84203ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 84203ce:	8b 45 10             	mov    0x10(%ebp),%eax
 84203d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84203d5:	8d 45 f3             	lea    -0xd(%ebp),%eax
 84203d8:	89 04 24             	mov    %eax,(%esp)
 84203db:	e8 18 fc ff ff       	call   841fff8 <_Z14AddFieldStringRbPciiPKcz>
 84203e0:	83 c4 40             	add    $0x40,%esp
 84203e3:	5b                   	pop    %ebx
 84203e4:	5e                   	pop    %esi
 84203e5:	5d                   	pop    %ebp
 84203e6:	c3                   	ret
 84203e7:	90                   	nop

```

```c
// DB_UpdateCreatureItem::GetField @ 0x84200a8

/* DB_UpdateCreatureItem::GetField(MySQL*, char*, SIG_CREATURE_ITEM*) */

void __thiscall
DB_UpdateCreatureItem::GetField
          (DB_UpdateCreatureItem *this,MySQL *param_1,char *param_2,SIG_CREATURE_ITEM *param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  char local_2a [4];
  char acStack_26 [21];
  bool local_11;
  int local_10;
  
  local_11 = true;
  pcVar2 = local_2a;
  uVar5 = 0x19;
  bVar6 = ((uint)pcVar2 & 2) != 0;
  if (bVar6) {
    local_2a[0] = '\0';
    local_2a[1] = '\0';
    pcVar2 = local_2a + 2;
    uVar5 = 0x17;
  }
  uVar3 = 0;
  do {
    pcVar1 = pcVar2 + uVar3;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar3 = uVar3 + 4;
  } while (uVar3 < (uVar5 & 0xfffffffc));
  pcVar2 = pcVar2 + uVar3;
  if (bVar6) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
  }
  *pcVar2 = '\0';
  MySQL::escape_string(param_1,local_2a,(char *)(param_3 + 0x34));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,1,"name=\'%s\'",local_2a);
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,2,"stomach=%d",
                 *(undefined4 *)(param_3 + 0x44));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,4,"creature_type=%d",
                 (int)(char)param_3[0x50]);
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,8,"exp=%d",
                 *(undefined4 *)(param_3 + 0x4c));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x10,"charac_no=%d",
                 *(undefined4 *)(param_3 + 0x48));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x20,"slot=%d",
                 *(undefined4 *)(param_3 + 0x2c));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x40,"it_id=%d",
                 *(undefined4 *)(param_3 + 8));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x80,"no_charge=%d",
                 (int)(char)param_3[0x52]);
  iVar4 = (int)(char)param_3[0x53];
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x100,"stat=%d",iVar4);
  if ((*(int *)(param_3 + 0x54) == 0) && (*(int *)(param_3 + 0x58) == 0)) {
    AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x200,
                   "expire_date=\'9999-12-31 23:59:59\'",iVar4);
  }
  else if ((*(int *)(param_3 + 0x54) == 0) && (*(int *)(param_3 + 0x58) != 0)) {
    AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x200,
                   "expire_date=from_unixtime(\'%d\')",*(undefined4 *)(param_3 + 0x58));
  }
  else {
    local_10 = OS_API::GetDateTimeTick();
    local_10 = local_10 + *(int *)(param_3 + 0x54) * 0x15180;
    AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x200,
                   "expire_date=from_unixtime(\'%d\')",local_10);
  }
  return;
}

```

---

## dispatch

```asm
// === 084203e8 DB_UpdateCreatureItem::dispatch  [0x084203e8-0x8420e19] ===
 84203e8:	55                   	push   %ebp
 84203e9:	89 e5                	mov    %esp,%ebp
 84203eb:	57                   	push   %edi
 84203ec:	56                   	push   %esi
 84203ed:	53                   	push   %ebx
 84203ee:	81 ec ec 04 00 00    	sub    $0x4ec,%esp
 84203f4:	8b 45 14             	mov    0x14(%ebp),%eax
 84203f7:	89 04 24             	mov    %eax,(%esp)
 84203fa:	e8 53 16 03 00       	call   8451a52 <_ZN6Stream12GetOutBufferI17SIG_CREATURE_ITEMEEPT_v>
 84203ff:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8420402:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8420407:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842040e:	00 
 842040f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8420416:	00 
 8420417:	89 04 24             	mov    %eax,(%esp)
 842041a:	e8 1f 4e fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842041f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8420422:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420425:	8b 40 64             	mov    0x64(%eax),%eax
 8420428:	83 f8 03             	cmp    $0x3,%eax
 842042b:	0f 84 d5 00 00 00    	je     8420506 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x11e>
 8420431:	83 f8 03             	cmp    $0x3,%eax
 8420434:	7f 0a                	jg     8420440 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x58>
 8420436:	83 f8 01             	cmp    $0x1,%eax
 8420439:	74 1c                	je     8420457 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x6f>
 842043b:	e9 dd 01 00 00       	jmp    842061d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x235>
 8420440:	83 f8 04             	cmp    $0x4,%eax
 8420443:	0f 84 19 01 00 00    	je     8420562 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x17a>
 8420449:	83 f8 05             	cmp    $0x5,%eax
 842044c:	0f 84 67 01 00 00    	je     84205b9 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x1d1>
 8420452:	e9 c6 01 00 00       	jmp    842061d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x235>
 8420457:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842045a:	8b 40 68             	mov    0x68(%eax),%eax
 842045d:	85 c0                	test   %eax,%eax
 842045f:	75 49                	jne    84204aa <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xc2>
 8420461:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420464:	8b 40 48             	mov    0x48(%eax),%eax
 8420467:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842046b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8420472:	00 
 8420473:	c7 44 24 04 88 c4 c4 	movl   $0x8c4c488,0x4(%esp)
 842047a:	08 
 842047b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842047e:	89 04 24             	mov    %eax,(%esp)
 8420481:	e8 3a 3d fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8420486:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842048d:	00 
 842048e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420491:	89 04 24             	mov    %eax,(%esp)
 8420494:	e8 8d 3e fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8420499:	83 f0 01             	xor    $0x1,%eax
 842049c:	84 c0                	test   %al,%al
 842049e:	74 0a                	je     84204aa <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xc2>
 84204a0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84204a5:	e9 63 09 00 00       	jmp    8420e0d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa25>
 84204aa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84204ad:	8b 40 70             	mov    0x70(%eax),%eax
 84204b0:	83 f8 01             	cmp    $0x1,%eax
 84204b3:	0f 85 54 01 00 00    	jne    842060d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x225>
 84204b9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84204bc:	8b 40 6c             	mov    0x6c(%eax),%eax
 84204bf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84204c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84204ca:	00 
 84204cb:	c7 44 24 04 88 c4 c4 	movl   $0x8c4c488,0x4(%esp)
 84204d2:	08 
 84204d3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84204d6:	89 04 24             	mov    %eax,(%esp)
 84204d9:	e8 e2 3c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84204de:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84204e5:	00 
 84204e6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84204e9:	89 04 24             	mov    %eax,(%esp)
 84204ec:	e8 35 3e fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84204f1:	83 f0 01             	xor    $0x1,%eax
 84204f4:	84 c0                	test   %al,%al
 84204f6:	0f 84 14 01 00 00    	je     8420610 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x228>
 84204fc:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420501:	e9 07 09 00 00       	jmp    8420e0d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa25>
 8420506:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420509:	8b 40 68             	mov    0x68(%eax),%eax
 842050c:	83 f8 01             	cmp    $0x1,%eax
 842050f:	0f 85 fe 00 00 00    	jne    8420613 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x22b>
 8420515:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420518:	8b 40 6c             	mov    0x6c(%eax),%eax
 842051b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842051f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8420526:	00 
 8420527:	c7 44 24 04 88 c4 c4 	movl   $0x8c4c488,0x4(%esp)
 842052e:	08 
 842052f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420532:	89 04 24             	mov    %eax,(%esp)
 8420535:	e8 86 3c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842053a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8420541:	00 
 8420542:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420545:	89 04 24             	mov    %eax,(%esp)
 8420548:	e8 d9 3d fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 842054d:	83 f0 01             	xor    $0x1,%eax
 8420550:	84 c0                	test   %al,%al
 8420552:	0f 84 be 00 00 00    	je     8420616 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x22e>
 8420558:	bb 00 00 00 00       	mov    $0x0,%ebx
 842055d:	e9 ab 08 00 00       	jmp    8420e0d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa25>
 8420562:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420565:	8b 40 68             	mov    0x68(%eax),%eax
 8420568:	85 c0                	test   %eax,%eax
 842056a:	0f 85 a9 00 00 00    	jne    8420619 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x231>
 8420570:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420573:	8b 40 48             	mov    0x48(%eax),%eax
 8420576:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842057a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8420581:	00 
 8420582:	c7 44 24 04 88 c4 c4 	movl   $0x8c4c488,0x4(%esp)
 8420589:	08 
 842058a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842058d:	89 04 24             	mov    %eax,(%esp)
 8420590:	e8 2b 3c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8420595:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842059c:	00 
 842059d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84205a0:	89 04 24             	mov    %eax,(%esp)
 84205a3:	e8 7e 3d fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84205a8:	83 f0 01             	xor    $0x1,%eax
 84205ab:	84 c0                	test   %al,%al
 84205ad:	74 6d                	je     842061c <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x234>
 84205af:	bb 00 00 00 00       	mov    $0x0,%ebx
 84205b4:	e9 54 08 00 00       	jmp    8420e0d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa25>
 84205b9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84205bc:	8b 40 68             	mov    0x68(%eax),%eax
 84205bf:	83 f8 01             	cmp    $0x1,%eax
 84205c2:	75 59                	jne    842061d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x235>
 84205c4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84205c7:	8b 40 6c             	mov    0x6c(%eax),%eax
 84205ca:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84205ce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84205d5:	00 
 84205d6:	c7 44 24 04 88 c4 c4 	movl   $0x8c4c488,0x4(%esp)
 84205dd:	08 
 84205de:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84205e1:	89 04 24             	mov    %eax,(%esp)
 84205e4:	e8 d7 3b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84205e9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84205f0:	00 
 84205f1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84205f4:	89 04 24             	mov    %eax,(%esp)
 84205f7:	e8 2a 3d fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84205fc:	83 f0 01             	xor    $0x1,%eax
 84205ff:	84 c0                	test   %al,%al
 8420601:	74 1a                	je     842061d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x235>
 8420603:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420608:	e9 00 08 00 00       	jmp    8420e0d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa25>
 842060d:	90                   	nop
 842060e:	eb 0d                	jmp    842061d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x235>
 8420610:	90                   	nop
 8420611:	eb 0a                	jmp    842061d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x235>
 8420613:	90                   	nop
 8420614:	eb 07                	jmp    842061d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x235>
 8420616:	90                   	nop
 8420617:	eb 04                	jmp    842061d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x235>
 8420619:	90                   	nop
 842061a:	eb 01                	jmp    842061d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x235>
 842061c:	90                   	nop
 842061d:	8d b5 18 fb ff ff    	lea    -0x4e8(%ebp),%esi
 8420623:	b8 00 00 00 00       	mov    $0x0,%eax
 8420628:	ba 00 01 00 00       	mov    $0x100,%edx
 842062d:	89 f7                	mov    %esi,%edi
 842062f:	89 d1                	mov    %edx,%ecx
 8420631:	f3 ab                	rep stos %eax,%es:(%edi)
 8420633:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420636:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842063a:	8d 85 18 fb ff ff    	lea    -0x4e8(%ebp),%eax
 8420640:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420644:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420647:	89 44 24 04          	mov    %eax,0x4(%esp)
 842064b:	8b 45 08             	mov    0x8(%ebp),%eax
 842064e:	89 04 24             	mov    %eax,(%esp)
 8420651:	e8 52 fa ff ff       	call   84200a8 <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM>
 8420656:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420659:	8b 40 30             	mov    0x30(%eax),%eax
 842065c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8420660:	8d 85 18 fb ff ff    	lea    -0x4e8(%ebp),%eax
 8420666:	89 44 24 08          	mov    %eax,0x8(%esp)
 842066a:	c7 44 24 04 e4 c6 c4 	movl   $0x8c4c6e4,0x4(%esp)
 8420671:	08 
 8420672:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420675:	89 04 24             	mov    %eax,(%esp)
 8420678:	e8 43 3b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842067d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8420684:	00 
 8420685:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420688:	89 04 24             	mov    %eax,(%esp)
 842068b:	e8 96 3c fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8420690:	83 f0 01             	xor    $0x1,%eax
 8420693:	84 c0                	test   %al,%al
 8420695:	74 0a                	je     84206a1 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x2b9>
 8420697:	bb 00 00 00 00       	mov    $0x0,%ebx
 842069c:	e9 6c 07 00 00       	jmp    8420e0d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa25>
 84206a1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84206a4:	8b 40 64             	mov    0x64(%eax),%eax
 84206a7:	83 f8 04             	cmp    $0x4,%eax
 84206aa:	74 0f                	je     84206bb <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x2d3>
 84206ac:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84206af:	8b 40 64             	mov    0x64(%eax),%eax
 84206b2:	83 f8 01             	cmp    $0x1,%eax
 84206b5:	0f 85 4d 07 00 00    	jne    8420e08 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa20>
 84206bb:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84206c0:	c7 44 24 08 10 57 00 	movl   $0x5710,0x8(%esp)
 84206c7:	00 
 84206c8:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84206cf:	08 
 84206d0:	89 04 24             	mov    %eax,(%esp)
 84206d3:	e8 ae f3 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84206d8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84206df:	00 
 84206e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84206e4:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84206ea:	89 04 24             	mov    %eax,(%esp)
 84206ed:	e8 34 85 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84206f2:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84206f8:	89 04 24             	mov    %eax,(%esp)
 84206fb:	e8 46 85 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8420700:	c7 44 24 04 8b 00 00 	movl   $0x8b,0x4(%esp)
 8420707:	00 
 8420708:	89 04 24             	mov    %eax,(%esp)
 842070b:	e8 46 85 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8420710:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8420716:	89 04 24             	mov    %eax,(%esp)
 8420719:	e8 28 85 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842071e:	8b 55 10             	mov    0x10(%ebp),%edx
 8420721:	89 54 24 04          	mov    %edx,0x4(%esp)
 8420725:	89 04 24             	mov    %eax,(%esp)
 8420728:	e8 29 85 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842072d:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8420733:	89 04 24             	mov    %eax,(%esp)
 8420736:	e8 13 85 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842073b:	89 04 24             	mov    %eax,(%esp)
 842073e:	e8 9b 33 f2 ff       	call   8343ade <_ZN12CStreamGuard11GetInBufferI17SIG_CREATURE_ITEMEEPT_v>
 8420743:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8420746:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8420749:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842074c:	89 c6                	mov    %eax,%esi
 842074e:	b8 1d 00 00 00       	mov    $0x1d,%eax
 8420753:	89 d7                	mov    %edx,%edi
 8420755:	89 c1                	mov    %eax,%ecx
 8420757:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8420759:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8420760:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420763:	8b 40 30             	mov    0x30(%eax),%eax
 8420766:	89 44 24 08          	mov    %eax,0x8(%esp)
 842076a:	c7 44 24 04 10 c7 c4 	movl   $0x8c4c710,0x4(%esp)
 8420771:	08 
 8420772:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420775:	89 04 24             	mov    %eax,(%esp)
 8420778:	e8 43 3a fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842077d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8420784:	00 
 8420785:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420788:	89 04 24             	mov    %eax,(%esp)
 842078b:	e8 96 3b fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8420790:	0f b6 c0             	movzbl %al,%eax
 8420793:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8420796:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 842079a:	75 6c                	jne    8420808 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x420>
 842079c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842079f:	8b 58 48             	mov    0x48(%eax),%ebx
 84207a2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84207a9:	00 
 84207aa:	c7 44 24 08 29 57 00 	movl   $0x5729,0x8(%esp)
 84207b1:	00 
 84207b2:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 84207b9:	08 
 84207ba:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84207c0:	89 04 24             	mov    %eax,(%esp)
 84207c3:	e8 50 ef 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84207c8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84207cc:	c7 44 24 04 94 c7 c4 	movl   $0x8c4c794,0x4(%esp)
 84207d3:	08 
 84207d4:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84207da:	89 04 24             	mov    %eax,(%esp)
 84207dd:	e8 a6 ef 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84207e2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84207e7:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 84207ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 84207f1:	89 04 24             	mov    %eax,(%esp)
 84207f4:	e8 87 08 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 84207f9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84207fe:	be 00 00 00 00       	mov    $0x0,%esi
 8420803:	e9 ee 05 00 00       	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 8420808:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842080b:	89 04 24             	mov    %eax,(%esp)
 842080e:	e8 a9 3c fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8420813:	0f b6 c0             	movzbl %al,%eax
 8420816:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8420819:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 842081d:	75 6c                	jne    842088b <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x4a3>
 842081f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420822:	8b 58 48             	mov    0x48(%eax),%ebx
 8420825:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 842082c:	00 
 842082d:	c7 44 24 08 31 57 00 	movl   $0x5731,0x8(%esp)
 8420834:	00 
 8420835:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 842083c:	08 
 842083d:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8420843:	89 04 24             	mov    %eax,(%esp)
 8420846:	e8 cd ee 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 842084b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 842084f:	c7 44 24 04 d0 c7 c4 	movl   $0x8c4c7d0,0x4(%esp)
 8420856:	08 
 8420857:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 842085d:	89 04 24             	mov    %eax,(%esp)
 8420860:	e8 23 ef 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8420865:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842086a:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8420870:	89 54 24 04          	mov    %edx,0x4(%esp)
 8420874:	89 04 24             	mov    %eax,(%esp)
 8420877:	e8 04 08 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 842087c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420881:	be 00 00 00 00       	mov    $0x0,%esi
 8420886:	e9 6b 05 00 00       	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 842088b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842088e:	83 c0 2c             	add    $0x2c,%eax
 8420891:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420895:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842089c:	00 
 842089d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84208a0:	89 04 24             	mov    %eax,(%esp)
 84208a3:	e8 84 60 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84208a8:	0f b6 c0             	movzbl %al,%eax
 84208ab:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84208ae:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84208b2:	75 6c                	jne    8420920 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x538>
 84208b4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84208b7:	8b 58 48             	mov    0x48(%eax),%ebx
 84208ba:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84208c1:	00 
 84208c2:	c7 44 24 08 39 57 00 	movl   $0x5739,0x8(%esp)
 84208c9:	00 
 84208ca:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 84208d1:	08 
 84208d2:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84208d8:	89 04 24             	mov    %eax,(%esp)
 84208db:	e8 38 ee 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84208e0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84208e4:	c7 44 24 04 0c c8 c4 	movl   $0x8c4c80c,0x4(%esp)
 84208eb:	08 
 84208ec:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84208f2:	89 04 24             	mov    %eax,(%esp)
 84208f5:	e8 8e ee 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84208fa:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84208ff:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8420905:	89 54 24 04          	mov    %edx,0x4(%esp)
 8420909:	89 04 24             	mov    %eax,(%esp)
 842090c:	e8 6f 07 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8420911:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420916:	be 00 00 00 00       	mov    $0x0,%esi
 842091b:	e9 d6 04 00 00       	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 8420920:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8420923:	83 c0 08             	add    $0x8,%eax
 8420926:	89 44 24 08          	mov    %eax,0x8(%esp)
 842092a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8420931:	00 
 8420932:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420935:	89 04 24             	mov    %eax,(%esp)
 8420938:	e8 2d cd 02 00       	call   844d66a <_ZN5MySQL9get_ulongEiRm>
 842093d:	0f b6 c0             	movzbl %al,%eax
 8420940:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8420943:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8420947:	75 6c                	jne    84209b5 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x5cd>
 8420949:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842094c:	8b 58 48             	mov    0x48(%eax),%ebx
 842094f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8420956:	00 
 8420957:	c7 44 24 08 41 57 00 	movl   $0x5741,0x8(%esp)
 842095e:	00 
 842095f:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 8420966:	08 
 8420967:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 842096d:	89 04 24             	mov    %eax,(%esp)
 8420970:	e8 a3 ed 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8420975:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8420979:	c7 44 24 04 4c c8 c4 	movl   $0x8c4c84c,0x4(%esp)
 8420980:	08 
 8420981:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8420987:	89 04 24             	mov    %eax,(%esp)
 842098a:	e8 f9 ed 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 842098f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8420994:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 842099a:	89 54 24 04          	mov    %edx,0x4(%esp)
 842099e:	89 04 24             	mov    %eax,(%esp)
 84209a1:	e8 da 06 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 84209a6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84209ab:	be 00 00 00 00       	mov    $0x0,%esi
 84209b0:	e9 41 04 00 00       	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 84209b5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84209b8:	83 c0 34             	add    $0x34,%eax
 84209bb:	c7 44 24 0c 0d 00 00 	movl   $0xd,0xc(%esp)
 84209c2:	00 
 84209c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84209c7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84209ce:	00 
 84209cf:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84209d2:	89 04 24             	mov    %eax,(%esp)
 84209d5:	e8 10 c4 cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 84209da:	83 f0 01             	xor    $0x1,%eax
 84209dd:	84 c0                	test   %al,%al
 84209df:	74 6c                	je     8420a4d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x665>
 84209e1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84209e4:	8b 58 48             	mov    0x48(%eax),%ebx
 84209e7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84209ee:	00 
 84209ef:	c7 44 24 08 56 57 00 	movl   $0x5756,0x8(%esp)
 84209f6:	00 
 84209f7:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 84209fe:	08 
 84209ff:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8420a05:	89 04 24             	mov    %eax,(%esp)
 8420a08:	e8 0b ed 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8420a0d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8420a11:	c7 44 24 04 90 c8 c4 	movl   $0x8c4c890,0x4(%esp)
 8420a18:	08 
 8420a19:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8420a1f:	89 04 24             	mov    %eax,(%esp)
 8420a22:	e8 61 ed 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8420a27:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8420a2c:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8420a32:	89 54 24 04          	mov    %edx,0x4(%esp)
 8420a36:	89 04 24             	mov    %eax,(%esp)
 8420a39:	e8 42 06 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8420a3e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420a43:	be 00 00 00 00       	mov    $0x0,%esi
 8420a48:	e9 a9 03 00 00       	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 8420a4d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8420a50:	83 c0 44             	add    $0x44,%eax
 8420a53:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420a57:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8420a5e:	00 
 8420a5f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420a62:	89 04 24             	mov    %eax,(%esp)
 8420a65:	e8 c2 5e cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8420a6a:	0f b6 c0             	movzbl %al,%eax
 8420a6d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8420a70:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8420a74:	75 6c                	jne    8420ae2 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x6fa>
 8420a76:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420a79:	8b 58 48             	mov    0x48(%eax),%ebx
 8420a7c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8420a83:	00 
 8420a84:	c7 44 24 08 5e 57 00 	movl   $0x575e,0x8(%esp)
 8420a8b:	00 
 8420a8c:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 8420a93:	08 
 8420a94:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8420a9a:	89 04 24             	mov    %eax,(%esp)
 8420a9d:	e8 76 ec 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8420aa2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8420aa6:	c7 44 24 04 d0 c8 c4 	movl   $0x8c4c8d0,0x4(%esp)
 8420aad:	08 
 8420aae:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8420ab4:	89 04 24             	mov    %eax,(%esp)
 8420ab7:	e8 cc ec 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8420abc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8420ac1:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8420ac7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8420acb:	89 04 24             	mov    %eax,(%esp)
 8420ace:	e8 ad 05 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8420ad3:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420ad8:	be 00 00 00 00       	mov    $0x0,%esi
 8420add:	e9 14 03 00 00       	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 8420ae2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8420ae5:	83 c0 4c             	add    $0x4c,%eax
 8420ae8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420aec:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8420af3:	00 
 8420af4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420af7:	89 04 24             	mov    %eax,(%esp)
 8420afa:	e8 2d 5e cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8420aff:	0f b6 c0             	movzbl %al,%eax
 8420b02:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8420b05:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8420b09:	75 66                	jne    8420b71 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x789>
 8420b0b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420b0e:	8b 58 48             	mov    0x48(%eax),%ebx
 8420b11:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8420b18:	00 
 8420b19:	c7 44 24 08 66 57 00 	movl   $0x5766,0x8(%esp)
 8420b20:	00 
 8420b21:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 8420b28:	08 
 8420b29:	8d 45 88             	lea    -0x78(%ebp),%eax
 8420b2c:	89 04 24             	mov    %eax,(%esp)
 8420b2f:	e8 e4 eb 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8420b34:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8420b38:	c7 44 24 04 10 c9 c4 	movl   $0x8c4c910,0x4(%esp)
 8420b3f:	08 
 8420b40:	8d 45 88             	lea    -0x78(%ebp),%eax
 8420b43:	89 04 24             	mov    %eax,(%esp)
 8420b46:	e8 3d ec 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8420b4b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8420b50:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8420b56:	89 54 24 04          	mov    %edx,0x4(%esp)
 8420b5a:	89 04 24             	mov    %eax,(%esp)
 8420b5d:	e8 1e 05 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8420b62:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420b67:	be 00 00 00 00       	mov    $0x0,%esi
 8420b6c:	e9 85 02 00 00       	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 8420b71:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8420b74:	83 c0 14             	add    $0x14,%eax
 8420b77:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420b7b:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8420b82:	00 
 8420b83:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420b86:	89 04 24             	mov    %eax,(%esp)
 8420b89:	e8 02 5e cf ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8420b8e:	83 f0 01             	xor    $0x1,%eax
 8420b91:	84 c0                	test   %al,%al
 8420b93:	74 66                	je     8420bfb <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x813>
 8420b95:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420b98:	8b 58 48             	mov    0x48(%eax),%ebx
 8420b9b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8420ba2:	00 
 8420ba3:	c7 44 24 08 6d 57 00 	movl   $0x576d,0x8(%esp)
 8420baa:	00 
 8420bab:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 8420bb2:	08 
 8420bb3:	8d 45 98             	lea    -0x68(%ebp),%eax
 8420bb6:	89 04 24             	mov    %eax,(%esp)
 8420bb9:	e8 5a eb 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8420bbe:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8420bc2:	c7 44 24 04 50 c9 c4 	movl   $0x8c4c950,0x4(%esp)
 8420bc9:	08 
 8420bca:	8d 45 98             	lea    -0x68(%ebp),%eax
 8420bcd:	89 04 24             	mov    %eax,(%esp)
 8420bd0:	e8 b3 eb 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8420bd5:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8420bda:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8420be0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8420be4:	89 04 24             	mov    %eax,(%esp)
 8420be7:	e8 94 04 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8420bec:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420bf1:	be 00 00 00 00       	mov    $0x0,%esi
 8420bf6:	e9 fb 01 00 00       	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 8420bfb:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8420c01:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420c05:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8420c0c:	00 
 8420c0d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420c10:	89 04 24             	mov    %eax,(%esp)
 8420c13:	e8 14 5d cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8420c18:	83 f0 01             	xor    $0x1,%eax
 8420c1b:	84 c0                	test   %al,%al
 8420c1d:	74 66                	je     8420c85 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x89d>
 8420c1f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420c22:	8b 58 48             	mov    0x48(%eax),%ebx
 8420c25:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8420c2c:	00 
 8420c2d:	c7 44 24 08 75 57 00 	movl   $0x5775,0x8(%esp)
 8420c34:	00 
 8420c35:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 8420c3c:	08 
 8420c3d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8420c40:	89 04 24             	mov    %eax,(%esp)
 8420c43:	e8 d0 ea 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8420c48:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8420c4c:	c7 44 24 04 94 c9 c4 	movl   $0x8c4c994,0x4(%esp)
 8420c53:	08 
 8420c54:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8420c57:	89 04 24             	mov    %eax,(%esp)
 8420c5a:	e8 29 eb 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8420c5f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8420c64:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8420c6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8420c6e:	89 04 24             	mov    %eax,(%esp)
 8420c71:	e8 0a 04 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8420c76:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420c7b:	be 00 00 00 00       	mov    $0x0,%esi
 8420c80:	e9 71 01 00 00       	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 8420c85:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 8420c8b:	89 c2                	mov    %eax,%edx
 8420c8d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8420c90:	88 50 50             	mov    %dl,0x50(%eax)
 8420c93:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8420c99:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420c9d:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8420ca4:	00 
 8420ca5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420ca8:	89 04 24             	mov    %eax,(%esp)
 8420cab:	e8 7c 5c cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8420cb0:	83 f0 01             	xor    $0x1,%eax
 8420cb3:	84 c0                	test   %al,%al
 8420cb5:	74 66                	je     8420d1d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x935>
 8420cb7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420cba:	8b 58 48             	mov    0x48(%eax),%ebx
 8420cbd:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8420cc4:	00 
 8420cc5:	c7 44 24 08 7e 57 00 	movl   $0x577e,0x8(%esp)
 8420ccc:	00 
 8420ccd:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 8420cd4:	08 
 8420cd5:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8420cd8:	89 04 24             	mov    %eax,(%esp)
 8420cdb:	e8 38 ea 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8420ce0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8420ce4:	c7 44 24 04 d4 c9 c4 	movl   $0x8c4c9d4,0x4(%esp)
 8420ceb:	08 
 8420cec:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8420cef:	89 04 24             	mov    %eax,(%esp)
 8420cf2:	e8 91 ea 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8420cf7:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8420cfc:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8420d02:	89 54 24 04          	mov    %edx,0x4(%esp)
 8420d06:	89 04 24             	mov    %eax,(%esp)
 8420d09:	e8 72 03 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8420d0e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420d13:	be 00 00 00 00       	mov    $0x0,%esi
 8420d18:	e9 d9 00 00 00       	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 8420d1d:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8420d23:	89 c2                	mov    %eax,%edx
 8420d25:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8420d28:	88 50 52             	mov    %dl,0x52(%eax)
 8420d2b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8420d2e:	83 c0 54             	add    $0x54,%eax
 8420d31:	89 44 24 08          	mov    %eax,0x8(%esp)
 8420d35:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8420d3c:	00 
 8420d3d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8420d40:	89 04 24             	mov    %eax,(%esp)
 8420d43:	e8 e4 5b cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8420d48:	83 f0 01             	xor    $0x1,%eax
 8420d4b:	84 c0                	test   %al,%al
 8420d4d:	74 63                	je     8420db2 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0x9ca>
 8420d4f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8420d52:	8b 58 48             	mov    0x48(%eax),%ebx
 8420d55:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8420d5c:	00 
 8420d5d:	c7 44 24 08 94 57 00 	movl   $0x5794,0x8(%esp)
 8420d64:	00 
 8420d65:	c7 44 24 04 e0 c7 c5 	movl   $0x8c5c7e0,0x4(%esp)
 8420d6c:	08 
 8420d6d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8420d70:	89 04 24             	mov    %eax,(%esp)
 8420d73:	e8 a0 e9 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8420d78:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8420d7c:	c7 44 24 04 14 ca c4 	movl   $0x8c4ca14,0x4(%esp)
 8420d83:	08 
 8420d84:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8420d87:	89 04 24             	mov    %eax,(%esp)
 8420d8a:	e8 f9 e9 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8420d8f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8420d94:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8420d9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8420d9e:	89 04 24             	mov    %eax,(%esp)
 8420da1:	e8 da 02 ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8420da6:	bb 00 00 00 00       	mov    $0x0,%ebx
 8420dab:	be 00 00 00 00       	mov    $0x0,%esi
 8420db0:	eb 44                	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 8420db2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8420db7:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8420dbd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8420dc1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8420dc8:	00 
 8420dc9:	89 04 24             	mov    %eax,(%esp)
 8420dcc:	e8 0d 02 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8420dd1:	be 01 00 00 00       	mov    $0x1,%esi
 8420dd6:	eb 1e                	jmp    8420df6 <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa0e>
 8420dd8:	89 d3                	mov    %edx,%ebx
 8420dda:	89 c6                	mov    %eax,%esi
 8420ddc:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8420de2:	89 04 24             	mov    %eax,(%esp)
 8420de5:	e8 e8 ba 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8420dea:	89 f0                	mov    %esi,%eax
 8420dec:	89 da                	mov    %ebx,%edx
 8420dee:	89 04 24             	mov    %eax,(%esp)
 8420df1:	e8 5a 29 6c 00       	call   8ae3750 <_Unwind_Resume>
 8420df6:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8420dfc:	89 04 24             	mov    %eax,(%esp)
 8420dff:	e8 ce ba 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8420e04:	85 f6                	test   %esi,%esi
 8420e06:	74 05                	je     8420e0d <_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream+0xa25>
 8420e08:	bb 01 00 00 00       	mov    $0x1,%ebx
 8420e0d:	89 d8                	mov    %ebx,%eax
 8420e0f:	81 c4 ec 04 00 00    	add    $0x4ec,%esp
 8420e15:	5b                   	pop    %ebx
 8420e16:	5e                   	pop    %esi
 8420e17:	5f                   	pop    %edi
 8420e18:	5d                   	pop    %ebp
 8420e19:	c3                   	ret

```

```c
// DB_UpdateCreatureItem::dispatch @ 0x84203e8

/* DB_UpdateCreatureItem::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateCreatureItem::dispatch(DB_UpdateCreatureItem *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 uVar6;
  SIG_CREATURE_ITEM *pSVar7;
  char *pcVar8;
  SIG_CREATURE_ITEM *pSVar9;
  byte bVar10;
  char local_4ec [1024];
  SIG_CREATURE_ITEM local_ec [4];
  SIG_CREATURE_ITEM local_e8 [4];
  CStreamGuard local_e4 [8];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  SIG_CREATURE_ITEM *local_2c;
  MySQL *local_28;
  SIG_CREATURE_ITEM *local_24;
  uint local_20;
  
  bVar10 = 0;
  local_2c = Stream::GetOutBuffer<SIG_CREATURE_ITEM>(param_3);
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  iVar5 = *(int *)(local_2c + 100);
  if (iVar5 == 3) {
    if (*(int *)(local_2c + 0x68) == 1) {
      MySQL::set_query(local_28,"upDate inventory set creature_flag=%d where charac_no=%d",0,
                       *(undefined4 *)(local_2c + 0x6c));
      cVar2 = MySQL::exec(local_28,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
  }
  else if (iVar5 < 4) {
    if (iVar5 == 1) {
      if (*(int *)(local_2c + 0x68) == 0) {
        MySQL::set_query(local_28,"upDate inventory set creature_flag=%d where charac_no=%d",1,
                         *(undefined4 *)(local_2c + 0x48));
        cVar2 = MySQL::exec(local_28,true);
        if (cVar2 != '\x01') {
          return 0;
        }
      }
      if (*(int *)(local_2c + 0x70) == 1) {
        MySQL::set_query(local_28,"upDate inventory set creature_flag=%d where charac_no=%d",0,
                         *(undefined4 *)(local_2c + 0x6c));
        cVar2 = MySQL::exec(local_28,true);
        if (cVar2 != '\x01') {
          return 0;
        }
      }
    }
  }
  else if (iVar5 == 4) {
    if (*(int *)(local_2c + 0x68) == 0) {
      MySQL::set_query(local_28,"upDate inventory set creature_flag=%d where charac_no=%d",1,
                       *(undefined4 *)(local_2c + 0x48));
      cVar2 = MySQL::exec(local_28,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
  }
  else if ((iVar5 == 5) && (*(int *)(local_2c + 0x68) == 1)) {
    MySQL::set_query(local_28,"upDate inventory set creature_flag=%d where charac_no=%d",0,
                     *(undefined4 *)(local_2c + 0x6c));
    cVar2 = MySQL::exec(local_28,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  iVar5 = 0x100;
  pcVar8 = local_4ec;
  while( true ) {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
  }
  GetField(this,local_28,local_4ec,local_2c);
  MySQL::set_query(local_28,"upDate creature_items set %s where ui_id=%d",local_4ec,
                   *(undefined4 *)(local_2c + 0x30));
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 == '\x01') {
    if ((*(int *)(local_2c + 100) == 4) || (*(int *)(local_2c + 100) == 1)) {
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5710);
      CStreamGuard::CStreamGuard(local_e4,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
                    /* try { // try from 0842070b to 08420dd0 has its CatchHandler @ 08420dd8 */
      CStreamGuard::operator<<(pCVar4,0x8b);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
      CStreamGuard::operator<<(pCVar4,param_2);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_e4);
      local_24 = CStreamGuard::GetInBuffer<SIG_CREATURE_ITEM>(pCVar4);
      pSVar7 = local_2c;
      pSVar9 = local_24;
      for (iVar5 = 0x1d; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pSVar9 = *(undefined4 *)pSVar7;
        pSVar7 = pSVar7 + (uint)bVar10 * -8 + 4;
        pSVar9 = pSVar9 + (uint)bVar10 * -8 + 4;
      }
      local_20 = 0;
      MySQL::set_query(local_28,
                       "seLect slot,it_id,name,stomach,exp,endurance,creature_type,no_charge,unix_timestamp(expire_date) from creature_items where ui_id=%d"
                       ,*(undefined4 *)(local_2c + 0x30));
      local_20 = MySQL::exec(local_28,true);
      local_20 = local_20 & 0xff;
      if (local_20 == 0) {
        uVar6 = *(undefined4 *)(local_2c + 0x48);
        cMyTrace::cMyTrace(local_dc,
                           "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)",0x5729,
                           5);
        cMyTrace::operator()
                  (local_dc,"DB_UpdateCreatureItem::dispatch, exec() ERROR charac_no=%u",uVar6);
        StreamPool::Free(GlobalData::s_stream_pool,local_e4);
        unaff_EBX = 0;
        bVar1 = false;
      }
      else {
        local_20 = MySQL::fetch(local_28);
        local_20 = local_20 & 0xff;
        if (local_20 == 0) {
          uVar6 = *(undefined4 *)(local_2c + 0x48);
          cMyTrace::cMyTrace(local_cc,
                             "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)",
                             0x5731,5);
          cMyTrace::operator()
                    (local_cc,"DB_UpdateCreatureItem::dispatch, fetch() ERROR charac_no=%u",uVar6);
          StreamPool::Free(GlobalData::s_stream_pool,local_e4);
          unaff_EBX = 0;
          bVar1 = false;
        }
        else {
          local_20 = MySQL::get_int(local_28,0,(int *)(local_24 + 0x2c));
          local_20 = local_20 & 0xff;
          if (local_20 == 0) {
            uVar6 = *(undefined4 *)(local_2c + 0x48);
            cMyTrace::cMyTrace(local_bc,
                               "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)",
                               0x5739,5);
            cMyTrace::operator()
                      (local_bc,"DB_UpdateCreatureItem::dispatch, get_int(0) ERROR charac_no=%u",
                       uVar6);
            StreamPool::Free(GlobalData::s_stream_pool,local_e4);
            unaff_EBX = 0;
            bVar1 = false;
          }
          else {
            local_20 = MySQL::get_ulong(local_28,1,(ulong *)(local_24 + 8));
            local_20 = local_20 & 0xff;
            if (local_20 == 0) {
              uVar6 = *(undefined4 *)(local_2c + 0x48);
              cMyTrace::cMyTrace(local_ac,
                                 "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)",
                                 0x5741,5);
              cMyTrace::operator()
                        (local_ac,
                         "DB_UpdateCreatureItem::dispatch, get_ushort(1) ERROR charac_no=%u",uVar6);
              StreamPool::Free(GlobalData::s_stream_pool,local_e4);
              unaff_EBX = 0;
              bVar1 = false;
            }
            else {
              cVar2 = MySQL::get_str(local_28,2,(char *)(local_24 + 0x34),0xd);
              if (cVar2 == '\x01') {
                local_20 = MySQL::get_int(local_28,3,(int *)(local_24 + 0x44));
                local_20 = local_20 & 0xff;
                if (local_20 == 0) {
                  uVar6 = *(undefined4 *)(local_2c + 0x48);
                  cMyTrace::cMyTrace(local_8c,
                                     "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                     ,0x575e,5);
                  cMyTrace::operator()
                            (local_8c,
                             "DB_UpdateCreatureItem::dispatch, get_int(3) ERROR charac_no=%u",uVar6)
                  ;
                  StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                  unaff_EBX = 0;
                  bVar1 = false;
                }
                else {
                  local_20 = MySQL::get_int(local_28,4,(int *)(local_24 + 0x4c));
                  local_20 = local_20 & 0xff;
                  if (local_20 == 0) {
                    uVar6 = *(undefined4 *)(local_2c + 0x48);
                    cMyTrace::cMyTrace(local_7c,
                                       "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                       ,0x5766,5);
                    cMyTrace::operator()
                              (local_7c,
                               "DB_UpdateCreatureItem::dispatch, get_int(4) ERROR charac_no=%u",
                               uVar6);
                    StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                    unaff_EBX = 0;
                    bVar1 = false;
                  }
                  else {
                    cVar2 = MySQL::get_ushort(local_28,5,(ushort *)(local_24 + 0x14));
                    if (cVar2 == '\x01') {
                      cVar2 = MySQL::get_int(local_28,6,(int *)local_e8);
                      if (cVar2 == '\x01') {
                        local_24[0x50] = local_e8[0];
                        cVar2 = MySQL::get_int(local_28,7,(int *)local_ec);
                        if (cVar2 == '\x01') {
                          local_24[0x52] = local_ec[0];
                          cVar2 = MySQL::get_int(local_28,8,(int *)(local_24 + 0x54));
                          if (cVar2 == '\x01') {
                            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e4);
                            bVar1 = true;
                          }
                          else {
                            uVar6 = *(undefined4 *)(local_2c + 0x48);
                            cMyTrace::cMyTrace(local_3c,
                                               "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                               ,0x5794,5);
                            cMyTrace::operator()
                                      (local_3c,
                                       "DB_UpdateCreatureItem::dispatch, get_int(9) ERROR charac_no=%u"
                                       ,uVar6);
                            StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                            unaff_EBX = 0;
                            bVar1 = false;
                          }
                        }
                        else {
                          uVar6 = *(undefined4 *)(local_2c + 0x48);
                          cMyTrace::cMyTrace(local_4c,
                                             "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                             ,0x577e,5);
                          cMyTrace::operator()
                                    (local_4c,
                                     "DB_UpdateCreatureItem::dispatch, get_int(7) ERROR charac_no=%u"
                                     ,uVar6);
                          StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                          unaff_EBX = 0;
                          bVar1 = false;
                        }
                      }
                      else {
                        uVar6 = *(undefined4 *)(local_2c + 0x48);
                        cMyTrace::cMyTrace(local_5c,
                                           "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                           ,0x5775,5);
                        cMyTrace::operator()
                                  (local_5c,
                                   "DB_UpdateCreatureItem::dispatch, get_int(6) ERROR charac_no=%u",
                                   uVar6);
                        StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                        unaff_EBX = 0;
                        bVar1 = false;
                      }
                    }
                    else {
                      uVar6 = *(undefined4 *)(local_2c + 0x48);
                      cMyTrace::cMyTrace(local_6c,
                                         "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                         ,0x576d,5);
                      cMyTrace::operator()
                                (local_6c,
                                 "DB_UpdateCreatureItem::dispatch, get_ushort(5) ERROR charac_no=%u"
                                 ,uVar6);
                      StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                      unaff_EBX = 0;
                      bVar1 = false;
                    }
                  }
                }
              }
              else {
                uVar6 = *(undefined4 *)(local_2c + 0x48);
                cMyTrace::cMyTrace(local_9c,
                                   "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                   ,0x5756,5);
                cMyTrace::operator()
                          (local_9c,"DB_UpdateCreatureItem::dispatch, get_int(2) ERROR charac_no=%u"
                           ,uVar6);
                StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                unaff_EBX = 0;
                bVar1 = false;
              }
            }
          }
        }
      }
      CStreamGuard::~CStreamGuard(local_e4);
      if (!bVar1) {
        return unaff_EBX;
      }
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

