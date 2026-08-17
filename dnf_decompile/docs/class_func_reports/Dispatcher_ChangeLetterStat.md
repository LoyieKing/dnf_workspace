# Dispatcher_ChangeLetterStat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081ce2ba Dispatcher_ChangeLetterStat::check_error  [0x081ce2ba-0x81ce303] ===
 81ce2ba:	55                   	push   %ebp
 81ce2bb:	89 e5                	mov    %esp,%ebp
 81ce2bd:	83 ec 28             	sub    $0x28,%esp
 81ce2c0:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce2c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce2c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce2c9:	89 04 24             	mov    %eax,(%esp)
 81ce2cc:	e8 bb c0 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ce2d1:	83 f8 02             	cmp    $0x2,%eax
 81ce2d4:	7e 0f                	jle    81ce2e5 <_ZN27Dispatcher_ChangeLetterStat11check_errorEP5CUserR8MSG_BASE+0x2b>
 81ce2d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce2d9:	89 04 24             	mov    %eax,(%esp)
 81ce2dc:	e8 51 21 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81ce2e1:	85 c0                	test   %eax,%eax
 81ce2e3:	75 07                	jne    81ce2ec <_ZN27Dispatcher_ChangeLetterStat11check_errorEP5CUserR8MSG_BASE+0x32>
 81ce2e5:	b8 01 00 00 00       	mov    $0x1,%eax
 81ce2ea:	eb 05                	jmp    81ce2f1 <_ZN27Dispatcher_ChangeLetterStat11check_errorEP5CUserR8MSG_BASE+0x37>
 81ce2ec:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce2f1:	84 c0                	test   %al,%al
 81ce2f3:	74 07                	je     81ce2fc <_ZN27Dispatcher_ChangeLetterStat11check_errorEP5CUserR8MSG_BASE+0x42>
 81ce2f5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ce2fa:	eb 05                	jmp    81ce301 <_ZN27Dispatcher_ChangeLetterStat11check_errorEP5CUserR8MSG_BASE+0x47>
 81ce2fc:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce301:	c9                   	leave
 81ce302:	c3                   	ret
 81ce303:	90                   	nop

```

```c
// Dispatcher_ChangeLetterStat::check_error @ 0x81ce2ba

/* Dispatcher_ChangeLetterStat::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ChangeLetterStat::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081ce2f1;
    }
  }
  bVar1 = true;
LAB_081ce2f1:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## process

```asm
// === 081ce1fc Dispatcher_ChangeLetterStat::process  [0x081ce1fc-0x81ce2b9] ===
 81ce1fc:	55                   	push   %ebp
 81ce1fd:	89 e5                	mov    %esp,%ebp
 81ce1ff:	83 ec 28             	sub    $0x28,%esp
 81ce202:	8b 45 14             	mov    0x14(%ebp),%eax
 81ce205:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ce208:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce20b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ce20f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce212:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce216:	8b 45 08             	mov    0x8(%ebp),%eax
 81ce219:	89 04 24             	mov    %eax,(%esp)
 81ce21c:	e8 99 00 00 00       	call   81ce2ba <_ZN27Dispatcher_ChangeLetterStat11check_errorEP5CUserR8MSG_BASE>
 81ce221:	89 c2                	mov    %eax,%edx
 81ce223:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce226:	89 50 04             	mov    %edx,0x4(%eax)
 81ce229:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce22c:	8b 40 04             	mov    0x4(%eax),%eax
 81ce22f:	85 c0                	test   %eax,%eax
 81ce231:	7e 07                	jle    81ce23a <_ZN27Dispatcher_ChangeLetterStat7processEP5CUserR8MSG_BASER9ParamBase+0x3e>
 81ce233:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce238:	eb 7e                	jmp    81ce2b8 <_ZN27Dispatcher_ChangeLetterStat7processEP5CUserR8MSG_BASER9ParamBase+0xbc>
 81ce23a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce23d:	8b 40 04             	mov    0x4(%eax),%eax
 81ce240:	85 c0                	test   %eax,%eax
 81ce242:	79 2f                	jns    81ce273 <_ZN27Dispatcher_ChangeLetterStat7processEP5CUserR8MSG_BASER9ParamBase+0x77>
 81ce244:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce247:	89 04 24             	mov    %eax,(%esp)
 81ce24a:	e8 1f c1 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ce24f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81ce252:	8b 52 04             	mov    0x4(%edx),%edx
 81ce255:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ce259:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ce25d:	c7 44 24 04 40 45 bd 	movl   $0x8bd4540,0x4(%esp)
 81ce264:	08 
 81ce265:	c7 04 24 44 27 00 00 	movl   $0x2744,(%esp)
 81ce26c:	e8 66 26 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce271:	eb 45                	jmp    81ce2b8 <_ZN27Dispatcher_ChangeLetterStat7processEP5CUserR8MSG_BASER9ParamBase+0xbc>
 81ce273:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce276:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce279:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce27c:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81ce280:	0f bf d0             	movswl %ax,%edx
 81ce283:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce286:	8b 40 0d             	mov    0xd(%eax),%eax
 81ce289:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ce28d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce291:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce294:	89 04 24             	mov    %eax,(%esp)
 81ce297:	e8 0a 86 38 00       	call   85568a6 <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii>
 81ce29c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81ce29f:	89 42 04             	mov    %eax,0x4(%edx)
 81ce2a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce2a5:	8b 40 04             	mov    0x4(%eax),%eax
 81ce2a8:	85 c0                	test   %eax,%eax
 81ce2aa:	74 07                	je     81ce2b3 <_ZN27Dispatcher_ChangeLetterStat7processEP5CUserR8MSG_BASER9ParamBase+0xb7>
 81ce2ac:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce2b1:	eb 05                	jmp    81ce2b8 <_ZN27Dispatcher_ChangeLetterStat7processEP5CUserR8MSG_BASER9ParamBase+0xbc>
 81ce2b3:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce2b8:	c9                   	leave
 81ce2b9:	c3                   	ret

```

```c
// Dispatcher_ChangeLetterStat::process @ 0x81ce1fc

/* Dispatcher_ChangeLetterStat::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ChangeLetterStat::process
          (Dispatcher_ChangeLetterStat *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2744,
                       "virtual int Dispatcher_ChangeLetterStat::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      uVar1 = WongWork::CMailBoxHelper::ReqChangeLetterStat
                        (param_1,*(int *)(param_2 + 0xd),(int)*(short *)(param_2 + 0x11));
      *(undefined4 *)(param_3 + 4) = uVar1;
      if (*(int *)(param_3 + 4) == 0) {
        uVar1 = 0;
      }
      else {
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
// === 081ce152 Dispatcher_ChangeLetterStat::read  [0x081ce152-0x81ce1fb] ===
 81ce152:	55                   	push   %ebp
 81ce153:	89 e5                	mov    %esp,%ebp
 81ce155:	83 ec 28             	sub    $0x28,%esp
 81ce158:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce15b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce15e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce161:	c7 40 0d 00 00 00 00 	movl   $0x0,0xd(%eax)
 81ce168:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce16b:	66 c7 40 11 00 00    	movw   $0x0,0x11(%eax)
 81ce171:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce174:	83 c0 0d             	add    $0xd,%eax
 81ce177:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce17b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce17e:	89 04 24             	mov    %eax,(%esp)
 81ce181:	e8 6a ef 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81ce186:	83 f0 01             	xor    $0x1,%eax
 81ce189:	84 c0                	test   %al,%al
 81ce18b:	74 26                	je     81ce1b3 <_ZN27Dispatcher_ChangeLetterStat4readER9PacketBufR8MSG_BASE+0x61>
 81ce18d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ce194:	00 
 81ce195:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ce19c:	00 
 81ce19d:	c7 44 24 04 a0 45 bd 	movl   $0x8bd45a0,0x4(%esp)
 81ce1a4:	08 
 81ce1a5:	c7 04 24 32 27 00 00 	movl   $0x2732,(%esp)
 81ce1ac:	e8 26 27 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce1b1:	eb 47                	jmp    81ce1fa <_ZN27Dispatcher_ChangeLetterStat4readER9PacketBufR8MSG_BASE+0xa8>
 81ce1b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce1b6:	83 c0 11             	add    $0x11,%eax
 81ce1b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce1bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce1c0:	89 04 24             	mov    %eax,(%esp)
 81ce1c3:	e8 f8 ed 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ce1c8:	83 f0 01             	xor    $0x1,%eax
 81ce1cb:	84 c0                	test   %al,%al
 81ce1cd:	74 26                	je     81ce1f5 <_ZN27Dispatcher_ChangeLetterStat4readER9PacketBufR8MSG_BASE+0xa3>
 81ce1cf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ce1d6:	00 
 81ce1d7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ce1de:	00 
 81ce1df:	c7 44 24 04 a0 45 bd 	movl   $0x8bd45a0,0x4(%esp)
 81ce1e6:	08 
 81ce1e7:	c7 04 24 34 27 00 00 	movl   $0x2734,(%esp)
 81ce1ee:	e8 e4 26 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce1f3:	eb 05                	jmp    81ce1fa <_ZN27Dispatcher_ChangeLetterStat4readER9PacketBufR8MSG_BASE+0xa8>
 81ce1f5:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce1fa:	c9                   	leave
 81ce1fb:	c3                   	ret

```

```c
// Dispatcher_ChangeLetterStat::read @ 0x81ce152

/* Dispatcher_ChangeLetterStat::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeLetterStat::read
          (Dispatcher_ChangeLetterStat *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0xd) = 0;
  *(undefined2 *)(param_2 + 0x11) = 0;
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x2734,"virtual int Dispatcher_ChangeLetterStat::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x2732,"virtual int Dispatcher_ChangeLetterStat::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081ce304 Dispatcher_ChangeLetterStat::send  [0x081ce304-0x81ce34b] ===
 81ce304:	55                   	push   %ebp
 81ce305:	89 e5                	mov    %esp,%ebp
 81ce307:	83 ec 28             	sub    $0x28,%esp
 81ce30a:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce30d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce310:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce313:	8b 40 04             	mov    0x4(%eax),%eax
 81ce316:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81ce31b:	74 2c                	je     81ce349 <_ZN27Dispatcher_ChangeLetterStat4sendEP5CUserR9ParamBase+0x45>
 81ce31d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce320:	8b 40 04             	mov    0x4(%eax),%eax
 81ce323:	85 c0                	test   %eax,%eax
 81ce325:	74 23                	je     81ce34a <_ZN27Dispatcher_ChangeLetterStat4sendEP5CUserR9ParamBase+0x46>
 81ce327:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce32a:	8b 40 04             	mov    0x4(%eax),%eax
 81ce32d:	0f b6 c0             	movzbl %al,%eax
 81ce330:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ce334:	c7 44 24 04 89 00 00 	movl   $0x89,0x4(%esp)
 81ce33b:	00 
 81ce33c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce33f:	89 04 24             	mov    %eax,(%esp)
 81ce342:	e8 fb db 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ce347:	eb 01                	jmp    81ce34a <_ZN27Dispatcher_ChangeLetterStat4sendEP5CUserR9ParamBase+0x46>
 81ce349:	90                   	nop
 81ce34a:	c9                   	leave
 81ce34b:	c3                   	ret

```

```c
// Dispatcher_ChangeLetterStat::send @ 0x81ce304

/* Dispatcher_ChangeLetterStat::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ChangeLetterStat::send
          (Dispatcher_ChangeLetterStat *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x89,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

