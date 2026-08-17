# game_master__CGuildExpBookDelete

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084abf2c game_master::CGuildExpBookDelete::execute  [0x084abf2c-0x84abf4d] ===
 84abf2c:	55                   	push   %ebp
 84abf2d:	89 e5                	mov    %esp,%ebp
 84abf2f:	83 ec 28             	sub    $0x28,%esp
 84abf32:	8b 45 08             	mov    0x8(%ebp),%eax
 84abf35:	89 04 24             	mov    %eax,(%esp)
 84abf38:	e8 7d 80 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84abf3d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84abf40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84abf43:	89 04 24             	mov    %eax,(%esp)
 84abf46:	e8 4d 29 1d 00       	call   867e898 <_ZN5CUser18deleteGuildExpBookEv>
 84abf4b:	c9                   	leave
 84abf4c:	c3                   	ret
 84abf4d:	90                   	nop

```

```c
// game_master::CGuildExpBookDelete::execute @ 0x84abf2c

/* game_master::CGuildExpBookDelete::execute() */

void __thiscall game_master::CGuildExpBookDelete::execute(CGuildExpBookDelete *this)

{
  CUser *this_00;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::deleteGuildExpBook(this_00);
  return;
}

```

