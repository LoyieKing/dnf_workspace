# Dispatcher_BingoReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0825e7b2 Dispatcher_BingoReward::check_error  [0x0825e7b2-0x825e879] ===
 825e7b2:	55                   	push   %ebp
 825e7b3:	89 e5                	mov    %esp,%ebp
 825e7b5:	83 ec 18             	sub    $0x18,%esp
 825e7b8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825e7bc:	74 0f                	je     825e7cd <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0x1b>
 825e7be:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e7c1:	89 04 24             	mov    %eax,(%esp)
 825e7c4:	e8 69 1c ec ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 825e7c9:	85 c0                	test   %eax,%eax
 825e7cb:	75 07                	jne    825e7d4 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0x22>
 825e7cd:	b8 01 00 00 00       	mov    $0x1,%eax
 825e7d2:	eb 05                	jmp    825e7d9 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0x27>
 825e7d4:	b8 00 00 00 00       	mov    $0x0,%eax
 825e7d9:	84 c0                	test   %al,%al
 825e7db:	74 0a                	je     825e7e7 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0x35>
 825e7dd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825e7e2:	e9 91 00 00 00       	jmp    825e878 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0xc6>
 825e7e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e7ea:	89 04 24             	mov    %eax,(%esp)
 825e7ed:	e8 9a bb e7 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 825e7f2:	83 f8 03             	cmp    $0x3,%eax
 825e7f5:	0f 95 c0             	setne  %al
 825e7f8:	84 c0                	test   %al,%al
 825e7fa:	74 07                	je     825e803 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0x51>
 825e7fc:	b8 1e 00 00 00       	mov    $0x1e,%eax
 825e801:	eb 75                	jmp    825e878 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0xc6>
 825e803:	a1 30 f7 41 09       	mov    0x941f730,%eax
 825e808:	c7 44 24 04 6a 00 00 	movl   $0x6a,0x4(%esp)
 825e80f:	00 
 825e810:	89 04 24             	mov    %eax,(%esp)
 825e813:	e8 80 71 eb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 825e818:	8b 10                	mov    (%eax),%edx
 825e81a:	83 c2 34             	add    $0x34,%edx
 825e81d:	8b 12                	mov    (%edx),%edx
 825e81f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 825e826:	00 
 825e827:	89 04 24             	mov    %eax,(%esp)
 825e82a:	ff d2                	call   *%edx
 825e82c:	83 f0 01             	xor    $0x1,%eax
 825e82f:	84 c0                	test   %al,%al
 825e831:	74 07                	je     825e83a <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0x88>
 825e833:	b8 13 00 00 00       	mov    $0x13,%eax
 825e838:	eb 3e                	jmp    825e878 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0xc6>
 825e83a:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e83d:	89 04 24             	mov    %eax,(%esp)
 825e840:	e8 6b 2a 43 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 825e845:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 825e849:	84 c0                	test   %al,%al
 825e84b:	74 07                	je     825e854 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0xa2>
 825e84d:	b8 12 00 00 00       	mov    $0x12,%eax
 825e852:	eb 24                	jmp    825e878 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0xc6>
 825e854:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e857:	89 04 24             	mov    %eax,(%esp)
 825e85a:	e8 51 2a 43 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 825e85f:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 825e863:	3c 02                	cmp    $0x2,%al
 825e865:	0f 9e c0             	setle  %al
 825e868:	84 c0                	test   %al,%al
 825e86a:	74 07                	je     825e873 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0xc1>
 825e86c:	b8 16 00 00 00       	mov    $0x16,%eax
 825e871:	eb 05                	jmp    825e878 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE+0xc6>
 825e873:	b8 00 00 00 00       	mov    $0x0,%eax
 825e878:	c9                   	leave
 825e879:	c3                   	ret

```

```c
// Dispatcher_BingoReward::check_error @ 0x825e7b2

/* Dispatcher_BingoReward::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_BingoReward::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_2 != (MSG_BASE *)0x0) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0825e7d9;
    }
  }
  bVar1 = true;
LAB_0825e7d9:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 3) {
      piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
      cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
      if (cVar2 == '\x01') {
        iVar3 = CUser::getBingoData((CUser *)param_2);
        if (*(char *)(iVar3 + 5) == '\0') {
          iVar3 = CUser::getBingoData((CUser *)param_2);
          if (*(char *)(iVar3 + 4) < '\x03') {
            uVar4 = 0x16;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0x12;
        }
      }
      else {
        uVar4 = 0x13;
      }
    }
    else {
      uVar4 = 0x1e;
    }
  }
  return uVar4;
}

```

---

## process

```asm
// === 0825e68c Dispatcher_BingoReward::process  [0x0825e68c-0x825e7b1] ===
 825e68c:	55                   	push   %ebp
 825e68d:	89 e5                	mov    %esp,%ebp
 825e68f:	83 ec 38             	sub    $0x38,%esp
 825e692:	8b 45 14             	mov    0x14(%ebp),%eax
 825e695:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825e698:	8b 45 10             	mov    0x10(%ebp),%eax
 825e69b:	89 44 24 08          	mov    %eax,0x8(%esp)
 825e69f:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e6a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e6a6:	8b 45 08             	mov    0x8(%ebp),%eax
 825e6a9:	89 04 24             	mov    %eax,(%esp)
 825e6ac:	e8 01 01 00 00       	call   825e7b2 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE>
 825e6b1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825e6b4:	89 42 04             	mov    %eax,0x4(%edx)
 825e6b7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825e6bb:	74 13                	je     825e6d0 <_ZN22Dispatcher_BingoReward7processEP5CUserR8MSG_BASER9ParamBase+0x44>
 825e6bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e6c0:	89 04 24             	mov    %eax,(%esp)
 825e6c3:	e8 e8 2b 43 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 825e6c8:	8b 10                	mov    (%eax),%edx
 825e6ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e6cd:	89 50 08             	mov    %edx,0x8(%eax)
 825e6d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e6d3:	8b 40 04             	mov    0x4(%eax),%eax
 825e6d6:	85 c0                	test   %eax,%eax
 825e6d8:	7e 0a                	jle    825e6e4 <_ZN22Dispatcher_BingoReward7processEP5CUserR8MSG_BASER9ParamBase+0x58>
 825e6da:	b8 00 00 00 00       	mov    $0x0,%eax
 825e6df:	e9 cc 00 00 00       	jmp    825e7b0 <_ZN22Dispatcher_BingoReward7processEP5CUserR8MSG_BASER9ParamBase+0x124>
 825e6e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e6e7:	8b 40 04             	mov    0x4(%eax),%eax
 825e6ea:	85 c0                	test   %eax,%eax
 825e6ec:	79 5c                	jns    825e74a <_ZN22Dispatcher_BingoReward7processEP5CUserR8MSG_BASER9ParamBase+0xbe>
 825e6ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e6f1:	8b 40 04             	mov    0x4(%eax),%eax
 825e6f4:	89 44 24 14          	mov    %eax,0x14(%esp)
 825e6f8:	c7 44 24 10 e0 85 be 	movl   $0x8be85e0,0x10(%esp)
 825e6ff:	08 
 825e700:	c7 44 24 0c 9a 01 00 	movl   $0x19a,0xc(%esp)
 825e707:	00 
 825e708:	c7 44 24 08 c0 a0 be 	movl   $0x8bea0c0,0x8(%esp)
 825e70f:	08 
 825e710:	c7 44 24 04 fe 85 be 	movl   $0x8be85fe,0x4(%esp)
 825e717:	08 
 825e718:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 825e71f:	e8 e6 54 87 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 825e724:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825e72b:	00 
 825e72c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825e733:	00 
 825e734:	c7 44 24 04 c0 a0 be 	movl   $0x8bea0c0,0x4(%esp)
 825e73b:	08 
 825e73c:	c7 04 24 9b 01 00 00 	movl   $0x19b,(%esp)
 825e743:	e8 8f 21 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825e748:	eb 66                	jmp    825e7b0 <_ZN22Dispatcher_BingoReward7processEP5CUserR8MSG_BASER9ParamBase+0x124>
 825e74a:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e74d:	89 04 24             	mov    %eax,(%esp)
 825e750:	e8 5b 2b 43 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 825e755:	c6 40 06 01          	movb   $0x1,0x6(%eax)
 825e759:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e75c:	89 04 24             	mov    %eax,(%esp)
 825e75f:	e8 4c 2b 43 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 825e764:	c6 40 05 01          	movb   $0x1,0x5(%eax)
 825e768:	a1 30 f7 41 09       	mov    0x941f730,%eax
 825e76d:	c7 44 24 04 6a 00 00 	movl   $0x6a,0x4(%esp)
 825e774:	00 
 825e775:	89 04 24             	mov    %eax,(%esp)
 825e778:	e8 1b 72 eb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 825e77d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825e780:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 825e784:	74 25                	je     825e7ab <_ZN22Dispatcher_BingoReward7processEP5CUserR8MSG_BASER9ParamBase+0x11f>
 825e786:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e789:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e78d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e790:	89 04 24             	mov    %eax,(%esp)
 825e793:	e8 8a be e6 ff       	call   80ca622 <_ZN10BingoEvent22sendMaxMatchLineRewardER5CUser>
 825e798:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825e79f:	00 
 825e7a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e7a3:	89 04 24             	mov    %eax,(%esp)
 825e7a6:	e8 ef 25 43 00       	call   8690d9a <_ZN5CUser23sendDecorationObjectCntEs>
 825e7ab:	b8 00 00 00 00       	mov    $0x0,%eax
 825e7b0:	c9                   	leave
 825e7b1:	c3                   	ret

```

```c
// Dispatcher_BingoReward::process @ 0x825e68c

/* Dispatcher_BingoReward::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BingoReward::process
          (Dispatcher_BingoReward *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  BingoEvent *this_00;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (param_1 != (CUser *)0x0) {
    puVar2 = (undefined4 *)CUser::getBingoData(param_1);
    *(undefined4 *)(param_3 + 8) = *puVar2;
  }
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_2.cpp",
                 "virtual int Dispatcher_BingoReward::process(CUser*, MSG_BASE&, ParamBase&)",0x19a,
                 "Dispatcher Check_Error No(%d)",*(undefined4 *)(param_3 + 4));
      uVar1 = LineFunc(0x19b,
                       "virtual int Dispatcher_BingoReward::process(CUser*, MSG_BASE&, ParamBase&)",
                       0,0);
    }
    else {
      iVar3 = CUser::getBingoData(param_1);
      *(undefined1 *)(iVar3 + 6) = 1;
      iVar3 = CUser::getBingoData(param_1);
      *(undefined1 *)(iVar3 + 5) = 1;
      this_00 = (BingoEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
      if (this_00 != (BingoEvent *)0x0) {
        BingoEvent::sendMaxMatchLineReward(this_00,param_1);
        CUser::sendDecorationObjectCnt(param_1,1);
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
// === 0825e682 Dispatcher_BingoReward::read  [0x0825e682-0x825e68b] ===
 825e682:	55                   	push   %ebp
 825e683:	89 e5                	mov    %esp,%ebp
 825e685:	b8 00 00 00 00       	mov    $0x0,%eax
 825e68a:	5d                   	pop    %ebp
 825e68b:	c3                   	ret

```

```c
// Dispatcher_BingoReward::read @ 0x825e682

/* Dispatcher_BingoReward::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_BingoReward::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 0825e87a Dispatcher_BingoReward::send  [0x0825e87a-0x825e961] ===
 825e87a:	55                   	push   %ebp
 825e87b:	89 e5                	mov    %esp,%ebp
 825e87d:	56                   	push   %esi
 825e87e:	53                   	push   %ebx
 825e87f:	83 ec 20             	sub    $0x20,%esp
 825e882:	8b 45 10             	mov    0x10(%ebp),%eax
 825e885:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825e888:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e88b:	8b 40 04             	mov    0x4(%eax),%eax
 825e88e:	85 c0                	test   %eax,%eax
 825e890:	75 18                	jne    825e8aa <_ZN22Dispatcher_BingoReward4sendEP5CUserR9ParamBase+0x30>
 825e892:	c7 44 24 04 02 02 00 	movl   $0x202,0x4(%esp)
 825e899:	00 
 825e89a:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e89d:	89 04 24             	mov    %eax,(%esp)
 825e8a0:	e8 fb d5 41 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 825e8a5:	e9 b0 00 00 00       	jmp    825e95a <_ZN22Dispatcher_BingoReward4sendEP5CUserR9ParamBase+0xe0>
 825e8aa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e8ad:	89 04 24             	mov    %eax,(%esp)
 825e8b0:	e8 97 f4 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 825e8b5:	c7 44 24 08 02 02 00 	movl   $0x202,0x8(%esp)
 825e8bc:	00 
 825e8bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825e8c4:	00 
 825e8c5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e8c8:	89 04 24             	mov    %eax,(%esp)
 825e8cb:	e8 2c d0 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 825e8d0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 825e8d7:	00 
 825e8d8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e8db:	89 04 24             	mov    %eax,(%esp)
 825e8de:	e8 3d d0 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825e8e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e8e6:	8b 40 04             	mov    0x4(%eax),%eax
 825e8e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e8ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e8f0:	89 04 24             	mov    %eax,(%esp)
 825e8f3:	e8 28 d0 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825e8f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e8fb:	8b 40 08             	mov    0x8(%eax),%eax
 825e8fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e902:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e905:	89 04 24             	mov    %eax,(%esp)
 825e908:	e8 2f d0 e6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 825e90d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825e914:	00 
 825e915:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e918:	89 04 24             	mov    %eax,(%esp)
 825e91b:	e8 38 d0 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 825e920:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e923:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e927:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e92a:	89 04 24             	mov    %eax,(%esp)
 825e92d:	e8 88 9c 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 825e932:	eb 1b                	jmp    825e94f <_ZN22Dispatcher_BingoReward4sendEP5CUserR9ParamBase+0xd5>
 825e934:	89 d3                	mov    %edx,%ebx
 825e936:	89 c6                	mov    %eax,%esi
 825e938:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e93b:	89 04 24             	mov    %eax,(%esp)
 825e93e:	e8 3d f5 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825e943:	89 f0                	mov    %esi,%eax
 825e945:	89 da                	mov    %ebx,%edx
 825e947:	89 04 24             	mov    %eax,(%esp)
 825e94a:	e8 01 4e 88 00       	call   8ae3750 <_Unwind_Resume>
 825e94f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e952:	89 04 24             	mov    %eax,(%esp)
 825e955:	e8 26 f5 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825e95a:	83 c4 20             	add    $0x20,%esp
 825e95d:	5b                   	pop    %ebx
 825e95e:	5e                   	pop    %esi
 825e95f:	5d                   	pop    %ebp
 825e960:	c3                   	ret
 825e961:	90                   	nop

```

```c
// Dispatcher_BingoReward::send @ 0x825e87a

/* Dispatcher_BingoReward::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_BingoReward::send(Dispatcher_BingoReward *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x202);
  }
  else {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0825e8cb to 0825e931 has its CatchHandler @ 0825e934 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x202);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

