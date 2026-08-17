# Dispatcher_CloseDisjointStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d02c8 Dispatcher_CloseDisjointStore::check_error  [0x081d02c8-0x81d0365] ===
 81d02c8:	55                   	push   %ebp
 81d02c9:	89 e5                	mov    %esp,%ebp
 81d02cb:	83 ec 18             	sub    $0x18,%esp
 81d02ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d02d1:	89 04 24             	mov    %eax,(%esp)
 81d02d4:	e8 b3 a0 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d02d9:	83 f8 02             	cmp    $0x2,%eax
 81d02dc:	7e 0f                	jle    81d02ed <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81d02de:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d02e1:	89 04 24             	mov    %eax,(%esp)
 81d02e4:	e8 49 01 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d02e9:	85 c0                	test   %eax,%eax
 81d02eb:	75 07                	jne    81d02f4 <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81d02ed:	b8 01 00 00 00       	mov    $0x1,%eax
 81d02f2:	eb 05                	jmp    81d02f9 <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x31>
 81d02f4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d02f9:	84 c0                	test   %al,%al
 81d02fb:	74 07                	je     81d0304 <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81d02fd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d0302:	eb 60                	jmp    81d0364 <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x9c>
 81d0304:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0307:	89 04 24             	mov    %eax,(%esp)
 81d030a:	e8 85 f5 05 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 81d030f:	83 f8 03             	cmp    $0x3,%eax
 81d0312:	0f 95 c0             	setne  %al
 81d0315:	84 c0                	test   %al,%al
 81d0317:	74 07                	je     81d0320 <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x58>
 81d0319:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81d031e:	eb 44                	jmp    81d0364 <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x9c>
 81d0320:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0323:	89 04 24             	mov    %eax,(%esp)
 81d0326:	e8 a9 f5 05 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 81d032b:	85 c0                	test   %eax,%eax
 81d032d:	0f 94 c0             	sete   %al
 81d0330:	84 c0                	test   %al,%al
 81d0332:	74 07                	je     81d033b <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x73>
 81d0334:	b8 13 00 00 00       	mov    $0x13,%eax
 81d0339:	eb 29                	jmp    81d0364 <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x9c>
 81d033b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d033e:	89 04 24             	mov    %eax,(%esp)
 81d0341:	e8 8e f5 05 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 81d0346:	89 04 24             	mov    %eax,(%esp)
 81d0349:	e8 48 44 06 00       	call   8234796 <_ZN10expert_job10CExpertJob7GetTypeEv>
 81d034e:	83 f8 03             	cmp    $0x3,%eax
 81d0351:	0f 95 c0             	setne  %al
 81d0354:	84 c0                	test   %al,%al
 81d0356:	74 07                	je     81d035f <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x97>
 81d0358:	b8 13 00 00 00       	mov    $0x13,%eax
 81d035d:	eb 05                	jmp    81d0364 <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x9c>
 81d035f:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0364:	c9                   	leave
 81d0365:	c3                   	ret

```

```c
// Dispatcher_CloseDisjointStore::check_error @ 0x81d02c8

/* Dispatcher_CloseDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_CloseDisjointStore::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CExpertJob *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081d02f9;
    }
  }
  bVar1 = true;
LAB_081d02f9:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_2);
    if (iVar2 == 3) {
      iVar2 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_2);
      if (iVar2 == 0) {
        uVar3 = 0x13;
      }
      else {
        this = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_2);
        iVar2 = expert_job::CExpertJob::GetType(this);
        if (iVar2 == 3) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0x13;
        }
      }
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
// === 081d0366 Dispatcher_CloseDisjointStore::process  [0x081d0366-0x81d0411] ===
 81d0366:	55                   	push   %ebp
 81d0367:	89 e5                	mov    %esp,%ebp
 81d0369:	83 ec 28             	sub    $0x28,%esp
 81d036c:	8b 45 14             	mov    0x14(%ebp),%eax
 81d036f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0372:	8b 45 14             	mov    0x14(%ebp),%eax
 81d0375:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d0379:	8b 45 10             	mov    0x10(%ebp),%eax
 81d037c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d0380:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0383:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0387:	8b 45 08             	mov    0x8(%ebp),%eax
 81d038a:	89 04 24             	mov    %eax,(%esp)
 81d038d:	e8 36 ff ff ff       	call   81d02c8 <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d0392:	89 c2                	mov    %eax,%edx
 81d0394:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0397:	89 50 04             	mov    %edx,0x4(%eax)
 81d039a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d039d:	8b 40 04             	mov    0x4(%eax),%eax
 81d03a0:	85 c0                	test   %eax,%eax
 81d03a2:	7e 07                	jle    81d03ab <_ZN29Dispatcher_CloseDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0x45>
 81d03a4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d03a9:	eb 64                	jmp    81d040f <_ZN29Dispatcher_CloseDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0xa9>
 81d03ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d03ae:	8b 40 04             	mov    0x4(%eax),%eax
 81d03b1:	85 c0                	test   %eax,%eax
 81d03b3:	79 2f                	jns    81d03e4 <_ZN29Dispatcher_CloseDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81d03b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d03b8:	89 04 24             	mov    %eax,(%esp)
 81d03bb:	e8 ae 9f f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d03c0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d03c3:	8b 52 04             	mov    0x4(%edx),%edx
 81d03c6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d03ca:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d03ce:	c7 44 24 04 c0 3d bd 	movl   $0x8bd3dc0,0x4(%esp)
 81d03d5:	08 
 81d03d6:	c7 04 24 1b 2b 00 00 	movl   $0x2b1b,(%esp)
 81d03dd:	e8 f5 04 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d03e2:	eb 2b                	jmp    81d040f <_ZN29Dispatcher_CloseDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0xa9>
 81d03e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d03e7:	89 04 24             	mov    %eax,(%esp)
 81d03ea:	e8 e5 f4 05 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 81d03ef:	8b 10                	mov    (%eax),%edx
 81d03f1:	83 c2 04             	add    $0x4,%edx
 81d03f4:	8b 0a                	mov    (%edx),%ecx
 81d03f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d03fd:	00 
 81d03fe:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d0401:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d0405:	89 04 24             	mov    %eax,(%esp)
 81d0408:	ff d1                	call   *%ecx
 81d040a:	b8 00 00 00 00       	mov    $0x0,%eax
 81d040f:	c9                   	leave
 81d0410:	c3                   	ret
 81d0411:	90                   	nop

```

```c
// Dispatcher_CloseDisjointStore::process @ 0x81d0366

/* Dispatcher_CloseDisjointStore::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CloseDisjointStore::process
          (Dispatcher_CloseDisjointStore *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  ParamBase *pPVar4;
  
  pPVar4 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2b1b,
                       "virtual int Dispatcher_CloseDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      piVar3 = (int *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
      (**(code **)(*piVar3 + 4))(piVar3,param_1,0,pPVar4);
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
// === 081d02be Dispatcher_CloseDisjointStore::read  [0x081d02be-0x81d02c7] ===
 81d02be:	55                   	push   %ebp
 81d02bf:	89 e5                	mov    %esp,%ebp
 81d02c1:	b8 00 00 00 00       	mov    $0x0,%eax
 81d02c6:	5d                   	pop    %ebp
 81d02c7:	c3                   	ret

```

```c
// Dispatcher_CloseDisjointStore::read @ 0x81d02be

/* Dispatcher_CloseDisjointStore::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_CloseDisjointStore::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081d0412 Dispatcher_CloseDisjointStore::send  [0x081d0412-0x81d0449] ===
 81d0412:	55                   	push   %ebp
 81d0413:	89 e5                	mov    %esp,%ebp
 81d0415:	83 ec 28             	sub    $0x28,%esp
 81d0418:	8b 45 10             	mov    0x10(%ebp),%eax
 81d041b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d041e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0421:	8b 40 04             	mov    0x4(%eax),%eax
 81d0424:	85 c0                	test   %eax,%eax
 81d0426:	74 20                	je     81d0448 <_ZN29Dispatcher_CloseDisjointStore4sendEP5CUserR9ParamBase+0x36>
 81d0428:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d042b:	8b 40 04             	mov    0x4(%eax),%eax
 81d042e:	0f b6 c0             	movzbl %al,%eax
 81d0431:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d0435:	c7 44 24 04 f6 00 00 	movl   $0xf6,0x4(%esp)
 81d043c:	00 
 81d043d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0440:	89 04 24             	mov    %eax,(%esp)
 81d0443:	e8 fa ba 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d0448:	c9                   	leave
 81d0449:	c3                   	ret

```

```c
// Dispatcher_CloseDisjointStore::send @ 0x81d0412

/* Dispatcher_CloseDisjointStore::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_CloseDisjointStore::send
          (Dispatcher_CloseDisjointStore *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xf6,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

