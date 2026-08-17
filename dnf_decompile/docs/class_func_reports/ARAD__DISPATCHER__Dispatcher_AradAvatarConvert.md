# ARAD__DISPATCHER__Dispatcher_AradAvatarConvert

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## checkWorkState

```asm
// === 081a003e ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::checkWorkState  [0x081a003e-0x81a00bd] ===
 81a003e:	55                   	push   %ebp
 81a003f:	89 e5                	mov    %esp,%ebp
 81a0041:	83 ec 28             	sub    $0x28,%esp
 81a0044:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81a0049:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 81a0050:	00 
 81a0051:	8b 55 0c             	mov    0xc(%ebp),%edx
 81a0054:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a0058:	89 04 24             	mov    %eax,(%esp)
 81a005b:	e8 a2 89 0e 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81a0060:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81a0063:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81a0067:	74 24                	je     81a008d <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert14checkWorkStateEP5CUserRN4arad20SigAradAvatarConvertE+0x4f>
 81a0069:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a006c:	0f b6 c0             	movzbl %al,%eax
 81a006f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a0073:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 81a007a:	00 
 81a007b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a007e:	89 04 24             	mov    %eax,(%esp)
 81a0081:	e8 bc be 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81a0086:	b8 00 00 00 00       	mov    $0x0,%eax
 81a008b:	eb 2e                	jmp    81a00bb <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert14checkWorkStateEP5CUserRN4arad20SigAradAvatarConvertE+0x7d>
 81a008d:	e8 5d af ff ff       	call   819afef <_ZN4ARAD9SingletonI19AvatarConvertServerE3GetEv>
 81a0092:	8b 55 10             	mov    0x10(%ebp),%edx
 81a0095:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a0099:	8b 55 0c             	mov    0xc(%ebp),%edx
 81a009c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a00a0:	89 04 24             	mov    %eax,(%esp)
 81a00a3:	e8 6a 21 ff ff       	call   8192212 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE>
 81a00a8:	83 f0 01             	xor    $0x1,%eax
 81a00ab:	84 c0                	test   %al,%al
 81a00ad:	74 07                	je     81a00b6 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert14checkWorkStateEP5CUserRN4arad20SigAradAvatarConvertE+0x78>
 81a00af:	b8 00 00 00 00       	mov    $0x0,%eax
 81a00b4:	eb 05                	jmp    81a00bb <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert14checkWorkStateEP5CUserRN4arad20SigAradAvatarConvertE+0x7d>
 81a00b6:	b8 01 00 00 00       	mov    $0x1,%eax
 81a00bb:	c9                   	leave
 81a00bc:	c3                   	ret
 81a00bd:	90                   	nop

```

```c
// ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::checkWorkState @ 0x81a003e

/* ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::checkWorkState(CUser*,
   arad::SigAradAvatarConvert&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::checkWorkState
          (Dispatcher_AradAvatarConvert *this,CUser *param_1,SigAradAvatarConvert *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  AvatarConvertServer *this_00;
  
  uVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
  if (uVar2 == 0) {
    this_00 = (AvatarConvertServer *)Singleton<AvatarConvertServer>::Get();
    cVar1 = AvatarConvertServer::CheckCondition(this_00,param_1,param_2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x24f,uVar2 & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## dispatch_sig

```asm
// === 081a00be ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::dispatch_sig  [0x081a00be-0x81a0361] ===
 81a00be:	55                   	push   %ebp
 81a00bf:	89 e5                	mov    %esp,%ebp
 81a00c1:	56                   	push   %esi
 81a00c2:	53                   	push   %ebx
 81a00c3:	83 ec 30             	sub    $0x30,%esp
 81a00c6:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81a00ca:	75 0a                	jne    81a00d6 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x18>
 81a00cc:	bb 4a 07 00 00       	mov    $0x74a,%ebx
 81a00d1:	e9 83 02 00 00       	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a00d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a00d9:	89 04 24             	mov    %eax,(%esp)
 81a00dc:	e8 51 03 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81a00e1:	85 c0                	test   %eax,%eax
 81a00e3:	0f 94 c0             	sete   %al
 81a00e6:	84 c0                	test   %al,%al
 81a00e8:	74 0a                	je     81a00f4 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x36>
 81a00ea:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a00ef:	e9 65 02 00 00       	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a00f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a00f7:	89 04 24             	mov    %eax,(%esp)
 81a00fa:	e8 8d a2 f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81a00ff:	83 f8 02             	cmp    $0x2,%eax
 81a0102:	7e 10                	jle    81a0114 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x56>
 81a0104:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0107:	89 04 24             	mov    %eax,(%esp)
 81a010a:	e8 7d a2 f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81a010f:	83 f8 04             	cmp    $0x4,%eax
 81a0112:	7e 07                	jle    81a011b <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x5d>
 81a0114:	b8 01 00 00 00       	mov    $0x1,%eax
 81a0119:	eb 05                	jmp    81a0120 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x62>
 81a011b:	b8 00 00 00 00       	mov    $0x0,%eax
 81a0120:	84 c0                	test   %al,%al
 81a0122:	74 0a                	je     81a012e <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x70>
 81a0124:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a0129:	e9 2b 02 00 00       	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a012e:	e8 74 a2 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81a0133:	89 04 24             	mov    %eax,(%esp)
 81a0136:	e8 ad 23 fa ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 81a013b:	84 c0                	test   %al,%al
 81a013d:	75 11                	jne    81a0150 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x92>
 81a013f:	e8 63 a2 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81a0144:	89 04 24             	mov    %eax,(%esp)
 81a0147:	e8 66 09 00 00       	call   81a0ab2 <_ZNK9GameWorld16IsFreePvPChannelEv>
 81a014c:	84 c0                	test   %al,%al
 81a014e:	74 07                	je     81a0157 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x99>
 81a0150:	b8 01 00 00 00       	mov    $0x1,%eax
 81a0155:	eb 05                	jmp    81a015c <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 81a0157:	b8 00 00 00 00       	mov    $0x0,%eax
 81a015c:	84 c0                	test   %al,%al
 81a015e:	74 25                	je     81a0185 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0xc7>
 81a0160:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81a0167:	00 
 81a0168:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 81a016f:	00 
 81a0170:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0173:	89 04 24             	mov    %eax,(%esp)
 81a0176:	e8 c7 bd 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81a017b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a0180:	e9 d4 01 00 00       	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a0185:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0188:	89 04 24             	mov    %eax,(%esp)
 81a018b:	e8 6e a1 f3 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81a0190:	84 c0                	test   %al,%al
 81a0192:	74 25                	je     81a01b9 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0xfb>
 81a0194:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81a019b:	00 
 81a019c:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 81a01a3:	00 
 81a01a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a01a7:	89 04 24             	mov    %eax,(%esp)
 81a01aa:	e8 93 bd 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81a01af:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a01b4:	e9 a0 01 00 00       	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a01b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a01bc:	89 04 24             	mov    %eax,(%esp)
 81a01bf:	e8 e4 0e 4e 00       	call   86810a8 <_ZN5CUser26isEnableAvatarSocketActionEv>
 81a01c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81a01c7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81a01cb:	74 27                	je     81a01f4 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x136>
 81a01cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a01d0:	0f b6 c0             	movzbl %al,%eax
 81a01d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a01d7:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 81a01de:	00 
 81a01df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a01e2:	89 04 24             	mov    %eax,(%esp)
 81a01e5:	e8 58 bd 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81a01ea:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a01ef:	e9 65 01 00 00       	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a01f4:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 81a01f7:	89 04 24             	mov    %eax,(%esp)
 81a01fa:	e8 6b 08 00 00       	call   81a0a6a <_ZN4arad20SigAradAvatarConvertC1Ev>
 81a01ff:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 81a0202:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a0206:	8b 45 10             	mov    0x10(%ebp),%eax
 81a0209:	89 04 24             	mov    %eax,(%esp)
 81a020c:	e8 9f ce 3e 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81a0211:	83 f0 01             	xor    $0x1,%eax
 81a0214:	84 c0                	test   %al,%al
 81a0216:	74 0a                	je     81a0222 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x164>
 81a0218:	bb 6d 07 00 00       	mov    $0x76d,%ebx
 81a021d:	e9 37 01 00 00       	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a0222:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 81a0225:	83 c0 02             	add    $0x2,%eax
 81a0228:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a022c:	8b 45 10             	mov    0x10(%ebp),%eax
 81a022f:	89 04 24             	mov    %eax,(%esp)
 81a0232:	e8 79 ce 3e 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81a0237:	83 f0 01             	xor    $0x1,%eax
 81a023a:	84 c0                	test   %al,%al
 81a023c:	74 0a                	je     81a0248 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x18a>
 81a023e:	bb 71 07 00 00       	mov    $0x771,%ebx
 81a0243:	e9 11 01 00 00       	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a0248:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 81a024b:	83 c0 04             	add    $0x4,%eax
 81a024e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a0252:	8b 45 10             	mov    0x10(%ebp),%eax
 81a0255:	89 04 24             	mov    %eax,(%esp)
 81a0258:	e8 21 d0 3e 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81a025d:	83 f0 01             	xor    $0x1,%eax
 81a0260:	84 c0                	test   %al,%al
 81a0262:	74 0a                	je     81a026e <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x1b0>
 81a0264:	bb 75 07 00 00       	mov    $0x775,%ebx
 81a0269:	e9 eb 00 00 00       	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a026e:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 81a0271:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a0275:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0278:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a027c:	8b 45 08             	mov    0x8(%ebp),%eax
 81a027f:	89 04 24             	mov    %eax,(%esp)
 81a0282:	e8 b7 fd ff ff       	call   81a003e <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert14checkWorkStateEP5CUserRN4arad20SigAradAvatarConvertE>
 81a0287:	83 f0 01             	xor    $0x1,%eax
 81a028a:	84 c0                	test   %al,%al
 81a028c:	74 0a                	je     81a0298 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x1da>
 81a028e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a0293:	e9 c1 00 00 00       	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a0298:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81a029d:	c7 44 24 08 80 07 00 	movl   $0x780,0x8(%esp)
 81a02a4:	00 
 81a02a5:	c7 44 24 04 60 9a ba 	movl   $0x8ba9a60,0x4(%esp)
 81a02ac:	08 
 81a02ad:	89 04 24             	mov    %eax,(%esp)
 81a02b0:	e8 d1 f7 0e 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81a02b5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81a02bc:	00 
 81a02bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a02c1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a02c4:	89 04 24             	mov    %eax,(%esp)
 81a02c7:	e8 5a 89 f2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81a02cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a02cf:	89 04 24             	mov    %eax,(%esp)
 81a02d2:	e8 bf 89 f2 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81a02d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a02db:	c7 44 24 04 33 00 00 	movl   $0x33,0x4(%esp)
 81a02e2:	00 
 81a02e3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a02e6:	89 04 24             	mov    %eax,(%esp)
 81a02e9:	e8 c8 74 ff ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 81a02ee:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a02f1:	89 04 24             	mov    %eax,(%esp)
 81a02f4:	e8 55 89 f2 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81a02f9:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 81a0300:	00 
 81a0301:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 81a0304:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a0308:	89 04 24             	mov    %eax,(%esp)
 81a030b:	e8 42 e3 f3 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 81a0310:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81a0315:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81a0318:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a031c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a0323:	00 
 81a0324:	89 04 24             	mov    %eax,(%esp)
 81a0327:	e8 b2 0c 3d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81a032c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a0331:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a0334:	89 04 24             	mov    %eax,(%esp)
 81a0337:	e8 96 c5 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81a033c:	eb 1b                	jmp    81a0359 <_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 81a033e:	89 d3                	mov    %edx,%ebx
 81a0340:	89 c6                	mov    %eax,%esi
 81a0342:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a0345:	89 04 24             	mov    %eax,(%esp)
 81a0348:	e8 85 c5 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81a034d:	89 f0                	mov    %esi,%eax
 81a034f:	89 da                	mov    %ebx,%edx
 81a0351:	89 04 24             	mov    %eax,(%esp)
 81a0354:	e8 f7 33 94 00       	call   8ae3750 <_Unwind_Resume>
 81a0359:	89 d8                	mov    %ebx,%eax
 81a035b:	83 c4 30             	add    $0x30,%esp
 81a035e:	5b                   	pop    %ebx
 81a035f:	5e                   	pop    %esi
 81a0360:	5d                   	pop    %ebp
 81a0361:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::dispatch_sig @ 0x81a00be

/* ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::dispatch_sig
          (Dispatcher_AradAvatarConvert *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  Stream *pSVar5;
  CStreamGuard *this_00;
  undefined4 uVar6;
  CStreamGuard local_28 [10];
  SigAradAvatarConvert local_1e [2];
  ushort uStack_1c;
  ulong auStack_1a [2];
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 0x74a;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) || (iVar3 = CUser::get_state(param_1), 4 < iVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsFreePvPChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_081a015c;
    }
  }
  bVar1 = true;
LAB_081a015c:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24f,7);
    uVar6 = 0;
  }
  else {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      local_10 = CUser::isEnableAvatarSocketAction(param_1);
      if (local_10 == 0) {
        arad::SigAradAvatarConvert::SigAradAvatarConvert(local_1e);
        cVar2 = PacketBuf::get_short(param_2,(ushort *)local_1e);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_short(param_2,&uStack_1c);
          if (cVar2 == '\x01') {
            cVar2 = PacketBuf::get_int(param_2,auStack_1a);
            if (cVar2 == '\x01') {
              cVar2 = checkWorkState(this,param_1,local_1e);
              if (cVar2 == '\x01') {
                pSVar5 = (Stream *)
                         StreamPool::Acquire(GlobalData::s_stream_pool,
                                             "localjapan/Arad_PacketDispatcher.cpp",0x780);
                CStreamGuard::CStreamGuard(local_28,pSVar5,true);
                uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 081a02e9 to 081a032b has its CatchHandler @ 081a033e */
                make_internal_stream_jpn(local_28,0x33,uVar6);
                this_00 = (CStreamGuard *)CStreamGuard::operator->(local_28);
                CStreamGuard::put_binary(this_00,local_1e,0xe);
                MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
                uVar6 = 0;
                CStreamGuard::~CStreamGuard(local_28);
              }
              else {
                uVar6 = 0;
              }
            }
            else {
              uVar6 = 0x775;
            }
          }
          else {
            uVar6 = 0x771;
          }
        }
        else {
          uVar6 = 0x76d;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24f,local_10 & 0xff);
        uVar6 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24f,7);
      uVar6 = 0;
    }
  }
  return uVar6;
}

```

