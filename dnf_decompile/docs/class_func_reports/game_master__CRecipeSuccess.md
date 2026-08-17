# game_master__CRecipeSuccess

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b3a34 game_master::CRecipeSuccess::execute  [0x084b3a34-0x84b3a5f] ===
 84b3a34:	55                   	push   %ebp
 84b3a35:	89 e5                	mov    %esp,%ebp
 84b3a37:	83 ec 28             	sub    $0x28,%esp
 84b3a3a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3a3d:	89 04 24             	mov    %eax,(%esp)
 84b3a40:	e8 75 05 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b3a45:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b3a48:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3a4b:	8b 40 08             	mov    0x8(%eax),%eax
 84b3a4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3a52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b3a55:	89 04 24             	mov    %eax,(%esp)
 84b3a58:	e8 1b f7 1d 00       	call   8693178 <_ZN5CUser22recipeForceProbabilityEi>
 84b3a5d:	c9                   	leave
 84b3a5e:	c3                   	ret
 84b3a5f:	90                   	nop

```

```c
// game_master::CRecipeSuccess::execute @ 0x84b3a34

/* game_master::CRecipeSuccess::execute() */

void __thiscall game_master::CRecipeSuccess::execute(CRecipeSuccess *this)

{
  CUser *this_00;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::recipeForceProbability(this_00,*(int *)(this + 8));
  return;
}

```

---

## parse

```asm
// === 084b399a game_master::CRecipeSuccess::parse  [0x084b399a-0x84b3a33] ===
 84b399a:	55                   	push   %ebp
 84b399b:	89 e5                	mov    %esp,%ebp
 84b399d:	83 ec 18             	sub    $0x18,%esp
 84b39a0:	8b 45 08             	mov    0x8(%ebp),%eax
 84b39a3:	8b 40 04             	mov    0x4(%eax),%eax
 84b39a6:	85 c0                	test   %eax,%eax
 84b39a8:	0f 84 82 00 00 00    	je     84b3a30 <_ZN11game_master14CRecipeSuccess5parseEv+0x96>
 84b39ae:	8b 45 08             	mov    0x8(%ebp),%eax
 84b39b1:	8b 40 04             	mov    0x4(%eax),%eax
 84b39b4:	05 1c 01 00 00       	add    $0x11c,%eax
 84b39b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b39c0:	00 
 84b39c1:	89 04 24             	mov    %eax,(%esp)
 84b39c4:	e8 05 41 d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b39c9:	c7 44 24 04 53 04 c8 	movl   $0x8c80453,0x4(%esp)
 84b39d0:	08 
 84b39d1:	89 04 24             	mov    %eax,(%esp)
 84b39d4:	e8 c8 cf bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b39d9:	84 c0                	test   %al,%al
 84b39db:	74 0c                	je     84b39e9 <_ZN11game_master14CRecipeSuccess5parseEv+0x4f>
 84b39dd:	8b 45 08             	mov    0x8(%ebp),%eax
 84b39e0:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 84b39e7:	eb 48                	jmp    84b3a31 <_ZN11game_master14CRecipeSuccess5parseEv+0x97>
 84b39e9:	8b 45 08             	mov    0x8(%ebp),%eax
 84b39ec:	8b 40 04             	mov    0x4(%eax),%eax
 84b39ef:	05 1c 01 00 00       	add    $0x11c,%eax
 84b39f4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b39fb:	00 
 84b39fc:	89 04 24             	mov    %eax,(%esp)
 84b39ff:	e8 ca 40 d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b3a04:	c7 44 24 04 5b 04 c8 	movl   $0x8c8045b,0x4(%esp)
 84b3a0b:	08 
 84b3a0c:	89 04 24             	mov    %eax,(%esp)
 84b3a0f:	e8 8d cf bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b3a14:	84 c0                	test   %al,%al
 84b3a16:	74 0c                	je     84b3a24 <_ZN11game_master14CRecipeSuccess5parseEv+0x8a>
 84b3a18:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3a1b:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
 84b3a22:	eb 0d                	jmp    84b3a31 <_ZN11game_master14CRecipeSuccess5parseEv+0x97>
 84b3a24:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3a27:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 84b3a2e:	eb 01                	jmp    84b3a31 <_ZN11game_master14CRecipeSuccess5parseEv+0x97>
 84b3a30:	90                   	nop
 84b3a31:	c9                   	leave
 84b3a32:	c3                   	ret
 84b3a33:	90                   	nop

```

```c
// game_master::CRecipeSuccess::parse @ 0x84b399a

/* game_master::CRecipeSuccess::parse() */

void __thiscall game_master::CRecipeSuccess::parse(CRecipeSuccess *this)

{
  bool bVar1;
  string *psVar2;
  
  if (*(int *)(this + 4) != 0) {
    psVar2 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),1);
    bVar1 = std::operator==(psVar2,"success");
    if (bVar1) {
      *(undefined4 *)(this + 8) = 1;
    }
    else {
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[]
                         ((vector<std::string,std::allocator<std::string>> *)
                          (*(int *)(this + 4) + 0x11c),1);
      bVar1 = std::operator==(psVar2,"fail");
      if (bVar1) {
        *(undefined4 *)(this + 8) = 2;
      }
      else {
        *(undefined4 *)(this + 8) = 0;
      }
    }
  }
  return;
}

```

