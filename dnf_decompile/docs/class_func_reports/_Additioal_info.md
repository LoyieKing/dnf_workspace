# _Additioal_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _Additioal_info

```asm
// === 08348254 _Additioal_info::_Additioal_info  [0x08348254-0x8348267] ===
 8348254:	55                   	push   %ebp
 8348255:	89 e5                	mov    %esp,%ebp
 8348257:	83 ec 18             	sub    $0x18,%esp
 834825a:	8b 45 08             	mov    0x8(%ebp),%eax
 834825d:	89 04 24             	mov    %eax,(%esp)
 8348260:	e8 03 00 00 00       	call   8348268 <_ZN15_Additioal_info5clearEv>
 8348265:	c9                   	leave
 8348266:	c3                   	ret
 8348267:	90                   	nop

```

```c
// _Additioal_info::_Additioal_info @ 0x8348254

/* _Additioal_info::_Additioal_info() */

void __thiscall _Additioal_info::_Additioal_info(_Additioal_info *this)

{
  clear(this);
  return;
}

```

---

## clear

```asm
// === 08348268 _Additioal_info::clear  [0x08348268-0x834828b] ===
 8348268:	55                   	push   %ebp
 8348269:	89 e5                	mov    %esp,%ebp
 834826b:	83 ec 18             	sub    $0x18,%esp
 834826e:	c7 44 24 08 52 00 00 	movl   $0x52,0x8(%esp)
 8348275:	00 
 8348276:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 834827d:	00 
 834827e:	8b 45 08             	mov    0x8(%ebp),%eax
 8348281:	89 04 24             	mov    %eax,(%esp)
 8348284:	e8 37 5a d3 ff       	call   807dcc0 <memset@plt>
 8348289:	c9                   	leave
 834828a:	c3                   	ret
 834828b:	90                   	nop

```

```c
// _Additioal_info::clear @ 0x8348268

/* _Additioal_info::clear() */

void __thiscall _Additioal_info::clear(_Additioal_info *this)

{
  memset(this,0,0x52);
  return;
}

```

