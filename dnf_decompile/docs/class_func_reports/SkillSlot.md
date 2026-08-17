# SkillSlot

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 70

---

## FindSkill

```asm
// === 086036ce SkillSlot::FindSkill  [0x086036ce-0x860373b] ===
 86036ce:	55                   	push   %ebp
 86036cf:	89 e5                	mov    %esp,%ebp
 86036d1:	83 ec 28             	sub    $0x28,%esp
 86036d4:	8b 45 10             	mov    0x10(%ebp),%eax
 86036d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86036db:	8b 45 08             	mov    0x8(%ebp),%eax
 86036de:	89 04 24             	mov    %eax,(%esp)
 86036e1:	e8 f8 30 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 86036e6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86036e9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86036ed:	75 07                	jne    86036f6 <_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND+0x28>
 86036ef:	b8 00 00 00 00       	mov    $0x0,%eax
 86036f4:	eb 44                	jmp    860373a <_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND+0x6c>
 86036f6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86036fd:	eb 28                	jmp    8603727 <_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND+0x59>
 86036ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8603702:	01 c0                	add    %eax,%eax
 8603704:	03 45 f0             	add    -0x10(%ebp),%eax
 8603707:	0f b6 00             	movzbl (%eax),%eax
 860370a:	0f b6 c0             	movzbl %al,%eax
 860370d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8603710:	75 11                	jne    8603723 <_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND+0x55>
 8603712:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8603715:	01 c0                	add    %eax,%eax
 8603717:	03 45 f0             	add    -0x10(%ebp),%eax
 860371a:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 860371e:	0f be c0             	movsbl %al,%eax
 8603721:	eb 17                	jmp    860373a <_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND+0x6c>
 8603723:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8603727:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 860372e:	0f 9e c0             	setle  %al
 8603731:	84 c0                	test   %al,%al
 8603733:	75 ca                	jne    86036ff <_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND+0x31>
 8603735:	b8 00 00 00 00       	mov    $0x0,%eax
 860373a:	c9                   	leave
 860373b:	c3                   	ret

```

```c
// SkillSlot::FindSkill @ 0x86036ce

/* SkillSlot::FindSkill(int, ENUM_SKILL_TREE_KIND) const */

int __thiscall SkillSlot::FindSkill(SkillSlot *this,uint param_1,undefined4 param_3)

{
  int iVar1;
  int local_10;
  
  iVar1 = get_skillslot_buf(this,param_3);
  if (iVar1 != 0) {
    for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
      if (*(byte *)(local_10 * 2 + iVar1) == param_1) {
        return (int)*(char *)(local_10 * 2 + iVar1 + 1);
      }
    }
  }
  return 0;
}

```

---

## FindSkill_0860373c

```asm
// === 0860373c SkillSlot::FindSkill  [0x0860373c-0x86037c5] ===
 860373c:	55                   	push   %ebp
 860373d:	89 e5                	mov    %esp,%ebp
 860373f:	83 ec 28             	sub    $0x28,%esp
 8603742:	8b 45 08             	mov    0x8(%ebp),%eax
 8603745:	8b 00                	mov    (%eax),%eax
 8603747:	85 c0                	test   %eax,%eax
 8603749:	75 07                	jne    8603752 <_ZNK9SkillSlot9FindSkillEi+0x16>
 860374b:	b8 00 00 00 00       	mov    $0x0,%eax
 8603750:	eb 72                	jmp    86037c4 <_ZNK9SkillSlot9FindSkillEi+0x88>
 8603752:	8b 45 08             	mov    0x8(%ebp),%eax
 8603755:	8b 00                	mov    (%eax),%eax
 8603757:	89 04 24             	mov    %eax,(%esp)
 860375a:	e8 dd bb c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 860375f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603763:	8b 45 08             	mov    0x8(%ebp),%eax
 8603766:	89 04 24             	mov    %eax,(%esp)
 8603769:	e8 70 30 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 860376e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8603771:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8603775:	75 07                	jne    860377e <_ZNK9SkillSlot9FindSkillEi+0x42>
 8603777:	b8 00 00 00 00       	mov    $0x0,%eax
 860377c:	eb 46                	jmp    86037c4 <_ZNK9SkillSlot9FindSkillEi+0x88>
 860377e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8603785:	eb 2a                	jmp    86037b1 <_ZNK9SkillSlot9FindSkillEi+0x75>
 8603787:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860378a:	01 c0                	add    %eax,%eax
 860378c:	03 45 f0             	add    -0x10(%ebp),%eax
 860378f:	0f b6 00             	movzbl (%eax),%eax
 8603792:	0f b6 c0             	movzbl %al,%eax
 8603795:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8603798:	75 13                	jne    86037ad <_ZNK9SkillSlot9FindSkillEi+0x71>
 860379a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860379d:	8b 45 08             	mov    0x8(%ebp),%eax
 86037a0:	83 c2 20             	add    $0x20,%edx
 86037a3:	0f b6 44 50 07       	movzbl 0x7(%eax,%edx,2),%eax
 86037a8:	0f be c0             	movsbl %al,%eax
 86037ab:	eb 17                	jmp    86037c4 <_ZNK9SkillSlot9FindSkillEi+0x88>
 86037ad:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86037b1:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 86037b8:	0f 9e c0             	setle  %al
 86037bb:	84 c0                	test   %al,%al
 86037bd:	75 c8                	jne    8603787 <_ZNK9SkillSlot9FindSkillEi+0x4b>
 86037bf:	b8 00 00 00 00       	mov    $0x0,%eax
 86037c4:	c9                   	leave
 86037c5:	c3                   	ret

```

```c
// SkillSlot::FindSkill @ 0x860373c

/* SkillSlot::FindSkill(int) const */

int __thiscall SkillSlot::FindSkill(SkillSlot *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  
  if (*(int *)this != 0) {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    iVar2 = get_skillslot_buf(this,uVar1);
    if (iVar2 != 0) {
      for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
        if ((uint)*(byte *)(local_10 * 2 + iVar2) == param_1) {
          return (int)(char)this[(local_10 + 0x20) * 2 + 7];
        }
      }
    }
  }
  return 0;
}

```

---

## GetSkillTreeIndex

```asm
// === 086067b8 SkillSlot::GetSkillTreeIndex  [0x086067b8-0x86067dd] ===
 86067b8:	55                   	push   %ebp
 86067b9:	89 e5                	mov    %esp,%ebp
 86067bb:	83 ec 18             	sub    $0x18,%esp
 86067be:	8b 45 08             	mov    0x8(%ebp),%eax
 86067c1:	8b 00                	mov    (%eax),%eax
 86067c3:	85 c0                	test   %eax,%eax
 86067c5:	75 07                	jne    86067ce <_ZNK9SkillSlot17GetSkillTreeIndexEv+0x16>
 86067c7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86067cc:	eb 0d                	jmp    86067db <_ZNK9SkillSlot17GetSkillTreeIndexEv+0x23>
 86067ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86067d1:	8b 00                	mov    (%eax),%eax
 86067d3:	89 04 24             	mov    %eax,(%esp)
 86067d6:	e8 61 8b c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 86067db:	c9                   	leave
 86067dc:	c3                   	ret
 86067dd:	90                   	nop

```

```c
// SkillSlot::GetSkillTreeIndex @ 0x86067b8

/* SkillSlot::GetSkillTreeIndex() const */

undefined4 __thiscall SkillSlot::GetSkillTreeIndex(SkillSlot *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
  }
  return uVar1;
}

```

---

## InitSkill

```asm
// === 08608120 SkillSlot::InitSkill  [0x08608120-0x86085f9] ===
 8608120:	55                   	push   %ebp
 8608121:	89 e5                	mov    %esp,%ebp
 8608123:	57                   	push   %edi
 8608124:	56                   	push   %esi
 8608125:	53                   	push   %ebx
 8608126:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 860812c:	8b 45 0c             	mov    0xc(%ebp),%eax
 860812f:	88 85 f4 fe ff ff    	mov    %al,-0x10c(%ebp)
 8608135:	8b 45 08             	mov    0x8(%ebp),%eax
 8608138:	8b 00                	mov    (%eax),%eax
 860813a:	85 c0                	test   %eax,%eax
 860813c:	75 0a                	jne    8608148 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x28>
 860813e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8608143:	e9 a5 04 00 00       	jmp    86085ed <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x4cd>
 8608148:	e8 5a 22 ad ff       	call   80da3a7 <_Z11G_GameWorldv>
 860814d:	89 04 24             	mov    %eax,(%esp)
 8608150:	e8 c9 c2 c2 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 8608155:	84 c0                	test   %al,%al
 8608157:	0f 84 5d 01 00 00    	je     86082ba <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x19a>
 860815d:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8608164:	8b 45 10             	mov    0x10(%ebp),%eax
 8608167:	83 f8 ff             	cmp    $0xffffffff,%eax
 860816a:	74 07                	je     8608173 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x53>
 860816c:	8b 45 10             	mov    0x10(%ebp),%eax
 860816f:	85 c0                	test   %eax,%eax
 8608171:	75 09                	jne    860817c <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x5c>
 8608173:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 860817a:	eb 07                	jmp    8608183 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x63>
 860817c:	c7 45 d8 02 00 00 00 	movl   $0x2,-0x28(%ebp)
 8608183:	8b 45 08             	mov    0x8(%ebp),%eax
 8608186:	8b 00                	mov    (%eax),%eax
 8608188:	8b 55 d8             	mov    -0x28(%ebp),%edx
 860818b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860818f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8608196:	00 
 8608197:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860819e:	00 
 860819f:	89 04 24             	mov    %eax,(%esp)
 86081a2:	e8 59 d2 05 00       	call   8665400 <_ZN5CUser16givePvPSkillTreeEibi>
 86081a7:	8b 45 08             	mov    0x8(%ebp),%eax
 86081aa:	8b 00                	mov    (%eax),%eax
 86081ac:	89 04 24             	mov    %eax,(%esp)
 86081af:	e8 96 6c b9 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 86081b4:	89 c6                	mov    %eax,%esi
 86081b6:	8b 45 08             	mov    0x8(%ebp),%eax
 86081b9:	8b 00                	mov    (%eax),%eax
 86081bb:	89 04 24             	mov    %eax,(%esp)
 86081be:	e8 79 70 c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 86081c3:	0f be c0             	movsbl %al,%eax
 86081c6:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 86081cc:	8b 45 08             	mov    0x8(%ebp),%eax
 86081cf:	8b 00                	mov    (%eax),%eax
 86081d1:	89 04 24             	mov    %eax,(%esp)
 86081d4:	e8 bb 8a b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 86081d9:	0f be f8             	movsbl %al,%edi
 86081dc:	8b 45 08             	mov    0x8(%ebp),%eax
 86081df:	8b 00                	mov    (%eax),%eax
 86081e1:	89 04 24             	mov    %eax,(%esp)
 86081e4:	e8 37 5d af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86081e9:	89 c3                	mov    %eax,%ebx
 86081eb:	e8 ab 3f ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 86081f0:	05 00 a8 00 00       	add    $0xa800,%eax
 86081f5:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86081fc:	00 
 86081fd:	89 74 24 10          	mov    %esi,0x10(%esp)
 8608201:	8b 95 f0 fe ff ff    	mov    -0x110(%ebp),%edx
 8608207:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860820b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 860820f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8608213:	89 04 24             	mov    %eax,(%esp)
 8608216:	e8 47 5b 45 00       	call   8a5dd62 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib>
 860821b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 860821e:	8b 45 10             	mov    0x10(%ebp),%eax
 8608221:	89 44 24 08          	mov    %eax,0x8(%esp)
 8608225:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8608228:	89 44 24 04          	mov    %eax,0x4(%esp)
 860822c:	8b 45 08             	mov    0x8(%ebp),%eax
 860822f:	89 04 24             	mov    %eax,(%esp)
 8608232:	e8 c1 b2 ff ff       	call   86034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>
 8608237:	80 bd f4 fe ff ff 00 	cmpb   $0x0,-0x10c(%ebp)
 860823e:	74 56                	je     8608296 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x176>
 8608240:	8b 45 08             	mov    0x8(%ebp),%eax
 8608243:	8b 00                	mov    (%eax),%eax
 8608245:	89 04 24             	mov    %eax,(%esp)
 8608248:	e8 1d 42 06 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 860824d:	8b 45 08             	mov    0x8(%ebp),%eax
 8608250:	8b 00                	mov    (%eax),%eax
 8608252:	89 04 24             	mov    %eax,(%esp)
 8608255:	e8 ce 8d af ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 860825a:	89 c3                	mov    %eax,%ebx
 860825c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8608263:	00 
 8608264:	c7 44 24 08 47 0b 00 	movl   $0xb47,0x8(%esp)
 860826b:	00 
 860826c:	c7 44 24 04 00 e5 cd 	movl   $0x8cde500,0x4(%esp)
 8608273:	08 
 8608274:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8608277:	89 04 24             	mov    %eax,(%esp)
 860827a:	e8 99 74 f4 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 860827f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8608283:	c7 44 24 04 cc d3 cd 	movl   $0x8cdd3cc,0x4(%esp)
 860828a:	08 
 860828b:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 860828e:	89 04 24             	mov    %eax,(%esp)
 8608291:	e8 f2 74 f4 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8608296:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860829d:	00 
 860829e:	8b 45 10             	mov    0x10(%ebp),%eax
 86082a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86082a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86082a8:	89 04 24             	mov    %eax,(%esp)
 86082ab:	e8 4a 03 00 00       	call   86085fa <_ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi>
 86082b0:	bb 01 00 00 00       	mov    $0x1,%ebx
 86082b5:	e9 33 03 00 00       	jmp    86085ed <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x4cd>
 86082ba:	8b 45 10             	mov    0x10(%ebp),%eax
 86082bd:	83 f8 ff             	cmp    $0xffffffff,%eax
 86082c0:	74 07                	je     86082c9 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x1a9>
 86082c2:	8b 45 10             	mov    0x10(%ebp),%eax
 86082c5:	85 c0                	test   %eax,%eax
 86082c7:	75 21                	jne    86082ea <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x1ca>
 86082c9:	8b 45 08             	mov    0x8(%ebp),%eax
 86082cc:	8b 00                	mov    (%eax),%eax
 86082ce:	89 04 24             	mov    %eax,(%esp)
 86082d1:	e8 4a 5c af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86082d6:	8b 55 08             	mov    0x8(%ebp),%edx
 86082d9:	83 c2 46             	add    $0x46,%edx
 86082dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86082e0:	89 14 24             	mov    %edx,(%esp)
 86082e3:	e8 fa cc ff ff       	call   8604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>
 86082e8:	eb 22                	jmp    860830c <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x1ec>
 86082ea:	8b 45 08             	mov    0x8(%ebp),%eax
 86082ed:	8b 00                	mov    (%eax),%eax
 86082ef:	89 04 24             	mov    %eax,(%esp)
 86082f2:	e8 29 5c af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86082f7:	8b 55 08             	mov    0x8(%ebp),%edx
 86082fa:	81 c2 de 01 00 00    	add    $0x1de,%edx
 8608300:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608304:	89 14 24             	mov    %edx,(%esp)
 8608307:	e8 d6 cc ff ff       	call   8604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>
 860830c:	8d 45 98             	lea    -0x68(%ebp),%eax
 860830f:	89 04 24             	mov    %eax,(%esp)
 8608312:	e8 bf c6 b2 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8608317:	8d 45 90             	lea    -0x70(%ebp),%eax
 860831a:	89 04 24             	mov    %eax,(%esp)
 860831d:	e8 6c d9 ba ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8608322:	8b 45 08             	mov    0x8(%ebp),%eax
 8608325:	8b 00                	mov    (%eax),%eax
 8608327:	89 04 24             	mov    %eax,(%esp)
 860832a:	e8 0d 6f c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 860832f:	0f be f0             	movsbl %al,%esi
 8608332:	8b 45 08             	mov    0x8(%ebp),%eax
 8608335:	8b 00                	mov    (%eax),%eax
 8608337:	89 04 24             	mov    %eax,(%esp)
 860833a:	e8 55 89 b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 860833f:	0f be d8             	movsbl %al,%ebx
 8608342:	e8 54 3e ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8608347:	8b 78 14             	mov    0x14(%eax),%edi
 860834a:	8b 45 08             	mov    0x8(%ebp),%eax
 860834d:	8b 00                	mov    (%eax),%eax
 860834f:	89 04 24             	mov    %eax,(%esp)
 8608352:	e8 c9 5b af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8608357:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 860835d:	8d 14 07             	lea    (%edi,%eax,1),%edx
 8608360:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8608367:	00 
 8608368:	8d 45 98             	lea    -0x68(%ebp),%eax
 860836b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860836f:	89 74 24 08          	mov    %esi,0x8(%esp)
 8608373:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8608377:	89 14 24             	mov    %edx,(%esp)
 860837a:	e8 19 04 d4 ff       	call   8348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>
 860837f:	88 45 cf             	mov    %al,-0x31(%ebp)
 8608382:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 8608386:	83 f0 01             	xor    $0x1,%eax
 8608389:	84 c0                	test   %al,%al
 860838b:	74 0a                	je     8608397 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x277>
 860838d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8608392:	e9 4b 02 00 00       	jmp    86085e2 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x4c2>
 8608397:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 860839e:	eb 5e                	jmp    86083fe <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x2de>
 86083a0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86083a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86083a7:	8d 45 98             	lea    -0x68(%ebp),%eax
 86083aa:	89 04 24             	mov    %eax,(%esp)
 86083ad:	e8 f2 24 ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 86083b2:	8b 50 04             	mov    0x4(%eax),%edx
 86083b5:	8b 00                	mov    (%eax),%eax
 86083b7:	89 45 90             	mov    %eax,-0x70(%ebp)
 86083ba:	89 55 94             	mov    %edx,-0x6c(%ebp)
 86083bd:	8b 45 90             	mov    -0x70(%ebp),%eax
 86083c0:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86083c3:	8b 45 94             	mov    -0x6c(%ebp),%eax
 86083c6:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86083c9:	8b 45 08             	mov    0x8(%ebp),%eax
 86083cc:	8b 00                	mov    (%eax),%eax
 86083ce:	89 04 24             	mov    %eax,(%esp)
 86083d1:	e8 4a 5b af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86083d6:	8b 55 10             	mov    0x10(%ebp),%edx
 86083d9:	89 54 24 10          	mov    %edx,0x10(%esp)
 86083dd:	8b 55 c8             	mov    -0x38(%ebp),%edx
 86083e0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86083e4:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 86083e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 86083eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86083ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86083f2:	89 04 24             	mov    %eax,(%esp)
 86083f5:	e8 c2 bc ff ff       	call   86040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>
 86083fa:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 86083fe:	8d 45 98             	lea    -0x68(%ebp),%eax
 8608401:	89 04 24             	mov    %eax,(%esp)
 8608404:	e8 0b 54 ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8608409:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 860840c:	0f 9f c0             	setg   %al
 860840f:	84 c0                	test   %al,%al
 8608411:	75 8d                	jne    86083a0 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x280>
 8608413:	8b 45 08             	mov    0x8(%ebp),%eax
 8608416:	8b 00                	mov    (%eax),%eax
 8608418:	89 04 24             	mov    %eax,(%esp)
 860841b:	e8 74 74 c2 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 8608420:	89 c3                	mov    %eax,%ebx
 8608422:	e8 74 3d ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8608427:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860842b:	89 04 24             	mov    %eax,(%esp)
 860842e:	e8 bf 31 c2 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 8608433:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8608436:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 860843a:	0f 84 87 00 00 00    	je     86084c7 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x3a7>
 8608440:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8608447:	eb 66                	jmp    86084af <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x38f>
 8608449:	8b 45 08             	mov    0x8(%ebp),%eax
 860844c:	8b 00                	mov    (%eax),%eax
 860844e:	89 04 24             	mov    %eax,(%esp)
 8608451:	e8 d0 cb d6 ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 8608456:	8b 55 08             	mov    0x8(%ebp),%edx
 8608459:	8b 12                	mov    (%edx),%edx
 860845b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860845f:	89 14 24             	mov    %edx,(%esp)
 8608462:	e8 15 38 08 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 8608467:	89 c3                	mov    %eax,%ebx
 8608469:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860846c:	8d 50 0c             	lea    0xc(%eax),%edx
 860846f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8608472:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608476:	89 14 24             	mov    %edx,(%esp)
 8608479:	e8 26 24 ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 860847e:	8b 30                	mov    (%eax),%esi
 8608480:	8b 45 08             	mov    0x8(%ebp),%eax
 8608483:	8b 00                	mov    (%eax),%eax
 8608485:	89 04 24             	mov    %eax,(%esp)
 8608488:	e8 93 5a af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 860848d:	8b 55 10             	mov    0x10(%ebp),%edx
 8608490:	89 54 24 10          	mov    %edx,0x10(%esp)
 8608494:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8608498:	89 74 24 08          	mov    %esi,0x8(%esp)
 860849c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86084a0:	8b 45 08             	mov    0x8(%ebp),%eax
 86084a3:	89 04 24             	mov    %eax,(%esp)
 86084a6:	e8 11 bc ff ff       	call   86040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>
 86084ab:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 86084af:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86084b2:	83 c0 0c             	add    $0xc,%eax
 86084b5:	89 04 24             	mov    %eax,(%esp)
 86084b8:	e8 57 53 ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 86084bd:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 86084c0:	0f 97 c0             	seta   %al
 86084c3:	84 c0                	test   %al,%al
 86084c5:	75 82                	jne    8608449 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x329>
 86084c7:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 86084cd:	89 04 24             	mov    %eax,(%esp)
 86084d0:	e8 e9 ca c2 ff       	call   8234fbe <_ZN8WongWork13CSkillChangerC1Ev>
 86084d5:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86084dc:	8b 45 10             	mov    0x10(%ebp),%eax
 86084df:	83 f8 ff             	cmp    $0xffffffff,%eax
 86084e2:	74 07                	je     86084eb <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x3cb>
 86084e4:	8b 45 10             	mov    0x10(%ebp),%eax
 86084e7:	85 c0                	test   %eax,%eax
 86084e9:	75 09                	jne    86084f4 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x3d4>
 86084eb:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 86084f2:	eb 07                	jmp    86084fb <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x3db>
 86084f4:	c7 45 d4 02 00 00 00 	movl   $0x2,-0x2c(%ebp)
 86084fb:	8b 45 08             	mov    0x8(%ebp),%eax
 86084fe:	8b 00                	mov    (%eax),%eax
 8608500:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8608507:	00 
 8608508:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 860850b:	89 54 24 08          	mov    %edx,0x8(%esp)
 860850f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608513:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 8608519:	89 04 24             	mov    %eax,(%esp)
 860851c:	e8 6f 19 00 00       	call   8609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>
 8608521:	80 bd f4 fe ff ff 00 	cmpb   $0x0,-0x10c(%ebp)
 8608528:	74 56                	je     8608580 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x460>
 860852a:	8b 45 08             	mov    0x8(%ebp),%eax
 860852d:	8b 00                	mov    (%eax),%eax
 860852f:	89 04 24             	mov    %eax,(%esp)
 8608532:	e8 33 3f 06 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 8608537:	8b 45 08             	mov    0x8(%ebp),%eax
 860853a:	8b 00                	mov    (%eax),%eax
 860853c:	89 04 24             	mov    %eax,(%esp)
 860853f:	e8 e4 8a af ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8608544:	89 c3                	mov    %eax,%ebx
 8608546:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 860854d:	00 
 860854e:	c7 44 24 08 86 0b 00 	movl   $0xb86,0x8(%esp)
 8608555:	00 
 8608556:	c7 44 24 04 00 e5 cd 	movl   $0x8cde500,0x4(%esp)
 860855d:	08 
 860855e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8608561:	89 04 24             	mov    %eax,(%esp)
 8608564:	e8 af 71 f4 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8608569:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 860856d:	c7 44 24 04 cc d3 cd 	movl   $0x8cdd3cc,0x4(%esp)
 8608574:	08 
 8608575:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8608578:	89 04 24             	mov    %eax,(%esp)
 860857b:	e8 08 72 f4 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8608580:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8608587:	00 
 8608588:	8b 45 10             	mov    0x10(%ebp),%eax
 860858b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860858f:	8b 45 08             	mov    0x8(%ebp),%eax
 8608592:	89 04 24             	mov    %eax,(%esp)
 8608595:	e8 60 00 00 00       	call   86085fa <_ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi>
 860859a:	bb 01 00 00 00       	mov    $0x1,%ebx
 860859f:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 86085a5:	89 04 24             	mov    %eax,(%esp)
 86085a8:	e8 17 ca c2 ff       	call   8234fc4 <_ZN8WongWork13CSkillChangerD1Ev>
 86085ad:	eb 33                	jmp    86085e2 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x4c2>
 86085af:	89 d3                	mov    %edx,%ebx
 86085b1:	89 c6                	mov    %eax,%esi
 86085b3:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 86085b9:	89 04 24             	mov    %eax,(%esp)
 86085bc:	e8 03 ca c2 ff       	call   8234fc4 <_ZN8WongWork13CSkillChangerD1Ev>
 86085c1:	89 f0                	mov    %esi,%eax
 86085c3:	89 da                	mov    %ebx,%edx
 86085c5:	eb 00                	jmp    86085c7 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND+0x4a7>
 86085c7:	89 d3                	mov    %edx,%ebx
 86085c9:	89 c6                	mov    %eax,%esi
 86085cb:	8d 45 98             	lea    -0x68(%ebp),%eax
 86085ce:	89 04 24             	mov    %eax,(%esp)
 86085d1:	e8 14 c4 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86085d6:	89 f0                	mov    %esi,%eax
 86085d8:	89 da                	mov    %ebx,%edx
 86085da:	89 04 24             	mov    %eax,(%esp)
 86085dd:	e8 6e b1 4d 00       	call   8ae3750 <_Unwind_Resume>
 86085e2:	8d 45 98             	lea    -0x68(%ebp),%eax
 86085e5:	89 04 24             	mov    %eax,(%esp)
 86085e8:	e8 fd c3 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86085ed:	89 d8                	mov    %ebx,%eax
 86085ef:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 86085f5:	5b                   	pop    %ebx
 86085f6:	5e                   	pop    %esi
 86085f7:	5f                   	pop    %edi
 86085f8:	5d                   	pop    %ebp
 86085f9:	c3                   	ret

```

```c
// SkillSlot::InitSkill @ 0x8608120

/* SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall SkillSlot::InitSkill(SkillSlot *this,char param_1,int param_3)

{
  char cVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  CSkillChanger local_108 [148];
  undefined4 local_74;
  undefined4 local_70;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_6c [12];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  char local_35;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  
  if (*(int *)this == 0) {
    uVar10 = 0;
  }
  else {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar1 == '\0') {
      if ((param_3 == -1) || (param_3 == 0)) {
        iVar3 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
        addSkillOnCreateCharacter((_Mastered_skill *)(this + 0x46),iVar3);
      }
      else {
        iVar3 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
        addSkillOnCreateCharacter((_Mastered_skill *)(this + 0x1de),iVar3);
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_6c);
      std::pair<int,int>::pair((pair<int,int> *)&local_74);
      cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
      cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
                    /* try { // try from 08608342 to 086084aa has its CatchHandler @ 086085c7 */
      iVar3 = G_CDataManager();
      iVar3 = *(int *)(iVar3 + 0x14);
      iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
      local_35 = CCharacter::get_give_skill
                           ((CCharacter *)(iVar3 + iVar4 * 0x7dc),(int)cVar2,(int)cVar1,
                            (vector *)local_6c,0);
      if (local_35 == '\x01') {
        local_24 = 0;
        while( true ) {
          iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_6c)
          ;
          if (iVar3 <= (int)local_24) break;
          puVar7 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             (local_6c,local_24);
          local_70 = puVar7[1];
          local_74 = *puVar7;
          local_40 = local_74;
          local_3c = local_70;
          uVar10 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
          growtype_skill(this,uVar10,local_40,local_3c,param_3);
          local_24 = local_24 + 1;
        }
        CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
        iVar3 = G_CDataManager();
        local_34 = CDataManager::GetExpertJobScript(iVar3);
        if (local_34 != 0) {
          local_20 = 0;
          while( true ) {
            uVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (local_34 + 0xc));
            if (uVar9 <= local_20) break;
            iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)this);
            uVar6 = CUser::GetCurExpertJobLevel(*(CUser **)this,iVar3);
            puVar7 = (undefined4 *)
                     std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (local_34 + 0xc),local_20);
            uVar10 = *puVar7;
            uVar8 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
            growtype_skill(this,uVar8,uVar10,uVar6,param_3);
            local_20 = local_20 + 1;
          }
        }
        WongWork::CSkillChanger::CSkillChanger(local_108);
        if ((param_3 == -1) || (param_3 == 0)) {
          local_30 = 1;
        }
        else {
          local_30 = 2;
        }
                    /* try { // try from 0860851c to 08608599 has its CatchHandler @ 086085af */
        WongWork::CSkillChanger::SkillInitialize(local_108,*(CUser **)this,local_30,false);
        if (param_1 != '\0') {
          CUser::send_skill_info(*(CUser **)this);
          uVar10 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)this);
          cMyTrace::cMyTrace(local_50,"bool SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND)",0xb86,
                             0);
          cMyTrace::operator()(local_50,"SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",uVar10);
        }
        InitSkillHistoryLog(this,param_3,0);
        uVar10 = 1;
        WongWork::CSkillChanger::~CSkillChanger(local_108);
      }
      else {
        uVar10 = 0;
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_6c);
    }
    else {
      if ((param_3 == -1) || (param_3 == 0)) {
        local_2c = 1;
      }
      else {
        local_2c = 2;
      }
      CUser::givePvPSkillTree(*(CUser **)this,0,true,local_2c);
      iVar3 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)this);
      cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
      cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
      iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
      iVar5 = G_CDataManager();
      local_28 = PvPSkillTreeParameterScript::getPvPSkillPoint
                           ((PvPSkillTreeParameterScript *)(iVar5 + 0xa800),iVar4,(int)cVar2,
                            (int)cVar1,iVar3,false);
      set_remain_sp_at_index(this,local_28,param_3);
      if (param_1 != '\0') {
        CUser::send_skill_info(*(CUser **)this);
        uVar10 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)this);
        cMyTrace::cMyTrace(local_60,"bool SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND)",0xb47,0)
        ;
        cMyTrace::operator()(local_60,"SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",uVar10);
      }
      InitSkillHistoryLog(this,param_3,1);
      uVar10 = 1;
    }
  }
  return uVar10;
}

```

---

## InitSkillHistoryLog

```asm
// === 086085fa SkillSlot::InitSkillHistoryLog  [0x086085fa-0x86086a9] ===
 86085fa:	55                   	push   %ebp
 86085fb:	89 e5                	mov    %esp,%ebp
 86085fd:	57                   	push   %edi
 86085fe:	56                   	push   %esi
 86085ff:	53                   	push   %ebx
 8608600:	83 ec 3c             	sub    $0x3c,%esp
 8608603:	8b 45 08             	mov    0x8(%ebp),%eax
 8608606:	8b 00                	mov    (%eax),%eax
 8608608:	85 c0                	test   %eax,%eax
 860860a:	0f 84 91 00 00 00    	je     86086a1 <_ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi+0xa7>
 8608610:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608613:	83 f8 ff             	cmp    $0xffffffff,%eax
 8608616:	74 07                	je     860861f <_ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi+0x25>
 8608618:	8b 45 0c             	mov    0xc(%ebp),%eax
 860861b:	85 c0                	test   %eax,%eax
 860861d:	75 10                	jne    860862f <_ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi+0x35>
 860861f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8608626:	c7 45 e4 02 00 00 00 	movl   $0x2,-0x1c(%ebp)
 860862d:	eb 0e                	jmp    860863d <_ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi+0x43>
 860862f:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 8608636:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 860863d:	8b 7d 10             	mov    0x10(%ebp),%edi
 8608640:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8608643:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608647:	8b 45 08             	mov    0x8(%ebp),%eax
 860864a:	89 04 24             	mov    %eax,(%esp)
 860864d:	e8 a0 af ff ff       	call   86035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>
 8608652:	89 c6                	mov    %eax,%esi
 8608654:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8608657:	89 44 24 04          	mov    %eax,0x4(%esp)
 860865b:	8b 45 08             	mov    0x8(%ebp),%eax
 860865e:	89 04 24             	mov    %eax,(%esp)
 8608661:	e8 c2 ae ff ff       	call   8603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>
 8608666:	89 c3                	mov    %eax,%ebx
 8608668:	8b 45 08             	mov    0x8(%ebp),%eax
 860866b:	8b 00                	mov    (%eax),%eax
 860866d:	89 04 24             	mov    %eax,(%esp)
 8608670:	e8 43 1c ad ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8608675:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8608678:	8b 4d 08             	mov    0x8(%ebp),%ecx
 860867b:	8b 09                	mov    (%ecx),%ecx
 860867d:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 8608683:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8608687:	89 74 24 10          	mov    %esi,0x10(%esp)
 860868b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 860868f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8608693:	89 54 24 04          	mov    %edx,0x4(%esp)
 8608697:	89 0c 24             	mov    %ecx,(%esp)
 860869a:	e8 5b a6 07 00       	call   8682cfa <_ZN15cUserHistoryLog9InitSkillEiiii16eSkillInitReason>
 860869f:	eb 01                	jmp    86086a2 <_ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi+0xa8>
 86086a1:	90                   	nop
 86086a2:	83 c4 3c             	add    $0x3c,%esp
 86086a5:	5b                   	pop    %ebx
 86086a6:	5e                   	pop    %esi
 86086a7:	5f                   	pop    %edi
 86086a8:	5d                   	pop    %ebp
 86086a9:	c3                   	ret

```

```c
// SkillSlot::InitSkillHistoryLog @ 0x86085fa

/* SkillSlot::InitSkillHistoryLog(ENUM_SKILL_TREE_KIND, int) */

void __thiscall SkillSlot::InitSkillHistoryLog(SkillSlot *this,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)this != 0) {
    if ((param_2 == -1) || (param_2 == 0)) {
      local_24 = 0;
      local_20 = 2;
    }
    else {
      local_24 = 1;
      local_20 = 3;
    }
    uVar1 = get_remain_sfp_at_index(this,local_20);
    uVar2 = get_remain_sp_at_index(this,local_24);
    uVar3 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
    cUserHistoryLog::InitSkill
              ((cUserHistoryLog *)(*(int *)this + 0x79700),local_24,uVar3,uVar2,uVar1,param_3);
  }
  return;
}

```

---

## IsEmptySkillTree

```asm
// === 08606958 SkillSlot::IsEmptySkillTree  [0x08606958-0x86069b9] ===
 8606958:	55                   	push   %ebp
 8606959:	89 e5                	mov    %esp,%ebp
 860695b:	83 ec 18             	sub    $0x18,%esp
 860695e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8606961:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606965:	8b 45 08             	mov    0x8(%ebp),%eax
 8606968:	89 04 24             	mov    %eax,(%esp)
 860696b:	e8 6e fe ff ff       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8606970:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8606973:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8606977:	75 07                	jne    8606980 <_ZNK9SkillSlot16IsEmptySkillTreeE20ENUM_SKILL_TREE_KIND+0x28>
 8606979:	b8 00 00 00 00       	mov    $0x0,%eax
 860697e:	eb 38                	jmp    86069b8 <_ZNK9SkillSlot16IsEmptySkillTreeE20ENUM_SKILL_TREE_KIND+0x60>
 8606980:	c6 45 fb 01          	movb   $0x1,-0x5(%ebp)
 8606984:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 860698b:	eb 19                	jmp    86069a6 <_ZNK9SkillSlot16IsEmptySkillTreeE20ENUM_SKILL_TREE_KIND+0x4e>
 860698d:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8606990:	01 c0                	add    %eax,%eax
 8606992:	03 45 f4             	add    -0xc(%ebp),%eax
 8606995:	0f b6 00             	movzbl (%eax),%eax
 8606998:	84 c0                	test   %al,%al
 860699a:	74 06                	je     86069a2 <_ZNK9SkillSlot16IsEmptySkillTreeE20ENUM_SKILL_TREE_KIND+0x4a>
 860699c:	c6 45 fb 00          	movb   $0x0,-0x5(%ebp)
 86069a0:	eb 12                	jmp    86069b4 <_ZNK9SkillSlot16IsEmptySkillTreeE20ENUM_SKILL_TREE_KIND+0x5c>
 86069a2:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 86069a6:	81 7d fc cb 00 00 00 	cmpl   $0xcb,-0x4(%ebp)
 86069ad:	0f 9e c0             	setle  %al
 86069b0:	84 c0                	test   %al,%al
 86069b2:	75 d9                	jne    860698d <_ZNK9SkillSlot16IsEmptySkillTreeE20ENUM_SKILL_TREE_KIND+0x35>
 86069b4:	0f b6 45 fb          	movzbl -0x5(%ebp),%eax
 86069b8:	c9                   	leave
 86069b9:	c3                   	ret

```

```c
// SkillSlot::IsEmptySkillTree @ 0x8606958

/* SkillSlot::IsEmptySkillTree(ENUM_SKILL_TREE_KIND) const */

undefined1 __thiscall SkillSlot::IsEmptySkillTree(SkillSlot *this,undefined4 param_2)

{
  int iVar1;
  undefined1 local_9;
  int local_8;
  
  iVar1 = get_skillslot_buf(this,param_2);
  if (iVar1 == 0) {
    local_9 = 0;
  }
  else {
    local_9 = 1;
    for (local_8 = 0; local_8 < 0xcc; local_8 = local_8 + 1) {
      if (*(char *)(local_8 * 2 + iVar1) != '\0') {
        return 0;
      }
    }
  }
  return local_9;
}

```

---

## IsLoadStrikerSkill

```asm
// === 086086aa SkillSlot::IsLoadStrikerSkill  [0x086086aa-0x86086b5] ===
 86086aa:	55                   	push   %ebp
 86086ab:	89 e5                	mov    %esp,%ebp
 86086ad:	8b 45 08             	mov    0x8(%ebp),%eax
 86086b0:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 86086b4:	5d                   	pop    %ebp
 86086b5:	c3                   	ret

```

```c
// SkillSlot::IsLoadStrikerSkill @ 0x86086aa

/* SkillSlot::IsLoadStrikerSkill() */

SkillSlot __thiscall SkillSlot::IsLoadStrikerSkill(SkillSlot *this)

{
  return this[8];
}

```

---

## SendSkillInfo

```asm
// === 086086ce SkillSlot::SendSkillInfo  [0x086086ce-0x86088df] ===
 86086ce:	55                   	push   %ebp
 86086cf:	89 e5                	mov    %esp,%ebp
 86086d1:	56                   	push   %esi
 86086d2:	53                   	push   %ebx
 86086d3:	83 ec 30             	sub    $0x30,%esp
 86086d6:	8b 45 08             	mov    0x8(%ebp),%eax
 86086d9:	8b 00                	mov    (%eax),%eax
 86086db:	85 c0                	test   %eax,%eax
 86086dd:	0f 84 f5 01 00 00    	je     86088d8 <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND+0x20a>
 86086e3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86086e6:	89 04 24             	mov    %eax,(%esp)
 86086e9:	e8 5e 56 f8 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86086ee:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86086f1:	89 04 24             	mov    %eax,(%esp)
 86086f4:	e8 ed 31 ac ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86086f9:	c7 44 24 08 e5 01 00 	movl   $0x1e5,0x8(%esp)
 8608700:	00 
 8608701:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8608708:	00 
 8608709:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860870c:	89 04 24             	mov    %eax,(%esp)
 860870f:	e8 e8 31 ac ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8608714:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860871b:	00 
 860871c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860871f:	89 04 24             	mov    %eax,(%esp)
 8608722:	e8 f9 31 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8608727:	8b 45 0c             	mov    0xc(%ebp),%eax
 860872a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860872e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8608731:	89 04 24             	mov    %eax,(%esp)
 8608734:	e8 e7 31 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8608739:	8b 45 0c             	mov    0xc(%ebp),%eax
 860873c:	8b 55 08             	mov    0x8(%ebp),%edx
 860873f:	8b 12                	mov    (%edx),%edx
 8608741:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 8608747:	89 44 24 04          	mov    %eax,0x4(%esp)
 860874b:	89 14 24             	mov    %edx,(%esp)
 860874e:	e8 65 84 b9 ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 8608753:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 8608757:	0f be c0             	movsbl %al,%eax
 860875a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860875e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8608761:	89 04 24             	mov    %eax,(%esp)
 8608764:	e8 b7 31 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8608769:	8b 45 0c             	mov    0xc(%ebp),%eax
 860876c:	8b 55 08             	mov    0x8(%ebp),%edx
 860876f:	8b 12                	mov    (%edx),%edx
 8608771:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 8608777:	89 44 24 04          	mov    %eax,0x4(%esp)
 860877b:	89 14 24             	mov    %edx,(%esp)
 860877e:	e8 35 84 b9 ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 8608783:	0f b6 40 29          	movzbl 0x29(%eax),%eax
 8608787:	c1 e0 04             	shl    $0x4,%eax
 860878a:	c0 f8 04             	sar    $0x4,%al
 860878d:	0f be c0             	movsbl %al,%eax
 8608790:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608794:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8608797:	89 04 24             	mov    %eax,(%esp)
 860879a:	e8 81 31 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860879f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86087a2:	89 04 24             	mov    %eax,(%esp)
 86087a5:	e8 a2 83 b0 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 86087aa:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86087ad:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86087b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86087bb:	00 
 86087bc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86087bf:	89 04 24             	mov    %eax,(%esp)
 86087c2:	e8 59 31 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86087c7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86087ce:	8b 45 10             	mov    0x10(%ebp),%eax
 86087d1:	83 f8 ff             	cmp    $0xffffffff,%eax
 86087d4:	74 07                	je     86087dd <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND+0x10f>
 86087d6:	8b 45 10             	mov    0x10(%ebp),%eax
 86087d9:	85 c0                	test   %eax,%eax
 86087db:	75 0b                	jne    86087e8 <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND+0x11a>
 86087dd:	8b 45 08             	mov    0x8(%ebp),%eax
 86087e0:	83 c0 46             	add    $0x46,%eax
 86087e3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86087e6:	eb 0b                	jmp    86087f3 <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND+0x125>
 86087e8:	8b 45 08             	mov    0x8(%ebp),%eax
 86087eb:	05 de 01 00 00       	add    $0x1de,%eax
 86087f0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86087f3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86087fa:	eb 64                	jmp    8608860 <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND+0x192>
 86087fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86087ff:	01 c0                	add    %eax,%eax
 8608801:	03 45 f0             	add    -0x10(%ebp),%eax
 8608804:	0f b6 00             	movzbl (%eax),%eax
 8608807:	84 c0                	test   %al,%al
 8608809:	74 51                	je     860885c <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND+0x18e>
 860880b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860880e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608812:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8608815:	89 04 24             	mov    %eax,(%esp)
 8608818:	e8 03 31 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860881d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8608820:	01 c0                	add    %eax,%eax
 8608822:	03 45 f0             	add    -0x10(%ebp),%eax
 8608825:	0f b6 00             	movzbl (%eax),%eax
 8608828:	0f b6 c0             	movzbl %al,%eax
 860882b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860882f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8608832:	89 04 24             	mov    %eax,(%esp)
 8608835:	e8 e6 30 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860883a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860883d:	01 c0                	add    %eax,%eax
 860883f:	03 45 f0             	add    -0x10(%ebp),%eax
 8608842:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8608846:	0f be c0             	movsbl %al,%eax
 8608849:	89 44 24 04          	mov    %eax,0x4(%esp)
 860884d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8608850:	89 04 24             	mov    %eax,(%esp)
 8608853:	e8 c8 30 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8608858:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 860885c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8608860:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 8608867:	0f 9e c0             	setle  %al
 860886a:	84 c0                	test   %al,%al
 860886c:	75 8e                	jne    86087fc <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND+0x12e>
 860886e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8608871:	89 44 24 08          	mov    %eax,0x8(%esp)
 8608875:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8608878:	89 44 24 04          	mov    %eax,0x4(%esp)
 860887c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860887f:	89 04 24             	mov    %eax,(%esp)
 8608882:	e8 a1 82 b0 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 8608887:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860888e:	00 
 860888f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8608892:	89 04 24             	mov    %eax,(%esp)
 8608895:	e8 be 30 ac ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 860889a:	8b 45 08             	mov    0x8(%ebp),%eax
 860889d:	8b 00                	mov    (%eax),%eax
 860889f:	8d 55 e0             	lea    -0x20(%ebp),%edx
 86088a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 86088a6:	89 04 24             	mov    %eax,(%esp)
 86088a9:	e8 0c fd 03 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86088ae:	eb 1b                	jmp    86088cb <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND+0x1fd>
 86088b0:	89 d3                	mov    %edx,%ebx
 86088b2:	89 c6                	mov    %eax,%esi
 86088b4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86088b7:	89 04 24             	mov    %eax,(%esp)
 86088ba:	e8 c1 55 f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86088bf:	89 f0                	mov    %esi,%eax
 86088c1:	89 da                	mov    %ebx,%edx
 86088c3:	89 04 24             	mov    %eax,(%esp)
 86088c6:	e8 85 ae 4d 00       	call   8ae3750 <_Unwind_Resume>
 86088cb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86088ce:	89 04 24             	mov    %eax,(%esp)
 86088d1:	e8 aa 55 f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86088d6:	eb 01                	jmp    86088d9 <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND+0x20b>
 86088d8:	90                   	nop
 86088d9:	83 c4 30             	add    $0x30,%esp
 86088dc:	5b                   	pop    %ebx
 86088dd:	5e                   	pop    %esi
 86088de:	5d                   	pop    %ebp
 86088df:	c3                   	ret

```

```c
// SkillSlot::SendSkillInfo @ 0x86086ce

/* SkillSlot::SendSkillInfo(int, ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::SendSkillInfo(SkillSlot *this,uint param_1,int param_3)

{
  int iVar1;
  int local_28;
  PacketGuard local_24 [12];
  int local_18;
  SkillSlot *local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 086086f4 to 086088ad has its CatchHandler @ 086088b0 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1e5);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,param_1);
    iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(*(int *)this + 0x796e8)
                       ,param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)*(char *)(iVar1 + 0x26));
    iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(*(int *)this + 0x796e8)
                       ,param_1);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_24,(int)((char)(*(char *)(iVar1 + 0x29) << 4) >> 4));
    local_28 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_24);
    local_18 = 0;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    if ((param_3 == -1) || (param_3 == 0)) {
      local_14 = this + 0x46;
    }
    else {
      local_14 = this + 0x1de;
    }
    for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
      if (local_14[local_10 * 2] != (SkillSlot)0x0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,local_10);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)(byte)local_14[local_10 * 2]);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(int)(char)local_14[local_10 * 2 + 1]);
        local_18 = local_18 + 1;
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,&local_28,local_18);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(*(CUser **)this,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  return;
}

```

---

## SetLoadStrikerSkill

```asm
// === 086086b6 SkillSlot::SetLoadStrikerSkill  [0x086086b6-0x86086cd] ===
 86086b6:	55                   	push   %ebp
 86086b7:	89 e5                	mov    %esp,%ebp
 86086b9:	83 ec 04             	sub    $0x4,%esp
 86086bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 86086bf:	88 45 fc             	mov    %al,-0x4(%ebp)
 86086c2:	8b 45 08             	mov    0x8(%ebp),%eax
 86086c5:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 86086c9:	88 50 08             	mov    %dl,0x8(%eax)
 86086cc:	c9                   	leave
 86086cd:	c3                   	ret

```

```c
// SkillSlot::SetLoadStrikerSkill @ 0x86086b6

/* SkillSlot::SetLoadStrikerSkill(bool) */

void __thiscall SkillSlot::SetLoadStrikerSkill(SkillSlot *this,bool param_1)

{
  this[8] = (SkillSlot)param_1;
  return;
}

```

---

## backupSkill

```asm
// === 08607f58 SkillSlot::backupSkill  [0x08607f58-0x8608013] ===
 8607f58:	55                   	push   %ebp
 8607f59:	89 e5                	mov    %esp,%ebp
 8607f5b:	83 ec 28             	sub    $0x28,%esp
 8607f5e:	c7 45 f4 98 01 00 00 	movl   $0x198,-0xc(%ebp)
 8607f65:	8b 45 0c             	mov    0xc(%ebp),%eax
 8607f68:	83 f8 ff             	cmp    $0xffffffff,%eax
 8607f6b:	74 07                	je     8607f74 <_ZN9SkillSlot11backupSkillE20ENUM_SKILL_TREE_KIND+0x1c>
 8607f6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8607f70:	85 c0                	test   %eax,%eax
 8607f72:	75 47                	jne    8607fbb <_ZN9SkillSlot11backupSkillE20ENUM_SKILL_TREE_KIND+0x63>
 8607f74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8607f77:	8b 55 08             	mov    0x8(%ebp),%edx
 8607f7a:	8d 4a 46             	lea    0x46(%edx),%ecx
 8607f7d:	8b 55 08             	mov    0x8(%ebp),%edx
 8607f80:	81 c2 76 03 00 00    	add    $0x376,%edx
 8607f86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8607f8a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8607f8e:	89 14 24             	mov    %edx,(%esp)
 8607f91:	e8 0a 59 a7 ff       	call   807d8a0 <memcpy@plt>
 8607f96:	8b 45 08             	mov    0x8(%ebp),%eax
 8607f99:	8b 50 04             	mov    0x4(%eax),%edx
 8607f9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8607f9f:	89 90 10 05 00 00    	mov    %edx,0x510(%eax)
 8607fa5:	8b 45 08             	mov    0x8(%ebp),%eax
 8607fa8:	8b 50 14             	mov    0x14(%eax),%edx
 8607fab:	8b 45 08             	mov    0x8(%ebp),%eax
 8607fae:	89 90 14 05 00 00    	mov    %edx,0x514(%eax)
 8607fb4:	b8 01 00 00 00       	mov    $0x1,%eax
 8607fb9:	eb 57                	jmp    8608012 <_ZN9SkillSlot11backupSkillE20ENUM_SKILL_TREE_KIND+0xba>
 8607fbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8607fbe:	83 f8 01             	cmp    $0x1,%eax
 8607fc1:	75 4a                	jne    860800d <_ZN9SkillSlot11backupSkillE20ENUM_SKILL_TREE_KIND+0xb5>
 8607fc3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8607fc6:	8b 55 08             	mov    0x8(%ebp),%edx
 8607fc9:	8d 8a de 01 00 00    	lea    0x1de(%edx),%ecx
 8607fcf:	8b 55 08             	mov    0x8(%ebp),%edx
 8607fd2:	81 c2 76 03 00 00    	add    $0x376,%edx
 8607fd8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8607fdc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8607fe0:	89 14 24             	mov    %edx,(%esp)
 8607fe3:	e8 b8 58 a7 ff       	call   807d8a0 <memcpy@plt>
 8607fe8:	8b 45 08             	mov    0x8(%ebp),%eax
 8607feb:	8b 50 0c             	mov    0xc(%eax),%edx
 8607fee:	8b 45 08             	mov    0x8(%ebp),%eax
 8607ff1:	89 90 10 05 00 00    	mov    %edx,0x510(%eax)
 8607ff7:	8b 45 08             	mov    0x8(%ebp),%eax
 8607ffa:	8b 50 18             	mov    0x18(%eax),%edx
 8607ffd:	8b 45 08             	mov    0x8(%ebp),%eax
 8608000:	89 90 14 05 00 00    	mov    %edx,0x514(%eax)
 8608006:	b8 01 00 00 00       	mov    $0x1,%eax
 860800b:	eb 05                	jmp    8608012 <_ZN9SkillSlot11backupSkillE20ENUM_SKILL_TREE_KIND+0xba>
 860800d:	b8 00 00 00 00       	mov    $0x0,%eax
 8608012:	c9                   	leave
 8608013:	c3                   	ret

```

```c
// SkillSlot::backupSkill @ 0x8607f58

/* SkillSlot::backupSkill(ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall SkillSlot::backupSkill(SkillSlot *this,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == -1) || (param_2 == 0)) {
    memcpy(this + 0x376,this + 0x46,0x198);
    *(undefined4 *)(this + 0x510) = *(undefined4 *)(this + 4);
    *(undefined4 *)(this + 0x514) = *(undefined4 *)(this + 0x14);
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    memcpy(this + 0x376,this + 0x1de,0x198);
    *(undefined4 *)(this + 0x510) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0x514) = *(undefined4 *)(this + 0x18);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## calcReturnSpSfpPerOneSkill

```asm
// === 0860658e SkillSlot::calcReturnSpSfpPerOneSkill  [0x0860658e-0x86066f1] ===
 860658e:	55                   	push   %ebp
 860658f:	89 e5                	mov    %esp,%ebp
 8606591:	53                   	push   %ebx
 8606592:	83 ec 34             	sub    $0x34,%esp
 8606595:	8b 45 24             	mov    0x24(%ebp),%eax
 8606598:	88 45 e4             	mov    %al,-0x1c(%ebp)
 860659b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86065a2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86065a9:	8b 45 14             	mov    0x14(%ebp),%eax
 86065ac:	83 c0 01             	add    $0x1,%eax
 86065af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86065b2:	e9 11 01 00 00       	jmp    86066c8 <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0x13a>
 86065b7:	8b 45 08             	mov    0x8(%ebp),%eax
 86065ba:	8b 00                	mov    (%eax),%eax
 86065bc:	89 04 24             	mov    %eax,(%esp)
 86065bf:	e8 78 8c c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 86065c4:	0f be d8             	movsbl %al,%ebx
 86065c7:	8b 45 08             	mov    0x8(%ebp),%eax
 86065ca:	8b 00                	mov    (%eax),%eax
 86065cc:	89 04 24             	mov    %eax,(%esp)
 86065cf:	e8 c0 a6 b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 86065d4:	0f be c0             	movsbl %al,%eax
 86065d7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86065db:	89 44 24 04          	mov    %eax,0x4(%esp)
 86065df:	8b 45 20             	mov    0x20(%ebp),%eax
 86065e2:	89 04 24             	mov    %eax,(%esp)
 86065e5:	e8 d4 9f d4 ff       	call   83505be <_ZNK6CSkill27get_second_growtype_fitnessEii>
 86065ea:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86065ed:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86065f1:	75 22                	jne    8606615 <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0x87>
 86065f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86065f6:	8b 00                	mov    (%eax),%eax
 86065f8:	89 04 24             	mov    %eax,(%esp)
 86065fb:	e8 94 a6 b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8606600:	0f be c0             	movsbl %al,%eax
 8606603:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606607:	8b 45 20             	mov    0x20(%ebp),%eax
 860660a:	89 04 24             	mov    %eax,(%esp)
 860660d:	e8 66 2d 00 00       	call   8609378 <_ZNK6CSkill11get_fitnessEi>
 8606612:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8606615:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8606618:	8d 50 ff             	lea    -0x1(%eax),%edx
 860661b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860661e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8606622:	89 54 24 04          	mov    %edx,0x4(%esp)
 8606626:	8b 45 20             	mov    0x20(%ebp),%eax
 8606629:	89 04 24             	mov    %eax,(%esp)
 860662c:	e8 4b 9c d4 ff       	call   835027c <_ZNK6CSkill25get_need_sp_sfp_for_levelEii>
 8606631:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8606634:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8606638:	0f 88 a9 00 00 00    	js     86066e7 <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0x159>
 860663e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8606642:	7e 28                	jle    860666c <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0xde>
 8606644:	b8 64 00 00 00       	mov    $0x64,%eax
 8606649:	2b 45 f0             	sub    -0x10(%ebp),%eax
 860664c:	89 c1                	mov    %eax,%ecx
 860664e:	0f af 4d ec          	imul   -0x14(%ebp),%ecx
 8606652:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8606657:	89 c8                	mov    %ecx,%eax
 8606659:	f7 ea                	imul   %edx
 860665b:	c1 fa 05             	sar    $0x5,%edx
 860665e:	89 c8                	mov    %ecx,%eax
 8606660:	c1 f8 1f             	sar    $0x1f,%eax
 8606663:	89 d1                	mov    %edx,%ecx
 8606665:	29 c1                	sub    %eax,%ecx
 8606667:	89 c8                	mov    %ecx,%eax
 8606669:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860666c:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8606670:	74 1d                	je     860668f <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0x101>
 8606672:	8b 45 20             	mov    0x20(%ebp),%eax
 8606675:	89 04 24             	mov    %eax,(%esp)
 8606678:	e8 db 2c 00 00       	call   8609358 <_ZNK6CSkill17GetStealSPPenaltyEv>
 860667d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606681:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8606684:	89 04 24             	mov    %eax,(%esp)
 8606687:	e8 16 49 49 00       	call   8a9afa2 <_Z22getSkillSpendSPOnStealii>
 860668c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860668f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8606693:	78 55                	js     86066ea <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0x15c>
 8606695:	8b 45 20             	mov    0x20(%ebp),%eax
 8606698:	89 04 24             	mov    %eax,(%esp)
 860669b:	e8 12 4f c2 ff       	call   822b5b2 <_ZNK6CSkill14IsSpecialSkillEv>
 86066a0:	84 c0                	test   %al,%al
 86066a2:	74 11                	je     86066b5 <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0x127>
 86066a4:	8b 45 10             	mov    0x10(%ebp),%eax
 86066a7:	8b 00                	mov    (%eax),%eax
 86066a9:	89 c2                	mov    %eax,%edx
 86066ab:	03 55 ec             	add    -0x14(%ebp),%edx
 86066ae:	8b 45 10             	mov    0x10(%ebp),%eax
 86066b1:	89 10                	mov    %edx,(%eax)
 86066b3:	eb 0f                	jmp    86066c4 <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0x136>
 86066b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86066b8:	8b 00                	mov    (%eax),%eax
 86066ba:	89 c2                	mov    %eax,%edx
 86066bc:	03 55 ec             	add    -0x14(%ebp),%edx
 86066bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 86066c2:	89 10                	mov    %edx,(%eax)
 86066c4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86066c8:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86066cb:	01 c0                	add    %eax,%eax
 86066cd:	03 45 18             	add    0x18(%ebp),%eax
 86066d0:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 86066d4:	0f be c0             	movsbl %al,%eax
 86066d7:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86066da:	0f 9d c0             	setge  %al
 86066dd:	84 c0                	test   %al,%al
 86066df:	0f 85 d2 fe ff ff    	jne    86065b7 <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0x29>
 86066e5:	eb 04                	jmp    86066eb <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0x15d>
 86066e7:	90                   	nop
 86066e8:	eb 01                	jmp    86066eb <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb+0x15d>
 86066ea:	90                   	nop
 86066eb:	83 c4 34             	add    $0x34,%esp
 86066ee:	5b                   	pop    %ebx
 86066ef:	5d                   	pop    %ebp
 86066f0:	c3                   	ret
 86066f1:	90                   	nop

```

```c
// SkillSlot::calcReturnSpSfpPerOneSkill @ 0x860658e

/* SkillSlot::calcReturnSpSfpPerOneSkill(int&, int&, int, _Mastered_skill const*, int, CSkill
   const*, bool) const */

void __thiscall
SkillSlot::calcReturnSpSfpPerOneSkill
          (SkillSlot *this,int *param_1,int *param_2,int param_3,_Mastered_skill *param_4,
          int param_5,CSkill *param_6,bool param_7)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int local_18;
  int local_14;
  int local_10;
  
  while( true ) {
    local_10 = param_3 + 1;
    if ((char)param_4[param_5 * 2 + 1] < local_10) {
      return;
    }
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
    local_14 = CSkill::get_second_growtype_fitness(param_6,(int)cVar2,(int)cVar1);
    if (local_14 == 0) {
      cVar1 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
      local_14 = CSkill::get_fitness(param_6,(int)cVar1);
    }
    local_18 = CSkill::get_need_sp_sfp_for_level(param_6,param_3,local_10);
    if (local_18 < 0) break;
    if (0 < local_14) {
      local_18 = ((100 - local_14) * local_18) / 100;
    }
    if (param_7) {
      iVar3 = CSkill::GetStealSPPenalty(param_6);
      local_18 = getSkillSpendSPOnSteal(local_18,iVar3);
    }
    if (local_18 < 0) {
      return;
    }
    cVar1 = CSkill::IsSpecialSkill(param_6);
    param_3 = local_10;
    if (cVar1 == '\0') {
      *param_1 = *param_1 + local_18;
    }
    else {
      *param_2 = *param_2 + local_18;
    }
  }
  return;
}

```

---

## calcUsedSP

```asm
// === 086055ec SkillSlot::calcUsedSP  [0x086055ec-0x8605d29] ===
 86055ec:	55                   	push   %ebp
 86055ed:	89 e5                	mov    %esp,%ebp
 86055ef:	57                   	push   %edi
 86055f0:	56                   	push   %esi
 86055f1:	53                   	push   %ebx
 86055f2:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 86055f8:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 86055ff:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8605606:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 860560d:	8b 45 08             	mov    0x8(%ebp),%eax
 8605610:	8b 00                	mov    (%eax),%eax
 8605612:	89 04 24             	mov    %eax,(%esp)
 8605615:	e8 7a a2 c2 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 860561a:	85 c0                	test   %eax,%eax
 860561c:	0f 95 c0             	setne  %al
 860561f:	84 c0                	test   %al,%al
 8605621:	74 21                	je     8605644 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x58>
 8605623:	8b 45 08             	mov    0x8(%ebp),%eax
 8605626:	8b 00                	mov    (%eax),%eax
 8605628:	89 04 24             	mov    %eax,(%esp)
 860562b:	e8 f6 f9 d6 ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 8605630:	8b 55 08             	mov    0x8(%ebp),%edx
 8605633:	8b 12                	mov    (%edx),%edx
 8605635:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605639:	89 14 24             	mov    %edx,(%esp)
 860563c:	e8 3b 66 08 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 8605641:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8605644:	e8 52 6b ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8605649:	8b 58 14             	mov    0x14(%eax),%ebx
 860564c:	8b 45 08             	mov    0x8(%ebp),%eax
 860564f:	8b 00                	mov    (%eax),%eax
 8605651:	89 04 24             	mov    %eax,(%esp)
 8605654:	e8 c7 88 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8605659:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 860565f:	05 40 02 00 00       	add    $0x240,%eax
 8605664:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8605667:	89 44 24 04          	mov    %eax,0x4(%esp)
 860566b:	8d 45 90             	lea    -0x70(%ebp),%eax
 860566e:	89 04 24             	mov    %eax,(%esp)
 8605671:	e8 8c 1c c3 ff       	call   8237302 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1ERKS3_>
 8605676:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8605679:	89 04 24             	mov    %eax,(%esp)
 860567c:	e8 55 f3 b2 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8605681:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 8605685:	8b 45 08             	mov    0x8(%ebp),%eax
 8605688:	8b 00                	mov    (%eax),%eax
 860568a:	89 04 24             	mov    %eax,(%esp)
 860568d:	e8 aa 9b c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 8605692:	84 c0                	test   %al,%al
 8605694:	0f 94 c0             	sete   %al
 8605697:	84 c0                	test   %al,%al
 8605699:	74 62                	je     86056fd <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x111>
 860569b:	8b 45 08             	mov    0x8(%ebp),%eax
 860569e:	8b 00                	mov    (%eax),%eax
 86056a0:	89 04 24             	mov    %eax,(%esp)
 86056a3:	e8 94 9b c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 86056a8:	0f be f0             	movsbl %al,%esi
 86056ab:	8b 45 08             	mov    0x8(%ebp),%eax
 86056ae:	8b 00                	mov    (%eax),%eax
 86056b0:	89 04 24             	mov    %eax,(%esp)
 86056b3:	e8 dc b5 b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 86056b8:	0f be d8             	movsbl %al,%ebx
 86056bb:	e8 db 6a ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 86056c0:	8b 78 14             	mov    0x14(%eax),%edi
 86056c3:	8b 45 08             	mov    0x8(%ebp),%eax
 86056c6:	8b 00                	mov    (%eax),%eax
 86056c8:	89 04 24             	mov    %eax,(%esp)
 86056cb:	e8 50 88 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86056d0:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 86056d6:	8d 14 07             	lea    (%edi,%eax,1),%edx
 86056d9:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 86056e0:	00 
 86056e1:	8d 45 84             	lea    -0x7c(%ebp),%eax
 86056e4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86056e8:	89 74 24 08          	mov    %esi,0x8(%esp)
 86056ec:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86056f0:	89 14 24             	mov    %edx,(%esp)
 86056f3:	e8 a0 30 d4 ff       	call   8348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>
 86056f8:	88 45 cb             	mov    %al,-0x35(%ebp)
 86056fb:	eb 60                	jmp    860575d <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x171>
 86056fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8605700:	8b 00                	mov    (%eax),%eax
 8605702:	89 04 24             	mov    %eax,(%esp)
 8605705:	e8 32 9b c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 860570a:	0f be f0             	movsbl %al,%esi
 860570d:	8b 45 08             	mov    0x8(%ebp),%eax
 8605710:	8b 00                	mov    (%eax),%eax
 8605712:	89 04 24             	mov    %eax,(%esp)
 8605715:	e8 7a b5 b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 860571a:	0f be d8             	movsbl %al,%ebx
 860571d:	e8 79 6a ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8605722:	8b 78 14             	mov    0x14(%eax),%edi
 8605725:	8b 45 08             	mov    0x8(%ebp),%eax
 8605728:	8b 00                	mov    (%eax),%eax
 860572a:	89 04 24             	mov    %eax,(%esp)
 860572d:	e8 ee 87 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8605732:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 8605738:	8d 14 07             	lea    (%edi,%eax,1),%edx
 860573b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8605742:	00 
 8605743:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8605746:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860574a:	89 74 24 08          	mov    %esi,0x8(%esp)
 860574e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8605752:	89 14 24             	mov    %edx,(%esp)
 8605755:	e8 3e 30 d4 ff       	call   8348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>
 860575a:	88 45 cb             	mov    %al,-0x35(%ebp)
 860575d:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 8605761:	83 f0 01             	xor    $0x1,%eax
 8605764:	84 c0                	test   %al,%al
 8605766:	74 0a                	je     8605772 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x186>
 8605768:	bb 00 00 00 00       	mov    $0x0,%ebx
 860576d:	e9 7a 05 00 00       	jmp    8605cec <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x700>
 8605772:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8605775:	8d 55 84             	lea    -0x7c(%ebp),%edx
 8605778:	89 54 24 04          	mov    %edx,0x4(%esp)
 860577c:	89 04 24             	mov    %eax,(%esp)
 860577f:	e8 2e 7e ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8605784:	83 ec 04             	sub    $0x4,%esp
 8605787:	8d 45 9c             	lea    -0x64(%ebp),%eax
 860578a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860578e:	8d 45 80             	lea    -0x80(%ebp),%eax
 8605791:	89 04 24             	mov    %eax,(%esp)
 8605794:	e8 89 21 d8 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 8605799:	8d 45 a0             	lea    -0x60(%ebp),%eax
 860579c:	8d 55 84             	lea    -0x7c(%ebp),%edx
 860579f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86057a3:	89 04 24             	mov    %eax,(%esp)
 86057a6:	e8 2b 7e ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 86057ab:	83 ec 04             	sub    $0x4,%esp
 86057ae:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86057b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86057b5:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 86057bb:	89 04 24             	mov    %eax,(%esp)
 86057be:	e8 5f 21 d8 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 86057c3:	e9 32 01 00 00       	jmp    86058fa <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x30e>
 86057c8:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 86057ce:	8d 55 90             	lea    -0x70(%ebp),%edx
 86057d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86057d5:	89 04 24             	mov    %eax,(%esp)
 86057d8:	e8 d5 7d ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 86057dd:	83 ec 04             	sub    $0x4,%esp
 86057e0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 86057e6:	8d 55 90             	lea    -0x70(%ebp),%edx
 86057e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 86057ed:	89 04 24             	mov    %eax,(%esp)
 86057f0:	e8 e1 7d ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 86057f5:	83 ec 04             	sub    $0x4,%esp
 86057f8:	eb 76                	jmp    8605870 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x284>
 86057fa:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8605800:	89 04 24             	mov    %eax,(%esp)
 8605803:	e8 e6 c4 b0 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8605808:	8b 18                	mov    (%eax),%ebx
 860580a:	8d 45 80             	lea    -0x80(%ebp),%eax
 860580d:	89 04 24             	mov    %eax,(%esp)
 8605810:	e8 fd e0 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8605815:	8b 00                	mov    (%eax),%eax
 8605817:	39 c3                	cmp    %eax,%ebx
 8605819:	0f 94 c0             	sete   %al
 860581c:	84 c0                	test   %al,%al
 860581e:	74 42                	je     8605862 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x276>
 8605820:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8605826:	89 04 24             	mov    %eax,(%esp)
 8605829:	e8 c0 c4 b0 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 860582e:	89 c3                	mov    %eax,%ebx
 8605830:	8d 45 80             	lea    -0x80(%ebp),%eax
 8605833:	89 04 24             	mov    %eax,(%esp)
 8605836:	e8 d7 e0 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 860583b:	8d 70 04             	lea    0x4(%eax),%esi
 860583e:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8605844:	89 04 24             	mov    %eax,(%esp)
 8605847:	e8 a2 c4 b0 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 860584c:	83 c0 04             	add    $0x4,%eax
 860584f:	89 74 24 04          	mov    %esi,0x4(%esp)
 8605853:	89 04 24             	mov    %eax,(%esp)
 8605856:	e8 bd 89 a8 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 860585b:	8b 00                	mov    (%eax),%eax
 860585d:	89 43 04             	mov    %eax,0x4(%ebx)
 8605860:	eb 2e                	jmp    8605890 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x2a4>
 8605862:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8605868:	89 04 24             	mov    %eax,(%esp)
 860586b:	e8 9a b9 b0 ff       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8605870:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8605876:	89 44 24 04          	mov    %eax,0x4(%esp)
 860587a:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8605880:	89 04 24             	mov    %eax,(%esp)
 8605883:	e8 56 b9 b0 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8605888:	84 c0                	test   %al,%al
 860588a:	0f 85 6a ff ff ff    	jne    86057fa <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x20e>
 8605890:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8605896:	89 44 24 04          	mov    %eax,0x4(%esp)
 860589a:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 86058a0:	89 04 24             	mov    %eax,(%esp)
 86058a3:	e8 e4 52 bb ff       	call   81bab8c <_ZN9__gnu_cxxeqIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 86058a8:	84 c0                	test   %al,%al
 86058aa:	74 43                	je     86058ef <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x303>
 86058ac:	8d 45 80             	lea    -0x80(%ebp),%eax
 86058af:	89 04 24             	mov    %eax,(%esp)
 86058b2:	e8 5b e0 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 86058b7:	8d 58 04             	lea    0x4(%eax),%ebx
 86058ba:	8d 45 80             	lea    -0x80(%ebp),%eax
 86058bd:	89 04 24             	mov    %eax,(%esp)
 86058c0:	e8 4d e0 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 86058c5:	89 c2                	mov    %eax,%edx
 86058c7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86058ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86058ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 86058d2:	89 04 24             	mov    %eax,(%esp)
 86058d5:	e8 5f 3b 00 00       	call   8609439 <_ZSt9make_pairIRKiS1_ESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 86058da:	83 ec 04             	sub    $0x4,%esp
 86058dd:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86058e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86058e4:	8d 45 90             	lea    -0x70(%ebp),%eax
 86058e7:	89 04 24             	mov    %eax,(%esp)
 86058ea:	e8 17 7d ad ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 86058ef:	8d 45 80             	lea    -0x80(%ebp),%eax
 86058f2:	89 04 24             	mov    %eax,(%esp)
 86058f5:	e8 d6 83 c3 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 86058fa:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8605900:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605904:	8d 45 80             	lea    -0x80(%ebp),%eax
 8605907:	89 04 24             	mov    %eax,(%esp)
 860590a:	e8 d6 df b8 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 860590f:	84 c0                	test   %al,%al
 8605911:	0f 85 b1 fe ff ff    	jne    86057c8 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x1dc>
 8605917:	e8 8b 4a ad ff       	call   80da3a7 <_Z11G_GameWorldv>
 860591c:	89 04 24             	mov    %eax,(%esp)
 860591f:	e8 fa ea c2 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 8605924:	84 c0                	test   %al,%al
 8605926:	74 60                	je     8605988 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x39c>
 8605928:	8d 45 90             	lea    -0x70(%ebp),%eax
 860592b:	89 04 24             	mov    %eax,(%esp)
 860592e:	e8 0f 4a b7 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8605933:	8b 45 08             	mov    0x8(%ebp),%eax
 8605936:	8b 00                	mov    (%eax),%eax
 8605938:	89 04 24             	mov    %eax,(%esp)
 860593b:	e8 fc 98 c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 8605940:	0f be f8             	movsbl %al,%edi
 8605943:	8b 45 08             	mov    0x8(%ebp),%eax
 8605946:	8b 00                	mov    (%eax),%eax
 8605948:	89 04 24             	mov    %eax,(%esp)
 860594b:	e8 44 b3 b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8605950:	0f be f0             	movsbl %al,%esi
 8605953:	8b 45 08             	mov    0x8(%ebp),%eax
 8605956:	8b 00                	mov    (%eax),%eax
 8605958:	89 04 24             	mov    %eax,(%esp)
 860595b:	e8 c0 85 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8605960:	89 c3                	mov    %eax,%ebx
 8605962:	e8 34 68 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8605967:	8d 90 00 a8 00 00    	lea    0xa800(%eax),%edx
 860596d:	8d 45 90             	lea    -0x70(%ebp),%eax
 8605970:	89 44 24 10          	mov    %eax,0x10(%esp)
 8605974:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8605978:	89 74 24 08          	mov    %esi,0x8(%esp)
 860597c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8605980:	89 14 24             	mov    %edx,(%esp)
 8605983:	e8 f0 87 45 00       	call   8a5e178 <_ZNK27PvPSkillTreeParameterScript12getGiveSkillEiiiRSt6vectorISt4pairIiiESaIS2_EE>
 8605988:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 860598f:	e9 2a 03 00 00       	jmp    8605cbe <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x6d2>
 8605994:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8605997:	01 c0                	add    %eax,%eax
 8605999:	03 45 0c             	add    0xc(%ebp),%eax
 860599c:	0f b6 00             	movzbl (%eax),%eax
 860599f:	84 c0                	test   %al,%al
 86059a1:	0f 84 0c 03 00 00    	je     8605cb3 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x6c7>
 86059a7:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86059ae:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86059b1:	01 c0                	add    %eax,%eax
 86059b3:	03 45 0c             	add    0xc(%ebp),%eax
 86059b6:	0f b6 00             	movzbl (%eax),%eax
 86059b9:	0f b6 f0             	movzbl %al,%esi
 86059bc:	8b 45 08             	mov    0x8(%ebp),%eax
 86059bf:	8b 00                	mov    (%eax),%eax
 86059c1:	89 04 24             	mov    %eax,(%esp)
 86059c4:	e8 57 85 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86059c9:	89 c3                	mov    %eax,%ebx
 86059cb:	e8 cb 67 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 86059d0:	89 74 24 08          	mov    %esi,0x8(%esp)
 86059d4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86059d8:	89 04 24             	mov    %eax,(%esp)
 86059db:	e8 c2 a3 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 86059e0:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86059e3:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 86059e7:	75 0a                	jne    86059f3 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x407>
 86059e9:	bb 00 00 00 00       	mov    $0x0,%ebx
 86059ee:	e9 f9 02 00 00       	jmp    8605cec <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x700>
 86059f3:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 86059f7:	8b 45 08             	mov    0x8(%ebp),%eax
 86059fa:	8b 00                	mov    (%eax),%eax
 86059fc:	89 04 24             	mov    %eax,(%esp)
 86059ff:	e8 b4 48 ad ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8605a04:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8605a07:	8b 45 08             	mov    0x8(%ebp),%eax
 8605a0a:	8b 00                	mov    (%eax),%eax
 8605a0c:	89 04 24             	mov    %eax,(%esp)
 8605a0f:	e8 28 98 c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 8605a14:	0f be d8             	movsbl %al,%ebx
 8605a17:	8b 45 08             	mov    0x8(%ebp),%eax
 8605a1a:	8b 00                	mov    (%eax),%eax
 8605a1c:	89 04 24             	mov    %eax,(%esp)
 8605a1f:	e8 70 b2 b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8605a24:	0f be c0             	movsbl %al,%eax
 8605a27:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8605a2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605a2f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8605a32:	89 04 24             	mov    %eax,(%esp)
 8605a35:	e8 b2 aa d4 ff       	call   83504ec <_ZNK6CSkill11IsStealableEii>
 8605a3a:	84 c0                	test   %al,%al
 8605a3c:	74 12                	je     8605a50 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x464>
 8605a3e:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 8605a42:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8605a45:	89 04 24             	mov    %eax,(%esp)
 8605a48:	e8 fd 38 00 00       	call   860934a <_ZNK6CSkill20GetStealLevelPenaltyEv>
 8605a4d:	29 45 d8             	sub    %eax,-0x28(%ebp)
 8605a50:	8b 45 08             	mov    0x8(%ebp),%eax
 8605a53:	8b 00                	mov    (%eax),%eax
 8605a55:	89 04 24             	mov    %eax,(%esp)
 8605a58:	e8 cb 73 b2 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 8605a5d:	89 04 24             	mov    %eax,(%esp)
 8605a60:	e8 33 39 00 00       	call   8609398 <_ZNK8WongWork12CUserPremium17getOverSkillLevelEv>
 8605a65:	0f b7 c0             	movzwl %ax,%eax
 8605a68:	01 45 d8             	add    %eax,-0x28(%ebp)
 8605a6b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8605a72:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8605a75:	8d 55 90             	lea    -0x70(%ebp),%edx
 8605a78:	89 54 24 04          	mov    %edx,0x4(%esp)
 8605a7c:	89 04 24             	mov    %eax,(%esp)
 8605a7f:	e8 2e 7b ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8605a84:	83 ec 04             	sub    $0x4,%esp
 8605a87:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8605a8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605a8e:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8605a94:	89 04 24             	mov    %eax,(%esp)
 8605a97:	e8 86 1e d8 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 8605a9c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8605a9f:	8d 55 90             	lea    -0x70(%ebp),%edx
 8605aa2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8605aa6:	89 04 24             	mov    %eax,(%esp)
 8605aa9:	e8 28 7b ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8605aae:	83 ec 04             	sub    $0x4,%esp
 8605ab1:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8605ab4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605ab8:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8605abe:	89 04 24             	mov    %eax,(%esp)
 8605ac1:	e8 5c 1e d8 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 8605ac6:	eb 4b                	jmp    8605b13 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x527>
 8605ac8:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8605ace:	89 04 24             	mov    %eax,(%esp)
 8605ad1:	e8 3c de b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8605ad6:	8b 10                	mov    (%eax),%edx
 8605ad8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8605adb:	01 c0                	add    %eax,%eax
 8605add:	03 45 0c             	add    0xc(%ebp),%eax
 8605ae0:	0f b6 00             	movzbl (%eax),%eax
 8605ae3:	0f b6 c0             	movzbl %al,%eax
 8605ae6:	39 c2                	cmp    %eax,%edx
 8605ae8:	0f 94 c0             	sete   %al
 8605aeb:	84 c0                	test   %al,%al
 8605aed:	74 16                	je     8605b05 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x519>
 8605aef:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8605af5:	89 04 24             	mov    %eax,(%esp)
 8605af8:	e8 15 de b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8605afd:	8b 40 04             	mov    0x4(%eax),%eax
 8605b00:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8605b03:	eb 2a                	jmp    8605b2f <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x543>
 8605b05:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8605b0b:	89 04 24             	mov    %eax,(%esp)
 8605b0e:	e8 bd 81 c3 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8605b13:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8605b19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605b1d:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8605b23:	89 04 24             	mov    %eax,(%esp)
 8605b26:	e8 ba dd b8 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8605b2b:	84 c0                	test   %al,%al
 8605b2d:	75 99                	jne    8605ac8 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x4dc>
 8605b2f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8605b36:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8605b3a:	74 2b                	je     8605b67 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x57b>
 8605b3c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8605b3f:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 8605b42:	7e 05                	jle    8605b49 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x55d>
 8605b44:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8605b47:	eb 03                	jmp    8605b4c <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x560>
 8605b49:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8605b4c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8605b4f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8605b52:	01 c0                	add    %eax,%eax
 8605b54:	03 45 0c             	add    0xc(%ebp),%eax
 8605b57:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8605b5b:	0f be c0             	movsbl %al,%eax
 8605b5e:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8605b61:	0f 8e 4f 01 00 00    	jle    8605cb6 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x6ca>
 8605b67:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 8605b6b:	0f 84 c5 00 00 00    	je     8605c36 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x64a>
 8605b71:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8605b75:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8605b78:	8d 50 0c             	lea    0xc(%eax),%edx
 8605b7b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8605b7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8605b82:	89 04 24             	mov    %eax,(%esp)
 8605b85:	e8 28 7a ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8605b8a:	83 ec 04             	sub    $0x4,%esp
 8605b8d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8605b90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605b94:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8605b9a:	89 04 24             	mov    %eax,(%esp)
 8605b9d:	e8 80 1d d8 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 8605ba2:	eb 53                	jmp    8605bf7 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x60b>
 8605ba4:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8605baa:	89 04 24             	mov    %eax,(%esp)
 8605bad:	e8 60 dd b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8605bb2:	8b 10                	mov    (%eax),%edx
 8605bb4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8605bb7:	01 c0                	add    %eax,%eax
 8605bb9:	03 45 0c             	add    0xc(%ebp),%eax
 8605bbc:	0f b6 00             	movzbl (%eax),%eax
 8605bbf:	0f b6 c0             	movzbl %al,%eax
 8605bc2:	39 c2                	cmp    %eax,%edx
 8605bc4:	0f 94 c0             	sete   %al
 8605bc7:	84 c0                	test   %al,%al
 8605bc9:	74 1e                	je     8605be9 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x5fd>
 8605bcb:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8605bce:	01 c0                	add    %eax,%eax
 8605bd0:	03 45 0c             	add    0xc(%ebp),%eax
 8605bd3:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8605bd7:	0f be c0             	movsbl %al,%eax
 8605bda:	3b 45 bc             	cmp    -0x44(%ebp),%eax
 8605bdd:	75 04                	jne    8605be3 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x5f7>
 8605bdf:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 8605be3:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 8605be7:	eb 43                	jmp    8605c2c <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x640>
 8605be9:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8605bef:	89 04 24             	mov    %eax,(%esp)
 8605bf2:	e8 d9 80 c3 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8605bf7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8605bfa:	8d 50 0c             	lea    0xc(%eax),%edx
 8605bfd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8605c00:	89 54 24 04          	mov    %edx,0x4(%esp)
 8605c04:	89 04 24             	mov    %eax,(%esp)
 8605c07:	e8 ca 79 ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8605c0c:	83 ec 04             	sub    $0x4,%esp
 8605c0f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8605c12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605c16:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8605c1c:	89 04 24             	mov    %eax,(%esp)
 8605c1f:	e8 18 1d d8 ff       	call   838793c <_ZN9__gnu_cxxneIPKSt4pairIiiEPS2_St6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS9_IT0_SB_EE>
 8605c24:	84 c0                	test   %al,%al
 8605c26:	0f 85 78 ff ff ff    	jne    8605ba4 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x5b8>
 8605c2c:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 8605c30:	0f 85 83 00 00 00    	jne    8605cb9 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x6cd>
 8605c36:	c7 85 70 ff ff ff 00 	movl   $0x0,-0x90(%ebp)
 8605c3d:	00 00 00 
 8605c40:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%ebp)
 8605c47:	00 00 00 
 8605c4a:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8605c4e:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8605c52:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8605c55:	89 44 24 18          	mov    %eax,0x18(%esp)
 8605c59:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8605c5c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8605c60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8605c63:	89 44 24 10          	mov    %eax,0x10(%esp)
 8605c67:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8605c6a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8605c6e:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8605c74:	89 44 24 08          	mov    %eax,0x8(%esp)
 8605c78:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8605c7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605c82:	8b 45 08             	mov    0x8(%ebp),%eax
 8605c85:	89 04 24             	mov    %eax,(%esp)
 8605c88:	e8 01 09 00 00       	call   860658e <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb>
 8605c8d:	8b 45 10             	mov    0x10(%ebp),%eax
 8605c90:	8b 10                	mov    (%eax),%edx
 8605c92:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8605c98:	01 c2                	add    %eax,%edx
 8605c9a:	8b 45 10             	mov    0x10(%ebp),%eax
 8605c9d:	89 10                	mov    %edx,(%eax)
 8605c9f:	8b 45 14             	mov    0x14(%ebp),%eax
 8605ca2:	8b 10                	mov    (%eax),%edx
 8605ca4:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8605caa:	01 c2                	add    %eax,%edx
 8605cac:	8b 45 14             	mov    0x14(%ebp),%eax
 8605caf:	89 10                	mov    %edx,(%eax)
 8605cb1:	eb 07                	jmp    8605cba <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x6ce>
 8605cb3:	90                   	nop
 8605cb4:	eb 04                	jmp    8605cba <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x6ce>
 8605cb6:	90                   	nop
 8605cb7:	eb 01                	jmp    8605cba <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x6ce>
 8605cb9:	90                   	nop
 8605cba:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 8605cbe:	81 7d cc cb 00 00 00 	cmpl   $0xcb,-0x34(%ebp)
 8605cc5:	0f 9e c0             	setle  %al
 8605cc8:	84 c0                	test   %al,%al
 8605cca:	0f 85 c4 fc ff ff    	jne    8605994 <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x3a8>
 8605cd0:	bb 01 00 00 00       	mov    $0x1,%ebx
 8605cd5:	eb 15                	jmp    8605cec <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x700>
 8605cd7:	89 d3                	mov    %edx,%ebx
 8605cd9:	89 c6                	mov    %eax,%esi
 8605cdb:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8605cde:	89 04 24             	mov    %eax,(%esp)
 8605ce1:	e8 04 ed b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8605ce6:	89 f0                	mov    %esi,%eax
 8605ce8:	89 da                	mov    %ebx,%edx
 8605cea:	eb 23                	jmp    8605d0f <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_+0x723>
 8605cec:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8605cef:	89 04 24             	mov    %eax,(%esp)
 8605cf2:	e8 f3 ec b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8605cf7:	85 db                	test   %ebx,%ebx
 8605cf9:	8d 45 90             	lea    -0x70(%ebp),%eax
 8605cfc:	89 04 24             	mov    %eax,(%esp)
 8605cff:	e8 e6 ec b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8605d04:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8605d07:	83 c4 00             	add    $0x0,%esp
 8605d0a:	5b                   	pop    %ebx
 8605d0b:	5e                   	pop    %esi
 8605d0c:	5f                   	pop    %edi
 8605d0d:	5d                   	pop    %ebp
 8605d0e:	c3                   	ret
 8605d0f:	89 d3                	mov    %edx,%ebx
 8605d11:	89 c6                	mov    %eax,%esi
 8605d13:	8d 45 90             	lea    -0x70(%ebp),%eax
 8605d16:	89 04 24             	mov    %eax,(%esp)
 8605d19:	e8 cc ec b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8605d1e:	89 f0                	mov    %esi,%eax
 8605d20:	89 da                	mov    %ebx,%edx
 8605d22:	89 04 24             	mov    %eax,(%esp)
 8605d25:	e8 26 da 4d 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// SkillSlot::calcUsedSP @ 0x86055ec

/* SkillSlot::calcUsedSP(_Mastered_skill const*, int&, int&) const */

void __thiscall
SkillSlot::calcUsedSP(SkillSlot *this,_Mastered_skill *param_1,int *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  GameWorld *this_00;
  CUserPremium *this_01;
  uint uVar8;
  uint *puVar9;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_a4 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_a0 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_9c [4];
  int local_98;
  int local_94;
  __normal_iterator local_90 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_8c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_88 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_84 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_80 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_74 [12];
  __normal_iterator local_68 [4];
  __normal_iterator local_64 [4];
  int local_60 [2];
  __normal_iterator local_58 [4];
  __normal_iterator local_54 [4];
  __normal_iterator local_50 [4];
  __normal_iterator local_4c [4];
  int local_48;
  int local_44;
  int local_40;
  char local_39;
  int local_38;
  CSkill *local_34;
  bool local_2d;
  int local_2c;
  int local_28;
  int local_24;
  char local_1d;
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  iVar4 = CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
  if (iVar4 != 0) {
    iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)this);
    local_48 = CUser::GetCurExpertJobLevel(*(CUser **)this,iVar4);
  }
  iVar4 = G_CDataManager();
  iVar4 = *(int *)(iVar4 + 0x14);
  iVar5 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (local_74,(vector *)(iVar4 + iVar5 * 0x7dc + 0x240));
                    /* try { // try from 0860567c to 08605680 has its CatchHandler @ 08605d0f */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_80);
  local_39 = 1;
  cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
  if (cVar1 == '\0') {
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
                    /* try { // try from 086056bb to 08605c8c has its CatchHandler @ 08605cd7 */
    iVar4 = G_CDataManager();
    iVar4 = *(int *)(iVar4 + 0x14);
    iVar5 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    local_39 = CCharacter::get_give_skill
                         ((CCharacter *)(iVar4 + iVar5 * 0x7dc),(int)cVar2,(int)cVar1,
                          (vector *)local_80,1);
  }
  else {
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
    iVar4 = G_CDataManager();
    iVar4 = *(int *)(iVar4 + 0x14);
    iVar5 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    local_39 = CCharacter::get_give_skill
                         ((CCharacter *)(iVar4 + iVar5 * 0x7dc),(int)cVar2,(int)cVar1,
                          (vector *)local_80,0);
  }
  if (local_39 == '\x01') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator<std::pair<int,int>*>(local_84,local_68);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator<std::pair<int,int>*>(local_88,local_64);
    while (bVar3 = __gnu_cxx::operator!=(local_84,local_88), bVar3) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      while (bVar3 = __gnu_cxx::operator!=(local_8c,local_90), bVar3) {
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_8c);
        iVar4 = *piVar7;
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_84);
        if (iVar4 == *piVar7) {
          iVar4 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator->(local_8c);
          iVar5 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator->(local_84);
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator->(local_8c);
          piVar7 = std::max<int>((int *)(iVar6 + 4),(int *)(iVar5 + 4));
          *(int *)(iVar4 + 4) = *piVar7;
          break;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_8c);
      }
      bVar3 = __gnu_cxx::operator==(local_8c,local_90);
      if (bVar3) {
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator->(local_84);
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_84);
        std::make_pair<int_const&,int_const&>(local_60,piVar7);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  (local_74,(pair *)local_60);
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_84);
    }
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar1 != '\0') {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_74);
      cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
      cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
      iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
      iVar5 = G_CDataManager();
      PvPSkillTreeParameterScript::getGiveSkill
                ((PvPSkillTreeParameterScript *)(iVar5 + 0xa800),iVar4,(int)cVar2,(int)cVar1,
                 (vector *)local_74);
    }
    for (local_38 = 0; local_38 < 0xcc; local_38 = local_38 + 1) {
      if (param_1[local_38 * 2] != (_Mastered_skill)0x0) {
        local_34 = (CSkill *)0x0;
        iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
        iVar5 = G_CDataManager();
        local_34 = (CSkill *)CDataManager::find_skill(iVar5,iVar4);
        if (local_34 == (CSkill *)0x0) break;
        local_2d = false;
        local_2c = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
        cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
        cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
        cVar1 = CSkill::IsStealable(local_34,(int)cVar2,(int)cVar1);
        if (cVar1 != '\0') {
          local_2d = true;
          iVar4 = CSkill::GetStealLevelPenalty(local_34);
          local_2c = local_2c - iVar4;
        }
        this_01 = (CUserPremium *)CUser::GetPremiumInfo(*(CUser **)this);
        uVar8 = WongWork::CUserPremium::getOverSkillLevel(this_01);
        local_2c = local_2c + (uVar8 & 0xffff);
        local_28 = 0;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_9c,local_58);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_a0,local_54);
        while (bVar3 = __gnu_cxx::operator!=(local_9c,local_a0), bVar3) {
          puVar9 = (uint *)__gnu_cxx::
                           __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                           ::operator->(local_9c);
          if (*puVar9 == (uint)(byte)param_1[local_38 * 2]) {
            iVar4 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_9c);
            local_28 = *(int *)(iVar4 + 4);
            break;
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_9c);
        }
        local_24 = 0;
        if (local_28 != 0) {
          local_24 = local_28;
          if (local_28 < 0) {
            local_24 = 0;
          }
          if ((char)param_1[local_38 * 2 + 1] <= local_24) goto LAB_08605cba;
        }
        if (local_40 != 0) {
          local_1d = '\0';
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::__normal_iterator<std::pair<int,int>*>(local_a4,local_50);
          while( true ) {
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
            bVar3 = __gnu_cxx::operator!=(local_a4,local_4c);
            if (!bVar3) break;
            puVar9 = (uint *)__gnu_cxx::
                             __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                             ::operator->(local_a4);
            if (*puVar9 == (uint)(byte)param_1[local_38 * 2]) {
              if ((char)param_1[local_38 * 2 + 1] == local_48) {
                local_44 = local_44 + 1;
              }
              local_1d = '\x01';
              break;
            }
            __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator++(local_a4);
          }
          if (local_1d != '\0') goto LAB_08605cba;
        }
        local_94 = 0;
        local_98 = 0;
        calcReturnSpSfpPerOneSkill
                  (this,&local_94,&local_98,local_24,param_1,local_38,local_34,local_2d);
        *param_2 = *param_2 + local_94;
        *param_3 = *param_3 + local_98;
      }
LAB_08605cba:
    }
  }
                    /* try { // try from 08605cf2 to 08605cf6 has its CatchHandler @ 08605d0f */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_80);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_74);
  return;
}

```

---

## checkComboSkillInsertQuickSlot

```asm
// === 08608d58 SkillSlot::checkComboSkillInsertQuickSlot  [0x08608d58-0x8608da3] ===
 8608d58:	55                   	push   %ebp
 8608d59:	89 e5                	mov    %esp,%ebp
 8608d5b:	83 ec 18             	sub    $0x18,%esp
 8608d5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8608d61:	8b 00                	mov    (%eax),%eax
 8608d63:	85 c0                	test   %eax,%eax
 8608d65:	75 07                	jne    8608d6e <_ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi+0x16>
 8608d67:	b8 00 00 00 00       	mov    $0x0,%eax
 8608d6c:	eb 34                	jmp    8608da2 <_ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi+0x4a>
 8608d6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8608d71:	8b 00                	mov    (%eax),%eax
 8608d73:	89 04 24             	mov    %eax,(%esp)
 8608d76:	e8 a5 51 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8608d7b:	83 f8 09             	cmp    $0x9,%eax
 8608d7e:	75 0d                	jne    8608d8d <_ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi+0x35>
 8608d80:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8608d84:	75 07                	jne    8608d8d <_ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi+0x35>
 8608d86:	b8 01 00 00 00       	mov    $0x1,%eax
 8608d8b:	eb 05                	jmp    8608d92 <_ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi+0x3a>
 8608d8d:	b8 00 00 00 00       	mov    $0x0,%eax
 8608d92:	84 c0                	test   %al,%al
 8608d94:	74 07                	je     8608d9d <_ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi+0x45>
 8608d96:	b8 00 00 00 00       	mov    $0x0,%eax
 8608d9b:	eb 05                	jmp    8608da2 <_ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi+0x4a>
 8608d9d:	b8 01 00 00 00       	mov    $0x1,%eax
 8608da2:	c9                   	leave
 8608da3:	c3                   	ret

```

```c
// SkillSlot::checkComboSkillInsertQuickSlot @ 0x8608d58

/* SkillSlot::checkComboSkillInsertQuickSlot(int) const */

undefined4 __thiscall SkillSlot::checkComboSkillInsertQuickSlot(SkillSlot *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    if ((iVar3 == 9) && (param_1 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## checkMoveComboSkillSlot

```asm
// === 08608c98 SkillSlot::checkMoveComboSkillSlot  [0x08608c98-0x8608cf5] ===
 8608c98:	55                   	push   %ebp
 8608c99:	89 e5                	mov    %esp,%ebp
 8608c9b:	83 ec 28             	sub    $0x28,%esp
 8608c9e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8608ca1:	8b 45 10             	mov    0x10(%ebp),%eax
 8608ca4:	88 55 f4             	mov    %dl,-0xc(%ebp)
 8608ca7:	88 45 f0             	mov    %al,-0x10(%ebp)
 8608caa:	8b 45 08             	mov    0x8(%ebp),%eax
 8608cad:	8b 00                	mov    (%eax),%eax
 8608caf:	85 c0                	test   %eax,%eax
 8608cb1:	75 07                	jne    8608cba <_ZN9SkillSlot23checkMoveComboSkillSlotEhh+0x22>
 8608cb3:	b8 00 00 00 00       	mov    $0x0,%eax
 8608cb8:	eb 3a                	jmp    8608cf4 <_ZN9SkillSlot23checkMoveComboSkillSlotEhh+0x5c>
 8608cba:	8b 45 08             	mov    0x8(%ebp),%eax
 8608cbd:	8b 00                	mov    (%eax),%eax
 8608cbf:	89 04 24             	mov    %eax,(%esp)
 8608cc2:	e8 59 52 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8608cc7:	83 f8 09             	cmp    $0x9,%eax
 8608cca:	75 13                	jne    8608cdf <_ZN9SkillSlot23checkMoveComboSkillSlotEhh+0x47>
 8608ccc:	80 7d f4 05          	cmpb   $0x5,-0xc(%ebp)
 8608cd0:	76 06                	jbe    8608cd8 <_ZN9SkillSlot23checkMoveComboSkillSlotEhh+0x40>
 8608cd2:	80 7d f0 05          	cmpb   $0x5,-0x10(%ebp)
 8608cd6:	77 07                	ja     8608cdf <_ZN9SkillSlot23checkMoveComboSkillSlotEhh+0x47>
 8608cd8:	b8 01 00 00 00       	mov    $0x1,%eax
 8608cdd:	eb 05                	jmp    8608ce4 <_ZN9SkillSlot23checkMoveComboSkillSlotEhh+0x4c>
 8608cdf:	b8 00 00 00 00       	mov    $0x0,%eax
 8608ce4:	84 c0                	test   %al,%al
 8608ce6:	74 07                	je     8608cef <_ZN9SkillSlot23checkMoveComboSkillSlotEhh+0x57>
 8608ce8:	b8 00 00 00 00       	mov    $0x0,%eax
 8608ced:	eb 05                	jmp    8608cf4 <_ZN9SkillSlot23checkMoveComboSkillSlotEhh+0x5c>
 8608cef:	b8 01 00 00 00       	mov    $0x1,%eax
 8608cf4:	c9                   	leave
 8608cf5:	c3                   	ret

```

```c
// SkillSlot::checkMoveComboSkillSlot @ 0x8608c98

/* SkillSlot::checkMoveComboSkillSlot(unsigned char, unsigned char) */

undefined4 __thiscall
SkillSlot::checkMoveComboSkillSlot(SkillSlot *this,uchar param_1,uchar param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    if ((iVar3 == 9) && ((param_1 < 6 || (param_2 < 6)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## checkOverLevelSkill

```asm
// === 08605d2a SkillSlot::checkOverLevelSkill  [0x08605d2a-0x860658d] ===
 8605d2a:	55                   	push   %ebp
 8605d2b:	89 e5                	mov    %esp,%ebp
 8605d2d:	57                   	push   %edi
 8605d2e:	56                   	push   %esi
 8605d2f:	53                   	push   %ebx
 8605d30:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 8605d36:	8b 45 08             	mov    0x8(%ebp),%eax
 8605d39:	8b 00                	mov    (%eax),%eax
 8605d3b:	85 c0                	test   %eax,%eax
 8605d3d:	74 11                	je     8605d50 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x26>
 8605d3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8605d42:	8b 00                	mov    (%eax),%eax
 8605d44:	89 04 24             	mov    %eax,(%esp)
 8605d47:	e8 e6 a6 b1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8605d4c:	85 c0                	test   %eax,%eax
 8605d4e:	75 07                	jne    8605d57 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x2d>
 8605d50:	b8 01 00 00 00       	mov    $0x1,%eax
 8605d55:	eb 05                	jmp    8605d5c <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x32>
 8605d57:	b8 00 00 00 00       	mov    $0x0,%eax
 8605d5c:	84 c0                	test   %al,%al
 8605d5e:	74 0a                	je     8605d6a <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x40>
 8605d60:	b8 00 00 00 00       	mov    $0x0,%eax
 8605d65:	e9 19 08 00 00       	jmp    8606583 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x859>
 8605d6a:	c6 45 af 00          	movb   $0x0,-0x51(%ebp)
 8605d6e:	8b 45 10             	mov    0x10(%ebp),%eax
 8605d71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605d75:	8b 45 08             	mov    0x8(%ebp),%eax
 8605d78:	89 04 24             	mov    %eax,(%esp)
 8605d7b:	e8 5e 0a 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8605d80:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8605d83:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8605d8a:	8b 45 10             	mov    0x10(%ebp),%eax
 8605d8d:	85 c0                	test   %eax,%eax
 8605d8f:	75 18                	jne    8605da9 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x7f>
 8605d91:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8605d98:	00 
 8605d99:	8b 45 08             	mov    0x8(%ebp),%eax
 8605d9c:	89 04 24             	mov    %eax,(%esp)
 8605d9f:	e8 6e 0a 00 00       	call   8606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>
 8605da4:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8605da7:	eb 1e                	jmp    8605dc7 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x9d>
 8605da9:	8b 45 10             	mov    0x10(%ebp),%eax
 8605dac:	83 f8 01             	cmp    $0x1,%eax
 8605daf:	75 16                	jne    8605dc7 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x9d>
 8605db1:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8605db8:	00 
 8605db9:	8b 45 08             	mov    0x8(%ebp),%eax
 8605dbc:	89 04 24             	mov    %eax,(%esp)
 8605dbf:	e8 4e 0a 00 00       	call   8606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>
 8605dc4:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8605dc7:	8b 45 10             	mov    0x10(%ebp),%eax
 8605dca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605dce:	8b 45 08             	mov    0x8(%ebp),%eax
 8605dd1:	89 04 24             	mov    %eax,(%esp)
 8605dd4:	e8 39 0a 00 00       	call   8606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>
 8605dd9:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8605ddc:	83 7d b0 00          	cmpl   $0x0,-0x50(%ebp)
 8605de0:	74 0c                	je     8605dee <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0xc4>
 8605de2:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 8605de6:	74 06                	je     8605dee <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0xc4>
 8605de8:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 8605dec:	75 0a                	jne    8605df8 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0xce>
 8605dee:	b8 00 00 00 00       	mov    $0x0,%eax
 8605df3:	e9 8b 07 00 00       	jmp    8606583 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x859>
 8605df8:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8605dff:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8605e06:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8605e0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8605e10:	8b 00                	mov    (%eax),%eax
 8605e12:	89 04 24             	mov    %eax,(%esp)
 8605e15:	e8 7a 9a c2 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 8605e1a:	89 c3                	mov    %eax,%ebx
 8605e1c:	e8 7a 63 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8605e21:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8605e25:	89 04 24             	mov    %eax,(%esp)
 8605e28:	e8 c5 57 c2 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 8605e2d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8605e30:	8b 45 08             	mov    0x8(%ebp),%eax
 8605e33:	8b 00                	mov    (%eax),%eax
 8605e35:	89 04 24             	mov    %eax,(%esp)
 8605e38:	e8 57 9a c2 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 8605e3d:	85 c0                	test   %eax,%eax
 8605e3f:	0f 95 c0             	setne  %al
 8605e42:	84 c0                	test   %al,%al
 8605e44:	74 21                	je     8605e67 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x13d>
 8605e46:	8b 45 08             	mov    0x8(%ebp),%eax
 8605e49:	8b 00                	mov    (%eax),%eax
 8605e4b:	89 04 24             	mov    %eax,(%esp)
 8605e4e:	e8 d3 f1 d6 ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 8605e53:	8b 55 08             	mov    0x8(%ebp),%edx
 8605e56:	8b 12                	mov    (%edx),%edx
 8605e58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605e5c:	89 14 24             	mov    %edx,(%esp)
 8605e5f:	e8 18 5e 08 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 8605e64:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8605e67:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8605e6e:	e9 68 06 00 00       	jmp    86064db <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x7b1>
 8605e73:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8605e76:	01 c0                	add    %eax,%eax
 8605e78:	03 45 b0             	add    -0x50(%ebp),%eax
 8605e7b:	0f b6 00             	movzbl (%eax),%eax
 8605e7e:	84 c0                	test   %al,%al
 8605e80:	0f 84 4a 06 00 00    	je     86064d0 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x7a6>
 8605e86:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8605e8d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8605e90:	01 c0                	add    %eax,%eax
 8605e92:	03 45 b0             	add    -0x50(%ebp),%eax
 8605e95:	0f b6 00             	movzbl (%eax),%eax
 8605e98:	0f b6 f0             	movzbl %al,%esi
 8605e9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8605e9e:	8b 00                	mov    (%eax),%eax
 8605ea0:	89 04 24             	mov    %eax,(%esp)
 8605ea3:	e8 78 80 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8605ea8:	89 c3                	mov    %eax,%ebx
 8605eaa:	e8 ec 62 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8605eaf:	89 74 24 08          	mov    %esi,0x8(%esp)
 8605eb3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8605eb7:	89 04 24             	mov    %eax,(%esp)
 8605eba:	e8 e3 9e d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8605ebf:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8605ec2:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8605ec6:	75 0a                	jne    8605ed2 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x1a8>
 8605ec8:	b8 00 00 00 00       	mov    $0x0,%eax
 8605ecd:	e9 b1 06 00 00       	jmp    8606583 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x859>
 8605ed2:	c6 45 d3 00          	movb   $0x0,-0x2d(%ebp)
 8605ed6:	8b 45 14             	mov    0x14(%ebp),%eax
 8605ed9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8605edc:	8b 45 08             	mov    0x8(%ebp),%eax
 8605edf:	8b 00                	mov    (%eax),%eax
 8605ee1:	89 04 24             	mov    %eax,(%esp)
 8605ee4:	e8 53 93 c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 8605ee9:	0f be d8             	movsbl %al,%ebx
 8605eec:	8b 45 08             	mov    0x8(%ebp),%eax
 8605eef:	8b 00                	mov    (%eax),%eax
 8605ef1:	89 04 24             	mov    %eax,(%esp)
 8605ef4:	e8 9b ad b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8605ef9:	0f be c0             	movsbl %al,%eax
 8605efc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8605f00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605f04:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8605f07:	89 04 24             	mov    %eax,(%esp)
 8605f0a:	e8 dd a5 d4 ff       	call   83504ec <_ZNK6CSkill11IsStealableEii>
 8605f0f:	84 c0                	test   %al,%al
 8605f11:	74 12                	je     8605f25 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x1fb>
 8605f13:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 8605f17:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8605f1a:	89 04 24             	mov    %eax,(%esp)
 8605f1d:	e8 28 34 00 00       	call   860934a <_ZNK6CSkill20GetStealLevelPenaltyEv>
 8605f22:	29 45 d4             	sub    %eax,-0x2c(%ebp)
 8605f25:	8b 45 08             	mov    0x8(%ebp),%eax
 8605f28:	8b 00                	mov    (%eax),%eax
 8605f2a:	89 04 24             	mov    %eax,(%esp)
 8605f2d:	e8 f6 6e b2 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 8605f32:	89 04 24             	mov    %eax,(%esp)
 8605f35:	e8 5e 34 00 00       	call   8609398 <_ZNK8WongWork12CUserPremium17getOverSkillLevelEv>
 8605f3a:	0f b7 c0             	movzwl %ax,%eax
 8605f3d:	01 45 d4             	add    %eax,-0x2c(%ebp)
 8605f40:	8b 45 08             	mov    0x8(%ebp),%eax
 8605f43:	8b 00                	mov    (%eax),%eax
 8605f45:	89 04 24             	mov    %eax,(%esp)
 8605f48:	e8 ef 92 c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 8605f4d:	0f be d8             	movsbl %al,%ebx
 8605f50:	8b 45 08             	mov    0x8(%ebp),%eax
 8605f53:	8b 00                	mov    (%eax),%eax
 8605f55:	89 04 24             	mov    %eax,(%esp)
 8605f58:	e8 37 ad b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8605f5d:	0f be c0             	movsbl %al,%eax
 8605f60:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8605f64:	89 44 24 08          	mov    %eax,0x8(%esp)
 8605f68:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8605f6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605f6f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8605f72:	89 04 24             	mov    %eax,(%esp)
 8605f75:	e8 86 a7 d4 ff       	call   8350700 <_ZNK6CSkill16getMaxSkillLevelEiii>
 8605f7a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8605f7d:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 8605f81:	75 1c                	jne    8605f9f <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x275>
 8605f83:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8605f86:	01 c0                	add    %eax,%eax
 8605f88:	03 45 b0             	add    -0x50(%ebp),%eax
 8605f8b:	c6 00 00             	movb   $0x0,(%eax)
 8605f8e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8605f91:	01 c0                	add    %eax,%eax
 8605f93:	03 45 b0             	add    -0x50(%ebp),%eax
 8605f96:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 8605f9a:	e9 38 05 00 00       	jmp    86064d7 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x7ad>
 8605f9f:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 8605fa3:	0f 84 c5 00 00 00    	je     860606e <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x344>
 8605fa9:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 8605fad:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8605fb0:	8d 50 0c             	lea    0xc(%eax),%edx
 8605fb3:	8d 45 88             	lea    -0x78(%ebp),%eax
 8605fb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8605fba:	89 04 24             	mov    %eax,(%esp)
 8605fbd:	e8 f0 75 ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8605fc2:	83 ec 04             	sub    $0x4,%esp
 8605fc5:	8d 45 88             	lea    -0x78(%ebp),%eax
 8605fc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8605fcc:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8605fd2:	89 04 24             	mov    %eax,(%esp)
 8605fd5:	e8 48 19 d8 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 8605fda:	eb 53                	jmp    860602f <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x305>
 8605fdc:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8605fe2:	89 04 24             	mov    %eax,(%esp)
 8605fe5:	e8 28 d9 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8605fea:	8b 10                	mov    (%eax),%edx
 8605fec:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8605fef:	01 c0                	add    %eax,%eax
 8605ff1:	03 45 b0             	add    -0x50(%ebp),%eax
 8605ff4:	0f b6 00             	movzbl (%eax),%eax
 8605ff7:	0f b6 c0             	movzbl %al,%eax
 8605ffa:	39 c2                	cmp    %eax,%edx
 8605ffc:	0f 94 c0             	sete   %al
 8605fff:	84 c0                	test   %al,%al
 8606001:	74 1e                	je     8606021 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x2f7>
 8606003:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8606006:	01 c0                	add    %eax,%eax
 8606008:	03 45 b0             	add    -0x50(%ebp),%eax
 860600b:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 860600f:	0f be c0             	movsbl %al,%eax
 8606012:	3b 45 bc             	cmp    -0x44(%ebp),%eax
 8606015:	75 04                	jne    860601b <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x2f1>
 8606017:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 860601b:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 860601f:	eb 43                	jmp    8606064 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x33a>
 8606021:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8606027:	89 04 24             	mov    %eax,(%esp)
 860602a:	e8 a1 7c c3 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 860602f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8606032:	8d 50 0c             	lea    0xc(%eax),%edx
 8606035:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8606038:	89 54 24 04          	mov    %edx,0x4(%esp)
 860603c:	89 04 24             	mov    %eax,(%esp)
 860603f:	e8 92 75 ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8606044:	83 ec 04             	sub    $0x4,%esp
 8606047:	8d 45 8c             	lea    -0x74(%ebp),%eax
 860604a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860604e:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8606054:	89 04 24             	mov    %eax,(%esp)
 8606057:	e8 e0 18 d8 ff       	call   838793c <_ZN9__gnu_cxxneIPKSt4pairIiiEPS2_St6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS9_IT0_SB_EE>
 860605c:	84 c0                	test   %al,%al
 860605e:	0f 85 78 ff ff ff    	jne    8605fdc <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x2b2>
 8606064:	80 7d e3 00          	cmpb   $0x0,-0x1d(%ebp)
 8606068:	0f 85 65 04 00 00    	jne    86064d3 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x7a9>
 860606e:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8606074:	89 04 24             	mov    %eax,(%esp)
 8606077:	e8 6a 33 00 00       	call   86093e6 <_ZNSt20_List_const_iteratorI10_pre_skillEC1Ev>
 860607c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 860607f:	8d 50 18             	lea    0x18(%eax),%edx
 8606082:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8606088:	89 54 24 04          	mov    %edx,0x4(%esp)
 860608c:	89 04 24             	mov    %eax,(%esp)
 860608f:	e8 f0 55 da ff       	call   83ab684 <_ZNKSt4listI10_pre_skillSaIS0_EE5beginEv>
 8606094:	83 ec 04             	sub    $0x4,%esp
 8606097:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 860609d:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 86060a3:	eb 7c                	jmp    8606121 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x3f7>
 86060a5:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 86060ab:	89 04 24             	mov    %eax,(%esp)
 86060ae:	e8 41 33 00 00       	call   86093f4 <_ZNKSt20_List_const_iteratorI10_pre_skillEdeEv>
 86060b3:	8b 10                	mov    (%eax),%edx
 86060b5:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 86060bb:	8b 50 04             	mov    0x4(%eax),%edx
 86060be:	89 55 80             	mov    %edx,-0x80(%ebp)
 86060c1:	8b 40 08             	mov    0x8(%eax),%eax
 86060c4:	89 45 84             	mov    %eax,-0x7c(%ebp)
 86060c7:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 86060ca:	8b 55 80             	mov    -0x80(%ebp),%edx
 86060cd:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 86060d3:	8b 5d 10             	mov    0x10(%ebp),%ebx
 86060d6:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86060da:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86060de:	89 54 24 08          	mov    %edx,0x8(%esp)
 86060e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86060e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86060e9:	89 04 24             	mov    %eax,(%esp)
 86060ec:	e8 63 e8 ff ff       	call   8604954 <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND>
 86060f1:	83 f0 01             	xor    $0x1,%eax
 86060f4:	84 c0                	test   %al,%al
 86060f6:	74 09                	je     8606101 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x3d7>
 86060f8:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 86060ff:	eb 55                	jmp    8606156 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x42c>
 8606101:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8606104:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860610b:	00 
 860610c:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8606112:	89 54 24 04          	mov    %edx,0x4(%esp)
 8606116:	89 04 24             	mov    %eax,(%esp)
 8606119:	e8 e4 32 00 00       	call   8609402 <_ZNSt20_List_const_iteratorI10_pre_skillEppEi>
 860611e:	83 ec 04             	sub    $0x4,%esp
 8606121:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8606124:	8d 50 18             	lea    0x18(%eax),%edx
 8606127:	8d 45 90             	lea    -0x70(%ebp),%eax
 860612a:	89 54 24 04          	mov    %edx,0x4(%esp)
 860612e:	89 04 24             	mov    %eax,(%esp)
 8606131:	e8 74 55 da ff       	call   83ab6aa <_ZNKSt4listI10_pre_skillSaIS0_EE3endEv>
 8606136:	83 ec 04             	sub    $0x4,%esp
 8606139:	8d 45 90             	lea    -0x70(%ebp),%eax
 860613c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606140:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8606146:	89 04 24             	mov    %eax,(%esp)
 8606149:	e8 82 04 dd ff       	call   83d65d0 <_ZNKSt20_List_const_iteratorI10_pre_skillEneERKS1_>
 860614e:	84 c0                	test   %al,%al
 8606150:	0f 85 4f ff ff ff    	jne    86060a5 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x37b>
 8606156:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8606159:	01 c0                	add    %eax,%eax
 860615b:	03 45 b0             	add    -0x50(%ebp),%eax
 860615e:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8606162:	0f be c0             	movsbl %al,%eax
 8606165:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8606168:	0f 8e 68 03 00 00    	jle    86064d6 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x7ac>
 860616e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8606175:	e8 21 60 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 860617a:	8b 58 14             	mov    0x14(%eax),%ebx
 860617d:	8b 45 08             	mov    0x8(%ebp),%eax
 8606180:	8b 00                	mov    (%eax),%eax
 8606182:	89 04 24             	mov    %eax,(%esp)
 8606185:	e8 96 7d af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 860618a:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 8606190:	05 40 02 00 00       	add    $0x240,%eax
 8606195:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8606198:	89 44 24 04          	mov    %eax,0x4(%esp)
 860619c:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 86061a2:	89 04 24             	mov    %eax,(%esp)
 86061a5:	e8 58 11 c3 ff       	call   8237302 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1ERKS3_>
 86061aa:	c6 45 e2 01          	movb   $0x1,-0x1e(%ebp)
 86061ae:	8b 45 08             	mov    0x8(%ebp),%eax
 86061b1:	8b 00                	mov    (%eax),%eax
 86061b3:	89 04 24             	mov    %eax,(%esp)
 86061b6:	e8 81 90 c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 86061bb:	84 c0                	test   %al,%al
 86061bd:	0f 94 c0             	sete   %al
 86061c0:	84 c0                	test   %al,%al
 86061c2:	74 65                	je     8606229 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x4ff>
 86061c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86061c7:	8b 00                	mov    (%eax),%eax
 86061c9:	89 04 24             	mov    %eax,(%esp)
 86061cc:	e8 6b 90 c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 86061d1:	0f be f0             	movsbl %al,%esi
 86061d4:	8b 45 08             	mov    0x8(%ebp),%eax
 86061d7:	8b 00                	mov    (%eax),%eax
 86061d9:	89 04 24             	mov    %eax,(%esp)
 86061dc:	e8 b3 aa b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 86061e1:	0f be d8             	movsbl %al,%ebx
 86061e4:	e8 b2 5f ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 86061e9:	8b 78 14             	mov    0x14(%eax),%edi
 86061ec:	8b 45 08             	mov    0x8(%ebp),%eax
 86061ef:	8b 00                	mov    (%eax),%eax
 86061f1:	89 04 24             	mov    %eax,(%esp)
 86061f4:	e8 27 7d af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86061f9:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 86061ff:	8d 14 07             	lea    (%edi,%eax,1),%edx
 8606202:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8606209:	00 
 860620a:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8606210:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8606214:	89 74 24 08          	mov    %esi,0x8(%esp)
 8606218:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860621c:	89 14 24             	mov    %edx,(%esp)
 860621f:	e8 74 25 d4 ff       	call   8348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>
 8606224:	88 45 e2             	mov    %al,-0x1e(%ebp)
 8606227:	eb 63                	jmp    860628c <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x562>
 8606229:	8b 45 08             	mov    0x8(%ebp),%eax
 860622c:	8b 00                	mov    (%eax),%eax
 860622e:	89 04 24             	mov    %eax,(%esp)
 8606231:	e8 06 90 c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 8606236:	0f be f0             	movsbl %al,%esi
 8606239:	8b 45 08             	mov    0x8(%ebp),%eax
 860623c:	8b 00                	mov    (%eax),%eax
 860623e:	89 04 24             	mov    %eax,(%esp)
 8606241:	e8 4e aa b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8606246:	0f be d8             	movsbl %al,%ebx
 8606249:	e8 4d 5f ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 860624e:	8b 78 14             	mov    0x14(%eax),%edi
 8606251:	8b 45 08             	mov    0x8(%ebp),%eax
 8606254:	8b 00                	mov    (%eax),%eax
 8606256:	89 04 24             	mov    %eax,(%esp)
 8606259:	e8 c2 7c af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 860625e:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 8606264:	8d 14 07             	lea    (%edi,%eax,1),%edx
 8606267:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 860626e:	00 
 860626f:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8606275:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8606279:	89 74 24 08          	mov    %esi,0x8(%esp)
 860627d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8606281:	89 14 24             	mov    %edx,(%esp)
 8606284:	e8 0f 25 d4 ff       	call   8348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>
 8606289:	88 45 e2             	mov    %al,-0x1e(%ebp)
 860628c:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 8606290:	83 f0 01             	xor    $0x1,%eax
 8606293:	84 c0                	test   %al,%al
 8606295:	0f 85 25 02 00 00    	jne    86064c0 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x796>
 860629b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 86062a2:	8d 45 98             	lea    -0x68(%ebp),%eax
 86062a5:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 86062ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 86062af:	89 04 24             	mov    %eax,(%esp)
 86062b2:	e8 fb 72 ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 86062b7:	83 ec 04             	sub    $0x4,%esp
 86062ba:	8d 45 98             	lea    -0x68(%ebp),%eax
 86062bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86062c1:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 86062c7:	89 04 24             	mov    %eax,(%esp)
 86062ca:	e8 53 16 d8 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 86062cf:	8d 45 9c             	lea    -0x64(%ebp),%eax
 86062d2:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 86062d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 86062dc:	89 04 24             	mov    %eax,(%esp)
 86062df:	e8 f2 72 ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 86062e4:	83 ec 04             	sub    $0x4,%esp
 86062e7:	8d 45 9c             	lea    -0x64(%ebp),%eax
 86062ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 86062ee:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 86062f4:	89 04 24             	mov    %eax,(%esp)
 86062f7:	e8 26 16 d8 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 86062fc:	eb 4b                	jmp    8606349 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x61f>
 86062fe:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8606304:	89 04 24             	mov    %eax,(%esp)
 8606307:	e8 06 d6 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 860630c:	8b 10                	mov    (%eax),%edx
 860630e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8606311:	01 c0                	add    %eax,%eax
 8606313:	03 45 b0             	add    -0x50(%ebp),%eax
 8606316:	0f b6 00             	movzbl (%eax),%eax
 8606319:	0f b6 c0             	movzbl %al,%eax
 860631c:	39 c2                	cmp    %eax,%edx
 860631e:	0f 94 c0             	sete   %al
 8606321:	84 c0                	test   %al,%al
 8606323:	74 16                	je     860633b <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x611>
 8606325:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 860632b:	89 04 24             	mov    %eax,(%esp)
 860632e:	e8 df d5 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8606333:	8b 40 04             	mov    0x4(%eax),%eax
 8606336:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8606339:	eb 2a                	jmp    8606365 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x63b>
 860633b:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8606341:	89 04 24             	mov    %eax,(%esp)
 8606344:	e8 87 79 c3 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8606349:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 860634f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606353:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8606359:	89 04 24             	mov    %eax,(%esp)
 860635c:	e8 84 d5 b8 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8606361:	84 c0                	test   %al,%al
 8606363:	75 99                	jne    86062fe <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x5d4>
 8606365:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8606368:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 860636b:	7e 05                	jle    8606372 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x648>
 860636d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8606370:	eb 03                	jmp    8606375 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x64b>
 8606372:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8606375:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8606378:	8b 45 c8             	mov    -0x38(%ebp),%eax
 860637b:	01 c0                	add    %eax,%eax
 860637d:	03 45 b0             	add    -0x50(%ebp),%eax
 8606380:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8606384:	0f be c0             	movsbl %al,%eax
 8606387:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 860638a:	0f 8e 30 01 00 00    	jle    86064c0 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x796>
 8606390:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%ebp)
 8606397:	00 00 00 
 860639a:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
 86063a1:	00 00 00 
 86063a4:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 86063a8:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 86063ac:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86063af:	89 44 24 18          	mov    %eax,0x18(%esp)
 86063b3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86063b6:	89 44 24 14          	mov    %eax,0x14(%esp)
 86063ba:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86063bd:	89 44 24 10          	mov    %eax,0x10(%esp)
 86063c1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86063c4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86063c8:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 86063ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 86063d2:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86063d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86063dc:	8b 45 08             	mov    0x8(%ebp),%eax
 86063df:	89 04 24             	mov    %eax,(%esp)
 86063e2:	e8 a7 01 00 00       	call   860658e <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb>
 86063e7:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 86063ed:	89 c3                	mov    %eax,%ebx
 86063ef:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 86063f5:	89 c1                	mov    %eax,%ecx
 86063f7:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86063fa:	01 c0                	add    %eax,%eax
 86063fc:	03 45 b0             	add    -0x50(%ebp),%eax
 86063ff:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8606403:	66 0f be d0          	movsbw %al,%dx
 8606407:	8b 45 d8             	mov    -0x28(%ebp),%eax
 860640a:	89 d6                	mov    %edx,%esi
 860640c:	66 29 c6             	sub    %ax,%si
 860640f:	89 f0                	mov    %esi,%eax
 8606411:	0f b7 d0             	movzwl %ax,%edx
 8606414:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8606417:	01 c0                	add    %eax,%eax
 8606419:	03 45 b0             	add    -0x50(%ebp),%eax
 860641c:	0f b6 00             	movzbl (%eax),%eax
 860641f:	0f b6 c0             	movzbl %al,%eax
 8606422:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8606426:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 860642a:	89 54 24 08          	mov    %edx,0x8(%esp)
 860642e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606432:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8606435:	89 04 24             	mov    %eax,(%esp)
 8606438:	e8 6b 2f 00 00       	call   86093a8 <_ZN16stSPReturnInfo_tC1Ettjj>
 860643d:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8606440:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606444:	8b 45 0c             	mov    0xc(%ebp),%eax
 8606447:	89 04 24             	mov    %eax,(%esp)
 860644a:	e8 29 30 00 00       	call   8609478 <_ZNSt6vectorI16stSPReturnInfo_tSaIS0_EE9push_backEOS0_>
 860644f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8606452:	8b 10                	mov    (%eax),%edx
 8606454:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 860645a:	01 c2                	add    %eax,%edx
 860645c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 860645f:	89 10                	mov    %edx,(%eax)
 8606461:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8606464:	8b 10                	mov    (%eax),%edx
 8606466:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 860646c:	01 c2                	add    %eax,%edx
 860646e:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8606471:	89 10                	mov    %edx,(%eax)
 8606473:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8606476:	01 c0                	add    %eax,%eax
 8606478:	03 45 b0             	add    -0x50(%ebp),%eax
 860647b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 860647e:	88 50 01             	mov    %dl,0x1(%eax)
 8606481:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8606484:	01 c0                	add    %eax,%eax
 8606486:	03 45 b0             	add    -0x50(%ebp),%eax
 8606489:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 860648d:	84 c0                	test   %al,%al
 860648f:	75 0b                	jne    860649c <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x772>
 8606491:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8606494:	01 c0                	add    %eax,%eax
 8606496:	03 45 b0             	add    -0x50(%ebp),%eax
 8606499:	c6 00 00             	movb   $0x0,(%eax)
 860649c:	c6 45 af 01          	movb   $0x1,-0x51(%ebp)
 86064a0:	eb 1e                	jmp    86064c0 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x796>
 86064a2:	89 d3                	mov    %edx,%ebx
 86064a4:	89 c6                	mov    %eax,%esi
 86064a6:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 86064ac:	89 04 24             	mov    %eax,(%esp)
 86064af:	e8 36 e5 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86064b4:	89 f0                	mov    %esi,%eax
 86064b6:	89 da                	mov    %ebx,%edx
 86064b8:	89 04 24             	mov    %eax,(%esp)
 86064bb:	e8 90 d2 4d 00       	call   8ae3750 <_Unwind_Resume>
 86064c0:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 86064c6:	89 04 24             	mov    %eax,(%esp)
 86064c9:	e8 1c e5 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86064ce:	eb 07                	jmp    86064d7 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x7ad>
 86064d0:	90                   	nop
 86064d1:	eb 04                	jmp    86064d7 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x7ad>
 86064d3:	90                   	nop
 86064d4:	eb 01                	jmp    86064d7 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x7ad>
 86064d6:	90                   	nop
 86064d7:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 86064db:	81 7d c8 cb 00 00 00 	cmpl   $0xcb,-0x38(%ebp)
 86064e2:	0f 9e c0             	setle  %al
 86064e5:	84 c0                	test   %al,%al
 86064e7:	0f 85 86 f9 ff ff    	jne    8605e73 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x149>
 86064ed:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 86064f1:	0f 84 88 00 00 00    	je     860657f <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x855>
 86064f7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86064fa:	83 c0 0c             	add    $0xc,%eax
 86064fd:	89 04 24             	mov    %eax,(%esp)
 8606500:	e8 0f 73 ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8606505:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8606508:	39 d0                	cmp    %edx,%eax
 860650a:	0f 95 c0             	setne  %al
 860650d:	84 c0                	test   %al,%al
 860650f:	74 6e                	je     860657f <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x855>
 8606511:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8606518:	eb 4d                	jmp    8606567 <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x83d>
 860651a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 860651d:	8d 50 0c             	lea    0xc(%eax),%edx
 8606520:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8606523:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606527:	89 14 24             	mov    %edx,(%esp)
 860652a:	e8 75 43 ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 860652f:	8b 18                	mov    (%eax),%ebx
 8606531:	8b 45 08             	mov    0x8(%ebp),%eax
 8606534:	8b 00                	mov    (%eax),%eax
 8606536:	89 04 24             	mov    %eax,(%esp)
 8606539:	e8 e2 79 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 860653e:	8b 55 10             	mov    0x10(%ebp),%edx
 8606541:	89 54 24 10          	mov    %edx,0x10(%esp)
 8606545:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8606548:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860654c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8606550:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606554:	8b 45 08             	mov    0x8(%ebp),%eax
 8606557:	89 04 24             	mov    %eax,(%esp)
 860655a:	e8 5d db ff ff       	call   86040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>
 860655f:	c6 45 af 01          	movb   $0x1,-0x51(%ebp)
 8606563:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8606567:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 860656a:	83 c0 0c             	add    $0xc,%eax
 860656d:	89 04 24             	mov    %eax,(%esp)
 8606570:	e8 9f 72 ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8606575:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8606578:	0f 97 c0             	seta   %al
 860657b:	84 c0                	test   %al,%al
 860657d:	75 9b                	jne    860651a <_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi+0x7f0>
 860657f:	0f b6 45 af          	movzbl -0x51(%ebp),%eax
 8606583:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8606586:	83 c4 00             	add    $0x0,%esp
 8606589:	5b                   	pop    %ebx
 860658a:	5e                   	pop    %esi
 860658b:	5f                   	pop    %edi
 860658c:	5d                   	pop    %ebp
 860658d:	c3                   	ret

```

```c
// SkillSlot::checkOverLevelSkill @ 0x8605d2a

/* SkillSlot::checkOverLevelSkill(std::vector<stSPReturnInfo_t, std::allocator<stSPReturnInfo_t> >&,
   ENUM_SKILL_TREE_KIND, int) */

undefined1 __thiscall
SkillSlot::checkOverLevelSkill
          (SkillSlot *this,vector<stSPReturnInfo_t,std::allocator<stSPReturnInfo_t>> *param_1,
          int param_3,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  CUserPremium *this_00;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_ac [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_a8 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_a4 [4];
  uint local_a0;
  uint local_9c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_98 [12];
  _List_const_iterator<_pre_skill> local_8c [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  __normal_iterator local_7c [4];
  __normal_iterator local_78 [4];
  _List_const_iterator local_74 [4];
  _List_const_iterator<_pre_skill> local_70 [4];
  __normal_iterator local_6c [4];
  __normal_iterator local_68 [4];
  stSPReturnInfo_t local_64 [15];
  undefined1 local_55;
  _Mastered_skill *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  CSkill *local_38;
  bool local_31;
  int local_30;
  int local_2c;
  int local_28;
  char local_22;
  char local_21;
  uint local_20;
  
  if ((*(int *)this == 0) ||
     (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this), iVar5 == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    local_55 = 0;
  }
  else {
    local_55 = 0;
    local_54 = (_Mastered_skill *)get_skillslot_buf(this,param_3);
    local_50 = (int *)0x0;
    if (param_3 == 0) {
      local_50 = (int *)get_cur_remain_sp(this,2);
    }
    else if (param_3 == 1) {
      local_50 = (int *)get_cur_remain_sp(this,3);
    }
    local_4c = (int *)get_cur_remain_sp(this,param_3);
    if (((local_54 == (_Mastered_skill *)0x0) || (local_4c == (int *)0x0)) ||
       (local_50 == (int *)0x0)) {
      local_55 = 0;
    }
    else {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
      iVar5 = G_CDataManager();
      local_40 = CDataManager::GetExpertJobScript(iVar5);
      iVar5 = CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
      if (iVar5 != 0) {
        iVar5 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)this);
        local_48 = CUser::GetCurExpertJobLevel(*(CUser **)this,iVar5);
      }
      for (local_3c = 0; local_3c < 0xcc; local_3c = local_3c + 1) {
        if (local_54[local_3c * 2] != (_Mastered_skill)0x0) {
          local_38 = (CSkill *)0x0;
          iVar5 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
          iVar6 = G_CDataManager();
          local_38 = (CSkill *)CDataManager::find_skill(iVar6,iVar5);
          if (local_38 == (CSkill *)0x0) {
            return 0;
          }
          local_31 = false;
          local_30 = param_4;
          cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
          cVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
          cVar2 = CSkill::IsStealable(local_38,(int)cVar3,(int)cVar2);
          if (cVar2 != '\0') {
            local_31 = true;
            iVar5 = CSkill::GetStealLevelPenalty(local_38);
            local_30 = local_30 - iVar5;
          }
          this_00 = (CUserPremium *)CUser::GetPremiumInfo(*(CUser **)this);
          uVar10 = WongWork::CUserPremium::getOverSkillLevel(this_00);
          local_30 = local_30 + (uVar10 & 0xffff);
          cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
          cVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
          local_2c = CSkill::getMaxSkillLevel(local_38,local_30,(int)cVar3,(int)cVar2);
          if (local_2c == -1) {
            local_54[local_3c * 2] = (_Mastered_skill)0x0;
            local_54[local_3c * 2 + 1] = (_Mastered_skill)0x0;
          }
          else {
            if (local_40 != 0) {
              local_21 = '\0';
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
              __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::__normal_iterator<std::pair<int,int>*>(local_a4,local_7c);
              while( true ) {
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                bVar4 = __gnu_cxx::operator!=(local_a4,local_78);
                if (!bVar4) break;
                puVar7 = (uint *)__gnu_cxx::
                                 __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                 ::operator->(local_a4);
                if (*puVar7 == (uint)(byte)local_54[local_3c * 2]) {
                  if ((char)local_54[local_3c * 2 + 1] == local_48) {
                    local_44 = local_44 + 1;
                  }
                  local_21 = '\x01';
                  break;
                }
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator++(local_a4);
              }
              if (local_21 != '\0') goto LAB_086064d7;
            }
            std::_List_const_iterator<_pre_skill>::_List_const_iterator(local_8c);
            std::list<_pre_skill,std::allocator<_pre_skill>>::begin();
            while( true ) {
              std::list<_pre_skill,std::allocator<_pre_skill>>::end();
              cVar2 = std::_List_const_iterator<_pre_skill>::operator!=(local_8c,local_74);
              if (cVar2 == '\0') break;
              puVar8 = (undefined4 *)std::_List_const_iterator<_pre_skill>::operator*(local_8c);
              local_88 = *puVar8;
              local_84 = puVar8[1];
              local_80 = puVar8[2];
              cVar2 = check_skill_mastered(this,local_88,local_84,local_80,param_3);
              if (cVar2 != '\x01') {
                local_2c = 0;
                break;
              }
              std::_List_const_iterator<_pre_skill>::operator++(local_70,(int)local_8c);
            }
            if (local_2c < (char)local_54[local_3c * 2 + 1]) {
              local_28 = 0;
              iVar5 = G_CDataManager();
              iVar5 = *(int *)(iVar5 + 0x14);
              iVar6 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                        (local_98,(vector *)(iVar5 + iVar6 * 0x7dc + 0x240));
              local_22 = 1;
              cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
              if (cVar2 == '\0') {
                cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
                cVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
                    /* try { // try from 086061e4 to 0860644e has its CatchHandler @ 086064a2 */
                iVar5 = G_CDataManager();
                iVar5 = *(int *)(iVar5 + 0x14);
                iVar6 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                local_22 = CCharacter::get_give_skill
                                     ((CCharacter *)(iVar5 + iVar6 * 0x7dc),(int)cVar3,(int)cVar2,
                                      (vector *)local_98,1);
              }
              else {
                cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
                cVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
                iVar5 = G_CDataManager();
                iVar5 = *(int *)(iVar5 + 0x14);
                iVar6 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                local_22 = CCharacter::get_give_skill
                                     ((CCharacter *)(iVar5 + iVar6 * 0x7dc),(int)cVar3,(int)cVar2,
                                      (vector *)local_98,0);
              }
              if (local_22 == '\x01') {
                local_28 = 0;
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::__normal_iterator<std::pair<int,int>*>(local_a8,local_6c);
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::__normal_iterator<std::pair<int,int>*>(local_ac,local_68);
                while (bVar4 = __gnu_cxx::operator!=(local_a8,local_ac), bVar4) {
                  puVar7 = (uint *)__gnu_cxx::
                                   __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                   ::operator->(local_a8);
                  if (*puVar7 == (uint)(byte)local_54[local_3c * 2]) {
                    iVar5 = __gnu_cxx::
                            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_a8);
                    local_28 = *(int *)(iVar5 + 4);
                    break;
                  }
                  __gnu_cxx::
                  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator++(local_a8);
                }
                iVar5 = local_28;
                if (local_28 < local_2c) {
                  iVar5 = local_2c;
                }
                local_2c = iVar5;
                if (iVar5 < (char)local_54[local_3c * 2 + 1]) {
                  local_9c = 0;
                  local_a0 = 0;
                  calcReturnSpSfpPerOneSkill
                            (this,(int *)&local_9c,(int *)&local_a0,iVar5,local_54,local_3c,local_38
                             ,local_31);
                  stSPReturnInfo_t::stSPReturnInfo_t
                            (local_64,(ushort)(byte)local_54[local_3c * 2],
                             (short)(char)local_54[local_3c * 2 + 1] - (short)local_2c,local_9c,
                             local_a0);
                  std::vector<stSPReturnInfo_t,std::allocator<stSPReturnInfo_t>>::push_back
                            (param_1,local_64);
                  *local_50 = *local_50 + local_a0;
                  *local_4c = *local_4c + local_9c;
                  local_54[local_3c * 2 + 1] = SUB41(local_2c,0);
                  if (local_54[local_3c * 2 + 1] == (_Mastered_skill)0x0) {
                    local_54[local_3c * 2] = (_Mastered_skill)0x0;
                  }
                  local_55 = 1;
                }
              }
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_98);
            }
          }
        }
LAB_086064d7:
      }
      if ((local_40 != 0) &&
         (iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (local_40 + 0xc)), iVar5 != local_44)) {
        local_20 = 0;
        while (uVar10 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (local_40 + 0xc)), local_20 < uVar10) {
          puVar8 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_40 + 0xc),local_20);
          uVar1 = *puVar8;
          uVar9 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
          growtype_skill(this,uVar9,uVar1,local_48,param_3);
          local_55 = 1;
          local_20 = local_20 + 1;
        }
      }
    }
  }
  return local_55;
}

```

---

## check_skill_list

```asm
// === 08604c02 SkillSlot::check_skill_list  [0x08604c02-0x8604d8f] ===
 8604c02:	55                   	push   %ebp
 8604c03:	89 e5                	mov    %esp,%ebp
 8604c05:	83 ec 58             	sub    $0x58,%esp
 8604c08:	8b 45 10             	mov    0x10(%ebp),%eax
 8604c0b:	89 04 24             	mov    %eax,(%esp)
 8604c0e:	e8 01 8c ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8604c13:	85 c0                	test   %eax,%eax
 8604c15:	0f 94 c0             	sete   %al
 8604c18:	84 c0                	test   %al,%al
 8604c1a:	74 0a                	je     8604c26 <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi+0x24>
 8604c1c:	b8 01 00 00 00       	mov    $0x1,%eax
 8604c21:	e9 68 01 00 00       	jmp    8604d8e <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi+0x18c>
 8604c26:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8604c2d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8604c30:	8b 55 10             	mov    0x10(%ebp),%edx
 8604c33:	89 54 24 04          	mov    %edx,0x4(%esp)
 8604c37:	89 04 24             	mov    %eax,(%esp)
 8604c3a:	e8 73 89 ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8604c3f:	83 ec 04             	sub    $0x4,%esp
 8604c42:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8604c45:	89 04 24             	mov    %eax,(%esp)
 8604c48:	e8 41 10 bb ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8604c4d:	e9 08 01 00 00       	jmp    8604d5a <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi+0x158>
 8604c52:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8604c55:	89 04 24             	mov    %eax,(%esp)
 8604c58:	e8 9f 89 ad ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 8604c5d:	8b 50 04             	mov    0x4(%eax),%edx
 8604c60:	8b 00                	mov    (%eax),%eax
 8604c62:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8604c65:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8604c68:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8604c6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604c6f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8604c72:	89 04 24             	mov    %eax,(%esp)
 8604c75:	e8 a2 92 ad ff       	call   80ddf1c <_ZNSt4pairIiiEaSEOS0_>
 8604c7a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8604c7d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8604c80:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8604c83:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8604c86:	e8 10 75 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8604c8b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8604c8e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8604c92:	8b 55 0c             	mov    0xc(%ebp),%edx
 8604c95:	89 54 24 04          	mov    %edx,0x4(%esp)
 8604c99:	89 04 24             	mov    %eax,(%esp)
 8604c9c:	e8 01 b1 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8604ca1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8604ca4:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8604ca8:	75 44                	jne    8604cee <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi+0xec>
 8604caa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8604cad:	89 44 24 18          	mov    %eax,0x18(%esp)
 8604cb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8604cb4:	89 44 24 14          	mov    %eax,0x14(%esp)
 8604cb8:	c7 44 24 10 d8 d2 cd 	movl   $0x8cdd2d8,0x10(%esp)
 8604cbf:	08 
 8604cc0:	c7 44 24 0c 2b 04 00 	movl   $0x42b,0xc(%esp)
 8604cc7:	00 
 8604cc8:	c7 44 24 08 a0 e6 cd 	movl   $0x8cde6a0,0x8(%esp)
 8604ccf:	08 
 8604cd0:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8604cd7:	08 
 8604cd8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8604cdf:	e8 26 ef 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8604ce4:	b8 00 00 00 00       	mov    $0x0,%eax
 8604ce9:	e9 a0 00 00 00       	jmp    8604d8e <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi+0x18c>
 8604cee:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8604cf1:	89 04 24             	mov    %eax,(%esp)
 8604cf4:	e8 9d fe d6 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8604cf9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8604cfc:	8b 45 14             	mov    0x14(%ebp),%eax
 8604cff:	29 45 f0             	sub    %eax,-0x10(%ebp)
 8604d02:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8604d06:	7f 07                	jg     8604d0f <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi+0x10d>
 8604d08:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 8604d0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604d12:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8604d16:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8604d19:	89 44 24 08          	mov    %eax,0x8(%esp)
 8604d1d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8604d20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604d24:	8b 45 08             	mov    0x8(%ebp),%eax
 8604d27:	89 04 24             	mov    %eax,(%esp)
 8604d2a:	e8 69 fb ff ff       	call   8604898 <_ZNK9SkillSlot20check_skill_masteredEiii>
 8604d2f:	83 f0 01             	xor    $0x1,%eax
 8604d32:	84 c0                	test   %al,%al
 8604d34:	74 07                	je     8604d3d <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi+0x13b>
 8604d36:	b8 00 00 00 00       	mov    $0x0,%eax
 8604d3b:	eb 51                	jmp    8604d8e <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi+0x18c>
 8604d3d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8604d40:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8604d47:	00 
 8604d48:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8604d4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8604d4f:	89 04 24             	mov    %eax,(%esp)
 8604d52:	e8 45 40 d8 ff       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 8604d57:	83 ec 04             	sub    $0x4,%esp
 8604d5a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8604d5d:	8b 55 10             	mov    0x10(%ebp),%edx
 8604d60:	89 54 24 04          	mov    %edx,0x4(%esp)
 8604d64:	89 04 24             	mov    %eax,(%esp)
 8604d67:	e8 6a 88 ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8604d6c:	83 ec 04             	sub    $0x4,%esp
 8604d6f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8604d72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604d76:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8604d79:	89 04 24             	mov    %eax,(%esp)
 8604d7c:	e8 5d c4 b0 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8604d81:	84 c0                	test   %al,%al
 8604d83:	0f 85 c9 fe ff ff    	jne    8604c52 <_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi+0x50>
 8604d89:	b8 01 00 00 00       	mov    $0x1,%eax
 8604d8e:	c9                   	leave
 8604d8f:	c3                   	ret

```

```c
// SkillSlot::check_skill_list @ 0x8604c02

/* SkillSlot::check_skill_list(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >, int) const */

undefined4 __thiscall
SkillSlot::check_skill_list
          (SkillSlot *this,int param_1,
          vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_38;
  int local_34;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  CSkill *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(param_3);
  if (iVar3 != 0) {
    local_1c = (CSkill *)0x0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::pair<int,int>::pair((pair<int,int> *)&local_38);
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_30,local_2c);
      if (!bVar2) break;
      puVar4 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator*(local_30);
      local_24 = puVar4[1];
      local_28 = *puVar4;
      std::pair<int,int>::operator=((pair<int,int> *)&local_38,(pair *)&local_28);
      local_18 = local_38;
      local_14 = local_34;
      iVar3 = G_CDataManager();
      local_1c = (CSkill *)CDataManager::find_skill(iVar3,param_1);
      if (local_1c == (CSkill *)0x0) {
        LogManager::logFormat
                  (1,"skill_slot.cpp",
                   "bool SkillSlot::check_skill_list(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >, int) const"
                   ,0x42b,"G_CDataManager()->find_skill( %d, %d )",param_1,local_18);
        return 0;
      }
      local_10 = CSkill::get_group(local_1c);
      local_14 = local_14 - param_4;
      if (local_14 < 1) {
        local_14 = 1;
      }
      cVar1 = check_skill_mastered(this,local_18,local_14,local_10);
      if (cVar1 != '\x01') {
        return 0;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_20,(int)local_30);
    }
  }
  return 1;
}

```

---

## check_skill_mastered

```asm
// === 08604898 SkillSlot::check_skill_mastered  [0x08604898-0x8604953] ===
 8604898:	55                   	push   %ebp
 8604899:	89 e5                	mov    %esp,%ebp
 860489b:	83 ec 38             	sub    $0x38,%esp
 860489e:	8b 45 08             	mov    0x8(%ebp),%eax
 86048a1:	8b 00                	mov    (%eax),%eax
 86048a3:	85 c0                	test   %eax,%eax
 86048a5:	75 0a                	jne    86048b1 <_ZNK9SkillSlot20check_skill_masteredEiii+0x19>
 86048a7:	b8 00 00 00 00       	mov    $0x0,%eax
 86048ac:	e9 a1 00 00 00       	jmp    8604952 <_ZNK9SkillSlot20check_skill_masteredEiii+0xba>
 86048b1:	8b 45 08             	mov    0x8(%ebp),%eax
 86048b4:	8b 00                	mov    (%eax),%eax
 86048b6:	89 04 24             	mov    %eax,(%esp)
 86048b9:	e8 7e aa c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 86048be:	89 44 24 04          	mov    %eax,0x4(%esp)
 86048c2:	8b 45 08             	mov    0x8(%ebp),%eax
 86048c5:	89 04 24             	mov    %eax,(%esp)
 86048c8:	e8 11 1f 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 86048cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86048d0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86048d4:	75 07                	jne    86048dd <_ZNK9SkillSlot20check_skill_masteredEiii+0x45>
 86048d6:	b8 00 00 00 00       	mov    $0x0,%eax
 86048db:	eb 75                	jmp    8604952 <_ZNK9SkillSlot20check_skill_masteredEiii+0xba>
 86048dd:	8b 45 08             	mov    0x8(%ebp),%eax
 86048e0:	8b 00                	mov    (%eax),%eax
 86048e2:	89 04 24             	mov    %eax,(%esp)
 86048e5:	e8 52 aa c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 86048ea:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 86048f1:	00 
 86048f2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86048f6:	8b 45 14             	mov    0x14(%ebp),%eax
 86048f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 86048fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8604900:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604904:	8b 45 08             	mov    0x8(%ebp),%eax
 8604907:	89 04 24             	mov    %eax,(%esp)
 860490a:	e8 77 01 00 00       	call   8604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>
 860490f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8604912:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8604916:	79 07                	jns    860491f <_ZNK9SkillSlot20check_skill_masteredEiii+0x87>
 8604918:	b8 00 00 00 00       	mov    $0x0,%eax
 860491d:	eb 33                	jmp    8604952 <_ZNK9SkillSlot20check_skill_masteredEiii+0xba>
 860491f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604922:	01 c0                	add    %eax,%eax
 8604924:	03 45 f0             	add    -0x10(%ebp),%eax
 8604927:	0f b6 00             	movzbl (%eax),%eax
 860492a:	0f b6 c0             	movzbl %al,%eax
 860492d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8604930:	75 1b                	jne    860494d <_ZNK9SkillSlot20check_skill_masteredEiii+0xb5>
 8604932:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604935:	01 c0                	add    %eax,%eax
 8604937:	03 45 f0             	add    -0x10(%ebp),%eax
 860493a:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 860493e:	0f be c0             	movsbl %al,%eax
 8604941:	3b 45 10             	cmp    0x10(%ebp),%eax
 8604944:	7c 07                	jl     860494d <_ZNK9SkillSlot20check_skill_masteredEiii+0xb5>
 8604946:	b8 01 00 00 00       	mov    $0x1,%eax
 860494b:	eb 05                	jmp    8604952 <_ZNK9SkillSlot20check_skill_masteredEiii+0xba>
 860494d:	b8 00 00 00 00       	mov    $0x0,%eax
 8604952:	c9                   	leave
 8604953:	c3                   	ret

```

```c
// SkillSlot::check_skill_mastered @ 0x8604898

/* SkillSlot::check_skill_mastered(int, int, int) const */

undefined4 __thiscall
SkillSlot::check_skill_mastered(SkillSlot *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    iVar2 = get_skillslot_buf(this,uVar1);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
      iVar3 = get_skillslot_no(this,param_1,param_3,uVar1,1);
      if (iVar3 < 0) {
        uVar1 = 0;
      }
      else if (((uint)*(byte *)(iVar3 * 2 + iVar2) == param_1) &&
              (param_2 <= *(char *)(iVar3 * 2 + iVar2 + 1))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

```

---

## check_skill_mastered_08604954

```asm
// === 08604954 SkillSlot::check_skill_mastered  [0x08604954-0x86049fb] ===
 8604954:	55                   	push   %ebp
 8604955:	89 e5                	mov    %esp,%ebp
 8604957:	83 ec 38             	sub    $0x38,%esp
 860495a:	8b 45 08             	mov    0x8(%ebp),%eax
 860495d:	8b 00                	mov    (%eax),%eax
 860495f:	85 c0                	test   %eax,%eax
 8604961:	75 0a                	jne    860496d <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND+0x19>
 8604963:	b8 00 00 00 00       	mov    $0x0,%eax
 8604968:	e9 8d 00 00 00       	jmp    86049fa <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND+0xa6>
 860496d:	8b 45 18             	mov    0x18(%ebp),%eax
 8604970:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604974:	8b 45 08             	mov    0x8(%ebp),%eax
 8604977:	89 04 24             	mov    %eax,(%esp)
 860497a:	e8 5f 1e 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 860497f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8604982:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8604986:	75 07                	jne    860498f <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND+0x3b>
 8604988:	b8 00 00 00 00       	mov    $0x0,%eax
 860498d:	eb 6b                	jmp    86049fa <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND+0xa6>
 860498f:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8604996:	00 
 8604997:	8b 45 18             	mov    0x18(%ebp),%eax
 860499a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860499e:	8b 45 14             	mov    0x14(%ebp),%eax
 86049a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 86049a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86049a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86049ac:	8b 45 08             	mov    0x8(%ebp),%eax
 86049af:	89 04 24             	mov    %eax,(%esp)
 86049b2:	e8 cf 00 00 00       	call   8604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>
 86049b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86049ba:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86049be:	79 07                	jns    86049c7 <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND+0x73>
 86049c0:	b8 00 00 00 00       	mov    $0x0,%eax
 86049c5:	eb 33                	jmp    86049fa <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND+0xa6>
 86049c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86049ca:	01 c0                	add    %eax,%eax
 86049cc:	03 45 f0             	add    -0x10(%ebp),%eax
 86049cf:	0f b6 00             	movzbl (%eax),%eax
 86049d2:	0f b6 c0             	movzbl %al,%eax
 86049d5:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86049d8:	75 1b                	jne    86049f5 <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND+0xa1>
 86049da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86049dd:	01 c0                	add    %eax,%eax
 86049df:	03 45 f0             	add    -0x10(%ebp),%eax
 86049e2:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 86049e6:	0f be c0             	movsbl %al,%eax
 86049e9:	3b 45 10             	cmp    0x10(%ebp),%eax
 86049ec:	7c 07                	jl     86049f5 <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND+0xa1>
 86049ee:	b8 01 00 00 00       	mov    $0x1,%eax
 86049f3:	eb 05                	jmp    86049fa <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND+0xa6>
 86049f5:	b8 00 00 00 00       	mov    $0x0,%eax
 86049fa:	c9                   	leave
 86049fb:	c3                   	ret

```

```c
// SkillSlot::check_skill_mastered @ 0x8604954

/* SkillSlot::check_skill_mastered(int, int, int, ENUM_SKILL_TREE_KIND) const */

undefined4 __thiscall
SkillSlot::check_skill_mastered
          (SkillSlot *this,uint param_1,int param_2,undefined4 param_3,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_skillslot_buf(this,param_5);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = get_skillslot_no(this,param_1,param_3,param_5,1);
      if (iVar3 < 0) {
        uVar1 = 0;
      }
      else if ((*(byte *)(iVar3 * 2 + iVar2) == param_1) &&
              (param_2 <= *(char *)(iVar3 * 2 + iVar2 + 1))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

```

---

## check_skill_mastered_08608014

```asm
// === 08608014 SkillSlot::check_skill_mastered  [0x08608014-0x86080a3] ===
 8608014:	55                   	push   %ebp
 8608015:	89 e5                	mov    %esp,%ebp
 8608017:	83 ec 24             	sub    $0x24,%esp
 860801a:	8b 45 08             	mov    0x8(%ebp),%eax
 860801d:	8b 00                	mov    (%eax),%eax
 860801f:	85 c0                	test   %eax,%eax
 8608021:	75 07                	jne    860802a <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii+0x16>
 8608023:	b8 00 00 00 00       	mov    $0x0,%eax
 8608028:	eb 78                	jmp    86080a2 <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii+0x8e>
 860802a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 860802e:	75 07                	jne    8608037 <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii+0x23>
 8608030:	b8 00 00 00 00       	mov    $0x0,%eax
 8608035:	eb 6b                	jmp    86080a2 <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii+0x8e>
 8608037:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 860803e:	00 
 860803f:	8b 45 18             	mov    0x18(%ebp),%eax
 8608042:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8608046:	8b 45 10             	mov    0x10(%ebp),%eax
 8608049:	89 44 24 08          	mov    %eax,0x8(%esp)
 860804d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608050:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608054:	8b 45 08             	mov    0x8(%ebp),%eax
 8608057:	89 04 24             	mov    %eax,(%esp)
 860805a:	e8 5b fd ff ff       	call   8607dba <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib>
 860805f:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8608062:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
 8608066:	79 07                	jns    860806f <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii+0x5b>
 8608068:	b8 00 00 00 00       	mov    $0x0,%eax
 860806d:	eb 33                	jmp    86080a2 <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii+0x8e>
 860806f:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8608072:	01 c0                	add    %eax,%eax
 8608074:	03 45 0c             	add    0xc(%ebp),%eax
 8608077:	0f b6 00             	movzbl (%eax),%eax
 860807a:	0f b6 c0             	movzbl %al,%eax
 860807d:	3b 45 10             	cmp    0x10(%ebp),%eax
 8608080:	75 1b                	jne    860809d <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii+0x89>
 8608082:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8608085:	01 c0                	add    %eax,%eax
 8608087:	03 45 0c             	add    0xc(%ebp),%eax
 860808a:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 860808e:	0f be c0             	movsbl %al,%eax
 8608091:	3b 45 14             	cmp    0x14(%ebp),%eax
 8608094:	7c 07                	jl     860809d <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii+0x89>
 8608096:	b8 01 00 00 00       	mov    $0x1,%eax
 860809b:	eb 05                	jmp    86080a2 <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii+0x8e>
 860809d:	b8 00 00 00 00       	mov    $0x0,%eax
 86080a2:	c9                   	leave
 86080a3:	c3                   	ret

```

```c
// SkillSlot::check_skill_mastered @ 0x8608014

/* SkillSlot::check_skill_mastered(_Mastered_skill*, int, int, int) const */

undefined4 __thiscall
SkillSlot::check_skill_mastered
          (SkillSlot *this,_Mastered_skill *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else if (param_1 == (_Mastered_skill *)0x0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_skillslot_no(this,param_1,param_2,param_4,true);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else if (((uint)(byte)param_1[iVar2 * 2] == param_2) &&
            (param_3 <= (char)param_1[iVar2 * 2 + 1])) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## checkskillSlotEmptyCount

```asm
// === 086088e0 SkillSlot::checkskillSlotEmptyCount  [0x086088e0-0x8608a1d] ===
 86088e0:	55                   	push   %ebp
 86088e1:	89 e5                	mov    %esp,%ebp
 86088e3:	83 ec 38             	sub    $0x38,%esp
 86088e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86088e9:	8b 00                	mov    (%eax),%eax
 86088eb:	85 c0                	test   %eax,%eax
 86088ed:	75 0a                	jne    86088f9 <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x19>
 86088ef:	b8 00 00 00 00       	mov    $0x0,%eax
 86088f4:	e9 22 01 00 00       	jmp    8608a1b <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x13b>
 86088f9:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8608900:	8b 45 08             	mov    0x8(%ebp),%eax
 8608903:	8b 00                	mov    (%eax),%eax
 8608905:	89 04 24             	mov    %eax,(%esp)
 8608908:	e8 ab 19 ad ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860890d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8608910:	8b 45 08             	mov    0x8(%ebp),%eax
 8608913:	8b 00                	mov    (%eax),%eax
 8608915:	89 04 24             	mov    %eax,(%esp)
 8608918:	e8 1f 6a c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 860891d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608921:	8b 45 08             	mov    0x8(%ebp),%eax
 8608924:	89 04 24             	mov    %eax,(%esp)
 8608927:	e8 b2 de ff ff       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 860892c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 860892f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8608933:	75 0a                	jne    860893f <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x5f>
 8608935:	b8 00 00 00 00       	mov    $0x0,%eax
 860893a:	e9 dc 00 00 00       	jmp    8608a1b <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x13b>
 860893f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8608946:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 860894d:	eb 17                	jmp    8608966 <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x86>
 860894f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8608952:	01 c0                	add    %eax,%eax
 8608954:	03 45 e8             	add    -0x18(%ebp),%eax
 8608957:	0f b6 00             	movzbl (%eax),%eax
 860895a:	84 c0                	test   %al,%al
 860895c:	75 04                	jne    8608962 <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x82>
 860895e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8608962:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8608966:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 860896a:	0f 9e c0             	setle  %al
 860896d:	84 c0                	test   %al,%al
 860896f:	75 de                	jne    860894f <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x6f>
 8608971:	83 7d e4 0f          	cmpl   $0xf,-0x1c(%ebp)
 8608975:	7f 0f                	jg     8608986 <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0xa6>
 8608977:	83 6d ec 03          	subl   $0x3,-0x14(%ebp)
 860897b:	8b 45 0c             	mov    0xc(%ebp),%eax
 860897e:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8608984:	eb 1e                	jmp    86089a4 <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0xc4>
 8608986:	83 7d e4 1e          	cmpl   $0x1e,-0x1c(%ebp)
 860898a:	7f 0f                	jg     860899b <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0xbb>
 860898c:	83 6d ec 01          	subl   $0x1,-0x14(%ebp)
 8608990:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608993:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8608999:	eb 09                	jmp    86089a4 <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0xc4>
 860899b:	8b 45 0c             	mov    0xc(%ebp),%eax
 860899e:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 86089a4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86089a7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86089aa:	83 7d e4 2d          	cmpl   $0x2d,-0x1c(%ebp)
 86089ae:	7f 05                	jg     86089b5 <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0xd5>
 86089b0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86089b3:	eb 66                	jmp    8608a1b <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x13b>
 86089b5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86089bc:	c7 45 f4 c6 00 00 00 	movl   $0xc6,-0xc(%ebp)
 86089c3:	eb 17                	jmp    86089dc <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0xfc>
 86089c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86089c8:	01 c0                	add    %eax,%eax
 86089ca:	03 45 e8             	add    -0x18(%ebp),%eax
 86089cd:	0f b6 00             	movzbl (%eax),%eax
 86089d0:	84 c0                	test   %al,%al
 86089d2:	75 04                	jne    86089d8 <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0xf8>
 86089d4:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 86089d8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86089dc:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 86089e3:	0f 9e c0             	setle  %al
 86089e6:	84 c0                	test   %al,%al
 86089e8:	75 db                	jne    86089c5 <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0xe5>
 86089ea:	83 7d e4 3c          	cmpl   $0x3c,-0x1c(%ebp)
 86089ee:	7f 0f                	jg     86089ff <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x11f>
 86089f0:	83 6d ec 03          	subl   $0x3,-0x14(%ebp)
 86089f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86089f7:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 86089fd:	eb 0d                	jmp    8608a0c <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x12c>
 86089ff:	83 6d ec 02          	subl   $0x2,-0x14(%ebp)
 8608a03:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608a06:	c7 00 05 00 00 00    	movl   $0x5,(%eax)
 8608a0c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8608a10:	7e 06                	jle    8608a18 <_ZN9SkillSlot24checkskillSlotEmptyCountERi+0x138>
 8608a12:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8608a15:	01 45 e0             	add    %eax,-0x20(%ebp)
 8608a18:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8608a1b:	c9                   	leave
 8608a1c:	c3                   	ret
 8608a1d:	90                   	nop

```

```c
// SkillSlot::checkskillSlotEmptyCount @ 0x86088e0

/* SkillSlot::checkskillSlotEmptyCount(int&) */

int __thiscall SkillSlot::checkskillSlotEmptyCount(SkillSlot *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)this == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    iVar4 = get_skillslot_buf(this,uVar3);
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      local_18 = 0;
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
        if (*(char *)(local_14 * 2 + iVar4) == '\0') {
          local_18 = local_18 + 1;
        }
      }
      if (iVar2 < 0x10) {
        local_18 = local_18 + -3;
        *param_1 = 1;
      }
      else if (iVar2 < 0x1f) {
        local_18 = local_18 + -1;
        *param_1 = 2;
      }
      else {
        *param_1 = 3;
      }
      iVar1 = local_18;
      if (0x2d < iVar2) {
        local_18 = 0;
        for (local_10 = 0xc6; local_10 < 0xcc; local_10 = local_10 + 1) {
          if (*(char *)(local_10 * 2 + iVar4) == '\0') {
            local_18 = local_18 + 1;
          }
        }
        if (iVar2 < 0x3d) {
          local_18 = local_18 + -3;
          *param_1 = 4;
        }
        else {
          local_18 = local_18 + -2;
          *param_1 = 5;
        }
        if (0 < local_18) {
          iVar1 = iVar1 + local_18;
        }
      }
    }
  }
  return iVar1;
}

```

---

## clear_all_skills

```asm
// === 08604d90 SkillSlot::clear_all_skills  [0x08604d90-0x8604e07] ===
 8604d90:	55                   	push   %ebp
 8604d91:	89 e5                	mov    %esp,%ebp
 8604d93:	83 ec 28             	sub    $0x28,%esp
 8604d96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8604d99:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604d9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8604da0:	89 04 24             	mov    %eax,(%esp)
 8604da3:	e8 36 1a 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8604da8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8604dab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8604dae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604db2:	8b 45 08             	mov    0x8(%ebp),%eax
 8604db5:	89 04 24             	mov    %eax,(%esp)
 8604db8:	e8 55 1a 00 00       	call   8606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>
 8604dbd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8604dc0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8604dc4:	74 06                	je     8604dcc <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND+0x3c>
 8604dc6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8604dca:	75 07                	jne    8604dd3 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND+0x43>
 8604dcc:	b8 00 00 00 00       	mov    $0x0,%eax
 8604dd1:	eb 32                	jmp    8604e05 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND+0x75>
 8604dd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8604dd6:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8604ddc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604ddf:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8604de5:	c7 44 24 08 98 01 00 	movl   $0x198,0x8(%esp)
 8604dec:	00 
 8604ded:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8604df4:	00 
 8604df5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8604df8:	89 04 24             	mov    %eax,(%esp)
 8604dfb:	e8 c0 8e a7 ff       	call   807dcc0 <memset@plt>
 8604e00:	b8 01 00 00 00       	mov    $0x1,%eax
 8604e05:	c9                   	leave
 8604e06:	c3                   	ret
 8604e07:	90                   	nop

```

```c
// SkillSlot::clear_all_skills @ 0x8604d90

/* SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall SkillSlot::clear_all_skills(SkillSlot *this,undefined4 param_2)

{
  void *__s;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __s = (void *)get_skillslot_buf(this,param_2);
  puVar1 = (undefined4 *)get_cur_remain_sp(this,param_2);
  if ((__s == (void *)0x0) || (puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)this = 0;
    *puVar1 = 0;
    memset(__s,0,0x198);
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## clear_all_skills_both

```asm
// === 08604e08 SkillSlot::clear_all_skills_both  [0x08604e08-0x8604e77] ===
 8604e08:	55                   	push   %ebp
 8604e09:	89 e5                	mov    %esp,%ebp
 8604e0b:	83 ec 18             	sub    $0x18,%esp
 8604e0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8604e11:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8604e17:	8b 45 08             	mov    0x8(%ebp),%eax
 8604e1a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8604e21:	8b 45 08             	mov    0x8(%ebp),%eax
 8604e24:	83 c0 46             	add    $0x46,%eax
 8604e27:	c7 44 24 08 98 01 00 	movl   $0x198,0x8(%esp)
 8604e2e:	00 
 8604e2f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8604e36:	00 
 8604e37:	89 04 24             	mov    %eax,(%esp)
 8604e3a:	e8 81 8e a7 ff       	call   807dcc0 <memset@plt>
 8604e3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8604e42:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8604e49:	8b 45 08             	mov    0x8(%ebp),%eax
 8604e4c:	05 de 01 00 00       	add    $0x1de,%eax
 8604e51:	c7 44 24 08 98 01 00 	movl   $0x198,0x8(%esp)
 8604e58:	00 
 8604e59:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8604e60:	00 
 8604e61:	89 04 24             	mov    %eax,(%esp)
 8604e64:	e8 57 8e a7 ff       	call   807dcc0 <memset@plt>
 8604e69:	8b 45 08             	mov    0x8(%ebp),%eax
 8604e6c:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 8604e70:	b8 01 00 00 00       	mov    $0x1,%eax
 8604e75:	c9                   	leave
 8604e76:	c3                   	ret
 8604e77:	90                   	nop

```

```c
// SkillSlot::clear_all_skills_both @ 0x8604e08

/* SkillSlot::clear_all_skills_both() */

undefined4 __thiscall SkillSlot::clear_all_skills_both(SkillSlot *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  memset(this + 0x46,0,0x198);
  *(undefined4 *)(this + 0xc) = 0;
  memset(this + 0x1de,0,0x198);
  this[8] = (SkillSlot)0x0;
  return 1;
}

```

---

## clear_sfp_skills

```asm
// === 08604e78 SkillSlot::clear_sfp_skills  [0x08604e78-0x8604fe1] ===
 8604e78:	55                   	push   %ebp
 8604e79:	89 e5                	mov    %esp,%ebp
 8604e7b:	56                   	push   %esi
 8604e7c:	53                   	push   %ebx
 8604e7d:	83 ec 40             	sub    $0x40,%esp
 8604e80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8604e83:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8604e86:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8604e8d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8604e94:	e9 2b 01 00 00       	jmp    8604fc4 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x14c>
 8604e99:	8b 45 10             	mov    0x10(%ebp),%eax
 8604e9c:	83 f8 ff             	cmp    $0xffffffff,%eax
 8604e9f:	74 07                	je     8604ea8 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x30>
 8604ea1:	8b 45 10             	mov    0x10(%ebp),%eax
 8604ea4:	85 c0                	test   %eax,%eax
 8604ea6:	75 6b                	jne    8604f13 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x9b>
 8604ea8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8604eab:	8b 45 08             	mov    0x8(%ebp),%eax
 8604eae:	83 c2 20             	add    $0x20,%edx
 8604eb1:	0f b6 44 50 06       	movzbl 0x6(%eax,%edx,2),%eax
 8604eb6:	0f b6 f0             	movzbl %al,%esi
 8604eb9:	0f be 5d e4          	movsbl -0x1c(%ebp),%ebx
 8604ebd:	e8 d9 72 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8604ec2:	89 74 24 08          	mov    %esi,0x8(%esp)
 8604ec6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8604eca:	89 04 24             	mov    %eax,(%esp)
 8604ecd:	e8 d0 ae d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8604ed2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8604ed5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8604ed9:	0f 84 da 00 00 00    	je     8604fb9 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x141>
 8604edf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8604ee2:	89 04 24             	mov    %eax,(%esp)
 8604ee5:	e8 c8 66 c2 ff       	call   822b5b2 <_ZNK6CSkill14IsSpecialSkillEv>
 8604eea:	84 c0                	test   %al,%al
 8604eec:	0f 84 ca 00 00 00    	je     8604fbc <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x144>
 8604ef2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8604ef5:	8b 45 08             	mov    0x8(%ebp),%eax
 8604ef8:	83 c2 20             	add    $0x20,%edx
 8604efb:	c6 44 50 06 00       	movb   $0x0,0x6(%eax,%edx,2)
 8604f00:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8604f03:	8b 45 08             	mov    0x8(%ebp),%eax
 8604f06:	83 c2 20             	add    $0x20,%edx
 8604f09:	c6 44 50 07 00       	movb   $0x0,0x7(%eax,%edx,2)
 8604f0e:	e9 ad 00 00 00       	jmp    8604fc0 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x148>
 8604f13:	8b 45 10             	mov    0x10(%ebp),%eax
 8604f16:	83 f8 01             	cmp    $0x1,%eax
 8604f19:	75 69                	jne    8604f84 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x10c>
 8604f1b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8604f1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8604f21:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 8604f27:	0f b6 44 50 0e       	movzbl 0xe(%eax,%edx,2),%eax
 8604f2c:	0f b6 f0             	movzbl %al,%esi
 8604f2f:	0f be 5d e4          	movsbl -0x1c(%ebp),%ebx
 8604f33:	e8 63 72 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8604f38:	89 74 24 08          	mov    %esi,0x8(%esp)
 8604f3c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8604f40:	89 04 24             	mov    %eax,(%esp)
 8604f43:	e8 5a ae d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8604f48:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8604f4b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8604f4f:	74 6e                	je     8604fbf <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x147>
 8604f51:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8604f54:	89 04 24             	mov    %eax,(%esp)
 8604f57:	e8 56 66 c2 ff       	call   822b5b2 <_ZNK6CSkill14IsSpecialSkillEv>
 8604f5c:	84 c0                	test   %al,%al
 8604f5e:	74 60                	je     8604fc0 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x148>
 8604f60:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8604f63:	8b 45 08             	mov    0x8(%ebp),%eax
 8604f66:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 8604f6c:	c6 44 50 0e 00       	movb   $0x0,0xe(%eax,%edx,2)
 8604f71:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8604f74:	8b 45 08             	mov    0x8(%ebp),%eax
 8604f77:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 8604f7d:	c6 44 50 0f 00       	movb   $0x0,0xf(%eax,%edx,2)
 8604f82:	eb 3c                	jmp    8604fc0 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x148>
 8604f84:	8b 45 10             	mov    0x10(%ebp),%eax
 8604f87:	89 44 24 14          	mov    %eax,0x14(%esp)
 8604f8b:	c7 44 24 10 00 d3 cd 	movl   $0x8cdd300,0x10(%esp)
 8604f92:	08 
 8604f93:	c7 44 24 0c 9c 04 00 	movl   $0x49c,0xc(%esp)
 8604f9a:	00 
 8604f9b:	c7 44 24 08 60 e6 cd 	movl   $0x8cde660,0x8(%esp)
 8604fa2:	08 
 8604fa3:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8604faa:	08 
 8604fab:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8604fb2:	e8 53 ec 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8604fb7:	eb 07                	jmp    8604fc0 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x148>
 8604fb9:	90                   	nop
 8604fba:	eb 04                	jmp    8604fc0 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x148>
 8604fbc:	90                   	nop
 8604fbd:	eb 01                	jmp    8604fc0 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x148>
 8604fbf:	90                   	nop
 8604fc0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8604fc4:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 8604fcb:	0f 9e c0             	setle  %al
 8604fce:	84 c0                	test   %al,%al
 8604fd0:	0f 85 c3 fe ff ff    	jne    8604e99 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND+0x21>
 8604fd6:	b8 01 00 00 00       	mov    $0x1,%eax
 8604fdb:	83 c4 40             	add    $0x40,%esp
 8604fde:	5b                   	pop    %ebx
 8604fdf:	5e                   	pop    %esi
 8604fe0:	5d                   	pop    %ebp
 8604fe1:	c3                   	ret

```

```c
// SkillSlot::clear_sfp_skills @ 0x8604e78

/* SkillSlot::clear_sfp_skills(char, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall SkillSlot::clear_sfp_skills(SkillSlot *this,char param_1,int param_3)

{
  char cVar1;
  int iVar2;
  CSkill *pCVar3;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
    if ((param_3 == -1) || (param_3 == 0)) {
      iVar2 = G_CDataManager();
      pCVar3 = (CSkill *)CDataManager::find_skill(iVar2,(int)param_1);
      if ((pCVar3 != (CSkill *)0x0) && (cVar1 = CSkill::IsSpecialSkill(pCVar3), cVar1 != '\0')) {
        this[(local_10 + 0x20) * 2 + 6] = (SkillSlot)0x0;
        this[(local_10 + 0x20) * 2 + 7] = (SkillSlot)0x0;
      }
    }
    else if (param_3 == 1) {
      iVar2 = G_CDataManager();
      pCVar3 = (CSkill *)CDataManager::find_skill(iVar2,(int)param_1);
      if ((pCVar3 != (CSkill *)0x0) && (cVar1 = CSkill::IsSpecialSkill(pCVar3), cVar1 != '\0')) {
        this[(local_10 + 0xe8) * 2 + 0xe] = (SkillSlot)0x0;
        this[(local_10 + 0xe8) * 2 + 0xf] = (SkillSlot)0x0;
      }
    }
    else {
      LogManager::logFormat
                (1,"skill_slot.cpp","bool SkillSlot::clear_sfp_skills(char, ENUM_SKILL_TREE_KIND)",
                 0x49c,"SkillSlot::clear_sfp_skills error %d",param_3);
    }
  }
  return 1;
}

```

---

## debugCheckGrowTypeSkill

```asm
// === 086053c6 SkillSlot::debugCheckGrowTypeSkill  [0x086053c6-0x86055eb] ===
 86053c6:	55                   	push   %ebp
 86053c7:	89 e5                	mov    %esp,%ebp
 86053c9:	53                   	push   %ebx
 86053ca:	83 ec 34             	sub    $0x34,%esp
 86053cd:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86053d4:	e9 fb 01 00 00       	jmp    86055d4 <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii+0x20e>
 86053d9:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86053dc:	8b 45 08             	mov    0x8(%ebp),%eax
 86053df:	83 c2 20             	add    $0x20,%edx
 86053e2:	0f b6 44 50 06       	movzbl 0x6(%eax,%edx,2),%eax
 86053e7:	84 c0                	test   %al,%al
 86053e9:	0f 84 de 00 00 00    	je     86054cd <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii+0x107>
 86053ef:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86053f6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86053f9:	8b 45 08             	mov    0x8(%ebp),%eax
 86053fc:	83 c2 20             	add    $0x20,%edx
 86053ff:	0f b6 44 50 06       	movzbl 0x6(%eax,%edx,2),%eax
 8605404:	0f b6 d8             	movzbl %al,%ebx
 8605407:	e8 8f 6d ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 860540c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8605410:	8b 55 10             	mov    0x10(%ebp),%edx
 8605413:	89 54 24 04          	mov    %edx,0x4(%esp)
 8605417:	89 04 24             	mov    %eax,(%esp)
 860541a:	e8 83 a9 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 860541f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8605422:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8605426:	75 4d                	jne    8605475 <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii+0xaf>
 8605428:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860542b:	8b 45 08             	mov    0x8(%ebp),%eax
 860542e:	83 c2 20             	add    $0x20,%edx
 8605431:	0f b6 44 50 06       	movzbl 0x6(%eax,%edx,2),%eax
 8605436:	0f b6 c0             	movzbl %al,%eax
 8605439:	89 44 24 18          	mov    %eax,0x18(%esp)
 860543d:	8b 45 10             	mov    0x10(%ebp),%eax
 8605440:	89 44 24 14          	mov    %eax,0x14(%esp)
 8605444:	c7 44 24 10 d8 d2 cd 	movl   $0x8cdd2d8,0x10(%esp)
 860544b:	08 
 860544c:	c7 44 24 0c a4 05 00 	movl   $0x5a4,0xc(%esp)
 8605453:	00 
 8605454:	c7 44 24 08 e0 e5 cd 	movl   $0x8cde5e0,0x8(%esp)
 860545b:	08 
 860545c:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8605463:	08 
 8605464:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 860546b:	e8 9a e7 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8605470:	e9 71 01 00 00       	jmp    86055e6 <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii+0x220>
 8605475:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8605478:	8b 45 08             	mov    0x8(%ebp),%eax
 860547b:	83 c2 20             	add    $0x20,%edx
 860547e:	0f b6 44 50 07       	movzbl 0x7(%eax,%edx,2),%eax
 8605483:	0f be c0             	movsbl %al,%eax
 8605486:	89 44 24 10          	mov    %eax,0x10(%esp)
 860548a:	8b 45 18             	mov    0x18(%ebp),%eax
 860548d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8605491:	8b 45 14             	mov    0x14(%ebp),%eax
 8605494:	89 44 24 08          	mov    %eax,0x8(%esp)
 8605498:	8b 45 0c             	mov    0xc(%ebp),%eax
 860549b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860549f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86054a2:	89 04 24             	mov    %eax,(%esp)
 86054a5:	e8 f4 ae d4 ff       	call   835039e <_ZNK6CSkill9can_learnEiiii>
 86054aa:	83 f0 01             	xor    $0x1,%eax
 86054ad:	84 c0                	test   %al,%al
 86054af:	74 1c                	je     86054cd <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii+0x107>
 86054b1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86054b4:	8b 45 08             	mov    0x8(%ebp),%eax
 86054b7:	83 c2 20             	add    $0x20,%edx
 86054ba:	c6 44 50 06 00       	movb   $0x0,0x6(%eax,%edx,2)
 86054bf:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86054c2:	8b 45 08             	mov    0x8(%ebp),%eax
 86054c5:	83 c2 20             	add    $0x20,%edx
 86054c8:	c6 44 50 07 00       	movb   $0x0,0x7(%eax,%edx,2)
 86054cd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86054d0:	8b 45 08             	mov    0x8(%ebp),%eax
 86054d3:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 86054d9:	0f b6 44 50 0e       	movzbl 0xe(%eax,%edx,2),%eax
 86054de:	84 c0                	test   %al,%al
 86054e0:	0f 84 ea 00 00 00    	je     86055d0 <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii+0x20a>
 86054e6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86054ed:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86054f0:	8b 45 08             	mov    0x8(%ebp),%eax
 86054f3:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 86054f9:	0f b6 44 50 0e       	movzbl 0xe(%eax,%edx,2),%eax
 86054fe:	0f b6 d8             	movzbl %al,%ebx
 8605501:	e8 95 6c ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8605506:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 860550a:	8b 55 10             	mov    0x10(%ebp),%edx
 860550d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8605511:	89 04 24             	mov    %eax,(%esp)
 8605514:	e8 89 a8 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8605519:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860551c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8605520:	75 4d                	jne    860556f <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii+0x1a9>
 8605522:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8605525:	8b 45 08             	mov    0x8(%ebp),%eax
 8605528:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 860552e:	0f b6 44 50 0e       	movzbl 0xe(%eax,%edx,2),%eax
 8605533:	0f b6 c0             	movzbl %al,%eax
 8605536:	89 44 24 18          	mov    %eax,0x18(%esp)
 860553a:	8b 45 10             	mov    0x10(%ebp),%eax
 860553d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8605541:	c7 44 24 10 d8 d2 cd 	movl   $0x8cdd2d8,0x10(%esp)
 8605548:	08 
 8605549:	c7 44 24 0c b7 05 00 	movl   $0x5b7,0xc(%esp)
 8605550:	00 
 8605551:	c7 44 24 08 e0 e5 cd 	movl   $0x8cde5e0,0x8(%esp)
 8605558:	08 
 8605559:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8605560:	08 
 8605561:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8605568:	e8 9d e6 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 860556d:	eb 77                	jmp    86055e6 <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii+0x220>
 860556f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8605572:	8b 45 08             	mov    0x8(%ebp),%eax
 8605575:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 860557b:	0f b6 44 50 0f       	movzbl 0xf(%eax,%edx,2),%eax
 8605580:	0f be c0             	movsbl %al,%eax
 8605583:	89 44 24 10          	mov    %eax,0x10(%esp)
 8605587:	8b 45 18             	mov    0x18(%ebp),%eax
 860558a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860558e:	8b 45 14             	mov    0x14(%ebp),%eax
 8605591:	89 44 24 08          	mov    %eax,0x8(%esp)
 8605595:	8b 45 0c             	mov    0xc(%ebp),%eax
 8605598:	89 44 24 04          	mov    %eax,0x4(%esp)
 860559c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860559f:	89 04 24             	mov    %eax,(%esp)
 86055a2:	e8 f7 ad d4 ff       	call   835039e <_ZNK6CSkill9can_learnEiiii>
 86055a7:	83 f0 01             	xor    $0x1,%eax
 86055aa:	84 c0                	test   %al,%al
 86055ac:	74 22                	je     86055d0 <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii+0x20a>
 86055ae:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86055b1:	8b 45 08             	mov    0x8(%ebp),%eax
 86055b4:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 86055ba:	c6 44 50 0e 00       	movb   $0x0,0xe(%eax,%edx,2)
 86055bf:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86055c2:	8b 45 08             	mov    0x8(%ebp),%eax
 86055c5:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 86055cb:	c6 44 50 0f 00       	movb   $0x0,0xf(%eax,%edx,2)
 86055d0:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 86055d4:	81 7d ec cb 00 00 00 	cmpl   $0xcb,-0x14(%ebp)
 86055db:	0f 9e c0             	setle  %al
 86055de:	84 c0                	test   %al,%al
 86055e0:	0f 85 f3 fd ff ff    	jne    86053d9 <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii+0x13>
 86055e6:	83 c4 34             	add    $0x34,%esp
 86055e9:	5b                   	pop    %ebx
 86055ea:	5d                   	pop    %ebp
 86055eb:	c3                   	ret

```

```c
// SkillSlot::debugCheckGrowTypeSkill @ 0x86053c6

/* SkillSlot::debugCheckGrowTypeSkill(int, int, int, int) */

void __thiscall
SkillSlot::debugCheckGrowTypeSkill(SkillSlot *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  CSkill *pCVar3;
  int local_18;
  
  local_18 = 0;
  do {
    if (0xcb < local_18) {
      return;
    }
    if (this[(local_18 + 0x20) * 2 + 6] != (SkillSlot)0x0) {
      iVar2 = G_CDataManager();
      pCVar3 = (CSkill *)CDataManager::find_skill(iVar2,param_2);
      if (pCVar3 == (CSkill *)0x0) {
        LogManager::logFormat
                  (1,"skill_slot.cpp","void SkillSlot::debugCheckGrowTypeSkill(int, int, int, int)",
                   0x5a4,"G_CDataManager()->find_skill( %d, %d )",param_2,
                   (uint)(byte)this[(local_18 + 0x20) * 2 + 6]);
        return;
      }
      cVar1 = CSkill::can_learn(pCVar3,param_1,param_3,param_4,
                                (int)(char)this[(local_18 + 0x20) * 2 + 7]);
      if (cVar1 != '\x01') {
        this[(local_18 + 0x20) * 2 + 6] = (SkillSlot)0x0;
        this[(local_18 + 0x20) * 2 + 7] = (SkillSlot)0x0;
      }
    }
    if (this[(local_18 + 0xe8) * 2 + 0xe] != (SkillSlot)0x0) {
      iVar2 = G_CDataManager();
      pCVar3 = (CSkill *)CDataManager::find_skill(iVar2,param_2);
      if (pCVar3 == (CSkill *)0x0) {
        LogManager::logFormat
                  (1,"skill_slot.cpp","void SkillSlot::debugCheckGrowTypeSkill(int, int, int, int)",
                   0x5b7,"G_CDataManager()->find_skill( %d, %d )",param_2,
                   (uint)(byte)this[(local_18 + 0xe8) * 2 + 0xe]);
        return;
      }
      cVar1 = CSkill::can_learn(pCVar3,param_1,param_3,param_4,
                                (int)(char)this[(local_18 + 0xe8) * 2 + 0xf]);
      if (cVar1 != '\x01') {
        this[(local_18 + 0xe8) * 2 + 0xe] = (SkillSlot)0x0;
        this[(local_18 + 0xe8) * 2 + 0xf] = (SkillSlot)0x0;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## debugCommandResetSkill

```asm
// === 0860523e SkillSlot::debugCommandResetSkill  [0x0860523e-0x86053c5] ===
 860523e:	55                   	push   %ebp
 860523f:	89 e5                	mov    %esp,%ebp
 8605241:	56                   	push   %esi
 8605242:	53                   	push   %ebx
 8605243:	81 ec c0 01 00 00    	sub    $0x1c0,%esp
 8605249:	8b 45 08             	mov    0x8(%ebp),%eax
 860524c:	83 c0 46             	add    $0x46,%eax
 860524f:	c7 44 24 08 98 01 00 	movl   $0x198,0x8(%esp)
 8605256:	00 
 8605257:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860525e:	00 
 860525f:	89 04 24             	mov    %eax,(%esp)
 8605262:	e8 59 8a a7 ff       	call   807dcc0 <memset@plt>
 8605267:	8b 45 08             	mov    0x8(%ebp),%eax
 860526a:	05 de 01 00 00       	add    $0x1de,%eax
 860526f:	c7 44 24 08 98 01 00 	movl   $0x198,0x8(%esp)
 8605276:	00 
 8605277:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860527e:	00 
 860527f:	89 04 24             	mov    %eax,(%esp)
 8605282:	e8 39 8a a7 ff       	call   807dcc0 <memset@plt>
 8605287:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 860528d:	89 c3                	mov    %eax,%ebx
 860528f:	be cb 00 00 00       	mov    $0xcb,%esi
 8605294:	eb 0e                	jmp    86052a4 <_ZN9SkillSlot22debugCommandResetSkillEv+0x66>
 8605296:	89 1c 24             	mov    %ebx,(%esp)
 8605299:	e8 ae a0 e8 ff       	call   848f34c <_ZN15_Mastered_skillC1Ev>
 860529e:	83 c3 02             	add    $0x2,%ebx
 86052a1:	83 ee 01             	sub    $0x1,%esi
 86052a4:	83 fe ff             	cmp    $0xffffffff,%esi
 86052a7:	0f 95 c0             	setne  %al
 86052aa:	84 c0                	test   %al,%al
 86052ac:	75 e8                	jne    8605296 <_ZN9SkillSlot22debugCommandResetSkillEv+0x58>
 86052ae:	8b 45 08             	mov    0x8(%ebp),%eax
 86052b1:	8b 00                	mov    (%eax),%eax
 86052b3:	89 04 24             	mov    %eax,(%esp)
 86052b6:	e8 65 8c af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86052bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86052bf:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 86052c5:	89 04 24             	mov    %eax,(%esp)
 86052c8:	e8 15 fd ff ff       	call   8604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>
 86052cd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86052d4:	eb 79                	jmp    860534f <_ZN9SkillSlot22debugCommandResetSkillEv+0x111>
 86052d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86052d9:	0f b6 84 45 5c fe ff 	movzbl -0x1a4(%ebp,%eax,2),%eax
 86052e0:	ff 
 86052e1:	84 c0                	test   %al,%al
 86052e3:	74 66                	je     860534b <_ZN9SkillSlot22debugCommandResetSkillEv+0x10d>
 86052e5:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 86052e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86052eb:	0f b6 94 45 5c fe ff 	movzbl -0x1a4(%ebp,%eax,2),%edx
 86052f2:	ff 
 86052f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86052f6:	83 c1 20             	add    $0x20,%ecx
 86052f9:	88 54 48 06          	mov    %dl,0x6(%eax,%ecx,2)
 86052fd:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8605300:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8605303:	0f b6 94 45 5d fe ff 	movzbl -0x1a3(%ebp,%eax,2),%edx
 860530a:	ff 
 860530b:	8b 45 08             	mov    0x8(%ebp),%eax
 860530e:	83 c1 20             	add    $0x20,%ecx
 8605311:	88 54 48 07          	mov    %dl,0x7(%eax,%ecx,2)
 8605315:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8605318:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860531b:	0f b6 94 45 5c fe ff 	movzbl -0x1a4(%ebp,%eax,2),%edx
 8605322:	ff 
 8605323:	8b 45 08             	mov    0x8(%ebp),%eax
 8605326:	81 c1 e8 00 00 00    	add    $0xe8,%ecx
 860532c:	88 54 48 0e          	mov    %dl,0xe(%eax,%ecx,2)
 8605330:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8605333:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8605336:	0f b6 94 45 5d fe ff 	movzbl -0x1a3(%ebp,%eax,2),%edx
 860533d:	ff 
 860533e:	8b 45 08             	mov    0x8(%ebp),%eax
 8605341:	81 c1 e8 00 00 00    	add    $0xe8,%ecx
 8605347:	88 54 48 0f          	mov    %dl,0xf(%eax,%ecx,2)
 860534b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860534f:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 8605356:	0f 9e c0             	setle  %al
 8605359:	84 c0                	test   %al,%al
 860535b:	0f 85 75 ff ff ff    	jne    86052d6 <_ZN9SkillSlot22debugCommandResetSkillEv+0x98>
 8605361:	8b 45 08             	mov    0x8(%ebp),%eax
 8605364:	8b 00                	mov    (%eax),%eax
 8605366:	89 04 24             	mov    %eax,(%esp)
 8605369:	e8 26 b9 b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 860536e:	84 c0                	test   %al,%al
 8605370:	0f 95 c0             	setne  %al
 8605373:	84 c0                	test   %al,%al
 8605375:	74 45                	je     86053bc <_ZN9SkillSlot22debugCommandResetSkillEv+0x17e>
 8605377:	8b 45 08             	mov    0x8(%ebp),%eax
 860537a:	8b 00                	mov    (%eax),%eax
 860537c:	89 04 24             	mov    %eax,(%esp)
 860537f:	e8 b8 9e c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 8605384:	0f b6 d8             	movzbl %al,%ebx
 8605387:	8b 45 08             	mov    0x8(%ebp),%eax
 860538a:	8b 00                	mov    (%eax),%eax
 860538c:	89 04 24             	mov    %eax,(%esp)
 860538f:	e8 00 b9 b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8605394:	0f b6 d0             	movzbl %al,%edx
 8605397:	8b 45 08             	mov    0x8(%ebp),%eax
 860539a:	8b 00                	mov    (%eax),%eax
 860539c:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 86053a3:	00 
 86053a4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86053ab:	00 
 86053ac:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86053b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86053b4:	89 04 24             	mov    %eax,(%esp)
 86053b7:	e8 40 34 07 00       	call   86787fc <_ZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReason>
 86053bc:	81 c4 c0 01 00 00    	add    $0x1c0,%esp
 86053c2:	5b                   	pop    %ebx
 86053c3:	5e                   	pop    %esi
 86053c4:	5d                   	pop    %ebp
 86053c5:	c3                   	ret

```

```c
// SkillSlot::debugCommandResetSkill @ 0x860523e

/* WARNING: Type propagation algorithm not settling */
/* SkillSlot::debugCommandResetSkill() */

void __thiscall SkillSlot::debugCommandResetSkill(SkillSlot *this)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  _Mastered_skill *this_00;
  int iVar4;
  _Mastered_skill local_1a8;
  SkillSlot aSStack_1a7 [407];
  int local_10;
  
  memset(this + 0x46,0,0x198);
  memset(this + 0x1de,0,0x198);
  this_00 = &local_1a8;
  for (iVar4 = 0xcb; iVar4 != -1; iVar4 = iVar4 + -1) {
    _Mastered_skill::_Mastered_skill(this_00);
    this_00 = this_00 + 2;
  }
  iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
  addSkillOnCreateCharacter(&local_1a8,iVar4);
  for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
    if ((&local_1a8)[local_10 * 2] != (_Mastered_skill)0x0) {
      *(_Mastered_skill *)(this + (local_10 + 0x20) * 2 + 6) = (&local_1a8)[local_10 * 2];
      this[(local_10 + 0x20) * 2 + 7] = aSStack_1a7[local_10 * 2];
      *(_Mastered_skill *)(this + (local_10 + 0xe8) * 2 + 0xe) = (&local_1a8)[local_10 * 2];
      this[(local_10 + 0xe8) * 2 + 0xf] = aSStack_1a7[local_10 * 2];
    }
  }
  cVar1 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
  if (cVar1 != '\0') {
    uVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
    uVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
    CUser::set_grow_type(*(CUser **)this,uVar3,uVar2,0,2);
  }
  return;
}

```

---

## delete_skill

```asm
// === 086047d8 SkillSlot::delete_skill  [0x086047d8-0x8604897] ===
 86047d8:	55                   	push   %ebp
 86047d9:	89 e5                	mov    %esp,%ebp
 86047db:	83 ec 28             	sub    $0x28,%esp
 86047de:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86047e5:	e8 b1 79 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 86047ea:	8b 55 10             	mov    0x10(%ebp),%edx
 86047ed:	89 54 24 08          	mov    %edx,0x8(%esp)
 86047f1:	8b 55 0c             	mov    0xc(%ebp),%edx
 86047f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 86047f8:	89 04 24             	mov    %eax,(%esp)
 86047fb:	e8 a2 b5 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8604800:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8604803:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8604807:	75 0a                	jne    8604813 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND+0x3b>
 8604809:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 860480e:	e9 82 00 00 00       	jmp    8604895 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND+0xbd>
 8604813:	8b 45 08             	mov    0x8(%ebp),%eax
 8604816:	8b 00                	mov    (%eax),%eax
 8604818:	85 c0                	test   %eax,%eax
 860481a:	75 07                	jne    8604823 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND+0x4b>
 860481c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8604821:	eb 72                	jmp    8604895 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND+0xbd>
 8604823:	8b 45 14             	mov    0x14(%ebp),%eax
 8604826:	89 44 24 04          	mov    %eax,0x4(%esp)
 860482a:	8b 45 08             	mov    0x8(%ebp),%eax
 860482d:	89 04 24             	mov    %eax,(%esp)
 8604830:	e8 a9 1f 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8604835:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8604838:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 860483c:	75 07                	jne    8604845 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND+0x6d>
 860483e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8604843:	eb 50                	jmp    8604895 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND+0xbd>
 8604845:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 860484c:	eb 34                	jmp    8604882 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND+0xaa>
 860484e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604851:	01 c0                	add    %eax,%eax
 8604853:	03 45 f0             	add    -0x10(%ebp),%eax
 8604856:	0f b6 00             	movzbl (%eax),%eax
 8604859:	0f b6 d0             	movzbl %al,%edx
 860485c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860485f:	8b 00                	mov    (%eax),%eax
 8604861:	39 c2                	cmp    %eax,%edx
 8604863:	75 19                	jne    860487e <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND+0xa6>
 8604865:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604868:	01 c0                	add    %eax,%eax
 860486a:	03 45 f0             	add    -0x10(%ebp),%eax
 860486d:	c6 00 00             	movb   $0x0,(%eax)
 8604870:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604873:	01 c0                	add    %eax,%eax
 8604875:	03 45 f0             	add    -0x10(%ebp),%eax
 8604878:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 860487c:	eb 12                	jmp    8604890 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND+0xb8>
 860487e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8604882:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 8604889:	0f 9e c0             	setle  %al
 860488c:	84 c0                	test   %al,%al
 860488e:	75 be                	jne    860484e <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND+0x76>
 8604890:	b8 00 00 00 00       	mov    $0x0,%eax
 8604895:	c9                   	leave
 8604896:	c3                   	ret
 8604897:	90                   	nop

```

```c
// SkillSlot::delete_skill @ 0x86047d8

/* SkillSlot::delete_skill(int, int, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
SkillSlot::delete_skill(SkillSlot *this,int param_1,undefined4 param_2,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 local_10;
  
  iVar1 = G_CDataManager();
  puVar2 = (uint *)CDataManager::find_skill(iVar1,param_1);
  if (puVar2 == (uint *)0x0) {
    uVar3 = 0xffffffff;
  }
  else if (*(int *)this == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = get_skillslot_buf(this,param_4,param_2);
    if (iVar1 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
        if ((uint)*(byte *)(local_10 * 2 + iVar1) == *puVar2) {
          *(undefined1 *)(local_10 * 2 + iVar1) = 0;
          *(undefined1 *)(local_10 * 2 + iVar1 + 1) = 0;
          break;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## eraseDuplicationComboSKill

```asm
// === 086090a0 SkillSlot::eraseDuplicationComboSKill  [0x086090a0-0x86090cd] ===
 86090a0:	55                   	push   %ebp
 86090a1:	89 e5                	mov    %esp,%ebp
 86090a3:	83 ec 18             	sub    $0x18,%esp
 86090a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86090ad:	00 
 86090ae:	8b 45 08             	mov    0x8(%ebp),%eax
 86090b1:	89 04 24             	mov    %eax,(%esp)
 86090b4:	e8 15 00 00 00       	call   86090ce <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND>
 86090b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86090c0:	00 
 86090c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86090c4:	89 04 24             	mov    %eax,(%esp)
 86090c7:	e8 02 00 00 00       	call   86090ce <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND>
 86090cc:	c9                   	leave
 86090cd:	c3                   	ret

```

```c
// SkillSlot::eraseDuplicationComboSKill @ 0x86090a0

/* SkillSlot::eraseDuplicationComboSKill() */

void __thiscall SkillSlot::eraseDuplicationComboSKill(SkillSlot *this)

{
  eraseDuplicationComboSKillTree(this,0);
  eraseDuplicationComboSKillTree(this,1);
  return;
}

```

---

## eraseDuplicationComboSKillTree

```asm
// === 086090ce SkillSlot::eraseDuplicationComboSKillTree  [0x086090ce-0x860917d] ===
 86090ce:	55                   	push   %ebp
 86090cf:	89 e5                	mov    %esp,%ebp
 86090d1:	83 ec 38             	sub    $0x38,%esp
 86090d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86090d7:	85 c0                	test   %eax,%eax
 86090d9:	74 3d                	je     8609118 <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND+0x4a>
 86090db:	8b 45 0c             	mov    0xc(%ebp),%eax
 86090de:	83 f8 01             	cmp    $0x1,%eax
 86090e1:	74 35                	je     8609118 <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND+0x4a>
 86090e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86090e6:	89 44 24 14          	mov    %eax,0x14(%esp)
 86090ea:	c7 44 24 10 58 d5 cd 	movl   $0x8cdd558,0x10(%esp)
 86090f1:	08 
 86090f2:	c7 44 24 0c 0b 0d 00 	movl   $0xd0b,0xc(%esp)
 86090f9:	00 
 86090fa:	c7 44 24 08 c0 e2 cd 	movl   $0x8cde2c0,0x8(%esp)
 8609101:	08 
 8609102:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8609109:	08 
 860910a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8609111:	e8 f4 aa 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8609116:	eb 63                	jmp    860917b <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND+0xad>
 8609118:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 860911f:	c7 45 f4 c6 00 00 00 	movl   $0xc6,-0xc(%ebp)
 8609126:	eb 45                	jmp    860916d <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND+0x9f>
 8609128:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860912b:	89 44 24 08          	mov    %eax,0x8(%esp)
 860912f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609132:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609136:	8b 45 08             	mov    0x8(%ebp),%eax
 8609139:	89 04 24             	mov    %eax,(%esp)
 860913c:	e8 3d 00 00 00       	call   860917e <_ZNK9SkillSlot17getSkillSlotIndexE20ENUM_SKILL_TREE_KINDi>
 8609141:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8609144:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8609148:	74 1e                	je     8609168 <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND+0x9a>
 860914a:	8b 45 08             	mov    0x8(%ebp),%eax
 860914d:	8d 50 1c             	lea    0x1c(%eax),%edx
 8609150:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8609153:	89 44 24 08          	mov    %eax,0x8(%esp)
 8609157:	8b 45 0c             	mov    0xc(%ebp),%eax
 860915a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860915e:	89 14 24             	mov    %edx,(%esp)
 8609161:	e8 a0 10 ae ff       	call   80ea206 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi>
 8609166:	eb 01                	jmp    8609169 <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND+0x9b>
 8609168:	90                   	nop
 8609169:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860916d:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 8609174:	0f 9e c0             	setle  %al
 8609177:	84 c0                	test   %al,%al
 8609179:	75 ad                	jne    8609128 <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND+0x5a>
 860917b:	c9                   	leave
 860917c:	c3                   	ret
 860917d:	90                   	nop

```

```c
// SkillSlot::eraseDuplicationComboSKillTree @ 0x86090ce

/* SkillSlot::eraseDuplicationComboSKillTree(ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::eraseDuplicationComboSKillTree(SkillSlot *this,int param_2)

{
  int iVar1;
  int local_10;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    for (local_10 = 0xc6; local_10 < 0xcc; local_10 = local_10 + 1) {
      iVar1 = getSkillSlotIndex(this,param_2,local_10);
      if (iVar1 != 0) {
        ComboSkill::eraseDuplicationComboSKill((ComboSkill *)(this + 0x1c),param_2,iVar1);
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "void SkillSlot::eraseDuplicationComboSKillTree(ENUM_SKILL_TREE_KIND)",0xd0b,
               "SkillSlot::eraseDuplicationComboSKillTree kind(%d) error",param_2);
  }
  return;
}

```

---

## getComboSkillSaveData

```asm
// === 08608b78 SkillSlot::getComboSkillSaveData  [0x08608b78-0x8608c11] ===
 8608b78:	55                   	push   %ebp
 8608b79:	89 e5                	mov    %esp,%ebp
 8608b7b:	83 ec 28             	sub    $0x28,%esp
 8608b7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8608b81:	8b 00                	mov    (%eax),%eax
 8608b83:	85 c0                	test   %eax,%eax
 8608b85:	0f 84 81 00 00 00    	je     8608c0c <_ZNK9SkillSlot21getComboSkillSaveDataEP15SIG_COMBO_SKILL+0x94>
 8608b8b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8608b8f:	74 7e                	je     8608c0f <_ZNK9SkillSlot21getComboSkillSaveDataEP15SIG_COMBO_SKILL+0x97>
 8608b91:	8b 45 08             	mov    0x8(%ebp),%eax
 8608b94:	8b 00                	mov    (%eax),%eax
 8608b96:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8608b9d:	ff 
 8608b9e:	89 04 24             	mov    %eax,(%esp)
 8608ba1:	e8 fa 53 04 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8608ba6:	89 c2                	mov    %eax,%edx
 8608ba8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608bab:	89 10                	mov    %edx,(%eax)
 8608bad:	8b 45 08             	mov    0x8(%ebp),%eax
 8608bb0:	8b 00                	mov    (%eax),%eax
 8608bb2:	89 04 24             	mov    %eax,(%esp)
 8608bb5:	e8 66 53 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8608bba:	89 c2                	mov    %eax,%edx
 8608bbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608bbf:	89 50 06             	mov    %edx,0x6(%eax)
 8608bc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8608bc5:	8d 50 1c             	lea    0x1c(%eax),%edx
 8608bc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608bcb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608bcf:	89 14 24             	mov    %edx,(%esp)
 8608bd2:	e8 1b 12 ae ff       	call   80e9df2 <_ZNK10ComboSkill8saveDataEP15SIG_COMBO_SKILL>
 8608bd7:	83 f0 01             	xor    $0x1,%eax
 8608bda:	84 c0                	test   %al,%al
 8608bdc:	74 32                	je     8608c10 <_ZNK9SkillSlot21getComboSkillSaveDataEP15SIG_COMBO_SKILL+0x98>
 8608bde:	c7 44 24 10 20 d4 cd 	movl   $0x8cdd420,0x10(%esp)
 8608be5:	08 
 8608be6:	c7 44 24 0c 84 0c 00 	movl   $0xc84,0xc(%esp)
 8608bed:	00 
 8608bee:	c7 44 24 08 80 e4 cd 	movl   $0x8cde480,0x8(%esp)
 8608bf5:	08 
 8608bf6:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8608bfd:	08 
 8608bfe:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8608c05:	e8 00 b0 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8608c0a:	eb 04                	jmp    8608c10 <_ZNK9SkillSlot21getComboSkillSaveDataEP15SIG_COMBO_SKILL+0x98>
 8608c0c:	90                   	nop
 8608c0d:	eb 01                	jmp    8608c10 <_ZNK9SkillSlot21getComboSkillSaveDataEP15SIG_COMBO_SKILL+0x98>
 8608c0f:	90                   	nop
 8608c10:	c9                   	leave
 8608c11:	c3                   	ret

```

```c
// SkillSlot::getComboSkillSaveData @ 0x8608b78

/* SkillSlot::getComboSkillSaveData(SIG_COMBO_SKILL*) const */

void __thiscall SkillSlot::getComboSkillSaveData(SkillSlot *this,SIG_COMBO_SKILL *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(int *)this != 0) && (param_1 != (SIG_COMBO_SKILL *)0x0)) {
    uVar2 = CUser::get_charac_no(*(CUser **)this,-1);
    *(undefined4 *)param_1 = uVar2;
    uVar2 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    *(undefined4 *)(param_1 + 6) = uVar2;
    cVar1 = ComboSkill::saveData((ComboSkill *)(this + 0x1c),param_1);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"skill_slot.cpp","void SkillSlot::getComboSkillSaveData(SIG_COMBO_SKILL*) const",
                 0xc84,"SkillSlot::getComboSkillSaveData error");
    }
  }
  return;
}

```

---

## getComboSkillSendInfo

```asm
// === 08608c12 SkillSlot::getComboSkillSendInfo  [0x08608c12-0x8608c2f] ===
 8608c12:	55                   	push   %ebp
 8608c13:	89 e5                	mov    %esp,%ebp
 8608c15:	83 ec 18             	sub    $0x18,%esp
 8608c18:	8b 45 08             	mov    0x8(%ebp),%eax
 8608c1b:	8d 50 1c             	lea    0x1c(%eax),%edx
 8608c1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608c21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608c25:	89 14 24             	mov    %edx,(%esp)
 8608c28:	e8 2d 12 ae ff       	call   80e9e5a <_ZNK10ComboSkill21getComboSkillSendListER11PacketGuard>
 8608c2d:	c9                   	leave
 8608c2e:	c3                   	ret
 8608c2f:	90                   	nop

```

```c
// SkillSlot::getComboSkillSendInfo @ 0x8608c12

/* SkillSlot::getComboSkillSendInfo(PacketGuard&) const */

void __thiscall SkillSlot::getComboSkillSendInfo(SkillSlot *this,PacketGuard *param_1)

{
  ComboSkill::getComboSkillSendList((ComboSkill *)(this + 0x1c),param_1);
  return;
}

```

---

## getSkillSlotIndex

```asm
// === 0860917e SkillSlot::getSkillSlotIndex  [0x0860917e-0x86091fd] ===
 860917e:	55                   	push   %ebp
 860917f:	89 e5                	mov    %esp,%ebp
 8609181:	83 ec 28             	sub    $0x28,%esp
 8609184:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609187:	83 f8 01             	cmp    $0x1,%eax
 860918a:	7e 3a                	jle    86091c6 <_ZNK9SkillSlot17getSkillSlotIndexE20ENUM_SKILL_TREE_KINDi+0x48>
 860918c:	8b 45 0c             	mov    0xc(%ebp),%eax
 860918f:	89 44 24 14          	mov    %eax,0x14(%esp)
 8609193:	c7 44 24 10 94 d5 cd 	movl   $0x8cdd594,0x10(%esp)
 860919a:	08 
 860919b:	c7 44 24 0c 1f 0d 00 	movl   $0xd1f,0xc(%esp)
 86091a2:	00 
 86091a3:	c7 44 24 08 60 e2 cd 	movl   $0x8cde260,0x8(%esp)
 86091aa:	08 
 86091ab:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 86091b2:	08 
 86091b3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86091ba:	e8 4b aa 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86091bf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86091c4:	eb 36                	jmp    86091fc <_ZNK9SkillSlot17getSkillSlotIndexE20ENUM_SKILL_TREE_KINDi+0x7e>
 86091c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86091c9:	83 f8 ff             	cmp    $0xffffffff,%eax
 86091cc:	74 07                	je     86091d5 <_ZNK9SkillSlot17getSkillSlotIndexE20ENUM_SKILL_TREE_KINDi+0x57>
 86091ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 86091d1:	85 c0                	test   %eax,%eax
 86091d3:	75 13                	jne    86091e8 <_ZNK9SkillSlot17getSkillSlotIndexE20ENUM_SKILL_TREE_KINDi+0x6a>
 86091d5:	8b 55 10             	mov    0x10(%ebp),%edx
 86091d8:	8b 45 08             	mov    0x8(%ebp),%eax
 86091db:	83 c2 20             	add    $0x20,%edx
 86091de:	0f b6 44 50 06       	movzbl 0x6(%eax,%edx,2),%eax
 86091e3:	0f b6 c0             	movzbl %al,%eax
 86091e6:	eb 14                	jmp    86091fc <_ZNK9SkillSlot17getSkillSlotIndexE20ENUM_SKILL_TREE_KINDi+0x7e>
 86091e8:	8b 55 10             	mov    0x10(%ebp),%edx
 86091eb:	8b 45 08             	mov    0x8(%ebp),%eax
 86091ee:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 86091f4:	0f b6 44 50 0e       	movzbl 0xe(%eax,%edx,2),%eax
 86091f9:	0f b6 c0             	movzbl %al,%eax
 86091fc:	c9                   	leave
 86091fd:	c3                   	ret

```

```c
// SkillSlot::getSkillSlotIndex @ 0x860917e

/* SkillSlot::getSkillSlotIndex(ENUM_SKILL_TREE_KIND, int) const */

uint __thiscall SkillSlot::getSkillSlotIndex(SkillSlot *this,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 < 2) {
    if ((param_2 == -1) || (param_2 == 0)) {
      uVar1 = (uint)(byte)this[(param_3 + 0x20) * 2 + 6];
    }
    else {
      uVar1 = (uint)(byte)this[(param_3 + 0xe8) * 2 + 0xe];
    }
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "int SkillSlot::getSkillSlotIndex(ENUM_SKILL_TREE_KIND, int) const",0xd1f,
               "SkillSlot::getSkillSlotIndex kind(%d) error",param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

```

---

## get_cur_remain_sp

```asm
// === 08606812 SkillSlot::get_cur_remain_sp  [0x08606812-0x8606873] ===
 8606812:	55                   	push   %ebp
 8606813:	89 e5                	mov    %esp,%ebp
 8606815:	8b 45 08             	mov    0x8(%ebp),%eax
 8606818:	8b 00                	mov    (%eax),%eax
 860681a:	85 c0                	test   %eax,%eax
 860681c:	75 07                	jne    8606825 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x13>
 860681e:	b8 00 00 00 00       	mov    $0x0,%eax
 8606823:	eb 4c                	jmp    8606871 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x5f>
 8606825:	8b 45 0c             	mov    0xc(%ebp),%eax
 8606828:	83 f8 ff             	cmp    $0xffffffff,%eax
 860682b:	74 07                	je     8606834 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x22>
 860682d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8606830:	85 c0                	test   %eax,%eax
 8606832:	75 08                	jne    860683c <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x2a>
 8606834:	8b 45 08             	mov    0x8(%ebp),%eax
 8606837:	83 c0 04             	add    $0x4,%eax
 860683a:	eb 35                	jmp    8606871 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x5f>
 860683c:	8b 45 0c             	mov    0xc(%ebp),%eax
 860683f:	83 f8 01             	cmp    $0x1,%eax
 8606842:	75 08                	jne    860684c <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x3a>
 8606844:	8b 45 08             	mov    0x8(%ebp),%eax
 8606847:	83 c0 0c             	add    $0xc,%eax
 860684a:	eb 25                	jmp    8606871 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x5f>
 860684c:	8b 45 0c             	mov    0xc(%ebp),%eax
 860684f:	83 f8 02             	cmp    $0x2,%eax
 8606852:	75 08                	jne    860685c <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x4a>
 8606854:	8b 45 08             	mov    0x8(%ebp),%eax
 8606857:	83 c0 14             	add    $0x14,%eax
 860685a:	eb 15                	jmp    8606871 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x5f>
 860685c:	8b 45 0c             	mov    0xc(%ebp),%eax
 860685f:	83 f8 03             	cmp    $0x3,%eax
 8606862:	75 08                	jne    860686c <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x5a>
 8606864:	8b 45 08             	mov    0x8(%ebp),%eax
 8606867:	83 c0 18             	add    $0x18,%eax
 860686a:	eb 05                	jmp    8606871 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND+0x5f>
 860686c:	b8 00 00 00 00       	mov    $0x0,%eax
 8606871:	5d                   	pop    %ebp
 8606872:	c3                   	ret
 8606873:	90                   	nop

```

```c
// SkillSlot::get_cur_remain_sp @ 0x8606812

/* SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const */

SkillSlot * __thiscall SkillSlot::get_cur_remain_sp(SkillSlot *this,int param_2)

{
  if (*(int *)this == 0) {
    this = (SkillSlot *)0x0;
  }
  else if ((param_2 == -1) || (param_2 == 0)) {
    this = this + 4;
  }
  else if (param_2 == 1) {
    this = this + 0xc;
  }
  else if (param_2 == 2) {
    this = this + 0x14;
  }
  else if (param_2 == 3) {
    this = this + 0x18;
  }
  else {
    this = (SkillSlot *)0x0;
  }
  return this;
}

```

---

## get_give_skill

```asm
// === 0860714a SkillSlot::get_give_skill  [0x0860714a-0x860745f] ===
 860714a:	55                   	push   %ebp
 860714b:	89 e5                	mov    %esp,%ebp
 860714d:	57                   	push   %edi
 860714e:	56                   	push   %esi
 860714f:	53                   	push   %ebx
 8607150:	83 ec 5c             	sub    $0x5c,%esp
 8607153:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8607157:	79 0a                	jns    8607163 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x19>
 8607159:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 860715e:	e9 ef 02 00 00       	jmp    8607452 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x308>
 8607163:	e8 3f 32 ad ff       	call   80da3a7 <_Z11G_GameWorldv>
 8607168:	89 04 24             	mov    %eax,(%esp)
 860716b:	e8 ae d2 c2 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 8607170:	84 c0                	test   %al,%al
 8607172:	74 6a                	je     86071de <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x94>
 8607174:	8b 45 18             	mov    0x18(%ebp),%eax
 8607177:	89 04 24             	mov    %eax,(%esp)
 860717a:	e8 c3 31 b7 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 860717f:	8b 45 08             	mov    0x8(%ebp),%eax
 8607182:	8b 00                	mov    (%eax),%eax
 8607184:	89 04 24             	mov    %eax,(%esp)
 8607187:	e8 b0 80 c2 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 860718c:	0f be f8             	movsbl %al,%edi
 860718f:	8b 45 08             	mov    0x8(%ebp),%eax
 8607192:	8b 00                	mov    (%eax),%eax
 8607194:	89 04 24             	mov    %eax,(%esp)
 8607197:	e8 f8 9a b0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 860719c:	0f be f0             	movsbl %al,%esi
 860719f:	8b 45 08             	mov    0x8(%ebp),%eax
 86071a2:	8b 00                	mov    (%eax),%eax
 86071a4:	89 04 24             	mov    %eax,(%esp)
 86071a7:	e8 74 6d af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86071ac:	89 c3                	mov    %eax,%ebx
 86071ae:	e8 e8 4f ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 86071b3:	8d 90 00 a8 00 00    	lea    0xa800(%eax),%edx
 86071b9:	8b 45 18             	mov    0x18(%ebp),%eax
 86071bc:	89 44 24 10          	mov    %eax,0x10(%esp)
 86071c0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 86071c4:	89 74 24 08          	mov    %esi,0x8(%esp)
 86071c8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86071cc:	89 14 24             	mov    %edx,(%esp)
 86071cf:	e8 a4 6f 45 00       	call   8a5e178 <_ZNK27PvPSkillTreeParameterScript12getGiveSkillEiiiRSt6vectorISt4pairIiiESaIS2_EE>
 86071d4:	bb 01 00 00 00       	mov    $0x1,%ebx
 86071d9:	e9 74 02 00 00       	jmp    8607452 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x308>
 86071de:	e8 b8 4f ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 86071e3:	8b 40 14             	mov    0x14(%eax),%eax
 86071e6:	8b 55 0c             	mov    0xc(%ebp),%edx
 86071e9:	69 d2 dc 07 00 00    	imul   $0x7dc,%edx,%edx
 86071ef:	81 c2 40 02 00 00    	add    $0x240,%edx
 86071f5:	01 d0                	add    %edx,%eax
 86071f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86071fb:	8b 45 18             	mov    0x18(%ebp),%eax
 86071fe:	89 04 24             	mov    %eax,(%esp)
 8607201:	e8 86 7e d0 ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 8607206:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8607209:	89 04 24             	mov    %eax,(%esp)
 860720c:	e8 c5 d7 b2 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8607211:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 8607215:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8607219:	75 3d                	jne    8607258 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x10e>
 860721b:	e8 7b 4f ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8607220:	8b 50 14             	mov    0x14(%eax),%edx
 8607223:	8b 45 0c             	mov    0xc(%ebp),%eax
 8607226:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 860722c:	01 c2                	add    %eax,%edx
 860722e:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8607235:	00 
 8607236:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8607239:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860723d:	8b 45 14             	mov    0x14(%ebp),%eax
 8607240:	89 44 24 08          	mov    %eax,0x8(%esp)
 8607244:	8b 45 10             	mov    0x10(%ebp),%eax
 8607247:	89 44 24 04          	mov    %eax,0x4(%esp)
 860724b:	89 14 24             	mov    %edx,(%esp)
 860724e:	e8 45 15 d4 ff       	call   8348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>
 8607253:	88 45 e7             	mov    %al,-0x19(%ebp)
 8607256:	eb 3b                	jmp    8607293 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x149>
 8607258:	e8 3e 4f ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 860725d:	8b 50 14             	mov    0x14(%eax),%edx
 8607260:	8b 45 0c             	mov    0xc(%ebp),%eax
 8607263:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 8607269:	01 c2                	add    %eax,%edx
 860726b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8607272:	00 
 8607273:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8607276:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860727a:	8b 45 14             	mov    0x14(%ebp),%eax
 860727d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8607281:	8b 45 10             	mov    0x10(%ebp),%eax
 8607284:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607288:	89 14 24             	mov    %edx,(%esp)
 860728b:	e8 08 15 d4 ff       	call   8348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>
 8607290:	88 45 e7             	mov    %al,-0x19(%ebp)
 8607293:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8607297:	83 f0 01             	xor    $0x1,%eax
 860729a:	84 c0                	test   %al,%al
 860729c:	74 0a                	je     86072a8 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x15e>
 860729e:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 86072a3:	e9 9f 01 00 00       	jmp    8607447 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x2fd>
 86072a8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86072ab:	8d 55 c8             	lea    -0x38(%ebp),%edx
 86072ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 86072b2:	89 04 24             	mov    %eax,(%esp)
 86072b5:	e8 f8 62 ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 86072ba:	83 ec 04             	sub    $0x4,%esp
 86072bd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86072c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86072c4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86072c7:	89 04 24             	mov    %eax,(%esp)
 86072ca:	e8 53 06 d8 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 86072cf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86072d2:	8d 55 c8             	lea    -0x38(%ebp),%edx
 86072d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86072d9:	89 04 24             	mov    %eax,(%esp)
 86072dc:	e8 f5 62 ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 86072e1:	83 ec 04             	sub    $0x4,%esp
 86072e4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86072e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86072eb:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86072ee:	89 04 24             	mov    %eax,(%esp)
 86072f1:	e8 2c 06 d8 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 86072f6:	e9 10 01 00 00       	jmp    860740b <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x2c1>
 86072fb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86072fe:	8b 55 18             	mov    0x18(%ebp),%edx
 8607301:	89 54 24 04          	mov    %edx,0x4(%esp)
 8607305:	89 04 24             	mov    %eax,(%esp)
 8607308:	e8 a5 62 ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 860730d:	83 ec 04             	sub    $0x4,%esp
 8607310:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8607313:	8b 55 18             	mov    0x18(%ebp),%edx
 8607316:	89 54 24 04          	mov    %edx,0x4(%esp)
 860731a:	89 04 24             	mov    %eax,(%esp)
 860731d:	e8 b4 62 ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8607322:	83 ec 04             	sub    $0x4,%esp
 8607325:	eb 6a                	jmp    8607391 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x247>
 8607327:	8d 45 bc             	lea    -0x44(%ebp),%eax
 860732a:	89 04 24             	mov    %eax,(%esp)
 860732d:	e8 bc a9 b0 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8607332:	8b 18                	mov    (%eax),%ebx
 8607334:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8607337:	89 04 24             	mov    %eax,(%esp)
 860733a:	e8 d3 c5 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 860733f:	8b 00                	mov    (%eax),%eax
 8607341:	39 c3                	cmp    %eax,%ebx
 8607343:	0f 94 c0             	sete   %al
 8607346:	84 c0                	test   %al,%al
 8607348:	74 3c                	je     8607386 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x23c>
 860734a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 860734d:	89 04 24             	mov    %eax,(%esp)
 8607350:	e8 99 a9 b0 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8607355:	89 c3                	mov    %eax,%ebx
 8607357:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 860735a:	89 04 24             	mov    %eax,(%esp)
 860735d:	e8 b0 c5 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8607362:	8d 70 04             	lea    0x4(%eax),%esi
 8607365:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8607368:	89 04 24             	mov    %eax,(%esp)
 860736b:	e8 7e a9 b0 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8607370:	83 c0 04             	add    $0x4,%eax
 8607373:	89 74 24 04          	mov    %esi,0x4(%esp)
 8607377:	89 04 24             	mov    %eax,(%esp)
 860737a:	e8 99 6e a8 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 860737f:	8b 00                	mov    (%eax),%eax
 8607381:	89 43 04             	mov    %eax,0x4(%ebx)
 8607384:	eb 21                	jmp    86073a7 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x25d>
 8607386:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8607389:	89 04 24             	mov    %eax,(%esp)
 860738c:	e8 79 9e b0 ff       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8607391:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8607394:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607398:	8d 45 bc             	lea    -0x44(%ebp),%eax
 860739b:	89 04 24             	mov    %eax,(%esp)
 860739e:	e8 3b 9e b0 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 86073a3:	84 c0                	test   %al,%al
 86073a5:	75 80                	jne    8607327 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x1dd>
 86073a7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86073aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 86073ae:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86073b1:	89 04 24             	mov    %eax,(%esp)
 86073b4:	e8 d3 37 bb ff       	call   81bab8c <_ZN9__gnu_cxxeqIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 86073b9:	84 c0                	test   %al,%al
 86073bb:	74 43                	je     8607400 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x2b6>
 86073bd:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86073c0:	89 04 24             	mov    %eax,(%esp)
 86073c3:	e8 4a c5 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 86073c8:	8d 58 04             	lea    0x4(%eax),%ebx
 86073cb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86073ce:	89 04 24             	mov    %eax,(%esp)
 86073d1:	e8 3c c5 b8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 86073d6:	89 c2                	mov    %eax,%edx
 86073d8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86073db:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86073df:	89 54 24 04          	mov    %edx,0x4(%esp)
 86073e3:	89 04 24             	mov    %eax,(%esp)
 86073e6:	e8 4e 20 00 00       	call   8609439 <_ZSt9make_pairIRKiS1_ESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 86073eb:	83 ec 04             	sub    $0x4,%esp
 86073ee:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86073f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86073f5:	8b 45 18             	mov    0x18(%ebp),%eax
 86073f8:	89 04 24             	mov    %eax,(%esp)
 86073fb:	e8 06 62 ad ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8607400:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8607403:	89 04 24             	mov    %eax,(%esp)
 8607406:	e8 c5 68 c3 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 860740b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860740e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607412:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8607415:	89 04 24             	mov    %eax,(%esp)
 8607418:	e8 c8 c4 b8 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 860741d:	84 c0                	test   %al,%al
 860741f:	0f 85 d6 fe ff ff    	jne    86072fb <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x1b1>
 8607425:	bb 01 00 00 00       	mov    $0x1,%ebx
 860742a:	eb 1b                	jmp    8607447 <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0x2fd>
 860742c:	89 d3                	mov    %edx,%ebx
 860742e:	89 c6                	mov    %eax,%esi
 8607430:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8607433:	89 04 24             	mov    %eax,(%esp)
 8607436:	e8 af d5 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 860743b:	89 f0                	mov    %esi,%eax
 860743d:	89 da                	mov    %ebx,%edx
 860743f:	89 04 24             	mov    %eax,(%esp)
 8607442:	e8 09 c3 4d 00       	call   8ae3750 <_Unwind_Resume>
 8607447:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860744a:	89 04 24             	mov    %eax,(%esp)
 860744d:	e8 98 d5 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8607452:	89 d8                	mov    %ebx,%eax
 8607454:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8607457:	83 c4 00             	add    $0x0,%esp
 860745a:	5b                   	pop    %ebx
 860745b:	5e                   	pop    %esi
 860745c:	5f                   	pop    %edi
 860745d:	5d                   	pop    %ebp
 860745e:	c3                   	ret
 860745f:	90                   	nop

```

```c
// SkillSlot::get_give_skill @ 0x860714a

/* SkillSlot::get_give_skill(int, int, int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
SkillSlot::get_give_skill(SkillSlot *this,int param_1,int param_2,int param_3,vector *param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  GameWorld *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  __normal_iterator local_4c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_48 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_44 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_3c [12];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  int local_28 [2];
  char local_1d;
  
  if (param_1 < 0) {
    uVar8 = 0xffffffff;
  }
  else {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar1 == '\0') {
      iVar4 = G_CDataManager();
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_4,
                 (vector *)(*(int *)(iVar4 + 0x14) + param_1 * 0x7dc + 0x240));
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_3c);
      local_1d = 1;
      if (param_3 == 0) {
                    /* try { // try from 0860721b to 0860741c has its CatchHandler @ 0860742c */
        iVar4 = G_CDataManager();
        local_1d = CCharacter::get_give_skill
                             ((CCharacter *)(*(int *)(iVar4 + 0x14) + param_1 * 0x7dc),param_2,0,
                              (vector *)local_3c,1);
      }
      else {
        iVar4 = G_CDataManager();
        local_1d = CCharacter::get_give_skill
                             ((CCharacter *)(*(int *)(iVar4 + 0x14) + param_1 * 0x7dc),param_2,
                              param_3,(vector *)local_3c,0);
      }
      if (local_1d == '\x01') {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_40,local_30);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_44,local_2c);
        while( true ) {
          bVar3 = __gnu_cxx::operator!=(local_40,local_44);
          if (!bVar3) break;
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          while( true ) {
            bVar3 = __gnu_cxx::operator!=(local_48,local_4c);
            if (!bVar3) break;
            piVar7 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_48);
            iVar4 = *piVar7;
            piVar7 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_40);
            if (iVar4 == *piVar7) {
              iVar4 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_48);
              iVar5 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_40);
              iVar6 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_48);
              piVar7 = std::max<int>((int *)(iVar6 + 4),(int *)(iVar5 + 4));
              *(int *)(iVar4 + 4) = *piVar7;
              break;
            }
            __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator++(local_48);
          }
          bVar3 = __gnu_cxx::operator==(local_48,local_4c);
          if (bVar3) {
            __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_40);
            piVar7 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_40);
            std::make_pair<int_const&,int_const&>(local_28,piVar7);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_4,
                       (pair *)local_28);
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_40);
        }
        uVar8 = 1;
      }
      else {
        uVar8 = 0xffffffff;
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_3c);
    }
    else {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_4);
      cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
      cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
      iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
      iVar5 = G_CDataManager();
      PvPSkillTreeParameterScript::getGiveSkill
                ((PvPSkillTreeParameterScript *)(iVar5 + 0xa800),iVar4,(int)cVar2,(int)cVar1,param_4
                );
      uVar8 = 1;
    }
  }
  return uVar8;
}

```

---

## get_remain_sfp_at_index

```asm
// === 086035f2 SkillSlot::get_remain_sfp_at_index  [0x086035f2-0x8603651] ===
 86035f2:	55                   	push   %ebp
 86035f3:	89 e5                	mov    %esp,%ebp
 86035f5:	83 ec 28             	sub    $0x28,%esp
 86035f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86035fb:	83 f8 02             	cmp    $0x2,%eax
 86035fe:	75 08                	jne    8603608 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND+0x16>
 8603600:	8b 45 08             	mov    0x8(%ebp),%eax
 8603603:	8b 40 14             	mov    0x14(%eax),%eax
 8603606:	eb 48                	jmp    8603650 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND+0x5e>
 8603608:	8b 45 0c             	mov    0xc(%ebp),%eax
 860360b:	83 f8 03             	cmp    $0x3,%eax
 860360e:	75 08                	jne    8603618 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND+0x26>
 8603610:	8b 45 08             	mov    0x8(%ebp),%eax
 8603613:	8b 40 18             	mov    0x18(%eax),%eax
 8603616:	eb 38                	jmp    8603650 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND+0x5e>
 8603618:	8b 45 0c             	mov    0xc(%ebp),%eax
 860361b:	89 44 24 14          	mov    %eax,0x14(%esp)
 860361f:	c7 44 24 10 81 d2 cd 	movl   $0x8cdd281,0x10(%esp)
 8603626:	08 
 8603627:	c7 44 24 0c 81 00 00 	movl   $0x81,0xc(%esp)
 860362e:	00 
 860362f:	c7 44 24 08 40 e8 cd 	movl   $0x8cde840,0x8(%esp)
 8603636:	08 
 8603637:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 860363e:	08 
 860363f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8603646:	e8 bf 05 4d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 860364b:	b8 00 00 00 00       	mov    $0x0,%eax
 8603650:	c9                   	leave
 8603651:	c3                   	ret

```

```c
// SkillSlot::get_remain_sfp_at_index @ 0x86035f2

/* SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const */

undefined4 __thiscall SkillSlot::get_remain_sfp_at_index(SkillSlot *this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 2) {
    uVar1 = *(undefined4 *)(this + 0x14);
  }
  else if (param_2 == 3) {
    uVar1 = *(undefined4 *)(this + 0x18);
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "int SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const",0x81,
               "Wrong Skill Tree Kind : %d",param_2);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## get_remain_sp_at_index

```asm
// === 08603528 SkillSlot::get_remain_sp_at_index  [0x08603528-0x860358f] ===
 8603528:	55                   	push   %ebp
 8603529:	89 e5                	mov    %esp,%ebp
 860352b:	83 ec 28             	sub    $0x28,%esp
 860352e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8603531:	83 f8 ff             	cmp    $0xffffffff,%eax
 8603534:	74 07                	je     860353d <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND+0x15>
 8603536:	8b 45 0c             	mov    0xc(%ebp),%eax
 8603539:	85 c0                	test   %eax,%eax
 860353b:	75 08                	jne    8603545 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND+0x1d>
 860353d:	8b 45 08             	mov    0x8(%ebp),%eax
 8603540:	8b 40 04             	mov    0x4(%eax),%eax
 8603543:	eb 48                	jmp    860358d <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND+0x65>
 8603545:	8b 45 0c             	mov    0xc(%ebp),%eax
 8603548:	83 f8 01             	cmp    $0x1,%eax
 860354b:	75 08                	jne    8603555 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND+0x2d>
 860354d:	8b 45 08             	mov    0x8(%ebp),%eax
 8603550:	8b 40 0c             	mov    0xc(%eax),%eax
 8603553:	eb 38                	jmp    860358d <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND+0x65>
 8603555:	8b 45 0c             	mov    0xc(%ebp),%eax
 8603558:	89 44 24 14          	mov    %eax,0x14(%esp)
 860355c:	c7 44 24 10 81 d2 cd 	movl   $0x8cdd281,0x10(%esp)
 8603563:	08 
 8603564:	c7 44 24 0c 68 00 00 	movl   $0x68,0xc(%esp)
 860356b:	00 
 860356c:	c7 44 24 08 00 e9 cd 	movl   $0x8cde900,0x8(%esp)
 8603573:	08 
 8603574:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 860357b:	08 
 860357c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8603583:	e8 82 06 4d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8603588:	b8 00 00 00 00       	mov    $0x0,%eax
 860358d:	c9                   	leave
 860358e:	c3                   	ret
 860358f:	90                   	nop

```

```c
// SkillSlot::get_remain_sp_at_index @ 0x8603528

/* SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const */

undefined4 __thiscall SkillSlot::get_remain_sp_at_index(SkillSlot *this,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == -1) || (param_2 == 0)) {
    uVar1 = *(undefined4 *)(this + 4);
  }
  else if (param_2 == 1) {
    uVar1 = *(undefined4 *)(this + 0xc);
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "int SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const",0x68,
               "Wrong Skill Tree Kind : %d",param_2);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## get_skill_count

```asm
// === 08603652 SkillSlot::get_skill_count  [0x08603652-0x86036cd] ===
 8603652:	55                   	push   %ebp
 8603653:	89 e5                	mov    %esp,%ebp
 8603655:	83 ec 28             	sub    $0x28,%esp
 8603658:	8b 45 08             	mov    0x8(%ebp),%eax
 860365b:	8b 00                	mov    (%eax),%eax
 860365d:	85 c0                	test   %eax,%eax
 860365f:	75 07                	jne    8603668 <_ZNK9SkillSlot15get_skill_countEv+0x16>
 8603661:	b8 00 00 00 00       	mov    $0x0,%eax
 8603666:	eb 64                	jmp    86036cc <_ZNK9SkillSlot15get_skill_countEv+0x7a>
 8603668:	8b 45 08             	mov    0x8(%ebp),%eax
 860366b:	8b 00                	mov    (%eax),%eax
 860366d:	89 04 24             	mov    %eax,(%esp)
 8603670:	e8 c7 bc c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8603675:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603679:	8b 45 08             	mov    0x8(%ebp),%eax
 860367c:	89 04 24             	mov    %eax,(%esp)
 860367f:	e8 5a 31 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8603684:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8603687:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 860368b:	75 07                	jne    8603694 <_ZNK9SkillSlot15get_skill_countEv+0x42>
 860368d:	b8 00 00 00 00       	mov    $0x0,%eax
 8603692:	eb 38                	jmp    86036cc <_ZNK9SkillSlot15get_skill_countEv+0x7a>
 8603694:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 860369b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86036a2:	eb 17                	jmp    86036bb <_ZNK9SkillSlot15get_skill_countEv+0x69>
 86036a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86036a7:	01 c0                	add    %eax,%eax
 86036a9:	03 45 ec             	add    -0x14(%ebp),%eax
 86036ac:	0f b6 00             	movzbl (%eax),%eax
 86036af:	84 c0                	test   %al,%al
 86036b1:	74 04                	je     86036b7 <_ZNK9SkillSlot15get_skill_countEv+0x65>
 86036b3:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86036b7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86036bb:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 86036c2:	0f 9e c0             	setle  %al
 86036c5:	84 c0                	test   %al,%al
 86036c7:	75 db                	jne    86036a4 <_ZNK9SkillSlot15get_skill_countEv+0x52>
 86036c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86036cc:	c9                   	leave
 86036cd:	c3                   	ret

```

```c
// SkillSlot::get_skill_count @ 0x8603652

/* SkillSlot::get_skill_count() const */

int __thiscall SkillSlot::get_skill_count(SkillSlot *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)this == 0) {
    local_14 = 0;
  }
  else {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    iVar2 = get_skillslot_buf(this,uVar1);
    if (iVar2 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = 0;
      for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
        if (*(char *)(local_10 * 2 + iVar2) != '\0') {
          local_14 = local_14 + 1;
        }
      }
    }
  }
  return local_14;
}

```

---

## get_skill_index

```asm
// === 08606874 SkillSlot::get_skill_index  [0x08606874-0x86068e5] ===
 8606874:	55                   	push   %ebp
 8606875:	89 e5                	mov    %esp,%ebp
 8606877:	83 ec 18             	sub    $0x18,%esp
 860687a:	8b 45 08             	mov    0x8(%ebp),%eax
 860687d:	8b 00                	mov    (%eax),%eax
 860687f:	85 c0                	test   %eax,%eax
 8606881:	75 07                	jne    860688a <_ZNK9SkillSlot15get_skill_indexEi+0x16>
 8606883:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8606888:	eb 5a                	jmp    86068e4 <_ZNK9SkillSlot15get_skill_indexEi+0x70>
 860688a:	8b 45 08             	mov    0x8(%ebp),%eax
 860688d:	8b 00                	mov    (%eax),%eax
 860688f:	89 04 24             	mov    %eax,(%esp)
 8606892:	e8 a5 8a c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606897:	83 f8 ff             	cmp    $0xffffffff,%eax
 860689a:	74 11                	je     86068ad <_ZNK9SkillSlot15get_skill_indexEi+0x39>
 860689c:	8b 45 08             	mov    0x8(%ebp),%eax
 860689f:	8b 00                	mov    (%eax),%eax
 86068a1:	89 04 24             	mov    %eax,(%esp)
 86068a4:	e8 93 8a c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 86068a9:	85 c0                	test   %eax,%eax
 86068ab:	75 07                	jne    86068b4 <_ZNK9SkillSlot15get_skill_indexEi+0x40>
 86068ad:	b8 01 00 00 00       	mov    $0x1,%eax
 86068b2:	eb 05                	jmp    86068b9 <_ZNK9SkillSlot15get_skill_indexEi+0x45>
 86068b4:	b8 00 00 00 00       	mov    $0x0,%eax
 86068b9:	84 c0                	test   %al,%al
 86068bb:	74 13                	je     86068d0 <_ZNK9SkillSlot15get_skill_indexEi+0x5c>
 86068bd:	8b 55 0c             	mov    0xc(%ebp),%edx
 86068c0:	8b 45 08             	mov    0x8(%ebp),%eax
 86068c3:	83 c2 20             	add    $0x20,%edx
 86068c6:	0f b6 44 50 06       	movzbl 0x6(%eax,%edx,2),%eax
 86068cb:	0f b6 c0             	movzbl %al,%eax
 86068ce:	eb 14                	jmp    86068e4 <_ZNK9SkillSlot15get_skill_indexEi+0x70>
 86068d0:	8b 55 0c             	mov    0xc(%ebp),%edx
 86068d3:	8b 45 08             	mov    0x8(%ebp),%eax
 86068d6:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 86068dc:	0f b6 44 50 0e       	movzbl 0xe(%eax,%edx,2),%eax
 86068e1:	0f b6 c0             	movzbl %al,%eax
 86068e4:	c9                   	leave
 86068e5:	c3                   	ret

```

```c
// SkillSlot::get_skill_index @ 0x8606874

/* SkillSlot::get_skill_index(int) const */

uint __thiscall SkillSlot::get_skill_index(SkillSlot *this,int param_1)

{
  SkillSlot SVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)this != 0) {
    iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    if ((iVar3 == -1) ||
       (iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this), iVar3 == 0))
    {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      SVar1 = this[(param_1 + 0x20) * 2 + 6];
    }
    else {
      SVar1 = this[(param_1 + 0xe8) * 2 + 0xe];
    }
    return (uint)(byte)SVar1;
  }
  return 0xffffffff;
}

```

---

## get_skill_level

```asm
// === 086068e6 SkillSlot::get_skill_level  [0x086068e6-0x8606957] ===
 86068e6:	55                   	push   %ebp
 86068e7:	89 e5                	mov    %esp,%ebp
 86068e9:	83 ec 18             	sub    $0x18,%esp
 86068ec:	8b 45 08             	mov    0x8(%ebp),%eax
 86068ef:	8b 00                	mov    (%eax),%eax
 86068f1:	85 c0                	test   %eax,%eax
 86068f3:	75 07                	jne    86068fc <_ZNK9SkillSlot15get_skill_levelEi+0x16>
 86068f5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86068fa:	eb 5a                	jmp    8606956 <_ZNK9SkillSlot15get_skill_levelEi+0x70>
 86068fc:	8b 45 08             	mov    0x8(%ebp),%eax
 86068ff:	8b 00                	mov    (%eax),%eax
 8606901:	89 04 24             	mov    %eax,(%esp)
 8606904:	e8 33 8a c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606909:	83 f8 ff             	cmp    $0xffffffff,%eax
 860690c:	74 11                	je     860691f <_ZNK9SkillSlot15get_skill_levelEi+0x39>
 860690e:	8b 45 08             	mov    0x8(%ebp),%eax
 8606911:	8b 00                	mov    (%eax),%eax
 8606913:	89 04 24             	mov    %eax,(%esp)
 8606916:	e8 21 8a c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 860691b:	85 c0                	test   %eax,%eax
 860691d:	75 07                	jne    8606926 <_ZNK9SkillSlot15get_skill_levelEi+0x40>
 860691f:	b8 01 00 00 00       	mov    $0x1,%eax
 8606924:	eb 05                	jmp    860692b <_ZNK9SkillSlot15get_skill_levelEi+0x45>
 8606926:	b8 00 00 00 00       	mov    $0x0,%eax
 860692b:	84 c0                	test   %al,%al
 860692d:	74 13                	je     8606942 <_ZNK9SkillSlot15get_skill_levelEi+0x5c>
 860692f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8606932:	8b 45 08             	mov    0x8(%ebp),%eax
 8606935:	83 c2 20             	add    $0x20,%edx
 8606938:	0f b6 44 50 07       	movzbl 0x7(%eax,%edx,2),%eax
 860693d:	0f be c0             	movsbl %al,%eax
 8606940:	eb 14                	jmp    8606956 <_ZNK9SkillSlot15get_skill_levelEi+0x70>
 8606942:	8b 55 0c             	mov    0xc(%ebp),%edx
 8606945:	8b 45 08             	mov    0x8(%ebp),%eax
 8606948:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 860694e:	0f b6 44 50 0f       	movzbl 0xf(%eax,%edx,2),%eax
 8606953:	0f be c0             	movsbl %al,%eax
 8606956:	c9                   	leave
 8606957:	c3                   	ret

```

```c
// SkillSlot::get_skill_level @ 0x86068e6

/* SkillSlot::get_skill_level(int) const */

int __thiscall SkillSlot::get_skill_level(SkillSlot *this,int param_1)

{
  SkillSlot SVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)this != 0) {
    iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    if ((iVar3 == -1) ||
       (iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this), iVar3 == 0))
    {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      SVar1 = this[(param_1 + 0x20) * 2 + 7];
    }
    else {
      SVar1 = this[(param_1 + 0xe8) * 2 + 0xf];
    }
    return (int)(char)SVar1;
  }
  return -1;
}

```

---

## get_skill_slot

```asm
// === 086033cc SkillSlot::get_skill_slot  [0x086033cc-0x860341f] ===
 86033cc:	55                   	push   %ebp
 86033cd:	89 e5                	mov    %esp,%ebp
 86033cf:	83 ec 18             	sub    $0x18,%esp
 86033d2:	8b 45 14             	mov    0x14(%ebp),%eax
 86033d5:	3d 98 01 00 00       	cmp    $0x198,%eax
 86033da:	76 07                	jbe    86033e3 <_ZNK9SkillSlot14get_skill_slotEPcS0_i+0x17>
 86033dc:	c7 45 14 98 01 00 00 	movl   $0x198,0x14(%ebp)
 86033e3:	8b 45 14             	mov    0x14(%ebp),%eax
 86033e6:	8b 55 08             	mov    0x8(%ebp),%edx
 86033e9:	83 c2 46             	add    $0x46,%edx
 86033ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 86033f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86033f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86033f7:	89 04 24             	mov    %eax,(%esp)
 86033fa:	e8 a1 a4 a7 ff       	call   807d8a0 <memcpy@plt>
 86033ff:	8b 45 14             	mov    0x14(%ebp),%eax
 8603402:	8b 55 08             	mov    0x8(%ebp),%edx
 8603405:	81 c2 de 01 00 00    	add    $0x1de,%edx
 860340b:	89 44 24 08          	mov    %eax,0x8(%esp)
 860340f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8603413:	8b 45 10             	mov    0x10(%ebp),%eax
 8603416:	89 04 24             	mov    %eax,(%esp)
 8603419:	e8 82 a4 a7 ff       	call   807d8a0 <memcpy@plt>
 860341e:	c9                   	leave
 860341f:	c3                   	ret

```

```c
// SkillSlot::get_skill_slot @ 0x86033cc

/* SkillSlot::get_skill_slot(char*, char*, int) const */

void __thiscall SkillSlot::get_skill_slot(SkillSlot *this,char *param_1,char *param_2,int param_3)

{
  if (0x198 < (uint)param_3) {
    param_3 = 0x198;
  }
  memcpy(param_1,this + 0x46,param_3);
  memcpy(param_2,this + 0x1de,param_3);
  return;
}

```

---

## get_skill_slot_at_index

```asm
// === 0860348a SkillSlot::get_skill_slot_at_index  [0x0860348a-0x86034f7] ===
 860348a:	55                   	push   %ebp
 860348b:	89 e5                	mov    %esp,%ebp
 860348d:	83 ec 18             	sub    $0x18,%esp
 8603490:	8b 45 10             	mov    0x10(%ebp),%eax
 8603493:	3d 98 01 00 00       	cmp    $0x198,%eax
 8603498:	76 07                	jbe    86034a1 <_ZNK9SkillSlot23get_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x17>
 860349a:	c7 45 10 98 01 00 00 	movl   $0x198,0x10(%ebp)
 86034a1:	8b 45 14             	mov    0x14(%ebp),%eax
 86034a4:	83 f8 ff             	cmp    $0xffffffff,%eax
 86034a7:	74 07                	je     86034b0 <_ZNK9SkillSlot23get_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x26>
 86034a9:	8b 45 14             	mov    0x14(%ebp),%eax
 86034ac:	85 c0                	test   %eax,%eax
 86034ae:	75 1e                	jne    86034ce <_ZNK9SkillSlot23get_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x44>
 86034b0:	8b 45 10             	mov    0x10(%ebp),%eax
 86034b3:	8b 55 08             	mov    0x8(%ebp),%edx
 86034b6:	83 c2 46             	add    $0x46,%edx
 86034b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 86034bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 86034c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86034c4:	89 04 24             	mov    %eax,(%esp)
 86034c7:	e8 d4 a3 a7 ff       	call   807d8a0 <memcpy@plt>
 86034cc:	eb 27                	jmp    86034f5 <_ZNK9SkillSlot23get_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x6b>
 86034ce:	8b 45 14             	mov    0x14(%ebp),%eax
 86034d1:	83 f8 01             	cmp    $0x1,%eax
 86034d4:	75 1f                	jne    86034f5 <_ZNK9SkillSlot23get_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x6b>
 86034d6:	8b 45 10             	mov    0x10(%ebp),%eax
 86034d9:	8b 55 08             	mov    0x8(%ebp),%edx
 86034dc:	81 c2 de 01 00 00    	add    $0x1de,%edx
 86034e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 86034e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 86034ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 86034ed:	89 04 24             	mov    %eax,(%esp)
 86034f0:	e8 ab a3 a7 ff       	call   807d8a0 <memcpy@plt>
 86034f5:	c9                   	leave
 86034f6:	c3                   	ret
 86034f7:	90                   	nop

```

```c
// SkillSlot::get_skill_slot_at_index @ 0x860348a

/* SkillSlot::get_skill_slot_at_index(char*, int, ENUM_SKILL_TREE_KIND) const */

void __thiscall
SkillSlot::get_skill_slot_at_index(SkillSlot *this,void *param_1,uint param_2,int param_4)

{
  if (0x198 < param_2) {
    param_2 = 0x198;
  }
  if ((param_4 == -1) || (param_4 == 0)) {
    memcpy(param_1,this + 0x46,param_2);
  }
  else if (param_4 == 1) {
    memcpy(param_1,this + 0x1de,param_2);
  }
  return;
}

```

---

## get_skillslot_buf

```asm
// === 086067de SkillSlot::get_skillslot_buf  [0x086067de-0x8606811] ===
 86067de:	55                   	push   %ebp
 86067df:	89 e5                	mov    %esp,%ebp
 86067e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86067e4:	83 f8 ff             	cmp    $0xffffffff,%eax
 86067e7:	74 07                	je     86067f0 <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND+0x12>
 86067e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 86067ec:	85 c0                	test   %eax,%eax
 86067ee:	75 08                	jne    86067f8 <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND+0x1a>
 86067f0:	8b 45 08             	mov    0x8(%ebp),%eax
 86067f3:	83 c0 46             	add    $0x46,%eax
 86067f6:	eb 17                	jmp    860680f <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND+0x31>
 86067f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86067fb:	83 f8 01             	cmp    $0x1,%eax
 86067fe:	75 0a                	jne    860680a <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND+0x2c>
 8606800:	8b 45 08             	mov    0x8(%ebp),%eax
 8606803:	05 de 01 00 00       	add    $0x1de,%eax
 8606808:	eb 05                	jmp    860680f <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND+0x31>
 860680a:	b8 00 00 00 00       	mov    $0x0,%eax
 860680f:	5d                   	pop    %ebp
 8606810:	c3                   	ret
 8606811:	90                   	nop

```

```c
// SkillSlot::get_skillslot_buf @ 0x86067de

/* SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const */

SkillSlot * __thiscall SkillSlot::get_skillslot_buf(SkillSlot *this,int param_2)

{
  if ((param_2 == -1) || (param_2 == 0)) {
    this = this + 0x46;
  }
  else if (param_2 == 1) {
    this = this + 0x1de;
  }
  else {
    this = (SkillSlot *)0x0;
  }
  return this;
}

```

---

## get_skillslot_group

```asm
// === 086049fc SkillSlot::get_skillslot_group  [0x086049fc-0x8604a85] ===
 86049fc:	55                   	push   %ebp
 86049fd:	89 e5                	mov    %esp,%ebp
 86049ff:	83 ec 10             	sub    $0x10,%esp
 8604a02:	c7 45 fc 06 00 00 00 	movl   $0x6,-0x4(%ebp)
 8604a09:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 8604a0d:	7f 09                	jg     8604a18 <_ZNK9SkillSlot19get_skillslot_groupEi+0x1c>
 8604a0f:	c7 45 fc ff ff ff ff 	movl   $0xffffffff,-0x4(%ebp)
 8604a16:	eb 52                	jmp    8604a6a <_ZNK9SkillSlot19get_skillslot_groupEi+0x6e>
 8604a18:	83 7d 0c 35          	cmpl   $0x35,0xc(%ebp)
 8604a1c:	7f 09                	jg     8604a27 <_ZNK9SkillSlot19get_skillslot_groupEi+0x2b>
 8604a1e:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8604a25:	eb 43                	jmp    8604a6a <_ZNK9SkillSlot19get_skillslot_groupEi+0x6e>
 8604a27:	83 7d 0c 65          	cmpl   $0x65,0xc(%ebp)
 8604a2b:	7f 09                	jg     8604a36 <_ZNK9SkillSlot19get_skillslot_groupEi+0x3a>
 8604a2d:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 8604a34:	eb 34                	jmp    8604a6a <_ZNK9SkillSlot19get_skillslot_groupEi+0x6e>
 8604a36:	81 7d 0c 95 00 00 00 	cmpl   $0x95,0xc(%ebp)
 8604a3d:	7f 09                	jg     8604a48 <_ZNK9SkillSlot19get_skillslot_groupEi+0x4c>
 8604a3f:	c7 45 fc 02 00 00 00 	movl   $0x2,-0x4(%ebp)
 8604a46:	eb 22                	jmp    8604a6a <_ZNK9SkillSlot19get_skillslot_groupEi+0x6e>
 8604a48:	81 7d 0c c5 00 00 00 	cmpl   $0xc5,0xc(%ebp)
 8604a4f:	7f 09                	jg     8604a5a <_ZNK9SkillSlot19get_skillslot_groupEi+0x5e>
 8604a51:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
 8604a58:	eb 10                	jmp    8604a6a <_ZNK9SkillSlot19get_skillslot_groupEi+0x6e>
 8604a5a:	81 7d 0c cb 00 00 00 	cmpl   $0xcb,0xc(%ebp)
 8604a61:	7f 07                	jg     8604a6a <_ZNK9SkillSlot19get_skillslot_groupEi+0x6e>
 8604a63:	c7 45 fc ff ff ff ff 	movl   $0xffffffff,-0x4(%ebp)
 8604a6a:	83 7d fc 02          	cmpl   $0x2,-0x4(%ebp)
 8604a6e:	75 10                	jne    8604a80 <_ZNK9SkillSlot19get_skillslot_groupEi+0x84>
 8604a70:	81 7d 0c 89 00 00 00 	cmpl   $0x89,0xc(%ebp)
 8604a77:	7e 07                	jle    8604a80 <_ZNK9SkillSlot19get_skillslot_groupEi+0x84>
 8604a79:	c7 45 fc 04 00 00 00 	movl   $0x4,-0x4(%ebp)
 8604a80:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8604a83:	c9                   	leave
 8604a84:	c3                   	ret
 8604a85:	90                   	nop

```

```c
// SkillSlot::get_skillslot_group @ 0x86049fc

/* SkillSlot::get_skillslot_group(int) const */

int __thiscall SkillSlot::get_skillslot_group(SkillSlot *this,int param_1)

{
  undefined4 local_8;
  
  local_8 = 6;
  if (param_1 < 6) {
    local_8 = -1;
  }
  else if (param_1 < 0x36) {
    local_8 = 0;
  }
  else if (param_1 < 0x66) {
    local_8 = 1;
  }
  else if (param_1 < 0x96) {
    local_8 = 2;
  }
  else if (param_1 < 0xc6) {
    local_8 = 3;
  }
  else if (param_1 < 0xcc) {
    local_8 = -1;
  }
  if ((local_8 == 2) && (0x89 < param_1)) {
    local_8 = 4;
  }
  return local_8;
}

```

---

## get_skillslot_no

```asm
// === 08604a86 SkillSlot::get_skillslot_no  [0x08604a86-0x8604c01] ===
 8604a86:	55                   	push   %ebp
 8604a87:	89 e5                	mov    %esp,%ebp
 8604a89:	83 ec 48             	sub    $0x48,%esp
 8604a8c:	8b 45 18             	mov    0x18(%ebp),%eax
 8604a8f:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8604a92:	8b 45 08             	mov    0x8(%ebp),%eax
 8604a95:	8b 00                	mov    (%eax),%eax
 8604a97:	85 c0                	test   %eax,%eax
 8604a99:	75 0a                	jne    8604aa5 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x1f>
 8604a9b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8604aa0:	e9 5b 01 00 00       	jmp    8604c00 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x17a>
 8604aa5:	8b 45 14             	mov    0x14(%ebp),%eax
 8604aa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604aac:	8b 45 08             	mov    0x8(%ebp),%eax
 8604aaf:	89 04 24             	mov    %eax,(%esp)
 8604ab2:	e8 27 1d 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8604ab7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8604aba:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8604abe:	75 0a                	jne    8604aca <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x44>
 8604ac0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8604ac5:	e9 36 01 00 00       	jmp    8604c00 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x17a>
 8604aca:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 8604ace:	74 1d                	je     8604aed <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x67>
 8604ad0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8604ad3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604ad7:	8b 45 08             	mov    0x8(%ebp),%eax
 8604ada:	89 04 24             	mov    %eax,(%esp)
 8604add:	e8 76 42 00 00       	call   8608d58 <_ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi>
 8604ae2:	84 c0                	test   %al,%al
 8604ae4:	74 07                	je     8604aed <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x67>
 8604ae6:	b8 01 00 00 00       	mov    $0x1,%eax
 8604aeb:	eb 05                	jmp    8604af2 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x6c>
 8604aed:	b8 00 00 00 00       	mov    $0x0,%eax
 8604af2:	84 c0                	test   %al,%al
 8604af4:	74 69                	je     8604b5f <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0xd9>
 8604af6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8604afd:	eb 1f                	jmp    8604b1e <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x98>
 8604aff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8604b02:	01 c0                	add    %eax,%eax
 8604b04:	03 45 e0             	add    -0x20(%ebp),%eax
 8604b07:	0f b6 00             	movzbl (%eax),%eax
 8604b0a:	0f b6 c0             	movzbl %al,%eax
 8604b0d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8604b10:	75 08                	jne    8604b1a <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x94>
 8604b12:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8604b15:	e9 e6 00 00 00       	jmp    8604c00 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x17a>
 8604b1a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8604b1e:	83 7d ec 05          	cmpl   $0x5,-0x14(%ebp)
 8604b22:	0f 9e c0             	setle  %al
 8604b25:	84 c0                	test   %al,%al
 8604b27:	75 d6                	jne    8604aff <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x79>
 8604b29:	c7 45 f0 c6 00 00 00 	movl   $0xc6,-0x10(%ebp)
 8604b30:	eb 1f                	jmp    8604b51 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0xcb>
 8604b32:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8604b35:	01 c0                	add    %eax,%eax
 8604b37:	03 45 e0             	add    -0x20(%ebp),%eax
 8604b3a:	0f b6 00             	movzbl (%eax),%eax
 8604b3d:	0f b6 c0             	movzbl %al,%eax
 8604b40:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8604b43:	75 08                	jne    8604b4d <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0xc7>
 8604b45:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8604b48:	e9 b3 00 00 00       	jmp    8604c00 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x17a>
 8604b4d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8604b51:	81 7d f0 cb 00 00 00 	cmpl   $0xcb,-0x10(%ebp)
 8604b58:	0f 9e c0             	setle  %al
 8604b5b:	84 c0                	test   %al,%al
 8604b5d:	75 d3                	jne    8604b32 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0xac>
 8604b5f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8604b66:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8604b6d:	8b 45 10             	mov    0x10(%ebp),%eax
 8604b70:	83 f8 01             	cmp    $0x1,%eax
 8604b73:	74 27                	je     8604b9c <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x116>
 8604b75:	83 f8 01             	cmp    $0x1,%eax
 8604b78:	7f 06                	jg     8604b80 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0xfa>
 8604b7a:	85 c0                	test   %eax,%eax
 8604b7c:	74 0e                	je     8604b8c <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x106>
 8604b7e:	eb 4a                	jmp    8604bca <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x144>
 8604b80:	83 f8 02             	cmp    $0x2,%eax
 8604b83:	74 27                	je     8604bac <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x126>
 8604b85:	83 f8 03             	cmp    $0x3,%eax
 8604b88:	74 32                	je     8604bbc <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x136>
 8604b8a:	eb 3e                	jmp    8604bca <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x144>
 8604b8c:	c7 45 e4 06 00 00 00 	movl   $0x6,-0x1c(%ebp)
 8604b93:	c7 45 e8 36 00 00 00 	movl   $0x36,-0x18(%ebp)
 8604b9a:	eb 2e                	jmp    8604bca <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x144>
 8604b9c:	c7 45 e4 36 00 00 00 	movl   $0x36,-0x1c(%ebp)
 8604ba3:	c7 45 e8 66 00 00 00 	movl   $0x66,-0x18(%ebp)
 8604baa:	eb 1e                	jmp    8604bca <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x144>
 8604bac:	c7 45 e4 66 00 00 00 	movl   $0x66,-0x1c(%ebp)
 8604bb3:	c7 45 e8 96 00 00 00 	movl   $0x96,-0x18(%ebp)
 8604bba:	eb 0e                	jmp    8604bca <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x144>
 8604bbc:	c7 45 e4 96 00 00 00 	movl   $0x96,-0x1c(%ebp)
 8604bc3:	c7 45 e8 c6 00 00 00 	movl   $0xc6,-0x18(%ebp)
 8604bca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8604bcd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8604bd0:	eb 1c                	jmp    8604bee <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x168>
 8604bd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604bd5:	01 c0                	add    %eax,%eax
 8604bd7:	03 45 e0             	add    -0x20(%ebp),%eax
 8604bda:	0f b6 00             	movzbl (%eax),%eax
 8604bdd:	0f b6 c0             	movzbl %al,%eax
 8604be0:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8604be3:	75 05                	jne    8604bea <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x164>
 8604be5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604be8:	eb 16                	jmp    8604c00 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x17a>
 8604bea:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8604bee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604bf1:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8604bf4:	0f 9c c0             	setl   %al
 8604bf7:	84 c0                	test   %al,%al
 8604bf9:	75 d7                	jne    8604bd2 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb+0x14c>
 8604bfb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8604c00:	c9                   	leave
 8604c01:	c3                   	ret

```

```c
// SkillSlot::get_skillslot_no @ 0x8604a86

/* SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const */

int __thiscall
SkillSlot::get_skillslot_no
          (SkillSlot *this,uint param_1,int param_2,undefined4 param_4,char param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)this != 0) && (iVar3 = get_skillslot_buf(this,param_4), iVar3 != 0)) {
    if ((param_5 == '\0') || (cVar2 = checkComboSkillInsertQuickSlot(this,param_1), cVar2 == '\0'))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
        if (*(byte *)(local_18 * 2 + iVar3) == param_1) {
          return local_18;
        }
      }
      for (local_14 = 0xc6; local_14 < 0xcc; local_14 = local_14 + 1) {
        if (*(byte *)(local_14 * 2 + iVar3) == param_1) {
          return local_14;
        }
      }
    }
    local_20 = 0;
    local_1c = 0;
    if (param_2 == 1) {
      local_20 = 0x36;
      local_1c = 0x66;
    }
    else if (param_2 < 2) {
      if (param_2 == 0) {
        local_20 = 6;
        local_1c = 0x36;
      }
    }
    else if (param_2 == 2) {
      local_20 = 0x66;
      local_1c = 0x96;
    }
    else if (param_2 == 3) {
      local_20 = 0x96;
      local_1c = 0xc6;
    }
    for (local_10 = local_20; local_10 < local_1c; local_10 = local_10 + 1) {
      if (*(byte *)(local_10 * 2 + iVar3) == param_1) {
        return local_10;
      }
    }
  }
  return -1;
}

```

---

## get_skillslot_no_08607dba

```asm
// === 08607dba SkillSlot::get_skillslot_no  [0x08607dba-0x8607efd] ===
 8607dba:	55                   	push   %ebp
 8607dbb:	89 e5                	mov    %esp,%ebp
 8607dbd:	83 ec 24             	sub    $0x24,%esp
 8607dc0:	8b 45 18             	mov    0x18(%ebp),%eax
 8607dc3:	88 45 dc             	mov    %al,-0x24(%ebp)
 8607dc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8607dc9:	8b 00                	mov    (%eax),%eax
 8607dcb:	85 c0                	test   %eax,%eax
 8607dcd:	75 0a                	jne    8607dd9 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x1f>
 8607dcf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8607dd4:	e9 23 01 00 00       	jmp    8607efc <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x142>
 8607dd9:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8607ddd:	75 0a                	jne    8607de9 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x2f>
 8607ddf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8607de4:	e9 13 01 00 00       	jmp    8607efc <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x142>
 8607de9:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
 8607ded:	74 33                	je     8607e22 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x68>
 8607def:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8607df6:	eb 1f                	jmp    8607e17 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x5d>
 8607df8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8607dfb:	01 c0                	add    %eax,%eax
 8607dfd:	03 45 0c             	add    0xc(%ebp),%eax
 8607e00:	0f b6 00             	movzbl (%eax),%eax
 8607e03:	0f b6 c0             	movzbl %al,%eax
 8607e06:	3b 45 10             	cmp    0x10(%ebp),%eax
 8607e09:	75 08                	jne    8607e13 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x59>
 8607e0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8607e0e:	e9 e9 00 00 00       	jmp    8607efc <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x142>
 8607e13:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8607e17:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 8607e1b:	0f 9e c0             	setle  %al
 8607e1e:	84 c0                	test   %al,%al
 8607e20:	75 d6                	jne    8607df8 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x3e>
 8607e22:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8607e29:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8607e30:	8b 45 14             	mov    0x14(%ebp),%eax
 8607e33:	83 f8 01             	cmp    $0x1,%eax
 8607e36:	74 27                	je     8607e5f <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xa5>
 8607e38:	83 f8 01             	cmp    $0x1,%eax
 8607e3b:	7f 06                	jg     8607e43 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x89>
 8607e3d:	85 c0                	test   %eax,%eax
 8607e3f:	74 0e                	je     8607e4f <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x95>
 8607e41:	eb 4a                	jmp    8607e8d <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xd3>
 8607e43:	83 f8 02             	cmp    $0x2,%eax
 8607e46:	74 27                	je     8607e6f <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xb5>
 8607e48:	83 f8 03             	cmp    $0x3,%eax
 8607e4b:	74 32                	je     8607e7f <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xc5>
 8607e4d:	eb 3e                	jmp    8607e8d <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xd3>
 8607e4f:	c7 45 ec 06 00 00 00 	movl   $0x6,-0x14(%ebp)
 8607e56:	c7 45 f0 36 00 00 00 	movl   $0x36,-0x10(%ebp)
 8607e5d:	eb 2e                	jmp    8607e8d <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xd3>
 8607e5f:	c7 45 ec 36 00 00 00 	movl   $0x36,-0x14(%ebp)
 8607e66:	c7 45 f0 66 00 00 00 	movl   $0x66,-0x10(%ebp)
 8607e6d:	eb 1e                	jmp    8607e8d <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xd3>
 8607e6f:	c7 45 ec 66 00 00 00 	movl   $0x66,-0x14(%ebp)
 8607e76:	c7 45 f0 96 00 00 00 	movl   $0x96,-0x10(%ebp)
 8607e7d:	eb 0e                	jmp    8607e8d <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xd3>
 8607e7f:	c7 45 ec 96 00 00 00 	movl   $0x96,-0x14(%ebp)
 8607e86:	c7 45 f0 c6 00 00 00 	movl   $0xc6,-0x10(%ebp)
 8607e8d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8607e90:	89 45 f8             	mov    %eax,-0x8(%ebp)
 8607e93:	eb 1c                	jmp    8607eb1 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xf7>
 8607e95:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8607e98:	01 c0                	add    %eax,%eax
 8607e9a:	03 45 0c             	add    0xc(%ebp),%eax
 8607e9d:	0f b6 00             	movzbl (%eax),%eax
 8607ea0:	0f b6 c0             	movzbl %al,%eax
 8607ea3:	3b 45 10             	cmp    0x10(%ebp),%eax
 8607ea6:	75 05                	jne    8607ead <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xf3>
 8607ea8:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8607eab:	eb 4f                	jmp    8607efc <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x142>
 8607ead:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8607eb1:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8607eb4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8607eb7:	0f 9c c0             	setl   %al
 8607eba:	84 c0                	test   %al,%al
 8607ebc:	75 d7                	jne    8607e95 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0xdb>
 8607ebe:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
 8607ec2:	74 33                	je     8607ef7 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x13d>
 8607ec4:	c7 45 fc c6 00 00 00 	movl   $0xc6,-0x4(%ebp)
 8607ecb:	eb 1c                	jmp    8607ee9 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x12f>
 8607ecd:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8607ed0:	01 c0                	add    %eax,%eax
 8607ed2:	03 45 0c             	add    0xc(%ebp),%eax
 8607ed5:	0f b6 00             	movzbl (%eax),%eax
 8607ed8:	0f b6 c0             	movzbl %al,%eax
 8607edb:	3b 45 10             	cmp    0x10(%ebp),%eax
 8607ede:	75 05                	jne    8607ee5 <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x12b>
 8607ee0:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8607ee3:	eb 17                	jmp    8607efc <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x142>
 8607ee5:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8607ee9:	81 7d fc cb 00 00 00 	cmpl   $0xcb,-0x4(%ebp)
 8607ef0:	0f 9e c0             	setle  %al
 8607ef3:	84 c0                	test   %al,%al
 8607ef5:	75 d6                	jne    8607ecd <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib+0x113>
 8607ef7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8607efc:	c9                   	leave
 8607efd:	c3                   	ret

```

```c
// SkillSlot::get_skillslot_no @ 0x8607dba

/* SkillSlot::get_skillslot_no(_Mastered_skill*, int, int, bool) const */

int __thiscall
SkillSlot::get_skillslot_no
          (SkillSlot *this,_Mastered_skill *param_1,int param_2,int param_3,bool param_4)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)this != 0) && (param_1 != (_Mastered_skill *)0x0)) {
    if (param_4) {
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        if ((uint)(byte)param_1[local_10 * 2] == param_2) {
          return local_10;
        }
      }
    }
    local_18 = 0;
    local_14 = 0;
    if (param_3 == 1) {
      local_18 = 0x36;
      local_14 = 0x66;
    }
    else if (param_3 < 2) {
      if (param_3 == 0) {
        local_18 = 6;
        local_14 = 0x36;
      }
    }
    else if (param_3 == 2) {
      local_18 = 0x66;
      local_14 = 0x96;
    }
    else if (param_3 == 3) {
      local_18 = 0x96;
      local_14 = 0xc6;
    }
    for (local_c = local_18; local_c < local_14; local_c = local_c + 1) {
      if ((uint)(byte)param_1[local_c * 2] == param_2) {
        return local_c;
      }
    }
    if (param_4) {
      for (local_8 = 0xc6; local_8 < 0xcc; local_8 = local_8 + 1) {
        if ((uint)(byte)param_1[local_8 * 2] == param_2) {
          return local_8;
        }
      }
    }
  }
  return -1;
}

```

---

## get_temp_remain_sfp

```asm
// === 08607f1c SkillSlot::get_temp_remain_sfp  [0x08607f1c-0x8607f39] ===
 8607f1c:	55                   	push   %ebp
 8607f1d:	89 e5                	mov    %esp,%ebp
 8607f1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8607f22:	8b 00                	mov    (%eax),%eax
 8607f24:	85 c0                	test   %eax,%eax
 8607f26:	75 07                	jne    8607f2f <_ZN9SkillSlot19get_temp_remain_sfpEv+0x13>
 8607f28:	b8 00 00 00 00       	mov    $0x0,%eax
 8607f2d:	eb 08                	jmp    8607f37 <_ZN9SkillSlot19get_temp_remain_sfpEv+0x1b>
 8607f2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8607f32:	05 14 05 00 00       	add    $0x514,%eax
 8607f37:	5d                   	pop    %ebp
 8607f38:	c3                   	ret
 8607f39:	90                   	nop

```

```c
// SkillSlot::get_temp_remain_sfp @ 0x8607f1c

/* SkillSlot::get_temp_remain_sfp() */

SkillSlot * __thiscall SkillSlot::get_temp_remain_sfp(SkillSlot *this)

{
  SkillSlot *pSVar1;
  
  if (*(int *)this == 0) {
    pSVar1 = (SkillSlot *)0x0;
  }
  else {
    pSVar1 = this + 0x514;
  }
  return pSVar1;
}

```

---

## get_temp_remain_sp

```asm
// === 08607efe SkillSlot::get_temp_remain_sp  [0x08607efe-0x8607f1b] ===
 8607efe:	55                   	push   %ebp
 8607eff:	89 e5                	mov    %esp,%ebp
 8607f01:	8b 45 08             	mov    0x8(%ebp),%eax
 8607f04:	8b 00                	mov    (%eax),%eax
 8607f06:	85 c0                	test   %eax,%eax
 8607f08:	75 07                	jne    8607f11 <_ZN9SkillSlot18get_temp_remain_spEv+0x13>
 8607f0a:	b8 00 00 00 00       	mov    $0x0,%eax
 8607f0f:	eb 08                	jmp    8607f19 <_ZN9SkillSlot18get_temp_remain_spEv+0x1b>
 8607f11:	8b 45 08             	mov    0x8(%ebp),%eax
 8607f14:	05 10 05 00 00       	add    $0x510,%eax
 8607f19:	5d                   	pop    %ebp
 8607f1a:	c3                   	ret
 8607f1b:	90                   	nop

```

```c
// SkillSlot::get_temp_remain_sp @ 0x8607efe

/* SkillSlot::get_temp_remain_sp() */

SkillSlot * __thiscall SkillSlot::get_temp_remain_sp(SkillSlot *this)

{
  SkillSlot *pSVar1;
  
  if (*(int *)this == 0) {
    pSVar1 = (SkillSlot *)0x0;
  }
  else {
    pSVar1 = this + 0x510;
  }
  return pSVar1;
}

```

---

## get_temp_skill_slot

```asm
// === 08607f3a SkillSlot::get_temp_skill_slot  [0x08607f3a-0x8607f57] ===
 8607f3a:	55                   	push   %ebp
 8607f3b:	89 e5                	mov    %esp,%ebp
 8607f3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8607f40:	8b 00                	mov    (%eax),%eax
 8607f42:	85 c0                	test   %eax,%eax
 8607f44:	75 07                	jne    8607f4d <_ZN9SkillSlot19get_temp_skill_slotEv+0x13>
 8607f46:	b8 00 00 00 00       	mov    $0x0,%eax
 8607f4b:	eb 08                	jmp    8607f55 <_ZN9SkillSlot19get_temp_skill_slotEv+0x1b>
 8607f4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8607f50:	05 76 03 00 00       	add    $0x376,%eax
 8607f55:	5d                   	pop    %ebp
 8607f56:	c3                   	ret
 8607f57:	90                   	nop

```

```c
// SkillSlot::get_temp_skill_slot @ 0x8607f3a

/* SkillSlot::get_temp_skill_slot() */

SkillSlot * __thiscall SkillSlot::get_temp_skill_slot(SkillSlot *this)

{
  SkillSlot *pSVar1;
  
  if (*(int *)this == 0) {
    pSVar1 = (SkillSlot *)0x0;
  }
  else {
    pSVar1 = this + 0x376;
  }
  return pSVar1;
}

```

---

## growtype_skill

```asm
// === 086040bc SkillSlot::growtype_skill  [0x086040bc-0x8604323] ===
 86040bc:	55                   	push   %ebp
 86040bd:	89 e5                	mov    %esp,%ebp
 86040bf:	53                   	push   %ebx
 86040c0:	83 ec 34             	sub    $0x34,%esp
 86040c3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 86040ca:	e8 cc 80 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 86040cf:	8b 55 10             	mov    0x10(%ebp),%edx
 86040d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 86040d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 86040d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 86040dd:	89 04 24             	mov    %eax,(%esp)
 86040e0:	e8 bd bc d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 86040e5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86040e8:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 86040ec:	75 44                	jne    8604132 <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x76>
 86040ee:	8b 45 10             	mov    0x10(%ebp),%eax
 86040f1:	89 44 24 18          	mov    %eax,0x18(%esp)
 86040f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86040f8:	89 44 24 14          	mov    %eax,0x14(%esp)
 86040fc:	c7 44 24 10 d8 d2 cd 	movl   $0x8cdd2d8,0x10(%esp)
 8604103:	08 
 8604104:	c7 44 24 0c 0b 02 00 	movl   $0x20b,0xc(%esp)
 860410b:	00 
 860410c:	c7 44 24 08 20 e7 cd 	movl   $0x8cde720,0x8(%esp)
 8604113:	08 
 8604114:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 860411b:	08 
 860411c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8604123:	e8 e2 fa 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8604128:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 860412d:	e9 ec 01 00 00       	jmp    860431e <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x262>
 8604132:	8b 45 08             	mov    0x8(%ebp),%eax
 8604135:	8b 00                	mov    (%eax),%eax
 8604137:	85 c0                	test   %eax,%eax
 8604139:	75 0a                	jne    8604145 <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x89>
 860413b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8604140:	e9 d9 01 00 00       	jmp    860431e <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x262>
 8604145:	8b 45 18             	mov    0x18(%ebp),%eax
 8604148:	89 44 24 04          	mov    %eax,0x4(%esp)
 860414c:	8b 45 08             	mov    0x8(%ebp),%eax
 860414f:	89 04 24             	mov    %eax,(%esp)
 8604152:	e8 87 26 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8604157:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860415a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 860415e:	75 0a                	jne    860416a <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0xae>
 8604160:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8604165:	e9 b4 01 00 00       	jmp    860431e <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x262>
 860416a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860416d:	89 04 24             	mov    %eax,(%esp)
 8604170:	e8 21 0a d7 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8604175:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8604178:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 860417f:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8604183:	0f 85 aa 00 00 00    	jne    8604233 <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x177>
 8604189:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8604190:	00 
 8604191:	8b 45 18             	mov    0x18(%ebp),%eax
 8604194:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8604198:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860419b:	89 44 24 08          	mov    %eax,0x8(%esp)
 860419f:	8b 45 10             	mov    0x10(%ebp),%eax
 86041a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86041a6:	8b 45 08             	mov    0x8(%ebp),%eax
 86041a9:	89 04 24             	mov    %eax,(%esp)
 86041ac:	e8 d5 08 00 00       	call   8604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>
 86041b1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86041b4:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 86041b8:	74 19                	je     86041d3 <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x117>
 86041ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86041bd:	01 c0                	add    %eax,%eax
 86041bf:	03 45 ec             	add    -0x14(%ebp),%eax
 86041c2:	c6 00 00             	movb   $0x0,(%eax)
 86041c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86041c8:	01 c0                	add    %eax,%eax
 86041ca:	03 45 ec             	add    -0x14(%ebp),%eax
 86041cd:	8b 55 14             	mov    0x14(%ebp),%edx
 86041d0:	88 50 01             	mov    %dl,0x1(%eax)
 86041d3:	8b 45 08             	mov    0x8(%ebp),%eax
 86041d6:	8b 00                	mov    (%eax),%eax
 86041d8:	85 c0                	test   %eax,%eax
 86041da:	0f 84 3b 01 00 00    	je     860431b <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x25f>
 86041e0:	8b 45 08             	mov    0x8(%ebp),%eax
 86041e3:	8b 00                	mov    (%eax),%eax
 86041e5:	89 04 24             	mov    %eax,(%esp)
 86041e8:	e8 4f b1 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 86041ed:	89 c3                	mov    %eax,%ebx
 86041ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86041f2:	8b 00                	mov    (%eax),%eax
 86041f4:	89 04 24             	mov    %eax,(%esp)
 86041f7:	e8 24 9d af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86041fc:	8b 55 08             	mov    0x8(%ebp),%edx
 86041ff:	8b 12                	mov    (%edx),%edx
 8604201:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8604207:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 860420e:	00 
 860420f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8604216:	00 
 8604217:	8b 55 10             	mov    0x10(%ebp),%edx
 860421a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860421e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8604222:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604226:	89 0c 24             	mov    %ecx,(%esp)
 8604229:	e8 40 e9 07 00       	call   8682b6e <_ZN15cUserHistoryLog8SkillDelEiiii15eSkillDelReason>
 860422e:	e9 e8 00 00 00       	jmp    860431b <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x25f>
 8604233:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 860423a:	00 
 860423b:	8b 45 18             	mov    0x18(%ebp),%eax
 860423e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8604242:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8604245:	89 44 24 08          	mov    %eax,0x8(%esp)
 8604249:	8b 45 10             	mov    0x10(%ebp),%eax
 860424c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604250:	8b 45 08             	mov    0x8(%ebp),%eax
 8604253:	89 04 24             	mov    %eax,(%esp)
 8604256:	e8 2b 08 00 00       	call   8604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>
 860425b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860425e:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8604262:	74 10                	je     8604274 <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x1b8>
 8604264:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604267:	01 c0                	add    %eax,%eax
 8604269:	03 45 ec             	add    -0x14(%ebp),%eax
 860426c:	8b 55 14             	mov    0x14(%ebp),%edx
 860426f:	88 50 01             	mov    %dl,0x1(%eax)
 8604272:	eb 51                	jmp    86042c5 <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x209>
 8604274:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8604277:	89 04 24             	mov    %eax,(%esp)
 860427a:	e8 e7 50 00 00       	call   8609366 <_ZNK6CSkill15is_active_skillEv>
 860427f:	0f b6 c0             	movzbl %al,%eax
 8604282:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8604289:	00 
 860428a:	8b 55 18             	mov    0x18(%ebp),%edx
 860428d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8604291:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8604295:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8604298:	89 44 24 08          	mov    %eax,0x8(%esp)
 860429c:	8b 45 10             	mov    0x10(%ebp),%eax
 860429f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86042a3:	8b 45 08             	mov    0x8(%ebp),%eax
 86042a6:	89 04 24             	mov    %eax,(%esp)
 86042a9:	e8 76 00 00 00       	call   8604324 <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi>
 86042ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86042b1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86042b5:	78 0e                	js     86042c5 <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x209>
 86042b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86042ba:	01 c0                	add    %eax,%eax
 86042bc:	03 45 ec             	add    -0x14(%ebp),%eax
 86042bf:	8b 55 14             	mov    0x14(%ebp),%edx
 86042c2:	88 50 01             	mov    %dl,0x1(%eax)
 86042c5:	8b 45 08             	mov    0x8(%ebp),%eax
 86042c8:	8b 00                	mov    (%eax),%eax
 86042ca:	85 c0                	test   %eax,%eax
 86042cc:	74 4d                	je     860431b <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND+0x25f>
 86042ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86042d1:	8b 00                	mov    (%eax),%eax
 86042d3:	89 04 24             	mov    %eax,(%esp)
 86042d6:	e8 61 b0 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 86042db:	89 c3                	mov    %eax,%ebx
 86042dd:	8b 45 08             	mov    0x8(%ebp),%eax
 86042e0:	8b 00                	mov    (%eax),%eax
 86042e2:	89 04 24             	mov    %eax,(%esp)
 86042e5:	e8 36 9c af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 86042ea:	8b 55 08             	mov    0x8(%ebp),%edx
 86042ed:	8b 12                	mov    (%edx),%edx
 86042ef:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 86042f5:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 86042fc:	00 
 86042fd:	8b 55 14             	mov    0x14(%ebp),%edx
 8604300:	89 54 24 10          	mov    %edx,0x10(%esp)
 8604304:	8b 55 10             	mov    0x10(%ebp),%edx
 8604307:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860430b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 860430f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604313:	89 0c 24             	mov    %ecx,(%esp)
 8604316:	e8 13 e8 07 00       	call   8682b2e <_ZN15cUserHistoryLog8SkillAddEiiii15eSkillAddReason>
 860431b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860431e:	83 c4 34             	add    $0x34,%esp
 8604321:	5b                   	pop    %ebx
 8604322:	5d                   	pop    %ebp
 8604323:	c3                   	ret

```

```c
// SkillSlot::growtype_skill @ 0x86040bc

/* SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND) */

int __thiscall
SkillSlot::growtype_skill
          (SkillSlot *this,int param_1,undefined4 param_2,int param_3,undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  CSkill *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_10;
  
  iVar2 = G_CDataManager();
  uVar3 = param_2;
  this_00 = (CSkill *)CDataManager::find_skill(iVar2,param_1);
  if (this_00 == (CSkill *)0x0) {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "int SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)",0x20b,
               "G_CDataManager()->find_skill( %d, %d )",param_1,param_2);
    local_10 = -1;
  }
  else if (*(int *)this == 0) {
    local_10 = -1;
  }
  else {
    iVar2 = get_skillslot_buf(this,param_5,uVar3);
    if (iVar2 == 0) {
      local_10 = -1;
    }
    else {
      uVar3 = CSkill::get_group(this_00);
      if (param_3 == 0) {
        local_10 = get_skillslot_no(this,param_2,uVar3,param_5,1);
        if (local_10 != -1) {
          *(undefined1 *)(local_10 * 2 + iVar2) = 0;
          *(undefined1 *)(local_10 * 2 + iVar2 + 1) = 0;
        }
        if (*(int *)this != 0) {
          uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
          uVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
          cUserHistoryLog::SkillDel
                    ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar4,uVar3,param_2,0,0);
        }
      }
      else {
        local_10 = get_skillslot_no(this,param_2,uVar3,param_5,1);
        if (local_10 == -1) {
          uVar1 = CSkill::is_active_skill(this_00);
          local_10 = insert_skill(this,param_2,uVar3,uVar1,param_5,1);
          if (-1 < local_10) {
            *(char *)(local_10 * 2 + iVar2 + 1) = (char)param_3;
          }
        }
        else {
          *(char *)(local_10 * 2 + iVar2 + 1) = (char)param_3;
        }
        if (*(int *)this != 0) {
          uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
          uVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
          cUserHistoryLog::SkillAdd
                    ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar4,uVar3,param_2,param_3,1);
        }
      }
    }
  }
  return local_10;
}

```

---

## initialize_sfp_skill

```asm
// === 08608a1e SkillSlot::initialize_sfp_skill  [0x08608a1e-0x8608b1d] ===
 8608a1e:	55                   	push   %ebp
 8608a1f:	89 e5                	mov    %esp,%ebp
 8608a21:	53                   	push   %ebx
 8608a22:	83 ec 14             	sub    $0x14,%esp
 8608a25:	8b 45 08             	mov    0x8(%ebp),%eax
 8608a28:	8b 00                	mov    (%eax),%eax
 8608a2a:	85 c0                	test   %eax,%eax
 8608a2c:	0f 84 e1 00 00 00    	je     8608b13 <_ZN9SkillSlot20initialize_sfp_skillEv+0xf5>
 8608a32:	8b 45 08             	mov    0x8(%ebp),%eax
 8608a35:	8b 00                	mov    (%eax),%eax
 8608a37:	89 04 24             	mov    %eax,(%esp)
 8608a3a:	e8 79 18 ad ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8608a3f:	83 f8 31             	cmp    $0x31,%eax
 8608a42:	0f 9e c0             	setle  %al
 8608a45:	84 c0                	test   %al,%al
 8608a47:	0f 85 c9 00 00 00    	jne    8608b16 <_ZN9SkillSlot20initialize_sfp_skillEv+0xf8>
 8608a4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8608a50:	8b 00                	mov    (%eax),%eax
 8608a52:	89 04 24             	mov    %eax,(%esp)
 8608a55:	e8 c6 54 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8608a5a:	0f be d8             	movsbl %al,%ebx
 8608a5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8608a60:	8b 00                	mov    (%eax),%eax
 8608a62:	89 04 24             	mov    %eax,(%esp)
 8608a65:	e8 d6 66 c2 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 8608a6a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8608a71:	00 
 8608a72:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8608a76:	89 04 24             	mov    %eax,(%esp)
 8608a79:	e8 fa c3 ff ff       	call   8604e78 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND>
 8608a7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8608a81:	8b 00                	mov    (%eax),%eax
 8608a83:	89 04 24             	mov    %eax,(%esp)
 8608a86:	e8 95 54 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8608a8b:	0f be d8             	movsbl %al,%ebx
 8608a8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8608a91:	8b 00                	mov    (%eax),%eax
 8608a93:	89 04 24             	mov    %eax,(%esp)
 8608a96:	e8 a5 66 c2 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 8608a9b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8608aa2:	00 
 8608aa3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8608aa7:	89 04 24             	mov    %eax,(%esp)
 8608aaa:	e8 c9 c3 ff ff       	call   8604e78 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND>
 8608aaf:	8b 45 08             	mov    0x8(%ebp),%eax
 8608ab2:	8b 00                	mov    (%eax),%eax
 8608ab4:	89 04 24             	mov    %eax,(%esp)
 8608ab7:	e8 fc 17 ad ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8608abc:	8d 58 cf             	lea    -0x31(%eax),%ebx
 8608abf:	8b 45 08             	mov    0x8(%ebp),%eax
 8608ac2:	8b 00                	mov    (%eax),%eax
 8608ac4:	89 04 24             	mov    %eax,(%esp)
 8608ac7:	e8 74 66 c2 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 8608acc:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8608ad3:	00 
 8608ad4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8608ad8:	89 04 24             	mov    %eax,(%esp)
 8608adb:	e8 b0 aa ff ff       	call   8603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>
 8608ae0:	8b 45 08             	mov    0x8(%ebp),%eax
 8608ae3:	8b 00                	mov    (%eax),%eax
 8608ae5:	89 04 24             	mov    %eax,(%esp)
 8608ae8:	e8 cb 17 ad ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8608aed:	8d 58 cf             	lea    -0x31(%eax),%ebx
 8608af0:	8b 45 08             	mov    0x8(%ebp),%eax
 8608af3:	8b 00                	mov    (%eax),%eax
 8608af5:	89 04 24             	mov    %eax,(%esp)
 8608af8:	e8 43 66 c2 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 8608afd:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8608b04:	00 
 8608b05:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8608b09:	89 04 24             	mov    %eax,(%esp)
 8608b0c:	e8 7f aa ff ff       	call   8603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>
 8608b11:	eb 04                	jmp    8608b17 <_ZN9SkillSlot20initialize_sfp_skillEv+0xf9>
 8608b13:	90                   	nop
 8608b14:	eb 01                	jmp    8608b17 <_ZN9SkillSlot20initialize_sfp_skillEv+0xf9>
 8608b16:	90                   	nop
 8608b17:	83 c4 14             	add    $0x14,%esp
 8608b1a:	5b                   	pop    %ebx
 8608b1b:	5d                   	pop    %ebp
 8608b1c:	c3                   	ret
 8608b1d:	90                   	nop

```

```c
// SkillSlot::initialize_sfp_skill @ 0x8608a1e

/* SkillSlot::initialize_sfp_skill() */

void __thiscall SkillSlot::initialize_sfp_skill(SkillSlot *this)

{
  char cVar1;
  int iVar2;
  SkillSlot *pSVar3;
  
  if ((*(int *)this != 0) &&
     (iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this), 0x31 < iVar2)) {
    cVar1 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(*(CUserCharacInfo **)this);
    clear_sfp_skills(pSVar3,(int)cVar1,0);
    cVar1 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(*(CUserCharacInfo **)this);
    clear_sfp_skills(pSVar3,(int)cVar1,1);
    iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(*(CUserCharacInfo **)this);
    set_remain_sfp_at_index(pSVar3,iVar2 + -0x31,2);
    iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(*(CUserCharacInfo **)this);
    set_remain_sfp_at_index(pSVar3,iVar2 + -0x31,3);
  }
  return;
}

```

---

## insert_skill

```asm
// === 08604324 SkillSlot::insert_skill  [0x08604324-0x86043b3] ===
 8604324:	55                   	push   %ebp
 8604325:	89 e5                	mov    %esp,%ebp
 8604327:	83 ec 48             	sub    $0x48,%esp
 860432a:	8b 45 14             	mov    0x14(%ebp),%eax
 860432d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8604330:	8b 45 08             	mov    0x8(%ebp),%eax
 8604333:	8b 00                	mov    (%eax),%eax
 8604335:	85 c0                	test   %eax,%eax
 8604337:	75 07                	jne    8604340 <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi+0x1c>
 8604339:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 860433e:	eb 72                	jmp    86043b2 <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi+0x8e>
 8604340:	8b 45 18             	mov    0x18(%ebp),%eax
 8604343:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604347:	8b 45 08             	mov    0x8(%ebp),%eax
 860434a:	89 04 24             	mov    %eax,(%esp)
 860434d:	e8 8c 24 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8604352:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8604355:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8604359:	75 07                	jne    8604362 <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi+0x3e>
 860435b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8604360:	eb 50                	jmp    86043b2 <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi+0x8e>
 8604362:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8604366:	89 44 24 10          	mov    %eax,0x10(%esp)
 860436a:	8b 45 18             	mov    0x18(%ebp),%eax
 860436d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8604371:	8b 45 10             	mov    0x10(%ebp),%eax
 8604374:	89 44 24 08          	mov    %eax,0x8(%esp)
 8604378:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860437f:	00 
 8604380:	8b 45 08             	mov    0x8(%ebp),%eax
 8604383:	89 04 24             	mov    %eax,(%esp)
 8604386:	e8 fb 06 00 00       	call   8604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>
 860438b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860438e:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8604392:	74 1b                	je     86043af <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi+0x8b>
 8604394:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8604397:	01 c0                	add    %eax,%eax
 8604399:	03 45 f0             	add    -0x10(%ebp),%eax
 860439c:	8b 55 0c             	mov    0xc(%ebp),%edx
 860439f:	88 10                	mov    %dl,(%eax)
 86043a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86043a4:	01 c0                	add    %eax,%eax
 86043a6:	03 45 f0             	add    -0x10(%ebp),%eax
 86043a9:	8b 55 1c             	mov    0x1c(%ebp),%edx
 86043ac:	88 50 01             	mov    %dl,0x1(%eax)
 86043af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86043b2:	c9                   	leave
 86043b3:	c3                   	ret

```

```c
// SkillSlot::insert_skill @ 0x8604324

/* SkillSlot::insert_skill(int, int, bool, ENUM_SKILL_TREE_KIND, int) */

int __thiscall
SkillSlot::insert_skill
          (SkillSlot *this,undefined1 param_1,undefined4 param_2,undefined1 param_3,
          undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)this == 0) {
    iVar1 = -1;
  }
  else {
    iVar2 = get_skillslot_buf(this,param_5);
    if (iVar2 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = get_skillslot_no(this,0,param_2,param_5,param_3);
      if (iVar1 != -1) {
        *(undefined1 *)(iVar1 * 2 + iVar2) = param_1;
        *(undefined1 *)(iVar1 * 2 + iVar2 + 1) = param_6;
      }
    }
  }
  return iVar1;
}

```

---

## insert_skill_086080a4

```asm
// === 086080a4 SkillSlot::insert_skill  [0x086080a4-0x860811f] ===
 86080a4:	55                   	push   %ebp
 86080a5:	89 e5                	mov    %esp,%ebp
 86080a7:	83 ec 28             	sub    $0x28,%esp
 86080aa:	8b 45 18             	mov    0x18(%ebp),%eax
 86080ad:	88 45 ec             	mov    %al,-0x14(%ebp)
 86080b0:	8b 45 08             	mov    0x8(%ebp),%eax
 86080b3:	8b 00                	mov    (%eax),%eax
 86080b5:	85 c0                	test   %eax,%eax
 86080b7:	75 07                	jne    86080c0 <_ZN9SkillSlot12insert_skillEP15_Mastered_skilliibi+0x1c>
 86080b9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86080be:	eb 5d                	jmp    860811d <_ZN9SkillSlot12insert_skillEP15_Mastered_skilliibi+0x79>
 86080c0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86080c4:	75 07                	jne    86080cd <_ZN9SkillSlot12insert_skillEP15_Mastered_skilliibi+0x29>
 86080c6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86080cb:	eb 50                	jmp    860811d <_ZN9SkillSlot12insert_skillEP15_Mastered_skilliibi+0x79>
 86080cd:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
 86080d1:	89 44 24 10          	mov    %eax,0x10(%esp)
 86080d5:	8b 45 14             	mov    0x14(%ebp),%eax
 86080d8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86080dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86080e3:	00 
 86080e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86080e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86080eb:	8b 45 08             	mov    0x8(%ebp),%eax
 86080ee:	89 04 24             	mov    %eax,(%esp)
 86080f1:	e8 c4 fc ff ff       	call   8607dba <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib>
 86080f6:	89 45 fc             	mov    %eax,-0x4(%ebp)
 86080f9:	83 7d fc ff          	cmpl   $0xffffffff,-0x4(%ebp)
 86080fd:	74 1b                	je     860811a <_ZN9SkillSlot12insert_skillEP15_Mastered_skilliibi+0x76>
 86080ff:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8608102:	01 c0                	add    %eax,%eax
 8608104:	03 45 0c             	add    0xc(%ebp),%eax
 8608107:	8b 55 10             	mov    0x10(%ebp),%edx
 860810a:	88 10                	mov    %dl,(%eax)
 860810c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 860810f:	01 c0                	add    %eax,%eax
 8608111:	03 45 0c             	add    0xc(%ebp),%eax
 8608114:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8608117:	88 50 01             	mov    %dl,0x1(%eax)
 860811a:	8b 45 fc             	mov    -0x4(%ebp),%eax
 860811d:	c9                   	leave
 860811e:	c3                   	ret
 860811f:	90                   	nop

```

```c
// SkillSlot::insert_skill @ 0x86080a4

/* SkillSlot::insert_skill(_Mastered_skill*, int, int, bool, int) */

int __thiscall
SkillSlot::insert_skill
          (SkillSlot *this,_Mastered_skill *param_1,int param_2,int param_3,bool param_4,int param_5
          )

{
  int iVar1;
  
  if (*(int *)this == 0) {
    iVar1 = -1;
  }
  else if (param_1 == (_Mastered_skill *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = get_skillslot_no(this,param_1,0,param_3,param_4);
    if (iVar1 != -1) {
      param_1[iVar1 * 2] = SUB41(param_2,0);
      param_1[iVar1 * 2 + 1] = SUB41(param_5,0);
    }
  }
  return iVar1;
}

```

---

## insert_skill_with_slot_index

```asm
// === 086043b4 SkillSlot::insert_skill_with_slot_index  [0x086043b4-0x8604427] ===
 86043b4:	55                   	push   %ebp
 86043b5:	89 e5                	mov    %esp,%ebp
 86043b7:	83 ec 38             	sub    $0x38,%esp
 86043ba:	8b 45 14             	mov    0x14(%ebp),%eax
 86043bd:	88 45 e4             	mov    %al,-0x1c(%ebp)
 86043c0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86043c4:	79 07                	jns    86043cd <_ZN9SkillSlot28insert_skill_with_slot_indexEiibi+0x19>
 86043c6:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 86043cb:	eb 58                	jmp    8604425 <_ZN9SkillSlot28insert_skill_with_slot_indexEiibi+0x71>
 86043cd:	8b 45 08             	mov    0x8(%ebp),%eax
 86043d0:	8b 00                	mov    (%eax),%eax
 86043d2:	85 c0                	test   %eax,%eax
 86043d4:	75 07                	jne    86043dd <_ZN9SkillSlot28insert_skill_with_slot_indexEiibi+0x29>
 86043d6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86043db:	eb 48                	jmp    8604425 <_ZN9SkillSlot28insert_skill_with_slot_indexEiibi+0x71>
 86043dd:	8b 45 08             	mov    0x8(%ebp),%eax
 86043e0:	8b 00                	mov    (%eax),%eax
 86043e2:	89 04 24             	mov    %eax,(%esp)
 86043e5:	e8 52 af c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 86043ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 86043ee:	8b 45 08             	mov    0x8(%ebp),%eax
 86043f1:	89 04 24             	mov    %eax,(%esp)
 86043f4:	e8 e5 23 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 86043f9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86043fc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8604400:	75 07                	jne    8604409 <_ZN9SkillSlot28insert_skill_with_slot_indexEiibi+0x55>
 8604402:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8604407:	eb 1c                	jmp    8604425 <_ZN9SkillSlot28insert_skill_with_slot_indexEiibi+0x71>
 8604409:	8b 45 0c             	mov    0xc(%ebp),%eax
 860440c:	01 c0                	add    %eax,%eax
 860440e:	03 45 f4             	add    -0xc(%ebp),%eax
 8604411:	8b 55 0c             	mov    0xc(%ebp),%edx
 8604414:	88 10                	mov    %dl,(%eax)
 8604416:	8b 45 0c             	mov    0xc(%ebp),%eax
 8604419:	01 c0                	add    %eax,%eax
 860441b:	03 45 f4             	add    -0xc(%ebp),%eax
 860441e:	c6 40 01 01          	movb   $0x1,0x1(%eax)
 8604422:	8b 45 0c             	mov    0xc(%ebp),%eax
 8604425:	c9                   	leave
 8604426:	c3                   	ret
 8604427:	90                   	nop

```

```c
// SkillSlot::insert_skill_with_slot_index @ 0x86043b4

/* SkillSlot::insert_skill_with_slot_index(int, int, bool, int) */

int SkillSlot::insert_skill_with_slot_index(int param_1,int param_2,bool param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = -4;
  }
  else if (*(int *)param_1 == 0) {
    param_2 = -1;
  }
  else {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)param_1);
    iVar2 = get_skillslot_buf((SkillSlot *)param_1,uVar1);
    if (iVar2 == 0) {
      param_2 = -1;
    }
    else {
      *(char *)(param_2 * 2 + iVar2) = (char)param_2;
      *(undefined1 *)(param_2 * 2 + iVar2 + 1) = 1;
    }
  }
  return param_2;
}

```

---

## loadComboSkill

```asm
// === 08608b1e SkillSlot::loadComboSkill  [0x08608b1e-0x8608b77] ===
 8608b1e:	55                   	push   %ebp
 8608b1f:	89 e5                	mov    %esp,%ebp
 8608b21:	83 ec 28             	sub    $0x28,%esp
 8608b24:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8608b28:	74 4a                	je     8608b74 <_ZN9SkillSlot14loadComboSkillEP15SIG_COMBO_SKILL+0x56>
 8608b2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8608b2d:	8d 50 1c             	lea    0x1c(%eax),%edx
 8608b30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608b33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608b37:	89 14 24             	mov    %edx,(%esp)
 8608b3a:	e8 2d 12 ae ff       	call   80e9d6c <_ZN10ComboSkill8loadDataEP15SIG_COMBO_SKILL>
 8608b3f:	83 f0 01             	xor    $0x1,%eax
 8608b42:	84 c0                	test   %al,%al
 8608b44:	74 2f                	je     8608b75 <_ZN9SkillSlot14loadComboSkillEP15SIG_COMBO_SKILL+0x57>
 8608b46:	c7 44 24 10 00 d4 cd 	movl   $0x8cdd400,0x10(%esp)
 8608b4d:	08 
 8608b4e:	c7 44 24 0c 75 0c 00 	movl   $0xc75,0xc(%esp)
 8608b55:	00 
 8608b56:	c7 44 24 08 c0 e4 cd 	movl   $0x8cde4c0,0x8(%esp)
 8608b5d:	08 
 8608b5e:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8608b65:	08 
 8608b66:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8608b6d:	e8 98 b0 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8608b72:	eb 01                	jmp    8608b75 <_ZN9SkillSlot14loadComboSkillEP15SIG_COMBO_SKILL+0x57>
 8608b74:	90                   	nop
 8608b75:	c9                   	leave
 8608b76:	c3                   	ret
 8608b77:	90                   	nop

```

```c
// SkillSlot::loadComboSkill @ 0x8608b1e

/* SkillSlot::loadComboSkill(SIG_COMBO_SKILL*) */

void __thiscall SkillSlot::loadComboSkill(SkillSlot *this,SIG_COMBO_SKILL *param_1)

{
  char cVar1;
  
  if (param_1 != (SIG_COMBO_SKILL *)0x0) {
    cVar1 = ComboSkill::loadData((ComboSkill *)(this + 0x1c),param_1);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"skill_slot.cpp","void SkillSlot::loadComboSkill(SIG_COMBO_SKILL*)",0xc75,
                 "SkillSlot::loadComboSkill error");
    }
  }
  return;
}

```

---

## makeCheckSum

```asm
// === 086066f2 SkillSlot::makeCheckSum  [0x086066f2-0x86067b7] ===
 86066f2:	55                   	push   %ebp
 86066f3:	89 e5                	mov    %esp,%ebp
 86066f5:	83 ec 28             	sub    $0x28,%esp
 86066f8:	8b 45 08             	mov    0x8(%ebp),%eax
 86066fb:	8b 00                	mov    (%eax),%eax
 86066fd:	85 c0                	test   %eax,%eax
 86066ff:	75 0a                	jne    860670b <_ZNK9SkillSlot12makeCheckSumEi+0x19>
 8606701:	b8 00 00 00 00       	mov    $0x0,%eax
 8606706:	e9 aa 00 00 00       	jmp    86067b5 <_ZNK9SkillSlot12makeCheckSumEi+0xc3>
 860670b:	8b 45 08             	mov    0x8(%ebp),%eax
 860670e:	8b 00                	mov    (%eax),%eax
 8606710:	89 04 24             	mov    %eax,(%esp)
 8606713:	e8 24 8c c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606718:	89 44 24 04          	mov    %eax,0x4(%esp)
 860671c:	8b 45 08             	mov    0x8(%ebp),%eax
 860671f:	89 04 24             	mov    %eax,(%esp)
 8606722:	e8 b7 00 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8606727:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860672a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 860672e:	75 07                	jne    8606737 <_ZNK9SkillSlot12makeCheckSumEi+0x45>
 8606730:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8606735:	eb 7e                	jmp    86067b5 <_ZNK9SkillSlot12makeCheckSumEi+0xc3>
 8606737:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 860673e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8606745:	eb 4e                	jmp    8606795 <_ZNK9SkillSlot12makeCheckSumEi+0xa3>
 8606747:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860674a:	01 c0                	add    %eax,%eax
 860674c:	03 45 f0             	add    -0x10(%ebp),%eax
 860674f:	0f b6 00             	movzbl (%eax),%eax
 8606752:	84 c0                	test   %al,%al
 8606754:	74 3a                	je     8606790 <_ZNK9SkillSlot12makeCheckSumEi+0x9e>
 8606756:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8606759:	01 c0                	add    %eax,%eax
 860675b:	03 45 f0             	add    -0x10(%ebp),%eax
 860675e:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8606762:	0f be d0             	movsbl %al,%edx
 8606765:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8606768:	01 c0                	add    %eax,%eax
 860676a:	03 45 f0             	add    -0x10(%ebp),%eax
 860676d:	0f b6 00             	movzbl (%eax),%eax
 8606770:	0f b6 c0             	movzbl %al,%eax
 8606773:	89 54 24 08          	mov    %edx,0x8(%esp)
 8606777:	89 44 24 04          	mov    %eax,0x4(%esp)
 860677b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860677e:	89 04 24             	mov    %eax,(%esp)
 8606781:	e8 6b bc 28 00       	call   88923f1 <_Z16getSkillChecksumiii>
 8606786:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8606789:	01 d0                	add    %edx,%eax
 860678b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860678e:	eb 01                	jmp    8606791 <_ZNK9SkillSlot12makeCheckSumEi+0x9f>
 8606790:	90                   	nop
 8606791:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8606795:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 860679c:	0f 9e c0             	setle  %al
 860679f:	84 c0                	test   %al,%al
 86067a1:	75 a4                	jne    8606747 <_ZNK9SkillSlot12makeCheckSumEi+0x55>
 86067a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86067a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86067aa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86067ad:	89 04 24             	mov    %eax,(%esp)
 86067b0:	e8 90 bc 28 00       	call   8892445 <_Z19finishSkillChecksumPii>
 86067b5:	c9                   	leave
 86067b6:	c3                   	ret
 86067b7:	90                   	nop

```

```c
// SkillSlot::makeCheckSum @ 0x86066f2

/* SkillSlot::makeCheckSum(int) const */

undefined4 __thiscall SkillSlot::makeCheckSum(SkillSlot *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    local_14 = get_skillslot_buf(this,uVar1);
    if (local_14 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      local_18 = 0;
      for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
        if (*(char *)(local_10 * 2 + local_14) != '\0') {
          iVar2 = getSkillChecksum(local_10,(uint)*(byte *)(local_10 * 2 + local_14),
                                   (int)*(char *)(local_10 * 2 + local_14 + 1));
          local_18 = iVar2 + local_18;
        }
      }
      uVar1 = finishSkillChecksum(&local_18,param_1);
    }
  }
  return uVar1;
}

```

---

## master_new_guild_skill

```asm
// === 086037c6 SkillSlot::master_new_guild_skill  [0x086037c6-0x8603a73] ===
 86037c6:	55                   	push   %ebp
 86037c7:	89 e5                	mov    %esp,%ebp
 86037c9:	56                   	push   %esi
 86037ca:	53                   	push   %ebx
 86037cb:	83 ec 40             	sub    $0x40,%esp
 86037ce:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86037d1:	0f b6 40 44          	movzbl 0x44(%eax),%eax
 86037d5:	3c 0f                	cmp    $0xf,%al
 86037d7:	76 4b                	jbe    8603824 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x5e>
 86037d9:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86037dc:	0f b6 40 44          	movzbl 0x44(%eax),%eax
 86037e0:	0f b6 d0             	movzbl %al,%edx
 86037e3:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86037e6:	89 54 24 18          	mov    %edx,0x18(%esp)
 86037ea:	89 44 24 14          	mov    %eax,0x14(%esp)
 86037ee:	c7 44 24 10 ac d2 cd 	movl   $0x8cdd2ac,0x10(%esp)
 86037f5:	08 
 86037f6:	c7 44 24 0c 02 01 00 	movl   $0x102,0xc(%esp)
 86037fd:	00 
 86037fe:	c7 44 24 08 c0 e7 cd 	movl   $0x8cde7c0,0x8(%esp)
 8603805:	08 
 8603806:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 860380d:	08 
 860380e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8603815:	e8 f0 03 4d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 860381a:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 860381f:	e9 49 02 00 00       	jmp    8603a6d <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x2a7>
 8603824:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 860382b:	e8 6b 89 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8603830:	8b 55 0c             	mov    0xc(%ebp),%edx
 8603833:	89 54 24 08          	mov    %edx,0x8(%esp)
 8603837:	8b 55 10             	mov    0x10(%ebp),%edx
 860383a:	89 54 24 04          	mov    %edx,0x4(%esp)
 860383e:	89 04 24             	mov    %eax,(%esp)
 8603841:	e8 5c c5 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8603846:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8603849:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 860384d:	75 0a                	jne    8603859 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x93>
 860384f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8603854:	e9 14 02 00 00       	jmp    8603a6d <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x2a7>
 8603859:	8b 45 28             	mov    0x28(%ebp),%eax
 860385c:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8603862:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8603865:	0f b6 40 44          	movzbl 0x44(%eax),%eax
 8603869:	0f b6 c0             	movzbl %al,%eax
 860386c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 860386f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8603876:	eb 42                	jmp    86038ba <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0xf4>
 8603878:	8b 55 f0             	mov    -0x10(%ebp),%edx
 860387b:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 860387e:	89 d0                	mov    %edx,%eax
 8603880:	c1 e0 02             	shl    $0x2,%eax
 8603883:	01 d0                	add    %edx,%eax
 8603885:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8603888:	83 c0 40             	add    $0x40,%eax
 860388b:	8b 40 05             	mov    0x5(%eax),%eax
 860388e:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8603891:	75 23                	jne    86038b6 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0xf0>
 8603893:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8603896:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8603899:	89 d0                	mov    %edx,%eax
 860389b:	c1 e0 02             	shl    $0x2,%eax
 860389e:	01 d0                	add    %edx,%eax
 86038a0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86038a3:	83 c0 49             	add    $0x49,%eax
 86038a6:	0f b6 00             	movzbl (%eax),%eax
 86038a9:	0f be c0             	movsbl %al,%eax
 86038ac:	8d 50 01             	lea    0x1(%eax),%edx
 86038af:	8b 45 28             	mov    0x28(%ebp),%eax
 86038b2:	89 10                	mov    %edx,(%eax)
 86038b4:	eb 11                	jmp    86038c7 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x101>
 86038b6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86038ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86038bd:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 86038c0:	0f 9c c0             	setl   %al
 86038c3:	84 c0                	test   %al,%al
 86038c5:	75 b1                	jne    8603878 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0xb2>
 86038c7:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 86038cb:	7f 2a                	jg     86038f7 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x131>
 86038cd:	8b 45 14             	mov    0x14(%ebp),%eax
 86038d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86038d4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86038d7:	89 04 24             	mov    %eax,(%esp)
 86038da:	e8 29 13 d7 ff       	call   8374c08 <_ZNK6CSkill18get_type_max_levelEi>
 86038df:	8b 55 28             	mov    0x28(%ebp),%edx
 86038e2:	8b 12                	mov    (%edx),%edx
 86038e4:	39 d0                	cmp    %edx,%eax
 86038e6:	0f 9c c0             	setl   %al
 86038e9:	84 c0                	test   %al,%al
 86038eb:	74 55                	je     8603942 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x17c>
 86038ed:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 86038f2:	e9 76 01 00 00       	jmp    8603a6d <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x2a7>
 86038f7:	8b 45 18             	mov    0x18(%ebp),%eax
 86038fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 86038fe:	8b 45 14             	mov    0x14(%ebp),%eax
 8603901:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603905:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8603908:	89 04 24             	mov    %eax,(%esp)
 860390b:	e8 48 cd d4 ff       	call   8350658 <_ZNK6CSkill29get_second_growtype_max_levelEii>
 8603910:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8603913:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8603917:	75 15                	jne    860392e <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x168>
 8603919:	8b 45 14             	mov    0x14(%ebp),%eax
 860391c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603920:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8603923:	89 04 24             	mov    %eax,(%esp)
 8603926:	e8 dd 12 d7 ff       	call   8374c08 <_ZNK6CSkill18get_type_max_levelEi>
 860392b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860392e:	8b 45 28             	mov    0x28(%ebp),%eax
 8603931:	8b 00                	mov    (%eax),%eax
 8603933:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8603936:	7e 0a                	jle    8603942 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x17c>
 8603938:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 860393d:	e9 2b 01 00 00       	jmp    8603a6d <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x2a7>
 8603942:	8b 45 28             	mov    0x28(%ebp),%eax
 8603945:	8b 00                	mov    (%eax),%eax
 8603947:	89 44 24 04          	mov    %eax,0x4(%esp)
 860394b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860394e:	89 04 24             	mov    %eax,(%esp)
 8603951:	e8 e4 c7 d4 ff       	call   835013a <_ZNK6CSkill22get_guildSkillNeedGoldEi>
 8603956:	8b 55 24             	mov    0x24(%ebp),%edx
 8603959:	89 02                	mov    %eax,(%edx)
 860395b:	8b 45 24             	mov    0x24(%ebp),%eax
 860395e:	8b 00                	mov    (%eax),%eax
 8603960:	85 c0                	test   %eax,%eax
 8603962:	78 12                	js     8603976 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x1b0>
 8603964:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8603967:	8b 90 a0 00 00 00    	mov    0xa0(%eax),%edx
 860396d:	8b 45 24             	mov    0x24(%ebp),%eax
 8603970:	8b 00                	mov    (%eax),%eax
 8603972:	39 c2                	cmp    %eax,%edx
 8603974:	73 0a                	jae    8603980 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x1ba>
 8603976:	b8 fb ff ff ff       	mov    $0xfffffffb,%eax
 860397b:	e9 ed 00 00 00       	jmp    8603a6d <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x2a7>
 8603980:	8b 45 28             	mov    0x28(%ebp),%eax
 8603983:	8b 00                	mov    (%eax),%eax
 8603985:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603989:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860398c:	89 04 24             	mov    %eax,(%esp)
 860398f:	e8 5e c7 d4 ff       	call   83500f2 <_ZNK6CSkill21get_guildSkillNeedGSPEi>
 8603994:	8b 55 2c             	mov    0x2c(%ebp),%edx
 8603997:	66 89 02             	mov    %ax,(%edx)
 860399a:	8b 45 2c             	mov    0x2c(%ebp),%eax
 860399d:	0f b7 00             	movzwl (%eax),%eax
 86039a0:	66 85 c0             	test   %ax,%ax
 86039a3:	78 0c                	js     86039b1 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x1eb>
 86039a5:	8b 45 2c             	mov    0x2c(%ebp),%eax
 86039a8:	0f b7 00             	movzwl (%eax),%eax
 86039ab:	98                   	cwtl
 86039ac:	3b 45 30             	cmp    0x30(%ebp),%eax
 86039af:	7e 0a                	jle    86039bb <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x1f5>
 86039b1:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 86039b6:	e9 b2 00 00 00       	jmp    8603a6d <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x2a7>
 86039bb:	8b 45 28             	mov    0x28(%ebp),%eax
 86039be:	8b 00                	mov    (%eax),%eax
 86039c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86039c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86039c7:	89 04 24             	mov    %eax,(%esp)
 86039ca:	e8 b3 c7 d4 ff       	call   8350182 <_ZNK6CSkill18get_needGuildLevelEi>
 86039cf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86039d2:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86039d5:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 86039d9:	0f b6 c0             	movzbl %al,%eax
 86039dc:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 86039df:	7d 0a                	jge    86039eb <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x225>
 86039e1:	b8 fa ff ff ff       	mov    $0xfffffffa,%eax
 86039e6:	e9 82 00 00 00       	jmp    8603a6d <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x2a7>
 86039eb:	8b 45 08             	mov    0x8(%ebp),%eax
 86039ee:	8b 00                	mov    (%eax),%eax
 86039f0:	85 c0                	test   %eax,%eax
 86039f2:	74 74                	je     8603a68 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi+0x2a2>
 86039f4:	8b 45 28             	mov    0x28(%ebp),%eax
 86039f7:	8b 30                	mov    (%eax),%esi
 86039f9:	8b 45 08             	mov    0x8(%ebp),%eax
 86039fc:	8b 00                	mov    (%eax),%eax
 86039fe:	89 04 24             	mov    %eax,(%esp)
 8603a01:	e8 36 b9 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8603a06:	89 c3                	mov    %eax,%ebx
 8603a08:	8b 45 08             	mov    0x8(%ebp),%eax
 8603a0b:	8b 00                	mov    (%eax),%eax
 8603a0d:	89 04 24             	mov    %eax,(%esp)
 8603a10:	e8 0b a5 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8603a15:	8b 55 08             	mov    0x8(%ebp),%edx
 8603a18:	8b 12                	mov    (%edx),%edx
 8603a1a:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8603a20:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8603a27:	00 
 8603a28:	89 74 24 10          	mov    %esi,0x10(%esp)
 8603a2c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8603a2f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8603a33:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8603a37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603a3b:	89 0c 24             	mov    %ecx,(%esp)
 8603a3e:	e8 eb f0 07 00       	call   8682b2e <_ZN15cUserHistoryLog8SkillAddEiiii15eSkillAddReason>
 8603a43:	8b 45 28             	mov    0x28(%ebp),%eax
 8603a46:	8b 18                	mov    (%eax),%ebx
 8603a48:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8603a4b:	89 04 24             	mov    %eax,(%esp)
 8603a4e:	e8 37 59 00 00       	call   860938a <_ZNK6CSkill12getSkillNameEv>
 8603a53:	8b 55 08             	mov    0x8(%ebp),%edx
 8603a56:	8b 12                	mov    (%edx),%edx
 8603a58:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8603a5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603a60:	89 14 24             	mov    %edx,(%esp)
 8603a63:	e8 ce 5f 07 00       	call   8679a36 <_ZN5CUser21makeGuildSkillMessageEPKci>
 8603a68:	b8 00 00 00 00       	mov    $0x0,%eax
 8603a6d:	83 c4 40             	add    $0x40,%esp
 8603a70:	5b                   	pop    %ebx
 8603a71:	5e                   	pop    %esi
 8603a72:	5d                   	pop    %ebp
 8603a73:	c3                   	ret

```

```c
// SkillSlot::master_new_guild_skill @ 0x86037c6

/* SkillSlot::master_new_guild_skill(int, int, int, int, STGuildDBInfoOnly const&, int, int&, int&,
   short&, int) */

undefined4 __thiscall
SkillSlot::master_new_guild_skill
          (SkillSlot *this,int param_1,int param_2,int param_3,int param_4,
          STGuildDBInfoOnly *param_5,int param_6,int *param_7,int *param_8,short *param_9,
          int param_10)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  CSkill *this_00;
  undefined4 uVar4;
  char *pcVar5;
  int local_14;
  int local_10;
  
  if ((byte)param_5[0x44] < 0x10) {
    iVar3 = G_CDataManager();
    this_00 = (CSkill *)CDataManager::find_skill(iVar3,param_2);
    if (this_00 == (CSkill *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      *param_8 = 1;
      for (local_14 = 0; local_14 < (int)(uint)(byte)param_5[0x44]; local_14 = local_14 + 1) {
        if (*(int *)(param_5 + local_14 * 5 + 0x45) == param_1) {
          *param_8 = (char)param_5[local_14 * 5 + 0x49] + 1;
          break;
        }
      }
      if (param_4 < 1) {
        iVar3 = CSkill::get_type_max_level(this_00,param_3);
        if (iVar3 < *param_8) {
          return 0xfffffffd;
        }
      }
      else {
        local_10 = CSkill::get_second_growtype_max_level(this_00,param_3,param_4);
        if (local_10 == 0) {
          local_10 = CSkill::get_type_max_level(this_00,param_3);
        }
        if (local_10 < *param_8) {
          return 0xfffffffd;
        }
      }
      iVar3 = CSkill::get_guildSkillNeedGold(this_00,*param_8);
      *param_7 = iVar3;
      if ((*param_7 < 0) || (*(uint *)(param_5 + 0xa0) < (uint)*param_7)) {
        uVar2 = 0xfffffffb;
      }
      else {
        sVar1 = CSkill::get_guildSkillNeedGSP(this_00,*param_8);
        *param_9 = sVar1;
        if ((*param_9 < 0) || (param_10 < *param_9)) {
          uVar2 = 0xfffffffe;
        }
        else {
          iVar3 = CSkill::get_needGuildLevel(this_00,*param_8);
          if ((int)(uint)(byte)param_5[0x1b] < iVar3) {
            uVar2 = 0xfffffffa;
          }
          else {
            if (*(int *)this != 0) {
              iVar3 = *param_8;
              uVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
              uVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
              cUserHistoryLog::SkillAdd
                        ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar4,uVar2,param_1,iVar3,0);
              iVar3 = *param_8;
              pcVar5 = (char *)CSkill::getSkillName(this_00);
              CUser::makeGuildSkillMessage(*(CUser **)this,pcVar5,iVar3);
            }
            uVar2 = 0;
          }
        }
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "int SkillSlot::master_new_guild_skill(int, int, int, int, const STGuildDBInfoOnly&, int, int&, int&, short int&, int)"
               ,0x102,"BUY GUILD SKILL, GName(%s) , Learn Cnt(%d)",param_5,(uint)(byte)param_5[0x44]
              );
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

```

---

## master_new_skill

```asm
// === 08603a74 SkillSlot::master_new_skill  [0x08603a74-0x86040bb] ===
 8603a74:	55                   	push   %ebp
 8603a75:	89 e5                	mov    %esp,%ebp
 8603a77:	53                   	push   %ebx
 8603a78:	83 ec 74             	sub    $0x74,%esp
 8603a7b:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8603a82:	e8 14 87 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8603a87:	8b 55 0c             	mov    0xc(%ebp),%edx
 8603a8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8603a8e:	8b 55 14             	mov    0x14(%ebp),%edx
 8603a91:	89 54 24 04          	mov    %edx,0x4(%esp)
 8603a95:	89 04 24             	mov    %eax,(%esp)
 8603a98:	e8 05 c3 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8603a9d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8603aa0:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 8603aa4:	75 0a                	jne    8603ab0 <_ZN9SkillSlot16master_new_skillEiiiiii+0x3c>
 8603aa6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8603aab:	e9 06 06 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603ab0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603ab3:	89 04 24             	mov    %eax,(%esp)
 8603ab6:	e8 db 10 d7 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8603abb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8603abe:	8b 45 08             	mov    0x8(%ebp),%eax
 8603ac1:	8b 00                	mov    (%eax),%eax
 8603ac3:	85 c0                	test   %eax,%eax
 8603ac5:	75 0a                	jne    8603ad1 <_ZN9SkillSlot16master_new_skillEiiiiii+0x5d>
 8603ac7:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 8603acc:	e9 e5 05 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603ad1:	8b 45 08             	mov    0x8(%ebp),%eax
 8603ad4:	8b 00                	mov    (%eax),%eax
 8603ad6:	89 04 24             	mov    %eax,(%esp)
 8603ad9:	e8 5e b8 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8603ade:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8603ae5:	00 
 8603ae6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8603aea:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8603aed:	89 44 24 08          	mov    %eax,0x8(%esp)
 8603af1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8603af4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603af8:	8b 45 08             	mov    0x8(%ebp),%eax
 8603afb:	89 04 24             	mov    %eax,(%esp)
 8603afe:	e8 83 0f 00 00       	call   8604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>
 8603b03:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8603b06:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8603b0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8603b10:	8b 00                	mov    (%eax),%eax
 8603b12:	89 04 24             	mov    %eax,(%esp)
 8603b15:	e8 22 b8 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8603b1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603b1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8603b21:	89 04 24             	mov    %eax,(%esp)
 8603b24:	e8 b5 2c 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8603b29:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8603b2c:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8603b30:	75 0a                	jne    8603b3c <_ZN9SkillSlot16master_new_skillEiiiiii+0xc8>
 8603b32:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 8603b37:	e9 7a 05 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603b3c:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 8603b40:	74 29                	je     8603b6b <_ZN9SkillSlot16master_new_skillEiiiiii+0xf7>
 8603b42:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8603b45:	01 c0                	add    %eax,%eax
 8603b47:	03 45 e4             	add    -0x1c(%ebp),%eax
 8603b4a:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8603b4e:	0f be c0             	movsbl %al,%eax
 8603b51:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8603b54:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8603b57:	01 c0                	add    %eax,%eax
 8603b59:	03 45 e4             	add    -0x1c(%ebp),%eax
 8603b5c:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8603b60:	0f be c0             	movsbl %al,%eax
 8603b63:	03 45 20             	add    0x20(%ebp),%eax
 8603b66:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8603b69:	eb 0d                	jmp    8603b78 <_ZN9SkillSlot16master_new_skillEiiiiii+0x104>
 8603b6b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8603b72:	8b 45 20             	mov    0x20(%ebp),%eax
 8603b75:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8603b78:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8603b7c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8603b7f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8603b83:	8b 45 18             	mov    0x18(%ebp),%eax
 8603b86:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603b8a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603b8d:	89 04 24             	mov    %eax,(%esp)
 8603b90:	e8 57 c9 d4 ff       	call   83504ec <_ZNK6CSkill11IsStealableEii>
 8603b95:	84 c0                	test   %al,%al
 8603b97:	74 64                	je     8603bfd <_ZN9SkillSlot16master_new_skillEiiiiii+0x189>
 8603b99:	8b 45 08             	mov    0x8(%ebp),%eax
 8603b9c:	8b 00                	mov    (%eax),%eax
 8603b9e:	89 04 24             	mov    %eax,(%esp)
 8603ba1:	e8 00 6d b9 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 8603ba6:	c7 44 24 04 63 01 00 	movl   $0x163,0x4(%esp)
 8603bad:	00 
 8603bae:	89 04 24             	mov    %eax,(%esp)
 8603bb1:	e8 6a 7d 0a 00       	call   86ab920 <_ZNK9UserQuest12isClearQuestEi>
 8603bb6:	83 f0 01             	xor    $0x1,%eax
 8603bb9:	84 c0                	test   %al,%al
 8603bbb:	eb 1b                	jmp    8603bd8 <_ZN9SkillSlot16master_new_skillEiiiiii+0x164>
 8603bbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8603bc0:	8b 00                	mov    (%eax),%eax
 8603bc2:	89 04 24             	mov    %eax,(%esp)
 8603bc5:	e8 16 ec 05 00       	call   86627e0 <_ZNK5CUser29is_clear_stealingSkillMissionEv>
 8603bca:	83 f0 01             	xor    $0x1,%eax
 8603bcd:	84 c0                	test   %al,%al
 8603bcf:	74 07                	je     8603bd8 <_ZN9SkillSlot16master_new_skillEiiiiii+0x164>
 8603bd1:	b8 01 00 00 00       	mov    $0x1,%eax
 8603bd6:	eb 05                	jmp    8603bdd <_ZN9SkillSlot16master_new_skillEiiiiii+0x169>
 8603bd8:	b8 00 00 00 00       	mov    $0x0,%eax
 8603bdd:	84 c0                	test   %al,%al
 8603bdf:	74 0a                	je     8603beb <_ZN9SkillSlot16master_new_skillEiiiiii+0x177>
 8603be1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8603be6:	e9 cb 04 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603beb:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 8603bef:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603bf2:	89 04 24             	mov    %eax,(%esp)
 8603bf5:	e8 50 57 00 00       	call   860934a <_ZNK6CSkill20GetStealLevelPenaltyEv>
 8603bfa:	29 45 10             	sub    %eax,0x10(%ebp)
 8603bfd:	8b 45 08             	mov    0x8(%ebp),%eax
 8603c00:	8b 00                	mov    (%eax),%eax
 8603c02:	89 04 24             	mov    %eax,(%esp)
 8603c05:	e8 1e 92 b2 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 8603c0a:	89 04 24             	mov    %eax,(%esp)
 8603c0d:	e8 86 57 00 00       	call   8609398 <_ZNK8WongWork12CUserPremium17getOverSkillLevelEv>
 8603c12:	0f b7 c0             	movzwl %ax,%eax
 8603c15:	01 45 10             	add    %eax,0x10(%ebp)
 8603c18:	e8 8a 67 ad ff       	call   80da3a7 <_Z11G_GameWorldv>
 8603c1d:	89 04 24             	mov    %eax,(%esp)
 8603c20:	e8 f9 07 c3 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 8603c25:	84 c0                	test   %al,%al
 8603c27:	74 62                	je     8603c8b <_ZN9SkillSlot16master_new_skillEiiiiii+0x217>
 8603c29:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603c2c:	8b 98 98 01 00 00    	mov    0x198(%eax),%ebx
 8603c32:	8b 45 08             	mov    0x8(%ebp),%eax
 8603c35:	8b 00                	mov    (%eax),%eax
 8603c37:	89 04 24             	mov    %eax,(%esp)
 8603c3a:	e8 0b b2 b9 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 8603c3f:	39 c3                	cmp    %eax,%ebx
 8603c41:	0f 9f c0             	setg   %al
 8603c44:	84 c0                	test   %al,%al
 8603c46:	74 0a                	je     8603c52 <_ZN9SkillSlot16master_new_skillEiiiiii+0x1de>
 8603c48:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 8603c4d:	e9 64 04 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603c52:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8603c55:	89 44 24 10          	mov    %eax,0x10(%esp)
 8603c59:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8603c5c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8603c60:	8b 45 18             	mov    0x18(%ebp),%eax
 8603c63:	89 44 24 08          	mov    %eax,0x8(%esp)
 8603c67:	c7 44 24 04 46 00 00 	movl   $0x46,0x4(%esp)
 8603c6e:	00 
 8603c6f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603c72:	89 04 24             	mov    %eax,(%esp)
 8603c75:	e8 24 c7 d4 ff       	call   835039e <_ZNK6CSkill9can_learnEiiii>
 8603c7a:	83 f0 01             	xor    $0x1,%eax
 8603c7d:	84 c0                	test   %al,%al
 8603c7f:	74 42                	je     8603cc3 <_ZN9SkillSlot16master_new_skillEiiiiii+0x24f>
 8603c81:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 8603c86:	e9 2b 04 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603c8b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8603c8e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8603c92:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8603c95:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8603c99:	8b 45 18             	mov    0x18(%ebp),%eax
 8603c9c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8603ca0:	8b 45 10             	mov    0x10(%ebp),%eax
 8603ca3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603ca7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603caa:	89 04 24             	mov    %eax,(%esp)
 8603cad:	e8 ec c6 d4 ff       	call   835039e <_ZNK6CSkill9can_learnEiiii>
 8603cb2:	83 f0 01             	xor    $0x1,%eax
 8603cb5:	84 c0                	test   %al,%al
 8603cb7:	74 0a                	je     8603cc3 <_ZN9SkillSlot16master_new_skillEiiiiii+0x24f>
 8603cb9:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 8603cbe:	e9 f3 03 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603cc3:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8603cc6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8603cca:	8b 45 18             	mov    0x18(%ebp),%eax
 8603ccd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603cd1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603cd4:	89 04 24             	mov    %eax,(%esp)
 8603cd7:	e8 e2 c8 d4 ff       	call   83505be <_ZNK6CSkill27get_second_growtype_fitnessEii>
 8603cdc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8603cdf:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8603ce3:	75 15                	jne    8603cfa <_ZN9SkillSlot16master_new_skillEiiiiii+0x286>
 8603ce5:	8b 45 18             	mov    0x18(%ebp),%eax
 8603ce8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603cec:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603cef:	89 04 24             	mov    %eax,(%esp)
 8603cf2:	e8 81 56 00 00       	call   8609378 <_ZNK6CSkill11get_fitnessEi>
 8603cf7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8603cfa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8603cfd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8603d01:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8603d04:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603d08:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603d0b:	89 04 24             	mov    %eax,(%esp)
 8603d0e:	e8 69 c5 d4 ff       	call   835027c <_ZNK6CSkill25get_need_sp_sfp_for_levelEii>
 8603d13:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8603d16:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8603d1a:	79 0a                	jns    8603d26 <_ZN9SkillSlot16master_new_skillEiiiiii+0x2b2>
 8603d1c:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 8603d21:	e9 90 03 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603d26:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8603d2a:	7e 28                	jle    8603d54 <_ZN9SkillSlot16master_new_skillEiiiiii+0x2e0>
 8603d2c:	b8 64 00 00 00       	mov    $0x64,%eax
 8603d31:	2b 45 ec             	sub    -0x14(%ebp),%eax
 8603d34:	89 c1                	mov    %eax,%ecx
 8603d36:	0f af 4d f0          	imul   -0x10(%ebp),%ecx
 8603d3a:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8603d3f:	89 c8                	mov    %ecx,%eax
 8603d41:	f7 ea                	imul   %edx
 8603d43:	c1 fa 05             	sar    $0x5,%edx
 8603d46:	89 c8                	mov    %ecx,%eax
 8603d48:	c1 f8 1f             	sar    $0x1f,%eax
 8603d4b:	89 d1                	mov    %edx,%ecx
 8603d4d:	29 c1                	sub    %eax,%ecx
 8603d4f:	89 c8                	mov    %ecx,%eax
 8603d51:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8603d54:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
 8603d58:	74 1d                	je     8603d77 <_ZN9SkillSlot16master_new_skillEiiiiii+0x303>
 8603d5a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603d5d:	89 04 24             	mov    %eax,(%esp)
 8603d60:	e8 f3 55 00 00       	call   8609358 <_ZNK6CSkill17GetStealSPPenaltyEv>
 8603d65:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603d69:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8603d6c:	89 04 24             	mov    %eax,(%esp)
 8603d6f:	e8 2e 72 49 00       	call   8a9afa2 <_Z22getSkillSpendSPOnStealii>
 8603d74:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8603d77:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8603d7b:	79 07                	jns    8603d84 <_ZN9SkillSlot16master_new_skillEiiiiii+0x310>
 8603d7d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8603d84:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603d87:	89 04 24             	mov    %eax,(%esp)
 8603d8a:	e8 23 78 c2 ff       	call   822b5b2 <_ZNK6CSkill14IsSpecialSkillEv>
 8603d8f:	84 c0                	test   %al,%al
 8603d91:	74 63                	je     8603df6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x382>
 8603d93:	8b 45 08             	mov    0x8(%ebp),%eax
 8603d96:	8b 00                	mov    (%eax),%eax
 8603d98:	89 04 24             	mov    %eax,(%esp)
 8603d9b:	e8 9c b5 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8603da0:	83 f8 ff             	cmp    $0xffffffff,%eax
 8603da3:	74 11                	je     8603db6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x342>
 8603da5:	8b 45 08             	mov    0x8(%ebp),%eax
 8603da8:	8b 00                	mov    (%eax),%eax
 8603daa:	89 04 24             	mov    %eax,(%esp)
 8603dad:	e8 8a b5 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8603db2:	85 c0                	test   %eax,%eax
 8603db4:	75 07                	jne    8603dbd <_ZN9SkillSlot16master_new_skillEiiiiii+0x349>
 8603db6:	b8 01 00 00 00       	mov    $0x1,%eax
 8603dbb:	eb 05                	jmp    8603dc2 <_ZN9SkillSlot16master_new_skillEiiiiii+0x34e>
 8603dbd:	b8 00 00 00 00       	mov    $0x0,%eax
 8603dc2:	84 c0                	test   %al,%al
 8603dc4:	74 18                	je     8603dde <_ZN9SkillSlot16master_new_skillEiiiiii+0x36a>
 8603dc6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8603dcd:	00 
 8603dce:	8b 45 08             	mov    0x8(%ebp),%eax
 8603dd1:	89 04 24             	mov    %eax,(%esp)
 8603dd4:	e8 39 2a 00 00       	call   8606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>
 8603dd9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8603ddc:	eb 37                	jmp    8603e15 <_ZN9SkillSlot16master_new_skillEiiiiii+0x3a1>
 8603dde:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8603de5:	00 
 8603de6:	8b 45 08             	mov    0x8(%ebp),%eax
 8603de9:	89 04 24             	mov    %eax,(%esp)
 8603dec:	e8 21 2a 00 00       	call   8606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>
 8603df1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8603df4:	eb 1f                	jmp    8603e15 <_ZN9SkillSlot16master_new_skillEiiiiii+0x3a1>
 8603df6:	8b 45 08             	mov    0x8(%ebp),%eax
 8603df9:	8b 00                	mov    (%eax),%eax
 8603dfb:	89 04 24             	mov    %eax,(%esp)
 8603dfe:	e8 39 b5 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8603e03:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603e07:	8b 45 08             	mov    0x8(%ebp),%eax
 8603e0a:	89 04 24             	mov    %eax,(%esp)
 8603e0d:	e8 00 2a 00 00       	call   8606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>
 8603e12:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8603e15:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8603e19:	75 0a                	jne    8603e25 <_ZN9SkillSlot16master_new_skillEiiiiii+0x3b1>
 8603e1b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8603e20:	e9 91 02 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603e25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8603e28:	8b 00                	mov    (%eax),%eax
 8603e2a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8603e2d:	7d 0a                	jge    8603e39 <_ZN9SkillSlot16master_new_skillEiiiiii+0x3c5>
 8603e2f:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 8603e34:	e9 7d 02 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603e39:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8603e3c:	89 04 24             	mov    %eax,(%esp)
 8603e3f:	e8 a2 55 00 00       	call   86093e6 <_ZNSt20_List_const_iteratorI10_pre_skillEC1Ev>
 8603e44:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603e47:	8d 50 18             	lea    0x18(%eax),%edx
 8603e4a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8603e4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8603e51:	89 04 24             	mov    %eax,(%esp)
 8603e54:	e8 2b 78 da ff       	call   83ab684 <_ZNKSt4listI10_pre_skillSaIS0_EE5beginEv>
 8603e59:	83 ec 04             	sub    $0x4,%esp
 8603e5c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8603e5f:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8603e62:	eb 6a                	jmp    8603ece <_ZN9SkillSlot16master_new_skillEiiiiii+0x45a>
 8603e64:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8603e67:	89 04 24             	mov    %eax,(%esp)
 8603e6a:	e8 85 55 00 00       	call   86093f4 <_ZNKSt20_List_const_iteratorI10_pre_skillEdeEv>
 8603e6f:	8b 10                	mov    (%eax),%edx
 8603e71:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8603e74:	8b 50 04             	mov    0x4(%eax),%edx
 8603e77:	89 55 c0             	mov    %edx,-0x40(%ebp)
 8603e7a:	8b 40 08             	mov    0x8(%eax),%eax
 8603e7d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8603e80:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8603e83:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8603e86:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8603e89:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8603e8d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8603e91:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603e95:	8b 45 08             	mov    0x8(%ebp),%eax
 8603e98:	89 04 24             	mov    %eax,(%esp)
 8603e9b:	e8 f8 09 00 00       	call   8604898 <_ZNK9SkillSlot20check_skill_masteredEiii>
 8603ea0:	83 f0 01             	xor    $0x1,%eax
 8603ea3:	84 c0                	test   %al,%al
 8603ea5:	74 0a                	je     8603eb1 <_ZN9SkillSlot16master_new_skillEiiiiii+0x43d>
 8603ea7:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 8603eac:	e9 05 02 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603eb1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8603eb4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8603ebb:	00 
 8603ebc:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8603ebf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8603ec3:	89 04 24             	mov    %eax,(%esp)
 8603ec6:	e8 37 55 00 00       	call   8609402 <_ZNSt20_List_const_iteratorI10_pre_skillEppEi>
 8603ecb:	83 ec 04             	sub    $0x4,%esp
 8603ece:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603ed1:	8d 50 18             	lea    0x18(%eax),%edx
 8603ed4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8603ed7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8603edb:	89 04 24             	mov    %eax,(%esp)
 8603ede:	e8 c7 77 da ff       	call   83ab6aa <_ZNKSt4listI10_pre_skillSaIS0_EE3endEv>
 8603ee3:	83 ec 04             	sub    $0x4,%esp
 8603ee6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8603ee9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603eed:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8603ef0:	89 04 24             	mov    %eax,(%esp)
 8603ef3:	e8 d8 26 dd ff       	call   83d65d0 <_ZNKSt20_List_const_iteratorI10_pre_skillEneERKS1_>
 8603ef8:	84 c0                	test   %al,%al
 8603efa:	0f 85 64 ff ff ff    	jne    8603e64 <_ZN9SkillSlot16master_new_skillEiiiiii+0x3f0>
 8603f00:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 8603f04:	0f 84 bb 00 00 00    	je     8603fc5 <_ZN9SkillSlot16master_new_skillEiiiiii+0x551>
 8603f0a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8603f0d:	01 c0                	add    %eax,%eax
 8603f0f:	03 45 e4             	add    -0x1c(%ebp),%eax
 8603f12:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8603f15:	88 50 01             	mov    %dl,0x1(%eax)
 8603f18:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8603f1b:	8b 00                	mov    (%eax),%eax
 8603f1d:	89 c2                	mov    %eax,%edx
 8603f1f:	2b 55 f0             	sub    -0x10(%ebp),%edx
 8603f22:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8603f25:	89 10                	mov    %edx,(%eax)
 8603f27:	8b 45 08             	mov    0x8(%ebp),%eax
 8603f2a:	8b 00                	mov    (%eax),%eax
 8603f2c:	85 c0                	test   %eax,%eax
 8603f2e:	0f 84 89 00 00 00    	je     8603fbd <_ZN9SkillSlot16master_new_skillEiiiiii+0x549>
 8603f34:	8b 45 08             	mov    0x8(%ebp),%eax
 8603f37:	8b 00                	mov    (%eax),%eax
 8603f39:	89 04 24             	mov    %eax,(%esp)
 8603f3c:	e8 fb b3 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8603f41:	89 c3                	mov    %eax,%ebx
 8603f43:	8b 45 08             	mov    0x8(%ebp),%eax
 8603f46:	8b 00                	mov    (%eax),%eax
 8603f48:	89 04 24             	mov    %eax,(%esp)
 8603f4b:	e8 d0 9f af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8603f50:	8b 55 08             	mov    0x8(%ebp),%edx
 8603f53:	8b 12                	mov    (%edx),%edx
 8603f55:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8603f5b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8603f62:	00 
 8603f63:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8603f66:	89 54 24 10          	mov    %edx,0x10(%esp)
 8603f6a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8603f6d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8603f71:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8603f75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603f79:	89 0c 24             	mov    %ecx,(%esp)
 8603f7c:	e8 ad eb 07 00       	call   8682b2e <_ZN15cUserHistoryLog8SkillAddEiiii15eSkillAddReason>
 8603f81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8603f84:	8b 18                	mov    (%eax),%ebx
 8603f86:	8b 45 08             	mov    0x8(%ebp),%eax
 8603f89:	8b 00                	mov    (%eax),%eax
 8603f8b:	89 04 24             	mov    %eax,(%esp)
 8603f8e:	e8 a9 b3 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8603f93:	8b 55 08             	mov    0x8(%ebp),%edx
 8603f96:	8b 12                	mov    (%edx),%edx
 8603f98:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8603f9e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8603fa5:	00 
 8603fa6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8603fa9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8603fad:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8603fb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603fb5:	89 0c 24             	mov    %ecx,(%esp)
 8603fb8:	e8 2b ec 07 00       	call   8682be8 <_ZN15cUserHistoryLog5SPSubEiii12eSPSubReason>
 8603fbd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8603fc0:	e9 f1 00 00 00       	jmp    86040b6 <_ZN9SkillSlot16master_new_skillEiiiiii+0x642>
 8603fc5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8603fc8:	8b 00                	mov    (%eax),%eax
 8603fca:	89 c2                	mov    %eax,%edx
 8603fcc:	2b 55 f0             	sub    -0x10(%ebp),%edx
 8603fcf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8603fd2:	89 10                	mov    %edx,(%eax)
 8603fd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8603fd7:	8b 00                	mov    (%eax),%eax
 8603fd9:	89 04 24             	mov    %eax,(%esp)
 8603fdc:	e8 5b b3 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8603fe1:	89 c3                	mov    %eax,%ebx
 8603fe3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8603fe6:	89 04 24             	mov    %eax,(%esp)
 8603fe9:	e8 78 53 00 00       	call   8609366 <_ZNK6CSkill15is_active_skillEv>
 8603fee:	0f b6 c0             	movzbl %al,%eax
 8603ff1:	8b 55 20             	mov    0x20(%ebp),%edx
 8603ff4:	89 54 24 14          	mov    %edx,0x14(%esp)
 8603ff8:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8603ffc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8604000:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8604003:	89 44 24 08          	mov    %eax,0x8(%esp)
 8604007:	8b 45 0c             	mov    0xc(%ebp),%eax
 860400a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860400e:	8b 45 08             	mov    0x8(%ebp),%eax
 8604011:	89 04 24             	mov    %eax,(%esp)
 8604014:	e8 0b 03 00 00       	call   8604324 <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi>
 8604019:	89 45 d8             	mov    %eax,-0x28(%ebp)
 860401c:	8b 45 08             	mov    0x8(%ebp),%eax
 860401f:	8b 00                	mov    (%eax),%eax
 8604021:	85 c0                	test   %eax,%eax
 8604023:	0f 84 8a 00 00 00    	je     86040b3 <_ZN9SkillSlot16master_new_skillEiiiiii+0x63f>
 8604029:	8b 45 08             	mov    0x8(%ebp),%eax
 860402c:	8b 00                	mov    (%eax),%eax
 860402e:	89 04 24             	mov    %eax,(%esp)
 8604031:	e8 06 b3 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8604036:	89 c3                	mov    %eax,%ebx
 8604038:	8b 45 08             	mov    0x8(%ebp),%eax
 860403b:	8b 00                	mov    (%eax),%eax
 860403d:	89 04 24             	mov    %eax,(%esp)
 8604040:	e8 db 9e af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8604045:	8b 55 08             	mov    0x8(%ebp),%edx
 8604048:	8b 12                	mov    (%edx),%edx
 860404a:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8604050:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8604057:	00 
 8604058:	8b 55 20             	mov    0x20(%ebp),%edx
 860405b:	89 54 24 10          	mov    %edx,0x10(%esp)
 860405f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8604062:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8604066:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 860406a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860406e:	89 0c 24             	mov    %ecx,(%esp)
 8604071:	e8 b8 ea 07 00       	call   8682b2e <_ZN15cUserHistoryLog8SkillAddEiiii15eSkillAddReason>
 8604076:	8b 45 08             	mov    0x8(%ebp),%eax
 8604079:	8b 58 04             	mov    0x4(%eax),%ebx
 860407c:	8b 45 08             	mov    0x8(%ebp),%eax
 860407f:	8b 00                	mov    (%eax),%eax
 8604081:	89 04 24             	mov    %eax,(%esp)
 8604084:	e8 b3 b2 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8604089:	8b 55 08             	mov    0x8(%ebp),%edx
 860408c:	8b 12                	mov    (%edx),%edx
 860408e:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8604094:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 860409b:	00 
 860409c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 860409f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86040a3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86040a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86040ab:	89 0c 24             	mov    %ecx,(%esp)
 86040ae:	e8 35 eb 07 00       	call   8682be8 <_ZN15cUserHistoryLog5SPSubEiii12eSPSubReason>
 86040b3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86040b6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 86040b9:	c9                   	leave
 86040ba:	c3                   	ret
 86040bb:	90                   	nop

```

```c
// SkillSlot::master_new_skill @ 0x8603a74

/* WARNING: Removing unreachable block (ram,0x08603be1) */
/* SkillSlot::master_new_skill(int, int, int, int, int, int) */

int __thiscall
SkillSlot::master_new_skill
          (SkillSlot *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  UserQuest *this_00;
  CUserPremium *this_01;
  uint uVar6;
  GameWorld *this_02;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  _List_const_iterator<_pre_skill> local_4c [4];
  int local_48;
  int local_44;
  int local_40;
  _List_const_iterator local_3c [4];
  _List_const_iterator<_pre_skill> local_38 [4];
  CSkill *local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_19;
  int local_18;
  int local_14;
  int *local_10;
  
  local_34 = (CSkill *)0x0;
  iVar4 = G_CDataManager();
  local_34 = (CSkill *)CDataManager::find_skill(iVar4,param_3);
  if (local_34 == (CSkill *)0x0) {
    local_2c = -1;
  }
  else {
    local_30 = CSkill::get_group(local_34);
    if (*(int *)this == 0) {
      local_2c = -4;
    }
    else {
      uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
      local_2c = get_skillslot_no(this,param_1,local_30,uVar5,1);
      local_24 = 0;
      uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
      local_20 = get_skillslot_buf(this,uVar5);
      if (local_20 == 0) {
        local_2c = -4;
      }
      else {
        if (local_2c == -1) {
          local_24 = 0;
          local_28 = param_6;
        }
        else {
          local_24 = (int)*(char *)(local_2c * 2 + local_20 + 1);
          local_28 = *(char *)(local_2c * 2 + local_20 + 1) + param_6;
        }
        local_19 = '\0';
        cVar2 = CSkill::IsStealable(local_34,param_4,param_5);
        if (cVar2 != '\0') {
          this_00 = (UserQuest *)CUser::getCurCharacQuestR(*(CUser **)this);
          UserQuest::isClearQuest(this_00,0x163);
          local_19 = '\x01';
          iVar4 = CSkill::GetStealLevelPenalty(local_34);
          param_2 = param_2 - iVar4;
        }
        this_01 = (CUserPremium *)CUser::GetPremiumInfo(*(CUser **)this);
        uVar6 = WongWork::CUserPremium::getOverSkillLevel(this_01);
        this_02 = (GameWorld *)G_GameWorld();
        cVar2 = GameWorld::IsPvPSkilTreeChannel(this_02);
        if (cVar2 == '\0') {
          cVar2 = CSkill::can_learn(local_34,param_2 + (uVar6 & 0xffff),param_4,param_5,local_28);
          if (cVar2 != '\x01') {
            return -3;
          }
        }
        else {
          iVar4 = *(int *)(local_34 + 0x198);
          iVar7 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)this);
          if (iVar7 < iVar4) {
            return -3;
          }
          cVar2 = CSkill::can_learn(local_34,0x46,param_4,param_5,local_28);
          if (cVar2 != '\x01') {
            return -3;
          }
        }
        local_18 = CSkill::get_second_growtype_fitness(local_34,param_4,param_5);
        if (local_18 == 0) {
          local_18 = CSkill::get_fitness(local_34,param_4);
        }
        local_14 = CSkill::get_need_sp_sfp_for_level(local_34,local_24,local_28);
        if (local_14 < 0) {
          local_2c = -4;
        }
        else {
          if (0 < local_18) {
            local_14 = ((100 - local_18) * local_14) / 100;
          }
          if (local_19 != '\0') {
            iVar4 = CSkill::GetStealSPPenalty(local_34);
            local_14 = getSkillSpendSPOnSteal(local_14,iVar4);
          }
          if (local_14 < 0) {
            local_14 = 0;
          }
          cVar2 = CSkill::IsSpecialSkill(local_34);
          if (cVar2 == '\0') {
            uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
            local_10 = (int *)get_cur_remain_sp(this,uVar5);
          }
          else {
            iVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
            if ((iVar4 == -1) ||
               (iVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this),
               iVar4 == 0)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_10 = (int *)get_cur_remain_sp(this,2);
            }
            else {
              local_10 = (int *)get_cur_remain_sp(this,3);
            }
          }
          if (local_10 == (int *)0x0) {
            local_2c = -1;
          }
          else if (*local_10 < local_14) {
            local_2c = -2;
          }
          else {
            std::_List_const_iterator<_pre_skill>::_List_const_iterator(local_4c);
            std::list<_pre_skill,std::allocator<_pre_skill>>::begin();
            while( true ) {
              std::list<_pre_skill,std::allocator<_pre_skill>>::end();
              cVar2 = std::_List_const_iterator<_pre_skill>::operator!=(local_4c,local_3c);
              if (cVar2 == '\0') break;
              piVar8 = (int *)std::_List_const_iterator<_pre_skill>::operator*(local_4c);
              local_48 = *piVar8;
              local_44 = piVar8[1];
              local_40 = piVar8[2];
              cVar2 = check_skill_mastered(this,local_48,local_44,local_40);
              if (cVar2 != '\x01') {
                return -3;
              }
              std::_List_const_iterator<_pre_skill>::operator++(local_38,(int)local_4c);
            }
            if (local_2c == -1) {
              *local_10 = *local_10 - local_14;
              uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
              uVar3 = CSkill::is_active_skill(local_34);
              local_2c = insert_skill(this,param_1,local_30,uVar3,uVar5,param_6);
              if (*(int *)this != 0) {
                uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                uVar9 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                cUserHistoryLog::SkillAdd
                          ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar9,uVar5,param_1,param_6,0
                          );
                uVar5 = *(undefined4 *)(this + 4);
                uVar9 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                cUserHistoryLog::SPSub
                          ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar9,uVar5,local_14,0);
              }
            }
            else {
              *(char *)(local_2c * 2 + local_20 + 1) = (char)local_28;
              *local_10 = *local_10 - local_14;
              if (*(int *)this != 0) {
                uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                uVar9 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                cUserHistoryLog::SkillAdd
                          ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar9,uVar5,param_1,local_28,
                           0);
                iVar4 = *local_10;
                uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                cUserHistoryLog::SPSub
                          ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar5,iVar4,local_14,0);
              }
            }
          }
        }
      }
    }
  }
  return local_2c;
}

```

---

## moveComboSkillExtensionQuickSlot

```asm
// === 08608ee8 SkillSlot::moveComboSkillExtensionQuickSlot  [0x08608ee8-0x860909f] ===
 8608ee8:	55                   	push   %ebp
 8608ee9:	89 e5                	mov    %esp,%ebp
 8608eeb:	53                   	push   %ebx
 8608eec:	83 ec 44             	sub    $0x44,%esp
 8608eef:	8b 45 08             	mov    0x8(%ebp),%eax
 8608ef2:	8b 00                	mov    (%eax),%eax
 8608ef4:	85 c0                	test   %eax,%eax
 8608ef6:	75 0a                	jne    8608f02 <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x1a>
 8608ef8:	b8 00 00 00 00       	mov    $0x0,%eax
 8608efd:	e9 98 01 00 00       	jmp    860909a <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x1b2>
 8608f02:	8b 45 14             	mov    0x14(%ebp),%eax
 8608f05:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608f09:	8b 45 08             	mov    0x8(%ebp),%eax
 8608f0c:	89 04 24             	mov    %eax,(%esp)
 8608f0f:	e8 ca d8 ff ff       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8608f14:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8608f17:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8608f1b:	75 0a                	jne    8608f27 <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x3f>
 8608f1d:	b8 00 00 00 00       	mov    $0x0,%eax
 8608f22:	e9 73 01 00 00       	jmp    860909a <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x1b2>
 8608f27:	8b 45 08             	mov    0x8(%ebp),%eax
 8608f2a:	8b 00                	mov    (%eax),%eax
 8608f2c:	89 04 24             	mov    %eax,(%esp)
 8608f2f:	e8 ec 4f af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8608f34:	89 c3                	mov    %eax,%ebx
 8608f36:	e8 60 32 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8608f3b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8608f3e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8608f42:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8608f46:	89 04 24             	mov    %eax,(%esp)
 8608f49:	e8 54 6e d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8608f4e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8608f51:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8608f55:	75 0a                	jne    8608f61 <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x79>
 8608f57:	b8 00 00 00 00       	mov    $0x0,%eax
 8608f5c:	e9 39 01 00 00       	jmp    860909a <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x1b2>
 8608f61:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8608f64:	89 04 24             	mov    %eax,(%esp)
 8608f67:	e8 2a bc d6 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8608f6c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8608f6f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8608f76:	00 
 8608f77:	8b 45 14             	mov    0x14(%ebp),%eax
 8608f7a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8608f7e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8608f81:	89 44 24 08          	mov    %eax,0x8(%esp)
 8608f85:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608f88:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608f8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8608f8f:	89 04 24             	mov    %eax,(%esp)
 8608f92:	e8 ef ba ff ff       	call   8604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>
 8608f97:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8608f9a:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8608f9e:	74 2b                	je     8608fcb <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0xe3>
 8608fa0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8608fa3:	01 c0                	add    %eax,%eax
 8608fa5:	03 45 e8             	add    -0x18(%ebp),%eax
 8608fa8:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8608fac:	0f be c0             	movsbl %al,%eax
 8608faf:	3b 45 10             	cmp    0x10(%ebp),%eax
 8608fb2:	0f 8d dd 00 00 00    	jge    8609095 <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x1ad>
 8608fb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8608fbb:	01 c0                	add    %eax,%eax
 8608fbd:	03 45 e8             	add    -0x18(%ebp),%eax
 8608fc0:	8b 55 10             	mov    0x10(%ebp),%edx
 8608fc3:	88 50 01             	mov    %dl,0x1(%eax)
 8608fc6:	e9 ca 00 00 00       	jmp    8609095 <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x1ad>
 8608fcb:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8608fd2:	00 
 8608fd3:	8b 45 14             	mov    0x14(%ebp),%eax
 8608fd6:	89 44 24 10          	mov    %eax,0x10(%esp)
 8608fda:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8608fe1:	00 
 8608fe2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8608fe5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8608fe9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608fec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608ff0:	8b 45 08             	mov    0x8(%ebp),%eax
 8608ff3:	89 04 24             	mov    %eax,(%esp)
 8608ff6:	e8 29 b3 ff ff       	call   8604324 <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi>
 8608ffb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8608ffe:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 8609002:	7e 19                	jle    860901d <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x135>
 8609004:	81 7d f4 c5 00 00 00 	cmpl   $0xc5,-0xc(%ebp)
 860900b:	7f 10                	jg     860901d <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x135>
 860900d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8609010:	01 c0                	add    %eax,%eax
 8609012:	03 45 e8             	add    -0x18(%ebp),%eax
 8609015:	8b 55 10             	mov    0x10(%ebp),%edx
 8609018:	88 50 01             	mov    %dl,0x1(%eax)
 860901b:	eb 78                	jmp    8609095 <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND+0x1ad>
 860901d:	8b 45 08             	mov    0x8(%ebp),%eax
 8609020:	8b 00                	mov    (%eax),%eax
 8609022:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8609029:	ff 
 860902a:	89 04 24             	mov    %eax,(%esp)
 860902d:	e8 6e 4f 04 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8609032:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8609035:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8609038:	01 d2                	add    %edx,%edx
 860903a:	03 55 e8             	add    -0x18(%ebp),%edx
 860903d:	0f b6 52 01          	movzbl 0x1(%edx),%edx
 8609041:	0f be ca             	movsbl %dl,%ecx
 8609044:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8609047:	01 d2                	add    %edx,%edx
 8609049:	03 55 e8             	add    -0x18(%ebp),%edx
 860904c:	0f b6 12             	movzbl (%edx),%edx
 860904f:	0f b6 d2             	movzbl %dl,%edx
 8609052:	89 44 24 24          	mov    %eax,0x24(%esp)
 8609056:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 860905a:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 860905e:	89 54 24 18          	mov    %edx,0x18(%esp)
 8609062:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8609065:	89 44 24 14          	mov    %eax,0x14(%esp)
 8609069:	c7 44 24 10 fc d4 cd 	movl   $0x8cdd4fc,0x10(%esp)
 8609070:	08 
 8609071:	c7 44 24 0c f9 0c 00 	movl   $0xcf9,0xc(%esp)
 8609078:	00 
 8609079:	c7 44 24 08 20 e3 cd 	movl   $0x8cde320,0x8(%esp)
 8609080:	08 
 8609081:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8609088:	08 
 8609089:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8609090:	e8 75 ab 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8609095:	b8 01 00 00 00       	mov    $0x1,%eax
 860909a:	83 c4 44             	add    $0x44,%esp
 860909d:	5b                   	pop    %ebx
 860909e:	5d                   	pop    %ebp
 860909f:	c3                   	ret

```

```c
// SkillSlot::moveComboSkillExtensionQuickSlot @ 0x8608ee8

/* SkillSlot::moveComboSkillExtensionQuickSlot(int, int, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
SkillSlot::moveComboSkillExtensionQuickSlot
          (SkillSlot *this,undefined4 param_1,int param_2,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CSkill *this_00;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_skillslot_buf(this,param_4);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
      iVar4 = G_CDataManager();
      this_00 = (CSkill *)CDataManager::find_skill(iVar4,iVar3);
      if (this_00 == (CSkill *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = CSkill::get_group(this_00);
        iVar3 = get_skillslot_no(this,param_1,uVar1,param_4,0);
        if (iVar3 == -1) {
          iVar3 = insert_skill(this,param_1,uVar1,0,param_4,1);
          if ((iVar3 < 6) || (0xc5 < iVar3)) {
            uVar1 = CUser::get_charac_no(*(CUser **)this,-1);
            LogManager::logFormat
                      (1,"skill_slot.cpp",
                       "bool SkillSlot::moveComboSkillExtensionQuickSlot(int, int, ENUM_SKILL_TREE_KIND)"
                       ,0xcf9,
                       "moveComboSkillExtensionQuickSlot Error slot(%d) index(%d) level(%d)kind(%d) characNo(%d)"
                       ,iVar3,(uint)*(byte *)(iVar3 * 2 + iVar2),
                       (int)*(char *)(iVar3 * 2 + iVar2 + 1),param_4,uVar1);
          }
          else {
            *(char *)(iVar3 * 2 + iVar2 + 1) = (char)param_2;
          }
        }
        else if (*(char *)(iVar3 * 2 + iVar2 + 1) < param_2) {
          *(char *)(iVar3 * 2 + iVar2 + 1) = (char)param_2;
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

```

---

## pullComboSkillExtensionQuickSlot

```asm
// === 08608da4 SkillSlot::pullComboSkillExtensionQuickSlot  [0x08608da4-0x8608ee7] ===
 8608da4:	55                   	push   %ebp
 8608da5:	89 e5                	mov    %esp,%ebp
 8608da7:	53                   	push   %ebx
 8608da8:	83 ec 44             	sub    $0x44,%esp
 8608dab:	8b 45 08             	mov    0x8(%ebp),%eax
 8608dae:	8b 00                	mov    (%eax),%eax
 8608db0:	85 c0                	test   %eax,%eax
 8608db2:	0f 84 25 01 00 00    	je     8608edd <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND+0x139>
 8608db8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608dbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608dbf:	8b 45 08             	mov    0x8(%ebp),%eax
 8608dc2:	89 04 24             	mov    %eax,(%esp)
 8608dc5:	e8 14 da ff ff       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8608dca:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8608dcd:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8608dd1:	0f 84 09 01 00 00    	je     8608ee0 <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND+0x13c>
 8608dd7:	c7 45 f4 c6 00 00 00 	movl   $0xc6,-0xc(%ebp)
 8608dde:	e9 e6 00 00 00       	jmp    8608ec9 <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND+0x125>
 8608de3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8608de6:	01 c0                	add    %eax,%eax
 8608de8:	03 45 f0             	add    -0x10(%ebp),%eax
 8608deb:	0f b6 00             	movzbl (%eax),%eax
 8608dee:	84 c0                	test   %al,%al
 8608df0:	0f 84 ce 00 00 00    	je     8608ec4 <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND+0x120>
 8608df6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8608df9:	01 c0                	add    %eax,%eax
 8608dfb:	03 45 f0             	add    -0x10(%ebp),%eax
 8608dfe:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8608e02:	0f be d0             	movsbl %al,%edx
 8608e05:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8608e08:	01 c0                	add    %eax,%eax
 8608e0a:	03 45 f0             	add    -0x10(%ebp),%eax
 8608e0d:	0f b6 00             	movzbl (%eax),%eax
 8608e10:	0f b6 c0             	movzbl %al,%eax
 8608e13:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8608e16:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8608e1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8608e1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608e22:	8b 45 08             	mov    0x8(%ebp),%eax
 8608e25:	89 04 24             	mov    %eax,(%esp)
 8608e28:	e8 bb 00 00 00       	call   8608ee8 <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND>
 8608e2d:	84 c0                	test   %al,%al
 8608e2f:	74 19                	je     8608e4a <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND+0xa6>
 8608e31:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8608e34:	01 c0                	add    %eax,%eax
 8608e36:	03 45 f0             	add    -0x10(%ebp),%eax
 8608e39:	c6 00 00             	movb   $0x0,(%eax)
 8608e3c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8608e3f:	01 c0                	add    %eax,%eax
 8608e41:	03 45 f0             	add    -0x10(%ebp),%eax
 8608e44:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 8608e48:	eb 7b                	jmp    8608ec5 <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND+0x121>
 8608e4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8608e4d:	8b 00                	mov    (%eax),%eax
 8608e4f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8608e56:	ff 
 8608e57:	89 04 24             	mov    %eax,(%esp)
 8608e5a:	e8 41 51 04 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8608e5f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8608e62:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8608e65:	01 d2                	add    %edx,%edx
 8608e67:	03 55 f0             	add    -0x10(%ebp),%edx
 8608e6a:	0f b6 52 01          	movzbl 0x1(%edx),%edx
 8608e6e:	0f be ca             	movsbl %dl,%ecx
 8608e71:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8608e74:	01 d2                	add    %edx,%edx
 8608e76:	03 55 f0             	add    -0x10(%ebp),%edx
 8608e79:	0f b6 12             	movzbl (%edx),%edx
 8608e7c:	0f b6 d2             	movzbl %dl,%edx
 8608e7f:	89 44 24 24          	mov    %eax,0x24(%esp)
 8608e83:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 8608e87:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8608e8b:	89 54 24 18          	mov    %edx,0x18(%esp)
 8608e8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8608e92:	89 44 24 14          	mov    %eax,0x14(%esp)
 8608e96:	c7 44 24 10 a0 d4 cd 	movl   $0x8cdd4a0,0x10(%esp)
 8608e9d:	08 
 8608e9e:	c7 44 24 0c d7 0c 00 	movl   $0xcd7,0xc(%esp)
 8608ea5:	00 
 8608ea6:	c7 44 24 08 80 e3 cd 	movl   $0x8cde380,0x8(%esp)
 8608ead:	08 
 8608eae:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8608eb5:	08 
 8608eb6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8608ebd:	e8 48 ad 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8608ec2:	eb 01                	jmp    8608ec5 <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND+0x121>
 8608ec4:	90                   	nop
 8608ec5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8608ec9:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 8608ed0:	0f 9e c0             	setle  %al
 8608ed3:	84 c0                	test   %al,%al
 8608ed5:	0f 85 08 ff ff ff    	jne    8608de3 <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND+0x3f>
 8608edb:	eb 04                	jmp    8608ee1 <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND+0x13d>
 8608edd:	90                   	nop
 8608ede:	eb 01                	jmp    8608ee1 <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND+0x13d>
 8608ee0:	90                   	nop
 8608ee1:	83 c4 44             	add    $0x44,%esp
 8608ee4:	5b                   	pop    %ebx
 8608ee5:	5d                   	pop    %ebp
 8608ee6:	c3                   	ret
 8608ee7:	90                   	nop

```

```c
// SkillSlot::pullComboSkillExtensionQuickSlot @ 0x8608da4

/* SkillSlot::pullComboSkillExtensionQuickSlot(ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::pullComboSkillExtensionQuickSlot(SkillSlot *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  
  if ((*(int *)this != 0) && (iVar2 = get_skillslot_buf(this,param_2), iVar2 != 0)) {
    for (local_10 = 0xc6; local_10 < 0xcc; local_10 = local_10 + 1) {
      if (*(char *)(local_10 * 2 + iVar2) != '\0') {
        cVar1 = moveComboSkillExtensionQuickSlot
                          (this,*(undefined1 *)(local_10 * 2 + iVar2),
                           (int)*(char *)(local_10 * 2 + iVar2 + 1),param_2);
        if (cVar1 == '\0') {
          uVar3 = CUser::get_charac_no(*(CUser **)this,-1);
          LogManager::logFormat
                    (1,"skill_slot.cpp",
                     "void SkillSlot::pullComboSkillExtensionQuickSlot(ENUM_SKILL_TREE_KIND)",0xcd7,
                     "pullComboSkillExtensionQuickSlot Error slot(%d) index(%d) level(%d)kind(%d) characNo(%d)"
                     ,local_10,(uint)*(byte *)(local_10 * 2 + iVar2),
                     (int)*(char *)(local_10 * 2 + iVar2 + 1),param_2,uVar3);
        }
        else {
          *(undefined1 *)(local_10 * 2 + iVar2) = 0;
          *(undefined1 *)(local_10 * 2 + iVar2 + 1) = 0;
        }
      }
    }
  }
  return;
}

```

---

## refund_skill

```asm
// === 086069ba SkillSlot::refund_skill  [0x086069ba-0x8607149] ===
 86069ba:	55                   	push   %ebp
 86069bb:	89 e5                	mov    %esp,%ebp
 86069bd:	56                   	push   %esi
 86069be:	53                   	push   %ebx
 86069bf:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 86069c5:	8b 45 24             	mov    0x24(%ebp),%eax
 86069c8:	c7 00 13 00 00 00    	movl   $0x13,(%eax)
 86069ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86069d1:	8b 00                	mov    (%eax),%eax
 86069d3:	85 c0                	test   %eax,%eax
 86069d5:	75 0a                	jne    86069e1 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x27>
 86069d7:	bb fc ff ff ff       	mov    $0xfffffffc,%ebx
 86069dc:	e9 5d 07 00 00       	jmp    860713e <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x784>
 86069e1:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 86069e8:	e8 ae 57 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 86069ed:	8b 55 0c             	mov    0xc(%ebp),%edx
 86069f0:	89 54 24 08          	mov    %edx,0x8(%esp)
 86069f4:	8b 55 14             	mov    0x14(%ebp),%edx
 86069f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86069fb:	89 04 24             	mov    %eax,(%esp)
 86069fe:	e8 9f 93 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8606a03:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8606a06:	83 7d b0 00          	cmpl   $0x0,-0x50(%ebp)
 8606a0a:	75 0a                	jne    8606a16 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x5c>
 8606a0c:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8606a11:	e9 28 07 00 00       	jmp    860713e <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x784>
 8606a16:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8606a19:	89 04 24             	mov    %eax,(%esp)
 8606a1c:	e8 75 e1 d6 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8606a21:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8606a24:	83 7d b4 04          	cmpl   $0x4,-0x4c(%ebp)
 8606a28:	75 13                	jne    8606a3d <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x83>
 8606a2a:	8b 45 24             	mov    0x24(%ebp),%eax
 8606a2d:	c7 00 07 00 00 00    	movl   $0x7,(%eax)
 8606a33:	bb fb ff ff ff       	mov    $0xfffffffb,%ebx
 8606a38:	e9 01 07 00 00       	jmp    860713e <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x784>
 8606a3d:	e8 65 39 ad ff       	call   80da3a7 <_Z11G_GameWorldv>
 8606a42:	89 04 24             	mov    %eax,(%esp)
 8606a45:	e8 d4 d9 c2 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 8606a4a:	84 c0                	test   %al,%al
 8606a4c:	74 2a                	je     8606a78 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0xbe>
 8606a4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8606a51:	8b 00                	mov    (%eax),%eax
 8606a53:	89 04 24             	mov    %eax,(%esp)
 8606a56:	e8 ef 83 b9 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 8606a5b:	83 f8 00             	cmp    $0x0,%eax
 8606a5e:	0f 9d c0             	setge  %al
 8606a61:	84 c0                	test   %al,%al
 8606a63:	75 13                	jne    8606a78 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0xbe>
 8606a65:	8b 45 24             	mov    0x24(%ebp),%eax
 8606a68:	c7 00 07 00 00 00    	movl   $0x7,(%eax)
 8606a6e:	bb fd ff ff ff       	mov    $0xfffffffd,%ebx
 8606a73:	e9 c6 06 00 00       	jmp    860713e <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x784>
 8606a78:	8b 45 08             	mov    0x8(%ebp),%eax
 8606a7b:	8b 00                	mov    (%eax),%eax
 8606a7d:	89 04 24             	mov    %eax,(%esp)
 8606a80:	e8 b7 88 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606a85:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8606a8c:	00 
 8606a8d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8606a91:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8606a94:	89 44 24 08          	mov    %eax,0x8(%esp)
 8606a98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8606a9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606a9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8606aa2:	89 04 24             	mov    %eax,(%esp)
 8606aa5:	e8 dc df ff ff       	call   8604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>
 8606aaa:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8606aad:	83 7d b8 ff          	cmpl   $0xffffffff,-0x48(%ebp)
 8606ab1:	75 0a                	jne    8606abd <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x103>
 8606ab3:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8606ab8:	e9 81 06 00 00       	jmp    860713e <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x784>
 8606abd:	8b 45 08             	mov    0x8(%ebp),%eax
 8606ac0:	8b 00                	mov    (%eax),%eax
 8606ac2:	89 04 24             	mov    %eax,(%esp)
 8606ac5:	e8 72 88 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606aca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606ace:	8b 45 08             	mov    0x8(%ebp),%eax
 8606ad1:	89 04 24             	mov    %eax,(%esp)
 8606ad4:	e8 05 fd ff ff       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8606ad9:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8606adc:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 8606ae0:	75 0a                	jne    8606aec <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x132>
 8606ae2:	bb fc ff ff ff       	mov    $0xfffffffc,%ebx
 8606ae7:	e9 52 06 00 00       	jmp    860713e <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x784>
 8606aec:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8606aef:	01 c0                	add    %eax,%eax
 8606af1:	03 45 bc             	add    -0x44(%ebp),%eax
 8606af4:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8606af8:	0f be c0             	movsbl %al,%eax
 8606afb:	2b 45 20             	sub    0x20(%ebp),%eax
 8606afe:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8606b01:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8606b05:	79 0a                	jns    8606b11 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x157>
 8606b07:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8606b0c:	e9 2d 06 00 00       	jmp    860713e <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x784>
 8606b11:	8b 45 08             	mov    0x8(%ebp),%eax
 8606b14:	8b 00                	mov    (%eax),%eax
 8606b16:	89 04 24             	mov    %eax,(%esp)
 8606b19:	e8 76 8d c2 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 8606b1e:	89 c3                	mov    %eax,%ebx
 8606b20:	e8 76 56 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8606b25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8606b29:	89 04 24             	mov    %eax,(%esp)
 8606b2c:	e8 c1 4a c2 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 8606b31:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8606b34:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 8606b38:	74 59                	je     8606b93 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x1d9>
 8606b3a:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8606b41:	eb 38                	jmp    8606b7b <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x1c1>
 8606b43:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8606b46:	8d 50 0c             	lea    0xc(%eax),%edx
 8606b49:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8606b4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606b50:	89 14 24             	mov    %edx,(%esp)
 8606b53:	e8 4c 3d ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8606b58:	8b 00                	mov    (%eax),%eax
 8606b5a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8606b5d:	0f 94 c0             	sete   %al
 8606b60:	84 c0                	test   %al,%al
 8606b62:	74 13                	je     8606b77 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x1bd>
 8606b64:	8b 45 24             	mov    0x24(%ebp),%eax
 8606b67:	c7 00 07 00 00 00    	movl   $0x7,(%eax)
 8606b6d:	bb fb ff ff ff       	mov    $0xfffffffb,%ebx
 8606b72:	e9 c7 05 00 00       	jmp    860713e <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x784>
 8606b77:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8606b7b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8606b7e:	83 c0 0c             	add    $0xc,%eax
 8606b81:	89 04 24             	mov    %eax,(%esp)
 8606b84:	e8 8b 6c ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8606b89:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 8606b8c:	0f 97 c0             	seta   %al
 8606b8f:	84 c0                	test   %al,%al
 8606b91:	75 b0                	jne    8606b43 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x189>
 8606b93:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8606b96:	89 04 24             	mov    %eax,(%esp)
 8606b99:	e8 f0 f0 ba ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8606b9e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8606ba1:	89 04 24             	mov    %eax,(%esp)
 8606ba4:	e8 2d de b2 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8606ba9:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8606bac:	89 44 24 10          	mov    %eax,0x10(%esp)
 8606bb0:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8606bb3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8606bb7:	8b 45 18             	mov    0x18(%ebp),%eax
 8606bba:	89 44 24 08          	mov    %eax,0x8(%esp)
 8606bbe:	8b 45 14             	mov    0x14(%ebp),%eax
 8606bc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606bc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8606bc8:	89 04 24             	mov    %eax,(%esp)
 8606bcb:	e8 7a 05 00 00       	call   860714a <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE>
 8606bd0:	c1 e8 1f             	shr    $0x1f,%eax
 8606bd3:	84 c0                	test   %al,%al
 8606bd5:	74 0a                	je     8606be1 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x227>
 8606bd7:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8606bdc:	e9 52 05 00 00       	jmp    8607133 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x779>
 8606be1:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8606be8:	eb 5b                	jmp    8606c45 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x28b>
 8606bea:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8606bed:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606bf1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8606bf4:	89 04 24             	mov    %eax,(%esp)
 8606bf7:	e8 a8 3c ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8606bfc:	8b 50 04             	mov    0x4(%eax),%edx
 8606bff:	8b 00                	mov    (%eax),%eax
 8606c01:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8606c04:	89 55 ac             	mov    %edx,-0x54(%ebp)
 8606c07:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8606c0a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8606c0d:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8606c10:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8606c13:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8606c16:	01 c0                	add    %eax,%eax
 8606c18:	03 45 bc             	add    -0x44(%ebp),%eax
 8606c1b:	0f b6 00             	movzbl (%eax),%eax
 8606c1e:	0f b6 c0             	movzbl %al,%eax
 8606c21:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 8606c24:	75 1b                	jne    8606c41 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x287>
 8606c26:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8606c29:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 8606c2c:	7d 2e                	jge    8606c5c <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x2a2>
 8606c2e:	8b 45 24             	mov    0x24(%ebp),%eax
 8606c31:	c7 00 07 00 00 00    	movl   $0x7,(%eax)
 8606c37:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8606c3c:	e9 f2 04 00 00       	jmp    8607133 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x779>
 8606c41:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8606c45:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8606c48:	89 04 24             	mov    %eax,(%esp)
 8606c4b:	e8 c4 6b ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8606c50:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8606c53:	0f 9f c0             	setg   %al
 8606c56:	84 c0                	test   %al,%al
 8606c58:	75 90                	jne    8606bea <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x230>
 8606c5a:	eb 01                	jmp    8606c5d <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x2a3>
 8606c5c:	90                   	nop
 8606c5d:	8d 45 90             	lea    -0x70(%ebp),%eax
 8606c60:	89 04 24             	mov    %eax,(%esp)
 8606c63:	e8 6e dd b2 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8606c68:	8b 45 08             	mov    0x8(%ebp),%eax
 8606c6b:	8b 00                	mov    (%eax),%eax
 8606c6d:	89 04 24             	mov    %eax,(%esp)
 8606c70:	e8 ab 72 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8606c75:	89 c3                	mov    %eax,%ebx
 8606c77:	e8 1f 55 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8606c7c:	8b 40 10             	mov    0x10(%eax),%eax
 8606c7f:	8d 55 90             	lea    -0x70(%ebp),%edx
 8606c82:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8606c86:	8b 55 0c             	mov    0xc(%ebp),%edx
 8606c89:	89 54 24 08          	mov    %edx,0x8(%esp)
 8606c8d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8606c91:	89 04 24             	mov    %eax,(%esp)
 8606c94:	e8 8f b3 d4 ff       	call   8352028 <_ZN10CSkillList23get_post_learning_skillEiiRSt6vectorISt4pairIiiESaIS2_EE>
 8606c99:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8606ca0:	eb 7f                	jmp    8606d21 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x367>
 8606ca2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8606ca5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606ca9:	8d 45 90             	lea    -0x70(%ebp),%eax
 8606cac:	89 04 24             	mov    %eax,(%esp)
 8606caf:	e8 f0 3b ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8606cb4:	8b 00                	mov    (%eax),%eax
 8606cb6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8606cb9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8606cbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606cc0:	8d 45 90             	lea    -0x70(%ebp),%eax
 8606cc3:	89 04 24             	mov    %eax,(%esp)
 8606cc6:	e8 d9 3b ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8606ccb:	8b 40 04             	mov    0x4(%eax),%eax
 8606cce:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8606cd1:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8606cd8:	eb 32                	jmp    8606d0c <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x352>
 8606cda:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8606cdd:	01 c0                	add    %eax,%eax
 8606cdf:	03 45 bc             	add    -0x44(%ebp),%eax
 8606ce2:	0f b6 00             	movzbl (%eax),%eax
 8606ce5:	0f b6 c0             	movzbl %al,%eax
 8606ce8:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8606ceb:	75 1b                	jne    8606d08 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x34e>
 8606ced:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8606cf0:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8606cf3:	7d 27                	jge    8606d1c <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x362>
 8606cf5:	8b 45 24             	mov    0x24(%ebp),%eax
 8606cf8:	c7 00 14 00 00 00    	movl   $0x14,(%eax)
 8606cfe:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8606d03:	e9 03 04 00 00       	jmp    860710b <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x751>
 8606d08:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8606d0c:	81 7d e8 cb 00 00 00 	cmpl   $0xcb,-0x18(%ebp)
 8606d13:	0f 9e c0             	setle  %al
 8606d16:	84 c0                	test   %al,%al
 8606d18:	75 c0                	jne    8606cda <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x320>
 8606d1a:	eb 01                	jmp    8606d1d <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x363>
 8606d1c:	90                   	nop
 8606d1d:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8606d21:	8d 45 90             	lea    -0x70(%ebp),%eax
 8606d24:	89 04 24             	mov    %eax,(%esp)
 8606d27:	e8 e8 6a ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8606d2c:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 8606d2f:	0f 9f c0             	setg   %al
 8606d32:	84 c0                	test   %al,%al
 8606d34:	0f 85 68 ff ff ff    	jne    8606ca2 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x2e8>
 8606d3a:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8606d3d:	01 c0                	add    %eax,%eax
 8606d3f:	03 45 bc             	add    -0x44(%ebp),%eax
 8606d42:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8606d46:	0f be c0             	movsbl %al,%eax
 8606d49:	89 44 24 08          	mov    %eax,0x8(%esp)
 8606d4d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8606d50:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606d54:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8606d57:	89 04 24             	mov    %eax,(%esp)
 8606d5a:	e8 1d 95 d4 ff       	call   835027c <_ZNK6CSkill25get_need_sp_sfp_for_levelEii>
 8606d5f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8606d62:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8606d65:	89 44 24 08          	mov    %eax,0x8(%esp)
 8606d69:	8b 45 18             	mov    0x18(%ebp),%eax
 8606d6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606d70:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8606d73:	89 04 24             	mov    %eax,(%esp)
 8606d76:	e8 71 97 d4 ff       	call   83504ec <_ZNK6CSkill11IsStealableEii>
 8606d7b:	84 c0                	test   %al,%al
 8606d7d:	74 1d                	je     8606d9c <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x3e2>
 8606d7f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8606d82:	89 04 24             	mov    %eax,(%esp)
 8606d85:	e8 ce 25 00 00       	call   8609358 <_ZNK6CSkill17GetStealSPPenaltyEv>
 8606d8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606d8e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8606d91:	89 04 24             	mov    %eax,(%esp)
 8606d94:	e8 09 42 49 00       	call   8a9afa2 <_Z22getSkillSpendSPOnStealii>
 8606d99:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8606d9c:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8606d9f:	01 c0                	add    %eax,%eax
 8606da1:	03 45 bc             	add    -0x44(%ebp),%eax
 8606da4:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8606da7:	01 d2                	add    %edx,%edx
 8606da9:	03 55 bc             	add    -0x44(%ebp),%edx
 8606dac:	0f b6 52 01          	movzbl 0x1(%edx),%edx
 8606db0:	89 d1                	mov    %edx,%ecx
 8606db2:	8b 55 20             	mov    0x20(%ebp),%edx
 8606db5:	89 cb                	mov    %ecx,%ebx
 8606db7:	28 d3                	sub    %dl,%bl
 8606db9:	89 da                	mov    %ebx,%edx
 8606dbb:	88 50 01             	mov    %dl,0x1(%eax)
 8606dbe:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8606dc1:	01 c0                	add    %eax,%eax
 8606dc3:	03 45 bc             	add    -0x44(%ebp),%eax
 8606dc6:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8606dca:	84 c0                	test   %al,%al
 8606dcc:	75 0b                	jne    8606dd9 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x41f>
 8606dce:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8606dd1:	01 c0                	add    %eax,%eax
 8606dd3:	03 45 bc             	add    -0x44(%ebp),%eax
 8606dd6:	c6 00 00             	movb   $0x0,(%eax)
 8606dd9:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8606ddc:	89 04 24             	mov    %eax,(%esp)
 8606ddf:	e8 ce 47 c2 ff       	call   822b5b2 <_ZNK6CSkill14IsSpecialSkillEv>
 8606de4:	83 f0 01             	xor    $0x1,%eax
 8606de7:	84 c0                	test   %al,%al
 8606de9:	0f 84 6f 01 00 00    	je     8606f5e <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x5a4>
 8606def:	8b 45 08             	mov    0x8(%ebp),%eax
 8606df2:	8b 00                	mov    (%eax),%eax
 8606df4:	89 04 24             	mov    %eax,(%esp)
 8606df7:	e8 40 85 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606dfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606e00:	8b 45 08             	mov    0x8(%ebp),%eax
 8606e03:	89 04 24             	mov    %eax,(%esp)
 8606e06:	e8 1d c7 ff ff       	call   8603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>
 8606e0b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8606e0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8606e11:	8b 00                	mov    (%eax),%eax
 8606e13:	89 04 24             	mov    %eax,(%esp)
 8606e16:	e8 21 85 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606e1b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8606e1e:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8606e21:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8606e24:	89 44 24 08          	mov    %eax,0x8(%esp)
 8606e28:	89 54 24 04          	mov    %edx,0x4(%esp)
 8606e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8606e2f:	89 04 24             	mov    %eax,(%esp)
 8606e32:	e8 c1 c6 ff ff       	call   86034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>
 8606e37:	8b 45 08             	mov    0x8(%ebp),%eax
 8606e3a:	8b 00                	mov    (%eax),%eax
 8606e3c:	89 04 24             	mov    %eax,(%esp)
 8606e3f:	e8 f8 84 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606e44:	89 c3                	mov    %eax,%ebx
 8606e46:	8b 45 08             	mov    0x8(%ebp),%eax
 8606e49:	8b 00                	mov    (%eax),%eax
 8606e4b:	89 04 24             	mov    %eax,(%esp)
 8606e4e:	e8 cd 70 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8606e53:	8b 55 08             	mov    0x8(%ebp),%edx
 8606e56:	8b 12                	mov    (%edx),%edx
 8606e58:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8606e5e:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8606e65:	00 
 8606e66:	8b 55 20             	mov    0x20(%ebp),%edx
 8606e69:	89 54 24 10          	mov    %edx,0x10(%esp)
 8606e6d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8606e70:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8606e74:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8606e78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606e7c:	89 0c 24             	mov    %ecx,(%esp)
 8606e7f:	e8 ea bc 07 00       	call   8682b6e <_ZN15cUserHistoryLog8SkillDelEiiii15eSkillDelReason>
 8606e84:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8606e87:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8606e8a:	8d 1c 02             	lea    (%edx,%eax,1),%ebx
 8606e8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8606e90:	8b 00                	mov    (%eax),%eax
 8606e92:	89 04 24             	mov    %eax,(%esp)
 8606e95:	e8 a2 84 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606e9a:	8b 55 08             	mov    0x8(%ebp),%edx
 8606e9d:	8b 12                	mov    (%edx),%edx
 8606e9f:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8606ea5:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8606eac:	00 
 8606ead:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8606eb0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8606eb4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8606eb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606ebc:	89 0c 24             	mov    %ecx,(%esp)
 8606ebf:	e8 ea bc 07 00       	call   8682bae <_ZN15cUserHistoryLog5SPAddEiii12eSPAddReason>
 8606ec4:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 8606ec8:	0f 8e 1a 02 00 00    	jle    86070e8 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x72e>
 8606ece:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8606ed1:	89 c2                	mov    %eax,%edx
 8606ed3:	c1 fa 1f             	sar    $0x1f,%edx
 8606ed6:	f7 7d 20             	idivl  0x20(%ebp)
 8606ed9:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 8606ede:	0f 8e 04 02 00 00    	jle    86070e8 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x72e>
 8606ee4:	8b 45 08             	mov    0x8(%ebp),%eax
 8606ee7:	8b 00                	mov    (%eax),%eax
 8606ee9:	89 04 24             	mov    %eax,(%esp)
 8606eec:	e8 5d 4d ac ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8606ef1:	89 c3                	mov    %eax,%ebx
 8606ef3:	8b 45 08             	mov    0x8(%ebp),%eax
 8606ef6:	8b 00                	mov    (%eax),%eax
 8606ef8:	89 04 24             	mov    %eax,(%esp)
 8606efb:	e8 6e 34 ad ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8606f00:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8606f07:	00 
 8606f08:	89 04 24             	mov    %eax,(%esp)
 8606f0b:	e8 3b 21 b0 ff       	call   810904b <_Z14NumberToStringji>
 8606f10:	8b 55 20             	mov    0x20(%ebp),%edx
 8606f13:	89 54 24 24          	mov    %edx,0x24(%esp)
 8606f17:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8606f1a:	89 54 24 20          	mov    %edx,0x20(%esp)
 8606f1e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8606f21:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8606f25:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8606f29:	89 44 24 14          	mov    %eax,0x14(%esp)
 8606f2d:	c7 44 24 10 3c d3 cd 	movl   $0x8cdd33c,0x10(%esp)
 8606f34:	08 
 8606f35:	c7 44 24 0c 21 09 00 	movl   $0x921,0xc(%esp)
 8606f3c:	00 
 8606f3d:	c7 44 24 08 a0 e5 cd 	movl   $0x8cde5a0,0x8(%esp)
 8606f44:	08 
 8606f45:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8606f4c:	08 
 8606f4d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8606f54:	e8 b1 cc 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8606f59:	e9 8a 01 00 00       	jmp    86070e8 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x72e>
 8606f5e:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8606f62:	8b 45 08             	mov    0x8(%ebp),%eax
 8606f65:	8b 00                	mov    (%eax),%eax
 8606f67:	89 04 24             	mov    %eax,(%esp)
 8606f6a:	e8 cd 83 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606f6f:	83 f8 ff             	cmp    $0xffffffff,%eax
 8606f72:	74 11                	je     8606f85 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x5cb>
 8606f74:	8b 45 08             	mov    0x8(%ebp),%eax
 8606f77:	8b 00                	mov    (%eax),%eax
 8606f79:	89 04 24             	mov    %eax,(%esp)
 8606f7c:	e8 bb 83 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606f81:	85 c0                	test   %eax,%eax
 8606f83:	75 07                	jne    8606f8c <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x5d2>
 8606f85:	b8 01 00 00 00       	mov    $0x1,%eax
 8606f8a:	eb 05                	jmp    8606f91 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x5d7>
 8606f8c:	b8 00 00 00 00       	mov    $0x0,%eax
 8606f91:	84 c0                	test   %al,%al
 8606f93:	74 06                	je     8606f9b <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x5e1>
 8606f95:	c6 45 f3 02          	movb   $0x2,-0xd(%ebp)
 8606f99:	eb 04                	jmp    8606f9f <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x5e5>
 8606f9b:	c6 45 f3 03          	movb   $0x3,-0xd(%ebp)
 8606f9f:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
 8606fa3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8606fa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8606faa:	89 04 24             	mov    %eax,(%esp)
 8606fad:	e8 40 c6 ff ff       	call   86035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>
 8606fb2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8606fb5:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
 8606fb9:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8606fbc:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8606fbf:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8606fc2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8606fc6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8606fca:	8b 45 08             	mov    0x8(%ebp),%eax
 8606fcd:	89 04 24             	mov    %eax,(%esp)
 8606fd0:	e8 bb c5 ff ff       	call   8603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>
 8606fd5:	8b 45 08             	mov    0x8(%ebp),%eax
 8606fd8:	8b 00                	mov    (%eax),%eax
 8606fda:	89 04 24             	mov    %eax,(%esp)
 8606fdd:	e8 5a 83 c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8606fe2:	89 c3                	mov    %eax,%ebx
 8606fe4:	8b 45 08             	mov    0x8(%ebp),%eax
 8606fe7:	8b 00                	mov    (%eax),%eax
 8606fe9:	89 04 24             	mov    %eax,(%esp)
 8606fec:	e8 2f 6f af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8606ff1:	8b 55 08             	mov    0x8(%ebp),%edx
 8606ff4:	8b 12                	mov    (%edx),%edx
 8606ff6:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8606ffc:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8607003:	00 
 8607004:	8b 55 20             	mov    0x20(%ebp),%edx
 8607007:	89 54 24 10          	mov    %edx,0x10(%esp)
 860700b:	8b 55 0c             	mov    0xc(%ebp),%edx
 860700e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8607012:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8607016:	89 44 24 04          	mov    %eax,0x4(%esp)
 860701a:	89 0c 24             	mov    %ecx,(%esp)
 860701d:	e8 4c bb 07 00       	call   8682b6e <_ZN15cUserHistoryLog8SkillDelEiiii15eSkillDelReason>
 8607022:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8607025:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8607028:	8d 1c 02             	lea    (%edx,%eax,1),%ebx
 860702b:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
 860702f:	8b 55 08             	mov    0x8(%ebp),%edx
 8607032:	8b 12                	mov    (%edx),%edx
 8607034:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 860703a:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8607041:	00 
 8607042:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8607045:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8607049:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 860704d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607051:	89 0c 24             	mov    %ecx,(%esp)
 8607054:	e8 c9 bb 07 00       	call   8682c22 <_ZN15cUserHistoryLog6SFPAddEiii12eSPAddReason>
 8607059:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 860705d:	0f 8e 85 00 00 00    	jle    86070e8 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x72e>
 8607063:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8607066:	89 c2                	mov    %eax,%edx
 8607068:	c1 fa 1f             	sar    $0x1f,%edx
 860706b:	f7 7d 20             	idivl  0x20(%ebp)
 860706e:	83 f8 0a             	cmp    $0xa,%eax
 8607071:	7e 75                	jle    86070e8 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x72e>
 8607073:	8b 45 08             	mov    0x8(%ebp),%eax
 8607076:	8b 00                	mov    (%eax),%eax
 8607078:	89 04 24             	mov    %eax,(%esp)
 860707b:	e8 ce 4b ac ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8607080:	89 c3                	mov    %eax,%ebx
 8607082:	8b 45 08             	mov    0x8(%ebp),%eax
 8607085:	8b 00                	mov    (%eax),%eax
 8607087:	89 04 24             	mov    %eax,(%esp)
 860708a:	e8 df 32 ad ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 860708f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8607096:	00 
 8607097:	89 04 24             	mov    %eax,(%esp)
 860709a:	e8 ac 1f b0 ff       	call   810904b <_Z14NumberToStringji>
 860709f:	8b 55 20             	mov    0x20(%ebp),%edx
 86070a2:	89 54 24 24          	mov    %edx,0x24(%esp)
 86070a6:	8b 55 d0             	mov    -0x30(%ebp),%edx
 86070a9:	89 54 24 20          	mov    %edx,0x20(%esp)
 86070ad:	8b 55 0c             	mov    0xc(%ebp),%edx
 86070b0:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 86070b4:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 86070b8:	89 44 24 14          	mov    %eax,0x14(%esp)
 86070bc:	c7 44 24 10 84 d3 cd 	movl   $0x8cdd384,0x10(%esp)
 86070c3:	08 
 86070c4:	c7 44 24 0c 3b 09 00 	movl   $0x93b,0xc(%esp)
 86070cb:	00 
 86070cc:	c7 44 24 08 a0 e5 cd 	movl   $0x8cde5a0,0x8(%esp)
 86070d3:	08 
 86070d4:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 86070db:	08 
 86070dc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86070e3:	e8 22 cb 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86070e8:	8b 45 24             	mov    0x24(%ebp),%eax
 86070eb:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 86070f1:	8b 5d b8             	mov    -0x48(%ebp),%ebx
 86070f4:	eb 15                	jmp    860710b <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x751>
 86070f6:	89 d3                	mov    %edx,%ebx
 86070f8:	89 c6                	mov    %eax,%esi
 86070fa:	8d 45 90             	lea    -0x70(%ebp),%eax
 86070fd:	89 04 24             	mov    %eax,(%esp)
 8607100:	e8 e5 d8 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8607105:	89 f0                	mov    %esi,%eax
 8607107:	89 da                	mov    %ebx,%edx
 8607109:	eb 0d                	jmp    8607118 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x75e>
 860710b:	8d 45 90             	lea    -0x70(%ebp),%eax
 860710e:	89 04 24             	mov    %eax,(%esp)
 8607111:	e8 d4 d8 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8607116:	eb 1b                	jmp    8607133 <_ZN9SkillSlot12refund_skillEiiiiiiRi+0x779>
 8607118:	89 d3                	mov    %edx,%ebx
 860711a:	89 c6                	mov    %eax,%esi
 860711c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 860711f:	89 04 24             	mov    %eax,(%esp)
 8607122:	e8 c3 d8 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8607127:	89 f0                	mov    %esi,%eax
 8607129:	89 da                	mov    %ebx,%edx
 860712b:	89 04 24             	mov    %eax,(%esp)
 860712e:	e8 1d c6 4d 00       	call   8ae3750 <_Unwind_Resume>
 8607133:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8607136:	89 04 24             	mov    %eax,(%esp)
 8607139:	e8 ac d8 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 860713e:	89 d8                	mov    %ebx,%eax
 8607140:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 8607146:	5b                   	pop    %ebx
 8607147:	5e                   	pop    %esi
 8607148:	5d                   	pop    %ebp
 8607149:	c3                   	ret

```

```c
// SkillSlot::refund_skill @ 0x86069ba

/* SkillSlot::refund_skill(int, int, int, int, int, int, int&) */

int __thiscall
SkillSlot::refund_skill
          (SkillSlot *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int *param_7)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_74 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_68 [12];
  uint local_5c;
  uint local_58;
  CSkill *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  *param_7 = 0x13;
  if (*(int *)this == 0) {
    iVar9 = -4;
  }
  else {
    local_54 = (CSkill *)0x0;
    iVar9 = G_CDataManager();
    local_54 = (CSkill *)CDataManager::find_skill(iVar9,param_3);
    if (local_54 == (CSkill *)0x0) {
      iVar9 = -1;
    }
    else {
      local_50 = CSkill::get_group(local_54);
      if (local_50 == 4) {
        *param_7 = 7;
        iVar9 = -5;
      }
      else {
        this_00 = (GameWorld *)G_GameWorld();
        cVar2 = GameWorld::IsPvPSkilTreeChannel(this_00);
        if ((cVar2 == '\0') ||
           (iVar9 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)this), -1 < iVar9)) {
          uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
          local_4c = get_skillslot_no(this,param_1,local_50,uVar3,1);
          if (local_4c == -1) {
            iVar9 = -1;
          }
          else {
            uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
            local_48 = get_skillslot_buf(this,uVar3);
            if (local_48 == 0) {
              iVar9 = -4;
            }
            else {
              local_44 = *(char *)(local_4c * 2 + local_48 + 1) - param_6;
              if (local_44 < 0) {
                iVar9 = -1;
              }
              else {
                CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
                iVar9 = G_CDataManager();
                local_40 = CDataManager::GetExpertJobScript(iVar9);
                if (local_40 != 0) {
                  local_30 = 0;
                  while (uVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                 ::size((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                         *)(local_40 + 0xc)), local_30 < uVar5) {
                    piVar4 = (int *)std::
                                    vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                    operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                *)(local_40 + 0xc),local_30);
                    if (*piVar4 == param_1) {
                      *param_7 = 7;
                      return -5;
                    }
                    local_30 = local_30 + 1;
                  }
                }
                std::pair<int,int>::pair((pair<int,int> *)&local_5c);
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_68)
                ;
                    /* try { // try from 08606bcb to 08606c67 has its CatchHandler @ 08607118 */
                iVar9 = get_give_skill(this,param_3,param_4,param_5,(vector *)local_68);
                if (iVar9 < 0) {
                  iVar9 = -1;
                }
                else {
                  local_2c = 0;
                  while (iVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                 ::size(local_68), (int)local_2c < iVar9) {
                    puVar7 = (uint *)std::
                                     vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                     operator[](local_68,local_2c);
                    local_58 = puVar7[1];
                    local_5c = *puVar7;
                    local_3c = local_5c;
                    local_38 = local_58;
                    if (*(byte *)(local_4c * 2 + local_48) == local_5c) {
                      if (local_44 < (int)local_58) {
                        *param_7 = 7;
                        iVar9 = -1;
                        goto LAB_08607133;
                      }
                      break;
                    }
                    local_2c = local_2c + 1;
                  }
                  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                            (local_74);
                  iVar9 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                    /* try { // try from 08606c77 to 086070e7 has its CatchHandler @ 086070f6 */
                  iVar6 = G_CDataManager();
                  CSkillList::get_post_learning_skill
                            (*(int *)(iVar6 + 0x10),iVar9,(vector *)param_1);
                  local_28 = 0;
                  while (iVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                 ::size(local_74), (int)local_28 < iVar9) {
                    puVar7 = (uint *)std::
                                     vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                     operator[](local_74,local_28);
                    local_24 = *puVar7;
                    iVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                            operator[](local_74,local_28);
                    local_20 = *(int *)(iVar9 + 4);
                    for (local_1c = 0; local_1c < 0xcc; local_1c = local_1c + 1) {
                      if (*(byte *)(local_1c * 2 + local_48) == local_24) {
                        if (local_44 < local_20) {
                          *param_7 = 0x14;
                          iVar9 = -1;
                          goto LAB_0860710b;
                        }
                        break;
                      }
                    }
                    local_28 = local_28 + 1;
                  }
                  local_34 = CSkill::get_need_sp_sfp_for_level
                                       (local_54,local_44,
                                        (int)*(char *)(local_4c * 2 + local_48 + 1));
                  cVar2 = CSkill::IsStealable(local_54,param_4,param_5);
                  if (cVar2 != '\0') {
                    iVar9 = CSkill::GetStealSPPenalty(local_54);
                    local_34 = getSkillSpendSPOnSteal(local_34,iVar9);
                  }
                  *(char *)(local_4c * 2 + local_48 + 1) =
                       *(char *)(local_4c * 2 + local_48 + 1) - (char)param_6;
                  if (*(char *)(local_4c * 2 + local_48 + 1) == '\0') {
                    *(undefined1 *)(local_4c * 2 + local_48) = 0;
                  }
                  cVar2 = CSkill::IsSpecialSkill(local_54);
                  if (cVar2 == '\x01') {
                    local_11 = 0;
                    iVar9 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    if ((iVar9 == -1) ||
                       (iVar9 = CUserCharacInfo::GetCurCharacSkillTreeIndex
                                          (*(CUserCharacInfo **)this), iVar9 == 0)) {
                      bVar1 = true;
                    }
                    else {
                      bVar1 = false;
                    }
                    if (bVar1) {
                      local_11 = '\x02';
                    }
                    else {
                      local_11 = '\x03';
                    }
                    local_10 = get_remain_sfp_at_index(this,local_11);
                    set_remain_sfp_at_index(this,local_10 + local_34,(int)local_11);
                    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    uVar8 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                    cUserHistoryLog::SkillDel
                              ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar8,uVar3,param_1,
                               param_6,1);
                    cUserHistoryLog::SFPAdd
                              ((cUserHistoryLog *)(*(int *)this + 0x79700),(int)local_11,
                               local_10 + local_34,local_34,2);
                    if ((0 < param_6) && (10 < local_34 / param_6)) {
                      uVar3 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
                      uVar5 = CUser::get_acc_id(*(CUser **)this);
                      uVar8 = NumberToString(uVar5,0);
                      LogManager::logFormat
                                (1,"skill_slot.cpp",
                                 "int SkillSlot::refund_skill(int, int, int, int, int, int, int&)",
                                 0x93b,
                                 "Wrong refund TP skill mId:%s char_no:%d rSkillIdx:%d rSp:%d rCount:%d"
                                 ,uVar8,uVar3,param_1,local_34,param_6);
                    }
                  }
                  else {
                    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    local_18 = get_remain_sp_at_index(this,uVar3);
                    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    set_remain_sp_at_index(this,local_18 + local_34,uVar3);
                    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    uVar8 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                    cUserHistoryLog::SkillDel
                              ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar8,uVar3,param_1,
                               param_6,1);
                    iVar9 = local_18 + local_34;
                    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    cUserHistoryLog::SPAdd
                              ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar3,iVar9,local_34,2);
                    if ((0 < param_6) && (1000 < local_34 / param_6)) {
                      uVar3 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
                      uVar5 = CUser::get_acc_id(*(CUser **)this);
                      uVar8 = NumberToString(uVar5,0);
                      LogManager::logFormat
                                (1,"skill_slot.cpp",
                                 "int SkillSlot::refund_skill(int, int, int, int, int, int, int&)",
                                 0x921,
                                 "Wrong refund SP skill mId:%s char_no:%d rSkillIdx:%d rSp:%d rCount:%d"
                                 ,uVar8,uVar3,param_1,local_34,param_6);
                    }
                  }
                  *param_7 = 0;
                  iVar9 = local_4c;
LAB_0860710b:
                    /* try { // try from 08607111 to 08607115 has its CatchHandler @ 08607118 */
                  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                            (local_74);
                }
LAB_08607133:
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                          (local_68);
              }
            }
          }
        }
        else {
          *param_7 = 7;
          iVar9 = -3;
        }
      }
    }
  }
  return iVar9;
}

```

---

## resetComboSkill

```asm
// === 08608cf6 SkillSlot::resetComboSkill  [0x08608cf6-0x8608d57] ===
 8608cf6:	55                   	push   %ebp
 8608cf7:	89 e5                	mov    %esp,%ebp
 8608cf9:	83 ec 28             	sub    $0x28,%esp
 8608cfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608cff:	83 f8 ff             	cmp    $0xffffffff,%eax
 8608d02:	74 3c                	je     8608d40 <_ZN9SkillSlot15resetComboSkillE20ENUM_SKILL_TREE_KIND+0x4a>
 8608d04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608d07:	85 c0                	test   %eax,%eax
 8608d09:	74 35                	je     8608d40 <_ZN9SkillSlot15resetComboSkillE20ENUM_SKILL_TREE_KIND+0x4a>
 8608d0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608d0e:	89 44 24 14          	mov    %eax,0x14(%esp)
 8608d12:	c7 44 24 10 74 d4 cd 	movl   $0x8cdd474,0x10(%esp)
 8608d19:	08 
 8608d1a:	c7 44 24 0c ab 0c 00 	movl   $0xcab,0xc(%esp)
 8608d21:	00 
 8608d22:	c7 44 24 08 e0 e3 cd 	movl   $0x8cde3e0,0x8(%esp)
 8608d29:	08 
 8608d2a:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8608d31:	08 
 8608d32:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8608d39:	e8 cc ae 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8608d3e:	eb 15                	jmp    8608d55 <_ZN9SkillSlot15resetComboSkillE20ENUM_SKILL_TREE_KIND+0x5f>
 8608d40:	8b 45 08             	mov    0x8(%ebp),%eax
 8608d43:	8d 50 1c             	lea    0x1c(%eax),%edx
 8608d46:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608d49:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608d4d:	89 14 24             	mov    %edx,(%esp)
 8608d50:	e8 ef 08 ae ff       	call   80e9644 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND>
 8608d55:	c9                   	leave
 8608d56:	c3                   	ret
 8608d57:	90                   	nop

```

```c
// SkillSlot::resetComboSkill @ 0x8608cf6

/* SkillSlot::resetComboSkill(ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::resetComboSkill(SkillSlot *this,int param_2)

{
  if ((param_2 == -1) || (param_2 == 0)) {
    ComboSkill::resetTree((ComboSkill *)(this + 0x1c),param_2);
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp","void SkillSlot::resetComboSkill(ENUM_SKILL_TREE_KIND)",0xcab,
               "SkillSlot::resetComboSkill kind(%d) error",param_2);
  }
  return;
}

```

---

## setComboSkillInfo

```asm
// === 08608c30 SkillSlot::setComboSkillInfo  [0x08608c30-0x8608c97] ===
 8608c30:	55                   	push   %ebp
 8608c31:	89 e5                	mov    %esp,%ebp
 8608c33:	83 ec 28             	sub    $0x28,%esp
 8608c36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608c39:	85 c0                	test   %eax,%eax
 8608c3b:	74 3d                	je     8608c7a <_ZN9SkillSlot17setComboSkillInfoE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x4a>
 8608c3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608c40:	83 f8 01             	cmp    $0x1,%eax
 8608c43:	74 35                	je     8608c7a <_ZN9SkillSlot17setComboSkillInfoE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x4a>
 8608c45:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608c48:	89 44 24 14          	mov    %eax,0x14(%esp)
 8608c4c:	c7 44 24 10 48 d4 cd 	movl   $0x8cdd448,0x10(%esp)
 8608c53:	08 
 8608c54:	c7 44 24 0c 92 0c 00 	movl   $0xc92,0xc(%esp)
 8608c5b:	00 
 8608c5c:	c7 44 24 08 20 e4 cd 	movl   $0x8cde420,0x8(%esp)
 8608c63:	08 
 8608c64:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8608c6b:	08 
 8608c6c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8608c73:	e8 92 af 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8608c78:	eb 1c                	jmp    8608c96 <_ZN9SkillSlot17setComboSkillInfoE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x66>
 8608c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8608c7d:	8d 50 1c             	lea    0x1c(%eax),%edx
 8608c80:	8b 45 10             	mov    0x10(%ebp),%eax
 8608c83:	89 44 24 08          	mov    %eax,0x8(%esp)
 8608c87:	8b 45 0c             	mov    0xc(%ebp),%eax
 8608c8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8608c8e:	89 14 24             	mov    %edx,(%esp)
 8608c91:	e8 9a 13 ae ff       	call   80ea030 <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE>
 8608c96:	c9                   	leave
 8608c97:	c3                   	ret

```

```c
// SkillSlot::setComboSkillInfo @ 0x8608c30

/* SkillSlot::setComboSkillInfo(ENUM_SKILL_TREE_KIND, std::map<short, std::vector<int,
   std::allocator<int> >, std::less<short>, std::allocator<std::pair<short const, std::vector<int,
   std::allocator<int> > > > >&) */

void __thiscall SkillSlot::setComboSkillInfo(SkillSlot *this,int param_2,undefined4 param_3)

{
  if ((param_2 == 0) || (param_2 == 1)) {
    ComboSkill::setComboSkill((ComboSkill *)(this + 0x1c),param_2,param_3);
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "void SkillSlot::setComboSkillInfo(ENUM_SKILL_TREE_KIND, ComboSkillMap&)",0xc92,
               "SkillSlot::setComboSkillInfo kind(%d) error",param_2);
  }
  return;
}

```

---

## set_remain_sfp_at_index

```asm
// === 08603590 SkillSlot::set_remain_sfp_at_index  [0x08603590-0x86035f1] ===
 8603590:	55                   	push   %ebp
 8603591:	89 e5                	mov    %esp,%ebp
 8603593:	83 ec 28             	sub    $0x28,%esp
 8603596:	8b 45 10             	mov    0x10(%ebp),%eax
 8603599:	83 f8 02             	cmp    $0x2,%eax
 860359c:	75 0b                	jne    86035a9 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND+0x19>
 860359e:	8b 45 08             	mov    0x8(%ebp),%eax
 86035a1:	8b 55 0c             	mov    0xc(%ebp),%edx
 86035a4:	89 50 14             	mov    %edx,0x14(%eax)
 86035a7:	eb 46                	jmp    86035ef <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND+0x5f>
 86035a9:	8b 45 10             	mov    0x10(%ebp),%eax
 86035ac:	83 f8 03             	cmp    $0x3,%eax
 86035af:	75 0b                	jne    86035bc <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND+0x2c>
 86035b1:	8b 45 08             	mov    0x8(%ebp),%eax
 86035b4:	8b 55 0c             	mov    0xc(%ebp),%edx
 86035b7:	89 50 18             	mov    %edx,0x18(%eax)
 86035ba:	eb 33                	jmp    86035ef <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND+0x5f>
 86035bc:	8b 45 10             	mov    0x10(%ebp),%eax
 86035bf:	89 44 24 14          	mov    %eax,0x14(%esp)
 86035c3:	c7 44 24 10 81 d2 cd 	movl   $0x8cdd281,0x10(%esp)
 86035ca:	08 
 86035cb:	c7 44 24 0c 75 00 00 	movl   $0x75,0xc(%esp)
 86035d2:	00 
 86035d3:	c7 44 24 08 a0 e8 cd 	movl   $0x8cde8a0,0x8(%esp)
 86035da:	08 
 86035db:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 86035e2:	08 
 86035e3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86035ea:	e8 1b 06 4d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86035ef:	c9                   	leave
 86035f0:	c3                   	ret
 86035f1:	90                   	nop

```

```c
// SkillSlot::set_remain_sfp_at_index @ 0x8603590

/* SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::set_remain_sfp_at_index(SkillSlot *this,undefined4 param_1,int param_3)

{
  if (param_3 == 2) {
    *(undefined4 *)(this + 0x14) = param_1;
  }
  else if (param_3 == 3) {
    *(undefined4 *)(this + 0x18) = param_1;
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "void SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)",0x75,
               "Wrong Skill Tree Kind : %d",param_3);
  }
  return;
}

```

---

## set_remain_sp_at_index

```asm
// === 086034f8 SkillSlot::set_remain_sp_at_index  [0x086034f8-0x8603527] ===
 86034f8:	55                   	push   %ebp
 86034f9:	89 e5                	mov    %esp,%ebp
 86034fb:	8b 45 10             	mov    0x10(%ebp),%eax
 86034fe:	83 f8 ff             	cmp    $0xffffffff,%eax
 8603501:	74 07                	je     860350a <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND+0x12>
 8603503:	8b 45 10             	mov    0x10(%ebp),%eax
 8603506:	85 c0                	test   %eax,%eax
 8603508:	75 0b                	jne    8603515 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND+0x1d>
 860350a:	8b 45 08             	mov    0x8(%ebp),%eax
 860350d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8603510:	89 50 04             	mov    %edx,0x4(%eax)
 8603513:	eb 11                	jmp    8603526 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND+0x2e>
 8603515:	8b 45 10             	mov    0x10(%ebp),%eax
 8603518:	83 f8 01             	cmp    $0x1,%eax
 860351b:	75 09                	jne    8603526 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND+0x2e>
 860351d:	8b 45 08             	mov    0x8(%ebp),%eax
 8603520:	8b 55 0c             	mov    0xc(%ebp),%edx
 8603523:	89 50 0c             	mov    %edx,0xc(%eax)
 8603526:	5d                   	pop    %ebp
 8603527:	c3                   	ret

```

```c
// SkillSlot::set_remain_sp_at_index @ 0x86034f8

/* SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::set_remain_sp_at_index(SkillSlot *this,undefined4 param_1,int param_3)

{
  if ((param_3 == -1) || (param_3 == 0)) {
    *(undefined4 *)(this + 4) = param_1;
  }
  else if (param_3 == 1) {
    *(undefined4 *)(this + 0xc) = param_1;
  }
  return;
}

```

---

## set_skill_slot

```asm
// === 08603378 SkillSlot::set_skill_slot  [0x08603378-0x86033cb] ===
 8603378:	55                   	push   %ebp
 8603379:	89 e5                	mov    %esp,%ebp
 860337b:	83 ec 18             	sub    $0x18,%esp
 860337e:	8b 45 14             	mov    0x14(%ebp),%eax
 8603381:	3d 98 01 00 00       	cmp    $0x198,%eax
 8603386:	76 07                	jbe    860338f <_ZN9SkillSlot14set_skill_slotEPcS0_i+0x17>
 8603388:	c7 45 14 98 01 00 00 	movl   $0x198,0x14(%ebp)
 860338f:	8b 45 14             	mov    0x14(%ebp),%eax
 8603392:	8b 55 08             	mov    0x8(%ebp),%edx
 8603395:	83 c2 46             	add    $0x46,%edx
 8603398:	89 44 24 08          	mov    %eax,0x8(%esp)
 860339c:	8b 45 0c             	mov    0xc(%ebp),%eax
 860339f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86033a3:	89 14 24             	mov    %edx,(%esp)
 86033a6:	e8 f5 a4 a7 ff       	call   807d8a0 <memcpy@plt>
 86033ab:	8b 45 14             	mov    0x14(%ebp),%eax
 86033ae:	8b 55 08             	mov    0x8(%ebp),%edx
 86033b1:	81 c2 de 01 00 00    	add    $0x1de,%edx
 86033b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 86033bb:	8b 45 10             	mov    0x10(%ebp),%eax
 86033be:	89 44 24 04          	mov    %eax,0x4(%esp)
 86033c2:	89 14 24             	mov    %edx,(%esp)
 86033c5:	e8 d6 a4 a7 ff       	call   807d8a0 <memcpy@plt>
 86033ca:	c9                   	leave
 86033cb:	c3                   	ret

```

```c
// SkillSlot::set_skill_slot @ 0x8603378

/* SkillSlot::set_skill_slot(char*, char*, int) */

void __thiscall SkillSlot::set_skill_slot(SkillSlot *this,char *param_1,char *param_2,int param_3)

{
  if (0x198 < (uint)param_3) {
    param_3 = 0x198;
  }
  memcpy(this + 0x46,param_1,param_3);
  memcpy(this + 0x1de,param_2,param_3);
  return;
}

```

---

## set_skill_slot_at_index

```asm
// === 08603420 SkillSlot::set_skill_slot_at_index  [0x08603420-0x8603489] ===
 8603420:	55                   	push   %ebp
 8603421:	89 e5                	mov    %esp,%ebp
 8603423:	83 ec 18             	sub    $0x18,%esp
 8603426:	8b 45 10             	mov    0x10(%ebp),%eax
 8603429:	3d 98 01 00 00       	cmp    $0x198,%eax
 860342e:	76 07                	jbe    8603437 <_ZN9SkillSlot23set_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x17>
 8603430:	c7 45 10 98 01 00 00 	movl   $0x198,0x10(%ebp)
 8603437:	8b 45 14             	mov    0x14(%ebp),%eax
 860343a:	83 f8 ff             	cmp    $0xffffffff,%eax
 860343d:	7c 48                	jl     8603487 <_ZN9SkillSlot23set_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x67>
 860343f:	85 c0                	test   %eax,%eax
 8603441:	7e 07                	jle    860344a <_ZN9SkillSlot23set_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x2a>
 8603443:	83 f8 01             	cmp    $0x1,%eax
 8603446:	74 20                	je     8603468 <_ZN9SkillSlot23set_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x48>
 8603448:	eb 3d                	jmp    8603487 <_ZN9SkillSlot23set_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x67>
 860344a:	8b 45 10             	mov    0x10(%ebp),%eax
 860344d:	8b 55 08             	mov    0x8(%ebp),%edx
 8603450:	83 c2 46             	add    $0x46,%edx
 8603453:	89 44 24 08          	mov    %eax,0x8(%esp)
 8603457:	8b 45 0c             	mov    0xc(%ebp),%eax
 860345a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860345e:	89 14 24             	mov    %edx,(%esp)
 8603461:	e8 3a a4 a7 ff       	call   807d8a0 <memcpy@plt>
 8603466:	eb 1f                	jmp    8603487 <_ZN9SkillSlot23set_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND+0x67>
 8603468:	8b 45 10             	mov    0x10(%ebp),%eax
 860346b:	8b 55 08             	mov    0x8(%ebp),%edx
 860346e:	81 c2 de 01 00 00    	add    $0x1de,%edx
 8603474:	89 44 24 08          	mov    %eax,0x8(%esp)
 8603478:	8b 45 0c             	mov    0xc(%ebp),%eax
 860347b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860347f:	89 14 24             	mov    %edx,(%esp)
 8603482:	e8 19 a4 a7 ff       	call   807d8a0 <memcpy@plt>
 8603487:	c9                   	leave
 8603488:	c3                   	ret
 8603489:	90                   	nop

```

```c
// SkillSlot::set_skill_slot_at_index @ 0x8603420

/* SkillSlot::set_skill_slot_at_index(char*, int, ENUM_SKILL_TREE_KIND) */

void __thiscall
SkillSlot::set_skill_slot_at_index(SkillSlot *this,void *param_1,uint param_2,int param_4)

{
  if (0x198 < param_2) {
    param_2 = 0x198;
  }
  if (-2 < param_4) {
    if (param_4 < 1) {
      memcpy(this + 0x46,param_1,param_2);
    }
    else if (param_4 == 1) {
      memcpy(this + 0x1de,param_1,param_2);
    }
  }
  return;
}

```

---

## skill_move

```asm
// === 08604428 SkillSlot::skill_move  [0x08604428-0x86047d7] ===
 8604428:	55                   	push   %ebp
 8604429:	89 e5                	mov    %esp,%ebp
 860442b:	53                   	push   %ebx
 860442c:	83 ec 44             	sub    $0x44,%esp
 860442f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8604432:	8b 45 10             	mov    0x10(%ebp),%eax
 8604435:	88 55 d4             	mov    %dl,-0x2c(%ebp)
 8604438:	88 45 d0             	mov    %al,-0x30(%ebp)
 860443b:	8b 45 08             	mov    0x8(%ebp),%eax
 860443e:	8b 00                	mov    (%eax),%eax
 8604440:	85 c0                	test   %eax,%eax
 8604442:	75 0a                	jne    860444e <_ZN9SkillSlot10skill_moveEhhi+0x26>
 8604444:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8604449:	e9 83 03 00 00       	jmp    86047d1 <_ZN9SkillSlot10skill_moveEhhi+0x3a9>
 860444e:	0f b6 55 d0          	movzbl -0x30(%ebp),%edx
 8604452:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8604456:	89 54 24 08          	mov    %edx,0x8(%esp)
 860445a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860445e:	8b 45 08             	mov    0x8(%ebp),%eax
 8604461:	89 04 24             	mov    %eax,(%esp)
 8604464:	e8 2f 48 00 00       	call   8608c98 <_ZN9SkillSlot23checkMoveComboSkillSlotEhh>
 8604469:	83 f0 01             	xor    $0x1,%eax
 860446c:	84 c0                	test   %al,%al
 860446e:	74 0a                	je     860447a <_ZN9SkillSlot10skill_moveEhhi+0x52>
 8604470:	b8 13 00 00 00       	mov    $0x13,%eax
 8604475:	e9 57 03 00 00       	jmp    86047d1 <_ZN9SkillSlot10skill_moveEhhi+0x3a9>
 860447a:	8b 45 08             	mov    0x8(%ebp),%eax
 860447d:	8b 00                	mov    (%eax),%eax
 860447f:	89 04 24             	mov    %eax,(%esp)
 8604482:	e8 b5 ae c2 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 8604487:	89 44 24 04          	mov    %eax,0x4(%esp)
 860448b:	8b 45 08             	mov    0x8(%ebp),%eax
 860448e:	89 04 24             	mov    %eax,(%esp)
 8604491:	e8 48 23 00 00       	call   86067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>
 8604496:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8604499:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 860449d:	75 0a                	jne    86044a9 <_ZN9SkillSlot10skill_moveEhhi+0x81>
 860449f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86044a4:	e9 28 03 00 00       	jmp    86047d1 <_ZN9SkillSlot10skill_moveEhhi+0x3a9>
 86044a9:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 86044ad:	01 c0                	add    %eax,%eax
 86044af:	03 45 e0             	add    -0x20(%ebp),%eax
 86044b2:	0f b6 00             	movzbl (%eax),%eax
 86044b5:	84 c0                	test   %al,%al
 86044b7:	75 1a                	jne    86044d3 <_ZN9SkillSlot10skill_moveEhhi+0xab>
 86044b9:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 86044bd:	01 c0                	add    %eax,%eax
 86044bf:	03 45 e0             	add    -0x20(%ebp),%eax
 86044c2:	0f b6 00             	movzbl (%eax),%eax
 86044c5:	84 c0                	test   %al,%al
 86044c7:	75 0a                	jne    86044d3 <_ZN9SkillSlot10skill_moveEhhi+0xab>
 86044c9:	b8 15 00 00 00       	mov    $0x15,%eax
 86044ce:	e9 fe 02 00 00       	jmp    86047d1 <_ZN9SkillSlot10skill_moveEhhi+0x3a9>
 86044d3:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 86044d7:	01 c0                	add    %eax,%eax
 86044d9:	03 45 e0             	add    -0x20(%ebp),%eax
 86044dc:	0f b6 00             	movzbl (%eax),%eax
 86044df:	0f b6 d8             	movzbl %al,%ebx
 86044e2:	e8 b4 7c ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 86044e7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86044eb:	8b 55 14             	mov    0x14(%ebp),%edx
 86044ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 86044f2:	89 04 24             	mov    %eax,(%esp)
 86044f5:	e8 a8 b8 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 86044fa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86044fd:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 8604501:	01 c0                	add    %eax,%eax
 8604503:	03 45 e0             	add    -0x20(%ebp),%eax
 8604506:	0f b6 00             	movzbl (%eax),%eax
 8604509:	0f b6 d8             	movzbl %al,%ebx
 860450c:	e8 8a 7c ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8604511:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8604515:	8b 55 14             	mov    0x14(%ebp),%edx
 8604518:	89 54 24 04          	mov    %edx,0x4(%esp)
 860451c:	89 04 24             	mov    %eax,(%esp)
 860451f:	e8 7e b8 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8604524:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8604527:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 860452b:	75 10                	jne    860453d <_ZN9SkillSlot10skill_moveEhhi+0x115>
 860452d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8604531:	75 0a                	jne    860453d <_ZN9SkillSlot10skill_moveEhhi+0x115>
 8604533:	b8 01 00 00 00       	mov    $0x1,%eax
 8604538:	e9 94 02 00 00       	jmp    86047d1 <_ZN9SkillSlot10skill_moveEhhi+0x3a9>
 860453d:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8604541:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604545:	8b 45 08             	mov    0x8(%ebp),%eax
 8604548:	89 04 24             	mov    %eax,(%esp)
 860454b:	e8 ac 04 00 00       	call   86049fc <_ZNK9SkillSlot19get_skillslot_groupEi>
 8604550:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8604553:	83 7d ec 06          	cmpl   $0x6,-0x14(%ebp)
 8604557:	0f 94 c0             	sete   %al
 860455a:	84 c0                	test   %al,%al
 860455c:	74 0a                	je     8604568 <_ZN9SkillSlot10skill_moveEhhi+0x140>
 860455e:	b8 01 00 00 00       	mov    $0x1,%eax
 8604563:	e9 69 02 00 00       	jmp    86047d1 <_ZN9SkillSlot10skill_moveEhhi+0x3a9>
 8604568:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 860456c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8604570:	8b 45 08             	mov    0x8(%ebp),%eax
 8604573:	89 04 24             	mov    %eax,(%esp)
 8604576:	e8 81 04 00 00       	call   86049fc <_ZNK9SkillSlot19get_skillslot_groupEi>
 860457b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860457e:	83 7d f0 06          	cmpl   $0x6,-0x10(%ebp)
 8604582:	0f 94 c0             	sete   %al
 8604585:	84 c0                	test   %al,%al
 8604587:	74 0a                	je     8604593 <_ZN9SkillSlot10skill_moveEhhi+0x16b>
 8604589:	b8 01 00 00 00       	mov    $0x1,%eax
 860458e:	e9 3e 02 00 00       	jmp    86047d1 <_ZN9SkillSlot10skill_moveEhhi+0x3a9>
 8604593:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
 8604597:	74 06                	je     860459f <_ZN9SkillSlot10skill_moveEhhi+0x177>
 8604599:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 860459d:	75 0a                	jne    86045a9 <_ZN9SkillSlot10skill_moveEhhi+0x181>
 860459f:	b8 13 00 00 00       	mov    $0x13,%eax
 86045a4:	e9 28 02 00 00       	jmp    86047d1 <_ZN9SkillSlot10skill_moveEhhi+0x3a9>
 86045a9:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 86045ad:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 86045b1:	01 c0                	add    %eax,%eax
 86045b3:	03 45 e0             	add    -0x20(%ebp),%eax
 86045b6:	0f b6 00             	movzbl (%eax),%eax
 86045b9:	84 c0                	test   %al,%al
 86045bb:	75 63                	jne    8604620 <_ZN9SkillSlot10skill_moveEhhi+0x1f8>
 86045bd:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 86045c1:	01 c0                	add    %eax,%eax
 86045c3:	03 45 e0             	add    -0x20(%ebp),%eax
 86045c6:	0f b6 00             	movzbl (%eax),%eax
 86045c9:	84 c0                	test   %al,%al
 86045cb:	74 53                	je     8604620 <_ZN9SkillSlot10skill_moveEhhi+0x1f8>
 86045cd:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 86045d1:	75 09                	jne    86045dc <_ZN9SkillSlot10skill_moveEhhi+0x1b4>
 86045d3:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 86045d7:	e9 9b 01 00 00       	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 86045dc:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 86045e0:	75 1c                	jne    86045fe <_ZN9SkillSlot10skill_moveEhhi+0x1d6>
 86045e2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86045e5:	89 04 24             	mov    %eax,(%esp)
 86045e8:	e8 79 4d 00 00       	call   8609366 <_ZNK6CSkill15is_active_skillEv>
 86045ed:	84 c0                	test   %al,%al
 86045ef:	0f 84 78 01 00 00    	je     860476d <_ZN9SkillSlot10skill_moveEhhi+0x345>
 86045f5:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 86045f9:	e9 79 01 00 00       	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 86045fe:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8604601:	89 04 24             	mov    %eax,(%esp)
 8604604:	e8 8d 05 d7 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8604609:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 860460c:	0f 94 c0             	sete   %al
 860460f:	84 c0                	test   %al,%al
 8604611:	0f 84 59 01 00 00    	je     8604770 <_ZN9SkillSlot10skill_moveEhhi+0x348>
 8604617:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 860461b:	e9 57 01 00 00       	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 8604620:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 8604624:	01 c0                	add    %eax,%eax
 8604626:	03 45 e0             	add    -0x20(%ebp),%eax
 8604629:	0f b6 00             	movzbl (%eax),%eax
 860462c:	84 c0                	test   %al,%al
 860462e:	75 63                	jne    8604693 <_ZN9SkillSlot10skill_moveEhhi+0x26b>
 8604630:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8604634:	01 c0                	add    %eax,%eax
 8604636:	03 45 e0             	add    -0x20(%ebp),%eax
 8604639:	0f b6 00             	movzbl (%eax),%eax
 860463c:	84 c0                	test   %al,%al
 860463e:	74 53                	je     8604693 <_ZN9SkillSlot10skill_moveEhhi+0x26b>
 8604640:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8604644:	75 09                	jne    860464f <_ZN9SkillSlot10skill_moveEhhi+0x227>
 8604646:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 860464a:	e9 28 01 00 00       	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 860464f:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8604653:	75 1c                	jne    8604671 <_ZN9SkillSlot10skill_moveEhhi+0x249>
 8604655:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8604658:	89 04 24             	mov    %eax,(%esp)
 860465b:	e8 06 4d 00 00       	call   8609366 <_ZNK6CSkill15is_active_skillEv>
 8604660:	84 c0                	test   %al,%al
 8604662:	0f 84 0b 01 00 00    	je     8604773 <_ZN9SkillSlot10skill_moveEhhi+0x34b>
 8604668:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 860466c:	e9 06 01 00 00       	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 8604671:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8604674:	89 04 24             	mov    %eax,(%esp)
 8604677:	e8 1a 05 d7 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 860467c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 860467f:	0f 94 c0             	sete   %al
 8604682:	84 c0                	test   %al,%al
 8604684:	0f 84 ec 00 00 00    	je     8604776 <_ZN9SkillSlot10skill_moveEhhi+0x34e>
 860468a:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 860468e:	e9 e4 00 00 00       	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 8604693:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8604697:	74 06                	je     860469f <_ZN9SkillSlot10skill_moveEhhi+0x277>
 8604699:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 860469d:	75 09                	jne    86046a8 <_ZN9SkillSlot10skill_moveEhhi+0x280>
 860469f:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 86046a3:	e9 cf 00 00 00       	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 86046a8:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 86046ac:	75 0f                	jne    86046bd <_ZN9SkillSlot10skill_moveEhhi+0x295>
 86046ae:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 86046b2:	75 09                	jne    86046bd <_ZN9SkillSlot10skill_moveEhhi+0x295>
 86046b4:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 86046b8:	e9 ba 00 00 00       	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 86046bd:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 86046c1:	75 17                	jne    86046da <_ZN9SkillSlot10skill_moveEhhi+0x2b2>
 86046c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86046c6:	89 04 24             	mov    %eax,(%esp)
 86046c9:	e8 c8 04 d7 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 86046ce:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 86046d1:	75 07                	jne    86046da <_ZN9SkillSlot10skill_moveEhhi+0x2b2>
 86046d3:	b8 01 00 00 00       	mov    $0x1,%eax
 86046d8:	eb 05                	jmp    86046df <_ZN9SkillSlot10skill_moveEhhi+0x2b7>
 86046da:	b8 00 00 00 00       	mov    $0x0,%eax
 86046df:	84 c0                	test   %al,%al
 86046e1:	74 19                	je     86046fc <_ZN9SkillSlot10skill_moveEhhi+0x2d4>
 86046e3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86046e6:	89 04 24             	mov    %eax,(%esp)
 86046e9:	e8 78 4c 00 00       	call   8609366 <_ZNK6CSkill15is_active_skillEv>
 86046ee:	84 c0                	test   %al,%al
 86046f0:	0f 84 81 00 00 00    	je     8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 86046f6:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 86046fa:	eb 7b                	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 86046fc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86046ff:	89 04 24             	mov    %eax,(%esp)
 8604702:	e8 8f 04 d7 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8604707:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 860470a:	75 0d                	jne    8604719 <_ZN9SkillSlot10skill_moveEhhi+0x2f1>
 860470c:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8604710:	75 07                	jne    8604719 <_ZN9SkillSlot10skill_moveEhhi+0x2f1>
 8604712:	b8 01 00 00 00       	mov    $0x1,%eax
 8604717:	eb 05                	jmp    860471e <_ZN9SkillSlot10skill_moveEhhi+0x2f6>
 8604719:	b8 00 00 00 00       	mov    $0x0,%eax
 860471e:	84 c0                	test   %al,%al
 8604720:	74 15                	je     8604737 <_ZN9SkillSlot10skill_moveEhhi+0x30f>
 8604722:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8604725:	89 04 24             	mov    %eax,(%esp)
 8604728:	e8 39 4c 00 00       	call   8609366 <_ZNK6CSkill15is_active_skillEv>
 860472d:	84 c0                	test   %al,%al
 860472f:	74 46                	je     8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 8604731:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8604735:	eb 40                	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 8604737:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860473a:	89 04 24             	mov    %eax,(%esp)
 860473d:	e8 54 04 d7 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8604742:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8604745:	75 17                	jne    860475e <_ZN9SkillSlot10skill_moveEhhi+0x336>
 8604747:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860474a:	89 04 24             	mov    %eax,(%esp)
 860474d:	e8 44 04 d7 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8604752:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8604755:	75 07                	jne    860475e <_ZN9SkillSlot10skill_moveEhhi+0x336>
 8604757:	b8 01 00 00 00       	mov    $0x1,%eax
 860475c:	eb 05                	jmp    8604763 <_ZN9SkillSlot10skill_moveEhhi+0x33b>
 860475e:	b8 00 00 00 00       	mov    $0x0,%eax
 8604763:	84 c0                	test   %al,%al
 8604765:	74 10                	je     8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 8604767:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 860476b:	eb 0a                	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 860476d:	90                   	nop
 860476e:	eb 07                	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 8604770:	90                   	nop
 8604771:	eb 04                	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 8604773:	90                   	nop
 8604774:	eb 01                	jmp    8604777 <_ZN9SkillSlot10skill_moveEhhi+0x34f>
 8604776:	90                   	nop
 8604777:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 860477b:	83 f0 01             	xor    $0x1,%eax
 860477e:	84 c0                	test   %al,%al
 8604780:	74 07                	je     8604789 <_ZN9SkillSlot10skill_moveEhhi+0x361>
 8604782:	b8 13 00 00 00       	mov    $0x13,%eax
 8604787:	eb 48                	jmp    86047d1 <_ZN9SkillSlot10skill_moveEhhi+0x3a9>
 8604789:	8d 45 de             	lea    -0x22(%ebp),%eax
 860478c:	89 04 24             	mov    %eax,(%esp)
 860478f:	e8 b8 ab e8 ff       	call   848f34c <_ZN15_Mastered_skillC1Ev>
 8604794:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8604798:	01 c0                	add    %eax,%eax
 860479a:	03 45 e0             	add    -0x20(%ebp),%eax
 860479d:	0f b7 00             	movzwl (%eax),%eax
 86047a0:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 86047a4:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 86047a8:	01 c0                	add    %eax,%eax
 86047aa:	03 45 e0             	add    -0x20(%ebp),%eax
 86047ad:	0f b6 55 d0          	movzbl -0x30(%ebp),%edx
 86047b1:	01 d2                	add    %edx,%edx
 86047b3:	03 55 e0             	add    -0x20(%ebp),%edx
 86047b6:	0f b7 12             	movzwl (%edx),%edx
 86047b9:	66 89 10             	mov    %dx,(%eax)
 86047bc:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 86047c0:	01 c0                	add    %eax,%eax
 86047c2:	03 45 e0             	add    -0x20(%ebp),%eax
 86047c5:	0f b7 55 de          	movzwl -0x22(%ebp),%edx
 86047c9:	66 89 10             	mov    %dx,(%eax)
 86047cc:	b8 00 00 00 00       	mov    $0x0,%eax
 86047d1:	83 c4 44             	add    $0x44,%esp
 86047d4:	5b                   	pop    %ebx
 86047d5:	5d                   	pop    %ebp
 86047d6:	c3                   	ret
 86047d7:	90                   	nop

```

```c
// SkillSlot::skill_move @ 0x8604428

/* SkillSlot::skill_move(unsigned char, unsigned char, int) */

undefined4 __thiscall SkillSlot::skill_move(SkillSlot *this,uchar param_1,uchar param_2,int param_3)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  _Mastered_skill local_26 [2];
  int local_24;
  CSkill *local_20;
  CSkill *local_1c;
  int local_18;
  int local_14;
  char local_d;
  
  if (*(int *)this == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    cVar3 = checkMoveComboSkillSlot(this,param_1,param_2);
    if (cVar3 == '\x01') {
      uVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
      local_24 = get_skillslot_buf(this,uVar4);
      if (local_24 == 0) {
        uVar4 = 0xffffffff;
      }
      else if ((*(char *)((uint)param_1 * 2 + local_24) == '\0') &&
              (*(char *)((uint)param_2 * 2 + local_24) == '\0')) {
        uVar4 = 0x15;
      }
      else {
        iVar5 = G_CDataManager();
        local_20 = (CSkill *)CDataManager::find_skill(iVar5,param_3);
        iVar5 = G_CDataManager();
        local_1c = (CSkill *)CDataManager::find_skill(iVar5,param_3);
        if ((local_20 == (CSkill *)0x0) && (local_1c == (CSkill *)0x0)) {
          uVar4 = 1;
        }
        else {
          local_18 = get_skillslot_group(this,(uint)param_1);
          if (local_18 == 6) {
            uVar4 = 1;
          }
          else {
            local_14 = get_skillslot_group(this,(uint)param_2);
            if (local_14 == 6) {
              uVar4 = 1;
            }
            else if ((local_18 == 4) || (local_14 == 4)) {
              uVar4 = 0x13;
            }
            else {
              local_d = '\0';
              if ((*(char *)((uint)param_1 * 2 + local_24) == '\0') &&
                 (*(char *)((uint)param_2 * 2 + local_24) != '\0')) {
                if (local_1c == (CSkill *)0x0) {
                  local_d = '\0';
                }
                else if (local_18 == -1) {
                  cVar3 = CSkill::is_active_skill(local_1c);
                  if (cVar3 != '\0') {
                    local_d = '\x01';
                  }
                }
                else {
                  iVar5 = CSkill::get_group(local_1c);
                  if (iVar5 == local_18) {
                    local_d = '\x01';
                  }
                }
              }
              else if ((*(char *)((uint)param_2 * 2 + local_24) == '\0') &&
                      (*(char *)((uint)param_1 * 2 + local_24) != '\0')) {
                if (local_20 == (CSkill *)0x0) {
                  local_d = '\0';
                }
                else if (local_14 == -1) {
                  cVar3 = CSkill::is_active_skill(local_20);
                  if (cVar3 != '\0') {
                    local_d = '\x01';
                  }
                }
                else {
                  iVar5 = CSkill::get_group(local_20);
                  if (iVar5 == local_14) {
                    local_d = '\x01';
                  }
                }
              }
              else if ((local_20 == (CSkill *)0x0) || (local_1c == (CSkill *)0x0)) {
                local_d = '\0';
              }
              else if ((local_18 == -1) && (local_14 == -1)) {
                local_d = '\x01';
              }
              else {
                if ((local_18 == -1) && (iVar5 = CSkill::get_group(local_20), iVar5 == local_14)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if (bVar2) {
                  cVar3 = CSkill::is_active_skill(local_1c);
                  if (cVar3 != '\0') {
                    local_d = '\x01';
                  }
                }
                else {
                  iVar5 = CSkill::get_group(local_1c);
                  if ((iVar5 == local_18) && (local_14 == -1)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (bVar2) {
                    cVar3 = CSkill::is_active_skill(local_20);
                    if (cVar3 != '\0') {
                      local_d = '\x01';
                    }
                  }
                  else {
                    iVar5 = CSkill::get_group(local_1c);
                    if ((iVar5 == local_18) &&
                       (iVar5 = CSkill::get_group(local_20), iVar5 == local_14)) {
                      bVar2 = true;
                    }
                    else {
                      bVar2 = false;
                    }
                    if (bVar2) {
                      local_d = '\x01';
                    }
                  }
                }
              }
              if (local_d == '\x01') {
                _Mastered_skill::_Mastered_skill(local_26);
                uVar1 = *(undefined2 *)((uint)param_1 * 2 + local_24);
                *(undefined2 *)((uint)param_1 * 2 + local_24) =
                     *(undefined2 *)((uint)param_2 * 2 + local_24);
                *(undefined2 *)((uint)param_2 * 2 + local_24) = uVar1;
                uVar4 = 0;
              }
              else {
                uVar4 = 0x13;
              }
            }
          }
        }
      }
    }
    else {
      uVar4 = 0x13;
    }
  }
  return uVar4;
}

```

---

## try_master_new_skills

```asm
// === 08607460 SkillSlot::try_master_new_skills  [0x08607460-0x86078f3] ===
 8607460:	55                   	push   %ebp
 8607461:	89 e5                	mov    %esp,%ebp
 8607463:	53                   	push   %ebx
 8607464:	83 ec 74             	sub    $0x74,%esp
 8607467:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 860746e:	e8 28 4d ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8607473:	8b 55 0c             	mov    0xc(%ebp),%edx
 8607476:	89 54 24 08          	mov    %edx,0x8(%esp)
 860747a:	8b 55 14             	mov    0x14(%ebp),%edx
 860747d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8607481:	89 04 24             	mov    %eax,(%esp)
 8607484:	e8 19 89 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8607489:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 860748c:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8607490:	75 0a                	jne    860749c <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x3c>
 8607492:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8607497:	e9 53 04 00 00       	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 860749c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 860749f:	89 04 24             	mov    %eax,(%esp)
 86074a2:	e8 ef d6 d6 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 86074a7:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86074aa:	8b 45 08             	mov    0x8(%ebp),%eax
 86074ad:	8b 00                	mov    (%eax),%eax
 86074af:	85 c0                	test   %eax,%eax
 86074b1:	75 0a                	jne    86074bd <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x5d>
 86074b3:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 86074b8:	e9 32 04 00 00       	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 86074bd:	8b 45 08             	mov    0x8(%ebp),%eax
 86074c0:	8d 90 76 03 00 00    	lea    0x376(%eax),%edx
 86074c6:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 86074cd:	00 
 86074ce:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86074d1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86074d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86074d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 86074dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 86074e0:	8b 45 08             	mov    0x8(%ebp),%eax
 86074e3:	89 04 24             	mov    %eax,(%esp)
 86074e6:	e8 cf 08 00 00       	call   8607dba <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib>
 86074eb:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86074ee:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 86074f5:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 86074f9:	74 33                	je     860752e <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0xce>
 86074fb:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86074fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8607501:	81 c2 b8 01 00 00    	add    $0x1b8,%edx
 8607507:	0f b6 44 50 07       	movzbl 0x7(%eax,%edx,2),%eax
 860750c:	0f be c0             	movsbl %al,%eax
 860750f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8607512:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8607515:	8b 45 08             	mov    0x8(%ebp),%eax
 8607518:	81 c2 b8 01 00 00    	add    $0x1b8,%edx
 860751e:	0f b6 44 50 07       	movzbl 0x7(%eax,%edx,2),%eax
 8607523:	0f be c0             	movsbl %al,%eax
 8607526:	03 45 20             	add    0x20(%ebp),%eax
 8607529:	89 45 e0             	mov    %eax,-0x20(%ebp)
 860752c:	eb 0d                	jmp    860753b <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0xdb>
 860752e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8607535:	8b 45 20             	mov    0x20(%ebp),%eax
 8607538:	89 45 e0             	mov    %eax,-0x20(%ebp)
 860753b:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 860753f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8607542:	89 44 24 08          	mov    %eax,0x8(%esp)
 8607546:	8b 45 18             	mov    0x18(%ebp),%eax
 8607549:	89 44 24 04          	mov    %eax,0x4(%esp)
 860754d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8607550:	89 04 24             	mov    %eax,(%esp)
 8607553:	e8 94 8f d4 ff       	call   83504ec <_ZNK6CSkill11IsStealableEii>
 8607558:	84 c0                	test   %al,%al
 860755a:	74 64                	je     86075c0 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x160>
 860755c:	8b 45 08             	mov    0x8(%ebp),%eax
 860755f:	8b 00                	mov    (%eax),%eax
 8607561:	89 04 24             	mov    %eax,(%esp)
 8607564:	e8 3d 33 b9 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 8607569:	c7 44 24 04 63 01 00 	movl   $0x163,0x4(%esp)
 8607570:	00 
 8607571:	89 04 24             	mov    %eax,(%esp)
 8607574:	e8 a7 43 0a 00       	call   86ab920 <_ZNK9UserQuest12isClearQuestEi>
 8607579:	83 f0 01             	xor    $0x1,%eax
 860757c:	84 c0                	test   %al,%al
 860757e:	eb 1b                	jmp    860759b <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x13b>
 8607580:	8b 45 08             	mov    0x8(%ebp),%eax
 8607583:	8b 00                	mov    (%eax),%eax
 8607585:	89 04 24             	mov    %eax,(%esp)
 8607588:	e8 53 b2 05 00       	call   86627e0 <_ZNK5CUser29is_clear_stealingSkillMissionEv>
 860758d:	83 f0 01             	xor    $0x1,%eax
 8607590:	84 c0                	test   %al,%al
 8607592:	74 07                	je     860759b <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x13b>
 8607594:	b8 01 00 00 00       	mov    $0x1,%eax
 8607599:	eb 05                	jmp    86075a0 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x140>
 860759b:	b8 00 00 00 00       	mov    $0x0,%eax
 86075a0:	84 c0                	test   %al,%al
 86075a2:	74 0a                	je     86075ae <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x14e>
 86075a4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86075a9:	e9 41 03 00 00       	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 86075ae:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 86075b2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86075b5:	89 04 24             	mov    %eax,(%esp)
 86075b8:	e8 8d 1d 00 00       	call   860934a <_ZNK6CSkill20GetStealLevelPenaltyEv>
 86075bd:	29 45 10             	sub    %eax,0x10(%ebp)
 86075c0:	8b 45 08             	mov    0x8(%ebp),%eax
 86075c3:	8b 00                	mov    (%eax),%eax
 86075c5:	89 04 24             	mov    %eax,(%esp)
 86075c8:	e8 5b 58 b2 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 86075cd:	89 04 24             	mov    %eax,(%esp)
 86075d0:	e8 c3 1d 00 00       	call   8609398 <_ZNK8WongWork12CUserPremium17getOverSkillLevelEv>
 86075d5:	0f b7 c0             	movzwl %ax,%eax
 86075d8:	01 45 10             	add    %eax,0x10(%ebp)
 86075db:	e8 c7 2d ad ff       	call   80da3a7 <_Z11G_GameWorldv>
 86075e0:	89 04 24             	mov    %eax,(%esp)
 86075e3:	e8 36 ce c2 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 86075e8:	84 c0                	test   %al,%al
 86075ea:	74 62                	je     860764e <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x1ee>
 86075ec:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86075ef:	8b 98 98 01 00 00    	mov    0x198(%eax),%ebx
 86075f5:	8b 45 08             	mov    0x8(%ebp),%eax
 86075f8:	8b 00                	mov    (%eax),%eax
 86075fa:	89 04 24             	mov    %eax,(%esp)
 86075fd:	e8 48 78 b9 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 8607602:	39 c3                	cmp    %eax,%ebx
 8607604:	0f 9f c0             	setg   %al
 8607607:	84 c0                	test   %al,%al
 8607609:	74 0a                	je     8607615 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x1b5>
 860760b:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 8607610:	e9 da 02 00 00       	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 8607615:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8607618:	89 44 24 10          	mov    %eax,0x10(%esp)
 860761c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 860761f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8607623:	8b 45 18             	mov    0x18(%ebp),%eax
 8607626:	89 44 24 08          	mov    %eax,0x8(%esp)
 860762a:	c7 44 24 04 46 00 00 	movl   $0x46,0x4(%esp)
 8607631:	00 
 8607632:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8607635:	89 04 24             	mov    %eax,(%esp)
 8607638:	e8 61 8d d4 ff       	call   835039e <_ZNK6CSkill9can_learnEiiii>
 860763d:	83 f0 01             	xor    $0x1,%eax
 8607640:	84 c0                	test   %al,%al
 8607642:	74 42                	je     8607686 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x226>
 8607644:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 8607649:	e9 a1 02 00 00       	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 860764e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8607651:	89 44 24 10          	mov    %eax,0x10(%esp)
 8607655:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8607658:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860765c:	8b 45 18             	mov    0x18(%ebp),%eax
 860765f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8607663:	8b 45 10             	mov    0x10(%ebp),%eax
 8607666:	89 44 24 04          	mov    %eax,0x4(%esp)
 860766a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 860766d:	89 04 24             	mov    %eax,(%esp)
 8607670:	e8 29 8d d4 ff       	call   835039e <_ZNK6CSkill9can_learnEiiii>
 8607675:	83 f0 01             	xor    $0x1,%eax
 8607678:	84 c0                	test   %al,%al
 860767a:	74 0a                	je     8607686 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x226>
 860767c:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 8607681:	e9 69 02 00 00       	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 8607686:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8607689:	89 44 24 08          	mov    %eax,0x8(%esp)
 860768d:	8b 45 18             	mov    0x18(%ebp),%eax
 8607690:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607694:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8607697:	89 04 24             	mov    %eax,(%esp)
 860769a:	e8 1f 8f d4 ff       	call   83505be <_ZNK6CSkill27get_second_growtype_fitnessEii>
 860769f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86076a2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86076a6:	75 15                	jne    86076bd <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x25d>
 86076a8:	8b 45 18             	mov    0x18(%ebp),%eax
 86076ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 86076af:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86076b2:	89 04 24             	mov    %eax,(%esp)
 86076b5:	e8 be 1c 00 00       	call   8609378 <_ZNK6CSkill11get_fitnessEi>
 86076ba:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86076bd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86076c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 86076c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86076c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86076cb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86076ce:	89 04 24             	mov    %eax,(%esp)
 86076d1:	e8 a6 8b d4 ff       	call   835027c <_ZNK6CSkill25get_need_sp_sfp_for_levelEii>
 86076d6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86076d9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86076dd:	79 0a                	jns    86076e9 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x289>
 86076df:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 86076e4:	e9 06 02 00 00       	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 86076e9:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86076ed:	7e 28                	jle    8607717 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x2b7>
 86076ef:	b8 64 00 00 00       	mov    $0x64,%eax
 86076f4:	2b 45 ec             	sub    -0x14(%ebp),%eax
 86076f7:	89 c1                	mov    %eax,%ecx
 86076f9:	0f af 4d f0          	imul   -0x10(%ebp),%ecx
 86076fd:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8607702:	89 c8                	mov    %ecx,%eax
 8607704:	f7 ea                	imul   %edx
 8607706:	c1 fa 05             	sar    $0x5,%edx
 8607709:	89 c8                	mov    %ecx,%eax
 860770b:	c1 f8 1f             	sar    $0x1f,%eax
 860770e:	89 d1                	mov    %edx,%ecx
 8607710:	29 c1                	sub    %eax,%ecx
 8607712:	89 c8                	mov    %ecx,%eax
 8607714:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8607717:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
 860771b:	74 1d                	je     860773a <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x2da>
 860771d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8607720:	89 04 24             	mov    %eax,(%esp)
 8607723:	e8 30 1c 00 00       	call   8609358 <_ZNK6CSkill17GetStealSPPenaltyEv>
 8607728:	89 44 24 04          	mov    %eax,0x4(%esp)
 860772c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860772f:	89 04 24             	mov    %eax,(%esp)
 8607732:	e8 6b 38 49 00       	call   8a9afa2 <_Z22getSkillSpendSPOnStealii>
 8607737:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860773a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 860773e:	79 07                	jns    8607747 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x2e7>
 8607740:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8607747:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 860774a:	89 04 24             	mov    %eax,(%esp)
 860774d:	e8 60 3e c2 ff       	call   822b5b2 <_ZNK6CSkill14IsSpecialSkillEv>
 8607752:	84 c0                	test   %al,%al
 8607754:	74 10                	je     8607766 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x306>
 8607756:	8b 45 08             	mov    0x8(%ebp),%eax
 8607759:	89 04 24             	mov    %eax,(%esp)
 860775c:	e8 bb 07 00 00       	call   8607f1c <_ZN9SkillSlot19get_temp_remain_sfpEv>
 8607761:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8607764:	eb 0e                	jmp    8607774 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x314>
 8607766:	8b 45 08             	mov    0x8(%ebp),%eax
 8607769:	89 04 24             	mov    %eax,(%esp)
 860776c:	e8 8d 07 00 00       	call   8607efe <_ZN9SkillSlot18get_temp_remain_spEv>
 8607771:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8607774:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8607778:	75 0a                	jne    8607784 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x324>
 860777a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 860777f:	e9 6b 01 00 00       	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 8607784:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8607787:	8b 00                	mov    (%eax),%eax
 8607789:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 860778c:	7d 0a                	jge    8607798 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x338>
 860778e:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 8607793:	e9 57 01 00 00       	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 8607798:	8d 45 bc             	lea    -0x44(%ebp),%eax
 860779b:	89 04 24             	mov    %eax,(%esp)
 860779e:	e8 43 1c 00 00       	call   86093e6 <_ZNSt20_List_const_iteratorI10_pre_skillEC1Ev>
 86077a3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86077a6:	8d 50 18             	lea    0x18(%eax),%edx
 86077a9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86077ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 86077b0:	89 04 24             	mov    %eax,(%esp)
 86077b3:	e8 cc 3e da ff       	call   83ab684 <_ZNKSt4listI10_pre_skillSaIS0_EE5beginEv>
 86077b8:	83 ec 04             	sub    $0x4,%esp
 86077bb:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 86077be:	89 45 bc             	mov    %eax,-0x44(%ebp)
 86077c1:	eb 77                	jmp    860783a <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x3da>
 86077c3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86077c6:	89 04 24             	mov    %eax,(%esp)
 86077c9:	e8 26 1c 00 00       	call   86093f4 <_ZNKSt20_List_const_iteratorI10_pre_skillEdeEv>
 86077ce:	8b 10                	mov    (%eax),%edx
 86077d0:	89 55 c0             	mov    %edx,-0x40(%ebp)
 86077d3:	8b 50 04             	mov    0x4(%eax),%edx
 86077d6:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 86077d9:	8b 40 08             	mov    0x8(%eax),%eax
 86077dc:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86077df:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 86077e2:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 86077e5:	8b 45 c0             	mov    -0x40(%ebp),%eax
 86077e8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86077eb:	81 c3 76 03 00 00    	add    $0x376,%ebx
 86077f1:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86077f5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86077f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 86077fd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8607801:	8b 45 08             	mov    0x8(%ebp),%eax
 8607804:	89 04 24             	mov    %eax,(%esp)
 8607807:	e8 08 08 00 00       	call   8608014 <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii>
 860780c:	83 f0 01             	xor    $0x1,%eax
 860780f:	84 c0                	test   %al,%al
 8607811:	74 0a                	je     860781d <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x3bd>
 8607813:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 8607818:	e9 d2 00 00 00       	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 860781d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8607820:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8607827:	00 
 8607828:	8d 55 bc             	lea    -0x44(%ebp),%edx
 860782b:	89 54 24 04          	mov    %edx,0x4(%esp)
 860782f:	89 04 24             	mov    %eax,(%esp)
 8607832:	e8 cb 1b 00 00       	call   8609402 <_ZNSt20_List_const_iteratorI10_pre_skillEppEi>
 8607837:	83 ec 04             	sub    $0x4,%esp
 860783a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 860783d:	8d 50 18             	lea    0x18(%eax),%edx
 8607840:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8607843:	89 54 24 04          	mov    %edx,0x4(%esp)
 8607847:	89 04 24             	mov    %eax,(%esp)
 860784a:	e8 5b 3e da ff       	call   83ab6aa <_ZNKSt4listI10_pre_skillSaIS0_EE3endEv>
 860784f:	83 ec 04             	sub    $0x4,%esp
 8607852:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8607855:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607859:	8d 45 bc             	lea    -0x44(%ebp),%eax
 860785c:	89 04 24             	mov    %eax,(%esp)
 860785f:	e8 6c ed dc ff       	call   83d65d0 <_ZNKSt20_List_const_iteratorI10_pre_skillEneERKS1_>
 8607864:	84 c0                	test   %al,%al
 8607866:	0f 85 57 ff ff ff    	jne    86077c3 <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x363>
 860786c:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 8607870:	74 29                	je     860789b <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x43b>
 8607872:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8607875:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8607878:	89 c2                	mov    %eax,%edx
 860787a:	8b 45 08             	mov    0x8(%ebp),%eax
 860787d:	81 c1 b8 01 00 00    	add    $0x1b8,%ecx
 8607883:	88 54 48 07          	mov    %dl,0x7(%eax,%ecx,2)
 8607887:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860788a:	8b 00                	mov    (%eax),%eax
 860788c:	89 c2                	mov    %eax,%edx
 860788e:	2b 55 f0             	sub    -0x10(%ebp),%edx
 8607891:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8607894:	89 10                	mov    %edx,(%eax)
 8607896:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8607899:	eb 54                	jmp    86078ef <_ZN9SkillSlot21try_master_new_skillsEiiiiii+0x48f>
 860789b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860789e:	8b 00                	mov    (%eax),%eax
 86078a0:	89 c2                	mov    %eax,%edx
 86078a2:	2b 55 f0             	sub    -0x10(%ebp),%edx
 86078a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86078a8:	89 10                	mov    %edx,(%eax)
 86078aa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86078ad:	89 04 24             	mov    %eax,(%esp)
 86078b0:	e8 b1 1a 00 00       	call   8609366 <_ZNK6CSkill15is_active_skillEv>
 86078b5:	0f b6 c0             	movzbl %al,%eax
 86078b8:	8b 55 08             	mov    0x8(%ebp),%edx
 86078bb:	8d 8a 76 03 00 00    	lea    0x376(%edx),%ecx
 86078c1:	8b 55 20             	mov    0x20(%ebp),%edx
 86078c4:	89 54 24 14          	mov    %edx,0x14(%esp)
 86078c8:	89 44 24 10          	mov    %eax,0x10(%esp)
 86078cc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86078cf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86078d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86078d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 86078da:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86078de:	8b 45 08             	mov    0x8(%ebp),%eax
 86078e1:	89 04 24             	mov    %eax,(%esp)
 86078e4:	e8 bb 07 00 00       	call   86080a4 <_ZN9SkillSlot12insert_skillEP15_Mastered_skilliibi>
 86078e9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86078ec:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86078ef:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 86078f2:	c9                   	leave
 86078f3:	c3                   	ret

```

```c
// SkillSlot::try_master_new_skills @ 0x8607460

/* WARNING: Removing unreachable block (ram,0x086075a4) */
/* SkillSlot::try_master_new_skills(int, int, int, int, int, int) */

int __thiscall
SkillSlot::try_master_new_skills
          (SkillSlot *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UserQuest *this_00;
  CUserPremium *this_01;
  uint uVar4;
  GameWorld *this_02;
  int iVar5;
  int *piVar6;
  _List_const_iterator<_pre_skill> local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  _List_const_iterator local_38 [4];
  _List_const_iterator<_pre_skill> local_34 [4];
  CSkill *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_19;
  int local_18;
  int local_14;
  int *local_10;
  
  local_30 = (CSkill *)0x0;
  iVar3 = G_CDataManager();
  local_30 = (CSkill *)CDataManager::find_skill(iVar3,param_3);
  if (local_30 == (CSkill *)0x0) {
    local_28 = -1;
  }
  else {
    local_2c = CSkill::get_group(local_30);
    if (*(int *)this == 0) {
      local_28 = -4;
    }
    else {
      local_28 = get_skillslot_no(this,(_Mastered_skill *)(this + 0x376),param_1,local_2c,true);
      if (local_28 == -1) {
        local_20 = 0;
        local_24 = param_6;
      }
      else {
        local_20 = (int)(char)this[(local_28 + 0x1b8) * 2 + 7];
        local_24 = (char)this[(local_28 + 0x1b8) * 2 + 7] + param_6;
      }
      local_19 = '\0';
      cVar1 = CSkill::IsStealable(local_30,param_4,param_5);
      if (cVar1 != '\0') {
        this_00 = (UserQuest *)CUser::getCurCharacQuestR(*(CUser **)this);
        UserQuest::isClearQuest(this_00,0x163);
        local_19 = '\x01';
        iVar3 = CSkill::GetStealLevelPenalty(local_30);
        param_2 = param_2 - iVar3;
      }
      this_01 = (CUserPremium *)CUser::GetPremiumInfo(*(CUser **)this);
      uVar4 = WongWork::CUserPremium::getOverSkillLevel(this_01);
      this_02 = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsPvPSkilTreeChannel(this_02);
      if (cVar1 == '\0') {
        cVar1 = CSkill::can_learn(local_30,param_2 + (uVar4 & 0xffff),param_4,param_5,local_24);
        if (cVar1 != '\x01') {
          return -3;
        }
      }
      else {
        iVar3 = *(int *)(local_30 + 0x198);
        iVar5 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)this);
        if (iVar5 < iVar3) {
          return -3;
        }
        cVar1 = CSkill::can_learn(local_30,0x46,param_4,param_5,local_24);
        if (cVar1 != '\x01') {
          return -3;
        }
      }
      local_18 = CSkill::get_second_growtype_fitness(local_30,param_4,param_5);
      if (local_18 == 0) {
        local_18 = CSkill::get_fitness(local_30,param_4);
      }
      local_14 = CSkill::get_need_sp_sfp_for_level(local_30,local_20,local_24);
      if (local_14 < 0) {
        local_28 = -4;
      }
      else {
        if (0 < local_18) {
          local_14 = ((100 - local_18) * local_14) / 100;
        }
        if (local_19 != '\0') {
          iVar3 = CSkill::GetStealSPPenalty(local_30);
          local_14 = getSkillSpendSPOnSteal(local_14,iVar3);
        }
        if (local_14 < 0) {
          local_14 = 0;
        }
        cVar1 = CSkill::IsSpecialSkill(local_30);
        if (cVar1 == '\0') {
          local_10 = (int *)get_temp_remain_sp(this);
        }
        else {
          local_10 = (int *)get_temp_remain_sfp(this);
        }
        if (local_10 == (int *)0x0) {
          local_28 = -1;
        }
        else if (*local_10 < local_14) {
          local_28 = -2;
        }
        else {
          std::_List_const_iterator<_pre_skill>::_List_const_iterator(local_48);
          std::list<_pre_skill,std::allocator<_pre_skill>>::begin();
          while( true ) {
            std::list<_pre_skill,std::allocator<_pre_skill>>::end();
            cVar1 = std::_List_const_iterator<_pre_skill>::operator!=(local_48,local_38);
            if (cVar1 == '\0') break;
            piVar6 = (int *)std::_List_const_iterator<_pre_skill>::operator*(local_48);
            local_44 = *piVar6;
            local_40 = piVar6[1];
            local_3c = piVar6[2];
            cVar1 = check_skill_mastered
                              (this,(_Mastered_skill *)(this + 0x376),local_44,local_40,local_3c);
            if (cVar1 != '\x01') {
              return -3;
            }
            std::_List_const_iterator<_pre_skill>::operator++(local_34,(int)local_48);
          }
          if (local_28 == -1) {
            *local_10 = *local_10 - local_14;
            bVar2 = (bool)CSkill::is_active_skill(local_30);
            local_28 = insert_skill(this,(_Mastered_skill *)(this + 0x376),param_1,local_2c,bVar2,
                                    param_6);
          }
          else {
            this[(local_28 + 0x1b8) * 2 + 7] = SUB41(local_24,0);
            *local_10 = *local_10 - local_14;
          }
        }
      }
    }
  }
  return local_28;
}

```

---

## try_refund_skill

```asm
// === 086078f4 SkillSlot::try_refund_skill  [0x086078f4-0x8607db9] ===
 86078f4:	55                   	push   %ebp
 86078f5:	89 e5                	mov    %esp,%ebp
 86078f7:	56                   	push   %esi
 86078f8:	53                   	push   %ebx
 86078f9:	83 c4 80             	add    $0xffffff80,%esp
 86078fc:	8b 45 24             	mov    0x24(%ebp),%eax
 86078ff:	c7 00 13 00 00 00    	movl   $0x13,(%eax)
 8607905:	8b 45 08             	mov    0x8(%ebp),%eax
 8607908:	8b 00                	mov    (%eax),%eax
 860790a:	85 c0                	test   %eax,%eax
 860790c:	75 0a                	jne    8607918 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x24>
 860790e:	bb fc ff ff ff       	mov    $0xfffffffc,%ebx
 8607913:	e9 99 04 00 00       	jmp    8607db1 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x4bd>
 8607918:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 860791f:	e8 77 48 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8607924:	8b 55 0c             	mov    0xc(%ebp),%edx
 8607927:	89 54 24 08          	mov    %edx,0x8(%esp)
 860792b:	8b 55 14             	mov    0x14(%ebp),%edx
 860792e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8607932:	89 04 24             	mov    %eax,(%esp)
 8607935:	e8 68 84 d5 ff       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 860793a:	89 45 bc             	mov    %eax,-0x44(%ebp)
 860793d:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 8607941:	75 0a                	jne    860794d <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x59>
 8607943:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8607948:	e9 64 04 00 00       	jmp    8607db1 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x4bd>
 860794d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8607950:	89 04 24             	mov    %eax,(%esp)
 8607953:	e8 3e d2 d6 ff       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 8607958:	89 45 c0             	mov    %eax,-0x40(%ebp)
 860795b:	83 7d c0 04          	cmpl   $0x4,-0x40(%ebp)
 860795f:	75 13                	jne    8607974 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x80>
 8607961:	8b 45 24             	mov    0x24(%ebp),%eax
 8607964:	c7 00 07 00 00 00    	movl   $0x7,(%eax)
 860796a:	bb fb ff ff ff       	mov    $0xfffffffb,%ebx
 860796f:	e9 3d 04 00 00       	jmp    8607db1 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x4bd>
 8607974:	e8 2e 2a ad ff       	call   80da3a7 <_Z11G_GameWorldv>
 8607979:	89 04 24             	mov    %eax,(%esp)
 860797c:	e8 9d ca c2 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 8607981:	84 c0                	test   %al,%al
 8607983:	74 2a                	je     86079af <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0xbb>
 8607985:	8b 45 08             	mov    0x8(%ebp),%eax
 8607988:	8b 00                	mov    (%eax),%eax
 860798a:	89 04 24             	mov    %eax,(%esp)
 860798d:	e8 b8 74 b9 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 8607992:	83 f8 00             	cmp    $0x0,%eax
 8607995:	0f 9d c0             	setge  %al
 8607998:	84 c0                	test   %al,%al
 860799a:	75 13                	jne    86079af <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0xbb>
 860799c:	8b 45 24             	mov    0x24(%ebp),%eax
 860799f:	c7 00 07 00 00 00    	movl   $0x7,(%eax)
 86079a5:	bb fd ff ff ff       	mov    $0xfffffffd,%ebx
 86079aa:	e9 02 04 00 00       	jmp    8607db1 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x4bd>
 86079af:	8b 45 08             	mov    0x8(%ebp),%eax
 86079b2:	8d 90 76 03 00 00    	lea    0x376(%eax),%edx
 86079b8:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 86079bf:	00 
 86079c0:	8b 45 c0             	mov    -0x40(%ebp),%eax
 86079c3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86079c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86079ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 86079ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 86079d2:	8b 45 08             	mov    0x8(%ebp),%eax
 86079d5:	89 04 24             	mov    %eax,(%esp)
 86079d8:	e8 dd 03 00 00       	call   8607dba <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib>
 86079dd:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86079e0:	83 7d c4 ff          	cmpl   $0xffffffff,-0x3c(%ebp)
 86079e4:	75 0a                	jne    86079f0 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0xfc>
 86079e6:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 86079eb:	e9 c1 03 00 00       	jmp    8607db1 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x4bd>
 86079f0:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 86079f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86079f6:	81 c2 b8 01 00 00    	add    $0x1b8,%edx
 86079fc:	0f b6 44 50 07       	movzbl 0x7(%eax,%edx,2),%eax
 8607a01:	0f be c0             	movsbl %al,%eax
 8607a04:	2b 45 20             	sub    0x20(%ebp),%eax
 8607a07:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8607a0a:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 8607a0e:	79 0a                	jns    8607a1a <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x126>
 8607a10:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8607a15:	e9 97 03 00 00       	jmp    8607db1 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x4bd>
 8607a1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8607a1d:	8b 00                	mov    (%eax),%eax
 8607a1f:	89 04 24             	mov    %eax,(%esp)
 8607a22:	e8 6d 7e c2 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 8607a27:	89 c3                	mov    %eax,%ebx
 8607a29:	e8 6d 47 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8607a2e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8607a32:	89 04 24             	mov    %eax,(%esp)
 8607a35:	e8 b8 3b c2 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 8607a3a:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8607a3d:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8607a41:	74 59                	je     8607a9c <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x1a8>
 8607a43:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8607a4a:	eb 38                	jmp    8607a84 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x190>
 8607a4c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8607a4f:	8d 50 0c             	lea    0xc(%eax),%edx
 8607a52:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8607a55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607a59:	89 14 24             	mov    %edx,(%esp)
 8607a5c:	e8 43 2e ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8607a61:	8b 00                	mov    (%eax),%eax
 8607a63:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8607a66:	0f 94 c0             	sete   %al
 8607a69:	84 c0                	test   %al,%al
 8607a6b:	74 13                	je     8607a80 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x18c>
 8607a6d:	8b 45 24             	mov    0x24(%ebp),%eax
 8607a70:	c7 00 07 00 00 00    	movl   $0x7,(%eax)
 8607a76:	bb fb ff ff ff       	mov    $0xfffffffb,%ebx
 8607a7b:	e9 31 03 00 00       	jmp    8607db1 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x4bd>
 8607a80:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8607a84:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8607a87:	83 c0 0c             	add    $0xc,%eax
 8607a8a:	89 04 24             	mov    %eax,(%esp)
 8607a8d:	e8 82 5d ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8607a92:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8607a95:	0f 97 c0             	seta   %al
 8607a98:	84 c0                	test   %al,%al
 8607a9a:	75 b0                	jne    8607a4c <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x158>
 8607a9c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8607a9f:	89 04 24             	mov    %eax,(%esp)
 8607aa2:	e8 e7 e1 ba ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8607aa7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8607aaa:	89 04 24             	mov    %eax,(%esp)
 8607aad:	e8 24 cf b2 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8607ab2:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8607ab5:	89 44 24 10          	mov    %eax,0x10(%esp)
 8607ab9:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8607abc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8607ac0:	8b 45 18             	mov    0x18(%ebp),%eax
 8607ac3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8607ac7:	8b 45 14             	mov    0x14(%ebp),%eax
 8607aca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607ace:	8b 45 08             	mov    0x8(%ebp),%eax
 8607ad1:	89 04 24             	mov    %eax,(%esp)
 8607ad4:	e8 71 f6 ff ff       	call   860714a <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE>
 8607ad9:	c1 e8 1f             	shr    $0x1f,%eax
 8607adc:	84 c0                	test   %al,%al
 8607ade:	74 0a                	je     8607aea <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x1f6>
 8607ae0:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8607ae5:	e9 bc 02 00 00       	jmp    8607da6 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x4b2>
 8607aea:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8607af1:	eb 61                	jmp    8607b54 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x260>
 8607af3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8607af6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607afa:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8607afd:	89 04 24             	mov    %eax,(%esp)
 8607b00:	e8 9f 2d ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8607b05:	8b 50 04             	mov    0x4(%eax),%edx
 8607b08:	8b 00                	mov    (%eax),%eax
 8607b0a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8607b0d:	89 55 b8             	mov    %edx,-0x48(%ebp)
 8607b10:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8607b13:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8607b16:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8607b19:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8607b1c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8607b1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8607b22:	81 c2 b8 01 00 00    	add    $0x1b8,%edx
 8607b28:	0f b6 44 50 06       	movzbl 0x6(%eax,%edx,2),%eax
 8607b2d:	0f b6 c0             	movzbl %al,%eax
 8607b30:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 8607b33:	75 1b                	jne    8607b50 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x25c>
 8607b35:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8607b38:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 8607b3b:	7d 2e                	jge    8607b6b <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x277>
 8607b3d:	8b 45 24             	mov    0x24(%ebp),%eax
 8607b40:	c7 00 07 00 00 00    	movl   $0x7,(%eax)
 8607b46:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8607b4b:	e9 56 02 00 00       	jmp    8607da6 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x4b2>
 8607b50:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8607b54:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8607b57:	89 04 24             	mov    %eax,(%esp)
 8607b5a:	e8 b5 5c ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8607b5f:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8607b62:	0f 9f c0             	setg   %al
 8607b65:	84 c0                	test   %al,%al
 8607b67:	75 8a                	jne    8607af3 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x1ff>
 8607b69:	eb 01                	jmp    8607b6c <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x278>
 8607b6b:	90                   	nop
 8607b6c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8607b6f:	89 04 24             	mov    %eax,(%esp)
 8607b72:	e8 5f ce b2 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8607b77:	8b 45 08             	mov    0x8(%ebp),%eax
 8607b7a:	8b 00                	mov    (%eax),%eax
 8607b7c:	89 04 24             	mov    %eax,(%esp)
 8607b7f:	e8 9c 63 af ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8607b84:	89 c3                	mov    %eax,%ebx
 8607b86:	e8 10 46 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8607b8b:	8b 40 10             	mov    0x10(%eax),%eax
 8607b8e:	8d 55 9c             	lea    -0x64(%ebp),%edx
 8607b91:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8607b95:	8b 55 0c             	mov    0xc(%ebp),%edx
 8607b98:	89 54 24 08          	mov    %edx,0x8(%esp)
 8607b9c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8607ba0:	89 04 24             	mov    %eax,(%esp)
 8607ba3:	e8 80 a4 d4 ff       	call   8352028 <_ZN10CSkillList23get_post_learning_skillEiiRSt6vectorISt4pairIiiESaIS2_EE>
 8607ba8:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8607baf:	e9 85 00 00 00       	jmp    8607c39 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x345>
 8607bb4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8607bb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607bbb:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8607bbe:	89 04 24             	mov    %eax,(%esp)
 8607bc1:	e8 de 2c ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8607bc6:	8b 00                	mov    (%eax),%eax
 8607bc8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8607bcb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8607bce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607bd2:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8607bd5:	89 04 24             	mov    %eax,(%esp)
 8607bd8:	e8 c7 2c ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8607bdd:	8b 40 04             	mov    0x4(%eax),%eax
 8607be0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8607be3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8607bea:	eb 38                	jmp    8607c24 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x330>
 8607bec:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8607bef:	8b 45 08             	mov    0x8(%ebp),%eax
 8607bf2:	81 c2 b8 01 00 00    	add    $0x1b8,%edx
 8607bf8:	0f b6 44 50 06       	movzbl 0x6(%eax,%edx,2),%eax
 8607bfd:	0f b6 c0             	movzbl %al,%eax
 8607c00:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8607c03:	75 1b                	jne    8607c20 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x32c>
 8607c05:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8607c08:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8607c0b:	7d 27                	jge    8607c34 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x340>
 8607c0d:	8b 45 24             	mov    0x24(%ebp),%eax
 8607c10:	c7 00 14 00 00 00    	movl   $0x14,(%eax)
 8607c16:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8607c1b:	e9 5e 01 00 00       	jmp    8607d7e <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x48a>
 8607c20:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8607c24:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 8607c2b:	0f 9e c0             	setle  %al
 8607c2e:	84 c0                	test   %al,%al
 8607c30:	75 ba                	jne    8607bec <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x2f8>
 8607c32:	eb 01                	jmp    8607c35 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x341>
 8607c34:	90                   	nop
 8607c35:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8607c39:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8607c3c:	89 04 24             	mov    %eax,(%esp)
 8607c3f:	e8 d0 5b ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8607c44:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8607c47:	0f 9f c0             	setg   %al
 8607c4a:	84 c0                	test   %al,%al
 8607c4c:	0f 85 62 ff ff ff    	jne    8607bb4 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x2c0>
 8607c52:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8607c55:	8b 45 08             	mov    0x8(%ebp),%eax
 8607c58:	81 c2 b8 01 00 00    	add    $0x1b8,%edx
 8607c5e:	0f b6 44 50 07       	movzbl 0x7(%eax,%edx,2),%eax
 8607c63:	0f be c0             	movsbl %al,%eax
 8607c66:	89 44 24 08          	mov    %eax,0x8(%esp)
 8607c6a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8607c6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607c71:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8607c74:	89 04 24             	mov    %eax,(%esp)
 8607c77:	e8 00 86 d4 ff       	call   835027c <_ZNK6CSkill25get_need_sp_sfp_for_levelEii>
 8607c7c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8607c7f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8607c82:	89 44 24 08          	mov    %eax,0x8(%esp)
 8607c86:	8b 45 18             	mov    0x18(%ebp),%eax
 8607c89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607c8d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8607c90:	89 04 24             	mov    %eax,(%esp)
 8607c93:	e8 54 88 d4 ff       	call   83504ec <_ZNK6CSkill11IsStealableEii>
 8607c98:	84 c0                	test   %al,%al
 8607c9a:	74 1d                	je     8607cb9 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x3c5>
 8607c9c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8607c9f:	89 04 24             	mov    %eax,(%esp)
 8607ca2:	e8 b1 16 00 00       	call   8609358 <_ZNK6CSkill17GetStealSPPenaltyEv>
 8607ca7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8607cab:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8607cae:	89 04 24             	mov    %eax,(%esp)
 8607cb1:	e8 ec 32 49 00       	call   8a9afa2 <_Z22getSkillSpendSPOnStealii>
 8607cb6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8607cb9:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8607cbc:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8607cbf:	8b 45 08             	mov    0x8(%ebp),%eax
 8607cc2:	81 c2 b8 01 00 00    	add    $0x1b8,%edx
 8607cc8:	0f b6 44 50 07       	movzbl 0x7(%eax,%edx,2),%eax
 8607ccd:	89 c2                	mov    %eax,%edx
 8607ccf:	8b 45 20             	mov    0x20(%ebp),%eax
 8607cd2:	89 d3                	mov    %edx,%ebx
 8607cd4:	28 c3                	sub    %al,%bl
 8607cd6:	89 d8                	mov    %ebx,%eax
 8607cd8:	89 c2                	mov    %eax,%edx
 8607cda:	8b 45 08             	mov    0x8(%ebp),%eax
 8607cdd:	81 c1 b8 01 00 00    	add    $0x1b8,%ecx
 8607ce3:	88 54 48 07          	mov    %dl,0x7(%eax,%ecx,2)
 8607ce7:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8607cea:	8b 45 08             	mov    0x8(%ebp),%eax
 8607ced:	81 c2 b8 01 00 00    	add    $0x1b8,%edx
 8607cf3:	0f b6 44 50 07       	movzbl 0x7(%eax,%edx,2),%eax
 8607cf8:	84 c0                	test   %al,%al
 8607cfa:	75 11                	jne    8607d0d <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x419>
 8607cfc:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8607cff:	8b 45 08             	mov    0x8(%ebp),%eax
 8607d02:	81 c2 b8 01 00 00    	add    $0x1b8,%edx
 8607d08:	c6 44 50 06 00       	movb   $0x0,0x6(%eax,%edx,2)
 8607d0d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8607d10:	89 04 24             	mov    %eax,(%esp)
 8607d13:	e8 9a 38 c2 ff       	call   822b5b2 <_ZNK6CSkill14IsSpecialSkillEv>
 8607d18:	83 f0 01             	xor    $0x1,%eax
 8607d1b:	84 c0                	test   %al,%al
 8607d1d:	74 1f                	je     8607d3e <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x44a>
 8607d1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8607d22:	89 04 24             	mov    %eax,(%esp)
 8607d25:	e8 d4 01 00 00       	call   8607efe <_ZN9SkillSlot18get_temp_remain_spEv>
 8607d2a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8607d2d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8607d30:	8b 00                	mov    (%eax),%eax
 8607d32:	89 c2                	mov    %eax,%edx
 8607d34:	03 55 d8             	add    -0x28(%ebp),%edx
 8607d37:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8607d3a:	89 10                	mov    %edx,(%eax)
 8607d3c:	eb 1d                	jmp    8607d5b <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x467>
 8607d3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8607d41:	89 04 24             	mov    %eax,(%esp)
 8607d44:	e8 d3 01 00 00       	call   8607f1c <_ZN9SkillSlot19get_temp_remain_sfpEv>
 8607d49:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8607d4c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8607d4f:	8b 00                	mov    (%eax),%eax
 8607d51:	89 c2                	mov    %eax,%edx
 8607d53:	03 55 d8             	add    -0x28(%ebp),%edx
 8607d56:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8607d59:	89 10                	mov    %edx,(%eax)
 8607d5b:	8b 45 24             	mov    0x24(%ebp),%eax
 8607d5e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8607d64:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 8607d67:	eb 15                	jmp    8607d7e <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x48a>
 8607d69:	89 d3                	mov    %edx,%ebx
 8607d6b:	89 c6                	mov    %eax,%esi
 8607d6d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8607d70:	89 04 24             	mov    %eax,(%esp)
 8607d73:	e8 72 cc b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8607d78:	89 f0                	mov    %esi,%eax
 8607d7a:	89 da                	mov    %ebx,%edx
 8607d7c:	eb 0d                	jmp    8607d8b <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x497>
 8607d7e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8607d81:	89 04 24             	mov    %eax,(%esp)
 8607d84:	e8 61 cc b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8607d89:	eb 1b                	jmp    8607da6 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi+0x4b2>
 8607d8b:	89 d3                	mov    %edx,%ebx
 8607d8d:	89 c6                	mov    %eax,%esi
 8607d8f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8607d92:	89 04 24             	mov    %eax,(%esp)
 8607d95:	e8 50 cc b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8607d9a:	89 f0                	mov    %esi,%eax
 8607d9c:	89 da                	mov    %ebx,%edx
 8607d9e:	89 04 24             	mov    %eax,(%esp)
 8607da1:	e8 aa b9 4d 00       	call   8ae3750 <_Unwind_Resume>
 8607da6:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8607da9:	89 04 24             	mov    %eax,(%esp)
 8607dac:	e8 39 cc b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8607db1:	89 d8                	mov    %ebx,%eax
 8607db3:	83 ec 80             	sub    $0xffffff80,%esp
 8607db6:	5b                   	pop    %ebx
 8607db7:	5e                   	pop    %esi
 8607db8:	5d                   	pop    %ebp
 8607db9:	c3                   	ret

```

```c
// SkillSlot::try_refund_skill @ 0x86078f4

/* SkillSlot::try_refund_skill(int, int, int, int, int, int, int&) */

int __thiscall
SkillSlot::try_refund_skill
          (SkillSlot *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int *param_7)

{
  char cVar1;
  GameWorld *this_00;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_68 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_5c [12];
  uint local_50;
  uint local_4c;
  CSkill *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  *param_7 = 0x13;
  if (*(int *)this == 0) {
    iVar6 = -4;
  }
  else {
    local_48 = (CSkill *)0x0;
    iVar6 = G_CDataManager();
    local_48 = (CSkill *)CDataManager::find_skill(iVar6,param_3);
    if (local_48 == (CSkill *)0x0) {
      iVar6 = -1;
    }
    else {
      local_44 = CSkill::get_group(local_48);
      if (local_44 == 4) {
        *param_7 = 7;
        iVar6 = -5;
      }
      else {
        this_00 = (GameWorld *)G_GameWorld();
        cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
        if ((cVar1 == '\0') ||
           (iVar6 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)this), -1 < iVar6)) {
          local_40 = get_skillslot_no(this,(_Mastered_skill *)(this + 0x376),param_1,local_44,true);
          if (local_40 == -1) {
            iVar6 = -1;
          }
          else {
            local_3c = (char)this[(local_40 + 0x1b8) * 2 + 7] - param_6;
            if (local_3c < 0) {
              iVar6 = -1;
            }
            else {
              CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
              iVar6 = G_CDataManager();
              local_38 = CDataManager::GetExpertJobScript(iVar6);
              if (local_38 != 0) {
                local_24 = 0;
                while (uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                               size((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *
                                    )(local_38 + 0xc)), local_24 < uVar3) {
                  piVar2 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                  ::operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                *)(local_38 + 0xc),local_24);
                  if (*piVar2 == param_1) {
                    *param_7 = 7;
                    return -5;
                  }
                  local_24 = local_24 + 1;
                }
              }
              std::pair<int,int>::pair((pair<int,int> *)&local_50);
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_5c);
                    /* try { // try from 08607ad4 to 08607b76 has its CatchHandler @ 08607d8b */
              iVar6 = get_give_skill(this,param_3,param_4,param_5,(vector *)local_5c);
              if (iVar6 < 0) {
                iVar6 = -1;
              }
              else {
                local_20 = 0;
                while (iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                               size(local_5c), (int)local_20 < iVar6) {
                  puVar5 = (uint *)std::
                                   vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                   operator[](local_5c,local_20);
                  local_4c = puVar5[1];
                  local_50 = *puVar5;
                  local_34 = local_50;
                  local_30 = local_4c;
                  if ((byte)this[(local_40 + 0x1b8) * 2 + 6] == local_50) {
                    if (local_3c < (int)local_4c) {
                      *param_7 = 7;
                      iVar6 = -1;
                      goto LAB_08607da6;
                    }
                    break;
                  }
                  local_20 = local_20 + 1;
                }
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_68)
                ;
                iVar6 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                    /* try { // try from 08607b86 to 08607cb5 has its CatchHandler @ 08607d69 */
                iVar4 = G_CDataManager();
                CSkillList::get_post_learning_skill(*(int *)(iVar4 + 0x10),iVar6,(vector *)param_1);
                local_1c = 0;
                while (iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                               size(local_68), (int)local_1c < iVar6) {
                  puVar5 = (uint *)std::
                                   vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                   operator[](local_68,local_1c);
                  local_18 = *puVar5;
                  iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[](local_68,local_1c);
                  local_14 = *(int *)(iVar6 + 4);
                  for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
                    if ((byte)this[(local_10 + 0x1b8) * 2 + 6] == local_18) {
                      if (local_3c < local_14) {
                        *param_7 = 0x14;
                        iVar6 = -1;
                        goto LAB_08607d7e;
                      }
                      break;
                    }
                  }
                  local_1c = local_1c + 1;
                }
                local_2c = CSkill::get_need_sp_sfp_for_level
                                     (local_48,local_3c,(int)(char)this[(local_40 + 0x1b8) * 2 + 7])
                ;
                cVar1 = CSkill::IsStealable(local_48,param_4,param_5);
                if (cVar1 != '\0') {
                  iVar6 = CSkill::GetStealSPPenalty(local_48);
                  local_2c = getSkillSpendSPOnSteal(local_2c,iVar6);
                }
                this[(local_40 + 0x1b8) * 2 + 7] =
                     (SkillSlot)((char)this[(local_40 + 0x1b8) * 2 + 7] - (char)param_6);
                if (this[(local_40 + 0x1b8) * 2 + 7] == (SkillSlot)0x0) {
                  this[(local_40 + 0x1b8) * 2 + 6] = (SkillSlot)0x0;
                }
                cVar1 = CSkill::IsSpecialSkill(local_48);
                if (cVar1 == '\x01') {
                  local_28 = (int *)get_temp_remain_sfp(this);
                  *local_28 = *local_28 + local_2c;
                }
                else {
                  local_28 = (int *)get_temp_remain_sp(this);
                  *local_28 = *local_28 + local_2c;
                }
                *param_7 = 0;
                iVar6 = local_40;
LAB_08607d7e:
                    /* try { // try from 08607d84 to 08607d88 has its CatchHandler @ 08607d8b */
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                          (local_68);
              }
LAB_08607da6:
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_5c);
            }
          }
        }
        else {
          *param_7 = 7;
          iVar6 = -3;
        }
      }
    }
  }
  return iVar6;
}

```

---

## verifyComboSkill

```asm
// === 086091fe SkillSlot::verifyComboSkill  [0x086091fe-0x860922b] ===
 86091fe:	55                   	push   %ebp
 86091ff:	89 e5                	mov    %esp,%ebp
 8609201:	83 ec 18             	sub    $0x18,%esp
 8609204:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860920b:	00 
 860920c:	8b 45 08             	mov    0x8(%ebp),%eax
 860920f:	89 04 24             	mov    %eax,(%esp)
 8609212:	e8 15 00 00 00       	call   860922c <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND>
 8609217:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860921e:	00 
 860921f:	8b 45 08             	mov    0x8(%ebp),%eax
 8609222:	89 04 24             	mov    %eax,(%esp)
 8609225:	e8 02 00 00 00       	call   860922c <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND>
 860922a:	c9                   	leave
 860922b:	c3                   	ret

```

```c
// SkillSlot::verifyComboSkill @ 0x86091fe

/* SkillSlot::verifyComboSkill() */

void __thiscall SkillSlot::verifyComboSkill(SkillSlot *this)

{
  verifyComboSkillTree(this,0);
  verifyComboSkillTree(this,1);
  return;
}

```

---

## verifyComboSkillTree

```asm
// === 0860922c SkillSlot::verifyComboSkillTree  [0x0860922c-0x86092ec] ===
 860922c:	55                   	push   %ebp
 860922d:	89 e5                	mov    %esp,%ebp
 860922f:	83 ec 38             	sub    $0x38,%esp
 8609232:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609235:	85 c0                	test   %eax,%eax
 8609237:	74 3d                	je     8609276 <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND+0x4a>
 8609239:	8b 45 0c             	mov    0xc(%ebp),%eax
 860923c:	83 f8 01             	cmp    $0x1,%eax
 860923f:	74 35                	je     8609276 <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND+0x4a>
 8609241:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609244:	89 44 24 14          	mov    %eax,0x14(%esp)
 8609248:	c7 44 24 10 c0 d5 cd 	movl   $0x8cdd5c0,0x10(%esp)
 860924f:	08 
 8609250:	c7 44 24 0c 33 0d 00 	movl   $0xd33,0xc(%esp)
 8609257:	00 
 8609258:	c7 44 24 08 20 e2 cd 	movl   $0x8cde220,0x8(%esp)
 860925f:	08 
 8609260:	c7 44 24 04 9c d2 cd 	movl   $0x8cdd29c,0x4(%esp)
 8609267:	08 
 8609268:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 860926f:	e8 96 a9 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8609274:	eb 75                	jmp    86092eb <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND+0xbf>
 8609276:	e8 20 2f ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 860927b:	8b 40 14             	mov    0x14(%eax),%eax
 860927e:	05 fc 48 00 00       	add    $0x48fc,%eax
 8609283:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8609286:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 860928d:	eb 51                	jmp    86092e0 <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND+0xb4>
 860928f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8609292:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609296:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8609299:	89 04 24             	mov    %eax,(%esp)
 860929c:	e8 03 16 ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 86092a1:	8b 00                	mov    (%eax),%eax
 86092a3:	85 c0                	test   %eax,%eax
 86092a5:	0f 94 c0             	sete   %al
 86092a8:	84 c0                	test   %al,%al
 86092aa:	75 2f                	jne    86092db <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND+0xaf>
 86092ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86092af:	89 44 24 04          	mov    %eax,0x4(%esp)
 86092b3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86092b6:	89 04 24             	mov    %eax,(%esp)
 86092b9:	e8 e6 15 ae ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 86092be:	8b 00                	mov    (%eax),%eax
 86092c0:	8b 55 08             	mov    0x8(%ebp),%edx
 86092c3:	83 c2 1c             	add    $0x1c,%edx
 86092c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 86092ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 86092cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86092d1:	89 14 24             	mov    %edx,(%esp)
 86092d4:	e8 2d 0f ae ff       	call   80ea206 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi>
 86092d9:	eb 01                	jmp    86092dc <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND+0xb0>
 86092db:	90                   	nop
 86092dc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86092e0:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86092e4:	0f 9e c0             	setle  %al
 86092e7:	84 c0                	test   %al,%al
 86092e9:	75 a4                	jne    860928f <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND+0x63>
 86092eb:	c9                   	leave
 86092ec:	c3                   	ret

```

```c
// SkillSlot::verifyComboSkillTree @ 0x860922c

/* SkillSlot::verifyComboSkillTree(ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::verifyComboSkillTree(SkillSlot *this,int param_2)

{
  int iVar1;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *this_00;
  int *piVar2;
  undefined4 *puVar3;
  uint local_10;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    iVar1 = G_CDataManager();
    this_00 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
              (*(int *)(iVar1 + 0x14) + 0x48fc);
    for (local_10 = 0; (int)local_10 < 6; local_10 = local_10 + 1) {
      piVar2 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                (this_00,local_10);
      if (*piVar2 != 0) {
        puVar3 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           (this_00,local_10);
        ComboSkill::eraseDuplicationComboSKill((ComboSkill *)(this + 0x1c),param_2,*puVar3);
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp","void SkillSlot::verifyComboSkillTree(ENUM_SKILL_TREE_KIND)",0xd33
               ,"SkillSlot::verifyComboSkillTree kind(%d) error",param_2);
  }
  return;
}

```

