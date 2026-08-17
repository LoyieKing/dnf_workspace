# Dispatcher_Expand_Equipslot_Flag_Update

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081d5f10 Dispatcher_Expand_Equipslot_Flag_Update::process  [0x081d5f10-0x81d5fad] ===
 81d5f10:	55                   	push   %ebp
 81d5f11:	89 e5                	mov    %esp,%ebp
 81d5f13:	83 ec 28             	sub    $0x28,%esp
 81d5f16:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d5f1a:	75 0a                	jne    81d5f26 <_ZN39Dispatcher_Expand_Equipslot_Flag_Update7processEP5CUserR8MSG_BASER9ParamBase+0x16>
 81d5f1c:	b8 01 00 00 00       	mov    $0x1,%eax
 81d5f21:	e9 86 00 00 00       	jmp    81d5fac <_ZN39Dispatcher_Expand_Equipslot_Flag_Update7processEP5CUserR8MSG_BASER9ParamBase+0x9c>
 81d5f26:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5f29:	89 04 24             	mov    %eax,(%esp)
 81d5f2c:	e8 5b 44 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d5f31:	83 f8 02             	cmp    $0x2,%eax
 81d5f34:	0f 9e c0             	setle  %al
 81d5f37:	84 c0                	test   %al,%al
 81d5f39:	74 07                	je     81d5f42 <_ZN39Dispatcher_Expand_Equipslot_Flag_Update7processEP5CUserR8MSG_BASER9ParamBase+0x32>
 81d5f3b:	b8 13 00 00 00       	mov    $0x13,%eax
 81d5f40:	eb 6a                	jmp    81d5fac <_ZN39Dispatcher_Expand_Equipslot_Flag_Update7processEP5CUserR8MSG_BASER9ParamBase+0x9c>
 81d5f42:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5f45:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d5f48:	8b 45 14             	mov    0x14(%ebp),%eax
 81d5f4b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d5f4e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d5f51:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d5f55:	0f be c0             	movsbl %al,%eax
 81d5f58:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5f5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5f5f:	89 04 24             	mov    %eax,(%esp)
 81d5f62:	e8 ed 4a 4b 00       	call   868aa54 <_ZN5CUser19UpdateEquipslotFlagEc>
 81d5f67:	88 45 f7             	mov    %al,-0x9(%ebp)
 81d5f6a:	80 7d f7 13          	cmpb   $0x13,-0x9(%ebp)
 81d5f6e:	75 2d                	jne    81d5f9d <_ZN39Dispatcher_Expand_Equipslot_Flag_Update7processEP5CUserR8MSG_BASER9ParamBase+0x8d>
 81d5f70:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5f73:	89 04 24             	mov    %eax,(%esp)
 81d5f76:	e8 f3 43 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d5f7b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d5f7f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5f86:	00 
 81d5f87:	c7 44 24 04 60 2c bd 	movl   $0x8bd2c60,0x4(%esp)
 81d5f8e:	08 
 81d5f8f:	c7 04 24 f3 3d 00 00 	movl   $0x3df3,(%esp)
 81d5f96:	e8 3c a9 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5f9b:	eb 0f                	jmp    81d5fac <_ZN39Dispatcher_Expand_Equipslot_Flag_Update7processEP5CUserR8MSG_BASER9ParamBase+0x9c>
 81d5f9d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d5fa0:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
 81d5fa4:	88 50 04             	mov    %dl,0x4(%eax)
 81d5fa7:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5fac:	c9                   	leave
 81d5fad:	c3                   	ret

```

```c
// Dispatcher_Expand_Equipslot_Flag_Update::process @ 0x81d5f10

/* Dispatcher_Expand_Equipslot_Flag_Update::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Expand_Equipslot_Flag_Update::process
          (Dispatcher_Expand_Equipslot_Flag_Update *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  ParamBase PVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      uVar2 = 0x13;
    }
    else {
      PVar1 = (ParamBase)CUser::UpdateEquipslotFlag(param_1,(char)param_2[0xd]);
      if (PVar1 == (ParamBase)0x13) {
        uVar4 = CUser::get_acc_id(param_1);
        uVar2 = LineFunc(0x3df3,
                         "virtual int Dispatcher_Expand_Equipslot_Flag_Update::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar4);
      }
      else {
        param_3[4] = PVar1;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## read

```asm
// === 081d5eba Dispatcher_Expand_Equipslot_Flag_Update::read  [0x081d5eba-0x81d5f0f] ===
 81d5eba:	55                   	push   %ebp
 81d5ebb:	89 e5                	mov    %esp,%ebp
 81d5ebd:	83 ec 28             	sub    $0x28,%esp
 81d5ec0:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5ec3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5ec6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5ec9:	83 c0 0d             	add    $0xd,%eax
 81d5ecc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5ed0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5ed3:	89 04 24             	mov    %eax,(%esp)
 81d5ed6:	e8 47 70 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d5edb:	83 f0 01             	xor    $0x1,%eax
 81d5ede:	84 c0                	test   %al,%al
 81d5ee0:	74 26                	je     81d5f08 <_ZN39Dispatcher_Expand_Equipslot_Flag_Update4readER9PacketBufR8MSG_BASE+0x4e>
 81d5ee2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d5ee9:	00 
 81d5eea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5ef1:	00 
 81d5ef2:	c7 44 24 04 c0 2c bd 	movl   $0x8bd2cc0,0x4(%esp)
 81d5ef9:	08 
 81d5efa:	c7 04 24 e4 3d 00 00 	movl   $0x3de4,(%esp)
 81d5f01:	e8 d1 a9 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5f06:	eb 05                	jmp    81d5f0d <_ZN39Dispatcher_Expand_Equipslot_Flag_Update4readER9PacketBufR8MSG_BASE+0x53>
 81d5f08:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5f0d:	c9                   	leave
 81d5f0e:	c3                   	ret
 81d5f0f:	90                   	nop

```

```c
// Dispatcher_Expand_Equipslot_Flag_Update::read @ 0x81d5eba

/* Dispatcher_Expand_Equipslot_Flag_Update::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Expand_Equipslot_Flag_Update::read
          (Dispatcher_Expand_Equipslot_Flag_Update *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x3de4,
                     "virtual int Dispatcher_Expand_Equipslot_Flag_Update::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d5fae Dispatcher_Expand_Equipslot_Flag_Update::send  [0x081d5fae-0x81d606d] ===
 81d5fae:	55                   	push   %ebp
 81d5faf:	89 e5                	mov    %esp,%ebp
 81d5fb1:	56                   	push   %esi
 81d5fb2:	53                   	push   %ebx
 81d5fb3:	83 ec 20             	sub    $0x20,%esp
 81d5fb6:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5fb9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5fbc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d5fbf:	89 04 24             	mov    %eax,(%esp)
 81d5fc2:	e8 85 7d 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d5fc7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d5fca:	89 04 24             	mov    %eax,(%esp)
 81d5fcd:	e8 14 59 ef ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81d5fd2:	c7 44 24 08 8e 01 00 	movl   $0x18e,0x8(%esp)
 81d5fd9:	00 
 81d5fda:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d5fe1:	00 
 81d5fe2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d5fe5:	89 04 24             	mov    %eax,(%esp)
 81d5fe8:	e8 0f 59 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d5fed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d5ff4:	00 
 81d5ff5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d5ff8:	89 04 24             	mov    %eax,(%esp)
 81d5ffb:	e8 20 59 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d6000:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d6003:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81d6007:	0f be c0             	movsbl %al,%eax
 81d600a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d600e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d6011:	89 04 24             	mov    %eax,(%esp)
 81d6014:	e8 07 59 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d6019:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d6020:	00 
 81d6021:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d6024:	89 04 24             	mov    %eax,(%esp)
 81d6027:	e8 2c 59 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d602c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d602f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6033:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6036:	89 04 24             	mov    %eax,(%esp)
 81d6039:	e8 7c 25 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d603e:	eb 1b                	jmp    81d605b <_ZN39Dispatcher_Expand_Equipslot_Flag_Update4sendEP5CUserR9ParamBase+0xad>
 81d6040:	89 d3                	mov    %edx,%ebx
 81d6042:	89 c6                	mov    %eax,%esi
 81d6044:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d6047:	89 04 24             	mov    %eax,(%esp)
 81d604a:	e8 31 7e 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d604f:	89 f0                	mov    %esi,%eax
 81d6051:	89 da                	mov    %ebx,%edx
 81d6053:	89 04 24             	mov    %eax,(%esp)
 81d6056:	e8 f5 d6 90 00       	call   8ae3750 <_Unwind_Resume>
 81d605b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d605e:	89 04 24             	mov    %eax,(%esp)
 81d6061:	e8 1a 7e 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d6066:	83 c4 20             	add    $0x20,%esp
 81d6069:	5b                   	pop    %ebx
 81d606a:	5e                   	pop    %esi
 81d606b:	5d                   	pop    %ebp
 81d606c:	c3                   	ret
 81d606d:	90                   	nop

```

```c
// Dispatcher_Expand_Equipslot_Flag_Update::send @ 0x81d5fae

/* Dispatcher_Expand_Equipslot_Flag_Update::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Expand_Equipslot_Flag_Update::send
          (Dispatcher_Expand_Equipslot_Flag_Update *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d5fcd to 081d603d has its CatchHandler @ 081d6040 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x18e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[4]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

