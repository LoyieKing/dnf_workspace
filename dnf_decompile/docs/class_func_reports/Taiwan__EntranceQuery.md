# Taiwan__EntranceQuery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## EntranceQuery

```asm
// === 08173ffa Taiwan::EntranceQuery::EntranceQuery  [0x08173ffa-0x8174011] ===
 8173ffa:	55                   	push   %ebp
 8173ffb:	89 e5                	mov    %esp,%ebp
 8173ffd:	8b 45 08             	mov    0x8(%ebp),%eax
 8174000:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8174006:	8b 45 08             	mov    0x8(%ebp),%eax
 8174009:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8174010:	5d                   	pop    %ebp
 8174011:	c3                   	ret

```

```c
// Taiwan::EntranceQuery::EntranceQuery @ 0x8173ffa

/* Taiwan::EntranceQuery::EntranceQuery() */

void __thiscall Taiwan::EntranceQuery::EntranceQuery(EntranceQuery *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## execQuery

```asm
// === 0817401c Taiwan::EntranceQuery::execQuery  [0x0817401c-0x8174025] ===
 817401c:	55                   	push   %ebp
 817401d:	89 e5                	mov    %esp,%ebp
 817401f:	b8 01 00 00 00       	mov    $0x1,%eax
 8174024:	5d                   	pop    %ebp
 8174025:	c3                   	ret

```

```c
// Taiwan::EntranceQuery::execQuery @ 0x817401c

/* Taiwan::EntranceQuery::execQuery(MySQL&) */

undefined4 Taiwan::EntranceQuery::execQuery(MySQL *param_1)

{
  return 1;
}

```

---

## getResult

```asm
// === 08174026 Taiwan::EntranceQuery::getResult  [0x08174026-0x817402f] ===
 8174026:	55                   	push   %ebp
 8174027:	89 e5                	mov    %esp,%ebp
 8174029:	b8 01 00 00 00       	mov    $0x1,%eax
 817402e:	5d                   	pop    %ebp
 817402f:	c3                   	ret

```

```c
// Taiwan::EntranceQuery::getResult @ 0x8174026

/* Taiwan::EntranceQuery::getResult(MySQL&) */

undefined4 Taiwan::EntranceQuery::getResult(MySQL *param_1)

{
  return 1;
}

```

---

## setQuery

```asm
// === 08174012 Taiwan::EntranceQuery::setQuery  [0x08174012-0x817401b] ===
 8174012:	55                   	push   %ebp
 8174013:	89 e5                	mov    %esp,%ebp
 8174015:	b8 01 00 00 00       	mov    $0x1,%eax
 817401a:	5d                   	pop    %ebp
 817401b:	c3                   	ret

```

```c
// Taiwan::EntranceQuery::setQuery @ 0x8174012

/* Taiwan::EntranceQuery::setQuery(MySQL&) */

undefined4 Taiwan::EntranceQuery::setQuery(MySQL *param_1)

{
  return 1;
}

```

