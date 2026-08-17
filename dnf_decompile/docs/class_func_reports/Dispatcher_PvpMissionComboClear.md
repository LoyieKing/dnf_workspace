# Dispatcher_PvpMissionComboClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d5a5e Dispatcher_PvpMissionComboClear::process  [0x081d5a5e-0x81d5bcb] ===
 81d5a5e:	55                   	push   %ebp
 81d5a5f:	89 e5                	mov    %esp,%ebp
 81d5a61:	57                   	push   %edi
 81d5a62:	53                   	push   %ebx
 81d5a63:	81 ec 30 01 00 00    	sub    $0x130,%esp
 81d5a69:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5a6c:	89 04 24             	mov    %eax,(%esp)
 81d5a6f:	e8 be a9 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d5a74:	85 c0                	test   %eax,%eax
 81d5a76:	0f 94 c0             	sete   %al
 81d5a79:	84 c0                	test   %al,%al
 81d5a7b:	74 29                	je     81d5aa6 <_ZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBase+0x48>
 81d5a7d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d5a84:	00 
 81d5a85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5a8c:	00 
 81d5a8d:	c7 44 24 04 40 2e bd 	movl   $0x8bd2e40,0x4(%esp)
 81d5a94:	08 
 81d5a95:	c7 04 24 58 39 00 00 	movl   $0x3958,(%esp)
 81d5a9c:	e8 36 ae 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5aa1:	e9 1b 01 00 00       	jmp    81d5bc1 <_ZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBase+0x163>
 81d5aa6:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5aa9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5aac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5aaf:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d5ab3:	3c 08                	cmp    $0x8,%al
 81d5ab5:	0f 86 da 00 00 00    	jbe    81d5b95 <_ZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBase+0x137>
 81d5abb:	8d 9d e4 fe ff ff    	lea    -0x11c(%ebp),%ebx
 81d5ac1:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5ac6:	ba 40 00 00 00       	mov    $0x40,%edx
 81d5acb:	89 df                	mov    %ebx,%edi
 81d5acd:	89 d1                	mov    %edx,%ecx
 81d5acf:	f3 ab                	rep stos %eax,%es:(%edi)
 81d5ad1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5ad4:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d5ad8:	0f b6 c0             	movzbl %al,%eax
 81d5adb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d5adf:	c7 44 24 08 9c 18 bc 	movl   $0x8bc189c,0x8(%esp)
 81d5ae6:	08 
 81d5ae7:	c7 44 24 04 00 01 00 	movl   $0x100,0x4(%esp)
 81d5aee:	00 
 81d5aef:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 81d5af5:	89 04 24             	mov    %eax,(%esp)
 81d5af8:	e8 1f 6d 3b 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 81d5afd:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81d5b04:	00 
 81d5b05:	c7 44 24 08 63 39 00 	movl   $0x3963,0x8(%esp)
 81d5b0c:	00 
 81d5b0d:	c7 44 24 04 40 2e bd 	movl   $0x8bd2e40,0x4(%esp)
 81d5b14:	08 
 81d5b15:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d5b18:	89 04 24             	mov    %eax,(%esp)
 81d5b1b:	e8 f8 9b 37 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81d5b20:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 81d5b26:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5b2a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d5b2d:	89 04 24             	mov    %eax,(%esp)
 81d5b30:	e8 53 9c 37 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81d5b35:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5b38:	89 04 24             	mov    %eax,(%esp)
 81d5b3b:	e8 5c fd f6 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 81d5b40:	84 c0                	test   %al,%al
 81d5b42:	74 24                	je     81d5b68 <_ZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBase+0x10a>
 81d5b44:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5b4b:	00 
 81d5b4c:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 81d5b52:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5b56:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5b59:	89 04 24             	mov    %eax,(%esp)
 81d5b5c:	e8 6d 2b 4b 00       	call   86886ce <_ZN5CUser21SendNotiPacketMessageEPKc17ENUM_MESSAGE_TYPE>
 81d5b61:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5b66:	eb 59                	jmp    81d5bc1 <_ZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBase+0x163>
 81d5b68:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5b6b:	89 04 24             	mov    %eax,(%esp)
 81d5b6e:	e8 fb 47 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d5b73:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d5b77:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5b7e:	00 
 81d5b7f:	c7 44 24 04 40 2e bd 	movl   $0x8bd2e40,0x4(%esp)
 81d5b86:	08 
 81d5b87:	c7 04 24 6a 39 00 00 	movl   $0x396a,(%esp)
 81d5b8e:	e8 44 ad 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5b93:	eb 2c                	jmp    81d5bc1 <_ZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBase+0x163>
 81d5b95:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5b98:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d5b9c:	0f b6 d0             	movzbl %al,%edx
 81d5b9f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5ba2:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81d5ba6:	0f b6 c0             	movzbl %al,%eax
 81d5ba9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d5bad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5bb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5bb4:	89 04 24             	mov    %eax,(%esp)
 81d5bb7:	e8 4e cc 48 00       	call   866280a <_ZN5CUser19Update_ComboMissionEis>
 81d5bbc:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5bc1:	81 c4 30 01 00 00    	add    $0x130,%esp
 81d5bc7:	5b                   	pop    %ebx
 81d5bc8:	5f                   	pop    %edi
 81d5bc9:	5d                   	pop    %ebp
 81d5bca:	c3                   	ret
 81d5bcb:	90                   	nop

```

```c
// Dispatcher_PvpMissionComboClear::process @ 0x81d5a5e

/* Dispatcher_PvpMissionComboClear::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_PvpMissionComboClear::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  char local_120 [256];
  cMyTrace local_20 [16];
  ParamBase *local_10;
  
  bVar6 = 0;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar2 == 0) {
    uVar3 = LineFunc(0x3958,
                     "virtual int Dispatcher_PvpMissionComboClear::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0,0);
  }
  else {
    local_10 = param_3;
    if ((byte)param_3[0xd] < 9) {
      CUser::Update_ComboMission
                ((CUser *)param_2,(uint)(byte)param_3[0xe],(ushort)(byte)param_3[0xd]);
      uVar3 = 0;
    }
    else {
      pcVar5 = local_120;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
      }
      OS_API::snprintf(local_120,0x100,"[@missionSystem] invalid Combo Mission index:%d",
                       (uint)(byte)local_10[0xd]);
      cMyTrace::cMyTrace(local_20,
                         "virtual int Dispatcher_PvpMissionComboClear::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0x3963,5);
      cMyTrace::operator()(local_20,local_120);
      cVar1 = CUser::isGMUser((CUser *)param_2);
      if (cVar1 == '\0') {
        uVar4 = CUser::get_acc_id((CUser *)param_2);
        uVar3 = LineFunc(0x396a,
                         "virtual int Dispatcher_PvpMissionComboClear::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar4);
      }
      else {
        CUser::SendNotiPacketMessage((CUser *)param_2,local_120,0);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

```

---

## read

```asm
// === 081d59c6 Dispatcher_PvpMissionComboClear::read  [0x081d59c6-0x81d5a5d] ===
 81d59c6:	55                   	push   %ebp
 81d59c7:	89 e5                	mov    %esp,%ebp
 81d59c9:	83 ec 28             	sub    $0x28,%esp
 81d59cc:	8b 45 10             	mov    0x10(%ebp),%eax
 81d59cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d59d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d59d5:	83 c0 0d             	add    $0xd,%eax
 81d59d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d59dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d59df:	89 04 24             	mov    %eax,(%esp)
 81d59e2:	e8 89 75 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81d59e7:	83 f0 01             	xor    $0x1,%eax
 81d59ea:	84 c0                	test   %al,%al
 81d59ec:	74 26                	je     81d5a14 <_ZN31Dispatcher_PvpMissionComboClear4readER9PacketBufR8MSG_BASE+0x4e>
 81d59ee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d59f5:	00 
 81d59f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d59fd:	00 
 81d59fe:	c7 44 24 04 a0 2e bd 	movl   $0x8bd2ea0,0x4(%esp)
 81d5a05:	08 
 81d5a06:	c7 04 24 4e 39 00 00 	movl   $0x394e,(%esp)
 81d5a0d:	e8 c5 ae 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5a12:	eb 47                	jmp    81d5a5b <_ZN31Dispatcher_PvpMissionComboClear4readER9PacketBufR8MSG_BASE+0x95>
 81d5a14:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5a17:	83 c0 0e             	add    $0xe,%eax
 81d5a1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5a1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5a21:	89 04 24             	mov    %eax,(%esp)
 81d5a24:	e8 47 75 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81d5a29:	83 f0 01             	xor    $0x1,%eax
 81d5a2c:	84 c0                	test   %al,%al
 81d5a2e:	74 26                	je     81d5a56 <_ZN31Dispatcher_PvpMissionComboClear4readER9PacketBufR8MSG_BASE+0x90>
 81d5a30:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d5a37:	00 
 81d5a38:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5a3f:	00 
 81d5a40:	c7 44 24 04 a0 2e bd 	movl   $0x8bd2ea0,0x4(%esp)
 81d5a47:	08 
 81d5a48:	c7 04 24 50 39 00 00 	movl   $0x3950,(%esp)
 81d5a4f:	e8 83 ae 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5a54:	eb 05                	jmp    81d5a5b <_ZN31Dispatcher_PvpMissionComboClear4readER9PacketBufR8MSG_BASE+0x95>
 81d5a56:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5a5b:	c9                   	leave
 81d5a5c:	c3                   	ret
 81d5a5d:	90                   	nop

```

```c
// Dispatcher_PvpMissionComboClear::read @ 0x81d59c6

/* Dispatcher_PvpMissionComboClear::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PvpMissionComboClear::read
          (Dispatcher_PvpMissionComboClear *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x3950,
                       "virtual int Dispatcher_PvpMissionComboClear::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x394e,
                     "virtual int Dispatcher_PvpMissionComboClear::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

