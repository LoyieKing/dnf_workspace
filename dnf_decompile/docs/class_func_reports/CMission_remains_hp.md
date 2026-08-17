# CMission_remains_hp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Update

```asm
// === 085e3eec CMission_remains_hp::Update  [0x085e3eec-0x85e3f07] ===
 85e3eec:	55                   	push   %ebp
 85e3eed:	89 e5                	mov    %esp,%ebp
 85e3eef:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3ef2:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3ef6:	8d 50 01             	lea    0x1(%eax),%edx
 85e3ef9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3efc:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e3f00:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3f05:	5d                   	pop    %ebp
 85e3f06:	c3                   	ret
 85e3f07:	90                   	nop

```

```c
// CMission_remains_hp::Update @ 0x85e3eec

/* CMission_remains_hp::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4
CMission_remains_hp::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}

```

---

## _isAcceptCondition

```asm
// === 085e3e5c CMission_remains_hp::_isAcceptCondition  [0x085e3e5c-0x85e3ec5] ===
 85e3e5c:	55                   	push   %ebp
 85e3e5d:	89 e5                	mov    %esp,%ebp
 85e3e5f:	83 ec 28             	sub    $0x28,%esp
 85e3e62:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85e3e69:	00 
 85e3e6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3e6d:	89 04 24             	mov    %eax,(%esp)
 85e3e70:	e8 69 77 ca ff       	call   828b5de <_ZNK5CUser20GetCharacExpandDataRE23ENUM_CHARAC_EXPAND_TYPE>
 85e3e75:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e3e78:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3e7b:	89 04 24             	mov    %eax,(%esp)
 85e3e7e:	e8 83 2a 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e3e83:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e3e87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e3e8a:	89 04 24             	mov    %eax,(%esp)
 85e3e8d:	e8 68 12 00 00       	call   85e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>
 85e3e92:	84 c0                	test   %al,%al
 85e3e94:	74 07                	je     85e3e9d <_ZNK19CMission_remains_hp18_isAcceptConditionERK5CUser+0x41>
 85e3e96:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3e9b:	eb 26                	jmp    85e3ec3 <_ZNK19CMission_remains_hp18_isAcceptConditionERK5CUser+0x67>
 85e3e9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3ea0:	89 04 24             	mov    %eax,(%esp)
 85e3ea3:	e8 78 a0 b1 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 85e3ea8:	8b 55 08             	mov    0x8(%ebp),%edx
 85e3eab:	8b 52 3c             	mov    0x3c(%edx),%edx
 85e3eae:	39 d0                	cmp    %edx,%eax
 85e3eb0:	0f 94 c0             	sete   %al
 85e3eb3:	84 c0                	test   %al,%al
 85e3eb5:	74 07                	je     85e3ebe <_ZNK19CMission_remains_hp18_isAcceptConditionERK5CUser+0x62>
 85e3eb7:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3ebc:	eb 05                	jmp    85e3ec3 <_ZNK19CMission_remains_hp18_isAcceptConditionERK5CUser+0x67>
 85e3ebe:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3ec3:	c9                   	leave
 85e3ec4:	c3                   	ret
 85e3ec5:	90                   	nop

```

```c
// CMission_remains_hp::_isAcceptCondition @ 0x85e3e5c

/* CMission_remains_hp::_isAcceptCondition(CUser const&) const */

undefined4 __thiscall
CMission_remains_hp::_isAcceptCondition(CMission_remains_hp *this,CUser *param_1)

{
  char cVar1;
  CMissionList_Charac *this_00;
  int iVar2;
  undefined4 uVar3;
  
  this_00 = (CMissionList_Charac *)CUser::GetCharacExpandDataR(param_1,8);
  iVar2 = CMission::GetMissionIndex((CMission *)this);
  cVar1 = CMissionList_Charac::isClearMission(this_00,iVar2);
  if (cVar1 == '\0') {
    iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar2 == *(int *)(this + 0x3c)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## isClearable

```asm
// === 085e3f08 CMission_remains_hp::isClearable  [0x085e3f08-0x85e3f2b] ===
 85e3f08:	55                   	push   %ebp
 85e3f09:	89 e5                	mov    %esp,%ebp
 85e3f0b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3f0e:	8b 50 44             	mov    0x44(%eax),%edx
 85e3f11:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3f14:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3f18:	98                   	cwtl
 85e3f19:	39 c2                	cmp    %eax,%edx
 85e3f1b:	7f 07                	jg     85e3f24 <_ZNK19CMission_remains_hp11isClearableER11MissionInfoRb+0x1c>
 85e3f1d:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3f22:	eb 05                	jmp    85e3f29 <_ZNK19CMission_remains_hp11isClearableER11MissionInfoRb+0x21>
 85e3f24:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3f29:	5d                   	pop    %ebp
 85e3f2a:	c3                   	ret
 85e3f2b:	90                   	nop

```

```c
// CMission_remains_hp::isClearable @ 0x85e3f08

/* CMission_remains_hp::isClearable(MissionInfo&, bool&) const */

bool CMission_remains_hp::isClearable(MissionInfo *param_1,bool *param_2)

{
  return *(int *)(param_1 + 0x44) <= (int)*(short *)(param_2 + 4);
}

```

---

## verifyMission

```asm
// === 085e3ec6 CMission_remains_hp::verifyMission  [0x085e3ec6-0x85e3eeb] ===
 85e3ec6:	55                   	push   %ebp
 85e3ec7:	89 e5                	mov    %esp,%ebp
 85e3ec9:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3ecc:	8b 40 44             	mov    0x44(%eax),%eax
 85e3ecf:	8d 50 0a             	lea    0xa(%eax),%edx
 85e3ed2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3ed5:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3ed9:	98                   	cwtl
 85e3eda:	39 c2                	cmp    %eax,%edx
 85e3edc:	7f 07                	jg     85e3ee5 <_ZNK19CMission_remains_hp13verifyMissionERK11MissionInfo+0x1f>
 85e3ede:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3ee3:	eb 05                	jmp    85e3eea <_ZNK19CMission_remains_hp13verifyMissionERK11MissionInfo+0x24>
 85e3ee5:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3eea:	5d                   	pop    %ebp
 85e3eeb:	c3                   	ret

```

```c
// CMission_remains_hp::verifyMission @ 0x85e3ec6

/* CMission_remains_hp::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_remains_hp::verifyMission(CMission_remains_hp *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x44) + 10;
}

```

