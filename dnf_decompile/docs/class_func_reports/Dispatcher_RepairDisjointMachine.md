# Dispatcher_RepairDisjointMachine

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cfddc Dispatcher_RepairDisjointMachine::check_error  [0x081cfddc-0x81cfe3b] ===
 81cfddc:	55                   	push   %ebp
 81cfddd:	89 e5                	mov    %esp,%ebp
 81cfddf:	83 ec 18             	sub    $0x18,%esp
 81cfde2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfde5:	89 04 24             	mov    %eax,(%esp)
 81cfde8:	e8 9f a5 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cfded:	83 f8 02             	cmp    $0x2,%eax
 81cfdf0:	7e 0f                	jle    81cfe01 <_ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81cfdf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfdf5:	89 04 24             	mov    %eax,(%esp)
 81cfdf8:	e8 35 06 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cfdfd:	85 c0                	test   %eax,%eax
 81cfdff:	75 07                	jne    81cfe08 <_ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81cfe01:	b8 01 00 00 00       	mov    $0x1,%eax
 81cfe06:	eb 05                	jmp    81cfe0d <_ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x31>
 81cfe08:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfe0d:	84 c0                	test   %al,%al
 81cfe0f:	74 07                	je     81cfe18 <_ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81cfe11:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cfe16:	eb 21                	jmp    81cfe39 <_ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x5d>
 81cfe18:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfe1b:	89 04 24             	mov    %eax,(%esp)
 81cfe1e:	e8 71 fa 05 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 81cfe23:	83 f8 03             	cmp    $0x3,%eax
 81cfe26:	0f 95 c0             	setne  %al
 81cfe29:	84 c0                	test   %al,%al
 81cfe2b:	74 07                	je     81cfe34 <_ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x58>
 81cfe2d:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81cfe32:	eb 05                	jmp    81cfe39 <_ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase+0x5d>
 81cfe34:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfe39:	c9                   	leave
 81cfe3a:	c3                   	ret
 81cfe3b:	90                   	nop

```

```c
// Dispatcher_RepairDisjointMachine::check_error @ 0x81cfddc

/* Dispatcher_RepairDisjointMachine::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_RepairDisjointMachine::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cfe0d;
    }
  }
  bVar1 = true;
LAB_081cfe0d:
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
// === 081cfe3c Dispatcher_RepairDisjointMachine::process  [0x081cfe3c-0x81cfef1] ===
 81cfe3c:	55                   	push   %ebp
 81cfe3d:	89 e5                	mov    %esp,%ebp
 81cfe3f:	83 ec 28             	sub    $0x28,%esp
 81cfe42:	8b 45 14             	mov    0x14(%ebp),%eax
 81cfe45:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cfe48:	8b 45 14             	mov    0x14(%ebp),%eax
 81cfe4b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cfe4f:	8b 45 10             	mov    0x10(%ebp),%eax
 81cfe52:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cfe56:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfe59:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cfe5d:	8b 45 08             	mov    0x8(%ebp),%eax
 81cfe60:	89 04 24             	mov    %eax,(%esp)
 81cfe63:	e8 74 ff ff ff       	call   81cfddc <_ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81cfe68:	89 c2                	mov    %eax,%edx
 81cfe6a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfe6d:	89 50 04             	mov    %edx,0x4(%eax)
 81cfe70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfe73:	8b 40 04             	mov    0x4(%eax),%eax
 81cfe76:	85 c0                	test   %eax,%eax
 81cfe78:	7e 07                	jle    81cfe81 <_ZN32Dispatcher_RepairDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0x45>
 81cfe7a:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfe7f:	eb 6e                	jmp    81cfeef <_ZN32Dispatcher_RepairDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0xb3>
 81cfe81:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfe84:	8b 40 04             	mov    0x4(%eax),%eax
 81cfe87:	85 c0                	test   %eax,%eax
 81cfe89:	79 2f                	jns    81cfeba <_ZN32Dispatcher_RepairDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81cfe8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfe8e:	89 04 24             	mov    %eax,(%esp)
 81cfe91:	e8 d8 a4 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cfe96:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cfe99:	8b 52 04             	mov    0x4(%edx),%edx
 81cfe9c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cfea0:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cfea4:	c7 44 24 04 40 3f bd 	movl   $0x8bd3f40,0x4(%esp)
 81cfeab:	08 
 81cfeac:	c7 04 24 54 2a 00 00 	movl   $0x2a54,(%esp)
 81cfeb3:	e8 1f 0a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cfeb8:	eb 35                	jmp    81cfeef <_ZN32Dispatcher_RepairDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0xb3>
 81cfeba:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81cfec1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfec4:	89 04 24             	mov    %eax,(%esp)
 81cfec7:	e8 02 37 40 00       	call   85d35ce <_ZN10expert_job11CDisjointer23OnRepairDisjointMachineEP5CUser>
 81cfecc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cfecf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cfed3:	0f 95 c0             	setne  %al
 81cfed6:	84 c0                	test   %al,%al
 81cfed8:	74 10                	je     81cfeea <_ZN32Dispatcher_RepairDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0xae>
 81cfeda:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cfedd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfee0:	89 50 04             	mov    %edx,0x4(%eax)
 81cfee3:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfee8:	eb 05                	jmp    81cfeef <_ZN32Dispatcher_RepairDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase+0xb3>
 81cfeea:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfeef:	c9                   	leave
 81cfef0:	c3                   	ret
 81cfef1:	90                   	nop

```

```c
// Dispatcher_RepairDisjointMachine::process @ 0x81cfe3c

/* Dispatcher_RepairDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RepairDisjointMachine::process
          (Dispatcher_RepairDisjointMachine *this,CUser *param_1,MSG_BASE *param_2,
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
      uVar1 = LineFunc(0x2a54,
                       "virtual int Dispatcher_RepairDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      iVar3 = expert_job::CDisjointer::OnRepairDisjointMachine(param_1);
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
// === 081cfdd2 Dispatcher_RepairDisjointMachine::read  [0x081cfdd2-0x81cfddb] ===
 81cfdd2:	55                   	push   %ebp
 81cfdd3:	89 e5                	mov    %esp,%ebp
 81cfdd5:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfdda:	5d                   	pop    %ebp
 81cfddb:	c3                   	ret

```

```c
// Dispatcher_RepairDisjointMachine::read @ 0x81cfdd2

/* Dispatcher_RepairDisjointMachine::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_RepairDisjointMachine::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081cfef2 Dispatcher_RepairDisjointMachine::send  [0x081cfef2-0x81cff29] ===
 81cfef2:	55                   	push   %ebp
 81cfef3:	89 e5                	mov    %esp,%ebp
 81cfef5:	83 ec 28             	sub    $0x28,%esp
 81cfef8:	8b 45 10             	mov    0x10(%ebp),%eax
 81cfefb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cfefe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cff01:	8b 40 04             	mov    0x4(%eax),%eax
 81cff04:	85 c0                	test   %eax,%eax
 81cff06:	74 20                	je     81cff28 <_ZN32Dispatcher_RepairDisjointMachine4sendEP5CUserR9ParamBase+0x36>
 81cff08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cff0b:	8b 40 04             	mov    0x4(%eax),%eax
 81cff0e:	0f b6 c0             	movzbl %al,%eax
 81cff11:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cff15:	c7 44 24 04 f0 00 00 	movl   $0xf0,0x4(%esp)
 81cff1c:	00 
 81cff1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cff20:	89 04 24             	mov    %eax,(%esp)
 81cff23:	e8 1a c0 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cff28:	c9                   	leave
 81cff29:	c3                   	ret

```

```c
// Dispatcher_RepairDisjointMachine::send @ 0x81cfef2

/* Dispatcher_RepairDisjointMachine::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RepairDisjointMachine::send
          (Dispatcher_RepairDisjointMachine *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xf0,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

