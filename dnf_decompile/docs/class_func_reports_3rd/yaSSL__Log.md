# yaSSL__Log

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Log

```asm
// === 087a1440 yaSSL::Log::Log  [0x087a1440-0x87a144f] ===
 87a1440:	55                   	push   %ebp
 87a1441:	89 e5                	mov    %esp,%ebp
 87a1443:	5d                   	pop    %ebp
 87a1444:	c3                   	ret
 87a1445:	90                   	nop
 87a1446:	8d 76 00             	lea    0x0(%esi),%esi
 87a1449:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Log::Log @ 0x87a1440

/* yaSSL::Log::Log(char const*) */

void __thiscall yaSSL::Log::Log(Log *this,char *param_1)

{
  return;
}

```

---

## ShowData

```asm
// === 087a1480 yaSSL::Log::ShowData  [0x087a1480-0x87a148f] ===
 87a1480:	55                   	push   %ebp
 87a1481:	89 e5                	mov    %esp,%ebp
 87a1483:	5d                   	pop    %ebp
 87a1484:	c3                   	ret
 87a1485:	90                   	nop
 87a1486:	90                   	nop
 87a1487:	90                   	nop
 87a1488:	90                   	nop
 87a1489:	90                   	nop
 87a148a:	90                   	nop
 87a148b:	90                   	nop
 87a148c:	90                   	nop
 87a148d:	90                   	nop
 87a148e:	90                   	nop
 87a148f:	90                   	nop

```

```c
// yaSSL::Log::ShowData @ 0x87a1480

/* yaSSL::Log::ShowData(unsigned int, bool) */

void yaSSL::Log::ShowData(uint param_1,bool param_2)

{
  return;
}

```

---

## ShowTCP

```asm
// === 087a1470 yaSSL::Log::ShowTCP  [0x087a1470-0x87a147f] ===
 87a1470:	55                   	push   %ebp
 87a1471:	89 e5                	mov    %esp,%ebp
 87a1473:	5d                   	pop    %ebp
 87a1474:	c3                   	ret
 87a1475:	90                   	nop
 87a1476:	8d 76 00             	lea    0x0(%esi),%esi
 87a1479:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Log::ShowTCP @ 0x87a1470

/* yaSSL::Log::ShowTCP(int, bool) */

void yaSSL::Log::ShowTCP(int param_1,bool param_2)

{
  return;
}

```

---

## Trace

```asm
// === 087a1460 yaSSL::Log::Trace  [0x087a1460-0x87a146f] ===
 87a1460:	55                   	push   %ebp
 87a1461:	89 e5                	mov    %esp,%ebp
 87a1463:	5d                   	pop    %ebp
 87a1464:	c3                   	ret
 87a1465:	90                   	nop
 87a1466:	8d 76 00             	lea    0x0(%esi),%esi
 87a1469:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Log::Trace @ 0x87a1460

/* yaSSL::Log::Trace(char const*) */

void yaSSL::Log::Trace(char *param_1)

{
  return;
}

```

---

## ~Log

```asm
// === 087a1450 yaSSL::Log::~Log  [0x087a1450-0x87a145f] ===
 87a1450:	55                   	push   %ebp
 87a1451:	89 e5                	mov    %esp,%ebp
 87a1453:	5d                   	pop    %ebp
 87a1454:	c3                   	ret
 87a1455:	90                   	nop
 87a1456:	8d 76 00             	lea    0x0(%esi),%esi
 87a1459:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Log::~Log @ 0x87a1450

/* yaSSL::Log::~Log() */

void __thiscall yaSSL::Log::~Log(Log *this)

{
  return;
}

```

