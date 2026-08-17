# Dispatcher_TutorialLevelUp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081e3724 Dispatcher_TutorialLevelUp::process  [0x081e3724-0x81e3913] ===
 81e3724:	55                   	push   %ebp
 81e3725:	89 e5                	mov    %esp,%ebp
 81e3727:	83 ec 48             	sub    $0x48,%esp
 81e372a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e372d:	89 04 24             	mov    %eax,(%esp)
 81e3730:	e8 57 6c ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e3735:	83 f8 05             	cmp    $0x5,%eax
 81e3738:	0f 95 c0             	setne  %al
 81e373b:	84 c0                	test   %al,%al
 81e373d:	74 25                	je     81e3764 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0x40>
 81e373f:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81e3746:	00 
 81e3747:	c7 44 24 04 e4 01 00 	movl   $0x1e4,0x4(%esp)
 81e374e:	00 
 81e374f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3752:	89 04 24             	mov    %eax,(%esp)
 81e3755:	e8 e8 87 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e375a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e375f:	e9 ae 01 00 00       	jmp    81e3912 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81e3764:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3767:	89 04 24             	mov    %eax,(%esp)
 81e376a:	e8 49 6b ef ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81e376f:	83 f8 01             	cmp    $0x1,%eax
 81e3772:	0f 95 c0             	setne  %al
 81e3775:	84 c0                	test   %al,%al
 81e3777:	74 25                	je     81e379e <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0x7a>
 81e3779:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81e3780:	00 
 81e3781:	c7 44 24 04 e4 01 00 	movl   $0x1e4,0x4(%esp)
 81e3788:	00 
 81e3789:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e378c:	89 04 24             	mov    %eax,(%esp)
 81e378f:	e8 ae 87 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e3794:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3799:	e9 74 01 00 00       	jmp    81e3912 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81e379e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e37a1:	89 04 24             	mov    %eax,(%esp)
 81e37a4:	e8 a3 19 47 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81e37a9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e37ac:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e37b0:	75 25                	jne    81e37d7 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0xb3>
 81e37b2:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81e37b9:	00 
 81e37ba:	c7 44 24 04 e4 01 00 	movl   $0x1e4,0x4(%esp)
 81e37c1:	00 
 81e37c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e37c5:	89 04 24             	mov    %eax,(%esp)
 81e37c8:	e8 75 87 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e37cd:	b8 00 00 00 00       	mov    $0x0,%eax
 81e37d2:	e9 3b 01 00 00       	jmp    81e3912 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81e37d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e37da:	05 24 0b 00 00       	add    $0xb24,%eax
 81e37df:	89 04 24             	mov    %eax,(%esp)
 81e37e2:	e8 15 98 04 00       	call   822cffc <_ZN13CBattle_Field11get_cur_mapEv>
 81e37e7:	3d 49 ee 00 00       	cmp    $0xee49,%eax
 81e37ec:	74 35                	je     81e3823 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0xff>
 81e37ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e37f1:	05 24 0b 00 00       	add    $0xb24,%eax
 81e37f6:	89 04 24             	mov    %eax,(%esp)
 81e37f9:	e8 fe 97 04 00       	call   822cffc <_ZN13CBattle_Field11get_cur_mapEv>
 81e37fe:	3d 51 ee 00 00       	cmp    $0xee51,%eax
 81e3803:	74 1e                	je     81e3823 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0xff>
 81e3805:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3808:	05 24 0b 00 00       	add    $0xb24,%eax
 81e380d:	89 04 24             	mov    %eax,(%esp)
 81e3810:	e8 e7 97 04 00       	call   822cffc <_ZN13CBattle_Field11get_cur_mapEv>
 81e3815:	3d 58 ee 00 00       	cmp    $0xee58,%eax
 81e381a:	74 07                	je     81e3823 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0xff>
 81e381c:	b8 01 00 00 00       	mov    $0x1,%eax
 81e3821:	eb 05                	jmp    81e3828 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0x104>
 81e3823:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3828:	84 c0                	test   %al,%al
 81e382a:	74 25                	je     81e3851 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0x12d>
 81e382c:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81e3833:	00 
 81e3834:	c7 44 24 04 e4 01 00 	movl   $0x1e4,0x4(%esp)
 81e383b:	00 
 81e383c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e383f:	89 04 24             	mov    %eax,(%esp)
 81e3842:	e8 fb 86 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e3847:	b8 00 00 00 00       	mov    $0x0,%eax
 81e384c:	e9 c1 00 00 00       	jmp    81e3912 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81e3851:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 81e3855:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81e385c:	c7 44 24 10 3b 00 00 	movl   $0x3b,0x10(%esp)
 81e3863:	00 
 81e3864:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e386b:	00 
 81e386c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81e386f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e3873:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81e3876:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e387a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e387d:	89 04 24             	mov    %eax,(%esp)
 81e3880:	e8 ef 64 4a 00       	call   8689d74 <_ZN5CUser19CalLevelUpItemStateERcRiii>
 81e3885:	83 f0 01             	xor    $0x1,%eax
 81e3888:	84 c0                	test   %al,%al
 81e388a:	74 22                	je     81e38ae <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0x18a>
 81e388c:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81e3893:	00 
 81e3894:	c7 44 24 04 e4 01 00 	movl   $0x1e4,0x4(%esp)
 81e389b:	00 
 81e389c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e389f:	89 04 24             	mov    %eax,(%esp)
 81e38a2:	e8 9b 86 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e38a7:	b8 00 00 00 00       	mov    $0x0,%eax
 81e38ac:	eb 64                	jmp    81e3912 <_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81e38ae:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81e38b5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81e38bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e38bf:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 81e38c6:	00 
 81e38c7:	c7 44 24 18 0d 00 00 	movl   $0xd,0x18(%esp)
 81e38ce:	00 
 81e38cf:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81e38d2:	89 54 24 14          	mov    %edx,0x14(%esp)
 81e38d6:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81e38d9:	89 54 24 10          	mov    %edx,0x10(%esp)
 81e38dd:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81e38e0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81e38e4:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81e38e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e38eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e38ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e38f2:	89 04 24             	mov    %eax,(%esp)
 81e38f5:	e8 12 79 4a 00       	call   868b20c <_ZN5CUser9rewardExpEiRiS0_S0_S0_13eExpAddReasonb>
 81e38fa:	c7 44 24 04 e4 01 00 	movl   $0x1e4,0x4(%esp)
 81e3901:	00 
 81e3902:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3905:	89 04 24             	mov    %eax,(%esp)
 81e3908:	e8 93 85 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81e390d:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3912:	c9                   	leave
 81e3913:	c3                   	ret

```

```c
// Dispatcher_TutorialLevelUp::process @ 0x81e3724

/* Dispatcher_TutorialLevelUp::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_TutorialLevelUp::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 5) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x1e4,0x13);
    return 0;
  }
  iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
  if (iVar3 == 1) {
    local_10 = CUser::GetParty((CUser *)param_2);
    if (local_10 != 0) {
      iVar3 = CBattle_Field::get_cur_map((CBattle_Field *)(local_10 + 0xb24));
      if (((iVar3 == 0xee49) ||
          (iVar3 = CBattle_Field::get_cur_map((CBattle_Field *)(local_10 + 0xb24)), iVar3 == 0xee51)
          ) || (iVar3 = CBattle_Field::get_cur_map((CBattle_Field *)(local_10 + 0xb24)),
               iVar3 == 0xee58)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x1e4,0x13);
      }
      else {
        local_11 = '\0';
        local_18 = 0;
        cVar2 = CUser::CalLevelUpItemState((CUser *)param_2,&local_11,&local_18,1,0x3b);
        if (cVar2 == '\x01') {
          local_1c = 0;
          local_20 = 0;
          CUser::rewardExp((CUser *)param_2,local_18,&local_1c,&local_20,local_24,local_28,0xd,1);
          CUser::SendCmdOkPacket((CUser *)param_2,0x1e4);
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x1e4,0x13);
        }
      }
      return 0;
    }
    CUser::SendCmdErrorPacket((CUser *)param_2,0x1e4,0x13);
    return 0;
  }
  CUser::SendCmdErrorPacket((CUser *)param_2,0x1e4,0x13);
  return 0;
}

```

---

## read

```asm
// === 081e371a Dispatcher_TutorialLevelUp::read  [0x081e371a-0x81e3723] ===
 81e371a:	55                   	push   %ebp
 81e371b:	89 e5                	mov    %esp,%ebp
 81e371d:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3722:	5d                   	pop    %ebp
 81e3723:	c3                   	ret

```

```c
// Dispatcher_TutorialLevelUp::read @ 0x81e371a

/* Dispatcher_TutorialLevelUp::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_TutorialLevelUp::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

