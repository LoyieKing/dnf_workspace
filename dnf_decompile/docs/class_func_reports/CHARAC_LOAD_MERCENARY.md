# CHARAC_LOAD_MERCENARY

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CalcItemDropRate

```asm
// === 081b2d6a CHARAC_LOAD_MERCENARY::CalcItemDropRate  [0x081b2d6a-0x81b2e85] ===
 81b2d6a:	55                   	push   %ebp
 81b2d6b:	89 e5                	mov    %esp,%ebp
 81b2d6d:	83 ec 68             	sub    $0x68,%esp
 81b2d70:	e8 26 94 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2d75:	05 e4 a8 00 00       	add    $0xa8e4,%eax
 81b2d7a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81b2d7d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2d80:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81b2d84:	0f bf d0             	movswl %ax,%edx
 81b2d87:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81b2d8a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 81b2d8d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81b2d91:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b2d95:	89 04 24             	mov    %eax,(%esp)
 81b2d98:	e8 c0 1b 00 00       	call   81b495d <_Z22Find_max_value_lower_NISt4pairIiiEET_iRKSt6vectorIS0_IiS2_ESaIS4_EE>
 81b2d9d:	83 ec 04             	sub    $0x4,%esp
 81b2da0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81b2da3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b2da6:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2da9:	89 04 24             	mov    %eax,(%esp)
 81b2dac:	e8 6d fe ff ff       	call   81b2c1e <_ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv>
 81b2db1:	d9 5d e8             	fstps  -0x18(%ebp)
 81b2db4:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2db7:	89 04 24             	mov    %eax,(%esp)
 81b2dba:	e8 d5 fe ff ff       	call   81b2c94 <_ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv>
 81b2dbf:	d9 5d ec             	fstps  -0x14(%ebp)
 81b2dc2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b2dc9:	00 
 81b2dca:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2dcd:	89 04 24             	mov    %eax,(%esp)
 81b2dd0:	e8 5d 01 00 00       	call   81b2f32 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb>
 81b2dd5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81b2dd8:	db 45 e4             	fildl  -0x1c(%ebp)
 81b2ddb:	d8 4d e8             	fmuls  -0x18(%ebp)
 81b2dde:	d8 4d ec             	fmuls  -0x14(%ebp)
 81b2de1:	db 45 f0             	fildl  -0x10(%ebp)
 81b2de4:	de c9                	fmulp  %st,%st(1)
 81b2de6:	d9 7d d6             	fnstcw -0x2a(%ebp)
 81b2de9:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 81b2ded:	b4 0c                	mov    $0xc,%ah
 81b2def:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 81b2df3:	d9 6d d4             	fldcw  -0x2c(%ebp)
 81b2df6:	db 5d f4             	fistpl -0xc(%ebp)
 81b2df9:	d9 6d d6             	fldcw  -0x2a(%ebp)
 81b2dfc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81b2e00:	74 16                	je     81b2e18 <_ZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUser+0xae>
 81b2e02:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b2e05:	89 04 24             	mov    %eax,(%esp)
 81b2e08:	e8 8f 2a f9 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 81b2e0d:	84 c0                	test   %al,%al
 81b2e0f:	74 07                	je     81b2e18 <_ZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUser+0xae>
 81b2e11:	b8 01 00 00 00       	mov    $0x1,%eax
 81b2e16:	eb 05                	jmp    81b2e1d <_ZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUser+0xb3>
 81b2e18:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2e1d:	84 c0                	test   %al,%al
 81b2e1f:	74 53                	je     81b2e74 <_ZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUser+0x10a>
 81b2e21:	d9 45 ec             	flds   -0x14(%ebp)
 81b2e24:	d9 45 e8             	flds   -0x18(%ebp)
 81b2e27:	d9 c9                	fxch   %st(1)
 81b2e29:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b2e2c:	89 44 24 20          	mov    %eax,0x20(%esp)
 81b2e30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81b2e33:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81b2e37:	dd 5c 24 14          	fstpl  0x14(%esp)
 81b2e3b:	dd 5c 24 0c          	fstpl  0xc(%esp)
 81b2e3f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b2e42:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b2e46:	c7 44 24 04 10 7c bb 	movl   $0x8bb7c10,0x4(%esp)
 81b2e4d:	08 
 81b2e4e:	c7 04 24 e0 9f 40 09 	movl   $0x9409fe0,(%esp)
 81b2e55:	e8 e6 b5 ec ff       	call   807e440 <sprintf@plt>
 81b2e5a:	c7 44 24 08 e0 9f 40 	movl   $0x9409fe0,0x8(%esp)
 81b2e61:	09 
 81b2e62:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b2e65:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b2e69:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2e6c:	89 04 24             	mov    %eax,(%esp)
 81b2e6f:	e8 1c 13 00 00       	call   81b4190 <_ZNK21CHARAC_LOAD_MERCENARY18SendMessageToCUserEP5CUserPc>
 81b2e74:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81b2e78:	7f 07                	jg     81b2e81 <_ZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUser+0x117>
 81b2e7a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81b2e7f:	eb 03                	jmp    81b2e84 <_ZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUser+0x11a>
 81b2e81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b2e84:	c9                   	leave
 81b2e85:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::CalcItemDropRate @ 0x81b2d6a

/* CHARAC_LOAD_MERCENARY::CalcItemDropRate(CUser*) const */

int __thiscall CHARAC_LOAD_MERCENARY::CalcItemDropRate(CHARAC_LOAD_MERCENARY *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  longdouble lVar3;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  
  local_24 = G_CDataManager();
  local_24 = local_24 + 0xa8e4;
  Find_max_value_lower_N<std::pair<int,int>>((int)local_2c,(vector *)(int)*(short *)(this + 4));
  local_20 = local_28;
  lVar3 = (longdouble)GetPeriodBonus(this);
  local_1c = (float)lVar3;
  lVar3 = (longdouble)GetAvatarBonus(this);
  local_18 = (float)lVar3;
  local_14 = GetCompetitionPeriodTerm(this,(bool *)0x0);
  local_10 = (int)ROUND((float)local_14 * (float)local_20 * local_1c * local_18);
  if ((param_1 == (CUser *)0x0) || (cVar2 = CUser::isGMUser(param_1), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    sprintf(CalcItemDropRate(CUser*)::buffer,
            "\nbase:%d * period:%.2f * avatar:%.2f * term:%d = %d\n",local_20,(double)local_1c,
            (double)local_18,local_14,local_10);
    SendMessageToCUser((CUser *)this,(char *)param_1);
  }
  if (local_10 < 1) {
    local_10 = -1;
  }
  return local_10;
}

```

---

## CheckCompetitionAreaIndex

```asm
// === 081b2b34 CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex  [0x081b2b34-0x81b2bc3] ===
 81b2b34:	55                   	push   %ebp
 81b2b35:	89 e5                	mov    %esp,%ebp
 81b2b37:	53                   	push   %ebx
 81b2b38:	83 ec 24             	sub    $0x24,%esp
 81b2b3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b2b3e:	88 45 f4             	mov    %al,-0xc(%ebp)
 81b2b41:	e8 55 96 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2b46:	05 1c a9 00 00       	add    $0xa91c,%eax
 81b2b4b:	89 04 24             	mov    %eax,(%esp)
 81b2b4e:	e8 95 1c 00 00       	call   81b47e8 <_ZNKSt6vectorI26stMercenaryCompetitionAreaSaIS0_EE5emptyEv>
 81b2b53:	84 c0                	test   %al,%al
 81b2b55:	75 1a                	jne    81b2b71 <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3d>
 81b2b57:	e8 3f 96 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2b5c:	05 1c a9 00 00       	add    $0xa91c,%eax
 81b2b61:	89 04 24             	mov    %eax,(%esp)
 81b2b64:	e8 c3 1c 00 00       	call   81b482c <_ZNKSt6vectorI26stMercenaryCompetitionAreaSaIS0_EE4sizeEv>
 81b2b69:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 81b2b6d:	39 d0                	cmp    %edx,%eax
 81b2b6f:	73 07                	jae    81b2b78 <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x44>
 81b2b71:	b8 01 00 00 00       	mov    $0x1,%eax
 81b2b76:	eb 05                	jmp    81b2b7d <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x49>
 81b2b78:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2b7d:	84 c0                	test   %al,%al
 81b2b7f:	74 07                	je     81b2b88 <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x54>
 81b2b81:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2b86:	eb 35                	jmp    81b2bbd <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x89>
 81b2b88:	0f be 5d f4          	movsbl -0xc(%ebp),%ebx
 81b2b8c:	e8 0a 96 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2b91:	05 1c a9 00 00       	add    $0xa91c,%eax
 81b2b96:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b2b9a:	89 04 24             	mov    %eax,(%esp)
 81b2b9d:	e8 ac 1c 00 00       	call   81b484e <_ZNSt6vectorI26stMercenaryCompetitionAreaSaIS0_EEixEj>
 81b2ba2:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 81b2ba6:	98                   	cwtl
 81b2ba7:	3b 45 10             	cmp    0x10(%ebp),%eax
 81b2baa:	0f 9f c0             	setg   %al
 81b2bad:	84 c0                	test   %al,%al
 81b2baf:	74 07                	je     81b2bb8 <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x84>
 81b2bb1:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2bb6:	eb 05                	jmp    81b2bbd <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x89>
 81b2bb8:	b8 01 00 00 00       	mov    $0x1,%eax
 81b2bbd:	83 c4 24             	add    $0x24,%esp
 81b2bc0:	5b                   	pop    %ebx
 81b2bc1:	5d                   	pop    %ebp
 81b2bc2:	c3                   	ret
 81b2bc3:	90                   	nop

```

```c
// CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex @ 0x81b2b34

/* CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const */

undefined4 __thiscall
CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex
          (CHARAC_LOAD_MERCENARY *this,char param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  G_CDataManager();
  cVar2 = std::vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>::empty
                    ();
  if (cVar2 == '\0') {
    iVar3 = G_CDataManager();
    uVar4 = std::vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>::size
                      ((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                        *)(iVar3 + 0xa91c));
    if ((uint)(int)param_1 <= uVar4) {
      bVar1 = false;
      goto LAB_081b2b7d;
    }
  }
  bVar1 = true;
LAB_081b2b7d:
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    iVar3 = G_CDataManager();
    iVar3 = std::vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>::
            operator[]((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                        *)(iVar3 + 0xa91c),(int)param_1);
    if (param_2 < *(short *)(iVar3 + 0x14)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}

```

---

## CheckCompetitionPeriodIndex

```asm
// === 081b2bc4 CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex  [0x081b2bc4-0x81b2c1d] ===
 81b2bc4:	55                   	push   %ebp
 81b2bc5:	89 e5                	mov    %esp,%ebp
 81b2bc7:	83 ec 28             	sub    $0x28,%esp
 81b2bca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b2bcd:	88 45 f4             	mov    %al,-0xc(%ebp)
 81b2bd0:	e8 c6 95 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2bd5:	05 f0 a8 00 00       	add    $0xa8f0,%eax
 81b2bda:	89 04 24             	mov    %eax,(%esp)
 81b2bdd:	e8 86 1c 00 00       	call   81b4868 <_ZNKSt6vectorISt4pairIifESaIS1_EE5emptyEv>
 81b2be2:	84 c0                	test   %al,%al
 81b2be4:	75 1a                	jne    81b2c00 <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc+0x3c>
 81b2be6:	e8 b0 95 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2beb:	05 f0 a8 00 00       	add    $0xa8f0,%eax
 81b2bf0:	89 04 24             	mov    %eax,(%esp)
 81b2bf3:	e8 b4 1c 00 00       	call   81b48ac <_ZNKSt6vectorISt4pairIifESaIS1_EE4sizeEv>
 81b2bf8:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 81b2bfc:	39 d0                	cmp    %edx,%eax
 81b2bfe:	73 07                	jae    81b2c07 <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc+0x43>
 81b2c00:	b8 01 00 00 00       	mov    $0x1,%eax
 81b2c05:	eb 05                	jmp    81b2c0c <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc+0x48>
 81b2c07:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2c0c:	84 c0                	test   %al,%al
 81b2c0e:	74 07                	je     81b2c17 <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc+0x53>
 81b2c10:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2c15:	eb 05                	jmp    81b2c1c <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc+0x58>
 81b2c17:	b8 01 00 00 00       	mov    $0x1,%eax
 81b2c1c:	c9                   	leave
 81b2c1d:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex @ 0x81b2bc4

/* CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex(char) const */

bool __thiscall
CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex(CHARAC_LOAD_MERCENARY *this,char param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  G_CDataManager();
  cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::empty();
  if (cVar2 == '\0') {
    iVar3 = G_CDataManager();
    uVar4 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size
                      ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                       (iVar3 + 0xa8f0));
    if ((uint)(int)param_1 <= uVar4) {
      bVar1 = false;
      goto LAB_081b2c0c;
    }
  }
  bVar1 = true;
LAB_081b2c0c:
  return !bVar1;
}

```

---

## Competition

```asm
// === 081b3814 CHARAC_LOAD_MERCENARY::Competition  [0x081b3814-0x81b3b67] ===
 81b3814:	55                   	push   %ebp
 81b3815:	89 e5                	mov    %esp,%ebp
 81b3817:	57                   	push   %edi
 81b3818:	56                   	push   %esi
 81b3819:	53                   	push   %ebx
 81b381a:	83 ec 7c             	sub    $0x7c,%esp
 81b381d:	8b 55 10             	mov    0x10(%ebp),%edx
 81b3820:	8b 45 14             	mov    0x14(%ebp),%eax
 81b3823:	88 55 b4             	mov    %dl,-0x4c(%ebp)
 81b3826:	88 45 b0             	mov    %al,-0x50(%ebp)
 81b3829:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81b382d:	75 0a                	jne    81b3839 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x25>
 81b382f:	b8 00 00 00 00       	mov    $0x0,%eax
 81b3834:	e9 27 03 00 00       	jmp    81b3b60 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x34c>
 81b3839:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81b383c:	89 04 24             	mov    %eax,(%esp)
 81b383f:	e8 64 0f 00 00       	call   81b47a8 <_ZN25competition_reward_resultC1Ev>
 81b3844:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81b3847:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b384b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b384e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3852:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3855:	89 04 24             	mov    %eax,(%esp)
 81b3858:	e8 0b 03 00 00       	call   81b3b68 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result>
 81b385d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3860:	89 04 24             	mov    %eax,(%esp)
 81b3863:	e8 1e f6 ff ff       	call   81b2e86 <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv>
 81b3868:	85 c0                	test   %eax,%eax
 81b386a:	0f 95 c0             	setne  %al
 81b386d:	84 c0                	test   %al,%al
 81b386f:	74 0a                	je     81b387b <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x67>
 81b3871:	b8 00 00 00 00       	mov    $0x0,%eax
 81b3876:	e9 e5 02 00 00       	jmp    81b3b60 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x34c>
 81b387b:	0f be 45 b4          	movsbl -0x4c(%ebp),%eax
 81b387f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3883:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3886:	89 04 24             	mov    %eax,(%esp)
 81b3889:	e8 36 f3 ff ff       	call   81b2bc4 <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc>
 81b388e:	83 f0 01             	xor    $0x1,%eax
 81b3891:	84 c0                	test   %al,%al
 81b3893:	74 0a                	je     81b389f <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x8b>
 81b3895:	b8 00 00 00 00       	mov    $0x0,%eax
 81b389a:	e9 c1 02 00 00       	jmp    81b3b60 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x34c>
 81b389f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b38a2:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81b38a6:	0f bf d0             	movswl %ax,%edx
 81b38a9:	0f be 45 b0          	movsbl -0x50(%ebp),%eax
 81b38ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b38b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b38b5:	8b 45 08             	mov    0x8(%ebp),%eax
 81b38b8:	89 04 24             	mov    %eax,(%esp)
 81b38bb:	e8 74 f2 ff ff       	call   81b2b34 <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci>
 81b38c0:	83 f0 01             	xor    $0x1,%eax
 81b38c3:	84 c0                	test   %al,%al
 81b38c5:	74 0a                	je     81b38d1 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0xbd>
 81b38c7:	b8 00 00 00 00       	mov    $0x0,%eax
 81b38cc:	e9 8f 02 00 00       	jmp    81b3b60 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x34c>
 81b38d1:	0f be 5d b0          	movsbl -0x50(%ebp),%ebx
 81b38d5:	e8 c1 88 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b38da:	05 1c a9 00 00       	add    $0xa91c,%eax
 81b38df:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b38e3:	89 04 24             	mov    %eax,(%esp)
 81b38e6:	e8 63 0f 00 00       	call   81b484e <_ZNSt6vectorI26stMercenaryCompetitionAreaSaIS0_EEixEj>
 81b38eb:	0f b7 00             	movzwl (%eax),%eax
 81b38ee:	66 83 f8 ff          	cmp    $0xffff,%ax
 81b38f2:	0f 94 c0             	sete   %al
 81b38f5:	84 c0                	test   %al,%al
 81b38f7:	0f 84 88 01 00 00    	je     81b3a85 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x271>
 81b38fd:	b8 98 7e 40 09       	mov    $0x9407e98,%eax
 81b3902:	0f b6 00             	movzbl (%eax),%eax
 81b3905:	84 c0                	test   %al,%al
 81b3907:	75 54                	jne    81b395d <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x149>
 81b3909:	c7 04 24 98 7e 40 09 	movl   $0x9407e98,(%esp)
 81b3910:	e8 1b 1a 57 00       	call   8725330 <__cxa_guard_acquire>
 81b3915:	85 c0                	test   %eax,%eax
 81b3917:	0f 95 c0             	setne  %al
 81b391a:	84 c0                	test   %al,%al
 81b391c:	74 3f                	je     81b395d <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x149>
 81b391e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b3923:	c7 04 24 20 80 40 09 	movl   $0x9408020,(%esp)
 81b392a:	e8 19 66 f2 ff       	call   80d9f48 <_ZN7CMTRandC1Ev>
 81b392f:	c7 04 24 98 7e 40 09 	movl   $0x9407e98,(%esp)
 81b3936:	e8 15 19 57 00       	call   8725250 <__cxa_guard_release>
 81b393b:	eb 20                	jmp    81b395d <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x149>
 81b393d:	89 d6                	mov    %edx,%esi
 81b393f:	89 c7                	mov    %eax,%edi
 81b3941:	84 db                	test   %bl,%bl
 81b3943:	75 0c                	jne    81b3951 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x13d>
 81b3945:	c7 04 24 98 7e 40 09 	movl   $0x9407e98,(%esp)
 81b394c:	e8 6f 19 57 00       	call   87252c0 <__cxa_guard_abort>
 81b3951:	89 f8                	mov    %edi,%eax
 81b3953:	89 f2                	mov    %esi,%edx
 81b3955:	89 04 24             	mov    %eax,(%esp)
 81b3958:	e8 f3 fd 92 00       	call   8ae3750 <_Unwind_Resume>
 81b395d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81b3960:	89 04 24             	mov    %eax,(%esp)
 81b3963:	e8 44 a8 ed ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 81b3968:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 81b396f:	eb 58                	jmp    81b39c9 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x1b5>
 81b3971:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81b3974:	89 c3                	mov    %eax,%ebx
 81b3976:	e8 20 88 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b397b:	05 1c a9 00 00       	add    $0xa91c,%eax
 81b3980:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b3984:	89 04 24             	mov    %eax,(%esp)
 81b3987:	e8 c2 0e 00 00       	call   81b484e <_ZNSt6vectorI26stMercenaryCompetitionAreaSaIS0_EEixEj>
 81b398c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b398f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b3992:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 81b3996:	66 85 c0             	test   %ax,%ax
 81b3999:	74 25                	je     81b39c0 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x1ac>
 81b399b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b399e:	0f b7 50 14          	movzwl 0x14(%eax),%edx
 81b39a2:	8b 45 08             	mov    0x8(%ebp),%eax
 81b39a5:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81b39a9:	66 39 c2             	cmp    %ax,%dx
 81b39ac:	7f 12                	jg     81b39c0 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x1ac>
 81b39ae:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81b39b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b39b5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81b39b8:	89 04 24             	mov    %eax,(%esp)
 81b39bb:	e8 66 d7 f5 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 81b39c0:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81b39c3:	83 c0 01             	add    $0x1,%eax
 81b39c6:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81b39c9:	e8 cd 87 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b39ce:	05 1c a9 00 00       	add    $0xa91c,%eax
 81b39d3:	89 04 24             	mov    %eax,(%esp)
 81b39d6:	e8 51 0e 00 00       	call   81b482c <_ZNKSt6vectorI26stMercenaryCompetitionAreaSaIS0_EE4sizeEv>
 81b39db:	89 c2                	mov    %eax,%edx
 81b39dd:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81b39e0:	39 c2                	cmp    %eax,%edx
 81b39e2:	0f 9f c0             	setg   %al
 81b39e5:	84 c0                	test   %al,%al
 81b39e7:	75 88                	jne    81b3971 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x15d>
 81b39e9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81b39ec:	89 04 24             	mov    %eax,(%esp)
 81b39ef:	e8 cc a7 ed ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 81b39f4:	83 e8 01             	sub    $0x1,%eax
 81b39f7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81b39fa:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81b39fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3a01:	c7 04 24 20 80 40 09 	movl   $0x9408020,(%esp)
 81b3a08:	e8 b1 80 f1 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81b3a0d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81b3a10:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81b3a13:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3a17:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81b3a1a:	89 04 24             	mov    %eax,(%esp)
 81b3a1d:	e8 ba a7 ed ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81b3a22:	8b 00                	mov    (%eax),%eax
 81b3a24:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81b3a27:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3a2a:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81b3a2e:	0f bf d0             	movswl %ax,%edx
 81b3a31:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81b3a34:	0f be c0             	movsbl %al,%eax
 81b3a37:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b3a3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3a3f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3a42:	89 04 24             	mov    %eax,(%esp)
 81b3a45:	e8 ea f0 ff ff       	call   81b2b34 <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci>
 81b3a4a:	83 f0 01             	xor    $0x1,%eax
 81b3a4d:	84 c0                	test   %al,%al
 81b3a4f:	74 06                	je     81b3a57 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x243>
 81b3a51:	c6 45 b0 00          	movb   $0x0,-0x50(%ebp)
 81b3a55:	eb 23                	jmp    81b3a7a <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x266>
 81b3a57:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81b3a5a:	88 45 b0             	mov    %al,-0x50(%ebp)
 81b3a5d:	eb 1b                	jmp    81b3a7a <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x266>
 81b3a5f:	89 d3                	mov    %edx,%ebx
 81b3a61:	89 c6                	mov    %eax,%esi
 81b3a63:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81b3a66:	89 04 24             	mov    %eax,(%esp)
 81b3a69:	e8 6c 03 ed ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81b3a6e:	89 f0                	mov    %esi,%eax
 81b3a70:	89 da                	mov    %ebx,%edx
 81b3a72:	89 04 24             	mov    %eax,(%esp)
 81b3a75:	e8 d6 fc 92 00       	call   8ae3750 <_Unwind_Resume>
 81b3a7a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81b3a7d:	89 04 24             	mov    %eax,(%esp)
 81b3a80:	e8 55 03 ed ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81b3a85:	0f be 45 b4          	movsbl -0x4c(%ebp),%eax
 81b3a89:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3a8d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3a90:	89 04 24             	mov    %eax,(%esp)
 81b3a93:	e8 3a f4 ff ff       	call   81b2ed2 <_ZNK21CHARAC_LOAD_MERCENARY26GetCompetitionPeriodSecondEc>
 81b3a98:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81b3a9b:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81b3a9f:	75 0a                	jne    81b3aab <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x297>
 81b3aa1:	b8 00 00 00 00       	mov    $0x0,%eax
 81b3aa6:	e9 b5 00 00 00       	jmp    81b3b60 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc+0x34c>
 81b3aab:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3aae:	89 04 24             	mov    %eax,(%esp)
 81b3ab1:	e8 12 0d 00 00       	call   81b47c8 <_ZN21CHARAC_LOAD_MERCENARY5alterEv>
 81b3ab6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81b3abd:	e8 dc 81 f1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81b3ac2:	89 c2                	mov    %eax,%edx
 81b3ac4:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3ac7:	89 50 28             	mov    %edx,0x28(%eax)
 81b3aca:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3acd:	8b 40 28             	mov    0x28(%eax),%eax
 81b3ad0:	89 c2                	mov    %eax,%edx
 81b3ad2:	03 55 d8             	add    -0x28(%ebp),%edx
 81b3ad5:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3ad8:	89 50 2c             	mov    %edx,0x2c(%eax)
 81b3adb:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3ade:	0f b6 55 b0          	movzbl -0x50(%ebp),%edx
 81b3ae2:	88 50 30             	mov    %dl,0x30(%eax)
 81b3ae5:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3ae8:	0f b6 55 b4          	movzbl -0x4c(%ebp),%edx
 81b3aec:	88 50 31             	mov    %dl,0x31(%eax)
 81b3aef:	0f be 45 b0          	movsbl -0x50(%ebp),%eax
 81b3af3:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81b3af6:	0f be 55 b4          	movsbl -0x4c(%ebp),%edx
 81b3afa:	89 55 ac             	mov    %edx,-0x54(%ebp)
 81b3afd:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3b00:	8b 78 2c             	mov    0x2c(%eax),%edi
 81b3b03:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3b06:	8b 70 28             	mov    0x28(%eax),%esi
 81b3b09:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3b0c:	8b 18                	mov    (%eax),%ebx
 81b3b0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b3b11:	89 04 24             	mov    %eax,(%esp)
 81b3b14:	e8 55 68 f2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81b3b19:	c7 44 24 24 ff ff ff 	movl   $0xffffffff,0x24(%esp)
 81b3b20:	ff 
 81b3b21:	c7 44 24 20 ff ff ff 	movl   $0xffffffff,0x20(%esp)
 81b3b28:	ff 
 81b3b29:	c7 44 24 1c ff ff ff 	movl   $0xffffffff,0x1c(%esp)
 81b3b30:	ff 
 81b3b31:	8b 55 a8             	mov    -0x58(%ebp),%edx
 81b3b34:	89 54 24 18          	mov    %edx,0x18(%esp)
 81b3b38:	8b 55 ac             	mov    -0x54(%ebp),%edx
 81b3b3b:	89 54 24 14          	mov    %edx,0x14(%esp)
 81b3b3f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81b3b46:	00 
 81b3b47:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81b3b4b:	89 74 24 08          	mov    %esi,0x8(%esp)
 81b3b4f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b3b53:	89 04 24             	mov    %eax,(%esp)
 81b3b56:	e8 e5 27 29 00       	call   8446340 <_ZN19DB_MercenaryLogInfo11makeRequestEjjjjccciii>
 81b3b5b:	b8 01 00 00 00       	mov    $0x1,%eax
 81b3b60:	83 c4 7c             	add    $0x7c,%esp
 81b3b63:	5b                   	pop    %ebx
 81b3b64:	5e                   	pop    %esi
 81b3b65:	5f                   	pop    %edi
 81b3b66:	5d                   	pop    %ebp
 81b3b67:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::Competition @ 0x81b3814

/* CHARAC_LOAD_MERCENARY::Competition(CUser*, char, char) */

undefined4 __thiscall
CHARAC_LOAD_MERCENARY::Competition
          (CHARAC_LOAD_MERCENARY *this,CUser *param_1,char param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  undefined4 *puVar8;
  uint uVar9;
  CHARAC_LOAD_MERCENARY local_54;
  uint local_4c;
  vector<int,std::allocator<int>> local_48 [12];
  competition_reward_result local_3c [12];
  ulong local_30;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  int local_20;
  
  local_54 = (CHARAC_LOAD_MERCENARY)param_3;
  if (param_1 == (CUser *)0x0) {
    uVar5 = 0;
  }
  else {
    competition_reward_result::competition_reward_result(local_3c);
    Reward(this,param_1,local_3c);
    iVar6 = GetCompetitionState(this);
    if (iVar6 == 0) {
      cVar4 = CheckCompetitionPeriodIndex(this,param_2);
      if (cVar4 == '\x01') {
        cVar4 = CheckCompetitionAreaIndex(this,param_3,(int)*(short *)(this + 4));
        if (cVar4 == '\x01') {
          iVar6 = G_CDataManager();
          psVar7 = (short *)std::
                            vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                            ::operator[]((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                                          *)(iVar6 + 0xa91c),(int)param_3);
          if (*psVar7 == -1) {
            if (Competition(CUser*,char,char)::probArea == '\0') {
              iVar6 = __cxa_guard_acquire(&Competition(CUser*,char,char)::probArea);
              if (iVar6 != 0) {
                    /* try { // try from 081b392a to 081b392e has its CatchHandler @ 081b393d */
                CMTRand::CMTRand((CMTRand *)Competition(CUser*,char,char)::probArea);
                __cxa_guard_release(&Competition(CUser*,char,char)::probArea);
              }
            }
            std::vector<int,std::allocator<int>>::vector(local_48);
            local_4c = 0;
            while( true ) {
              iVar6 = G_CDataManager();
              iVar6 = std::
                      vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                      ::size((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                              *)(iVar6 + 0xa91c));
              uVar1 = local_4c;
              if (iVar6 <= (int)local_4c) break;
                    /* try { // try from 081b3976 to 081b3a49 has its CatchHandler @ 081b3a5f */
              iVar6 = G_CDataManager();
              local_20 = std::
                         vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                         ::operator[]((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                                       *)(iVar6 + 0xa91c),uVar1);
              if ((*(short *)(local_20 + 0x14) != 0) &&
                 (*(short *)(local_20 + 0x14) <= *(short *)(this + 4))) {
                std::vector<int,std::allocator<int>>::push_back(local_48,(int *)&local_4c);
              }
              local_4c = local_4c + 1;
            }
            iVar6 = std::vector<int,std::allocator<int>>::size(local_48);
            local_30 = iVar6 - 1;
            local_28 = CMTRand::randInt((CMTRand *)Competition(CUser*,char,char)::probArea,&local_30
                                       );
            puVar8 = (undefined4 *)
                     std::vector<int,std::allocator<int>>::operator[](local_48,local_28);
            local_24 = *puVar8;
            cVar4 = CheckCompetitionAreaIndex(this,(char)local_24,(int)*(short *)(this + 4));
            if (cVar4 == '\x01') {
              local_54 = SUB41(local_24,0);
            }
            else {
              local_54 = (CHARAC_LOAD_MERCENARY)0x0;
            }
            std::vector<int,std::allocator<int>>::~vector(local_48);
          }
          local_2c = GetCompetitionPeriodSecond(this,param_2);
          if (local_2c == 0) {
            uVar5 = 0;
          }
          else {
            alter(this);
            uVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
            *(undefined4 *)(this + 0x28) = uVar5;
            *(int *)(this + 0x2c) = *(int *)(this + 0x28) + local_2c;
            this[0x30] = local_54;
            this[0x31] = (CHARAC_LOAD_MERCENARY)param_2;
            uVar1 = *(uint *)(this + 0x2c);
            uVar2 = *(uint *)(this + 0x28);
            uVar3 = *(uint *)this;
            uVar9 = CUser::get_acc_id(param_1);
            DB_MercenaryLogInfo::makeRequest
                      (uVar9,uVar3,uVar2,uVar1,'\0',param_2,(char)local_54,-1,-1,-1);
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## GetAvatarBonus

```asm
// === 081b2c94 CHARAC_LOAD_MERCENARY::GetAvatarBonus  [0x081b2c94-0x81b2d09] ===
 81b2c94:	55                   	push   %ebp
 81b2c95:	89 e5                	mov    %esp,%ebp
 81b2c97:	83 ec 38             	sub    $0x38,%esp
 81b2c9a:	e8 fc 94 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2c9f:	05 fc a8 00 00       	add    $0xa8fc,%eax
 81b2ca4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b2ca7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b2caa:	89 04 24             	mov    %eax,(%esp)
 81b2cad:	e8 b6 1b 00 00       	call   81b4868 <_ZNKSt6vectorISt4pairIifESaIS1_EE5emptyEv>
 81b2cb2:	84 c0                	test   %al,%al
 81b2cb4:	75 18                	jne    81b2cce <_ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv+0x3a>
 81b2cb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b2cb9:	89 04 24             	mov    %eax,(%esp)
 81b2cbc:	e8 eb 1b 00 00       	call   81b48ac <_ZNKSt6vectorISt4pairIifESaIS1_EE4sizeEv>
 81b2cc1:	89 c2                	mov    %eax,%edx
 81b2cc3:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2cc6:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 81b2cca:	38 c2                	cmp    %al,%dl
 81b2ccc:	7d 07                	jge    81b2cd5 <_ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv+0x41>
 81b2cce:	b8 01 00 00 00       	mov    $0x1,%eax
 81b2cd3:	eb 05                	jmp    81b2cda <_ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv+0x46>
 81b2cd5:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2cda:	84 c0                	test   %al,%al
 81b2cdc:	74 07                	je     81b2ce5 <_ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv+0x51>
 81b2cde:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2ce3:	eb 1c                	jmp    81b2d01 <_ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv+0x6d>
 81b2ce5:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2ce8:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 81b2cec:	0f be c0             	movsbl %al,%eax
 81b2cef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b2cf3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b2cf6:	89 04 24             	mov    %eax,(%esp)
 81b2cf9:	e8 ca 1b 00 00       	call   81b48c8 <_ZNKSt6vectorISt4pairIifESaIS1_EEixEj>
 81b2cfe:	8b 40 04             	mov    0x4(%eax),%eax
 81b2d01:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b2d04:	d9 45 e4             	flds   -0x1c(%ebp)
 81b2d07:	c9                   	leave
 81b2d08:	c3                   	ret
 81b2d09:	90                   	nop

```

```c
// CHARAC_LOAD_MERCENARY::GetAvatarBonus @ 0x81b2c94

/* CHARAC_LOAD_MERCENARY::GetAvatarBonus() const */

longdouble __thiscall CHARAC_LOAD_MERCENARY::GetAvatarBonus(CHARAC_LOAD_MERCENARY *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = G_CDataManager();
  cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::empty();
  if (cVar2 == '\0') {
    cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size
                      ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                       (iVar3 + 0xa8fc));
    if ((char)this[0x32] <= cVar2) {
      bVar1 = false;
      goto LAB_081b2cda;
    }
  }
  bVar1 = true;
LAB_081b2cda:
  if (bVar1) {
    fVar4 = 0.0;
  }
  else {
    iVar3 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::operator[]
                      ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                       (iVar3 + 0xa8fc),(int)(char)this[0x32]);
    fVar4 = *(float *)(iVar3 + 4);
  }
  return (longdouble)fVar4;
}

```

---

## GetCompetitionPeriodSecond

```asm
// === 081b2ed2 CHARAC_LOAD_MERCENARY::GetCompetitionPeriodSecond  [0x081b2ed2-0x81b2f31] ===
 81b2ed2:	55                   	push   %ebp
 81b2ed3:	89 e5                	mov    %esp,%ebp
 81b2ed5:	56                   	push   %esi
 81b2ed6:	53                   	push   %ebx
 81b2ed7:	83 ec 20             	sub    $0x20,%esp
 81b2eda:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b2edd:	88 45 f4             	mov    %al,-0xc(%ebp)
 81b2ee0:	0f be 45 f4          	movsbl -0xc(%ebp),%eax
 81b2ee4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b2ee8:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2eeb:	89 04 24             	mov    %eax,(%esp)
 81b2eee:	e8 d1 fc ff ff       	call   81b2bc4 <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc>
 81b2ef3:	83 f0 01             	xor    $0x1,%eax
 81b2ef6:	84 c0                	test   %al,%al
 81b2ef8:	74 07                	je     81b2f01 <_ZNK21CHARAC_LOAD_MERCENARY26GetCompetitionPeriodSecondEc+0x2f>
 81b2efa:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2eff:	eb 2a                	jmp    81b2f2b <_ZNK21CHARAC_LOAD_MERCENARY26GetCompetitionPeriodSecondEc+0x59>
 81b2f01:	e8 95 92 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2f06:	8b b0 dc a8 00 00    	mov    0xa8dc(%eax),%esi
 81b2f0c:	0f be 5d f4          	movsbl -0xc(%ebp),%ebx
 81b2f10:	e8 86 92 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2f15:	05 f0 a8 00 00       	add    $0xa8f0,%eax
 81b2f1a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b2f1e:	89 04 24             	mov    %eax,(%esp)
 81b2f21:	e8 f2 1a 00 00       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 81b2f26:	8b 00                	mov    (%eax),%eax
 81b2f28:	0f af c6             	imul   %esi,%eax
 81b2f2b:	83 c4 20             	add    $0x20,%esp
 81b2f2e:	5b                   	pop    %ebx
 81b2f2f:	5e                   	pop    %esi
 81b2f30:	5d                   	pop    %ebp
 81b2f31:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::GetCompetitionPeriodSecond @ 0x81b2ed2

/* CHARAC_LOAD_MERCENARY::GetCompetitionPeriodSecond(char) const */

int __thiscall
CHARAC_LOAD_MERCENARY::GetCompetitionPeriodSecond(CHARAC_LOAD_MERCENARY *this,char param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  cVar1 = CheckCompetitionPeriodIndex(this,param_1);
  if (cVar1 == '\x01') {
    iVar2 = G_CDataManager();
    iVar2 = *(int *)(iVar2 + 0xa8dc);
    iVar3 = G_CDataManager();
    piVar4 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                    operator[]((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                               (iVar3 + 0xa8f0),(int)param_1);
    iVar2 = *piVar4 * iVar2;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

```

---

## GetCompetitionPeriodTerm

```asm
// === 081b2f32 CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm  [0x081b2f32-0x81b3045] ===
 81b2f32:	55                   	push   %ebp
 81b2f33:	89 e5                	mov    %esp,%ebp
 81b2f35:	53                   	push   %ebx
 81b2f36:	83 ec 34             	sub    $0x34,%esp
 81b2f39:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2f3c:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 81b2f40:	0f be c0             	movsbl %al,%eax
 81b2f43:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b2f47:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2f4a:	89 04 24             	mov    %eax,(%esp)
 81b2f4d:	e8 72 fc ff ff       	call   81b2bc4 <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc>
 81b2f52:	83 f0 01             	xor    $0x1,%eax
 81b2f55:	84 c0                	test   %al,%al
 81b2f57:	74 0a                	je     81b2f63 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb+0x31>
 81b2f59:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2f5e:	e9 dd 00 00 00       	jmp    81b3040 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb+0x10e>
 81b2f63:	e8 33 92 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2f68:	05 f0 a8 00 00       	add    $0xa8f0,%eax
 81b2f6d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81b2f70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81b2f73:	89 04 24             	mov    %eax,(%esp)
 81b2f76:	e8 ed 18 00 00       	call   81b4868 <_ZNKSt6vectorISt4pairIifESaIS1_EE5emptyEv>
 81b2f7b:	84 c0                	test   %al,%al
 81b2f7d:	75 18                	jne    81b2f97 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb+0x65>
 81b2f7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81b2f82:	89 04 24             	mov    %eax,(%esp)
 81b2f85:	e8 22 19 00 00       	call   81b48ac <_ZNKSt6vectorISt4pairIifESaIS1_EE4sizeEv>
 81b2f8a:	89 c2                	mov    %eax,%edx
 81b2f8c:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2f8f:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 81b2f93:	38 c2                	cmp    %al,%dl
 81b2f95:	7d 07                	jge    81b2f9e <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb+0x6c>
 81b2f97:	b8 01 00 00 00       	mov    $0x1,%eax
 81b2f9c:	eb 05                	jmp    81b2fa3 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb+0x71>
 81b2f9e:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2fa3:	84 c0                	test   %al,%al
 81b2fa5:	74 0a                	je     81b2fb1 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb+0x7f>
 81b2fa7:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2fac:	e9 8f 00 00 00       	jmp    81b3040 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb+0x10e>
 81b2fb1:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81b2fb8:	e8 e1 8c f1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81b2fbd:	89 c2                	mov    %eax,%edx
 81b2fbf:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2fc2:	8b 40 28             	mov    0x28(%eax),%eax
 81b2fc5:	89 d1                	mov    %edx,%ecx
 81b2fc7:	29 c1                	sub    %eax,%ecx
 81b2fc9:	89 c8                	mov    %ecx,%eax
 81b2fcb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b2fce:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 81b2fd1:	e8 c5 91 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2fd6:	8b 80 dc a8 00 00    	mov    0xa8dc(%eax),%eax
 81b2fdc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b2fdf:	89 d8                	mov    %ebx,%eax
 81b2fe1:	ba 00 00 00 00       	mov    $0x0,%edx
 81b2fe6:	f7 75 e4             	divl   -0x1c(%ebp)
 81b2fe9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b2fec:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2fef:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 81b2ff3:	0f be c0             	movsbl %al,%eax
 81b2ff6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b2ffa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81b2ffd:	89 04 24             	mov    %eax,(%esp)
 81b3000:	e8 c3 18 00 00       	call   81b48c8 <_ZNKSt6vectorISt4pairIifESaIS1_EEixEj>
 81b3005:	8b 00                	mov    (%eax),%eax
 81b3007:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81b300a:	0f 9f c0             	setg   %al
 81b300d:	84 c0                	test   %al,%al
 81b300f:	74 0e                	je     81b301f <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb+0xed>
 81b3011:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81b3015:	74 26                	je     81b303d <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb+0x10b>
 81b3017:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b301a:	c6 00 01             	movb   $0x1,(%eax)
 81b301d:	eb 1e                	jmp    81b303d <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb+0x10b>
 81b301f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3022:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 81b3026:	0f be c0             	movsbl %al,%eax
 81b3029:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b302d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81b3030:	89 04 24             	mov    %eax,(%esp)
 81b3033:	e8 90 18 00 00       	call   81b48c8 <_ZNKSt6vectorISt4pairIifESaIS1_EEixEj>
 81b3038:	8b 00                	mov    (%eax),%eax
 81b303a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b303d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b3040:	83 c4 34             	add    $0x34,%esp
 81b3043:	5b                   	pop    %ebx
 81b3044:	5d                   	pop    %ebp
 81b3045:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm @ 0x81b2f32

/* CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm(bool*) const */

uint __thiscall
CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm(CHARAC_LOAD_MERCENARY *this,bool *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *this_00;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  
  cVar2 = CheckCompetitionPeriodIndex(this,(char)this[0x31]);
  if (cVar2 == '\x01') {
    iVar4 = G_CDataManager();
    this_00 = (vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)(iVar4 + 0xa8f0);
    cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::empty();
    if ((cVar2 == '\0') &&
       (cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size
                          (this_00), (char)this[0x31] <= cVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 0;
    }
    else {
      iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar4 = *(int *)(this + 0x28);
      iVar6 = G_CDataManager();
      uVar3 = (uint)(iVar5 - iVar4) / *(uint *)(iVar6 + 0xa8dc);
      piVar7 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                      operator[](this_00,(int)(char)this[0x31]);
      if ((int)uVar3 < *piVar7) {
        if (param_1 != (bool *)0x0) {
          *param_1 = true;
        }
      }
      else {
        puVar8 = (uint *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                         operator[](this_00,(int)(char)this[0x31]);
        uVar3 = *puVar8;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## GetCompetitionState

```asm
// === 081b2e86 CHARAC_LOAD_MERCENARY::GetCompetitionState  [0x081b2e86-0x81b2ed1] ===
 81b2e86:	55                   	push   %ebp
 81b2e87:	89 e5                	mov    %esp,%ebp
 81b2e89:	53                   	push   %ebx
 81b2e8a:	83 ec 24             	sub    $0x24,%esp
 81b2e8d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2e90:	8b 58 2c             	mov    0x2c(%eax),%ebx
 81b2e93:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81b2e9a:	e8 ff 8d f1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81b2e9f:	89 da                	mov    %ebx,%edx
 81b2ea1:	29 c2                	sub    %eax,%edx
 81b2ea3:	89 d0                	mov    %edx,%eax
 81b2ea5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b2ea8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81b2eac:	7e 07                	jle    81b2eb5 <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv+0x2f>
 81b2eae:	b8 01 00 00 00       	mov    $0x1,%eax
 81b2eb3:	eb 17                	jmp    81b2ecc <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv+0x46>
 81b2eb5:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2eb8:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 81b2ebc:	3c ff                	cmp    $0xff,%al
 81b2ebe:	75 07                	jne    81b2ec7 <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv+0x41>
 81b2ec0:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2ec5:	eb 05                	jmp    81b2ecc <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv+0x46>
 81b2ec7:	b8 02 00 00 00       	mov    $0x2,%eax
 81b2ecc:	83 c4 24             	add    $0x24,%esp
 81b2ecf:	5b                   	pop    %ebx
 81b2ed0:	5d                   	pop    %ebp
 81b2ed1:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::GetCompetitionState @ 0x81b2e86

/* CHARAC_LOAD_MERCENARY::GetCompetitionState() const */

undefined4 __thiscall CHARAC_LOAD_MERCENARY::GetCompetitionState(CHARAC_LOAD_MERCENARY *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(this + 0x2c);
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar1 - iVar2 < 1) {
    if (this[0x30] == (CHARAC_LOAD_MERCENARY)0xff) {
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## GetPeriodBonus

```asm
// === 081b2c1e CHARAC_LOAD_MERCENARY::GetPeriodBonus  [0x081b2c1e-0x81b2c93] ===
 81b2c1e:	55                   	push   %ebp
 81b2c1f:	89 e5                	mov    %esp,%ebp
 81b2c21:	83 ec 38             	sub    $0x38,%esp
 81b2c24:	e8 72 95 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2c29:	05 f0 a8 00 00       	add    $0xa8f0,%eax
 81b2c2e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b2c31:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b2c34:	89 04 24             	mov    %eax,(%esp)
 81b2c37:	e8 2c 1c 00 00       	call   81b4868 <_ZNKSt6vectorISt4pairIifESaIS1_EE5emptyEv>
 81b2c3c:	84 c0                	test   %al,%al
 81b2c3e:	75 18                	jne    81b2c58 <_ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv+0x3a>
 81b2c40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b2c43:	89 04 24             	mov    %eax,(%esp)
 81b2c46:	e8 61 1c 00 00       	call   81b48ac <_ZNKSt6vectorISt4pairIifESaIS1_EE4sizeEv>
 81b2c4b:	89 c2                	mov    %eax,%edx
 81b2c4d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2c50:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 81b2c54:	38 c2                	cmp    %al,%dl
 81b2c56:	7d 07                	jge    81b2c5f <_ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv+0x41>
 81b2c58:	b8 01 00 00 00       	mov    $0x1,%eax
 81b2c5d:	eb 05                	jmp    81b2c64 <_ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv+0x46>
 81b2c5f:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2c64:	84 c0                	test   %al,%al
 81b2c66:	74 07                	je     81b2c6f <_ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv+0x51>
 81b2c68:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2c6d:	eb 1c                	jmp    81b2c8b <_ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv+0x6d>
 81b2c6f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2c72:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 81b2c76:	0f be c0             	movsbl %al,%eax
 81b2c79:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b2c7d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b2c80:	89 04 24             	mov    %eax,(%esp)
 81b2c83:	e8 40 1c 00 00       	call   81b48c8 <_ZNKSt6vectorISt4pairIifESaIS1_EEixEj>
 81b2c88:	8b 40 04             	mov    0x4(%eax),%eax
 81b2c8b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b2c8e:	d9 45 e4             	flds   -0x1c(%ebp)
 81b2c91:	c9                   	leave
 81b2c92:	c3                   	ret
 81b2c93:	90                   	nop

```

```c
// CHARAC_LOAD_MERCENARY::GetPeriodBonus @ 0x81b2c1e

/* CHARAC_LOAD_MERCENARY::GetPeriodBonus() const */

longdouble __thiscall CHARAC_LOAD_MERCENARY::GetPeriodBonus(CHARAC_LOAD_MERCENARY *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = G_CDataManager();
  cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::empty();
  if (cVar2 == '\0') {
    cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size
                      ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                       (iVar3 + 0xa8f0));
    if ((char)this[0x31] <= cVar2) {
      bVar1 = false;
      goto LAB_081b2c64;
    }
  }
  bVar1 = true;
LAB_081b2c64:
  if (bVar1) {
    fVar4 = 0.0;
  }
  else {
    iVar3 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::operator[]
                      ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                       (iVar3 + 0xa8f0),(int)(char)this[0x31]);
    fVar4 = *(float *)(iVar3 + 4);
  }
  return (longdouble)fVar4;
}

```

---

## GetRewardCritical

```asm
// === 081b2d0a CHARAC_LOAD_MERCENARY::GetRewardCritical  [0x081b2d0a-0x81b2d69] ===
 81b2d0a:	55                   	push   %ebp
 81b2d0b:	89 e5                	mov    %esp,%ebp
 81b2d0d:	83 ec 38             	sub    $0x38,%esp
 81b2d10:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81b2d14:	78 10                	js     81b2d26 <_ZNK21CHARAC_LOAD_MERCENARY17GetRewardCriticalEi+0x1c>
 81b2d16:	e8 80 94 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2d1b:	8b 80 18 a9 00 00    	mov    0xa918(%eax),%eax
 81b2d21:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81b2d24:	7d 07                	jge    81b2d2d <_ZNK21CHARAC_LOAD_MERCENARY17GetRewardCriticalEi+0x23>
 81b2d26:	b8 01 00 00 00       	mov    $0x1,%eax
 81b2d2b:	eb 05                	jmp    81b2d32 <_ZNK21CHARAC_LOAD_MERCENARY17GetRewardCriticalEi+0x28>
 81b2d2d:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2d32:	84 c0                	test   %al,%al
 81b2d34:	74 07                	je     81b2d3d <_ZNK21CHARAC_LOAD_MERCENARY17GetRewardCriticalEi+0x33>
 81b2d36:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2d3b:	eb 25                	jmp    81b2d62 <_ZNK21CHARAC_LOAD_MERCENARY17GetRewardCriticalEi+0x58>
 81b2d3d:	e8 59 94 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b2d42:	05 0c a9 00 00       	add    $0xa90c,%eax
 81b2d47:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b2d4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b2d4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b2d51:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b2d54:	89 04 24             	mov    %eax,(%esp)
 81b2d57:	e8 7e 1b 00 00       	call   81b48da <_Z16FindRelativeProbIfET_RKSt6vectorISt4pairIiS0_ESaIS3_EEi>
 81b2d5c:	d9 5d e4             	fstps  -0x1c(%ebp)
 81b2d5f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b2d62:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b2d65:	d9 45 e4             	flds   -0x1c(%ebp)
 81b2d68:	c9                   	leave
 81b2d69:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::GetRewardCritical @ 0x81b2d0a

/* CHARAC_LOAD_MERCENARY::GetRewardCritical(int) const */

longdouble __thiscall
CHARAC_LOAD_MERCENARY::GetRewardCritical(CHARAC_LOAD_MERCENARY *this,int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  if (-1 < param_1) {
    iVar2 = G_CDataManager();
    if (param_1 <= *(int *)(iVar2 + 0xa918)) {
      bVar1 = false;
      goto LAB_081b2d32;
    }
  }
  bVar1 = true;
LAB_081b2d32:
  if (bVar1) {
    fVar3 = 0.0;
  }
  else {
    iVar2 = G_CDataManager();
    fVar3 = FindRelativeProb<float>((vector *)(iVar2 + 0xa90c),param_1);
  }
  return (longdouble)fVar3;
}

```

---

## GetRewardGold

```asm
// === 081b3046 CHARAC_LOAD_MERCENARY::GetRewardGold  [0x081b3046-0x81b3275] ===
 81b3046:	55                   	push   %ebp
 81b3047:	89 e5                	mov    %esp,%ebp
 81b3049:	57                   	push   %edi
 81b304a:	56                   	push   %esi
 81b304b:	53                   	push   %ebx
 81b304c:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 81b3052:	e8 44 91 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b3057:	05 e4 a8 00 00       	add    $0xa8e4,%eax
 81b305c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81b305f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3062:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81b3066:	0f bf d0             	movswl %ax,%edx
 81b3069:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81b306c:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 81b306f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81b3073:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b3077:	89 04 24             	mov    %eax,(%esp)
 81b307a:	e8 de 18 00 00       	call   81b495d <_Z22Find_max_value_lower_NISt4pairIiiEET_iRKSt6vectorIS0_IiS2_ESaIS4_EE>
 81b307f:	83 ec 04             	sub    $0x4,%esp
 81b3082:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81b3085:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81b3088:	8b 45 08             	mov    0x8(%ebp),%eax
 81b308b:	89 04 24             	mov    %eax,(%esp)
 81b308e:	e8 8b fb ff ff       	call   81b2c1e <_ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv>
 81b3093:	d9 5d cc             	fstps  -0x34(%ebp)
 81b3096:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3099:	89 04 24             	mov    %eax,(%esp)
 81b309c:	e8 f3 fb ff ff       	call   81b2c94 <_ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv>
 81b30a1:	d9 5d d0             	fstps  -0x30(%ebp)
 81b30a4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b30ab:	00 
 81b30ac:	8b 45 08             	mov    0x8(%ebp),%eax
 81b30af:	89 04 24             	mov    %eax,(%esp)
 81b30b2:	e8 7b fe ff ff       	call   81b2f32 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb>
 81b30b7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81b30ba:	db 45 c8             	fildl  -0x38(%ebp)
 81b30bd:	d8 4d cc             	fmuls  -0x34(%ebp)
 81b30c0:	db 45 d4             	fildl  -0x2c(%ebp)
 81b30c3:	de c9                	fmulp  %st,%st(1)
 81b30c5:	d8 4d d0             	fmuls  -0x30(%ebp)
 81b30c8:	d9 05 68 89 bb 08    	flds   0x8bb8968
 81b30ce:	de c1                	faddp  %st,%st(1)
 81b30d0:	d9 7d b6             	fnstcw -0x4a(%ebp)
 81b30d3:	0f b7 45 b6          	movzwl -0x4a(%ebp),%eax
 81b30d7:	b4 0c                	mov    $0xc,%ah
 81b30d9:	66 89 45 b4          	mov    %ax,-0x4c(%ebp)
 81b30dd:	d9 6d b4             	fldcw  -0x4c(%ebp)
 81b30e0:	db 5d d8             	fistpl -0x28(%ebp)
 81b30e3:	d9 6d b6             	fldcw  -0x4a(%ebp)
 81b30e6:	b8 88 7e 40 09       	mov    $0x9407e88,%eax
 81b30eb:	0f b6 00             	movzbl (%eax),%eax
 81b30ee:	84 c0                	test   %al,%al
 81b30f0:	75 54                	jne    81b3146 <_ZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_result+0x100>
 81b30f2:	c7 04 24 88 7e 40 09 	movl   $0x9407e88,(%esp)
 81b30f9:	e8 32 22 57 00       	call   8725330 <__cxa_guard_acquire>
 81b30fe:	85 c0                	test   %eax,%eax
 81b3100:	0f 95 c0             	setne  %al
 81b3103:	84 c0                	test   %al,%al
 81b3105:	74 3f                	je     81b3146 <_ZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_result+0x100>
 81b3107:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b310c:	c7 04 24 00 95 40 09 	movl   $0x9409500,(%esp)
 81b3113:	e8 30 6e f2 ff       	call   80d9f48 <_ZN7CMTRandC1Ev>
 81b3118:	c7 04 24 88 7e 40 09 	movl   $0x9407e88,(%esp)
 81b311f:	e8 2c 21 57 00       	call   8725250 <__cxa_guard_release>
 81b3124:	eb 20                	jmp    81b3146 <_ZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_result+0x100>
 81b3126:	89 d6                	mov    %edx,%esi
 81b3128:	89 c7                	mov    %eax,%edi
 81b312a:	84 db                	test   %bl,%bl
 81b312c:	75 0c                	jne    81b313a <_ZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_result+0xf4>
 81b312e:	c7 04 24 88 7e 40 09 	movl   $0x9407e88,(%esp)
 81b3135:	e8 86 21 57 00       	call   87252c0 <__cxa_guard_abort>
 81b313a:	89 f8                	mov    %edi,%eax
 81b313c:	89 f2                	mov    %esi,%edx
 81b313e:	89 04 24             	mov    %eax,(%esp)
 81b3141:	e8 0a 06 93 00       	call   8ae3750 <_Unwind_Resume>
 81b3146:	e8 50 90 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b314b:	8b 80 18 a9 00 00    	mov    0xa918(%eax),%eax
 81b3151:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81b3154:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81b3157:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b315b:	c7 04 24 00 95 40 09 	movl   $0x9409500,(%esp)
 81b3162:	e8 57 89 f1 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81b3167:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81b316a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81b316d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3171:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3174:	89 04 24             	mov    %eax,(%esp)
 81b3177:	e8 8e fb ff ff       	call   81b2d0a <_ZNK21CHARAC_LOAD_MERCENARY17GetRewardCriticalEi>
 81b317c:	d9 5d e0             	fstps  -0x20(%ebp)
 81b317f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b3182:	89 04 24             	mov    %eax,(%esp)
 81b3185:	e8 12 27 f9 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 81b318a:	84 c0                	test   %al,%al
 81b318c:	74 7f                	je     81b320d <_ZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_result+0x1c7>
 81b318e:	d9 45 e0             	flds   -0x20(%ebp)
 81b3191:	d9 45 d0             	flds   -0x30(%ebp)
 81b3194:	d9 45 cc             	flds   -0x34(%ebp)
 81b3197:	d9 45 d0             	flds   -0x30(%ebp)
 81b319a:	d9 45 cc             	flds   -0x34(%ebp)
 81b319d:	d9 cc                	fxch   %st(4)
 81b319f:	dd 5c 24 40          	fstpl  0x40(%esp)
 81b31a3:	d9 ca                	fxch   %st(2)
 81b31a5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81b31a8:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 81b31ac:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81b31af:	89 44 24 38          	mov    %eax,0x38(%esp)
 81b31b3:	dd 5c 24 30          	fstpl  0x30(%esp)
 81b31b7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81b31ba:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 81b31be:	dd 5c 24 24          	fstpl  0x24(%esp)
 81b31c2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81b31c5:	89 44 24 20          	mov    %eax,0x20(%esp)
 81b31c9:	dd 5c 24 18          	fstpl  0x18(%esp)
 81b31cd:	dd 5c 24 10          	fstpl  0x10(%esp)
 81b31d1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81b31d4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81b31d8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81b31db:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b31df:	c7 44 24 04 48 7c bb 	movl   $0x8bb7c48,0x4(%esp)
 81b31e6:	08 
 81b31e7:	c7 04 24 e0 9e 40 09 	movl   $0x9409ee0,(%esp)
 81b31ee:	e8 4d b2 ec ff       	call   807e440 <sprintf@plt>
 81b31f3:	c7 44 24 08 e0 9e 40 	movl   $0x9409ee0,0x8(%esp)
 81b31fa:	09 
 81b31fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b31fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3202:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3205:	89 04 24             	mov    %eax,(%esp)
 81b3208:	e8 83 0f 00 00       	call   81b4190 <_ZNK21CHARAC_LOAD_MERCENARY18SendMessageToCUserEP5CUserPc>
 81b320d:	db 45 d8             	fildl  -0x28(%ebp)
 81b3210:	d8 4d e0             	fmuls  -0x20(%ebp)
 81b3213:	d9 05 68 89 bb 08    	flds   0x8bb8968
 81b3219:	de c1                	faddp  %st,%st(1)
 81b321b:	d9 7d b6             	fnstcw -0x4a(%ebp)
 81b321e:	0f b7 45 b6          	movzwl -0x4a(%ebp),%eax
 81b3222:	b4 0c                	mov    $0xc,%ah
 81b3224:	66 89 45 b4          	mov    %ax,-0x4c(%ebp)
 81b3228:	d9 6d b4             	fldcw  -0x4c(%ebp)
 81b322b:	db 5d e4             	fistpl -0x1c(%ebp)
 81b322e:	d9 6d b6             	fldcw  -0x4a(%ebp)
 81b3231:	db 45 c8             	fildl  -0x38(%ebp)
 81b3234:	d8 4d cc             	fmuls  -0x34(%ebp)
 81b3237:	db 45 d4             	fildl  -0x2c(%ebp)
 81b323a:	de c9                	fmulp  %st,%st(1)
 81b323c:	d8 4d e0             	fmuls  -0x20(%ebp)
 81b323f:	d9 05 68 89 bb 08    	flds   0x8bb8968
 81b3245:	de c1                	faddp  %st,%st(1)
 81b3247:	d9 6d b4             	fldcw  -0x4c(%ebp)
 81b324a:	db 5d b0             	fistpl -0x50(%ebp)
 81b324d:	d9 6d b6             	fldcw  -0x4a(%ebp)
 81b3250:	8b 55 b0             	mov    -0x50(%ebp),%edx
 81b3253:	8b 45 10             	mov    0x10(%ebp),%eax
 81b3256:	89 10                	mov    %edx,(%eax)
 81b3258:	8b 45 10             	mov    0x10(%ebp),%eax
 81b325b:	8b 00                	mov    (%eax),%eax
 81b325d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81b3260:	29 c2                	sub    %eax,%edx
 81b3262:	8b 45 10             	mov    0x10(%ebp),%eax
 81b3265:	89 50 04             	mov    %edx,0x4(%eax)
 81b3268:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b326b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81b326e:	83 c4 00             	add    $0x0,%esp
 81b3271:	5b                   	pop    %ebx
 81b3272:	5e                   	pop    %esi
 81b3273:	5f                   	pop    %edi
 81b3274:	5d                   	pop    %ebp
 81b3275:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::GetRewardGold @ 0x81b3046

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CHARAC_LOAD_MERCENARY::GetRewardGold(CUser*, competition_reward_result&) const */

int __thiscall
CHARAC_LOAD_MERCENARY::GetRewardGold
          (CHARAC_LOAD_MERCENARY *this,CUser *param_1,competition_reward_result *param_2)

{
  char cVar1;
  int iVar2;
  longdouble lVar3;
  undefined4 uVar4;
  int local_4c [2];
  ulong local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  
  iVar2 = G_CDataManager();
  iVar2 = iVar2 + 0xa8e4;
  local_40 = iVar2;
  Find_max_value_lower_N<std::pair<int,int>>((int)local_4c,(vector *)(int)*(short *)(this + 4));
  local_3c = local_4c[0];
  lVar3 = (longdouble)GetPeriodBonus(this);
  local_38 = (float)lVar3;
  lVar3 = (longdouble)GetAvatarBonus(this);
  local_34 = (float)lVar3;
  uVar4 = 0;
  local_30 = GetCompetitionPeriodTerm(this,(bool *)0x0);
  local_2c = (int)ROUND(_DAT_08bb8968 + (float)local_30 * (float)local_3c * local_38 * local_34);
  if (GetRewardGold(CUser*,competition_reward_result&)::probabilityRewardItem == '\0') {
    iVar2 = __cxa_guard_acquire(&GetRewardGold(CUser*,competition_reward_result&)::
                                 probabilityRewardItem,uVar4,iVar2);
    if (iVar2 != 0) {
                    /* try { // try from 081b3113 to 081b3117 has its CatchHandler @ 081b3126 */
      CMTRand::CMTRand((CMTRand *)
                       GetRewardGold(CUser*,competition_reward_result&)::probabilityRewardItem);
      __cxa_guard_release(&GetRewardGold(CUser*,competition_reward_result&)::probabilityRewardItem);
    }
  }
  iVar2 = G_CDataManager();
  local_44 = *(ulong *)(iVar2 + 0xa918);
  local_28 = CMTRand::randInt((CMTRand *)
                              GetRewardGold(CUser*,competition_reward_result&)::
                              probabilityRewardItem,&local_44);
  lVar3 = (longdouble)GetRewardCritical(this,local_28);
  local_24 = (float)lVar3;
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 != '\0') {
    sprintf(GetRewardGold(CUser*,competition_reward_result&)::buffer,
            "term:%d, base gold:%d\nperiod:%.2f, avatar:%.2f\n%d * %.2f * %d * %.2f = %d\ncritical Dice:%d/10,000 value:%.2f"
            ,local_30,local_3c,(double)local_38,(double)local_34,local_3c,(double)local_38,local_30,
            (double)local_34,local_2c,local_28,(double)local_24);
    SendMessageToCUser((CUser *)this,(char *)param_1);
  }
  iVar2 = (int)ROUND(_DAT_08bb8968 + (float)local_2c * local_24);
  *(int *)param_2 =
       (int)ROUND(_DAT_08bb8968 + (float)local_30 * (float)local_3c * local_38 * local_24);
  *(int *)(param_2 + 4) = iVar2 - *(int *)param_2;
  return iVar2;
}

```

---

## GetRewardItem

```asm
// === 081b3276 CHARAC_LOAD_MERCENARY::GetRewardItem  [0x081b3276-0x81b3813] ===
 81b3276:	55                   	push   %ebp
 81b3277:	89 e5                	mov    %esp,%ebp
 81b3279:	57                   	push   %edi
 81b327a:	56                   	push   %esi
 81b327b:	53                   	push   %ebx
 81b327c:	83 ec 6c             	sub    $0x6c,%esp
 81b327f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81b3283:	75 0a                	jne    81b328f <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x19>
 81b3285:	b8 00 00 00 00       	mov    $0x0,%eax
 81b328a:	e9 79 05 00 00       	jmp    81b3808 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x592>
 81b328f:	8b 45 14             	mov    0x14(%ebp),%eax
 81b3292:	89 04 24             	mov    %eax,(%esp)
 81b3295:	e8 3e 85 f1 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 81b329a:	c7 44 24 04 80 7e 40 	movl   $0x9407e80,0x4(%esp)
 81b32a1:	09 
 81b32a2:	8b 45 18             	mov    0x18(%ebp),%eax
 81b32a5:	89 04 24             	mov    %eax,(%esp)
 81b32a8:	e8 53 4a 55 00       	call   8707d00 <_ZNSsaSERKSs>
 81b32ad:	8b 45 08             	mov    0x8(%ebp),%eax
 81b32b0:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81b32b4:	0f bf d0             	movswl %ax,%edx
 81b32b7:	8b 45 08             	mov    0x8(%ebp),%eax
 81b32ba:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 81b32be:	0f be c0             	movsbl %al,%eax
 81b32c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b32c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b32c9:	8b 45 08             	mov    0x8(%ebp),%eax
 81b32cc:	89 04 24             	mov    %eax,(%esp)
 81b32cf:	e8 60 f8 ff ff       	call   81b2b34 <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci>
 81b32d4:	83 f0 01             	xor    $0x1,%eax
 81b32d7:	84 c0                	test   %al,%al
 81b32d9:	74 0a                	je     81b32e5 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x6f>
 81b32db:	b8 00 00 00 00       	mov    $0x0,%eax
 81b32e0:	e9 23 05 00 00       	jmp    81b3808 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x592>
 81b32e5:	8b 45 08             	mov    0x8(%ebp),%eax
 81b32e8:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 81b32ec:	0f be d8             	movsbl %al,%ebx
 81b32ef:	e8 a7 8e f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b32f4:	05 1c a9 00 00       	add    $0xa91c,%eax
 81b32f9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b32fd:	89 04 24             	mov    %eax,(%esp)
 81b3300:	e8 49 15 00 00       	call   81b484e <_ZNSt6vectorI26stMercenaryCompetitionAreaSaIS0_EEixEj>
 81b3305:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 81b3309:	66 85 c0             	test   %ax,%ax
 81b330c:	0f 94 c0             	sete   %al
 81b330f:	84 c0                	test   %al,%al
 81b3311:	74 07                	je     81b331a <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0xa4>
 81b3313:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3316:	c6 40 30 00          	movb   $0x0,0x30(%eax)
 81b331a:	b8 90 7e 40 09       	mov    $0x9407e90,%eax
 81b331f:	0f b6 00             	movzbl (%eax),%eax
 81b3322:	84 c0                	test   %al,%al
 81b3324:	75 54                	jne    81b337a <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x104>
 81b3326:	c7 04 24 90 7e 40 09 	movl   $0x9407e90,(%esp)
 81b332d:	e8 fe 1f 57 00       	call   8725330 <__cxa_guard_acquire>
 81b3332:	85 c0                	test   %eax,%eax
 81b3334:	0f 95 c0             	setne  %al
 81b3337:	84 c0                	test   %al,%al
 81b3339:	74 3f                	je     81b337a <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x104>
 81b333b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b3340:	c7 04 24 00 8a 40 09 	movl   $0x9408a00,(%esp)
 81b3347:	e8 fc 6b f2 ff       	call   80d9f48 <_ZN7CMTRandC1Ev>
 81b334c:	c7 04 24 90 7e 40 09 	movl   $0x9407e90,(%esp)
 81b3353:	e8 f8 1e 57 00       	call   8725250 <__cxa_guard_release>
 81b3358:	eb 20                	jmp    81b337a <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x104>
 81b335a:	89 d6                	mov    %edx,%esi
 81b335c:	89 c7                	mov    %eax,%edi
 81b335e:	84 db                	test   %bl,%bl
 81b3360:	75 0c                	jne    81b336e <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0xf8>
 81b3362:	c7 04 24 90 7e 40 09 	movl   $0x9407e90,(%esp)
 81b3369:	e8 52 1f 57 00       	call   87252c0 <__cxa_guard_abort>
 81b336e:	89 f8                	mov    %edi,%eax
 81b3370:	89 f2                	mov    %esi,%edx
 81b3372:	89 04 24             	mov    %eax,(%esp)
 81b3375:	e8 d6 03 93 00       	call   8ae3750 <_Unwind_Resume>
 81b337a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b337d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3381:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3384:	89 04 24             	mov    %eax,(%esp)
 81b3387:	e8 de f9 ff ff       	call   81b2d6a <_ZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUser>
 81b338c:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81b338f:	c7 45 a0 10 27 00 00 	movl   $0x2710,-0x60(%ebp)
 81b3396:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81b3399:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b339d:	c7 04 24 00 8a 40 09 	movl   $0x9408a00,(%esp)
 81b33a4:	e8 15 87 f1 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81b33a9:	a3 c8 93 40 09       	mov    %eax,0x94093c8
 81b33ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b33b1:	0f b6 80 68 ef 06 00 	movzbl 0x6ef68(%eax),%eax
 81b33b8:	84 c0                	test   %al,%al
 81b33ba:	74 0a                	je     81b33c6 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x150>
 81b33bc:	c7 05 c8 93 40 09 00 	movl   $0x0,0x94093c8
 81b33c3:	00 00 00 
 81b33c6:	a1 c8 93 40 09       	mov    0x94093c8,%eax
 81b33cb:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 81b33ce:	7c 0a                	jl     81b33da <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x164>
 81b33d0:	b8 00 00 00 00       	mov    $0x0,%eax
 81b33d5:	e9 2e 04 00 00       	jmp    81b3808 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x592>
 81b33da:	8b 45 08             	mov    0x8(%ebp),%eax
 81b33dd:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 81b33e1:	0f be d8             	movsbl %al,%ebx
 81b33e4:	e8 b2 8d f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b33e9:	05 1c a9 00 00       	add    $0xa91c,%eax
 81b33ee:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b33f2:	89 04 24             	mov    %eax,(%esp)
 81b33f5:	e8 54 14 00 00       	call   81b484e <_ZNSt6vectorI26stMercenaryCompetitionAreaSaIS0_EEixEj>
 81b33fa:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81b33fd:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81b3400:	8b 40 10             	mov    0x10(%eax),%eax
 81b3403:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 81b3406:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81b3409:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b340d:	c7 04 24 00 8a 40 09 	movl   $0x9408a00,(%esp)
 81b3414:	e8 a5 86 f1 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81b3419:	a3 cc 93 40 09       	mov    %eax,0x94093cc
 81b341e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b3421:	89 04 24             	mov    %eax,(%esp)
 81b3424:	e8 73 24 f9 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 81b3429:	84 c0                	test   %al,%al
 81b342b:	74 41                	je     81b346e <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x1f8>
 81b342d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81b3430:	8b 50 10             	mov    0x10(%eax),%edx
 81b3433:	a1 cc 93 40 09       	mov    0x94093cc,%eax
 81b3438:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81b343c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b3440:	c7 44 24 04 b5 7c bb 	movl   $0x8bb7cb5,0x4(%esp)
 81b3447:	08 
 81b3448:	c7 04 24 e0 93 40 09 	movl   $0x94093e0,(%esp)
 81b344f:	e8 ec af ec ff       	call   807e440 <sprintf@plt>
 81b3454:	c7 44 24 08 e0 93 40 	movl   $0x94093e0,0x8(%esp)
 81b345b:	09 
 81b345c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b345f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3463:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3466:	89 04 24             	mov    %eax,(%esp)
 81b3469:	e8 22 0d 00 00       	call   81b4190 <_ZNK21CHARAC_LOAD_MERCENARY18SendMessageToCUserEP5CUserPc>
 81b346e:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 81b3475:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81b347c:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81b3483:	eb 28                	jmp    81b34ad <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x237>
 81b3485:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81b3488:	8d 50 04             	lea    0x4(%eax),%edx
 81b348b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81b348e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3492:	89 14 24             	mov    %edx,(%esp)
 81b3495:	e8 b2 15 00 00       	call   81b4a4c <_ZNKSt6vectorI22stMercenaryRewardGroupSaIS0_EEixEj>
 81b349a:	8b 00                	mov    (%eax),%eax
 81b349c:	01 45 c0             	add    %eax,-0x40(%ebp)
 81b349f:	a1 cc 93 40 09       	mov    0x94093cc,%eax
 81b34a4:	39 45 c0             	cmp    %eax,-0x40(%ebp)
 81b34a7:	7d 1e                	jge    81b34c7 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x251>
 81b34a9:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 81b34ad:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81b34b0:	83 c0 04             	add    $0x4,%eax
 81b34b3:	89 04 24             	mov    %eax,(%esp)
 81b34b6:	e8 6f 15 00 00       	call   81b4a2a <_ZNKSt6vectorI22stMercenaryRewardGroupSaIS0_EE4sizeEv>
 81b34bb:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 81b34be:	0f 97 c0             	seta   %al
 81b34c1:	84 c0                	test   %al,%al
 81b34c3:	75 c0                	jne    81b3485 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x20f>
 81b34c5:	eb 01                	jmp    81b34c8 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x252>
 81b34c7:	90                   	nop
 81b34c8:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81b34cb:	83 c0 04             	add    $0x4,%eax
 81b34ce:	89 04 24             	mov    %eax,(%esp)
 81b34d1:	e8 54 15 00 00       	call   81b4a2a <_ZNKSt6vectorI22stMercenaryRewardGroupSaIS0_EE4sizeEv>
 81b34d6:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 81b34d9:	0f 96 c0             	setbe  %al
 81b34dc:	84 c0                	test   %al,%al
 81b34de:	74 07                	je     81b34e7 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x271>
 81b34e0:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81b34e7:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81b34ea:	8d 50 04             	lea    0x4(%eax),%edx
 81b34ed:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81b34f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b34f4:	89 14 24             	mov    %edx,(%esp)
 81b34f7:	e8 50 15 00 00       	call   81b4a4c <_ZNKSt6vectorI22stMercenaryRewardGroupSaIS0_EEixEj>
 81b34fc:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81b34ff:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81b3502:	83 c0 04             	add    $0x4,%eax
 81b3505:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3509:	8b 45 18             	mov    0x18(%ebp),%eax
 81b350c:	89 04 24             	mov    %eax,(%esp)
 81b350f:	e8 ec 47 55 00       	call   8707d00 <_ZNSsaSERKSs>
 81b3514:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81b3517:	83 c0 08             	add    $0x8,%eax
 81b351a:	89 04 24             	mov    %eax,(%esp)
 81b351d:	e8 78 dc f5 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 81b3522:	83 f0 01             	xor    $0x1,%eax
 81b3525:	84 c0                	test   %al,%al
 81b3527:	0f 84 dd 01 00 00    	je     81b370a <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x494>
 81b352d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81b3530:	8b 40 20             	mov    0x20(%eax),%eax
 81b3533:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81b3536:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81b3539:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b353d:	c7 04 24 00 8a 40 09 	movl   $0x9408a00,(%esp)
 81b3544:	e8 75 85 f1 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81b3549:	a3 e0 94 40 09       	mov    %eax,0x94094e0
 81b354e:	a1 e0 94 40 09       	mov    0x94094e0,%eax
 81b3553:	8b 55 c8             	mov    -0x38(%ebp),%edx
 81b3556:	83 c2 08             	add    $0x8,%edx
 81b3559:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b355d:	89 14 24             	mov    %edx,(%esp)
 81b3560:	e8 01 15 00 00       	call   81b4a66 <_Z16FindRelativeProbIiET_RKSt6vectorISt4pairIiS0_ESaIS3_EEi>
 81b3565:	89 45 9c             	mov    %eax,-0x64(%ebp)
 81b3568:	e8 2e 8c f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b356d:	8d 88 a8 a8 00 00    	lea    0xa8a8(%eax),%ecx
 81b3573:	8d 45 98             	lea    -0x68(%ebp),%eax
 81b3576:	8d 55 9c             	lea    -0x64(%ebp),%edx
 81b3579:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b357d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81b3581:	89 04 24             	mov    %eax,(%esp)
 81b3584:	e8 11 b3 f1 ff       	call   80ce89a <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE4findERS4_>
 81b3589:	83 ec 04             	sub    $0x4,%esp
 81b358c:	e8 0a 8c f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b3591:	8d 90 a8 a8 00 00    	lea    0xa8a8(%eax),%edx
 81b3597:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81b359a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b359e:	89 04 24             	mov    %eax,(%esp)
 81b35a1:	e8 22 9d f1 ff       	call   80cd2c8 <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE3endEv>
 81b35a6:	83 ec 04             	sub    $0x4,%esp
 81b35a9:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81b35ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b35b0:	8d 45 98             	lea    -0x68(%ebp),%eax
 81b35b3:	89 04 24             	mov    %eax,(%esp)
 81b35b6:	e8 19 12 00 00       	call   81b47d4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEneERKS4_>
 81b35bb:	84 c0                	test   %al,%al
 81b35bd:	0f 84 3d 01 00 00    	je     81b3700 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x48a>
 81b35c3:	e8 d3 8b f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b35c8:	05 84 a8 00 00       	add    $0xa884,%eax
 81b35cd:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81b35d0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81b35d3:	89 04 24             	mov    %eax,(%esp)
 81b35d6:	e8 09 15 00 00       	call   81b4ae4 <_ZNKSt6vectorI23IndependentDropListInfoSaIS0_EE4sizeEv>
 81b35db:	89 c3                	mov    %eax,%ebx
 81b35dd:	8d 45 98             	lea    -0x68(%ebp),%eax
 81b35e0:	89 04 24             	mov    %eax,(%esp)
 81b35e3:	e8 f2 b2 f1 ff       	call   80ce8da <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEptEv>
 81b35e8:	8b 40 04             	mov    0x4(%eax),%eax
 81b35eb:	39 c3                	cmp    %eax,%ebx
 81b35ed:	0f 9e c0             	setle  %al
 81b35f0:	84 c0                	test   %al,%al
 81b35f2:	74 0a                	je     81b35fe <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x388>
 81b35f4:	b8 00 00 00 00       	mov    $0x0,%eax
 81b35f9:	e9 0a 02 00 00       	jmp    81b3808 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x592>
 81b35fe:	8d 45 98             	lea    -0x68(%ebp),%eax
 81b3601:	89 04 24             	mov    %eax,(%esp)
 81b3604:	e8 d1 b2 f1 ff       	call   80ce8da <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEptEv>
 81b3609:	8b 40 04             	mov    0x4(%eax),%eax
 81b360c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3610:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81b3613:	89 04 24             	mov    %eax,(%esp)
 81b3616:	e8 e5 14 00 00       	call   81b4b00 <_ZNKSt6vectorI23IndependentDropListInfoSaIS0_EEixEj>
 81b361b:	83 c0 04             	add    $0x4,%eax
 81b361e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81b3621:	8d 45 98             	lea    -0x68(%ebp),%eax
 81b3624:	89 04 24             	mov    %eax,(%esp)
 81b3627:	e8 ae b2 f1 ff       	call   80ce8da <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEptEv>
 81b362c:	8b 40 08             	mov    0x8(%eax),%eax
 81b362f:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81b3632:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81b3635:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3639:	c7 04 24 00 8a 40 09 	movl   $0x9408a00,(%esp)
 81b3640:	e8 79 84 f1 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81b3645:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81b3648:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81b364f:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81b3656:	e9 82 00 00 00       	jmp    81b36dd <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x467>
 81b365b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81b365e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3662:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81b3665:	89 04 24             	mov    %eax,(%esp)
 81b3668:	e8 a5 14 00 00       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 81b366d:	8b 40 04             	mov    0x4(%eax),%eax
 81b3670:	01 45 d8             	add    %eax,-0x28(%ebp)
 81b3673:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81b3676:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 81b3679:	7f 5e                	jg     81b36d9 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x463>
 81b367b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81b367e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3682:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81b3685:	89 04 24             	mov    %eax,(%esp)
 81b3688:	e8 85 14 00 00       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 81b368d:	8b 00                	mov    (%eax),%eax
 81b368f:	89 c2                	mov    %eax,%edx
 81b3691:	8b 45 14             	mov    0x14(%ebp),%eax
 81b3694:	89 50 02             	mov    %edx,0x2(%eax)
 81b3697:	8b 45 14             	mov    0x14(%ebp),%eax
 81b369a:	c7 40 07 01 00 00 00 	movl   $0x1,0x7(%eax)
 81b36a1:	e8 f5 8a f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b36a6:	8b 40 0c             	mov    0xc(%eax),%eax
 81b36a9:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81b36b0:	00 
 81b36b1:	8b 55 14             	mov    0x14(%ebp),%edx
 81b36b4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b36b8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b36bf:	00 
 81b36c0:	89 04 24             	mov    %eax,(%esp)
 81b36c3:	e8 f0 e8 35 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 81b36c8:	8b 45 10             	mov    0x10(%ebp),%eax
 81b36cb:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 81b36cf:	b8 01 00 00 00       	mov    $0x1,%eax
 81b36d4:	e9 2f 01 00 00       	jmp    81b3808 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x592>
 81b36d9:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 81b36dd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81b36e0:	89 04 24             	mov    %eax,(%esp)
 81b36e3:	e8 2c a1 f2 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 81b36e8:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 81b36eb:	0f 97 c0             	seta   %al
 81b36ee:	84 c0                	test   %al,%al
 81b36f0:	0f 85 65 ff ff ff    	jne    81b365b <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x3e5>
 81b36f6:	b8 00 00 00 00       	mov    $0x0,%eax
 81b36fb:	e9 08 01 00 00       	jmp    81b3808 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x592>
 81b3700:	b8 00 00 00 00       	mov    $0x0,%eax
 81b3705:	e9 fe 00 00 00       	jmp    81b3808 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x592>
 81b370a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81b370d:	83 c0 14             	add    $0x14,%eax
 81b3710:	89 04 24             	mov    %eax,(%esp)
 81b3713:	e8 82 da f5 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 81b3718:	83 f0 01             	xor    $0x1,%eax
 81b371b:	84 c0                	test   %al,%al
 81b371d:	0f 84 d9 00 00 00    	je     81b37fc <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x586>
 81b3723:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81b3726:	8b 40 24             	mov    0x24(%eax),%eax
 81b3729:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81b372c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81b372f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3733:	c7 04 24 00 8a 40 09 	movl   $0x9408a00,(%esp)
 81b373a:	e8 7f 83 f1 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81b373f:	a3 e4 94 40 09       	mov    %eax,0x94094e4
 81b3744:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81b374b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81b3752:	e9 87 00 00 00       	jmp    81b37de <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x568>
 81b3757:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81b375a:	8d 50 14             	lea    0x14(%eax),%edx
 81b375d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b3760:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3764:	89 14 24             	mov    %edx,(%esp)
 81b3767:	e8 a6 13 00 00       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 81b376c:	8b 00                	mov    (%eax),%eax
 81b376e:	01 45 e0             	add    %eax,-0x20(%ebp)
 81b3771:	a1 e4 94 40 09       	mov    0x94094e4,%eax
 81b3776:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81b3779:	7f 5f                	jg     81b37da <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x564>
 81b377b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81b377e:	8d 50 14             	lea    0x14(%eax),%edx
 81b3781:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b3784:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3788:	89 14 24             	mov    %edx,(%esp)
 81b378b:	e8 82 13 00 00       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 81b3790:	8b 40 04             	mov    0x4(%eax),%eax
 81b3793:	89 c2                	mov    %eax,%edx
 81b3795:	8b 45 14             	mov    0x14(%ebp),%eax
 81b3798:	89 50 02             	mov    %edx,0x2(%eax)
 81b379b:	8b 45 14             	mov    0x14(%ebp),%eax
 81b379e:	c7 40 07 01 00 00 00 	movl   $0x1,0x7(%eax)
 81b37a5:	e8 f1 89 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b37aa:	8b 40 0c             	mov    0xc(%eax),%eax
 81b37ad:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81b37b4:	00 
 81b37b5:	8b 55 14             	mov    0x14(%ebp),%edx
 81b37b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b37bc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b37c3:	00 
 81b37c4:	89 04 24             	mov    %eax,(%esp)
 81b37c7:	e8 ec e7 35 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 81b37cc:	8b 45 10             	mov    0x10(%ebp),%eax
 81b37cf:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 81b37d3:	b8 01 00 00 00       	mov    $0x1,%eax
 81b37d8:	eb 2e                	jmp    81b3808 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x592>
 81b37da:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 81b37de:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81b37e1:	83 c0 14             	add    $0x14,%eax
 81b37e4:	89 04 24             	mov    %eax,(%esp)
 81b37e7:	e8 28 a0 f2 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 81b37ec:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81b37ef:	0f 97 c0             	seta   %al
 81b37f2:	84 c0                	test   %al,%al
 81b37f4:	0f 85 5d ff ff ff    	jne    81b3757 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x4e1>
 81b37fa:	eb 07                	jmp    81b3803 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x58d>
 81b37fc:	b8 00 00 00 00       	mov    $0x0,%eax
 81b3801:	eb 05                	jmp    81b3808 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs+0x592>
 81b3803:	b8 00 00 00 00       	mov    $0x0,%eax
 81b3808:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81b380b:	83 c4 00             	add    $0x0,%esp
 81b380e:	5b                   	pop    %ebx
 81b380f:	5e                   	pop    %esi
 81b3810:	5f                   	pop    %edi
 81b3811:	5d                   	pop    %ebp
 81b3812:	c3                   	ret
 81b3813:	90                   	nop

```

```c
// CHARAC_LOAD_MERCENARY::GetRewardItem @ 0x81b3276

/* CHARAC_LOAD_MERCENARY::GetRewardItem(CUser*, competition_reward_result&, Inven_Item&,
   std::string&) */

undefined4 __thiscall
CHARAC_LOAD_MERCENARY::GetRewardItem
          (CHARAC_LOAD_MERCENARY *this,CUser *param_1,competition_reward_result *param_2,
          Inven_Item *param_3,string *param_4)

{
  CHARAC_LOAD_MERCENARY CVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  _Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>> local_6c [4];
  int local_68;
  ulong local_64;
  ulong local_60;
  ulong local_5c;
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_58 [4];
  ulong local_54;
  ulong local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>> *local_38;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  
  if (param_1 != (CUser *)0x0) {
    Inven_Item::reset(param_3);
    std::string::operator=
              ((string *)param_4,
               (string *)&MercenaryHardCodingSettingValue::MERCENARY_BASE_POSTAL_MESSAGE);
    cVar2 = CheckCompetitionAreaIndex(this,(char)this[0x30],(int)*(short *)(this + 4));
    if (cVar2 == '\x01') {
      CVar1 = this[0x30];
      iVar3 = G_CDataManager();
      iVar3 = std::vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>::
              operator[]((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                          *)(iVar3 + 0xa91c),(int)(char)CVar1);
      if (*(short *)(iVar3 + 0x14) == 0) {
        this[0x30] = (CHARAC_LOAD_MERCENARY)0x0;
      }
      if ((GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::
           probabilityRewardItem == '\0') &&
         (iVar3 = __cxa_guard_acquire(&GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                                       ::probabilityRewardItem), iVar3 != 0)) {
                    /* try { // try from 081b3347 to 081b334b has its CatchHandler @ 081b335a */
        CMTRand::CMTRand((CMTRand *)
                         GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::
                         probabilityRewardItem);
        __cxa_guard_release(&GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                             ::probabilityRewardItem);
      }
      local_4c = CalcItemDropRate(this,param_1);
      local_64 = 10000;
      GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::itemDropDice =
           CMTRand::randInt((CMTRand *)
                            GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                            ::probabilityRewardItem,&local_64);
      if (param_1[0x6ef68] != (CUser)0x0) {
        GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::itemDropDice = 0;
      }
      if (GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::itemDropDice <
          local_4c) {
        CVar1 = this[0x30];
        iVar3 = G_CDataManager();
        local_48 = std::
                   vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>::
                   operator[]((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                               *)(iVar3 + 0xa91c),(int)(char)CVar1);
        local_60 = *(ulong *)(local_48 + 0x10);
        GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::groupDice =
             CMTRand::randInt((CMTRand *)
                              GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                              ::probabilityRewardItem,&local_60);
        cVar2 = CUser::isGMUser(param_1);
        if (cVar2 != '\0') {
          sprintf(GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::buffer,
                  "dice: %d/%d\n",
                  GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::
                  groupDice,*(undefined4 *)(local_48 + 0x10));
          SendMessageToCUser((CUser *)this,(char *)param_1);
        }
        local_44 = 0;
        local_40 = 0;
        while (uVar4 = std::vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>::
                       size((vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>> *
                            )(local_48 + 4)), local_40 < uVar4) {
          piVar7 = (int *)std::vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>
                          ::operator[]((vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>
                                        *)(local_48 + 4),local_40);
          local_44 = local_44 + *piVar7;
          if (GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::groupDice
              <= local_44) break;
          local_40 = local_40 + 1;
        }
        uVar4 = std::vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>::size
                          ((vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>> *)
                           (local_48 + 4));
        if (uVar4 <= local_40) {
          local_40 = 0;
        }
        local_3c = std::vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>::
                   operator[]((vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>
                               *)(local_48 + 4),local_40);
        std::string::operator=((string *)param_4,(string *)(local_3c + 4));
        cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
        if (cVar2 == '\x01') {
          cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
          if (cVar2 != '\x01') {
            local_50 = *(ulong *)(local_3c + 0x24);
            GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::itemDice =
                 CMTRand::randInt((CMTRand *)
                                  GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                                  ::probabilityRewardItem,&local_50);
            local_24 = 0;
            local_20 = 0;
            while (uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                     ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                       *)(local_3c + 0x14)), local_20 < uVar4) {
              piVar7 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                              operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                          *)(local_3c + 0x14),local_20);
              local_24 = local_24 + *piVar7;
              if (GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::
                  itemDice <= local_24) {
                iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (local_3c + 0x14),local_20);
                *(undefined4 *)(param_3 + 2) = *(undefined4 *)(iVar3 + 4);
                *(undefined4 *)(param_3 + 7) = 1;
                iVar3 = G_CDataManager();
                CItemList::create_item(*(CItemList **)(iVar3 + 0xc),1,param_3,1);
                param_2[8] = (competition_reward_result)0x1;
                return 1;
              }
              local_20 = local_20 + 1;
            }
          }
        }
        else {
          local_5c = *(ulong *)(local_3c + 0x20);
          GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::mobDice =
               CMTRand::randInt((CMTRand *)
                                GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                                ::probabilityRewardItem,&local_5c);
          local_68 = FindRelativeProb<int>
                               ((vector *)(local_3c + 8),
                                GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                                ::mobDice);
          G_CDataManager();
          std::
          map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
          ::find((int *)local_6c);
          G_CDataManager();
          std::
          map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
          ::end(local_58);
          cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                            (local_6c,(_Rb_tree_iterator *)local_58);
          if (cVar2 != '\0') {
            iVar3 = G_CDataManager();
            local_38 = (vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>> *)
                       (iVar3 + 0xa884);
            iVar3 = std::vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>::
                    size(local_38);
            iVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                              (local_6c);
            if (*(int *)(iVar5 + 4) < iVar3) {
              iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                                (local_6c);
              iVar3 = std::vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>::
                      operator[](local_38,*(uint *)(iVar3 + 4));
              local_34 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (iVar3 + 4);
              iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                                (local_6c);
              local_54 = *(ulong *)(iVar3 + 8);
              local_30 = CMTRand::randInt((CMTRand *)
                                          GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                                          ::probabilityRewardItem,&local_54);
              local_2c = 0;
              local_28 = 0;
              while (uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                             size(local_34), local_28 < uVar4) {
                iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[](local_34,local_28);
                local_2c = local_2c + *(int *)(iVar3 + 4);
                if (local_30 <= local_2c) {
                  puVar6 = (undefined4 *)
                           std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                           operator[](local_34,local_28);
                  *(undefined4 *)(param_3 + 2) = *puVar6;
                  *(undefined4 *)(param_3 + 7) = 1;
                  iVar3 = G_CDataManager();
                  CItemList::create_item(*(CItemList **)(iVar3 + 0xc),1,param_3,1);
                  param_2[8] = (competition_reward_result)0x1;
                  return 1;
                }
                local_28 = local_28 + 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

```

---

## Reset

```asm
// === 081b410a CHARAC_LOAD_MERCENARY::Reset  [0x081b410a-0x81b418f] ===
 81b410a:	55                   	push   %ebp
 81b410b:	89 e5                	mov    %esp,%ebp
 81b410d:	83 ec 18             	sub    $0x18,%esp
 81b4110:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4113:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81b4119:	8b 45 08             	mov    0x8(%ebp),%eax
 81b411c:	66 c7 40 04 00 00    	movw   $0x0,0x4(%eax)
 81b4122:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4125:	83 c0 06             	add    $0x6,%eax
 81b4128:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81b412f:	00 
 81b4130:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b4137:	00 
 81b4138:	89 04 24             	mov    %eax,(%esp)
 81b413b:	e8 80 9b ec ff       	call   807dcc0 <memset@plt>
 81b4140:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4143:	83 c0 34             	add    $0x34,%eax
 81b4146:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 81b414d:	00 
 81b414e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b4155:	00 
 81b4156:	89 04 24             	mov    %eax,(%esp)
 81b4159:	e8 62 9b ec ff       	call   807dcc0 <memset@plt>
 81b415e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4161:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 81b4165:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4168:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 81b416f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4172:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 81b4179:	8b 45 08             	mov    0x8(%ebp),%eax
 81b417c:	c6 40 30 ff          	movb   $0xff,0x30(%eax)
 81b4180:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4183:	c6 40 31 ff          	movb   $0xff,0x31(%eax)
 81b4187:	8b 45 08             	mov    0x8(%ebp),%eax
 81b418a:	c6 40 32 0a          	movb   $0xa,0x32(%eax)
 81b418e:	c9                   	leave
 81b418f:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::Reset @ 0x81b410a

/* CHARAC_LOAD_MERCENARY::Reset() */

void __thiscall CHARAC_LOAD_MERCENARY::Reset(CHARAC_LOAD_MERCENARY *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 4) = 0;
  memset(this + 6,0,0x1e);
  memset(this + 0x34,0,0x20);
  this[0x24] = (CHARAC_LOAD_MERCENARY)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (CHARAC_LOAD_MERCENARY)0xff;
  this[0x31] = (CHARAC_LOAD_MERCENARY)0xff;
  this[0x32] = (CHARAC_LOAD_MERCENARY)0xa;
  return;
}

```

---

## Reward

```asm
// === 081b3b68 CHARAC_LOAD_MERCENARY::Reward  [0x081b3b68-0x81b4109] ===
 81b3b68:	55                   	push   %ebp
 81b3b69:	89 e5                	mov    %esp,%ebp
 81b3b6b:	57                   	push   %edi
 81b3b6c:	56                   	push   %esi
 81b3b6d:	53                   	push   %ebx
 81b3b6e:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 81b3b74:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81b3b78:	75 0a                	jne    81b3b84 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x1c>
 81b3b7a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b3b7f:	e9 79 05 00 00       	jmp    81b40fd <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x595>
 81b3b84:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3b87:	89 04 24             	mov    %eax,(%esp)
 81b3b8a:	e8 f7 f2 ff ff       	call   81b2e86 <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv>
 81b3b8f:	85 c0                	test   %eax,%eax
 81b3b91:	0f 94 c0             	sete   %al
 81b3b94:	84 c0                	test   %al,%al
 81b3b96:	74 0a                	je     81b3ba2 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x3a>
 81b3b98:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b3b9d:	e9 5b 05 00 00       	jmp    81b40fd <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x595>
 81b3ba2:	b8 a0 7e 40 09       	mov    $0x9407ea0,%eax
 81b3ba7:	0f b6 00             	movzbl (%eax),%eax
 81b3baa:	84 c0                	test   %al,%al
 81b3bac:	75 2d                	jne    81b3bdb <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x73>
 81b3bae:	c7 04 24 a0 7e 40 09 	movl   $0x9407ea0,(%esp)
 81b3bb5:	e8 76 17 57 00       	call   8725330 <__cxa_guard_acquire>
 81b3bba:	85 c0                	test   %eax,%eax
 81b3bbc:	0f 95 c0             	setne  %al
 81b3bbf:	84 c0                	test   %al,%al
 81b3bc1:	74 18                	je     81b3bdb <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x73>
 81b3bc3:	c7 04 24 c0 7e 40 09 	movl   $0x9407ec0,(%esp)
 81b3bca:	e8 85 7c f1 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81b3bcf:	c7 04 24 a0 7e 40 09 	movl   $0x9407ea0,(%esp)
 81b3bd6:	e8 75 16 57 00       	call   8725250 <__cxa_guard_release>
 81b3bdb:	b8 a8 7e 40 09       	mov    $0x9407ea8,%eax
 81b3be0:	0f b6 00             	movzbl (%eax),%eax
 81b3be3:	84 c0                	test   %al,%al
 81b3be5:	0f 85 cd 00 00 00    	jne    81b3cb8 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x150>
 81b3beb:	c7 04 24 a8 7e 40 09 	movl   $0x9407ea8,(%esp)
 81b3bf2:	e8 39 17 57 00       	call   8725330 <__cxa_guard_acquire>
 81b3bf7:	85 c0                	test   %eax,%eax
 81b3bf9:	0f 95 c0             	setne  %al
 81b3bfc:	84 c0                	test   %al,%al
 81b3bfe:	0f 84 b4 00 00 00    	je     81b3cb8 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x150>
 81b3c04:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b3c09:	8d 45 c7             	lea    -0x39(%ebp),%eax
 81b3c0c:	89 04 24             	mov    %eax,(%esp)
 81b3c0f:	e8 bc c4 52 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81b3c14:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b3c1b:	00 
 81b3c1c:	c7 44 24 08 c2 7c bb 	movl   $0x8bb7cc2,0x8(%esp)
 81b3c23:	08 
 81b3c24:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81b3c2b:	00 
 81b3c2c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81b3c33:	e8 c6 1b 8f 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81b3c38:	8d 55 c7             	lea    -0x39(%ebp),%edx
 81b3c3b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b3c3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3c43:	c7 04 24 00 7f 40 09 	movl   $0x9407f00,(%esp)
 81b3c4a:	e8 e1 39 55 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81b3c4f:	c7 04 24 a8 7e 40 09 	movl   $0x9407ea8,(%esp)
 81b3c56:	e8 f5 15 57 00       	call   8725250 <__cxa_guard_release>
 81b3c5b:	b8 e0 7b 70 08       	mov    $0x8707be0,%eax
 81b3c60:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 81b3c67:	08 
 81b3c68:	c7 44 24 04 00 7f 40 	movl   $0x9407f00,0x4(%esp)
 81b3c6f:	09 
 81b3c70:	89 04 24             	mov    %eax,(%esp)
 81b3c73:	e8 58 a1 ec ff       	call   807ddd0 <__cxa_atexit@plt>
 81b3c78:	8d 45 c7             	lea    -0x39(%ebp),%eax
 81b3c7b:	89 04 24             	mov    %eax,(%esp)
 81b3c7e:	e8 6d c4 52 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81b3c83:	eb 33                	jmp    81b3cb8 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x150>
 81b3c85:	89 d6                	mov    %edx,%esi
 81b3c87:	89 c7                	mov    %eax,%edi
 81b3c89:	8d 45 c7             	lea    -0x39(%ebp),%eax
 81b3c8c:	89 04 24             	mov    %eax,(%esp)
 81b3c8f:	e8 5c c4 52 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81b3c94:	89 f8                	mov    %edi,%eax
 81b3c96:	89 f2                	mov    %esi,%edx
 81b3c98:	89 d6                	mov    %edx,%esi
 81b3c9a:	89 c7                	mov    %eax,%edi
 81b3c9c:	84 db                	test   %bl,%bl
 81b3c9e:	75 0c                	jne    81b3cac <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x144>
 81b3ca0:	c7 04 24 a8 7e 40 09 	movl   $0x9407ea8,(%esp)
 81b3ca7:	e8 14 16 57 00       	call   87252c0 <__cxa_guard_abort>
 81b3cac:	89 f8                	mov    %edi,%eax
 81b3cae:	89 f2                	mov    %esi,%edx
 81b3cb0:	89 04 24             	mov    %eax,(%esp)
 81b3cb3:	e8 98 fa 92 00       	call   8ae3750 <_Unwind_Resume>
 81b3cb8:	b8 b0 7e 40 09       	mov    $0x9407eb0,%eax
 81b3cbd:	0f b6 00             	movzbl (%eax),%eax
 81b3cc0:	84 c0                	test   %al,%al
 81b3cc2:	75 71                	jne    81b3d35 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x1cd>
 81b3cc4:	c7 04 24 b0 7e 40 09 	movl   $0x9407eb0,(%esp)
 81b3ccb:	e8 60 16 57 00       	call   8725330 <__cxa_guard_acquire>
 81b3cd0:	85 c0                	test   %eax,%eax
 81b3cd2:	0f 95 c0             	setne  %al
 81b3cd5:	84 c0                	test   %al,%al
 81b3cd7:	74 5c                	je     81b3d35 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x1cd>
 81b3cd9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b3cde:	c7 04 24 04 7f 40 09 	movl   $0x9407f04,(%esp)
 81b3ce5:	e8 e6 28 55 00       	call   87065d0 <_ZNSsC1Ev>
 81b3cea:	c7 04 24 b0 7e 40 09 	movl   $0x9407eb0,(%esp)
 81b3cf1:	e8 5a 15 57 00       	call   8725250 <__cxa_guard_release>
 81b3cf6:	b8 e0 7b 70 08       	mov    $0x8707be0,%eax
 81b3cfb:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 81b3d02:	08 
 81b3d03:	c7 44 24 04 04 7f 40 	movl   $0x9407f04,0x4(%esp)
 81b3d0a:	09 
 81b3d0b:	89 04 24             	mov    %eax,(%esp)
 81b3d0e:	e8 bd a0 ec ff       	call   807ddd0 <__cxa_atexit@plt>
 81b3d13:	eb 20                	jmp    81b3d35 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x1cd>
 81b3d15:	89 d6                	mov    %edx,%esi
 81b3d17:	89 c7                	mov    %eax,%edi
 81b3d19:	84 db                	test   %bl,%bl
 81b3d1b:	75 0c                	jne    81b3d29 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x1c1>
 81b3d1d:	c7 04 24 b0 7e 40 09 	movl   $0x9407eb0,(%esp)
 81b3d24:	e8 97 15 57 00       	call   87252c0 <__cxa_guard_abort>
 81b3d29:	89 f8                	mov    %edi,%eax
 81b3d2b:	89 f2                	mov    %esi,%edx
 81b3d2d:	89 04 24             	mov    %eax,(%esp)
 81b3d30:	e8 1b fa 92 00       	call   8ae3750 <_Unwind_Resume>
 81b3d35:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81b3d3c:	c6 45 de 00          	movb   $0x0,-0x22(%ebp)
 81b3d40:	c6 45 c6 00          	movb   $0x0,-0x3a(%ebp)
 81b3d44:	8b 45 10             	mov    0x10(%ebp),%eax
 81b3d47:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b3d4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b3d4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3d52:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3d55:	89 04 24             	mov    %eax,(%esp)
 81b3d58:	e8 e9 f2 ff ff       	call   81b3046 <_ZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_result>
 81b3d5d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81b3d60:	c7 44 24 10 04 7f 40 	movl   $0x9407f04,0x10(%esp)
 81b3d67:	09 
 81b3d68:	c7 44 24 0c c0 7e 40 	movl   $0x9407ec0,0xc(%esp)
 81b3d6f:	09 
 81b3d70:	8b 45 10             	mov    0x10(%ebp),%eax
 81b3d73:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b3d77:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b3d7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3d7e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3d81:	89 04 24             	mov    %eax,(%esp)
 81b3d84:	e8 ed f4 ff ff       	call   81b3276 <_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs>
 81b3d89:	88 45 de             	mov    %al,-0x22(%ebp)
 81b3d8c:	0f b6 45 de          	movzbl -0x22(%ebp),%eax
 81b3d90:	83 f0 01             	xor    $0x1,%eax
 81b3d93:	84 c0                	test   %al,%al
 81b3d95:	0f 84 b0 00 00 00    	je     81b3e4b <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x2e3>
 81b3d9b:	c7 44 24 04 80 7e 40 	movl   $0x9407e80,0x4(%esp)
 81b3da2:	09 
 81b3da3:	c7 04 24 04 7f 40 09 	movl   $0x9407f04,(%esp)
 81b3daa:	e8 51 3f 55 00       	call   8707d00 <_ZNSsaSERKSs>
 81b3daf:	e9 97 00 00 00       	jmp    81b3e4b <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x2e3>
 81b3db4:	89 04 24             	mov    %eax,(%esp)
 81b3db7:	e8 24 1f 57 00       	call   8725ce0 <__cxa_begin_catch>
 81b3dbc:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3dbf:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 81b3dc6:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3dc9:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 81b3dd0:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3dd3:	c6 40 30 ff          	movb   $0xff,0x30(%eax)
 81b3dd7:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3dda:	c6 40 31 ff          	movb   $0xff,0x31(%eax)
 81b3dde:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3de1:	89 04 24             	mov    %eax,(%esp)
 81b3de4:	e8 df 09 00 00       	call   81b47c8 <_ZN21CHARAC_LOAD_MERCENARY5alterEv>
 81b3de9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81b3df0:	00 
 81b3df1:	c7 44 24 08 ea 01 00 	movl   $0x1ea,0x8(%esp)
 81b3df8:	00 
 81b3df9:	c7 44 24 04 20 89 bb 	movl   $0x8bb8920,0x4(%esp)
 81b3e00:	08 
 81b3e01:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81b3e04:	89 04 24             	mov    %eax,(%esp)
 81b3e07:	e8 0c b9 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b3e0c:	c7 44 24 08 ea 01 00 	movl   $0x1ea,0x8(%esp)
 81b3e13:	00 
 81b3e14:	c7 44 24 04 d6 7c bb 	movl   $0x8bb7cd6,0x4(%esp)
 81b3e1b:	08 
 81b3e1c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81b3e1f:	89 04 24             	mov    %eax,(%esp)
 81b3e22:	e8 61 b9 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b3e27:	bb 01 00 00 00       	mov    $0x1,%ebx
 81b3e2c:	e8 ff 1d 57 00       	call   8725c30 <__cxa_end_catch>
 81b3e31:	e9 c7 02 00 00       	jmp    81b40fd <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x595>
 81b3e36:	89 d3                	mov    %edx,%ebx
 81b3e38:	89 c6                	mov    %eax,%esi
 81b3e3a:	e8 f1 1d 57 00       	call   8725c30 <__cxa_end_catch>
 81b3e3f:	89 f0                	mov    %esi,%eax
 81b3e41:	89 da                	mov    %ebx,%edx
 81b3e43:	89 04 24             	mov    %eax,(%esp)
 81b3e46:	e8 05 f9 92 00       	call   8ae3750 <_Unwind_Resume>
 81b3e4b:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81b3e4f:	0f 8f 8e 00 00 00    	jg     81b3ee3 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x37b>
 81b3e55:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 81b3e58:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3e5c:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3e5f:	89 04 24             	mov    %eax,(%esp)
 81b3e62:	e8 cb f0 ff ff       	call   81b2f32 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb>
 81b3e67:	8b 55 08             	mov    0x8(%ebp),%edx
 81b3e6a:	8b 52 2c             	mov    0x2c(%edx),%edx
 81b3e6d:	89 d3                	mov    %edx,%ebx
 81b3e6f:	8b 55 08             	mov    0x8(%ebp),%edx
 81b3e72:	8b 52 28             	mov    0x28(%edx),%edx
 81b3e75:	89 d1                	mov    %edx,%ecx
 81b3e77:	8b 55 08             	mov    0x8(%ebp),%edx
 81b3e7a:	8b 12                	mov    (%edx),%edx
 81b3e7c:	8b 75 0c             	mov    0xc(%ebp),%esi
 81b3e7f:	8d be 00 97 07 00    	lea    0x79700(%esi),%edi
 81b3e85:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81b3e8c:	00 
 81b3e8d:	8b 75 d8             	mov    -0x28(%ebp),%esi
 81b3e90:	89 74 24 14          	mov    %esi,0x14(%esp)
 81b3e94:	89 44 24 10          	mov    %eax,0x10(%esp)
 81b3e98:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81b3e9c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81b3ea0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b3ea4:	89 3c 24             	mov    %edi,(%esp)
 81b3ea7:	e8 5e 2c 4d 00       	call   8686b0a <_ZN15cUserHistoryLog15MercenaryReturnEjiiiii>
 81b3eac:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3eaf:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 81b3eb6:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3eb9:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 81b3ec0:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3ec3:	c6 40 30 ff          	movb   $0xff,0x30(%eax)
 81b3ec7:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3eca:	c6 40 31 ff          	movb   $0xff,0x31(%eax)
 81b3ece:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3ed1:	89 04 24             	mov    %eax,(%esp)
 81b3ed4:	e8 ef 08 00 00       	call   81b47c8 <_ZN21CHARAC_LOAD_MERCENARY5alterEv>
 81b3ed9:	bb 01 00 00 00       	mov    $0x1,%ebx
 81b3ede:	e9 1a 02 00 00       	jmp    81b40fd <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x595>
 81b3ee3:	c7 04 24 04 7f 40 09 	movl   $0x9407f04,(%esp)
 81b3eea:	e8 01 26 55 00       	call   87064f0 <_ZNKSs5c_strEv>
 81b3eef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b3ef6:	00 
 81b3ef7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b3efb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81b3f02:	00 
 81b3f03:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81b3f0a:	e8 ef 18 8f 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81b3f0f:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 81b3f16:	00 
 81b3f17:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3f1b:	c7 04 24 20 7f 40 09 	movl   $0x9407f20,(%esp)
 81b3f22:	e8 a9 99 ec ff       	call   807d8d0 <strncpy@plt>
 81b3f27:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b3f2a:	89 04 24             	mov    %eax,(%esp)
 81b3f2d:	e8 5e 7d f1 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81b3f32:	89 c3                	mov    %eax,%ebx
 81b3f34:	c7 04 24 20 7f 40 09 	movl   $0x9407f20,(%esp)
 81b3f3b:	e8 70 a4 ec ff       	call   807e3b0 <strlen@plt>
 81b3f40:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 81b3f43:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3f46:	8b 38                	mov    (%eax),%edi
 81b3f48:	8b 75 d8             	mov    -0x28(%ebp),%esi
 81b3f4b:	c7 04 24 00 7f 40 09 	movl   $0x9407f00,(%esp)
 81b3f52:	e8 99 25 55 00       	call   87064f0 <_ZNKSs5c_strEv>
 81b3f57:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 81b3f5e:	00 
 81b3f5f:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 81b3f66:	00 
 81b3f67:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81b3f6b:	c7 44 24 18 1e 00 00 	movl   $0x1e,0x18(%esp)
 81b3f72:	00 
 81b3f73:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 81b3f76:	89 54 24 14          	mov    %edx,0x14(%esp)
 81b3f7a:	c7 44 24 10 20 7f 40 	movl   $0x9407f20,0x10(%esp)
 81b3f81:	09 
 81b3f82:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81b3f86:	89 74 24 08          	mov    %esi,0x8(%esp)
 81b3f8a:	c7 44 24 04 c0 7e 40 	movl   $0x9407ec0,0x4(%esp)
 81b3f91:	09 
 81b3f92:	89 04 24             	mov    %eax,(%esp)
 81b3f95:	e8 4e 16 3a 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 81b3f9a:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 81b3f9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b3fa1:	8b 45 08             	mov    0x8(%ebp),%eax
 81b3fa4:	89 04 24             	mov    %eax,(%esp)
 81b3fa7:	e8 86 ef ff ff       	call   81b2f32 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb>
 81b3fac:	8b 55 08             	mov    0x8(%ebp),%edx
 81b3faf:	8b 52 2c             	mov    0x2c(%edx),%edx
 81b3fb2:	89 d3                	mov    %edx,%ebx
 81b3fb4:	8b 55 08             	mov    0x8(%ebp),%edx
 81b3fb7:	8b 52 28             	mov    0x28(%edx),%edx
 81b3fba:	89 d1                	mov    %edx,%ecx
 81b3fbc:	8b 55 08             	mov    0x8(%ebp),%edx
 81b3fbf:	8b 12                	mov    (%edx),%edx
 81b3fc1:	8b 75 0c             	mov    0xc(%ebp),%esi
 81b3fc4:	8d be 00 97 07 00    	lea    0x79700(%esi),%edi
 81b3fca:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81b3fd1:	00 
 81b3fd2:	8b 75 d8             	mov    -0x28(%ebp),%esi
 81b3fd5:	89 74 24 14          	mov    %esi,0x14(%esp)
 81b3fd9:	89 44 24 10          	mov    %eax,0x10(%esp)
 81b3fdd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81b3fe1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81b3fe5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b3fe9:	89 3c 24             	mov    %edi,(%esp)
 81b3fec:	e8 19 2b 4d 00       	call   8686b0a <_ZN15cUserHistoryLog15MercenaryReturnEjiiiii>
 81b3ff1:	0f b6 45 c6          	movzbl -0x3a(%ebp),%eax
 81b3ff5:	84 c0                	test   %al,%al
 81b3ff7:	74 07                	je     81b4000 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x498>
 81b3ff9:	b8 02 00 00 00       	mov    $0x2,%eax
 81b3ffe:	eb 05                	jmp    81b4005 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x49d>
 81b4000:	b8 01 00 00 00       	mov    $0x1,%eax
 81b4005:	88 45 df             	mov    %al,-0x21(%ebp)
 81b4008:	a1 c2 7e 40 09       	mov    0x9407ec2,%eax
 81b400d:	89 c3                	mov    %eax,%ebx
 81b400f:	e8 87 81 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b4014:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b4018:	89 04 24             	mov    %eax,(%esp)
 81b401b:	e8 12 ba 1a 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81b4020:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81b4023:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%ebp)
 81b402a:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81b402e:	74 0e                	je     81b403e <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result+0x4d6>
 81b4030:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81b4033:	89 04 24             	mov    %eax,(%esp)
 81b4036:	e8 9b d2 f3 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 81b403b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b403e:	a1 c2 7e 40 09       	mov    0x9407ec2,%eax
 81b4043:	89 c3                	mov    %eax,%ebx
 81b4045:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4048:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 81b404c:	0f be c0             	movsbl %al,%eax
 81b404f:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81b4052:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4055:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 81b4059:	0f be c0             	movsbl %al,%eax
 81b405c:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81b405f:	0f be 45 df          	movsbl -0x21(%ebp),%eax
 81b4063:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81b4066:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81b406d:	e8 2c 7c f1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81b4072:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81b4075:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4078:	8b 78 28             	mov    0x28(%eax),%edi
 81b407b:	8b 45 08             	mov    0x8(%ebp),%eax
 81b407e:	8b 30                	mov    (%eax),%esi
 81b4080:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b4083:	89 04 24             	mov    %eax,(%esp)
 81b4086:	e8 e3 62 f2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81b408b:	89 c2                	mov    %eax,%edx
 81b408d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b4090:	89 44 24 24          	mov    %eax,0x24(%esp)
 81b4094:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 81b4098:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81b409b:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81b409f:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81b40a2:	89 44 24 18          	mov    %eax,0x18(%esp)
 81b40a6:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81b40a9:	89 44 24 14          	mov    %eax,0x14(%esp)
 81b40ad:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81b40b0:	89 44 24 10          	mov    %eax,0x10(%esp)
 81b40b4:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81b40b7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81b40bb:	89 7c 24 08          	mov    %edi,0x8(%esp)
 81b40bf:	89 74 24 04          	mov    %esi,0x4(%esp)
 81b40c3:	89 14 24             	mov    %edx,(%esp)
 81b40c6:	e8 75 22 29 00       	call   8446340 <_ZN19DB_MercenaryLogInfo11makeRequestEjjjjccciii>
 81b40cb:	8b 45 08             	mov    0x8(%ebp),%eax
 81b40ce:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 81b40d5:	8b 45 08             	mov    0x8(%ebp),%eax
 81b40d8:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 81b40df:	8b 45 08             	mov    0x8(%ebp),%eax
 81b40e2:	c6 40 30 ff          	movb   $0xff,0x30(%eax)
 81b40e6:	8b 45 08             	mov    0x8(%ebp),%eax
 81b40e9:	c6 40 31 ff          	movb   $0xff,0x31(%eax)
 81b40ed:	8b 45 08             	mov    0x8(%ebp),%eax
 81b40f0:	89 04 24             	mov    %eax,(%esp)
 81b40f3:	e8 d0 06 00 00       	call   81b47c8 <_ZN21CHARAC_LOAD_MERCENARY5alterEv>
 81b40f8:	bb 01 00 00 00       	mov    $0x1,%ebx
 81b40fd:	89 d8                	mov    %ebx,%eax
 81b40ff:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 81b4105:	5b                   	pop    %ebx
 81b4106:	5e                   	pop    %esi
 81b4107:	5f                   	pop    %edi
 81b4108:	5d                   	pop    %ebp
 81b4109:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::Reward @ 0x81b3b68

/* CHARAC_LOAD_MERCENARY::Reward(CUser*, competition_reward_result&) */

undefined4 __thiscall
CHARAC_LOAD_MERCENARY::Reward
          (CHARAC_LOAD_MERCENARY *this,CUser *param_1,competition_reward_result *param_2)

{
  CHARAC_LOAD_MERCENARY CVar1;
  CHARAC_LOAD_MERCENARY CVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  size_t sVar9;
  undefined4 uVar10;
  CDataManager *this_00;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  bool local_3e;
  allocator<char> local_3d [17];
  int local_2c;
  char local_26;
  char local_25;
  CItem *local_24;
  int local_20;
  
  if (param_1 == (CUser *)0x0) {
    uVar13 = 0;
  }
  else {
    iVar6 = GetCompetitionState(this);
    if (iVar6 == 0) {
      uVar13 = 0;
    }
    else {
      if (Reward(CUser*,competition_reward_result&)::emptyItem == '\0') {
        iVar6 = __cxa_guard_acquire(&Reward(CUser*,competition_reward_result&)::emptyItem);
        if (iVar6 != 0) {
          Inven_Item::Inven_Item((Inven_Item *)Reward(CUser*,competition_reward_result&)::emptyItem)
          ;
          __cxa_guard_release(&Reward(CUser*,competition_reward_result&)::emptyItem);
        }
      }
      if (Reward(CUser*,competition_reward_result&)::mailTitle == '\0') {
        iVar6 = __cxa_guard_acquire(&Reward(CUser*,competition_reward_result&)::mailTitle);
        if (iVar6 != 0) {
          std::allocator<char>::allocator();
                    /* try { // try from 081b3c33 to 081b3c4e has its CatchHandler @ 081b3c85 */
          pcVar7 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_225",(bool *)0x0);
          std::string::string((string *)&Reward(CUser*,competition_reward_result&)::mailTitle,pcVar7
                              ,(allocator *)local_3d);
          __cxa_guard_release(&Reward(CUser*,competition_reward_result&)::mailTitle);
          __cxa_atexit(std::string::~string,&Reward(CUser*,competition_reward_result&)::mailTitle,
                       &__dso_handle);
          std::allocator<char>::~allocator(local_3d);
        }
      }
      if (Reward(CUser*,competition_reward_result&)::serverMessage == '\0') {
        iVar6 = __cxa_guard_acquire(&Reward(CUser*,competition_reward_result&)::serverMessage);
        if (iVar6 != 0) {
                    /* try { // try from 081b3ce5 to 081b3ce9 has its CatchHandler @ 081b3d15 */
          std::string::string((string *)&Reward(CUser*,competition_reward_result&)::serverMessage);
          __cxa_guard_release(&Reward(CUser*,competition_reward_result&)::serverMessage);
          __cxa_atexit(std::string::~string,
                       &Reward(CUser*,competition_reward_result&)::serverMessage,&__dso_handle);
        }
      }
      local_2c = 0;
      local_26 = 0;
      local_3e = false;
                    /* try { // try from 081b3d58 to 081b3dae has its CatchHandler @ 081b3db4 */
      local_2c = GetRewardGold(this,param_1,param_2);
      local_26 = GetRewardItem(this,param_1,param_2,
                               (Inven_Item *)Reward(CUser*,competition_reward_result&)::emptyItem,
                               (string *)&Reward(CUser*,competition_reward_result&)::serverMessage);
      if (local_26 != '\x01') {
        std::string::operator=
                  ((string *)&Reward(CUser*,competition_reward_result&)::serverMessage,
                   (string *)&MercenaryHardCodingSettingValue::MERCENARY_BASE_POSTAL_MESSAGE);
      }
      if (local_2c < 1) {
        iVar6 = GetCompetitionPeriodTerm(this,&local_3e);
        cUserHistoryLog::MercenaryReturn
                  ((cUserHistoryLog *)(param_1 + 0x79700),*(uint *)this,*(int *)(this + 0x28),
                   *(int *)(this + 0x2c),iVar6,local_2c,0);
        *(undefined4 *)(this + 0x28) = 0;
        *(undefined4 *)(this + 0x2c) = 0;
        this[0x30] = (CHARAC_LOAD_MERCENARY)0xff;
        this[0x31] = (CHARAC_LOAD_MERCENARY)0xff;
        alter(this);
        uVar13 = 1;
      }
      else {
        pcVar7 = (char *)std::string::c_str((string *)
                                            &Reward(CUser*,competition_reward_result&)::
                                             serverMessage);
        pcVar7 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,
                                    (bool *)0x0);
        strncpy(Reward(CUser*,competition_reward_result&)::strMessage,pcVar7,0xff);
        uVar8 = CUser::GetServerGroup(param_1);
        sVar9 = strlen(Reward(CUser*,competition_reward_result&)::strMessage);
        iVar6 = local_2c;
        uVar13 = *(undefined4 *)this;
        uVar10 = std::string::c_str((string *)&Reward(CUser*,competition_reward_result&)::mailTitle)
        ;
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (uVar10,Reward(CUser*,competition_reward_result&)::emptyItem,iVar6,uVar13,
                   Reward(CUser*,competition_reward_result&)::strMessage,sVar9,0x1e,uVar8,0,0);
        iVar6 = GetCompetitionPeriodTerm(this,&local_3e);
        cUserHistoryLog::MercenaryReturn
                  ((cUserHistoryLog *)(param_1 + 0x79700),*(uint *)this,*(int *)(this + 0x28),
                   *(int *)(this + 0x2c),iVar6,local_2c,0);
        uVar13 = Reward(CUser*,competition_reward_result&)::emptyItem._2_4_;
        if (local_3e == false) {
          local_25 = '\x01';
        }
        else {
          local_25 = '\x02';
        }
        this_00 = (CDataManager *)G_CDataManager();
        local_24 = (CItem *)CDataManager::find_item(this_00,uVar13);
        local_20 = -1;
        if (local_24 != (CItem *)0x0) {
          local_20 = CItem::get_rarity(local_24);
        }
        cVar5 = local_25;
        uVar13 = Reward(CUser*,competition_reward_result&)::emptyItem._2_4_;
        CVar1 = this[0x30];
        CVar2 = this[0x31];
        uVar11 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        uVar3 = *(uint *)(this + 0x28);
        uVar4 = *(uint *)this;
        uVar12 = CUser::get_acc_id(param_1);
        DB_MercenaryLogInfo::makeRequest
                  (uVar12,uVar4,uVar3,uVar11,cVar5,(char)CVar2,(char)CVar1,local_2c,uVar13,local_20)
        ;
        *(undefined4 *)(this + 0x28) = 0;
        *(undefined4 *)(this + 0x2c) = 0;
        this[0x30] = (CHARAC_LOAD_MERCENARY)0xff;
        this[0x31] = (CHARAC_LOAD_MERCENARY)0xff;
        alter(this);
        uVar13 = 1;
      }
    }
  }
  return uVar13;
}

```

---

## SendMessageToCUser

```asm
// === 081b4190 CHARAC_LOAD_MERCENARY::SendMessageToCUser  [0x081b4190-0x81b4197] ===
 81b4190:	55                   	push   %ebp
 81b4191:	89 e5                	mov    %esp,%ebp
 81b4193:	83 ec 10             	sub    $0x10,%esp
 81b4196:	c9                   	leave
 81b4197:	c3                   	ret

```

```c
// CHARAC_LOAD_MERCENARY::SendMessageToCUser @ 0x81b4190

/* CHARAC_LOAD_MERCENARY::SendMessageToCUser(CUser*, char*) const */

void CHARAC_LOAD_MERCENARY::SendMessageToCUser(CUser *param_1,char *param_2)

{
  return;
}

```

