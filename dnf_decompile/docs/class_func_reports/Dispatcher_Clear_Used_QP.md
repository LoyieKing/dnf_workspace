# Dispatcher_Clear_Used_QP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d6746 Dispatcher_Clear_Used_QP::check_error  [0x081d6746-0x81d677b] ===
 81d6746:	55                   	push   %ebp
 81d6747:	89 e5                	mov    %esp,%ebp
 81d6749:	83 ec 18             	sub    $0x18,%esp
 81d674c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d6750:	75 07                	jne    81d6759 <_ZN24Dispatcher_Clear_Used_QP11check_errorEP5CUserR8MSG_BASE+0x13>
 81d6752:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d6757:	eb 21                	jmp    81d677a <_ZN24Dispatcher_Clear_Used_QP11check_errorEP5CUserR8MSG_BASE+0x34>
 81d6759:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d675c:	89 04 24             	mov    %eax,(%esp)
 81d675f:	e8 28 3c f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d6764:	83 f8 03             	cmp    $0x3,%eax
 81d6767:	0f 95 c0             	setne  %al
 81d676a:	84 c0                	test   %al,%al
 81d676c:	74 07                	je     81d6775 <_ZN24Dispatcher_Clear_Used_QP11check_errorEP5CUserR8MSG_BASE+0x2f>
 81d676e:	b8 63 00 00 00       	mov    $0x63,%eax
 81d6773:	eb 05                	jmp    81d677a <_ZN24Dispatcher_Clear_Used_QP11check_errorEP5CUserR8MSG_BASE+0x34>
 81d6775:	b8 00 00 00 00       	mov    $0x0,%eax
 81d677a:	c9                   	leave
 81d677b:	c3                   	ret

```

```c
// Dispatcher_Clear_Used_QP::check_error @ 0x81d6746

/* Dispatcher_Clear_Used_QP::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_Clear_Used_QP::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 99;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081d6786 Dispatcher_Clear_Used_QP::process  [0x081d6786-0x81d684f] ===
 81d6786:	55                   	push   %ebp
 81d6787:	89 e5                	mov    %esp,%ebp
 81d6789:	83 ec 38             	sub    $0x38,%esp
 81d678c:	8b 45 10             	mov    0x10(%ebp),%eax
 81d678f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d6793:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6796:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d679a:	8b 45 08             	mov    0x8(%ebp),%eax
 81d679d:	89 04 24             	mov    %eax,(%esp)
 81d67a0:	e8 a1 ff ff ff       	call   81d6746 <_ZN24Dispatcher_Clear_Used_QP11check_errorEP5CUserR8MSG_BASE>
 81d67a5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d67a8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81d67ac:	7e 0a                	jle    81d67b8 <_ZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBase+0x32>
 81d67ae:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d67b3:	e9 95 00 00 00       	jmp    81d684d <_ZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBase+0xc7>
 81d67b8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81d67bc:	79 26                	jns    81d67e4 <_ZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBase+0x5e>
 81d67be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d67c5:	00 
 81d67c6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d67cd:	00 
 81d67ce:	c7 44 24 04 40 2a bd 	movl   $0x8bd2a40,0x4(%esp)
 81d67d5:	08 
 81d67d6:	c7 04 24 31 40 00 00 	movl   $0x4031,(%esp)
 81d67dd:	e8 f5 a0 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d67e2:	eb 69                	jmp    81d684d <_ZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBase+0xc7>
 81d67e4:	8b 45 14             	mov    0x14(%ebp),%eax
 81d67e7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d67ea:	8b 45 10             	mov    0x10(%ebp),%eax
 81d67ed:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d67f0:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81d67f7:	00 
 81d67f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d67fb:	89 04 24             	mov    %eax,(%esp)
 81d67fe:	e8 81 6d f0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 81d6803:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d6806:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d680a:	75 11                	jne    81d681d <_ZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBase+0x97>
 81d680c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d680f:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81d6816:	b8 00 00 00 00       	mov    $0x0,%eax
 81d681b:	eb 30                	jmp    81d684d <_ZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBase+0xc7>
 81d681d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6820:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6824:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d6827:	89 04 24             	mov    %eax,(%esp)
 81d682a:	e8 f7 8b 41 00       	call   85ef426 <_ZN10CQuestShop11clearUsedQpEP5CUser>
 81d682f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d6832:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d6836:	74 10                	je     81d6848 <_ZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBase+0xc2>
 81d6838:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d683b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d683e:	89 50 04             	mov    %edx,0x4(%eax)
 81d6841:	b8 00 00 00 00       	mov    $0x0,%eax
 81d6846:	eb 05                	jmp    81d684d <_ZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBase+0xc7>
 81d6848:	b8 00 00 00 00       	mov    $0x0,%eax
 81d684d:	c9                   	leave
 81d684e:	c3                   	ret
 81d684f:	90                   	nop

```

```c
// Dispatcher_Clear_Used_QP::process @ 0x81d6786

/* Dispatcher_Clear_Used_QP::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Clear_Used_QP::process
          (Dispatcher_Clear_Used_QP *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  CQuestShop *this_00;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = LineFunc(0x4031,
                       "virtual int Dispatcher_Clear_Used_QP::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,0);
    }
    else {
      this_00 = (CQuestShop *)CUser::GetCharacExpandData(param_1,0xb,param_2);
      if (this_00 == (CQuestShop *)0x0) {
        *(undefined4 *)(param_3 + 4) = 1;
        uVar2 = 0;
      }
      else {
        iVar1 = CQuestShop::clearUsedQp(this_00,param_1);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          *(int *)(param_3 + 4) = iVar1;
          uVar2 = 0;
        }
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081d677c Dispatcher_Clear_Used_QP::read  [0x081d677c-0x81d6785] ===
 81d677c:	55                   	push   %ebp
 81d677d:	89 e5                	mov    %esp,%ebp
 81d677f:	b8 00 00 00 00       	mov    $0x0,%eax
 81d6784:	5d                   	pop    %ebp
 81d6785:	c3                   	ret

```

```c
// Dispatcher_Clear_Used_QP::read @ 0x81d677c

/* Dispatcher_Clear_Used_QP::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Clear_Used_QP::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081d6850 Dispatcher_Clear_Used_QP::send  [0x081d6850-0x81d69d1] ===
 81d6850:	55                   	push   %ebp
 81d6851:	89 e5                	mov    %esp,%ebp
 81d6853:	56                   	push   %esi
 81d6854:	53                   	push   %ebx
 81d6855:	83 ec 30             	sub    $0x30,%esp
 81d6858:	8b 45 10             	mov    0x10(%ebp),%eax
 81d685b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d685e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d6861:	8b 40 04             	mov    0x4(%eax),%eax
 81d6864:	85 c0                	test   %eax,%eax
 81d6866:	0f 85 c3 00 00 00    	jne    81d692f <_ZN24Dispatcher_Clear_Used_QP4sendEP5CUserR9ParamBase+0xdf>
 81d686c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d686f:	89 04 24             	mov    %eax,(%esp)
 81d6872:	e8 d5 74 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d6877:	c7 44 24 08 90 01 00 	movl   $0x190,0x8(%esp)
 81d687e:	00 
 81d687f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d6886:	00 
 81d6887:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d688a:	89 04 24             	mov    %eax,(%esp)
 81d688d:	e8 6a 50 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d6892:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d6899:	00 
 81d689a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d689d:	89 04 24             	mov    %eax,(%esp)
 81d68a0:	e8 7b 50 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d68a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d68a8:	89 04 24             	mov    %eax,(%esp)
 81d68ab:	e8 ce 39 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d68b0:	89 04 24             	mov    %eax,(%esp)
 81d68b3:	e8 1e df f5 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81d68b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d68bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d68bf:	89 04 24             	mov    %eax,(%esp)
 81d68c2:	e8 75 50 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d68c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d68ce:	00 
 81d68cf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d68d2:	89 04 24             	mov    %eax,(%esp)
 81d68d5:	e8 7e 50 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d68da:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d68dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d68e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d68e4:	89 04 24             	mov    %eax,(%esp)
 81d68e7:	e8 ce 1c 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d68ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d68ef:	89 04 24             	mov    %eax,(%esp)
 81d68f2:	e8 2d 43 4b 00       	call   868ac24 <_ZN5CUser12sendCharacQpEv>
 81d68f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d68fa:	89 04 24             	mov    %eax,(%esp)
 81d68fd:	e8 2a 46 4b 00       	call   868af2c <_ZN5CUser20sendCharacQuestPieceEv>
 81d6902:	eb 1b                	jmp    81d691f <_ZN24Dispatcher_Clear_Used_QP4sendEP5CUserR9ParamBase+0xcf>
 81d6904:	89 d3                	mov    %edx,%ebx
 81d6906:	89 c6                	mov    %eax,%esi
 81d6908:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d690b:	89 04 24             	mov    %eax,(%esp)
 81d690e:	e8 6d 75 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d6913:	89 f0                	mov    %esi,%eax
 81d6915:	89 da                	mov    %ebx,%edx
 81d6917:	89 04 24             	mov    %eax,(%esp)
 81d691a:	e8 31 ce 90 00       	call   8ae3750 <_Unwind_Resume>
 81d691f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d6922:	89 04 24             	mov    %eax,(%esp)
 81d6925:	e8 56 75 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d692a:	e9 9b 00 00 00       	jmp    81d69ca <_ZN24Dispatcher_Clear_Used_QP4sendEP5CUserR9ParamBase+0x17a>
 81d692f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d6932:	89 04 24             	mov    %eax,(%esp)
 81d6935:	e8 12 74 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d693a:	c7 44 24 08 90 01 00 	movl   $0x190,0x8(%esp)
 81d6941:	00 
 81d6942:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d6949:	00 
 81d694a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d694d:	89 04 24             	mov    %eax,(%esp)
 81d6950:	e8 a7 4f ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d6955:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d695c:	00 
 81d695d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d6960:	89 04 24             	mov    %eax,(%esp)
 81d6963:	e8 b8 4f ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d6968:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d696b:	8b 40 04             	mov    0x4(%eax),%eax
 81d696e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6972:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d6975:	89 04 24             	mov    %eax,(%esp)
 81d6978:	e8 27 35 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d697d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d6984:	00 
 81d6985:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d6988:	89 04 24             	mov    %eax,(%esp)
 81d698b:	e8 c8 4f ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d6990:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d6993:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6997:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d699a:	89 04 24             	mov    %eax,(%esp)
 81d699d:	e8 18 1c 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d69a2:	eb 1b                	jmp    81d69bf <_ZN24Dispatcher_Clear_Used_QP4sendEP5CUserR9ParamBase+0x16f>
 81d69a4:	89 d3                	mov    %edx,%ebx
 81d69a6:	89 c6                	mov    %eax,%esi
 81d69a8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d69ab:	89 04 24             	mov    %eax,(%esp)
 81d69ae:	e8 cd 74 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d69b3:	89 f0                	mov    %esi,%eax
 81d69b5:	89 da                	mov    %ebx,%edx
 81d69b7:	89 04 24             	mov    %eax,(%esp)
 81d69ba:	e8 91 cd 90 00       	call   8ae3750 <_Unwind_Resume>
 81d69bf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d69c2:	89 04 24             	mov    %eax,(%esp)
 81d69c5:	e8 b6 74 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d69ca:	83 c4 30             	add    $0x30,%esp
 81d69cd:	5b                   	pop    %ebx
 81d69ce:	5e                   	pop    %esi
 81d69cf:	5d                   	pop    %ebp
 81d69d0:	c3                   	ret
 81d69d1:	90                   	nop

```

```c
// Dispatcher_Clear_Used_QP::send @ 0x81d6850

/* Dispatcher_Clear_Used_QP::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Clear_Used_QP::send(Dispatcher_Clear_Used_QP *this,CUser *param_1,ParamBase *param_2)

{
  CInventory *this_00;
  int iVar1;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d688d to 081d6901 has its CatchHandler @ 081d6904 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,400);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar1 = CInventory::get_money(this_00);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    CUser::sendCharacQp(param_1);
    CUser::sendCharacQuestPiece(param_1);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d6950 to 081d69a1 has its CatchHandler @ 081d69a4 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,400);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}

```

