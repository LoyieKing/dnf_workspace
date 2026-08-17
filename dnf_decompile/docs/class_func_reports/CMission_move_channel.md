# CMission_move_channel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Update

```asm
// === 085e3f50 CMission_move_channel::Update  [0x085e3f50-0x85e3f77] ===
 85e3f50:	55                   	push   %ebp
 85e3f51:	89 e5                	mov    %esp,%ebp
 85e3f53:	8b 45 10             	mov    0x10(%ebp),%eax
 85e3f56:	8b 40 0b             	mov    0xb(%eax),%eax
 85e3f59:	89 c2                	mov    %eax,%edx
 85e3f5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3f5e:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e3f62:	8b 45 10             	mov    0x10(%ebp),%eax
 85e3f65:	8b 40 07             	mov    0x7(%eax),%eax
 85e3f68:	89 c2                	mov    %eax,%edx
 85e3f6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3f6d:	66 89 50 06          	mov    %dx,0x6(%eax)
 85e3f71:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3f76:	5d                   	pop    %ebp
 85e3f77:	c3                   	ret

```

```c
// CMission_move_channel::Update @ 0x85e3f50

/* CMission_move_channel::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 __thiscall
CMission_move_channel::Update
          (CMission_move_channel *this,MissionInfo *param_1,MissionClearCondition_Parameter *param_2
          )

{
  *(short *)(param_1 + 4) = (short)*(undefined4 *)(param_2 + 0xb);
  *(short *)(param_1 + 6) = (short)*(undefined4 *)(param_2 + 7);
  return 1;
}

```

---

## _isAcceptCondition

```asm
// === 085e3f2c CMission_move_channel::_isAcceptCondition  [0x085e3f2c-0x85e3f45] ===
 85e3f2c:	55                   	push   %ebp
 85e3f2d:	89 e5                	mov    %esp,%ebp
 85e3f2f:	83 ec 18             	sub    $0x18,%esp
 85e3f32:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3f35:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e3f38:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e3f3c:	89 04 24             	mov    %eax,(%esp)
 85e3f3f:	e8 4c f5 ff ff       	call   85e3490 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser>
 85e3f44:	c9                   	leave
 85e3f45:	c3                   	ret

```

```c
// CMission_move_channel::_isAcceptCondition @ 0x85e3f2c

/* CMission_move_channel::_isAcceptCondition(CUser const&) const */

void __thiscall
CMission_move_channel::_isAcceptCondition(CMission_move_channel *this,CUser *param_1)

{
  CMission::_isAcceptCondition_Series((CMission *)this,param_1);
  return;
}

```

---

## isClearable

```asm
// === 085e3f78 CMission_move_channel::isClearable  [0x085e3f78-0x85e3fcd] ===
 85e3f78:	55                   	push   %ebp
 85e3f79:	89 e5                	mov    %esp,%ebp
 85e3f7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3f7e:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e3f82:	66 83 f8 10          	cmp    $0x10,%ax
 85e3f86:	75 07                	jne    85e3f8f <_ZNK21CMission_move_channel11isClearableER11MissionInfoRb+0x17>
 85e3f88:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3f8d:	eb 3d                	jmp    85e3fcc <_ZNK21CMission_move_channel11isClearableER11MissionInfoRb+0x54>
 85e3f8f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3f92:	8b 50 40             	mov    0x40(%eax),%edx
 85e3f95:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3f98:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3f9c:	98                   	cwtl
 85e3f9d:	39 c2                	cmp    %eax,%edx
 85e3f9f:	75 07                	jne    85e3fa8 <_ZNK21CMission_move_channel11isClearableER11MissionInfoRb+0x30>
 85e3fa1:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3fa6:	eb 24                	jmp    85e3fcc <_ZNK21CMission_move_channel11isClearableER11MissionInfoRb+0x54>
 85e3fa8:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3fab:	8b 40 40             	mov    0x40(%eax),%eax
 85e3fae:	83 f8 0a             	cmp    $0xa,%eax
 85e3fb1:	75 14                	jne    85e3fc7 <_ZNK21CMission_move_channel11isClearableER11MissionInfoRb+0x4f>
 85e3fb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3fb6:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3fba:	66 83 f8 03          	cmp    $0x3,%ax
 85e3fbe:	75 07                	jne    85e3fc7 <_ZNK21CMission_move_channel11isClearableER11MissionInfoRb+0x4f>
 85e3fc0:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3fc5:	eb 05                	jmp    85e3fcc <_ZNK21CMission_move_channel11isClearableER11MissionInfoRb+0x54>
 85e3fc7:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3fcc:	5d                   	pop    %ebp
 85e3fcd:	c3                   	ret

```

```c
// CMission_move_channel::isClearable @ 0x85e3f78

/* CMission_move_channel::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_move_channel::isClearable(MissionInfo *param_1,bool *param_2)

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
// === 085e3f46 CMission_move_channel::verifyMission  [0x085e3f46-0x85e3f4f] ===
 85e3f46:	55                   	push   %ebp
 85e3f47:	89 e5                	mov    %esp,%ebp
 85e3f49:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3f4e:	5d                   	pop    %ebp
 85e3f4f:	c3                   	ret

```

```c
// CMission_move_channel::verifyMission @ 0x85e3f46

/* CMission_move_channel::verifyMission(MissionInfo const&) const */

undefined4 CMission_move_channel::verifyMission(MissionInfo *param_1)

{
  return 1;
}

```

