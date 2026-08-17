# LimitItemUsage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## isAnotherDay

```asm
// === 08688fba LimitItemUsage::isAnotherDay  [0x08688fba-0x868900f] ===
 8688fba:	55                   	push   %ebp
 8688fbb:	89 e5                	mov    %esp,%ebp
 8688fbd:	83 ec 28             	sub    $0x28,%esp
 8688fc0:	e8 bc 31 a4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8688fc5:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 8688fcb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8688fce:	8b 45 08             	mov    0x8(%ebp),%eax
 8688fd1:	89 04 24             	mov    %eax,(%esp)
 8688fd4:	e8 03 42 ba ff       	call   822d1dc <_ZNK10CommonTimecvlEv>
 8688fd9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8688fdc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8688fe3:	e8 b6 2c a4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8688fe8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8688fec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8688fef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8688ff3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8688ff6:	89 04 24             	mov    %eax,(%esp)
 8688ff9:	e8 aa 30 de ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 8688ffe:	84 c0                	test   %al,%al
 8689000:	74 07                	je     8689009 <_ZN14LimitItemUsage12isAnotherDayEv+0x4f>
 8689002:	b8 01 00 00 00       	mov    $0x1,%eax
 8689007:	eb 05                	jmp    868900e <_ZN14LimitItemUsage12isAnotherDayEv+0x54>
 8689009:	b8 00 00 00 00       	mov    $0x0,%eax
 868900e:	c9                   	leave
 868900f:	c3                   	ret

```

```c
// LimitItemUsage::isAnotherDay @ 0x8688fba

/* LimitItemUsage::isAnotherDay() */

bool __thiscall LimitItemUsage::isAnotherDay(LimitItemUsage *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = G_CEnvironment();
  iVar2 = *(int *)(iVar2 + 0x37c);
  lVar3 = CommonTime::operator_cast_to_long((CommonTime *)this);
  lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cVar1 = CheckDailyScheduleTime(iVar2,lVar3,lVar4);
  return cVar1 != '\0';
}

```

