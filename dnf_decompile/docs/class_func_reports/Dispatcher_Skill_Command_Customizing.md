# Dispatcher_Skill_Command_Customizing

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081d2b42 Dispatcher_Skill_Command_Customizing::process  [0x081d2b42-0x81d2da3] ===
 81d2b42:	55                   	push   %ebp
 81d2b43:	89 e5                	mov    %esp,%ebp
 81d2b45:	56                   	push   %esi
 81d2b46:	53                   	push   %ebx
 81d2b47:	83 ec 50             	sub    $0x50,%esp
 81d2b4a:	8b 45 14             	mov    0x14(%ebp),%eax
 81d2b4d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d2b50:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2b53:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d2b56:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d2b59:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d2b5d:	0f be c0             	movsbl %al,%eax
 81d2b60:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d2b63:	83 7d e8 31          	cmpl   $0x31,-0x18(%ebp)
 81d2b67:	7e 14                	jle    81d2b7d <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x3b>
 81d2b69:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d2b6c:	c7 40 04 fc 00 00 00 	movl   $0xfc,0x4(%eax)
 81d2b73:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2b78:	e9 1f 02 00 00       	jmp    81d2d9c <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x25a>
 81d2b7d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81d2b84:	e9 9d 01 00 00       	jmp    81d2d26 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1e4>
 81d2b89:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81d2b8c:	89 04 24             	mov    %eax,(%esp)
 81d2b8f:	e8 d2 af 05 00       	call   822db66 <_ZN18STSkillCommandDataC1Ev>
 81d2b94:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81d2b97:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d2b9a:	0f b7 44 d0 0e       	movzwl 0xe(%eax,%edx,8),%eax
 81d2b9f:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 81d2ba3:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81d2ba6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d2ba9:	0f b6 44 d0 10       	movzbl 0x10(%eax,%edx,8),%eax
 81d2bae:	88 45 d6             	mov    %al,-0x2a(%ebp)
 81d2bb1:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 81d2bb5:	0f bf f0             	movswl %ax,%esi
 81d2bb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2bbb:	89 04 24             	mov    %eax,(%esp)
 81d2bbe:	e8 5d b3 f2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81d2bc3:	89 c3                	mov    %eax,%ebx
 81d2bc5:	e8 d1 95 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d2bca:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d2bce:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d2bd2:	89 04 24             	mov    %eax,(%esp)
 81d2bd5:	e8 c8 d1 18 00       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 81d2bda:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d2bdd:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d2be1:	75 0f                	jne    81d2bf2 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0xb0>
 81d2be3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d2be6:	c7 40 04 fc 00 00 00 	movl   $0xfc,0x4(%eax)
 81d2bed:	e9 45 01 00 00       	jmp    81d2d37 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81d2bf2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d2bf5:	89 04 24             	mov    %eax,(%esp)
 81d2bf8:	e8 d5 89 05 00       	call   822b5d2 <_ZNK6CSkill20isCommandCustomizingEv>
 81d2bfd:	83 f0 01             	xor    $0x1,%eax
 81d2c00:	84 c0                	test   %al,%al
 81d2c02:	74 0f                	je     81d2c13 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0xd1>
 81d2c04:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d2c07:	c7 40 04 f9 00 00 00 	movl   $0xf9,0x4(%eax)
 81d2c0e:	e9 24 01 00 00       	jmp    81d2d37 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81d2c13:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81d2c17:	3c 05                	cmp    $0x5,%al
 81d2c19:	7f 08                	jg     81d2c23 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0xe1>
 81d2c1b:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81d2c1f:	84 c0                	test   %al,%al
 81d2c21:	7f 0f                	jg     81d2c32 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0xf0>
 81d2c23:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d2c26:	c7 40 04 fb 00 00 00 	movl   $0xfb,0x4(%eax)
 81d2c2d:	e9 05 01 00 00       	jmp    81d2d37 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81d2c32:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d2c39:	eb 46                	jmp    81d2c81 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x13f>
 81d2c3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2c3e:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81d2c41:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d2c44:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 81d2c47:	c1 e3 03             	shl    $0x3,%ebx
 81d2c4a:	01 d9                	add    %ebx,%ecx
 81d2c4c:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81d2c4f:	83 c2 11             	add    $0x11,%edx
 81d2c52:	0f b6 12             	movzbl (%edx),%edx
 81d2c55:	88 54 05 d7          	mov    %dl,-0x29(%ebp,%eax,1)
 81d2c59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2c5c:	0f b6 44 05 d7       	movzbl -0x29(%ebp,%eax,1),%eax
 81d2c61:	84 c0                	test   %al,%al
 81d2c63:	78 0c                	js     81d2c71 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x12f>
 81d2c65:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2c68:	0f b6 44 05 d7       	movzbl -0x29(%ebp,%eax,1),%eax
 81d2c6d:	3c 08                	cmp    $0x8,%al
 81d2c6f:	7e 0c                	jle    81d2c7d <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x13b>
 81d2c71:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d2c74:	c7 40 04 fa 00 00 00 	movl   $0xfa,0x4(%eax)
 81d2c7b:	eb 15                	jmp    81d2c92 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x150>
 81d2c7d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81d2c81:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81d2c85:	0f be c0             	movsbl %al,%eax
 81d2c88:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81d2c8b:	0f 9f c0             	setg   %al
 81d2c8e:	84 c0                	test   %al,%al
 81d2c90:	75 a9                	jne    81d2c3b <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0xf9>
 81d2c92:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81d2c96:	0f be c0             	movsbl %al,%eax
 81d2c99:	83 e8 01             	sub    $0x1,%eax
 81d2c9c:	0f b6 44 05 d7       	movzbl -0x29(%ebp,%eax,1),%eax
 81d2ca1:	84 c0                	test   %al,%al
 81d2ca3:	74 4c                	je     81d2cf1 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1af>
 81d2ca5:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81d2ca9:	0f be c0             	movsbl %al,%eax
 81d2cac:	83 e8 01             	sub    $0x1,%eax
 81d2caf:	0f b6 44 05 d7       	movzbl -0x29(%ebp,%eax,1),%eax
 81d2cb4:	3c 01                	cmp    $0x1,%al
 81d2cb6:	74 39                	je     81d2cf1 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1af>
 81d2cb8:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81d2cbc:	0f be c0             	movsbl %al,%eax
 81d2cbf:	83 e8 01             	sub    $0x1,%eax
 81d2cc2:	0f b6 44 05 d7       	movzbl -0x29(%ebp,%eax,1),%eax
 81d2cc7:	3c 02                	cmp    $0x2,%al
 81d2cc9:	74 26                	je     81d2cf1 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1af>
 81d2ccb:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81d2ccf:	0f be c0             	movsbl %al,%eax
 81d2cd2:	83 e8 01             	sub    $0x1,%eax
 81d2cd5:	0f b6 44 05 d7       	movzbl -0x29(%ebp,%eax,1),%eax
 81d2cda:	3c 03                	cmp    $0x3,%al
 81d2cdc:	74 13                	je     81d2cf1 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1af>
 81d2cde:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81d2ce2:	0f be c0             	movsbl %al,%eax
 81d2ce5:	83 e8 01             	sub    $0x1,%eax
 81d2ce8:	0f b6 44 05 d7       	movzbl -0x29(%ebp,%eax,1),%eax
 81d2ced:	3c 07                	cmp    $0x7,%al
 81d2cef:	75 0c                	jne    81d2cfd <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1bb>
 81d2cf1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d2cf4:	c7 40 04 fa 00 00 00 	movl   $0xfa,0x4(%eax)
 81d2cfb:	eb 3a                	jmp    81d2d37 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81d2cfd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81d2d00:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2d04:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2d07:	89 04 24             	mov    %eax,(%esp)
 81d2d0a:	e8 65 22 48 00       	call   8654f74 <_ZN5CUser23customizingSkillCommandER18STSkillCommandData>
 81d2d0f:	83 f0 01             	xor    $0x1,%eax
 81d2d12:	84 c0                	test   %al,%al
 81d2d14:	74 0c                	je     81d2d22 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1e0>
 81d2d16:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d2d19:	c7 40 04 fc 00 00 00 	movl   $0xfc,0x4(%eax)
 81d2d20:	eb 15                	jmp    81d2d37 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81d2d22:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 81d2d26:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d2d29:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 81d2d2c:	0f 9c c0             	setl   %al
 81d2d2f:	84 c0                	test   %al,%al
 81d2d31:	0f 85 52 fe ff ff    	jne    81d2b89 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x47>
 81d2d37:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d2d3a:	8b 40 04             	mov    0x4(%eax),%eax
 81d2d3d:	85 c0                	test   %eax,%eax
 81d2d3f:	74 56                	je     81d2d97 <_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase+0x255>
 81d2d41:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2d44:	89 04 24             	mov    %eax,(%esp)
 81d2d47:	e8 22 76 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d2d4c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d2d53:	00 
 81d2d54:	89 04 24             	mov    %eax,(%esp)
 81d2d57:	e8 ef 62 f3 ff       	call   810904b <_Z14NumberToStringji>
 81d2d5c:	89 44 24 14          	mov    %eax,0x14(%esp)
 81d2d60:	c7 44 24 10 e4 17 bc 	movl   $0x8bc17e4,0x10(%esp)
 81d2d67:	08 
 81d2d68:	c7 44 24 0c 51 30 00 	movl   $0x3051,0xc(%esp)
 81d2d6f:	00 
 81d2d70:	c7 44 24 08 c0 35 bd 	movl   $0x8bd35c0,0x8(%esp)
 81d2d77:	08 
 81d2d78:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81d2d7f:	08 
 81d2d80:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81d2d87:	e8 7e 0e 90 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81d2d8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2d8f:	89 04 24             	mov    %eax,(%esp)
 81d2d92:	e8 57 23 48 00       	call   86550ee <_ZN5CUser19defaultSkillCommandEv>
 81d2d97:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2d9c:	83 c4 50             	add    $0x50,%esp
 81d2d9f:	5b                   	pop    %ebx
 81d2da0:	5e                   	pop    %esi
 81d2da1:	5d                   	pop    %ebp
 81d2da2:	c3                   	ret
 81d2da3:	90                   	nop

```

```c
// Dispatcher_Skill_Command_Customizing::process @ 0x81d2b42

/* Dispatcher_Skill_Command_Customizing::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Skill_Command_Customizing::process
          (Dispatcher_Skill_Command_Customizing *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 local_30;
  MSG_BASE local_2e [10];
  ParamBase *local_24;
  MSG_BASE *local_20;
  int local_1c;
  int local_18;
  CSkill *local_14;
  int local_10;
  
  local_24 = param_3;
  local_20 = param_2;
  local_1c = (int)(char)param_2[0xd];
  if (local_1c < 0x32) {
    for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
      STSkillCommandData::STSkillCommandData((STSkillCommandData *)&local_30);
      local_30 = *(undefined2 *)(local_20 + local_18 * 8 + 0xe);
      local_2e[0] = local_20[local_18 * 8 + 0x10];
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      iVar3 = G_CDataManager();
      local_14 = (CSkill *)CDataManager::find_skill(iVar3,iVar2);
      if (local_14 == (CSkill *)0x0) {
        *(undefined4 *)(local_24 + 4) = 0xfc;
        break;
      }
      cVar1 = CSkill::isCommandCustomizing(local_14);
      if (cVar1 != '\x01') {
        *(undefined4 *)(local_24 + 4) = 0xf9;
        break;
      }
      if (('\x05' < (char)local_2e[0]) || ((char)local_2e[0] < '\x01')) {
        *(undefined4 *)(local_24 + 4) = 0xfb;
        break;
      }
      for (local_10 = 0; local_10 < (char)local_2e[0]; local_10 = local_10 + 1) {
        local_2e[local_10 + 1] = local_20[local_10 + local_18 * 8 + 0x11];
        if (((char)local_2e[local_10 + 1] < '\0') || ('\b' < (char)local_2e[local_10 + 1])) {
          *(undefined4 *)(local_24 + 4) = 0xfa;
          break;
        }
      }
      if ((((local_2e[(char)local_2e[0]] == (MSG_BASE)0x0) ||
           (local_2e[(char)local_2e[0]] == (MSG_BASE)0x1)) ||
          (local_2e[(char)local_2e[0]] == (MSG_BASE)0x2)) ||
         ((local_2e[(char)local_2e[0]] == (MSG_BASE)0x3 ||
          (local_2e[(char)local_2e[0]] == (MSG_BASE)0x7)))) {
        *(undefined4 *)(local_24 + 4) = 0xfa;
        break;
      }
      cVar1 = CUser::customizingSkillCommand(param_1,(STSkillCommandData *)&local_30);
      if (cVar1 != '\x01') {
        *(undefined4 *)(local_24 + 4) = 0xfc;
        break;
      }
    }
    if (*(int *)(local_24 + 4) != 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar5 = NumberToString(uVar4,0);
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_1.cpp",
                 "virtual int Dispatcher_Skill_Command_Customizing::process(CUser*, MSG_BASE&, ParamBase&)"
                 ,0x3051,"SKILL_COMMAND_LOG : CUSTOMIZING ERROR!! ALL COMMAND DEFAULT!! m_id (%s)",
                 uVar5);
      CUser::defaultSkillCommand(param_1);
    }
  }
  else {
    *(undefined4 *)(param_3 + 4) = 0xfc;
  }
  return 0;
}

```

---

## read

```asm
// === 081d29ac Dispatcher_Skill_Command_Customizing::read  [0x081d29ac-0x81d2b41] ===
 81d29ac:	55                   	push   %ebp
 81d29ad:	89 e5                	mov    %esp,%ebp
 81d29af:	83 ec 28             	sub    $0x28,%esp
 81d29b2:	8b 45 10             	mov    0x10(%ebp),%eax
 81d29b5:	83 c0 0d             	add    $0xd,%eax
 81d29b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d29bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d29bf:	89 04 24             	mov    %eax,(%esp)
 81d29c2:	e8 5b a5 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d29c7:	83 f0 01             	xor    $0x1,%eax
 81d29ca:	84 c0                	test   %al,%al
 81d29cc:	74 29                	je     81d29f7 <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0x4b>
 81d29ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d29d5:	00 
 81d29d6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d29dd:	00 
 81d29de:	c7 44 24 04 20 36 bd 	movl   $0x8bd3620,0x4(%esp)
 81d29e5:	08 
 81d29e6:	c7 04 24 f8 2f 00 00 	movl   $0x2ff8,(%esp)
 81d29ed:	e8 e5 de 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d29f2:	e9 48 01 00 00       	jmp    81d2b3f <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0x193>
 81d29f7:	8b 45 10             	mov    0x10(%ebp),%eax
 81d29fa:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d29fe:	0f be c0             	movsbl %al,%eax
 81d2a01:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d2a04:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81d2a0b:	e9 19 01 00 00       	jmp    81d2b29 <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0x17d>
 81d2a10:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2a13:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81d2a16:	c1 e2 03             	shl    $0x3,%edx
 81d2a19:	01 d0                	add    %edx,%eax
 81d2a1b:	83 c0 0e             	add    $0xe,%eax
 81d2a1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2a22:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2a25:	89 04 24             	mov    %eax,(%esp)
 81d2a28:	e8 93 a5 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d2a2d:	83 f0 01             	xor    $0x1,%eax
 81d2a30:	84 c0                	test   %al,%al
 81d2a32:	74 29                	je     81d2a5d <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0xb1>
 81d2a34:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2a3b:	00 
 81d2a3c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d2a43:	00 
 81d2a44:	c7 44 24 04 20 36 bd 	movl   $0x8bd3620,0x4(%esp)
 81d2a4b:	08 
 81d2a4c:	c7 04 24 ff 2f 00 00 	movl   $0x2fff,(%esp)
 81d2a53:	e8 7f de 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2a58:	e9 e2 00 00 00       	jmp    81d2b3f <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0x193>
 81d2a5d:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2a60:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81d2a63:	c1 e2 03             	shl    $0x3,%edx
 81d2a66:	01 d0                	add    %edx,%eax
 81d2a68:	83 c0 10             	add    $0x10,%eax
 81d2a6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2a6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2a72:	89 04 24             	mov    %eax,(%esp)
 81d2a75:	e8 a8 a4 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d2a7a:	83 f0 01             	xor    $0x1,%eax
 81d2a7d:	84 c0                	test   %al,%al
 81d2a7f:	74 29                	je     81d2aaa <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0xfe>
 81d2a81:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2a88:	00 
 81d2a89:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d2a90:	00 
 81d2a91:	c7 44 24 04 20 36 bd 	movl   $0x8bd3620,0x4(%esp)
 81d2a98:	08 
 81d2a99:	c7 04 24 02 30 00 00 	movl   $0x3002,(%esp)
 81d2aa0:	e8 32 de 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2aa5:	e9 95 00 00 00       	jmp    81d2b3f <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0x193>
 81d2aaa:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2aad:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81d2ab0:	0f b6 44 d0 10       	movzbl 0x10(%eax,%edx,8),%eax
 81d2ab5:	0f be c0             	movsbl %al,%eax
 81d2ab8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d2abb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d2ac2:	eb 54                	jmp    81d2b18 <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0x16c>
 81d2ac4:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2ac7:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81d2aca:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d2acd:	c1 e1 03             	shl    $0x3,%ecx
 81d2ad0:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81d2ad3:	01 d0                	add    %edx,%eax
 81d2ad5:	83 c0 11             	add    $0x11,%eax
 81d2ad8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2adc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2adf:	89 04 24             	mov    %eax,(%esp)
 81d2ae2:	e8 3b a4 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d2ae7:	83 f0 01             	xor    $0x1,%eax
 81d2aea:	84 c0                	test   %al,%al
 81d2aec:	74 26                	je     81d2b14 <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0x168>
 81d2aee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2af5:	00 
 81d2af6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d2afd:	00 
 81d2afe:	c7 44 24 04 20 36 bd 	movl   $0x8bd3620,0x4(%esp)
 81d2b05:	08 
 81d2b06:	c7 04 24 09 30 00 00 	movl   $0x3009,(%esp)
 81d2b0d:	e8 c5 dd 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2b12:	eb 2b                	jmp    81d2b3f <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0x193>
 81d2b14:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81d2b18:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2b1b:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81d2b1e:	0f 9c c0             	setl   %al
 81d2b21:	84 c0                	test   %al,%al
 81d2b23:	75 9f                	jne    81d2ac4 <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0x118>
 81d2b25:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 81d2b29:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d2b2c:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 81d2b2f:	0f 9c c0             	setl   %al
 81d2b32:	84 c0                	test   %al,%al
 81d2b34:	0f 85 d6 fe ff ff    	jne    81d2a10 <_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE+0x64>
 81d2b3a:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2b3f:	c9                   	leave
 81d2b40:	c3                   	ret
 81d2b41:	90                   	nop

```

```c
// Dispatcher_Skill_Command_Customizing::read @ 0x81d29ac

/* Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Skill_Command_Customizing::read
          (Dispatcher_Skill_Command_Customizing *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  char cVar3;
  undefined4 uVar4;
  int local_18;
  int local_10;
  
  cVar3 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar3 == '\x01') {
    MVar1 = param_2[0xd];
    for (local_18 = 0; local_18 < (char)MVar1; local_18 = local_18 + 1) {
      cVar3 = PacketBuf::get_short(param_1,(short *)(param_2 + local_18 * 8 + 0xe));
      if (cVar3 != '\x01') {
        uVar4 = LineFunc(0x2fff,
                         "virtual int Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
        return uVar4;
      }
      cVar3 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_18 * 8 + 0x10));
      if (cVar3 != '\x01') {
        uVar4 = LineFunc(0x3002,
                         "virtual int Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
        return uVar4;
      }
      MVar2 = param_2[local_18 * 8 + 0x10];
      for (local_10 = 0; local_10 < (char)MVar2; local_10 = local_10 + 1) {
        cVar3 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_18 * 8 + local_10 + 0x11));
        if (cVar3 != '\x01') {
          uVar4 = LineFunc(0x3009,
                           "virtual int Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar4;
        }
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = LineFunc(0x2ff8,
                     "virtual int Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar4;
}

```

---

## send

```asm
// === 081d2da4 Dispatcher_Skill_Command_Customizing::send  [0x081d2da4-0x81d2eed] ===
 81d2da4:	55                   	push   %ebp
 81d2da5:	89 e5                	mov    %esp,%ebp
 81d2da7:	56                   	push   %esi
 81d2da8:	53                   	push   %ebx
 81d2da9:	83 ec 30             	sub    $0x30,%esp
 81d2dac:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2daf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2db2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2db5:	8b 40 04             	mov    0x4(%eax),%eax
 81d2db8:	85 c0                	test   %eax,%eax
 81d2dba:	0f 85 8b 00 00 00    	jne    81d2e4b <_ZN36Dispatcher_Skill_Command_Customizing4sendEP5CUserR9ParamBase+0xa7>
 81d2dc0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2dc3:	89 04 24             	mov    %eax,(%esp)
 81d2dc6:	e8 81 af 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d2dcb:	c7 44 24 08 4c 01 00 	movl   $0x14c,0x8(%esp)
 81d2dd2:	00 
 81d2dd3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d2dda:	00 
 81d2ddb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2dde:	89 04 24             	mov    %eax,(%esp)
 81d2de1:	e8 16 8b ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d2de6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d2ded:	00 
 81d2dee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2df1:	89 04 24             	mov    %eax,(%esp)
 81d2df4:	e8 27 8b ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d2df9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d2e00:	00 
 81d2e01:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2e04:	89 04 24             	mov    %eax,(%esp)
 81d2e07:	e8 4c 8b ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d2e0c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2e0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2e13:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2e16:	89 04 24             	mov    %eax,(%esp)
 81d2e19:	e8 9c 57 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d2e1e:	eb 1b                	jmp    81d2e3b <_ZN36Dispatcher_Skill_Command_Customizing4sendEP5CUserR9ParamBase+0x97>
 81d2e20:	89 d3                	mov    %edx,%ebx
 81d2e22:	89 c6                	mov    %eax,%esi
 81d2e24:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2e27:	89 04 24             	mov    %eax,(%esp)
 81d2e2a:	e8 51 b0 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d2e2f:	89 f0                	mov    %esi,%eax
 81d2e31:	89 da                	mov    %ebx,%edx
 81d2e33:	89 04 24             	mov    %eax,(%esp)
 81d2e36:	e8 15 09 91 00       	call   8ae3750 <_Unwind_Resume>
 81d2e3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2e3e:	89 04 24             	mov    %eax,(%esp)
 81d2e41:	e8 3a b0 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d2e46:	e9 9b 00 00 00       	jmp    81d2ee6 <_ZN36Dispatcher_Skill_Command_Customizing4sendEP5CUserR9ParamBase+0x142>
 81d2e4b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d2e4e:	89 04 24             	mov    %eax,(%esp)
 81d2e51:	e8 f6 ae 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d2e56:	c7 44 24 08 4c 01 00 	movl   $0x14c,0x8(%esp)
 81d2e5d:	00 
 81d2e5e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d2e65:	00 
 81d2e66:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d2e69:	89 04 24             	mov    %eax,(%esp)
 81d2e6c:	e8 8b 8a ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d2e71:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d2e78:	00 
 81d2e79:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d2e7c:	89 04 24             	mov    %eax,(%esp)
 81d2e7f:	e8 9c 8a ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d2e84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2e87:	8b 40 04             	mov    0x4(%eax),%eax
 81d2e8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2e8e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d2e91:	89 04 24             	mov    %eax,(%esp)
 81d2e94:	e8 0b 70 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d2e99:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d2ea0:	00 
 81d2ea1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d2ea4:	89 04 24             	mov    %eax,(%esp)
 81d2ea7:	e8 ac 8a ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d2eac:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d2eaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2eb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2eb6:	89 04 24             	mov    %eax,(%esp)
 81d2eb9:	e8 fc 56 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d2ebe:	eb 1b                	jmp    81d2edb <_ZN36Dispatcher_Skill_Command_Customizing4sendEP5CUserR9ParamBase+0x137>
 81d2ec0:	89 d3                	mov    %edx,%ebx
 81d2ec2:	89 c6                	mov    %eax,%esi
 81d2ec4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d2ec7:	89 04 24             	mov    %eax,(%esp)
 81d2eca:	e8 b1 af 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d2ecf:	89 f0                	mov    %esi,%eax
 81d2ed1:	89 da                	mov    %ebx,%edx
 81d2ed3:	89 04 24             	mov    %eax,(%esp)
 81d2ed6:	e8 75 08 91 00       	call   8ae3750 <_Unwind_Resume>
 81d2edb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d2ede:	89 04 24             	mov    %eax,(%esp)
 81d2ee1:	e8 9a af 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d2ee6:	83 c4 30             	add    $0x30,%esp
 81d2ee9:	5b                   	pop    %ebx
 81d2eea:	5e                   	pop    %esi
 81d2eeb:	5d                   	pop    %ebp
 81d2eec:	c3                   	ret
 81d2eed:	90                   	nop

```

```c
// Dispatcher_Skill_Command_Customizing::send @ 0x81d2da4

/* Dispatcher_Skill_Command_Customizing::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Skill_Command_Customizing::send
          (Dispatcher_Skill_Command_Customizing *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d2de1 to 081d2e1d has its CatchHandler @ 081d2e20 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x14c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d2e6c to 081d2ebd has its CatchHandler @ 081d2ec0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x14c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}

```

