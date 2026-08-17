# Dispatcher_SecurityLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 0825fb38 Dispatcher_SecurityLog::process  [0x0825fb38-0x825fc33] ===
 825fb38:	55                   	push   %ebp
 825fb39:	89 e5                	mov    %esp,%ebp
 825fb3b:	57                   	push   %edi
 825fb3c:	56                   	push   %esi
 825fb3d:	53                   	push   %ebx
 825fb3e:	83 ec 6c             	sub    $0x6c,%esp
 825fb41:	8b 45 14             	mov    0x14(%ebp),%eax
 825fb44:	89 45 dc             	mov    %eax,-0x24(%ebp)
 825fb47:	8b 45 10             	mov    0x10(%ebp),%eax
 825fb4a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 825fb4d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825fb51:	74 0d                	je     825fb60 <_ZN22Dispatcher_SecurityLog7processEP5CUserR8MSG_BASER9ParamBase+0x28>
 825fb53:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fb56:	89 04 24             	mov    %eax,(%esp)
 825fb59:	e8 10 a8 e7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 825fb5e:	eb 05                	jmp    825fb65 <_ZN22Dispatcher_SecurityLog7processEP5CUserR8MSG_BASER9ParamBase+0x2d>
 825fb60:	b8 00 00 00 00       	mov    $0x0,%eax
 825fb65:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 825fb68:	8b 45 e0             	mov    -0x20(%ebp),%eax
 825fb6b:	8b 40 15             	mov    0x15(%eax),%eax
 825fb6e:	85 c0                	test   %eax,%eax
 825fb70:	74 0a                	je     825fb7c <_ZN22Dispatcher_SecurityLog7processEP5CUserR8MSG_BASER9ParamBase+0x44>
 825fb72:	8b 45 e0             	mov    -0x20(%ebp),%eax
 825fb75:	8b 40 19             	mov    0x19(%eax),%eax
 825fb78:	85 c0                	test   %eax,%eax
 825fb7a:	75 0a                	jne    825fb86 <_ZN22Dispatcher_SecurityLog7processEP5CUserR8MSG_BASER9ParamBase+0x4e>
 825fb7c:	b8 00 00 00 00       	mov    $0x0,%eax
 825fb81:	e9 a6 00 00 00       	jmp    825fc2c <_ZN22Dispatcher_SecurityLog7processEP5CUserR8MSG_BASER9ParamBase+0xf4>
 825fb86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 825fb8d:	00 
 825fb8e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 825fb91:	89 04 24             	mov    %eax,(%esp)
 825fb94:	e8 b2 94 ea ff       	call   810904b <_Z14NumberToStringji>
 825fb99:	89 c1                	mov    %eax,%ecx
 825fb9b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 825fb9e:	8b 50 1d             	mov    0x1d(%eax),%edx
 825fba1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 825fba4:	8b 40 19             	mov    0x19(%eax),%eax
 825fba7:	89 d3                	mov    %edx,%ebx
 825fba9:	29 c3                	sub    %eax,%ebx
 825fbab:	89 5d d0             	mov    %ebx,-0x30(%ebp)
 825fbae:	8b 45 e0             	mov    -0x20(%ebp),%eax
 825fbb1:	8b 40 21             	mov    0x21(%eax),%eax
 825fbb4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 825fbb7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 825fbba:	8b 78 1d             	mov    0x1d(%eax),%edi
 825fbbd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 825fbc0:	8b 70 19             	mov    0x19(%eax),%esi
 825fbc3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 825fbc6:	8b 58 15             	mov    0x15(%eax),%ebx
 825fbc9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 825fbcc:	8b 50 11             	mov    0x11(%eax),%edx
 825fbcf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 825fbd2:	8b 40 0d             	mov    0xd(%eax),%eax
 825fbd5:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 825fbd9:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 825fbdc:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 825fbe0:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 825fbe3:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 825fbe7:	89 7c 24 24          	mov    %edi,0x24(%esp)
 825fbeb:	89 74 24 20          	mov    %esi,0x20(%esp)
 825fbef:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 825fbf3:	89 54 24 18          	mov    %edx,0x18(%esp)
 825fbf7:	89 44 24 14          	mov    %eax,0x14(%esp)
 825fbfb:	c7 44 24 10 1c 86 be 	movl   $0x8be861c,0x10(%esp)
 825fc02:	08 
 825fc03:	c7 44 24 0c d0 09 00 	movl   $0x9d0,0xc(%esp)
 825fc0a:	00 
 825fc0b:	c7 44 24 08 20 9d be 	movl   $0x8be9d20,0x8(%esp)
 825fc12:	08 
 825fc13:	c7 44 24 04 fe 85 be 	movl   $0x8be85fe,0x4(%esp)
 825fc1a:	08 
 825fc1b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 825fc22:	e8 e3 3f 87 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 825fc27:	b8 00 00 00 00       	mov    $0x0,%eax
 825fc2c:	83 c4 6c             	add    $0x6c,%esp
 825fc2f:	5b                   	pop    %ebx
 825fc30:	5e                   	pop    %esi
 825fc31:	5f                   	pop    %edi
 825fc32:	5d                   	pop    %ebp
 825fc33:	c3                   	ret

```

```c
// Dispatcher_SecurityLog::process @ 0x825fb38

/* Dispatcher_SecurityLog::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_SecurityLog::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CUser::get_acc_id((CUser *)param_2);
  }
  if ((*(int *)(param_3 + 0x15) != 0) && (*(int *)(param_3 + 0x19) != 0)) {
    uVar2 = NumberToString(uVar1,0);
    LogManager::logFormat
              (1,"PacketDispatcher_Impl_2.cpp",
               "virtual int Dispatcher_SecurityLog::process(CUser*, MSG_BASE&, ParamBase&)",0x9d0,
               "Delay check, mode:%d, value:%d, %d, %d, %d, %d, %d, m_id:%s",
               *(undefined4 *)(param_3 + 0xd),*(undefined4 *)(param_3 + 0x11),
               *(undefined4 *)(param_3 + 0x15),*(undefined4 *)(param_3 + 0x19),
               *(undefined4 *)(param_3 + 0x1d),*(undefined4 *)(param_3 + 0x21),
               *(int *)(param_3 + 0x1d) - *(int *)(param_3 + 0x19),uVar2);
  }
  return 0;
}

```

---

## read

```asm
// === 0825fabc Dispatcher_SecurityLog::read  [0x0825fabc-0x825fb37] ===
 825fabc:	55                   	push   %ebp
 825fabd:	89 e5                	mov    %esp,%ebp
 825fabf:	83 ec 28             	sub    $0x28,%esp
 825fac2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 825fac5:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fac9:	8b 45 0c             	mov    0xc(%ebp),%eax
 825facc:	89 04 24             	mov    %eax,(%esp)
 825facf:	e8 1c d6 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 825fad4:	83 f0 01             	xor    $0x1,%eax
 825fad7:	84 c0                	test   %al,%al
 825fad9:	74 07                	je     825fae2 <_ZN22Dispatcher_SecurityLog4readER9PacketBufR8MSG_BASE+0x26>
 825fadb:	b8 9a 09 00 00       	mov    $0x99a,%eax
 825fae0:	eb 54                	jmp    825fb36 <_ZN22Dispatcher_SecurityLog4readER9PacketBufR8MSG_BASE+0x7a>
 825fae2:	8b 45 10             	mov    0x10(%ebp),%eax
 825fae5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825fae8:	89 50 0d             	mov    %edx,0xd(%eax)
 825faeb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 825faf2:	eb 32                	jmp    825fb26 <_ZN22Dispatcher_SecurityLog4readER9PacketBufR8MSG_BASE+0x6a>
 825faf4:	8b 45 10             	mov    0x10(%ebp),%eax
 825faf7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 825fafa:	83 c2 04             	add    $0x4,%edx
 825fafd:	c1 e2 02             	shl    $0x2,%edx
 825fb00:	01 d0                	add    %edx,%eax
 825fb02:	83 c0 01             	add    $0x1,%eax
 825fb05:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fb09:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fb0c:	89 04 24             	mov    %eax,(%esp)
 825fb0f:	e8 2c d7 32 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 825fb14:	83 f0 01             	xor    $0x1,%eax
 825fb17:	84 c0                	test   %al,%al
 825fb19:	74 07                	je     825fb22 <_ZN22Dispatcher_SecurityLog4readER9PacketBufR8MSG_BASE+0x66>
 825fb1b:	b8 a2 09 00 00       	mov    $0x9a2,%eax
 825fb20:	eb 14                	jmp    825fb36 <_ZN22Dispatcher_SecurityLog4readER9PacketBufR8MSG_BASE+0x7a>
 825fb22:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 825fb26:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 825fb2a:	0f 9e c0             	setle  %al
 825fb2d:	84 c0                	test   %al,%al
 825fb2f:	75 c3                	jne    825faf4 <_ZN22Dispatcher_SecurityLog4readER9PacketBufR8MSG_BASE+0x38>
 825fb31:	b8 00 00 00 00       	mov    $0x0,%eax
 825fb36:	c9                   	leave
 825fb37:	c3                   	ret

```

```c
// Dispatcher_SecurityLog::read @ 0x825fabc

/* Dispatcher_SecurityLog::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SecurityLog::read(Dispatcher_SecurityLog *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_14;
  int local_10;
  
  cVar1 = PacketBuf::get_int(param_1,&local_14);
  if (cVar1 == '\x01') {
    *(int *)(param_2 + 0xd) = local_14;
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + (local_10 + 4) * 4 + 1));
      if (cVar1 != '\x01') {
        return 0x9a2;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0x99a;
  }
  return uVar2;
}

```

---

## send

```asm
// === 0825fc34 Dispatcher_SecurityLog::send  [0x0825fc34-0x825fc39] ===
 825fc34:	55                   	push   %ebp
 825fc35:	89 e5                	mov    %esp,%ebp
 825fc37:	5d                   	pop    %ebp
 825fc38:	c3                   	ret
 825fc39:	90                   	nop

```

```c
// Dispatcher_SecurityLog::send @ 0x825fc34

/* Dispatcher_SecurityLog::send(CUser*, ParamBase&) */

void Dispatcher_SecurityLog::send(CUser *param_1,ParamBase *param_2)

{
  return;
}

```

