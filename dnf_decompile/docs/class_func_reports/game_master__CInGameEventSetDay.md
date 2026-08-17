# game_master__CInGameEventSetDay

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b0a08 game_master::CInGameEventSetDay::execute  [0x084b0a08-0x84b0a33] ===
 84b0a08:	55                   	push   %ebp
 84b0a09:	89 e5                	mov    %esp,%ebp
 84b0a0b:	53                   	push   %ebx
 84b0a0c:	83 ec 14             	sub    $0x14,%esp
 84b0a0f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0a12:	8b 58 08             	mov    0x8(%eax),%ebx
 84b0a15:	e8 81 b7 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b0a1a:	89 04 24             	mov    %eax,(%esp)
 84b0a1d:	e8 40 01 c6 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84b0a22:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b0a26:	89 04 24             	mov    %eax,(%esp)
 84b0a29:	e8 42 c2 c5 ff       	call   810cc70 <_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi>
 84b0a2e:	83 c4 14             	add    $0x14,%esp
 84b0a31:	5b                   	pop    %ebx
 84b0a32:	5d                   	pop    %ebp
 84b0a33:	c3                   	ret

```

```c
// game_master::CInGameEventSetDay::execute @ 0x84b0a08

/* game_master::CInGameEventSetDay::execute() */

void __thiscall game_master::CInGameEventSetDay::execute(CInGameEventSetDay *this)

{
  int iVar1;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  
  iVar1 = *(int *)(this + 8);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  EventClassify::CEventScriptMng::test_process_change_day(this_01,iVar1);
  return;
}

```

---

## parse

```asm
// === 084b09d0 game_master::CInGameEventSetDay::parse  [0x084b09d0-0x84b0a07] ===
 84b09d0:	55                   	push   %ebp
 84b09d1:	89 e5                	mov    %esp,%ebp
 84b09d3:	83 ec 18             	sub    $0x18,%esp
 84b09d6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b09d9:	8b 40 04             	mov    0x4(%eax),%eax
 84b09dc:	83 c0 0c             	add    $0xc,%eax
 84b09df:	89 04 24             	mov    %eax,(%esp)
 84b09e2:	e8 81 e6 de ff       	call   829f068 <_Z4trimRSs>
 84b09e7:	8b 45 08             	mov    0x8(%ebp),%eax
 84b09ea:	8b 40 04             	mov    0x4(%eax),%eax
 84b09ed:	83 c0 0c             	add    $0xc,%eax
 84b09f0:	89 04 24             	mov    %eax,(%esp)
 84b09f3:	e8 f8 5a 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b09f8:	89 04 24             	mov    %eax,(%esp)
 84b09fb:	e8 f0 dc bc ff       	call   807e6f0 <atoi@plt>
 84b0a00:	8b 55 08             	mov    0x8(%ebp),%edx
 84b0a03:	89 42 08             	mov    %eax,0x8(%edx)
 84b0a06:	c9                   	leave
 84b0a07:	c3                   	ret

```

```c
// game_master::CInGameEventSetDay::parse @ 0x84b09d0

/* game_master::CInGameEventSetDay::parse() */

void __thiscall game_master::CInGameEventSetDay::parse(CInGameEventSetDay *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

