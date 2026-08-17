# Dispatcher_SelectUltimateDifficulty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08226f30 Dispatcher_SelectUltimateDifficulty::dispatch_sig  [0x08226f30-0x82271b5] ===
 8226f30:	55                   	push   %ebp
 8226f31:	89 e5                	mov    %esp,%ebp
 8226f33:	56                   	push   %esi
 8226f34:	53                   	push   %ebx
 8226f35:	83 ec 40             	sub    $0x40,%esp
 8226f38:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226f3b:	89 04 24             	mov    %eax,(%esp)
 8226f3e:	e8 49 34 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8226f43:	83 f8 05             	cmp    $0x5,%eax
 8226f46:	0f 95 c0             	setne  %al
 8226f49:	84 c0                	test   %al,%al
 8226f4b:	74 0a                	je     8226f57 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8226f4d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8226f52:	e9 56 02 00 00       	jmp    82271ad <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x27d>
 8226f57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226f5a:	89 04 24             	mov    %eax,(%esp)
 8226f5d:	e8 ea e1 42 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8226f62:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8226f65:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8226f69:	74 10                	je     8226f7b <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x4b>
 8226f6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8226f6e:	89 04 24             	mov    %eax,(%esp)
 8226f71:	e8 0a e8 f1 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 8226f76:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8226f79:	74 07                	je     8226f82 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x52>
 8226f7b:	b8 01 00 00 00       	mov    $0x1,%eax
 8226f80:	eb 05                	jmp    8226f87 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x57>
 8226f82:	b8 00 00 00 00       	mov    $0x0,%eax
 8226f87:	84 c0                	test   %al,%al
 8226f89:	74 0a                	je     8226f95 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x65>
 8226f8b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8226f90:	e9 18 02 00 00       	jmp    82271ad <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x27d>
 8226f95:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8226f98:	05 24 0b 00 00       	add    $0xb24,%eax
 8226f9d:	89 04 24             	mov    %eax,(%esp)
 8226fa0:	e8 73 5f 00 00       	call   822cf18 <_ZN13CBattle_Field13getBloodStateEv>
 8226fa5:	83 f8 02             	cmp    $0x2,%eax
 8226fa8:	0f 9f c0             	setg   %al
 8226fab:	84 c0                	test   %al,%al
 8226fad:	74 0a                	je     8226fb9 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x89>
 8226faf:	bb 00 00 00 00       	mov    $0x0,%ebx
 8226fb4:	e9 f4 01 00 00       	jmp    82271ad <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x27d>
 8226fb9:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8226fbd:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8226fc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226fc4:	8b 45 10             	mov    0x10(%ebp),%eax
 8226fc7:	89 04 24             	mov    %eax,(%esp)
 8226fca:	e8 53 5f 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8226fcf:	83 f0 01             	xor    $0x1,%eax
 8226fd2:	84 c0                	test   %al,%al
 8226fd4:	74 2b                	je     8227001 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0xd1>
 8226fd6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8226fdd:	00 
 8226fde:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8226fe5:	00 
 8226fe6:	c7 44 24 04 20 c3 bc 	movl   $0x8bcc320,0x4(%esp)
 8226fed:	08 
 8226fee:	c7 04 24 d9 e2 00 00 	movl   $0xe2d9,(%esp)
 8226ff5:	e8 dd 98 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8226ffa:	89 c3                	mov    %eax,%ebx
 8226ffc:	e9 ac 01 00 00       	jmp    82271ad <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x27d>
 8227001:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8227005:	3c 01                	cmp    $0x1,%al
 8227007:	74 49                	je     8227052 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x122>
 8227009:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 822700d:	3c 02                	cmp    $0x2,%al
 822700f:	74 41                	je     8227052 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x122>
 8227011:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8227015:	0f be c0             	movsbl %al,%eax
 8227018:	89 44 24 14          	mov    %eax,0x14(%esp)
 822701c:	c7 44 24 10 a8 36 bc 	movl   $0x8bc36a8,0x10(%esp)
 8227023:	08 
 8227024:	c7 44 24 0c dd e2 00 	movl   $0xe2dd,0xc(%esp)
 822702b:	00 
 822702c:	c7 44 24 08 20 c3 bc 	movl   $0x8bcc320,0x8(%esp)
 8227033:	08 
 8227034:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 822703b:	08 
 822703c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8227043:	e8 c2 cb 8a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8227048:	bb 00 00 00 00       	mov    $0x0,%ebx
 822704d:	e9 5b 01 00 00       	jmp    82271ad <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x27d>
 8227052:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8227055:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 822705b:	85 c0                	test   %eax,%eax
 822705d:	74 18                	je     8227077 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x147>
 822705f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8227062:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 8227068:	89 04 24             	mov    %eax,(%esp)
 822706b:	e8 80 6c ed ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8227070:	3d ff 2a 00 00       	cmp    $0x2aff,%eax
 8227075:	74 07                	je     822707e <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x14e>
 8227077:	b8 01 00 00 00       	mov    $0x1,%eax
 822707c:	eb 05                	jmp    8227083 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x153>
 822707e:	b8 00 00 00 00       	mov    $0x0,%eax
 8227083:	84 c0                	test   %al,%al
 8227085:	74 36                	je     82270bd <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x18d>
 8227087:	c7 44 24 10 dc 36 bc 	movl   $0x8bc36dc,0x10(%esp)
 822708e:	08 
 822708f:	c7 44 24 0c e3 e2 00 	movl   $0xe2e3,0xc(%esp)
 8227096:	00 
 8227097:	c7 44 24 08 20 c3 bc 	movl   $0x8bcc320,0x8(%esp)
 822709e:	08 
 822709f:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 82270a6:	08 
 82270a7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82270ae:	e8 57 cb 8a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82270b3:	bb 00 00 00 00       	mov    $0x0,%ebx
 82270b8:	e9 f0 00 00 00       	jmp    82271ad <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x27d>
 82270bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82270c0:	05 24 0b 00 00       	add    $0xb24,%eax
 82270c5:	89 04 24             	mov    %eax,(%esp)
 82270c8:	e8 61 5f 00 00       	call   822d02e <_ZN13CBattle_Field21getUltimateDifficyltyEv>
 82270cd:	84 c0                	test   %al,%al
 82270cf:	0f 95 c0             	setne  %al
 82270d2:	84 c0                	test   %al,%al
 82270d4:	74 0a                	je     82270e0 <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x1b0>
 82270d6:	bb 00 00 00 00       	mov    $0x0,%ebx
 82270db:	e9 cd 00 00 00       	jmp    82271ad <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x27d>
 82270e0:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 82270e4:	0f be c0             	movsbl %al,%eax
 82270e7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82270ea:	81 c2 24 0b 00 00    	add    $0xb24,%edx
 82270f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82270f4:	89 14 24             	mov    %edx,(%esp)
 82270f7:	e8 16 5f 00 00       	call   822d012 <_ZN13CBattle_Field21setUltimateDifficultyEc>
 82270fc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82270ff:	89 04 24             	mov    %eax,(%esp)
 8227102:	e8 45 6c 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8227107:	c7 44 24 08 3e 01 00 	movl   $0x13e,0x8(%esp)
 822710e:	00 
 822710f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227116:	00 
 8227117:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 822711a:	89 04 24             	mov    %eax,(%esp)
 822711d:	e8 da 47 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8227122:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227129:	00 
 822712a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 822712d:	89 04 24             	mov    %eax,(%esp)
 8227130:	e8 eb 47 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8227135:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8227139:	0f be c0             	movsbl %al,%eax
 822713c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227140:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227143:	89 04 24             	mov    %eax,(%esp)
 8227146:	e8 d5 47 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 822714b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227152:	00 
 8227153:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227156:	89 04 24             	mov    %eax,(%esp)
 8227159:	e8 fa 47 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 822715e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227161:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227165:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8227168:	89 04 24             	mov    %eax,(%esp)
 822716b:	e8 de 5f 37 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8227170:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8227173:	05 24 0b 00 00       	add    $0xb24,%eax
 8227178:	89 04 24             	mov    %eax,(%esp)
 822717b:	e8 5e f3 0d 00       	call   83064de <_ZN13CBattle_Field18startUltimateRoundEv>
 8227180:	bb 00 00 00 00       	mov    $0x0,%ebx
 8227185:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227188:	89 04 24             	mov    %eax,(%esp)
 822718b:	e8 f0 6c 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8227190:	eb 1b                	jmp    82271ad <_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf+0x27d>
 8227192:	89 d3                	mov    %edx,%ebx
 8227194:	89 c6                	mov    %eax,%esi
 8227196:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227199:	89 04 24             	mov    %eax,(%esp)
 822719c:	e8 df 6c 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82271a1:	89 f0                	mov    %esi,%eax
 82271a3:	89 da                	mov    %ebx,%edx
 82271a5:	89 04 24             	mov    %eax,(%esp)
 82271a8:	e8 a3 c5 8b 00       	call   8ae3750 <_Unwind_Resume>
 82271ad:	89 d8                	mov    %ebx,%eax
 82271af:	83 c4 40             	add    $0x40,%esp
 82271b2:	5b                   	pop    %ebx
 82271b3:	5e                   	pop    %esi
 82271b4:	5d                   	pop    %ebp
 82271b5:	c3                   	ret

```

```c
// Dispatcher_SelectUltimateDifficulty::dispatch_sig @ 0x8226f30

/* Dispatcher_SelectUltimateDifficulty::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SelectUltimateDifficulty::dispatch_sig
          (Dispatcher_SelectUltimateDifficulty *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUser *pCVar4;
  undefined4 uVar5;
  PacketGuard local_20 [15];
  char local_11;
  CParty *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 5) {
    return 0;
  }
  local_10 = (CParty *)CUser::GetParty(param_1);
  if ((local_10 == (CParty *)0x0) ||
     (pCVar4 = (CUser *)CParty::getManager(local_10), pCVar4 != param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  iVar3 = CBattle_Field::getBloodState((CBattle_Field *)(local_10 + 0xb24));
  if (2 < iVar3) {
    return 0;
  }
  local_11 = '\0';
  cVar2 = PacketBuf::get_byte(param_2,&local_11);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xe2d9,
                     "virtual int Dispatcher_SelectUltimateDifficulty::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  if ((local_11 != '\x01') && (local_11 != '\x02')) {
    LogManager::logFormat
              (1,"PacketDispatcher_Impl_1.cpp",
               "virtual int Dispatcher_SelectUltimateDifficulty::dispatch_sig(CUser*, PacketBuf&)",
               0xe2dd,"ULTIMATE_LOG : Difficulty ERROR!! difficulty (%d)\n",(int)local_11);
    return 0;
  }
  if ((*(int *)(local_10 + 0xcac) == 0) ||
     (iVar3 = CDungeon::get_index(*(CDungeon **)(local_10 + 0xcac)), iVar3 != 0x2aff)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    LogManager::logFormat
              (1,"PacketDispatcher_Impl_1.cpp",
               "virtual int Dispatcher_SelectUltimateDifficulty::dispatch_sig(CUser*, PacketBuf&)",
               0xe2e3,"ULTIMATE_LOG : Dispatcher_SelectUltimateDifficulty ERROR!!\n");
  }
  else {
    cVar2 = CBattle_Field::getUltimateDifficylty((CBattle_Field *)(local_10 + 0xb24));
    if (cVar2 == '\0') {
      CBattle_Field::setUltimateDifficulty((CBattle_Field *)(local_10 + 0xb24),local_11);
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0822711d to 0822717f has its CatchHandler @ 08227192 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x13e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)local_11);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CParty::send_to_party(local_10,local_20);
      CBattle_Field::startUltimateRound((CBattle_Field *)(local_10 + 0xb24));
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}

```

