# Dispatcher_UpdateContractOfCubeInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0825fa8e Dispatcher_UpdateContractOfCubeInfo::check_error  [0x0825fa8e-0x825fabb] ===
 825fa8e:	55                   	push   %ebp
 825fa8f:	89 e5                	mov    %esp,%ebp
 825fa91:	83 ec 18             	sub    $0x18,%esp
 825fa94:	c7 44 24 04 5c 00 00 	movl   $0x5c,0x4(%esp)
 825fa9b:	00 
 825fa9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fa9f:	89 04 24             	mov    %eax,(%esp)
 825faa2:	e8 67 65 e8 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 825faa7:	83 f0 01             	xor    $0x1,%eax
 825faaa:	84 c0                	test   %al,%al
 825faac:	74 07                	je     825fab5 <_ZN35Dispatcher_UpdateContractOfCubeInfo11check_errorEP5CUserR8MSG_BASE+0x27>
 825faae:	b8 08 00 00 00       	mov    $0x8,%eax
 825fab3:	eb 05                	jmp    825faba <_ZN35Dispatcher_UpdateContractOfCubeInfo11check_errorEP5CUserR8MSG_BASE+0x2c>
 825fab5:	b8 00 00 00 00       	mov    $0x0,%eax
 825faba:	c9                   	leave
 825fabb:	c3                   	ret

```

```c
// Dispatcher_UpdateContractOfCubeInfo::check_error @ 0x825fa8e

/* Dispatcher_UpdateContractOfCubeInfo::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_UpdateContractOfCubeInfo::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CUser::isAffectedPremium((CUser *)param_2,0x5c);
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}

```

---

## process

```asm
// === 0825f900 Dispatcher_UpdateContractOfCubeInfo::process  [0x0825f900-0x825f9ad] ===
 825f900:	55                   	push   %ebp
 825f901:	89 e5                	mov    %esp,%ebp
 825f903:	83 ec 28             	sub    $0x28,%esp
 825f906:	8b 45 10             	mov    0x10(%ebp),%eax
 825f909:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825f90c:	8b 45 14             	mov    0x14(%ebp),%eax
 825f90f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f912:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f915:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 825f919:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f91c:	88 50 08             	mov    %dl,0x8(%eax)
 825f91f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f922:	0f b6 50 0e          	movzbl 0xe(%eax),%edx
 825f926:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f929:	88 50 09             	mov    %dl,0x9(%eax)
 825f92c:	8b 45 10             	mov    0x10(%ebp),%eax
 825f92f:	89 44 24 08          	mov    %eax,0x8(%esp)
 825f933:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f936:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f93a:	8b 45 08             	mov    0x8(%ebp),%eax
 825f93d:	89 04 24             	mov    %eax,(%esp)
 825f940:	e8 49 01 00 00       	call   825fa8e <_ZN35Dispatcher_UpdateContractOfCubeInfo11check_errorEP5CUserR8MSG_BASE>
 825f945:	8b 55 f4             	mov    -0xc(%ebp),%edx
 825f948:	89 42 04             	mov    %eax,0x4(%edx)
 825f94b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f94e:	8b 40 04             	mov    0x4(%eax),%eax
 825f951:	85 c0                	test   %eax,%eax
 825f953:	74 07                	je     825f95c <_ZN35Dispatcher_UpdateContractOfCubeInfo7processEP5CUserR8MSG_BASER9ParamBase+0x5c>
 825f955:	b8 00 00 00 00       	mov    $0x0,%eax
 825f95a:	eb 50                	jmp    825f9ac <_ZN35Dispatcher_UpdateContractOfCubeInfo7processEP5CUserR8MSG_BASER9ParamBase+0xac>
 825f95c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f95f:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 825f963:	0f b6 c8             	movzbl %al,%ecx
 825f966:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f969:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 825f96d:	84 c0                	test   %al,%al
 825f96f:	0f 95 c0             	setne  %al
 825f972:	0f b6 d0             	movzbl %al,%edx
 825f975:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f978:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 825f97c:	89 54 24 04          	mov    %edx,0x4(%esp)
 825f980:	89 04 24             	mov    %eax,(%esp)
 825f983:	e8 0c 0b 00 00       	call   8260494 <_ZN15CUserCharacInfo29setConctractOfCubePremiumInfoEbh>
 825f988:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f98b:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 825f98f:	0f b6 c0             	movzbl %al,%eax
 825f992:	8b 55 0c             	mov    0xc(%ebp),%edx
 825f995:	81 c2 00 97 07 00    	add    $0x79700,%edx
 825f99b:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f99f:	89 14 24             	mov    %edx,(%esp)
 825f9a2:	e8 f9 73 42 00       	call   8686da0 <_ZN15cUserHistoryLog27SelectCubeForPremiumServiceEi>
 825f9a7:	b8 00 00 00 00       	mov    $0x0,%eax
 825f9ac:	c9                   	leave
 825f9ad:	c3                   	ret

```

```c
// Dispatcher_UpdateContractOfCubeInfo::process @ 0x825f900

/* Dispatcher_UpdateContractOfCubeInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UpdateContractOfCubeInfo::process
          (Dispatcher_UpdateContractOfCubeInfo *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  
  *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
  *(MSG_BASE *)(param_3 + 9) = param_2[0xe];
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    CUserCharacInfo::setConctractOfCubePremiumInfo
              ((CUserCharacInfo *)param_1,param_2[0xd] != (MSG_BASE)0x0,(uchar)param_2[0xe]);
    cUserHistoryLog::SelectCubeForPremiumService
              ((cUserHistoryLog *)(param_1 + 0x79700),(uint)(byte)param_2[0xe]);
  }
  return 0;
}

```

---

## read

```asm
// === 0825f868 Dispatcher_UpdateContractOfCubeInfo::read  [0x0825f868-0x825f8ff] ===
 825f868:	55                   	push   %ebp
 825f869:	89 e5                	mov    %esp,%ebp
 825f86b:	83 ec 28             	sub    $0x28,%esp
 825f86e:	8b 45 10             	mov    0x10(%ebp),%eax
 825f871:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f874:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f877:	83 c0 0d             	add    $0xd,%eax
 825f87a:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f87e:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f881:	89 04 24             	mov    %eax,(%esp)
 825f884:	e8 e7 d6 32 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 825f889:	83 f0 01             	xor    $0x1,%eax
 825f88c:	84 c0                	test   %al,%al
 825f88e:	74 26                	je     825f8b6 <_ZN35Dispatcher_UpdateContractOfCubeInfo4readER9PacketBufR8MSG_BASE+0x4e>
 825f890:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825f897:	00 
 825f898:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825f89f:	00 
 825f8a0:	c7 44 24 04 80 9d be 	movl   $0x8be9d80,0x4(%esp)
 825f8a7:	08 
 825f8a8:	c7 04 24 5e 09 00 00 	movl   $0x95e,(%esp)
 825f8af:	e8 23 10 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825f8b4:	eb 47                	jmp    825f8fd <_ZN35Dispatcher_UpdateContractOfCubeInfo4readER9PacketBufR8MSG_BASE+0x95>
 825f8b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f8b9:	83 c0 0e             	add    $0xe,%eax
 825f8bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f8c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f8c3:	89 04 24             	mov    %eax,(%esp)
 825f8c6:	e8 a5 d6 32 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 825f8cb:	83 f0 01             	xor    $0x1,%eax
 825f8ce:	84 c0                	test   %al,%al
 825f8d0:	74 26                	je     825f8f8 <_ZN35Dispatcher_UpdateContractOfCubeInfo4readER9PacketBufR8MSG_BASE+0x90>
 825f8d2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825f8d9:	00 
 825f8da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825f8e1:	00 
 825f8e2:	c7 44 24 04 80 9d be 	movl   $0x8be9d80,0x4(%esp)
 825f8e9:	08 
 825f8ea:	c7 04 24 61 09 00 00 	movl   $0x961,(%esp)
 825f8f1:	e8 e1 0f 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825f8f6:	eb 05                	jmp    825f8fd <_ZN35Dispatcher_UpdateContractOfCubeInfo4readER9PacketBufR8MSG_BASE+0x95>
 825f8f8:	b8 00 00 00 00       	mov    $0x0,%eax
 825f8fd:	c9                   	leave
 825f8fe:	c3                   	ret
 825f8ff:	90                   	nop

```

```c
// Dispatcher_UpdateContractOfCubeInfo::read @ 0x825f868

/* Dispatcher_UpdateContractOfCubeInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UpdateContractOfCubeInfo::read
          (Dispatcher_UpdateContractOfCubeInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x961,
                       "virtual int Dispatcher_UpdateContractOfCubeInfo::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x95e,
                     "virtual int Dispatcher_UpdateContractOfCubeInfo::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 0825f9ae Dispatcher_UpdateContractOfCubeInfo::send  [0x0825f9ae-0x825fa8d] ===
 825f9ae:	55                   	push   %ebp
 825f9af:	89 e5                	mov    %esp,%ebp
 825f9b1:	56                   	push   %esi
 825f9b2:	53                   	push   %ebx
 825f9b3:	83 ec 20             	sub    $0x20,%esp
 825f9b6:	8b 45 10             	mov    0x10(%ebp),%eax
 825f9b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f9bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825f9bf:	89 04 24             	mov    %eax,(%esp)
 825f9c2:	e8 85 e3 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 825f9c7:	c7 44 24 08 0e 02 00 	movl   $0x20e,0x8(%esp)
 825f9ce:	00 
 825f9cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825f9d6:	00 
 825f9d7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825f9da:	89 04 24             	mov    %eax,(%esp)
 825f9dd:	e8 1a bf e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 825f9e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f9e5:	8b 40 04             	mov    0x4(%eax),%eax
 825f9e8:	85 c0                	test   %eax,%eax
 825f9ea:	75 07                	jne    825f9f3 <_ZN35Dispatcher_UpdateContractOfCubeInfo4sendEP5CUserR9ParamBase+0x45>
 825f9ec:	b8 01 00 00 00       	mov    $0x1,%eax
 825f9f1:	eb 05                	jmp    825f9f8 <_ZN35Dispatcher_UpdateContractOfCubeInfo4sendEP5CUserR9ParamBase+0x4a>
 825f9f3:	b8 00 00 00 00       	mov    $0x0,%eax
 825f9f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f9fc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825f9ff:	89 04 24             	mov    %eax,(%esp)
 825fa02:	e8 19 bf e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825fa07:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825fa0a:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 825fa0e:	0f b6 c0             	movzbl %al,%eax
 825fa11:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fa15:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825fa18:	89 04 24             	mov    %eax,(%esp)
 825fa1b:	e8 00 bf e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825fa20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825fa23:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 825fa27:	0f b6 c0             	movzbl %al,%eax
 825fa2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fa2e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825fa31:	89 04 24             	mov    %eax,(%esp)
 825fa34:	e8 e7 be e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825fa39:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825fa40:	00 
 825fa41:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825fa44:	89 04 24             	mov    %eax,(%esp)
 825fa47:	e8 0c bf e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 825fa4c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825fa4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 825fa53:	8b 45 0c             	mov    0xc(%ebp),%eax
 825fa56:	89 04 24             	mov    %eax,(%esp)
 825fa59:	e8 5c 8b 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 825fa5e:	eb 1b                	jmp    825fa7b <_ZN35Dispatcher_UpdateContractOfCubeInfo4sendEP5CUserR9ParamBase+0xcd>
 825fa60:	89 d3                	mov    %edx,%ebx
 825fa62:	89 c6                	mov    %eax,%esi
 825fa64:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825fa67:	89 04 24             	mov    %eax,(%esp)
 825fa6a:	e8 11 e4 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825fa6f:	89 f0                	mov    %esi,%eax
 825fa71:	89 da                	mov    %ebx,%edx
 825fa73:	89 04 24             	mov    %eax,(%esp)
 825fa76:	e8 d5 3c 88 00       	call   8ae3750 <_Unwind_Resume>
 825fa7b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825fa7e:	89 04 24             	mov    %eax,(%esp)
 825fa81:	e8 fa e3 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825fa86:	83 c4 20             	add    $0x20,%esp
 825fa89:	5b                   	pop    %ebx
 825fa8a:	5e                   	pop    %esi
 825fa8b:	5d                   	pop    %ebp
 825fa8c:	c3                   	ret
 825fa8d:	90                   	nop

```

```c
// Dispatcher_UpdateContractOfCubeInfo::send @ 0x825f9ae

/* Dispatcher_UpdateContractOfCubeInfo::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_UpdateContractOfCubeInfo::send
          (Dispatcher_UpdateContractOfCubeInfo *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0825f9dd to 0825fa5d has its CatchHandler @ 0825fa60 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x20e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(*(int *)(local_10 + 4) == 0));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[8]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[9]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

