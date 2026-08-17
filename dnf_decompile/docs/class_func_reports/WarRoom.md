# WarRoom

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 58

---

## AddBanList

```asm
// === 086ba948 WarRoom::AddBanList  [0x086ba948-0x86ba99d] ===
 86ba948:	55                   	push   %ebp
 86ba949:	89 e5                	mov    %esp,%ebp
 86ba94b:	53                   	push   %ebx
 86ba94c:	83 ec 24             	sub    $0x24,%esp
 86ba94f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ba952:	89 04 24             	mov    %eax,(%esp)
 86ba955:	e8 42 af a8 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 86ba95a:	84 c0                	test   %al,%al
 86ba95c:	75 38                	jne    86ba996 <_ZN7WarRoom10AddBanListEP5CUser+0x4e>
 86ba95e:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ba961:	89 04 24             	mov    %eax,(%esp)
 86ba964:	e8 05 fa a1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86ba969:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ba96c:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba96f:	8d 90 d8 01 00 00    	lea    0x1d8(%eax),%edx
 86ba975:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86ba978:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba97c:	89 14 24             	mov    %edx,(%esp)
 86ba97f:	e8 82 62 00 00       	call   86c0c06 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEEixERS3_>
 86ba984:	89 c3                	mov    %eax,%ebx
 86ba986:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86ba98d:	e8 0c 13 a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86ba992:	89 03                	mov    %eax,(%ebx)
 86ba994:	eb 01                	jmp    86ba997 <_ZN7WarRoom10AddBanListEP5CUser+0x4f>
 86ba996:	90                   	nop
 86ba997:	83 c4 24             	add    $0x24,%esp
 86ba99a:	5b                   	pop    %ebx
 86ba99b:	5d                   	pop    %ebp
 86ba99c:	c3                   	ret
 86ba99d:	90                   	nop

```

```c
// WarRoom::AddBanList @ 0x86ba948

/* WarRoom::AddBanList(CUser*) */

void __thiscall WarRoom::AddBanList(WarRoom *this,CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint local_10 [2];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\0') {
    local_10[0] = CUser::get_acc_id(param_1);
    puVar2 = (undefined4 *)
             std::
             map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
             ::operator[]((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                           *)(this + 0x1d8),local_10);
    uVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *puVar2 = uVar3;
  }
  return;
}

```

---

## BattleReset

```asm
// === 086baa8e WarRoom::BattleReset  [0x086baa8e-0x86babad] ===
 86baa8e:	55                   	push   %ebp
 86baa8f:	89 e5                	mov    %esp,%ebp
 86baa91:	83 ec 28             	sub    $0x28,%esp
 86baa94:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86baa9b:	e9 a5 00 00 00       	jmp    86bab45 <_ZN7WarRoom11BattleResetEv+0xb7>
 86baaa0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86baaa3:	8b 45 08             	mov    0x8(%ebp),%eax
 86baaa6:	83 c2 48             	add    $0x48,%edx
 86baaa9:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86baaad:	85 c0                	test   %eax,%eax
 86baaaf:	74 4f                	je     86bab00 <_ZN7WarRoom11BattleResetEv+0x72>
 86baab1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86baab4:	8b 45 08             	mov    0x8(%ebp),%eax
 86baab7:	83 c2 48             	add    $0x48,%edx
 86baaba:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86baabe:	89 04 24             	mov    %eax,(%esp)
 86baac1:	e8 94 ee a3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 86baac6:	89 04 24             	mov    %eax,(%esp)
 86baac9:	e8 b2 d5 a3 ff       	call   80f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>
 86baace:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86baad1:	8b 45 08             	mov    0x8(%ebp),%eax
 86baad4:	83 c2 48             	add    $0x48,%edx
 86baad7:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86baadb:	89 04 24             	mov    %eax,(%esp)
 86baade:	e8 77 ee a3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 86baae3:	89 04 24             	mov    %eax,(%esp)
 86baae6:	e8 bb d6 a3 ff       	call   80f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>
 86baaeb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86baaee:	8b 45 08             	mov    0x8(%ebp),%eax
 86baaf1:	83 c2 48             	add    $0x48,%edx
 86baaf4:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86baaf8:	89 04 24             	mov    %eax,(%esp)
 86baafb:	e8 6e 60 00 00       	call   86c0b6e <_ZN5CUser14ResetCoinCountEv>
 86bab00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bab03:	8b 55 08             	mov    0x8(%ebp),%edx
 86bab06:	c6 84 02 84 01 00 00 	movb   $0x0,0x184(%edx,%eax,1)
 86bab0d:	00 
 86bab0e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bab11:	8b 45 08             	mov    0x8(%ebp),%eax
 86bab14:	83 c2 60             	add    $0x60,%edx
 86bab17:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 86bab1e:	00 
 86bab1f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bab22:	8b 45 08             	mov    0x8(%ebp),%eax
 86bab25:	83 c2 68             	add    $0x68,%edx
 86bab28:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 86bab2f:	00 
 86bab30:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bab33:	8b 45 08             	mov    0x8(%ebp),%eax
 86bab36:	83 c2 04             	add    $0x4,%edx
 86bab39:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
 86bab40:	ff 
 86bab41:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bab45:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bab49:	0f 9e c0             	setle  %al
 86bab4c:	84 c0                	test   %al,%al
 86bab4e:	0f 85 4c ff ff ff    	jne    86baaa0 <_ZN7WarRoom11BattleResetEv+0x12>
 86bab54:	8b 45 08             	mov    0x8(%ebp),%eax
 86bab57:	83 c0 34             	add    $0x34,%eax
 86bab5a:	89 04 24             	mov    %eax,(%esp)
 86bab5d:	e8 b2 de ff ff       	call   86b8a14 <_ZN8WarField5ResetEv>
 86bab62:	8b 45 08             	mov    0x8(%ebp),%eax
 86bab65:	05 bc 01 00 00       	add    $0x1bc,%eax
 86bab6a:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 86bab71:	00 
 86bab72:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bab79:	00 
 86bab7a:	89 04 24             	mov    %eax,(%esp)
 86bab7d:	e8 3e 31 9c ff       	call   807dcc0 <memset@plt>
 86bab82:	8b 45 08             	mov    0x8(%ebp),%eax
 86bab85:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 86bab8c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bab8f:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 86bab93:	8b 45 08             	mov    0x8(%ebp),%eax
 86bab96:	c6 40 11 00          	movb   $0x0,0x11(%eax)
 86bab9a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bab9d:	c6 40 12 00          	movb   $0x0,0x12(%eax)
 86baba1:	8b 45 08             	mov    0x8(%ebp),%eax
 86baba4:	89 04 24             	mov    %eax,(%esp)
 86baba7:	e8 d2 5b 00 00       	call   86c077e <_ZN7WarRoom17CurSpawnStepResetEv>
 86babac:	c9                   	leave
 86babad:	c3                   	ret

```

```c
// WarRoom::BattleReset @ 0x86baa8e

/* WarRoom::BattleReset() */

void __thiscall WarRoom::BattleReset(WarRoom *this)

{
  CHackAnalyzer *this_00;
  int local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
      CUser::getHackAnalyzer(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
      WongWork::CHackAnalyzer::reportHackInfo();
      this_00 = (CHackAnalyzer *)
                CUser::getHackAnalyzer(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
      WongWork::CHackAnalyzer::resetHackInfo(this_00);
      CUser::ResetCoinCount(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
    }
    this[local_10 + 0x184] = (WarRoom)0x0;
    *(undefined4 *)(this + (local_10 + 0x60) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_10 + 0x68) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_10 + 4) * 4 + 4) = 0xffffffff;
  }
  WarField::Reset((WarField *)(this + 0x34));
  memset(this + 0x1bc,0,0x10);
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x10] = (WarRoom)0x0;
  this[0x11] = (WarRoom)0x0;
  this[0x12] = (WarRoom)0x0;
  CurSpawnStepReset(this);
  return;
}

```

---

## CalcGuildFP

```asm
// === 086bbea6 WarRoom::CalcGuildFP  [0x086bbea6-0x86bc0af] ===
 86bbea6:	55                   	push   %ebp
 86bbea7:	89 e5                	mov    %esp,%ebp
 86bbea9:	53                   	push   %ebx
 86bbeaa:	83 ec 54             	sub    $0x54,%esp
 86bbead:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 86bbeb0:	b9 00 00 00 00       	mov    $0x0,%ecx
 86bbeb5:	b8 18 00 00 00       	mov    $0x18,%eax
 86bbeba:	89 c3                	mov    %eax,%ebx
 86bbebc:	83 e3 fc             	and    $0xfffffffc,%ebx
 86bbebf:	b8 00 00 00 00       	mov    $0x0,%eax
 86bbec4:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 86bbec7:	83 c0 04             	add    $0x4,%eax
 86bbeca:	39 d8                	cmp    %ebx,%eax
 86bbecc:	72 f6                	jb     86bbec4 <_ZN7WarRoom11CalcGuildFPEv+0x1e>
 86bbece:	01 c2                	add    %eax,%edx
 86bbed0:	c7 45 be 00 00 00 00 	movl   $0x0,-0x42(%ebp)
 86bbed7:	66 c7 45 c2 00 00    	movw   $0x0,-0x3e(%ebp)
 86bbedd:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 86bbee4:	eb 69                	jmp    86bbf4f <_ZN7WarRoom11CalcGuildFPEv+0xa9>
 86bbee6:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86bbee9:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbeec:	83 c2 48             	add    $0x48,%edx
 86bbeef:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbef3:	85 c0                	test   %eax,%eax
 86bbef5:	74 53                	je     86bbf4a <_ZN7WarRoom11CalcGuildFPEv+0xa4>
 86bbef7:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 86bbefa:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86bbefd:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbf00:	83 c2 48             	add    $0x48,%edx
 86bbf03:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbf07:	89 04 24             	mov    %eax,(%esp)
 86bbf0a:	e8 bf 99 f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bbf0f:	8b 55 08             	mov    0x8(%ebp),%edx
 86bbf12:	8d 4b 68             	lea    0x68(%ebx),%ecx
 86bbf15:	89 44 8a 04          	mov    %eax,0x4(%edx,%ecx,4)
 86bbf19:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 86bbf1c:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86bbf1f:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbf22:	83 c2 48             	add    $0x48,%edx
 86bbf25:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbf29:	89 04 24             	mov    %eax,(%esp)
 86bbf2c:	e8 3b 35 b7 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 86bbf31:	89 44 9d c4          	mov    %eax,-0x3c(%ebp,%ebx,4)
 86bbf35:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86bbf38:	8b 44 85 c4          	mov    -0x3c(%ebp,%eax,4),%eax
 86bbf3c:	85 c0                	test   %eax,%eax
 86bbf3e:	75 0b                	jne    86bbf4b <_ZN7WarRoom11CalcGuildFPEv+0xa5>
 86bbf40:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86bbf43:	c6 44 05 be 01       	movb   $0x1,-0x42(%ebp,%eax,1)
 86bbf48:	eb 01                	jmp    86bbf4b <_ZN7WarRoom11CalcGuildFPEv+0xa5>
 86bbf4a:	90                   	nop
 86bbf4b:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 86bbf4f:	83 7d dc 05          	cmpl   $0x5,-0x24(%ebp)
 86bbf53:	0f 9e c0             	setle  %al
 86bbf56:	84 c0                	test   %al,%al
 86bbf58:	75 8c                	jne    86bbee6 <_ZN7WarRoom11CalcGuildFPEv+0x40>
 86bbf5a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 86bbf61:	e9 35 01 00 00       	jmp    86bc09b <_ZN7WarRoom11CalcGuildFPEv+0x1f5>
 86bbf66:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86bbf69:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbf6c:	83 c2 48             	add    $0x48,%edx
 86bbf6f:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbf73:	85 c0                	test   %eax,%eax
 86bbf75:	0f 84 15 01 00 00    	je     86bc090 <_ZN7WarRoom11CalcGuildFPEv+0x1ea>
 86bbf7b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86bbf7e:	0f b6 44 05 be       	movzbl -0x42(%ebp,%eax,1),%eax
 86bbf83:	84 c0                	test   %al,%al
 86bbf85:	0f 85 08 01 00 00    	jne    86bc093 <_ZN7WarRoom11CalcGuildFPEv+0x1ed>
 86bbf8b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86bbf8e:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbf91:	83 c2 68             	add    $0x68,%edx
 86bbf94:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86bbf98:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86bbf9b:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 86bbfa2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86bbfa5:	c6 44 05 be 01       	movb   $0x1,-0x42(%ebp,%eax,1)
 86bbfaa:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 86bbfb1:	66 c7 45 bc 00 00    	movw   $0x0,-0x44(%ebp)
 86bbfb7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86bbfba:	c6 44 05 b8 01       	movb   $0x1,-0x48(%ebp,%eax,1)
 86bbfbf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86bbfc2:	83 c0 01             	add    $0x1,%eax
 86bbfc5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bbfc8:	eb 5d                	jmp    86bc027 <_ZN7WarRoom11CalcGuildFPEv+0x181>
 86bbfca:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bbfcd:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbfd0:	83 c2 48             	add    $0x48,%edx
 86bbfd3:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbfd7:	85 c0                	test   %eax,%eax
 86bbfd9:	74 44                	je     86bc01f <_ZN7WarRoom11CalcGuildFPEv+0x179>
 86bbfdb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bbfde:	0f b6 44 05 be       	movzbl -0x42(%ebp,%eax,1),%eax
 86bbfe3:	84 c0                	test   %al,%al
 86bbfe5:	75 3b                	jne    86bc022 <_ZN7WarRoom11CalcGuildFPEv+0x17c>
 86bbfe7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86bbfea:	8b 54 85 c4          	mov    -0x3c(%ebp,%eax,4),%edx
 86bbfee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bbff1:	8b 44 85 c4          	mov    -0x3c(%ebp,%eax,4),%eax
 86bbff5:	39 c2                	cmp    %eax,%edx
 86bbff7:	75 2a                	jne    86bc023 <_ZN7WarRoom11CalcGuildFPEv+0x17d>
 86bbff9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bbffc:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbfff:	83 c2 68             	add    $0x68,%edx
 86bc002:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86bc006:	01 45 e4             	add    %eax,-0x1c(%ebp)
 86bc009:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 86bc00d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bc010:	c6 44 05 be 01       	movb   $0x1,-0x42(%ebp,%eax,1)
 86bc015:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bc018:	c6 44 05 b8 01       	movb   $0x1,-0x48(%ebp,%eax,1)
 86bc01d:	eb 04                	jmp    86bc023 <_ZN7WarRoom11CalcGuildFPEv+0x17d>
 86bc01f:	90                   	nop
 86bc020:	eb 01                	jmp    86bc023 <_ZN7WarRoom11CalcGuildFPEv+0x17d>
 86bc022:	90                   	nop
 86bc023:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86bc027:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 86bc02b:	0f 9e c0             	setle  %al
 86bc02e:	84 c0                	test   %al,%al
 86bc030:	75 98                	jne    86bbfca <_ZN7WarRoom11CalcGuildFPEv+0x124>
 86bc032:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 86bc036:	7e 5e                	jle    86bc096 <_ZN7WarRoom11CalcGuildFPEv+0x1f0>
 86bc038:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86bc03b:	89 c2                	mov    %eax,%edx
 86bc03d:	c1 fa 1f             	sar    $0x1f,%edx
 86bc040:	f7 7d e8             	idivl  -0x18(%ebp)
 86bc043:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86bc046:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bc04d:	eb 34                	jmp    86bc083 <_ZN7WarRoom11CalcGuildFPEv+0x1dd>
 86bc04f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bc052:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc055:	83 c2 48             	add    $0x48,%edx
 86bc058:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc05c:	85 c0                	test   %eax,%eax
 86bc05e:	74 1e                	je     86bc07e <_ZN7WarRoom11CalcGuildFPEv+0x1d8>
 86bc060:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bc063:	0f b6 44 05 b8       	movzbl -0x48(%ebp,%eax,1),%eax
 86bc068:	84 c0                	test   %al,%al
 86bc06a:	74 13                	je     86bc07f <_ZN7WarRoom11CalcGuildFPEv+0x1d9>
 86bc06c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bc06f:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc072:	8d 4a 68             	lea    0x68(%edx),%ecx
 86bc075:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86bc078:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 86bc07c:	eb 01                	jmp    86bc07f <_ZN7WarRoom11CalcGuildFPEv+0x1d9>
 86bc07e:	90                   	nop
 86bc07f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bc083:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bc087:	0f 9e c0             	setle  %al
 86bc08a:	84 c0                	test   %al,%al
 86bc08c:	75 c1                	jne    86bc04f <_ZN7WarRoom11CalcGuildFPEv+0x1a9>
 86bc08e:	eb 07                	jmp    86bc097 <_ZN7WarRoom11CalcGuildFPEv+0x1f1>
 86bc090:	90                   	nop
 86bc091:	eb 04                	jmp    86bc097 <_ZN7WarRoom11CalcGuildFPEv+0x1f1>
 86bc093:	90                   	nop
 86bc094:	eb 01                	jmp    86bc097 <_ZN7WarRoom11CalcGuildFPEv+0x1f1>
 86bc096:	90                   	nop
 86bc097:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 86bc09b:	83 7d e0 05          	cmpl   $0x5,-0x20(%ebp)
 86bc09f:	0f 9e c0             	setle  %al
 86bc0a2:	84 c0                	test   %al,%al
 86bc0a4:	0f 85 bc fe ff ff    	jne    86bbf66 <_ZN7WarRoom11CalcGuildFPEv+0xc0>
 86bc0aa:	83 c4 54             	add    $0x54,%esp
 86bc0ad:	5b                   	pop    %ebx
 86bc0ae:	5d                   	pop    %ebp
 86bc0af:	c3                   	ret

```

```c
// WarRoom::CalcGuildFP @ 0x86bbea6

/* WarRoom::CalcGuildFP() */

void __thiscall WarRoom::CalcGuildFP(WarRoom *this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char local_4c [12];
  int local_40 [6];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uVar2 = 0;
  do {
    *(undefined4 *)((int)local_40 + uVar2) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x18);
  local_4c[6] = '\0';
  local_4c[7] = '\0';
  local_4c[8] = '\0';
  local_4c[9] = '\0';
  local_4c[10] = '\0';
  local_4c[0xb] = '\0';
  for (local_28 = 0; iVar4 = local_28, local_28 < 6; local_28 = local_28 + 1) {
    if (*(int *)(this + (local_28 + 0x48) * 4 + 0xc) != 0) {
      uVar3 = CUserCharacInfo::GetFinishPointTotal
                        (*(CUserCharacInfo **)(this + (local_28 + 0x48) * 4 + 0xc));
      iVar1 = local_28;
      *(undefined4 *)(this + (iVar4 + 0x68) * 4 + 4) = uVar3;
      iVar4 = CUserCharacInfo::get_charac_guildkey
                        (*(CUserCharacInfo **)(this + (local_28 + 0x48) * 4 + 0xc));
      local_40[iVar1] = iVar4;
      if (local_40[local_28] == 0) {
        local_4c[local_28 + 6] = '\x01';
      }
    }
  }
  for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
    if ((*(int *)(this + (local_24 + 0x48) * 4 + 0xc) != 0) && (local_4c[local_24 + 6] == '\0')) {
      local_20 = *(int *)(this + (local_24 + 0x68) * 4 + 4);
      local_1c = 1;
      local_4c[local_24 + 6] = '\x01';
      local_4c[0] = '\0';
      local_4c[1] = '\0';
      local_4c[2] = '\0';
      local_4c[3] = '\0';
      local_4c[4] = '\0';
      local_4c[5] = '\0';
      local_4c[local_24] = '\x01';
      for (local_14 = local_24 + 1; local_14 < 6; local_14 = local_14 + 1) {
        if (((*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) && (local_4c[local_14 + 6] == '\0')
            ) && (local_40[local_24] == local_40[local_14])) {
          local_20 = local_20 + *(int *)(this + (local_14 + 0x68) * 4 + 4);
          local_1c = local_1c + 1;
          local_4c[local_14 + 6] = '\x01';
          local_4c[local_14] = '\x01';
        }
      }
      if (1 < local_1c) {
        local_18 = local_20 / local_1c;
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          if ((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) && (local_4c[local_10] != '\0')) {
            *(int *)(this + (local_10 + 0x68) * 4 + 4) = local_20 / local_1c;
          }
        }
      }
    }
  }
  return;
}

```

---

## CancelAllTimer

```asm
// === 086be120 WarRoom::CancelAllTimer  [0x086be120-0x86be151] ===
 86be120:	55                   	push   %ebp
 86be121:	89 e5                	mov    %esp,%ebp
 86be123:	83 ec 28             	sub    $0x28,%esp
 86be126:	c7 45 f4 40 00 00 00 	movl   $0x40,-0xc(%ebp)
 86be12d:	eb 16                	jmp    86be145 <_ZN7WarRoom14CancelAllTimerEv+0x25>
 86be12f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86be132:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be136:	8b 45 08             	mov    0x8(%ebp),%eax
 86be139:	89 04 24             	mov    %eax,(%esp)
 86be13c:	e8 e3 29 00 00       	call   86c0b24 <_ZN7WarRoom11GenTimerKeyE13TIMER_MESSAGE>
 86be141:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86be145:	83 7d f4 47          	cmpl   $0x47,-0xc(%ebp)
 86be149:	0f 9e c0             	setle  %al
 86be14c:	84 c0                	test   %al,%al
 86be14e:	75 df                	jne    86be12f <_ZN7WarRoom14CancelAllTimerEv+0xf>
 86be150:	c9                   	leave
 86be151:	c3                   	ret

```

```c
// WarRoom::CancelAllTimer @ 0x86be120

/* WarRoom::CancelAllTimer() */

void __thiscall WarRoom::CancelAllTimer(WarRoom *this)

{
  undefined4 local_10;
  
  for (local_10 = 0x40; local_10 < 0x48; local_10 = local_10 + 1) {
    GenTimerKey(this,local_10);
  }
  return;
}

```

---

## ChangeState

```asm
// === 086bb53c WarRoom::ChangeState  [0x086bb53c-0x86bb581] ===
 86bb53c:	55                   	push   %ebp
 86bb53d:	89 e5                	mov    %esp,%ebp
 86bb53f:	83 ec 18             	sub    $0x18,%esp
 86bb542:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb545:	8b 80 44 01 00 00    	mov    0x144(%eax),%eax
 86bb54b:	89 c2                	mov    %eax,%edx
 86bb54d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb550:	39 c2                	cmp    %eax,%edx
 86bb552:	74 2b                	je     86bb57f <_ZN7WarRoom11ChangeStateE13WARROOM_STATE+0x43>
 86bb554:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb557:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb55b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb55e:	89 04 24             	mov    %eax,(%esp)
 86bb561:	e8 ae 19 00 00       	call   86bcf14 <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE>
 86bb566:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb569:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bb56c:	89 90 44 01 00 00    	mov    %edx,0x144(%eax)
 86bb572:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb575:	89 04 24             	mov    %eax,(%esp)
 86bb578:	e8 9f 01 00 00       	call   86bb71c <_ZN7WarRoom12OnEnterStateEv>
 86bb57d:	eb 01                	jmp    86bb580 <_ZN7WarRoom11ChangeStateE13WARROOM_STATE+0x44>
 86bb57f:	90                   	nop
 86bb580:	c9                   	leave
 86bb581:	c3                   	ret

```

```c
// WarRoom::ChangeState @ 0x86bb53c

/* WarRoom::ChangeState(WARROOM_STATE) */

void __thiscall WarRoom::ChangeState(WarRoom *this,int param_2)

{
  if (*(int *)(this + 0x144) != param_2) {
    OnLeaveState(this,param_2);
    *(int *)(this + 0x144) = param_2;
    OnEnterState(this);
  }
  return;
}

```

---

## CheckFatuigue

```asm
// === 086bc4ec WarRoom::CheckFatuigue  [0x086bc4ec-0x86bc5fd] ===
 86bc4ec:	55                   	push   %ebp
 86bc4ed:	89 e5                	mov    %esp,%ebp
 86bc4ef:	53                   	push   %ebx
 86bc4f0:	83 ec 24             	sub    $0x24,%esp
 86bc4f3:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86bc4fa:	e9 ea 00 00 00       	jmp    86bc5e9 <_ZN7WarRoom13CheckFatuigueEv+0xfd>
 86bc4ff:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86bc502:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc505:	83 c2 48             	add    $0x48,%edx
 86bc508:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc50c:	85 c0                	test   %eax,%eax
 86bc50e:	0f 84 d0 00 00 00    	je     86bc5e4 <_ZN7WarRoom13CheckFatuigueEv+0xf8>
 86bc514:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86bc517:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc51a:	83 c2 48             	add    $0x48,%edx
 86bc51d:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc521:	89 04 24             	mov    %eax,(%esp)
 86bc524:	e8 d7 9f f9 ff       	call   8656500 <_ZN5CUser12CheckFatigueEv>
 86bc529:	83 f0 01             	xor    $0x1,%eax
 86bc52c:	84 c0                	test   %al,%al
 86bc52e:	74 3e                	je     86bc56e <_ZN7WarRoom13CheckFatuigueEv+0x82>
 86bc530:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86bc533:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc536:	83 c2 48             	add    $0x48,%edx
 86bc539:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc53d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bc540:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bc543:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc547:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc54a:	89 04 24             	mov    %eax,(%esp)
 86bc54d:	e8 04 0d 00 00       	call   86bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>
 86bc552:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 86bc559:	00 
 86bc55a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bc55d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc561:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc564:	89 04 24             	mov    %eax,(%esp)
 86bc567:	e8 e6 1b 00 00       	call   86be152 <_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE>
 86bc56c:	eb 77                	jmp    86bc5e5 <_ZN7WarRoom13CheckFatuigueEv+0xf9>
 86bc56e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86bc571:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc574:	83 c2 48             	add    $0x48,%edx
 86bc577:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc57b:	89 04 24             	mov    %eax,(%esp)
 86bc57e:	e8 05 dc ab ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 86bc583:	89 c3                	mov    %eax,%ebx
 86bc585:	e8 11 fc a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bc58a:	8b 55 08             	mov    0x8(%ebp),%edx
 86bc58d:	0f b6 12             	movzbl (%edx),%edx
 86bc590:	0f b6 d2             	movzbl %dl,%edx
 86bc593:	81 c2 1c 22 00 00    	add    $0x221c,%edx
 86bc599:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86bc59d:	39 c3                	cmp    %eax,%ebx
 86bc59f:	0f 9c c0             	setl   %al
 86bc5a2:	84 c0                	test   %al,%al
 86bc5a4:	74 3f                	je     86bc5e5 <_ZN7WarRoom13CheckFatuigueEv+0xf9>
 86bc5a6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86bc5a9:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc5ac:	83 c2 48             	add    $0x48,%edx
 86bc5af:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc5b3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86bc5b6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bc5b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc5bd:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc5c0:	89 04 24             	mov    %eax,(%esp)
 86bc5c3:	e8 8e 0c 00 00       	call   86bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>
 86bc5c8:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 86bc5cf:	00 
 86bc5d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bc5d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc5d7:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc5da:	89 04 24             	mov    %eax,(%esp)
 86bc5dd:	e8 70 1b 00 00       	call   86be152 <_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE>
 86bc5e2:	eb 01                	jmp    86bc5e5 <_ZN7WarRoom13CheckFatuigueEv+0xf9>
 86bc5e4:	90                   	nop
 86bc5e5:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 86bc5e9:	83 7d ec 05          	cmpl   $0x5,-0x14(%ebp)
 86bc5ed:	0f 9e c0             	setle  %al
 86bc5f0:	84 c0                	test   %al,%al
 86bc5f2:	0f 85 07 ff ff ff    	jne    86bc4ff <_ZN7WarRoom13CheckFatuigueEv+0x13>
 86bc5f8:	83 c4 24             	add    $0x24,%esp
 86bc5fb:	5b                   	pop    %ebx
 86bc5fc:	5d                   	pop    %ebp
 86bc5fd:	c3                   	ret

```

```c
// WarRoom::CheckFatuigue @ 0x86bc4ec

/* WarRoom::CheckFatuigue() */

void __thiscall WarRoom::CheckFatuigue(WarRoom *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_18;
  
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    if (*(int *)(this + (local_18 + 0x48) * 4 + 0xc) != 0) {
      cVar2 = CUser::CheckFatigue(*(CUser **)(this + (local_18 + 0x48) * 4 + 0xc));
      if (cVar2 == '\x01') {
        iVar3 = CUserCharacInfo::getCurCharacMoney
                          (*(CUserCharacInfo **)(this + (local_18 + 0x48) * 4 + 0xc));
        iVar4 = G_CDataManager();
        if (iVar3 < *(int *)(iVar4 + 4 + ((byte)*this + 0x221c) * 4)) {
          uVar1 = *(undefined4 *)(this + (local_18 + 0x48) * 4 + 0xc);
          WalkOutUserBySlot(this,local_18);
          SendWalkOut(this,uVar1,8);
        }
      }
      else {
        uVar1 = *(undefined4 *)(this + (local_18 + 0x48) * 4 + 0xc);
        WalkOutUserBySlot(this,local_18);
        SendWalkOut(this,uVar1,5);
      }
    }
  }
  return;
}

```

---

## CheckHostChange

```asm
// === 086c0964 WarRoom::CheckHostChange  [0x086c0964-0x86c0ac6] ===
 86c0964:	55                   	push   %ebp
 86c0965:	89 e5                	mov    %esp,%ebp
 86c0967:	56                   	push   %esi
 86c0968:	53                   	push   %ebx
 86c0969:	83 ec 30             	sub    $0x30,%esp
 86c096c:	8b 45 08             	mov    0x8(%ebp),%eax
 86c096f:	8b 40 2c             	mov    0x2c(%eax),%eax
 86c0972:	83 f8 01             	cmp    $0x1,%eax
 86c0975:	0f 8e 12 01 00 00    	jle    86c0a8d <_ZN7WarRoom15CheckHostChangeEv+0x129>
 86c097b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c097e:	89 04 24             	mov    %eax,(%esp)
 86c0981:	e8 c6 d3 ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86c0986:	c7 44 24 08 60 01 00 	movl   $0x160,0x8(%esp)
 86c098d:	00 
 86c098e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c0995:	00 
 86c0996:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c0999:	89 04 24             	mov    %eax,(%esp)
 86c099c:	e8 5b af a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86c09a1:	c7 45 e8 ff ff ff ff 	movl   $0xffffffff,-0x18(%ebp)
 86c09a8:	c7 45 ec ff ff ff ff 	movl   $0xffffffff,-0x14(%ebp)
 86c09af:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86c09b6:	eb 55                	jmp    86c0a0d <_ZN7WarRoom15CheckHostChangeEv+0xa9>
 86c09b8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c09bb:	8b 45 08             	mov    0x8(%ebp),%eax
 86c09be:	83 c2 48             	add    $0x48,%edx
 86c09c1:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c09c5:	85 c0                	test   %eax,%eax
 86c09c7:	74 3c                	je     86c0a05 <_ZN7WarRoom15CheckHostChangeEv+0xa1>
 86c09c9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c09cc:	8b 45 08             	mov    0x8(%ebp),%eax
 86c09cf:	83 c2 04             	add    $0x4,%edx
 86c09d2:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86c09d6:	83 f8 ff             	cmp    $0xffffffff,%eax
 86c09d9:	74 2d                	je     86c0a08 <_ZN7WarRoom15CheckHostChangeEv+0xa4>
 86c09db:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c09de:	8b 45 08             	mov    0x8(%ebp),%eax
 86c09e1:	83 c2 04             	add    $0x4,%edx
 86c09e4:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86c09e8:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 86c09eb:	77 1c                	ja     86c0a09 <_ZN7WarRoom15CheckHostChangeEv+0xa5>
 86c09ed:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c09f0:	8b 45 08             	mov    0x8(%ebp),%eax
 86c09f3:	83 c2 04             	add    $0x4,%edx
 86c09f6:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86c09fa:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86c09fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86c0a00:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86c0a03:	eb 04                	jmp    86c0a09 <_ZN7WarRoom15CheckHostChangeEv+0xa5>
 86c0a05:	90                   	nop
 86c0a06:	eb 01                	jmp    86c0a09 <_ZN7WarRoom15CheckHostChangeEv+0xa5>
 86c0a08:	90                   	nop
 86c0a09:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86c0a0d:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 86c0a11:	0f 9e c0             	setle  %al
 86c0a14:	84 c0                	test   %al,%al
 86c0a16:	75 a0                	jne    86c09b8 <_ZN7WarRoom15CheckHostChangeEv+0x54>
 86c0a18:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 86c0a1c:	75 07                	jne    86c0a25 <_ZN7WarRoom15CheckHostChangeEv+0xc1>
 86c0a1e:	bb 00 00 00 00       	mov    $0x0,%ebx
 86c0a23:	eb 59                	jmp    86c0a7e <_ZN7WarRoom15CheckHostChangeEv+0x11a>
 86c0a25:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86c0a28:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0a2c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c0a2f:	89 04 24             	mov    %eax,(%esp)
 86c0a32:	e8 e9 ae a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c0a37:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c0a3e:	00 
 86c0a3f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c0a42:	89 04 24             	mov    %eax,(%esp)
 86c0a45:	e8 0e af a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86c0a4a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c0a4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0a51:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0a54:	89 04 24             	mov    %eax,(%esp)
 86c0a57:	e8 70 d6 ff ff       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86c0a5c:	bb 01 00 00 00       	mov    $0x1,%ebx
 86c0a61:	eb 1b                	jmp    86c0a7e <_ZN7WarRoom15CheckHostChangeEv+0x11a>
 86c0a63:	89 d3                	mov    %edx,%ebx
 86c0a65:	89 c6                	mov    %eax,%esi
 86c0a67:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c0a6a:	89 04 24             	mov    %eax,(%esp)
 86c0a6d:	e8 0e d4 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c0a72:	89 f0                	mov    %esi,%eax
 86c0a74:	89 da                	mov    %ebx,%edx
 86c0a76:	89 04 24             	mov    %eax,(%esp)
 86c0a79:	e8 d2 2c 42 00       	call   8ae3750 <_Unwind_Resume>
 86c0a7e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86c0a81:	89 04 24             	mov    %eax,(%esp)
 86c0a84:	e8 f7 d3 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c0a89:	85 db                	test   %ebx,%ebx
 86c0a8b:	74 33                	je     86c0ac0 <_ZN7WarRoom15CheckHostChangeEv+0x15c>
 86c0a8d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86c0a94:	eb 15                	jmp    86c0aab <_ZN7WarRoom15CheckHostChangeEv+0x147>
 86c0a96:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86c0a99:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0a9c:	83 c2 04             	add    $0x4,%edx
 86c0a9f:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
 86c0aa6:	ff 
 86c0aa7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86c0aab:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86c0aaf:	0f 9e c0             	setle  %al
 86c0ab2:	84 c0                	test   %al,%al
 86c0ab4:	75 e0                	jne    86c0a96 <_ZN7WarRoom15CheckHostChangeEv+0x132>
 86c0ab6:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0ab9:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 86c0ac0:	83 c4 30             	add    $0x30,%esp
 86c0ac3:	5b                   	pop    %ebx
 86c0ac4:	5e                   	pop    %esi
 86c0ac5:	5d                   	pop    %ebp
 86c0ac6:	c3                   	ret

```

```c
// WarRoom::CheckHostChange @ 0x86c0964

/* WarRoom::CheckHostChange() */

void __thiscall WarRoom::CheckHostChange(WarRoom *this)

{
  bool bVar1;
  PacketGuard local_28 [12];
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (1 < *(int *)(this + 0x2c)) {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 086c099c to 086c0a5b has its CatchHandler @ 086c0a63 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x160);
    local_1c = 0xffffffff;
    local_18 = -1;
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      if (((*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) &&
          (*(int *)(this + (local_14 + 4) * 4 + 4) != -1)) &&
         (*(uint *)(this + (local_14 + 4) * 4 + 4) <= local_1c)) {
        local_1c = *(uint *)(this + (local_14 + 4) * 4 + 4);
        local_18 = local_14;
      }
    }
    bVar1 = local_18 != -1;
    if (bVar1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_18);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      SendToRoom(this,local_28);
    }
    PacketGuard::~PacketGuard(local_28);
    if (!bVar1) {
      return;
    }
  }
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 4) * 4 + 4) = 0xffffffff;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}

```

---

## CheckState

```asm
// === 086bd3ec WarRoom::CheckState  [0x086bd3ec-0x86bd45f] ===
 86bd3ec:	55                   	push   %ebp
 86bd3ed:	89 e5                	mov    %esp,%ebp
 86bd3ef:	83 ec 18             	sub    $0x18,%esp
 86bd3f2:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd3f5:	89 04 24             	mov    %eax,(%esp)
 86bd3f8:	e8 cf d7 ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86bd3fd:	85 c0                	test   %eax,%eax
 86bd3ff:	0f 94 c0             	sete   %al
 86bd402:	84 c0                	test   %al,%al
 86bd404:	74 15                	je     86bd41b <_ZN7WarRoom10CheckStateEv+0x2f>
 86bd406:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bd40d:	00 
 86bd40e:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd411:	89 04 24             	mov    %eax,(%esp)
 86bd414:	e8 23 e1 ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86bd419:	eb 43                	jmp    86bd45e <_ZN7WarRoom10CheckStateEv+0x72>
 86bd41b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd41e:	89 04 24             	mov    %eax,(%esp)
 86bd421:	e8 a6 d7 ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86bd426:	83 f8 02             	cmp    $0x2,%eax
 86bd429:	7f 17                	jg     86bd442 <_ZN7WarRoom10CheckStateEv+0x56>
 86bd42b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd42e:	89 04 24             	mov    %eax,(%esp)
 86bd431:	e8 60 1a b7 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bd436:	83 f8 01             	cmp    $0x1,%eax
 86bd439:	75 07                	jne    86bd442 <_ZN7WarRoom10CheckStateEv+0x56>
 86bd43b:	b8 01 00 00 00       	mov    $0x1,%eax
 86bd440:	eb 05                	jmp    86bd447 <_ZN7WarRoom10CheckStateEv+0x5b>
 86bd442:	b8 00 00 00 00       	mov    $0x0,%eax
 86bd447:	84 c0                	test   %al,%al
 86bd449:	74 13                	je     86bd45e <_ZN7WarRoom10CheckStateEv+0x72>
 86bd44b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bd452:	00 
 86bd453:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd456:	89 04 24             	mov    %eax,(%esp)
 86bd459:	e8 de e0 ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86bd45e:	c9                   	leave
 86bd45f:	c3                   	ret

```

```c
// WarRoom::CheckState @ 0x86bd3ec

/* WarRoom::CheckState() */

void __thiscall WarRoom::CheckState(WarRoom *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = GetWaiterCount(this);
  if (iVar2 != 0) {
    iVar2 = GetWaiterCount(this);
    if ((iVar2 < 3) && (iVar2 = GetState(this), iVar2 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      ChangeState(this,0);
    }
    return;
  }
  ChangeState(this,0);
  return;
}

```

---

## ClearReward

```asm
// === 086bc5fe WarRoom::ClearReward  [0x086bc5fe-0x86bcf13] ===
 86bc5fe:	55                   	push   %ebp
 86bc5ff:	89 e5                	mov    %esp,%ebp
 86bc601:	56                   	push   %esi
 86bc602:	53                   	push   %ebx
 86bc603:	81 ec e0 00 00 00    	sub    $0xe0,%esp
 86bc609:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 86bc610:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 86bc617:	eb 66                	jmp    86bc67f <_ZN7WarRoom11ClearRewardEv+0x81>
 86bc619:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 86bc61c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc61f:	83 c2 6c             	add    $0x6c,%edx
 86bc622:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 86bc626:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc629:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bc62f:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 86bc632:	81 c2 e0 01 00 00    	add    $0x1e0,%edx
 86bc638:	8b 44 90 10          	mov    0x10(%eax,%edx,4),%eax
 86bc63c:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 86bc642:	db 85 64 ff ff ff    	fildl  -0x9c(%ebp)
 86bc648:	de c9                	fmulp  %st,%st(1)
 86bc64a:	d9 bd 56 ff ff ff    	fnstcw -0xaa(%ebp)
 86bc650:	0f b7 85 56 ff ff ff 	movzwl -0xaa(%ebp),%eax
 86bc657:	b4 0c                	mov    $0xc,%ah
 86bc659:	66 89 85 54 ff ff ff 	mov    %ax,-0xac(%ebp)
 86bc660:	d9 ad 54 ff ff ff    	fldcw  -0xac(%ebp)
 86bc666:	db 9d 64 ff ff ff    	fistpl -0x9c(%ebp)
 86bc66c:	d9 ad 56 ff ff ff    	fldcw  -0xaa(%ebp)
 86bc672:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 86bc678:	01 45 a0             	add    %eax,-0x60(%ebp)
 86bc67b:	83 45 a4 01          	addl   $0x1,-0x5c(%ebp)
 86bc67f:	83 7d a4 03          	cmpl   $0x3,-0x5c(%ebp)
 86bc683:	0f 9e c0             	setle  %al
 86bc686:	84 c0                	test   %al,%al
 86bc688:	75 8f                	jne    86bc619 <_ZN7WarRoom11ClearRewardEv+0x1b>
 86bc68a:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 86bc691:	e9 64 08 00 00       	jmp    86bcefa <_ZN7WarRoom11ClearRewardEv+0x8fc>
 86bc696:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bc699:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc69c:	83 c2 48             	add    $0x48,%edx
 86bc69f:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc6a3:	85 c0                	test   %eax,%eax
 86bc6a5:	0f 84 4a 08 00 00    	je     86bcef5 <_ZN7WarRoom11ClearRewardEv+0x8f7>
 86bc6ab:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bc6ae:	89 04 24             	mov    %eax,(%esp)
 86bc6b1:	e8 96 16 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bc6b6:	8d 45 80             	lea    -0x80(%ebp),%eax
 86bc6b9:	89 04 24             	mov    %eax,(%esp)
 86bc6bc:	e8 8b 16 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bc6c1:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 86bc6c8:	00 00 00 
 86bc6cb:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
 86bc6d2:	00 00 00 
 86bc6d5:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc6d8:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bc6de:	d9 80 a0 07 00 00    	flds   0x7a0(%eax)
 86bc6e4:	d9 9d 50 ff ff ff    	fstps  -0xb0(%ebp)
 86bc6ea:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bc6ed:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc6f0:	83 c2 48             	add    $0x48,%edx
 86bc6f3:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc6f7:	89 04 24             	mov    %eax,(%esp)
 86bc6fa:	e8 cf 91 f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bc6ff:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 86bc705:	db 85 64 ff ff ff    	fildl  -0x9c(%ebp)
 86bc70b:	d8 8d 50 ff ff ff    	fmuls  -0xb0(%ebp)
 86bc711:	d9 5d ac             	fstps  -0x54(%ebp)
 86bc714:	d9 45 ac             	flds   -0x54(%ebp)
 86bc717:	d9 e8                	fld1
 86bc719:	de c1                	faddp  %st,%st(1)
 86bc71b:	db 45 a0             	fildl  -0x60(%ebp)
 86bc71e:	de c9                	fmulp  %st,%st(1)
 86bc720:	d9 bd 56 ff ff ff    	fnstcw -0xaa(%ebp)
 86bc726:	0f b7 85 56 ff ff ff 	movzwl -0xaa(%ebp),%eax
 86bc72d:	b4 0c                	mov    $0xc,%ah
 86bc72f:	66 89 85 54 ff ff ff 	mov    %ax,-0xac(%ebp)
 86bc736:	d9 ad 54 ff ff ff    	fldcw  -0xac(%ebp)
 86bc73c:	df bd 58 ff ff ff    	fistpll -0xa8(%ebp)
 86bc742:	d9 ad 56 ff ff ff    	fldcw  -0xaa(%ebp)
 86bc748:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 86bc74e:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 86bc754:	89 45 b0             	mov    %eax,-0x50(%ebp)
 86bc757:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bc75a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc75d:	83 c2 48             	add    $0x48,%edx
 86bc760:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc764:	89 04 24             	mov    %eax,(%esp)
 86bc767:	e8 a2 00 fc ff       	call   867c80e <_ZN5CUser13IsEquipAvatarEv>
 86bc76c:	84 c0                	test   %al,%al
 86bc76e:	74 07                	je     86bc777 <_ZN7WarRoom11ClearRewardEv+0x179>
 86bc770:	b8 0a d7 a3 3c       	mov    $0x3ca3d70a,%eax
 86bc775:	eb 05                	jmp    86bc77c <_ZN7WarRoom11ClearRewardEv+0x17e>
 86bc777:	b8 00 00 00 00       	mov    $0x0,%eax
 86bc77c:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 86bc77f:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bc782:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc785:	83 c2 48             	add    $0x48,%edx
 86bc788:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc78c:	89 04 24             	mov    %eax,(%esp)
 86bc78f:	e8 ea da a1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86bc794:	89 04 24             	mov    %eax,(%esp)
 86bc797:	e8 6c ac af ff       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 86bc79c:	89 04 24             	mov    %eax,(%esp)
 86bc79f:	e8 04 0c b7 ff       	call   822d3a8 <_ZNK13user_creature12CCreatureMgr18IsEquippedCreatureEv>
 86bc7a4:	84 c0                	test   %al,%al
 86bc7a6:	74 07                	je     86bc7af <_ZN7WarRoom11ClearRewardEv+0x1b1>
 86bc7a8:	b8 cd cc 4c 3d       	mov    $0x3d4ccccd,%eax
 86bc7ad:	eb 05                	jmp    86bc7b4 <_ZN7WarRoom11ClearRewardEv+0x1b6>
 86bc7af:	b8 00 00 00 00       	mov    $0x0,%eax
 86bc7b4:	89 45 b8             	mov    %eax,-0x48(%ebp)
 86bc7b7:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%ebp)
 86bc7be:	00 00 00 
 86bc7c1:	c7 85 70 ff ff ff 00 	movl   $0x0,-0x90(%ebp)
 86bc7c8:	00 00 00 
 86bc7cb:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 86bc7d2:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 86bc7d9:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 86bc7e0:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 86bc7e7:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 86bc7ee:	b8 00 00 00 00       	mov    $0x0,%eax
 86bc7f3:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86bc7f6:	a1 30 f7 41 09       	mov    0x941f730,%eax
 86bc7fb:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86bc802:	00 
 86bc803:	89 04 24             	mov    %eax,(%esp)
 86bc806:	e8 8d 91 a5 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 86bc80b:	8b 10                	mov    (%eax),%edx
 86bc80d:	83 c2 34             	add    $0x34,%edx
 86bc810:	8b 12                	mov    (%edx),%edx
 86bc812:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bc819:	00 
 86bc81a:	89 04 24             	mov    %eax,(%esp)
 86bc81d:	ff d2                	call   *%edx
 86bc81f:	84 c0                	test   %al,%al
 86bc821:	74 34                	je     86bc857 <_ZN7WarRoom11ClearRewardEv+0x259>
 86bc823:	a1 30 f7 41 09       	mov    0x941f730,%eax
 86bc828:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86bc82f:	00 
 86bc830:	89 04 24             	mov    %eax,(%esp)
 86bc833:	e8 60 91 a5 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 86bc838:	89 04 24             	mov    %eax,(%esp)
 86bc83b:	e8 98 e2 a8 ff       	call   814aad8 <_ZN15CExpDoubleEvent12GetExpFactorEv>
 86bc840:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 86bc846:	db 85 64 ff ff ff    	fildl  -0x9c(%ebp)
 86bc84c:	d9 05 04 a7 cf 08    	flds   0x8cfa704
 86bc852:	de f9                	fdivrp %st,%st(1)
 86bc854:	d9 5d d0             	fstps  -0x30(%ebp)
 86bc857:	e8 3f f9 a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bc85c:	89 04 24             	mov    %eax,(%esp)
 86bc85f:	e8 94 de a8 ff       	call   814a6f8 <_ZNK12CDataManager16GetChannelScriptEv>
 86bc864:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86bc867:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc86a:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bc870:	89 04 24             	mov    %eax,(%esp)
 86bc873:	e8 78 14 a4 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 86bc878:	89 c6                	mov    %eax,%esi
 86bc87a:	e8 02 f9 a0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 86bc87f:	89 04 24             	mov    %eax,(%esp)
 86bc882:	e8 43 e2 a8 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 86bc887:	89 c3                	mov    %eax,%ebx
 86bc889:	e8 f3 f8 a0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 86bc88e:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 86bc894:	0f b6 c0             	movzbl %al,%eax
 86bc897:	89 74 24 0c          	mov    %esi,0xc(%esp)
 86bc89b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86bc89f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc8a3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86bc8a6:	89 04 24             	mov    %eax,(%esp)
 86bc8a9:	e8 8e 05 22 00       	call   88dce3c <_ZNK16channel_script_t12getBonusRateEhjj>
 86bc8ae:	d9 5d ec             	fstps  -0x14(%ebp)
 86bc8b1:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86bc8b4:	ba 00 00 00 00       	mov    $0x0,%edx
 86bc8b9:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 86bc8bf:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 86bc8c5:	df ad 58 ff ff ff    	fildll -0xa8(%ebp)
 86bc8cb:	d8 4d ec             	fmuls  -0x14(%ebp)
 86bc8ce:	d9 bd 56 ff ff ff    	fnstcw -0xaa(%ebp)
 86bc8d4:	0f b7 85 56 ff ff ff 	movzwl -0xaa(%ebp),%eax
 86bc8db:	b4 0c                	mov    $0xc,%ah
 86bc8dd:	66 89 85 54 ff ff ff 	mov    %ax,-0xac(%ebp)
 86bc8e4:	d9 ad 54 ff ff ff    	fldcw  -0xac(%ebp)
 86bc8ea:	db 9d 64 ff ff ff    	fistpl -0x9c(%ebp)
 86bc8f0:	d9 ad 56 ff ff ff    	fldcw  -0xaa(%ebp)
 86bc8f6:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 86bc8fc:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86bc8ff:	b8 00 00 00 00       	mov    $0x0,%eax
 86bc904:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86bc907:	e8 d4 dd a8 ff       	call   814a6e0 <_ZN12CServerEvent10GetExpRateEv>
 86bc90c:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 86bc912:	db 85 64 ff ff ff    	fildl  -0x9c(%ebp)
 86bc918:	d9 45 d4             	flds   -0x2c(%ebp)
 86bc91b:	de c1                	faddp  %st,%st(1)
 86bc91d:	d9 5d d4             	fstps  -0x2c(%ebp)
 86bc920:	d9 45 d4             	flds   -0x2c(%ebp)
 86bc923:	d9 05 04 a7 cf 08    	flds   0x8cfa704
 86bc929:	de f9                	fdivrp %st,%st(1)
 86bc92b:	d9 5d d4             	fstps  -0x2c(%ebp)
 86bc92e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86bc931:	ba 00 00 00 00       	mov    $0x0,%edx
 86bc936:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 86bc93c:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 86bc942:	df ad 58 ff ff ff    	fildll -0xa8(%ebp)
 86bc948:	d8 4d d4             	fmuls  -0x2c(%ebp)
 86bc94b:	d9 bd 56 ff ff ff    	fnstcw -0xaa(%ebp)
 86bc951:	0f b7 85 56 ff ff ff 	movzwl -0xaa(%ebp),%eax
 86bc958:	b4 0c                	mov    $0xc,%ah
 86bc95a:	66 89 85 54 ff ff ff 	mov    %ax,-0xac(%ebp)
 86bc961:	d9 ad 54 ff ff ff    	fldcw  -0xac(%ebp)
 86bc967:	df bd 58 ff ff ff    	fistpll -0xa8(%ebp)
 86bc96d:	d9 ad 56 ff ff ff    	fldcw  -0xaa(%ebp)
 86bc973:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 86bc979:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 86bc97f:	89 45 c0             	mov    %eax,-0x40(%ebp)
 86bc982:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86bc985:	ba 00 00 00 00       	mov    $0x0,%edx
 86bc98a:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 86bc990:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 86bc996:	df ad 58 ff ff ff    	fildll -0xa8(%ebp)
 86bc99c:	d8 4d b4             	fmuls  -0x4c(%ebp)
 86bc99f:	d9 ad 54 ff ff ff    	fldcw  -0xac(%ebp)
 86bc9a5:	df bd 58 ff ff ff    	fistpll -0xa8(%ebp)
 86bc9ab:	d9 ad 56 ff ff ff    	fldcw  -0xaa(%ebp)
 86bc9b1:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 86bc9b7:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 86bc9bd:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 86bc9c3:	d9 45 b4             	flds   -0x4c(%ebp)
 86bc9c6:	d9 ee                	fldz
 86bc9c8:	d9 c9                	fxch   %st(1)
 86bc9ca:	da e9                	fucompp
 86bc9cc:	df e0                	fnstsw %ax
 86bc9ce:	9e                   	sahf
 86bc9cf:	7a 02                	jp     86bc9d3 <_ZN7WarRoom11ClearRewardEv+0x3d5>
 86bc9d1:	74 3a                	je     86bca0d <_ZN7WarRoom11ClearRewardEv+0x40f>
 86bc9d3:	c7 45 98 01 00 00 00 	movl   $0x1,-0x68(%ebp)
 86bc9da:	8d 45 98             	lea    -0x68(%ebp),%eax
 86bc9dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc9e1:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86bc9e7:	89 04 24             	mov    %eax,(%esp)
 86bc9ea:	e8 42 2b 9c ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 86bc9ef:	8b 00                	mov    (%eax),%eax
 86bc9f1:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 86bc9f7:	d9 bd 56 ff ff ff    	fnstcw -0xaa(%ebp)
 86bc9fd:	0f b7 85 56 ff ff ff 	movzwl -0xaa(%ebp),%eax
 86bca04:	b4 0c                	mov    $0xc,%ah
 86bca06:	66 89 85 54 ff ff ff 	mov    %ax,-0xac(%ebp)
 86bca0d:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86bca10:	ba 00 00 00 00       	mov    $0x0,%edx
 86bca15:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 86bca1b:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 86bca21:	df ad 58 ff ff ff    	fildll -0xa8(%ebp)
 86bca27:	d8 4d d0             	fmuls  -0x30(%ebp)
 86bca2a:	d9 ad 54 ff ff ff    	fldcw  -0xac(%ebp)
 86bca30:	df bd 58 ff ff ff    	fistpll -0xa8(%ebp)
 86bca36:	d9 ad 56 ff ff ff    	fldcw  -0xaa(%ebp)
 86bca3c:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 86bca42:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 86bca48:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86bca4b:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86bca4e:	ba 00 00 00 00       	mov    $0x0,%edx
 86bca53:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 86bca59:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 86bca5f:	df ad 58 ff ff ff    	fildll -0xa8(%ebp)
 86bca65:	d8 4d b8             	fmuls  -0x48(%ebp)
 86bca68:	d9 ad 54 ff ff ff    	fldcw  -0xac(%ebp)
 86bca6e:	df bd 58 ff ff ff    	fistpll -0xa8(%ebp)
 86bca74:	d9 ad 56 ff ff ff    	fldcw  -0xaa(%ebp)
 86bca7a:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 86bca80:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 86bca86:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 86bca8c:	d9 45 b8             	flds   -0x48(%ebp)
 86bca8f:	d9 ee                	fldz
 86bca91:	d9 c9                	fxch   %st(1)
 86bca93:	da e9                	fucompp
 86bca95:	df e0                	fnstsw %ax
 86bca97:	9e                   	sahf
 86bca98:	7a 02                	jp     86bca9c <_ZN7WarRoom11ClearRewardEv+0x49e>
 86bca9a:	74 24                	je     86bcac0 <_ZN7WarRoom11ClearRewardEv+0x4c2>
 86bca9c:	c7 45 9c 01 00 00 00 	movl   $0x1,-0x64(%ebp)
 86bcaa3:	8d 45 9c             	lea    -0x64(%ebp),%eax
 86bcaa6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bcaaa:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 86bcab0:	89 04 24             	mov    %eax,(%esp)
 86bcab3:	e8 79 2a 9c ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 86bcab8:	8b 00                	mov    (%eax),%eax
 86bcaba:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 86bcac0:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bcac3:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcac6:	83 c2 48             	add    $0x48,%edx
 86bcac9:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bcacd:	89 04 24             	mov    %eax,(%esp)
 86bcad0:	e8 61 03 a7 ff       	call   812ce36 <_ZNK5CUser22IsHavePremiumAdvantageEv>
 86bcad5:	84 c0                	test   %al,%al
 86bcad7:	0f 84 90 00 00 00    	je     86bcb6d <_ZN7WarRoom11ClearRewardEv+0x56f>
 86bcadd:	b8 00 00 00 00       	mov    $0x0,%eax
 86bcae2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bcae5:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bcae8:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcaeb:	83 c2 48             	add    $0x48,%edx
 86bcaee:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bcaf2:	89 04 24             	mov    %eax,(%esp)
 86bcaf5:	e8 2e 03 a7 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 86bcafa:	89 04 24             	mov    %eax,(%esp)
 86bcafd:	e8 06 df a8 ff       	call   814aa08 <_ZNK8WongWork12CUserPremium19GetAdvantageExpRateEv>
 86bcb02:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 86bcb08:	db 85 64 ff ff ff    	fildl  -0x9c(%ebp)
 86bcb0e:	d9 05 04 a7 cf 08    	flds   0x8cfa704
 86bcb14:	de f9                	fdivrp %st,%st(1)
 86bcb16:	d9 5d f0             	fstps  -0x10(%ebp)
 86bcb19:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86bcb1c:	ba 00 00 00 00       	mov    $0x0,%edx
 86bcb21:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 86bcb27:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 86bcb2d:	df ad 58 ff ff ff    	fildll -0xa8(%ebp)
 86bcb33:	d8 4d f0             	fmuls  -0x10(%ebp)
 86bcb36:	d9 bd 56 ff ff ff    	fnstcw -0xaa(%ebp)
 86bcb3c:	0f b7 85 56 ff ff ff 	movzwl -0xaa(%ebp),%eax
 86bcb43:	b4 0c                	mov    $0xc,%ah
 86bcb45:	66 89 85 54 ff ff ff 	mov    %ax,-0xac(%ebp)
 86bcb4c:	d9 ad 54 ff ff ff    	fldcw  -0xac(%ebp)
 86bcb52:	df bd 58 ff ff ff    	fistpll -0xa8(%ebp)
 86bcb58:	d9 ad 56 ff ff ff    	fldcw  -0xaa(%ebp)
 86bcb5e:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 86bcb64:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 86bcb6a:	89 45 bc             	mov    %eax,-0x44(%ebp)
 86bcb6d:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 86bcb74:	a1 30 f7 41 09       	mov    0x941f730,%eax
 86bcb79:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 86bcb80:	00 
 86bcb81:	89 04 24             	mov    %eax,(%esp)
 86bcb84:	e8 0f 8e a5 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 86bcb89:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86bcb8c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86bcb8f:	8b 00                	mov    (%eax),%eax
 86bcb91:	83 c0 34             	add    $0x34,%eax
 86bcb94:	8b 10                	mov    (%eax),%edx
 86bcb96:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86bcb99:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bcba0:	00 
 86bcba1:	89 04 24             	mov    %eax,(%esp)
 86bcba4:	ff d2                	call   *%edx
 86bcba6:	84 c0                	test   %al,%al
 86bcba8:	74 54                	je     86bcbfe <_ZN7WarRoom11ClearRewardEv+0x600>
 86bcbaa:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bcbad:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcbb0:	83 c2 48             	add    $0x48,%edx
 86bcbb3:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bcbb7:	89 04 24             	mov    %eax,(%esp)
 86bcbba:	e8 fb 40 a5 ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 86bcbbf:	0f b7 c0             	movzwl %ax,%eax
 86bcbc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bcbc6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86bcbc9:	89 04 24             	mov    %eax,(%esp)
 86bcbcc:	e8 1b d5 a4 ff       	call   810a0ec <_ZNK20CBurningFatigueEvent15getBonusExpRateEt>
 86bcbd1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86bcbd4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86bcbd8:	74 24                	je     86bcbfe <_ZN7WarRoom11ClearRewardEv+0x600>
 86bcbda:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bcbdd:	89 c2                	mov    %eax,%edx
 86bcbdf:	0f af 55 b0          	imul   -0x50(%ebp),%edx
 86bcbe3:	89 95 44 ff ff ff    	mov    %edx,-0xbc(%ebp)
 86bcbe9:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86bcbee:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 86bcbf4:	f7 e2                	mul    %edx
 86bcbf6:	89 d0                	mov    %edx,%eax
 86bcbf8:	c1 e8 05             	shr    $0x5,%eax
 86bcbfb:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86bcbfe:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 86bcc04:	03 45 b0             	add    -0x50(%ebp),%eax
 86bcc07:	03 45 bc             	add    -0x44(%ebp),%eax
 86bcc0a:	03 45 c0             	add    -0x40(%ebp),%eax
 86bcc0d:	89 c2                	mov    %eax,%edx
 86bcc0f:	03 55 c4             	add    -0x3c(%ebp),%edx
 86bcc12:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86bcc15:	01 c2                	add    %eax,%edx
 86bcc17:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 86bcc1d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86bcc20:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86bcc23:	8b 55 b0             	mov    -0x50(%ebp),%edx
 86bcc26:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 86bcc29:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcc2c:	83 c1 48             	add    $0x48,%ecx
 86bcc2f:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86bcc33:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bcc37:	89 04 24             	mov    %eax,(%esp)
 86bcc3a:	e8 c9 2d f9 ff       	call   864fa08 <_ZN5CUser20gainExpAsUpperMemberEi>
 86bcc3f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 86bcc42:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86bcc45:	01 45 e0             	add    %eax,-0x20(%ebp)
 86bcc48:	8b 55 b0             	mov    -0x50(%ebp),%edx
 86bcc4b:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 86bcc4e:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcc51:	83 c1 48             	add    $0x48,%ecx
 86bcc54:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86bcc58:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bcc5c:	89 04 24             	mov    %eax,(%esp)
 86bcc5f:	e8 d6 2e f9 ff       	call   864fb3a <_ZN5CUser17gainGuildSkillExpEi>
 86bcc64:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86bcc67:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86bcc6a:	01 45 e0             	add    %eax,-0x20(%ebp)
 86bcc6d:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bcc70:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcc73:	83 c2 48             	add    $0x48,%edx
 86bcc76:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bcc7a:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86bcc81:	00 
 86bcc82:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86bcc89:	00 
 86bcc8a:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 86bcc91:	00 
 86bcc92:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 86bcc98:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86bcc9c:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 86bcca2:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bcca6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86bcca9:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bccad:	89 04 24             	mov    %eax,(%esp)
 86bccb0:	e8 49 d7 fa ff       	call   866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>
 86bccb5:	84 c0                	test   %al,%al
 86bccb7:	0f 84 9f 00 00 00    	je     86bcd5c <_ZN7WarRoom11ClearRewardEv+0x75e>
 86bccbd:	8d 45 80             	lea    -0x80(%ebp),%eax
 86bccc0:	89 04 24             	mov    %eax,(%esp)
 86bccc3:	e8 1e ec a0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86bccc8:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 86bcccf:	00 
 86bccd0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bccd7:	00 
 86bccd8:	8d 45 80             	lea    -0x80(%ebp),%eax
 86bccdb:	89 04 24             	mov    %eax,(%esp)
 86bccde:	e8 19 ec a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bcce3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bccea:	00 
 86bcceb:	8d 45 80             	lea    -0x80(%ebp),%eax
 86bccee:	89 04 24             	mov    %eax,(%esp)
 86bccf1:	e8 2a ec a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bccf6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bccfd:	00 
 86bccfe:	8d 45 80             	lea    -0x80(%ebp),%eax
 86bcd01:	89 04 24             	mov    %eax,(%esp)
 86bcd04:	e8 9b d1 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bcd09:	8d 55 80             	lea    -0x80(%ebp),%edx
 86bcd0c:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 86bcd0f:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcd12:	83 c1 48             	add    $0x48,%ecx
 86bcd15:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86bcd19:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86bcd20:	00 
 86bcd21:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bcd25:	89 04 24             	mov    %eax,(%esp)
 86bcd28:	e8 21 d7 f9 ff       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 86bcd2d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bcd34:	00 
 86bcd35:	8d 45 80             	lea    -0x80(%ebp),%eax
 86bcd38:	89 04 24             	mov    %eax,(%esp)
 86bcd3b:	e8 18 ec a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bcd40:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bcd43:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcd46:	83 c2 48             	add    $0x48,%edx
 86bcd49:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bcd4d:	8d 55 80             	lea    -0x80(%ebp),%edx
 86bcd50:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bcd54:	89 04 24             	mov    %eax,(%esp)
 86bcd57:	e8 5e b8 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86bcd5c:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bcd5f:	89 04 24             	mov    %eax,(%esp)
 86bcd62:	e8 7f eb a0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86bcd67:	c7 44 24 08 5c 00 00 	movl   $0x5c,0x8(%esp)
 86bcd6e:	00 
 86bcd6f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bcd76:	00 
 86bcd77:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bcd7a:	89 04 24             	mov    %eax,(%esp)
 86bcd7d:	e8 7a eb a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bcd82:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 86bcd88:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bcd8c:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bcd8f:	89 04 24             	mov    %eax,(%esp)
 86bcd92:	e8 89 eb a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bcd97:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 86bcd9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bcda1:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bcda4:	89 04 24             	mov    %eax,(%esp)
 86bcda7:	e8 74 eb a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bcdac:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bcdaf:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcdb2:	83 c2 48             	add    $0x48,%edx
 86bcdb5:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bcdb9:	89 04 24             	mov    %eax,(%esp)
 86bcdbc:	e8 0d 8b f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bcdc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bcdc5:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bcdc8:	89 04 24             	mov    %eax,(%esp)
 86bcdcb:	e8 6c eb a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bcdd0:	8b 45 c0             	mov    -0x40(%ebp),%eax
 86bcdd3:	8b 55 b0             	mov    -0x50(%ebp),%edx
 86bcdd6:	01 c2                	add    %eax,%edx
 86bcdd8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86bcddb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86bcdde:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bcde2:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bcde5:	89 04 24             	mov    %eax,(%esp)
 86bcde8:	e8 4f eb a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bcded:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 86bcdf3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bcdf7:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bcdfa:	89 04 24             	mov    %eax,(%esp)
 86bcdfd:	e8 3a eb a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bce02:	8b 45 bc             	mov    -0x44(%ebp),%eax
 86bce05:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bce09:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bce0c:	89 04 24             	mov    %eax,(%esp)
 86bce0f:	e8 28 eb a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bce14:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86bce17:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bce1b:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bce1e:	89 04 24             	mov    %eax,(%esp)
 86bce21:	e8 16 eb a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bce26:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86bce29:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bce2d:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bce30:	89 04 24             	mov    %eax,(%esp)
 86bce33:	e8 04 eb a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bce38:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 86bce3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bce42:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bce45:	89 04 24             	mov    %eax,(%esp)
 86bce48:	e8 ef ea a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bce4d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bce54:	00 
 86bce55:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bce58:	89 04 24             	mov    %eax,(%esp)
 86bce5b:	e8 f8 ea a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bce60:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bce63:	8b 45 08             	mov    0x8(%ebp),%eax
 86bce66:	83 c2 48             	add    $0x48,%edx
 86bce69:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bce6d:	8d 55 8c             	lea    -0x74(%ebp),%edx
 86bce70:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bce74:	89 04 24             	mov    %eax,(%esp)
 86bce77:	e8 3e b7 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86bce7c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86bce83:	e8 16 ee a0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86bce88:	89 c3                	mov    %eax,%ebx
 86bce8a:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86bce8d:	8b 45 08             	mov    0x8(%ebp),%eax
 86bce90:	83 c2 48             	add    $0x48,%edx
 86bce93:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bce97:	89 04 24             	mov    %eax,(%esp)
 86bce9a:	e8 bb ca a3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 86bce9f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86bcea3:	89 04 24             	mov    %eax,(%esp)
 86bcea6:	e8 e1 2a f2 ff       	call   85df98c <_ZN8WongWork13CHackAnalyzer22setLastMonsterDeadTimeEl>
 86bceab:	8d 45 80             	lea    -0x80(%ebp),%eax
 86bceae:	89 04 24             	mov    %eax,(%esp)
 86bceb1:	e8 ca 0f ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bceb6:	eb 30                	jmp    86bcee8 <_ZN7WarRoom11ClearRewardEv+0x8ea>
 86bceb8:	89 d3                	mov    %edx,%ebx
 86bceba:	89 c6                	mov    %eax,%esi
 86bcebc:	8d 45 80             	lea    -0x80(%ebp),%eax
 86bcebf:	89 04 24             	mov    %eax,(%esp)
 86bcec2:	e8 b9 0f ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bcec7:	89 f0                	mov    %esi,%eax
 86bcec9:	89 da                	mov    %ebx,%edx
 86bcecb:	eb 00                	jmp    86bcecd <_ZN7WarRoom11ClearRewardEv+0x8cf>
 86bcecd:	89 d3                	mov    %edx,%ebx
 86bcecf:	89 c6                	mov    %eax,%esi
 86bced1:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bced4:	89 04 24             	mov    %eax,(%esp)
 86bced7:	e8 a4 0f ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bcedc:	89 f0                	mov    %esi,%eax
 86bcede:	89 da                	mov    %ebx,%edx
 86bcee0:	89 04 24             	mov    %eax,(%esp)
 86bcee3:	e8 68 68 42 00       	call   8ae3750 <_Unwind_Resume>
 86bcee8:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86bceeb:	89 04 24             	mov    %eax,(%esp)
 86bceee:	e8 8d 0f ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bcef3:	eb 01                	jmp    86bcef6 <_ZN7WarRoom11ClearRewardEv+0x8f8>
 86bcef5:	90                   	nop
 86bcef6:	83 45 a8 01          	addl   $0x1,-0x58(%ebp)
 86bcefa:	83 7d a8 05          	cmpl   $0x5,-0x58(%ebp)
 86bcefe:	0f 9e c0             	setle  %al
 86bcf01:	84 c0                	test   %al,%al
 86bcf03:	0f 85 8d f7 ff ff    	jne    86bc696 <_ZN7WarRoom11ClearRewardEv+0x98>
 86bcf09:	81 c4 e0 00 00 00    	add    $0xe0,%esp
 86bcf0f:	5b                   	pop    %ebx
 86bcf10:	5e                   	pop    %esi
 86bcf11:	5d                   	pop    %ebp
 86bcf12:	c3                   	ret
 86bcf13:	90                   	nop

```

```c
// WarRoom::ClearReward @ 0x86bc5fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarRoom::ClearReward() */

void __thiscall WarRoom::ClearReward(WarRoom *this)

{
  float fVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  CInventory *this_00;
  CCreatureMgr *this_01;
  int *piVar5;
  CExpDoubleEvent *this_02;
  CDataManager *this_03;
  uint uVar6;
  CEnvironment *this_04;
  uint uVar7;
  size_t *psVar8;
  CUserPremium *this_05;
  long lVar9;
  CHackAnalyzer *this_06;
  longdouble lVar10;
  ulonglong local_ac;
  size_t local_94;
  size_t local_90;
  int local_8c;
  int local_88;
  PacketGuard local_84 [12];
  PacketGuard local_78 [12];
  size_t local_6c [5];
  float local_58;
  uint local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  float local_34;
  float local_30;
  uint local_2c;
  CBurningFatigueEvent *local_28;
  int local_24;
  int local_20;
  channel_script_t *local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  local_6c[2] = 0;
  for (local_6c[3] = 0; (int)local_6c[3] < 4; local_6c[3] = local_6c[3] + 1) {
    local_6c[2] = local_6c[2] +
                  (int)ROUND((float)*(int *)(*(int *)(this + 0x1d0) + 0x10 +
                                            (local_6c[3] + 0x1e0) * 4) *
                             *(float *)(this + (local_6c[3] + 0x6c) * 4 + 0xc));
  }
  for (local_6c[4] = 0; (int)local_6c[4] < 6; local_6c[4] = local_6c[4] + 1) {
    if (*(int *)(this + (local_6c[4] + 0x48) * 4 + 0xc) != 0) {
      PacketGuard::PacketGuard(local_78);
                    /* try { // try from 086bc6bc to 086bc6c0 has its CatchHandler @ 086bcecd */
      PacketGuard::PacketGuard(local_84);
      local_88 = 0;
      local_8c = 0;
      fVar1 = *(float *)(*(int *)(this + 0x1d0) + 0x7a0);
                    /* try { // try from 086bc6fa to 086bce7b has its CatchHandler @ 086bceb8 */
      iVar4 = CUserCharacInfo::GetFinishPointTotal
                        (*(CUserCharacInfo **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      local_58 = (float)iVar4 * fVar1;
      local_ac._0_4_ = (uint)(longlong)ROUND((float)(int)local_6c[2] * (local_58 + 1.0));
      local_54 = (uint)local_ac;
      cVar2 = CUser::IsEquipAvatar(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      if (cVar2 == '\0') {
        local_50 = 0.0;
      }
      else {
        local_50 = 0.02;
      }
      this_00 = (CInventory *)
                CUserCharacInfo::getCurCharacInvenR
                          (*(CUserCharacInfo **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrR(this_00);
      cVar2 = user_creature::CCreatureMgr::IsEquippedCreature(this_01);
      if (cVar2 == '\0') {
        local_4c = 0.0;
      }
      else {
        local_4c = 0.05;
      }
      local_90 = 0;
      local_94 = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0.0;
      piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
      cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
      if (cVar2 != '\0') {
        this_02 = (CExpDoubleEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
        iVar4 = CExpDoubleEvent::GetExpFactor(this_02);
        local_34 = (float)iVar4 / _DAT_08cfa704;
      }
      this_03 = (CDataManager *)G_CDataManager();
      local_1c = (channel_script_t *)CDataManager::GetChannelScript(this_03);
      uVar6 = CDungeon::get_index(*(CDungeon **)(this + 0x1d0));
      this_04 = (CEnvironment *)G_CEnvironment();
      uVar7 = CEnvironment::get_channel_no(this_04);
      iVar4 = G_CEnvironment();
      lVar10 = (longdouble)
               channel_script_t::getBonusRate
                         (local_1c,(uchar)*(undefined4 *)(iVar4 + 0x378),uVar7,uVar6);
      local_18 = (float)lVar10;
      local_ac = (ulonglong)local_54;
      local_40 = (int)ROUND((float)local_ac * local_18);
      local_30 = 0.0;
      iVar4 = CServerEvent::GetExpRate();
      local_30 = (local_30 + (float)iVar4) / _DAT_08cfa704;
      local_ac = (ulonglong)local_54;
      local_ac._0_4_ = (uint)(longlong)ROUND((float)local_ac * local_30);
      local_44 = (uint)local_ac;
      local_ac = (ulonglong)local_54;
      local_ac._0_4_ = (uint)(longlong)ROUND((float)local_ac * local_50);
      local_94 = (uint)local_ac;
      if (local_50 != 0.0) {
        local_6c[0] = 1;
        psVar8 = std::max<size_t>(&local_94,local_6c);
        local_94 = *psVar8;
      }
      local_ac = (ulonglong)local_54;
      local_ac._0_4_ = (uint)(longlong)ROUND((float)local_ac * local_34);
      local_3c = (uint)local_ac;
      local_ac = (ulonglong)local_54;
      local_ac._0_4_ = (uint)(longlong)ROUND((float)local_ac * local_4c);
      local_90 = (uint)local_ac;
      if (local_4c != 0.0) {
        local_6c[1] = 1;
        psVar8 = std::max<size_t>(&local_90,local_6c + 1);
        local_90 = *psVar8;
      }
      cVar2 = CUser::IsHavePremiumAdvantage(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      if (cVar2 != '\0') {
        local_14 = 0.0;
        this_05 = (CUserPremium *)
                  CUser::GetPremiumInfo(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
        iVar4 = WongWork::CUserPremium::GetAdvantageExpRate(this_05);
        local_14 = (float)iVar4 / _DAT_08cfa704;
        local_ac = (ulonglong)local_54;
        local_ac._0_4_ = (uint)(longlong)ROUND((float)local_ac * local_14);
        local_48 = (uint)local_ac;
      }
      local_2c = 0;
      local_28 = (CBurningFatigueEvent *)
                 CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
      cVar2 = (**(code **)(*(int *)local_28 + 0x34))(local_28,0);
      if (cVar2 != '\0') {
        uVar3 = CUserCharacInfo::getCurCharacUsedFatigue
                          (*(CUserCharacInfo **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
        local_10 = CBurningFatigueEvent::getBonusExpRate(local_28,uVar3);
        if (local_10 != 0) {
          local_2c = (local_10 * local_54) / 100;
        }
      }
      local_24 = local_94 + local_54 + local_48 + local_44 + local_40 + local_2c + local_90;
      local_38 = CUser::gainExpAsUpperMember
                           (*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),local_54);
      local_24 = local_24 + local_38;
      local_20 = CUser::gainGuildSkillExp
                           (*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),local_54);
      local_24 = local_24 + local_20;
      cVar2 = CUser::gain_exp_sp(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),local_24,
                                 &local_88,&local_8c,6,0,0);
      if (cVar2 != '\0') {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,1);
        CUser::make_basic_info
                  (*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),(char *)local_84,'\x01');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
        CUser::Send(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),local_84);
      }
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_78);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,0,0x5c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,local_88);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,local_8c);
      iVar4 = CUserCharacInfo::GetFinishPointTotal
                        (*(CUserCharacInfo **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,iVar4);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_54 + local_44 + local_2c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_94);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_48);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_40);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_38);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_90);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
      CUser::Send(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),local_78);
      lVar9 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      this_06 = (CHackAnalyzer *)
                CUser::getHackAnalyzer(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      WongWork::CHackAnalyzer::setLastMonsterDeadTime(this_06,lVar9);
                    /* try { // try from 086bceb1 to 086bceb5 has its CatchHandler @ 086bcecd */
      PacketGuard::~PacketGuard(local_84);
      PacketGuard::~PacketGuard(local_78);
    }
  }
  return;
}

```

---

## Close

```asm
// === 086bd520 WarRoom::Close  [0x086bd520-0x86bd53b] ===
 86bd520:	55                   	push   %ebp
 86bd521:	89 e5                	mov    %esp,%ebp
 86bd523:	83 ec 18             	sub    $0x18,%esp
 86bd526:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 86bd52d:	ff 
 86bd52e:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd531:	89 04 24             	mov    %eax,(%esp)
 86bd534:	e8 1d 85 be ff       	call   82a5a56 <_ZN7WarRoom8SetStateE13WARROOM_STATE>
 86bd539:	c9                   	leave
 86bd53a:	c3                   	ret
 86bd53b:	90                   	nop

```

```c
// WarRoom::Close @ 0x86bd520

/* WarRoom::Close() */

void __thiscall WarRoom::Close(WarRoom *this)

{
  SetState(this,0xffffffff);
  return;
}

```

---

## Create

```asm
// === 086bac5e WarRoom::Create  [0x086bac5e-0x86bacad] ===
 86bac5e:	55                   	push   %ebp
 86bac5f:	89 e5                	mov    %esp,%ebp
 86bac61:	83 ec 28             	sub    $0x28,%esp
 86bac64:	8b 45 14             	mov    0x14(%ebp),%eax
 86bac67:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 86bac6b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bac6e:	c7 80 44 01 00 00 00 	movl   $0x0,0x144(%eax)
 86bac75:	00 00 00 
 86bac78:	8b 45 08             	mov    0x8(%ebp),%eax
 86bac7b:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bac7e:	89 90 2c 01 00 00    	mov    %edx,0x12c(%eax)
 86bac84:	8b 45 08             	mov    0x8(%ebp),%eax
 86bac87:	c7 80 48 01 00 00 01 	movl   $0x1,0x148(%eax)
 86bac8e:	00 00 00 
 86bac91:	8b 45 08             	mov    0x8(%ebp),%eax
 86bac94:	8b 40 04             	mov    0x4(%eax),%eax
 86bac97:	98                   	cwtl
 86bac98:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bac9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bac9f:	89 04 24             	mov    %eax,(%esp)
 86baca2:	e8 a9 5e 00 00       	call   86c0b50 <_ZN5CUser15SetWarRoomIndexEs>
 86baca7:	b8 00 00 00 00       	mov    $0x0,%eax
 86bacac:	c9                   	leave
 86bacad:	c3                   	ret

```

```c
// WarRoom::Create @ 0x86bac5e

/* WarRoom::Create(CUser*, char*, short) */

undefined4 WarRoom::Create(CUser *param_1,char *param_2,short param_3)

{
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(char **)(param_1 + 300) = param_2;
  *(undefined4 *)(param_1 + 0x148) = 1;
  CUser::SetWarRoomIndex((CUser *)param_2,(short)*(undefined4 *)(param_1 + 4));
  return 0;
}

```

---

## CurSpawnStepReset

```asm
// === 086c077e WarRoom::CurSpawnStepReset  [0x086c077e-0x86c078d] ===
 86c077e:	55                   	push   %ebp
 86c077f:	89 e5                	mov    %esp,%ebp
 86c0781:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0784:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 86c078b:	5d                   	pop    %ebp
 86c078c:	c3                   	ret
 86c078d:	90                   	nop

```

```c
// WarRoom::CurSpawnStepReset @ 0x86c077e

/* WarRoom::CurSpawnStepReset() */

void __thiscall WarRoom::CurSpawnStepReset(WarRoom *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## Destroy

```asm
// === 086bd49c WarRoom::Destroy  [0x086bd49c-0x86bd503] ===
 86bd49c:	55                   	push   %ebp
 86bd49d:	89 e5                	mov    %esp,%ebp
 86bd49f:	83 ec 28             	sub    $0x28,%esp
 86bd4a2:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bd4a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd4a8:	83 c2 48             	add    $0x48,%edx
 86bd4ab:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd4af:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bd4b2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86bd4b6:	75 3b                	jne    86bd4f3 <_ZN7WarRoom7DestroyEi+0x57>
 86bd4b8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bd4bf:	eb 27                	jmp    86bd4e8 <_ZN7WarRoom7DestroyEi+0x4c>
 86bd4c1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bd4c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd4c7:	83 c2 48             	add    $0x48,%edx
 86bd4ca:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd4ce:	85 c0                	test   %eax,%eax
 86bd4d0:	74 12                	je     86bd4e4 <_ZN7WarRoom7DestroyEi+0x48>
 86bd4d2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bd4d5:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd4d8:	83 c2 48             	add    $0x48,%edx
 86bd4db:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd4df:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bd4e2:	eb 0f                	jmp    86bd4f3 <_ZN7WarRoom7DestroyEi+0x57>
 86bd4e4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bd4e8:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bd4ec:	0f 9e c0             	setle  %al
 86bd4ef:	84 c0                	test   %al,%al
 86bd4f1:	75 ce                	jne    86bd4c1 <_ZN7WarRoom7DestroyEi+0x25>
 86bd4f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd4f6:	89 04 24             	mov    %eax,(%esp)
 86bd4f9:	e8 16 d5 ff ff       	call   86baa14 <_ZN7WarRoom5ResetEv>
 86bd4fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bd501:	c9                   	leave
 86bd502:	c3                   	ret
 86bd503:	90                   	nop

```

```c
// WarRoom::Destroy @ 0x86bd49c

/* WarRoom::Destroy(int) */

int __thiscall WarRoom::Destroy(WarRoom *this,int param_1)

{
  int local_14;
  int local_10;
  
  local_14 = *(int *)(this + (param_1 + 0x48) * 4 + 0xc);
  if (local_14 == 0) {
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
        local_14 = *(int *)(this + (local_10 + 0x48) * 4 + 0xc);
        break;
      }
    }
  }
  Reset(this);
  return local_14;
}

```

---

## GetLiveCount

```asm
// === 086bac0c WarRoom::GetLiveCount  [0x086bac0c-0x86bac5d] ===
 86bac0c:	55                   	push   %ebp
 86bac0d:	89 e5                	mov    %esp,%ebp
 86bac0f:	83 ec 10             	sub    $0x10,%esp
 86bac12:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 86bac19:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86bac20:	eb 2b                	jmp    86bac4d <_ZNK7WarRoom12GetLiveCountEv+0x41>
 86bac22:	8b 55 fc             	mov    -0x4(%ebp),%edx
 86bac25:	8b 45 08             	mov    0x8(%ebp),%eax
 86bac28:	83 c2 48             	add    $0x48,%edx
 86bac2b:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bac2f:	85 c0                	test   %eax,%eax
 86bac31:	74 16                	je     86bac49 <_ZNK7WarRoom12GetLiveCountEv+0x3d>
 86bac33:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86bac36:	8b 55 08             	mov    0x8(%ebp),%edx
 86bac39:	0f b6 84 02 84 01 00 	movzbl 0x184(%edx,%eax,1),%eax
 86bac40:	00 
 86bac41:	84 c0                	test   %al,%al
 86bac43:	74 04                	je     86bac49 <_ZNK7WarRoom12GetLiveCountEv+0x3d>
 86bac45:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 86bac49:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 86bac4d:	83 7d fc 05          	cmpl   $0x5,-0x4(%ebp)
 86bac51:	0f 9e c0             	setle  %al
 86bac54:	84 c0                	test   %al,%al
 86bac56:	75 ca                	jne    86bac22 <_ZNK7WarRoom12GetLiveCountEv+0x16>
 86bac58:	8b 45 f8             	mov    -0x8(%ebp),%eax
 86bac5b:	c9                   	leave
 86bac5c:	c3                   	ret
 86bac5d:	90                   	nop

```

```c
// WarRoom::GetLiveCount @ 0x86bac0c

/* WarRoom::GetLiveCount() const */

int __thiscall WarRoom::GetLiveCount(WarRoom *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if ((*(int *)(this + (local_8 + 0x48) * 4 + 0xc) != 0) &&
       (this[local_8 + 0x184] != (WarRoom)0x0)) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## GetRemainSeat

```asm
// === 086babae WarRoom::GetRemainSeat  [0x086babae-0x86babcb] ===
 86babae:	55                   	push   %ebp
 86babaf:	89 e5                	mov    %esp,%ebp
 86babb1:	83 ec 18             	sub    $0x18,%esp
 86babb4:	8b 45 08             	mov    0x8(%ebp),%eax
 86babb7:	89 04 24             	mov    %eax,(%esp)
 86babba:	e8 0d 00 00 00       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86babbf:	ba 06 00 00 00       	mov    $0x6,%edx
 86babc4:	89 d1                	mov    %edx,%ecx
 86babc6:	29 c1                	sub    %eax,%ecx
 86babc8:	89 c8                	mov    %ecx,%eax
 86babca:	c9                   	leave
 86babcb:	c3                   	ret

```

```c
// WarRoom::GetRemainSeat @ 0x86babae

/* WarRoom::GetRemainSeat() const */

int __thiscall WarRoom::GetRemainSeat(WarRoom *this)

{
  int iVar1;
  
  iVar1 = GetWaiterCount(this);
  return 6 - iVar1;
}

```

---

## GetUserSlot

```asm
// === 086bd842 WarRoom::GetUserSlot  [0x086bd842-0x86bd87d] ===
 86bd842:	55                   	push   %ebp
 86bd843:	89 e5                	mov    %esp,%ebp
 86bd845:	83 ec 10             	sub    $0x10,%esp
 86bd848:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86bd84f:	eb 1b                	jmp    86bd86c <_ZN7WarRoom11GetUserSlotEP5CUser+0x2a>
 86bd851:	8b 55 fc             	mov    -0x4(%ebp),%edx
 86bd854:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd857:	83 c2 48             	add    $0x48,%edx
 86bd85a:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd85e:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86bd861:	75 05                	jne    86bd868 <_ZN7WarRoom11GetUserSlotEP5CUser+0x26>
 86bd863:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86bd866:	eb 14                	jmp    86bd87c <_ZN7WarRoom11GetUserSlotEP5CUser+0x3a>
 86bd868:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 86bd86c:	83 7d fc 05          	cmpl   $0x5,-0x4(%ebp)
 86bd870:	0f 9e c0             	setle  %al
 86bd873:	84 c0                	test   %al,%al
 86bd875:	75 da                	jne    86bd851 <_ZN7WarRoom11GetUserSlotEP5CUser+0xf>
 86bd877:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86bd87c:	c9                   	leave
 86bd87d:	c3                   	ret

```

```c
// WarRoom::GetUserSlot @ 0x86bd842

/* WarRoom::GetUserSlot(CUser*) */

int __thiscall WarRoom::GetUserSlot(WarRoom *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (5 < local_8) {
      return -1;
    }
    if (*(CUser **)(this + (local_8 + 0x48) * 4 + 0xc) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

```

---

## GetWaiterCount

```asm
// === 086babcc WarRoom::GetWaiterCount  [0x086babcc-0x86bac0b] ===
 86babcc:	55                   	push   %ebp
 86babcd:	89 e5                	mov    %esp,%ebp
 86babcf:	83 ec 10             	sub    $0x10,%esp
 86babd2:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 86babd9:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86babe0:	eb 19                	jmp    86babfb <_ZNK7WarRoom14GetWaiterCountEv+0x2f>
 86babe2:	8b 55 fc             	mov    -0x4(%ebp),%edx
 86babe5:	8b 45 08             	mov    0x8(%ebp),%eax
 86babe8:	83 c2 48             	add    $0x48,%edx
 86babeb:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86babef:	85 c0                	test   %eax,%eax
 86babf1:	74 04                	je     86babf7 <_ZNK7WarRoom14GetWaiterCountEv+0x2b>
 86babf3:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 86babf7:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 86babfb:	83 7d fc 05          	cmpl   $0x5,-0x4(%ebp)
 86babff:	0f 9e c0             	setle  %al
 86bac02:	84 c0                	test   %al,%al
 86bac04:	75 dc                	jne    86babe2 <_ZNK7WarRoom14GetWaiterCountEv+0x16>
 86bac06:	8b 45 f8             	mov    -0x8(%ebp),%eax
 86bac09:	c9                   	leave
 86bac0a:	c3                   	ret
 86bac0b:	90                   	nop

```

```c
// WarRoom::GetWaiterCount @ 0x86babcc

/* WarRoom::GetWaiterCount() const */

int __thiscall WarRoom::GetWaiterCount(WarRoom *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if (*(int *)(this + (local_8 + 0x48) * 4 + 0xc) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## HandleDieCharacer

```asm
// === 086bd87e WarRoom::HandleDieCharacer  [0x086bd87e-0x86bdd57] ===
 86bd87e:	55                   	push   %ebp
 86bd87f:	89 e5                	mov    %esp,%ebp
 86bd881:	56                   	push   %esi
 86bd882:	53                   	push   %ebx
 86bd883:	83 ec 70             	sub    $0x70,%esp
 86bd886:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd889:	89 04 24             	mov    %eax,(%esp)
 86bd88c:	e8 05 16 b7 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bd891:	83 f8 03             	cmp    $0x3,%eax
 86bd894:	74 25                	je     86bd8bb <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x3d>
 86bd896:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd899:	89 04 24             	mov    %eax,(%esp)
 86bd89c:	e8 f5 15 b7 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bd8a1:	83 f8 04             	cmp    $0x4,%eax
 86bd8a4:	74 15                	je     86bd8bb <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x3d>
 86bd8a6:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd8a9:	8b 80 44 01 00 00    	mov    0x144(%eax),%eax
 86bd8af:	83 f8 05             	cmp    $0x5,%eax
 86bd8b2:	74 07                	je     86bd8bb <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x3d>
 86bd8b4:	b8 01 00 00 00       	mov    $0x1,%eax
 86bd8b9:	eb 05                	jmp    86bd8c0 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x42>
 86bd8bb:	b8 00 00 00 00       	mov    $0x0,%eax
 86bd8c0:	84 c0                	test   %al,%al
 86bd8c2:	74 0a                	je     86bd8ce <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x50>
 86bd8c4:	b8 13 00 00 00       	mov    $0x13,%eax
 86bd8c9:	e9 82 04 00 00       	jmp    86bdd50 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x4d2>
 86bd8ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bd8d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bd8d5:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd8d8:	89 04 24             	mov    %eax,(%esp)
 86bd8db:	e8 62 ff ff ff       	call   86bd842 <_ZN7WarRoom11GetUserSlotEP5CUser>
 86bd8e0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86bd8e3:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86bd8e7:	79 0a                	jns    86bd8f3 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x75>
 86bd8e9:	b8 04 00 00 00       	mov    $0x4,%eax
 86bd8ee:	e9 5d 04 00 00       	jmp    86bdd50 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x4d2>
 86bd8f3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bd8f6:	8b 55 08             	mov    0x8(%ebp),%edx
 86bd8f9:	0f b6 84 02 84 01 00 	movzbl 0x184(%edx,%eax,1),%eax
 86bd900:	00 
 86bd901:	83 f0 01             	xor    $0x1,%eax
 86bd904:	84 c0                	test   %al,%al
 86bd906:	74 0a                	je     86bd912 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x94>
 86bd908:	b8 12 00 00 00       	mov    $0x12,%eax
 86bd90d:	e9 3e 04 00 00       	jmp    86bdd50 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x4d2>
 86bd912:	81 7d 10 ff 00 00 00 	cmpl   $0xff,0x10(%ebp)
 86bd919:	74 53                	je     86bd96e <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0xf0>
 86bd91b:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 86bd91f:	78 06                	js     86bd927 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0xa9>
 86bd921:	83 7d 10 05          	cmpl   $0x5,0x10(%ebp)
 86bd925:	7e 47                	jle    86bd96e <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0xf0>
 86bd927:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86bd92e:	00 
 86bd92f:	c7 44 24 08 d0 06 00 	movl   $0x6d0,0x8(%esp)
 86bd936:	00 
 86bd937:	c7 44 24 04 80 a5 cf 	movl   $0x8cfa580,0x4(%esp)
 86bd93e:	08 
 86bd93f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86bd942:	89 04 24             	mov    %eax,(%esp)
 86bd945:	e8 ce 1d e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86bd94a:	8b 45 10             	mov    0x10(%ebp),%eax
 86bd94d:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bd951:	c7 44 24 04 10 96 cf 	movl   $0x8cf9610,0x4(%esp)
 86bd958:	08 
 86bd959:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86bd95c:	89 04 24             	mov    %eax,(%esp)
 86bd95f:	e8 24 1e e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86bd964:	b8 01 00 00 00       	mov    $0x1,%eax
 86bd969:	e9 e2 03 00 00       	jmp    86bdd50 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x4d2>
 86bd96e:	66 c7 45 f2 ff ff    	movw   $0xffff,-0xe(%ebp)
 86bd974:	81 7d 10 ff 00 00 00 	cmpl   $0xff,0x10(%ebp)
 86bd97b:	74 6f                	je     86bd9ec <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x16e>
 86bd97d:	8b 55 10             	mov    0x10(%ebp),%edx
 86bd980:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd983:	83 c2 48             	add    $0x48,%edx
 86bd986:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd98a:	85 c0                	test   %eax,%eax
 86bd98c:	74 1b                	je     86bd9a9 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x12b>
 86bd98e:	8b 55 10             	mov    0x10(%ebp),%edx
 86bd991:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd994:	83 c2 48             	add    $0x48,%edx
 86bd997:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd99b:	89 04 24             	mov    %eax,(%esp)
 86bd99e:	e8 d9 c9 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86bd9a3:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 86bd9a7:	eb 43                	jmp    86bd9ec <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x16e>
 86bd9a9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86bd9b0:	00 
 86bd9b1:	c7 44 24 08 de 06 00 	movl   $0x6de,0x8(%esp)
 86bd9b8:	00 
 86bd9b9:	c7 44 24 04 80 a5 cf 	movl   $0x8cfa580,0x4(%esp)
 86bd9c0:	08 
 86bd9c1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bd9c4:	89 04 24             	mov    %eax,(%esp)
 86bd9c7:	e8 4c 1d e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86bd9cc:	8b 45 10             	mov    0x10(%ebp),%eax
 86bd9cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bd9d3:	c7 44 24 04 48 96 cf 	movl   $0x8cf9648,0x4(%esp)
 86bd9da:	08 
 86bd9db:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bd9de:	89 04 24             	mov    %eax,(%esp)
 86bd9e1:	e8 a2 1d e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86bd9e6:	66 c7 45 f2 ff ff    	movw   $0xffff,-0xe(%ebp)
 86bd9ec:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 86bd9f0:	98                   	cwtl
 86bd9f1:	8b 55 10             	mov    0x10(%ebp),%edx
 86bd9f4:	89 54 24 18          	mov    %edx,0x18(%esp)
 86bd9f8:	89 44 24 14          	mov    %eax,0x14(%esp)
 86bd9fc:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86bda03:	00 
 86bda04:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86bda0b:	00 
 86bda0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bda0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bda13:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bda16:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bda1a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bda1d:	89 04 24             	mov    %eax,(%esp)
 86bda20:	e8 8f 0e 00 00       	call   86be8b4 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi>
 86bda25:	81 7d 10 ff 00 00 00 	cmpl   $0xff,0x10(%ebp)
 86bda2c:	0f 84 40 01 00 00    	je     86bdb72 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x2f4>
 86bda32:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 86bda36:	0f 88 36 01 00 00    	js     86bdb72 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x2f4>
 86bda3c:	83 7d 10 05          	cmpl   $0x5,0x10(%ebp)
 86bda40:	0f 8f 2c 01 00 00    	jg     86bdb72 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x2f4>
 86bda46:	8b 55 10             	mov    0x10(%ebp),%edx
 86bda49:	8b 45 08             	mov    0x8(%ebp),%eax
 86bda4c:	83 c2 48             	add    $0x48,%edx
 86bda4f:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bda53:	85 c0                	test   %eax,%eax
 86bda55:	0f 84 17 01 00 00    	je     86bdb72 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x2f4>
 86bda5b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bda5e:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 86bda62:	84 c0                	test   %al,%al
 86bda64:	74 30                	je     86bda96 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x218>
 86bda66:	8b 55 10             	mov    0x10(%ebp),%edx
 86bda69:	8b 45 08             	mov    0x8(%ebp),%eax
 86bda6c:	83 c2 48             	add    $0x48,%edx
 86bda6f:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bda73:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 86bda78:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86bda7c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86bda83:	00 
 86bda84:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86bda8b:	00 
 86bda8c:	89 04 24             	mov    %eax,(%esp)
 86bda8f:	e8 30 7f f8 ff       	call   86459c4 <_ZN15CUserCharacInfo11WarAreaKillEiif>
 86bda94:	eb 39                	jmp    86bdacf <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x251>
 86bda96:	8b 45 08             	mov    0x8(%ebp),%eax
 86bda99:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bda9f:	8b 90 c8 07 00 00    	mov    0x7c8(%eax),%edx
 86bdaa5:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86bdaa8:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdaab:	83 c1 48             	add    $0x48,%ecx
 86bdaae:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86bdab2:	b9 00 00 80 3f       	mov    $0x3f800000,%ecx
 86bdab7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86bdabb:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bdabf:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86bdac6:	00 
 86bdac7:	89 04 24             	mov    %eax,(%esp)
 86bdaca:	e8 f5 7e f8 ff       	call   86459c4 <_ZN15CUserCharacInfo11WarAreaKillEiif>
 86bdacf:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bdad2:	89 04 24             	mov    %eax,(%esp)
 86bdad5:	e8 72 02 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bdada:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bdadd:	89 04 24             	mov    %eax,(%esp)
 86bdae0:	e8 01 de a0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86bdae5:	c7 44 24 08 5f 00 00 	movl   $0x5f,0x8(%esp)
 86bdaec:	00 
 86bdaed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bdaf4:	00 
 86bdaf5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bdaf8:	89 04 24             	mov    %eax,(%esp)
 86bdafb:	e8 fc dd a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bdb00:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bdb07:	00 
 86bdb08:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bdb0b:	89 04 24             	mov    %eax,(%esp)
 86bdb0e:	e8 0d de a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdb13:	8b 45 10             	mov    0x10(%ebp),%eax
 86bdb16:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bdb1a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bdb1d:	89 04 24             	mov    %eax,(%esp)
 86bdb20:	e8 fb dd a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdb25:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bdb2c:	00 
 86bdb2d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bdb30:	89 04 24             	mov    %eax,(%esp)
 86bdb33:	e8 20 de a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bdb38:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bdb3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bdb3f:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdb42:	89 04 24             	mov    %eax,(%esp)
 86bdb45:	e8 82 05 00 00       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bdb4a:	eb 1b                	jmp    86bdb67 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x2e9>
 86bdb4c:	89 d3                	mov    %edx,%ebx
 86bdb4e:	89 c6                	mov    %eax,%esi
 86bdb50:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bdb53:	89 04 24             	mov    %eax,(%esp)
 86bdb56:	e8 25 03 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bdb5b:	89 f0                	mov    %esi,%eax
 86bdb5d:	89 da                	mov    %ebx,%edx
 86bdb5f:	89 04 24             	mov    %eax,(%esp)
 86bdb62:	e8 e9 5b 42 00       	call   8ae3750 <_Unwind_Resume>
 86bdb67:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bdb6a:	89 04 24             	mov    %eax,(%esp)
 86bdb6d:	e8 0e 03 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bdb72:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdb75:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 86bdb79:	84 c0                	test   %al,%al
 86bdb7b:	0f 84 ab 01 00 00    	je     86bdd2c <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x4ae>
 86bdb81:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdb84:	89 04 24             	mov    %eax,(%esp)
 86bdb87:	e8 d4 e8 ff ff       	call   86bc460 <_ZN7WarRoom9ReviveAllEv>
 86bdb8c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdb8f:	8b 90 28 01 00 00    	mov    0x128(%eax),%edx
 86bdb95:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdb98:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bdb9e:	8b 80 44 07 00 00    	mov    0x744(%eax),%eax
 86bdba4:	39 c2                	cmp    %eax,%edx
 86bdba6:	74 0b                	je     86bdbb3 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x335>
 86bdba8:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdbab:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 86bdbaf:	84 c0                	test   %al,%al
 86bdbb1:	74 0a                	je     86bdbbd <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x33f>
 86bdbb3:	b8 00 00 00 00       	mov    $0x0,%eax
 86bdbb8:	e9 93 01 00 00       	jmp    86bdd50 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x4d2>
 86bdbbd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bdbc0:	89 04 24             	mov    %eax,(%esp)
 86bdbc3:	e8 84 01 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bdbc8:	c7 44 24 08 56 01 00 	movl   $0x156,0x8(%esp)
 86bdbcf:	00 
 86bdbd0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bdbd7:	00 
 86bdbd8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bdbdb:	89 04 24             	mov    %eax,(%esp)
 86bdbde:	e8 19 dd a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bdbe3:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdbe6:	89 04 24             	mov    %eax,(%esp)
 86bdbe9:	e8 de cf ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86bdbee:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bdbf2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bdbf5:	89 04 24             	mov    %eax,(%esp)
 86bdbf8:	e8 23 dd a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdbfd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bdc04:	e9 c0 00 00 00       	jmp    86bdcc9 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x44b>
 86bdc09:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bdc0c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdc0f:	83 c2 48             	add    $0x48,%edx
 86bdc12:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bdc16:	85 c0                	test   %eax,%eax
 86bdc18:	0f 84 a6 00 00 00    	je     86bdcc4 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x446>
 86bdc1e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bdc21:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdc24:	83 c2 48             	add    $0x48,%edx
 86bdc27:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bdc2b:	89 04 24             	mov    %eax,(%esp)
 86bdc2e:	e8 9b 7c f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bdc33:	89 c3                	mov    %eax,%ebx
 86bdc35:	e8 61 e5 a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bdc3a:	8b 80 ec 88 00 00    	mov    0x88ec(%eax),%eax
 86bdc40:	39 c3                	cmp    %eax,%ebx
 86bdc42:	0f 9e c0             	setle  %al
 86bdc45:	84 c0                	test   %al,%al
 86bdc47:	74 1f                	je     86bdc68 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x3ea>
 86bdc49:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bdc4c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdc4f:	83 c2 48             	add    $0x48,%edx
 86bdc52:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bdc56:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bdc5d:	00 
 86bdc5e:	89 04 24             	mov    %eax,(%esp)
 86bdc61:	e8 3a 7e f8 ff       	call   8645aa0 <_ZN15CUserCharacInfo16DecreaseWarPointEi>
 86bdc66:	eb 24                	jmp    86bdc8c <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x40e>
 86bdc68:	e8 2e e5 a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bdc6d:	8b 90 ec 88 00 00    	mov    0x88ec(%eax),%edx
 86bdc73:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 86bdc76:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdc79:	83 c1 48             	add    $0x48,%ecx
 86bdc7c:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86bdc80:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bdc84:	89 04 24             	mov    %eax,(%esp)
 86bdc87:	e8 14 7e f8 ff       	call   8645aa0 <_ZN15CUserCharacInfo16DecreaseWarPointEi>
 86bdc8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bdc8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bdc93:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bdc96:	89 04 24             	mov    %eax,(%esp)
 86bdc99:	e8 82 dc a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdc9e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bdca1:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdca4:	83 c2 48             	add    $0x48,%edx
 86bdca7:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bdcab:	89 04 24             	mov    %eax,(%esp)
 86bdcae:	e8 1b 7c f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bdcb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bdcb7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bdcba:	89 04 24             	mov    %eax,(%esp)
 86bdcbd:	e8 7a dc a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bdcc2:	eb 01                	jmp    86bdcc5 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x447>
 86bdcc4:	90                   	nop
 86bdcc5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bdcc9:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bdccd:	0f 9e c0             	setle  %al
 86bdcd0:	84 c0                	test   %al,%al
 86bdcd2:	0f 85 31 ff ff ff    	jne    86bdc09 <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x38b>
 86bdcd8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bdcdf:	00 
 86bdce0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bdce3:	89 04 24             	mov    %eax,(%esp)
 86bdce6:	e8 6d dc a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bdceb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bdcee:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bdcf2:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdcf5:	89 04 24             	mov    %eax,(%esp)
 86bdcf8:	e8 cf 03 00 00       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bdcfd:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdd00:	c6 40 11 01          	movb   $0x1,0x11(%eax)
 86bdd04:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bdd07:	89 04 24             	mov    %eax,(%esp)
 86bdd0a:	e8 71 01 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bdd0f:	eb 3a                	jmp    86bdd4b <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x4cd>
 86bdd11:	89 d3                	mov    %edx,%ebx
 86bdd13:	89 c6                	mov    %eax,%esi
 86bdd15:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bdd18:	89 04 24             	mov    %eax,(%esp)
 86bdd1b:	e8 60 01 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bdd20:	89 f0                	mov    %esi,%eax
 86bdd22:	89 da                	mov    %ebx,%edx
 86bdd24:	89 04 24             	mov    %eax,(%esp)
 86bdd27:	e8 24 5a 42 00       	call   8ae3750 <_Unwind_Resume>
 86bdd2c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdd2f:	89 04 24             	mov    %eax,(%esp)
 86bdd32:	e8 d5 ce ff ff       	call   86bac0c <_ZNK7WarRoom12GetLiveCountEv>
 86bdd37:	85 c0                	test   %eax,%eax
 86bdd39:	0f 94 c0             	sete   %al
 86bdd3c:	84 c0                	test   %al,%al
 86bdd3e:	74 0b                	je     86bdd4b <_ZN7WarRoom17HandleDieCharacerEP5CUseri+0x4cd>
 86bdd40:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdd43:	89 04 24             	mov    %eax,(%esp)
 86bdd46:	e8 43 2a 00 00       	call   86c078e <_ZN7WarRoom18SendWarRoomFailMsgEv>
 86bdd4b:	b8 00 00 00 00       	mov    $0x0,%eax
 86bdd50:	83 c4 70             	add    $0x70,%esp
 86bdd53:	5b                   	pop    %ebx
 86bdd54:	5e                   	pop    %esi
 86bdd55:	5d                   	pop    %ebp
 86bdd56:	c3                   	ret
 86bdd57:	90                   	nop

```

```c
// WarRoom::HandleDieCharacer @ 0x86bd87e

/* WarRoom::HandleDieCharacer(CUser*, int) */

undefined4 __thiscall WarRoom::HandleDieCharacer(WarRoom *this,CUser *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  int local_18;
  short local_12;
  int local_10;
  
  iVar2 = GetState(this);
  if (((iVar2 == 3) || (iVar2 = GetState(this), iVar2 == 4)) || (*(int *)(this + 0x144) == 5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0x13;
  }
  else {
    local_18 = GetUserSlot(this,param_1);
    if (local_18 < 0) {
      uVar3 = 4;
    }
    else if (this[local_18 + 0x184] == (WarRoom)0x1) {
      if ((param_2 == 0xff) || ((-1 < param_2 && (param_2 < 6)))) {
        local_12 = -1;
        if (param_2 != 0xff) {
          if (*(int *)(this + (param_2 + 0x48) * 4 + 0xc) == 0) {
            cMyTrace::cMyTrace(local_28,"int WarRoom::HandleDieCharacer(CUser*, int)",0x6de,5);
            cMyTrace::operator()
                      (local_28,
                       "WARAREA WarRoom::HandleDieCharacer player_[] is NULL killerSlotIndex(%d)",
                       param_2);
            local_12 = -1;
          }
          else {
            local_12 = CUser::get_unique_id(*(CUser **)(this + (param_2 + 0x48) * 4 + 0xc));
          }
        }
        SetCharacterLive(this,local_18,param_1,false,false,local_12,param_2);
        if (((param_2 != 0xff) && (-1 < param_2)) &&
           ((param_2 < 6 && (*(int *)(this + (param_2 + 0x48) * 4 + 0xc) != 0)))) {
          if (this[0x12] == (WarRoom)0x0) {
            CUserCharacInfo::WarAreaKill
                      (*(CUserCharacInfo **)(this + (param_2 + 0x48) * 4 + 0xc),4,
                       *(int *)(*(int *)(this + 0x1d0) + 0x7c8),1.0);
          }
          else {
            CUserCharacInfo::WarAreaKill
                      (*(CUserCharacInfo **)(this + (param_2 + 0x48) * 4 + 0xc),4,0,1.0);
          }
          PacketGuard::PacketGuard(local_44);
                    /* try { // try from 086bdae0 to 086bdb49 has its CatchHandler @ 086bdb4c */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,1,0x5f);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,param_2);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
          SendToRoom(this,local_44);
          PacketGuard::~PacketGuard(local_44);
        }
        if (this[0x10] == (WarRoom)0x0) {
          iVar2 = GetLiveCount(this);
          if (iVar2 == 0) {
            SendWarRoomFailMsg(this);
          }
        }
        else {
          ReviveAll(this);
          if ((*(int *)(this + 0x128) == *(int *)(*(int *)(this + 0x1d0) + 0x744)) ||
             (this[0x11] != (WarRoom)0x0)) {
            return 0;
          }
          PacketGuard::PacketGuard(local_50);
                    /* try { // try from 086bdbde to 086bdcfc has its CatchHandler @ 086bdd11 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x156);
          iVar2 = GetWaiterCount(this);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,iVar2);
          for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
            if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
              iVar2 = CUserCharacInfo::GetFinishPointTotal
                                (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
              iVar4 = G_CDataManager();
              if (*(int *)(iVar4 + 0x88ec) < iVar2) {
                iVar2 = G_CDataManager();
                CUserCharacInfo::DecreaseWarPoint
                          (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc),
                           *(int *)(iVar2 + 0x88ec));
              }
              else {
                CUserCharacInfo::DecreaseWarPoint
                          (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc),0);
              }
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_10);
              iVar2 = CUserCharacInfo::GetFinishPointTotal
                                (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,iVar2);
            }
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
          SendToRoom(this,local_50);
          this[0x11] = (WarRoom)0x1;
          PacketGuard::~PacketGuard(local_50);
        }
        uVar3 = 0;
      }
      else {
        cMyTrace::cMyTrace(local_38,"int WarRoom::HandleDieCharacer(CUser*, int)",0x6d0,5);
        cMyTrace::operator()
                  (local_38,"WarRoom::HandleDieCharacer killerSlotIndex Error(%d)",param_2);
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0x12;
    }
  }
  return uVar3;
}

```

---

## HandleGetItem

```asm
// === 086bea2e WarRoom::HandleGetItem  [0x086bea2e-0x86bf323] ===
 86bea2e:	55                   	push   %ebp
 86bea2f:	89 e5                	mov    %esp,%ebp
 86bea31:	56                   	push   %esi
 86bea32:	53                   	push   %ebx
 86bea33:	81 ec 20 01 00 00    	sub    $0x120,%esp
 86bea39:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 86bea3d:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86bea44:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bea47:	89 04 24             	mov    %eax,(%esp)
 86bea4a:	e8 fd f2 ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bea4f:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 86bea55:	89 04 24             	mov    %eax,(%esp)
 86bea58:	e8 6f 28 a9 ff       	call   81512cc <_ZN8map_itemC1Ev>
 86bea5d:	8b 45 08             	mov    0x8(%ebp),%eax
 86bea60:	8d 50 34             	lea    0x34(%eax),%edx
 86bea63:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 86bea69:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bea6d:	8b 45 10             	mov    0x10(%ebp),%eax
 86bea70:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bea74:	89 14 24             	mov    %edx,(%esp)
 86bea77:	e8 6a b5 ff ff       	call   86b9fe6 <_ZN8WarField12GetFieldItemEiR8map_item>
 86bea7c:	88 45 db             	mov    %al,-0x25(%ebp)
 86bea7f:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 86bea83:	83 f0 01             	xor    $0x1,%eax
 86bea86:	84 c0                	test   %al,%al
 86bea88:	74 70                	je     86beafa <_ZN7WarRoom13HandleGetItemEP5CUseri+0xcc>
 86bea8a:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 86bea91:	00 
 86bea92:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bea99:	00 
 86bea9a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bea9d:	89 04 24             	mov    %eax,(%esp)
 86beaa0:	e8 57 ce a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86beaa5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86beaac:	00 
 86beaad:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86beab0:	89 04 24             	mov    %eax,(%esp)
 86beab3:	e8 68 ce a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86beab8:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 86beabf:	00 
 86beac0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86beac3:	89 04 24             	mov    %eax,(%esp)
 86beac6:	e8 55 ce a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86beacb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bead2:	00 
 86bead3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bead6:	89 04 24             	mov    %eax,(%esp)
 86bead9:	e8 7a ce a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86beade:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86beae1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86beae5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86beae8:	89 04 24             	mov    %eax,(%esp)
 86beaeb:	e8 ca 9a f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86beaf0:	bb 00 00 00 00       	mov    $0x0,%ebx
 86beaf5:	e9 12 08 00 00       	jmp    86bf30c <_ZN7WarRoom13HandleGetItemEP5CUseri+0x8de>
 86beafa:	8b 45 08             	mov    0x8(%ebp),%eax
 86beafd:	89 04 24             	mov    %eax,(%esp)
 86beb00:	e8 c7 c0 ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86beb05:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86beb08:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 86beb0c:	7f 70                	jg     86beb7e <_ZN7WarRoom13HandleGetItemEP5CUseri+0x150>
 86beb0e:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 86beb15:	00 
 86beb16:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86beb1d:	00 
 86beb1e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86beb21:	89 04 24             	mov    %eax,(%esp)
 86beb24:	e8 d3 cd a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86beb29:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86beb30:	00 
 86beb31:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86beb34:	89 04 24             	mov    %eax,(%esp)
 86beb37:	e8 e4 cd a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86beb3c:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 86beb43:	00 
 86beb44:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86beb47:	89 04 24             	mov    %eax,(%esp)
 86beb4a:	e8 d1 cd a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86beb4f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86beb56:	00 
 86beb57:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86beb5a:	89 04 24             	mov    %eax,(%esp)
 86beb5d:	e8 f6 cd a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86beb62:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86beb65:	89 44 24 04          	mov    %eax,0x4(%esp)
 86beb69:	8b 45 0c             	mov    0xc(%ebp),%eax
 86beb6c:	89 04 24             	mov    %eax,(%esp)
 86beb6f:	e8 46 9a f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86beb74:	bb 00 00 00 00       	mov    $0x0,%ebx
 86beb79:	e9 8e 07 00 00       	jmp    86bf30c <_ZN7WarRoom13HandleGetItemEP5CUseri+0x8de>
 86beb7e:	8b 85 46 ff ff ff    	mov    -0xba(%ebp),%eax
 86beb84:	85 c0                	test   %eax,%eax
 86beb86:	0f 85 ff 01 00 00    	jne    86bed8b <_ZN7WarRoom13HandleGetItemEP5CUseri+0x35d>
 86beb8c:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 86beb92:	83 c0 10             	add    $0x10,%eax
 86beb95:	89 04 24             	mov    %eax,(%esp)
 86beb98:	e8 9d 8c a3 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 86beb9d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86beba0:	c7 44 24 08 5d 00 00 	movl   $0x5d,0x8(%esp)
 86beba7:	00 
 86beba8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bebaf:	00 
 86bebb0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bebb3:	89 04 24             	mov    %eax,(%esp)
 86bebb6:	e8 41 cd a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bebbb:	8b 45 10             	mov    0x10(%ebp),%eax
 86bebbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bebc2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bebc5:	89 04 24             	mov    %eax,(%esp)
 86bebc8:	e8 d7 b2 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bebcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bebd0:	89 04 24             	mov    %eax,(%esp)
 86bebd3:	e8 a4 b7 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86bebd8:	0f b7 c0             	movzwl %ax,%eax
 86bebdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bebdf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bebe2:	89 04 24             	mov    %eax,(%esp)
 86bebe5:	e8 ba b2 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bebea:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86bebf1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86bebf4:	89 04 24             	mov    %eax,(%esp)
 86bebf7:	e8 28 39 a9 ff       	call   8152524 <_ZNSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEC1Ev>
 86bebfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bebff:	89 04 24             	mov    %eax,(%esp)
 86bec02:	e8 75 b7 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86bec07:	0f b7 c0             	movzwl %ax,%eax
 86bec0a:	8b 55 08             	mov    0x8(%ebp),%edx
 86bec0d:	8d 4a 34             	lea    0x34(%edx),%ecx
 86bec10:	8d 55 ac             	lea    -0x54(%ebp),%edx
 86bec13:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86bec17:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bec1b:	8b 45 10             	mov    0x10(%ebp),%eax
 86bec1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bec22:	89 0c 24             	mov    %ecx,(%esp)
 86bec25:	e8 76 b4 ff ff       	call   86ba0a0 <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE>
 86bec2a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86bec2d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86bec31:	0f 8e 81 00 00 00    	jle    86becb8 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x28a>
 86bec37:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 86bec3e:	00 
 86bec3f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bec46:	00 
 86bec47:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bec4a:	89 04 24             	mov    %eax,(%esp)
 86bec4d:	e8 aa cc a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bec52:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bec59:	00 
 86bec5a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bec5d:	89 04 24             	mov    %eax,(%esp)
 86bec60:	e8 bb cc a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bec65:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bec68:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bec6c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bec6f:	89 04 24             	mov    %eax,(%esp)
 86bec72:	e8 a9 cc a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bec77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bec7e:	00 
 86bec7f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bec82:	89 04 24             	mov    %eax,(%esp)
 86bec85:	e8 ce cc a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bec8a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bec8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bec91:	8b 45 08             	mov    0x8(%ebp),%eax
 86bec94:	89 04 24             	mov    %eax,(%esp)
 86bec97:	e8 30 f4 ff ff       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bec9c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bec9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86beca3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86beca6:	89 04 24             	mov    %eax,(%esp)
 86beca9:	e8 0c 99 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86becae:	bb 00 00 00 00       	mov    $0x0,%ebx
 86becb3:	e9 54 06 00 00       	jmp    86bf30c <_ZN7WarRoom13HandleGetItemEP5CUseri+0x8de>
 86becb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86becbb:	89 04 24             	mov    %eax,(%esp)
 86becbe:	e8 cb b5 a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86becc3:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86becca:	00 
 86beccb:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86becd2:	00 
 86becd3:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 86becda:	00 
 86becdb:	8b 55 e8             	mov    -0x18(%ebp),%edx
 86becde:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bece2:	89 04 24             	mov    %eax,(%esp)
 86bece5:	e8 b2 05 e4 ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 86becea:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86beced:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86becf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86becf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86becf7:	89 04 24             	mov    %eax,(%esp)
 86becfa:	e8 eb 0b f9 ff       	call   864f8ea <_ZN5CUser26saveTaxMoneyForUpperMemberEi>
 86becff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bed02:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 86bed05:	7d 2e                	jge    86bed35 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x307>
 86bed07:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86bed0b:	79 07                	jns    86bed14 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x2e6>
 86bed0d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86bed14:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bed17:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86bed1a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86bed1e:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bed22:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bed29:	00 
 86bed2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bed2d:	89 04 24             	mov    %eax,(%esp)
 86bed30:	e8 0f db fb ff       	call   867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>
 86bed35:	8b 45 08             	mov    0x8(%ebp),%eax
 86bed38:	8d 50 34             	lea    0x34(%eax),%edx
 86bed3b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 86bed3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bed42:	89 14 24             	mov    %edx,(%esp)
 86bed45:	e8 38 b3 ff ff       	call   86ba082 <_ZN8WarField10PickupItemESt17_Rb_tree_iteratorISt4pairIKi8map_itemEE>
 86bed4a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bed4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bed51:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bed54:	89 04 24             	mov    %eax,(%esp)
 86bed57:	e8 e0 cb a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bed5c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bed63:	00 
 86bed64:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bed67:	89 04 24             	mov    %eax,(%esp)
 86bed6a:	e8 e9 cb a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bed6f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bed72:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bed76:	8b 45 08             	mov    0x8(%ebp),%eax
 86bed79:	89 04 24             	mov    %eax,(%esp)
 86bed7c:	e8 4b f3 ff ff       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bed81:	bb 01 00 00 00       	mov    $0x1,%ebx
 86bed86:	e9 81 05 00 00       	jmp    86bf30c <_ZN7WarRoom13HandleGetItemEP5CUseri+0x8de>
 86bed8b:	8b 85 46 ff ff ff    	mov    -0xba(%ebp),%eax
 86bed91:	89 c3                	mov    %eax,%ebx
 86bed93:	e8 03 d4 a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bed98:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86bed9c:	89 04 24             	mov    %eax,(%esp)
 86bed9f:	e8 8e 0c ca ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 86beda4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86beda7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86bedab:	75 40                	jne    86beded <_ZN7WarRoom13HandleGetItemEP5CUseri+0x3bf>
 86bedad:	8b 85 46 ff ff ff    	mov    -0xba(%ebp),%eax
 86bedb3:	89 44 24 14          	mov    %eax,0x14(%esp)
 86bedb7:	c7 44 24 10 b8 96 cf 	movl   $0x8cf96b8,0x10(%esp)
 86bedbe:	08 
 86bedbf:	c7 44 24 0c 57 09 00 	movl   $0x957,0xc(%esp)
 86bedc6:	00 
 86bedc7:	c7 44 24 08 00 a5 cf 	movl   $0x8cfa500,0x8(%esp)
 86bedce:	08 
 86bedcf:	c7 44 24 04 3b 95 cf 	movl   $0x8cf953b,0x4(%esp)
 86bedd6:	08 
 86bedd7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86bedde:	e8 27 4e 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86bede3:	bb 00 00 00 00       	mov    $0x0,%ebx
 86bede8:	e9 1f 05 00 00       	jmp    86bf30c <_ZN7WarRoom13HandleGetItemEP5CUseri+0x8de>
 86beded:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bedf0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86bedf3:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 86bedf7:	75 70                	jne    86bee69 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x43b>
 86bedf9:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 86bee00:	00 
 86bee01:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bee08:	00 
 86bee09:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bee0c:	89 04 24             	mov    %eax,(%esp)
 86bee0f:	e8 e8 ca a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bee14:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bee1b:	00 
 86bee1c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bee1f:	89 04 24             	mov    %eax,(%esp)
 86bee22:	e8 f9 ca a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bee27:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 86bee2e:	00 
 86bee2f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bee32:	89 04 24             	mov    %eax,(%esp)
 86bee35:	e8 e6 ca a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bee3a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bee41:	00 
 86bee42:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bee45:	89 04 24             	mov    %eax,(%esp)
 86bee48:	e8 0b cb a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bee4d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bee50:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bee54:	8b 45 08             	mov    0x8(%ebp),%eax
 86bee57:	89 04 24             	mov    %eax,(%esp)
 86bee5a:	e8 6d f2 ff ff       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bee5f:	bb 00 00 00 00       	mov    $0x0,%ebx
 86bee64:	e9 a3 04 00 00       	jmp    86bf30c <_ZN7WarRoom13HandleGetItemEP5CUseri+0x8de>
 86bee69:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bee6c:	8b 00                	mov    (%eax),%eax
 86bee6e:	83 c0 4c             	add    $0x4c,%eax
 86bee71:	8b 10                	mov    (%eax),%edx
 86bee73:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bee76:	89 04 24             	mov    %eax,(%esp)
 86bee79:	ff d2                	call   *%edx
 86bee7b:	84 c0                	test   %al,%al
 86bee7d:	74 19                	je     86bee98 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x46a>
 86bee7f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86bee82:	89 04 24             	mov    %eax,(%esp)
 86bee85:	e8 80 0f f0 ff       	call   85bfe0a <_ZN5CUser30getCheckPickUpRandomOptionItemEv>
 86bee8a:	83 f0 01             	xor    $0x1,%eax
 86bee8d:	84 c0                	test   %al,%al
 86bee8f:	74 07                	je     86bee98 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x46a>
 86bee91:	b8 01 00 00 00       	mov    $0x1,%eax
 86bee96:	eb 05                	jmp    86bee9d <_ZN7WarRoom13HandleGetItemEP5CUseri+0x46f>
 86bee98:	b8 00 00 00 00       	mov    $0x0,%eax
 86bee9d:	84 c0                	test   %al,%al
 86bee9f:	0f 84 ea 00 00 00    	je     86bef8f <_ZN7WarRoom13HandleGetItemEP5CUseri+0x561>
 86beea5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86beeac:	00 
 86beead:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86beeb0:	89 04 24             	mov    %eax,(%esp)
 86beeb3:	e8 7a e1 e2 ff       	call   84ed032 <_ZN5CUser30setCheckPickUpRandomOptionItemEb>
 86beeb8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86beebb:	89 04 24             	mov    %eax,(%esp)
 86beebe:	e8 ab b4 a1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86beec3:	89 c3                	mov    %eax,%ebx
 86beec5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86beec8:	89 04 24             	mov    %eax,(%esp)
 86beecb:	e8 c6 9d a0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 86beed0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86beed7:	00 
 86beed8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86beedc:	89 04 24             	mov    %eax,(%esp)
 86beedf:	e8 8c 3e d8 ff       	call   8442d70 <_ZN31DB_InsertRandomOptionItemInform11makeRequestEijh>
 86beee4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86beee7:	89 04 24             	mov    %eax,(%esp)
 86beeea:	e8 5d ee ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86beeef:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86beef2:	89 04 24             	mov    %eax,(%esp)
 86beef5:	e8 ec c9 a0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86beefa:	c7 44 24 08 71 01 00 	movl   $0x171,0x8(%esp)
 86bef01:	00 
 86bef02:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bef09:	00 
 86bef0a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86bef0d:	89 04 24             	mov    %eax,(%esp)
 86bef10:	e8 e7 c9 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bef15:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86bef18:	89 04 24             	mov    %eax,(%esp)
 86bef1b:	e8 5c b4 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86bef20:	0f b7 c0             	movzwl %ax,%eax
 86bef23:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bef27:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86bef2a:	89 04 24             	mov    %eax,(%esp)
 86bef2d:	e8 72 af a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bef32:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bef39:	00 
 86bef3a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86bef3d:	89 04 24             	mov    %eax,(%esp)
 86bef40:	e8 db c9 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bef45:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bef4c:	00 
 86bef4d:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86bef50:	89 04 24             	mov    %eax,(%esp)
 86bef53:	e8 00 ca a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bef58:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86bef5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bef5f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86bef62:	89 04 24             	mov    %eax,(%esp)
 86bef65:	e8 50 96 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86bef6a:	eb 18                	jmp    86bef84 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x556>
 86bef6c:	89 d3                	mov    %edx,%ebx
 86bef6e:	89 c6                	mov    %eax,%esi
 86bef70:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86bef73:	89 04 24             	mov    %eax,(%esp)
 86bef76:	e8 05 ef ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bef7b:	89 f0                	mov    %esi,%eax
 86bef7d:	89 da                	mov    %ebx,%edx
 86bef7f:	e9 6d 03 00 00       	jmp    86bf2f1 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x8c3>
 86bef84:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86bef87:	89 04 24             	mov    %eax,(%esp)
 86bef8a:	e8 f1 ee ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bef8f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 86bef96:	8d 45 b0             	lea    -0x50(%ebp),%eax
 86bef99:	89 04 24             	mov    %eax,(%esp)
 86bef9c:	e8 83 35 a9 ff       	call   8152524 <_ZNSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEC1Ev>
 86befa1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86befa4:	89 04 24             	mov    %eax,(%esp)
 86befa7:	e8 d0 b3 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86befac:	0f b7 c0             	movzwl %ax,%eax
 86befaf:	8b 55 08             	mov    0x8(%ebp),%edx
 86befb2:	8d 4a 34             	lea    0x34(%edx),%ecx
 86befb5:	8d 55 b0             	lea    -0x50(%ebp),%edx
 86befb8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86befbc:	89 44 24 08          	mov    %eax,0x8(%esp)
 86befc0:	8b 45 10             	mov    0x10(%ebp),%eax
 86befc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86befc7:	89 0c 24             	mov    %ecx,(%esp)
 86befca:	e8 d1 b0 ff ff       	call   86ba0a0 <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE>
 86befcf:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86befd2:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 86befd6:	0f 8e b6 00 00 00    	jle    86bf092 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x664>
 86befdc:	8b 9d 46 ff ff ff    	mov    -0xba(%ebp),%ebx
 86befe2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86befe9:	00 
 86befea:	c7 44 24 08 82 09 00 	movl   $0x982,0x8(%esp)
 86beff1:	00 
 86beff2:	c7 44 24 04 00 a5 cf 	movl   $0x8cfa500,0x4(%esp)
 86beff9:	08 
 86beffa:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86beffd:	89 04 24             	mov    %eax,(%esp)
 86bf000:	e8 13 07 e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86bf005:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86bf009:	8b 45 10             	mov    0x10(%ebp),%eax
 86bf00c:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bf010:	c7 44 24 04 e0 96 cf 	movl   $0x8cf96e0,0x4(%esp)
 86bf017:	08 
 86bf018:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bf01b:	89 04 24             	mov    %eax,(%esp)
 86bf01e:	e8 65 07 e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86bf023:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 86bf02a:	00 
 86bf02b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bf032:	00 
 86bf033:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf036:	89 04 24             	mov    %eax,(%esp)
 86bf039:	e8 be c8 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bf03e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bf045:	00 
 86bf046:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf049:	89 04 24             	mov    %eax,(%esp)
 86bf04c:	e8 cf c8 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bf051:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86bf054:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf058:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf05b:	89 04 24             	mov    %eax,(%esp)
 86bf05e:	e8 bd c8 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bf063:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bf06a:	00 
 86bf06b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf06e:	89 04 24             	mov    %eax,(%esp)
 86bf071:	e8 e2 c8 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bf076:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf079:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf07d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf080:	89 04 24             	mov    %eax,(%esp)
 86bf083:	e8 32 95 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86bf088:	bb 00 00 00 00       	mov    $0x0,%ebx
 86bf08d:	e9 7a 02 00 00       	jmp    86bf30c <_ZN7WarRoom13HandleGetItemEP5CUseri+0x8de>
 86bf092:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 86bf099:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 86bf09f:	83 c0 10             	add    $0x10,%eax
 86bf0a2:	89 04 24             	mov    %eax,(%esp)
 86bf0a5:	e8 56 17 a9 ff       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 86bf0aa:	84 c0                	test   %al,%al
 86bf0ac:	74 64                	je     86bf112 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x6e4>
 86bf0ae:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86bf0b1:	89 04 24             	mov    %eax,(%esp)
 86bf0b4:	e8 95 cb a0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86bf0b9:	8d 55 88             	lea    -0x78(%ebp),%edx
 86bf0bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bf0c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf0c4:	c7 04 24 05 00 00 00 	movl   $0x5,(%esp)
 86bf0cb:	e8 80 86 df ff       	call   84b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>
 86bf0d0:	0f b7 85 4f ff ff ff 	movzwl -0xb1(%ebp),%eax
 86bf0d7:	0f be d0             	movsbl %al,%edx
 86bf0da:	8b 85 46 ff ff ff    	mov    -0xba(%ebp),%eax
 86bf0e0:	c7 44 24 14 11 00 00 	movl   $0x11,0x14(%esp)
 86bf0e7:	00 
 86bf0e8:	8d 4d 88             	lea    -0x78(%ebp),%ecx
 86bf0eb:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86bf0ef:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86bf0f3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86bf0fa:	00 
 86bf0fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf0ff:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86bf102:	89 04 24             	mov    %eax,(%esp)
 86bf105:	e8 1a 21 fc ff       	call   8681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>
 86bf10a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86bf10d:	e9 cc 00 00 00       	jmp    86bf1de <_ZN7WarRoom13HandleGetItemEP5CUseri+0x7b0>
 86bf112:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86bf115:	89 04 24             	mov    %eax,(%esp)
 86bf118:	e8 71 b1 a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86bf11d:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 86bf124:	00 
 86bf125:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 86bf12c:	00 
 86bf12d:	c7 44 24 44 16 00 00 	movl   $0x16,0x44(%esp)
 86bf134:	00 
 86bf135:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 86bf13b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bf13f:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 86bf145:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bf149:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 86bf14f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86bf153:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 86bf159:	89 54 24 10          	mov    %edx,0x10(%esp)
 86bf15d:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 86bf163:	89 54 24 14          	mov    %edx,0x14(%esp)
 86bf167:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 86bf16d:	89 54 24 18          	mov    %edx,0x18(%esp)
 86bf171:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 86bf177:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 86bf17b:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 86bf181:	89 54 24 20          	mov    %edx,0x20(%esp)
 86bf185:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 86bf18b:	89 54 24 24          	mov    %edx,0x24(%esp)
 86bf18f:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 86bf195:	89 54 24 28          	mov    %edx,0x28(%esp)
 86bf199:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 86bf19f:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 86bf1a3:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 86bf1a9:	89 54 24 30          	mov    %edx,0x30(%esp)
 86bf1ad:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 86bf1b3:	89 54 24 34          	mov    %edx,0x34(%esp)
 86bf1b7:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 86bf1bd:	89 54 24 38          	mov    %edx,0x38(%esp)
 86bf1c1:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 86bf1c7:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 86bf1cb:	0f b6 55 80          	movzbl -0x80(%ebp),%edx
 86bf1cf:	88 54 24 40          	mov    %dl,0x40(%esp)
 86bf1d3:	89 04 24             	mov    %eax,(%esp)
 86bf1d6:	e8 ab 3b e4 ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 86bf1db:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86bf1de:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 86bf1e2:	75 70                	jne    86bf254 <_ZN7WarRoom13HandleGetItemEP5CUseri+0x826>
 86bf1e4:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 86bf1eb:	00 
 86bf1ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bf1f3:	00 
 86bf1f4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf1f7:	89 04 24             	mov    %eax,(%esp)
 86bf1fa:	e8 fd c6 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bf1ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bf206:	00 
 86bf207:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf20a:	89 04 24             	mov    %eax,(%esp)
 86bf20d:	e8 0e c7 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bf212:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86bf219:	00 
 86bf21a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf21d:	89 04 24             	mov    %eax,(%esp)
 86bf220:	e8 fb c6 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bf225:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bf22c:	00 
 86bf22d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf230:	89 04 24             	mov    %eax,(%esp)
 86bf233:	e8 20 c7 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bf238:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf23b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf23f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf242:	89 04 24             	mov    %eax,(%esp)
 86bf245:	e8 70 93 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86bf24a:	bb 00 00 00 00       	mov    $0x0,%ebx
 86bf24f:	e9 b8 00 00 00       	jmp    86bf30c <_ZN7WarRoom13HandleGetItemEP5CUseri+0x8de>
 86bf254:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf257:	8d 50 34             	lea    0x34(%eax),%edx
 86bf25a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86bf25d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf261:	89 14 24             	mov    %edx,(%esp)
 86bf264:	e8 19 ae ff ff       	call   86ba082 <_ZN8WarField10PickupItemESt17_Rb_tree_iteratorISt4pairIKi8map_itemEE>
 86bf269:	c7 44 24 08 5d 00 00 	movl   $0x5d,0x8(%esp)
 86bf270:	00 
 86bf271:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bf278:	00 
 86bf279:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf27c:	89 04 24             	mov    %eax,(%esp)
 86bf27f:	e8 78 c6 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bf284:	8b 45 10             	mov    0x10(%ebp),%eax
 86bf287:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf28b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf28e:	89 04 24             	mov    %eax,(%esp)
 86bf291:	e8 0e ac a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bf296:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf299:	89 04 24             	mov    %eax,(%esp)
 86bf29c:	e8 db b0 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86bf2a1:	0f b7 c0             	movzwl %ax,%eax
 86bf2a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf2a8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf2ab:	89 04 24             	mov    %eax,(%esp)
 86bf2ae:	e8 f1 ab a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bf2b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86bf2b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf2ba:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf2bd:	89 04 24             	mov    %eax,(%esp)
 86bf2c0:	e8 df ab a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bf2c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bf2cc:	00 
 86bf2cd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf2d0:	89 04 24             	mov    %eax,(%esp)
 86bf2d3:	e8 80 c6 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bf2d8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf2db:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf2df:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf2e2:	89 04 24             	mov    %eax,(%esp)
 86bf2e5:	e8 e2 ed ff ff       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bf2ea:	bb 01 00 00 00       	mov    $0x1,%ebx
 86bf2ef:	eb 1b                	jmp    86bf30c <_ZN7WarRoom13HandleGetItemEP5CUseri+0x8de>
 86bf2f1:	89 d3                	mov    %edx,%ebx
 86bf2f3:	89 c6                	mov    %eax,%esi
 86bf2f5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf2f8:	89 04 24             	mov    %eax,(%esp)
 86bf2fb:	e8 80 eb ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bf300:	89 f0                	mov    %esi,%eax
 86bf302:	89 da                	mov    %ebx,%edx
 86bf304:	89 04 24             	mov    %eax,(%esp)
 86bf307:	e8 44 44 42 00       	call   8ae3750 <_Unwind_Resume>
 86bf30c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bf30f:	89 04 24             	mov    %eax,(%esp)
 86bf312:	e8 69 eb ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bf317:	89 d8                	mov    %ebx,%eax
 86bf319:	81 c4 20 01 00 00    	add    $0x120,%esp
 86bf31f:	5b                   	pop    %ebx
 86bf320:	5e                   	pop    %esi
 86bf321:	5d                   	pop    %ebp
 86bf322:	c3                   	ret
 86bf323:	90                   	nop

```

```c
// WarRoom::HandleGetItem @ 0x86bea2e

/* WarRoom::HandleGetItem(CUser*, int) */

undefined4 __thiscall WarRoom::HandleGetItem(WarRoom *this,CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  CInventory *pCVar4;
  CDataManager *this_00;
  int iVar5;
  undefined4 uVar6;
  map_item local_d0 [16];
  undefined2 uStack_c0;
  undefined2 local_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_7c [24];
  PacketGuard local_64 [12];
  undefined4 local_58;
  undefined4 local_54;
  PacketGuard local_50 [12];
  cMyTrace local_44 [19];
  undefined1 local_31;
  CUser *local_30;
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  local_31 = 1;
  local_30 = (CUser *)0x0;
  PacketGuard::PacketGuard(local_50);
  map_item::map_item(local_d0);
                    /* try { // try from 086bea77 to 086beeee has its CatchHandler @ 086bf2f1 */
  local_29 = WarField::GetFieldItem((WarField *)(this + 0x34),param_2,local_d0);
  if (local_29 != '\x01') {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x15);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    CUser::Send(param_1,local_50);
    uVar6 = 0;
    goto LAB_086bf30c;
  }
  local_28 = GetWaiterCount(this);
  if (local_28 < 1) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x15);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    CUser::Send(param_1,local_50);
    uVar6 = 0;
    goto LAB_086bf30c;
  }
  if (CONCAT22(uStack_bc,local_be) == 0) {
    local_1c = Inven_Item::get_add_info((Inven_Item *)&uStack_c0);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x5d);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,param_2);
    uVar3 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar3 & 0xffff);
    local_18 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_58);
    uVar3 = CUser::get_unique_id(param_1);
    local_18 = WarField::CheckPickupItem
                         ((WarField *)(this + 0x34),param_2,uVar3 & 0xffff,
                          (_Rb_tree_iterator *)&local_58);
    if (local_18 < 1) {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_14 = CInventory::gain_money(pCVar4,local_1c,0xf,1,0);
      CUser::saveTaxMoneyForUpperMember(param_1,local_1c);
      if (local_14 < local_1c) {
        if (local_14 < 0) {
          local_14 = 0;
        }
        CUser::SendMoneyFullReason(param_1,0,local_1c,local_14);
      }
      WarField::PickupItem((WarField *)(this + 0x34),local_58);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      SendToRoom(this,local_50);
      uVar6 = 1;
    }
    else {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_18);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      SendToRoom(this,local_50);
      CUser::Send(param_1,local_50);
      uVar6 = 0;
    }
    goto LAB_086bf30c;
  }
  iVar5 = CONCAT22(uStack_bc,local_be);
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = (int *)CDataManager::find_item(this_00,iVar5);
  if (local_10 == (int *)0x0) {
    LogManager::logFormat
              (1,"WarRoom.cpp","bool WarRoom::HandleGetItem(CUser*, int)",0x957,
               "G_CDataManager()->find_item(%d) fail",CONCAT22(uStack_bc,local_be));
    uVar6 = 0;
    goto LAB_086bf30c;
  }
  local_30 = param_1;
  if (param_1 == (CUser *)0x0) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x16);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    SendToRoom(this,local_50);
    uVar6 = 0;
    goto LAB_086bf30c;
  }
  cVar2 = (**(code **)(*local_10 + 0x4c))(local_10);
  if (cVar2 == '\0') {
LAB_086bee98:
    bVar1 = false;
  }
  else {
    cVar2 = CUser::getCheckPickUpRandomOptionItem(local_30);
    if (cVar2 == '\x01') goto LAB_086bee98;
    bVar1 = true;
  }
  if (bVar1) {
    CUser::setCheckPickUpRandomOptionItem(local_30,true);
    uVar3 = CUser::get_acc_id(local_30);
    iVar5 = CUser::GetUID(local_30);
    DB_InsertRandomOptionItemInform::makeRequest(iVar5,uVar3,'\x01');
    PacketGuard::PacketGuard(local_64);
                    /* try { // try from 086beef5 to 086bef69 has its CatchHandler @ 086bef6c */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,0x171);
    uVar3 = CUser::get_unique_id(local_30);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,uVar3 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
    CUser::Send(local_30,local_64);
                    /* try { // try from 086bef8a to 086bf2e9 has its CatchHandler @ 086bf2f1 */
    PacketGuard::~PacketGuard(local_64);
  }
  local_24 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_54);
  uVar3 = CUser::get_unique_id(param_1);
  local_24 = WarField::CheckPickupItem
                       ((WarField *)(this + 0x34),param_2,uVar3 & 0xffff,
                        (_Rb_tree_iterator *)&local_54);
  if (local_24 < 1) {
    local_20 = 0;
    cVar2 = Inven_Item::isAvatarItemType((Inven_Item *)&uStack_c0);
    if (cVar2 == '\0') {
      uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)local_30);
      local_20 = CInventory::insertItemIntoInventory
                           (uVar6,CONCAT22(local_be,uStack_c0),CONCAT22(uStack_ba,uStack_bc),
                            local_b8,uStack_b4,local_b0,local_ac,local_a8,local_a4,local_a0,local_9c
                            ,local_98,local_94,local_90,local_8c,local_88,local_84,0x16,1,1);
    }
    else {
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_30);
      WongWork::CGenUniqueNo::genIPGNo(5,uVar6,local_7c);
      local_20 = CUser::addAvatarItem
                           (local_30,CONCAT22(uStack_bc,local_be),0,(int)local_b8._3_1_,local_7c,
                            0x11);
    }
    if (local_20 == -1) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      CUser::Send(param_1,local_50);
      uVar6 = 0;
    }
    else {
      WarField::PickupItem((WarField *)(this + 0x34),local_54);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x5d);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,param_2);
      uVar3 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar3 & 0xffff);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,local_20);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      SendToRoom(this,local_50);
      uVar6 = 1;
    }
  }
  else {
    cMyTrace::cMyTrace(local_44,"bool WarRoom::HandleGetItem(CUser*, int)",0x982,5);
    cMyTrace::operator()
              (local_44,"fieldData_.PickupItem( %d/%d ) ",param_2,CONCAT22(uStack_bc,local_be));
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_24);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    CUser::Send(param_1,local_50);
    uVar6 = 0;
  }
LAB_086bf30c:
  PacketGuard::~PacketGuard(local_50);
  return uVar6;
}

```

---

## HandleItemDrop

```asm
// === 086bf5fc WarRoom::HandleItemDrop  [0x086bf5fc-0x86c0403] ===
 86bf5fc:	55                   	push   %ebp
 86bf5fd:	89 e5                	mov    %esp,%ebp
 86bf5ff:	57                   	push   %edi
 86bf600:	56                   	push   %esi
 86bf601:	53                   	push   %ebx
 86bf602:	81 ec ec 01 00 00    	sub    $0x1ec,%esp
 86bf608:	8b 45 18             	mov    0x18(%ebp),%eax
 86bf60b:	88 85 c4 fe ff ff    	mov    %al,-0x13c(%ebp)
 86bf611:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf614:	89 04 24             	mov    %eax,(%esp)
 86bf617:	e8 7a f8 b6 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bf61c:	83 f8 03             	cmp    $0x3,%eax
 86bf61f:	74 17                	je     86bf638 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x3c>
 86bf621:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf624:	89 04 24             	mov    %eax,(%esp)
 86bf627:	e8 6a f8 b6 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bf62c:	83 f8 04             	cmp    $0x4,%eax
 86bf62f:	74 07                	je     86bf638 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x3c>
 86bf631:	b8 01 00 00 00       	mov    $0x1,%eax
 86bf636:	eb 05                	jmp    86bf63d <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x41>
 86bf638:	b8 00 00 00 00       	mov    $0x0,%eax
 86bf63d:	84 c0                	test   %al,%al
 86bf63f:	74 0a                	je     86bf64b <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x4f>
 86bf641:	bb 13 00 00 00       	mov    $0x13,%ebx
 86bf646:	e9 ab 0d 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bf64b:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 86bf64f:	79 66                	jns    86bf6b7 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xbb>
 86bf651:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf654:	89 04 24             	mov    %eax,(%esp)
 86bf657:	e8 cc 19 a4 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 86bf65c:	89 c3                	mov    %eax,%ebx
 86bf65e:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf661:	89 04 24             	mov    %eax,(%esp)
 86bf664:	e8 05 ad a1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86bf669:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bf670:	00 
 86bf671:	89 04 24             	mov    %eax,(%esp)
 86bf674:	e8 d2 99 a4 ff       	call   810904b <_Z14NumberToStringji>
 86bf679:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 86bf67d:	89 44 24 14          	mov    %eax,0x14(%esp)
 86bf681:	c7 44 24 10 00 97 cf 	movl   $0x8cf9700,0x10(%esp)
 86bf688:	08 
 86bf689:	c7 44 24 0c 1a 0a 00 	movl   $0xa1a,0xc(%esp)
 86bf690:	00 
 86bf691:	c7 44 24 08 c0 a4 cf 	movl   $0x8cfa4c0,0x8(%esp)
 86bf698:	08 
 86bf699:	c7 44 24 04 3b 95 cf 	movl   $0x8cf953b,0x4(%esp)
 86bf6a0:	08 
 86bf6a1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86bf6a8:	e8 5d 45 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86bf6ad:	bb 11 00 00 00       	mov    $0x11,%ebx
 86bf6b2:	e9 3f 0d 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bf6b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf6ba:	89 04 24             	mov    %eax,(%esp)
 86bf6bd:	e8 3c ac a1 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 86bf6c2:	84 c0                	test   %al,%al
 86bf6c4:	74 0a                	je     86bf6d0 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xd4>
 86bf6c6:	bb 13 00 00 00       	mov    $0x13,%ebx
 86bf6cb:	e9 26 0d 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bf6d0:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86bf6d6:	89 04 24             	mov    %eax,(%esp)
 86bf6d9:	e8 ee 1b a9 ff       	call   81512cc <_ZN8map_itemC1Ev>
 86bf6de:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 86bf6e4:	89 04 24             	mov    %eax,(%esp)
 86bf6e7:	e8 68 c1 a0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 86bf6ec:	0f be 85 c4 fe ff ff 	movsbl -0x13c(%ebp),%eax
 86bf6f3:	83 f8 02             	cmp    $0x2,%eax
 86bf6f6:	0f 84 5b 01 00 00    	je     86bf857 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x25b>
 86bf6fc:	83 f8 03             	cmp    $0x3,%eax
 86bf6ff:	0f 84 3f 02 00 00    	je     86bf944 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x348>
 86bf705:	85 c0                	test   %eax,%eax
 86bf707:	0f 85 27 03 00 00    	jne    86bfa34 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x438>
 86bf70d:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 86bf711:	75 4f                	jne    86bf762 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x166>
 86bf713:	c6 85 d4 fe ff ff 00 	movb   $0x0,-0x12c(%ebp)
 86bf71a:	c6 85 e5 fe ff ff 02 	movb   $0x2,-0x11b(%ebp)
 86bf721:	c7 85 e6 fe ff ff 00 	movl   $0x0,-0x11a(%ebp)
 86bf728:	00 00 00 
 86bf72b:	8b 45 20             	mov    0x20(%ebp),%eax
 86bf72e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf732:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86bf738:	83 c0 10             	add    $0x10,%eax
 86bf73b:	89 04 24             	mov    %eax,(%esp)
 86bf73e:	e8 41 c1 a0 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 86bf743:	66 c7 85 ef fe ff ff 	movw   $0x0,-0x111(%ebp)
 86bf74a:	00 00 
 86bf74c:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86bf752:	83 c0 10             	add    $0x10,%eax
 86bf755:	89 04 24             	mov    %eax,(%esp)
 86bf758:	e8 35 c1 a0 ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 86bf75d:	e9 d2 02 00 00       	jmp    86bfa34 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x438>
 86bf762:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf765:	89 04 24             	mov    %eax,(%esp)
 86bf768:	e8 11 ab a1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86bf76d:	8d 95 78 fe ff ff    	lea    -0x188(%ebp),%edx
 86bf773:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 86bf776:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86bf77a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86bf781:	00 
 86bf782:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf786:	89 14 24             	mov    %edx,(%esp)
 86bf789:	e8 8a c1 e3 ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 86bf78e:	83 ec 04             	sub    $0x4,%esp
 86bf791:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 86bf797:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 86bf79d:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 86bf7a3:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 86bf7a9:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 86bf7af:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 86bf7b5:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 86bf7bb:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 86bf7c1:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 86bf7c7:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 86bf7cd:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 86bf7d3:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 86bf7d9:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 86bf7df:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 86bf7e5:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 86bf7eb:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 86bf7f1:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 86bf7f7:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 86bf7fd:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 86bf803:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 86bf809:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 86bf80f:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 86bf815:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 86bf81b:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 86bf821:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 86bf827:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 86bf82d:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 86bf833:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 86bf839:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 86bf83f:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 86bf845:	0f b6 85 b4 fe ff ff 	movzbl -0x14c(%ebp),%eax
 86bf84c:	88 85 67 ff ff ff    	mov    %al,-0x99(%ebp)
 86bf852:	e9 dd 01 00 00       	jmp    86bfa34 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x438>
 86bf857:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf85a:	89 04 24             	mov    %eax,(%esp)
 86bf85d:	e8 22 22 a9 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 86bf862:	8d 95 78 fe ff ff    	lea    -0x188(%ebp),%edx
 86bf868:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 86bf86b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86bf86f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf873:	89 14 24             	mov    %edx,(%esp)
 86bf876:	e8 39 ba e4 ff       	call   850b2b4 <_ZNK6CCargo14get_cargo_slotEi>
 86bf87b:	83 ec 04             	sub    $0x4,%esp
 86bf87e:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 86bf884:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 86bf88a:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 86bf890:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 86bf896:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 86bf89c:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 86bf8a2:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 86bf8a8:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 86bf8ae:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 86bf8b4:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 86bf8ba:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 86bf8c0:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 86bf8c6:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 86bf8cc:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 86bf8d2:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 86bf8d8:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 86bf8de:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 86bf8e4:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 86bf8ea:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 86bf8f0:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 86bf8f6:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 86bf8fc:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 86bf902:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 86bf908:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 86bf90e:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 86bf914:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 86bf91a:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 86bf920:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 86bf926:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 86bf92c:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 86bf932:	0f b6 85 b4 fe ff ff 	movzbl -0x14c(%ebp),%eax
 86bf939:	88 85 67 ff ff ff    	mov    %al,-0x99(%ebp)
 86bf93f:	e9 f0 00 00 00       	jmp    86bfa34 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x438>
 86bf944:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf947:	89 04 24             	mov    %eax,(%esp)
 86bf94a:	e8 2f a9 a1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86bf94f:	8d 95 78 fe ff ff    	lea    -0x188(%ebp),%edx
 86bf955:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 86bf958:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86bf95c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86bf963:	00 
 86bf964:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf968:	89 14 24             	mov    %edx,(%esp)
 86bf96b:	e8 a8 bf e3 ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 86bf970:	83 ec 04             	sub    $0x4,%esp
 86bf973:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 86bf979:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 86bf97f:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 86bf985:	89 85 2f ff ff ff    	mov    %eax,-0xd1(%ebp)
 86bf98b:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 86bf991:	89 85 33 ff ff ff    	mov    %eax,-0xcd(%ebp)
 86bf997:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 86bf99d:	89 85 37 ff ff ff    	mov    %eax,-0xc9(%ebp)
 86bf9a3:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 86bf9a9:	89 85 3b ff ff ff    	mov    %eax,-0xc5(%ebp)
 86bf9af:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 86bf9b5:	89 85 3f ff ff ff    	mov    %eax,-0xc1(%ebp)
 86bf9bb:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 86bf9c1:	89 85 43 ff ff ff    	mov    %eax,-0xbd(%ebp)
 86bf9c7:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 86bf9cd:	89 85 47 ff ff ff    	mov    %eax,-0xb9(%ebp)
 86bf9d3:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 86bf9d9:	89 85 4b ff ff ff    	mov    %eax,-0xb5(%ebp)
 86bf9df:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 86bf9e5:	89 85 4f ff ff ff    	mov    %eax,-0xb1(%ebp)
 86bf9eb:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 86bf9f1:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 86bf9f7:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 86bf9fd:	89 85 57 ff ff ff    	mov    %eax,-0xa9(%ebp)
 86bfa03:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 86bfa09:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 86bfa0f:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 86bfa15:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 86bfa1b:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 86bfa21:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 86bfa27:	0f b6 85 b4 fe ff ff 	movzbl -0x14c(%ebp),%eax
 86bfa2e:	88 85 67 ff ff ff    	mov    %al,-0x99(%ebp)
 86bfa34:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%ebp)
 86bfa3b:	00 00 00 
 86bfa3e:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 86bfa44:	85 c0                	test   %eax,%eax
 86bfa46:	0f 84 5f 02 00 00    	je     86bfcab <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x6af>
 86bfa4c:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 86bfa52:	89 c3                	mov    %eax,%ebx
 86bfa54:	e8 42 c7 a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bfa59:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86bfa5d:	89 04 24             	mov    %eax,(%esp)
 86bfa60:	e8 cd ff c9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 86bfa65:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86bfa68:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 86bfa6c:	75 40                	jne    86bfaae <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x4b2>
 86bfa6e:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 86bfa74:	89 44 24 14          	mov    %eax,0x14(%esp)
 86bfa78:	c7 44 24 10 20 97 cf 	movl   $0x8cf9720,0x10(%esp)
 86bfa7f:	08 
 86bfa80:	c7 44 24 0c 4c 0a 00 	movl   $0xa4c,0xc(%esp)
 86bfa87:	00 
 86bfa88:	c7 44 24 08 c0 a4 cf 	movl   $0x8cfa4c0,0x8(%esp)
 86bfa8f:	08 
 86bfa90:	c7 44 24 04 3b 95 cf 	movl   $0x8cf953b,0x4(%esp)
 86bfa97:	08 
 86bfa98:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86bfa9f:	e8 66 41 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86bfaa4:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 86bfaa9:	e9 48 09 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bfaae:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86bfab1:	89 04 24             	mov    %eax,(%esp)
 86bfab4:	e8 29 18 a3 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 86bfab9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86bfabc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86bfabf:	83 f8 05             	cmp    $0x5,%eax
 86bfac2:	77 2b                	ja     86bfaef <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x4f3>
 86bfac4:	8b 04 85 b0 98 cf 08 	mov    0x8cf98b0(,%eax,4),%eax
 86bfacb:	ff e0                	jmp    *%eax
 86bfacd:	bb 17 00 00 00       	mov    $0x17,%ebx
 86bfad2:	e9 1f 09 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bfad7:	0f b6 85 2b ff ff ff 	movzbl -0xd5(%ebp),%eax
 86bfade:	83 f0 01             	xor    $0x1,%eax
 86bfae1:	84 c0                	test   %al,%al
 86bfae3:	74 0a                	je     86bfaef <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x4f3>
 86bfae5:	bb 17 00 00 00       	mov    $0x17,%ebx
 86bfaea:	e9 07 09 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bfaef:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 86bfaf5:	89 04 24             	mov    %eax,(%esp)
 86bfaf8:	e8 15 0d a9 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 86bfafd:	84 c0                	test   %al,%al
 86bfaff:	74 2c                	je     86bfb2d <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x531>
 86bfb01:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86bfb04:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86bfb07:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86bfb0a:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 86bfb10:	83 f8 0b             	cmp    $0xb,%eax
 86bfb13:	74 0e                	je     86bfb23 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x527>
 86bfb15:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86bfb18:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 86bfb1e:	83 f8 09             	cmp    $0x9,%eax
 86bfb21:	7f 0a                	jg     86bfb2d <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x531>
 86bfb23:	bb 17 00 00 00       	mov    $0x17,%ebx
 86bfb28:	e9 c9 08 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bfb2d:	c6 85 d4 fe ff ff 00 	movb   $0x0,-0x12c(%ebp)
 86bfb34:	0f b6 85 2c ff ff ff 	movzbl -0xd4(%ebp),%eax
 86bfb3b:	88 85 e5 fe ff ff    	mov    %al,-0x11b(%ebp)
 86bfb41:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 86bfb47:	89 85 e6 fe ff ff    	mov    %eax,-0x11a(%ebp)
 86bfb4d:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 86bfb53:	89 04 24             	mov    %eax,(%esp)
 86bfb56:	e8 b7 0c a9 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 86bfb5b:	83 f0 01             	xor    $0x1,%eax
 86bfb5e:	84 c0                	test   %al,%al
 86bfb60:	74 1a                	je     86bfb7c <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x580>
 86bfb62:	8b 45 20             	mov    0x20(%ebp),%eax
 86bfb65:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bfb69:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86bfb6f:	83 c0 10             	add    $0x10,%eax
 86bfb72:	89 04 24             	mov    %eax,(%esp)
 86bfb75:	e8 0a bd a0 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 86bfb7a:	eb 1b                	jmp    86bfb97 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x59b>
 86bfb7c:	8b 85 32 ff ff ff    	mov    -0xce(%ebp),%eax
 86bfb82:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bfb86:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86bfb8c:	83 c0 10             	add    $0x10,%eax
 86bfb8f:	89 04 24             	mov    %eax,(%esp)
 86bfb92:	e8 ed bc a0 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 86bfb97:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 86bfb9d:	89 04 24             	mov    %eax,(%esp)
 86bfba0:	e8 37 0c a9 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 86bfba5:	0f b6 c0             	movzbl %al,%eax
 86bfba8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bfbac:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86bfbb2:	83 c0 10             	add    $0x10,%eax
 86bfbb5:	89 04 24             	mov    %eax,(%esp)
 86bfbb8:	e8 2b 0c a9 ff       	call   81507e8 <_ZN10Inven_Item11SetItemAttrEh>
 86bfbbd:	0f b7 85 36 ff ff ff 	movzwl -0xca(%ebp),%eax
 86bfbc4:	66 89 85 ef fe ff ff 	mov    %ax,-0x111(%ebp)
 86bfbcb:	0f b6 85 2b ff ff ff 	movzbl -0xd5(%ebp),%eax
 86bfbd2:	88 85 e4 fe ff ff    	mov    %al,-0x11c(%ebp)
 86bfbd8:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 86bfbde:	89 85 f1 fe ff ff    	mov    %eax,-0x10f(%ebp)
 86bfbe4:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 86bfbea:	89 85 f9 fe ff ff    	mov    %eax,-0x107(%ebp)
 86bfbf0:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 86bfbf6:	89 85 fd fe ff ff    	mov    %eax,-0x103(%ebp)
 86bfbfc:	0f b7 85 48 ff ff ff 	movzwl -0xb8(%ebp),%eax
 86bfc03:	66 89 85 01 ff ff ff 	mov    %ax,-0xff(%ebp)
 86bfc0a:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 86bfc10:	89 85 f5 fe ff ff    	mov    %eax,-0x10b(%ebp)
 86bfc16:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 86bfc1c:	89 85 09 ff ff ff    	mov    %eax,-0xf7(%ebp)
 86bfc22:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 86bfc28:	89 85 0d ff ff ff    	mov    %eax,-0xf3(%ebp)
 86bfc2e:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 86bfc34:	89 85 11 ff ff ff    	mov    %eax,-0xef(%ebp)
 86bfc3a:	0f b7 85 5c ff ff ff 	movzwl -0xa4(%ebp),%eax
 86bfc41:	66 89 85 15 ff ff ff 	mov    %ax,-0xeb(%ebp)
 86bfc48:	8d 85 2b ff ff ff    	lea    -0xd5(%ebp),%eax
 86bfc4e:	83 c0 33             	add    $0x33,%eax
 86bfc51:	89 04 24             	mov    %eax,(%esp)
 86bfc54:	e8 ff f0 a5 ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 86bfc59:	0f b6 c0             	movzbl %al,%eax
 86bfc5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bfc60:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86bfc66:	83 c0 43             	add    $0x43,%eax
 86bfc69:	89 04 24             	mov    %eax,(%esp)
 86bfc6c:	e8 f9 93 e2 ff       	call   84e906a <_ZN19UpgradeSeparateInfo18SetUpgradeSeparateEh>
 86bfc71:	8b 45 20             	mov    0x20(%ebp),%eax
 86bfc74:	0f bf d8             	movswl %ax,%ebx
 86bfc77:	e8 61 1e a9 ff       	call   8151add <_Z7G_Storev>
 86bfc7c:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 86bfc82:	89 54 24 14          	mov    %edx,0x14(%esp)
 86bfc86:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86bfc8d:	00 
 86bfc8e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86bfc92:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86bfc95:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bfc99:	8d 95 2b ff ff ff    	lea    -0xd5(%ebp),%edx
 86bfc9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bfca3:	89 04 24             	mov    %eax,(%esp)
 86bfca6:	e8 f5 91 f5 ff       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 86bfcab:	0f be 85 c4 fe ff ff 	movsbl -0x13c(%ebp),%eax
 86bfcb2:	83 f8 02             	cmp    $0x2,%eax
 86bfcb5:	0f 84 b2 01 00 00    	je     86bfe6d <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x871>
 86bfcbb:	83 f8 02             	cmp    $0x2,%eax
 86bfcbe:	7f 09                	jg     86bfcc9 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x6cd>
 86bfcc0:	85 c0                	test   %eax,%eax
 86bfcc2:	74 1c                	je     86bfce0 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x6e4>
 86bfcc4:	e9 c1 03 00 00       	jmp    86c008a <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xa8e>
 86bfcc9:	83 f8 03             	cmp    $0x3,%eax
 86bfccc:	0f 84 2e 02 00 00    	je     86bff00 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x904>
 86bfcd2:	83 f8 07             	cmp    $0x7,%eax
 86bfcd5:	0f 84 eb 02 00 00    	je     86bffc6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x9ca>
 86bfcdb:	e9 aa 03 00 00       	jmp    86c008a <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xa8e>
 86bfce0:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 86bfce4:	0f 85 b7 00 00 00    	jne    86bfda1 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x7a5>
 86bfcea:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bfced:	89 04 24             	mov    %eax,(%esp)
 86bfcf0:	e8 99 a5 a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86bfcf5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86bfcfc:	00 
 86bfcfd:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 86bfd04:	00 
 86bfd05:	8b 55 20             	mov    0x20(%ebp),%edx
 86bfd08:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bfd0c:	89 04 24             	mov    %eax,(%esp)
 86bfd0f:	e8 38 f8 e3 ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 86bfd14:	83 f0 01             	xor    $0x1,%eax
 86bfd17:	84 c0                	test   %al,%al
 86bfd19:	74 5e                	je     86bfd79 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x77d>
 86bfd1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bfd1e:	89 04 24             	mov    %eax,(%esp)
 86bfd21:	e8 28 bf a0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86bfd26:	89 c3                	mov    %eax,%ebx
 86bfd28:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86bfd2f:	00 
 86bfd30:	c7 44 24 08 9f 0a 00 	movl   $0xa9f,0x8(%esp)
 86bfd37:	00 
 86bfd38:	c7 44 24 04 c0 a4 cf 	movl   $0x8cfa4c0,0x4(%esp)
 86bfd3f:	08 
 86bfd40:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 86bfd46:	89 04 24             	mov    %eax,(%esp)
 86bfd49:	e8 ca f9 e8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86bfd4e:	8b 45 20             	mov    0x20(%ebp),%eax
 86bfd51:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86bfd55:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86bfd59:	c7 44 24 04 48 97 cf 	movl   $0x8cf9748,0x4(%esp)
 86bfd60:	08 
 86bfd61:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 86bfd67:	89 04 24             	mov    %eax,(%esp)
 86bfd6a:	e8 19 fa e8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86bfd6f:	bb 11 00 00 00       	mov    $0x11,%ebx
 86bfd74:	e9 7d 06 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bfd79:	8b 5d 20             	mov    0x20(%ebp),%ebx
 86bfd7c:	e8 6e d8 f4 ff       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 86bfd81:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86bfd85:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bfd88:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bfd8c:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 86bfd93:	00 
 86bfd94:	89 04 24             	mov    %eax,(%esp)
 86bfd97:	e8 e6 d8 f4 ff       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 86bfd9c:	e9 e9 02 00 00       	jmp    86c008a <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xa8e>
 86bfda1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bfda4:	89 04 24             	mov    %eax,(%esp)
 86bfda7:	e8 e2 a4 a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86bfdac:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 86bfdb3:	00 
 86bfdb4:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 86bfdbb:	00 
 86bfdbc:	8b 55 20             	mov    0x20(%ebp),%edx
 86bfdbf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86bfdc3:	8b 55 1c             	mov    0x1c(%ebp),%edx
 86bfdc6:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bfdca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bfdd1:	00 
 86bfdd2:	89 04 24             	mov    %eax,(%esp)
 86bfdd5:	e8 32 42 e4 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 86bfdda:	83 f0 01             	xor    $0x1,%eax
 86bfddd:	84 c0                	test   %al,%al
 86bfddf:	74 5f                	je     86bfe40 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x844>
 86bfde1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bfde4:	89 04 24             	mov    %eax,(%esp)
 86bfde7:	e8 62 be a0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86bfdec:	89 c3                	mov    %eax,%ebx
 86bfdee:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86bfdf5:	00 
 86bfdf6:	c7 44 24 08 ae 0a 00 	movl   $0xaae,0x8(%esp)
 86bfdfd:	00 
 86bfdfe:	c7 44 24 04 c0 a4 cf 	movl   $0x8cfa4c0,0x4(%esp)
 86bfe05:	08 
 86bfe06:	8d 45 88             	lea    -0x78(%ebp),%eax
 86bfe09:	89 04 24             	mov    %eax,(%esp)
 86bfe0c:	e8 07 f9 e8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86bfe11:	8b 45 20             	mov    0x20(%ebp),%eax
 86bfe14:	89 44 24 10          	mov    %eax,0x10(%esp)
 86bfe18:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86bfe1b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86bfe1f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86bfe23:	c7 44 24 04 84 97 cf 	movl   $0x8cf9784,0x4(%esp)
 86bfe2a:	08 
 86bfe2b:	8d 45 88             	lea    -0x78(%ebp),%eax
 86bfe2e:	89 04 24             	mov    %eax,(%esp)
 86bfe31:	e8 52 f9 e8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86bfe36:	bb 11 00 00 00       	mov    $0x11,%ebx
 86bfe3b:	e9 b6 05 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bfe40:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 86bfe46:	89 c3                	mov    %eax,%ebx
 86bfe48:	e8 a2 d7 f4 ff       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 86bfe4d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86bfe51:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bfe54:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bfe58:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 86bfe5f:	00 
 86bfe60:	89 04 24             	mov    %eax,(%esp)
 86bfe63:	e8 1a d8 f4 ff       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 86bfe68:	e9 1d 02 00 00       	jmp    86c008a <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xa8e>
 86bfe6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bfe70:	89 04 24             	mov    %eax,(%esp)
 86bfe73:	e8 1c 1c a9 ff       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 86bfe78:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 86bfe7f:	00 
 86bfe80:	8b 55 20             	mov    0x20(%ebp),%edx
 86bfe83:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bfe87:	8b 55 1c             	mov    0x1c(%ebp),%edx
 86bfe8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bfe8e:	89 04 24             	mov    %eax,(%esp)
 86bfe91:	e8 fe b8 e4 ff       	call   850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>
 86bfe96:	83 f0 01             	xor    $0x1,%eax
 86bfe99:	84 c0                	test   %al,%al
 86bfe9b:	0f 84 e8 01 00 00    	je     86c0089 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xa8d>
 86bfea1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bfea4:	89 04 24             	mov    %eax,(%esp)
 86bfea7:	e8 a2 bd a0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86bfeac:	89 c3                	mov    %eax,%ebx
 86bfeae:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86bfeb5:	00 
 86bfeb6:	c7 44 24 08 bf 0a 00 	movl   $0xabf,0x8(%esp)
 86bfebd:	00 
 86bfebe:	c7 44 24 04 c0 a4 cf 	movl   $0x8cfa4c0,0x4(%esp)
 86bfec5:	08 
 86bfec6:	8d 45 98             	lea    -0x68(%ebp),%eax
 86bfec9:	89 04 24             	mov    %eax,(%esp)
 86bfecc:	e8 47 f8 e8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86bfed1:	8b 45 20             	mov    0x20(%ebp),%eax
 86bfed4:	89 44 24 10          	mov    %eax,0x10(%esp)
 86bfed8:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86bfedb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86bfedf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86bfee3:	c7 44 24 04 c0 97 cf 	movl   $0x8cf97c0,0x4(%esp)
 86bfeea:	08 
 86bfeeb:	8d 45 98             	lea    -0x68(%ebp),%eax
 86bfeee:	89 04 24             	mov    %eax,(%esp)
 86bfef1:	e8 92 f8 e8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86bfef6:	bb 11 00 00 00       	mov    $0x11,%ebx
 86bfefb:	e9 f6 04 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bff00:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bff03:	89 04 24             	mov    %eax,(%esp)
 86bff06:	e8 83 a3 a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86bff0b:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 86bff12:	00 
 86bff13:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 86bff1a:	00 
 86bff1b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86bff22:	00 
 86bff23:	8b 55 1c             	mov    0x1c(%ebp),%edx
 86bff26:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bff2a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bff31:	00 
 86bff32:	89 04 24             	mov    %eax,(%esp)
 86bff35:	e8 d2 40 e4 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 86bff3a:	83 f0 01             	xor    $0x1,%eax
 86bff3d:	84 c0                	test   %al,%al
 86bff3f:	74 58                	je     86bff99 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0x99d>
 86bff41:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bff44:	89 04 24             	mov    %eax,(%esp)
 86bff47:	e8 02 bd a0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86bff4c:	89 c3                	mov    %eax,%ebx
 86bff4e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86bff55:	00 
 86bff56:	c7 44 24 08 ca 0a 00 	movl   $0xaca,0x8(%esp)
 86bff5d:	00 
 86bff5e:	c7 44 24 04 c0 a4 cf 	movl   $0x8cfa4c0,0x4(%esp)
 86bff65:	08 
 86bff66:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bff69:	89 04 24             	mov    %eax,(%esp)
 86bff6c:	e8 a7 f7 e8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86bff71:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86bff74:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86bff78:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86bff7c:	c7 44 24 04 00 98 cf 	movl   $0x8cf9800,0x4(%esp)
 86bff83:	08 
 86bff84:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bff87:	89 04 24             	mov    %eax,(%esp)
 86bff8a:	e8 f9 f7 e8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86bff8f:	bb 11 00 00 00       	mov    $0x11,%ebx
 86bff94:	e9 5d 04 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86bff99:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 86bff9f:	89 c3                	mov    %eax,%ebx
 86bffa1:	e8 49 d6 f4 ff       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 86bffa6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86bffaa:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bffad:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bffb1:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 86bffb8:	00 
 86bffb9:	89 04 24             	mov    %eax,(%esp)
 86bffbc:	e8 c1 d6 f4 ff       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 86bffc1:	e9 c4 00 00 00       	jmp    86c008a <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xa8e>
 86bffc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bffc9:	89 04 24             	mov    %eax,(%esp)
 86bffcc:	e8 bd a2 a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86bffd1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 86bffd8:	00 
 86bffd9:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 86bffe0:	00 
 86bffe1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86bffe8:	00 
 86bffe9:	8b 55 1c             	mov    0x1c(%ebp),%edx
 86bffec:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bfff0:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86bfff7:	00 
 86bfff8:	89 04 24             	mov    %eax,(%esp)
 86bfffb:	e8 0c 40 e4 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 86c0000:	83 f0 01             	xor    $0x1,%eax
 86c0003:	84 c0                	test   %al,%al
 86c0005:	74 58                	je     86c005f <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xa63>
 86c0007:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c000a:	89 04 24             	mov    %eax,(%esp)
 86c000d:	e8 3c bc a0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86c0012:	89 c3                	mov    %eax,%ebx
 86c0014:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86c001b:	00 
 86c001c:	c7 44 24 08 ed 0a 00 	movl   $0xaed,0x8(%esp)
 86c0023:	00 
 86c0024:	c7 44 24 04 c0 a4 cf 	movl   $0x8cfa4c0,0x4(%esp)
 86c002b:	08 
 86c002c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c002f:	89 04 24             	mov    %eax,(%esp)
 86c0032:	e8 e1 f6 e8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86c0037:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86c003a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86c003e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86c0042:	c7 44 24 04 3c 98 cf 	movl   $0x8cf983c,0x4(%esp)
 86c0049:	08 
 86c004a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86c004d:	89 04 24             	mov    %eax,(%esp)
 86c0050:	e8 33 f7 e8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86c0055:	bb 11 00 00 00       	mov    $0x11,%ebx
 86c005a:	e9 97 03 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86c005f:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 86c0065:	89 c3                	mov    %eax,%ebx
 86c0067:	e8 83 d5 f4 ff       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 86c006c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86c0070:	8b 55 0c             	mov    0xc(%ebp),%edx
 86c0073:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c0077:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 86c007e:	00 
 86c007f:	89 04 24             	mov    %eax,(%esp)
 86c0082:	e8 fb d5 f4 ff       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 86c0087:	eb 01                	jmp    86c008a <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xa8e>
 86c0089:	90                   	nop
 86c008a:	0f b6 85 2c ff ff ff 	movzbl -0xd4(%ebp),%eax
 86c0091:	3c 01                	cmp    $0x1,%al
 86c0093:	0f 84 84 00 00 00    	je     86c011d <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xb21>
 86c0099:	8b 85 e6 fe ff ff    	mov    -0x11a(%ebp),%eax
 86c009f:	85 c0                	test   %eax,%eax
 86c00a1:	74 1f                	je     86c00c2 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xac6>
 86c00a3:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86c00a9:	83 c0 10             	add    $0x10,%eax
 86c00ac:	89 04 24             	mov    %eax,(%esp)
 86c00af:	e8 86 77 a3 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 86c00b4:	3d d0 07 00 00       	cmp    $0x7d0,%eax
 86c00b9:	7e 07                	jle    86c00c2 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xac6>
 86c00bb:	b8 01 00 00 00       	mov    $0x1,%eax
 86c00c0:	eb 05                	jmp    86c00c7 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xacb>
 86c00c2:	b8 00 00 00 00       	mov    $0x0,%eax
 86c00c7:	84 c0                	test   %al,%al
 86c00c9:	74 52                	je     86c011d <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xb21>
 86c00cb:	8b b5 eb fe ff ff    	mov    -0x115(%ebp),%esi
 86c00d1:	8b 9d e6 fe ff ff    	mov    -0x11a(%ebp),%ebx
 86c00d7:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 86c00de:	00 
 86c00df:	c7 44 24 08 00 0b 00 	movl   $0xb00,0x8(%esp)
 86c00e6:	00 
 86c00e7:	c7 44 24 04 c0 a4 cf 	movl   $0x8cfa4c0,0x4(%esp)
 86c00ee:	08 
 86c00ef:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86c00f2:	89 04 24             	mov    %eax,(%esp)
 86c00f5:	e8 1e f6 e8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86c00fa:	89 74 24 10          	mov    %esi,0x10(%esp)
 86c00fe:	c7 44 24 0c d0 07 00 	movl   $0x7d0,0xc(%esp)
 86c0105:	00 
 86c0106:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86c010a:	c7 44 24 04 78 98 cf 	movl   $0x8cf9878,0x4(%esp)
 86c0111:	08 
 86c0112:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86c0115:	89 04 24             	mov    %eax,(%esp)
 86c0118:	e8 6b f6 e8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86c011d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0120:	83 c0 34             	add    $0x34,%eax
 86c0123:	89 85 74 fe ff ff    	mov    %eax,-0x18c(%ebp)
 86c0129:	8d 54 24 04          	lea    0x4(%esp),%edx
 86c012d:	8d 9d d4 fe ff ff    	lea    -0x12c(%ebp),%ebx
 86c0133:	b8 15 00 00 00       	mov    $0x15,%eax
 86c0138:	89 d7                	mov    %edx,%edi
 86c013a:	89 de                	mov    %ebx,%esi
 86c013c:	89 c1                	mov    %eax,%ecx
 86c013e:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 86c0140:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 86c0146:	89 04 24             	mov    %eax,(%esp)
 86c0149:	e8 42 a0 ff ff       	call   86ba190 <_ZN8WarField8DropItemE8map_item>
 86c014e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86c0151:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 86c0155:	75 0a                	jne    86c0161 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xb65>
 86c0157:	bb 16 00 00 00       	mov    $0x16,%ebx
 86c015c:	e9 95 02 00 00       	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86c0161:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0167:	89 04 24             	mov    %eax,(%esp)
 86c016a:	e8 dd db ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86c016f:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 86c0176:	00 
 86c0177:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c017e:	00 
 86c017f:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0185:	89 04 24             	mov    %eax,(%esp)
 86c0188:	e8 6f b7 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86c018d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c0190:	89 04 24             	mov    %eax,(%esp)
 86c0193:	e8 e4 a1 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c0198:	0f b7 c0             	movzwl %ax,%eax
 86c019b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c019f:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c01a5:	89 04 24             	mov    %eax,(%esp)
 86c01a8:	e8 f7 9c a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c01ad:	8b 45 10             	mov    0x10(%ebp),%eax
 86c01b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c01b4:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c01ba:	89 04 24             	mov    %eax,(%esp)
 86c01bd:	e8 e2 9c a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c01c2:	8b 45 14             	mov    0x14(%ebp),%eax
 86c01c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c01c9:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c01cf:	89 04 24             	mov    %eax,(%esp)
 86c01d2:	e8 cd 9c a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c01d7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86c01da:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c01de:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c01e4:	89 04 24             	mov    %eax,(%esp)
 86c01e7:	e8 b8 9c a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c01ec:	8b 85 e6 fe ff ff    	mov    -0x11a(%ebp),%eax
 86c01f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c01f6:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c01fc:	89 04 24             	mov    %eax,(%esp)
 86c01ff:	e8 38 b7 a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86c0204:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86c020a:	83 c0 10             	add    $0x10,%eax
 86c020d:	89 04 24             	mov    %eax,(%esp)
 86c0210:	e8 c7 05 a9 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 86c0215:	0f b6 c0             	movzbl %al,%eax
 86c0218:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c021c:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0222:	89 04 24             	mov    %eax,(%esp)
 86c0225:	e8 f6 b6 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c022a:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86c0230:	83 c0 10             	add    $0x10,%eax
 86c0233:	89 04 24             	mov    %eax,(%esp)
 86c0236:	e8 ff 75 a3 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 86c023b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c023f:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0245:	89 04 24             	mov    %eax,(%esp)
 86c0248:	e8 ef b6 a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86c024d:	0f b7 85 ef fe ff ff 	movzwl -0x111(%ebp),%eax
 86c0254:	0f b7 c0             	movzwl %ax,%eax
 86c0257:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c025b:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0261:	89 04 24             	mov    %eax,(%esp)
 86c0264:	e8 3b 9c a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c0269:	8b 85 f1 fe ff ff    	mov    -0x10f(%ebp),%eax
 86c026f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0273:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0279:	89 04 24             	mov    %eax,(%esp)
 86c027c:	e8 bb b6 a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86c0281:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86c0287:	83 c0 21             	add    $0x21,%eax
 86c028a:	89 04 24             	mov    %eax,(%esp)
 86c028d:	e8 a0 04 a9 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 86c0292:	0f b6 c0             	movzbl %al,%eax
 86c0295:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0299:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c029f:	89 04 24             	mov    %eax,(%esp)
 86c02a2:	e8 79 b6 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c02a7:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86c02ad:	83 c0 21             	add    $0x21,%eax
 86c02b0:	89 04 24             	mov    %eax,(%esp)
 86c02b3:	e8 ba 04 a9 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 86c02b8:	0f b7 c0             	movzwl %ax,%eax
 86c02bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c02bf:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c02c5:	89 04 24             	mov    %eax,(%esp)
 86c02c8:	e8 d7 9b a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c02cd:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 86c02d3:	83 c0 10             	add    $0x10,%eax
 86c02d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c02da:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c02e0:	89 04 24             	mov    %eax,(%esp)
 86c02e3:	e8 a6 06 a9 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 86c02e8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c02ef:	00 
 86c02f0:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c02f6:	89 04 24             	mov    %eax,(%esp)
 86c02f9:	e8 5a b6 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86c02fe:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0304:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0308:	8b 45 08             	mov    0x8(%ebp),%eax
 86c030b:	89 04 24             	mov    %eax,(%esp)
 86c030e:	e8 b9 dd ff ff       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86c0313:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0319:	89 04 24             	mov    %eax,(%esp)
 86c031c:	e8 c5 b5 a0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86c0321:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 86c0328:	00 
 86c0329:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c0330:	00 
 86c0331:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0337:	89 04 24             	mov    %eax,(%esp)
 86c033a:	e8 bd b5 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86c033f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c0346:	00 
 86c0347:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c034d:	89 04 24             	mov    %eax,(%esp)
 86c0350:	e8 cb b5 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c0355:	0f be 85 c4 fe ff ff 	movsbl -0x13c(%ebp),%eax
 86c035c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0360:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0366:	89 04 24             	mov    %eax,(%esp)
 86c0369:	e8 b2 b5 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86c036e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86c0371:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0375:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c037b:	89 04 24             	mov    %eax,(%esp)
 86c037e:	e8 21 9b a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c0383:	8b 45 20             	mov    0x20(%ebp),%eax
 86c0386:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c038a:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c0390:	89 04 24             	mov    %eax,(%esp)
 86c0393:	e8 a4 b5 a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86c0398:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c039f:	00 
 86c03a0:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c03a6:	89 04 24             	mov    %eax,(%esp)
 86c03a9:	e8 aa b5 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86c03ae:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c03b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c03b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c03bb:	89 04 24             	mov    %eax,(%esp)
 86c03be:	e8 f7 81 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86c03c3:	bb 00 00 00 00       	mov    $0x0,%ebx
 86c03c8:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c03ce:	89 04 24             	mov    %eax,(%esp)
 86c03d1:	e8 aa da ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c03d6:	eb 1e                	jmp    86c03f6 <_ZN7WarRoom14HandleItemDropEP5CUseriicii+0xdfa>
 86c03d8:	89 d3                	mov    %edx,%ebx
 86c03da:	89 c6                	mov    %eax,%esi
 86c03dc:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c03e2:	89 04 24             	mov    %eax,(%esp)
 86c03e5:	e8 96 da ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c03ea:	89 f0                	mov    %esi,%eax
 86c03ec:	89 da                	mov    %ebx,%edx
 86c03ee:	89 04 24             	mov    %eax,(%esp)
 86c03f1:	e8 5a 33 42 00       	call   8ae3750 <_Unwind_Resume>
 86c03f6:	89 d8                	mov    %ebx,%eax
 86c03f8:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86c03fb:	83 c4 00             	add    $0x0,%esp
 86c03fe:	5b                   	pop    %ebx
 86c03ff:	5e                   	pop    %esi
 86c0400:	5f                   	pop    %edi
 86c0401:	5d                   	pop    %ebp
 86c0402:	c3                   	ret
 86c0403:	90                   	nop

```

```c
// WarRoom::HandleItemDrop @ 0x86bf5fc

/* WarRoom::HandleItemDrop(CUser*, int, int, char, int, int) */

undefined4 __thiscall
WarRoom::HandleItemDrop
          (WarRoom *this,CUser *param_1,int param_2,int param_3,char param_4,int param_5,int param_6
          )

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  CDataManager *this_00;
  Store *this_01;
  CInventory *pCVar6;
  CValueStatistic *pCVar7;
  CCargo *pCVar8;
  undefined4 uVar9;
  map_item *pmVar10;
  undefined4 *puVar11;
  byte bVar12;
  undefined1 local_18c [12];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150;
  char local_140;
  map_item local_130 [16];
  Inven_Item local_120;
  char local_11f;
  int local_11e;
  ushort local_115;
  int local_113;
  undefined4 local_10f;
  undefined4 local_10b;
  undefined4 local_107;
  undefined2 local_103;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined2 local_ef;
  UpgradeSeparateInfo aUStack_ed [20];
  Inven_Item local_d9;
  char cStack_d8;
  undefined2 uStack_d7;
  undefined2 uStack_d5;
  undefined1 uStack_d3;
  int iStack_d2;
  undefined1 local_ce;
  undefined4 uStack_cd;
  undefined4 uStack_c9;
  undefined4 uStack_c5;
  undefined4 uStack_c1;
  undefined1 uStack_bd;
  undefined2 local_bc;
  undefined1 uStack_ba;
  undefined4 local_b9;
  undefined4 uStack_b5;
  undefined4 uStack_b1;
  undefined4 uStack_ad;
  undefined1 uStack_a9;
  undefined2 local_a8;
  UpgradeSeparateInfo UStack_a6;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined1 local_9d;
  PacketGuard local_9c [12];
  int local_90;
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  int local_2c;
  CItem *local_28;
  undefined4 local_24;
  CItem *local_20;
  
  bVar12 = 0;
  local_140 = param_4;
  iVar4 = GetState(this);
  if ((iVar4 == 3) || (iVar4 = GetState(this), iVar4 == 4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar9 = 0x13;
  }
  else if (param_6 < 0) {
    CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar5 = CUser::get_acc_id(param_1);
    NumberToString(uVar5,0);
    LogManager::logFormat
              (1,"WarRoom.cpp","int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",0xa1a
               ,"user - accid[%s] %s : count<0");
    uVar9 = 0x11;
  }
  else {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      map_item::map_item(local_130);
      Inven_Item::Inven_Item(&local_d9);
      if (local_140 == '\x02') {
        CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
        CCargo::get_cargo_slot((int)local_18c);
        local_d9 = SUB41(local_18c._0_4_,0);
        cStack_d8 = SUB41(local_18c._0_4_,1);
        uStack_d7 = SUB42(local_18c._0_4_,2);
        uStack_d5 = (undefined2)local_18c._4_4_;
        uStack_d3 = SUB41(local_18c._4_4_,2);
        iStack_d2._1_3_ = (undefined3)local_18c._8_4_;
        iStack_d2 = CONCAT31(iStack_d2._1_3_,SUB41(local_18c._4_4_,3));
        local_ce = SUB41(local_18c._8_4_,3);
        uStack_cd = local_180;
        uStack_c9 = local_17c;
        uStack_c5 = local_178;
        uStack_c1 = local_174;
        uStack_bd = (undefined1)local_170;
        local_bc = (undefined2)((uint)local_170 >> 8);
        uStack_ba = (undefined1)((uint)local_170 >> 0x18);
        local_b9 = local_16c;
        uStack_b5 = local_168;
        uStack_b1 = local_164;
        uStack_ad = local_160;
        uStack_a9 = (undefined1)local_15c;
        local_a8 = (undefined2)((uint)local_15c >> 8);
        UStack_a6 = SUB41((uint)local_15c >> 0x18,0);
        local_a5 = local_158;
        local_a1 = local_154;
        local_9d = local_150;
      }
      else if (local_140 == '\x03') {
        iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_18c,iVar4);
        local_d9 = SUB41(local_18c._0_4_,0);
        cStack_d8 = SUB41(local_18c._0_4_,1);
        uStack_d7 = SUB42(local_18c._0_4_,2);
        uStack_d5 = (undefined2)local_18c._4_4_;
        uStack_d3 = SUB41(local_18c._4_4_,2);
        iStack_d2._1_3_ = (undefined3)local_18c._8_4_;
        iStack_d2 = CONCAT31(iStack_d2._1_3_,SUB41(local_18c._4_4_,3));
        local_ce = SUB41(local_18c._8_4_,3);
        uStack_cd = local_180;
        uStack_c9 = local_17c;
        uStack_c5 = local_178;
        uStack_c1 = local_174;
        uStack_bd = (undefined1)local_170;
        local_bc = (undefined2)((uint)local_170 >> 8);
        uStack_ba = (undefined1)((uint)local_170 >> 0x18);
        local_b9 = local_16c;
        uStack_b5 = local_168;
        uStack_b1 = local_164;
        uStack_ad = local_160;
        uStack_a9 = (undefined1)local_15c;
        local_a8 = (undefined2)((uint)local_15c >> 8);
        UStack_a6 = SUB41((uint)local_15c >> 0x18,0);
        local_a5 = local_158;
        local_a1 = local_154;
        local_9d = local_150;
      }
      else if (local_140 == '\0') {
        if (param_5 == 0) {
          local_130[0] = (map_item)0x0;
          local_11f = '\x02';
          local_11e = 0;
          Inven_Item::set_add_info(&local_120,param_6);
          local_115 = 0;
          Inven_Item::ResetItemAttr(&local_120);
        }
        else {
          iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          CInventory::GetInvenSlot((int)local_18c,iVar4);
          local_d9 = SUB41(local_18c._0_4_,0);
          cStack_d8 = SUB41(local_18c._0_4_,1);
          uStack_d7 = SUB42(local_18c._0_4_,2);
          uStack_d5 = (undefined2)local_18c._4_4_;
          uStack_d3 = SUB41(local_18c._4_4_,2);
          iStack_d2._1_3_ = (undefined3)local_18c._8_4_;
          iStack_d2 = CONCAT31(iStack_d2._1_3_,SUB41(local_18c._4_4_,3));
          local_ce = SUB41(local_18c._8_4_,3);
          uStack_cd = local_180;
          uStack_c9 = local_17c;
          uStack_c5 = local_178;
          uStack_c1 = local_174;
          uStack_bd = (undefined1)local_170;
          local_bc = (undefined2)((uint)local_170 >> 8);
          uStack_ba = (undefined1)((uint)local_170 >> 0x18);
          local_b9 = local_16c;
          uStack_b5 = local_168;
          uStack_b1 = local_164;
          uStack_ad = local_160;
          uStack_a9 = (undefined1)local_15c;
          local_a8 = (undefined2)((uint)local_15c >> 8);
          UStack_a6 = SUB41((uint)local_15c >> 0x18,0);
          local_a5 = local_158;
          local_a1 = local_154;
          local_9d = local_150;
        }
      }
      local_90 = 0;
      if (CONCAT22(uStack_d5,uStack_d7) != 0) {
        iVar4 = CONCAT22(uStack_d5,uStack_d7);
        this_00 = (CDataManager *)G_CDataManager();
        local_28 = (CItem *)CDataManager::find_item(this_00,iVar4);
        if (local_28 == (CItem *)0x0) {
          LogManager::logFormat
                    (1,"WarRoom.cpp","int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)"
                     ,0xa4c,"[WarRoom::HandleDropItem] Null Item %d");
          return 0xffffffff;
        }
        local_24 = CItem::GetAttachType(local_28);
        switch(local_24) {
        case 1:
        case 2:
        case 5:
          return 0x17;
        case 3:
          if (local_d9 != (Inven_Item)0x1) {
            return 0x17;
          }
        }
        cVar2 = Inven_Item::isEquipableItemType(&local_d9);
        if ((cVar2 != '\0') &&
           ((local_20 = local_28, *(int *)(local_28 + 0x234) == 0xb ||
            (*(int *)(local_28 + 0x234) < 10)))) {
          return 0x17;
        }
        local_130[0] = (map_item)0x0;
        local_11f = cStack_d8;
        local_11e = CONCAT22(uStack_d5,uStack_d7);
        cVar2 = Inven_Item::isEquipableItemType(&local_d9);
        if (cVar2 == '\x01') {
          Inven_Item::set_add_info(&local_120,iStack_d2);
        }
        else {
          Inven_Item::set_add_info(&local_120,param_6);
        }
        uVar3 = Inven_Item::GetItemAttr(&local_d9);
        Inven_Item::SetItemAttr(&local_120,uVar3);
        local_115 = CONCAT11((undefined1)uStack_cd,local_ce);
        local_120 = local_d9;
        local_113 = CONCAT13((undefined1)uStack_c9,uStack_cd._1_3_);
        local_10b = CONCAT13((undefined1)uStack_c1,uStack_c5._1_3_);
        local_107 = CONCAT13(uStack_bd,uStack_c1._1_3_);
        local_103 = local_bc;
        local_10f = CONCAT13((undefined1)uStack_c5,uStack_c9._1_3_);
        local_fb = CONCAT13((undefined1)uStack_b1,uStack_b5._1_3_);
        local_f7 = CONCAT13((undefined1)uStack_ad,uStack_b1._1_3_);
        local_f3 = CONCAT13(uStack_a9,uStack_ad._1_3_);
        local_ef = local_a8;
        uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate(&UStack_a6);
        UpgradeSeparateInfo::SetUpgradeSeparate(aUStack_ed,uVar3);
        this_01 = (Store *)G_Store();
        Store::GetSellItemPrice(this_01,&local_d9,local_28,(short)param_6,false,&local_90);
      }
      if (local_140 == '\x02') {
        pCVar8 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
        cVar2 = CCargo::delete_item(pCVar8);
        if (cVar2 != '\x01') {
          CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_6c,
                             "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",0xabf,5
                            );
          cMyTrace::operator()
                    (local_6c,"CParty::drop_item , delete_item failed 2, User ch=%d , %d %d");
          return 0x11;
        }
      }
      else if (local_140 < '\x03') {
        if (local_140 == '\0') {
          if (param_5 == 0) {
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar2 = CInventory::use_money(pCVar6);
            if (cVar2 != '\x01') {
              CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_8c,
                                 "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",
                                 0xa9f,5);
              cMyTrace::operator()
                        (local_8c,"CParty::drop_item , use_money failed, User ch=%d , %d %d");
              return 0x11;
            }
            pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar7);
          }
          else {
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar2 = CInventory::delete_item(pCVar6);
            if (cVar2 != '\x01') {
              CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_7c,
                                 "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",
                                 0xaae,5);
              cMyTrace::operator()
                        (local_7c,"CParty::drop_item , delete_item failed, User ch=%d , %d %d");
              return 0x11;
            }
            pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar7);
          }
        }
      }
      else if (local_140 == '\x03') {
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar2 = CInventory::delete_item(pCVar6);
        if (cVar2 != '\x01') {
          CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_5c,
                             "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",0xaca,5
                            );
          cMyTrace::operator()(local_5c,"CParty::drop_item , delete_item failed 3, User ch=%d , %d")
          ;
          return 0x11;
        }
        pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar7);
      }
      else if (local_140 == '\a') {
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar2 = CInventory::delete_item(pCVar6);
        if (cVar2 != '\x01') {
          CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_4c,
                             "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",0xaed,5
                            );
          cMyTrace::operator()(local_4c,"CParty::drop_item , delete_item failed 4, User ch=%d , %d")
          ;
          return 0x11;
        }
        pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar7);
      }
      if (cStack_d8 != '\x01') {
        if ((local_11e == 0) || (iVar4 = Inven_Item::get_add_info(&local_120), iVar4 < 0x7d1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          cMyTrace::cMyTrace(local_3c,
                             "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",0xb00,4
                            );
          cMyTrace::operator()(local_3c,"war room drop item(%d) stack size over %d add_info(%d)");
        }
      }
      pmVar10 = local_130;
      puVar11 = (undefined4 *)&stack0xfffffe08;
      for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *(undefined4 *)pmVar10;
        pmVar10 = pmVar10 + ((uint)bVar12 * -2 + 1) * 4;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      local_2c = WarField::DropItem(this + 0x34);
      if (local_2c == -1) {
        uVar9 = 0x16;
      }
      else {
        PacketGuard::PacketGuard(local_9c);
                    /* try { // try from 086c0188 to 086c03c2 has its CatchHandler @ 086c03d8 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_9c,0,0x28);
        uVar5 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,uVar5 & 0xffff);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,param_2);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,param_3);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,local_2c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,local_11e);
        uVar5 = Inven_Item::GetItemAttr(&local_120);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,uVar5 & 0xff);
        iVar4 = Inven_Item::get_add_info(&local_120);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,iVar4);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,(uint)local_115);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,local_113);
        uVar5 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)&local_10f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,uVar5 & 0xff);
        uVar5 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)&local_10f);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,uVar5 & 0xffff);
        InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_9c,&local_120);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_9c,true);
        SendToRoom(this,local_9c);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_9c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_9c,1,0x32);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,(int)local_140);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,param_5);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,param_6);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_9c,true);
        CUser::Send(param_1,local_9c);
        uVar9 = 0;
        PacketGuard::~PacketGuard(local_9c);
      }
    }
    else {
      uVar9 = 0x13;
    }
  }
  return uVar9;
}

```

---

## HandleMonsterKill

```asm
// === 086be1fe WarRoom::HandleMonsterKill  [0x086be1fe-0x86be8b3] ===
 86be1fe:	55                   	push   %ebp
 86be1ff:	89 e5                	mov    %esp,%ebp
 86be201:	56                   	push   %esi
 86be202:	53                   	push   %ebx
 86be203:	81 ec e0 03 00 00    	sub    $0x3e0,%esp
 86be209:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 86be20f:	89 04 24             	mov    %eax,(%esp)
 86be212:	e8 b1 2f a9 ff       	call   81511c8 <_ZN11map_monsterC1Ev>
 86be217:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86be21a:	89 04 24             	mov    %eax,(%esp)
 86be21d:	e8 2a fb ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86be222:	8b 45 08             	mov    0x8(%ebp),%eax
 86be225:	89 04 24             	mov    %eax,(%esp)
 86be228:	e8 9f c9 ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86be22d:	89 45 c0             	mov    %eax,-0x40(%ebp)
 86be230:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 86be234:	75 0a                	jne    86be240 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x42>
 86be236:	bb 00 00 00 00       	mov    $0x0,%ebx
 86be23b:	e9 2e 06 00 00       	jmp    86be86e <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x670>
 86be240:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 86be247:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 86be24e:	eb 61                	jmp    86be2b1 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0xb3>
 86be250:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86be253:	8b 45 08             	mov    0x8(%ebp),%eax
 86be256:	83 c2 48             	add    $0x48,%edx
 86be259:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be25d:	85 c0                	test   %eax,%eax
 86be25f:	74 4b                	je     86be2ac <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0xae>
 86be261:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 86be265:	74 46                	je     86be2ad <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0xaf>
 86be267:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86be26a:	8b 45 08             	mov    0x8(%ebp),%eax
 86be26d:	83 c2 48             	add    $0x48,%edx
 86be270:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be274:	3b 45 14             	cmp    0x14(%ebp),%eax
 86be277:	75 34                	jne    86be2ad <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0xaf>
 86be279:	8b 45 08             	mov    0x8(%ebp),%eax
 86be27c:	8d 50 34             	lea    0x34(%eax),%edx
 86be27f:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 86be285:	89 44 24 10          	mov    %eax,0x10(%esp)
 86be289:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86be290:	00 
 86be291:	8b 45 10             	mov    0x10(%ebp),%eax
 86be294:	89 44 24 08          	mov    %eax,0x8(%esp)
 86be298:	8b 45 14             	mov    0x14(%ebp),%eax
 86be29b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be29f:	89 14 24             	mov    %edx,(%esp)
 86be2a2:	e8 43 bf ff ff       	call   86ba1ea <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster>
 86be2a7:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86be2aa:	eb 01                	jmp    86be2ad <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0xaf>
 86be2ac:	90                   	nop
 86be2ad:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 86be2b1:	83 7d cc 05          	cmpl   $0x5,-0x34(%ebp)
 86be2b5:	0f 9e c0             	setle  %al
 86be2b8:	84 c0                	test   %al,%al
 86be2ba:	75 94                	jne    86be250 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x52>
 86be2bc:	8b 45 08             	mov    0x8(%ebp),%eax
 86be2bf:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86be2c5:	8b 55 08             	mov    0x8(%ebp),%edx
 86be2c8:	83 c2 34             	add    $0x34,%edx
 86be2cb:	89 44 24 14          	mov    %eax,0x14(%esp)
 86be2cf:	8b 45 14             	mov    0x14(%ebp),%eax
 86be2d2:	89 44 24 10          	mov    %eax,0x10(%esp)
 86be2d6:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 86be2dc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86be2e0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86be2e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 86be2e7:	8b 45 10             	mov    0x10(%ebp),%eax
 86be2ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be2ee:	89 14 24             	mov    %edx,(%esp)
 86be2f1:	e8 7c b3 ff ff       	call   86b9672 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon>
 86be2f6:	83 f0 01             	xor    $0x1,%eax
 86be2f9:	84 c0                	test   %al,%al
 86be2fb:	74 0a                	je     86be307 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x109>
 86be2fd:	bb 00 00 00 00       	mov    $0x0,%ebx
 86be302:	e9 67 05 00 00       	jmp    86be86e <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x670>
 86be307:	0f b6 85 60 fc ff ff 	movzbl -0x3a0(%ebp),%eax
 86be30e:	0f be d0             	movsbl %al,%edx
 86be311:	0f b6 85 60 fc ff ff 	movzbl -0x3a0(%ebp),%eax
 86be318:	0f be c8             	movsbl %al,%ecx
 86be31b:	8b 45 08             	mov    0x8(%ebp),%eax
 86be31e:	83 c1 6c             	add    $0x6c,%ecx
 86be321:	d9 44 88 0c          	flds   0xc(%eax,%ecx,4)
 86be325:	d9 85 80 fc ff ff    	flds   -0x380(%ebp)
 86be32b:	de c1                	faddp  %st,%st(1)
 86be32d:	8b 45 08             	mov    0x8(%ebp),%eax
 86be330:	83 c2 6c             	add    $0x6c,%edx
 86be333:	d9 5c 90 0c          	fstps  0xc(%eax,%edx,4)
 86be337:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86be33e:	e9 47 03 00 00       	jmp    86be68a <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x48c>
 86be343:	8b 55 d0             	mov    -0x30(%ebp),%edx
 86be346:	8b 45 08             	mov    0x8(%ebp),%eax
 86be349:	83 c2 48             	add    $0x48,%edx
 86be34c:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be350:	85 c0                	test   %eax,%eax
 86be352:	0f 84 2d 03 00 00    	je     86be685 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x487>
 86be358:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 86be35c:	74 19                	je     86be377 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x179>
 86be35e:	8b 55 d0             	mov    -0x30(%ebp),%edx
 86be361:	8b 45 08             	mov    0x8(%ebp),%eax
 86be364:	83 c2 48             	add    $0x48,%edx
 86be367:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be36b:	3b 45 14             	cmp    0x14(%ebp),%eax
 86be36e:	75 07                	jne    86be377 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x179>
 86be370:	b8 01 00 00 00       	mov    $0x1,%eax
 86be375:	eb 05                	jmp    86be37c <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x17e>
 86be377:	b8 00 00 00 00       	mov    $0x0,%eax
 86be37c:	88 45 d7             	mov    %al,-0x29(%ebp)
 86be37f:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 86be383:	74 62                	je     86be3e7 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x1e9>
 86be385:	8b 8d 70 fc ff ff    	mov    -0x390(%ebp),%ecx
 86be38b:	0f b6 85 60 fc ff ff 	movzbl -0x3a0(%ebp),%eax
 86be392:	0f be d0             	movsbl %al,%edx
 86be395:	8b 45 14             	mov    0x14(%ebp),%eax
 86be398:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86be39c:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 86be39f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86be3a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be3a7:	89 04 24             	mov    %eax,(%esp)
 86be3aa:	e8 15 76 f8 ff       	call   86459c4 <_ZN15CUserCharacInfo11WarAreaKillEiif>
 86be3af:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 86be3b6:	8b 9d 64 fc ff ff    	mov    -0x39c(%ebp),%ebx
 86be3bc:	8b 45 08             	mov    0x8(%ebp),%eax
 86be3bf:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86be3c5:	89 04 24             	mov    %eax,(%esp)
 86be3c8:	e8 23 f9 a3 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 86be3cd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86be3d0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86be3d4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86be3d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be3dc:	8b 45 14             	mov    0x14(%ebp),%eax
 86be3df:	89 04 24             	mov    %eax,(%esp)
 86be3e2:	e8 1d e7 fa ff       	call   866cb04 <_ZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPE>
 86be3e7:	d9 85 70 fc ff ff    	flds   -0x390(%ebp)
 86be3ed:	8b 45 08             	mov    0x8(%ebp),%eax
 86be3f0:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86be3f6:	0f b6 95 60 fc ff ff 	movzbl -0x3a0(%ebp),%edx
 86be3fd:	0f be d2             	movsbl %dl,%edx
 86be400:	81 c2 e0 01 00 00    	add    $0x1e0,%edx
 86be406:	8b 44 90 10          	mov    0x10(%eax,%edx,4),%eax
 86be40a:	89 85 54 fc ff ff    	mov    %eax,-0x3ac(%ebp)
 86be410:	db 85 54 fc ff ff    	fildl  -0x3ac(%ebp)
 86be416:	de c9                	fmulp  %st,%st(1)
 86be418:	d9 bd 52 fc ff ff    	fnstcw -0x3ae(%ebp)
 86be41e:	0f b7 85 52 fc ff ff 	movzwl -0x3ae(%ebp),%eax
 86be425:	b4 0c                	mov    $0xc,%ah
 86be427:	66 89 85 50 fc ff ff 	mov    %ax,-0x3b0(%ebp)
 86be42e:	d9 ad 50 fc ff ff    	fldcw  -0x3b0(%ebp)
 86be434:	df bd 48 fc ff ff    	fistpll -0x3b8(%ebp)
 86be43a:	d9 ad 52 fc ff ff    	fldcw  -0x3ae(%ebp)
 86be440:	8b 85 48 fc ff ff    	mov    -0x3b8(%ebp),%eax
 86be446:	8b 95 4c fc ff ff    	mov    -0x3b4(%ebp),%edx
 86be44c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86be44f:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 86be453:	74 68                	je     86be4bd <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x2bf>
 86be455:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86be458:	ba 00 00 00 00       	mov    $0x0,%edx
 86be45d:	89 85 48 fc ff ff    	mov    %eax,-0x3b8(%ebp)
 86be463:	89 95 4c fc ff ff    	mov    %edx,-0x3b4(%ebp)
 86be469:	df ad 48 fc ff ff    	fildll -0x3b8(%ebp)
 86be46f:	d9 9d 44 fc ff ff    	fstps  -0x3bc(%ebp)
 86be475:	e8 21 dd a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86be47a:	d9 80 f0 88 00 00    	flds   0x88f0(%eax)
 86be480:	d8 8d 44 fc ff ff    	fmuls  -0x3bc(%ebp)
 86be486:	d9 bd 52 fc ff ff    	fnstcw -0x3ae(%ebp)
 86be48c:	0f b7 85 52 fc ff ff 	movzwl -0x3ae(%ebp),%eax
 86be493:	b4 0c                	mov    $0xc,%ah
 86be495:	66 89 85 50 fc ff ff 	mov    %ax,-0x3b0(%ebp)
 86be49c:	d9 ad 50 fc ff ff    	fldcw  -0x3b0(%ebp)
 86be4a2:	df bd 48 fc ff ff    	fistpll -0x3b8(%ebp)
 86be4a8:	d9 ad 52 fc ff ff    	fldcw  -0x3ae(%ebp)
 86be4ae:	8b 85 48 fc ff ff    	mov    -0x3b8(%ebp),%eax
 86be4b4:	8b 95 4c fc ff ff    	mov    -0x3b4(%ebp),%edx
 86be4ba:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86be4bd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86be4c0:	89 04 24             	mov    %eax,(%esp)
 86be4c3:	e8 dc 77 fd ff       	call   8695ca4 <_ZN19ExpBonusPointResultC1Ev>
 86be4c8:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 86be4cc:	74 1d                	je     86be4eb <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x2ed>
 86be4ce:	8b 45 14             	mov    0x14(%ebp),%eax
 86be4d1:	89 04 24             	mov    %eax,(%esp)
 86be4d4:	e8 83 07 fd ff       	call   868ec5c <_ZN15CUserCharacInfo15checkBonusPointEv>
 86be4d9:	8b 45 14             	mov    0x14(%ebp),%eax
 86be4dc:	8d 55 ac             	lea    -0x54(%ebp),%edx
 86be4df:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be4e3:	89 04 24             	mov    %eax,(%esp)
 86be4e6:	e8 65 09 fd ff       	call   868ee50 <_ZN15CUserCharacInfo16getExpBonusPointER19ExpBonusPointResult>
 86be4eb:	8b 45 ac             	mov    -0x54(%ebp),%eax
 86be4ee:	03 45 d8             	add    -0x28(%ebp),%eax
 86be4f1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86be4f4:	db 45 dc             	fildl  -0x24(%ebp)
 86be4f7:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86be4fa:	89 85 54 fc ff ff    	mov    %eax,-0x3ac(%ebp)
 86be500:	db 85 54 fc ff ff    	fildl  -0x3ac(%ebp)
 86be506:	d9 05 04 a7 cf 08    	flds   0x8cfa704
 86be50c:	de f9                	fdivrp %st,%st(1)
 86be50e:	de c9                	fmulp  %st,%st(1)
 86be510:	d9 bd 52 fc ff ff    	fnstcw -0x3ae(%ebp)
 86be516:	0f b7 85 52 fc ff ff 	movzwl -0x3ae(%ebp),%eax
 86be51d:	b4 0c                	mov    $0xc,%ah
 86be51f:	66 89 85 50 fc ff ff 	mov    %ax,-0x3b0(%ebp)
 86be526:	d9 ad 50 fc ff ff    	fldcw  -0x3b0(%ebp)
 86be52c:	db 9d 54 fc ff ff    	fistpl -0x3ac(%ebp)
 86be532:	d9 ad 52 fc ff ff    	fldcw  -0x3ae(%ebp)
 86be538:	8b 85 54 fc ff ff    	mov    -0x3ac(%ebp),%eax
 86be53e:	03 45 dc             	add    -0x24(%ebp),%eax
 86be541:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86be544:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86be547:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 86be54a:	8b 45 08             	mov    0x8(%ebp),%eax
 86be54d:	83 c1 48             	add    $0x48,%ecx
 86be550:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86be554:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be558:	89 04 24             	mov    %eax,(%esp)
 86be55b:	e8 a8 14 f9 ff       	call   864fa08 <_ZN5CUser20gainExpAsUpperMemberEi>
 86be560:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86be563:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86be566:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 86be569:	8b 45 08             	mov    0x8(%ebp),%eax
 86be56c:	83 c1 48             	add    $0x48,%ecx
 86be56f:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86be573:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be577:	89 04 24             	mov    %eax,(%esp)
 86be57a:	e8 bb 15 f9 ff       	call   864fb3a <_ZN5CUser17gainGuildSkillExpEi>
 86be57f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86be582:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 86be589:	8b 55 d0             	mov    -0x30(%ebp),%edx
 86be58c:	8b 45 08             	mov    0x8(%ebp),%eax
 86be58f:	83 c2 48             	add    $0x48,%edx
 86be592:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be596:	89 04 24             	mov    %eax,(%esp)
 86be599:	e8 8e 9f de ff       	call   84a852c <_ZNK15CUserCharacInfo30getCurCharacFatigueGrownUpBuffEv>
 86be59e:	66 85 c0             	test   %ax,%ax
 86be5a1:	0f 95 c0             	setne  %al
 86be5a4:	84 c0                	test   %al,%al
 86be5a6:	74 22                	je     86be5ca <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x3cc>
 86be5a8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86be5ab:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86be5ae:	8b 55 d0             	mov    -0x30(%ebp),%edx
 86be5b1:	8b 45 08             	mov    0x8(%ebp),%eax
 86be5b4:	83 c2 48             	add    $0x48,%edx
 86be5b7:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be5bb:	8b 55 e8             	mov    -0x18(%ebp),%edx
 86be5be:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be5c2:	89 04 24             	mov    %eax,(%esp)
 86be5c5:	e8 38 b4 da ff       	call   8469a02 <_ZN15CUserCharacInfo32set_charac_fatigue_buf_bonus_expEi>
 86be5ca:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86be5cd:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 86be5d0:	8b 45 08             	mov    0x8(%ebp),%eax
 86be5d3:	83 c1 48             	add    $0x48,%ecx
 86be5d6:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86be5da:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be5de:	89 04 24             	mov    %eax,(%esp)
 86be5e1:	e8 4e 16 f9 ff       	call   864fc34 <_ZN5CUser21gainPowerWarRewardExpEi>
 86be5e6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86be5e9:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 86be5f0:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 86be5f7:	8b 8d 64 fc ff ff    	mov    -0x39c(%ebp),%ecx
 86be5fd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86be600:	89 c2                	mov    %eax,%edx
 86be602:	03 55 d8             	add    -0x28(%ebp),%edx
 86be605:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86be608:	01 c2                	add    %eax,%edx
 86be60a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86be60d:	01 c2                	add    %eax,%edx
 86be60f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86be612:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86be615:	89 c2                	mov    %eax,%edx
 86be617:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 86be61a:	8b 45 08             	mov    0x8(%ebp),%eax
 86be61d:	83 c3 48             	add    $0x48,%ebx
 86be620:	8b 44 98 0c          	mov    0xc(%eax,%ebx,4),%eax
 86be624:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86be62b:	00 
 86be62c:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86be630:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 86be637:	00 
 86be638:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 86be63b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86be63f:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 86be642:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86be646:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be64a:	89 04 24             	mov    %eax,(%esp)
 86be64d:	e8 ac bd fa ff       	call   866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>
 86be652:	84 c0                	test   %al,%al
 86be654:	74 30                	je     86be686 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x488>
 86be656:	8b 55 d0             	mov    -0x30(%ebp),%edx
 86be659:	8b 45 08             	mov    0x8(%ebp),%eax
 86be65c:	83 c2 48             	add    $0x48,%edx
 86be65f:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be663:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86be66a:	00 
 86be66b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 86be672:	00 
 86be673:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86be67a:	00 
 86be67b:	89 04 24             	mov    %eax,(%esp)
 86be67e:	e8 d9 d3 fb ff       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 86be683:	eb 01                	jmp    86be686 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x488>
 86be685:	90                   	nop
 86be686:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 86be68a:	83 7d d0 05          	cmpl   $0x5,-0x30(%ebp)
 86be68e:	0f 9e c0             	setle  %al
 86be691:	84 c0                	test   %al,%al
 86be693:	0f 85 aa fc ff ff    	jne    86be343 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x145>
 86be699:	66 c7 45 ca ff ff    	movw   $0xffff,-0x36(%ebp)
 86be69f:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 86be6a3:	74 0f                	je     86be6b4 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x4b6>
 86be6a5:	8b 45 14             	mov    0x14(%ebp),%eax
 86be6a8:	89 04 24             	mov    %eax,(%esp)
 86be6ab:	e8 cc bc a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86be6b0:	66 89 45 ca          	mov    %ax,-0x36(%ebp)
 86be6b4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86be6bb:	00 
 86be6bc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86be6bf:	89 04 24             	mov    %eax,(%esp)
 86be6c2:	e8 59 d2 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86be6c7:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 86be6cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be6cf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86be6d2:	89 04 24             	mov    %eax,(%esp)
 86be6d5:	e8 ca b7 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86be6da:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86be6dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be6e1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86be6e4:	89 04 24             	mov    %eax,(%esp)
 86be6e7:	e8 b8 b7 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86be6ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86be6f3:	00 
 86be6f4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86be6f7:	89 04 24             	mov    %eax,(%esp)
 86be6fa:	e8 59 d2 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86be6ff:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86be702:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be706:	8b 45 08             	mov    0x8(%ebp),%eax
 86be709:	89 04 24             	mov    %eax,(%esp)
 86be70c:	e8 bb f9 ff ff       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86be711:	8b 45 08             	mov    0x8(%ebp),%eax
 86be714:	83 c0 34             	add    $0x34,%eax
 86be717:	89 04 24             	mov    %eax,(%esp)
 86be71a:	e8 2d ae ff ff       	call   86b954c <_ZN8WarField11IsGridClearEv>
 86be71f:	84 c0                	test   %al,%al
 86be721:	0f 84 2b 01 00 00    	je     86be852 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x654>
 86be727:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86be72e:	e9 b2 00 00 00       	jmp    86be7e5 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x5e7>
 86be733:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86be736:	8b 45 08             	mov    0x8(%ebp),%eax
 86be739:	83 c2 48             	add    $0x48,%edx
 86be73c:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be740:	85 c0                	test   %eax,%eax
 86be742:	0f 84 98 00 00 00    	je     86be7e0 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x5e2>
 86be748:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86be74b:	8b 45 08             	mov    0x8(%ebp),%eax
 86be74e:	83 c2 48             	add    $0x48,%edx
 86be751:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be755:	8b 80 8c e0 08 00    	mov    0x8e08c(%eax),%eax
 86be75b:	85 c0                	test   %eax,%eax
 86be75d:	7e 68                	jle    86be7c7 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x5c9>
 86be75f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86be762:	8b 45 08             	mov    0x8(%ebp),%eax
 86be765:	83 c2 48             	add    $0x48,%edx
 86be768:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be76c:	89 04 24             	mov    %eax,(%esp)
 86be76f:	e8 0a bb a1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86be774:	89 04 24             	mov    %eax,(%esp)
 86be777:	e8 8c 8c af ff       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 86be77c:	89 04 24             	mov    %eax,(%esp)
 86be77f:	e8 38 f7 c7 ff       	call   833debc <_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv>
 86be784:	83 f0 01             	xor    $0x1,%eax
 86be787:	84 c0                	test   %al,%al
 86be789:	74 3c                	je     86be7c7 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x5c9>
 86be78b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86be78e:	8b 45 08             	mov    0x8(%ebp),%eax
 86be791:	83 c2 48             	add    $0x48,%edx
 86be794:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be798:	8b 98 8c e0 08 00    	mov    0x8e08c(%eax),%ebx
 86be79e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86be7a1:	8b 45 08             	mov    0x8(%ebp),%eax
 86be7a4:	83 c2 48             	add    $0x48,%edx
 86be7a7:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be7ab:	89 04 24             	mov    %eax,(%esp)
 86be7ae:	e8 db ba a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86be7b3:	89 04 24             	mov    %eax,(%esp)
 86be7b6:	e8 ad ed a1 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 86be7bb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86be7bf:	89 04 24             	mov    %eax,(%esp)
 86be7c2:	e8 3f b3 c7 ff       	call   8339b06 <_ZN13user_creature12CCreatureMgr7GainExpEi>
 86be7c7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86be7ca:	8b 45 08             	mov    0x8(%ebp),%eax
 86be7cd:	83 c2 48             	add    $0x48,%edx
 86be7d0:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be7d4:	c7 80 8c e0 08 00 00 	movl   $0x0,0x8e08c(%eax)
 86be7db:	00 00 00 
 86be7de:	eb 01                	jmp    86be7e1 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x5e3>
 86be7e0:	90                   	nop
 86be7e1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86be7e5:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86be7e9:	0f 9e c0             	setle  %al
 86be7ec:	84 c0                	test   %al,%al
 86be7ee:	0f 85 3f ff ff ff    	jne    86be733 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x535>
 86be7f4:	c7 44 24 04 45 00 00 	movl   $0x45,0x4(%esp)
 86be7fb:	00 
 86be7fc:	8b 45 08             	mov    0x8(%ebp),%eax
 86be7ff:	89 04 24             	mov    %eax,(%esp)
 86be802:	e8 1d 23 00 00       	call   86c0b24 <_ZN7WarRoom11GenTimerKeyE13TIMER_MESSAGE>
 86be807:	8b 45 08             	mov    0x8(%ebp),%eax
 86be80a:	8b 90 28 01 00 00    	mov    0x128(%eax),%edx
 86be810:	8b 45 08             	mov    0x8(%ebp),%eax
 86be813:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86be819:	8b 80 44 07 00 00    	mov    0x744(%eax),%eax
 86be81f:	39 c2                	cmp    %eax,%edx
 86be821:	75 1c                	jne    86be83f <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x641>
 86be823:	8b 45 08             	mov    0x8(%ebp),%eax
 86be826:	c6 40 12 01          	movb   $0x1,0x12(%eax)
 86be82a:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 86be831:	00 
 86be832:	8b 45 08             	mov    0x8(%ebp),%eax
 86be835:	89 04 24             	mov    %eax,(%esp)
 86be838:	e8 ff cc ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86be83d:	eb 13                	jmp    86be852 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x654>
 86be83f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86be846:	00 
 86be847:	8b 45 08             	mov    0x8(%ebp),%eax
 86be84a:	89 04 24             	mov    %eax,(%esp)
 86be84d:	e8 ea cc ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86be852:	bb 01 00 00 00       	mov    $0x1,%ebx
 86be857:	eb 15                	jmp    86be86e <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x670>
 86be859:	89 d3                	mov    %edx,%ebx
 86be85b:	89 c6                	mov    %eax,%esi
 86be85d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86be860:	89 04 24             	mov    %eax,(%esp)
 86be863:	e8 18 f6 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86be868:	89 f0                	mov    %esi,%eax
 86be86a:	89 da                	mov    %ebx,%edx
 86be86c:	eb 0d                	jmp    86be87b <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x67d>
 86be86e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86be871:	89 04 24             	mov    %eax,(%esp)
 86be874:	e8 07 f6 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86be879:	eb 1e                	jmp    86be899 <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_+0x69b>
 86be87b:	89 d3                	mov    %edx,%ebx
 86be87d:	89 c6                	mov    %eax,%esi
 86be87f:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 86be885:	89 04 24             	mov    %eax,(%esp)
 86be888:	e8 21 2d a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86be88d:	89 f0                	mov    %esi,%eax
 86be88f:	89 da                	mov    %ebx,%edx
 86be891:	89 04 24             	mov    %eax,(%esp)
 86be894:	e8 b7 4e 42 00       	call   8ae3750 <_Unwind_Resume>
 86be899:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 86be89f:	89 04 24             	mov    %eax,(%esp)
 86be8a2:	e8 07 2d a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86be8a7:	89 d8                	mov    %ebx,%eax
 86be8a9:	81 c4 e0 03 00 00    	add    $0x3e0,%esp
 86be8af:	5b                   	pop    %ebx
 86be8b0:	5e                   	pop    %esi
 86be8b1:	5d                   	pop    %ebp
 86be8b2:	c3                   	ret
 86be8b3:	90                   	nop

```

```c
// WarRoom::HandleMonsterKill @ 0x86be1fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarRoom::HandleMonsterKill(CUser*, int, CUser*) */

undefined4 __thiscall
WarRoom::HandleMonsterKill(WarRoom *this,CUser *param_1,int param_2,CUser *param_3)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  CInventory *pCVar5;
  CCreatureMgr *pCVar6;
  undefined4 uVar7;
  ulonglong local_3bc;
  map_monster local_3ac [8];
  char local_3a4;
  undefined4 local_3a0;
  float local_394;
  float local_384;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  PacketGuard local_50 [12];
  int local_44;
  int local_40;
  ushort local_3a;
  int local_38;
  int local_34;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  map_monster::map_monster(local_3ac);
                    /* try { // try from 086be21d to 086be221 has its CatchHandler @ 086be87b */
  PacketGuard::PacketGuard(local_50);
  local_44 = GetWaiterCount(this);
  if (local_44 == 0) {
    uVar7 = 0;
  }
  else {
    local_40 = 0;
    for (local_38 = 0; local_38 < 6; local_38 = local_38 + 1) {
      if (((*(int *)(this + (local_38 + 0x48) * 4 + 0xc) != 0) && (param_3 != (CUser *)0x0)) &&
         (*(CUser **)(this + (local_38 + 0x48) * 4 + 0xc) == param_3)) {
                    /* try { // try from 086be2a2 to 086be851 has its CatchHandler @ 086be859 */
        local_40 = WarField::HandleWpPerMonster
                             ((WarField *)(this + 0x34),param_3,param_2,0,local_3ac);
      }
    }
    cVar1 = WarField::HandleMonsterKill
                      ((WarField *)(this + 0x34),param_2,local_50,local_3ac,param_3,
                       *(CDungeon **)(this + 0x1d0));
    if (cVar1 == '\x01') {
      *(float *)(this + (local_3a4 + 0x6c) * 4 + 0xc) =
           local_384 + *(float *)(this + (local_3a4 + 0x6c) * 4 + 0xc);
      for (local_34 = 0; local_34 < 6; local_34 = local_34 + 1) {
        if (*(int *)(this + (local_34 + 0x48) * 4 + 0xc) != 0) {
          if ((param_3 == (CUser *)0x0) ||
             (*(CUser **)(this + (local_34 + 0x48) * 4 + 0xc) != param_3)) {
            local_2d = '\0';
          }
          else {
            local_2d = '\x01';
          }
          if (local_2d != '\0') {
            CUserCharacInfo::WarAreaKill
                      ((CUserCharacInfo *)param_3,(int)local_3a4,local_40,local_394);
            uVar7 = local_3a0;
            local_14 = 1;
            uVar3 = CDungeon::get_index(*(CDungeon **)(this + 0x1d0));
            CUser::CheckQuestMonster(param_3,uVar3,uVar7,local_14);
          }
          local_3bc = (ulonglong)
                      ROUND((float)*(int *)(*(int *)(this + 0x1d0) + 0x10 + (local_3a4 + 0x1e0) * 4)
                            * local_394);
          local_2c = (int)local_3bc;
          if (local_2d != '\0') {
            local_3bc = local_3bc & 0xffffffff;
            iVar4 = G_CDataManager();
            local_3bc._0_4_ = (int)(longlong)ROUND(*(float *)(iVar4 + 0x88f0) * (float)local_3bc);
            local_2c = (int)local_3bc;
          }
          ExpBonusPointResult::ExpBonusPointResult((ExpBonusPointResult *)&local_58);
          if (local_2d != '\0') {
            CUserCharacInfo::checkBonusPoint((CUserCharacInfo *)param_3);
            CUserCharacInfo::getExpBonusPoint
                      ((CUserCharacInfo *)param_3,(ExpBonusPointResult *)&local_58);
          }
          local_28 = local_58 + local_2c;
          local_2c = (int)ROUND(((float)local_54 / _DAT_08cfa704) * (float)local_28) + local_28;
          local_24 = CUser::gainExpAsUpperMember
                               (*(CUser **)(this + (local_34 + 0x48) * 4 + 0xc),local_2c);
          local_20 = CUser::gainGuildSkillExp
                               (*(CUser **)(this + (local_34 + 0x48) * 4 + 0xc),local_2c);
          local_1c = 0;
          sVar2 = CUserCharacInfo::getCurCharacFatigueGrownUpBuff
                            (*(CUserCharacInfo **)(this + (local_34 + 0x48) * 4 + 0xc));
          if (sVar2 != 0) {
            local_1c = local_2c;
            CUserCharacInfo::set_charac_fatigue_buf_bonus_exp
                      (*(CUserCharacInfo **)(this + (local_34 + 0x48) * 4 + 0xc),local_2c);
          }
          local_18 = CUser::gainPowerWarRewardExp(*(int *)(this + (local_34 + 0x48) * 4 + 0xc));
          local_5c = 0;
          local_60 = 0;
          cVar1 = CUser::gain_exp_sp(*(CUser **)(this + (local_34 + 0x48) * 4 + 0xc),
                                     local_24 + local_2c + local_20 + local_18 + local_1c,&local_5c,
                                     &local_60,4,local_3a0,0);
          if (cVar1 != '\0') {
            CUser::SendNotiPacket(*(CUser **)(this + (local_34 + 0x48) * 4 + 0xc),3,2,1);
          }
        }
      }
      local_3a = 0xffff;
      if (param_3 != (CUser *)0x0) {
        local_3a = CUser::get_unique_id(param_3);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,(uint)local_3a);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,local_40);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      SendToRoom(this,local_50);
      cVar1 = WarField::IsGridClear((WarField *)(this + 0x34));
      if (cVar1 != '\0') {
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
            if (0 < *(int *)(*(int *)(this + (local_10 + 0x48) * 4 + 0xc) + 0x8e08c)) {
              pCVar5 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenR
                                 (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
              pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar5);
              cVar1 = user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature(pCVar6);
              if (cVar1 != '\x01') {
                iVar4 = *(int *)(*(int *)(this + (local_10 + 0x48) * 4 + 0xc) + 0x8e08c);
                pCVar5 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
                pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar5);
                user_creature::CCreatureMgr::GainExp(pCVar6,iVar4);
              }
            }
            *(undefined4 *)(*(int *)(this + (local_10 + 0x48) * 4 + 0xc) + 0x8e08c) = 0;
          }
        }
        GenTimerKey(this,0x45);
        if (*(int *)(this + 0x128) == *(int *)(*(int *)(this + 0x1d0) + 0x744)) {
          this[0x12] = (WarRoom)0x1;
          ChangeState(this,5);
        }
        else {
          ChangeState(this,4);
        }
      }
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
  }
                    /* try { // try from 086be874 to 086be878 has its CatchHandler @ 086be87b */
  PacketGuard::~PacketGuard(local_50);
  map_monster::~map_monster(local_3ac);
  return uVar7;
}

```

---

## HandleSetSeatState

```asm
// === 086bf484 WarRoom::HandleSetSeatState  [0x086bf484-0x86bf5fb] ===
 86bf484:	55                   	push   %ebp
 86bf485:	89 e5                	mov    %esp,%ebp
 86bf487:	56                   	push   %esi
 86bf488:	53                   	push   %ebx
 86bf489:	83 ec 40             	sub    $0x40,%esp
 86bf48c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bf48f:	89 04 24             	mov    %eax,(%esp)
 86bf492:	e8 b5 e8 ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bf497:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bf49e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 86bf4a5:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 86bf4a9:	c6 45 e2 00          	movb   $0x0,-0x1e(%ebp)
 86bf4ad:	c6 45 e1 00          	movb   $0x0,-0x1f(%ebp)
 86bf4b1:	8d 45 e1             	lea    -0x1f(%ebp),%eax
 86bf4b4:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 86bf4b8:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 86bf4bb:	89 44 24 18          	mov    %eax,0x18(%esp)
 86bf4bf:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 86bf4c2:	89 44 24 14          	mov    %eax,0x14(%esp)
 86bf4c6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86bf4c9:	89 44 24 10          	mov    %eax,0x10(%esp)
 86bf4cd:	8b 45 14             	mov    0x14(%ebp),%eax
 86bf4d0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86bf4d4:	8b 45 10             	mov    0x10(%ebp),%eax
 86bf4d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bf4db:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf4de:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf4e2:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf4e5:	89 04 24             	mov    %eax,(%esp)
 86bf4e8:	e8 0b dc ff ff       	call   86bd0f8 <_ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_>
 86bf4ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86bf4f0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86bf4f4:	75 67                	jne    86bf55d <_ZN7WarRoom18HandleSetSeatStateEP5CUseri15ENUM_SEAT_STATE+0xd9>
 86bf4f6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86bf4f9:	85 c0                	test   %eax,%eax
 86bf4fb:	74 14                	je     86bf511 <_ZN7WarRoom18HandleSetSeatStateEP5CUseri15ENUM_SEAT_STATE+0x8d>
 86bf4fd:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 86bf500:	e8 a2 ae a1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86bf505:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86bf509:	89 04 24             	mov    %eax,(%esp)
 86bf50c:	e8 41 7f 00 00       	call   86c7452 <_ZN9GameWorld16out_from_warroomEP5CUser>
 86bf511:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 86bf515:	84 c0                	test   %al,%al
 86bf517:	74 38                	je     86bf551 <_ZN7WarRoom18HandleSetSeatStateEP5CUseri15ENUM_SEAT_STATE+0xcd>
 86bf519:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bf51c:	89 04 24             	mov    %eax,(%esp)
 86bf51f:	e8 c2 c3 a0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86bf524:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bf527:	8b 55 10             	mov    0x10(%ebp),%edx
 86bf52a:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bf52e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf532:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf535:	89 04 24             	mov    %eax,(%esp)
 86bf538:	e8 63 e9 ff ff       	call   86bdea0 <_ZN7WarRoom12MakeSlotInfoEPci>
 86bf53d:	e8 65 ae a1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86bf542:	8d 55 e8             	lea    -0x18(%ebp),%edx
 86bf545:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bf549:	89 04 24             	mov    %eax,(%esp)
 86bf54c:	e8 c3 96 00 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 86bf551:	0f b6 45 e1          	movzbl -0x1f(%ebp),%eax
 86bf555:	84 c0                	test   %al,%al
 86bf557:	0f 85 8c 00 00 00    	jne    86bf5e9 <_ZN7WarRoom18HandleSetSeatStateEP5CUseri15ENUM_SEAT_STATE+0x165>
 86bf55d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86bf561:	0f 8e 82 00 00 00    	jle    86bf5e9 <_ZN7WarRoom18HandleSetSeatStateEP5CUseri15ENUM_SEAT_STATE+0x165>
 86bf567:	c7 44 24 08 5e 00 00 	movl   $0x5e,0x8(%esp)
 86bf56e:	00 
 86bf56f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bf576:	00 
 86bf577:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bf57a:	89 04 24             	mov    %eax,(%esp)
 86bf57d:	e8 7a c3 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bf582:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bf589:	00 
 86bf58a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bf58d:	89 04 24             	mov    %eax,(%esp)
 86bf590:	e8 8b c3 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bf595:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bf598:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf59c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bf59f:	89 04 24             	mov    %eax,(%esp)
 86bf5a2:	e8 79 c3 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bf5a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bf5ae:	00 
 86bf5af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bf5b2:	89 04 24             	mov    %eax,(%esp)
 86bf5b5:	e8 9e c3 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bf5ba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bf5bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf5c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf5c4:	89 04 24             	mov    %eax,(%esp)
 86bf5c7:	e8 ee 8f f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86bf5cc:	eb 1b                	jmp    86bf5e9 <_ZN7WarRoom18HandleSetSeatStateEP5CUseri15ENUM_SEAT_STATE+0x165>
 86bf5ce:	89 d3                	mov    %edx,%ebx
 86bf5d0:	89 c6                	mov    %eax,%esi
 86bf5d2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bf5d5:	89 04 24             	mov    %eax,(%esp)
 86bf5d8:	e8 a3 e8 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bf5dd:	89 f0                	mov    %esi,%eax
 86bf5df:	89 da                	mov    %ebx,%edx
 86bf5e1:	89 04 24             	mov    %eax,(%esp)
 86bf5e4:	e8 67 41 42 00       	call   8ae3750 <_Unwind_Resume>
 86bf5e9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bf5ec:	89 04 24             	mov    %eax,(%esp)
 86bf5ef:	e8 8c e8 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bf5f4:	83 c4 40             	add    $0x40,%esp
 86bf5f7:	5b                   	pop    %ebx
 86bf5f8:	5e                   	pop    %esi
 86bf5f9:	5d                   	pop    %ebp
 86bf5fa:	c3                   	ret
 86bf5fb:	90                   	nop

```

```c
// WarRoom::HandleSetSeatState @ 0x86bf484

/* WarRoom::HandleSetSeatState(CUser*, int, ENUM_SEAT_STATE) */

void __thiscall
WarRoom::HandleSetSeatState(WarRoom *this,CUser *param_1,int param_2,undefined4 param_4)

{
  CUser *pCVar1;
  GameWorld *pGVar2;
  char local_23 [3];
  CUser *local_20;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
  local_10 = 0;
  local_20 = (CUser *)0x0;
  local_23[2] = '\0';
  local_23[1] = 0;
  local_23[0] = '\0';
                    /* try { // try from 086bf4e8 to 086bf5cb has its CatchHandler @ 086bf5ce */
  local_10 = SetSlotState(this,param_1,param_2,param_4,&local_20,local_23 + 2,local_23 + 1,local_23)
  ;
  pCVar1 = local_20;
  if (local_10 == 0) {
    if (local_20 != (CUser *)0x0) {
      pGVar2 = (GameWorld *)G_GameWorld();
      GameWorld::out_from_warroom(pGVar2,pCVar1);
    }
    if (local_23[2] != '\0') {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      MakeSlotInfo(this,(char *)local_1c,param_2);
      pGVar2 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar2,local_1c);
    }
    if (local_23[0] != '\0') goto LAB_086bf5e9;
  }
  if (0 < local_10) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x5e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
LAB_086bf5e9:
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## HandleTimerResultCount

```asm
// === 086c0404 WarRoom::HandleTimerResultCount  [0x086c0404-0x86c0511] ===
 86c0404:	55                   	push   %ebp
 86c0405:	89 e5                	mov    %esp,%ebp
 86c0407:	83 ec 28             	sub    $0x28,%esp
 86c040a:	8b 45 08             	mov    0x8(%ebp),%eax
 86c040d:	89 04 24             	mov    %eax,(%esp)
 86c0410:	e8 4b c0 ff ff       	call   86bc460 <_ZN7WarRoom9ReviveAllEv>
 86c0415:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86c041c:	e9 8d 00 00 00       	jmp    86c04ae <_ZN7WarRoom22HandleTimerResultCountEv+0xaa>
 86c0421:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c0424:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0427:	83 c2 48             	add    $0x48,%edx
 86c042a:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c042e:	85 c0                	test   %eax,%eax
 86c0430:	74 74                	je     86c04a6 <_ZN7WarRoom22HandleTimerResultCountEv+0xa2>
 86c0432:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c0435:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0438:	83 c2 60             	add    $0x60,%edx
 86c043b:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c043f:	85 c0                	test   %eax,%eax
 86c0441:	74 66                	je     86c04a9 <_ZN7WarRoom22HandleTimerResultCountEv+0xa5>
 86c0443:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c0446:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0449:	83 c2 48             	add    $0x48,%edx
 86c044c:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c0450:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0454:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0457:	89 04 24             	mov    %eax,(%esp)
 86c045a:	e8 e9 a4 ff ff       	call   86ba948 <_ZN7WarRoom10AddBanListEP5CUser>
 86c045f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c0462:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0465:	83 c2 48             	add    $0x48,%edx
 86c0468:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c046c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86c046f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86c0472:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0476:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0479:	89 04 24             	mov    %eax,(%esp)
 86c047c:	e8 d5 cd ff ff       	call   86bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>
 86c0481:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c0484:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0487:	83 c2 60             	add    $0x60,%edx
 86c048a:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c048e:	89 44 24 08          	mov    %eax,0x8(%esp)
 86c0492:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c0495:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0499:	8b 45 08             	mov    0x8(%ebp),%eax
 86c049c:	89 04 24             	mov    %eax,(%esp)
 86c049f:	e8 ae dc ff ff       	call   86be152 <_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE>
 86c04a4:	eb 04                	jmp    86c04aa <_ZN7WarRoom22HandleTimerResultCountEv+0xa6>
 86c04a6:	90                   	nop
 86c04a7:	eb 01                	jmp    86c04aa <_ZN7WarRoom22HandleTimerResultCountEv+0xa6>
 86c04a9:	90                   	nop
 86c04aa:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86c04ae:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 86c04b2:	0f 9e c0             	setle  %al
 86c04b5:	84 c0                	test   %al,%al
 86c04b7:	0f 85 64 ff ff ff    	jne    86c0421 <_ZN7WarRoom22HandleTimerResultCountEv+0x1d>
 86c04bd:	8b 45 08             	mov    0x8(%ebp),%eax
 86c04c0:	89 04 24             	mov    %eax,(%esp)
 86c04c3:	e8 c6 a5 ff ff       	call   86baa8e <_ZN7WarRoom11BattleResetEv>
 86c04c8:	8b 45 08             	mov    0x8(%ebp),%eax
 86c04cb:	89 04 24             	mov    %eax,(%esp)
 86c04ce:	e8 19 c0 ff ff       	call   86bc4ec <_ZN7WarRoom13CheckFatuigueEv>
 86c04d3:	8b 45 08             	mov    0x8(%ebp),%eax
 86c04d6:	89 04 24             	mov    %eax,(%esp)
 86c04d9:	e8 ee a6 ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86c04de:	83 f8 02             	cmp    $0x2,%eax
 86c04e1:	0f 9e c0             	setle  %al
 86c04e4:	84 c0                	test   %al,%al
 86c04e6:	74 15                	je     86c04fd <_ZN7WarRoom22HandleTimerResultCountEv+0xf9>
 86c04e8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c04ef:	00 
 86c04f0:	8b 45 08             	mov    0x8(%ebp),%eax
 86c04f3:	89 04 24             	mov    %eax,(%esp)
 86c04f6:	e8 41 b0 ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86c04fb:	eb 13                	jmp    86c0510 <_ZN7WarRoom22HandleTimerResultCountEv+0x10c>
 86c04fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c0504:	00 
 86c0505:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0508:	89 04 24             	mov    %eax,(%esp)
 86c050b:	e8 2c b0 ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86c0510:	c9                   	leave
 86c0511:	c3                   	ret

```

```c
// WarRoom::HandleTimerResultCount @ 0x86c0404

/* WarRoom::HandleTimerResultCount() */

void __thiscall WarRoom::HandleTimerResultCount(WarRoom *this)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  
  ReviveAll(this);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    if ((*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) &&
       (*(int *)(this + (local_14 + 0x60) * 4 + 0xc) != 0)) {
      AddBanList(this,*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc));
      uVar1 = *(undefined4 *)(this + (local_14 + 0x48) * 4 + 0xc);
      WalkOutUserBySlot(this,local_14);
      SendWalkOut(this,uVar1,*(undefined4 *)(this + (local_14 + 0x60) * 4 + 0xc));
    }
  }
  BattleReset(this);
  CheckFatuigue(this);
  iVar2 = GetWaiterCount(this);
  if (iVar2 < 3) {
    ChangeState(this,0);
  }
  else {
    ChangeState(this,1);
  }
  return;
}

```

---

## HandleTimerTimeBomb

```asm
// === 086c0512 WarRoom::HandleTimerTimeBomb  [0x086c0512-0x86c0573] ===
 86c0512:	55                   	push   %ebp
 86c0513:	89 e5                	mov    %esp,%ebp
 86c0515:	83 ec 18             	sub    $0x18,%esp
 86c0518:	8b 45 08             	mov    0x8(%ebp),%eax
 86c051b:	83 c0 48             	add    $0x48,%eax
 86c051e:	89 04 24             	mov    %eax,(%esp)
 86c0521:	e8 ea 1e a9 ff       	call   8152410 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5clearEv>
 86c0526:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0529:	c6 40 10 01          	movb   $0x1,0x10(%eax)
 86c052d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0530:	8b 90 28 01 00 00    	mov    0x128(%eax),%edx
 86c0536:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0539:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86c053f:	8b 80 44 07 00 00    	mov    0x744(%eax),%eax
 86c0545:	39 c2                	cmp    %eax,%edx
 86c0547:	75 15                	jne    86c055e <_ZN7WarRoom19HandleTimerTimeBombEv+0x4c>
 86c0549:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 86c0550:	00 
 86c0551:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0554:	89 04 24             	mov    %eax,(%esp)
 86c0557:	e8 e0 af ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86c055c:	eb 13                	jmp    86c0571 <_ZN7WarRoom19HandleTimerTimeBombEv+0x5f>
 86c055e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86c0565:	00 
 86c0566:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0569:	89 04 24             	mov    %eax,(%esp)
 86c056c:	e8 cb af ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86c0571:	c9                   	leave
 86c0572:	c3                   	ret
 86c0573:	90                   	nop

```

```c
// WarRoom::HandleTimerTimeBomb @ 0x86c0512

/* WarRoom::HandleTimerTimeBomb() */

void __thiscall WarRoom::HandleTimerTimeBomb(WarRoom *this)

{
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::clear
            ((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> *
             )(this + 0x48));
  this[0x10] = (WarRoom)0x1;
  if (*(int *)(this + 0x128) == *(int *)(*(int *)(this + 0x1d0) + 0x744)) {
    ChangeState(this,5);
  }
  else {
    ChangeState(this,4);
  }
  return;
}

```

---

## HandleWpPerMonster

```asm
// === 086c0574 WarRoom::HandleWpPerMonster  [0x086c0574-0x86c077d] ===
 86c0574:	55                   	push   %ebp
 86c0575:	89 e5                	mov    %esp,%ebp
 86c0577:	56                   	push   %esi
 86c0578:	53                   	push   %ebx
 86c0579:	81 ec 90 03 00 00    	sub    $0x390,%esp
 86c057f:	8d 85 8c fc ff ff    	lea    -0x374(%ebp),%eax
 86c0585:	89 04 24             	mov    %eax,(%esp)
 86c0588:	e8 3b 0c a9 ff       	call   81511c8 <_ZN11map_monsterC1Ev>
 86c058d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0590:	89 04 24             	mov    %eax,(%esp)
 86c0593:	e8 34 a6 ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86c0598:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86c059b:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 86c059f:	75 0a                	jne    86c05ab <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0x37>
 86c05a1:	bb 03 00 00 00       	mov    $0x3,%ebx
 86c05a6:	e9 b9 01 00 00       	jmp    86c0764 <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0x1f0>
 86c05ab:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 86c05b2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86c05b9:	e9 a3 00 00 00       	jmp    86c0661 <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0xed>
 86c05be:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c05c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86c05c4:	83 c2 48             	add    $0x48,%edx
 86c05c7:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c05cb:	85 c0                	test   %eax,%eax
 86c05cd:	0f 84 89 00 00 00    	je     86c065c <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0xe8>
 86c05d3:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 86c05d7:	74 19                	je     86c05f2 <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0x7e>
 86c05d9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c05dc:	8b 45 08             	mov    0x8(%ebp),%eax
 86c05df:	83 c2 48             	add    $0x48,%edx
 86c05e2:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c05e6:	3b 45 18             	cmp    0x18(%ebp),%eax
 86c05e9:	75 07                	jne    86c05f2 <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0x7e>
 86c05eb:	b8 01 00 00 00       	mov    $0x1,%eax
 86c05f0:	eb 05                	jmp    86c05f7 <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0x83>
 86c05f2:	b8 00 00 00 00       	mov    $0x0,%eax
 86c05f7:	88 45 f7             	mov    %al,-0x9(%ebp)
 86c05fa:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 86c05fe:	74 5d                	je     86c065d <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0xe9>
 86c0600:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0603:	8d 50 34             	lea    0x34(%eax),%edx
 86c0606:	8d 85 8c fc ff ff    	lea    -0x374(%ebp),%eax
 86c060c:	89 44 24 10          	mov    %eax,0x10(%esp)
 86c0610:	8b 45 14             	mov    0x14(%ebp),%eax
 86c0613:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86c0617:	8b 45 10             	mov    0x10(%ebp),%eax
 86c061a:	89 44 24 08          	mov    %eax,0x8(%esp)
 86c061e:	8b 45 18             	mov    0x18(%ebp),%eax
 86c0621:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0625:	89 14 24             	mov    %edx,(%esp)
 86c0628:	e8 bd 9b ff ff       	call   86ba1ea <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster>
 86c062d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86c0630:	8b 8d a4 fc ff ff    	mov    -0x35c(%ebp),%ecx
 86c0636:	0f b6 85 94 fc ff ff 	movzbl -0x36c(%ebp),%eax
 86c063d:	0f be d0             	movsbl %al,%edx
 86c0640:	8b 45 18             	mov    0x18(%ebp),%eax
 86c0643:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86c0647:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 86c064a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86c064e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c0652:	89 04 24             	mov    %eax,(%esp)
 86c0655:	e8 6a 53 f8 ff       	call   86459c4 <_ZN15CUserCharacInfo11WarAreaKillEiif>
 86c065a:	eb 01                	jmp    86c065d <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0xe9>
 86c065c:	90                   	nop
 86c065d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86c0661:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 86c0665:	0f 9e c0             	setle  %al
 86c0668:	84 c0                	test   %al,%al
 86c066a:	0f 85 4e ff ff ff    	jne    86c05be <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0x4a>
 86c0670:	66 c7 45 ee ff ff    	movw   $0xffff,-0x12(%ebp)
 86c0676:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 86c067a:	74 0f                	je     86c068b <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0x117>
 86c067c:	8b 45 18             	mov    0x18(%ebp),%eax
 86c067f:	89 04 24             	mov    %eax,(%esp)
 86c0682:	e8 f5 9c a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86c0687:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 86c068b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c068e:	89 04 24             	mov    %eax,(%esp)
 86c0691:	e8 b6 d6 ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86c0696:	c7 44 24 08 51 01 00 	movl   $0x151,0x8(%esp)
 86c069d:	00 
 86c069e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c06a5:	00 
 86c06a6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c06a9:	89 04 24             	mov    %eax,(%esp)
 86c06ac:	e8 4b b2 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86c06b1:	8b 45 10             	mov    0x10(%ebp),%eax
 86c06b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c06b8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c06bb:	89 04 24             	mov    %eax,(%esp)
 86c06be:	e8 79 b2 a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86c06c3:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 86c06c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c06cb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c06ce:	89 04 24             	mov    %eax,(%esp)
 86c06d1:	e8 ce 97 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c06d6:	8b 45 14             	mov    0x14(%ebp),%eax
 86c06d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c06dd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c06e0:	89 04 24             	mov    %eax,(%esp)
 86c06e3:	e8 54 b2 a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86c06e8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86c06eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c06ef:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c06f2:	89 04 24             	mov    %eax,(%esp)
 86c06f5:	e8 aa 97 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86c06fa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c0701:	00 
 86c0702:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c0705:	89 04 24             	mov    %eax,(%esp)
 86c0708:	e8 4b b2 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86c070d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c0710:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0714:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0717:	89 04 24             	mov    %eax,(%esp)
 86c071a:	e8 ad d9 ff ff       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86c071f:	bb 00 00 00 00       	mov    $0x0,%ebx
 86c0724:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c0727:	89 04 24             	mov    %eax,(%esp)
 86c072a:	e8 51 d7 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c072f:	eb 33                	jmp    86c0764 <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0x1f0>
 86c0731:	89 d3                	mov    %edx,%ebx
 86c0733:	89 c6                	mov    %eax,%esi
 86c0735:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86c0738:	89 04 24             	mov    %eax,(%esp)
 86c073b:	e8 40 d7 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86c0740:	89 f0                	mov    %esi,%eax
 86c0742:	89 da                	mov    %ebx,%edx
 86c0744:	eb 00                	jmp    86c0746 <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_+0x1d2>
 86c0746:	89 d3                	mov    %edx,%ebx
 86c0748:	89 c6                	mov    %eax,%esi
 86c074a:	8d 85 8c fc ff ff    	lea    -0x374(%ebp),%eax
 86c0750:	89 04 24             	mov    %eax,(%esp)
 86c0753:	e8 56 0e a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86c0758:	89 f0                	mov    %esi,%eax
 86c075a:	89 da                	mov    %ebx,%edx
 86c075c:	89 04 24             	mov    %eax,(%esp)
 86c075f:	e8 ec 2f 42 00       	call   8ae3750 <_Unwind_Resume>
 86c0764:	8d 85 8c fc ff ff    	lea    -0x374(%ebp),%eax
 86c076a:	89 04 24             	mov    %eax,(%esp)
 86c076d:	e8 3c 0e a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86c0772:	89 d8                	mov    %ebx,%eax
 86c0774:	81 c4 90 03 00 00    	add    $0x390,%esp
 86c077a:	5b                   	pop    %ebx
 86c077b:	5e                   	pop    %esi
 86c077c:	5d                   	pop    %ebp
 86c077d:	c3                   	ret

```

```c
// WarRoom::HandleWpPerMonster @ 0x86c0574

/* WarRoom::HandleWpPerMonster(CUser*, int, int, CUser*) */

undefined4 __thiscall
WarRoom::HandleWpPerMonster(WarRoom *this,CUser *param_1,int param_2,int param_3,CUser *param_4)

{
  undefined4 uVar1;
  map_monster local_378 [8];
  char local_370;
  float local_360;
  PacketGuard local_2c [12];
  int local_20;
  int local_1c;
  ushort local_16;
  int local_14;
  char local_d;
  
  map_monster::map_monster(local_378);
  local_20 = GetWaiterCount(this);
  if (local_20 == 0) {
    uVar1 = 3;
  }
  else {
    local_1c = 0;
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
        if ((param_4 == (CUser *)0x0) ||
           (*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc) != param_4)) {
          local_d = '\0';
        }
        else {
          local_d = '\x01';
        }
        if (local_d != '\0') {
                    /* try { // try from 086c0628 to 086c0695 has its CatchHandler @ 086c0746 */
          local_1c = WarField::HandleWpPerMonster
                               ((WarField *)(this + 0x34),param_4,param_2,param_3,local_378);
          CUserCharacInfo::WarAreaKill((CUserCharacInfo *)param_4,(int)local_370,local_1c,local_360)
          ;
        }
      }
    }
    local_16 = 0xffff;
    if (param_4 != (CUser *)0x0) {
      local_16 = CUser::get_unique_id(param_4);
    }
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 086c06ac to 086c071e has its CatchHandler @ 086c0731 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x151);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,param_2);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(uint)local_16);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,param_3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,local_1c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    SendToRoom(this,local_2c);
    uVar1 = 0;
                    /* try { // try from 086c072a to 086c072e has its CatchHandler @ 086c0746 */
    PacketGuard::~PacketGuard(local_2c);
  }
  map_monster::~map_monster(local_378);
  return uVar1;
}

```

---

## HostChangeWarRoom

```asm
// === 086c08a6 WarRoom::HostChangeWarRoom  [0x086c08a6-0x86c0963] ===
 86c08a6:	55                   	push   %ebp
 86c08a7:	89 e5                	mov    %esp,%ebp
 86c08a9:	56                   	push   %esi
 86c08aa:	53                   	push   %ebx
 86c08ab:	83 ec 30             	sub    $0x30,%esp
 86c08ae:	8b 45 10             	mov    0x10(%ebp),%eax
 86c08b1:	88 45 f4             	mov    %al,-0xc(%ebp)
 86c08b4:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 86c08b8:	8b 45 08             	mov    0x8(%ebp),%eax
 86c08bb:	83 c2 48             	add    $0x48,%edx
 86c08be:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c08c2:	85 c0                	test   %eax,%eax
 86c08c4:	0f 84 8d 00 00 00    	je     86c0957 <_ZN7WarRoom17HostChangeWarRoomEP5CUsercm+0xb1>
 86c08ca:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 86c08ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86c08d1:	83 c2 48             	add    $0x48,%edx
 86c08d4:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c08d8:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86c08db:	75 7a                	jne    86c0957 <_ZN7WarRoom17HostChangeWarRoomEP5CUsercm+0xb1>
 86c08dd:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 86c08e1:	8b 45 08             	mov    0x8(%ebp),%eax
 86c08e4:	8d 4a 04             	lea    0x4(%edx),%ecx
 86c08e7:	8b 55 14             	mov    0x14(%ebp),%edx
 86c08ea:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 86c08ee:	8b 45 08             	mov    0x8(%ebp),%eax
 86c08f1:	8b 40 2c             	mov    0x2c(%eax),%eax
 86c08f4:	85 c0                	test   %eax,%eax
 86c08f6:	75 50                	jne    86c0948 <_ZN7WarRoom17HostChangeWarRoomEP5CUsercm+0xa2>
 86c08f8:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 86c08ff:	00 
 86c0900:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0903:	89 04 24             	mov    %eax,(%esp)
 86c0906:	e8 19 02 00 00       	call   86c0b24 <_ZN7WarRoom11GenTimerKeyE13TIMER_MESSAGE>
 86c090b:	89 c3                	mov    %eax,%ebx
 86c090d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0910:	8b 70 04             	mov    0x4(%eax),%esi
 86c0913:	e8 64 5b a3 ff       	call   80f647c <_Z12G_TimerQueuev>
 86c0918:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86c091f:	00 
 86c0920:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86c0924:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 86c092b:	00 
 86c092c:	c7 44 24 0c 47 00 00 	movl   $0x47,0xc(%esp)
 86c0933:	00 
 86c0934:	89 74 24 08          	mov    %esi,0x8(%esp)
 86c0938:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86c093f:	00 
 86c0940:	89 04 24             	mov    %eax,(%esp)
 86c0943:	e8 ce 04 f7 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86c0948:	8b 45 08             	mov    0x8(%ebp),%eax
 86c094b:	8b 40 2c             	mov    0x2c(%eax),%eax
 86c094e:	8d 50 01             	lea    0x1(%eax),%edx
 86c0951:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0954:	89 50 2c             	mov    %edx,0x2c(%eax)
 86c0957:	b8 00 00 00 00       	mov    $0x0,%eax
 86c095c:	83 c4 30             	add    $0x30,%esp
 86c095f:	5b                   	pop    %ebx
 86c0960:	5e                   	pop    %esi
 86c0961:	5d                   	pop    %ebp
 86c0962:	c3                   	ret
 86c0963:	90                   	nop

```

```c
// WarRoom::HostChangeWarRoom @ 0x86c08a6

/* WarRoom::HostChangeWarRoom(CUser*, char, unsigned long) */

undefined4 __thiscall
WarRoom::HostChangeWarRoom(WarRoom *this,CUser *param_1,char param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if ((*(int *)(this + (param_2 + 0x48) * 4 + 0xc) != 0) &&
     (*(CUser **)(this + (param_2 + 0x48) * 4 + 0xc) == param_1)) {
    *(ulong *)(this + (param_2 + 4) * 4 + 4) = param_3;
    if (*(int *)(this + 0x2c) == 0) {
      uVar2 = GenTimerKey(this,0x47);
      uVar1 = *(undefined4 *)(this + 4);
      pTVar3 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar3,3,uVar1,0x47,5,uVar2,0);
    }
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  return 0;
}

```

---

## InvalidUserCheck

```asm
// === 086bb582 WarRoom::InvalidUserCheck  [0x086bb582-0x86bb671] ===
 86bb582:	55                   	push   %ebp
 86bb583:	89 e5                	mov    %esp,%ebp
 86bb585:	53                   	push   %ebx
 86bb586:	83 ec 34             	sub    $0x34,%esp
 86bb589:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bb590:	e9 c7 00 00 00       	jmp    86bb65c <_ZN7WarRoom16InvalidUserCheckEv+0xda>
 86bb595:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bb598:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb59b:	83 c2 48             	add    $0x48,%edx
 86bb59e:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb5a2:	85 c0                	test   %eax,%eax
 86bb5a4:	0f 84 ad 00 00 00    	je     86bb657 <_ZN7WarRoom16InvalidUserCheckEv+0xd5>
 86bb5aa:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bb5ad:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb5b0:	83 c2 48             	add    $0x48,%edx
 86bb5b3:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb5b7:	89 04 24             	mov    %eax,(%esp)
 86bb5ba:	e8 73 4e a6 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 86bb5bf:	85 c0                	test   %eax,%eax
 86bb5c1:	0f 94 c0             	sete   %al
 86bb5c4:	84 c0                	test   %al,%al
 86bb5c6:	0f 84 8c 00 00 00    	je     86bb658 <_ZN7WarRoom16InvalidUserCheckEv+0xd6>
 86bb5cc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bb5cf:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb5d2:	83 c2 48             	add    $0x48,%edx
 86bb5d5:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb5d9:	89 04 24             	mov    %eax,(%esp)
 86bb5dc:	e8 a3 48 b7 ff       	call   822fe84 <_ZN5CUser15GetWarRoomIndexEv>
 86bb5e1:	0f bf d8             	movswl %ax,%ebx
 86bb5e4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86bb5eb:	00 
 86bb5ec:	c7 44 24 08 36 02 00 	movl   $0x236,0x8(%esp)
 86bb5f3:	00 
 86bb5f4:	c7 44 24 04 e0 a6 cf 	movl   $0x8cfa6e0,0x4(%esp)
 86bb5fb:	08 
 86bb5fc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86bb5ff:	89 04 24             	mov    %eax,(%esp)
 86bb602:	e8 11 41 e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86bb607:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86bb60b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bb60e:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bb612:	c7 44 24 04 e0 94 cf 	movl   $0x8cf94e0,0x4(%esp)
 86bb619:	08 
 86bb61a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86bb61d:	89 04 24             	mov    %eax,(%esp)
 86bb620:	e8 63 41 e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86bb625:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bb628:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb62b:	83 c2 50             	add    $0x50,%edx
 86bb62e:	c7 44 90 08 ff 00 00 	movl   $0xff,0x8(%eax,%edx,4)
 86bb635:	00 
 86bb636:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bb639:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb63c:	83 c2 48             	add    $0x48,%edx
 86bb63f:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 86bb646:	00 
 86bb647:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bb64a:	8b 55 08             	mov    0x8(%ebp),%edx
 86bb64d:	c6 84 02 84 01 00 00 	movb   $0x0,0x184(%edx,%eax,1)
 86bb654:	00 
 86bb655:	eb 01                	jmp    86bb658 <_ZN7WarRoom16InvalidUserCheckEv+0xd6>
 86bb657:	90                   	nop
 86bb658:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bb65c:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bb660:	0f 9e c0             	setle  %al
 86bb663:	84 c0                	test   %al,%al
 86bb665:	0f 85 2a ff ff ff    	jne    86bb595 <_ZN7WarRoom16InvalidUserCheckEv+0x13>
 86bb66b:	83 c4 34             	add    $0x34,%esp
 86bb66e:	5b                   	pop    %ebx
 86bb66f:	5d                   	pop    %ebp
 86bb670:	c3                   	ret
 86bb671:	90                   	nop

```

```c
// WarRoom::InvalidUserCheck @ 0x86bb582

/* WarRoom::InvalidUserCheck() */

void __thiscall WarRoom::InvalidUserCheck(WarRoom *this)

{
  short sVar1;
  int iVar2;
  cMyTrace local_20 [16];
  int local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
      iVar2 = CUserCharacInfo::getCurCharacR
                        (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
      if (iVar2 == 0) {
        sVar1 = CUser::GetWarRoomIndex(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
        cMyTrace::cMyTrace(local_20,"void WarRoom::InvalidUserCheck()",0x236,5);
        cMyTrace::operator()
                  (local_20,"WarRoom::InvalidUserCheck slot(%d) warRoomIndex(%d)",local_10,
                   (int)sVar1);
        *(undefined4 *)(this + (local_10 + 0x50) * 4 + 8) = 0xff;
        *(undefined4 *)(this + (local_10 + 0x48) * 4 + 0xc) = 0;
        this[local_10 + 0x184] = (WarRoom)0x0;
      }
    }
  }
  return;
}

```

---

## IsBanUser

```asm
// === 086ba99e WarRoom::IsBanUser  [0x086ba99e-0x86baa13] ===
 86ba99e:	55                   	push   %ebp
 86ba99f:	89 e5                	mov    %esp,%ebp
 86ba9a1:	83 ec 28             	sub    $0x28,%esp
 86ba9a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ba9a7:	89 04 24             	mov    %eax,(%esp)
 86ba9aa:	e8 bf f9 a1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86ba9af:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86ba9b2:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba9b5:	8d 88 d8 01 00 00    	lea    0x1d8(%eax),%ecx
 86ba9bb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ba9be:	8d 55 f0             	lea    -0x10(%ebp),%edx
 86ba9c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ba9c5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86ba9c9:	89 04 24             	mov    %eax,(%esp)
 86ba9cc:	e8 9b 58 d9 ff       	call   845026c <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE4findERS3_>
 86ba9d1:	83 ec 04             	sub    $0x4,%esp
 86ba9d4:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba9d7:	8d 90 d8 01 00 00    	lea    0x1d8(%eax),%edx
 86ba9dd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86ba9e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba9e4:	89 04 24             	mov    %eax,(%esp)
 86ba9e7:	e8 ac 58 d9 ff       	call   8450298 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 86ba9ec:	83 ec 04             	sub    $0x4,%esp
 86ba9ef:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86ba9f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba9f6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ba9f9:	89 04 24             	mov    %eax,(%esp)
 86ba9fc:	e8 bd 58 d9 ff       	call   84502be <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEneERKS3_>
 86baa01:	84 c0                	test   %al,%al
 86baa03:	74 07                	je     86baa0c <_ZN7WarRoom9IsBanUserEP5CUser+0x6e>
 86baa05:	b8 01 00 00 00       	mov    $0x1,%eax
 86baa0a:	eb 05                	jmp    86baa11 <_ZN7WarRoom9IsBanUserEP5CUser+0x73>
 86baa0c:	b8 00 00 00 00       	mov    $0x0,%eax
 86baa11:	c9                   	leave
 86baa12:	c3                   	ret
 86baa13:	90                   	nop

```

```c
// WarRoom::IsBanUser @ 0x86ba99e

/* WarRoom::IsBanUser(CUser*) */

bool __thiscall WarRoom::IsBanUser(WarRoom *this,CUser *param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_18 [4];
  undefined4 local_14;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_10 [12];
  
  local_14 = CUser::get_acc_id(param_1);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  find((uint *)local_18);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  return cVar1 != '\0';
}

```

---

## IsJoinable

```asm
// === 086bacae WarRoom::IsJoinable  [0x086bacae-0x86bae99] ===
 86bacae:	55                   	push   %ebp
 86bacaf:	89 e5                	mov    %esp,%ebp
 86bacb1:	53                   	push   %ebx
 86bacb2:	83 ec 24             	sub    $0x24,%esp
 86bacb5:	8b 45 08             	mov    0x8(%ebp),%eax
 86bacb8:	89 04 24             	mov    %eax,(%esp)
 86bacbb:	e8 d6 41 b7 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bacc0:	83 f8 04             	cmp    $0x4,%eax
 86bacc3:	74 30                	je     86bacf5 <_ZN7WarRoom10IsJoinableEP5CUser+0x47>
 86bacc5:	8b 45 08             	mov    0x8(%ebp),%eax
 86bacc8:	89 04 24             	mov    %eax,(%esp)
 86baccb:	e8 c6 41 b7 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bacd0:	83 f8 03             	cmp    $0x3,%eax
 86bacd3:	74 20                	je     86bacf5 <_ZN7WarRoom10IsJoinableEP5CUser+0x47>
 86bacd5:	8b 45 08             	mov    0x8(%ebp),%eax
 86bacd8:	89 04 24             	mov    %eax,(%esp)
 86bacdb:	e8 b6 41 b7 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bace0:	83 f8 ff             	cmp    $0xffffffff,%eax
 86bace3:	74 10                	je     86bacf5 <_ZN7WarRoom10IsJoinableEP5CUser+0x47>
 86bace5:	8b 45 08             	mov    0x8(%ebp),%eax
 86bace8:	89 04 24             	mov    %eax,(%esp)
 86baceb:	e8 a6 41 b7 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bacf0:	83 f8 02             	cmp    $0x2,%eax
 86bacf3:	75 07                	jne    86bacfc <_ZN7WarRoom10IsJoinableEP5CUser+0x4e>
 86bacf5:	b8 01 00 00 00       	mov    $0x1,%eax
 86bacfa:	eb 05                	jmp    86bad01 <_ZN7WarRoom10IsJoinableEP5CUser+0x53>
 86bacfc:	b8 00 00 00 00       	mov    $0x0,%eax
 86bad01:	84 c0                	test   %al,%al
 86bad03:	74 0a                	je     86bad0f <_ZN7WarRoom10IsJoinableEP5CUser+0x61>
 86bad05:	b8 13 00 00 00       	mov    $0x13,%eax
 86bad0a:	e9 85 01 00 00       	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86bad0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bad12:	89 04 24             	mov    %eax,(%esp)
 86bad15:	e8 a6 3c fd ff       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 86bad1a:	84 c0                	test   %al,%al
 86bad1c:	74 0a                	je     86bad28 <_ZN7WarRoom10IsJoinableEP5CUser+0x7a>
 86bad1e:	b8 15 00 00 00       	mov    $0x15,%eax
 86bad23:	e9 6c 01 00 00       	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86bad28:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bad2b:	89 04 24             	mov    %eax,(%esp)
 86bad2e:	e8 55 f4 ab ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 86bad33:	89 c3                	mov    %eax,%ebx
 86bad35:	e8 61 14 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bad3a:	8b 55 08             	mov    0x8(%ebp),%edx
 86bad3d:	0f b6 12             	movzbl (%edx),%edx
 86bad40:	0f b6 d2             	movzbl %dl,%edx
 86bad43:	81 c2 1c 22 00 00    	add    $0x221c,%edx
 86bad49:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86bad4d:	39 c3                	cmp    %eax,%ebx
 86bad4f:	0f 9c c0             	setl   %al
 86bad52:	84 c0                	test   %al,%al
 86bad54:	74 0a                	je     86bad60 <_ZN7WarRoom10IsJoinableEP5CUser+0xb2>
 86bad56:	b8 0a 00 00 00       	mov    $0xa,%eax
 86bad5b:	e9 34 01 00 00       	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86bad60:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bad63:	89 04 24             	mov    %eax,(%esp)
 86bad66:	e8 95 b7 f9 ff       	call   8656500 <_ZN5CUser12CheckFatigueEv>
 86bad6b:	83 f0 01             	xor    $0x1,%eax
 86bad6e:	84 c0                	test   %al,%al
 86bad70:	74 0a                	je     86bad7c <_ZN7WarRoom10IsJoinableEP5CUser+0xce>
 86bad72:	b8 43 00 00 00       	mov    $0x43,%eax
 86bad77:	e9 18 01 00 00       	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86bad7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bad7f:	89 04 24             	mov    %eax,(%esp)
 86bad82:	e8 31 f5 a1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 86bad87:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bad8a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bad8d:	0f b6 00             	movzbl (%eax),%eax
 86bad90:	0f b6 c0             	movzbl %al,%eax
 86bad93:	83 f8 06             	cmp    $0x6,%eax
 86bad96:	77 77                	ja     86bae0f <_ZN7WarRoom10IsJoinableEP5CUser+0x161>
 86bad98:	8b 04 85 c4 94 cf 08 	mov    0x8cf94c4(,%eax,4),%eax
 86bad9f:	ff e0                	jmp    *%eax
 86bada1:	83 7d f0 13          	cmpl   $0x13,-0x10(%ebp)
 86bada5:	7e 06                	jle    86badad <_ZN7WarRoom10IsJoinableEP5CUser+0xff>
 86bada7:	83 7d f0 1d          	cmpl   $0x1d,-0x10(%ebp)
 86badab:	7e 69                	jle    86bae16 <_ZN7WarRoom10IsJoinableEP5CUser+0x168>
 86badad:	b8 0e 00 00 00       	mov    $0xe,%eax
 86badb2:	e9 dd 00 00 00       	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86badb7:	83 7d f0 1d          	cmpl   $0x1d,-0x10(%ebp)
 86badbb:	7e 06                	jle    86badc3 <_ZN7WarRoom10IsJoinableEP5CUser+0x115>
 86badbd:	83 7d f0 27          	cmpl   $0x27,-0x10(%ebp)
 86badc1:	7e 56                	jle    86bae19 <_ZN7WarRoom10IsJoinableEP5CUser+0x16b>
 86badc3:	b8 0e 00 00 00       	mov    $0xe,%eax
 86badc8:	e9 c7 00 00 00       	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86badcd:	83 7d f0 27          	cmpl   $0x27,-0x10(%ebp)
 86badd1:	7e 06                	jle    86badd9 <_ZN7WarRoom10IsJoinableEP5CUser+0x12b>
 86badd3:	83 7d f0 31          	cmpl   $0x31,-0x10(%ebp)
 86badd7:	7e 43                	jle    86bae1c <_ZN7WarRoom10IsJoinableEP5CUser+0x16e>
 86badd9:	b8 0e 00 00 00       	mov    $0xe,%eax
 86badde:	e9 b1 00 00 00       	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86bade3:	83 7d f0 31          	cmpl   $0x31,-0x10(%ebp)
 86bade7:	7e 06                	jle    86badef <_ZN7WarRoom10IsJoinableEP5CUser+0x141>
 86bade9:	83 7d f0 3b          	cmpl   $0x3b,-0x10(%ebp)
 86baded:	7e 30                	jle    86bae1f <_ZN7WarRoom10IsJoinableEP5CUser+0x171>
 86badef:	b8 0e 00 00 00       	mov    $0xe,%eax
 86badf4:	e9 9b 00 00 00       	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86badf9:	83 7d f0 3b          	cmpl   $0x3b,-0x10(%ebp)
 86badfd:	7e 06                	jle    86bae05 <_ZN7WarRoom10IsJoinableEP5CUser+0x157>
 86badff:	83 7d f0 46          	cmpl   $0x46,-0x10(%ebp)
 86bae03:	7e 1d                	jle    86bae22 <_ZN7WarRoom10IsJoinableEP5CUser+0x174>
 86bae05:	b8 0e 00 00 00       	mov    $0xe,%eax
 86bae0a:	e9 85 00 00 00       	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86bae0f:	b8 0e 00 00 00       	mov    $0xe,%eax
 86bae14:	eb 7e                	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86bae16:	90                   	nop
 86bae17:	eb 0a                	jmp    86bae23 <_ZN7WarRoom10IsJoinableEP5CUser+0x175>
 86bae19:	90                   	nop
 86bae1a:	eb 07                	jmp    86bae23 <_ZN7WarRoom10IsJoinableEP5CUser+0x175>
 86bae1c:	90                   	nop
 86bae1d:	eb 04                	jmp    86bae23 <_ZN7WarRoom10IsJoinableEP5CUser+0x175>
 86bae1f:	90                   	nop
 86bae20:	eb 01                	jmp    86bae23 <_ZN7WarRoom10IsJoinableEP5CUser+0x175>
 86bae22:	90                   	nop
 86bae23:	8b 45 08             	mov    0x8(%ebp),%eax
 86bae26:	89 04 24             	mov    %eax,(%esp)
 86bae29:	e8 22 fa ff ff       	call   86ba850 <_ZN7WarRoom13UpdateBanListEv>
 86bae2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bae31:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bae35:	8b 45 08             	mov    0x8(%ebp),%eax
 86bae38:	89 04 24             	mov    %eax,(%esp)
 86bae3b:	e8 5e fb ff ff       	call   86ba99e <_ZN7WarRoom9IsBanUserEP5CUser>
 86bae40:	84 c0                	test   %al,%al
 86bae42:	74 07                	je     86bae4b <_ZN7WarRoom10IsJoinableEP5CUser+0x19d>
 86bae44:	b8 1e 00 00 00       	mov    $0x1e,%eax
 86bae49:	eb 49                	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86bae4b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bae52:	eb 30                	jmp    86bae84 <_ZN7WarRoom10IsJoinableEP5CUser+0x1d6>
 86bae54:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bae57:	8b 45 08             	mov    0x8(%ebp),%eax
 86bae5a:	83 c2 48             	add    $0x48,%edx
 86bae5d:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bae61:	85 c0                	test   %eax,%eax
 86bae63:	75 1b                	jne    86bae80 <_ZN7WarRoom10IsJoinableEP5CUser+0x1d2>
 86bae65:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bae68:	8b 45 08             	mov    0x8(%ebp),%eax
 86bae6b:	83 c2 50             	add    $0x50,%edx
 86bae6e:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86bae72:	3d ff 00 00 00       	cmp    $0xff,%eax
 86bae77:	75 07                	jne    86bae80 <_ZN7WarRoom10IsJoinableEP5CUser+0x1d2>
 86bae79:	b8 00 00 00 00       	mov    $0x0,%eax
 86bae7e:	eb 14                	jmp    86bae94 <_ZN7WarRoom10IsJoinableEP5CUser+0x1e6>
 86bae80:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bae84:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bae88:	0f 9e c0             	setle  %al
 86bae8b:	84 c0                	test   %al,%al
 86bae8d:	75 c5                	jne    86bae54 <_ZN7WarRoom10IsJoinableEP5CUser+0x1a6>
 86bae8f:	b8 04 00 00 00       	mov    $0x4,%eax
 86bae94:	83 c4 24             	add    $0x24,%esp
 86bae97:	5b                   	pop    %ebx
 86bae98:	5d                   	pop    %ebp
 86bae99:	c3                   	ret

```

```c
// WarRoom::IsJoinable @ 0x86bacae

/* WarRoom::IsJoinable(CUser*) */

undefined4 __thiscall WarRoom::IsJoinable(WarRoom *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_10;
  
  iVar3 = GetState(this);
  if ((((iVar3 == 4) || (iVar3 = GetState(this), iVar3 == 3)) ||
      (iVar3 = GetState(this), iVar3 == -1)) || (iVar3 = GetState(this), iVar3 == 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = 0x13;
  }
  else {
    cVar2 = CUser::isCompetitionMercenary(param_1);
    if (cVar2 == '\0') {
      iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      iVar5 = G_CDataManager();
      if (iVar3 < *(int *)(iVar5 + 4 + ((byte)*this + 0x221c) * 4)) {
        uVar4 = 10;
      }
      else {
        cVar2 = CUser::CheckFatigue(param_1);
        if (cVar2 == '\x01') {
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          switch(*this) {
          default:
            return 0xe;
          case (WarRoom)0x2:
            if ((iVar3 < 0x14) || (0x1d < iVar3)) {
              return 0xe;
            }
            break;
          case (WarRoom)0x3:
            if ((iVar3 < 0x1e) || (0x27 < iVar3)) {
              return 0xe;
            }
            break;
          case (WarRoom)0x4:
            if ((iVar3 < 0x28) || (0x31 < iVar3)) {
              return 0xe;
            }
            break;
          case (WarRoom)0x5:
            if ((iVar3 < 0x32) || (0x3b < iVar3)) {
              return 0xe;
            }
            break;
          case (WarRoom)0x6:
            if ((iVar3 < 0x3c) || (0x46 < iVar3)) {
              return 0xe;
            }
          }
          UpdateBanList(this);
          cVar2 = IsBanUser(this,param_1);
          if (cVar2 == '\0') {
            for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
              if ((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) == 0) &&
                 (*(int *)(this + (local_10 + 0x50) * 4 + 8) == 0xff)) {
                return 0;
              }
            }
            uVar4 = 4;
          }
          else {
            uVar4 = 0x1e;
          }
        }
        else {
          uVar4 = 0x43;
        }
      }
    }
    else {
      uVar4 = 0x15;
    }
  }
  return uVar4;
}

```

---

## Join

```asm
// === 086bae9a WarRoom::Join  [0x086bae9a-0x86bb53b] ===
 86bae9a:	55                   	push   %ebp
 86bae9b:	89 e5                	mov    %esp,%ebp
 86bae9d:	56                   	push   %esi
 86bae9e:	53                   	push   %ebx
 86bae9f:	83 ec 40             	sub    $0x40,%esp
 86baea2:	8b 45 08             	mov    0x8(%ebp),%eax
 86baea5:	89 04 24             	mov    %eax,(%esp)
 86baea8:	e8 1f fd ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86baead:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86baeb0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86baeb3:	89 04 24             	mov    %eax,(%esp)
 86baeb6:	e8 91 2e ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86baebb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86baebe:	89 04 24             	mov    %eax,(%esp)
 86baec1:	e8 86 2e ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86baec6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 86baecd:	00 
 86baece:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86baed5:	00 
 86baed6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86baed9:	89 04 24             	mov    %eax,(%esp)
 86baedc:	e8 1b 0a a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86baee1:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 86baee8:	00 
 86baee9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86baef0:	00 
 86baef1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86baef4:	89 04 24             	mov    %eax,(%esp)
 86baef7:	e8 00 0a a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86baefc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86baf03:	00 
 86baf04:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86baf07:	89 04 24             	mov    %eax,(%esp)
 86baf0a:	e8 11 0a a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86baf0f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86baf12:	89 44 24 04          	mov    %eax,0x4(%esp)
 86baf16:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86baf19:	89 04 24             	mov    %eax,(%esp)
 86baf1c:	e8 83 ef a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86baf21:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86baf24:	89 44 24 04          	mov    %eax,0x4(%esp)
 86baf28:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86baf2b:	89 04 24             	mov    %eax,(%esp)
 86baf2e:	e8 ed 09 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86baf33:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86baf3a:	e9 b9 01 00 00       	jmp    86bb0f8 <_ZN7WarRoom4JoinEP5CUserRi+0x25e>
 86baf3f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86baf42:	8b 45 08             	mov    0x8(%ebp),%eax
 86baf45:	83 c2 48             	add    $0x48,%edx
 86baf48:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86baf4c:	85 c0                	test   %eax,%eax
 86baf4e:	0f 84 a0 01 00 00    	je     86bb0f4 <_ZN7WarRoom4JoinEP5CUserRi+0x25a>
 86baf54:	8d 55 dc             	lea    -0x24(%ebp),%edx
 86baf57:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 86baf5a:	8b 45 08             	mov    0x8(%ebp),%eax
 86baf5d:	83 c1 48             	add    $0x48,%ecx
 86baf60:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86baf64:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86baf6b:	00 
 86baf6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86baf70:	89 04 24             	mov    %eax,(%esp)
 86baf73:	e8 d6 f4 f9 ff       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 86baf78:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86baf7b:	8b 45 08             	mov    0x8(%ebp),%eax
 86baf7e:	83 c2 48             	add    $0x48,%edx
 86baf81:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86baf85:	89 04 24             	mov    %eax,(%esp)
 86baf88:	e8 ef f3 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86baf8d:	0f b7 c0             	movzwl %ax,%eax
 86baf90:	89 44 24 04          	mov    %eax,0x4(%esp)
 86baf94:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86baf97:	89 04 24             	mov    %eax,(%esp)
 86baf9a:	e8 05 ef a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86baf9f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bafa2:	8b 45 08             	mov    0x8(%ebp),%eax
 86bafa5:	83 c2 48             	add    $0x48,%edx
 86bafa8:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bafac:	05 e0 00 00 00       	add    $0xe0,%eax
 86bafb1:	89 04 24             	mov    %eax,(%esp)
 86bafb4:	e8 1f 6c c3 ff       	call   82f1bd8 <_ZN8CNetworkILi4096ELi450000EE12get_inner_ipEv>
 86bafb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bafbd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bafc0:	89 04 24             	mov    %eax,(%esp)
 86bafc3:	e8 74 09 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bafc8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bafcb:	8b 45 08             	mov    0x8(%ebp),%eax
 86bafce:	83 c2 48             	add    $0x48,%edx
 86bafd1:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bafd5:	05 e0 00 00 00       	add    $0xe0,%eax
 86bafda:	89 04 24             	mov    %eax,(%esp)
 86bafdd:	e8 04 6c c3 ff       	call   82f1be6 <_ZN8CNetworkILi4096ELi450000EE6get_ipEv>
 86bafe2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bafe6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bafe9:	89 04 24             	mov    %eax,(%esp)
 86bafec:	e8 4b 09 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86baff1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86baff4:	8b 45 08             	mov    0x8(%ebp),%eax
 86baff7:	83 c2 48             	add    $0x48,%edx
 86baffa:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86baffe:	05 e0 00 00 00       	add    $0xe0,%eax
 86bb003:	89 04 24             	mov    %eax,(%esp)
 86bb006:	e8 e9 6b c3 ff       	call   82f1bf4 <_ZN8CNetworkILi4096ELi450000EE8get_portEv>
 86bb00b:	0f b7 c0             	movzwl %ax,%eax
 86bb00e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb012:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb015:	89 04 24             	mov    %eax,(%esp)
 86bb018:	e8 87 ee a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bb01d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bb020:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb023:	83 c2 48             	add    $0x48,%edx
 86bb026:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb02a:	89 04 24             	mov    %eax,(%esp)
 86bb02d:	e8 3c f3 a1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86bb032:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb036:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb039:	89 04 24             	mov    %eax,(%esp)
 86bb03c:	e8 fb 08 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bb041:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bb044:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb047:	83 c2 48             	add    $0x48,%edx
 86bb04a:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb04e:	05 e0 00 00 00       	add    $0xe0,%eax
 86bb053:	89 04 24             	mov    %eax,(%esp)
 86bb056:	e8 85 bd b7 ff       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 86bb05b:	0f be c0             	movsbl %al,%eax
 86bb05e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb062:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb065:	89 04 24             	mov    %eax,(%esp)
 86bb068:	e8 b3 08 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bb06d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bb070:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb073:	83 c2 48             	add    $0x48,%edx
 86bb076:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb07a:	05 e0 00 00 00       	add    $0xe0,%eax
 86bb07f:	89 04 24             	mov    %eax,(%esp)
 86bb082:	e8 7d 6b c3 ff       	call   82f1c04 <_ZN8CNetworkILi4096ELi450000EE7get_mtuEv>
 86bb087:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb08b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb08e:	89 04 24             	mov    %eax,(%esp)
 86bb091:	e8 a6 08 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bb096:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bb099:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb09c:	83 c2 48             	add    $0x48,%edx
 86bb09f:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb0a3:	89 04 24             	mov    %eax,(%esp)
 86bb0a6:	e8 87 53 a6 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 86bb0ab:	85 c0                	test   %eax,%eax
 86bb0ad:	0f 95 c0             	setne  %al
 86bb0b0:	84 c0                	test   %al,%al
 86bb0b2:	74 2d                	je     86bb0e1 <_ZN7WarRoom4JoinEP5CUserRi+0x247>
 86bb0b4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bb0b7:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb0ba:	83 c2 48             	add    $0x48,%edx
 86bb0bd:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb0c1:	89 04 24             	mov    %eax,(%esp)
 86bb0c4:	e8 69 53 a6 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 86bb0c9:	0f b6 40 75          	movzbl 0x75(%eax),%eax
 86bb0cd:	0f b6 c0             	movzbl %al,%eax
 86bb0d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb0d4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb0d7:	89 04 24             	mov    %eax,(%esp)
 86bb0da:	e8 41 08 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bb0df:	eb 13                	jmp    86bb0f4 <_ZN7WarRoom4JoinEP5CUserRi+0x25a>
 86bb0e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bb0e8:	00 
 86bb0e9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb0ec:	89 04 24             	mov    %eax,(%esp)
 86bb0ef:	e8 2c 08 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bb0f4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86bb0f8:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 86bb0fc:	0f 9e c0             	setle  %al
 86bb0ff:	84 c0                	test   %al,%al
 86bb101:	0f 85 38 fe ff ff    	jne    86baf3f <_ZN7WarRoom4JoinEP5CUserRi+0xa5>
 86bb107:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb10e:	00 
 86bb10f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb112:	89 04 24             	mov    %eax,(%esp)
 86bb115:	e8 3e 08 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bb11a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb121:	00 
 86bb122:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb125:	89 04 24             	mov    %eax,(%esp)
 86bb128:	e8 2b 08 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bb12d:	c7 45 ec ff ff ff ff 	movl   $0xffffffff,-0x14(%ebp)
 86bb134:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bb13b:	eb 5f                	jmp    86bb19c <_ZN7WarRoom4JoinEP5CUserRi+0x302>
 86bb13d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bb140:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb143:	83 c2 48             	add    $0x48,%edx
 86bb146:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb14a:	85 c0                	test   %eax,%eax
 86bb14c:	75 4a                	jne    86bb198 <_ZN7WarRoom4JoinEP5CUserRi+0x2fe>
 86bb14e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bb151:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb154:	83 c2 50             	add    $0x50,%edx
 86bb157:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86bb15b:	3d ff 00 00 00       	cmp    $0xff,%eax
 86bb160:	75 36                	jne    86bb198 <_ZN7WarRoom4JoinEP5CUserRi+0x2fe>
 86bb162:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bb165:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86bb168:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bb16b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb16e:	8d 4a 48             	lea    0x48(%edx),%ecx
 86bb171:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bb174:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 86bb178:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb17b:	8b 40 04             	mov    0x4(%eax),%eax
 86bb17e:	98                   	cwtl
 86bb17f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb183:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb186:	89 04 24             	mov    %eax,(%esp)
 86bb189:	e8 c2 59 00 00       	call   86c0b50 <_ZN5CUser15SetWarRoomIndexEs>
 86bb18e:	8b 45 10             	mov    0x10(%ebp),%eax
 86bb191:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bb194:	89 10                	mov    %edx,(%eax)
 86bb196:	eb 0f                	jmp    86bb1a7 <_ZN7WarRoom4JoinEP5CUserRi+0x30d>
 86bb198:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bb19c:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bb1a0:	0f 9e c0             	setle  %al
 86bb1a3:	84 c0                	test   %al,%al
 86bb1a5:	75 96                	jne    86bb13d <_ZN7WarRoom4JoinEP5CUserRi+0x2a3>
 86bb1a7:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 86bb1ab:	75 0a                	jne    86bb1b7 <_ZN7WarRoom4JoinEP5CUserRi+0x31d>
 86bb1ad:	bb 04 00 00 00       	mov    $0x4,%ebx
 86bb1b2:	e9 48 03 00 00       	jmp    86bb4ff <_ZN7WarRoom4JoinEP5CUserRi+0x665>
 86bb1b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb1ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb1be:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb1c1:	89 04 24             	mov    %eax,(%esp)
 86bb1c4:	e8 f1 d3 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86bb1c9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb1cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb1d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb1d3:	89 04 24             	mov    %eax,(%esp)
 86bb1d6:	e8 df d3 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86bb1db:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb1de:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bb1e4:	85 c0                	test   %eax,%eax
 86bb1e6:	74 33                	je     86bb21b <_ZN7WarRoom4JoinEP5CUserRi+0x381>
 86bb1e8:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb1eb:	0f b6 00             	movzbl (%eax),%eax
 86bb1ee:	0f b6 d8             	movzbl %al,%ebx
 86bb1f1:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb1f4:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bb1fa:	89 04 24             	mov    %eax,(%esp)
 86bb1fd:	e8 a4 a3 a8 ff       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 86bb202:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bb205:	81 c2 00 97 07 00    	add    $0x79700,%edx
 86bb20b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86bb20f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb213:	89 14 24             	mov    %edx,(%esp)
 86bb216:	e8 fb 97 fc ff       	call   8684a16 <_ZN15cUserHistoryLog12EnterDungeonEPKci>
 86bb21b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86bb21e:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb221:	83 c2 50             	add    $0x50,%edx
 86bb224:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 86bb22b:	00 
 86bb22c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bb22f:	8b 55 08             	mov    0x8(%ebp),%edx
 86bb232:	c6 84 02 84 01 00 00 	movb   $0x1,0x184(%edx,%eax,1)
 86bb239:	01 
 86bb23a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb23d:	89 04 24             	mov    %eax,(%esp)
 86bb240:	e8 a1 06 a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86bb245:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 86bb24c:	00 
 86bb24d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bb254:	00 
 86bb255:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb258:	89 04 24             	mov    %eax,(%esp)
 86bb25b:	e8 9c 06 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bb260:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb267:	00 
 86bb268:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb26b:	89 04 24             	mov    %eax,(%esp)
 86bb26e:	e8 ad 06 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bb273:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb27a:	00 
 86bb27b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb27e:	89 04 24             	mov    %eax,(%esp)
 86bb281:	e8 1e ec a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bb286:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb289:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86bb290:	00 
 86bb291:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb295:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb298:	89 04 24             	mov    %eax,(%esp)
 86bb29b:	e8 ae f1 f9 ff       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 86bb2a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb2a7:	00 
 86bb2a8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb2ab:	89 04 24             	mov    %eax,(%esp)
 86bb2ae:	e8 a5 06 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bb2b3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb2b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb2ba:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb2bd:	89 04 24             	mov    %eax,(%esp)
 86bb2c0:	e8 07 2e 00 00       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bb2c5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb2c8:	89 04 24             	mov    %eax,(%esp)
 86bb2cb:	e8 16 06 a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86bb2d0:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 86bb2d7:	00 
 86bb2d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bb2df:	00 
 86bb2e0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb2e3:	89 04 24             	mov    %eax,(%esp)
 86bb2e6:	e8 11 06 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bb2eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb2f2:	00 
 86bb2f3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb2f6:	89 04 24             	mov    %eax,(%esp)
 86bb2f9:	e8 22 06 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bb2fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb301:	89 04 24             	mov    %eax,(%esp)
 86bb304:	e8 73 f0 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86bb309:	0f b7 c0             	movzwl %ax,%eax
 86bb30c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb310:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb313:	89 04 24             	mov    %eax,(%esp)
 86bb316:	e8 89 eb a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bb31b:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb31e:	05 e0 00 00 00       	add    $0xe0,%eax
 86bb323:	89 04 24             	mov    %eax,(%esp)
 86bb326:	e8 ad 68 c3 ff       	call   82f1bd8 <_ZN8CNetworkILi4096ELi450000EE12get_inner_ipEv>
 86bb32b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb32f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb332:	89 04 24             	mov    %eax,(%esp)
 86bb335:	e8 02 06 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bb33a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb33d:	05 e0 00 00 00       	add    $0xe0,%eax
 86bb342:	89 04 24             	mov    %eax,(%esp)
 86bb345:	e8 9c 68 c3 ff       	call   82f1be6 <_ZN8CNetworkILi4096ELi450000EE6get_ipEv>
 86bb34a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb34e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb351:	89 04 24             	mov    %eax,(%esp)
 86bb354:	e8 e3 05 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bb359:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb35c:	05 e0 00 00 00       	add    $0xe0,%eax
 86bb361:	89 04 24             	mov    %eax,(%esp)
 86bb364:	e8 8b 68 c3 ff       	call   82f1bf4 <_ZN8CNetworkILi4096ELi450000EE8get_portEv>
 86bb369:	0f b7 c0             	movzwl %ax,%eax
 86bb36c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb370:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb373:	89 04 24             	mov    %eax,(%esp)
 86bb376:	e8 29 eb a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bb37b:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb37e:	89 04 24             	mov    %eax,(%esp)
 86bb381:	e8 e8 ef a1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86bb386:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb38a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb38d:	89 04 24             	mov    %eax,(%esp)
 86bb390:	e8 a7 05 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bb395:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb398:	05 e0 00 00 00       	add    $0xe0,%eax
 86bb39d:	89 04 24             	mov    %eax,(%esp)
 86bb3a0:	e8 3b ba b7 ff       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 86bb3a5:	0f be c0             	movsbl %al,%eax
 86bb3a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb3ac:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb3af:	89 04 24             	mov    %eax,(%esp)
 86bb3b2:	e8 69 05 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bb3b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb3ba:	05 e0 00 00 00       	add    $0xe0,%eax
 86bb3bf:	89 04 24             	mov    %eax,(%esp)
 86bb3c2:	e8 3d 68 c3 ff       	call   82f1c04 <_ZN8CNetworkILi4096ELi450000EE7get_mtuEv>
 86bb3c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb3cb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb3ce:	89 04 24             	mov    %eax,(%esp)
 86bb3d1:	e8 66 05 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bb3d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb3d9:	89 04 24             	mov    %eax,(%esp)
 86bb3dc:	e8 51 50 a6 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 86bb3e1:	85 c0                	test   %eax,%eax
 86bb3e3:	0f 95 c0             	setne  %al
 86bb3e6:	84 c0                	test   %al,%al
 86bb3e8:	74 23                	je     86bb40d <_ZN7WarRoom4JoinEP5CUserRi+0x573>
 86bb3ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb3ed:	89 04 24             	mov    %eax,(%esp)
 86bb3f0:	e8 3d 50 a6 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 86bb3f5:	0f b6 40 75          	movzbl 0x75(%eax),%eax
 86bb3f9:	0f b6 c0             	movzbl %al,%eax
 86bb3fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb400:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb403:	89 04 24             	mov    %eax,(%esp)
 86bb406:	e8 15 05 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bb40b:	eb 13                	jmp    86bb420 <_ZN7WarRoom4JoinEP5CUserRi+0x586>
 86bb40d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bb414:	00 
 86bb415:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb418:	89 04 24             	mov    %eax,(%esp)
 86bb41b:	e8 00 05 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bb420:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb427:	00 
 86bb428:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb42b:	89 04 24             	mov    %eax,(%esp)
 86bb42e:	e8 25 05 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bb433:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb436:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb43a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb43d:	89 04 24             	mov    %eax,(%esp)
 86bb440:	e8 87 2c 00 00       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bb445:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb448:	89 04 24             	mov    %eax,(%esp)
 86bb44b:	e8 96 04 a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86bb450:	c7 44 24 08 5d 00 00 	movl   $0x5d,0x8(%esp)
 86bb457:	00 
 86bb458:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb45f:	00 
 86bb460:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb463:	89 04 24             	mov    %eax,(%esp)
 86bb466:	e8 91 04 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bb46b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb472:	00 
 86bb473:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb476:	89 04 24             	mov    %eax,(%esp)
 86bb479:	e8 a2 04 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bb47e:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb481:	89 04 24             	mov    %eax,(%esp)
 86bb484:	e8 ff ec ab ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 86bb489:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb48d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb490:	89 04 24             	mov    %eax,(%esp)
 86bb493:	e8 a4 04 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bb498:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86bb49f:	e8 fa 07 a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86bb4a4:	8b 55 08             	mov    0x8(%ebp),%edx
 86bb4a7:	8b 92 cc 01 00 00    	mov    0x1cc(%edx),%edx
 86bb4ad:	29 d0                	sub    %edx,%eax
 86bb4af:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb4b3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb4b6:	89 04 24             	mov    %eax,(%esp)
 86bb4b9:	e8 e6 e9 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bb4be:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb4c5:	00 
 86bb4c6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb4c9:	89 04 24             	mov    %eax,(%esp)
 86bb4cc:	e8 87 04 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bb4d1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb4d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb4d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bb4db:	89 04 24             	mov    %eax,(%esp)
 86bb4de:	e8 d7 d0 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86bb4e3:	bb 00 00 00 00       	mov    $0x0,%ebx
 86bb4e8:	eb 15                	jmp    86bb4ff <_ZN7WarRoom4JoinEP5CUserRi+0x665>
 86bb4ea:	89 d3                	mov    %edx,%ebx
 86bb4ec:	89 c6                	mov    %eax,%esi
 86bb4ee:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb4f1:	89 04 24             	mov    %eax,(%esp)
 86bb4f4:	e8 87 29 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bb4f9:	89 f0                	mov    %esi,%eax
 86bb4fb:	89 da                	mov    %ebx,%edx
 86bb4fd:	eb 0d                	jmp    86bb50c <_ZN7WarRoom4JoinEP5CUserRi+0x672>
 86bb4ff:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bb502:	89 04 24             	mov    %eax,(%esp)
 86bb505:	e8 76 29 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bb50a:	eb 1b                	jmp    86bb527 <_ZN7WarRoom4JoinEP5CUserRi+0x68d>
 86bb50c:	89 d3                	mov    %edx,%ebx
 86bb50e:	89 c6                	mov    %eax,%esi
 86bb510:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb513:	89 04 24             	mov    %eax,(%esp)
 86bb516:	e8 65 29 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bb51b:	89 f0                	mov    %esi,%eax
 86bb51d:	89 da                	mov    %ebx,%edx
 86bb51f:	89 04 24             	mov    %eax,(%esp)
 86bb522:	e8 29 82 42 00       	call   8ae3750 <_Unwind_Resume>
 86bb527:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bb52a:	89 04 24             	mov    %eax,(%esp)
 86bb52d:	e8 4e 29 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bb532:	89 d8                	mov    %ebx,%eax
 86bb534:	83 c4 40             	add    $0x40,%esp
 86bb537:	5b                   	pop    %ebx
 86bb538:	5e                   	pop    %esi
 86bb539:	5d                   	pop    %ebp
 86bb53a:	c3                   	ret
 86bb53b:	90                   	nop

```

```c
// WarRoom::Join @ 0x86bae9a

/* WarRoom::Join(CUser*, int&) */

undefined4 __thiscall WarRoom::Join(WarRoom *this,CUser *param_1,int *param_2)

{
  WarRoom WVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  PacketGuard local_34 [12];
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = GetWaiterCount(this);
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 086baec1 to 086baec5 has its CatchHandler @ 086bb50c */
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 086baedc to 086bb4e2 has its CatchHandler @ 086bb4ea */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,2);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xb);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,local_1c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_1c);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
      CUser::make_basic_info
                (*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc),(char *)local_28,'\x01');
      uVar4 = CUser::get_unique_id(*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
      iVar5 = CNetwork<4096,450000>::get_inner_ip
                        ((CNetwork<4096,450000> *)
                         (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
      iVar5 = CNetwork<4096,450000>::get_ip
                        ((CNetwork<4096,450000> *)
                         (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
      uVar4 = CNetwork<4096,450000>::get_port
                        ((CNetwork<4096,450000> *)
                         (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) + 0xe0));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
      iVar5 = CUser::get_acc_id(*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
      cVar2 = CNetwork<4096,450000>::get_nat_type
                        ((CNetwork<4096,450000> *)
                         (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) + 0xe0));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
      iVar5 = CNetwork<4096,450000>::get_mtu
                        ((CNetwork<4096,450000> *)
                         (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
      iVar5 = CUserCharacInfo::getCurCharacR
                        (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
      if (iVar5 == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
      }
      else {
        iVar5 = CUserCharacInfo::getCurCharacR
                          (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(iVar5 + 0x75));
      }
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  local_18 = -1;
  local_10 = 0;
  do {
    if (5 < local_10) {
LAB_086bb1a7:
      if (local_18 == -1) {
        uVar6 = 4;
      }
      else {
        CUser::Send(param_1,local_28);
        CUser::Send(param_1,local_34);
        if (*(int *)(this + 0x1d0) != 0) {
          WVar1 = *this;
          pcVar3 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0x1d0));
          cUserHistoryLog::EnterDungeon
                    ((cUserHistoryLog *)(param_1 + 0x79700),pcVar3,(uint)(byte)WVar1);
        }
        *(undefined4 *)(this + (local_18 + 0x50) * 4 + 8) = 0;
        this[local_18 + 0x184] = (WarRoom)0x1;
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,1);
        CUser::make_basic_info(param_1,(char *)local_28,'\x01');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        SendToRoom(this,local_28);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xb);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
        uVar4 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
        iVar5 = CNetwork<4096,450000>::get_inner_ip((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
        iVar5 = CNetwork<4096,450000>::get_ip((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
        uVar4 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
        iVar5 = CUser::get_acc_id(param_1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
        cVar2 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
        iVar5 = CNetwork<4096,450000>::get_mtu((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar5);
        iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
        if (iVar5 == 0) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
        }
        else {
          iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(iVar5 + 0x75))
          ;
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
        SendToRoom(this,local_34);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x5d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
        iVar5 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,iVar5);
        iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,iVar5 - *(int *)(this + 0x1cc))
        ;
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        CUser::Send(param_1,local_28);
        uVar6 = 0;
      }
                    /* try { // try from 086bb505 to 086bb509 has its CatchHandler @ 086bb50c */
      PacketGuard::~PacketGuard(local_34);
      PacketGuard::~PacketGuard(local_28);
      return uVar6;
    }
    if ((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) == 0) &&
       (*(int *)(this + (local_10 + 0x50) * 4 + 8) == 0xff)) {
      local_18 = local_10;
      *(CUser **)(this + (local_10 + 0x48) * 4 + 0xc) = param_1;
      CUser::SetWarRoomIndex(param_1,(short)*(undefined4 *)(this + 4));
      *param_2 = local_10;
      goto LAB_086bb1a7;
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## MakeRoomInfo

```asm
// === 086bdd58 WarRoom::MakeRoomInfo  [0x086bdd58-0x86bde9f] ===
 86bdd58:	55                   	push   %ebp
 86bdd59:	89 e5                	mov    %esp,%ebp
 86bdd5b:	83 ec 28             	sub    $0x28,%esp
 86bdd5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bdd61:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bdd64:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdd67:	8b 50 04             	mov    0x4(%eax),%edx
 86bdd6a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bdd6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bdd71:	89 04 24             	mov    %eax,(%esp)
 86bdd74:	e8 2b c1 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bdd79:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdd7c:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 86bdd80:	0f b6 d0             	movzbl %al,%edx
 86bdd83:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bdd86:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bdd8a:	89 04 24             	mov    %eax,(%esp)
 86bdd8d:	e8 8e db a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdd92:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdd95:	0f b6 00             	movzbl (%eax),%eax
 86bdd98:	0f b6 d0             	movzbl %al,%edx
 86bdd9b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bdd9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bdda2:	89 04 24             	mov    %eax,(%esp)
 86bdda5:	e8 76 db a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bddaa:	8b 45 08             	mov    0x8(%ebp),%eax
 86bddad:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 86bddb1:	0f b6 d0             	movzbl %al,%edx
 86bddb4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bddb7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bddbb:	89 04 24             	mov    %eax,(%esp)
 86bddbe:	e8 5d db a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bddc3:	8b 45 08             	mov    0x8(%ebp),%eax
 86bddc6:	8b 80 44 01 00 00    	mov    0x144(%eax),%eax
 86bddcc:	89 c2                	mov    %eax,%edx
 86bddce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bddd1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bddd5:	89 04 24             	mov    %eax,(%esp)
 86bddd8:	e8 43 db a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdddd:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdde0:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bdde6:	85 c0                	test   %eax,%eax
 86bdde8:	74 20                	je     86bde0a <_ZN7WarRoom12MakeRoomInfoEPc+0xb2>
 86bddea:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdded:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bddf3:	8b 90 04 07 00 00    	mov    0x704(%eax),%edx
 86bddf9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bddfc:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bde00:	89 04 24             	mov    %eax,(%esp)
 86bde03:	e8 9c c0 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bde08:	eb 13                	jmp    86bde1d <_ZN7WarRoom12MakeRoomInfoEPc+0xc5>
 86bde0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bde0d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bde14:	00 
 86bde15:	89 04 24             	mov    %eax,(%esp)
 86bde18:	e8 87 c0 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bde1d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bde24:	eb 6d                	jmp    86bde93 <_ZN7WarRoom12MakeRoomInfoEPc+0x13b>
 86bde26:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bde29:	8b 45 08             	mov    0x8(%ebp),%eax
 86bde2c:	83 c2 50             	add    $0x50,%edx
 86bde2f:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 86bde33:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bde36:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bde3a:	89 04 24             	mov    %eax,(%esp)
 86bde3d:	e8 de da a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bde42:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bde45:	8b 45 08             	mov    0x8(%ebp),%eax
 86bde48:	83 c2 48             	add    $0x48,%edx
 86bde4b:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bde4f:	85 c0                	test   %eax,%eax
 86bde51:	74 29                	je     86bde7c <_ZN7WarRoom12MakeRoomInfoEPc+0x124>
 86bde53:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bde56:	8b 45 08             	mov    0x8(%ebp),%eax
 86bde59:	83 c2 48             	add    $0x48,%edx
 86bde5c:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bde60:	89 04 24             	mov    %eax,(%esp)
 86bde63:	e8 14 c5 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86bde68:	0f b7 d0             	movzwl %ax,%edx
 86bde6b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bde6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bde72:	89 04 24             	mov    %eax,(%esp)
 86bde75:	e8 2a c0 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bde7a:	eb 13                	jmp    86bde8f <_ZN7WarRoom12MakeRoomInfoEPc+0x137>
 86bde7c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bde7f:	c7 44 24 04 ff ff 00 	movl   $0xffff,0x4(%esp)
 86bde86:	00 
 86bde87:	89 04 24             	mov    %eax,(%esp)
 86bde8a:	e8 15 c0 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bde8f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bde93:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bde97:	0f 9e c0             	setle  %al
 86bde9a:	84 c0                	test   %al,%al
 86bde9c:	75 88                	jne    86bde26 <_ZN7WarRoom12MakeRoomInfoEPc+0xce>
 86bde9e:	c9                   	leave
 86bde9f:	c3                   	ret

```

```c
// WarRoom::MakeRoomInfo @ 0x86bdd58

/* WarRoom::MakeRoomInfo(char*) */

void __thiscall WarRoom::MakeRoomInfo(WarRoom *this,char *param_1)

{
  uint uVar1;
  int local_10;
  
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[8]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)*this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[1]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x144));
  if (*(int *)(this + 0x1d0) == 0) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0);
  }
  else {
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 0x1d0) + 0x704));
  }
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)param_1,*(int *)(this + (local_10 + 0x50) * 4 + 8));
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) == 0) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0xffff);
    }
    else {
      uVar1 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar1 & 0xffff);
    }
  }
  return;
}

```

---

## MakeSlotInfo

```asm
// === 086bdea0 WarRoom::MakeSlotInfo  [0x086bdea0-0x86be079] ===
 86bdea0:	55                   	push   %ebp
 86bdea1:	89 e5                	mov    %esp,%ebp
 86bdea3:	83 ec 38             	sub    $0x38,%esp
 86bdea6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bdea9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86bdeac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bdeaf:	c7 44 24 08 59 00 00 	movl   $0x59,0x8(%esp)
 86bdeb6:	00 
 86bdeb7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bdebe:	00 
 86bdebf:	89 04 24             	mov    %eax,(%esp)
 86bdec2:	e8 35 da a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bdec7:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdeca:	8b 50 04             	mov    0x4(%eax),%edx
 86bdecd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bded0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bded4:	89 04 24             	mov    %eax,(%esp)
 86bded7:	e8 c8 bf a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bdedc:	81 7d 10 ff ff 00 00 	cmpl   $0xffff,0x10(%ebp)
 86bdee3:	0f 85 ee 00 00 00    	jne    86bdfd7 <_ZN7WarRoom12MakeSlotInfoEPci+0x137>
 86bdee9:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdeec:	89 04 24             	mov    %eax,(%esp)
 86bdeef:	e8 d8 cc ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86bdef4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bdef7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bdefa:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bdefd:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bdf01:	89 04 24             	mov    %eax,(%esp)
 86bdf04:	e8 17 da a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdf09:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86bdf0d:	75 45                	jne    86bdf54 <_ZN7WarRoom12MakeSlotInfoEPci+0xb4>
 86bdf0f:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdf12:	8b 80 44 01 00 00    	mov    0x144(%eax),%eax
 86bdf18:	89 c2                	mov    %eax,%edx
 86bdf1a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdf1d:	8b 40 04             	mov    0x4(%eax),%eax
 86bdf20:	89 54 24 18          	mov    %edx,0x18(%esp)
 86bdf24:	89 44 24 14          	mov    %eax,0x14(%esp)
 86bdf28:	c7 44 24 10 94 96 cf 	movl   $0x8cf9694,0x10(%esp)
 86bdf2f:	08 
 86bdf30:	c7 44 24 0c 93 07 00 	movl   $0x793,0xc(%esp)
 86bdf37:	00 
 86bdf38:	c7 44 24 08 40 a5 cf 	movl   $0x8cfa540,0x8(%esp)
 86bdf3f:	08 
 86bdf40:	c7 44 24 04 3b 95 cf 	movl   $0x8cf953b,0x4(%esp)
 86bdf47:	08 
 86bdf48:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86bdf4f:	e8 b6 5c 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86bdf54:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bdf5b:	eb 6a                	jmp    86bdfc7 <_ZN7WarRoom12MakeSlotInfoEPci+0x127>
 86bdf5d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bdf60:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdf63:	83 c2 48             	add    $0x48,%edx
 86bdf66:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bdf6a:	85 c0                	test   %eax,%eax
 86bdf6c:	74 55                	je     86bdfc3 <_ZN7WarRoom12MakeSlotInfoEPci+0x123>
 86bdf6e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bdf71:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bdf74:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bdf78:	89 04 24             	mov    %eax,(%esp)
 86bdf7b:	e8 a0 d9 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdf80:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bdf83:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdf86:	83 c2 50             	add    $0x50,%edx
 86bdf89:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 86bdf8d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bdf90:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bdf94:	89 04 24             	mov    %eax,(%esp)
 86bdf97:	e8 84 d9 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdf9c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bdf9f:	8b 45 08             	mov    0x8(%ebp),%eax
 86bdfa2:	83 c2 48             	add    $0x48,%edx
 86bdfa5:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bdfa9:	89 04 24             	mov    %eax,(%esp)
 86bdfac:	e8 cb c3 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86bdfb1:	0f b7 d0             	movzwl %ax,%edx
 86bdfb4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bdfb7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bdfbb:	89 04 24             	mov    %eax,(%esp)
 86bdfbe:	e8 e1 be a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bdfc3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bdfc7:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bdfcb:	0f 9e c0             	setle  %al
 86bdfce:	84 c0                	test   %al,%al
 86bdfd0:	75 8b                	jne    86bdf5d <_ZN7WarRoom12MakeSlotInfoEPci+0xbd>
 86bdfd2:	e9 8e 00 00 00       	jmp    86be065 <_ZN7WarRoom12MakeSlotInfoEPci+0x1c5>
 86bdfd7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bdfda:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bdfe1:	00 
 86bdfe2:	89 04 24             	mov    %eax,(%esp)
 86bdfe5:	e8 36 d9 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdfea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bdfed:	8b 55 10             	mov    0x10(%ebp),%edx
 86bdff0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bdff4:	89 04 24             	mov    %eax,(%esp)
 86bdff7:	e8 24 d9 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bdffc:	8b 55 10             	mov    0x10(%ebp),%edx
 86bdfff:	8b 45 08             	mov    0x8(%ebp),%eax
 86be002:	83 c2 50             	add    $0x50,%edx
 86be005:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 86be009:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86be00c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be010:	89 04 24             	mov    %eax,(%esp)
 86be013:	e8 08 d9 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86be018:	8b 55 10             	mov    0x10(%ebp),%edx
 86be01b:	8b 45 08             	mov    0x8(%ebp),%eax
 86be01e:	83 c2 48             	add    $0x48,%edx
 86be021:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be025:	85 c0                	test   %eax,%eax
 86be027:	74 29                	je     86be052 <_ZN7WarRoom12MakeSlotInfoEPci+0x1b2>
 86be029:	8b 55 10             	mov    0x10(%ebp),%edx
 86be02c:	8b 45 08             	mov    0x8(%ebp),%eax
 86be02f:	83 c2 48             	add    $0x48,%edx
 86be032:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be036:	89 04 24             	mov    %eax,(%esp)
 86be039:	e8 3e c3 a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86be03e:	0f b7 d0             	movzwl %ax,%edx
 86be041:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86be044:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be048:	89 04 24             	mov    %eax,(%esp)
 86be04b:	e8 54 be a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86be050:	eb 13                	jmp    86be065 <_ZN7WarRoom12MakeSlotInfoEPci+0x1c5>
 86be052:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86be055:	c7 44 24 04 ff ff 00 	movl   $0xffff,0x4(%esp)
 86be05c:	00 
 86be05d:	89 04 24             	mov    %eax,(%esp)
 86be060:	e8 3f be a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86be065:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86be068:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86be06f:	00 
 86be070:	89 04 24             	mov    %eax,(%esp)
 86be073:	e8 e0 d8 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86be078:	c9                   	leave
 86be079:	c3                   	ret

```

```c
// WarRoom::MakeSlotInfo @ 0x86bdea0

/* WarRoom::MakeSlotInfo(char*, int) */

void __thiscall WarRoom::MakeSlotInfo(WarRoom *this,char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x59);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  if (param_2 == 0xffff) {
    iVar1 = GetWaiterCount(this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar1);
    if (iVar1 == 0) {
      LogManager::logFormat
                (1,"WarRoom.cpp","void WarRoom::MakeSlotInfo(char*, int)",0x793,
                 "Send Member 0 PvpRoom %d State(%d)",*(undefined4 *)(this + 4),
                 *(undefined4 *)(this + 0x144));
    }
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_10);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)param_1,*(int *)(this + (local_10 + 0x50) * 4 + 8));
        uVar2 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
      }
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,param_2);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)param_1,*(int *)(this + (param_2 + 0x50) * 4 + 8));
    if (*(int *)(this + (param_2 + 0x48) * 4 + 0xc) == 0) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0xffff);
    }
    else {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + (param_2 + 0x48) * 4 + 0xc));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## MakeStateInfo

```asm
// === 086be07a WarRoom::MakeStateInfo  [0x086be07a-0x86be0cb] ===
 86be07a:	55                   	push   %ebp
 86be07b:	89 e5                	mov    %esp,%ebp
 86be07d:	83 ec 28             	sub    $0x28,%esp
 86be080:	8b 45 0c             	mov    0xc(%ebp),%eax
 86be083:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86be086:	8b 45 08             	mov    0x8(%ebp),%eax
 86be089:	8b 50 04             	mov    0x4(%eax),%edx
 86be08c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86be08f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be093:	89 04 24             	mov    %eax,(%esp)
 86be096:	e8 09 be a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86be09b:	8b 45 08             	mov    0x8(%ebp),%eax
 86be09e:	8b 80 44 01 00 00    	mov    0x144(%eax),%eax
 86be0a4:	89 c2                	mov    %eax,%edx
 86be0a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86be0a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be0ad:	89 04 24             	mov    %eax,(%esp)
 86be0b0:	e8 6b d8 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86be0b5:	8b 45 08             	mov    0x8(%ebp),%eax
 86be0b8:	8b 50 0c             	mov    0xc(%eax),%edx
 86be0bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86be0be:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be0c2:	89 04 24             	mov    %eax,(%esp)
 86be0c5:	e8 da bd a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86be0ca:	c9                   	leave
 86be0cb:	c3                   	ret

```

```c
// WarRoom::MakeStateInfo @ 0x86be07a

/* WarRoom::MakeStateInfo(char*) */

void __thiscall WarRoom::MakeStateInfo(WarRoom *this,char *param_1)

{
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x144));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0xc));
  return;
}

```

---

## OnEnterState

```asm
// === 086bb71c WarRoom::OnEnterState  [0x086bb71c-0x86bbea5] ===
 86bb71c:	55                   	push   %ebp
 86bb71d:	89 e5                	mov    %esp,%ebp
 86bb71f:	57                   	push   %edi
 86bb720:	56                   	push   %esi
 86bb721:	53                   	push   %ebx
 86bb722:	83 ec 7c             	sub    $0x7c,%esp
 86bb725:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb728:	89 04 24             	mov    %eax,(%esp)
 86bb72b:	e8 f0 29 00 00       	call   86be120 <_ZN7WarRoom14CancelAllTimerEv>
 86bb730:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb733:	89 04 24             	mov    %eax,(%esp)
 86bb736:	e8 47 fe ff ff       	call   86bb582 <_ZN7WarRoom16InvalidUserCheckEv>
 86bb73b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb73e:	89 04 24             	mov    %eax,(%esp)
 86bb741:	e8 2c ff ff ff       	call   86bb672 <_ZN7WarRoom15SendStatePacketEv>
 86bb746:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb749:	8b 80 44 01 00 00    	mov    0x144(%eax),%eax
 86bb74f:	83 f8 05             	cmp    $0x5,%eax
 86bb752:	0f 87 46 07 00 00    	ja     86bbe9e <_ZN7WarRoom12OnEnterStateEv+0x782>
 86bb758:	8b 04 85 14 95 cf 08 	mov    0x8cf9514(,%eax,4),%eax
 86bb75f:	ff e0                	jmp    *%eax
 86bb761:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb764:	89 04 24             	mov    %eax,(%esp)
 86bb767:	e8 e4 f0 ff ff       	call   86ba850 <_ZN7WarRoom13UpdateBanListEv>
 86bb76c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb76f:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 86bb773:	84 c0                	test   %al,%al
 86bb775:	0f 84 1f 07 00 00    	je     86bbe9a <_ZN7WarRoom12OnEnterStateEv+0x77e>
 86bb77b:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 86bb782:	eb 27                	jmp    86bb7ab <_ZN7WarRoom12OnEnterStateEv+0x8f>
 86bb784:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86bb787:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb78a:	83 c2 48             	add    $0x48,%edx
 86bb78d:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb791:	85 c0                	test   %eax,%eax
 86bb793:	74 12                	je     86bb7a7 <_ZN7WarRoom12OnEnterStateEv+0x8b>
 86bb795:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86bb798:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb79c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb79f:	89 04 24             	mov    %eax,(%esp)
 86bb7a2:	e8 af 1a 00 00       	call   86bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>
 86bb7a7:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 86bb7ab:	83 7d cc 05          	cmpl   $0x5,-0x34(%ebp)
 86bb7af:	0f 9e c0             	setle  %al
 86bb7b2:	84 c0                	test   %al,%al
 86bb7b4:	75 ce                	jne    86bb784 <_ZN7WarRoom12OnEnterStateEv+0x68>
 86bb7b6:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb7b9:	89 04 24             	mov    %eax,(%esp)
 86bb7bc:	e8 5f 1d 00 00       	call   86bd520 <_ZN7WarRoom5CloseEv>
 86bb7c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb7c4:	c6 40 30 00          	movb   $0x0,0x30(%eax)
 86bb7c8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bb7cb:	89 04 24             	mov    %eax,(%esp)
 86bb7ce:	e8 79 25 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bb7d3:	c7 44 24 08 58 00 00 	movl   $0x58,0x8(%esp)
 86bb7da:	00 
 86bb7db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bb7e2:	00 
 86bb7e3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bb7e6:	89 04 24             	mov    %eax,(%esp)
 86bb7e9:	e8 0e 01 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bb7ee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb7f5:	00 
 86bb7f6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bb7f9:	89 04 24             	mov    %eax,(%esp)
 86bb7fc:	e8 a3 e6 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bb801:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bb804:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb808:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb80b:	89 04 24             	mov    %eax,(%esp)
 86bb80e:	e8 67 28 00 00       	call   86be07a <_ZN7WarRoom13MakeStateInfoEPc>
 86bb813:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb81a:	00 
 86bb81b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bb81e:	89 04 24             	mov    %eax,(%esp)
 86bb821:	e8 32 01 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bb826:	e8 7c eb a1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86bb82b:	8d 55 c0             	lea    -0x40(%ebp),%edx
 86bb82e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bb832:	89 04 24             	mov    %eax,(%esp)
 86bb835:	e8 da d3 00 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 86bb83a:	eb 1b                	jmp    86bb857 <_ZN7WarRoom12OnEnterStateEv+0x13b>
 86bb83c:	89 d3                	mov    %edx,%ebx
 86bb83e:	89 c6                	mov    %eax,%esi
 86bb840:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bb843:	89 04 24             	mov    %eax,(%esp)
 86bb846:	e8 35 26 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bb84b:	89 f0                	mov    %esi,%eax
 86bb84d:	89 da                	mov    %ebx,%edx
 86bb84f:	89 04 24             	mov    %eax,(%esp)
 86bb852:	e8 f9 7e 42 00       	call   8ae3750 <_Unwind_Resume>
 86bb857:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86bb85a:	89 04 24             	mov    %eax,(%esp)
 86bb85d:	e8 1e 26 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bb862:	e9 37 06 00 00       	jmp    86bbe9e <_ZN7WarRoom12OnEnterStateEv+0x782>
 86bb867:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86bb86e:	e8 2b 04 a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86bb873:	8b 55 08             	mov    0x8(%ebp),%edx
 86bb876:	89 82 cc 01 00 00    	mov    %eax,0x1cc(%edx)
 86bb87c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb87f:	89 04 24             	mov    %eax,(%esp)
 86bb882:	e8 07 f2 ff ff       	call   86baa8e <_ZN7WarRoom11BattleResetEv>
 86bb887:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86bb88e:	eb 33                	jmp    86bb8c3 <_ZN7WarRoom12OnEnterStateEv+0x1a7>
 86bb890:	8b 55 d0             	mov    -0x30(%ebp),%edx
 86bb893:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb896:	83 c2 48             	add    $0x48,%edx
 86bb899:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb89d:	85 c0                	test   %eax,%eax
 86bb89f:	74 10                	je     86bb8b1 <_ZN7WarRoom12OnEnterStateEv+0x195>
 86bb8a1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86bb8a4:	8b 55 08             	mov    0x8(%ebp),%edx
 86bb8a7:	c6 84 02 84 01 00 00 	movb   $0x1,0x184(%edx,%eax,1)
 86bb8ae:	01 
 86bb8af:	eb 0e                	jmp    86bb8bf <_ZN7WarRoom12OnEnterStateEv+0x1a3>
 86bb8b1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86bb8b4:	8b 55 08             	mov    0x8(%ebp),%edx
 86bb8b7:	c6 84 02 84 01 00 00 	movb   $0x0,0x184(%edx,%eax,1)
 86bb8be:	00 
 86bb8bf:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 86bb8c3:	83 7d d0 05          	cmpl   $0x5,-0x30(%ebp)
 86bb8c7:	0f 9e c0             	setle  %al
 86bb8ca:	84 c0                	test   %al,%al
 86bb8cc:	75 c2                	jne    86bb890 <_ZN7WarRoom12OnEnterStateEv+0x174>
 86bb8ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb8d1:	89 04 24             	mov    %eax,(%esp)
 86bb8d4:	e8 f3 f2 ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86bb8d9:	83 f8 02             	cmp    $0x2,%eax
 86bb8dc:	0f 9e c0             	setle  %al
 86bb8df:	84 c0                	test   %al,%al
 86bb8e1:	74 70                	je     86bb953 <_ZN7WarRoom12OnEnterStateEv+0x237>
 86bb8e3:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 86bb8e7:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 86bb8ee:	eb 35                	jmp    86bb925 <_ZN7WarRoom12OnEnterStateEv+0x209>
 86bb8f0:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86bb8f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb8f6:	83 c2 48             	add    $0x48,%edx
 86bb8f9:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb8fd:	85 c0                	test   %eax,%eax
 86bb8ff:	74 1f                	je     86bb920 <_ZN7WarRoom12OnEnterStateEv+0x204>
 86bb901:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86bb904:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb907:	83 c2 48             	add    $0x48,%edx
 86bb90a:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bb90e:	89 04 24             	mov    %eax,(%esp)
 86bb911:	e8 86 9f a8 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 86bb916:	84 c0                	test   %al,%al
 86bb918:	74 07                	je     86bb921 <_ZN7WarRoom12OnEnterStateEv+0x205>
 86bb91a:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 86bb91e:	eb 10                	jmp    86bb930 <_ZN7WarRoom12OnEnterStateEv+0x214>
 86bb920:	90                   	nop
 86bb921:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 86bb925:	83 7d d8 05          	cmpl   $0x5,-0x28(%ebp)
 86bb929:	0f 9e c0             	setle  %al
 86bb92c:	84 c0                	test   %al,%al
 86bb92e:	75 c0                	jne    86bb8f0 <_ZN7WarRoom12OnEnterStateEv+0x1d4>
 86bb930:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 86bb934:	83 f0 01             	xor    $0x1,%eax
 86bb937:	84 c0                	test   %al,%al
 86bb939:	74 18                	je     86bb953 <_ZN7WarRoom12OnEnterStateEv+0x237>
 86bb93b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bb942:	00 
 86bb943:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb946:	89 04 24             	mov    %eax,(%esp)
 86bb949:	e8 ee fb ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86bb94e:	e9 4b 05 00 00       	jmp    86bbe9e <_ZN7WarRoom12OnEnterStateEv+0x782>
 86bb953:	c7 44 24 04 41 00 00 	movl   $0x41,0x4(%esp)
 86bb95a:	00 
 86bb95b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb95e:	89 04 24             	mov    %eax,(%esp)
 86bb961:	e8 be 51 00 00       	call   86c0b24 <_ZN7WarRoom11GenTimerKeyE13TIMER_MESSAGE>
 86bb966:	89 c7                	mov    %eax,%edi
 86bb968:	e8 2e 08 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bb96d:	8b 80 a8 88 00 00    	mov    0x88a8(%eax),%eax
 86bb973:	89 c3                	mov    %eax,%ebx
 86bb975:	89 c6                	mov    %eax,%esi
 86bb977:	c1 fe 1f             	sar    $0x1f,%esi
 86bb97a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb97d:	8b 40 04             	mov    0x4(%eax),%eax
 86bb980:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 86bb983:	e8 f4 aa a3 ff       	call   80f647c <_Z12G_TimerQueuev>
 86bb988:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 86bb98f:	00 
 86bb990:	89 7c 24 18          	mov    %edi,0x18(%esp)
 86bb994:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86bb998:	89 74 24 14          	mov    %esi,0x14(%esp)
 86bb99c:	c7 44 24 0c 41 00 00 	movl   $0x41,0xc(%esp)
 86bb9a3:	00 
 86bb9a4:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 86bb9a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bb9ab:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86bb9b2:	00 
 86bb9b3:	89 04 24             	mov    %eax,(%esp)
 86bb9b6:	e8 a5 54 f7 ff       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 86bb9bb:	e9 de 04 00 00       	jmp    86bbe9e <_ZN7WarRoom12OnEnterStateEv+0x782>
 86bb9c0:	c7 44 24 04 42 00 00 	movl   $0x42,0x4(%esp)
 86bb9c7:	00 
 86bb9c8:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb9cb:	89 04 24             	mov    %eax,(%esp)
 86bb9ce:	e8 51 51 00 00       	call   86c0b24 <_ZN7WarRoom11GenTimerKeyE13TIMER_MESSAGE>
 86bb9d3:	89 c3                	mov    %eax,%ebx
 86bb9d5:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb9d8:	8b 70 04             	mov    0x4(%eax),%esi
 86bb9db:	e8 9c aa a3 ff       	call   80f647c <_Z12G_TimerQueuev>
 86bb9e0:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 86bb9e7:	00 
 86bb9e8:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 86bb9ec:	c7 44 24 10 f8 2a 00 	movl   $0x2af8,0x10(%esp)
 86bb9f3:	00 
 86bb9f4:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86bb9fb:	00 
 86bb9fc:	c7 44 24 0c 42 00 00 	movl   $0x42,0xc(%esp)
 86bba03:	00 
 86bba04:	89 74 24 08          	mov    %esi,0x8(%esp)
 86bba08:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86bba0f:	00 
 86bba10:	89 04 24             	mov    %eax,(%esp)
 86bba13:	e8 48 54 f7 ff       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 86bba18:	8b 45 08             	mov    0x8(%ebp),%eax
 86bba1b:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 86bba22:	e9 77 04 00 00       	jmp    86bbe9e <_ZN7WarRoom12OnEnterStateEv+0x782>
 86bba27:	8b 45 08             	mov    0x8(%ebp),%eax
 86bba2a:	89 04 24             	mov    %eax,(%esp)
 86bba2d:	e8 2e 0a 00 00       	call   86bc460 <_ZN7WarRoom9ReviveAllEv>
 86bba32:	c7 44 24 04 43 00 00 	movl   $0x43,0x4(%esp)
 86bba39:	00 
 86bba3a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bba3d:	89 04 24             	mov    %eax,(%esp)
 86bba40:	e8 df 50 00 00       	call   86c0b24 <_ZN7WarRoom11GenTimerKeyE13TIMER_MESSAGE>
 86bba45:	89 c3                	mov    %eax,%ebx
 86bba47:	8b 45 08             	mov    0x8(%ebp),%eax
 86bba4a:	8b 70 04             	mov    0x4(%eax),%esi
 86bba4d:	e8 2a aa a3 ff       	call   80f647c <_Z12G_TimerQueuev>
 86bba52:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86bba59:	00 
 86bba5a:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86bba5e:	c7 44 24 10 0a 00 00 	movl   $0xa,0x10(%esp)
 86bba65:	00 
 86bba66:	c7 44 24 0c 43 00 00 	movl   $0x43,0xc(%esp)
 86bba6d:	00 
 86bba6e:	89 74 24 08          	mov    %esi,0x8(%esp)
 86bba72:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86bba79:	00 
 86bba7a:	89 04 24             	mov    %eax,(%esp)
 86bba7d:	e8 94 53 f7 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86bba82:	8b 45 08             	mov    0x8(%ebp),%eax
 86bba85:	8b 50 0c             	mov    0xc(%eax),%edx
 86bba88:	8b 45 08             	mov    0x8(%ebp),%eax
 86bba8b:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bba91:	8b 80 44 07 00 00    	mov    0x744(%eax),%eax
 86bba97:	39 c2                	cmp    %eax,%edx
 86bba99:	0f 84 fe 03 00 00    	je     86bbe9d <_ZN7WarRoom12OnEnterStateEv+0x781>
 86bba9f:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbaa2:	8b 40 0c             	mov    0xc(%eax),%eax
 86bbaa5:	8d 50 01             	lea    0x1(%eax),%edx
 86bbaa8:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbaab:	89 50 0c             	mov    %edx,0xc(%eax)
 86bbaae:	e9 eb 03 00 00       	jmp    86bbe9e <_ZN7WarRoom12OnEnterStateEv+0x782>
 86bbab3:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbab6:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 86bbaba:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbabd:	c6 40 11 00          	movb   $0x0,0x11(%eax)
 86bbac1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bbac4:	89 04 24             	mov    %eax,(%esp)
 86bbac7:	e8 80 22 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bbacc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bbacf:	89 04 24             	mov    %eax,(%esp)
 86bbad2:	e8 0f fe a0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86bbad7:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbada:	89 04 24             	mov    %eax,(%esp)
 86bbadd:	e8 ea f0 ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86bbae2:	89 c1                	mov    %eax,%ecx
 86bbae4:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbae7:	0f b6 00             	movzbl (%eax),%eax
 86bbaea:	0f b6 c0             	movzbl %al,%eax
 86bbaed:	83 c0 01             	add    $0x1,%eax
 86bbaf0:	89 c2                	mov    %eax,%edx
 86bbaf2:	89 d0                	mov    %edx,%eax
 86bbaf4:	c1 e0 02             	shl    $0x2,%eax
 86bbaf7:	01 d0                	add    %edx,%eax
 86bbaf9:	01 c0                	add    %eax,%eax
 86bbafb:	0f b6 d8             	movzbl %al,%ebx
 86bbafe:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbb01:	8b 90 d4 01 00 00    	mov    0x1d4(%eax),%edx
 86bbb07:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbb0a:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bbb10:	8b 75 08             	mov    0x8(%ebp),%esi
 86bbb13:	83 c6 34             	add    $0x34,%esi
 86bbb16:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86bbb1a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86bbb1e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86bbb22:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bbb26:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bbb29:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bbb2d:	89 34 24             	mov    %esi,(%esp)
 86bbb30:	e8 03 cf ff ff       	call   86b8a38 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi>
 86bbb35:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bbb38:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bbb3c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbb3f:	89 04 24             	mov    %eax,(%esp)
 86bbb42:	e8 85 25 00 00       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bbb47:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 86bbb4e:	eb 3d                	jmp    86bbb8d <_ZN7WarRoom12OnEnterStateEv+0x471>
 86bbb50:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86bbb53:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbb56:	83 c2 48             	add    $0x48,%edx
 86bbb59:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbb5d:	85 c0                	test   %eax,%eax
 86bbb5f:	74 28                	je     86bbb89 <_ZN7WarRoom12OnEnterStateEv+0x46d>
 86bbb61:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbb64:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bbb6a:	8b 90 e8 07 00 00    	mov    0x7e8(%eax),%edx
 86bbb70:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 86bbb73:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbb76:	83 c1 48             	add    $0x48,%ecx
 86bbb79:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86bbb7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bbb81:	89 04 24             	mov    %eax,(%esp)
 86bbb84:	e8 d7 a0 f9 ff       	call   8655c60 <_ZN5CUser9FatigueUpEi>
 86bbb89:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 86bbb8d:	83 7d dc 05          	cmpl   $0x5,-0x24(%ebp)
 86bbb91:	0f 9e c0             	setle  %al
 86bbb94:	84 c0                	test   %al,%al
 86bbb96:	75 b8                	jne    86bbb50 <_ZN7WarRoom12OnEnterStateEv+0x434>
 86bbb98:	c7 44 24 04 45 00 00 	movl   $0x45,0x4(%esp)
 86bbb9f:	00 
 86bbba0:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbba3:	89 04 24             	mov    %eax,(%esp)
 86bbba6:	e8 79 4f 00 00       	call   86c0b24 <_ZN7WarRoom11GenTimerKeyE13TIMER_MESSAGE>
 86bbbab:	89 c3                	mov    %eax,%ebx
 86bbbad:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbbb0:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bbbb6:	8b 88 f0 07 00 00    	mov    0x7f0(%eax),%ecx
 86bbbbc:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 86bbbc1:	89 c8                	mov    %ecx,%eax
 86bbbc3:	f7 ea                	imul   %edx
 86bbbc5:	c1 fa 06             	sar    $0x6,%edx
 86bbbc8:	89 c8                	mov    %ecx,%eax
 86bbbca:	c1 f8 1f             	sar    $0x1f,%eax
 86bbbcd:	89 d7                	mov    %edx,%edi
 86bbbcf:	29 c7                	sub    %eax,%edi
 86bbbd1:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbbd4:	8b 70 04             	mov    0x4(%eax),%esi
 86bbbd7:	e8 a0 a8 a3 ff       	call   80f647c <_Z12G_TimerQueuev>
 86bbbdc:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86bbbe3:	00 
 86bbbe4:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86bbbe8:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86bbbec:	c7 44 24 0c 45 00 00 	movl   $0x45,0xc(%esp)
 86bbbf3:	00 
 86bbbf4:	89 74 24 08          	mov    %esi,0x8(%esp)
 86bbbf8:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86bbbff:	00 
 86bbc00:	89 04 24             	mov    %eax,(%esp)
 86bbc03:	e8 0e 52 f7 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86bbc08:	eb 1b                	jmp    86bbc25 <_ZN7WarRoom12OnEnterStateEv+0x509>
 86bbc0a:	89 d3                	mov    %edx,%ebx
 86bbc0c:	89 c6                	mov    %eax,%esi
 86bbc0e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bbc11:	89 04 24             	mov    %eax,(%esp)
 86bbc14:	e8 67 22 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bbc19:	89 f0                	mov    %esi,%eax
 86bbc1b:	89 da                	mov    %ebx,%edx
 86bbc1d:	89 04 24             	mov    %eax,(%esp)
 86bbc20:	e8 2b 7b 42 00       	call   8ae3750 <_Unwind_Resume>
 86bbc25:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bbc28:	89 04 24             	mov    %eax,(%esp)
 86bbc2b:	e8 50 22 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bbc30:	e9 69 02 00 00       	jmp    86bbe9e <_ZN7WarRoom12OnEnterStateEv+0x782>
 86bbc35:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbc38:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 86bbc3c:	84 c0                	test   %al,%al
 86bbc3e:	0f 84 88 01 00 00    	je     86bbdcc <_ZN7WarRoom12OnEnterStateEv+0x6b0>
 86bbc44:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbc47:	8b 90 28 01 00 00    	mov    0x128(%eax),%edx
 86bbc4d:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbc50:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bbc56:	8b 80 44 07 00 00    	mov    0x744(%eax),%eax
 86bbc5c:	39 c2                	cmp    %eax,%edx
 86bbc5e:	0f 85 68 01 00 00    	jne    86bbdcc <_ZN7WarRoom12OnEnterStateEv+0x6b0>
 86bbc64:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bbc67:	89 04 24             	mov    %eax,(%esp)
 86bbc6a:	e8 dd 20 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bbc6f:	c7 44 24 08 56 01 00 	movl   $0x156,0x8(%esp)
 86bbc76:	00 
 86bbc77:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bbc7e:	00 
 86bbc7f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bbc82:	89 04 24             	mov    %eax,(%esp)
 86bbc85:	e8 72 fc a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bbc8a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbc8d:	89 04 24             	mov    %eax,(%esp)
 86bbc90:	e8 37 ef ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86bbc95:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bbc99:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bbc9c:	89 04 24             	mov    %eax,(%esp)
 86bbc9f:	e8 7c fc a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bbca4:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 86bbcab:	e9 c0 00 00 00       	jmp    86bbd70 <_ZN7WarRoom12OnEnterStateEv+0x654>
 86bbcb0:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86bbcb3:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbcb6:	83 c2 48             	add    $0x48,%edx
 86bbcb9:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbcbd:	85 c0                	test   %eax,%eax
 86bbcbf:	0f 84 a6 00 00 00    	je     86bbd6b <_ZN7WarRoom12OnEnterStateEv+0x64f>
 86bbcc5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86bbcc8:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbccb:	83 c2 48             	add    $0x48,%edx
 86bbcce:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbcd2:	89 04 24             	mov    %eax,(%esp)
 86bbcd5:	e8 f4 9b f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bbcda:	89 c3                	mov    %eax,%ebx
 86bbcdc:	e8 ba 04 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bbce1:	8b 80 ec 88 00 00    	mov    0x88ec(%eax),%eax
 86bbce7:	39 c3                	cmp    %eax,%ebx
 86bbce9:	0f 9e c0             	setle  %al
 86bbcec:	84 c0                	test   %al,%al
 86bbcee:	74 1f                	je     86bbd0f <_ZN7WarRoom12OnEnterStateEv+0x5f3>
 86bbcf0:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86bbcf3:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbcf6:	83 c2 48             	add    $0x48,%edx
 86bbcf9:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbcfd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bbd04:	00 
 86bbd05:	89 04 24             	mov    %eax,(%esp)
 86bbd08:	e8 93 9d f8 ff       	call   8645aa0 <_ZN15CUserCharacInfo16DecreaseWarPointEi>
 86bbd0d:	eb 24                	jmp    86bbd33 <_ZN7WarRoom12OnEnterStateEv+0x617>
 86bbd0f:	e8 87 04 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bbd14:	8b 90 ec 88 00 00    	mov    0x88ec(%eax),%edx
 86bbd1a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 86bbd1d:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbd20:	83 c1 48             	add    $0x48,%ecx
 86bbd23:	8b 44 88 0c          	mov    0xc(%eax,%ecx,4),%eax
 86bbd27:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bbd2b:	89 04 24             	mov    %eax,(%esp)
 86bbd2e:	e8 6d 9d f8 ff       	call   8645aa0 <_ZN15CUserCharacInfo16DecreaseWarPointEi>
 86bbd33:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86bbd36:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bbd3a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bbd3d:	89 04 24             	mov    %eax,(%esp)
 86bbd40:	e8 db fb a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bbd45:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86bbd48:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbd4b:	83 c2 48             	add    $0x48,%edx
 86bbd4e:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbd52:	89 04 24             	mov    %eax,(%esp)
 86bbd55:	e8 74 9b f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bbd5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bbd5e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bbd61:	89 04 24             	mov    %eax,(%esp)
 86bbd64:	e8 d3 fb a0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86bbd69:	eb 01                	jmp    86bbd6c <_ZN7WarRoom12OnEnterStateEv+0x650>
 86bbd6b:	90                   	nop
 86bbd6c:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 86bbd70:	83 7d e0 05          	cmpl   $0x5,-0x20(%ebp)
 86bbd74:	0f 9e c0             	setle  %al
 86bbd77:	84 c0                	test   %al,%al
 86bbd79:	0f 85 31 ff ff ff    	jne    86bbcb0 <_ZN7WarRoom12OnEnterStateEv+0x594>
 86bbd7f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bbd86:	00 
 86bbd87:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bbd8a:	89 04 24             	mov    %eax,(%esp)
 86bbd8d:	e8 c6 fb a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bbd92:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bbd95:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bbd99:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbd9c:	89 04 24             	mov    %eax,(%esp)
 86bbd9f:	e8 28 23 00 00       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bbda4:	eb 1b                	jmp    86bbdc1 <_ZN7WarRoom12OnEnterStateEv+0x6a5>
 86bbda6:	89 d3                	mov    %edx,%ebx
 86bbda8:	89 c6                	mov    %eax,%esi
 86bbdaa:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bbdad:	89 04 24             	mov    %eax,(%esp)
 86bbdb0:	e8 cb 20 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bbdb5:	89 f0                	mov    %esi,%eax
 86bbdb7:	89 da                	mov    %ebx,%edx
 86bbdb9:	89 04 24             	mov    %eax,(%esp)
 86bbdbc:	e8 8f 79 42 00       	call   8ae3750 <_Unwind_Resume>
 86bbdc1:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86bbdc4:	89 04 24             	mov    %eax,(%esp)
 86bbdc7:	e8 b4 20 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bbdcc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 86bbdd3:	eb 47                	jmp    86bbe1c <_ZN7WarRoom12OnEnterStateEv+0x700>
 86bbdd5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86bbdd8:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbddb:	83 c2 48             	add    $0x48,%edx
 86bbdde:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbde2:	85 c0                	test   %eax,%eax
 86bbde4:	74 31                	je     86bbe17 <_ZN7WarRoom12OnEnterStateEv+0x6fb>
 86bbde6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86bbde9:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbdec:	83 c2 48             	add    $0x48,%edx
 86bbdef:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bbdf3:	89 04 24             	mov    %eax,(%esp)
 86bbdf6:	e8 d3 9a f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bbdfb:	85 c0                	test   %eax,%eax
 86bbdfd:	0f 94 c0             	sete   %al
 86bbe00:	84 c0                	test   %al,%al
 86bbe02:	74 14                	je     86bbe18 <_ZN7WarRoom12OnEnterStateEv+0x6fc>
 86bbe04:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86bbe07:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbe0a:	83 c2 60             	add    $0x60,%edx
 86bbe0d:	c7 44 90 0c 06 00 00 	movl   $0x6,0xc(%eax,%edx,4)
 86bbe14:	00 
 86bbe15:	eb 01                	jmp    86bbe18 <_ZN7WarRoom12OnEnterStateEv+0x6fc>
 86bbe17:	90                   	nop
 86bbe18:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 86bbe1c:	83 7d e4 05          	cmpl   $0x5,-0x1c(%ebp)
 86bbe20:	0f 9e c0             	setle  %al
 86bbe23:	84 c0                	test   %al,%al
 86bbe25:	75 ae                	jne    86bbdd5 <_ZN7WarRoom12OnEnterStateEv+0x6b9>
 86bbe27:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbe2a:	89 04 24             	mov    %eax,(%esp)
 86bbe2d:	e8 cc 07 00 00       	call   86bc5fe <_ZN7WarRoom11ClearRewardEv>
 86bbe32:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbe35:	89 04 24             	mov    %eax,(%esp)
 86bbe38:	e8 73 02 00 00       	call   86bc0b0 <_ZN7WarRoom11SendGuildFPEv>
 86bbe3d:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbe40:	89 04 24             	mov    %eax,(%esp)
 86bbe43:	e8 4c 12 00 00       	call   86bd094 <_ZN7WarRoom8RemoveKCEv>
 86bbe48:	c7 44 24 04 44 00 00 	movl   $0x44,0x4(%esp)
 86bbe4f:	00 
 86bbe50:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbe53:	89 04 24             	mov    %eax,(%esp)
 86bbe56:	e8 c9 4c 00 00       	call   86c0b24 <_ZN7WarRoom11GenTimerKeyE13TIMER_MESSAGE>
 86bbe5b:	89 c3                	mov    %eax,%ebx
 86bbe5d:	8b 45 08             	mov    0x8(%ebp),%eax
 86bbe60:	8b 70 04             	mov    0x4(%eax),%esi
 86bbe63:	e8 14 a6 a3 ff       	call   80f647c <_Z12G_TimerQueuev>
 86bbe68:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86bbe6f:	00 
 86bbe70:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86bbe74:	c7 44 24 10 18 00 00 	movl   $0x18,0x10(%esp)
 86bbe7b:	00 
 86bbe7c:	c7 44 24 0c 44 00 00 	movl   $0x44,0xc(%esp)
 86bbe83:	00 
 86bbe84:	89 74 24 08          	mov    %esi,0x8(%esp)
 86bbe88:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86bbe8f:	00 
 86bbe90:	89 04 24             	mov    %eax,(%esp)
 86bbe93:	e8 7e 4f f7 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86bbe98:	eb 04                	jmp    86bbe9e <_ZN7WarRoom12OnEnterStateEv+0x782>
 86bbe9a:	90                   	nop
 86bbe9b:	eb 01                	jmp    86bbe9e <_ZN7WarRoom12OnEnterStateEv+0x782>
 86bbe9d:	90                   	nop
 86bbe9e:	83 c4 7c             	add    $0x7c,%esp
 86bbea1:	5b                   	pop    %ebx
 86bbea2:	5e                   	pop    %esi
 86bbea3:	5f                   	pop    %edi
 86bbea4:	5d                   	pop    %ebp
 86bbea5:	c3                   	ret

```

```c
// WarRoom::OnEnterState @ 0x86bb71c

/* WarRoom::OnEnterState() */

void __thiscall WarRoom::OnEnterState(WarRoom *this)

{
  char cVar1;
  GameWorld *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  PacketGuard local_5c [12];
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  int local_38;
  int local_34;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  CancelAllTimer(this);
  InvalidUserCheck(this);
  SendStatePacket(this);
  switch(*(undefined4 *)(this + 0x144)) {
  case 0:
    UpdateBanList(this);
    if (this[0x30] != (WarRoom)0x0) {
      for (local_38 = 0; local_38 < 6; local_38 = local_38 + 1) {
        if (*(int *)(this + (local_38 + 0x48) * 4 + 0xc) != 0) {
          WalkOutUserBySlot(this,local_38);
        }
      }
      Close(this);
      this[0x30] = (WarRoom)0x0;
      PacketGuard::PacketGuard(local_44);
                    /* try { // try from 086bb7e9 to 086bb839 has its CatchHandler @ 086bb83c */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x58);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_44,1);
      MakeStateInfo(this,(char *)local_44);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,local_44);
      PacketGuard::~PacketGuard(local_44);
    }
    break;
  case 1:
    uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x1cc) = uVar2;
    BattleReset(this);
    for (local_34 = 0; local_34 < 6; local_34 = local_34 + 1) {
      if (*(int *)(this + (local_34 + 0x48) * 4 + 0xc) == 0) {
        this[local_34 + 0x184] = (WarRoom)0x0;
      }
      else {
        this[local_34 + 0x184] = (WarRoom)0x1;
      }
    }
    iVar4 = GetWaiterCount(this);
    if (iVar4 < 3) {
      local_2d = '\0';
      for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
        if ((*(int *)(this + (local_2c + 0x48) * 4 + 0xc) != 0) &&
           (cVar1 = CUser::isGMUser(*(CUser **)(this + (local_2c + 0x48) * 4 + 0xc)), cVar1 != '\0')
           ) {
          local_2d = '\x01';
          break;
        }
      }
      if (local_2d != '\x01') {
        ChangeState(this,0);
        return;
      }
    }
    uVar6 = GenTimerKey(this,0x41);
    iVar4 = G_CDataManager();
    iVar4 = *(int *)(iVar4 + 0x88a8);
    uVar2 = *(undefined4 *)(this + 4);
    uVar3 = G_TimerQueue();
    TimerQueue::InsertTimerInMilisecond(uVar3,3,uVar2,0x41,iVar4,iVar4 >> 0x1f,uVar6,0);
    break;
  case 2:
    uVar6 = GenTimerKey(this,0x42);
    uVar2 = *(undefined4 *)(this + 4);
    uVar3 = G_TimerQueue();
    TimerQueue::InsertTimerInMilisecond(uVar3,3,uVar2,0x42,11000,0,uVar6,0);
    *(undefined4 *)(this + 0xc) = 1;
    break;
  case 3:
    this[0x10] = (WarRoom)0x0;
    this[0x11] = (WarRoom)0x0;
    PacketGuard::PacketGuard(local_50);
                    /* try { // try from 086bbad2 to 086bbc07 has its CatchHandler @ 086bbc0a */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
    iVar4 = GetWaiterCount(this);
    WarField::ConsistMap
              ((WarField *)(this + 0x34),local_50,*(CDungeon **)(this + 0x1d0),
               *(CMap **)(this + 0x1d4),((char)*this + '\x01') * '\n',iVar4);
    SendToRoom(this,local_50);
    for (local_28 = 0; local_28 < 6; local_28 = local_28 + 1) {
      if (*(int *)(this + (local_28 + 0x48) * 4 + 0xc) != 0) {
        CUser::FatigueUp(*(CUser **)(this + (local_28 + 0x48) * 4 + 0xc),
                         *(int *)(*(int *)(this + 0x1d0) + 0x7e8));
      }
    }
    uVar6 = GenTimerKey(this,0x45);
    iVar4 = *(int *)(*(int *)(this + 0x1d0) + 0x7f0);
    uVar2 = *(undefined4 *)(this + 4);
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,3,uVar2,0x45,iVar4 / 1000,uVar6,0);
    PacketGuard::~PacketGuard(local_50);
    break;
  case 4:
    ReviveAll(this);
    uVar6 = GenTimerKey(this,0x43);
    uVar2 = *(undefined4 *)(this + 4);
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,3,uVar2,0x43,10,uVar6,0);
    if (*(int *)(this + 0xc) != *(int *)(*(int *)(this + 0x1d0) + 0x744)) {
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    }
    break;
  case 5:
    if ((this[0x10] != (WarRoom)0x0) &&
       (*(int *)(this + 0x128) == *(int *)(*(int *)(this + 0x1d0) + 0x744))) {
      PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 086bbc85 to 086bbda3 has its CatchHandler @ 086bbda6 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0x156);
      iVar4 = GetWaiterCount(this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,iVar4);
      for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
        if (*(int *)(this + (local_24 + 0x48) * 4 + 0xc) != 0) {
          iVar4 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_24 + 0x48) * 4 + 0xc));
          iVar5 = G_CDataManager();
          if (*(int *)(iVar5 + 0x88ec) < iVar4) {
            iVar4 = G_CDataManager();
            CUserCharacInfo::DecreaseWarPoint
                      (*(CUserCharacInfo **)(this + (local_24 + 0x48) * 4 + 0xc),
                       *(int *)(iVar4 + 0x88ec));
          }
          else {
            CUserCharacInfo::DecreaseWarPoint
                      (*(CUserCharacInfo **)(this + (local_24 + 0x48) * 4 + 0xc),0);
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,local_24);
          iVar4 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_24 + 0x48) * 4 + 0xc));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar4);
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
      SendToRoom(this,local_5c);
      PacketGuard::~PacketGuard(local_5c);
    }
    for (local_20 = 0; local_20 < 6; local_20 = local_20 + 1) {
      if ((*(int *)(this + (local_20 + 0x48) * 4 + 0xc) != 0) &&
         (iVar4 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_20 + 0x48) * 4 + 0xc)), iVar4 == 0)
         ) {
        *(undefined4 *)(this + (local_20 + 0x60) * 4 + 0xc) = 6;
      }
    }
    ClearReward(this);
    SendGuildFP(this);
    RemoveKC(this);
    uVar6 = GenTimerKey(this,0x44);
    uVar2 = *(undefined4 *)(this + 4);
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,3,uVar2,0x44,0x18,uVar6,0);
  }
  return;
}

```

---

## OnLeaveState

```asm
// === 086bcf14 WarRoom::OnLeaveState  [0x086bcf14-0x86bd093] ===
 86bcf14:	55                   	push   %ebp
 86bcf15:	89 e5                	mov    %esp,%ebp
 86bcf17:	53                   	push   %ebx
 86bcf18:	83 ec 34             	sub    $0x34,%esp
 86bcf1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bcf1e:	85 c0                	test   %eax,%eax
 86bcf20:	75 0b                	jne    86bcf2d <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE+0x19>
 86bcf22:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcf25:	89 04 24             	mov    %eax,(%esp)
 86bcf28:	e8 51 38 00 00       	call   86c077e <_ZN7WarRoom17CurSpawnStepResetEv>
 86bcf2d:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcf30:	8b 80 44 01 00 00    	mov    0x144(%eax),%eax
 86bcf36:	85 c0                	test   %eax,%eax
 86bcf38:	0f 84 4e 01 00 00    	je     86bd08c <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE+0x178>
 86bcf3e:	83 f8 02             	cmp    $0x2,%eax
 86bcf41:	0f 85 46 01 00 00    	jne    86bd08d <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE+0x179>
 86bcf47:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bcf4a:	83 f8 03             	cmp    $0x3,%eax
 86bcf4d:	0f 85 3a 01 00 00    	jne    86bd08d <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE+0x179>
 86bcf53:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86bcf5a:	e9 1c 01 00 00       	jmp    86bd07b <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE+0x167>
 86bcf5f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bcf62:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcf65:	83 c2 48             	add    $0x48,%edx
 86bcf68:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bcf6c:	85 c0                	test   %eax,%eax
 86bcf6e:	0f 84 02 01 00 00    	je     86bd076 <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE+0x162>
 86bcf74:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bcf77:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcf7a:	83 c2 48             	add    $0x48,%edx
 86bcf7d:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bcf81:	89 04 24             	mov    %eax,(%esp)
 86bcf84:	e8 ff d1 ab ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 86bcf89:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86bcf8c:	e8 0a f2 a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bcf91:	8b 55 08             	mov    0x8(%ebp),%edx
 86bcf94:	0f b6 12             	movzbl (%edx),%edx
 86bcf97:	0f b6 d2             	movzbl %dl,%edx
 86bcf9a:	81 c2 1c 22 00 00    	add    $0x221c,%edx
 86bcfa0:	c1 e2 02             	shl    $0x2,%edx
 86bcfa3:	01 d0                	add    %edx,%eax
 86bcfa5:	8d 50 04             	lea    0x4(%eax),%edx
 86bcfa8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bcfab:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bcfaf:	89 14 24             	mov    %edx,(%esp)
 86bcfb2:	e8 57 29 a2 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 86bcfb7:	8b 00                	mov    (%eax),%eax
 86bcfb9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86bcfbc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bcfbf:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcfc2:	83 c2 48             	add    $0x48,%edx
 86bcfc5:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bcfc9:	89 04 24             	mov    %eax,(%esp)
 86bcfcc:	e8 bd d2 a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86bcfd1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86bcfd8:	00 
 86bcfd9:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 86bcfe0:	00 
 86bcfe1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bcfe4:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bcfe8:	89 04 24             	mov    %eax,(%esp)
 86bcfeb:	e8 5c 25 e4 ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 86bcff0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bcff3:	8b 45 08             	mov    0x8(%ebp),%eax
 86bcff6:	83 c2 48             	add    $0x48,%edx
 86bcff9:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bcffd:	89 04 24             	mov    %eax,(%esp)
 86bd000:	e8 c9 88 f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bd005:	85 c0                	test   %eax,%eax
 86bd007:	0f 9f c0             	setg   %al
 86bd00a:	84 c0                	test   %al,%al
 86bd00c:	74 69                	je     86bd077 <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE+0x163>
 86bd00e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bd011:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd014:	83 c2 48             	add    $0x48,%edx
 86bd017:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd01b:	89 04 24             	mov    %eax,(%esp)
 86bd01e:	e8 ab 88 f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bd023:	89 c3                	mov    %eax,%ebx
 86bd025:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86bd02c:	00 
 86bd02d:	c7 44 24 08 5b 05 00 	movl   $0x55b,0x8(%esp)
 86bd034:	00 
 86bd035:	c7 44 24 04 80 a6 cf 	movl   $0x8cfa680,0x4(%esp)
 86bd03c:	08 
 86bd03d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86bd040:	89 04 24             	mov    %eax,(%esp)
 86bd043:	e8 d0 26 e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86bd048:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86bd04c:	c7 44 24 04 47 95 cf 	movl   $0x8cf9547,0x4(%esp)
 86bd053:	08 
 86bd054:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86bd057:	89 04 24             	mov    %eax,(%esp)
 86bd05a:	e8 29 27 e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86bd05f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bd062:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd065:	83 c2 48             	add    $0x48,%edx
 86bd068:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd06c:	89 04 24             	mov    %eax,(%esp)
 86bd06f:	e8 b6 88 f8 ff       	call   864592a <_ZN15CUserCharacInfo15InitFinishPointEv>
 86bd074:	eb 01                	jmp    86bd077 <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE+0x163>
 86bd076:	90                   	nop
 86bd077:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86bd07b:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 86bd07f:	0f 9e c0             	setle  %al
 86bd082:	84 c0                	test   %al,%al
 86bd084:	0f 85 d5 fe ff ff    	jne    86bcf5f <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE+0x4b>
 86bd08a:	eb 01                	jmp    86bd08d <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE+0x179>
 86bd08c:	90                   	nop
 86bd08d:	83 c4 34             	add    $0x34,%esp
 86bd090:	5b                   	pop    %ebx
 86bd091:	5d                   	pop    %ebp
 86bd092:	c3                   	ret
 86bd093:	90                   	nop

```

```c
// WarRoom::OnLeaveState @ 0x86bcf14

/* WarRoom::OnLeaveState(WARROOM_STATE) */

void __thiscall WarRoom::OnLeaveState(WarRoom *this,int param_2)

{
  int iVar1;
  int *piVar2;
  CInventory *pCVar3;
  undefined4 uVar4;
  int local_28;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  if (param_2 == 0) {
    CurSpawnStepReset(this);
  }
  if (((*(int *)(this + 0x144) != 0) && (*(int *)(this + 0x144) == 2)) && (param_2 == 3)) {
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
        local_28 = CUserCharacInfo::getCurCharacMoney
                             (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
        iVar1 = G_CDataManager();
        piVar2 = std::min<int>((int *)(iVar1 + ((byte)*this + 0x221c) * 4 + 4),&local_28);
        local_10 = *piVar2;
        pCVar3 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenW
                           (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
        CInventory::use_money(pCVar3,local_10,0xf,1);
        iVar1 = CUserCharacInfo::GetFinishPointTotal
                          (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
        if (0 < iVar1) {
          uVar4 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
          cMyTrace::cMyTrace(local_24,"void WarRoom::OnLeaveState(WARROOM_STATE)",0x55b,5);
          cMyTrace::operator()(local_24,&DAT_08cf9547,uVar4);
          CUserCharacInfo::InitFinishPoint
                    (*(CUserCharacInfo **)(this + (local_14 + 0x48) * 4 + 0xc));
        }
      }
    }
  }
  return;
}

```

---

## Open

```asm
// === 086bd504 WarRoom::Open  [0x086bd504-0x86bd51f] ===
 86bd504:	55                   	push   %ebp
 86bd505:	89 e5                	mov    %esp,%ebp
 86bd507:	83 ec 18             	sub    $0x18,%esp
 86bd50a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bd511:	00 
 86bd512:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd515:	89 04 24             	mov    %eax,(%esp)
 86bd518:	e8 39 85 be ff       	call   82a5a56 <_ZN7WarRoom8SetStateE13WARROOM_STATE>
 86bd51d:	c9                   	leave
 86bd51e:	c3                   	ret
 86bd51f:	90                   	nop

```

```c
// WarRoom::Open @ 0x86bd504

/* WarRoom::Open() */

void __thiscall WarRoom::Open(WarRoom *this)

{
  SetState(this,0);
  return;
}

```

---

## Prepare

```asm
// === 086bd5d4 WarRoom::Prepare  [0x086bd5d4-0x86bd6d3] ===
 86bd5d4:	55                   	push   %ebp
 86bd5d5:	89 e5                	mov    %esp,%ebp
 86bd5d7:	53                   	push   %ebx
 86bd5d8:	83 ec 34             	sub    $0x34,%esp
 86bd5db:	e8 bb eb a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bd5e0:	8b 55 08             	mov    0x8(%ebp),%edx
 86bd5e3:	0f b6 12             	movzbl (%edx),%edx
 86bd5e6:	0f b6 d2             	movzbl %dl,%edx
 86bd5e9:	81 c2 28 22 00 00    	add    $0x2228,%edx
 86bd5ef:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd5f3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86bd5f6:	e8 a0 eb a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bd5fb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86bd5fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bd602:	89 04 24             	mov    %eax,(%esp)
 86bd605:	e8 ee 23 ca ff       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 86bd60a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bd60d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86bd611:	75 39                	jne    86bd64c <_ZN7WarRoom7PrepareEv+0x78>
 86bd613:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86bd61a:	00 
 86bd61b:	c7 44 24 10 c4 95 cf 	movl   $0x8cf95c4,0x10(%esp)
 86bd622:	08 
 86bd623:	c7 44 24 0c 6e 06 00 	movl   $0x66e,0xc(%esp)
 86bd62a:	00 
 86bd62b:	c7 44 24 08 ac a5 cf 	movl   $0x8cfa5ac,0x8(%esp)
 86bd632:	08 
 86bd633:	c7 44 24 04 3b 95 cf 	movl   $0x8cf953b,0x4(%esp)
 86bd63a:	08 
 86bd63b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86bd642:	e8 c3 65 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86bd647:	e9 82 00 00 00       	jmp    86bd6ce <_ZN7WarRoom7PrepareEv+0xfa>
 86bd64c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd64f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bd652:	89 90 d0 01 00 00    	mov    %edx,0x1d0(%eax)
 86bd658:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd65b:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bd661:	8b 98 04 07 00 00    	mov    0x704(%eax),%ebx
 86bd667:	e8 2f eb a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bd66c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86bd670:	89 04 24             	mov    %eax,(%esp)
 86bd673:	e8 9c 23 ca ff       	call   835fa14 <_ZNK12CDataManager8find_mapEi>
 86bd678:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86bd67b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86bd67f:	75 41                	jne    86bd6c2 <_ZN7WarRoom7PrepareEv+0xee>
 86bd681:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd684:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bd68a:	8b 80 04 07 00 00    	mov    0x704(%eax),%eax
 86bd690:	89 44 24 14          	mov    %eax,0x14(%esp)
 86bd694:	c7 44 24 10 f5 95 cf 	movl   $0x8cf95f5,0x10(%esp)
 86bd69b:	08 
 86bd69c:	c7 44 24 0c 78 06 00 	movl   $0x678,0xc(%esp)
 86bd6a3:	00 
 86bd6a4:	c7 44 24 08 ac a5 cf 	movl   $0x8cfa5ac,0x8(%esp)
 86bd6ab:	08 
 86bd6ac:	c7 44 24 04 3b 95 cf 	movl   $0x8cf953b,0x4(%esp)
 86bd6b3:	08 
 86bd6b4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86bd6bb:	e8 4a 65 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86bd6c0:	eb 0c                	jmp    86bd6ce <_ZN7WarRoom7PrepareEv+0xfa>
 86bd6c2:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd6c5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bd6c8:	89 90 d4 01 00 00    	mov    %edx,0x1d4(%eax)
 86bd6ce:	83 c4 34             	add    $0x34,%esp
 86bd6d1:	5b                   	pop    %ebx
 86bd6d2:	5d                   	pop    %ebp
 86bd6d3:	c3                   	ret

```

```c
// WarRoom::Prepare @ 0x86bd5d4

/* WarRoom::Prepare() */

void __thiscall WarRoom::Prepare(WarRoom *this)

{
  int iVar1;
  
  G_CDataManager();
  iVar1 = G_CDataManager();
  iVar1 = CDataManager::find_dungeon(iVar1);
  if (iVar1 == 0) {
    LogManager::logFormat
              (1,"WarRoom.cpp","void WarRoom::Prepare()",0x66e,
               "WARROOM G_CDataManager()->find_dungeon( %d) fail",0);
  }
  else {
    *(int *)(this + 0x1d0) = iVar1;
    iVar1 = G_CDataManager();
    iVar1 = CDataManager::find_map(iVar1);
    if (iVar1 == 0) {
      LogManager::logFormat
                (1,"WarRoom.cpp","void WarRoom::Prepare()",0x678,"WARROOM Find Map[%d] Error",
                 *(undefined4 *)(*(int *)(this + 0x1d0) + 0x704));
    }
    else {
      *(int *)(this + 0x1d4) = iVar1;
    }
  }
  return;
}

```

---

## RemoveKC

```asm
// === 086bd094 WarRoom::RemoveKC  [0x086bd094-0x86bd0f7] ===
 86bd094:	55                   	push   %ebp
 86bd095:	89 e5                	mov    %esp,%ebp
 86bd097:	83 ec 28             	sub    $0x28,%esp
 86bd09a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bd0a1:	eb 47                	jmp    86bd0ea <_ZN7WarRoom8RemoveKCEv+0x56>
 86bd0a3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bd0a6:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd0a9:	83 c2 48             	add    $0x48,%edx
 86bd0ac:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd0b0:	85 c0                	test   %eax,%eax
 86bd0b2:	74 32                	je     86bd0e6 <_ZN7WarRoom8RemoveKCEv+0x52>
 86bd0b4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bd0b7:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd0ba:	83 c2 48             	add    $0x48,%edx
 86bd0bd:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd0c1:	89 04 24             	mov    %eax,(%esp)
 86bd0c4:	e8 61 88 f8 ff       	call   864592a <_ZN15CUserCharacInfo15InitFinishPointEv>
 86bd0c9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bd0cc:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd0cf:	83 c2 48             	add    $0x48,%edx
 86bd0d2:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd0d6:	89 04 24             	mov    %eax,(%esp)
 86bd0d9:	e8 b0 d1 a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86bd0de:	89 04 24             	mov    %eax,(%esp)
 86bd0e1:	e8 b2 d1 e4 ff       	call   850a298 <_ZN10CInventory12RemoveKCItemEv>
 86bd0e6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bd0ea:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bd0ee:	0f 9e c0             	setle  %al
 86bd0f1:	84 c0                	test   %al,%al
 86bd0f3:	75 ae                	jne    86bd0a3 <_ZN7WarRoom8RemoveKCEv+0xf>
 86bd0f5:	c9                   	leave
 86bd0f6:	c3                   	ret
 86bd0f7:	90                   	nop

```

```c
// WarRoom::RemoveKC @ 0x86bd094

/* WarRoom::RemoveKC() */

void __thiscall WarRoom::RemoveKC(WarRoom *this)

{
  CInventory *this_00;
  int local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
      CUserCharacInfo::InitFinishPoint(*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
      this_00 = (CInventory *)
                CUserCharacInfo::getCurCharacInvenW
                          (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
      CInventory::RemoveKCItem(this_00);
    }
  }
  return;
}

```

---

## Reset

```asm
// === 086baa14 WarRoom::Reset  [0x086baa14-0x86baa8d] ===
 86baa14:	55                   	push   %ebp
 86baa15:	89 e5                	mov    %esp,%ebp
 86baa17:	83 ec 28             	sub    $0x28,%esp
 86baa1a:	8b 45 08             	mov    0x8(%ebp),%eax
 86baa1d:	89 04 24             	mov    %eax,(%esp)
 86baa20:	e8 69 00 00 00       	call   86baa8e <_ZN7WarRoom11BattleResetEv>
 86baa25:	8b 45 08             	mov    0x8(%ebp),%eax
 86baa28:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 86baa2c:	8b 45 08             	mov    0x8(%ebp),%eax
 86baa2f:	c6 00 02             	movb   $0x2,(%eax)
 86baa32:	8b 45 08             	mov    0x8(%ebp),%eax
 86baa35:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 86baa39:	8b 45 08             	mov    0x8(%ebp),%eax
 86baa3c:	c6 40 30 00          	movb   $0x0,0x30(%eax)
 86baa40:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86baa47:	eb 37                	jmp    86baa80 <_ZN7WarRoom5ResetEv+0x6c>
 86baa49:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86baa4c:	8b 45 08             	mov    0x8(%ebp),%eax
 86baa4f:	83 c2 48             	add    $0x48,%edx
 86baa52:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 86baa59:	00 
 86baa5a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86baa5d:	8b 45 08             	mov    0x8(%ebp),%eax
 86baa60:	83 c2 50             	add    $0x50,%edx
 86baa63:	c7 44 90 08 ff 00 00 	movl   $0xff,0x8(%eax,%edx,4)
 86baa6a:	00 
 86baa6b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86baa6e:	8b 45 08             	mov    0x8(%ebp),%eax
 86baa71:	83 c2 60             	add    $0x60,%edx
 86baa74:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 86baa7b:	00 
 86baa7c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86baa80:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86baa84:	0f 9e c0             	setle  %al
 86baa87:	84 c0                	test   %al,%al
 86baa89:	75 be                	jne    86baa49 <_ZN7WarRoom5ResetEv+0x35>
 86baa8b:	c9                   	leave
 86baa8c:	c3                   	ret
 86baa8d:	90                   	nop

```

```c
// WarRoom::Reset @ 0x86baa14

/* WarRoom::Reset() */

void __thiscall WarRoom::Reset(WarRoom *this)

{
  int local_10;
  
  BattleReset(this);
  this[8] = (WarRoom)0x0;
  *this = (WarRoom)0x2;
  this[1] = (WarRoom)0x0;
  this[0x30] = (WarRoom)0x0;
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x48) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_10 + 0x50) * 4 + 8) = 0xff;
    *(undefined4 *)(this + (local_10 + 0x60) * 4 + 0xc) = 0;
  }
  return;
}

```

---

## ReviveAll

```asm
// === 086bc460 WarRoom::ReviveAll  [0x086bc460-0x86bc4eb] ===
 86bc460:	55                   	push   %ebp
 86bc461:	89 e5                	mov    %esp,%ebp
 86bc463:	83 ec 38             	sub    $0x38,%esp
 86bc466:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bc46d:	eb 70                	jmp    86bc4df <_ZN7WarRoom9ReviveAllEv+0x7f>
 86bc46f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bc472:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc475:	83 c2 48             	add    $0x48,%edx
 86bc478:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc47c:	85 c0                	test   %eax,%eax
 86bc47e:	74 57                	je     86bc4d7 <_ZN7WarRoom9ReviveAllEv+0x77>
 86bc480:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bc483:	8b 55 08             	mov    0x8(%ebp),%edx
 86bc486:	0f b6 84 02 84 01 00 	movzbl 0x184(%edx,%eax,1),%eax
 86bc48d:	00 
 86bc48e:	84 c0                	test   %al,%al
 86bc490:	75 48                	jne    86bc4da <_ZN7WarRoom9ReviveAllEv+0x7a>
 86bc492:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bc495:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc498:	83 c2 48             	add    $0x48,%edx
 86bc49b:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc49f:	c7 44 24 18 ff 00 00 	movl   $0xff,0x18(%esp)
 86bc4a6:	00 
 86bc4a7:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86bc4ae:	00 
 86bc4af:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86bc4b6:	00 
 86bc4b7:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86bc4be:	00 
 86bc4bf:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bc4c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bc4c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc4ca:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc4cd:	89 04 24             	mov    %eax,(%esp)
 86bc4d0:	e8 df 23 00 00       	call   86be8b4 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi>
 86bc4d5:	eb 04                	jmp    86bc4db <_ZN7WarRoom9ReviveAllEv+0x7b>
 86bc4d7:	90                   	nop
 86bc4d8:	eb 01                	jmp    86bc4db <_ZN7WarRoom9ReviveAllEv+0x7b>
 86bc4da:	90                   	nop
 86bc4db:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bc4df:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bc4e3:	0f 9e c0             	setle  %al
 86bc4e6:	84 c0                	test   %al,%al
 86bc4e8:	75 85                	jne    86bc46f <_ZN7WarRoom9ReviveAllEv+0xf>
 86bc4ea:	c9                   	leave
 86bc4eb:	c3                   	ret

```

```c
// WarRoom::ReviveAll @ 0x86bc460

/* WarRoom::ReviveAll() */

void __thiscall WarRoom::ReviveAll(WarRoom *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if ((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) &&
       (this[local_10 + 0x184] == (WarRoom)0x0)) {
      SetCharacterLive(this,local_10,*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc),true,false,0,
                       0xff);
    }
  }
  return;
}

```

---

## ReviveUserByCoin

```asm
// === 086bf324 WarRoom::ReviveUserByCoin  [0x086bf324-0x86bf483] ===
 86bf324:	55                   	push   %ebp
 86bf325:	89 e5                	mov    %esp,%ebp
 86bf327:	83 ec 48             	sub    $0x48,%esp
 86bf32a:	8b 45 10             	mov    0x10(%ebp),%eax
 86bf32d:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 86bf331:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf334:	89 04 24             	mov    %eax,(%esp)
 86bf337:	e8 5a fb b6 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bf33c:	83 f8 03             	cmp    $0x3,%eax
 86bf33f:	74 17                	je     86bf358 <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0x34>
 86bf341:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf344:	89 04 24             	mov    %eax,(%esp)
 86bf347:	e8 4a fb b6 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bf34c:	83 f8 04             	cmp    $0x4,%eax
 86bf34f:	74 07                	je     86bf358 <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0x34>
 86bf351:	b8 01 00 00 00       	mov    $0x1,%eax
 86bf356:	eb 05                	jmp    86bf35d <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0x39>
 86bf358:	b8 00 00 00 00       	mov    $0x0,%eax
 86bf35d:	84 c0                	test   %al,%al
 86bf35f:	74 0a                	je     86bf36b <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0x47>
 86bf361:	b8 13 00 00 00       	mov    $0x13,%eax
 86bf366:	e9 17 01 00 00       	jmp    86bf482 <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0x15e>
 86bf36b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86bf372:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bf379:	eb 64                	jmp    86bf3df <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0xbb>
 86bf37b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bf37e:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf381:	83 c2 48             	add    $0x48,%edx
 86bf384:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bf388:	85 c0                	test   %eax,%eax
 86bf38a:	74 4e                	je     86bf3da <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0xb6>
 86bf38c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bf38f:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf392:	83 c2 48             	add    $0x48,%edx
 86bf395:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bf399:	89 04 24             	mov    %eax,(%esp)
 86bf39c:	e8 db af a1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86bf3a1:	66 3b 45 e4          	cmp    -0x1c(%ebp),%ax
 86bf3a5:	0f 94 c0             	sete   %al
 86bf3a8:	84 c0                	test   %al,%al
 86bf3aa:	74 2f                	je     86bf3db <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0xb7>
 86bf3ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bf3af:	8b 55 08             	mov    0x8(%ebp),%edx
 86bf3b2:	0f b6 84 02 84 01 00 	movzbl 0x184(%edx,%eax,1),%eax
 86bf3b9:	00 
 86bf3ba:	84 c0                	test   %al,%al
 86bf3bc:	74 0a                	je     86bf3c8 <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0xa4>
 86bf3be:	b8 12 00 00 00       	mov    $0x12,%eax
 86bf3c3:	e9 ba 00 00 00       	jmp    86bf482 <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0x15e>
 86bf3c8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bf3cb:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf3ce:	83 c2 48             	add    $0x48,%edx
 86bf3d1:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bf3d5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bf3d8:	eb 10                	jmp    86bf3ea <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0xc6>
 86bf3da:	90                   	nop
 86bf3db:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bf3df:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bf3e3:	0f 9e c0             	setle  %al
 86bf3e6:	84 c0                	test   %al,%al
 86bf3e8:	75 91                	jne    86bf37b <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0x57>
 86bf3ea:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86bf3ee:	75 0a                	jne    86bf3fa <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0xd6>
 86bf3f0:	b8 15 00 00 00       	mov    $0x15,%eax
 86bf3f5:	e9 88 00 00 00       	jmp    86bf482 <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0x15e>
 86bf3fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bf3fd:	89 04 24             	mov    %eax,(%esp)
 86bf400:	e8 7b 17 00 00       	call   86c0b80 <_ZN5CUser16GetUsedCoinCountEv>
 86bf405:	8b 55 08             	mov    0x8(%ebp),%edx
 86bf408:	8b 92 d0 01 00 00    	mov    0x1d0(%edx),%edx
 86bf40e:	8b 92 7c 08 00 00    	mov    0x87c(%edx),%edx
 86bf414:	39 d0                	cmp    %edx,%eax
 86bf416:	0f 9d c0             	setge  %al
 86bf419:	84 c0                	test   %al,%al
 86bf41b:	74 07                	je     86bf424 <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0x100>
 86bf41d:	b8 16 00 00 00       	mov    $0x16,%eax
 86bf422:	eb 5e                	jmp    86bf482 <_ZN7WarRoom16ReviveUserByCoinEP5CUsert+0x15e>
 86bf424:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bf427:	89 04 24             	mov    %eax,(%esp)
 86bf42a:	e8 f9 1b a4 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 86bf42f:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bf432:	8b 92 f8 96 07 00    	mov    0x796f8(%edx),%edx
 86bf438:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf43c:	89 14 24             	mov    %edx,(%esp)
 86bf43f:	e8 ec ab df ff       	call   84ba030 <_ZN10HistoryLog12WriteUseCoinEP8_IO_FILEPKc>
 86bf444:	c7 44 24 18 ff 00 00 	movl   $0xff,0x18(%esp)
 86bf44b:	00 
 86bf44c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86bf453:	00 
 86bf454:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 86bf45b:	00 
 86bf45c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86bf463:	00 
 86bf464:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bf467:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bf46b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bf46e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bf472:	8b 45 08             	mov    0x8(%ebp),%eax
 86bf475:	89 04 24             	mov    %eax,(%esp)
 86bf478:	e8 37 f4 ff ff       	call   86be8b4 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi>
 86bf47d:	b8 00 00 00 00       	mov    $0x0,%eax
 86bf482:	c9                   	leave
 86bf483:	c3                   	ret

```

```c
// WarRoom::ReviveUserByCoin @ 0x86bf324

/* WarRoom::ReviveUserByCoin(CUser*, unsigned short) */

undefined4 __thiscall WarRoom::ReviveUserByCoin(WarRoom *this,CUser *param_1,ushort param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  CUserCharacInfo *local_14;
  int local_10;
  
  iVar3 = GetState(this);
  if ((iVar3 == 3) || (iVar3 = GetState(this), iVar3 == 4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 0x13;
  }
  else {
    local_14 = (CUserCharacInfo *)0x0;
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      if ((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) &&
         (uVar2 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc)),
         uVar2 == param_2)) {
        if (this[local_10 + 0x184] != (WarRoom)0x0) {
          return 0x12;
        }
        local_14 = *(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc);
        break;
      }
    }
    if (local_14 == (CUserCharacInfo *)0x0) {
      uVar4 = 0x15;
    }
    else {
      iVar3 = CUser::GetUsedCoinCount(param_1);
      if (iVar3 < *(int *)(*(int *)(this + 0x1d0) + 0x87c)) {
        pcVar5 = (char *)CUserCharacInfo::getCurCharacName(local_14);
        HistoryLog::WriteUseCoin(*(_IO_FILE **)(param_1 + 0x796f8),pcVar5);
        SetCharacterLive(this,local_10,(CUser *)local_14,true,true,0,0xff);
        uVar4 = 0;
      }
      else {
        uVar4 = 0x16;
      }
    }
  }
  return uVar4;
}

```

---

## SendGuildFP

```asm
// === 086bc0b0 WarRoom::SendGuildFP  [0x086bc0b0-0x86bc45f] ===
 86bc0b0:	55                   	push   %ebp
 86bc0b1:	89 e5                	mov    %esp,%ebp
 86bc0b3:	56                   	push   %esi
 86bc0b4:	53                   	push   %ebx
 86bc0b5:	83 ec 70             	sub    $0x70,%esp
 86bc0b8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bc0bb:	89 04 24             	mov    %eax,(%esp)
 86bc0be:	e8 89 1c ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bc0c3:	c7 44 24 08 60 00 00 	movl   $0x60,0x8(%esp)
 86bc0ca:	00 
 86bc0cb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bc0d2:	00 
 86bc0d3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bc0d6:	89 04 24             	mov    %eax,(%esp)
 86bc0d9:	e8 1e f8 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bc0de:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc0e1:	89 04 24             	mov    %eax,(%esp)
 86bc0e4:	e8 e3 ea ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86bc0e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc0ed:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bc0f0:	89 04 24             	mov    %eax,(%esp)
 86bc0f3:	e8 28 f8 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bc0f8:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 86bc0ff:	eb 54                	jmp    86bc155 <_ZN7WarRoom11SendGuildFPEv+0xa5>
 86bc101:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86bc104:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc107:	83 c2 48             	add    $0x48,%edx
 86bc10a:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc10e:	85 c0                	test   %eax,%eax
 86bc110:	74 3e                	je     86bc150 <_ZN7WarRoom11SendGuildFPEv+0xa0>
 86bc112:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86bc115:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc118:	83 c2 48             	add    $0x48,%edx
 86bc11b:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc11f:	89 04 24             	mov    %eax,(%esp)
 86bc122:	e8 a7 97 f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bc127:	89 c3                	mov    %eax,%ebx
 86bc129:	e8 6d 00 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86bc12e:	8b 80 a4 88 00 00    	mov    0x88a4(%eax),%eax
 86bc134:	39 c3                	cmp    %eax,%ebx
 86bc136:	0f 9c c0             	setl   %al
 86bc139:	84 c0                	test   %al,%al
 86bc13b:	74 14                	je     86bc151 <_ZN7WarRoom11SendGuildFPEv+0xa1>
 86bc13d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86bc140:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc143:	83 c2 60             	add    $0x60,%edx
 86bc146:	c7 44 90 0c 09 00 00 	movl   $0x9,0xc(%eax,%edx,4)
 86bc14d:	00 
 86bc14e:	eb 01                	jmp    86bc151 <_ZN7WarRoom11SendGuildFPEv+0xa1>
 86bc150:	90                   	nop
 86bc151:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 86bc155:	83 7d e0 05          	cmpl   $0x5,-0x20(%ebp)
 86bc159:	0f 9e c0             	setle  %al
 86bc15c:	84 c0                	test   %al,%al
 86bc15e:	75 a1                	jne    86bc101 <_ZN7WarRoom11SendGuildFPEv+0x51>
 86bc160:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc163:	89 04 24             	mov    %eax,(%esp)
 86bc166:	e8 61 ea ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86bc16b:	83 f8 04             	cmp    $0x4,%eax
 86bc16e:	0f 9f c0             	setg   %al
 86bc171:	84 c0                	test   %al,%al
 86bc173:	0f 84 64 01 00 00    	je     86bc2dd <_ZN7WarRoom11SendGuildFPEv+0x22d>
 86bc179:	c7 45 e4 ff ff ff 7f 	movl   $0x7fffffff,-0x1c(%ebp)
 86bc180:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86bc183:	89 04 24             	mov    %eax,(%esp)
 86bc186:	e8 21 20 9d ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 86bc18b:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 86bc192:	e9 a8 00 00 00       	jmp    86bc23f <_ZN7WarRoom11SendGuildFPEv+0x18f>
 86bc197:	8b 55 b8             	mov    -0x48(%ebp),%edx
 86bc19a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc19d:	83 c2 48             	add    $0x48,%edx
 86bc1a0:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc1a4:	85 c0                	test   %eax,%eax
 86bc1a6:	0f 84 89 00 00 00    	je     86bc235 <_ZN7WarRoom11SendGuildFPEv+0x185>
 86bc1ac:	8b 55 b8             	mov    -0x48(%ebp),%edx
 86bc1af:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc1b2:	83 c2 48             	add    $0x48,%edx
 86bc1b5:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc1b9:	89 04 24             	mov    %eax,(%esp)
 86bc1bc:	e8 0d 97 f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bc1c1:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 86bc1c4:	0f 9c c0             	setl   %al
 86bc1c7:	84 c0                	test   %al,%al
 86bc1c9:	74 37                	je     86bc202 <_ZN7WarRoom11SendGuildFPEv+0x152>
 86bc1cb:	8b 55 b8             	mov    -0x48(%ebp),%edx
 86bc1ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc1d1:	83 c2 48             	add    $0x48,%edx
 86bc1d4:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc1d8:	89 04 24             	mov    %eax,(%esp)
 86bc1db:	e8 ee 96 f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bc1e0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86bc1e3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86bc1e6:	89 04 24             	mov    %eax,(%esp)
 86bc1e9:	e8 80 a9 9d ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 86bc1ee:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86bc1f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc1f5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86bc1f8:	89 04 24             	mov    %eax,(%esp)
 86bc1fb:	e8 26 4f a5 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 86bc200:	eb 34                	jmp    86bc236 <_ZN7WarRoom11SendGuildFPEv+0x186>
 86bc202:	8b 55 b8             	mov    -0x48(%ebp),%edx
 86bc205:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc208:	83 c2 48             	add    $0x48,%edx
 86bc20b:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc20f:	89 04 24             	mov    %eax,(%esp)
 86bc212:	e8 b7 96 f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bc217:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 86bc21a:	0f 94 c0             	sete   %al
 86bc21d:	84 c0                	test   %al,%al
 86bc21f:	74 15                	je     86bc236 <_ZN7WarRoom11SendGuildFPEv+0x186>
 86bc221:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86bc224:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc228:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86bc22b:	89 04 24             	mov    %eax,(%esp)
 86bc22e:	e8 f3 4e a5 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 86bc233:	eb 01                	jmp    86bc236 <_ZN7WarRoom11SendGuildFPEv+0x186>
 86bc235:	90                   	nop
 86bc236:	8b 45 b8             	mov    -0x48(%ebp),%eax
 86bc239:	83 c0 01             	add    $0x1,%eax
 86bc23c:	89 45 b8             	mov    %eax,-0x48(%ebp)
 86bc23f:	8b 45 b8             	mov    -0x48(%ebp),%eax
 86bc242:	83 f8 05             	cmp    $0x5,%eax
 86bc245:	0f 9e c0             	setle  %al
 86bc248:	84 c0                	test   %al,%al
 86bc24a:	0f 85 47 ff ff ff    	jne    86bc197 <_ZN7WarRoom11SendGuildFPEv+0xe7>
 86bc250:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bc253:	8d 55 bc             	lea    -0x44(%ebp),%edx
 86bc256:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bc25a:	89 04 24             	mov    %eax,(%esp)
 86bc25d:	e8 e6 1f 9d ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 86bc262:	83 ec 04             	sub    $0x4,%esp
 86bc265:	eb 26                	jmp    86bc28d <_ZN7WarRoom11SendGuildFPEv+0x1dd>
 86bc267:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bc26a:	89 04 24             	mov    %eax,(%esp)
 86bc26d:	e8 5a 25 9d ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 86bc272:	8b 10                	mov    (%eax),%edx
 86bc274:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc277:	83 c2 60             	add    $0x60,%edx
 86bc27a:	c7 44 90 0c 0a 00 00 	movl   $0xa,0xc(%eax,%edx,4)
 86bc281:	00 
 86bc282:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bc285:	89 04 24             	mov    %eax,(%esp)
 86bc288:	e8 ff e6 a2 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 86bc28d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bc290:	8d 55 bc             	lea    -0x44(%ebp),%edx
 86bc293:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bc297:	89 04 24             	mov    %eax,(%esp)
 86bc29a:	e8 cd 1f 9d ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 86bc29f:	83 ec 04             	sub    $0x4,%esp
 86bc2a2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86bc2a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc2a9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86bc2ac:	89 04 24             	mov    %eax,(%esp)
 86bc2af:	e8 ae e1 a2 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 86bc2b4:	84 c0                	test   %al,%al
 86bc2b6:	75 af                	jne    86bc267 <_ZN7WarRoom11SendGuildFPEv+0x1b7>
 86bc2b8:	eb 18                	jmp    86bc2d2 <_ZN7WarRoom11SendGuildFPEv+0x222>
 86bc2ba:	89 d3                	mov    %edx,%ebx
 86bc2bc:	89 c6                	mov    %eax,%esi
 86bc2be:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86bc2c1:	89 04 24             	mov    %eax,(%esp)
 86bc2c4:	e8 11 7b 9c ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 86bc2c9:	89 f0                	mov    %esi,%eax
 86bc2cb:	89 da                	mov    %ebx,%edx
 86bc2cd:	e9 5d 01 00 00       	jmp    86bc42f <_ZN7WarRoom11SendGuildFPEv+0x37f>
 86bc2d2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86bc2d5:	89 04 24             	mov    %eax,(%esp)
 86bc2d8:	e8 fd 7a 9c ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 86bc2dd:	c7 45 ca 00 00 00 00 	movl   $0x0,-0x36(%ebp)
 86bc2e4:	66 c7 45 ce 00 00    	movw   $0x0,-0x32(%ebp)
 86bc2ea:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 86bc2f1:	e9 f9 00 00 00       	jmp    86bc3ef <_ZN7WarRoom11SendGuildFPEv+0x33f>
 86bc2f6:	c7 45 ec ff ff ff ff 	movl   $0xffffffff,-0x14(%ebp)
 86bc2fd:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 86bc304:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bc30b:	eb 64                	jmp    86bc371 <_ZN7WarRoom11SendGuildFPEv+0x2c1>
 86bc30d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bc310:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc313:	83 c2 48             	add    $0x48,%edx
 86bc316:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc31a:	85 c0                	test   %eax,%eax
 86bc31c:	74 4b                	je     86bc369 <_ZN7WarRoom11SendGuildFPEv+0x2b9>
 86bc31e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bc321:	0f b6 44 05 ca       	movzbl -0x36(%ebp,%eax,1),%eax
 86bc326:	84 c0                	test   %al,%al
 86bc328:	75 42                	jne    86bc36c <_ZN7WarRoom11SendGuildFPEv+0x2bc>
 86bc32a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bc32d:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc330:	83 c2 48             	add    $0x48,%edx
 86bc333:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc337:	89 04 24             	mov    %eax,(%esp)
 86bc33a:	e8 8f 95 f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bc33f:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 86bc342:	0f 9d c0             	setge  %al
 86bc345:	84 c0                	test   %al,%al
 86bc347:	74 24                	je     86bc36d <_ZN7WarRoom11SendGuildFPEv+0x2bd>
 86bc349:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bc34c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc34f:	83 c2 48             	add    $0x48,%edx
 86bc352:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc356:	89 04 24             	mov    %eax,(%esp)
 86bc359:	e8 70 95 f8 ff       	call   86458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>
 86bc35e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86bc361:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bc364:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86bc367:	eb 04                	jmp    86bc36d <_ZN7WarRoom11SendGuildFPEv+0x2bd>
 86bc369:	90                   	nop
 86bc36a:	eb 01                	jmp    86bc36d <_ZN7WarRoom11SendGuildFPEv+0x2bd>
 86bc36c:	90                   	nop
 86bc36d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bc371:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bc375:	0f 9e c0             	setle  %al
 86bc378:	84 c0                	test   %al,%al
 86bc37a:	75 91                	jne    86bc30d <_ZN7WarRoom11SendGuildFPEv+0x25d>
 86bc37c:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 86bc380:	75 33                	jne    86bc3b5 <_ZN7WarRoom11SendGuildFPEv+0x305>
 86bc382:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bc385:	89 44 24 14          	mov    %eax,0x14(%esp)
 86bc389:	c7 44 24 10 2c 95 cf 	movl   $0x8cf952c,0x10(%esp)
 86bc390:	08 
 86bc391:	c7 44 24 0c 30 04 00 	movl   $0x430,0xc(%esp)
 86bc398:	00 
 86bc399:	c7 44 24 08 b0 a6 cf 	movl   $0x8cfa6b0,0x8(%esp)
 86bc3a0:	08 
 86bc3a1:	c7 44 24 04 3b 95 cf 	movl   $0x8cf953b,0x4(%esp)
 86bc3a8:	08 
 86bc3a9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86bc3b0:	e8 55 78 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86bc3b5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bc3b8:	c6 44 05 ca 01       	movb   $0x1,-0x36(%ebp,%eax,1)
 86bc3bd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86bc3c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc3c4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bc3c7:	89 04 24             	mov    %eax,(%esp)
 86bc3ca:	e8 51 f5 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bc3cf:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86bc3d2:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc3d5:	83 c2 60             	add    $0x60,%edx
 86bc3d8:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bc3dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc3e0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bc3e3:	89 04 24             	mov    %eax,(%esp)
 86bc3e6:	e8 35 f5 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86bc3eb:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 86bc3ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc3f2:	89 04 24             	mov    %eax,(%esp)
 86bc3f5:	e8 d2 e7 ff ff       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 86bc3fa:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 86bc3fd:	0f 9f c0             	setg   %al
 86bc400:	84 c0                	test   %al,%al
 86bc402:	0f 85 ee fe ff ff    	jne    86bc2f6 <_ZN7WarRoom11SendGuildFPEv+0x246>
 86bc408:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bc40f:	00 
 86bc410:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bc413:	89 04 24             	mov    %eax,(%esp)
 86bc416:	e8 3d f5 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bc41b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bc41e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bc422:	8b 45 08             	mov    0x8(%ebp),%eax
 86bc425:	89 04 24             	mov    %eax,(%esp)
 86bc428:	e8 9f 1c 00 00       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86bc42d:	eb 1b                	jmp    86bc44a <_ZN7WarRoom11SendGuildFPEv+0x39a>
 86bc42f:	89 d3                	mov    %edx,%ebx
 86bc431:	89 c6                	mov    %eax,%esi
 86bc433:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bc436:	89 04 24             	mov    %eax,(%esp)
 86bc439:	e8 42 1a ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bc43e:	89 f0                	mov    %esi,%eax
 86bc440:	89 da                	mov    %ebx,%edx
 86bc442:	89 04 24             	mov    %eax,(%esp)
 86bc445:	e8 06 73 42 00       	call   8ae3750 <_Unwind_Resume>
 86bc44a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86bc44d:	89 04 24             	mov    %eax,(%esp)
 86bc450:	e8 2b 1a ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bc455:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86bc458:	83 c4 00             	add    $0x0,%esp
 86bc45b:	5b                   	pop    %ebx
 86bc45c:	5e                   	pop    %esi
 86bc45d:	5d                   	pop    %ebp
 86bc45e:	c3                   	ret
 86bc45f:	90                   	nop

```

```c
// WarRoom::SendGuildFP @ 0x86bc0b0

/* WarRoom::SendGuildFP() */

void __thiscall WarRoom::SendGuildFP(WarRoom *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_50 [4];
  int local_4c;
  vector<int,std::allocator<int>> local_48 [14];
  char local_3a [6];
  PacketGuard local_34 [12];
  __normal_iterator local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 086bc0d9 to 086bc18a has its CatchHandler @ 086bc42f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x60);
  iVar2 = GetWaiterCount(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar2);
  for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
    if (*(int *)(this + (local_24 + 0x48) * 4 + 0xc) != 0) {
      iVar2 = CUserCharacInfo::GetFinishPointTotal
                        (*(CUserCharacInfo **)(this + (local_24 + 0x48) * 4 + 0xc));
      iVar3 = G_CDataManager();
      if (iVar2 < *(int *)(iVar3 + 0x88a4)) {
        *(undefined4 *)(this + (local_24 + 0x60) * 4 + 0xc) = 9;
      }
    }
  }
  iVar2 = GetWaiterCount(this);
  if (4 < iVar2) {
    local_20 = 0x7fffffff;
    std::vector<int,std::allocator<int>>::vector(local_48);
    for (local_4c = 0; local_4c < 6; local_4c = local_4c + 1) {
      if (*(int *)(this + (local_4c + 0x48) * 4 + 0xc) != 0) {
                    /* try { // try from 086bc1bc to 086bc2b3 has its CatchHandler @ 086bc2ba */
        iVar2 = CUserCharacInfo::GetFinishPointTotal
                          (*(CUserCharacInfo **)(this + (local_4c + 0x48) * 4 + 0xc));
        if (iVar2 < local_20) {
          local_20 = CUserCharacInfo::GetFinishPointTotal
                               (*(CUserCharacInfo **)(this + (local_4c + 0x48) * 4 + 0xc));
          std::vector<int,std::allocator<int>>::clear(local_48);
          std::vector<int,std::allocator<int>>::push_back(local_48,&local_4c);
        }
        else {
          iVar2 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_4c + 0x48) * 4 + 0xc));
          if (iVar2 == local_20) {
            std::vector<int,std::allocator<int>>::push_back(local_48,&local_4c);
          }
        }
      }
    }
    std::vector<int,std::allocator<int>>::begin();
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar1 = __gnu_cxx::operator!=(local_50,local_28);
      if (!bVar1) break;
      piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_50);
      *(undefined4 *)(this + (*piVar4 + 0x60) * 4 + 0xc) = 10;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_50);
    }
                    /* try { // try from 086bc2d8 to 086bc42c has its CatchHandler @ 086bc42f */
    std::vector<int,std::allocator<int>>::~vector(local_48);
  }
  local_3a[0] = '\0';
  local_3a[1] = '\0';
  local_3a[2] = '\0';
  local_3a[3] = '\0';
  local_3a[4] = '\0';
  local_3a[5] = '\0';
  local_1c = 0;
  while (iVar2 = GetWaiterCount(this), local_1c < iVar2) {
    local_18 = -1;
    local_14 = -1;
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      if (((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) && (local_3a[local_10] == '\0')) &&
         (iVar2 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc)),
         local_14 <= iVar2)) {
        local_14 = CUserCharacInfo::GetFinishPointTotal
                             (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
        local_18 = local_10;
      }
    }
    if (local_18 == -1) {
      LogManager::logFormat
                (1,"WarRoom.cpp","void WarRoom::SendGuildFP()",0x430,"maxPlayer (%d)",0xffffffff);
    }
    local_3a[local_18] = '\x01';
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_18);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_34,*(int *)(this + (local_18 + 0x60) * 4 + 0xc));
    local_1c = local_1c + 1;
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  SendToRoom(this,local_34);
  PacketGuard::~PacketGuard(local_34);
  return;
}

```

---

## SendStatePacket

```asm
// === 086bb672 WarRoom::SendStatePacket  [0x086bb672-0x86bb71b] ===
 86bb672:	55                   	push   %ebp
 86bb673:	89 e5                	mov    %esp,%ebp
 86bb675:	56                   	push   %esi
 86bb676:	53                   	push   %ebx
 86bb677:	83 ec 20             	sub    $0x20,%esp
 86bb67a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bb67d:	89 04 24             	mov    %eax,(%esp)
 86bb680:	e8 c7 26 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bb685:	c7 44 24 08 58 00 00 	movl   $0x58,0x8(%esp)
 86bb68c:	00 
 86bb68d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bb694:	00 
 86bb695:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bb698:	89 04 24             	mov    %eax,(%esp)
 86bb69b:	e8 5c 02 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bb6a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb6a7:	00 
 86bb6a8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bb6ab:	89 04 24             	mov    %eax,(%esp)
 86bb6ae:	e8 f1 e7 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86bb6b3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bb6b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bb6ba:	8b 45 08             	mov    0x8(%ebp),%eax
 86bb6bd:	89 04 24             	mov    %eax,(%esp)
 86bb6c0:	e8 b5 29 00 00       	call   86be07a <_ZN7WarRoom13MakeStateInfoEPc>
 86bb6c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bb6cc:	00 
 86bb6cd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bb6d0:	89 04 24             	mov    %eax,(%esp)
 86bb6d3:	e8 80 02 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bb6d8:	e8 ca ec a1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86bb6dd:	8d 55 ec             	lea    -0x14(%ebp),%edx
 86bb6e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bb6e4:	89 04 24             	mov    %eax,(%esp)
 86bb6e7:	e8 28 d5 00 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 86bb6ec:	eb 1b                	jmp    86bb709 <_ZN7WarRoom15SendStatePacketEv+0x97>
 86bb6ee:	89 d3                	mov    %edx,%ebx
 86bb6f0:	89 c6                	mov    %eax,%esi
 86bb6f2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bb6f5:	89 04 24             	mov    %eax,(%esp)
 86bb6f8:	e8 83 27 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bb6fd:	89 f0                	mov    %esi,%eax
 86bb6ff:	89 da                	mov    %ebx,%edx
 86bb701:	89 04 24             	mov    %eax,(%esp)
 86bb704:	e8 47 80 42 00       	call   8ae3750 <_Unwind_Resume>
 86bb709:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bb70c:	89 04 24             	mov    %eax,(%esp)
 86bb70f:	e8 6c 27 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bb714:	83 c4 20             	add    $0x20,%esp
 86bb717:	5b                   	pop    %ebx
 86bb718:	5e                   	pop    %esi
 86bb719:	5d                   	pop    %ebp
 86bb71a:	c3                   	ret
 86bb71b:	90                   	nop

```

```c
// WarRoom::SendStatePacket @ 0x86bb672

/* WarRoom::SendStatePacket() */

void __thiscall WarRoom::SendStatePacket(WarRoom *this)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086bb69b to 086bb6eb has its CatchHandler @ 086bb6ee */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x58);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  MakeStateInfo(this,(char *)local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## SendToRoom

```asm
// === 086be0cc WarRoom::SendToRoom  [0x086be0cc-0x86be119] ===
 86be0cc:	55                   	push   %ebp
 86be0cd:	89 e5                	mov    %esp,%ebp
 86be0cf:	83 ec 28             	sub    $0x28,%esp
 86be0d2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86be0d9:	eb 31                	jmp    86be10c <_ZN7WarRoom10SendToRoomER11PacketGuard+0x40>
 86be0db:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86be0de:	8b 45 08             	mov    0x8(%ebp),%eax
 86be0e1:	83 c2 48             	add    $0x48,%edx
 86be0e4:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be0e8:	85 c0                	test   %eax,%eax
 86be0ea:	74 1c                	je     86be108 <_ZN7WarRoom10SendToRoomER11PacketGuard+0x3c>
 86be0ec:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86be0ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86be0f2:	83 c2 48             	add    $0x48,%edx
 86be0f5:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be0f9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86be0fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 86be100:	89 04 24             	mov    %eax,(%esp)
 86be103:	e8 b2 a4 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86be108:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86be10c:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86be110:	0f 9e c0             	setle  %al
 86be113:	84 c0                	test   %al,%al
 86be115:	75 c4                	jne    86be0db <_ZN7WarRoom10SendToRoomER11PacketGuard+0xf>
 86be117:	c9                   	leave
 86be118:	c3                   	ret
 86be119:	90                   	nop

```

```c
// WarRoom::SendToRoom @ 0x86be0cc

/* WarRoom::SendToRoom(PacketGuard&) */

void __thiscall WarRoom::SendToRoom(WarRoom *this,PacketGuard *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
      CUser::Send(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc),param_1);
    }
  }
  return;
}

```

---

## SendWalkOut

```asm
// === 086be152 WarRoom::SendWalkOut  [0x086be152-0x86be1fd] ===
 86be152:	55                   	push   %ebp
 86be153:	89 e5                	mov    %esp,%ebp
 86be155:	56                   	push   %esi
 86be156:	53                   	push   %ebx
 86be157:	83 ec 20             	sub    $0x20,%esp
 86be15a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be15d:	89 04 24             	mov    %eax,(%esp)
 86be160:	e8 e7 fb ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86be165:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 86be16c:	00 
 86be16d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86be174:	00 
 86be175:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be178:	89 04 24             	mov    %eax,(%esp)
 86be17b:	e8 7c d7 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86be180:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86be187:	00 
 86be188:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be18b:	89 04 24             	mov    %eax,(%esp)
 86be18e:	e8 8d d7 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86be193:	8b 45 10             	mov    0x10(%ebp),%eax
 86be196:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be19a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be19d:	89 04 24             	mov    %eax,(%esp)
 86be1a0:	e8 7b d7 a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86be1a5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86be1ac:	00 
 86be1ad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be1b0:	89 04 24             	mov    %eax,(%esp)
 86be1b3:	e8 a0 d7 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86be1b8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be1bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be1bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 86be1c2:	89 04 24             	mov    %eax,(%esp)
 86be1c5:	e8 f0 a3 f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86be1ca:	bb 01 00 00 00       	mov    $0x1,%ebx
 86be1cf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be1d2:	89 04 24             	mov    %eax,(%esp)
 86be1d5:	e8 a6 fc ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86be1da:	89 d8                	mov    %ebx,%eax
 86be1dc:	83 c4 20             	add    $0x20,%esp
 86be1df:	5b                   	pop    %ebx
 86be1e0:	5e                   	pop    %esi
 86be1e1:	5d                   	pop    %ebp
 86be1e2:	c3                   	ret
 86be1e3:	89 d3                	mov    %edx,%ebx
 86be1e5:	89 c6                	mov    %eax,%esi
 86be1e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be1ea:	89 04 24             	mov    %eax,(%esp)
 86be1ed:	e8 8e fc ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86be1f2:	89 f0                	mov    %esi,%eax
 86be1f4:	89 da                	mov    %ebx,%edx
 86be1f6:	89 04 24             	mov    %eax,(%esp)
 86be1f9:	e8 52 55 42 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// WarRoom::SendWalkOut @ 0x86be152

/* WarRoom::SendWalkOut(CUser*, ENUM_WALKOUT_TYPE) */

undefined4 __thiscall WarRoom::SendWalkOut(undefined4 this,CUser *param_1,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086be17b to 086be1c9 has its CatchHandler @ 086be1e3 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,10);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 1;
}

```

---

## SendWarRoomFailMsg

```asm
// === 086c078e WarRoom::SendWarRoomFailMsg  [0x086c078e-0x86c07ed] ===
 86c078e:	55                   	push   %ebp
 86c078f:	89 e5                	mov    %esp,%ebp
 86c0791:	56                   	push   %esi
 86c0792:	53                   	push   %ebx
 86c0793:	83 ec 20             	sub    $0x20,%esp
 86c0796:	c7 44 24 04 46 00 00 	movl   $0x46,0x4(%esp)
 86c079d:	00 
 86c079e:	8b 45 08             	mov    0x8(%ebp),%eax
 86c07a1:	89 04 24             	mov    %eax,(%esp)
 86c07a4:	e8 7b 03 00 00       	call   86c0b24 <_ZN7WarRoom11GenTimerKeyE13TIMER_MESSAGE>
 86c07a9:	89 c3                	mov    %eax,%ebx
 86c07ab:	8b 45 08             	mov    0x8(%ebp),%eax
 86c07ae:	8b 70 04             	mov    0x4(%eax),%esi
 86c07b1:	e8 c6 5c a3 ff       	call   80f647c <_Z12G_TimerQueuev>
 86c07b6:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86c07bd:	00 
 86c07be:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86c07c2:	c7 44 24 10 0a 00 00 	movl   $0xa,0x10(%esp)
 86c07c9:	00 
 86c07ca:	c7 44 24 0c 46 00 00 	movl   $0x46,0xc(%esp)
 86c07d1:	00 
 86c07d2:	89 74 24 08          	mov    %esi,0x8(%esp)
 86c07d6:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86c07dd:	00 
 86c07de:	89 04 24             	mov    %eax,(%esp)
 86c07e1:	e8 30 06 f7 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86c07e6:	83 c4 20             	add    $0x20,%esp
 86c07e9:	5b                   	pop    %ebx
 86c07ea:	5e                   	pop    %esi
 86c07eb:	5d                   	pop    %ebp
 86c07ec:	c3                   	ret
 86c07ed:	90                   	nop

```

```c
// WarRoom::SendWarRoomFailMsg @ 0x86c078e

/* WarRoom::SendWarRoomFailMsg() */

void __thiscall WarRoom::SendWarRoomFailMsg(WarRoom *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar2 = GenTimerKey(this,0x46);
  uVar1 = *(undefined4 *)(this + 4);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,3,uVar1,0x46,10,uVar2,0);
  return;
}

```

---

## SetCharacterLive

```asm
// === 086be8b4 WarRoom::SetCharacterLive  [0x086be8b4-0x86bea2d] ===
 86be8b4:	55                   	push   %ebp
 86be8b5:	89 e5                	mov    %esp,%ebp
 86be8b7:	56                   	push   %esi
 86be8b8:	53                   	push   %ebx
 86be8b9:	83 ec 30             	sub    $0x30,%esp
 86be8bc:	8b 4d 14             	mov    0x14(%ebp),%ecx
 86be8bf:	8b 55 18             	mov    0x18(%ebp),%edx
 86be8c2:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86be8c5:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 86be8c8:	88 55 e0             	mov    %dl,-0x20(%ebp)
 86be8cb:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 86be8cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 86be8d2:	8b 55 08             	mov    0x8(%ebp),%edx
 86be8d5:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 86be8d9:	88 8c 02 84 01 00 00 	mov    %cl,0x184(%edx,%eax,1)
 86be8e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be8e3:	89 04 24             	mov    %eax,(%esp)
 86be8e6:	e8 61 f4 ec ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86be8eb:	c7 44 24 08 5f 00 00 	movl   $0x5f,0x8(%esp)
 86be8f2:	00 
 86be8f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86be8fa:	00 
 86be8fb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be8fe:	89 04 24             	mov    %eax,(%esp)
 86be901:	e8 f6 cf a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86be906:	8b 45 10             	mov    0x10(%ebp),%eax
 86be909:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be90d:	8b 45 08             	mov    0x8(%ebp),%eax
 86be910:	89 04 24             	mov    %eax,(%esp)
 86be913:	e8 2a ef ff ff       	call   86bd842 <_ZN7WarRoom11GetUserSlotEP5CUser>
 86be918:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be91c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be91f:	89 04 24             	mov    %eax,(%esp)
 86be922:	e8 f9 cf a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86be927:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 86be92b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be92f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be932:	89 04 24             	mov    %eax,(%esp)
 86be935:	e8 e6 cf a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86be93a:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
 86be93e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be942:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be945:	89 04 24             	mov    %eax,(%esp)
 86be948:	e8 d3 cf a0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86be94d:	81 7d 20 ff 00 00 00 	cmpl   $0xff,0x20(%ebp)
 86be954:	74 5d                	je     86be9b3 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi+0xff>
 86be956:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 86be95a:	78 57                	js     86be9b3 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi+0xff>
 86be95c:	83 7d 20 05          	cmpl   $0x5,0x20(%ebp)
 86be960:	7f 51                	jg     86be9b3 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi+0xff>
 86be962:	8b 55 20             	mov    0x20(%ebp),%edx
 86be965:	8b 45 08             	mov    0x8(%ebp),%eax
 86be968:	83 c2 48             	add    $0x48,%edx
 86be96b:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86be96f:	85 c0                	test   %eax,%eax
 86be971:	74 40                	je     86be9b3 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi+0xff>
 86be973:	8b 45 08             	mov    0x8(%ebp),%eax
 86be976:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 86be97a:	84 c0                	test   %al,%al
 86be97c:	74 15                	je     86be993 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi+0xdf>
 86be97e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86be985:	00 
 86be986:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be989:	89 04 24             	mov    %eax,(%esp)
 86be98c:	e8 13 b5 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86be991:	eb 33                	jmp    86be9c6 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi+0x112>
 86be993:	8b 45 08             	mov    0x8(%ebp),%eax
 86be996:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86be99c:	8b 80 c8 07 00 00    	mov    0x7c8(%eax),%eax
 86be9a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be9a6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be9a9:	89 04 24             	mov    %eax,(%esp)
 86be9ac:	e8 f3 b4 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86be9b1:	eb 13                	jmp    86be9c6 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi+0x112>
 86be9b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86be9ba:	00 
 86be9bb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be9be:	89 04 24             	mov    %eax,(%esp)
 86be9c1:	e8 de b4 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86be9c6:	0f bf 45 dc          	movswl -0x24(%ebp),%eax
 86be9ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be9ce:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be9d1:	89 04 24             	mov    %eax,(%esp)
 86be9d4:	e8 cb b4 a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86be9d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86be9e0:	00 
 86be9e1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be9e4:	89 04 24             	mov    %eax,(%esp)
 86be9e7:	e8 6c cf a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86be9ec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86be9ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 86be9f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86be9f6:	89 04 24             	mov    %eax,(%esp)
 86be9f9:	e8 ce f6 ff ff       	call   86be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>
 86be9fe:	eb 1b                	jmp    86bea1b <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi+0x167>
 86bea00:	89 d3                	mov    %edx,%ebx
 86bea02:	89 c6                	mov    %eax,%esi
 86bea04:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bea07:	89 04 24             	mov    %eax,(%esp)
 86bea0a:	e8 71 f4 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bea0f:	89 f0                	mov    %esi,%eax
 86bea11:	89 da                	mov    %ebx,%edx
 86bea13:	89 04 24             	mov    %eax,(%esp)
 86bea16:	e8 35 4d 42 00       	call   8ae3750 <_Unwind_Resume>
 86bea1b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bea1e:	89 04 24             	mov    %eax,(%esp)
 86bea21:	e8 5a f4 ec ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bea26:	83 c4 30             	add    $0x30,%esp
 86bea29:	5b                   	pop    %ebx
 86bea2a:	5e                   	pop    %esi
 86bea2b:	5d                   	pop    %ebp
 86bea2c:	c3                   	ret
 86bea2d:	90                   	nop

```

```c
// WarRoom::SetCharacterLive @ 0x86be8b4

/* WarRoom::SetCharacterLive(int, CUser*, bool, bool, short, int) */

void __thiscall
WarRoom::SetCharacterLive
          (WarRoom *this,int param_1,CUser *param_2,bool param_3,bool param_4,short param_5,
          int param_6)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  this[param_1 + 0x184] = (WarRoom)param_3;
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086be901 to 086be9fd has its CatchHandler @ 086bea00 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x5f);
  iVar1 = GetUserSlot(this,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_4);
  if ((((param_6 == 0xff) || (param_6 < 0)) || (5 < param_6)) ||
     (*(int *)(this + (param_6 + 0x48) * 4 + 0xc) == 0)) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,0);
  }
  else if (this[0x12] == (WarRoom)0x0) {
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_18,*(int *)(*(int *)(this + 0x1d0) + 0x7c8));
  }
  else {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,0);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(int)param_5);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  SendToRoom(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## SetIndex

```asm
// === 086ba834 WarRoom::SetIndex  [0x086ba834-0x86ba84f] ===
 86ba834:	55                   	push   %ebp
 86ba835:	89 e5                	mov    %esp,%ebp
 86ba837:	83 ec 18             	sub    $0x18,%esp
 86ba83a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba83d:	8b 55 0c             	mov    0xc(%ebp),%edx
 86ba840:	89 50 04             	mov    %edx,0x4(%eax)
 86ba843:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba846:	89 04 24             	mov    %eax,(%esp)
 86ba849:	e8 c6 01 00 00       	call   86baa14 <_ZN7WarRoom5ResetEv>
 86ba84e:	c9                   	leave
 86ba84f:	c3                   	ret

```

```c
// WarRoom::SetIndex @ 0x86ba834

/* WarRoom::SetIndex(int) */

void __thiscall WarRoom::SetIndex(WarRoom *this,int param_1)

{
  *(int *)(this + 4) = param_1;
  Reset(this);
  return;
}

```

---

## SetSlotState

```asm
// === 086bd0f8 WarRoom::SetSlotState  [0x086bd0f8-0x86bd255] ===
 86bd0f8:	55                   	push   %ebp
 86bd0f9:	89 e5                	mov    %esp,%ebp
 86bd0fb:	53                   	push   %ebx
 86bd0fc:	83 ec 24             	sub    $0x24,%esp
 86bd0ff:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86bd103:	75 0a                	jne    86bd10f <_ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x17>
 86bd105:	b8 00 00 00 00       	mov    $0x0,%eax
 86bd10a:	e9 40 01 00 00       	jmp    86bd24f <_ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x157>
 86bd10f:	8b 45 14             	mov    0x14(%ebp),%eax
 86bd112:	3d ff 00 00 00       	cmp    $0xff,%eax
 86bd117:	0f 85 2d 01 00 00    	jne    86bd24a <_ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x152>
 86bd11d:	8b 55 10             	mov    0x10(%ebp),%edx
 86bd120:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd123:	83 c2 48             	add    $0x48,%edx
 86bd126:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd12a:	85 c0                	test   %eax,%eax
 86bd12c:	75 47                	jne    86bd175 <_ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x7d>
 86bd12e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86bd135:	00 
 86bd136:	c7 44 24 08 90 05 00 	movl   $0x590,0x8(%esp)
 86bd13d:	00 
 86bd13e:	c7 44 24 04 20 a6 cf 	movl   $0x8cfa620,0x4(%esp)
 86bd145:	08 
 86bd146:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bd149:	89 04 24             	mov    %eax,(%esp)
 86bd14c:	e8 c7 25 e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86bd151:	8b 45 10             	mov    0x10(%ebp),%eax
 86bd154:	89 44 24 08          	mov    %eax,0x8(%esp)
 86bd158:	c7 44 24 04 5c 95 cf 	movl   $0x8cf955c,0x4(%esp)
 86bd15f:	08 
 86bd160:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86bd163:	89 04 24             	mov    %eax,(%esp)
 86bd166:	e8 1d 26 e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86bd16b:	b8 00 00 00 00       	mov    $0x0,%eax
 86bd170:	e9 da 00 00 00       	jmp    86bd24f <_ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x157>
 86bd175:	8b 55 10             	mov    0x10(%ebp),%edx
 86bd178:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd17b:	83 c2 48             	add    $0x48,%edx
 86bd17e:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 86bd182:	8b 45 18             	mov    0x18(%ebp),%eax
 86bd185:	89 10                	mov    %edx,(%eax)
 86bd187:	8b 55 10             	mov    0x10(%ebp),%edx
 86bd18a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd18d:	83 c2 50             	add    $0x50,%edx
 86bd190:	c7 44 90 08 ff 00 00 	movl   $0xff,0x8(%eax,%edx,4)
 86bd197:	00 
 86bd198:	8b 55 10             	mov    0x10(%ebp),%edx
 86bd19b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd19e:	83 c2 48             	add    $0x48,%edx
 86bd1a1:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 86bd1a8:	00 
 86bd1a9:	8b 45 10             	mov    0x10(%ebp),%eax
 86bd1ac:	8b 55 08             	mov    0x8(%ebp),%edx
 86bd1af:	c6 84 02 84 01 00 00 	movb   $0x0,0x184(%edx,%eax,1)
 86bd1b6:	00 
 86bd1b7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86bd1ba:	c6 00 01             	movb   $0x1,(%eax)
 86bd1bd:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd1c0:	89 04 24             	mov    %eax,(%esp)
 86bd1c3:	e8 ce 1c b7 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 86bd1c8:	83 f8 02             	cmp    $0x2,%eax
 86bd1cb:	0f 9f c0             	setg   %al
 86bd1ce:	84 c0                	test   %al,%al
 86bd1d0:	74 12                	je     86bd1e4 <_ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0xec>
 86bd1d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bd1d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bd1d9:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd1dc:	89 04 24             	mov    %eax,(%esp)
 86bd1df:	e8 64 d7 ff ff       	call   86ba948 <_ZN7WarRoom10AddBanListEP5CUser>
 86bd1e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bd1e7:	89 04 24             	mov    %eax,(%esp)
 86bd1ea:	e8 6b c7 a3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 86bd1ef:	89 04 24             	mov    %eax,(%esp)
 86bd1f2:	e8 89 ae a3 ff       	call   80f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>
 86bd1f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bd1fa:	89 04 24             	mov    %eax,(%esp)
 86bd1fd:	e8 58 c7 a3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 86bd202:	89 04 24             	mov    %eax,(%esp)
 86bd205:	e8 9c af a3 ff       	call   80f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>
 86bd20a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd20d:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bd213:	85 c0                	test   %eax,%eax
 86bd215:	74 33                	je     86bd24a <_ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x152>
 86bd217:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd21a:	0f b6 00             	movzbl (%eax),%eax
 86bd21d:	0f b6 d8             	movzbl %al,%ebx
 86bd220:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd223:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bd229:	89 04 24             	mov    %eax,(%esp)
 86bd22c:	e8 75 83 a8 ff       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 86bd231:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bd234:	81 c2 00 97 07 00    	add    $0x79700,%edx
 86bd23a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86bd23e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bd242:	89 14 24             	mov    %edx,(%esp)
 86bd245:	e8 f8 77 fc ff       	call   8684a42 <_ZN15cUserHistoryLog12LeaveDungeonEPKci>
 86bd24a:	b8 00 00 00 00       	mov    $0x0,%eax
 86bd24f:	83 c4 24             	add    $0x24,%esp
 86bd252:	5b                   	pop    %ebx
 86bd253:	5d                   	pop    %ebp
 86bd254:	c3                   	ret
 86bd255:	90                   	nop

```

```c
// WarRoom::SetSlotState @ 0x86bd0f8

/* WarRoom::SetSlotState(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&) */

undefined4
WarRoom::SetSlotState
          (WarRoom *param_1,CUser *param_2,int param_3,int param_4,undefined4 *param_5,
          undefined1 *param_6)

{
  WarRoom WVar1;
  int iVar2;
  CHackAnalyzer *this;
  char *pcVar3;
  cMyTrace local_1c [20];
  
  if ((param_2 != (CUser *)0x0) && (param_4 == 0xff)) {
    if (*(int *)(param_1 + (param_3 + 0x48) * 4 + 0xc) == 0) {
      cMyTrace::cMyTrace(local_1c,
                         "int WarRoom::SetSlotState(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)"
                         ,0x590,5);
      cMyTrace::operator()
                (local_1c,"WARAREA  WarRoom::SetSlotState players_[pos] is NULL pos(%d)",param_3);
    }
    else {
      *param_5 = *(undefined4 *)(param_1 + (param_3 + 0x48) * 4 + 0xc);
      *(undefined4 *)(param_1 + (param_3 + 0x50) * 4 + 8) = 0xff;
      *(undefined4 *)(param_1 + (param_3 + 0x48) * 4 + 0xc) = 0;
      param_1[param_3 + 0x184] = (WarRoom)0x0;
      *param_6 = 1;
      iVar2 = GetState(param_1);
      if (2 < iVar2) {
        AddBanList(param_1,param_2);
      }
      CUser::getHackAnalyzer(param_2);
      WongWork::CHackAnalyzer::reportHackInfo();
      this = (CHackAnalyzer *)CUser::getHackAnalyzer(param_2);
      WongWork::CHackAnalyzer::resetHackInfo(this);
      if (*(int *)(param_1 + 0x1d0) != 0) {
        WVar1 = *param_1;
        pcVar3 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(param_1 + 0x1d0));
        cUserHistoryLog::LeaveDungeon
                  ((cUserHistoryLog *)(param_2 + 0x79700),pcVar3,(uint)(byte)WVar1);
      }
    }
  }
  return 0;
}

```

---

## ShutDown

```asm
// === 086bd53c WarRoom::ShutDown  [0x086bd53c-0x86bd5d3] ===
 86bd53c:	55                   	push   %ebp
 86bd53d:	89 e5                	mov    %esp,%ebp
 86bd53f:	83 ec 28             	sub    $0x28,%esp
 86bd542:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd545:	8b 80 44 01 00 00    	mov    0x144(%eax),%eax
 86bd54b:	85 c0                	test   %eax,%eax
 86bd54d:	7f 77                	jg     86bd5c6 <_ZN7WarRoom8ShutDownEv+0x8a>
 86bd54f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86bd556:	eb 51                	jmp    86bd5a9 <_ZN7WarRoom8ShutDownEv+0x6d>
 86bd558:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bd55b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd55e:	83 c2 48             	add    $0x48,%edx
 86bd561:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd565:	85 c0                	test   %eax,%eax
 86bd567:	74 3c                	je     86bd5a5 <_ZN7WarRoom8ShutDownEv+0x69>
 86bd569:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bd56c:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd56f:	83 c2 48             	add    $0x48,%edx
 86bd572:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd576:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86bd579:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86bd57c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bd580:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd583:	89 04 24             	mov    %eax,(%esp)
 86bd586:	e8 cb fc ff ff       	call   86bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>
 86bd58b:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 86bd592:	00 
 86bd593:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bd596:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bd59a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd59d:	89 04 24             	mov    %eax,(%esp)
 86bd5a0:	e8 ad 0b 00 00       	call   86be152 <_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE>
 86bd5a5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86bd5a9:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 86bd5ad:	0f 9e c0             	setle  %al
 86bd5b0:	84 c0                	test   %al,%al
 86bd5b2:	75 a4                	jne    86bd558 <_ZN7WarRoom8ShutDownEv+0x1c>
 86bd5b4:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd5b7:	89 04 24             	mov    %eax,(%esp)
 86bd5ba:	e8 61 ff ff ff       	call   86bd520 <_ZN7WarRoom5CloseEv>
 86bd5bf:	b8 01 00 00 00       	mov    $0x1,%eax
 86bd5c4:	eb 0c                	jmp    86bd5d2 <_ZN7WarRoom8ShutDownEv+0x96>
 86bd5c6:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd5c9:	c6 40 30 01          	movb   $0x1,0x30(%eax)
 86bd5cd:	b8 00 00 00 00       	mov    $0x0,%eax
 86bd5d2:	c9                   	leave
 86bd5d3:	c3                   	ret

```

```c
// WarRoom::ShutDown @ 0x86bd53c

/* WarRoom::ShutDown() */

undefined4 __thiscall WarRoom::ShutDown(WarRoom *this)

{
  undefined4 uVar1;
  int local_14;
  
  if (*(int *)(this + 0x144) < 1) {
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
        uVar1 = *(undefined4 *)(this + (local_14 + 0x48) * 4 + 0xc);
        WalkOutUserBySlot(this,local_14);
        SendWalkOut(this,uVar1,7);
      }
    }
    Close(this);
    uVar1 = 1;
  }
  else {
    this[0x30] = (WarRoom)0x1;
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## SkipLastRankResultTimer

```asm
// === 086be11a WarRoom::SkipLastRankResultTimer  [0x086be11a-0x86be11f] ===
 86be11a:	55                   	push   %ebp
 86be11b:	89 e5                	mov    %esp,%ebp
 86be11d:	5d                   	pop    %ebp
 86be11e:	c3                   	ret
 86be11f:	90                   	nop

```

```c
// WarRoom::SkipLastRankResultTimer @ 0x86be11a

/* WarRoom::SkipLastRankResultTimer() */

void WarRoom::SkipLastRankResultTimer(void)

{
  return;
}

```

---

## Start

```asm
// === 086bd6d4 WarRoom::Start  [0x086bd6d4-0x86bd841] ===
 86bd6d4:	55                   	push   %ebp
 86bd6d5:	89 e5                	mov    %esp,%ebp
 86bd6d7:	56                   	push   %esi
 86bd6d8:	53                   	push   %ebx
 86bd6d9:	83 ec 30             	sub    $0x30,%esp
 86bd6dc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86bd6df:	89 04 24             	mov    %eax,(%esp)
 86bd6e2:	e8 65 06 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bd6e7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86bd6ee:	e9 a7 00 00 00       	jmp    86bd79a <_ZN7WarRoom5StartEv+0xc6>
 86bd6f3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bd6f6:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd6f9:	83 c2 48             	add    $0x48,%edx
 86bd6fc:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd700:	85 c0                	test   %eax,%eax
 86bd702:	0f 84 8e 00 00 00    	je     86bd796 <_ZN7WarRoom5StartEv+0xc2>
 86bd708:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86bd70b:	89 04 24             	mov    %eax,(%esp)
 86bd70e:	e8 d3 e1 a0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86bd713:	c7 44 24 08 5a 00 00 	movl   $0x5a,0x8(%esp)
 86bd71a:	00 
 86bd71b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86bd722:	00 
 86bd723:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86bd726:	89 04 24             	mov    %eax,(%esp)
 86bd729:	e8 ce e1 a0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86bd72e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bd735:	00 
 86bd736:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86bd739:	89 04 24             	mov    %eax,(%esp)
 86bd73c:	e8 17 e2 a0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86bd741:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86bd744:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd747:	83 c2 48             	add    $0x48,%edx
 86bd74a:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd74e:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 86bd751:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bd755:	89 04 24             	mov    %eax,(%esp)
 86bd758:	e8 5d ae f8 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86bd75d:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd760:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bd766:	85 c0                	test   %eax,%eax
 86bd768:	74 2c                	je     86bd796 <_ZN7WarRoom5StartEv+0xc2>
 86bd76a:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd76d:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bd773:	89 04 24             	mov    %eax,(%esp)
 86bd776:	e8 75 05 a4 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 86bd77b:	89 c3                	mov    %eax,%ebx
 86bd77d:	e8 d9 09 f5 ff       	call   860e15b <_Z29GetInstanceDungeonEntranceLogv>
 86bd782:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86bd789:	00 
 86bd78a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86bd78e:	89 04 24             	mov    %eax,(%esp)
 86bd791:	e8 58 0a f5 ff       	call   860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>
 86bd796:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86bd79a:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 86bd79e:	0f 9e c0             	setle  %al
 86bd7a1:	84 c0                	test   %al,%al
 86bd7a3:	0f 85 4a ff ff ff    	jne    86bd6f3 <_ZN7WarRoom5StartEv+0x1f>
 86bd7a9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86bd7b0:	00 
 86bd7b1:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd7b4:	89 04 24             	mov    %eax,(%esp)
 86bd7b7:	e8 80 dd ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86bd7bc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86bd7c3:	eb 43                	jmp    86bd808 <_ZN7WarRoom5StartEv+0x134>
 86bd7c5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bd7c8:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd7cb:	83 c2 48             	add    $0x48,%edx
 86bd7ce:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd7d2:	85 c0                	test   %eax,%eax
 86bd7d4:	74 2e                	je     86bd804 <_ZN7WarRoom5StartEv+0x130>
 86bd7d6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bd7d9:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd7dc:	83 c2 48             	add    $0x48,%edx
 86bd7df:	8b 5c 90 0c          	mov    0xc(%eax,%edx,4),%ebx
 86bd7e3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86bd7e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd7e9:	83 c2 48             	add    $0x48,%edx
 86bd7ec:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd7f0:	89 04 24             	mov    %eax,(%esp)
 86bd7f3:	e8 62 c1 a3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 86bd7f8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86bd7fc:	89 04 24             	mov    %eax,(%esp)
 86bd7ff:	e8 e4 a1 a3 ff       	call   80f79e8 <_ZN8WongWork13CHackAnalyzer20beginCollectHackInfoEP5CUser>
 86bd804:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86bd808:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86bd80c:	0f 9e c0             	setle  %al
 86bd80f:	84 c0                	test   %al,%al
 86bd811:	75 b2                	jne    86bd7c5 <_ZN7WarRoom5StartEv+0xf1>
 86bd813:	eb 1b                	jmp    86bd830 <_ZN7WarRoom5StartEv+0x15c>
 86bd815:	89 d3                	mov    %edx,%ebx
 86bd817:	89 c6                	mov    %eax,%esi
 86bd819:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86bd81c:	89 04 24             	mov    %eax,(%esp)
 86bd81f:	e8 5c 06 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bd824:	89 f0                	mov    %esi,%eax
 86bd826:	89 da                	mov    %ebx,%edx
 86bd828:	89 04 24             	mov    %eax,(%esp)
 86bd82b:	e8 20 5f 42 00       	call   8ae3750 <_Unwind_Resume>
 86bd830:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86bd833:	89 04 24             	mov    %eax,(%esp)
 86bd836:	e8 45 06 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bd83b:	83 c4 30             	add    $0x30,%esp
 86bd83e:	5b                   	pop    %ebx
 86bd83f:	5e                   	pop    %esi
 86bd840:	5d                   	pop    %ebp
 86bd841:	c3                   	ret

```

```c
// WarRoom::Start @ 0x86bd6d4

/* WarRoom::Start() */

void __thiscall WarRoom::Start(WarRoom *this)

{
  CUser *pCVar1;
  int iVar2;
  CDungeonEntranceLog *this_00;
  CHackAnalyzer *this_01;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_20);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
                    /* try { // try from 086bd70e to 086bd803 has its CatchHandler @ 086bd815 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x5a);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send(*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc),local_20);
      if (*(int *)(this + 0x1d0) != 0) {
        iVar2 = CDungeon::get_index(*(CDungeon **)(this + 0x1d0));
        this_00 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
        CDungeonEntranceLog::IncrementDungeonEntrance(this_00,iVar2,false);
      }
    }
  }
  ChangeState(this,1);
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
      pCVar1 = *(CUser **)(this + (local_10 + 0x48) * 4 + 0xc);
      this_01 = (CHackAnalyzer *)
                CUser::getHackAnalyzer(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
      WongWork::CHackAnalyzer::beginCollectHackInfo(this_01,pCVar1);
    }
  }
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

---

## UpdateBanList

```asm
// === 086ba850 WarRoom::UpdateBanList  [0x086ba850-0x86ba947] ===
 86ba850:	55                   	push   %ebp
 86ba851:	89 e5                	mov    %esp,%ebp
 86ba853:	53                   	push   %ebx
 86ba854:	83 ec 34             	sub    $0x34,%esp
 86ba857:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86ba85e:	e8 3b 14 a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86ba863:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86ba866:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba869:	8d 90 d8 01 00 00    	lea    0x1d8(%eax),%edx
 86ba86f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86ba872:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba876:	89 04 24             	mov    %eax,(%esp)
 86ba879:	e8 e8 70 d9 ff       	call   8451966 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE5beginEv>
 86ba87e:	83 ec 04             	sub    $0x4,%esp
 86ba881:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba884:	8d 90 d8 01 00 00    	lea    0x1d8(%eax),%edx
 86ba88a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ba88d:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba891:	89 04 24             	mov    %eax,(%esp)
 86ba894:	e8 ff 59 d9 ff       	call   8450298 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 86ba899:	83 ec 04             	sub    $0x4,%esp
 86ba89c:	e9 88 00 00 00       	jmp    86ba929 <_ZN7WarRoom13UpdateBanListEv+0xd9>
 86ba8a1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86ba8a4:	89 04 24             	mov    %eax,(%esp)
 86ba8a7:	e8 0e 63 00 00       	call   86c0bba <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEdeEv>
 86ba8ac:	8b 40 04             	mov    0x4(%eax),%eax
 86ba8af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ba8b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ba8b5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ba8b8:	89 d3                	mov    %edx,%ebx
 86ba8ba:	29 c3                	sub    %eax,%ebx
 86ba8bc:	e8 da 18 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ba8c1:	8b 88 a0 88 00 00    	mov    0x88a0(%eax),%ecx
 86ba8c7:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 86ba8cc:	89 c8                	mov    %ecx,%eax
 86ba8ce:	f7 ea                	imul   %edx
 86ba8d0:	c1 fa 06             	sar    $0x6,%edx
 86ba8d3:	89 c8                	mov    %ecx,%eax
 86ba8d5:	c1 f8 1f             	sar    $0x1f,%eax
 86ba8d8:	89 d1                	mov    %edx,%ecx
 86ba8da:	29 c1                	sub    %eax,%ecx
 86ba8dc:	89 c8                	mov    %ecx,%eax
 86ba8de:	39 c3                	cmp    %eax,%ebx
 86ba8e0:	0f 9d c0             	setge  %al
 86ba8e3:	84 c0                	test   %al,%al
 86ba8e5:	74 37                	je     86ba91e <_ZN7WarRoom13UpdateBanListEv+0xce>
 86ba8e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ba8ea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86ba8f1:	00 
 86ba8f2:	8d 55 e8             	lea    -0x18(%ebp),%edx
 86ba8f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba8f9:	89 04 24             	mov    %eax,(%esp)
 86ba8fc:	e8 c7 62 00 00       	call   86c0bc8 <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEppEi>
 86ba901:	83 ec 04             	sub    $0x4,%esp
 86ba904:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba907:	8d 90 d8 01 00 00    	lea    0x1d8(%eax),%edx
 86ba90d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ba910:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba914:	89 14 24             	mov    %edx,(%esp)
 86ba917:	e8 f8 e8 ea ff       	call   8569214 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE5eraseESt17_Rb_tree_iteratorIS4_E>
 86ba91c:	eb 0b                	jmp    86ba929 <_ZN7WarRoom13UpdateBanListEv+0xd9>
 86ba91e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86ba921:	89 04 24             	mov    %eax,(%esp)
 86ba924:	e8 63 70 d9 ff       	call   845198c <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEppEv>
 86ba929:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ba92c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba930:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86ba933:	89 04 24             	mov    %eax,(%esp)
 86ba936:	e8 83 59 d9 ff       	call   84502be <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEneERKS3_>
 86ba93b:	84 c0                	test   %al,%al
 86ba93d:	0f 85 5e ff ff ff    	jne    86ba8a1 <_ZN7WarRoom13UpdateBanListEv+0x51>
 86ba943:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 86ba946:	c9                   	leave
 86ba947:	c3                   	ret

```

```c
// WarRoom::UpdateBanList @ 0x86ba850

/* WarRoom::UpdateBanList() */

void __thiscall WarRoom::UpdateBanList(WarRoom *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_20 [4];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_1c [4];
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  begin(local_1c);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  end(local_20);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_1c,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_1c);
    local_10 = *(int *)(iVar2 + 4);
    iVar3 = local_14 - local_10;
    iVar2 = G_CDataManager();
    if (iVar3 < *(int *)(iVar2 + 0x88a0) / 1000) {
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_1c);
    }
    else {
      uVar4 = 0;
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_18,(int)local_1c);
      std::
      map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
      ::erase((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
               *)(this + 0x1d8),local_18,uVar4);
    }
  }
  return;
}

```

---

## WalkOutUser

```asm
// === 086bd460 WarRoom::WalkOutUser  [0x086bd460-0x86bd49b] ===
 86bd460:	55                   	push   %ebp
 86bd461:	89 e5                	mov    %esp,%ebp
 86bd463:	83 ec 28             	sub    $0x28,%esp
 86bd466:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bd469:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bd46d:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd470:	89 04 24             	mov    %eax,(%esp)
 86bd473:	e8 ca 03 00 00       	call   86bd842 <_ZN7WarRoom11GetUserSlotEP5CUser>
 86bd478:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86bd47b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86bd47f:	79 07                	jns    86bd488 <_ZN7WarRoom11WalkOutUserEP5CUser+0x28>
 86bd481:	b8 04 00 00 00       	mov    $0x4,%eax
 86bd486:	eb 12                	jmp    86bd49a <_ZN7WarRoom11WalkOutUserEP5CUser+0x3a>
 86bd488:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86bd48b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bd48f:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd492:	89 04 24             	mov    %eax,(%esp)
 86bd495:	e8 bc fd ff ff       	call   86bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>
 86bd49a:	c9                   	leave
 86bd49b:	c3                   	ret

```

```c
// WarRoom::WalkOutUser @ 0x86bd460

/* WarRoom::WalkOutUser(CUser*) */

undefined4 __thiscall WarRoom::WalkOutUser(WarRoom *this,CUser *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetUserSlot(this,param_1);
  if (iVar1 < 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = WalkOutUserBySlot(this,iVar1);
  }
  return uVar2;
}

```

---

## WalkOutUserBySlot

```asm
// === 086bd256 WarRoom::WalkOutUserBySlot  [0x086bd256-0x86bd3eb] ===
 86bd256:	55                   	push   %ebp
 86bd257:	89 e5                	mov    %esp,%ebp
 86bd259:	56                   	push   %esi
 86bd25a:	53                   	push   %ebx
 86bd25b:	83 ec 30             	sub    $0x30,%esp
 86bd25e:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bd261:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd264:	83 c2 48             	add    $0x48,%edx
 86bd267:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd26b:	85 c0                	test   %eax,%eax
 86bd26d:	75 3d                	jne    86bd2ac <_ZN7WarRoom17WalkOutUserBySlotEi+0x56>
 86bd26f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bd272:	89 44 24 14          	mov    %eax,0x14(%esp)
 86bd276:	c7 44 24 10 9c 95 cf 	movl   $0x8cf959c,0x10(%esp)
 86bd27d:	08 
 86bd27e:	c7 44 24 0c cc 05 00 	movl   $0x5cc,0xc(%esp)
 86bd285:	00 
 86bd286:	c7 44 24 08 e0 a5 cf 	movl   $0x8cfa5e0,0x8(%esp)
 86bd28d:	08 
 86bd28e:	c7 44 24 04 3b 95 cf 	movl   $0x8cf953b,0x4(%esp)
 86bd295:	08 
 86bd296:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86bd29d:	e8 68 69 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86bd2a2:	bb 04 00 00 00       	mov    $0x4,%ebx
 86bd2a7:	e9 37 01 00 00       	jmp    86bd3e3 <_ZN7WarRoom17WalkOutUserBySlotEi+0x18d>
 86bd2ac:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bd2af:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd2b2:	83 c2 48             	add    $0x48,%edx
 86bd2b5:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd2b9:	89 04 24             	mov    %eax,(%esp)
 86bd2bc:	e8 99 c6 a3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 86bd2c1:	89 04 24             	mov    %eax,(%esp)
 86bd2c4:	e8 b7 ad a3 ff       	call   80f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>
 86bd2c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bd2cc:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd2cf:	83 c2 48             	add    $0x48,%edx
 86bd2d2:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86bd2d6:	89 04 24             	mov    %eax,(%esp)
 86bd2d9:	e8 7c c6 a3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 86bd2de:	89 04 24             	mov    %eax,(%esp)
 86bd2e1:	e8 c0 ae a3 ff       	call   80f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>
 86bd2e6:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bd2e9:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd2ec:	83 c2 50             	add    $0x50,%edx
 86bd2ef:	c7 44 90 08 ff 00 00 	movl   $0xff,0x8(%eax,%edx,4)
 86bd2f6:	00 
 86bd2f7:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bd2fa:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd2fd:	83 c2 48             	add    $0x48,%edx
 86bd300:	8b 5c 90 0c          	mov    0xc(%eax,%edx,4),%ebx
 86bd304:	e8 9e d0 a1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86bd309:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86bd30d:	89 04 24             	mov    %eax,(%esp)
 86bd310:	e8 3d a1 00 00       	call   86c7452 <_ZN9GameWorld16out_from_warroomEP5CUser>
 86bd315:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd318:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bd31e:	85 c0                	test   %eax,%eax
 86bd320:	74 3d                	je     86bd35f <_ZN7WarRoom17WalkOutUserBySlotEi+0x109>
 86bd322:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd325:	0f b6 00             	movzbl (%eax),%eax
 86bd328:	0f b6 d8             	movzbl %al,%ebx
 86bd32b:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd32e:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 86bd334:	89 04 24             	mov    %eax,(%esp)
 86bd337:	e8 6a 82 a8 ff       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 86bd33c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86bd33f:	8b 55 08             	mov    0x8(%ebp),%edx
 86bd342:	83 c1 48             	add    $0x48,%ecx
 86bd345:	8b 54 8a 0c          	mov    0xc(%edx,%ecx,4),%edx
 86bd349:	81 c2 00 97 07 00    	add    $0x79700,%edx
 86bd34f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86bd353:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bd357:	89 14 24             	mov    %edx,(%esp)
 86bd35a:	e8 e3 76 fc ff       	call   8684a42 <_ZN15cUserHistoryLog12LeaveDungeonEPKci>
 86bd35f:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bd362:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd365:	83 c2 48             	add    $0x48,%edx
 86bd368:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 86bd36f:	00 
 86bd370:	8b 45 0c             	mov    0xc(%ebp),%eax
 86bd373:	8b 55 08             	mov    0x8(%ebp),%edx
 86bd376:	c6 84 02 84 01 00 00 	movb   $0x0,0x184(%edx,%eax,1)
 86bd37d:	00 
 86bd37e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bd381:	89 04 24             	mov    %eax,(%esp)
 86bd384:	e8 c3 09 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86bd389:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bd38c:	8b 55 0c             	mov    0xc(%ebp),%edx
 86bd38f:	89 54 24 08          	mov    %edx,0x8(%esp)
 86bd393:	89 44 24 04          	mov    %eax,0x4(%esp)
 86bd397:	8b 45 08             	mov    0x8(%ebp),%eax
 86bd39a:	89 04 24             	mov    %eax,(%esp)
 86bd39d:	e8 fe 0a 00 00       	call   86bdea0 <_ZN7WarRoom12MakeSlotInfoEPci>
 86bd3a2:	e8 00 d0 a1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86bd3a7:	8d 55 ec             	lea    -0x14(%ebp),%edx
 86bd3aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 86bd3ae:	89 04 24             	mov    %eax,(%esp)
 86bd3b1:	e8 5e b8 00 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 86bd3b6:	bb 00 00 00 00       	mov    $0x0,%ebx
 86bd3bb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bd3be:	89 04 24             	mov    %eax,(%esp)
 86bd3c1:	e8 ba 0a ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bd3c6:	eb 1b                	jmp    86bd3e3 <_ZN7WarRoom17WalkOutUserBySlotEi+0x18d>
 86bd3c8:	89 d3                	mov    %edx,%ebx
 86bd3ca:	89 c6                	mov    %eax,%esi
 86bd3cc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86bd3cf:	89 04 24             	mov    %eax,(%esp)
 86bd3d2:	e8 a9 0a ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86bd3d7:	89 f0                	mov    %esi,%eax
 86bd3d9:	89 da                	mov    %ebx,%edx
 86bd3db:	89 04 24             	mov    %eax,(%esp)
 86bd3de:	e8 6d 63 42 00       	call   8ae3750 <_Unwind_Resume>
 86bd3e3:	89 d8                	mov    %ebx,%eax
 86bd3e5:	83 c4 30             	add    $0x30,%esp
 86bd3e8:	5b                   	pop    %ebx
 86bd3e9:	5e                   	pop    %esi
 86bd3ea:	5d                   	pop    %ebp
 86bd3eb:	c3                   	ret

```

```c
// WarRoom::WalkOutUserBySlot @ 0x86bd256

/* WarRoom::WalkOutUserBySlot(int) */

undefined4 __thiscall WarRoom::WalkOutUserBySlot(WarRoom *this,int param_1)

{
  WarRoom WVar1;
  CUser *pCVar2;
  CHackAnalyzer *this_00;
  GameWorld *pGVar3;
  char *pcVar4;
  undefined4 uVar5;
  PacketGuard local_18 [12];
  
  if (*(int *)(this + (param_1 + 0x48) * 4 + 0xc) == 0) {
    LogManager::logFormat
              (1,"WarRoom.cpp","int WarRoom::WalkOutUserBySlot(int)",0x5cc,
               "WarRoom::WalkOutUserBySlot no slot(%d)",param_1);
    uVar5 = 4;
  }
  else {
    CUser::getHackAnalyzer(*(CUser **)(this + (param_1 + 0x48) * 4 + 0xc));
    WongWork::CHackAnalyzer::reportHackInfo();
    this_00 = (CHackAnalyzer *)
              CUser::getHackAnalyzer(*(CUser **)(this + (param_1 + 0x48) * 4 + 0xc));
    WongWork::CHackAnalyzer::resetHackInfo(this_00);
    *(undefined4 *)(this + (param_1 + 0x50) * 4 + 8) = 0xff;
    pCVar2 = *(CUser **)(this + (param_1 + 0x48) * 4 + 0xc);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::out_from_warroom(pGVar3,pCVar2);
    if (*(int *)(this + 0x1d0) != 0) {
      WVar1 = *this;
      pcVar4 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0x1d0));
      cUserHistoryLog::LeaveDungeon
                ((cUserHistoryLog *)(*(int *)(this + (param_1 + 0x48) * 4 + 0xc) + 0x79700),pcVar4,
                 (uint)(byte)WVar1);
    }
    *(undefined4 *)(this + (param_1 + 0x48) * 4 + 0xc) = 0;
    this[param_1 + 0x184] = (WarRoom)0x0;
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086bd39d to 086bd3b5 has its CatchHandler @ 086bd3c8 */
    MakeSlotInfo(this,(char *)local_18,param_1);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar3,local_18);
    uVar5 = 0;
    PacketGuard::~PacketGuard(local_18);
  }
  return uVar5;
}

```

---

## WarRoom

```asm
// === 086ba75c WarRoom::WarRoom  [0x086ba75c-0x86ba7e5] ===
 86ba75c:	55                   	push   %ebp
 86ba75d:	89 e5                	mov    %esp,%ebp
 86ba75f:	56                   	push   %esi
 86ba760:	53                   	push   %ebx
 86ba761:	83 ec 20             	sub    $0x20,%esp
 86ba764:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba767:	83 c0 34             	add    $0x34,%eax
 86ba76a:	89 04 24             	mov    %eax,(%esp)
 86ba76d:	e8 1c 64 00 00       	call   86c0b8e <_ZN8WarFieldC1Ev>
 86ba772:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba775:	05 d8 01 00 00       	add    $0x1d8,%eax
 86ba77a:	89 04 24             	mov    %eax,(%esp)
 86ba77d:	e8 46 5a d9 ff       	call   84501c8 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEEC1Ev>
 86ba782:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 86ba789:	ff 
 86ba78a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba78d:	89 04 24             	mov    %eax,(%esp)
 86ba790:	e8 c1 b2 be ff       	call   82a5a56 <_ZN7WarRoom8SetStateE13WARROOM_STATE>
 86ba795:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86ba79c:	eb 15                	jmp    86ba7b3 <_ZN7WarRoomC1Ev+0x57>
 86ba79e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ba7a1:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba7a4:	83 c2 48             	add    $0x48,%edx
 86ba7a7:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 86ba7ae:	00 
 86ba7af:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86ba7b3:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 86ba7b7:	0f 9e c0             	setle  %al
 86ba7ba:	84 c0                	test   %al,%al
 86ba7bc:	75 e0                	jne    86ba79e <_ZN7WarRoomC1Ev+0x42>
 86ba7be:	eb 1e                	jmp    86ba7de <_ZN7WarRoomC1Ev+0x82>
 86ba7c0:	89 d3                	mov    %edx,%ebx
 86ba7c2:	89 c6                	mov    %eax,%esi
 86ba7c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba7c7:	83 c0 34             	add    $0x34,%eax
 86ba7ca:	89 04 24             	mov    %eax,(%esp)
 86ba7cd:	e8 d2 63 00 00       	call   86c0ba4 <_ZN8WarFieldD1Ev>
 86ba7d2:	89 f0                	mov    %esi,%eax
 86ba7d4:	89 da                	mov    %ebx,%edx
 86ba7d6:	89 04 24             	mov    %eax,(%esp)
 86ba7d9:	e8 72 8f 42 00       	call   8ae3750 <_Unwind_Resume>
 86ba7de:	83 c4 20             	add    $0x20,%esp
 86ba7e1:	5b                   	pop    %ebx
 86ba7e2:	5e                   	pop    %esi
 86ba7e3:	5d                   	pop    %ebp
 86ba7e4:	c3                   	ret
 86ba7e5:	90                   	nop

```

```c
// WarRoom::WarRoom @ 0x86ba75c

/* WarRoom::WarRoom() */

void __thiscall WarRoom::WarRoom(WarRoom *this)

{
  int local_10;
  
  WarField::WarField((WarField *)(this + 0x34));
                    /* try { // try from 086ba77d to 086ba781 has its CatchHandler @ 086ba7c0 */
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  map((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
       *)(this + 0x1d8));
  SetState(this,0xffffffff);
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x48) * 4 + 0xc) = 0;
  }
  return;
}

```

---

## WarRoomFail

```asm
// === 086c07ee WarRoom::WarRoomFail  [0x086c07ee-0x86c08a5] ===
 86c07ee:	55                   	push   %ebp
 86c07ef:	89 e5                	mov    %esp,%ebp
 86c07f1:	83 ec 28             	sub    $0x28,%esp
 86c07f4:	8b 45 08             	mov    0x8(%ebp),%eax
 86c07f7:	89 04 24             	mov    %eax,(%esp)
 86c07fa:	e8 0d a4 ff ff       	call   86bac0c <_ZNK7WarRoom12GetLiveCountEv>
 86c07ff:	85 c0                	test   %eax,%eax
 86c0801:	0f 95 c0             	setne  %al
 86c0804:	84 c0                	test   %al,%al
 86c0806:	0f 85 96 00 00 00    	jne    86c08a2 <_ZN7WarRoom11WarRoomFailEv+0xb4>
 86c080c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86c0813:	eb 6d                	jmp    86c0882 <_ZN7WarRoom11WarRoomFailEv+0x94>
 86c0815:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c0818:	8b 45 08             	mov    0x8(%ebp),%eax
 86c081b:	83 c2 48             	add    $0x48,%edx
 86c081e:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c0822:	85 c0                	test   %eax,%eax
 86c0824:	74 58                	je     86c087e <_ZN7WarRoom11WarRoomFailEv+0x90>
 86c0826:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c0829:	8b 45 08             	mov    0x8(%ebp),%eax
 86c082c:	83 c2 48             	add    $0x48,%edx
 86c082f:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c0833:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0837:	8b 45 08             	mov    0x8(%ebp),%eax
 86c083a:	89 04 24             	mov    %eax,(%esp)
 86c083d:	e8 06 a1 ff ff       	call   86ba948 <_ZN7WarRoom10AddBanListEP5CUser>
 86c0842:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86c0845:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0848:	83 c2 48             	add    $0x48,%edx
 86c084b:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 86c084f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86c0852:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86c0855:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0859:	8b 45 08             	mov    0x8(%ebp),%eax
 86c085c:	89 04 24             	mov    %eax,(%esp)
 86c085f:	e8 f2 c9 ff ff       	call   86bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>
 86c0864:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 86c086b:	00 
 86c086c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c086f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c0873:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0876:	89 04 24             	mov    %eax,(%esp)
 86c0879:	e8 d4 d8 ff ff       	call   86be152 <_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE>
 86c087e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86c0882:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 86c0886:	0f 9e c0             	setle  %al
 86c0889:	84 c0                	test   %al,%al
 86c088b:	75 88                	jne    86c0815 <_ZN7WarRoom11WarRoomFailEv+0x27>
 86c088d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86c0894:	00 
 86c0895:	8b 45 08             	mov    0x8(%ebp),%eax
 86c0898:	89 04 24             	mov    %eax,(%esp)
 86c089b:	e8 9c ac ff ff       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 86c08a0:	eb 01                	jmp    86c08a3 <_ZN7WarRoom11WarRoomFailEv+0xb5>
 86c08a2:	90                   	nop
 86c08a3:	c9                   	leave
 86c08a4:	c3                   	ret
 86c08a5:	90                   	nop

```

```c
// WarRoom::WarRoomFail @ 0x86c07ee

/* WarRoom::WarRoomFail() */

void __thiscall WarRoom::WarRoomFail(WarRoom *this)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  
  iVar2 = GetLiveCount(this);
  if (iVar2 == 0) {
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
        AddBanList(this,*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc));
        uVar1 = *(undefined4 *)(this + (local_14 + 0x48) * 4 + 0xc);
        WalkOutUserBySlot(this,local_14);
        SendWalkOut(this,uVar1,4);
      }
    }
    ChangeState(this,0);
  }
  return;
}

```

---

## ~WarRoom

```asm
// === 086ba7e6 WarRoom::~WarRoom  [0x086ba7e6-0x86ba833] ===
 86ba7e6:	55                   	push   %ebp
 86ba7e7:	89 e5                	mov    %esp,%ebp
 86ba7e9:	56                   	push   %esi
 86ba7ea:	53                   	push   %ebx
 86ba7eb:	83 ec 10             	sub    $0x10,%esp
 86ba7ee:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba7f1:	05 d8 01 00 00       	add    $0x1d8,%eax
 86ba7f6:	89 04 24             	mov    %eax,(%esp)
 86ba7f9:	e8 be 2c d9 ff       	call   844d4bc <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEED1Ev>
 86ba7fe:	eb 1e                	jmp    86ba81e <_ZN7WarRoomD1Ev+0x38>
 86ba800:	89 d3                	mov    %edx,%ebx
 86ba802:	89 c6                	mov    %eax,%esi
 86ba804:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba807:	83 c0 34             	add    $0x34,%eax
 86ba80a:	89 04 24             	mov    %eax,(%esp)
 86ba80d:	e8 92 63 00 00       	call   86c0ba4 <_ZN8WarFieldD1Ev>
 86ba812:	89 f0                	mov    %esi,%eax
 86ba814:	89 da                	mov    %ebx,%edx
 86ba816:	89 04 24             	mov    %eax,(%esp)
 86ba819:	e8 32 8f 42 00       	call   8ae3750 <_Unwind_Resume>
 86ba81e:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba821:	83 c0 34             	add    $0x34,%eax
 86ba824:	89 04 24             	mov    %eax,(%esp)
 86ba827:	e8 78 63 00 00       	call   86c0ba4 <_ZN8WarFieldD1Ev>
 86ba82c:	83 c4 10             	add    $0x10,%esp
 86ba82f:	5b                   	pop    %ebx
 86ba830:	5e                   	pop    %esi
 86ba831:	5d                   	pop    %ebp
 86ba832:	c3                   	ret
 86ba833:	90                   	nop

```

```c
// WarRoom::~WarRoom @ 0x86ba7e6

/* WarRoom::~WarRoom() */

void __thiscall WarRoom::~WarRoom(WarRoom *this)

{
                    /* try { // try from 086ba7f9 to 086ba7fd has its CatchHandler @ 086ba800 */
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  ~map((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
        *)(this + 0x1d8));
  WarField::~WarField((WarField *)(this + 0x34));
  return;
}

```

