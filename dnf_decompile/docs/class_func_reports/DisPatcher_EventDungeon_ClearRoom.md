# DisPatcher_EventDungeon_ClearRoom

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0812beb0 DisPatcher_EventDungeon_ClearRoom::check_error  [0x0812beb0-0x812beb9] ===
 812beb0:	55                   	push   %ebp
 812beb1:	89 e5                	mov    %esp,%ebp
 812beb3:	b8 00 00 00 00       	mov    $0x0,%eax
 812beb8:	5d                   	pop    %ebp
 812beb9:	c3                   	ret

```

```c
// DisPatcher_EventDungeon_ClearRoom::check_error @ 0x812beb0

/* DisPatcher_EventDungeon_ClearRoom::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_EventDungeon_ClearRoom::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## process

```asm
// === 0812beba DisPatcher_EventDungeon_ClearRoom::process  [0x0812beba-0x812bf15] ===
 812beba:	55                   	push   %ebp
 812bebb:	89 e5                	mov    %esp,%ebp
 812bebd:	83 ec 1c             	sub    $0x1c,%esp
 812bec0:	8b 45 10             	mov    0x10(%ebp),%eax
 812bec3:	89 45 f8             	mov    %eax,-0x8(%ebp)
 812bec6:	8b 45 14             	mov    0x14(%ebp),%eax
 812bec9:	89 45 fc             	mov    %eax,-0x4(%ebp)
 812becc:	8b 45 f8             	mov    -0x8(%ebp),%eax
 812becf:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 812bed3:	8b 45 fc             	mov    -0x4(%ebp),%eax
 812bed6:	66 89 50 04          	mov    %dx,0x4(%eax)
 812beda:	8b 45 f8             	mov    -0x8(%ebp),%eax
 812bedd:	0f b7 50 12          	movzwl 0x12(%eax),%edx
 812bee1:	8b 45 fc             	mov    -0x4(%ebp),%eax
 812bee4:	66 89 50 08          	mov    %dx,0x8(%eax)
 812bee8:	8b 45 f8             	mov    -0x8(%ebp),%eax
 812beeb:	0f b7 50 10          	movzwl 0x10(%eax),%edx
 812beef:	8b 45 fc             	mov    -0x4(%ebp),%eax
 812bef2:	66 89 50 06          	mov    %dx,0x6(%eax)
 812bef6:	8b 45 f8             	mov    -0x8(%ebp),%eax
 812bef9:	89 44 24 08          	mov    %eax,0x8(%esp)
 812befd:	8b 45 0c             	mov    0xc(%ebp),%eax
 812bf00:	89 44 24 04          	mov    %eax,0x4(%esp)
 812bf04:	8b 45 08             	mov    0x8(%ebp),%eax
 812bf07:	89 04 24             	mov    %eax,(%esp)
 812bf0a:	e8 a1 ff ff ff       	call   812beb0 <_ZN33DisPatcher_EventDungeon_ClearRoom11check_errorEP5CUserR8MSG_BASE>
 812bf0f:	b8 00 00 00 00       	mov    $0x0,%eax
 812bf14:	c9                   	leave
 812bf15:	c3                   	ret

```

```c
// DisPatcher_EventDungeon_ClearRoom::process @ 0x812beba

/* DisPatcher_EventDungeon_ClearRoom::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_EventDungeon_ClearRoom::process
          (DisPatcher_EventDungeon_ClearRoom *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)(param_3 + 8) = *(undefined2 *)(param_2 + 0x12);
  *(undefined2 *)(param_3 + 6) = *(undefined2 *)(param_2 + 0x10);
  check_error((CUser *)this,(MSG_BASE *)param_1);
  return 0;
}

```

---

## read

```asm
// === 0812be82 DisPatcher_EventDungeon_ClearRoom::read  [0x0812be82-0x812beaf] ===
 812be82:	55                   	push   %ebp
 812be83:	89 e5                	mov    %esp,%ebp
 812be85:	83 ec 28             	sub    $0x28,%esp
 812be88:	8b 45 10             	mov    0x10(%ebp),%eax
 812be8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812be8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812be91:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 812be98:	00 
 812be99:	89 44 24 04          	mov    %eax,0x4(%esp)
 812be9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 812bea0:	89 04 24             	mov    %eax,(%esp)
 812bea3:	e8 0a 15 46 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 812bea8:	b8 00 00 00 00       	mov    $0x0,%eax
 812bead:	c9                   	leave
 812beae:	c3                   	ret
 812beaf:	90                   	nop

```

```c
// DisPatcher_EventDungeon_ClearRoom::read @ 0x812be82

/* DisPatcher_EventDungeon_ClearRoom::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_EventDungeon_ClearRoom::read
          (DisPatcher_EventDungeon_ClearRoom *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x14);
  return 0;
}

```

---

## send

```asm
// === 0812bf16 DisPatcher_EventDungeon_ClearRoom::send  [0x0812bf16-0x812bfca] ===
 812bf16:	55                   	push   %ebp
 812bf17:	89 e5                	mov    %esp,%ebp
 812bf19:	56                   	push   %esi
 812bf1a:	53                   	push   %ebx
 812bf1b:	83 ec 20             	sub    $0x20,%esp
 812bf1e:	8b 45 10             	mov    0x10(%ebp),%eax
 812bf21:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812bf24:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812bf27:	89 04 24             	mov    %eax,(%esp)
 812bf2a:	e8 1d 1e 46 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 812bf2f:	c7 44 24 08 1c 02 00 	movl   $0x21c,0x8(%esp)
 812bf36:	00 
 812bf37:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812bf3e:	00 
 812bf3f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812bf42:	89 04 24             	mov    %eax,(%esp)
 812bf45:	e8 b2 f9 f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 812bf4a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812bf51:	00 
 812bf52:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812bf55:	89 04 24             	mov    %eax,(%esp)
 812bf58:	e8 c3 f9 f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 812bf5d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812bf60:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 812bf67:	00 
 812bf68:	89 44 24 04          	mov    %eax,0x4(%esp)
 812bf6c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812bf6f:	89 04 24             	mov    %eax,(%esp)
 812bf72:	e8 91 1f ff ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 812bf77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812bf7e:	00 
 812bf7f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812bf82:	89 04 24             	mov    %eax,(%esp)
 812bf85:	e8 ce f9 f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 812bf8a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812bf8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 812bf91:	8b 45 0c             	mov    0xc(%ebp),%eax
 812bf94:	89 04 24             	mov    %eax,(%esp)
 812bf97:	e8 1e c6 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 812bf9c:	eb 1b                	jmp    812bfb9 <_ZN33DisPatcher_EventDungeon_ClearRoom4sendEP5CUserR9ParamBase+0xa3>
 812bf9e:	89 d3                	mov    %edx,%ebx
 812bfa0:	89 c6                	mov    %eax,%esi
 812bfa2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812bfa5:	89 04 24             	mov    %eax,(%esp)
 812bfa8:	e8 d3 1e 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812bfad:	89 f0                	mov    %esi,%eax
 812bfaf:	89 da                	mov    %ebx,%edx
 812bfb1:	89 04 24             	mov    %eax,(%esp)
 812bfb4:	e8 97 77 9b 00       	call   8ae3750 <_Unwind_Resume>
 812bfb9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812bfbc:	89 04 24             	mov    %eax,(%esp)
 812bfbf:	e8 bc 1e 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812bfc4:	83 c4 20             	add    $0x20,%esp
 812bfc7:	5b                   	pop    %ebx
 812bfc8:	5e                   	pop    %esi
 812bfc9:	5d                   	pop    %ebp
 812bfca:	c3                   	ret

```

```c
// DisPatcher_EventDungeon_ClearRoom::send @ 0x812bf16

/* DisPatcher_EventDungeon_ClearRoom::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_EventDungeon_ClearRoom::send
          (DisPatcher_EventDungeon_ClearRoom *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0812bf45 to 0812bf9b has its CatchHandler @ 0812bf9e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x21c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0xc);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

