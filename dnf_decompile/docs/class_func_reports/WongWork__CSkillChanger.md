# WongWork__CSkillChanger

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CheckCondition

```asm
// === 08609d10 WongWork::CSkillChanger::CheckCondition  [0x08609d10-0x8609d9b] ===
 8609d10:	55                   	push   %ebp
 8609d11:	89 e5                	mov    %esp,%ebp
 8609d13:	53                   	push   %ebx
 8609d14:	83 ec 24             	sub    $0x24,%esp
 8609d17:	8b 45 08             	mov    0x8(%ebp),%eax
 8609d1a:	89 04 24             	mov    %eax,(%esp)
 8609d1d:	e8 96 05 ad ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8609d22:	89 c3                	mov    %eax,%ebx
 8609d24:	e8 72 24 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8609d29:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8609d2d:	89 04 24             	mov    %eax,(%esp)
 8609d30:	e8 0d 67 d5 ff       	call   8360442 <_ZNK12CDataManager13get_level_expEi>
 8609d35:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8609d38:	8b 45 08             	mov    0x8(%ebp),%eax
 8609d3b:	89 04 24             	mov    %eax,(%esp)
 8609d3e:	e8 75 05 ad ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8609d43:	8d 58 01             	lea    0x1(%eax),%ebx
 8609d46:	e8 50 24 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 8609d4b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8609d4f:	89 04 24             	mov    %eax,(%esp)
 8609d52:	e8 eb 66 d5 ff       	call   8360442 <_ZNK12CDataManager13get_level_expEi>
 8609d57:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8609d5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8609d5d:	89 04 24             	mov    %eax,(%esp)
 8609d60:	e8 59 7d b4 ff       	call   8151abe <_ZNK15CUserCharacInfo15getCurCharacExpEv>
 8609d65:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8609d68:	72 10                	jb     8609d7a <_ZN8WongWork13CSkillChanger14CheckConditionEPK5CUser+0x6a>
 8609d6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8609d6d:	89 04 24             	mov    %eax,(%esp)
 8609d70:	e8 49 7d b4 ff       	call   8151abe <_ZNK15CUserCharacInfo15getCurCharacExpEv>
 8609d75:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8609d78:	76 07                	jbe    8609d81 <_ZN8WongWork13CSkillChanger14CheckConditionEPK5CUser+0x71>
 8609d7a:	b8 01 00 00 00       	mov    $0x1,%eax
 8609d7f:	eb 05                	jmp    8609d86 <_ZN8WongWork13CSkillChanger14CheckConditionEPK5CUser+0x76>
 8609d81:	b8 00 00 00 00       	mov    $0x0,%eax
 8609d86:	84 c0                	test   %al,%al
 8609d88:	74 07                	je     8609d91 <_ZN8WongWork13CSkillChanger14CheckConditionEPK5CUser+0x81>
 8609d8a:	b8 00 00 00 00       	mov    $0x0,%eax
 8609d8f:	eb 05                	jmp    8609d96 <_ZN8WongWork13CSkillChanger14CheckConditionEPK5CUser+0x86>
 8609d91:	b8 01 00 00 00       	mov    $0x1,%eax
 8609d96:	83 c4 24             	add    $0x24,%esp
 8609d99:	5b                   	pop    %ebx
 8609d9a:	5d                   	pop    %ebp
 8609d9b:	c3                   	ret

```

```c
// WongWork::CSkillChanger::CheckCondition @ 0x8609d10

/* WongWork::CSkillChanger::CheckCondition(CUser const*) */

bool WongWork::CSkillChanger::CheckCondition(CUser *param_1)

{
  bool bVar1;
  int iVar2;
  CDataManager *pCVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pCVar3 = (CDataManager *)G_CDataManager();
  uVar4 = CDataManager::get_level_exp(pCVar3,iVar2);
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pCVar3 = (CDataManager *)G_CDataManager();
  uVar5 = CDataManager::get_level_exp(pCVar3,iVar2 + 1);
  uVar6 = CUserCharacInfo::getCurCharacExp((CUserCharacInfo *)param_1);
  if ((uVar6 < uVar4) ||
     (uVar4 = CUserCharacInfo::getCurCharacExp((CUserCharacInfo *)param_1), uVar5 < uVar4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return !bVar1;
}

```

---

## CountElixer

```asm
// === 08609d9c WongWork::CSkillChanger::CountElixer  [0x08609d9c-0x8609e8f] ===
 8609d9c:	55                   	push   %ebp
 8609d9d:	89 e5                	mov    %esp,%ebp
 8609d9f:	83 ec 18             	sub    $0x18,%esp
 8609da2:	8b 45 08             	mov    0x8(%ebp),%eax
 8609da5:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8609dac:	00 
 8609dad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8609db4:	00 
 8609db5:	89 04 24             	mov    %eax,(%esp)
 8609db8:	e8 03 3f a7 ff       	call   807dcc0 <memset@plt>
 8609dbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8609dc0:	83 c0 24             	add    $0x24,%eax
 8609dc3:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8609dca:	00 
 8609dcb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8609dd2:	00 
 8609dd3:	89 04 24             	mov    %eax,(%esp)
 8609dd6:	e8 e5 3e a7 ff       	call   807dcc0 <memset@plt>
 8609ddb:	8b 45 08             	mov    0x8(%ebp),%eax
 8609dde:	83 c0 48             	add    $0x48,%eax
 8609de1:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8609de8:	00 
 8609de9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8609df0:	00 
 8609df1:	89 04 24             	mov    %eax,(%esp)
 8609df4:	e8 c7 3e a7 ff       	call   807dcc0 <memset@plt>
 8609df9:	8b 45 08             	mov    0x8(%ebp),%eax
 8609dfc:	83 c0 6c             	add    $0x6c,%eax
 8609dff:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8609e06:	00 
 8609e07:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8609e0e:	00 
 8609e0f:	89 04 24             	mov    %eax,(%esp)
 8609e12:	e8 a9 3e a7 ff       	call   807dcc0 <memset@plt>
 8609e17:	8b 45 08             	mov    0x8(%ebp),%eax
 8609e1a:	c7 00 08 00 00 00    	movl   $0x8,(%eax)
 8609e20:	8b 45 08             	mov    0x8(%ebp),%eax
 8609e23:	c7 40 24 08 00 00 00 	movl   $0x8,0x24(%eax)
 8609e2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8609e2d:	c7 40 48 08 00 00 00 	movl   $0x8,0x48(%eax)
 8609e34:	8b 45 08             	mov    0x8(%ebp),%eax
 8609e37:	c7 40 6c 08 00 00 00 	movl   $0x8,0x6c(%eax)
 8609e3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8609e41:	c6 80 91 00 00 00 01 	movb   $0x1,0x91(%eax)
 8609e48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609e4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609e4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8609e52:	89 04 24             	mov    %eax,(%esp)
 8609e55:	e8 f0 04 00 00       	call   860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>
 8609e5a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8609e61:	00 
 8609e62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609e65:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609e69:	8b 45 08             	mov    0x8(%ebp),%eax
 8609e6c:	89 04 24             	mov    %eax,(%esp)
 8609e6f:	e8 dc 0a 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 8609e74:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8609e7b:	00 
 8609e7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609e7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609e83:	8b 45 08             	mov    0x8(%ebp),%eax
 8609e86:	89 04 24             	mov    %eax,(%esp)
 8609e89:	e8 c2 0a 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 8609e8e:	c9                   	leave
 8609e8f:	c3                   	ret

```

```c
// WongWork::CSkillChanger::CountElixer @ 0x8609d9c

/* WongWork::CSkillChanger::CountElixer(CUser*) */

void __thiscall WongWork::CSkillChanger::CountElixer(CSkillChanger *this,CUser *param_1)

{
  memset(this,0,0x24);
  memset(this + 0x24,0,0x24);
  memset(this + 0x48,0,0x24);
  memset(this + 0x6c,0,0x24);
  *(undefined4 *)this = 8;
  *(undefined4 *)(this + 0x24) = 8;
  *(undefined4 *)(this + 0x48) = 8;
  *(undefined4 *)(this + 0x6c) = 8;
  this[0x91] = (CSkillChanger)0x1;
  _GetUserItemCount(this,param_1);
  _ApplyUserData(this,param_1,0);
  _ApplyUserData(this,param_1,1);
  return;
}

```

---

## GetCurCharacTotalSP

```asm
// === 0860a1e6 WongWork::CSkillChanger::GetCurCharacTotalSP  [0x0860a1e6-0x860a2eb] ===
 860a1e6:	55                   	push   %ebp
 860a1e7:	89 e5                	mov    %esp,%ebp
 860a1e9:	83 ec 38             	sub    $0x38,%esp
 860a1ec:	8b 45 10             	mov    0x10(%ebp),%eax
 860a1ef:	88 45 e4             	mov    %al,-0x1c(%ebp)
 860a1f2:	8b 45 08             	mov    0x8(%ebp),%eax
 860a1f5:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 860a1f9:	88 90 90 00 00 00    	mov    %dl,0x90(%eax)
 860a1ff:	8b 45 08             	mov    0x8(%ebp),%eax
 860a202:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 860a209:	00 
 860a20a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860a211:	00 
 860a212:	89 04 24             	mov    %eax,(%esp)
 860a215:	e8 a6 3a a7 ff       	call   807dcc0 <memset@plt>
 860a21a:	8b 45 08             	mov    0x8(%ebp),%eax
 860a21d:	83 c0 24             	add    $0x24,%eax
 860a220:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 860a227:	00 
 860a228:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860a22f:	00 
 860a230:	89 04 24             	mov    %eax,(%esp)
 860a233:	e8 88 3a a7 ff       	call   807dcc0 <memset@plt>
 860a238:	8b 45 08             	mov    0x8(%ebp),%eax
 860a23b:	83 c0 48             	add    $0x48,%eax
 860a23e:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 860a245:	00 
 860a246:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860a24d:	00 
 860a24e:	89 04 24             	mov    %eax,(%esp)
 860a251:	e8 6a 3a a7 ff       	call   807dcc0 <memset@plt>
 860a256:	8b 45 08             	mov    0x8(%ebp),%eax
 860a259:	83 c0 6c             	add    $0x6c,%eax
 860a25c:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 860a263:	00 
 860a264:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860a26b:	00 
 860a26c:	89 04 24             	mov    %eax,(%esp)
 860a26f:	e8 4c 3a a7 ff       	call   807dcc0 <memset@plt>
 860a274:	8b 45 08             	mov    0x8(%ebp),%eax
 860a277:	c7 00 08 00 00 00    	movl   $0x8,(%eax)
 860a27d:	8b 45 08             	mov    0x8(%ebp),%eax
 860a280:	c7 40 24 08 00 00 00 	movl   $0x8,0x24(%eax)
 860a287:	8b 45 08             	mov    0x8(%ebp),%eax
 860a28a:	c7 40 48 08 00 00 00 	movl   $0x8,0x48(%eax)
 860a291:	8b 45 08             	mov    0x8(%ebp),%eax
 860a294:	c7 40 6c 08 00 00 00 	movl   $0x8,0x6c(%eax)
 860a29b:	8b 45 08             	mov    0x8(%ebp),%eax
 860a29e:	c6 80 91 00 00 00 00 	movb   $0x0,0x91(%eax)
 860a2a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a2a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a2ac:	8b 45 08             	mov    0x8(%ebp),%eax
 860a2af:	89 04 24             	mov    %eax,(%esp)
 860a2b2:	e8 7d 03 00 00       	call   860a634 <_ZNK8WongWork13CSkillChanger18_GetBaseSkillPointEPK5CUser>
 860a2b7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860a2ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a2bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a2c1:	8b 45 08             	mov    0x8(%ebp),%eax
 860a2c4:	89 04 24             	mov    %eax,(%esp)
 860a2c7:	e8 7e 00 00 00       	call   860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>
 860a2cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a2cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a2d3:	8b 45 08             	mov    0x8(%ebp),%eax
 860a2d6:	89 04 24             	mov    %eax,(%esp)
 860a2d9:	e8 f2 03 00 00       	call   860a6d0 <_ZN8WongWork13CSkillChanger19_GetQuestSkillPointEPK5CUser>
 860a2de:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860a2e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860a2e4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 860a2e7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 860a2ea:	c9                   	leave
 860a2eb:	c3                   	ret

```

```c
// WongWork::CSkillChanger::GetCurCharacTotalSP @ 0x860a1e6

/* WongWork::CSkillChanger::GetCurCharacTotalSP(CUser const*, bool) */

int __thiscall
WongWork::CSkillChanger::GetCurCharacTotalSP(CSkillChanger *this,CUser *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  
  this[0x90] = (CSkillChanger)param_2;
  memset(this,0,0x24);
  memset(this + 0x24,0,0x24);
  memset(this + 0x48,0,0x24);
  memset(this + 0x6c,0,0x24);
  *(undefined4 *)this = 8;
  *(undefined4 *)(this + 0x24) = 8;
  *(undefined4 *)(this + 0x48) = 8;
  *(undefined4 *)(this + 0x6c) = 8;
  this[0x91] = (CSkillChanger)0x0;
  iVar1 = _GetBaseSkillPoint(this,param_1);
  _GetUserItemCount(this,param_1);
  iVar2 = _GetQuestSkillPoint((CUser *)this);
  return iVar1 + iVar2;
}

```

---

## SkillInitialize

```asm
// === 08609e90 WongWork::CSkillChanger::SkillInitialize  [0x08609e90-0x860a1e5] ===
 8609e90:	55                   	push   %ebp
 8609e91:	89 e5                	mov    %esp,%ebp
 8609e93:	83 ec 28             	sub    $0x28,%esp
 8609e96:	8b 45 14             	mov    0x14(%ebp),%eax
 8609e99:	88 45 f4             	mov    %al,-0xc(%ebp)
 8609e9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8609e9f:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 8609ea3:	88 90 90 00 00 00    	mov    %dl,0x90(%eax)
 8609ea9:	8b 45 08             	mov    0x8(%ebp),%eax
 8609eac:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8609eb3:	00 
 8609eb4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8609ebb:	00 
 8609ebc:	89 04 24             	mov    %eax,(%esp)
 8609ebf:	e8 fc 3d a7 ff       	call   807dcc0 <memset@plt>
 8609ec4:	8b 45 08             	mov    0x8(%ebp),%eax
 8609ec7:	83 c0 24             	add    $0x24,%eax
 8609eca:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8609ed1:	00 
 8609ed2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8609ed9:	00 
 8609eda:	89 04 24             	mov    %eax,(%esp)
 8609edd:	e8 de 3d a7 ff       	call   807dcc0 <memset@plt>
 8609ee2:	8b 45 08             	mov    0x8(%ebp),%eax
 8609ee5:	83 c0 48             	add    $0x48,%eax
 8609ee8:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8609eef:	00 
 8609ef0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8609ef7:	00 
 8609ef8:	89 04 24             	mov    %eax,(%esp)
 8609efb:	e8 c0 3d a7 ff       	call   807dcc0 <memset@plt>
 8609f00:	8b 45 08             	mov    0x8(%ebp),%eax
 8609f03:	83 c0 6c             	add    $0x6c,%eax
 8609f06:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8609f0d:	00 
 8609f0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8609f15:	00 
 8609f16:	89 04 24             	mov    %eax,(%esp)
 8609f19:	e8 a2 3d a7 ff       	call   807dcc0 <memset@plt>
 8609f1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8609f21:	c7 00 08 00 00 00    	movl   $0x8,(%eax)
 8609f27:	8b 45 08             	mov    0x8(%ebp),%eax
 8609f2a:	c7 40 24 08 00 00 00 	movl   $0x8,0x24(%eax)
 8609f31:	8b 45 08             	mov    0x8(%ebp),%eax
 8609f34:	c7 40 48 08 00 00 00 	movl   $0x8,0x48(%eax)
 8609f3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8609f3e:	c7 40 6c 08 00 00 00 	movl   $0x8,0x6c(%eax)
 8609f45:	8b 45 08             	mov    0x8(%ebp),%eax
 8609f48:	c6 80 91 00 00 00 00 	movb   $0x0,0x91(%eax)
 8609f4f:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8609f53:	0f 85 e7 00 00 00    	jne    860a040 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib+0x1b0>
 8609f59:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8609f60:	00 
 8609f61:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609f64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609f68:	8b 45 08             	mov    0x8(%ebp),%eax
 8609f6b:	89 04 24             	mov    %eax,(%esp)
 8609f6e:	e8 e5 05 00 00       	call   860a558 <_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND>
 8609f73:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8609f7a:	00 
 8609f7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609f7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609f82:	8b 45 08             	mov    0x8(%ebp),%eax
 8609f85:	89 04 24             	mov    %eax,(%esp)
 8609f88:	e8 cb 05 00 00       	call   860a558 <_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND>
 8609f8d:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8609f94:	00 
 8609f95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609f98:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609f9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8609f9f:	89 04 24             	mov    %eax,(%esp)
 8609fa2:	e8 31 06 00 00       	call   860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>
 8609fa7:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8609fae:	00 
 8609faf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609fb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609fb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8609fb9:	89 04 24             	mov    %eax,(%esp)
 8609fbc:	e8 17 06 00 00       	call   860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>
 8609fc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609fc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609fc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8609fcb:	89 04 24             	mov    %eax,(%esp)
 8609fce:	e8 77 03 00 00       	call   860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>
 8609fd3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8609fda:	00 
 8609fdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609fde:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609fe2:	8b 45 08             	mov    0x8(%ebp),%eax
 8609fe5:	89 04 24             	mov    %eax,(%esp)
 8609fe8:	e8 63 09 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 8609fed:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8609ff4:	00 
 8609ff5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8609ff8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8609ffc:	8b 45 08             	mov    0x8(%ebp),%eax
 8609fff:	89 04 24             	mov    %eax,(%esp)
 860a002:	e8 49 09 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 860a007:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 860a00e:	00 
 860a00f:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a012:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a016:	8b 45 08             	mov    0x8(%ebp),%eax
 860a019:	89 04 24             	mov    %eax,(%esp)
 860a01c:	e8 2f 09 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 860a021:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 860a028:	00 
 860a029:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a02c:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a030:	8b 45 08             	mov    0x8(%ebp),%eax
 860a033:	89 04 24             	mov    %eax,(%esp)
 860a036:	e8 15 09 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 860a03b:	e9 a4 01 00 00       	jmp    860a1e4 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib+0x354>
 860a040:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 860a044:	75 7f                	jne    860a0c5 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib+0x235>
 860a046:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860a04d:	00 
 860a04e:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a051:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a055:	8b 45 08             	mov    0x8(%ebp),%eax
 860a058:	89 04 24             	mov    %eax,(%esp)
 860a05b:	e8 f8 04 00 00       	call   860a558 <_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND>
 860a060:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 860a067:	00 
 860a068:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a06b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a06f:	8b 45 08             	mov    0x8(%ebp),%eax
 860a072:	89 04 24             	mov    %eax,(%esp)
 860a075:	e8 5e 05 00 00       	call   860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>
 860a07a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a07d:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a081:	8b 45 08             	mov    0x8(%ebp),%eax
 860a084:	89 04 24             	mov    %eax,(%esp)
 860a087:	e8 be 02 00 00       	call   860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>
 860a08c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860a093:	00 
 860a094:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a097:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a09b:	8b 45 08             	mov    0x8(%ebp),%eax
 860a09e:	89 04 24             	mov    %eax,(%esp)
 860a0a1:	e8 aa 08 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 860a0a6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 860a0ad:	00 
 860a0ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a0b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a0b5:	8b 45 08             	mov    0x8(%ebp),%eax
 860a0b8:	89 04 24             	mov    %eax,(%esp)
 860a0bb:	e8 90 08 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 860a0c0:	e9 1f 01 00 00       	jmp    860a1e4 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib+0x354>
 860a0c5:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 860a0c9:	75 7f                	jne    860a14a <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib+0x2ba>
 860a0cb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860a0d2:	00 
 860a0d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a0d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a0da:	8b 45 08             	mov    0x8(%ebp),%eax
 860a0dd:	89 04 24             	mov    %eax,(%esp)
 860a0e0:	e8 73 04 00 00       	call   860a558 <_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND>
 860a0e5:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 860a0ec:	00 
 860a0ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a0f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a0f4:	8b 45 08             	mov    0x8(%ebp),%eax
 860a0f7:	89 04 24             	mov    %eax,(%esp)
 860a0fa:	e8 d9 04 00 00       	call   860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>
 860a0ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a102:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a106:	8b 45 08             	mov    0x8(%ebp),%eax
 860a109:	89 04 24             	mov    %eax,(%esp)
 860a10c:	e8 39 02 00 00       	call   860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>
 860a111:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860a118:	00 
 860a119:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a11c:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a120:	8b 45 08             	mov    0x8(%ebp),%eax
 860a123:	89 04 24             	mov    %eax,(%esp)
 860a126:	e8 25 08 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 860a12b:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 860a132:	00 
 860a133:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a136:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a13a:	8b 45 08             	mov    0x8(%ebp),%eax
 860a13d:	89 04 24             	mov    %eax,(%esp)
 860a140:	e8 0b 08 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 860a145:	e9 9a 00 00 00       	jmp    860a1e4 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib+0x354>
 860a14a:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 860a14e:	75 48                	jne    860a198 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib+0x308>
 860a150:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 860a157:	00 
 860a158:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a15b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a15f:	8b 45 08             	mov    0x8(%ebp),%eax
 860a162:	89 04 24             	mov    %eax,(%esp)
 860a165:	e8 6e 04 00 00       	call   860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>
 860a16a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a16d:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a171:	8b 45 08             	mov    0x8(%ebp),%eax
 860a174:	89 04 24             	mov    %eax,(%esp)
 860a177:	e8 ce 01 00 00       	call   860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>
 860a17c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 860a183:	00 
 860a184:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a187:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a18b:	8b 45 08             	mov    0x8(%ebp),%eax
 860a18e:	89 04 24             	mov    %eax,(%esp)
 860a191:	e8 ba 07 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 860a196:	eb 4c                	jmp    860a1e4 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib+0x354>
 860a198:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 860a19c:	75 46                	jne    860a1e4 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib+0x354>
 860a19e:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 860a1a5:	00 
 860a1a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a1a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a1ad:	8b 45 08             	mov    0x8(%ebp),%eax
 860a1b0:	89 04 24             	mov    %eax,(%esp)
 860a1b3:	e8 20 04 00 00       	call   860a5d8 <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND>
 860a1b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a1bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a1bf:	8b 45 08             	mov    0x8(%ebp),%eax
 860a1c2:	89 04 24             	mov    %eax,(%esp)
 860a1c5:	e8 80 01 00 00       	call   860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>
 860a1ca:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 860a1d1:	00 
 860a1d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a1d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a1d9:	8b 45 08             	mov    0x8(%ebp),%eax
 860a1dc:	89 04 24             	mov    %eax,(%esp)
 860a1df:	e8 6c 07 00 00       	call   860a950 <_ZN8WongWork13CSkillChanger14_ApplyUserDataEP5CUser20ENUM_SKILL_TREE_KIND>
 860a1e4:	c9                   	leave
 860a1e5:	c3                   	ret

```

```c
// WongWork::CSkillChanger::SkillInitialize @ 0x8609e90

/* WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool) */

void __thiscall
WongWork::CSkillChanger::SkillInitialize
          (CSkillChanger *this,CUser *param_1,int param_2,bool param_3)

{
  this[0x90] = (CSkillChanger)param_3;
  memset(this,0,0x24);
  memset(this + 0x24,0,0x24);
  memset(this + 0x48,0,0x24);
  memset(this + 0x6c,0,0x24);
  *(undefined4 *)this = 8;
  *(undefined4 *)(this + 0x24) = 8;
  *(undefined4 *)(this + 0x48) = 8;
  *(undefined4 *)(this + 0x6c) = 8;
  this[0x91] = (CSkillChanger)0x0;
  if (param_2 == 0) {
    _ResetSkillPoint(this,param_1,0);
    _ResetSkillPoint(this,param_1,1);
    _ResetSFPoint(this,param_1,2);
    _ResetSFPoint(this,param_1,3);
    _GetUserItemCount(this,param_1);
    _ApplyUserData(this,param_1,0);
    _ApplyUserData(this,param_1,1);
    _ApplyUserData(this,param_1,2);
    _ApplyUserData(this,param_1,3);
  }
  else if (param_2 == 1) {
    _ResetSkillPoint(this,param_1,0);
    _ResetSFPoint(this,param_1,2);
    _GetUserItemCount(this,param_1);
    _ApplyUserData(this,param_1,0);
    _ApplyUserData(this,param_1,2);
  }
  else if (param_2 == 2) {
    _ResetSkillPoint(this,param_1,1);
    _ResetSFPoint(this,param_1,3);
    _GetUserItemCount(this,param_1);
    _ApplyUserData(this,param_1,1);
    _ApplyUserData(this,param_1,3);
  }
  else if (param_2 == 3) {
    _ResetSFPoint(this,param_1,2);
    _GetUserItemCount(this,param_1);
    _ApplyUserData(this,param_1,2);
  }
  else if (param_2 == 4) {
    _ResetSFPoint(this,param_1,3);
    _GetUserItemCount(this,param_1);
    _ApplyUserData(this,param_1,3);
  }
  return;
}

```

---

## _ApplyUserData

```asm
// === 0860a950 WongWork::CSkillChanger::_ApplyUserData  [0x0860a950-0x860a954] ===
 860a950:	55                   	push   %ebp
 860a951:	89 e5                	mov    %esp,%ebp
 860a953:	5d                   	pop    %ebp
 860a954:	c3                   	ret

```

```c
// WongWork::CSkillChanger::_ApplyUserData @ 0x860a950

/* WongWork::CSkillChanger::_ApplyUserData(CUser*, ENUM_SKILL_TREE_KIND) */

void WongWork::CSkillChanger::_ApplyUserData(void)

{
  return;
}

```

---

## _CountQuestSPBook

```asm
// === 0860a680 WongWork::CSkillChanger::_CountQuestSPBook  [0x0860a680-0x860a6cf] ===
 860a680:	55                   	push   %ebp
 860a681:	89 e5                	mov    %esp,%ebp
 860a683:	83 ec 28             	sub    $0x28,%esp
 860a686:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a689:	89 04 24             	mov    %eax,(%esp)
 860a68c:	e8 15 02 b9 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 860a691:	8d 50 04             	lea    0x4(%eax),%edx
 860a694:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a697:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 860a69b:	8b 45 08             	mov    0x8(%ebp),%eax
 860a69e:	89 44 24 18          	mov    %eax,0x18(%esp)
 860a6a2:	8b 45 1c             	mov    0x1c(%ebp),%eax
 860a6a5:	89 44 24 14          	mov    %eax,0x14(%esp)
 860a6a9:	8b 45 18             	mov    0x18(%ebp),%eax
 860a6ac:	89 44 24 10          	mov    %eax,0x10(%esp)
 860a6b0:	8b 45 14             	mov    0x14(%ebp),%eax
 860a6b3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860a6b7:	8b 45 10             	mov    0x10(%ebp),%eax
 860a6ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 860a6be:	c7 44 24 04 da a6 60 	movl   $0x860a6da,0x4(%esp)
 860a6c5:	08 
 860a6c6:	89 14 24             	mov    %edx,(%esp)
 860a6c9:	e8 ba 14 a8 ff       	call   808bb88 <_ZNK8WongWork11CQuestClear14enumQuestClearEPFbjPcEz>
 860a6ce:	c9                   	leave
 860a6cf:	c3                   	ret

```

```c
// WongWork::CSkillChanger::_CountQuestSPBook @ 0x860a680

/* WongWork::CSkillChanger::_CountQuestSPBook(CUser const*, int&, int&, int&, int&) */

void __thiscall
WongWork::CSkillChanger::_CountQuestSPBook
          (CSkillChanger *this,CUser *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = CUser::getCurCharacQuestR(param_1);
  CQuestClear::enumQuestClear
            ((CQuestClear *)(iVar1 + 4),_fnEnumQuestClear,param_2,param_3,param_4,param_5,this,
             param_1);
  return;
}

```

---

## _CountSkillBook

```asm
// === 0860a2ec WongWork::CSkillChanger::_CountSkillBook  [0x0860a2ec-0x860a349] ===
 860a2ec:	55                   	push   %ebp
 860a2ed:	89 e5                	mov    %esp,%ebp
 860a2ef:	83 ec 10             	sub    $0x10,%esp
 860a2f2:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 860a2f9:	eb 3e                	jmp    860a339 <_ZN8WongWork13CSkillChanger15_CountSkillBookER10Inven_Item+0x4d>
 860a2fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a2fe:	8b 50 02             	mov    0x2(%eax),%edx
 860a301:	8b 45 fc             	mov    -0x4(%ebp),%eax
 860a304:	8b 04 85 c0 cd 3a 09 	mov    0x93acdc0(,%eax,4),%eax
 860a30b:	39 c2                	cmp    %eax,%edx
 860a30d:	75 26                	jne    860a335 <_ZN8WongWork13CSkillChanger15_CountSkillBookER10Inven_Item+0x49>
 860a30f:	8b 55 fc             	mov    -0x4(%ebp),%edx
 860a312:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a315:	8b 48 07             	mov    0x7(%eax),%ecx
 860a318:	8b 45 08             	mov    0x8(%ebp),%eax
 860a31b:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 860a31e:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 860a321:	8b 45 fc             	mov    -0x4(%ebp),%eax
 860a324:	8b 14 85 00 ce 3a 09 	mov    0x93ace00(,%eax,4),%edx
 860a32b:	8b 45 08             	mov    0x8(%ebp),%eax
 860a32e:	83 c1 08             	add    $0x8,%ecx
 860a331:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 860a335:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 860a339:	a1 c0 cd 3a 09       	mov    0x93acdc0,%eax
 860a33e:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 860a341:	0f 9d c0             	setge  %al
 860a344:	84 c0                	test   %al,%al
 860a346:	75 b3                	jne    860a2fb <_ZN8WongWork13CSkillChanger15_CountSkillBookER10Inven_Item+0xf>
 860a348:	c9                   	leave
 860a349:	c3                   	ret

```

```c
// WongWork::CSkillChanger::_CountSkillBook @ 0x860a2ec

/* WongWork::CSkillChanger::_CountSkillBook(Inven_Item&) */

void __thiscall WongWork::CSkillChanger::_CountSkillBook(CSkillChanger *this,Inven_Item *param_1)

{
  int local_8;
  
  for (local_8 = 1; local_8 <= g_nStatUpItemIdx; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 2) == (&g_nStatUpItemIdx)[local_8]) {
      *(undefined4 *)(this + local_8 * 4) = *(undefined4 *)(param_1 + 7);
      *(undefined4 *)(this + (local_8 + 8) * 4 + 4) =
           *(undefined4 *)(g_nElixerAbility + local_8 * 4);
    }
  }
  return;
}

```

---

## _GetBaseSkillPoint

```asm
// === 0860a634 WongWork::CSkillChanger::_GetBaseSkillPoint  [0x0860a634-0x860a67f] ===
 860a634:	55                   	push   %ebp
 860a635:	89 e5                	mov    %esp,%ebp
 860a637:	83 ec 28             	sub    $0x28,%esp
 860a63a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 860a641:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 860a648:	eb 1b                	jmp    860a665 <_ZNK8WongWork13CSkillChanger18_GetBaseSkillPointEPK5CUser+0x31>
 860a64a:	e8 4c 1b ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 860a64f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860a652:	89 54 24 04          	mov    %edx,0x4(%esp)
 860a656:	89 04 24             	mov    %eax,(%esp)
 860a659:	e8 5a 66 d5 ff       	call   8360cb8 <_ZNK12CDataManager14GetSpAtLevelUpEi>
 860a65e:	01 45 f0             	add    %eax,-0x10(%ebp)
 860a661:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860a665:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a668:	89 04 24             	mov    %eax,(%esp)
 860a66b:	e8 48 fc ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860a670:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 860a673:	0f 9d c0             	setge  %al
 860a676:	84 c0                	test   %al,%al
 860a678:	75 d0                	jne    860a64a <_ZNK8WongWork13CSkillChanger18_GetBaseSkillPointEPK5CUser+0x16>
 860a67a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860a67d:	c9                   	leave
 860a67e:	c3                   	ret
 860a67f:	90                   	nop

```

```c
// WongWork::CSkillChanger::_GetBaseSkillPoint @ 0x860a634

/* WongWork::CSkillChanger::_GetBaseSkillPoint(CUser const*) const */

int __thiscall WongWork::CSkillChanger::_GetBaseSkillPoint(CSkillChanger *this,CUser *param_1)

{
  CDataManager *this_00;
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = 1;
  while( true ) {
    iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar1 < local_10) break;
    this_00 = (CDataManager *)G_CDataManager();
    iVar1 = CDataManager::GetSpAtLevelUp(this_00,local_10);
    local_14 = local_14 + iVar1;
    local_10 = local_10 + 1;
  }
  return local_14;
}

```

---

## _GetQuestSkillPoint

```asm
// === 0860a6d0 WongWork::CSkillChanger::_GetQuestSkillPoint  [0x0860a6d0-0x860a6d9] ===
 860a6d0:	55                   	push   %ebp
 860a6d1:	89 e5                	mov    %esp,%ebp
 860a6d3:	b8 00 00 00 00       	mov    $0x0,%eax
 860a6d8:	5d                   	pop    %ebp
 860a6d9:	c3                   	ret

```

```c
// WongWork::CSkillChanger::_GetQuestSkillPoint @ 0x860a6d0

/* WongWork::CSkillChanger::_GetQuestSkillPoint(CUser const*) */

undefined4 WongWork::CSkillChanger::_GetQuestSkillPoint(CUser *param_1)

{
  return 0;
}

```

---

## _GetUserItemCount

```asm
// === 0860a34a WongWork::CSkillChanger::_GetUserItemCount  [0x0860a34a-0x860a557] ===
 860a34a:	55                   	push   %ebp
 860a34b:	89 e5                	mov    %esp,%ebp
 860a34d:	81 ec e8 00 00 00    	sub    $0xe8,%esp
 860a353:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
 860a35a:	e9 e1 00 00 00       	jmp    860a440 <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser+0xf6>
 860a35f:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 860a362:	89 04 24             	mov    %eax,(%esp)
 860a365:	e8 ea 14 ac ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 860a36a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a36d:	89 04 24             	mov    %eax,(%esp)
 860a370:	e8 09 ff ac ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 860a375:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 860a37b:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 860a37e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 860a382:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860a389:	00 
 860a38a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a38e:	89 14 24             	mov    %edx,(%esp)
 860a391:	e8 82 15 ef ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 860a396:	83 ec 04             	sub    $0x4,%esp
 860a399:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 860a39f:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 860a3a2:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 860a3a8:	89 45 b7             	mov    %eax,-0x49(%ebp)
 860a3ab:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 860a3b1:	89 45 bb             	mov    %eax,-0x45(%ebp)
 860a3b4:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 860a3ba:	89 45 bf             	mov    %eax,-0x41(%ebp)
 860a3bd:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 860a3c3:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 860a3c6:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 860a3cc:	89 45 c7             	mov    %eax,-0x39(%ebp)
 860a3cf:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 860a3d5:	89 45 cb             	mov    %eax,-0x35(%ebp)
 860a3d8:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 860a3de:	89 45 cf             	mov    %eax,-0x31(%ebp)
 860a3e1:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 860a3e7:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 860a3ea:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 860a3f0:	89 45 d7             	mov    %eax,-0x29(%ebp)
 860a3f3:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 860a3f9:	89 45 db             	mov    %eax,-0x25(%ebp)
 860a3fc:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 860a402:	89 45 df             	mov    %eax,-0x21(%ebp)
 860a405:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 860a40b:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 860a40e:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 860a414:	89 45 e7             	mov    %eax,-0x19(%ebp)
 860a417:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 860a41d:	89 45 eb             	mov    %eax,-0x15(%ebp)
 860a420:	0f b6 85 64 ff ff ff 	movzbl -0x9c(%ebp),%eax
 860a427:	88 45 ef             	mov    %al,-0x11(%ebp)
 860a42a:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 860a42d:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a431:	8b 45 08             	mov    0x8(%ebp),%eax
 860a434:	89 04 24             	mov    %eax,(%esp)
 860a437:	e8 b0 fe ff ff       	call   860a2ec <_ZN8WongWork13CSkillChanger15_CountSkillBookER10Inven_Item>
 860a43c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 860a440:	83 7d f0 68          	cmpl   $0x68,-0x10(%ebp)
 860a444:	0f 9e c0             	setle  %al
 860a447:	84 c0                	test   %al,%al
 860a449:	0f 85 10 ff ff ff    	jne    860a35f <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser+0x15>
 860a44f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 860a456:	e9 e8 00 00 00       	jmp    860a543 <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser+0x1f9>
 860a45b:	8d 85 76 ff ff ff    	lea    -0x8a(%ebp),%eax
 860a461:	89 04 24             	mov    %eax,(%esp)
 860a464:	e8 eb 13 ac ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 860a469:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a46c:	89 04 24             	mov    %eax,(%esp)
 860a46f:	e8 10 76 b4 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 860a474:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 860a47a:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 860a47d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860a481:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a485:	89 14 24             	mov    %edx,(%esp)
 860a488:	e8 27 0e f0 ff       	call   850b2b4 <_ZNK6CCargo14get_cargo_slotEi>
 860a48d:	83 ec 04             	sub    $0x4,%esp
 860a490:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 860a496:	89 85 76 ff ff ff    	mov    %eax,-0x8a(%ebp)
 860a49c:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 860a4a2:	89 85 7a ff ff ff    	mov    %eax,-0x86(%ebp)
 860a4a8:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 860a4ae:	89 85 7e ff ff ff    	mov    %eax,-0x82(%ebp)
 860a4b4:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 860a4ba:	89 45 82             	mov    %eax,-0x7e(%ebp)
 860a4bd:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 860a4c3:	89 45 86             	mov    %eax,-0x7a(%ebp)
 860a4c6:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 860a4cc:	89 45 8a             	mov    %eax,-0x76(%ebp)
 860a4cf:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 860a4d5:	89 45 8e             	mov    %eax,-0x72(%ebp)
 860a4d8:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 860a4de:	89 45 92             	mov    %eax,-0x6e(%ebp)
 860a4e1:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 860a4e7:	89 45 96             	mov    %eax,-0x6a(%ebp)
 860a4ea:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 860a4f0:	89 45 9a             	mov    %eax,-0x66(%ebp)
 860a4f3:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 860a4f9:	89 45 9e             	mov    %eax,-0x62(%ebp)
 860a4fc:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 860a502:	89 45 a2             	mov    %eax,-0x5e(%ebp)
 860a505:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 860a50b:	89 45 a6             	mov    %eax,-0x5a(%ebp)
 860a50e:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 860a514:	89 45 aa             	mov    %eax,-0x56(%ebp)
 860a517:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 860a51d:	89 45 ae             	mov    %eax,-0x52(%ebp)
 860a520:	0f b6 85 64 ff ff ff 	movzbl -0x9c(%ebp),%eax
 860a527:	88 45 b2             	mov    %al,-0x4e(%ebp)
 860a52a:	8d 85 76 ff ff ff    	lea    -0x8a(%ebp),%eax
 860a530:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a534:	8b 45 08             	mov    0x8(%ebp),%eax
 860a537:	89 04 24             	mov    %eax,(%esp)
 860a53a:	e8 ad fd ff ff       	call   860a2ec <_ZN8WongWork13CSkillChanger15_CountSkillBookER10Inven_Item>
 860a53f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860a543:	81 7d f4 97 00 00 00 	cmpl   $0x97,-0xc(%ebp)
 860a54a:	0f 9e c0             	setle  %al
 860a54d:	84 c0                	test   %al,%al
 860a54f:	0f 85 06 ff ff ff    	jne    860a45b <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser+0x111>
 860a555:	c9                   	leave
 860a556:	c3                   	ret
 860a557:	90                   	nop

```

```c
// WongWork::CSkillChanger::_GetUserItemCount @ 0x860a34a

/* WongWork::CSkillChanger::_GetUserItemCount(CUser const*) */

void __thiscall WongWork::CSkillChanger::_GetUserItemCount(CSkillChanger *this,CUser *param_1)

{
  int iVar1;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined1 local_52;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15;
  int local_14;
  int local_10;
  
  for (local_14 = 3; local_14 < 0x69; local_14 = local_14 + 1) {
    Inven_Item::Inven_Item((Inven_Item *)&local_51);
    iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)&local_dc,iVar1);
    local_51 = local_dc;
    local_4d = local_d8;
    local_49 = local_d4;
    local_45 = local_d0;
    local_41 = local_cc;
    local_3d = local_c8;
    local_39 = local_c4;
    local_35 = local_c0;
    local_31 = local_bc;
    local_2d = local_b8;
    local_29 = local_b4;
    local_25 = local_b0;
    local_21 = local_ac;
    local_1d = local_a8;
    local_19 = local_a4;
    local_15 = local_a0;
    _CountSkillBook(this,(Inven_Item *)&local_51);
  }
  for (local_10 = 0; local_10 < 0x98; local_10 = local_10 + 1) {
    Inven_Item::Inven_Item((Inven_Item *)&local_8e);
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)&local_dc);
    local_8e = local_dc;
    local_8a = local_d8;
    local_86 = local_d4;
    local_82 = local_d0;
    local_7e = local_cc;
    local_7a = local_c8;
    local_76 = local_c4;
    local_72 = local_c0;
    local_6e = local_bc;
    local_6a = local_b8;
    local_66 = local_b4;
    local_62 = local_b0;
    local_5e = local_ac;
    local_5a = local_a8;
    local_56 = local_a4;
    local_52 = local_a0;
    _CountSkillBook(this,(Inven_Item *)&local_8e);
  }
  return;
}

```

---

## _ResetSFPoint

```asm
// === 0860a5d8 WongWork::CSkillChanger::_ResetSFPoint  [0x0860a5d8-0x860a633] ===
 860a5d8:	55                   	push   %ebp
 860a5d9:	89 e5                	mov    %esp,%ebp
 860a5db:	53                   	push   %ebx
 860a5dc:	83 ec 14             	sub    $0x14,%esp
 860a5df:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a5e2:	89 04 24             	mov    %eax,(%esp)
 860a5e5:	e8 ce fc ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860a5ea:	83 f8 31             	cmp    $0x31,%eax
 860a5ed:	0f 9e c0             	setle  %al
 860a5f0:	84 c0                	test   %al,%al
 860a5f2:	75 36                	jne    860a62a <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND+0x52>
 860a5f4:	8b 45 10             	mov    0x10(%ebp),%eax
 860a5f7:	83 f8 01             	cmp    $0x1,%eax
 860a5fa:	7e 31                	jle    860a62d <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND+0x55>
 860a5fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a5ff:	89 04 24             	mov    %eax,(%esp)
 860a602:	e8 b1 fc ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860a607:	8d 58 cf             	lea    -0x31(%eax),%ebx
 860a60a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a60d:	89 04 24             	mov    %eax,(%esp)
 860a610:	e8 2b 4b c2 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 860a615:	8b 55 10             	mov    0x10(%ebp),%edx
 860a618:	89 54 24 08          	mov    %edx,0x8(%esp)
 860a61c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860a620:	89 04 24             	mov    %eax,(%esp)
 860a623:	e8 68 8f ff ff       	call   8603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>
 860a628:	eb 04                	jmp    860a62e <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND+0x56>
 860a62a:	90                   	nop
 860a62b:	eb 01                	jmp    860a62e <_ZN8WongWork13CSkillChanger13_ResetSFPointEP5CUser20ENUM_SKILL_TREE_KIND+0x56>
 860a62d:	90                   	nop
 860a62e:	83 c4 14             	add    $0x14,%esp
 860a631:	5b                   	pop    %ebx
 860a632:	5d                   	pop    %ebp
 860a633:	c3                   	ret

```

```c
// WongWork::CSkillChanger::_ResetSFPoint @ 0x860a5d8

/* WongWork::CSkillChanger::_ResetSFPoint(CUser*, ENUM_SKILL_TREE_KIND) */

void __thiscall
WongWork::CSkillChanger::_ResetSFPoint(undefined4 this,CUserCharacInfo *param_1,int param_3)

{
  int iVar1;
  SkillSlot *pSVar2;
  
  iVar1 = CUserCharacInfo::get_charac_level(param_1);
  if ((0x31 < iVar1) && (1 < param_3)) {
    iVar1 = CUserCharacInfo::get_charac_level(param_1);
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
    SkillSlot::set_remain_sfp_at_index(pSVar2,iVar1 + -0x31,param_3);
  }
  return;
}

```

---

## _ResetSkillPoint

```asm
// === 0860a558 WongWork::CSkillChanger::_ResetSkillPoint  [0x0860a558-0x860a5d7] ===
 860a558:	55                   	push   %ebp
 860a559:	89 e5                	mov    %esp,%ebp
 860a55b:	53                   	push   %ebx
 860a55c:	83 ec 24             	sub    $0x24,%esp
 860a55f:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 860a566:	eb 54                	jmp    860a5bc <_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND+0x64>
 860a568:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a56b:	89 04 24             	mov    %eax,(%esp)
 860a56e:	e8 bd 4b c2 ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 860a573:	8b 55 10             	mov    0x10(%ebp),%edx
 860a576:	89 54 24 04          	mov    %edx,0x4(%esp)
 860a57a:	89 04 24             	mov    %eax,(%esp)
 860a57d:	e8 a6 8f ff ff       	call   8603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>
 860a582:	89 c3                	mov    %eax,%ebx
 860a584:	e8 12 1c ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 860a589:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860a58c:	89 54 24 04          	mov    %edx,0x4(%esp)
 860a590:	89 04 24             	mov    %eax,(%esp)
 860a593:	e8 20 67 d5 ff       	call   8360cb8 <_ZNK12CDataManager14GetSpAtLevelUpEi>
 860a598:	01 c3                	add    %eax,%ebx
 860a59a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a59d:	89 04 24             	mov    %eax,(%esp)
 860a5a0:	e8 9b 4b c2 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 860a5a5:	8b 55 10             	mov    0x10(%ebp),%edx
 860a5a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 860a5ac:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860a5b0:	89 04 24             	mov    %eax,(%esp)
 860a5b3:	e8 40 8f ff ff       	call   86034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>
 860a5b8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860a5bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a5bf:	89 04 24             	mov    %eax,(%esp)
 860a5c2:	e8 f1 fc ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860a5c7:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 860a5ca:	0f 9d c0             	setge  %al
 860a5cd:	84 c0                	test   %al,%al
 860a5cf:	75 97                	jne    860a568 <_ZN8WongWork13CSkillChanger16_ResetSkillPointEP5CUser20ENUM_SKILL_TREE_KIND+0x10>
 860a5d1:	83 c4 24             	add    $0x24,%esp
 860a5d4:	5b                   	pop    %ebx
 860a5d5:	5d                   	pop    %ebp
 860a5d6:	c3                   	ret
 860a5d7:	90                   	nop

```

```c
// WongWork::CSkillChanger::_ResetSkillPoint @ 0x860a558

/* WongWork::CSkillChanger::_ResetSkillPoint(CUser*, ENUM_SKILL_TREE_KIND) */

void __thiscall
WongWork::CSkillChanger::_ResetSkillPoint
          (undefined4 this,CUserCharacInfo *param_1,undefined4 param_3)

{
  SkillSlot *pSVar1;
  CDataManager *this_00;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  
  local_10 = 1;
  while( true ) {
    iVar3 = CUserCharacInfo::get_charac_level(param_1);
    if (iVar3 < local_10) break;
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(param_1);
    iVar3 = SkillSlot::get_remain_sp_at_index(pSVar1,param_3);
    this_00 = (CDataManager *)G_CDataManager();
    iVar2 = CDataManager::GetSpAtLevelUp(this_00,local_10);
    pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
    SkillSlot::set_remain_sp_at_index(pSVar1,iVar3 + iVar2,param_3);
    local_10 = local_10 + 1;
  }
  return;
}

```

---

## _addSFPRelatedItem

```asm
// === 0860a918 WongWork::CSkillChanger::_addSFPRelatedItem  [0x0860a918-0x860a94f] ===
 860a918:	55                   	push   %ebp
 860a919:	89 e5                	mov    %esp,%ebp
 860a91b:	81 7d 14 b4 04 00 00 	cmpl   $0x4b4,0x14(%ebp)
 860a922:	75 11                	jne    860a935 <_ZN8WongWork13CSkillChanger18_addSFPRelatedItemEPiS1_ii+0x1d>
 860a924:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a927:	8b 00                	mov    (%eax),%eax
 860a929:	89 c2                	mov    %eax,%edx
 860a92b:	03 55 18             	add    0x18(%ebp),%edx
 860a92e:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a931:	89 10                	mov    %edx,(%eax)
 860a933:	eb 18                	jmp    860a94d <_ZN8WongWork13CSkillChanger18_addSFPRelatedItemEPiS1_ii+0x35>
 860a935:	81 7d 14 b5 04 00 00 	cmpl   $0x4b5,0x14(%ebp)
 860a93c:	75 0f                	jne    860a94d <_ZN8WongWork13CSkillChanger18_addSFPRelatedItemEPiS1_ii+0x35>
 860a93e:	8b 45 10             	mov    0x10(%ebp),%eax
 860a941:	8b 00                	mov    (%eax),%eax
 860a943:	89 c2                	mov    %eax,%edx
 860a945:	03 55 18             	add    0x18(%ebp),%edx
 860a948:	8b 45 10             	mov    0x10(%ebp),%eax
 860a94b:	89 10                	mov    %edx,(%eax)
 860a94d:	5d                   	pop    %ebp
 860a94e:	c3                   	ret
 860a94f:	90                   	nop

```

```c
// WongWork::CSkillChanger::_addSFPRelatedItem @ 0x860a918

/* WongWork::CSkillChanger::_addSFPRelatedItem(int*, int*, int, int) */

void __thiscall
WongWork::CSkillChanger::_addSFPRelatedItem
          (CSkillChanger *this,int *param_1,int *param_2,int param_3,int param_4)

{
  if (param_3 == 0x4b4) {
    *param_1 = *param_1 + param_4;
  }
  else if (param_3 == 0x4b5) {
    *param_2 = *param_2 + param_4;
  }
  return;
}

```

---

## _addSPRelatedItem

```asm
// === 0860a868 WongWork::CSkillChanger::_addSPRelatedItem  [0x0860a868-0x860a917] ===
 860a868:	55                   	push   %ebp
 860a869:	89 e5                	mov    %esp,%ebp
 860a86b:	83 ec 10             	sub    $0x10,%esp
 860a86e:	81 7d 14 07 04 00 00 	cmpl   $0x407,0x14(%ebp)
 860a875:	75 14                	jne    860a88b <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii+0x23>
 860a877:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a87a:	8b 00                	mov    (%eax),%eax
 860a87c:	89 c2                	mov    %eax,%edx
 860a87e:	03 55 18             	add    0x18(%ebp),%edx
 860a881:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a884:	89 10                	mov    %edx,(%eax)
 860a886:	e9 8b 00 00 00       	jmp    860a916 <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii+0xae>
 860a88b:	81 7d 14 0e 04 00 00 	cmpl   $0x40e,0x14(%ebp)
 860a892:	75 11                	jne    860a8a5 <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii+0x3d>
 860a894:	8b 45 10             	mov    0x10(%ebp),%eax
 860a897:	8b 00                	mov    (%eax),%eax
 860a899:	89 c2                	mov    %eax,%edx
 860a89b:	03 55 18             	add    0x18(%ebp),%edx
 860a89e:	8b 45 10             	mov    0x10(%ebp),%eax
 860a8a1:	89 10                	mov    %edx,(%eax)
 860a8a3:	eb 71                	jmp    860a916 <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii+0xae>
 860a8a5:	8b 45 08             	mov    0x8(%ebp),%eax
 860a8a8:	0f b6 80 90 00 00 00 	movzbl 0x90(%eax),%eax
 860a8af:	84 c0                	test   %al,%al
 860a8b1:	74 63                	je     860a916 <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii+0xae>
 860a8b3:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 860a8ba:	eb 4b                	jmp    860a907 <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii+0x9f>
 860a8bc:	8b 45 fc             	mov    -0x4(%ebp),%eax
 860a8bf:	8b 04 85 c0 cd 3a 09 	mov    0x93acdc0(,%eax,4),%eax
 860a8c6:	3b 45 14             	cmp    0x14(%ebp),%eax
 860a8c9:	75 38                	jne    860a903 <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii+0x9b>
 860a8cb:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 860a8ce:	8b 55 fc             	mov    -0x4(%ebp),%edx
 860a8d1:	8b 45 08             	mov    0x8(%ebp),%eax
 860a8d4:	83 c2 10             	add    $0x10,%edx
 860a8d7:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 860a8db:	89 c2                	mov    %eax,%edx
 860a8dd:	03 55 18             	add    0x18(%ebp),%edx
 860a8e0:	8b 45 08             	mov    0x8(%ebp),%eax
 860a8e3:	83 c1 10             	add    $0x10,%ecx
 860a8e6:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 860a8ea:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 860a8ed:	8b 45 fc             	mov    -0x4(%ebp),%eax
 860a8f0:	8b 14 85 00 ce 3a 09 	mov    0x93ace00(,%eax,4),%edx
 860a8f7:	8b 45 08             	mov    0x8(%ebp),%eax
 860a8fa:	83 c1 18             	add    $0x18,%ecx
 860a8fd:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 860a901:	eb 13                	jmp    860a916 <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii+0xae>
 860a903:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 860a907:	a1 c0 cd 3a 09       	mov    0x93acdc0,%eax
 860a90c:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 860a90f:	0f 9d c0             	setge  %al
 860a912:	84 c0                	test   %al,%al
 860a914:	75 a6                	jne    860a8bc <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii+0x54>
 860a916:	c9                   	leave
 860a917:	c3                   	ret

```

```c
// WongWork::CSkillChanger::_addSPRelatedItem @ 0x860a868

/* WongWork::CSkillChanger::_addSPRelatedItem(int*, int*, int, int) */

void __thiscall
WongWork::CSkillChanger::_addSPRelatedItem
          (CSkillChanger *this,int *param_1,int *param_2,int param_3,int param_4)

{
  int local_8;
  
  if (param_3 == 0x407) {
    *param_1 = *param_1 + param_4;
  }
  else if (param_3 == 0x40e) {
    *param_2 = *param_2 + param_4;
  }
  else if (this[0x90] != (CSkillChanger)0x0) {
    for (local_8 = 1; local_8 <= g_nStatUpItemIdx; local_8 = local_8 + 1) {
      if ((&g_nStatUpItemIdx)[local_8] == param_3) {
        *(int *)(this + (local_8 + 0x10) * 4 + 8) =
             *(int *)(this + (local_8 + 0x10) * 4 + 8) + param_4;
        *(undefined4 *)(this + (local_8 + 0x18) * 4 + 0xc) =
             *(undefined4 *)(g_nElixerAbility + local_8 * 4);
        return;
      }
    }
  }
  return;
}

```

---

## _fnEnumQuestClear

```asm
// === 0860a6da WongWork::CSkillChanger::_fnEnumQuestClear  [0x0860a6da-0x860a867] ===
 860a6da:	55                   	push   %ebp
 860a6db:	89 e5                	mov    %esp,%ebp
 860a6dd:	53                   	push   %ebx
 860a6de:	83 ec 54             	sub    $0x54,%esp
 860a6e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a6e4:	8d 50 04             	lea    0x4(%eax),%edx
 860a6e7:	89 55 0c             	mov    %edx,0xc(%ebp)
 860a6ea:	8b 00                	mov    (%eax),%eax
 860a6ec:	89 45 d0             	mov    %eax,-0x30(%ebp)
 860a6ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a6f2:	8d 50 04             	lea    0x4(%eax),%edx
 860a6f5:	89 55 0c             	mov    %edx,0xc(%ebp)
 860a6f8:	8b 00                	mov    (%eax),%eax
 860a6fa:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 860a6fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a700:	8d 50 04             	lea    0x4(%eax),%edx
 860a703:	89 55 0c             	mov    %edx,0xc(%ebp)
 860a706:	8b 00                	mov    (%eax),%eax
 860a708:	89 45 d8             	mov    %eax,-0x28(%ebp)
 860a70b:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a70e:	8d 50 04             	lea    0x4(%eax),%edx
 860a711:	89 55 0c             	mov    %edx,0xc(%ebp)
 860a714:	8b 00                	mov    (%eax),%eax
 860a716:	89 45 dc             	mov    %eax,-0x24(%ebp)
 860a719:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a71c:	8d 50 04             	lea    0x4(%eax),%edx
 860a71f:	89 55 0c             	mov    %edx,0xc(%ebp)
 860a722:	8b 00                	mov    (%eax),%eax
 860a724:	89 45 e0             	mov    %eax,-0x20(%ebp)
 860a727:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a72a:	8d 50 04             	lea    0x4(%eax),%edx
 860a72d:	89 55 0c             	mov    %edx,0xc(%ebp)
 860a730:	8b 00                	mov    (%eax),%eax
 860a732:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 860a735:	8b 5d 08             	mov    0x8(%ebp),%ebx
 860a738:	e8 5e 1a ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 860a73d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860a741:	89 04 24             	mov    %eax,(%esp)
 860a744:	e8 7d 56 d5 ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 860a749:	89 45 e8             	mov    %eax,-0x18(%ebp)
 860a74c:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 860a750:	75 0a                	jne    860a75c <_ZN8WongWork13CSkillChanger17_fnEnumQuestClearEjPc+0x82>
 860a752:	b8 01 00 00 00       	mov    $0x1,%eax
 860a757:	e9 06 01 00 00       	jmp    860a862 <_ZN8WongWork13CSkillChanger17_fnEnumQuestClearEjPc+0x188>
 860a75c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860a75f:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 860a765:	85 c0                	test   %eax,%eax
 860a767:	74 18                	je     860a781 <_ZN8WongWork13CSkillChanger17_fnEnumQuestClearEjPc+0xa7>
 860a769:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860a76c:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 860a772:	83 f8 19             	cmp    $0x19,%eax
 860a775:	74 0a                	je     860a781 <_ZN8WongWork13CSkillChanger17_fnEnumQuestClearEjPc+0xa7>
 860a777:	b8 01 00 00 00       	mov    $0x1,%eax
 860a77c:	e9 e1 00 00 00       	jmp    860a862 <_ZN8WongWork13CSkillChanger17_fnEnumQuestClearEjPc+0x188>
 860a781:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 860a788:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860a78b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a78f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860a792:	89 04 24             	mov    %eax,(%esp)
 860a795:	e8 7a 41 06 00       	call   866e914 <_ZN5CUser22getUserQuestRewardItemEPK5QuestPKS_>
 860a79a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860a79d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860a7a0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860a7a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 860a7a7:	89 04 24             	mov    %eax,(%esp)
 860a7aa:	e8 2d 29 da ff       	call   83ad0dc <_ZNKSt6vectorI14RewardItemInfoSaIS0_EE5beginEv>
 860a7af:	83 ec 04             	sub    $0x4,%esp
 860a7b2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860a7b5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860a7b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 860a7bc:	89 04 24             	mov    %eax,(%esp)
 860a7bf:	e8 44 29 da ff       	call   83ad108 <_ZNKSt6vectorI14RewardItemInfoSaIS0_EE3endEv>
 860a7c4:	83 ec 04             	sub    $0x4,%esp
 860a7c7:	eb 7a                	jmp    860a843 <_ZN8WongWork13CSkillChanger17_fnEnumQuestClearEjPc+0x169>
 860a7c9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860a7cc:	89 04 24             	mov    %eax,(%esp)
 860a7cf:	e8 9a a1 d8 ff       	call   839496e <_ZNK9__gnu_cxx17__normal_iteratorIPK14RewardItemInfoSt6vectorIS1_SaIS1_EEEptEv>
 860a7d4:	8b 00                	mov    (%eax),%eax
 860a7d6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860a7d9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860a7dc:	89 04 24             	mov    %eax,(%esp)
 860a7df:	e8 8a a1 d8 ff       	call   839496e <_ZNK9__gnu_cxx17__normal_iteratorIPK14RewardItemInfoSt6vectorIS1_SaIS1_EEEptEv>
 860a7e4:	8b 40 04             	mov    0x4(%eax),%eax
 860a7e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860a7ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860a7ed:	89 44 24 10          	mov    %eax,0x10(%esp)
 860a7f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860a7f4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860a7f8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 860a7fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 860a7ff:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860a802:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a806:	8b 45 e0             	mov    -0x20(%ebp),%eax
 860a809:	89 04 24             	mov    %eax,(%esp)
 860a80c:	e8 57 00 00 00       	call   860a868 <_ZN8WongWork13CSkillChanger17_addSPRelatedItemEPiS1_ii>
 860a811:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860a814:	89 44 24 10          	mov    %eax,0x10(%esp)
 860a818:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860a81b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860a81f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 860a822:	89 44 24 08          	mov    %eax,0x8(%esp)
 860a826:	8b 45 d8             	mov    -0x28(%ebp),%eax
 860a829:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a82d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 860a830:	89 04 24             	mov    %eax,(%esp)
 860a833:	e8 e0 00 00 00       	call   860a918 <_ZN8WongWork13CSkillChanger18_addSFPRelatedItemEPiS1_ii>
 860a838:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860a83b:	89 04 24             	mov    %eax,(%esp)
 860a83e:	e8 15 a1 d8 ff       	call   8394958 <_ZN9__gnu_cxx17__normal_iteratorIPK14RewardItemInfoSt6vectorIS1_SaIS1_EEEppEv>
 860a843:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860a846:	89 44 24 04          	mov    %eax,0x4(%esp)
 860a84a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860a84d:	89 04 24             	mov    %eax,(%esp)
 860a850:	e8 02 b6 dd ff       	call   83e5e57 <_ZN9__gnu_cxxneIPK14RewardItemInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 860a855:	84 c0                	test   %al,%al
 860a857:	0f 85 6c ff ff ff    	jne    860a7c9 <_ZN8WongWork13CSkillChanger17_fnEnumQuestClearEjPc+0xef>
 860a85d:	b8 01 00 00 00       	mov    $0x1,%eax
 860a862:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 860a865:	c9                   	leave
 860a866:	c3                   	ret
 860a867:	90                   	nop

```

```c
// WongWork::CSkillChanger::_fnEnumQuestClear @ 0x860a6da

/* WongWork::CSkillChanger::_fnEnumQuestClear(unsigned int, char*) */

undefined4 WongWork::CSkillChanger::_fnEnumQuestClear(uint param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator local_3c [4];
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_38 [4];
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  CSkillChanger *local_24;
  CUser *local_20;
  Quest *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_34 = *(int **)param_2;
  local_30 = *(int **)(param_2 + 4);
  local_2c = *(int **)(param_2 + 8);
  local_28 = *(int **)(param_2 + 0xc);
  local_24 = *(CSkillChanger **)(param_2 + 0x10);
  local_20 = *(CUser **)(param_2 + 0x14);
  iVar2 = G_CDataManager();
  local_1c = (Quest *)CDataManager::find_quest(iVar2);
  if ((local_1c != (Quest *)0x0) &&
     ((*(int *)(local_1c + 0xb8) == 0 || (*(int *)(local_1c + 0xb8) == 0x19)))) {
    local_18 = 0;
    local_18 = CUser::getUserQuestRewardItem(local_1c,local_20);
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::begin();
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::end();
    while (bVar1 = __gnu_cxx::operator!=(local_38,local_3c), bVar1) {
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                      ::operator->(local_38);
      local_14 = *piVar3;
      iVar2 = __gnu_cxx::
              __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
              ::operator->(local_38);
      local_10 = *(int *)(iVar2 + 4);
      _addSPRelatedItem(local_24,local_34,local_30,local_14,local_10);
      _addSFPRelatedItem(local_24,local_2c,local_28,local_14,local_10);
      __gnu_cxx::
      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
      ::operator++(local_38);
    }
  }
  return 1;
}

```

