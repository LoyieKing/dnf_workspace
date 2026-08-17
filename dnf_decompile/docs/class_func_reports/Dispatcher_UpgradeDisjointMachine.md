# Dispatcher_UpgradeDisjointMachine

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cff34 Dispatcher_UpgradeDisjointMachine::check_error  [0x081cff34-0x81cff93] ===
 81cff34:	55                   	push   %ebp
 81cff35:	89 e5                	mov    %esp,%ebp
 81cff37:	83 ec 18             	sub    $0x18,%esp
 81cff3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cff3d:	89 04 24             	mov    %eax,(%esp)
 81cff40:	e8 47 a4 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cff45:	83 f8 02             	cmp    $0x2,%eax
 81cff48:	7e 0f                	jle    81cff59 <_ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81cff4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cff4d:	89 04 24             	mov    %eax,(%esp)
 81cff50:	e8 dd 04 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cff55:	85 c0                	test   %eax,%eax
 81cff57:	75 07                	jne    81cff60 <_ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81cff59:	b8 01 00 00 00       	mov    $0x1,%eax
 81cff5e:	eb 05                	jmp    81cff65 <_ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x31>
 81cff60:	b8 00 00 00 00       	mov    $0x0,%eax
 81cff65:	84 c0                	test   %al,%al
 81cff67:	74 07                	je     81cff70 <_ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81cff69:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cff6e:	eb 21                	jmp    81cff91 <_ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x5d>
 81cff70:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cff73:	89 04 24             	mov    %eax,(%esp)
 81cff76:	e8 19 f9 05 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 81cff7b:	83 f8 03             	cmp    $0x3,%eax
 81cff7e:	0f 95 c0             	setne  %al
 81cff81:	84 c0                	test   %al,%al
 81cff83:	74 07                	je     81cff8c <_ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x58>
 81cff85:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81cff8a:	eb 05                	jmp    81cff91 <_ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x5d>
 81cff8c:	b8 00 00 00 00       	mov    $0x0,%eax
 81cff91:	c9                   	leave
 81cff92:	c3                   	ret
 81cff93:	90                   	nop

```

```c
// Dispatcher_UpgradeDisjointMachine::check_error @ 0x81cff34

/* Dispatcher_UpgradeDisjointMachine::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_UpgradeDisjointMachine::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cff65;
    }
  }
  bVar1 = true;
LAB_081cff65:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_2);
    if (iVar2 == 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  return uVar3;
}

```

---

## process

```asm
// === 081cff94 Dispatcher_UpgradeDisjointMachine::process  [0x081cff94-0x81d0049] ===
 81cff94:	55                   	push   %ebp
 81cff95:	89 e5                	mov    %esp,%ebp
 81cff97:	83 ec 28             	sub    $0x28,%esp
 81cff9a:	8b 45 14             	mov    0x14(%ebp),%eax
 81cff9d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cffa0:	8b 45 14             	mov    0x14(%ebp),%eax
 81cffa3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cffa7:	8b 45 10             	mov    0x10(%ebp),%eax
 81cffaa:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cffae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cffb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cffb5:	8b 45 08             	mov    0x8(%ebp),%eax
 81cffb8:	89 04 24             	mov    %eax,(%esp)
 81cffbb:	e8 74 ff ff ff       	call   81cff34 <_ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81cffc0:	89 c2                	mov    %eax,%edx
 81cffc2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cffc5:	89 50 04             	mov    %edx,0x4(%eax)
 81cffc8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cffcb:	8b 40 04             	mov    0x4(%eax),%eax
 81cffce:	85 c0                	test   %eax,%eax
 81cffd0:	7e 07                	jle    81cffd9 <_ZN33Dispatcher_UpgradeDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0x45>
 81cffd2:	b8 00 00 00 00       	mov    $0x0,%eax
 81cffd7:	eb 6e                	jmp    81d0047 <_ZN33Dispatcher_UpgradeDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0xb3>
 81cffd9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cffdc:	8b 40 04             	mov    0x4(%eax),%eax
 81cffdf:	85 c0                	test   %eax,%eax
 81cffe1:	79 2f                	jns    81d0012 <_ZN33Dispatcher_UpgradeDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81cffe3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cffe6:	89 04 24             	mov    %eax,(%esp)
 81cffe9:	e8 80 a3 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cffee:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cfff1:	8b 52 04             	mov    0x4(%edx),%edx
 81cfff4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cfff8:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cfffc:	c7 44 24 04 e0 3e bd 	movl   $0x8bd3ee0,0x4(%esp)
 81d0003:	08 
 81d0004:	c7 04 24 89 2a 00 00 	movl   $0x2a89,(%esp)
 81d000b:	e8 c7 08 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0010:	eb 35                	jmp    81d0047 <_ZN33Dispatcher_UpgradeDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0xb3>
 81d0012:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d0019:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d001c:	89 04 24             	mov    %eax,(%esp)
 81d001f:	e8 c4 37 40 00       	call   85d37e8 <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser>
 81d0024:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0027:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d002b:	0f 95 c0             	setne  %al
 81d002e:	84 c0                	test   %al,%al
 81d0030:	74 10                	je     81d0042 <_ZN33Dispatcher_UpgradeDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0xae>
 81d0032:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d0035:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d0038:	89 50 04             	mov    %edx,0x4(%eax)
 81d003b:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0040:	eb 05                	jmp    81d0047 <_ZN33Dispatcher_UpgradeDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0xb3>
 81d0042:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0047:	c9                   	leave
 81d0048:	c3                   	ret
 81d0049:	90                   	nop

```

```c
// Dispatcher_UpgradeDisjointMachine::process @ 0x81cff94

/* Dispatcher_UpgradeDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UpgradeDisjointMachine::process
          (Dispatcher_UpgradeDisjointMachine *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2a89,
                       "virtual int Dispatcher_UpgradeDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      iVar3 = expert_job::CDisjointer::OnUpgradeDisjointMachine(param_1);
      if (iVar3 == 0) {
        uVar1 = 0;
      }
      else {
        *(int *)(param_3 + 4) = iVar3;
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081cff2a Dispatcher_UpgradeDisjointMachine::read  [0x081cff2a-0x81cff33] ===
 81cff2a:	55                   	push   %ebp
 81cff2b:	89 e5                	mov    %esp,%ebp
 81cff2d:	b8 00 00 00 00       	mov    $0x0,%eax
 81cff32:	5d                   	pop    %ebp
 81cff33:	c3                   	ret

```

```c
// Dispatcher_UpgradeDisjointMachine::read @ 0x81cff2a

/* Dispatcher_UpgradeDisjointMachine::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_UpgradeDisjointMachine::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081d004a Dispatcher_UpgradeDisjointMachine::send  [0x081d004a-0x81d0081] ===
 81d004a:	55                   	push   %ebp
 81d004b:	89 e5                	mov    %esp,%ebp
 81d004d:	83 ec 28             	sub    $0x28,%esp
 81d0050:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0053:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0056:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0059:	8b 40 04             	mov    0x4(%eax),%eax
 81d005c:	85 c0                	test   %eax,%eax
 81d005e:	74 20                	je     81d0080 <_ZN33Dispatcher_UpgradeDisjointMachine4sendEP5CUserR9ParamBase+0x36>
 81d0060:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0063:	8b 40 04             	mov    0x4(%eax),%eax
 81d0066:	0f b6 c0             	movzbl %al,%eax
 81d0069:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d006d:	c7 44 24 04 f4 00 00 	movl   $0xf4,0x4(%esp)
 81d0074:	00 
 81d0075:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0078:	89 04 24             	mov    %eax,(%esp)
 81d007b:	e8 c2 be 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d0080:	c9                   	leave
 81d0081:	c3                   	ret

```

```c
// Dispatcher_UpgradeDisjointMachine::send @ 0x81d004a

/* Dispatcher_UpgradeDisjointMachine::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_UpgradeDisjointMachine::send
          (Dispatcher_UpgradeDisjointMachine *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xf4,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

