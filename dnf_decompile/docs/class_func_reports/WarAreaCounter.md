# WarAreaCounter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## GetCurrenTimeTable

```asm
// === 089024c4 WarAreaCounter::GetCurrenTimeTable  [0x089024c4-0x8902542] ===
 89024c4:	55                   	push   %ebp
 89024c5:	89 e5                	mov    %esp,%ebp
 89024c7:	83 ec 58             	sub    $0x58,%esp
 89024ca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 89024cd:	89 04 24             	mov    %eax,(%esp)
 89024d0:	e8 7b b2 77 ff       	call   807d750 <time@plt>
 89024d5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 89024d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 89024dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 89024df:	89 04 24             	mov    %eax,(%esp)
 89024e2:	e8 79 be 77 ff       	call   807e360 <localtime_r@plt>
 89024e7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 89024ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 89024ed:	8b 40 08             	mov    0x8(%eax),%eax
 89024f0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 89024f3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 89024fa:	eb 29                	jmp    8902525 <_ZN14WarAreaCounter18GetCurrenTimeTableEv+0x61>
 89024fc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 89024ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8902502:	83 c2 18             	add    $0x18,%edx
 8902505:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8902508:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 890250b:	7f 14                	jg     8902521 <_ZN14WarAreaCounter18GetCurrenTimeTableEv+0x5d>
 890250d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8902510:	8d 50 01             	lea    0x1(%eax),%edx
 8902513:	8b 45 08             	mov    0x8(%ebp),%eax
 8902516:	83 c2 18             	add    $0x18,%edx
 8902519:	8b 04 90             	mov    (%eax,%edx,4),%eax
 890251c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 890251f:	7f 1c                	jg     890253d <_ZN14WarAreaCounter18GetCurrenTimeTableEv+0x79>
 8902521:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8902525:	8b 45 08             	mov    0x8(%ebp),%eax
 8902528:	8b 80 40 01 00 00    	mov    0x140(%eax),%eax
 890252e:	83 e8 01             	sub    $0x1,%eax
 8902531:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8902534:	0f 9f c0             	setg   %al
 8902537:	84 c0                	test   %al,%al
 8902539:	75 c1                	jne    89024fc <_ZN14WarAreaCounter18GetCurrenTimeTableEv+0x38>
 890253b:	eb 01                	jmp    890253e <_ZN14WarAreaCounter18GetCurrenTimeTableEv+0x7a>
 890253d:	90                   	nop
 890253e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8902541:	c9                   	leave
 8902542:	c3                   	ret

```

```c
// WarAreaCounter::GetCurrenTimeTable @ 0x89024c4

/* WarAreaCounter::GetCurrenTimeTable() */

int __thiscall WarAreaCounter::GetCurrenTimeTable(WarAreaCounter *this)

{
  tm *ptVar1;
  tm local_48;
  time_t local_1c [3];
  int local_10;
  
  time(local_1c);
  ptVar1 = localtime_r(local_1c,&local_48);
  local_10 = 0;
  while ((local_10 < *(int *)(this + 0x140) + -1 &&
         ((ptVar1->tm_hour < *(int *)(this + (local_10 + 0x18) * 4) ||
          (*(int *)(this + (local_10 + 0x19) * 4) <= ptVar1->tm_hour))))) {
    local_10 = local_10 + 1;
  }
  return local_10;
}

```

