# DisPatcher_RecoverStamina

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c3f4a DisPatcher_RecoverStamina::check_error  [0x081c3f4a-0x81c3fb7] ===
 81c3f4a:	55                   	push   %ebp
 81c3f4b:	89 e5                	mov    %esp,%ebp
 81c3f4d:	83 ec 28             	sub    $0x28,%esp
 81c3f50:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3f53:	89 04 24             	mov    %eax,(%esp)
 81c3f56:	e8 31 64 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c3f5b:	83 f8 03             	cmp    $0x3,%eax
 81c3f5e:	0f 95 c0             	setne  %al
 81c3f61:	84 c0                	test   %al,%al
 81c3f63:	74 07                	je     81c3f6c <_ZN25DisPatcher_RecoverStamina11check_errorEP5CUserR8MSG_BASE+0x22>
 81c3f65:	b8 63 00 00 00       	mov    $0x63,%eax
 81c3f6a:	eb 4a                	jmp    81c3fb6 <_ZN25DisPatcher_RecoverStamina11check_errorEP5CUserR8MSG_BASE+0x6c>
 81c3f6c:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81c3f71:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81c3f78:	00 
 81c3f79:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c3f7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c3f80:	89 04 24             	mov    %eax,(%esp)
 81c3f83:	e8 7a 4a 0c 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81c3f88:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c3f8b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c3f8f:	74 05                	je     81c3f96 <_ZN25DisPatcher_RecoverStamina11check_errorEP5CUserR8MSG_BASE+0x4c>
 81c3f91:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3f94:	eb 20                	jmp    81c3fb6 <_ZN25DisPatcher_RecoverStamina11check_errorEP5CUserR8MSG_BASE+0x6c>
 81c3f96:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3f99:	89 04 24             	mov    %eax,(%esp)
 81c3f9c:	e8 91 c4 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81c3fa1:	85 c0                	test   %eax,%eax
 81c3fa3:	0f 94 c0             	sete   %al
 81c3fa6:	84 c0                	test   %al,%al
 81c3fa8:	74 07                	je     81c3fb1 <_ZN25DisPatcher_RecoverStamina11check_errorEP5CUserR8MSG_BASE+0x67>
 81c3faa:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c3faf:	eb 05                	jmp    81c3fb6 <_ZN25DisPatcher_RecoverStamina11check_errorEP5CUserR8MSG_BASE+0x6c>
 81c3fb1:	b8 00 00 00 00       	mov    $0x0,%eax
 81c3fb6:	c9                   	leave
 81c3fb7:	c3                   	ret

```

```c
// DisPatcher_RecoverStamina::check_error @ 0x81c3f4a

/* DisPatcher_RecoverStamina::check_error(CUser*, MSG_BASE&) */

int DisPatcher_RecoverStamina::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 3) {
    iVar1 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0x2f);
    if (iVar1 == 0) {
      iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar1 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = 0;
      }
    }
  }
  else {
    iVar1 = 99;
  }
  return iVar1;
}

```

---

## process

```asm
// === 081c3eae DisPatcher_RecoverStamina::process  [0x081c3eae-0x81c3f49] ===
 81c3eae:	55                   	push   %ebp
 81c3eaf:	89 e5                	mov    %esp,%ebp
 81c3eb1:	83 ec 28             	sub    $0x28,%esp
 81c3eb4:	8b 45 10             	mov    0x10(%ebp),%eax
 81c3eb7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c3ebb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3ebe:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3ec2:	8b 45 08             	mov    0x8(%ebp),%eax
 81c3ec5:	89 04 24             	mov    %eax,(%esp)
 81c3ec8:	e8 7d 00 00 00       	call   81c3f4a <_ZN25DisPatcher_RecoverStamina11check_errorEP5CUserR8MSG_BASE>
 81c3ecd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c3ed0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c3ed4:	7e 24                	jle    81c3efa <_ZN25DisPatcher_RecoverStamina7processEP5CUserR8MSG_BASER9ParamBase+0x4c>
 81c3ed6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c3ed9:	0f b6 c0             	movzbl %al,%eax
 81c3edc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c3ee0:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 81c3ee7:	00 
 81c3ee8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3eeb:	89 04 24             	mov    %eax,(%esp)
 81c3eee:	e8 4f 80 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c3ef3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c3ef8:	eb 4d                	jmp    81c3f47 <_ZN25DisPatcher_RecoverStamina7processEP5CUserR8MSG_BASER9ParamBase+0x99>
 81c3efa:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c3efe:	79 2d                	jns    81c3f2d <_ZN25DisPatcher_RecoverStamina7processEP5CUserR8MSG_BASER9ParamBase+0x7f>
 81c3f00:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3f03:	89 04 24             	mov    %eax,(%esp)
 81c3f06:	e8 63 64 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c3f0b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c3f0f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c3f16:	00 
 81c3f17:	c7 44 24 04 c0 5b bd 	movl   $0x8bd5bc0,0x4(%esp)
 81c3f1e:	08 
 81c3f1f:	c7 04 24 9d 0f 00 00 	movl   $0xf9d,(%esp)
 81c3f26:	e8 ac c9 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c3f2b:	eb 1a                	jmp    81c3f47 <_ZN25DisPatcher_RecoverStamina7processEP5CUserR8MSG_BASER9ParamBase+0x99>
 81c3f2d:	8b 45 14             	mov    0x14(%ebp),%eax
 81c3f30:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c3f33:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3f36:	89 04 24             	mov    %eax,(%esp)
 81c3f39:	e8 4c 3a 49 00       	call   865798a <_ZN5CUser15serviceOfShusiaEv>
 81c3f3e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c3f41:	89 42 04             	mov    %eax,0x4(%edx)
 81c3f44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c3f47:	c9                   	leave
 81c3f48:	c3                   	ret
 81c3f49:	90                   	nop

```

```c
// DisPatcher_RecoverStamina::process @ 0x81c3eae

/* DisPatcher_RecoverStamina::process(CUser*, MSG_BASE&, ParamBase&) */

uint __thiscall
DisPatcher_RecoverStamina::process
          (DisPatcher_RecoverStamina *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if ((int)uVar1 < 1) {
    if ((int)uVar1 < 0) {
      uVar1 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0xf9d,
                       "virtual int DisPatcher_RecoverStamina::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,uVar1);
    }
    else {
      uVar2 = CUser::serviceOfShusia(param_1);
      *(undefined4 *)(param_3 + 4) = uVar2;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,9,uVar1 & 0xff);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081c3ea4 DisPatcher_RecoverStamina::read  [0x081c3ea4-0x81c3ead] ===
 81c3ea4:	55                   	push   %ebp
 81c3ea5:	89 e5                	mov    %esp,%ebp
 81c3ea7:	b8 00 00 00 00       	mov    $0x0,%eax
 81c3eac:	5d                   	pop    %ebp
 81c3ead:	c3                   	ret

```

```c
// DisPatcher_RecoverStamina::read @ 0x81c3ea4

/* DisPatcher_RecoverStamina::read(PacketBuf&, MSG_BASE&) */

undefined4 DisPatcher_RecoverStamina::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081c3fb8 DisPatcher_RecoverStamina::send  [0x081c3fb8-0x81c40a9] ===
 81c3fb8:	55                   	push   %ebp
 81c3fb9:	89 e5                	mov    %esp,%ebp
 81c3fbb:	56                   	push   %esi
 81c3fbc:	53                   	push   %ebx
 81c3fbd:	83 ec 20             	sub    $0x20,%esp
 81c3fc0:	8b 45 10             	mov    0x10(%ebp),%eax
 81c3fc3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c3fc6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c3fc9:	89 04 24             	mov    %eax,(%esp)
 81c3fcc:	e8 7b 9d 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c3fd1:	c7 44 24 08 09 00 00 	movl   $0x9,0x8(%esp)
 81c3fd8:	00 
 81c3fd9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c3fe0:	00 
 81c3fe1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c3fe4:	89 04 24             	mov    %eax,(%esp)
 81c3fe7:	e8 10 79 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c3fec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3fef:	8b 40 04             	mov    0x4(%eax),%eax
 81c3ff2:	85 c0                	test   %eax,%eax
 81c3ff4:	74 2a                	je     81c4020 <_ZN25DisPatcher_RecoverStamina4sendEP5CUserR9ParamBase+0x68>
 81c3ff6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c3ffd:	00 
 81c3ffe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c4001:	89 04 24             	mov    %eax,(%esp)
 81c4004:	e8 17 79 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c4009:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c400c:	8b 40 04             	mov    0x4(%eax),%eax
 81c400f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4013:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c4016:	89 04 24             	mov    %eax,(%esp)
 81c4019:	e8 02 79 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c401e:	eb 35                	jmp    81c4055 <_ZN25DisPatcher_RecoverStamina4sendEP5CUserR9ParamBase+0x9d>
 81c4020:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c4027:	00 
 81c4028:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c402b:	89 04 24             	mov    %eax,(%esp)
 81c402e:	e8 ed 78 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c4033:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4036:	89 04 24             	mov    %eax,(%esp)
 81c4039:	e8 40 62 f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81c403e:	89 04 24             	mov    %eax,(%esp)
 81c4041:	e8 90 07 f7 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81c4046:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c404a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c404d:	89 04 24             	mov    %eax,(%esp)
 81c4050:	e8 e7 78 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81c4055:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c405c:	00 
 81c405d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c4060:	89 04 24             	mov    %eax,(%esp)
 81c4063:	e8 f0 78 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c4068:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c406b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c406f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4072:	89 04 24             	mov    %eax,(%esp)
 81c4075:	e8 40 45 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c407a:	eb 1b                	jmp    81c4097 <_ZN25DisPatcher_RecoverStamina4sendEP5CUserR9ParamBase+0xdf>
 81c407c:	89 d3                	mov    %edx,%ebx
 81c407e:	89 c6                	mov    %eax,%esi
 81c4080:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c4083:	89 04 24             	mov    %eax,(%esp)
 81c4086:	e8 f5 9d 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c408b:	89 f0                	mov    %esi,%eax
 81c408d:	89 da                	mov    %ebx,%edx
 81c408f:	89 04 24             	mov    %eax,(%esp)
 81c4092:	e8 b9 f6 91 00       	call   8ae3750 <_Unwind_Resume>
 81c4097:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c409a:	89 04 24             	mov    %eax,(%esp)
 81c409d:	e8 de 9d 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c40a2:	83 c4 20             	add    $0x20,%esp
 81c40a5:	5b                   	pop    %ebx
 81c40a6:	5e                   	pop    %esi
 81c40a7:	5d                   	pop    %ebp
 81c40a8:	c3                   	ret
 81c40a9:	90                   	nop

```

```c
// DisPatcher_RecoverStamina::send @ 0x81c3fb8

/* DisPatcher_RecoverStamina::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_RecoverStamina::send(DisPatcher_RecoverStamina *this,CUser *param_1,ParamBase *param_2)

{
  CInventory *this_00;
  int iVar1;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c3fe7 to 081c4079 has its CatchHandler @ 081c407c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,9);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar1 = CInventory::get_money(this_00);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

