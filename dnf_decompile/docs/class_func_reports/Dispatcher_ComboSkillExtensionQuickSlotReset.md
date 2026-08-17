# Dispatcher_ComboSkillExtensionQuickSlotReset

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0825f594 Dispatcher_ComboSkillExtensionQuickSlotReset::check_error  [0x0825f594-0x825f609] ===
 825f594:	55                   	push   %ebp
 825f595:	89 e5                	mov    %esp,%ebp
 825f597:	83 ec 28             	sub    $0x28,%esp
 825f59a:	8b 45 10             	mov    0x10(%ebp),%eax
 825f59d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f5a0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825f5a4:	75 07                	jne    825f5ad <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE+0x19>
 825f5a6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825f5ab:	eb 5a                	jmp    825f607 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE+0x73>
 825f5ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f5b0:	89 04 24             	mov    %eax,(%esp)
 825f5b3:	e8 d4 ad e7 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 825f5b8:	83 f8 02             	cmp    $0x2,%eax
 825f5bb:	0f 9e c0             	setle  %al
 825f5be:	84 c0                	test   %al,%al
 825f5c0:	74 07                	je     825f5c9 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE+0x35>
 825f5c2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825f5c7:	eb 3e                	jmp    825f607 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE+0x73>
 825f5c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f5cc:	89 04 24             	mov    %eax,(%esp)
 825f5cf:	e8 4c e9 e9 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 825f5d4:	83 f8 09             	cmp    $0x9,%eax
 825f5d7:	0f 95 c0             	setne  %al
 825f5da:	84 c0                	test   %al,%al
 825f5dc:	74 07                	je     825f5e5 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE+0x51>
 825f5de:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825f5e3:	eb 22                	jmp    825f607 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE+0x73>
 825f5e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f5e8:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 825f5ec:	84 c0                	test   %al,%al
 825f5ee:	74 12                	je     825f602 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE+0x6e>
 825f5f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f5f3:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 825f5f7:	3c 01                	cmp    $0x1,%al
 825f5f9:	74 07                	je     825f602 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE+0x6e>
 825f5fb:	b8 13 00 00 00       	mov    $0x13,%eax
 825f600:	eb 05                	jmp    825f607 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE+0x73>
 825f602:	b8 00 00 00 00       	mov    $0x0,%eax
 825f607:	c9                   	leave
 825f608:	c3                   	ret
 825f609:	90                   	nop

```

```c
// Dispatcher_ComboSkillExtensionQuickSlotReset::check_error @ 0x825f594

/* Dispatcher_ComboSkillExtensionQuickSlotReset::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ComboSkillExtensionQuickSlotReset::check_error
          (Dispatcher_ComboSkillExtensionQuickSlotReset *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar1 = 0xffffffff;
    }
    else {
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      if (iVar2 == 9) {
        if ((param_2[0xd] == (MSG_BASE)0x0) || (param_2[0xd] == (MSG_BASE)0x1)) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0x13;
        }
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 0825f4e8 Dispatcher_ComboSkillExtensionQuickSlotReset::process  [0x0825f4e8-0x825f593] ===
 825f4e8:	55                   	push   %ebp
 825f4e9:	89 e5                	mov    %esp,%ebp
 825f4eb:	53                   	push   %ebx
 825f4ec:	83 ec 24             	sub    $0x24,%esp
 825f4ef:	8b 45 14             	mov    0x14(%ebp),%eax
 825f4f2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825f4f5:	8b 45 10             	mov    0x10(%ebp),%eax
 825f4f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 825f4fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f4ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f503:	8b 45 08             	mov    0x8(%ebp),%eax
 825f506:	89 04 24             	mov    %eax,(%esp)
 825f509:	e8 86 00 00 00       	call   825f594 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE>
 825f50e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825f511:	89 42 04             	mov    %eax,0x4(%edx)
 825f514:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f517:	8b 40 04             	mov    0x4(%eax),%eax
 825f51a:	85 c0                	test   %eax,%eax
 825f51c:	7e 07                	jle    825f525 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset7processEP5CUserR8MSG_BASER9ParamBase+0x3d>
 825f51e:	b8 00 00 00 00       	mov    $0x0,%eax
 825f523:	eb 69                	jmp    825f58e <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset7processEP5CUserR8MSG_BASER9ParamBase+0xa6>
 825f525:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f528:	8b 40 04             	mov    0x4(%eax),%eax
 825f52b:	85 c0                	test   %eax,%eax
 825f52d:	79 28                	jns    825f557 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset7processEP5CUserR8MSG_BASER9ParamBase+0x6f>
 825f52f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f532:	8b 40 04             	mov    0x4(%eax),%eax
 825f535:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825f53c:	00 
 825f53d:	89 44 24 08          	mov    %eax,0x8(%esp)
 825f541:	c7 44 24 04 e0 9d be 	movl   $0x8be9de0,0x4(%esp)
 825f548:	08 
 825f549:	c7 04 24 84 03 00 00 	movl   $0x384,(%esp)
 825f550:	e8 82 13 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825f555:	eb 37                	jmp    825f58e <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset7processEP5CUserR8MSG_BASER9ParamBase+0xa6>
 825f557:	8b 45 10             	mov    0x10(%ebp),%eax
 825f55a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f55d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f560:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 825f564:	0f be d8             	movsbl %al,%ebx
 825f567:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f56a:	89 04 24             	mov    %eax,(%esp)
 825f56d:	e8 ce fb fc ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 825f572:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825f576:	89 04 24             	mov    %eax,(%esp)
 825f579:	e8 26 98 3a 00       	call   8608da4 <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND>
 825f57e:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f581:	89 04 24             	mov    %eax,(%esp)
 825f584:	e8 e1 ce 40 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 825f589:	b8 00 00 00 00       	mov    $0x0,%eax
 825f58e:	83 c4 24             	add    $0x24,%esp
 825f591:	5b                   	pop    %ebx
 825f592:	5d                   	pop    %ebp
 825f593:	c3                   	ret

```

```c
// Dispatcher_ComboSkillExtensionQuickSlotReset::process @ 0x825f4e8

/* Dispatcher_ComboSkillExtensionQuickSlotReset::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ComboSkillExtensionQuickSlotReset::process
          (Dispatcher_ComboSkillExtensionQuickSlotReset *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  MSG_BASE MVar1;
  undefined4 uVar2;
  SkillSlot *pSVar3;
  
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = LineFunc(900,
                       "virtual int Dispatcher_ComboSkillExtensionQuickSlotReset::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      MVar1 = param_2[0xd];
      pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
      SkillSlot::pullComboSkillExtensionQuickSlot(pSVar3,(int)(char)MVar1);
      CUser::send_skill_info(param_1);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 0825f492 Dispatcher_ComboSkillExtensionQuickSlotReset::read  [0x0825f492-0x825f4e7] ===
 825f492:	55                   	push   %ebp
 825f493:	89 e5                	mov    %esp,%ebp
 825f495:	83 ec 28             	sub    $0x28,%esp
 825f498:	8b 45 10             	mov    0x10(%ebp),%eax
 825f49b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f49e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f4a1:	83 c0 0d             	add    $0xd,%eax
 825f4a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f4a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f4ab:	89 04 24             	mov    %eax,(%esp)
 825f4ae:	e8 6f da 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 825f4b3:	83 f0 01             	xor    $0x1,%eax
 825f4b6:	84 c0                	test   %al,%al
 825f4b8:	74 26                	je     825f4e0 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset4readER9PacketBufR8MSG_BASE+0x4e>
 825f4ba:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825f4c1:	00 
 825f4c2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825f4c9:	00 
 825f4ca:	c7 44 24 04 60 9e be 	movl   $0x8be9e60,0x4(%esp)
 825f4d1:	08 
 825f4d2:	c7 04 24 72 03 00 00 	movl   $0x372,(%esp)
 825f4d9:	e8 f9 13 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825f4de:	eb 05                	jmp    825f4e5 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset4readER9PacketBufR8MSG_BASE+0x53>
 825f4e0:	b8 00 00 00 00       	mov    $0x0,%eax
 825f4e5:	c9                   	leave
 825f4e6:	c3                   	ret
 825f4e7:	90                   	nop

```

```c
// Dispatcher_ComboSkillExtensionQuickSlotReset::read @ 0x825f492

/* Dispatcher_ComboSkillExtensionQuickSlotReset::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ComboSkillExtensionQuickSlotReset::read
          (Dispatcher_ComboSkillExtensionQuickSlotReset *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x372,
                     "virtual int Dispatcher_ComboSkillExtensionQuickSlotReset::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 0825f60a Dispatcher_ComboSkillExtensionQuickSlotReset::send  [0x0825f60a-0x825f657] ===
 825f60a:	55                   	push   %ebp
 825f60b:	89 e5                	mov    %esp,%ebp
 825f60d:	83 ec 28             	sub    $0x28,%esp
 825f610:	8b 45 10             	mov    0x10(%ebp),%eax
 825f613:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f616:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f619:	8b 40 04             	mov    0x4(%eax),%eax
 825f61c:	85 c0                	test   %eax,%eax
 825f61e:	75 15                	jne    825f635 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset4sendEP5CUserR9ParamBase+0x2b>
 825f620:	c7 44 24 04 ff 01 00 	movl   $0x1ff,0x4(%esp)
 825f627:	00 
 825f628:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f62b:	89 04 24             	mov    %eax,(%esp)
 825f62e:	e8 6d c8 41 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 825f633:	eb 20                	jmp    825f655 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset4sendEP5CUserR9ParamBase+0x4b>
 825f635:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f638:	8b 40 04             	mov    0x4(%eax),%eax
 825f63b:	0f b6 c0             	movzbl %al,%eax
 825f63e:	89 44 24 08          	mov    %eax,0x8(%esp)
 825f642:	c7 44 24 04 ff 01 00 	movl   $0x1ff,0x4(%esp)
 825f649:	00 
 825f64a:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f64d:	89 04 24             	mov    %eax,(%esp)
 825f650:	e8 ed c8 41 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 825f655:	c9                   	leave
 825f656:	c3                   	ret
 825f657:	90                   	nop

```

```c
// Dispatcher_ComboSkillExtensionQuickSlotReset::send @ 0x825f60a

/* Dispatcher_ComboSkillExtensionQuickSlotReset::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ComboSkillExtensionQuickSlotReset::send
          (Dispatcher_ComboSkillExtensionQuickSlotReset *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1ff);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1ff,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

