# CDungeonClearTracer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## IncrementKilledBossCount

```asm
// === 082fee7a CDungeonClearTracer::IncrementKilledBossCount  [0x082fee7a-0x82fee8d] ===
 82fee7a:	55                   	push   %ebp
 82fee7b:	89 e5                	mov    %esp,%ebp
 82fee7d:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee80:	8b 40 08             	mov    0x8(%eax),%eax
 82fee83:	8d 50 01             	lea    0x1(%eax),%edx
 82fee86:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee89:	89 50 08             	mov    %edx,0x8(%eax)
 82fee8c:	5d                   	pop    %ebp
 82fee8d:	c3                   	ret

```

```c
// CDungeonClearTracer::IncrementKilledBossCount @ 0x82fee7a

/* CDungeonClearTracer::IncrementKilledBossCount() */

void __thiscall CDungeonClearTracer::IncrementKilledBossCount(CDungeonClearTracer *this)

{
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

```

---

## IncrementKilledMonsterCount

```asm
// === 082fee8e CDungeonClearTracer::IncrementKilledMonsterCount  [0x082fee8e-0x82feea1] ===
 82fee8e:	55                   	push   %ebp
 82fee8f:	89 e5                	mov    %esp,%ebp
 82fee91:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee94:	8b 40 10             	mov    0x10(%eax),%eax
 82fee97:	8d 50 01             	lea    0x1(%eax),%edx
 82fee9a:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee9d:	89 50 10             	mov    %edx,0x10(%eax)
 82feea0:	5d                   	pop    %ebp
 82feea1:	c3                   	ret

```

```c
// CDungeonClearTracer::IncrementKilledMonsterCount @ 0x82fee8e

/* CDungeonClearTracer::IncrementKilledMonsterCount() */

void __thiscall CDungeonClearTracer::IncrementKilledMonsterCount(CDungeonClearTracer *this)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}

```

---

## IsKilledBoss

```asm
// === 082feea2 CDungeonClearTracer::IsKilledBoss  [0x082feea2-0x82feecd] ===
 82feea2:	55                   	push   %ebp
 82feea3:	89 e5                	mov    %esp,%ebp
 82feea5:	8b 45 08             	mov    0x8(%ebp),%eax
 82feea8:	8b 40 08             	mov    0x8(%eax),%eax
 82feeab:	85 c0                	test   %eax,%eax
 82feead:	7e 17                	jle    82feec6 <_ZN19CDungeonClearTracer12IsKilledBossEv+0x24>
 82feeaf:	8b 45 08             	mov    0x8(%ebp),%eax
 82feeb2:	8b 50 08             	mov    0x8(%eax),%edx
 82feeb5:	8b 45 08             	mov    0x8(%ebp),%eax
 82feeb8:	8b 40 04             	mov    0x4(%eax),%eax
 82feebb:	39 c2                	cmp    %eax,%edx
 82feebd:	7c 07                	jl     82feec6 <_ZN19CDungeonClearTracer12IsKilledBossEv+0x24>
 82feebf:	b8 01 00 00 00       	mov    $0x1,%eax
 82feec4:	eb 05                	jmp    82feecb <_ZN19CDungeonClearTracer12IsKilledBossEv+0x29>
 82feec6:	b8 00 00 00 00       	mov    $0x0,%eax
 82feecb:	5d                   	pop    %ebp
 82feecc:	c3                   	ret
 82feecd:	90                   	nop

```

```c
// CDungeonClearTracer::IsKilledBoss @ 0x82feea2

/* CDungeonClearTracer::IsKilledBoss() */

undefined4 __thiscall CDungeonClearTracer::IsKilledBoss(CDungeonClearTracer *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 8) < 1) || (*(int *)(this + 8) < *(int *)(this + 4))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## Reset

```asm
// === 082feece CDungeonClearTracer::Reset  [0x082feece-0x82fef11] ===
 82feece:	55                   	push   %ebp
 82feecf:	89 e5                	mov    %esp,%ebp
 82feed1:	8b 45 08             	mov    0x8(%ebp),%eax
 82feed4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 82feeda:	8b 45 08             	mov    0x8(%ebp),%eax
 82feedd:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 82feee4:	8b 45 08             	mov    0x8(%ebp),%eax
 82feee7:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 82feeee:	8b 45 08             	mov    0x8(%ebp),%eax
 82feef1:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 82feef8:	8b 45 08             	mov    0x8(%ebp),%eax
 82feefb:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 82fef02:	8b 45 08             	mov    0x8(%ebp),%eax
 82fef05:	c6 40 14 00          	movb   $0x0,0x14(%eax)
 82fef09:	8b 45 08             	mov    0x8(%ebp),%eax
 82fef0c:	c6 40 15 00          	movb   $0x0,0x15(%eax)
 82fef10:	5d                   	pop    %ebp
 82fef11:	c3                   	ret

```

```c
// CDungeonClearTracer::Reset @ 0x82feece

/* CDungeonClearTracer::Reset() */

void __thiscall CDungeonClearTracer::Reset(CDungeonClearTracer *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (CDungeonClearTracer)0x0;
  this[0x15] = (CDungeonClearTracer)0x0;
  return;
}

```

---

## SetClearedDungeon

```asm
// === 082fee4a CDungeonClearTracer::SetClearedDungeon  [0x082fee4a-0x82fee61] ===
 82fee4a:	55                   	push   %ebp
 82fee4b:	89 e5                	mov    %esp,%ebp
 82fee4d:	83 ec 04             	sub    $0x4,%esp
 82fee50:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fee53:	88 45 fc             	mov    %al,-0x4(%ebp)
 82fee56:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee59:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 82fee5d:	88 50 14             	mov    %dl,0x14(%eax)
 82fee60:	c9                   	leave
 82fee61:	c3                   	ret

```

```c
// CDungeonClearTracer::SetClearedDungeon @ 0x82fee4a

/* CDungeonClearTracer::SetClearedDungeon(bool) */

void __thiscall CDungeonClearTracer::SetClearedDungeon(CDungeonClearTracer *this,bool param_1)

{
  this[0x14] = (CDungeonClearTracer)param_1;
  return;
}

```

---

## SetEndPoint

```asm
// === 082fee62 CDungeonClearTracer::SetEndPoint  [0x082fee62-0x82fee79] ===
 82fee62:	55                   	push   %ebp
 82fee63:	89 e5                	mov    %esp,%ebp
 82fee65:	83 ec 04             	sub    $0x4,%esp
 82fee68:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fee6b:	88 45 fc             	mov    %al,-0x4(%ebp)
 82fee6e:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee71:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 82fee75:	88 50 15             	mov    %dl,0x15(%eax)
 82fee78:	c9                   	leave
 82fee79:	c3                   	ret

```

```c
// CDungeonClearTracer::SetEndPoint @ 0x82fee62

/* CDungeonClearTracer::SetEndPoint(bool) */

void __thiscall CDungeonClearTracer::SetEndPoint(CDungeonClearTracer *this,bool param_1)

{
  this[0x15] = (CDungeonClearTracer)param_1;
  return;
}

```

---

## SetKilledBossCount

```asm
// === 082fee20 CDungeonClearTracer::SetKilledBossCount  [0x082fee20-0x82fee2d] ===
 82fee20:	55                   	push   %ebp
 82fee21:	89 e5                	mov    %esp,%ebp
 82fee23:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee26:	8b 55 0c             	mov    0xc(%ebp),%edx
 82fee29:	89 50 08             	mov    %edx,0x8(%eax)
 82fee2c:	5d                   	pop    %ebp
 82fee2d:	c3                   	ret

```

```c
// CDungeonClearTracer::SetKilledBossCount @ 0x82fee20

/* CDungeonClearTracer::SetKilledBossCount(int) */

void __thiscall CDungeonClearTracer::SetKilledBossCount(CDungeonClearTracer *this,int param_1)

{
  *(int *)(this + 8) = param_1;
  return;
}

```

---

## SetKilledMonsterCount

```asm
// === 082fee3c CDungeonClearTracer::SetKilledMonsterCount  [0x082fee3c-0x82fee49] ===
 82fee3c:	55                   	push   %ebp
 82fee3d:	89 e5                	mov    %esp,%ebp
 82fee3f:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee42:	8b 55 0c             	mov    0xc(%ebp),%edx
 82fee45:	89 50 10             	mov    %edx,0x10(%eax)
 82fee48:	5d                   	pop    %ebp
 82fee49:	c3                   	ret

```

```c
// CDungeonClearTracer::SetKilledMonsterCount @ 0x82fee3c

/* CDungeonClearTracer::SetKilledMonsterCount(int) */

void __thiscall CDungeonClearTracer::SetKilledMonsterCount(CDungeonClearTracer *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  return;
}

```

---

## SetMapId

```asm
// === 082fee04 CDungeonClearTracer::SetMapId  [0x082fee04-0x82fee11] ===
 82fee04:	55                   	push   %ebp
 82fee05:	89 e5                	mov    %esp,%ebp
 82fee07:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee0a:	8b 55 0c             	mov    0xc(%ebp),%edx
 82fee0d:	89 10                	mov    %edx,(%eax)
 82fee0f:	5d                   	pop    %ebp
 82fee10:	c3                   	ret
 82fee11:	90                   	nop

```

```c
// CDungeonClearTracer::SetMapId @ 0x82fee04

/* CDungeonClearTracer::SetMapId(int) */

void __thiscall CDungeonClearTracer::SetMapId(CDungeonClearTracer *this,int param_1)

{
  *(int *)this = param_1;
  return;
}

```

---

## SetMaxBossCount

```asm
// === 082fee12 CDungeonClearTracer::SetMaxBossCount  [0x082fee12-0x82fee1f] ===
 82fee12:	55                   	push   %ebp
 82fee13:	89 e5                	mov    %esp,%ebp
 82fee15:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee18:	8b 55 0c             	mov    0xc(%ebp),%edx
 82fee1b:	89 50 04             	mov    %edx,0x4(%eax)
 82fee1e:	5d                   	pop    %ebp
 82fee1f:	c3                   	ret

```

```c
// CDungeonClearTracer::SetMaxBossCount @ 0x82fee12

/* CDungeonClearTracer::SetMaxBossCount(int) */

void __thiscall CDungeonClearTracer::SetMaxBossCount(CDungeonClearTracer *this,int param_1)

{
  *(int *)(this + 4) = param_1;
  return;
}

```

---

## SetMaxMonsterCount

```asm
// === 082fee2e CDungeonClearTracer::SetMaxMonsterCount  [0x082fee2e-0x82fee3b] ===
 82fee2e:	55                   	push   %ebp
 82fee2f:	89 e5                	mov    %esp,%ebp
 82fee31:	8b 45 08             	mov    0x8(%ebp),%eax
 82fee34:	8b 55 0c             	mov    0xc(%ebp),%edx
 82fee37:	89 50 0c             	mov    %edx,0xc(%eax)
 82fee3a:	5d                   	pop    %ebp
 82fee3b:	c3                   	ret

```

```c
// CDungeonClearTracer::SetMaxMonsterCount @ 0x82fee2e

/* CDungeonClearTracer::SetMaxMonsterCount(int) */

void __thiscall CDungeonClearTracer::SetMaxMonsterCount(CDungeonClearTracer *this,int param_1)

{
  *(int *)(this + 0xc) = param_1;
  return;
}

```

---

## Trace

```asm
// === 082fed32 CDungeonClearTracer::Trace  [0x082fed32-0x82fee03] ===
 82fed32:	55                   	push   %ebp
 82fed33:	89 e5                	mov    %esp,%ebp
 82fed35:	57                   	push   %edi
 82fed36:	56                   	push   %esi
 82fed37:	53                   	push   %ebx
 82fed38:	83 ec 5c             	sub    $0x5c,%esp
 82fed3b:	8b 45 08             	mov    0x8(%ebp),%eax
 82fed3e:	89 04 24             	mov    %eax,(%esp)
 82fed41:	e8 5c 01 00 00       	call   82feea2 <_ZN19CDungeonClearTracer12IsKilledBossEv>
 82fed46:	84 c0                	test   %al,%al
 82fed48:	0f 84 a2 00 00 00    	je     82fedf0 <_ZN19CDungeonClearTracer5TraceEPKc+0xbe>
 82fed4e:	8b 45 08             	mov    0x8(%ebp),%eax
 82fed51:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 82fed55:	0f b6 c0             	movzbl %al,%eax
 82fed58:	89 45 c8             	mov    %eax,-0x38(%ebp)
 82fed5b:	8b 45 08             	mov    0x8(%ebp),%eax
 82fed5e:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 82fed62:	0f b6 c0             	movzbl %al,%eax
 82fed65:	89 45 cc             	mov    %eax,-0x34(%ebp)
 82fed68:	8b 45 08             	mov    0x8(%ebp),%eax
 82fed6b:	8b 40 0c             	mov    0xc(%eax),%eax
 82fed6e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82fed71:	8b 45 08             	mov    0x8(%ebp),%eax
 82fed74:	8b 40 10             	mov    0x10(%eax),%eax
 82fed77:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82fed7a:	8b 45 08             	mov    0x8(%ebp),%eax
 82fed7d:	8b 78 04             	mov    0x4(%eax),%edi
 82fed80:	8b 45 08             	mov    0x8(%ebp),%eax
 82fed83:	8b 70 08             	mov    0x8(%eax),%esi
 82fed86:	8b 45 08             	mov    0x8(%ebp),%eax
 82fed89:	8b 18                	mov    (%eax),%ebx
 82fed8b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82fed92:	00 
 82fed93:	c7 44 24 08 08 01 00 	movl   $0x108,0x8(%esp)
 82fed9a:	00 
 82fed9b:	c7 44 24 04 40 3d c2 	movl   $0x8c23d40,0x4(%esp)
 82feda2:	08 
 82feda3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82feda6:	89 04 24             	mov    %eax,(%esp)
 82feda9:	e8 6a 09 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82fedae:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82fedb1:	89 44 24 24          	mov    %eax,0x24(%esp)
 82fedb5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 82fedb8:	89 44 24 20          	mov    %eax,0x20(%esp)
 82fedbc:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82fedbf:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82fedc3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82fedc6:	89 44 24 18          	mov    %eax,0x18(%esp)
 82fedca:	89 7c 24 14          	mov    %edi,0x14(%esp)
 82fedce:	89 74 24 10          	mov    %esi,0x10(%esp)
 82fedd2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82fedd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fedd9:	89 44 24 08          	mov    %eax,0x8(%esp)
 82feddd:	c7 44 24 04 f8 1a c2 	movl   $0x8c21af8,0x4(%esp)
 82fede4:	08 
 82fede5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82fede8:	89 04 24             	mov    %eax,(%esp)
 82fedeb:	e8 98 09 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82fedf0:	8b 45 08             	mov    0x8(%ebp),%eax
 82fedf3:	89 04 24             	mov    %eax,(%esp)
 82fedf6:	e8 d3 00 00 00       	call   82feece <_ZN19CDungeonClearTracer5ResetEv>
 82fedfb:	83 c4 5c             	add    $0x5c,%esp
 82fedfe:	5b                   	pop    %ebx
 82fedff:	5e                   	pop    %esi
 82fee00:	5f                   	pop    %edi
 82fee01:	5d                   	pop    %ebp
 82fee02:	c3                   	ret
 82fee03:	90                   	nop

```

```c
// CDungeonClearTracer::Trace @ 0x82fed32

/* CDungeonClearTracer::Trace(char const*) */

void __thiscall CDungeonClearTracer::Trace(CDungeonClearTracer *this,char *param_1)

{
  CDungeonClearTracer CVar1;
  CDungeonClearTracer CVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  cMyTrace local_2c [28];
  
  cVar8 = IsKilledBoss(this);
  if (cVar8 != '\0') {
    CVar1 = this[0x15];
    CVar2 = this[0x14];
    uVar3 = *(undefined4 *)(this + 0xc);
    uVar4 = *(undefined4 *)(this + 0x10);
    uVar5 = *(undefined4 *)(this + 4);
    uVar6 = *(undefined4 *)(this + 8);
    uVar7 = *(undefined4 *)this;
    cMyTrace::cMyTrace(local_2c,"void CDungeonClearTracer::Trace(const char*)",0x108,0);
    cMyTrace::operator()
              (local_2c,
               "FUNC(%s) Map ID(%d), Boss(%d/%d), Monster(%d/%d) Cleared(%d), End Point(%d)\n",
               param_1,uVar7,uVar6,uVar5,uVar4,uVar3,(uint)(byte)CVar2,(uint)(byte)CVar1);
  }
  Reset(this);
  return;
}

```

