# Dispatcher_InformNotice_2nd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e31a6 Dispatcher_InformNotice_2nd::check_error  [0x081e31a6-0x81e31f3] ===
 81e31a6:	55                   	push   %ebp
 81e31a7:	89 e5                	mov    %esp,%ebp
 81e31a9:	83 ec 28             	sub    $0x28,%esp
 81e31ac:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e31b0:	75 07                	jne    81e31b9 <_ZN27Dispatcher_InformNotice_2nd11check_errorEP5CUserR8MSG_BASE+0x13>
 81e31b2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e31b7:	eb 39                	jmp    81e31f2 <_ZN27Dispatcher_InformNotice_2nd11check_errorEP5CUserR8MSG_BASE+0x4c>
 81e31b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e31bc:	89 04 24             	mov    %eax,(%esp)
 81e31bf:	e8 c8 71 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e31c4:	83 f8 02             	cmp    $0x2,%eax
 81e31c7:	0f 9e c0             	setle  %al
 81e31ca:	84 c0                	test   %al,%al
 81e31cc:	74 07                	je     81e31d5 <_ZN27Dispatcher_InformNotice_2nd11check_errorEP5CUserR8MSG_BASE+0x2f>
 81e31ce:	b8 01 00 00 00       	mov    $0x1,%eax
 81e31d3:	eb 1d                	jmp    81e31f2 <_ZN27Dispatcher_InformNotice_2nd11check_errorEP5CUserR8MSG_BASE+0x4c>
 81e31d5:	8b 45 10             	mov    0x10(%ebp),%eax
 81e31d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e31db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e31de:	8b 40 0d             	mov    0xd(%eax),%eax
 81e31e1:	83 f8 7f             	cmp    $0x7f,%eax
 81e31e4:	76 07                	jbe    81e31ed <_ZN27Dispatcher_InformNotice_2nd11check_errorEP5CUserR8MSG_BASE+0x47>
 81e31e6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e31eb:	eb 05                	jmp    81e31f2 <_ZN27Dispatcher_InformNotice_2nd11check_errorEP5CUserR8MSG_BASE+0x4c>
 81e31ed:	b8 00 00 00 00       	mov    $0x0,%eax
 81e31f2:	c9                   	leave
 81e31f3:	c3                   	ret

```

```c
// Dispatcher_InformNotice_2nd::check_error @ 0x81e31a6

/* Dispatcher_InformNotice_2nd::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_InformNotice_2nd::check_error
          (Dispatcher_InformNotice_2nd *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar1 = 1;
    }
    else if (*(uint *)(param_2 + 0xd) < 0x80) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081e30fa Dispatcher_InformNotice_2nd::process  [0x081e30fa-0x81e31a5] ===
 81e30fa:	55                   	push   %ebp
 81e30fb:	89 e5                	mov    %esp,%ebp
 81e30fd:	83 ec 28             	sub    $0x28,%esp
 81e3100:	8b 45 14             	mov    0x14(%ebp),%eax
 81e3103:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e3106:	8b 45 10             	mov    0x10(%ebp),%eax
 81e3109:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e310d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3110:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3114:	8b 45 08             	mov    0x8(%ebp),%eax
 81e3117:	89 04 24             	mov    %eax,(%esp)
 81e311a:	e8 87 00 00 00       	call   81e31a6 <_ZN27Dispatcher_InformNotice_2nd11check_errorEP5CUserR8MSG_BASE>
 81e311f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81e3122:	89 42 04             	mov    %eax,0x4(%edx)
 81e3125:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3128:	8b 40 04             	mov    0x4(%eax),%eax
 81e312b:	85 c0                	test   %eax,%eax
 81e312d:	7e 07                	jle    81e3136 <_ZN27Dispatcher_InformNotice_2nd7processEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81e312f:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3134:	eb 6e                	jmp    81e31a4 <_ZN27Dispatcher_InformNotice_2nd7processEP5CUserR8MSG_BASER9ParamBase+0xaa>
 81e3136:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3139:	8b 40 04             	mov    0x4(%eax),%eax
 81e313c:	85 c0                	test   %eax,%eax
 81e313e:	79 28                	jns    81e3168 <_ZN27Dispatcher_InformNotice_2nd7processEP5CUserR8MSG_BASER9ParamBase+0x6e>
 81e3140:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3143:	8b 40 04             	mov    0x4(%eax),%eax
 81e3146:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e314d:	00 
 81e314e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e3152:	c7 44 24 04 00 14 bd 	movl   $0x8bd1400,0x4(%esp)
 81e3159:	08 
 81e315a:	c7 04 24 c7 59 00 00 	movl   $0x59c7,(%esp)
 81e3161:	e8 71 d7 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e3166:	eb 3c                	jmp    81e31a4 <_ZN27Dispatcher_InformNotice_2nd7processEP5CUserR8MSG_BASER9ParamBase+0xaa>
 81e3168:	8b 45 10             	mov    0x10(%ebp),%eax
 81e316b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e316e:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81e3175:	00 
 81e3176:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3179:	89 04 24             	mov    %eax,(%esp)
 81e317c:	e8 03 a4 ef ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 81e3181:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e3184:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e3188:	74 15                	je     81e319f <_ZN27Dispatcher_InformNotice_2nd7processEP5CUserR8MSG_BASER9ParamBase+0xa5>
 81e318a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e318d:	8b 40 0d             	mov    0xd(%eax),%eax
 81e3190:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3194:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3197:	89 04 24             	mov    %eax,(%esp)
 81e319a:	e8 67 16 f0 ff       	call   80e4806 <_ZN19CCharacInformNotice22handleInformNoticeFlagEj>
 81e319f:	b8 00 00 00 00       	mov    $0x0,%eax
 81e31a4:	c9                   	leave
 81e31a5:	c3                   	ret

```

```c
// Dispatcher_InformNotice_2nd::process @ 0x81e30fa

/* Dispatcher_InformNotice_2nd::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_InformNotice_2nd::process
          (Dispatcher_InformNotice_2nd *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CCharacInformNotice *this_00;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x59c7,
                       "virtual int Dispatcher_InformNotice_2nd::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      this_00 = (CCharacInformNotice *)CUser::GetCharacExpandData(param_1,0x13);
      if (this_00 != (CCharacInformNotice *)0x0) {
        CCharacInformNotice::handleInformNoticeFlag(this_00,*(uint *)(param_2 + 0xd));
      }
      uVar1 = 0;
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
// === 081e30a4 Dispatcher_InformNotice_2nd::read  [0x081e30a4-0x81e30f9] ===
 81e30a4:	55                   	push   %ebp
 81e30a5:	89 e5                	mov    %esp,%ebp
 81e30a7:	83 ec 28             	sub    $0x28,%esp
 81e30aa:	8b 45 10             	mov    0x10(%ebp),%eax
 81e30ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e30b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e30b3:	83 c0 0d             	add    $0xd,%eax
 81e30b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e30ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e30bd:	89 04 24             	mov    %eax,(%esp)
 81e30c0:	e8 7b a1 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e30c5:	83 f0 01             	xor    $0x1,%eax
 81e30c8:	84 c0                	test   %al,%al
 81e30ca:	74 26                	je     81e30f2 <_ZN27Dispatcher_InformNotice_2nd4readER9PacketBufR8MSG_BASE+0x4e>
 81e30cc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e30d3:	00 
 81e30d4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e30db:	00 
 81e30dc:	c7 44 24 04 60 14 bd 	movl   $0x8bd1460,0x4(%esp)
 81e30e3:	08 
 81e30e4:	c7 04 24 b8 59 00 00 	movl   $0x59b8,(%esp)
 81e30eb:	e8 e7 d7 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e30f0:	eb 05                	jmp    81e30f7 <_ZN27Dispatcher_InformNotice_2nd4readER9PacketBufR8MSG_BASE+0x53>
 81e30f2:	b8 00 00 00 00       	mov    $0x0,%eax
 81e30f7:	c9                   	leave
 81e30f8:	c3                   	ret
 81e30f9:	90                   	nop

```

```c
// Dispatcher_InformNotice_2nd::read @ 0x81e30a4

/* Dispatcher_InformNotice_2nd::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_InformNotice_2nd::read
          (Dispatcher_InformNotice_2nd *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x59b8,"virtual int Dispatcher_InformNotice_2nd::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e31f4 Dispatcher_InformNotice_2nd::send  [0x081e31f4-0x81e3241] ===
 81e31f4:	55                   	push   %ebp
 81e31f5:	89 e5                	mov    %esp,%ebp
 81e31f7:	83 ec 28             	sub    $0x28,%esp
 81e31fa:	8b 45 10             	mov    0x10(%ebp),%eax
 81e31fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e3200:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3203:	8b 40 04             	mov    0x4(%eax),%eax
 81e3206:	85 c0                	test   %eax,%eax
 81e3208:	75 15                	jne    81e321f <_ZN27Dispatcher_InformNotice_2nd4sendEP5CUserR9ParamBase+0x2b>
 81e320a:	c7 44 24 04 de 01 00 	movl   $0x1de,0x4(%esp)
 81e3211:	00 
 81e3212:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3215:	89 04 24             	mov    %eax,(%esp)
 81e3218:	e8 83 8c 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81e321d:	eb 20                	jmp    81e323f <_ZN27Dispatcher_InformNotice_2nd4sendEP5CUserR9ParamBase+0x4b>
 81e321f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3222:	8b 40 04             	mov    0x4(%eax),%eax
 81e3225:	0f b6 c0             	movzbl %al,%eax
 81e3228:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e322c:	c7 44 24 04 de 01 00 	movl   $0x1de,0x4(%esp)
 81e3233:	00 
 81e3234:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3237:	89 04 24             	mov    %eax,(%esp)
 81e323a:	e8 03 8d 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e323f:	c9                   	leave
 81e3240:	c3                   	ret
 81e3241:	90                   	nop

```

```c
// Dispatcher_InformNotice_2nd::send @ 0x81e31f4

/* Dispatcher_InformNotice_2nd::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_InformNotice_2nd::send
          (Dispatcher_InformNotice_2nd *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1de);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1de,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

