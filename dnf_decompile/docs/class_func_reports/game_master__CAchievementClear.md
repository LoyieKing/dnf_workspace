# game_master__CAchievementClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b092a game_master::CAchievementClear::execute  [0x084b092a-0x84b097b] ===
 84b092a:	55                   	push   %ebp
 84b092b:	89 e5                	mov    %esp,%ebp
 84b092d:	53                   	push   %ebx
 84b092e:	83 ec 24             	sub    $0x24,%esp
 84b0931:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0934:	8b 58 08             	mov    0x8(%eax),%ebx
 84b0937:	8b 45 08             	mov    0x8(%ebp),%eax
 84b093a:	89 04 24             	mov    %eax,(%esp)
 84b093d:	e8 78 36 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b0942:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84b0949:	00 
 84b094a:	89 04 24             	mov    %eax,(%esp)
 84b094d:	e8 32 cc c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b0952:	c7 44 24 10 ff ff 00 	movl   $0xffff,0x10(%esp)
 84b0959:	00 
 84b095a:	c7 44 24 0c ff ff 00 	movl   $0xffff,0xc(%esp)
 84b0961:	00 
 84b0962:	c7 44 24 08 ff ff 00 	movl   $0xffff,0x8(%esp)
 84b0969:	00 
 84b096a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b096e:	89 04 24             	mov    %eax,(%esp)
 84b0971:	e8 02 ad dd ff       	call   828b678 <_ZN12CAchievement10setTriggerEjttt>
 84b0976:	83 c4 24             	add    $0x24,%esp
 84b0979:	5b                   	pop    %ebx
 84b097a:	5d                   	pop    %ebp
 84b097b:	c3                   	ret

```

```c
// game_master::CAchievementClear::execute @ 0x84b092a

/* game_master::CAchievementClear::execute() */

void __thiscall game_master::CAchievementClear::execute(CAchievementClear *this)

{
  uint uVar1;
  CUser *pCVar2;
  CAchievement *this_00;
  
  uVar1 = *(uint *)(this + 8);
  pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
  this_00 = (CAchievement *)CUser::GetCharacExpandData(pCVar2,0xf);
  CAchievement::setTrigger(this_00,uVar1,0xffff,0xffff,0xffff);
  return;
}

```

---

## parse

```asm
// === 084b08f0 game_master::CAchievementClear::parse  [0x084b08f0-0x84b0929] ===
 84b08f0:	55                   	push   %ebp
 84b08f1:	89 e5                	mov    %esp,%ebp
 84b08f3:	83 ec 18             	sub    $0x18,%esp
 84b08f6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b08f9:	8b 40 04             	mov    0x4(%eax),%eax
 84b08fc:	83 c0 0c             	add    $0xc,%eax
 84b08ff:	89 04 24             	mov    %eax,(%esp)
 84b0902:	e8 61 e7 de ff       	call   829f068 <_Z4trimRSs>
 84b0907:	8b 45 08             	mov    0x8(%ebp),%eax
 84b090a:	8b 40 04             	mov    0x4(%eax),%eax
 84b090d:	83 c0 0c             	add    $0xc,%eax
 84b0910:	89 04 24             	mov    %eax,(%esp)
 84b0913:	e8 d8 5b 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b0918:	89 04 24             	mov    %eax,(%esp)
 84b091b:	e8 d0 dd bc ff       	call   807e6f0 <atoi@plt>
 84b0920:	89 c2                	mov    %eax,%edx
 84b0922:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0925:	89 50 08             	mov    %edx,0x8(%eax)
 84b0928:	c9                   	leave
 84b0929:	c3                   	ret

```

```c
// game_master::CAchievementClear::parse @ 0x84b08f0

/* game_master::CAchievementClear::parse() */

void __thiscall game_master::CAchievementClear::parse(CAchievementClear *this)

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

