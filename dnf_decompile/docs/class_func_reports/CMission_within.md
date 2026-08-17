# CMission_within

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Update

```asm
// === 085e3d58 CMission_within::Update  [0x085e3d58-0x85e3db7] ===
 85e3d58:	55                   	push   %ebp
 85e3d59:	89 e5                	mov    %esp,%ebp
 85e3d5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3d5e:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3d62:	98                   	cwtl
 85e3d63:	01 c0                	add    %eax,%eax
 85e3d65:	89 c2                	mov    %eax,%edx
 85e3d67:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3d6a:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e3d6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3d71:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3d75:	89 c2                	mov    %eax,%edx
 85e3d77:	8b 45 10             	mov    0x10(%ebp),%eax
 85e3d7a:	0f b7 40 01          	movzwl 0x1(%eax),%eax
 85e3d7e:	0f b7 c0             	movzwl %ax,%eax
 85e3d81:	83 e0 01             	and    $0x1,%eax
 85e3d84:	84 c0                	test   %al,%al
 85e3d86:	74 07                	je     85e3d8f <_ZNK15CMission_within6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0x37>
 85e3d88:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3d8d:	eb 05                	jmp    85e3d94 <_ZNK15CMission_within6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0x3c>
 85e3d8f:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3d94:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85e3d97:	89 c2                	mov    %eax,%edx
 85e3d99:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3d9c:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e3da0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3da3:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e3da7:	8d 50 01             	lea    0x1(%eax),%edx
 85e3daa:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3dad:	66 89 50 06          	mov    %dx,0x6(%eax)
 85e3db1:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3db6:	5d                   	pop    %ebp
 85e3db7:	c3                   	ret

```

```c
// CMission_within::Update @ 0x85e3d58

/* CMission_within::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 __thiscall
CMission_within::Update
          (CMission_within *this,MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) * 2;
  *(ushort *)(param_1 + 4) = *(short *)(param_1 + 4) + (ushort)((*(ushort *)(param_2 + 1) & 1) != 0)
  ;
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  return 1;
}

```

---

## _isAcceptCondition

```asm
// === 085e3c30 CMission_within::_isAcceptCondition  [0x085e3c30-0x85e3d4d] ===
 85e3c30:	55                   	push   %ebp
 85e3c31:	89 e5                	mov    %esp,%ebp
 85e3c33:	53                   	push   %ebx
 85e3c34:	83 ec 44             	sub    $0x44,%esp
 85e3c37:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85e3c3e:	00 
 85e3c3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3c42:	89 04 24             	mov    %eax,(%esp)
 85e3c45:	e8 94 79 ca ff       	call   828b5de <_ZNK5CUser20GetCharacExpandDataRE23ENUM_CHARAC_EXPAND_TYPE>
 85e3c4a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85e3c4d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3c50:	89 04 24             	mov    %eax,(%esp)
 85e3c53:	e8 ae 2c 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e3c58:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e3c5c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e3c5f:	89 04 24             	mov    %eax,(%esp)
 85e3c62:	e8 93 14 00 00       	call   85e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>
 85e3c67:	84 c0                	test   %al,%al
 85e3c69:	74 0a                	je     85e3c75 <_ZNK15CMission_within18_isAcceptConditionERK5CUser+0x45>
 85e3c6b:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3c70:	e9 d4 00 00 00       	jmp    85e3d49 <_ZNK15CMission_within18_isAcceptConditionERK5CUser+0x119>
 85e3c75:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3c78:	89 04 24             	mov    %eax,(%esp)
 85e3c7b:	e8 de b4 c4 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 85e3c80:	8b 58 14             	mov    0x14(%eax),%ebx
 85e3c83:	8b 55 08             	mov    0x8(%ebp),%edx
 85e3c86:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e3c89:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e3c8d:	89 04 24             	mov    %eax,(%esp)
 85e3c90:	e8 95 2c 00 00       	call   85e692a <_ZNK8CMission12GetRankRangeEv>
 85e3c95:	83 ec 04             	sub    $0x4,%esp
 85e3c98:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85e3c9b:	39 c3                	cmp    %eax,%ebx
 85e3c9d:	0f 95 c0             	setne  %al
 85e3ca0:	84 c0                	test   %al,%al
 85e3ca2:	74 0a                	je     85e3cae <_ZNK15CMission_within18_isAcceptConditionERK5CUser+0x7e>
 85e3ca4:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3ca9:	e9 9b 00 00 00       	jmp    85e3d49 <_ZNK15CMission_within18_isAcceptConditionERK5CUser+0x119>
 85e3cae:	8b 55 08             	mov    0x8(%ebp),%edx
 85e3cb1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85e3cb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e3cb8:	89 04 24             	mov    %eax,(%esp)
 85e3cbb:	e8 6a 2c 00 00       	call   85e692a <_ZNK8CMission12GetRankRangeEv>
 85e3cc0:	83 ec 04             	sub    $0x4,%esp
 85e3cc3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85e3cc6:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 85e3ccb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e3ccf:	89 04 24             	mov    %eax,(%esp)
 85e3cd2:	e8 5b 0b ff ff       	call   85d4832 <_ZNK11RefPvpGrade11GetPvpPointEi>
 85e3cd7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85e3cda:	8b 55 08             	mov    0x8(%ebp),%edx
 85e3cdd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e3ce0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e3ce4:	89 04 24             	mov    %eax,(%esp)
 85e3ce7:	e8 3e 2c 00 00       	call   85e692a <_ZNK8CMission12GetRankRangeEv>
 85e3cec:	83 ec 04             	sub    $0x4,%esp
 85e3cef:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85e3cf2:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 85e3cf7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e3cfb:	89 04 24             	mov    %eax,(%esp)
 85e3cfe:	e8 5d 0b ff ff       	call   85d4860 <_ZNK11RefPvpGrade19GetPvpNextRankPointEi>
 85e3d03:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e3d06:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3d09:	89 04 24             	mov    %eax,(%esp)
 85e3d0c:	e8 4d b4 c4 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 85e3d11:	8b 50 08             	mov    0x8(%eax),%edx
 85e3d14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e3d17:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85e3d1a:	89 cb                	mov    %ecx,%ebx
 85e3d1c:	29 c3                	sub    %eax,%ebx
 85e3d1e:	89 d8                	mov    %ebx,%eax
 85e3d20:	03 45 f0             	add    -0x10(%ebp),%eax
 85e3d23:	39 c2                	cmp    %eax,%edx
 85e3d25:	0f 9d c0             	setge  %al
 85e3d28:	84 c0                	test   %al,%al
 85e3d2a:	74 18                	je     85e3d44 <_ZNK15CMission_within18_isAcceptConditionERK5CUser+0x114>
 85e3d2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3d2f:	89 04 24             	mov    %eax,(%esp)
 85e3d32:	e8 8d 81 f0 ff       	call   84ebec4 <_ZN15CUserCharacInfo16getPVPResultRefWEv>
 85e3d37:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e3d3a:	89 50 08             	mov    %edx,0x8(%eax)
 85e3d3d:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3d42:	eb 05                	jmp    85e3d49 <_ZNK15CMission_within18_isAcceptConditionERK5CUser+0x119>
 85e3d44:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3d49:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85e3d4c:	c9                   	leave
 85e3d4d:	c3                   	ret

```

```c
// CMission_within::_isAcceptCondition @ 0x85e3c30

/* CMission_within::_isAcceptCondition(CUser const&) const */

undefined4 __thiscall CMission_within::_isAcceptCondition(CMission_within *this,CUser *param_1)

{
  char cVar1;
  CMissionList_Charac *this_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  
  this_00 = (CMissionList_Charac *)CUser::GetCharacExpandDataR(param_1,8);
  iVar2 = CMission::GetMissionIndex((CMission *)this);
  cVar1 = CMissionList_Charac::isClearMission(this_00,iVar2);
  if (cVar1 == '\0') {
    iVar2 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1);
    iVar2 = *(int *)(iVar2 + 0x14);
    CMission::GetRankRange();
    if (iVar2 == local_30) {
      CMission::GetRankRange();
      RefPvpGrade::GetPvpPoint(GlobalData::s_ref_pvp_grade,local_28);
      CMission::GetRankRange();
      iVar2 = RefPvpGrade::GetPvpNextRankPoint(GlobalData::s_ref_pvp_grade,local_20);
      iVar4 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1);
      if (*(int *)(iVar4 + 8) < iVar2) {
        uVar3 = 0;
      }
      else {
        iVar4 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)param_1);
        *(int *)(iVar4 + 8) = iVar2;
        uVar3 = 1;
      }
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
// === 085e3db8 CMission_within::isClearable  [0x085e3db8-0x85e3e5b] ===
 85e3db8:	55                   	push   %ebp
 85e3db9:	89 e5                	mov    %esp,%ebp
 85e3dbb:	53                   	push   %ebx
 85e3dbc:	83 ec 10             	sub    $0x10,%esp
 85e3dbf:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
 85e3dc5:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85e3dcc:	eb 25                	jmp    85e3df3 <_ZNK15CMission_within11isClearableER11MissionInfoRb+0x3b>
 85e3dce:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3dd1:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3dd5:	0f bf d0             	movswl %ax,%edx
 85e3dd8:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85e3ddb:	89 d3                	mov    %edx,%ebx
 85e3ddd:	89 c1                	mov    %eax,%ecx
 85e3ddf:	d3 fb                	sar    %cl,%ebx
 85e3de1:	89 d8                	mov    %ebx,%eax
 85e3de3:	83 e0 01             	and    $0x1,%eax
 85e3de6:	84 c0                	test   %al,%al
 85e3de8:	74 05                	je     85e3def <_ZNK15CMission_within11isClearableER11MissionInfoRb+0x37>
 85e3dea:	66 83 45 f6 01       	addw   $0x1,-0xa(%ebp)
 85e3def:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85e3df3:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3df6:	8b 40 40             	mov    0x40(%eax),%eax
 85e3df9:	3b 45 f8             	cmp    -0x8(%ebp),%eax
 85e3dfc:	0f 9f c0             	setg   %al
 85e3dff:	84 c0                	test   %al,%al
 85e3e01:	75 cb                	jne    85e3dce <_ZNK15CMission_within11isClearableER11MissionInfoRb+0x16>
 85e3e03:	0f bf 55 f6          	movswl -0xa(%ebp),%edx
 85e3e07:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3e0a:	8b 40 44             	mov    0x44(%eax),%eax
 85e3e0d:	39 c2                	cmp    %eax,%edx
 85e3e0f:	7c 07                	jl     85e3e18 <_ZNK15CMission_within11isClearableER11MissionInfoRb+0x60>
 85e3e11:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3e16:	eb 3d                	jmp    85e3e55 <_ZNK15CMission_within11isClearableER11MissionInfoRb+0x9d>
 85e3e18:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3e1b:	8b 50 40             	mov    0x40(%eax),%edx
 85e3e1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3e21:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e3e25:	98                   	cwtl
 85e3e26:	29 c2                	sub    %eax,%edx
 85e3e28:	0f bf 45 f6          	movswl -0xa(%ebp),%eax
 85e3e2c:	01 c2                	add    %eax,%edx
 85e3e2e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3e31:	8b 40 44             	mov    0x44(%eax),%eax
 85e3e34:	39 c2                	cmp    %eax,%edx
 85e3e36:	7d 18                	jge    85e3e50 <_ZNK15CMission_within11isClearableER11MissionInfoRb+0x98>
 85e3e38:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3e3b:	66 c7 40 04 00 00    	movw   $0x0,0x4(%eax)
 85e3e41:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3e44:	66 c7 40 06 00 00    	movw   $0x0,0x6(%eax)
 85e3e4a:	8b 45 10             	mov    0x10(%ebp),%eax
 85e3e4d:	c6 00 01             	movb   $0x1,(%eax)
 85e3e50:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3e55:	83 c4 10             	add    $0x10,%esp
 85e3e58:	5b                   	pop    %ebx
 85e3e59:	5d                   	pop    %ebp
 85e3e5a:	c3                   	ret
 85e3e5b:	90                   	nop

```

```c
// CMission_within::isClearable @ 0x85e3db8

/* CMission_within::isClearable(MissionInfo&, bool&) const */

undefined4 __thiscall
CMission_within::isClearable(CMission_within *this,MissionInfo *param_1,bool *param_2)

{
  undefined4 uVar1;
  short local_e;
  int local_c;
  
  local_e = 0;
  for (local_c = 0; local_c < *(int *)(this + 0x40); local_c = local_c + 1) {
    if (((int)*(short *)(param_1 + 4) >> ((byte)local_c & 0x1f) & 1U) != 0) {
      local_e = local_e + 1;
    }
  }
  if ((int)local_e < *(int *)(this + 0x44)) {
    if ((*(int *)(this + 0x40) - (int)*(short *)(param_1 + 6)) + (int)local_e <
        *(int *)(this + 0x44)) {
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined2 *)(param_1 + 6) = 0;
      *param_2 = true;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## verifyMission

```asm
// === 085e3d4e CMission_within::verifyMission  [0x085e3d4e-0x85e3d57] ===
 85e3d4e:	55                   	push   %ebp
 85e3d4f:	89 e5                	mov    %esp,%ebp
 85e3d51:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3d56:	5d                   	pop    %ebp
 85e3d57:	c3                   	ret

```

```c
// CMission_within::verifyMission @ 0x85e3d4e

/* CMission_within::verifyMission(MissionInfo const&) const */

undefined4 CMission_within::verifyMission(MissionInfo *param_1)

{
  return 1;
}

```

