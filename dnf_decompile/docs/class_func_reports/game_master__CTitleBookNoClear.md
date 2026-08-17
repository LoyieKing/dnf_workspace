# game_master__CTitleBookNoClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084b0742 game_master::CTitleBookNoClear::execute  [0x084b0742-0x84b0769] ===
 84b0742:	55                   	push   %ebp
 84b0743:	89 e5                	mov    %esp,%ebp
 84b0745:	83 ec 18             	sub    $0x18,%esp
 84b0748:	8b 45 08             	mov    0x8(%ebp),%eax
 84b074b:	89 04 24             	mov    %eax,(%esp)
 84b074e:	e8 67 38 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b0753:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84b075a:	00 
 84b075b:	89 04 24             	mov    %eax,(%esp)
 84b075e:	e8 21 ce c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b0763:	c6 40 25 01          	movb   $0x1,0x25(%eax)
 84b0767:	c9                   	leave
 84b0768:	c3                   	ret
 84b0769:	90                   	nop

```

```c
// game_master::CTitleBookNoClear::execute @ 0x84b0742

/* game_master::CTitleBookNoClear::execute() */

void __thiscall game_master::CTitleBookNoClear::execute(CTitleBookNoClear *this)

{
  CUser *pCVar1;
  int iVar2;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar2 = CUser::GetCharacExpandData(pCVar1,0xf);
  *(undefined1 *)(iVar2 + 0x25) = 1;
  return;
}

```

