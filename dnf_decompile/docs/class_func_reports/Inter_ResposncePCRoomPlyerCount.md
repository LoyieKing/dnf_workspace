# Inter_ResposncePCRoomPlyerCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084da0aa Inter_ResposncePCRoomPlyerCount::dispatch_sig  [0x084da0aa-0x84da1f9] ===
 84da0aa:	55                   	push   %ebp
 84da0ab:	89 e5                	mov    %esp,%ebp
 84da0ad:	56                   	push   %esi
 84da0ae:	53                   	push   %ebx
 84da0af:	83 ec 30             	sub    $0x30,%esp
 84da0b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da0b5:	89 04 24             	mov    %eax,(%esp)
 84da0b8:	e8 cf 02 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84da0bd:	85 c0                	test   %eax,%eax
 84da0bf:	0f 94 c0             	sete   %al
 84da0c2:	84 c0                	test   %al,%al
 84da0c4:	74 0a                	je     84da0d0 <_ZN31Inter_ResposncePCRoomPlyerCount12dispatch_sigEP5CUserPci+0x26>
 84da0c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84da0cb:	e9 21 01 00 00       	jmp    84da1f1 <_ZN31Inter_ResposncePCRoomPlyerCount12dispatch_sigEP5CUserPci+0x147>
 84da0d0:	8b 45 10             	mov    0x10(%ebp),%eax
 84da0d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84da0d6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84da0dd:	ff 
 84da0de:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da0e1:	89 04 24             	mov    %eax,(%esp)
 84da0e4:	e8 b7 3e 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84da0e9:	89 c2                	mov    %eax,%edx
 84da0eb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84da0ee:	8b 40 0e             	mov    0xe(%eax),%eax
 84da0f1:	39 c2                	cmp    %eax,%edx
 84da0f3:	0f 95 c0             	setne  %al
 84da0f6:	84 c0                	test   %al,%al
 84da0f8:	74 57                	je     84da151 <_ZN31Inter_ResposncePCRoomPlyerCount12dispatch_sigEP5CUserPci+0xa7>
 84da0fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84da0fd:	8b 58 0e             	mov    0xe(%eax),%ebx
 84da100:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84da107:	ff 
 84da108:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da10b:	89 04 24             	mov    %eax,(%esp)
 84da10e:	e8 8d 3e 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84da113:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84da117:	89 44 24 14          	mov    %eax,0x14(%esp)
 84da11b:	c7 44 24 10 c4 95 c8 	movl   $0x8c895c4,0x10(%esp)
 84da122:	08 
 84da123:	c7 44 24 0c cc 41 00 	movl   $0x41cc,0xc(%esp)
 84da12a:	00 
 84da12b:	c7 44 24 08 20 c0 c8 	movl   $0x8c8c020,0x8(%esp)
 84da132:	08 
 84da133:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84da13a:	08 
 84da13b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84da142:	e8 c3 9a 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84da147:	bb 00 00 00 00       	mov    $0x0,%ebx
 84da14c:	e9 a0 00 00 00       	jmp    84da1f1 <_ZN31Inter_ResposncePCRoomPlyerCount12dispatch_sigEP5CUserPci+0x147>
 84da151:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84da154:	89 04 24             	mov    %eax,(%esp)
 84da157:	e8 f0 3b 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84da15c:	c7 44 24 08 d9 00 00 	movl   $0xd9,0x8(%esp)
 84da163:	00 
 84da164:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da16b:	00 
 84da16c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84da16f:	89 04 24             	mov    %eax,(%esp)
 84da172:	e8 85 17 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84da177:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da17e:	00 
 84da17f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84da182:	89 04 24             	mov    %eax,(%esp)
 84da185:	e8 96 17 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da18a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84da18d:	8b 40 12             	mov    0x12(%eax),%eax
 84da190:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da194:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84da197:	89 04 24             	mov    %eax,(%esp)
 84da19a:	e8 81 17 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da19f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da1a6:	00 
 84da1a7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84da1aa:	89 04 24             	mov    %eax,(%esp)
 84da1ad:	e8 a6 17 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84da1b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84da1b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da1b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da1bc:	89 04 24             	mov    %eax,(%esp)
 84da1bf:	e8 f6 e3 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84da1c4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84da1c9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84da1cc:	89 04 24             	mov    %eax,(%esp)
 84da1cf:	e8 ac 3c 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84da1d4:	eb 1b                	jmp    84da1f1 <_ZN31Inter_ResposncePCRoomPlyerCount12dispatch_sigEP5CUserPci+0x147>
 84da1d6:	89 d3                	mov    %edx,%ebx
 84da1d8:	89 c6                	mov    %eax,%esi
 84da1da:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84da1dd:	89 04 24             	mov    %eax,(%esp)
 84da1e0:	e8 9b 3c 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84da1e5:	89 f0                	mov    %esi,%eax
 84da1e7:	89 da                	mov    %ebx,%edx
 84da1e9:	89 04 24             	mov    %eax,(%esp)
 84da1ec:	e8 5f 95 60 00       	call   8ae3750 <_Unwind_Resume>
 84da1f1:	89 d8                	mov    %ebx,%eax
 84da1f3:	83 c4 30             	add    $0x30,%esp
 84da1f6:	5b                   	pop    %ebx
 84da1f7:	5e                   	pop    %esi
 84da1f8:	5d                   	pop    %ebp
 84da1f9:	c3                   	ret

```

```c
// Inter_ResposncePCRoomPlyerCount::dispatch_sig @ 0x84da0aa

/* Inter_ResposncePCRoomPlyerCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ResposncePCRoomPlyerCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_10 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_10 + 0xe)) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084da172 to 084da1c3 has its CatchHandler @ 084da1d6 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xd9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ResposncePCRoomPlyerCount::dispatch_sig(CUser*, char*, int)",
                 0x41cc,
                 "Inter_ResponsePCRoomPlayerCount::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

