# Dispatcher_Client_Spec_Statistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081ce75a Dispatcher_Client_Spec_Statistic::check_error  [0x081ce75a-0x81ce793] ===
 81ce75a:	55                   	push   %ebp
 81ce75b:	89 e5                	mov    %esp,%ebp
 81ce75d:	83 ec 18             	sub    $0x18,%esp
 81ce760:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ce764:	75 26                	jne    81ce78c <_ZN32Dispatcher_Client_Spec_Statistic11check_errorEP5CUserR8MSG_BASE+0x32>
 81ce766:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ce76d:	00 
 81ce76e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ce775:	00 
 81ce776:	c7 44 24 04 e0 43 bd 	movl   $0x8bd43e0,0x4(%esp)
 81ce77d:	08 
 81ce77e:	c7 04 24 fd 27 00 00 	movl   $0x27fd,(%esp)
 81ce785:	e8 4d 21 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce78a:	eb 05                	jmp    81ce791 <_ZN32Dispatcher_Client_Spec_Statistic11check_errorEP5CUserR8MSG_BASE+0x37>
 81ce78c:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce791:	c9                   	leave
 81ce792:	c3                   	ret
 81ce793:	90                   	nop

```

```c
// Dispatcher_Client_Spec_Statistic::check_error @ 0x81ce75a

/* Dispatcher_Client_Spec_Statistic::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_Client_Spec_Statistic::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x27fd,"int Dispatcher_Client_Spec_Statistic::check_error(CUser*, MSG_BASE&)",0
                     ,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## process

```asm
// === 081ce6d4 Dispatcher_Client_Spec_Statistic::process  [0x081ce6d4-0x81ce759] ===
 81ce6d4:	55                   	push   %ebp
 81ce6d5:	89 e5                	mov    %esp,%ebp
 81ce6d7:	83 ec 28             	sub    $0x28,%esp
 81ce6da:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce6dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ce6e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce6e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce6e8:	8b 45 08             	mov    0x8(%ebp),%eax
 81ce6eb:	89 04 24             	mov    %eax,(%esp)
 81ce6ee:	e8 67 00 00 00       	call   81ce75a <_ZN32Dispatcher_Client_Spec_Statistic11check_errorEP5CUserR8MSG_BASE>
 81ce6f3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81ce6f6:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81ce6fa:	7e 05                	jle    81ce701 <_ZN32Dispatcher_Client_Spec_Statistic7processEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81ce6fc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ce6ff:	eb 56                	jmp    81ce757 <_ZN32Dispatcher_Client_Spec_Statistic7processEP5CUserR8MSG_BASER9ParamBase+0x83>
 81ce701:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81ce705:	79 07                	jns    81ce70e <_ZN32Dispatcher_Client_Spec_Statistic7processEP5CUserR8MSG_BASER9ParamBase+0x3a>
 81ce707:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ce70c:	eb 49                	jmp    81ce757 <_ZN32Dispatcher_Client_Spec_Statistic7processEP5CUserR8MSG_BASER9ParamBase+0x83>
 81ce70e:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce711:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ce714:	8b 45 14             	mov    0x14(%ebp),%eax
 81ce717:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ce71a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ce71d:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81ce721:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce724:	88 50 04             	mov    %dl,0x4(%eax)
 81ce727:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce72a:	89 04 24             	mov    %eax,(%esp)
 81ce72d:	e8 a4 15 06 00       	call   822fcd6 <_ZN5CUser15getClientHWSpecEv>
 81ce732:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce735:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ce738:	83 c0 0e             	add    $0xe,%eax
 81ce73b:	c7 44 24 08 f8 0b 00 	movl   $0xbf8,0x8(%esp)
 81ce742:	00 
 81ce743:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce747:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce74a:	89 04 24             	mov    %eax,(%esp)
 81ce74d:	e8 4e f1 ea ff       	call   807d8a0 <memcpy@plt>
 81ce752:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce757:	c9                   	leave
 81ce758:	c3                   	ret
 81ce759:	90                   	nop

```

```c
// Dispatcher_Client_Spec_Statistic::process @ 0x81ce6d4

/* Dispatcher_Client_Spec_Statistic::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_Client_Spec_Statistic::process
          (Dispatcher_Client_Spec_Statistic *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  void *__dest;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      *(MSG_BASE *)(param_3 + 4) = param_2[0xd];
      __dest = (void *)CUser::getClientHWSpec(param_1);
      memcpy(__dest,param_2 + 0xe,0xbf8);
      iVar1 = 0;
    }
  }
  return iVar1;
}

```

---

## read

```asm
// === 081ce5fe Dispatcher_Client_Spec_Statistic::read  [0x081ce5fe-0x81ce6d3] ===
 81ce5fe:	55                   	push   %ebp
 81ce5ff:	89 e5                	mov    %esp,%ebp
 81ce601:	83 ec 28             	sub    $0x28,%esp
 81ce604:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce607:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ce60a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce60d:	83 c0 0d             	add    $0xd,%eax
 81ce610:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce614:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce617:	89 04 24             	mov    %eax,(%esp)
 81ce61a:	e8 51 e9 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81ce61f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce622:	83 c0 0e             	add    $0xe,%eax
 81ce625:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce629:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce62c:	89 04 24             	mov    %eax,(%esp)
 81ce62f:	e8 3c e9 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81ce634:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce637:	83 c0 0f             	add    $0xf,%eax
 81ce63a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce63e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce641:	89 04 24             	mov    %eax,(%esp)
 81ce644:	e8 27 e9 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81ce649:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81ce650:	eb 67                	jmp    81ce6b9 <_ZN32Dispatcher_Client_Spec_Statistic4readER9PacketBufR8MSG_BASE+0xbb>
 81ce652:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ce655:	89 d0                	mov    %edx,%eax
 81ce657:	01 c0                	add    %eax,%eax
 81ce659:	01 d0                	add    %edx,%eax
 81ce65b:	c1 e0 02             	shl    $0x2,%eax
 81ce65e:	03 45 f0             	add    -0x10(%ebp),%eax
 81ce661:	83 c0 12             	add    $0x12,%eax
 81ce664:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce668:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce66b:	89 04 24             	mov    %eax,(%esp)
 81ce66e:	e8 fd e8 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81ce673:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ce676:	89 d0                	mov    %edx,%eax
 81ce678:	01 c0                	add    %eax,%eax
 81ce67a:	01 d0                	add    %edx,%eax
 81ce67c:	c1 e0 02             	shl    $0x2,%eax
 81ce67f:	03 45 f0             	add    -0x10(%ebp),%eax
 81ce682:	83 c0 16             	add    $0x16,%eax
 81ce685:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce689:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce68c:	89 04 24             	mov    %eax,(%esp)
 81ce68f:	e8 ac eb 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81ce694:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ce697:	89 d0                	mov    %edx,%eax
 81ce699:	01 c0                	add    %eax,%eax
 81ce69b:	01 d0                	add    %edx,%eax
 81ce69d:	c1 e0 02             	shl    $0x2,%eax
 81ce6a0:	03 45 f0             	add    -0x10(%ebp),%eax
 81ce6a3:	83 c0 1a             	add    $0x1a,%eax
 81ce6a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce6aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce6ad:	89 04 24             	mov    %eax,(%esp)
 81ce6b0:	e8 8b eb 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81ce6b5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81ce6b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce6bc:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81ce6c0:	0f b6 c0             	movzbl %al,%eax
 81ce6c3:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81ce6c6:	0f 9f c0             	setg   %al
 81ce6c9:	84 c0                	test   %al,%al
 81ce6cb:	75 85                	jne    81ce652 <_ZN32Dispatcher_Client_Spec_Statistic4readER9PacketBufR8MSG_BASE+0x54>
 81ce6cd:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce6d2:	c9                   	leave
 81ce6d3:	c3                   	ret

```

```c
// Dispatcher_Client_Spec_Statistic::read @ 0x81ce5fe

/* Dispatcher_Client_Spec_Statistic::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Client_Spec_Statistic::read
          (Dispatcher_Client_Spec_Statistic *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  int local_10;
  
  PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
  PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xf));
  for (local_10 = 0; local_10 < (int)(uint)(byte)param_2[0xf]; local_10 = local_10 + 1) {
    PacketBuf::get_byte(param_1,(uchar *)(param_2 + local_10 * 0xc + 0x12));
    PacketBuf::get_int(param_1,(uint *)(param_2 + local_10 * 0xc + 0x16));
    PacketBuf::get_int(param_1,(uint *)(param_2 + local_10 * 0xc + 0x1a));
  }
  return 0;
}

```

---

## send

```asm
// === 081ce794 Dispatcher_Client_Spec_Statistic::send  [0x081ce794-0x81ce8bb] ===
 81ce794:	55                   	push   %ebp
 81ce795:	89 e5                	mov    %esp,%ebp
 81ce797:	56                   	push   %esi
 81ce798:	53                   	push   %ebx
 81ce799:	81 ec 20 0c 00 00    	sub    $0xc20,%esp
 81ce79f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ce7a3:	0f 84 07 01 00 00    	je     81ce8b0 <_ZN32Dispatcher_Client_Spec_Statistic4sendEP5CUserR9ParamBase+0x11c>
 81ce7a9:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce7ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ce7af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce7b2:	89 04 24             	mov    %eax,(%esp)
 81ce7b5:	e8 1c 15 06 00       	call   822fcd6 <_ZN5CUser15getClientHWSpecEv>
 81ce7ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce7bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce7c0:	0f b6 00             	movzbl (%eax),%eax
 81ce7c3:	84 c0                	test   %al,%al
 81ce7c5:	74 1a                	je     81ce7e1 <_ZN32Dispatcher_Client_Spec_Statistic4sendEP5CUserR9ParamBase+0x4d>
 81ce7c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce7ca:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81ce7ce:	3c 01                	cmp    $0x1,%al
 81ce7d0:	74 0f                	je     81ce7e1 <_ZN32Dispatcher_Client_Spec_Statistic4sendEP5CUserR9ParamBase+0x4d>
 81ce7d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce7d5:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81ce7d9:	3c 81                	cmp    $0x81,%al
 81ce7db:	0f 85 d0 00 00 00    	jne    81ce8b1 <_ZN32Dispatcher_Client_Spec_Statistic4sendEP5CUserR9ParamBase+0x11d>
 81ce7e1:	8d 85 ea f3 ff ff    	lea    -0xc16(%ebp),%eax
 81ce7e7:	89 04 24             	mov    %eax,(%esp)
 81ce7ea:	e8 29 d4 05 00       	call   822bc18 <_ZN28Packet_Client_Spec_StatisticC1Ev>
 81ce7ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce7f2:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81ce7f6:	3c 01                	cmp    $0x1,%al
 81ce7f8:	74 0b                	je     81ce805 <_ZN32Dispatcher_Client_Spec_Statistic4sendEP5CUserR9ParamBase+0x71>
 81ce7fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ce7fd:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81ce801:	3c 81                	cmp    $0x81,%al
 81ce803:	75 09                	jne    81ce80e <_ZN32Dispatcher_Client_Spec_Statistic4sendEP5CUserR9ParamBase+0x7a>
 81ce805:	c6 85 f4 f3 ff ff 02 	movb   $0x2,-0xc0c(%ebp)
 81ce80c:	eb 07                	jmp    81ce815 <_ZN32Dispatcher_Client_Spec_Statistic4sendEP5CUserR9ParamBase+0x81>
 81ce80e:	c6 85 f4 f3 ff ff 00 	movb   $0x0,-0xc0c(%ebp)
 81ce815:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce818:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81ce81c:	88 85 f5 f3 ff ff    	mov    %al,-0xc0b(%ebp)
 81ce822:	0f b6 85 f5 f3 ff ff 	movzbl -0xc0b(%ebp),%eax
 81ce829:	0f b6 d0             	movzbl %al,%edx
 81ce82c:	89 d0                	mov    %edx,%eax
 81ce82e:	01 c0                	add    %eax,%eax
 81ce830:	01 d0                	add    %edx,%eax
 81ce832:	c1 e0 02             	shl    $0x2,%eax
 81ce835:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ce838:	83 c2 04             	add    $0x4,%edx
 81ce83b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ce83f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ce843:	8d 85 ea f3 ff ff    	lea    -0xc16(%ebp),%eax
 81ce849:	83 c0 12             	add    $0x12,%eax
 81ce84c:	89 04 24             	mov    %eax,(%esp)
 81ce84f:	e8 4c f0 ea ff       	call   807d8a0 <memcpy@plt>
 81ce854:	0f b6 85 f5 f3 ff ff 	movzbl -0xc0b(%ebp),%eax
 81ce85b:	0f b6 d0             	movzbl %al,%edx
 81ce85e:	89 d0                	mov    %edx,%eax
 81ce860:	01 c0                	add    %eax,%eax
 81ce862:	01 d0                	add    %edx,%eax
 81ce864:	c1 e0 02             	shl    $0x2,%eax
 81ce867:	83 c0 12             	add    $0x12,%eax
 81ce86a:	66 89 85 ec f3 ff ff 	mov    %ax,-0xc14(%ebp)
 81ce871:	0f b7 85 ec f3 ff ff 	movzwl -0xc14(%ebp),%eax
 81ce878:	0f b7 f0             	movzwl %ax,%esi
 81ce87b:	8d 9d ea f3 ff ff    	lea    -0xc16(%ebp),%ebx
 81ce881:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce884:	89 04 24             	mov    %eax,(%esp)
 81ce887:	e8 04 d4 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81ce88c:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 81ce892:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce896:	89 14 24             	mov    %edx,(%esp)
 81ce899:	e8 5a 34 f4 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81ce89e:	89 74 24 08          	mov    %esi,0x8(%esp)
 81ce8a2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ce8a6:	89 04 24             	mov    %eax,(%esp)
 81ce8a9:	e8 96 37 2a 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 81ce8ae:	eb 01                	jmp    81ce8b1 <_ZN32Dispatcher_Client_Spec_Statistic4sendEP5CUserR9ParamBase+0x11d>
 81ce8b0:	90                   	nop
 81ce8b1:	81 c4 20 0c 00 00    	add    $0xc20,%esp
 81ce8b7:	5b                   	pop    %ebx
 81ce8b8:	5e                   	pop    %esi
 81ce8b9:	5d                   	pop    %ebp
 81ce8ba:	c3                   	ret
 81ce8bb:	90                   	nop

```

```c
// Dispatcher_Client_Spec_Statistic::send @ 0x81ce794

/* Dispatcher_Client_Spec_Statistic::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Client_Spec_Statistic::send
          (Dispatcher_Client_Spec_Statistic *this,CUser *param_1,ParamBase *param_2)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  uint uVar2;
  Packet_Client_Spec_Statistic local_c1a [2];
  ushort local_c18;
  undefined1 local_c10;
  byte local_c0f;
  undefined1 auStack_c08 [3060];
  ParamBase *local_14;
  char *local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_14 = param_2;
    local_10 = (char *)CUser::getClientHWSpec(param_1);
    if (((*local_10 == '\0') || (local_14[4] == (ParamBase)0x1)) || (local_14[4] == (ParamBase)0x81)
       ) {
      Packet_Client_Spec_Statistic::Packet_Client_Spec_Statistic(local_c1a);
      if ((local_14[4] == (ParamBase)0x1) || (local_14[4] == (ParamBase)0x81)) {
        local_c10 = 2;
      }
      else {
        local_c10 = 0;
      }
      local_c0f = local_10[1];
      memcpy(auStack_c08,local_10 + 4,(uint)local_c0f * 0xc);
      local_c18 = (ushort)local_c0f * 0xc + 0x12;
      uVar2 = (uint)local_c18;
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar1);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_c1a,uVar2);
    }
  }
  return;
}

```

