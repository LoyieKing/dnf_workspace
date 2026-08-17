# expert_job__CDollController

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CDollController

```asm
// === 085d45b4 expert_job::CDollController::CDollController  [0x085d45b4-0x85d45cf] ===
 85d45b4:	55                   	push   %ebp
 85d45b5:	89 e5                	mov    %esp,%ebp
 85d45b7:	83 ec 18             	sub    $0x18,%esp
 85d45ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85d45bd:	89 04 24             	mov    %eax,(%esp)
 85d45c0:	e8 ef ac ec ff       	call   849f2b4 <_ZN10expert_job10CExpertJobC1Ev>
 85d45c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d45c8:	c7 00 e8 08 cc 08    	movl   $0x8cc08e8,(%eax)
 85d45ce:	c9                   	leave
 85d45cf:	c3                   	ret

```

```c
// expert_job::CDollController::CDollController @ 0x85d45b4

/* expert_job::CDollController::CDollController() */

void __thiscall expert_job::CDollController::CDollController(CDollController *this)

{
  CExpertJob::CExpertJob((CExpertJob *)this);
  *(undefined ***)this = &PTR___cxa_pure_virtual_08cc08e8;
  return;
}

```

---

## ~CDollController

```asm
// === 085d45d0 expert_job::CDollController::~CDollController  [0x085d45d0-0x85d45ff] ===
 85d45d0:	55                   	push   %ebp
 85d45d1:	89 e5                	mov    %esp,%ebp
 85d45d3:	83 ec 18             	sub    $0x18,%esp
 85d45d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d45d9:	c7 00 e8 08 cc 08    	movl   $0x8cc08e8,(%eax)
 85d45df:	8b 45 08             	mov    0x8(%ebp),%eax
 85d45e2:	89 04 24             	mov    %eax,(%esp)
 85d45e5:	e8 10 ac ec ff       	call   849f1fa <_ZN10expert_job10CExpertJobD1Ev>
 85d45ea:	b8 00 00 00 00       	mov    $0x0,%eax
 85d45ef:	84 c0                	test   %al,%al
 85d45f1:	74 0b                	je     85d45fe <_ZN10expert_job15CDollControllerD1Ev+0x2e>
 85d45f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d45f6:	89 04 24             	mov    %eax,(%esp)
 85d45f9:	e8 f2 fe 14 00       	call   87244f0 <_ZdlPv>
 85d45fe:	c9                   	leave
 85d45ff:	c3                   	ret

```

```c
// expert_job::CDollController::~CDollController @ 0x85d45d0

/* WARNING: Removing unreachable block (ram,0x085d45f3) */
/* expert_job::CDollController::~CDollController() */

void __thiscall expert_job::CDollController::~CDollController(CDollController *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_08cc08e8;
  CExpertJob::~CExpertJob((CExpertJob *)this);
  return;
}

```

---

## ~CDollController_085d4600

```asm
// === 085d4600 expert_job::CDollController::~CDollController  [0x085d4600-0x85d461d] ===
 85d4600:	55                   	push   %ebp
 85d4601:	89 e5                	mov    %esp,%ebp
 85d4603:	83 ec 18             	sub    $0x18,%esp
 85d4606:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4609:	89 04 24             	mov    %eax,(%esp)
 85d460c:	e8 bf ff ff ff       	call   85d45d0 <_ZN10expert_job15CDollControllerD1Ev>
 85d4611:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4614:	89 04 24             	mov    %eax,(%esp)
 85d4617:	e8 d4 fe 14 00       	call   87244f0 <_ZdlPv>
 85d461c:	c9                   	leave
 85d461d:	c3                   	ret

```

```c
// expert_job::CDollController::~CDollController @ 0x85d4600

/* expert_job::CDollController::~CDollController() */

void __thiscall expert_job::CDollController::~CDollController(CDollController *this)

{
  ~CDollController(this);
  operator_delete(this);
  return;
}

```

