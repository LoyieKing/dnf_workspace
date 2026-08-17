# Dispatcher_Skill_Command_All_Default

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081d2ef8 Dispatcher_Skill_Command_All_Default::process  [0x081d2ef8-0x81d2f33] ===
 81d2ef8:	55                   	push   %ebp
 81d2ef9:	89 e5                	mov    %esp,%ebp
 81d2efb:	83 ec 28             	sub    $0x28,%esp
 81d2efe:	8b 45 14             	mov    0x14(%ebp),%eax
 81d2f01:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d2f04:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2f07:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2f0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2f0d:	89 04 24             	mov    %eax,(%esp)
 81d2f10:	e8 d9 21 48 00       	call   86550ee <_ZN5CUser19defaultSkillCommandEv>
 81d2f15:	83 f0 01             	xor    $0x1,%eax
 81d2f18:	84 c0                	test   %al,%al
 81d2f1a:	74 11                	je     81d2f2d <_ZN36Dispatcher_Skill_Command_All_Default7processEP5CUserR8MSG_BASER9ParamBase+0x35>
 81d2f1c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d2f1f:	c7 40 04 fc 00 00 00 	movl   $0xfc,0x4(%eax)
 81d2f26:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2f2b:	eb 05                	jmp    81d2f32 <_ZN36Dispatcher_Skill_Command_All_Default7processEP5CUserR8MSG_BASER9ParamBase+0x3a>
 81d2f2d:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2f32:	c9                   	leave
 81d2f33:	c3                   	ret

```

```c
// Dispatcher_Skill_Command_All_Default::process @ 0x81d2ef8

/* Dispatcher_Skill_Command_All_Default::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Skill_Command_All_Default::process
          (Dispatcher_Skill_Command_All_Default *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  char cVar1;
  
  cVar1 = CUser::defaultSkillCommand(param_1);
  if (cVar1 != '\x01') {
    *(undefined4 *)(param_3 + 4) = 0xfc;
  }
  return 0;
}

```

---

## read

```asm
// === 081d2eee Dispatcher_Skill_Command_All_Default::read  [0x081d2eee-0x81d2ef7] ===
 81d2eee:	55                   	push   %ebp
 81d2eef:	89 e5                	mov    %esp,%ebp
 81d2ef1:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2ef6:	5d                   	pop    %ebp
 81d2ef7:	c3                   	ret

```

```c
// Dispatcher_Skill_Command_All_Default::read @ 0x81d2eee

/* Dispatcher_Skill_Command_All_Default::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Skill_Command_All_Default::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081d2f34 Dispatcher_Skill_Command_All_Default::send  [0x081d2f34-0x81d307d] ===
 81d2f34:	55                   	push   %ebp
 81d2f35:	89 e5                	mov    %esp,%ebp
 81d2f37:	56                   	push   %esi
 81d2f38:	53                   	push   %ebx
 81d2f39:	83 ec 30             	sub    $0x30,%esp
 81d2f3c:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2f3f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2f42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2f45:	8b 40 04             	mov    0x4(%eax),%eax
 81d2f48:	85 c0                	test   %eax,%eax
 81d2f4a:	0f 85 8b 00 00 00    	jne    81d2fdb <_ZN36Dispatcher_Skill_Command_All_Default4sendEP5CUserR9ParamBase+0xa7>
 81d2f50:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2f53:	89 04 24             	mov    %eax,(%esp)
 81d2f56:	e8 f1 ad 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d2f5b:	c7 44 24 08 4d 01 00 	movl   $0x14d,0x8(%esp)
 81d2f62:	00 
 81d2f63:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d2f6a:	00 
 81d2f6b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2f6e:	89 04 24             	mov    %eax,(%esp)
 81d2f71:	e8 86 89 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d2f76:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d2f7d:	00 
 81d2f7e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2f81:	89 04 24             	mov    %eax,(%esp)
 81d2f84:	e8 97 89 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d2f89:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d2f90:	00 
 81d2f91:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2f94:	89 04 24             	mov    %eax,(%esp)
 81d2f97:	e8 bc 89 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d2f9c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2f9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2fa3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2fa6:	89 04 24             	mov    %eax,(%esp)
 81d2fa9:	e8 0c 56 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d2fae:	eb 1b                	jmp    81d2fcb <_ZN36Dispatcher_Skill_Command_All_Default4sendEP5CUserR9ParamBase+0x97>
 81d2fb0:	89 d3                	mov    %edx,%ebx
 81d2fb2:	89 c6                	mov    %eax,%esi
 81d2fb4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2fb7:	89 04 24             	mov    %eax,(%esp)
 81d2fba:	e8 c1 ae 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d2fbf:	89 f0                	mov    %esi,%eax
 81d2fc1:	89 da                	mov    %ebx,%edx
 81d2fc3:	89 04 24             	mov    %eax,(%esp)
 81d2fc6:	e8 85 07 91 00       	call   8ae3750 <_Unwind_Resume>
 81d2fcb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2fce:	89 04 24             	mov    %eax,(%esp)
 81d2fd1:	e8 aa ae 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d2fd6:	e9 9b 00 00 00       	jmp    81d3076 <_ZN36Dispatcher_Skill_Command_All_Default4sendEP5CUserR9ParamBase+0x142>
 81d2fdb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d2fde:	89 04 24             	mov    %eax,(%esp)
 81d2fe1:	e8 66 ad 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d2fe6:	c7 44 24 08 4d 01 00 	movl   $0x14d,0x8(%esp)
 81d2fed:	00 
 81d2fee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d2ff5:	00 
 81d2ff6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d2ff9:	89 04 24             	mov    %eax,(%esp)
 81d2ffc:	e8 fb 88 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d3001:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d3008:	00 
 81d3009:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d300c:	89 04 24             	mov    %eax,(%esp)
 81d300f:	e8 0c 89 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d3014:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d3017:	8b 40 04             	mov    0x4(%eax),%eax
 81d301a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d301e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3021:	89 04 24             	mov    %eax,(%esp)
 81d3024:	e8 7b 6e f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d3029:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d3030:	00 
 81d3031:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3034:	89 04 24             	mov    %eax,(%esp)
 81d3037:	e8 1c 89 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d303c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d303f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3043:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3046:	89 04 24             	mov    %eax,(%esp)
 81d3049:	e8 6c 55 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d304e:	eb 1b                	jmp    81d306b <_ZN36Dispatcher_Skill_Command_All_Default4sendEP5CUserR9ParamBase+0x137>
 81d3050:	89 d3                	mov    %edx,%ebx
 81d3052:	89 c6                	mov    %eax,%esi
 81d3054:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3057:	89 04 24             	mov    %eax,(%esp)
 81d305a:	e8 21 ae 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d305f:	89 f0                	mov    %esi,%eax
 81d3061:	89 da                	mov    %ebx,%edx
 81d3063:	89 04 24             	mov    %eax,(%esp)
 81d3066:	e8 e5 06 91 00       	call   8ae3750 <_Unwind_Resume>
 81d306b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d306e:	89 04 24             	mov    %eax,(%esp)
 81d3071:	e8 0a ae 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d3076:	83 c4 30             	add    $0x30,%esp
 81d3079:	5b                   	pop    %ebx
 81d307a:	5e                   	pop    %esi
 81d307b:	5d                   	pop    %ebp
 81d307c:	c3                   	ret
 81d307d:	90                   	nop

```

```c
// Dispatcher_Skill_Command_All_Default::send @ 0x81d2f34

/* Dispatcher_Skill_Command_All_Default::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Skill_Command_All_Default::send
          (Dispatcher_Skill_Command_All_Default *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d2f71 to 081d2fad has its CatchHandler @ 081d2fb0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x14d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d2ffc to 081d304d has its CatchHandler @ 081d3050 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x14d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}

```

