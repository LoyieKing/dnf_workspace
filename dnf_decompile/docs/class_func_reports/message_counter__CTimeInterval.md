# message_counter__CTimeInterval

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Create

```asm
// === 0856f974 message_counter::CTimeInterval::Create  [0x0856f974-0x856f9af] ===
 856f974:	55                   	push   %ebp
 856f975:	89 e5                	mov    %esp,%ebp
 856f977:	53                   	push   %ebx
 856f978:	83 ec 14             	sub    $0x14,%esp
 856f97b:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 856f982:	e8 c9 4a 1b 00       	call   8724450 <_Znwj>
 856f987:	89 c3                	mov    %eax,%ebx
 856f989:	89 d8                	mov    %ebx,%eax
 856f98b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 856f991:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 856f998:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 856f99f:	89 04 24             	mov    %eax,(%esp)
 856f9a2:	e8 2d 09 00 00       	call   85702d4 <_ZN15message_counter17CUnixTimeIntervalC1Ev>
 856f9a7:	89 d8                	mov    %ebx,%eax
 856f9a9:	83 c4 14             	add    $0x14,%esp
 856f9ac:	5b                   	pop    %ebx
 856f9ad:	5d                   	pop    %ebp
 856f9ae:	c3                   	ret
 856f9af:	90                   	nop

```

```c
// message_counter::CTimeInterval::Create @ 0x856f974

/* message_counter::CTimeInterval::Create() */

CUnixTimeInterval * message_counter::CTimeInterval::Create(void)

{
  CUnixTimeInterval *this;
  
  this = operator_new(0xc);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  CUnixTimeInterval::CUnixTimeInterval(this);
  return this;
}

```

---

## Destory

```asm
// === 0856f9b0 message_counter::CTimeInterval::Destory  [0x0856f9b0-0x856f9c3] ===
 856f9b0:	55                   	push   %ebp
 856f9b1:	89 e5                	mov    %esp,%ebp
 856f9b3:	83 ec 18             	sub    $0x18,%esp
 856f9b6:	8b 45 08             	mov    0x8(%ebp),%eax
 856f9b9:	89 04 24             	mov    %eax,(%esp)
 856f9bc:	e8 2f 4b 1b 00       	call   87244f0 <_ZdlPv>
 856f9c1:	c9                   	leave
 856f9c2:	c3                   	ret
 856f9c3:	90                   	nop

```

```c
// message_counter::CTimeInterval::Destory @ 0x856f9b0

/* message_counter::CTimeInterval::Destory(message_counter::CTimeInterval*) */

void message_counter::CTimeInterval::Destory(CTimeInterval *param_1)

{
  operator_delete(param_1);
  return;
}

```

