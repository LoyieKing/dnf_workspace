# CPremiumLetheManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## BackToPre

```asm
// === 085c3e2a CPremiumLetheManager::BackToPre  [0x085c3e2a-0x85c3f2f] ===
 85c3e2a:	55                   	push   %ebp
 85c3e2b:	89 e5                	mov    %esp,%ebp
 85c3e2d:	53                   	push   %ebx
 85c3e2e:	83 ec 24             	sub    $0x24,%esp
 85c3e31:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3e34:	89 04 24             	mov    %eax,(%esp)
 85c3e37:	e8 f6 c5 b5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85c3e3c:	85 c0                	test   %eax,%eax
 85c3e3e:	0f 94 c0             	sete   %al
 85c3e41:	84 c0                	test   %al,%al
 85c3e43:	74 0a                	je     85c3e4f <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND+0x25>
 85c3e45:	b8 00 00 00 00       	mov    $0x0,%eax
 85c3e4a:	e9 da 00 00 00       	jmp    85c3f29 <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND+0xff>
 85c3e4f:	8b 45 14             	mov    0x14(%ebp),%eax
 85c3e52:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c3e56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85c3e5d:	00 
 85c3e5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3e61:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c3e65:	8b 45 08             	mov    0x8(%ebp),%eax
 85c3e68:	89 04 24             	mov    %eax,(%esp)
 85c3e6b:	e8 ae 03 00 00       	call   85c421e <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND>
 85c3e70:	8b 45 14             	mov    0x14(%ebp),%eax
 85c3e73:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c3e77:	8b 45 10             	mov    0x10(%ebp),%eax
 85c3e7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c3e7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3e81:	89 04 24             	mov    %eax,(%esp)
 85c3e84:	e8 b5 76 0a 00       	call   866b53e <_ZN5CUser17master_new_skillsEP15_Mastered_skill20ENUM_SKILL_TREE_KIND>
 85c3e89:	83 f0 01             	xor    $0x1,%eax
 85c3e8c:	84 c0                	test   %al,%al
 85c3e8e:	74 0a                	je     85c3e9a <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND+0x70>
 85c3e90:	b8 00 00 00 00       	mov    $0x0,%eax
 85c3e95:	e9 8f 00 00 00       	jmp    85c3f29 <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND+0xff>
 85c3e9a:	8b 45 14             	mov    0x14(%ebp),%eax
 85c3e9d:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c3ea0:	74 07                	je     85c3ea9 <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND+0x7f>
 85c3ea2:	8b 45 14             	mov    0x14(%ebp),%eax
 85c3ea5:	85 c0                	test   %eax,%eax
 85c3ea7:	75 1b                	jne    85c3ec4 <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND+0x9a>
 85c3ea9:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 85c3eb0:	0f b6 d0             	movzbl %al,%edx
 85c3eb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3eb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c3eba:	89 04 24             	mov    %eax,(%esp)
 85c3ebd:	e8 68 84 f2 ff       	call   84ec32a <_ZN15CUserCharacInfo18SetOneDayLetheFlagEh>
 85c3ec2:	eb 19                	jmp    85c3edd <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND+0xb3>
 85c3ec4:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 85c3ecb:	0f b6 d0             	movzbl %al,%edx
 85c3ece:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3ed1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c3ed5:	89 04 24             	mov    %eax,(%esp)
 85c3ed8:	e8 9d 84 f2 ff       	call   84ec37a <_ZN15CUserCharacInfo21SetOneDayLetheFlag2NDEh>
 85c3edd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3ee0:	89 04 24             	mov    %eax,(%esp)
 85c3ee3:	e8 40 d1 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c3ee8:	89 c3                	mov    %eax,%ebx
 85c3eea:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c3ef1:	00 
 85c3ef2:	c7 44 24 08 4f 00 00 	movl   $0x4f,0x8(%esp)
 85c3ef9:	00 
 85c3efa:	c7 44 24 04 20 d0 cb 	movl   $0x8cbd020,0x4(%esp)
 85c3f01:	08 
 85c3f02:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c3f05:	89 04 24             	mov    %eax,(%esp)
 85c3f08:	e8 0b b8 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c3f0d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c3f11:	c7 44 24 04 8c c1 cb 	movl   $0x8cbc18c,0x4(%esp)
 85c3f18:	08 
 85c3f19:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c3f1c:	89 04 24             	mov    %eax,(%esp)
 85c3f1f:	e8 64 b8 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c3f24:	b8 01 00 00 00       	mov    $0x1,%eax
 85c3f29:	83 c4 24             	add    $0x24,%esp
 85c3f2c:	5b                   	pop    %ebx
 85c3f2d:	5d                   	pop    %ebp
 85c3f2e:	c3                   	ret
 85c3f2f:	90                   	nop

```

```c
// CPremiumLetheManager::BackToPre @ 0x85c3e2a

/* CPremiumLetheManager::BackToPre(CUser*, _Mastered_skill*, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
CPremiumLetheManager::BackToPre
          (CPremiumLetheManager *this,CUser *param_1,undefined4 param_2,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  cMyTrace local_1c [20];
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    InitSkill(this,param_1,0,param_4);
    cVar1 = CUser::master_new_skills(param_1,param_2,param_4);
    if (cVar1 == '\x01') {
      if ((param_4 == -1) || (param_4 == 0)) {
        CUserCharacInfo::SetOneDayLetheFlag((CUserCharacInfo *)param_1,NOT_USE_LETHE_STATE);
      }
      else {
        CUserCharacInfo::SetOneDayLetheFlag2ND((CUserCharacInfo *)param_1,NOT_USE_LETHE_STATE);
      }
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_1c,
                         "bool CPremiumLetheManager::BackToPre(CUser*, _Mastered_skill*, ENUM_SKILL_TREE_KIND)"
                         ,0x4f,0);
      cMyTrace::operator()(local_1c,"ONE_DAY_LETHE : SUCCESS_BACK_TO_PRE, char(%s)",uVar3);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## BackupSkill

```asm
// === 085c46e8 CPremiumLetheManager::BackupSkill  [0x085c46e8-0x85c4841] ===
 85c46e8:	55                   	push   %ebp
 85c46e9:	89 e5                	mov    %esp,%ebp
 85c46eb:	83 ec 18             	sub    $0x18,%esp
 85c46ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c46f1:	89 04 24             	mov    %eax,(%esp)
 85c46f4:	e8 39 bd b5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85c46f9:	85 c0                	test   %eax,%eax
 85c46fb:	0f 94 c0             	sete   %al
 85c46fe:	84 c0                	test   %al,%al
 85c4700:	74 0a                	je     85c470c <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x24>
 85c4702:	b8 00 00 00 00       	mov    $0x0,%eax
 85c4707:	e9 34 01 00 00       	jmp    85c4840 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x158>
 85c470c:	8b 45 10             	mov    0x10(%ebp),%eax
 85c470f:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c4712:	74 07                	je     85c471b <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x33>
 85c4714:	8b 45 10             	mov    0x10(%ebp),%eax
 85c4717:	85 c0                	test   %eax,%eax
 85c4719:	75 46                	jne    85c4761 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x79>
 85c471b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c471e:	89 04 24             	mov    %eax,(%esp)
 85c4721:	e8 66 04 00 00       	call   85c4b8c <_ZNK15CUserCharacInfo18GetOneDayLetheFlagEv>
 85c4726:	0f b6 15 bc 2d 47 09 	movzbl 0x9472dbc,%edx
 85c472d:	38 d0                	cmp    %dl,%al
 85c472f:	74 1d                	je     85c474e <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x66>
 85c4731:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4734:	89 04 24             	mov    %eax,(%esp)
 85c4737:	e8 50 04 00 00       	call   85c4b8c <_ZNK15CUserCharacInfo18GetOneDayLetheFlagEv>
 85c473c:	0f b6 15 61 bc 3a 09 	movzbl 0x93abc61,%edx
 85c4743:	38 d0                	cmp    %dl,%al
 85c4745:	74 07                	je     85c474e <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x66>
 85c4747:	b8 01 00 00 00       	mov    $0x1,%eax
 85c474c:	eb 05                	jmp    85c4753 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x6b>
 85c474e:	b8 00 00 00 00       	mov    $0x0,%eax
 85c4753:	84 c0                	test   %al,%al
 85c4755:	74 50                	je     85c47a7 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0xbf>
 85c4757:	b8 00 00 00 00       	mov    $0x0,%eax
 85c475c:	e9 df 00 00 00       	jmp    85c4840 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x158>
 85c4761:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4764:	89 04 24             	mov    %eax,(%esp)
 85c4767:	e8 44 04 00 00       	call   85c4bb0 <_ZNK15CUserCharacInfo21GetOneDayLetheFlag2NDEv>
 85c476c:	0f b6 15 bc 2d 47 09 	movzbl 0x9472dbc,%edx
 85c4773:	38 d0                	cmp    %dl,%al
 85c4775:	74 1d                	je     85c4794 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0xac>
 85c4777:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c477a:	89 04 24             	mov    %eax,(%esp)
 85c477d:	e8 2e 04 00 00       	call   85c4bb0 <_ZNK15CUserCharacInfo21GetOneDayLetheFlag2NDEv>
 85c4782:	0f b6 15 61 bc 3a 09 	movzbl 0x93abc61,%edx
 85c4789:	38 d0                	cmp    %dl,%al
 85c478b:	74 07                	je     85c4794 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0xac>
 85c478d:	b8 01 00 00 00       	mov    $0x1,%eax
 85c4792:	eb 05                	jmp    85c4799 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0xb1>
 85c4794:	b8 00 00 00 00       	mov    $0x0,%eax
 85c4799:	84 c0                	test   %al,%al
 85c479b:	74 0b                	je     85c47a8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0xc0>
 85c479d:	b8 00 00 00 00       	mov    $0x0,%eax
 85c47a2:	e9 99 00 00 00       	jmp    85c4840 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x158>
 85c47a7:	90                   	nop
 85c47a8:	8b 45 10             	mov    0x10(%ebp),%eax
 85c47ab:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c47ae:	74 07                	je     85c47b7 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0xcf>
 85c47b0:	8b 45 10             	mov    0x10(%ebp),%eax
 85c47b3:	85 c0                	test   %eax,%eax
 85c47b5:	75 43                	jne    85c47fa <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x112>
 85c47b7:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 85c47be:	0f b6 d0             	movzbl %al,%edx
 85c47c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c47c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c47c8:	89 04 24             	mov    %eax,(%esp)
 85c47cb:	e8 5a 7b f2 ff       	call   84ec32a <_ZN15CUserCharacInfo18SetOneDayLetheFlagEh>
 85c47d0:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 85c47d7:	0f b6 c0             	movzbl %al,%eax
 85c47da:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c47e1:	00 
 85c47e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c47e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c47e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c47ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85c47f0:	89 04 24             	mov    %eax,(%esp)
 85c47f3:	e8 4a 00 00 00       	call   85c4842 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND>
 85c47f8:	eb 41                	jmp    85c483b <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x153>
 85c47fa:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 85c4801:	0f b6 d0             	movzbl %al,%edx
 85c4804:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4807:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c480b:	89 04 24             	mov    %eax,(%esp)
 85c480e:	e8 67 7b f2 ff       	call   84ec37a <_ZN15CUserCharacInfo21SetOneDayLetheFlag2NDEh>
 85c4813:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 85c481a:	0f b6 c0             	movzbl %al,%eax
 85c481d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85c4824:	00 
 85c4825:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c4829:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c482c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c4830:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4833:	89 04 24             	mov    %eax,(%esp)
 85c4836:	e8 07 00 00 00       	call   85c4842 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND>
 85c483b:	b8 01 00 00 00       	mov    $0x1,%eax
 85c4840:	c9                   	leave
 85c4841:	c3                   	ret

```

```c
// CPremiumLetheManager::BackupSkill @ 0x85c46e8

/* CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
CPremiumLetheManager::BackupSkill(CPremiumLetheManager *this,CUserCharacInfo *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = CUserCharacInfo::getCurCharacR(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  if ((param_3 == -1) || (param_3 == 0)) {
    cVar2 = CUserCharacInfo::GetOneDayLetheFlag(param_1);
    if ((cVar2 == NOT_USE_LETHE_STATE) ||
       (cVar2 = CUserCharacInfo::GetOneDayLetheFlag(param_1), cVar2 == SKILL_CONFIRM_STATE)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
  }
  else {
    cVar2 = CUserCharacInfo::GetOneDayLetheFlag2ND(param_1);
    if ((cVar2 == NOT_USE_LETHE_STATE) ||
       (cVar2 = CUserCharacInfo::GetOneDayLetheFlag2ND(param_1), cVar2 == SKILL_CONFIRM_STATE)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
  }
  if ((param_3 == -1) || (param_3 == 0)) {
    CUserCharacInfo::SetOneDayLetheFlag(param_1,USE_LETHE_STATE);
    _update(this,param_1,USE_LETHE_STATE,0);
  }
  else {
    CUserCharacInfo::SetOneDayLetheFlag2ND(param_1,USE_LETHE_STATE);
    _update(this,param_1,USE_LETHE_STATE,1);
  }
  return 1;
}

```

---

## CPremiumLetheManager

```asm
// === 085c3d08 CPremiumLetheManager::CPremiumLetheManager  [0x085c3d08-0x85c3d0d] ===
 85c3d08:	55                   	push   %ebp
 85c3d09:	89 e5                	mov    %esp,%ebp
 85c3d0b:	5d                   	pop    %ebp
 85c3d0c:	c3                   	ret
 85c3d0d:	90                   	nop

```

```c
// CPremiumLetheManager::CPremiumLetheManager @ 0x85c3d08

/* CPremiumLetheManager::CPremiumLetheManager() */

void __thiscall CPremiumLetheManager::CPremiumLetheManager(CPremiumLetheManager *this)

{
  return;
}

```

---

## ConfirmSkillReq

```asm
// === 085c3d70 CPremiumLetheManager::ConfirmSkillReq  [0x085c3d70-0x85c3e29] ===
 85c3d70:	55                   	push   %ebp
 85c3d71:	89 e5                	mov    %esp,%ebp
 85c3d73:	53                   	push   %ebx
 85c3d74:	83 ec 24             	sub    $0x24,%esp
 85c3d77:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85c3d7b:	75 0a                	jne    85c3d87 <_ZN20CPremiumLetheManager15ConfirmSkillReqEP5CUser+0x17>
 85c3d7d:	b8 00 00 00 00       	mov    $0x0,%eax
 85c3d82:	e9 9c 00 00 00       	jmp    85c3e23 <_ZN20CPremiumLetheManager15ConfirmSkillReqEP5CUser+0xb3>
 85c3d87:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 85c3d8e:	00 
 85c3d8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3d92:	89 04 24             	mov    %eax,(%esp)
 85c3d95:	e8 74 22 b2 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 85c3d9a:	83 f0 01             	xor    $0x1,%eax
 85c3d9d:	84 c0                	test   %al,%al
 85c3d9f:	74 07                	je     85c3da8 <_ZN20CPremiumLetheManager15ConfirmSkillReqEP5CUser+0x38>
 85c3da1:	b8 00 00 00 00       	mov    $0x0,%eax
 85c3da6:	eb 7b                	jmp    85c3e23 <_ZN20CPremiumLetheManager15ConfirmSkillReqEP5CUser+0xb3>
 85c3da8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3dab:	89 04 24             	mov    %eax,(%esp)
 85c3dae:	e8 75 d2 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c3db3:	89 c3                	mov    %eax,%ebx
 85c3db5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c3dbc:	00 
 85c3dbd:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 85c3dc4:	00 
 85c3dc5:	c7 44 24 04 80 d0 cb 	movl   $0x8cbd080,0x4(%esp)
 85c3dcc:	08 
 85c3dcd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c3dd0:	89 04 24             	mov    %eax,(%esp)
 85c3dd3:	e8 40 b9 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c3dd8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c3ddc:	c7 44 24 04 64 c1 cb 	movl   $0x8cbc164,0x4(%esp)
 85c3de3:	08 
 85c3de4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c3de7:	89 04 24             	mov    %eax,(%esp)
 85c3dea:	e8 99 b9 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c3def:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3df2:	89 04 24             	mov    %eax,(%esp)
 85c3df5:	e8 42 b5 c6 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 85c3dfa:	0f b6 15 61 bc 3a 09 	movzbl 0x93abc61,%edx
 85c3e01:	0f b6 d2             	movzbl %dl,%edx
 85c3e04:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c3e08:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c3e0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3e0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c3e13:	8b 45 08             	mov    0x8(%ebp),%eax
 85c3e16:	89 04 24             	mov    %eax,(%esp)
 85c3e19:	e8 24 0a 00 00       	call   85c4842 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND>
 85c3e1e:	b8 01 00 00 00       	mov    $0x1,%eax
 85c3e23:	83 c4 24             	add    $0x24,%esp
 85c3e26:	5b                   	pop    %ebx
 85c3e27:	5d                   	pop    %ebp
 85c3e28:	c3                   	ret
 85c3e29:	90                   	nop

```

```c
// CPremiumLetheManager::ConfirmSkillReq @ 0x85c3d70

/* CPremiumLetheManager::ConfirmSkillReq(CUser*) */

undefined4 __thiscall
CPremiumLetheManager::ConfirmSkillReq(CPremiumLetheManager *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_1c [20];
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CUser::isAffectedPremium(param_1,0x21);
    if (cVar1 == '\x01') {
      uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_1c,"bool CPremiumLetheManager::ConfirmSkillReq(CUser*)",0x35,0);
      cMyTrace::operator()(local_1c,"ONE_DAY_LETHE : CONFIRM_SKILL, char(%s)",uVar2);
      uVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
      _update(this,param_1,SKILL_CONFIRM_STATE,uVar2);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## InitLetheSkill

```asm
// === 085c4008 CPremiumLetheManager::InitLetheSkill  [0x085c4008-0x85c40a9] ===
 85c4008:	55                   	push   %ebp
 85c4009:	89 e5                	mov    %esp,%ebp
 85c400b:	53                   	push   %ebx
 85c400c:	83 ec 24             	sub    $0x24,%esp
 85c400f:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 85c4016:	00 
 85c4017:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c401a:	89 04 24             	mov    %eax,(%esp)
 85c401d:	e8 ec 1f b2 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 85c4022:	83 f0 01             	xor    $0x1,%eax
 85c4025:	84 c0                	test   %al,%al
 85c4027:	74 07                	je     85c4030 <_ZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x28>
 85c4029:	b8 00 00 00 00       	mov    $0x0,%eax
 85c402e:	eb 73                	jmp    85c40a3 <_ZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KIND+0x9b>
 85c4030:	0f b6 05 63 bc 3a 09 	movzbl 0x93abc63,%eax
 85c4037:	0f b6 c0             	movzbl %al,%eax
 85c403a:	8b 55 10             	mov    0x10(%ebp),%edx
 85c403d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c4041:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c4045:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4048:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c404c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c404f:	89 04 24             	mov    %eax,(%esp)
 85c4052:	e8 eb 07 00 00       	call   85c4842 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND>
 85c4057:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c405a:	89 04 24             	mov    %eax,(%esp)
 85c405d:	e8 c6 cf b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c4062:	89 c3                	mov    %eax,%ebx
 85c4064:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c406b:	00 
 85c406c:	c7 44 24 08 75 00 00 	movl   $0x75,0x8(%esp)
 85c4073:	00 
 85c4074:	c7 44 24 04 60 cf cb 	movl   $0x8cbcf60,0x4(%esp)
 85c407b:	08 
 85c407c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c407f:	89 04 24             	mov    %eax,(%esp)
 85c4082:	e8 91 b6 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c4087:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c408b:	c7 44 24 04 f4 c1 cb 	movl   $0x8cbc1f4,0x4(%esp)
 85c4092:	08 
 85c4093:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c4096:	89 04 24             	mov    %eax,(%esp)
 85c4099:	e8 ea b6 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c409e:	b8 01 00 00 00       	mov    $0x1,%eax
 85c40a3:	83 c4 24             	add    $0x24,%esp
 85c40a6:	5b                   	pop    %ebx
 85c40a7:	5d                   	pop    %ebp
 85c40a8:	c3                   	ret
 85c40a9:	90                   	nop

```

```c
// CPremiumLetheManager::InitLetheSkill @ 0x85c4008

/* CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND) */

bool __thiscall
CPremiumLetheManager::InitLetheSkill(CPremiumLetheManager *this,CUser *param_1,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_1c [20];
  
  cVar1 = CUser::isAffectedPremium(param_1,0x21);
  if (cVar1 == '\x01') {
    _update(this,param_1,INIT_LETHE_SKILL,param_3);
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_1c,
                       "bool CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND)",
                       0x75,0);
    cMyTrace::operator()(local_1c,"ONE_DAY_LETHE : SUCCESS_INIT_FOR_1ST_GROW_CHAR, char(%s)",uVar2);
  }
  return cVar1 == '\x01';
}

```

---

## InitSkill

```asm
// === 085c421e CPremiumLetheManager::InitSkill  [0x085c421e-0x85c46e7] ===
 85c421e:	55                   	push   %ebp
 85c421f:	89 e5                	mov    %esp,%ebp
 85c4221:	57                   	push   %edi
 85c4222:	56                   	push   %esi
 85c4223:	53                   	push   %ebx
 85c4224:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 85c422a:	8b 45 10             	mov    0x10(%ebp),%eax
 85c422d:	88 85 f4 fe ff ff    	mov    %al,-0x10c(%ebp)
 85c4233:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4236:	89 04 24             	mov    %eax,(%esp)
 85c4239:	e8 02 af c6 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 85c423e:	8b 55 14             	mov    0x14(%ebp),%edx
 85c4241:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c4245:	89 04 24             	mov    %eax,(%esp)
 85c4248:	e8 43 0b 04 00       	call   8604d90 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND>
 85c424d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4250:	89 04 24             	mov    %eax,(%esp)
 85c4253:	e8 e8 ae c6 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 85c4258:	8b 55 0c             	mov    0xc(%ebp),%edx
 85c425b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c425f:	89 04 24             	mov    %eax,(%esp)
 85c4262:	e8 c7 ab c6 ff       	call   822ee2e <_ZN9SkillSlot10set_parentEP5CUser>
 85c4267:	e8 3b 61 b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85c426c:	89 04 24             	mov    %eax,(%esp)
 85c426f:	e8 aa 01 c7 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 85c4274:	84 c0                	test   %al,%al
 85c4276:	0f 84 3c 01 00 00    	je     85c43b8 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x19a>
 85c427c:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85c4283:	8b 45 14             	mov    0x14(%ebp),%eax
 85c4286:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c4289:	74 07                	je     85c4292 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x74>
 85c428b:	8b 45 14             	mov    0x14(%ebp),%eax
 85c428e:	85 c0                	test   %eax,%eax
 85c4290:	75 09                	jne    85c429b <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x7d>
 85c4292:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 85c4299:	eb 07                	jmp    85c42a2 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x84>
 85c429b:	c7 45 d8 02 00 00 00 	movl   $0x2,-0x28(%ebp)
 85c42a2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85c42a5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c42a9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c42b0:	00 
 85c42b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85c42b8:	00 
 85c42b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c42bc:	89 04 24             	mov    %eax,(%esp)
 85c42bf:	e8 3c 11 0a 00       	call   8665400 <_ZN5CUser16givePvPSkillTreeEibi>
 85c42c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c42c7:	89 04 24             	mov    %eax,(%esp)
 85c42ca:	e8 7b ab bd ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85c42cf:	89 c6                	mov    %eax,%esi
 85c42d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c42d4:	89 04 24             	mov    %eax,(%esp)
 85c42d7:	e8 60 af c6 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 85c42dc:	0f be c0             	movsbl %al,%eax
 85c42df:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 85c42e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c42e8:	89 04 24             	mov    %eax,(%esp)
 85c42eb:	e8 a4 c9 b4 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 85c42f0:	0f be f8             	movsbl %al,%edi
 85c42f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c42f6:	89 04 24             	mov    %eax,(%esp)
 85c42f9:	e8 22 9c b3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 85c42fe:	89 c3                	mov    %eax,%ebx
 85c4300:	e8 96 7e b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c4305:	05 00 a8 00 00       	add    $0xa800,%eax
 85c430a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85c4311:	00 
 85c4312:	89 74 24 10          	mov    %esi,0x10(%esp)
 85c4316:	8b 95 f0 fe ff ff    	mov    -0x110(%ebp),%edx
 85c431c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c4320:	89 7c 24 08          	mov    %edi,0x8(%esp)
 85c4324:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c4328:	89 04 24             	mov    %eax,(%esp)
 85c432b:	e8 32 9a 49 00       	call   8a5dd62 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib>
 85c4330:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85c4333:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4336:	89 04 24             	mov    %eax,(%esp)
 85c4339:	e8 02 ae c6 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 85c433e:	8b 55 14             	mov    0x14(%ebp),%edx
 85c4341:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c4345:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85c4348:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c434c:	89 04 24             	mov    %eax,(%esp)
 85c434f:	e8 a4 f1 03 00       	call   86034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>
 85c4354:	80 bd f4 fe ff ff 00 	cmpb   $0x0,-0x10c(%ebp)
 85c435b:	0f 84 7a 03 00 00    	je     85c46db <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x4bd>
 85c4361:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4364:	89 04 24             	mov    %eax,(%esp)
 85c4367:	e8 fe 80 0a 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 85c436c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c436f:	89 04 24             	mov    %eax,(%esp)
 85c4372:	e8 b1 cc b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c4377:	89 c3                	mov    %eax,%ebx
 85c4379:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c4380:	00 
 85c4381:	c7 44 24 08 b1 00 00 	movl   $0xb1,0x8(%esp)
 85c4388:	00 
 85c4389:	c7 44 24 04 c0 ce cb 	movl   $0x8cbcec0,0x4(%esp)
 85c4390:	08 
 85c4391:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85c4394:	89 04 24             	mov    %eax,(%esp)
 85c4397:	e8 7c b3 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c439c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c43a0:	c7 44 24 04 58 c2 cb 	movl   $0x8cbc258,0x4(%esp)
 85c43a7:	08 
 85c43a8:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85c43ab:	89 04 24             	mov    %eax,(%esp)
 85c43ae:	e8 d5 b3 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c43b3:	e9 24 03 00 00       	jmp    85c46dc <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x4be>
 85c43b8:	8b 45 14             	mov    0x14(%ebp),%eax
 85c43bb:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c43be:	74 07                	je     85c43c7 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x1a9>
 85c43c0:	8b 45 14             	mov    0x14(%ebp),%eax
 85c43c3:	85 c0                	test   %eax,%eax
 85c43c5:	75 29                	jne    85c43f0 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x1d2>
 85c43c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c43ca:	89 04 24             	mov    %eax,(%esp)
 85c43cd:	e8 4e 9b b3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 85c43d2:	89 c3                	mov    %eax,%ebx
 85c43d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c43d7:	89 04 24             	mov    %eax,(%esp)
 85c43da:	e8 61 ad c6 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 85c43df:	83 c0 46             	add    $0x46,%eax
 85c43e2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c43e6:	89 04 24             	mov    %eax,(%esp)
 85c43e9:	e8 f4 0b 04 00       	call   8604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>
 85c43ee:	eb 29                	jmp    85c4419 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x1fb>
 85c43f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c43f3:	89 04 24             	mov    %eax,(%esp)
 85c43f6:	e8 25 9b b3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 85c43fb:	89 c3                	mov    %eax,%ebx
 85c43fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4400:	89 04 24             	mov    %eax,(%esp)
 85c4403:	e8 38 ad c6 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 85c4408:	05 de 01 00 00       	add    $0x1de,%eax
 85c440d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c4411:	89 04 24             	mov    %eax,(%esp)
 85c4414:	e8 c9 0b 04 00       	call   8604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>
 85c4419:	8d 45 98             	lea    -0x68(%ebp),%eax
 85c441c:	89 04 24             	mov    %eax,(%esp)
 85c441f:	e8 b2 05 b7 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 85c4424:	8d 45 90             	lea    -0x70(%ebp),%eax
 85c4427:	89 04 24             	mov    %eax,(%esp)
 85c442a:	e8 5f 18 bf ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 85c442f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4432:	89 04 24             	mov    %eax,(%esp)
 85c4435:	e8 02 ae c6 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 85c443a:	0f be f0             	movsbl %al,%esi
 85c443d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4440:	89 04 24             	mov    %eax,(%esp)
 85c4443:	e8 4c c8 b4 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 85c4448:	0f be d8             	movsbl %al,%ebx
 85c444b:	e8 4b 7d b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c4450:	8b 78 14             	mov    0x14(%eax),%edi
 85c4453:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4456:	89 04 24             	mov    %eax,(%esp)
 85c4459:	e8 c2 9a b3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 85c445e:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 85c4464:	8d 14 07             	lea    (%edi,%eax,1),%edx
 85c4467:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85c446e:	00 
 85c446f:	8d 45 98             	lea    -0x68(%ebp),%eax
 85c4472:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c4476:	89 74 24 08          	mov    %esi,0x8(%esp)
 85c447a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c447e:	89 14 24             	mov    %edx,(%esp)
 85c4481:	e8 12 43 d8 ff       	call   8348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>
 85c4486:	88 45 cf             	mov    %al,-0x31(%ebp)
 85c4489:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 85c448d:	83 f0 01             	xor    $0x1,%eax
 85c4490:	84 c0                	test   %al,%al
 85c4492:	0f 85 36 02 00 00    	jne    85c46ce <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x4b0>
 85c4498:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85c449f:	eb 66                	jmp    85c4507 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x2e9>
 85c44a1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85c44a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c44a8:	8d 45 98             	lea    -0x68(%ebp),%eax
 85c44ab:	89 04 24             	mov    %eax,(%esp)
 85c44ae:	e8 f1 63 b2 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 85c44b3:	8b 50 04             	mov    0x4(%eax),%edx
 85c44b6:	8b 00                	mov    (%eax),%eax
 85c44b8:	89 45 90             	mov    %eax,-0x70(%ebp)
 85c44bb:	89 55 94             	mov    %edx,-0x6c(%ebp)
 85c44be:	8b 45 90             	mov    -0x70(%ebp),%eax
 85c44c1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85c44c4:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85c44c7:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85c44ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c44cd:	89 04 24             	mov    %eax,(%esp)
 85c44d0:	e8 4b 9a b3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 85c44d5:	89 c3                	mov    %eax,%ebx
 85c44d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c44da:	89 04 24             	mov    %eax,(%esp)
 85c44dd:	e8 5e ac c6 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 85c44e2:	8b 55 14             	mov    0x14(%ebp),%edx
 85c44e5:	89 54 24 10          	mov    %edx,0x10(%esp)
 85c44e9:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85c44ec:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c44f0:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85c44f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c44f7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c44fb:	89 04 24             	mov    %eax,(%esp)
 85c44fe:	e8 b9 fb 03 00       	call   86040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>
 85c4503:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85c4507:	8d 45 98             	lea    -0x68(%ebp),%eax
 85c450a:	89 04 24             	mov    %eax,(%esp)
 85c450d:	e8 02 93 b1 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 85c4512:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 85c4515:	0f 9f c0             	setg   %al
 85c4518:	84 c0                	test   %al,%al
 85c451a:	75 85                	jne    85c44a1 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x283>
 85c451c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c451f:	89 04 24             	mov    %eax,(%esp)
 85c4522:	e8 6d b3 c6 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 85c4527:	89 c3                	mov    %eax,%ebx
 85c4529:	e8 6d 7c b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c452e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c4532:	89 04 24             	mov    %eax,(%esp)
 85c4535:	e8 b8 70 c6 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 85c453a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85c453d:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 85c4541:	0f 84 8f 00 00 00    	je     85c45d6 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x3b8>
 85c4547:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85c454e:	eb 6a                	jmp    85c45ba <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x39c>
 85c4550:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4553:	89 04 24             	mov    %eax,(%esp)
 85c4556:	e8 cb 0a db ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 85c455b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c455f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4562:	89 04 24             	mov    %eax,(%esp)
 85c4565:	e8 12 77 0c 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 85c456a:	89 c6                	mov    %eax,%esi
 85c456c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85c456f:	8d 50 0c             	lea    0xc(%eax),%edx
 85c4572:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c4575:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c4579:	89 14 24             	mov    %edx,(%esp)
 85c457c:	e8 23 63 b2 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 85c4581:	8b 38                	mov    (%eax),%edi
 85c4583:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4586:	89 04 24             	mov    %eax,(%esp)
 85c4589:	e8 92 99 b3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 85c458e:	89 c3                	mov    %eax,%ebx
 85c4590:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4593:	89 04 24             	mov    %eax,(%esp)
 85c4596:	e8 a5 ab c6 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 85c459b:	8b 55 14             	mov    0x14(%ebp),%edx
 85c459e:	89 54 24 10          	mov    %edx,0x10(%esp)
 85c45a2:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c45a6:	89 7c 24 08          	mov    %edi,0x8(%esp)
 85c45aa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c45ae:	89 04 24             	mov    %eax,(%esp)
 85c45b1:	e8 06 fb 03 00       	call   86040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>
 85c45b6:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85c45ba:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85c45bd:	83 c0 0c             	add    $0xc,%eax
 85c45c0:	89 04 24             	mov    %eax,(%esp)
 85c45c3:	e8 4c 92 b1 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 85c45c8:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 85c45cb:	0f 97 c0             	seta   %al
 85c45ce:	84 c0                	test   %al,%al
 85c45d0:	0f 85 7a ff ff ff    	jne    85c4550 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x332>
 85c45d6:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 85c45dc:	89 04 24             	mov    %eax,(%esp)
 85c45df:	e8 da 09 c7 ff       	call   8234fbe <_ZN8WongWork13CSkillChangerC1Ev>
 85c45e4:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 85c45eb:	8b 45 14             	mov    0x14(%ebp),%eax
 85c45ee:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c45f1:	74 07                	je     85c45fa <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x3dc>
 85c45f3:	8b 45 14             	mov    0x14(%ebp),%eax
 85c45f6:	85 c0                	test   %eax,%eax
 85c45f8:	75 09                	jne    85c4603 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x3e5>
 85c45fa:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 85c4601:	eb 07                	jmp    85c460a <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x3ec>
 85c4603:	c7 45 d4 02 00 00 00 	movl   $0x2,-0x2c(%ebp)
 85c460a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c4611:	00 
 85c4612:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85c4615:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c4619:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c461c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c4620:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 85c4626:	89 04 24             	mov    %eax,(%esp)
 85c4629:	e8 62 58 04 00       	call   8609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>
 85c462e:	80 bd f4 fe ff ff 00 	cmpb   $0x0,-0x10c(%ebp)
 85c4635:	74 6c                	je     85c46a3 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x485>
 85c4637:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c463a:	89 04 24             	mov    %eax,(%esp)
 85c463d:	e8 28 7e 0a 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 85c4642:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4645:	89 04 24             	mov    %eax,(%esp)
 85c4648:	e8 db c9 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c464d:	89 c3                	mov    %eax,%ebx
 85c464f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c4656:	00 
 85c4657:	c7 44 24 08 f7 00 00 	movl   $0xf7,0x8(%esp)
 85c465e:	00 
 85c465f:	c7 44 24 04 c0 ce cb 	movl   $0x8cbcec0,0x4(%esp)
 85c4666:	08 
 85c4667:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85c466a:	89 04 24             	mov    %eax,(%esp)
 85c466d:	e8 a6 b0 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c4672:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c4676:	c7 44 24 04 58 c2 cb 	movl   $0x8cbc258,0x4(%esp)
 85c467d:	08 
 85c467e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85c4681:	89 04 24             	mov    %eax,(%esp)
 85c4684:	e8 ff b0 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c4689:	eb 18                	jmp    85c46a3 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x485>
 85c468b:	89 d3                	mov    %edx,%ebx
 85c468d:	89 c6                	mov    %eax,%esi
 85c468f:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 85c4695:	89 04 24             	mov    %eax,(%esp)
 85c4698:	e8 27 09 c7 ff       	call   8234fc4 <_ZN8WongWork13CSkillChangerD1Ev>
 85c469d:	89 f0                	mov    %esi,%eax
 85c469f:	89 da                	mov    %ebx,%edx
 85c46a1:	eb 10                	jmp    85c46b3 <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x495>
 85c46a3:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 85c46a9:	89 04 24             	mov    %eax,(%esp)
 85c46ac:	e8 13 09 c7 ff       	call   8234fc4 <_ZN8WongWork13CSkillChangerD1Ev>
 85c46b1:	eb 1b                	jmp    85c46ce <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x4b0>
 85c46b3:	89 d3                	mov    %edx,%ebx
 85c46b5:	89 c6                	mov    %eax,%esi
 85c46b7:	8d 45 98             	lea    -0x68(%ebp),%eax
 85c46ba:	89 04 24             	mov    %eax,(%esp)
 85c46bd:	e8 28 03 b7 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 85c46c2:	89 f0                	mov    %esi,%eax
 85c46c4:	89 da                	mov    %ebx,%edx
 85c46c6:	89 04 24             	mov    %eax,(%esp)
 85c46c9:	e8 82 f0 51 00       	call   8ae3750 <_Unwind_Resume>
 85c46ce:	8d 45 98             	lea    -0x68(%ebp),%eax
 85c46d1:	89 04 24             	mov    %eax,(%esp)
 85c46d4:	e8 11 03 b7 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 85c46d9:	eb 01                	jmp    85c46dc <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND+0x4be>
 85c46db:	90                   	nop
 85c46dc:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 85c46e2:	5b                   	pop    %ebx
 85c46e3:	5e                   	pop    %esi
 85c46e4:	5f                   	pop    %edi
 85c46e5:	5d                   	pop    %ebp
 85c46e6:	c3                   	ret
 85c46e7:	90                   	nop

```

```c
// CPremiumLetheManager::InitSkill @ 0x85c421e

/* CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND) */

void __thiscall
CPremiumLetheManager::InitSkill(undefined4 this,CUserCharacInfo *param_1,char param_2,int param_4)

{
  char cVar1;
  char cVar2;
  SkillSlot *pSVar3;
  GameWorld *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
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
  
  pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
  SkillSlot::clear_all_skills(pSVar3,param_4);
  pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
  SkillSlot::set_parent(pSVar3,(CUser *)param_1);
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
  if (cVar1 == '\0') {
    if ((param_4 == -1) || (param_4 == 0)) {
      iVar4 = CUserCharacInfo::get_charac_job(param_1);
      iVar5 = CUserCharacInfo::getCurCharacSkillW(param_1);
      addSkillOnCreateCharacter((_Mastered_skill *)(iVar5 + 0x46),iVar4);
    }
    else {
      iVar4 = CUserCharacInfo::get_charac_job(param_1);
      iVar5 = CUserCharacInfo::getCurCharacSkillW(param_1);
      addSkillOnCreateCharacter((_Mastered_skill *)(iVar5 + 0x1de),iVar4);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_6c);
    std::pair<int,int>::pair((pair<int,int> *)&local_74);
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType(param_1);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType(param_1);
                    /* try { // try from 085c444b to 085c45b5 has its CatchHandler @ 085c46b3 */
    iVar4 = G_CDataManager();
    iVar4 = *(int *)(iVar4 + 0x14);
    iVar5 = CUserCharacInfo::get_charac_job(param_1);
    local_35 = CCharacter::get_give_skill
                         ((CCharacter *)(iVar4 + iVar5 * 0x7dc),(int)cVar2,(int)cVar1,
                          (vector *)local_6c,0);
    if (local_35 == '\x01') {
      local_24 = 0;
      while( true ) {
        iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_6c);
        if (iVar4 <= (int)local_24) break;
        puVar9 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           (local_6c,local_24);
        local_70 = puVar9[1];
        local_74 = *puVar9;
        local_40 = local_74;
        local_3c = local_70;
        uVar7 = CUserCharacInfo::get_charac_job(param_1);
        pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
        SkillSlot::growtype_skill(pSVar3,uVar7,local_40,local_3c,param_4);
        local_24 = local_24 + 1;
      }
      CUserCharacInfo::GetCurCharacExpertJobType(param_1);
      iVar4 = G_CDataManager();
      local_34 = CDataManager::GetExpertJobScript(iVar4);
      if (local_34 != 0) {
        local_20 = 0;
        while( true ) {
          uVar11 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_34 + 0xc));
          if (uVar11 <= local_20) break;
          iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp(param_1);
          uVar8 = CUser::GetCurExpertJobLevel((CUser *)param_1,iVar4);
          puVar9 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_34 + 0xc),local_20);
          uVar7 = *puVar9;
          uVar10 = CUserCharacInfo::get_charac_job(param_1);
          pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
          SkillSlot::growtype_skill(pSVar3,uVar10,uVar7,uVar8,param_4);
          local_20 = local_20 + 1;
        }
      }
      WongWork::CSkillChanger::CSkillChanger(local_108);
      if ((param_4 == -1) || (param_4 == 0)) {
        local_30 = 1;
      }
      else {
        local_30 = 2;
      }
                    /* try { // try from 085c4629 to 085c4688 has its CatchHandler @ 085c468b */
      WongWork::CSkillChanger::SkillInitialize(local_108,(CUser *)param_1,local_30,false);
      if (param_2 != '\0') {
        CUser::send_skill_info((CUser *)param_1);
        uVar7 = CUserCharacInfo::getCurCharacName(param_1);
        cMyTrace::cMyTrace(local_50,
                           "void CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND)"
                           ,0xf7,0);
        cMyTrace::operator()
                  (local_50,"ONE_DAY_LETHE : SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",uVar7
                  );
      }
      WongWork::CSkillChanger::~CSkillChanger(local_108);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_6c);
  }
  else {
    if ((param_4 == -1) || (param_4 == 0)) {
      local_2c = 1;
    }
    else {
      local_2c = 2;
    }
    CUser::givePvPSkillTree((CUser *)param_1,0,true,local_2c);
    iVar4 = CUserCharacInfo::get_pvp_grade(param_1);
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType(param_1);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType(param_1);
    iVar5 = CUserCharacInfo::get_charac_job(param_1);
    iVar6 = G_CDataManager();
    local_28 = PvPSkillTreeParameterScript::getPvPSkillPoint
                         ((PvPSkillTreeParameterScript *)(iVar6 + 0xa800),iVar5,(int)cVar2,
                          (int)cVar1,iVar4,false);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
    SkillSlot::set_remain_sp_at_index(pSVar3,local_28,param_4);
    if (param_2 != '\0') {
      CUser::send_skill_info((CUser *)param_1);
      uVar7 = CUserCharacInfo::getCurCharacName(param_1);
      cMyTrace::cMyTrace(local_60,
                         "void CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND)",
                         0xb1,0);
      cMyTrace::operator()
                (local_60,"ONE_DAY_LETHE : SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",uVar7);
    }
  }
  return;
}

```

---

## ResetSkillReq

```asm
// === 085c3d14 CPremiumLetheManager::ResetSkillReq  [0x085c3d14-0x85c3d6f] ===
 85c3d14:	55                   	push   %ebp
 85c3d15:	89 e5                	mov    %esp,%ebp
 85c3d17:	83 ec 18             	sub    $0x18,%esp
 85c3d1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3d1d:	89 04 24             	mov    %eax,(%esp)
 85c3d20:	e8 0d c7 b5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85c3d25:	85 c0                	test   %eax,%eax
 85c3d27:	0f 94 c0             	sete   %al
 85c3d2a:	84 c0                	test   %al,%al
 85c3d2c:	74 07                	je     85c3d35 <_ZN20CPremiumLetheManager13ResetSkillReqEP5CUser+0x21>
 85c3d2e:	b8 00 00 00 00       	mov    $0x0,%eax
 85c3d33:	eb 38                	jmp    85c3d6d <_ZN20CPremiumLetheManager13ResetSkillReqEP5CUser+0x59>
 85c3d35:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 85c3d3c:	00 
 85c3d3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3d40:	89 04 24             	mov    %eax,(%esp)
 85c3d43:	e8 c6 22 b2 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 85c3d48:	83 f0 01             	xor    $0x1,%eax
 85c3d4b:	84 c0                	test   %al,%al
 85c3d4d:	74 07                	je     85c3d56 <_ZN20CPremiumLetheManager13ResetSkillReqEP5CUser+0x42>
 85c3d4f:	b8 00 00 00 00       	mov    $0x0,%eax
 85c3d54:	eb 17                	jmp    85c3d6d <_ZN20CPremiumLetheManager13ResetSkillReqEP5CUser+0x59>
 85c3d56:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3d59:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c3d5d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c3d60:	89 04 24             	mov    %eax,(%esp)
 85c3d63:	e8 42 03 00 00       	call   85c40aa <_ZN20CPremiumLetheManager11_resetSkillEP5CUser>
 85c3d68:	b8 01 00 00 00       	mov    $0x1,%eax
 85c3d6d:	c9                   	leave
 85c3d6e:	c3                   	ret
 85c3d6f:	90                   	nop

```

```c
// CPremiumLetheManager::ResetSkillReq @ 0x85c3d14

/* CPremiumLetheManager::ResetSkillReq(CUser*) */

undefined4 __thiscall CPremiumLetheManager::ResetSkillReq(CPremiumLetheManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CUser::isAffectedPremium(param_1,0x21);
    if (cVar1 == '\x01') {
      _resetSkill(this,param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## UpdateBackupSkillFlag

```asm
// === 085c3f30 CPremiumLetheManager::UpdateBackupSkillFlag  [0x085c3f30-0x85c4007] ===
 85c3f30:	55                   	push   %ebp
 85c3f31:	89 e5                	mov    %esp,%ebp
 85c3f33:	53                   	push   %ebx
 85c3f34:	83 ec 24             	sub    $0x24,%esp
 85c3f37:	8b 45 10             	mov    0x10(%ebp),%eax
 85c3f3a:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c3f3d:	74 07                	je     85c3f46 <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND+0x16>
 85c3f3f:	8b 45 10             	mov    0x10(%ebp),%eax
 85c3f42:	85 c0                	test   %eax,%eax
 85c3f44:	75 25                	jne    85c3f6b <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND+0x3b>
 85c3f46:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3f49:	89 04 24             	mov    %eax,(%esp)
 85c3f4c:	e8 3b 0c 00 00       	call   85c4b8c <_ZNK15CUserCharacInfo18GetOneDayLetheFlagEv>
 85c3f51:	0f b6 15 bc 2d 47 09 	movzbl 0x9472dbc,%edx
 85c3f58:	38 d0                	cmp    %dl,%al
 85c3f5a:	0f 95 c0             	setne  %al
 85c3f5d:	84 c0                	test   %al,%al
 85c3f5f:	74 2c                	je     85c3f8d <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND+0x5d>
 85c3f61:	b8 00 00 00 00       	mov    $0x0,%eax
 85c3f66:	e9 96 00 00 00       	jmp    85c4001 <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND+0xd1>
 85c3f6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3f6e:	89 04 24             	mov    %eax,(%esp)
 85c3f71:	e8 3a 0c 00 00       	call   85c4bb0 <_ZNK15CUserCharacInfo21GetOneDayLetheFlag2NDEv>
 85c3f76:	0f b6 15 bc 2d 47 09 	movzbl 0x9472dbc,%edx
 85c3f7d:	38 d0                	cmp    %dl,%al
 85c3f7f:	0f 95 c0             	setne  %al
 85c3f82:	84 c0                	test   %al,%al
 85c3f84:	74 08                	je     85c3f8e <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND+0x5e>
 85c3f86:	b8 00 00 00 00       	mov    $0x0,%eax
 85c3f8b:	eb 74                	jmp    85c4001 <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND+0xd1>
 85c3f8d:	90                   	nop
 85c3f8e:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 85c3f95:	0f b6 c0             	movzbl %al,%eax
 85c3f98:	8b 55 10             	mov    0x10(%ebp),%edx
 85c3f9b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c3f9f:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c3fa3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3fa6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c3faa:	8b 45 08             	mov    0x8(%ebp),%eax
 85c3fad:	89 04 24             	mov    %eax,(%esp)
 85c3fb0:	e8 8d 08 00 00       	call   85c4842 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND>
 85c3fb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3fb8:	89 04 24             	mov    %eax,(%esp)
 85c3fbb:	e8 68 d0 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c3fc0:	89 c3                	mov    %eax,%ebx
 85c3fc2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c3fc9:	00 
 85c3fca:	c7 44 24 08 69 00 00 	movl   $0x69,0x8(%esp)
 85c3fd1:	00 
 85c3fd2:	c7 44 24 04 c0 cf cb 	movl   $0x8cbcfc0,0x4(%esp)
 85c3fd9:	08 
 85c3fda:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c3fdd:	89 04 24             	mov    %eax,(%esp)
 85c3fe0:	e8 33 b7 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c3fe5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c3fe9:	c7 44 24 04 bc c1 cb 	movl   $0x8cbc1bc,0x4(%esp)
 85c3ff0:	08 
 85c3ff1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c3ff4:	89 04 24             	mov    %eax,(%esp)
 85c3ff7:	e8 8c b7 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c3ffc:	b8 01 00 00 00       	mov    $0x1,%eax
 85c4001:	83 c4 24             	add    $0x24,%esp
 85c4004:	5b                   	pop    %ebx
 85c4005:	5d                   	pop    %ebp
 85c4006:	c3                   	ret
 85c4007:	90                   	nop

```

```c
// CPremiumLetheManager::UpdateBackupSkillFlag @ 0x85c3f30

/* CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
CPremiumLetheManager::UpdateBackupSkillFlag
          (CPremiumLetheManager *this,CUserCharacInfo *param_1,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_1c [20];
  
  if ((param_3 == -1) || (param_3 == 0)) {
    cVar1 = CUserCharacInfo::GetOneDayLetheFlag(param_1);
    if (cVar1 != NOT_USE_LETHE_STATE) {
      return 0;
    }
  }
  else {
    cVar1 = CUserCharacInfo::GetOneDayLetheFlag2ND(param_1);
    if (cVar1 != NOT_USE_LETHE_STATE) {
      return 0;
    }
  }
  _update(this,param_1,NOT_USE_LETHE_STATE,param_3);
  uVar2 = CUserCharacInfo::getCurCharacName(param_1);
  cMyTrace::cMyTrace(local_1c,
                     "bool CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND)"
                     ,0x69,0);
  cMyTrace::operator()(local_1c,"ONE_DAY_LETHE : SUCCESS_INIT_FOR_LEGACY_LETHE, char(%s)",uVar2);
  return 1;
}

```

---

## _removeInitSkill

```asm
// === 085c4a12 CPremiumLetheManager::_removeInitSkill  [0x085c4a12-0x85c4b2f] ===
 85c4a12:	55                   	push   %ebp
 85c4a13:	89 e5                	mov    %esp,%ebp
 85c4a15:	53                   	push   %ebx
 85c4a16:	83 ec 24             	sub    $0x24,%esp
 85c4a19:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4a1c:	89 04 24             	mov    %eax,(%esp)
 85c4a1f:	e8 18 a9 c6 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 85c4a24:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c4a27:	74 0f                	je     85c4a38 <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0x26>
 85c4a29:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4a2c:	89 04 24             	mov    %eax,(%esp)
 85c4a2f:	e8 08 a9 c6 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 85c4a34:	85 c0                	test   %eax,%eax
 85c4a36:	75 07                	jne    85c4a3f <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0x2d>
 85c4a38:	b8 01 00 00 00       	mov    $0x1,%eax
 85c4a3d:	eb 05                	jmp    85c4a44 <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0x32>
 85c4a3f:	b8 00 00 00 00       	mov    $0x0,%eax
 85c4a44:	84 c0                	test   %al,%al
 85c4a46:	74 13                	je     85c4a5b <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0x49>
 85c4a48:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4a4b:	89 04 24             	mov    %eax,(%esp)
 85c4a4e:	e8 dd a6 c6 ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 85c4a53:	83 c0 46             	add    $0x46,%eax
 85c4a56:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85c4a59:	eb 13                	jmp    85c4a6e <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0x5c>
 85c4a5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4a5e:	89 04 24             	mov    %eax,(%esp)
 85c4a61:	e8 ca a6 c6 ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 85c4a66:	05 de 01 00 00       	add    $0x1de,%eax
 85c4a6b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85c4a6e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85c4a75:	e9 9e 00 00 00       	jmp    85c4b18 <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0x106>
 85c4a7a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85c4a81:	eb 7f                	jmp    85c4b02 <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0xf0>
 85c4a83:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c4a86:	01 c0                	add    %eax,%eax
 85c4a88:	03 45 ec             	add    -0x14(%ebp),%eax
 85c4a8b:	0f b6 00             	movzbl (%eax),%eax
 85c4a8e:	84 c0                	test   %al,%al
 85c4a90:	74 6c                	je     85c4afe <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0xec>
 85c4a92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c4a95:	01 c0                	add    %eax,%eax
 85c4a97:	03 45 ec             	add    -0x14(%ebp),%eax
 85c4a9a:	0f b6 10             	movzbl (%eax),%edx
 85c4a9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c4aa0:	01 c0                	add    %eax,%eax
 85c4aa2:	03 45 10             	add    0x10(%ebp),%eax
 85c4aa5:	0f b6 00             	movzbl (%eax),%eax
 85c4aa8:	38 c2                	cmp    %al,%dl
 85c4aaa:	75 52                	jne    85c4afe <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0xec>
 85c4aac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c4aaf:	01 c0                	add    %eax,%eax
 85c4ab1:	03 45 10             	add    0x10(%ebp),%eax
 85c4ab4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85c4ab7:	01 d2                	add    %edx,%edx
 85c4ab9:	03 55 10             	add    0x10(%ebp),%edx
 85c4abc:	0f b6 52 01          	movzbl 0x1(%edx),%edx
 85c4ac0:	89 d1                	mov    %edx,%ecx
 85c4ac2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85c4ac5:	01 d2                	add    %edx,%edx
 85c4ac7:	03 55 ec             	add    -0x14(%ebp),%edx
 85c4aca:	0f b6 52 01          	movzbl 0x1(%edx),%edx
 85c4ace:	89 cb                	mov    %ecx,%ebx
 85c4ad0:	28 d3                	sub    %dl,%bl
 85c4ad2:	89 da                	mov    %ebx,%edx
 85c4ad4:	88 50 01             	mov    %dl,0x1(%eax)
 85c4ad7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c4ada:	01 c0                	add    %eax,%eax
 85c4adc:	03 45 10             	add    0x10(%ebp),%eax
 85c4adf:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85c4ae3:	84 c0                	test   %al,%al
 85c4ae5:	7f 17                	jg     85c4afe <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0xec>
 85c4ae7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c4aea:	01 c0                	add    %eax,%eax
 85c4aec:	03 45 10             	add    0x10(%ebp),%eax
 85c4aef:	c6 00 00             	movb   $0x0,(%eax)
 85c4af2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c4af5:	01 c0                	add    %eax,%eax
 85c4af7:	03 45 10             	add    0x10(%ebp),%eax
 85c4afa:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 85c4afe:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85c4b02:	81 7d f4 cb 00 00 00 	cmpl   $0xcb,-0xc(%ebp)
 85c4b09:	0f 9e c0             	setle  %al
 85c4b0c:	84 c0                	test   %al,%al
 85c4b0e:	0f 85 6f ff ff ff    	jne    85c4a83 <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0x71>
 85c4b14:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85c4b18:	81 7d f0 cb 00 00 00 	cmpl   $0xcb,-0x10(%ebp)
 85c4b1f:	0f 9e c0             	setle  %al
 85c4b22:	84 c0                	test   %al,%al
 85c4b24:	0f 85 50 ff ff ff    	jne    85c4a7a <_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill+0x68>
 85c4b2a:	83 c4 24             	add    $0x24,%esp
 85c4b2d:	5b                   	pop    %ebx
 85c4b2e:	5d                   	pop    %ebp
 85c4b2f:	c3                   	ret

```

```c
// CPremiumLetheManager::_removeInitSkill @ 0x85c4a12

/* CPremiumLetheManager::_removeInitSkill(CUser*, _Mastered_skill*) */

void __thiscall
CPremiumLetheManager::_removeInitSkill
          (CPremiumLetheManager *this,CUser *param_1,_Mastered_skill *param_2)

{
  bool bVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  
  iVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
  if (iVar2 != -1) {
    iVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_085c4a44;
    }
  }
  bVar1 = true;
LAB_085c4a44:
  if (bVar1) {
    local_18 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    local_18 = local_18 + 0x46;
  }
  else {
    local_18 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    local_18 = local_18 + 0x1de;
  }
  for (local_14 = 0; local_14 < 0xcc; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
      if (((*(char *)(local_14 * 2 + local_18) != '\0') &&
          (*(_Mastered_skill *)(local_14 * 2 + local_18) == param_2[local_10 * 2])) &&
         (param_2[local_10 * 2 + 1] =
               (_Mastered_skill)
               ((char)param_2[local_10 * 2 + 1] - *(char *)(local_14 * 2 + local_18 + 1)),
         (char)param_2[local_10 * 2 + 1] < '\x01')) {
        param_2[local_10 * 2] = (_Mastered_skill)0x0;
        param_2[local_10 * 2 + 1] = (_Mastered_skill)0x0;
      }
    }
  }
  return;
}

```

---

## _resetSkill

```asm
// === 085c40aa CPremiumLetheManager::_resetSkill  [0x085c40aa-0x85c421d] ===
 85c40aa:	55                   	push   %ebp
 85c40ab:	89 e5                	mov    %esp,%ebp
 85c40ad:	56                   	push   %esi
 85c40ae:	53                   	push   %ebx
 85c40af:	83 ec 30             	sub    $0x30,%esp
 85c40b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c40b5:	89 04 24             	mov    %eax,(%esp)
 85c40b8:	e8 7f b2 c6 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 85c40bd:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c40c0:	74 0f                	je     85c40d1 <_ZN20CPremiumLetheManager11_resetSkillEP5CUser+0x27>
 85c40c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c40c5:	89 04 24             	mov    %eax,(%esp)
 85c40c8:	e8 6f b2 c6 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 85c40cd:	85 c0                	test   %eax,%eax
 85c40cf:	75 07                	jne    85c40d8 <_ZN20CPremiumLetheManager11_resetSkillEP5CUser+0x2e>
 85c40d1:	b8 01 00 00 00       	mov    $0x1,%eax
 85c40d6:	eb 05                	jmp    85c40dd <_ZN20CPremiumLetheManager11_resetSkillEP5CUser+0x33>
 85c40d8:	b8 00 00 00 00       	mov    $0x0,%eax
 85c40dd:	84 c0                	test   %al,%al
 85c40df:	74 10                	je     85c40f1 <_ZN20CPremiumLetheManager11_resetSkillEP5CUser+0x47>
 85c40e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c40e4:	89 04 24             	mov    %eax,(%esp)
 85c40e7:	e8 a0 0a 00 00       	call   85c4b8c <_ZNK15CUserCharacInfo18GetOneDayLetheFlagEv>
 85c40ec:	88 45 f7             	mov    %al,-0x9(%ebp)
 85c40ef:	eb 0e                	jmp    85c40ff <_ZN20CPremiumLetheManager11_resetSkillEP5CUser+0x55>
 85c40f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c40f4:	89 04 24             	mov    %eax,(%esp)
 85c40f7:	e8 b4 0a 00 00       	call   85c4bb0 <_ZNK15CUserCharacInfo21GetOneDayLetheFlag2NDEv>
 85c40fc:	88 45 f7             	mov    %al,-0x9(%ebp)
 85c40ff:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 85c4106:	38 45 f7             	cmp    %al,-0x9(%ebp)
 85c4109:	0f 85 cf 00 00 00    	jne    85c41de <_ZN20CPremiumLetheManager11_resetSkillEP5CUser+0x134>
 85c410f:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 85c4116:	00 
 85c4117:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c411a:	89 04 24             	mov    %eax,(%esp)
 85c411d:	e8 ec 1e b2 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 85c4122:	83 f0 01             	xor    $0x1,%eax
 85c4125:	84 c0                	test   %al,%al
 85c4127:	0f 85 e9 00 00 00    	jne    85c4216 <_ZN20CPremiumLetheManager11_resetSkillEP5CUser+0x16c>
 85c412d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4130:	89 04 24             	mov    %eax,(%esp)
 85c4133:	e8 04 b2 c6 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 85c4138:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c413c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c4143:	00 
 85c4144:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4147:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c414b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c414e:	89 04 24             	mov    %eax,(%esp)
 85c4151:	e8 c8 00 00 00       	call   85c421e <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND>
 85c4156:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c4159:	89 04 24             	mov    %eax,(%esp)
 85c415c:	e8 eb 9b fc ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85c4161:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 85c4168:	00 
 85c4169:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c4170:	00 
 85c4171:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c4174:	89 04 24             	mov    %eax,(%esp)
 85c4177:	e8 80 77 b0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85c417c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c4183:	00 
 85c4184:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c4187:	89 04 24             	mov    %eax,(%esp)
 85c418a:	e8 91 77 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85c418f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c4196:	00 
 85c4197:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c419a:	89 04 24             	mov    %eax,(%esp)
 85c419d:	e8 b6 77 b0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85c41a2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c41a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c41a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c41ac:	89 04 24             	mov    %eax,(%esp)
 85c41af:	e8 06 44 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c41b4:	eb 1b                	jmp    85c41d1 <_ZN20CPremiumLetheManager11_resetSkillEP5CUser+0x127>
 85c41b6:	89 d3                	mov    %edx,%ebx
 85c41b8:	89 c6                	mov    %eax,%esi
 85c41ba:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c41bd:	89 04 24             	mov    %eax,(%esp)
 85c41c0:	e8 bb 9c fc ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85c41c5:	89 f0                	mov    %esi,%eax
 85c41c7:	89 da                	mov    %ebx,%edx
 85c41c9:	89 04 24             	mov    %eax,(%esp)
 85c41cc:	e8 7f f5 51 00       	call   8ae3750 <_Unwind_Resume>
 85c41d1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c41d4:	89 04 24             	mov    %eax,(%esp)
 85c41d7:	e8 a4 9c fc ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85c41dc:	eb 39                	jmp    85c4217 <_ZN20CPremiumLetheManager11_resetSkillEP5CUser+0x16d>
 85c41de:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c41e5:	00 
 85c41e6:	c7 44 24 08 93 00 00 	movl   $0x93,0x8(%esp)
 85c41ed:	00 
 85c41ee:	c7 44 24 04 20 cf cb 	movl   $0x8cbcf20,0x4(%esp)
 85c41f5:	08 
 85c41f6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85c41f9:	89 04 24             	mov    %eax,(%esp)
 85c41fc:	e8 17 b5 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c4201:	c7 44 24 04 30 c2 cb 	movl   $0x8cbc230,0x4(%esp)
 85c4208:	08 
 85c4209:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85c420c:	89 04 24             	mov    %eax,(%esp)
 85c420f:	e8 74 b5 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c4214:	eb 01                	jmp    85c4217 <_ZN20CPremiumLetheManager11_resetSkillEP5CUser+0x16d>
 85c4216:	90                   	nop
 85c4217:	83 c4 30             	add    $0x30,%esp
 85c421a:	5b                   	pop    %ebx
 85c421b:	5e                   	pop    %esi
 85c421c:	5d                   	pop    %ebp
 85c421d:	c3                   	ret

```

```c
// CPremiumLetheManager::_resetSkill @ 0x85c40aa

/* CPremiumLetheManager::_resetSkill(CUser*) */

void __thiscall CPremiumLetheManager::_resetSkill(CPremiumLetheManager *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  PacketGuard local_2c [12];
  cMyTrace local_20 [19];
  char local_d;
  
  iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
  if (iVar3 != -1) {
    iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_085c40dd;
    }
  }
  bVar1 = true;
LAB_085c40dd:
  if (bVar1) {
    local_d = CUserCharacInfo::GetOneDayLetheFlag((CUserCharacInfo *)param_1);
  }
  else {
    local_d = CUserCharacInfo::GetOneDayLetheFlag2ND((CUserCharacInfo *)param_1);
  }
  if (local_d == USE_LETHE_STATE) {
    cVar2 = CUser::isAffectedPremium(param_1,0x21);
    if (cVar2 == '\x01') {
      uVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
      InitSkill(this,param_1,1,uVar4);
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 085c4177 to 085c41b3 has its CatchHandler @ 085c41b6 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xd5);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send(param_1,local_2c);
      PacketGuard::~PacketGuard(local_2c);
    }
  }
  else {
    cMyTrace::cMyTrace(local_20,"void CPremiumLetheManager::_resetSkill(CUser*)",0x93,0);
    cMyTrace::operator()(local_20,"ONE_DAY_LETHE : CAN\'T USE INIT STATE");
  }
  return;
}

```

---

## _update

```asm
// === 085c4842 CPremiumLetheManager::_update  [0x085c4842-0x85c4a11] ===
 85c4842:	55                   	push   %ebp
 85c4843:	89 e5                	mov    %esp,%ebp
 85c4845:	56                   	push   %esi
 85c4846:	53                   	push   %ebx
 85c4847:	83 ec 30             	sub    $0x30,%esp
 85c484a:	8b 45 10             	mov    0x10(%ebp),%eax
 85c484d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 85c4850:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85c4855:	c7 44 24 08 25 01 00 	movl   $0x125,0x8(%esp)
 85c485c:	00 
 85c485d:	c7 44 24 04 99 c2 cb 	movl   $0x8cbc299,0x4(%esp)
 85c4864:	08 
 85c4865:	89 04 24             	mov    %eax,(%esp)
 85c4868:	e8 19 b2 cc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85c486d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c4874:	00 
 85c4875:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c4879:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c487c:	89 04 24             	mov    %eax,(%esp)
 85c487f:	e8 a2 43 b0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85c4884:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c4887:	89 04 24             	mov    %eax,(%esp)
 85c488a:	e8 b7 43 b0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85c488f:	c7 44 24 04 5c 01 00 	movl   $0x15c,0x4(%esp)
 85c4896:	00 
 85c4897:	89 04 24             	mov    %eax,(%esp)
 85c489a:	e8 b7 43 b0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85c489f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c48a2:	89 04 24             	mov    %eax,(%esp)
 85c48a5:	e8 ec 43 b0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85c48aa:	89 c3                	mov    %eax,%ebx
 85c48ac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c48af:	89 04 24             	mov    %eax,(%esp)
 85c48b2:	e8 8f 43 b0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85c48b7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c48bb:	89 04 24             	mov    %eax,(%esp)
 85c48be:	e8 93 43 b0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85c48c3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c48c6:	89 04 24             	mov    %eax,(%esp)
 85c48c9:	e8 80 43 b0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85c48ce:	89 04 24             	mov    %eax,(%esp)
 85c48d1:	e8 86 cd f2 ff       	call   84f165c <_ZN12CStreamGuard11GetInBufferI35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADEEPT_v>
 85c48d6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c48d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c48dc:	89 04 24             	mov    %eax,(%esp)
 85c48df:	e8 8a 5a b1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85c48e4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85c48e7:	89 02                	mov    %eax,(%edx)
 85c48e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c48ec:	89 04 24             	mov    %eax,(%esp)
 85c48ef:	e8 5a 73 b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c48f4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85c48f7:	89 42 04             	mov    %eax,0x4(%edx)
 85c48fa:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 85c4901:	38 45 e4             	cmp    %al,-0x1c(%ebp)
 85c4904:	74 17                	je     85c491d <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND+0xdb>
 85c4906:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 85c490d:	38 45 e4             	cmp    %al,-0x1c(%ebp)
 85c4910:	74 0b                	je     85c491d <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND+0xdb>
 85c4912:	0f b6 05 63 bc 3a 09 	movzbl 0x93abc63,%eax
 85c4919:	84 c0                	test   %al,%al
 85c491b:	74 67                	je     85c4984 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND+0x142>
 85c491d:	8b 45 14             	mov    0x14(%ebp),%eax
 85c4920:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c4923:	74 07                	je     85c492c <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND+0xea>
 85c4925:	8b 45 14             	mov    0x14(%ebp),%eax
 85c4928:	85 c0                	test   %eax,%eax
 85c492a:	75 2b                	jne    85c4957 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND+0x115>
 85c492c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c492f:	89 04 24             	mov    %eax,(%esp)
 85c4932:	e8 f9 a7 c6 ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 85c4937:	8d 50 46             	lea    0x46(%eax),%edx
 85c493a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c493d:	83 c0 0d             	add    $0xd,%eax
 85c4940:	c7 44 24 08 98 01 00 	movl   $0x198,0x8(%esp)
 85c4947:	00 
 85c4948:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c494c:	89 04 24             	mov    %eax,(%esp)
 85c494f:	e8 4c 8f ab ff       	call   807d8a0 <memcpy@plt>
 85c4954:	90                   	nop
 85c4955:	eb 4b                	jmp    85c49a2 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND+0x160>
 85c4957:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c495a:	89 04 24             	mov    %eax,(%esp)
 85c495d:	e8 ce a7 c6 ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 85c4962:	8d 90 de 01 00 00    	lea    0x1de(%eax),%edx
 85c4968:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c496b:	83 c0 0d             	add    $0xd,%eax
 85c496e:	c7 44 24 08 98 01 00 	movl   $0x198,0x8(%esp)
 85c4975:	00 
 85c4976:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c497a:	89 04 24             	mov    %eax,(%esp)
 85c497d:	e8 1e 8f ab ff       	call   807d8a0 <memcpy@plt>
 85c4982:	eb 1e                	jmp    85c49a2 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND+0x160>
 85c4984:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c4987:	83 c0 0d             	add    $0xd,%eax
 85c498a:	c7 44 24 08 98 01 00 	movl   $0x198,0x8(%esp)
 85c4991:	00 
 85c4992:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85c4999:	00 
 85c499a:	89 04 24             	mov    %eax,(%esp)
 85c499d:	e8 1e 93 ab ff       	call   807dcc0 <memset@plt>
 85c49a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c49a5:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 85c49a9:	88 50 0c             	mov    %dl,0xc(%eax)
 85c49ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c49af:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 85c49b3:	88 90 a5 01 00 00    	mov    %dl,0x1a5(%eax)
 85c49b9:	8b 45 14             	mov    0x14(%ebp),%eax
 85c49bc:	89 c2                	mov    %eax,%edx
 85c49be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c49c1:	88 90 a6 01 00 00    	mov    %dl,0x1a6(%eax)
 85c49c7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85c49cc:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85c49cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c49d3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85c49da:	00 
 85c49db:	89 04 24             	mov    %eax,(%esp)
 85c49de:	e8 fb c5 fa ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85c49e3:	eb 1b                	jmp    85c4a00 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND+0x1be>
 85c49e5:	89 d3                	mov    %edx,%ebx
 85c49e7:	89 c6                	mov    %eax,%esi
 85c49e9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c49ec:	89 04 24             	mov    %eax,(%esp)
 85c49ef:	e8 de 7e 05 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85c49f4:	89 f0                	mov    %esi,%eax
 85c49f6:	89 da                	mov    %ebx,%edx
 85c49f8:	89 04 24             	mov    %eax,(%esp)
 85c49fb:	e8 50 ed 51 00       	call   8ae3750 <_Unwind_Resume>
 85c4a00:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c4a03:	89 04 24             	mov    %eax,(%esp)
 85c4a06:	e8 c7 7e 05 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85c4a0b:	83 c4 30             	add    $0x30,%esp
 85c4a0e:	5b                   	pop    %ebx
 85c4a0f:	5e                   	pop    %esi
 85c4a10:	5d                   	pop    %ebp
 85c4a11:	c3                   	ret

```

```c
// CPremiumLetheManager::_update @ 0x85c4842

/* CPremiumLetheManager::_update(CUser*, unsigned char, ENUM_SKILL_TREE_KIND) */

void __thiscall
CPremiumLetheManager::_update
          (undefined4 this,CUser *param_1,SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD param_2,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"PremiumLetheManager.cpp",0x125);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 085c489a to 085c49e2 has its CatchHandler @ 085c49e5 */
  CStreamGuard::operator<<(pCVar2,0x15c);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>(pCVar2);
  uVar4 = CUser::get_acc_id(param_1);
  *(undefined4 *)local_10 = uVar4;
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_10 + 4) = uVar4;
  if (((param_2 == USE_LETHE_STATE) || (param_2 == SKILL_CONFIRM_STATE)) ||
     (INIT_LETHE_SKILL != '\0')) {
    if ((param_4 == -1) || (param_4 == 0)) {
      iVar3 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      memcpy(local_10 + 0xd,(void *)(iVar3 + 0x46),0x198);
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      memcpy(local_10 + 0xd,(void *)(iVar3 + 0x1de),0x198);
    }
  }
  else {
    memset(local_10 + 0xd,0,0x198);
  }
  local_10[0xc] = param_2;
  local_10[0x1a5] = param_2;
  local_10[0x1a6] = SUB41(param_4,0);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## ~CPremiumLetheManager

```asm
// === 085c3d0e CPremiumLetheManager::~CPremiumLetheManager  [0x085c3d0e-0x85c3d13] ===
 85c3d0e:	55                   	push   %ebp
 85c3d0f:	89 e5                	mov    %esp,%ebp
 85c3d11:	5d                   	pop    %ebp
 85c3d12:	c3                   	ret
 85c3d13:	90                   	nop

```

```c
// CPremiumLetheManager::~CPremiumLetheManager @ 0x85c3d0e

/* CPremiumLetheManager::~CPremiumLetheManager() */

void __thiscall CPremiumLetheManager::~CPremiumLetheManager(CPremiumLetheManager *this)

{
  return;
}

```

