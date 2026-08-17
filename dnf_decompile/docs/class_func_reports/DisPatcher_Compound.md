# DisPatcher_Compound

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081eaa5c DisPatcher_Compound::dispatch_sig  [0x081eaa5c-0x81ead3f] ===
 81eaa5c:	55                   	push   %ebp
 81eaa5d:	89 e5                	mov    %esp,%ebp
 81eaa5f:	56                   	push   %esi
 81eaa60:	53                   	push   %ebx
 81eaa61:	83 ec 50             	sub    $0x50,%esp
 81eaa64:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eaa67:	89 04 24             	mov    %eax,(%esp)
 81eaa6a:	e8 1d f9 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81eaa6f:	83 f8 03             	cmp    $0x3,%eax
 81eaa72:	0f 95 c0             	setne  %al
 81eaa75:	84 c0                	test   %al,%al
 81eaa77:	74 0a                	je     81eaa83 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81eaa79:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eaa7e:	e9 b4 02 00 00       	jmp    81ead37 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 81eaa83:	e8 5e 7b f7 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81eaa88:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 81eaa8f:	00 
 81eaa90:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81eaa97:	00 
 81eaa98:	8b 55 0c             	mov    0xc(%ebp),%edx
 81eaa9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81eaa9f:	89 04 24             	mov    %eax,(%esp)
 81eaaa2:	e8 11 3c f8 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81eaaa7:	84 c0                	test   %al,%al
 81eaaa9:	74 25                	je     81eaad0 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x74>
 81eaaab:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 81eaab2:	00 
 81eaab3:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 81eaaba:	00 
 81eaabb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eaabe:	89 04 24             	mov    %eax,(%esp)
 81eaac1:	e8 7c 14 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81eaac6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eaacb:	e9 67 02 00 00       	jmp    81ead37 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 81eaad0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81eaad3:	83 c0 0d             	add    $0xd,%eax
 81eaad6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eaada:	8b 45 10             	mov    0x10(%ebp),%eax
 81eaadd:	89 04 24             	mov    %eax,(%esp)
 81eaae0:	e8 99 27 3a 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81eaae5:	83 f0 01             	xor    $0x1,%eax
 81eaae8:	84 c0                	test   %al,%al
 81eaaea:	74 2b                	je     81eab17 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0xbb>
 81eaaec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eaaf3:	00 
 81eaaf4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eaafb:	00 
 81eaafc:	c7 44 24 04 e0 06 bd 	movl   $0x8bd06e0,0x4(%esp)
 81eab03:	08 
 81eab04:	c7 04 24 3a 6c 00 00 	movl   $0x6c3a,(%esp)
 81eab0b:	e8 c7 5d 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eab10:	89 c3                	mov    %eax,%ebx
 81eab12:	e9 20 02 00 00       	jmp    81ead37 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 81eab17:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81eab1a:	83 c0 11             	add    $0x11,%eax
 81eab1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eab21:	8b 45 10             	mov    0x10(%ebp),%eax
 81eab24:	89 04 24             	mov    %eax,(%esp)
 81eab27:	e8 44 24 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81eab2c:	83 f0 01             	xor    $0x1,%eax
 81eab2f:	84 c0                	test   %al,%al
 81eab31:	74 2b                	je     81eab5e <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x102>
 81eab33:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eab3a:	00 
 81eab3b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eab42:	00 
 81eab43:	c7 44 24 04 e0 06 bd 	movl   $0x8bd06e0,0x4(%esp)
 81eab4a:	08 
 81eab4b:	c7 04 24 3b 6c 00 00 	movl   $0x6c3b,(%esp)
 81eab52:	e8 80 5d 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eab57:	89 c3                	mov    %eax,%ebx
 81eab59:	e9 d9 01 00 00       	jmp    81ead37 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 81eab5e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81eab61:	83 c0 12             	add    $0x12,%eax
 81eab64:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eab68:	8b 45 10             	mov    0x10(%ebp),%eax
 81eab6b:	89 04 24             	mov    %eax,(%esp)
 81eab6e:	e8 3d 25 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81eab73:	83 f0 01             	xor    $0x1,%eax
 81eab76:	84 c0                	test   %al,%al
 81eab78:	74 2b                	je     81eaba5 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x149>
 81eab7a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eab81:	00 
 81eab82:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eab89:	00 
 81eab8a:	c7 44 24 04 e0 06 bd 	movl   $0x8bd06e0,0x4(%esp)
 81eab91:	08 
 81eab92:	c7 04 24 3d 6c 00 00 	movl   $0x6c3d,(%esp)
 81eab99:	e8 39 5d 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eab9e:	89 c3                	mov    %eax,%ebx
 81eaba0:	e9 92 01 00 00       	jmp    81ead37 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 81eaba5:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 81eaba9:	66 85 c0             	test   %ax,%ax
 81eabac:	75 2b                	jne    81eabd9 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x17d>
 81eabae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eabb5:	00 
 81eabb6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eabbd:	00 
 81eabbe:	c7 44 24 04 e0 06 bd 	movl   $0x8bd06e0,0x4(%esp)
 81eabc5:	08 
 81eabc6:	c7 04 24 40 6c 00 00 	movl   $0x6c40,(%esp)
 81eabcd:	e8 05 5d 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eabd2:	89 c3                	mov    %eax,%ebx
 81eabd4:	e9 5e 01 00 00       	jmp    81ead37 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 81eabd9:	0f b6 45 f1          	movzbl -0xf(%ebp),%eax
 81eabdd:	3c 01                	cmp    $0x1,%al
 81eabdf:	74 43                	je     81eac24 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x1c8>
 81eabe1:	8b 45 ed             	mov    -0x13(%ebp),%eax
 81eabe4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81eabe8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81eabef:	00 
 81eabf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eabf3:	89 04 24             	mov    %eax,(%esp)
 81eabf6:	e8 47 bd 45 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81eabfb:	84 c0                	test   %al,%al
 81eabfd:	74 25                	je     81eac24 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x1c8>
 81eabff:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 81eac06:	00 
 81eac07:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 81eac0e:	00 
 81eac0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eac12:	89 04 24             	mov    %eax,(%esp)
 81eac15:	e8 28 13 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81eac1a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eac1f:	e9 13 01 00 00       	jmp    81ead37 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 81eac24:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 81eac28:	0f b7 c8             	movzwl %ax,%ecx
 81eac2b:	0f b6 45 f1          	movzbl -0xf(%ebp),%eax
 81eac2f:	3c 01                	cmp    $0x1,%al
 81eac31:	0f 94 c0             	sete   %al
 81eac34:	0f b6 d0             	movzbl %al,%edx
 81eac37:	8b 45 ed             	mov    -0x13(%ebp),%eax
 81eac3a:	c7 44 24 10 1b 00 00 	movl   $0x1b,0x10(%esp)
 81eac41:	00 
 81eac42:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81eac46:	89 54 24 08          	mov    %edx,0x8(%esp)
 81eac4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eac4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eac51:	89 04 24             	mov    %eax,(%esp)
 81eac54:	e8 33 75 48 00       	call   867218c <_ZN5CUser13compound_itemEibti>
 81eac59:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81eac5c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81eac60:	0f 8e 9d 00 00 00    	jle    81ead03 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2a7>
 81eac66:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81eac69:	89 04 24             	mov    %eax,(%esp)
 81eac6c:	e8 db 30 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81eac71:	c7 44 24 08 1b 00 00 	movl   $0x1b,0x8(%esp)
 81eac78:	00 
 81eac79:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81eac80:	00 
 81eac81:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81eac84:	89 04 24             	mov    %eax,(%esp)
 81eac87:	e8 70 0c ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81eac8c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81eac93:	00 
 81eac94:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81eac97:	89 04 24             	mov    %eax,(%esp)
 81eac9a:	e8 81 0c ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81eac9f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81eaca2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eaca6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81eaca9:	89 04 24             	mov    %eax,(%esp)
 81eacac:	e8 6f 0c ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81eacb1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81eacb8:	00 
 81eacb9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81eacbc:	89 04 24             	mov    %eax,(%esp)
 81eacbf:	e8 94 0c ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81eacc4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81eacc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eaccb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eacce:	89 04 24             	mov    %eax,(%esp)
 81eacd1:	e8 e4 d8 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81eacd6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eacdb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81eacde:	89 04 24             	mov    %eax,(%esp)
 81eace1:	e8 9a 31 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81eace6:	eb 4f                	jmp    81ead37 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 81eace8:	89 d3                	mov    %edx,%ebx
 81eacea:	89 c6                	mov    %eax,%esi
 81eacec:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81eacef:	89 04 24             	mov    %eax,(%esp)
 81eacf2:	e8 89 31 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81eacf7:	89 f0                	mov    %esi,%eax
 81eacf9:	89 da                	mov    %ebx,%edx
 81eacfb:	89 04 24             	mov    %eax,(%esp)
 81eacfe:	e8 4d 8a 8f 00       	call   8ae3750 <_Unwind_Resume>
 81ead03:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ead07:	74 29                	je     81ead32 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2d6>
 81ead09:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ead0d:	75 23                	jne    81ead32 <_ZN19DisPatcher_Compound12dispatch_sigEP5CUserR9PacketBuf+0x2d6>
 81ead0f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ead16:	00 
 81ead17:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ead1e:	00 
 81ead1f:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 81ead26:	00 
 81ead27:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ead2a:	89 04 24             	mov    %eax,(%esp)
 81ead2d:	e8 5e 76 f3 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 81ead32:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ead37:	89 d8                	mov    %ebx,%eax
 81ead39:	83 c4 50             	add    $0x50,%esp
 81ead3c:	5b                   	pop    %ebx
 81ead3d:	5e                   	pop    %esi
 81ead3e:	5d                   	pop    %ebp
 81ead3f:	c3                   	ret

```

```c
// DisPatcher_Compound::dispatch_sig @ 0x81eaa5c

/* DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_Compound::dispatch_sig(DisPatcher_Compound *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  ServiceRestrictManager *pSVar3;
  undefined4 uVar4;
  PacketGuard local_30 [25];
  ulong local_17;
  uchar local_13;
  ushort local_12;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    pSVar3 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar1 = ServiceRestrictManager::isRestricted(pSVar3,param_1,1,9);
    if (cVar1 == '\0') {
      cVar1 = PacketBuf::get_int(param_2,&local_17);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_2,&local_13);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,&local_12);
          if (cVar1 == '\x01') {
            if (local_12 == 0) {
              uVar4 = LineFunc(0x6c40,
                               "virtual int DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&)",0
                               ,0);
            }
            else {
              if ((local_13 != '\x01') &&
                 (cVar1 = CUser::CheckItemLock(param_1,1,local_17), cVar1 != '\0')) {
                CUser::SendCmdErrorPacket(param_1,0x1b,0xd5);
                return 0;
              }
              local_10 = CUser::compound_item(param_1,local_17,local_13 == '\x01',local_12,0x1b);
              if (local_10 < 1) {
                if ((param_1 != (CUser *)0x0) && (local_10 == 0)) {
                  APSystem::CUserProc::ClearActionAndSendtoUser(param_1,6,0,0);
                }
                uVar4 = 0;
              }
              else {
                PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081eac87 to 081eacd5 has its CatchHandler @ 081eace8 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x1b);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,local_10);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
                CUser::Send(param_1,local_30);
                uVar4 = 0;
                PacketGuard::~PacketGuard(local_30);
              }
            }
          }
          else {
            uVar4 = LineFunc(0x6c3d,
                             "virtual int DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&)",0,0
                            );
          }
        }
        else {
          uVar4 = LineFunc(0x6c3b,
                           "virtual int DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&)",0,0);
        }
      }
      else {
        uVar4 = LineFunc(0x6c3a,"virtual int DisPatcher_Compound::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1b,0xd1);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

