# CMission_move_channel_total

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Update

```asm
// === 085e40ac CMission_move_channel_total::Update  [0x085e40ac-0x85e40d3] ===
 85e40ac:	55                   	push   %ebp
 85e40ad:	89 e5                	mov    %esp,%ebp
 85e40af:	8b 45 10             	mov    0x10(%ebp),%eax
 85e40b2:	8b 40 0b             	mov    0xb(%eax),%eax
 85e40b5:	89 c2                	mov    %eax,%edx
 85e40b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e40ba:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e40be:	8b 45 10             	mov    0x10(%ebp),%eax
 85e40c1:	8b 40 07             	mov    0x7(%eax),%eax
 85e40c4:	89 c2                	mov    %eax,%edx
 85e40c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e40c9:	66 89 50 06          	mov    %dx,0x6(%eax)
 85e40cd:	b8 01 00 00 00       	mov    $0x1,%eax
 85e40d2:	5d                   	pop    %ebp
 85e40d3:	c3                   	ret

```

```c
// CMission_move_channel_total::Update @ 0x85e40ac

/* CMission_move_channel_total::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
    */

undefined4 __thiscall
CMission_move_channel_total::Update
          (CMission_move_channel_total *this,MissionInfo *param_1,
          MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_1 + 4) = (short)*(undefined4 *)(param_2 + 0xb);
  *(short *)(param_1 + 6) = (short)*(undefined4 *)(param_2 + 7);
  return 1;
}

```

---

## _isAcceptCondition

```asm
// === 085e3fce CMission_move_channel_total::_isAcceptCondition  [0x085e3fce-0x85e40a1] ===
 85e3fce:	55                   	push   %ebp
 85e3fcf:	89 e5                	mov    %esp,%ebp
 85e3fd1:	83 ec 28             	sub    $0x28,%esp
 85e3fd4:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85e3fdb:	00 
 85e3fdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3fdf:	89 04 24             	mov    %eax,(%esp)
 85e3fe2:	e8 f7 75 ca ff       	call   828b5de <_ZNK5CUser20GetCharacExpandDataRE23ENUM_CHARAC_EXPAND_TYPE>
 85e3fe7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e3fea:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 85e3ff1:	00 
 85e3ff2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e3ff5:	89 04 24             	mov    %eax,(%esp)
 85e3ff8:	e8 cb 0b 00 00       	call   85e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>
 85e3ffd:	66 85 c0             	test   %ax,%ax
 85e4000:	0f 95 c0             	setne  %al
 85e4003:	84 c0                	test   %al,%al
 85e4005:	74 0a                	je     85e4011 <_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser+0x43>
 85e4007:	b8 00 00 00 00       	mov    $0x0,%eax
 85e400c:	e9 8f 00 00 00       	jmp    85e40a0 <_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser+0xd2>
 85e4011:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4014:	89 04 24             	mov    %eax,(%esp)
 85e4017:	e8 ea 28 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e401c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4020:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e4023:	89 04 24             	mov    %eax,(%esp)
 85e4026:	e8 cf 10 00 00       	call   85e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>
 85e402b:	84 c0                	test   %al,%al
 85e402d:	74 07                	je     85e4036 <_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser+0x68>
 85e402f:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4034:	eb 6a                	jmp    85e40a0 <_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser+0xd2>
 85e4036:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4039:	89 04 24             	mov    %eax,(%esp)
 85e403c:	e8 dd 28 00 00       	call   85e691e <_ZNK8CMission19GetPrevMissionIndexEv>
 85e4041:	83 f8 ff             	cmp    $0xffffffff,%eax
 85e4044:	0f 94 c0             	sete   %al
 85e4047:	84 c0                	test   %al,%al
 85e4049:	74 07                	je     85e4052 <_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser+0x84>
 85e404b:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4050:	eb 4e                	jmp    85e40a0 <_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser+0xd2>
 85e4052:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4055:	89 04 24             	mov    %eax,(%esp)
 85e4058:	e8 c1 28 00 00       	call   85e691e <_ZNK8CMission19GetPrevMissionIndexEv>
 85e405d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4061:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e4064:	89 04 24             	mov    %eax,(%esp)
 85e4067:	e8 8e 10 00 00       	call   85e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>
 85e406c:	84 c0                	test   %al,%al
 85e406e:	74 07                	je     85e4077 <_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser+0xa9>
 85e4070:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4075:	eb 29                	jmp    85e40a0 <_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser+0xd2>
 85e4077:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 85e407e:	00 
 85e407f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e4082:	89 04 24             	mov    %eax,(%esp)
 85e4085:	e8 3e 0b 00 00       	call   85e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>
 85e408a:	66 85 c0             	test   %ax,%ax
 85e408d:	0f 95 c0             	setne  %al
 85e4090:	84 c0                	test   %al,%al
 85e4092:	74 07                	je     85e409b <_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser+0xcd>
 85e4094:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4099:	eb 05                	jmp    85e40a0 <_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser+0xd2>
 85e409b:	b8 01 00 00 00       	mov    $0x1,%eax
 85e40a0:	c9                   	leave
 85e40a1:	c3                   	ret

```

```c
// CMission_move_channel_total::_isAcceptCondition @ 0x85e3fce

/* CMission_move_channel_total::_isAcceptCondition(CUser const&) const */

undefined4 __thiscall
CMission_move_channel_total::_isAcceptCondition(CMission_move_channel_total *this,CUser *param_1)

{
  char cVar1;
  short sVar2;
  CMissionList_Charac *this_00;
  undefined4 uVar3;
  int iVar4;
  
  this_00 = (CMissionList_Charac *)CUser::GetCharacExpandDataR(param_1,8);
  sVar2 = CMissionList_Charac::getIndex_byKind(this_00,0x1b);
  if (sVar2 == 0) {
    iVar4 = CMission::GetMissionIndex((CMission *)this);
    cVar1 = CMissionList_Charac::isClearMission(this_00,iVar4);
    if (cVar1 == '\0') {
      iVar4 = CMission::GetPrevMissionIndex((CMission *)this);
      if (iVar4 == -1) {
        uVar3 = 0;
      }
      else {
        iVar4 = CMission::GetPrevMissionIndex((CMission *)this);
        cVar1 = CMissionList_Charac::isClearMission(this_00,iVar4);
        if (cVar1 == '\0') {
          sVar2 = CMissionList_Charac::getIndex_byKind(this_00,7);
          if (sVar2 == 0) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
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
// === 085e40d4 CMission_move_channel_total::isClearable  [0x085e40d4-0x85e4129] ===
 85e40d4:	55                   	push   %ebp
 85e40d5:	89 e5                	mov    %esp,%ebp
 85e40d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e40da:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e40de:	66 83 f8 10          	cmp    $0x10,%ax
 85e40e2:	75 07                	jne    85e40eb <_ZNK27CMission_move_channel_total11isClearableER11MissionInfoRb+0x17>
 85e40e4:	b8 01 00 00 00       	mov    $0x1,%eax
 85e40e9:	eb 3d                	jmp    85e4128 <_ZNK27CMission_move_channel_total11isClearableER11MissionInfoRb+0x54>
 85e40eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85e40ee:	8b 50 40             	mov    0x40(%eax),%edx
 85e40f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e40f4:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e40f8:	98                   	cwtl
 85e40f9:	39 c2                	cmp    %eax,%edx
 85e40fb:	75 07                	jne    85e4104 <_ZNK27CMission_move_channel_total11isClearableER11MissionInfoRb+0x30>
 85e40fd:	b8 01 00 00 00       	mov    $0x1,%eax
 85e4102:	eb 24                	jmp    85e4128 <_ZNK27CMission_move_channel_total11isClearableER11MissionInfoRb+0x54>
 85e4104:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4107:	8b 40 40             	mov    0x40(%eax),%eax
 85e410a:	83 f8 0a             	cmp    $0xa,%eax
 85e410d:	75 14                	jne    85e4123 <_ZNK27CMission_move_channel_total11isClearableER11MissionInfoRb+0x4f>
 85e410f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4112:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e4116:	66 83 f8 03          	cmp    $0x3,%ax
 85e411a:	75 07                	jne    85e4123 <_ZNK27CMission_move_channel_total11isClearableER11MissionInfoRb+0x4f>
 85e411c:	b8 01 00 00 00       	mov    $0x1,%eax
 85e4121:	eb 05                	jmp    85e4128 <_ZNK27CMission_move_channel_total11isClearableER11MissionInfoRb+0x54>
 85e4123:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4128:	5d                   	pop    %ebp
 85e4129:	c3                   	ret

```

```c
// CMission_move_channel_total::isClearable @ 0x85e40d4

/* CMission_move_channel_total::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_move_channel_total::isClearable(MissionInfo *param_1,bool *param_2)

{
  undefined4 uVar1;
  
  if (*(short *)(param_2 + 6) == 0x10) {
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 0x40) == (int)*(short *)(param_2 + 4)) {
    uVar1 = 1;
  }
  else if ((*(int *)(param_1 + 0x40) == 10) && (*(short *)(param_2 + 4) == 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## verifyMission

```asm
// === 085e40a2 CMission_move_channel_total::verifyMission  [0x085e40a2-0x85e40ab] ===
 85e40a2:	55                   	push   %ebp
 85e40a3:	89 e5                	mov    %esp,%ebp
 85e40a5:	b8 01 00 00 00       	mov    $0x1,%eax
 85e40aa:	5d                   	pop    %ebp
 85e40ab:	c3                   	ret

```

```c
// CMission_move_channel_total::verifyMission @ 0x85e40a2

/* CMission_move_channel_total::verifyMission(MissionInfo const&) const */

undefined4 CMission_move_channel_total::verifyMission(MissionInfo *param_1)

{
  return 1;
}

```

