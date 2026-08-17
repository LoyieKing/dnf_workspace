# APSystem__CDBAndExchangeServerProc

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## GetActionPointFromMemory

```asm
// === 08121616 APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory  [0x08121616-0x812161b] ===
 8121616:	55                   	push   %ebp
 8121617:	89 e5                	mov    %esp,%ebp
 8121619:	5d                   	pop    %ebp
 812161a:	c3                   	ret
 812161b:	90                   	nop

```

```c
// APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory @ 0x8121616

/* APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory(CUser const&,
   APSystem::_SIG_LOAD_ACTION_POINT&) */

void APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory
               (CUser *param_1,_SIG_LOAD_ACTION_POINT *param_2)

{
  return;
}

```

---

## RequestLoadActionPointFromDBAndES

```asm
// === 08121608 APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES  [0x08121608-0x8121615] ===
 8121608:	55                   	push   %ebp
 8121609:	89 e5                	mov    %esp,%ebp
 812160b:	83 ec 10             	sub    $0x10,%esp
 812160e:	b8 01 00 00 00       	mov    $0x1,%eax
 8121613:	c9                   	leave
 8121614:	c3                   	ret
 8121615:	90                   	nop

```

```c
// APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES @ 0x8121608

/* APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES(CUser&, MSG_CHARAC_SELECT&)
    */

undefined4
APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES
          (CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  return 1;
}

```

