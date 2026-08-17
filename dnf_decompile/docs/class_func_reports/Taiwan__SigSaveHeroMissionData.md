# Taiwan__SigSaveHeroMissionData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SigSaveHeroMissionData

```asm
// === 081639ac Taiwan::SigSaveHeroMissionData::SigSaveHeroMissionData  [0x081639ac-0x81639bf] ===
 81639ac:	55                   	push   %ebp
 81639ad:	89 e5                	mov    %esp,%ebp
 81639af:	83 ec 18             	sub    $0x18,%esp
 81639b2:	8b 45 08             	mov    0x8(%ebp),%eax
 81639b5:	89 04 24             	mov    %eax,(%esp)
 81639b8:	e8 03 00 00 00       	call   81639c0 <_ZN6Taiwan22SigSaveHeroMissionData4initEv>
 81639bd:	c9                   	leave
 81639be:	c3                   	ret
 81639bf:	90                   	nop

```

```c
// Taiwan::SigSaveHeroMissionData::SigSaveHeroMissionData @ 0x81639ac

/* Taiwan::SigSaveHeroMissionData::SigSaveHeroMissionData() */

void __thiscall Taiwan::SigSaveHeroMissionData::SigSaveHeroMissionData(SigSaveHeroMissionData *this)

{
  init(this);
  return;
}

```

---

## init

```asm
// === 081639c0 Taiwan::SigSaveHeroMissionData::init  [0x081639c0-0x81639ef] ===
 81639c0:	55                   	push   %ebp
 81639c1:	89 e5                	mov    %esp,%ebp
 81639c3:	83 ec 18             	sub    $0x18,%esp
 81639c6:	8b 45 08             	mov    0x8(%ebp),%eax
 81639c9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81639cf:	8b 45 08             	mov    0x8(%ebp),%eax
 81639d2:	83 c0 04             	add    $0x4,%eax
 81639d5:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 81639dc:	00 
 81639dd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81639e4:	00 
 81639e5:	89 04 24             	mov    %eax,(%esp)
 81639e8:	e8 d3 a2 f1 ff       	call   807dcc0 <memset@plt>
 81639ed:	c9                   	leave
 81639ee:	c3                   	ret
 81639ef:	90                   	nop

```

```c
// Taiwan::SigSaveHeroMissionData::init @ 0x81639c0

/* Taiwan::SigSaveHeroMissionData::init() */

void __thiscall Taiwan::SigSaveHeroMissionData::init(SigSaveHeroMissionData *this)

{
  *(undefined4 *)this = 0;
  memset(this + 4,0,0x100);
  return;
}

```

