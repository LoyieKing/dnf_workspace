# Dispatcher_Antibot_DP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820b322 Dispatcher_Antibot_DP::dispatch_sig  [0x0820b322-0x820b50b] ===
 820b322:	55                   	push   %ebp
 820b323:	89 e5                	mov    %esp,%ebp
 820b325:	57                   	push   %edi
 820b326:	56                   	push   %esi
 820b327:	53                   	push   %ebx
 820b328:	81 ec 5c 0b 00 00    	sub    $0xb5c,%esp
 820b32e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820b331:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b335:	8b 45 10             	mov    0x10(%ebp),%eax
 820b338:	89 04 24             	mov    %eax,(%esp)
 820b33b:	e8 00 1f 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 820b340:	83 f0 01             	xor    $0x1,%eax
 820b343:	84 c0                	test   %al,%al
 820b345:	74 29                	je     820b370 <_ZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBuf+0x4e>
 820b347:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b34e:	00 
 820b34f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b356:	00 
 820b357:	c7 44 24 04 60 e1 bc 	movl   $0x8bce160,0x4(%esp)
 820b35e:	08 
 820b35f:	c7 04 24 95 a7 00 00 	movl   $0xa795,(%esp)
 820b366:	e8 6c 55 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820b36b:	e9 90 01 00 00       	jmp    820b500 <_ZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBuf+0x1de>
 820b370:	8b 45 10             	mov    0x10(%ebp),%eax
 820b373:	89 04 24             	mov    %eax,(%esp)
 820b376:	e8 a1 57 f0 ff       	call   8110b1c <_ZN9PacketBuf9get_indexEv>
 820b37b:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b37f:	8b 45 10             	mov    0x10(%ebp),%eax
 820b382:	89 04 24             	mov    %eax,(%esp)
 820b385:	e8 ae 26 38 00       	call   858da38 <_ZN9PacketBuf11get_buf_ptrEi>
 820b38a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 820b38d:	c7 45 dc 0d 00 00 00 	movl   $0xd,-0x24(%ebp)
 820b394:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 820b397:	3d 67 05 00 00       	cmp    $0x567,%eax
 820b39c:	76 29                	jbe    820b3c7 <_ZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBuf+0xa5>
 820b39e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b3a5:	00 
 820b3a6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b3ad:	00 
 820b3ae:	c7 44 24 04 60 e1 bc 	movl   $0x8bce160,0x4(%esp)
 820b3b5:	08 
 820b3b6:	c7 04 24 a3 a7 00 00 	movl   $0xa7a3,(%esp)
 820b3bd:	e8 15 55 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820b3c2:	e9 39 01 00 00       	jmp    820b500 <_ZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBuf+0x1de>
 820b3c7:	66 c7 45 c2 f0 0a    	movw   $0xaf0,-0x3e(%ebp)
 820b3cd:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 820b3d2:	8b 00                	mov    (%eax),%eax
 820b3d4:	83 c0 2c             	add    $0x2c,%eax
 820b3d7:	8b 30                	mov    (%eax),%esi
 820b3d9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 820b3dc:	0f b7 d8             	movzwl %ax,%ebx
 820b3df:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b3e2:	89 04 24             	mov    %eax,(%esp)
 820b3e5:	e8 fa 48 02 00       	call   822fce4 <_ZN5CUser13getAntibotKeyEv>
 820b3ea:	89 c2                	mov    %eax,%edx
 820b3ec:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 820b3f1:	8d 4d c2             	lea    -0x3e(%ebp),%ecx
 820b3f4:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 820b3f8:	8d 8d d2 f4 ff ff    	lea    -0xb2e(%ebp),%ecx
 820b3fe:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 820b402:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820b406:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 820b409:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 820b40d:	89 54 24 04          	mov    %edx,0x4(%esp)
 820b411:	89 04 24             	mov    %eax,(%esp)
 820b414:	ff d6                	call   *%esi
 820b416:	89 45 e0             	mov    %eax,-0x20(%ebp)
 820b419:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 820b41d:	74 63                	je     820b482 <_ZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBuf+0x160>
 820b41f:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 820b422:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b425:	89 04 24             	mov    %eax,(%esp)
 820b428:	e8 b7 48 02 00       	call   822fce4 <_ZN5CUser13getAntibotKeyEv>
 820b42d:	89 c3                	mov    %eax,%ebx
 820b42f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b436:	00 
 820b437:	c7 44 24 08 af a7 00 	movl   $0xa7af,0x8(%esp)
 820b43e:	00 
 820b43f:	c7 44 24 04 60 e1 bc 	movl   $0x8bce160,0x4(%esp)
 820b446:	08 
 820b447:	8d 45 c8             	lea    -0x38(%ebp),%eax
 820b44a:	89 04 24             	mov    %eax,(%esp)
 820b44d:	e8 c6 42 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 820b452:	8b 45 e0             	mov    -0x20(%ebp),%eax
 820b455:	89 44 24 14          	mov    %eax,0x14(%esp)
 820b459:	89 74 24 10          	mov    %esi,0x10(%esp)
 820b45d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 820b460:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820b464:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 820b468:	c7 44 24 04 34 2b bc 	movl   $0x8bc2b34,0x4(%esp)
 820b46f:	08 
 820b470:	8d 45 c8             	lea    -0x38(%ebp),%eax
 820b473:	89 04 24             	mov    %eax,(%esp)
 820b476:	e8 0d 43 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 820b47b:	b8 00 00 00 00       	mov    $0x0,%eax
 820b480:	eb 7e                	jmp    820b500 <_ZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBuf+0x1de>
 820b482:	8d 85 d2 f4 ff ff    	lea    -0xb2e(%ebp),%eax
 820b488:	83 c0 01             	add    $0x1,%eax
 820b48b:	0f b7 00             	movzwl (%eax),%eax
 820b48e:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 820b492:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
 820b496:	0f b7 c0             	movzwl %ax,%eax
 820b499:	89 85 c4 f4 ff ff    	mov    %eax,-0xb3c(%ebp)
 820b49f:	8d bd d2 f4 ff ff    	lea    -0xb2e(%ebp),%edi
 820b4a5:	0f b7 75 e6          	movzwl -0x1a(%ebp),%esi
 820b4a9:	0f b6 85 d2 f4 ff ff 	movzbl -0xb2e(%ebp),%eax
 820b4b0:	0f b6 d8             	movzbl %al,%ebx
 820b4b3:	e8 86 90 02 00       	call   823453e <_Z18G_PacketDispatcherv>
 820b4b8:	c7 44 24 1c 5c 02 00 	movl   $0x25c,0x1c(%esp)
 820b4bf:	00 
 820b4c0:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 820b4c7:	00 
 820b4c8:	8b 95 c4 f4 ff ff    	mov    -0xb3c(%ebp),%edx
 820b4ce:	89 54 24 14          	mov    %edx,0x14(%esp)
 820b4d2:	89 7c 24 10          	mov    %edi,0x10(%esp)
 820b4d6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 820b4da:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 820b4de:	8b 55 0c             	mov    0xc(%ebp),%edx
 820b4e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 820b4e5:	89 04 24             	mov    %eax,(%esp)
 820b4e8:	e8 35 94 38 00       	call   8594922 <_ZN16PacketDispatcher10doDispatchEP5CUser16ENUM_PACKETCLASStPciS2_t>
 820b4ed:	83 f0 01             	xor    $0x1,%eax
 820b4f0:	84 c0                	test   %al,%al
 820b4f2:	74 07                	je     820b4fb <_ZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBuf+0x1d9>
 820b4f4:	b8 00 00 00 00       	mov    $0x0,%eax
 820b4f9:	eb 05                	jmp    820b500 <_ZN21Dispatcher_Antibot_DP12dispatch_sigEP5CUserR9PacketBuf+0x1de>
 820b4fb:	b8 00 00 00 00       	mov    $0x0,%eax
 820b500:	81 c4 5c 0b 00 00    	add    $0xb5c,%esp
 820b506:	5b                   	pop    %ebx
 820b507:	5e                   	pop    %esi
 820b508:	5f                   	pop    %edi
 820b509:	5d                   	pop    %ebp
 820b50a:	c3                   	ret
 820b50b:	90                   	nop

```

```c
// Dispatcher_Antibot_DP::dispatch_sig @ 0x820b322

/* Dispatcher_Antibot_DP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Antibot_DP::dispatch_sig(Dispatcher_Antibot_DP *this,CUser *param_1,PacketBuf *param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  PacketDispatcher *pPVar6;
  uint uVar7;
  undefined1 local_b32;
  undefined2 local_b31;
  undefined2 local_42;
  uint local_40;
  cMyTrace local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined2 local_1e;
  
  cVar3 = PacketBuf::get_int(param_2,&local_40);
  if (cVar3 == '\x01') {
    iVar5 = PacketBuf::get_index(param_2);
    local_2c = PacketBuf::get_buf_ptr(param_2,iVar5);
    local_28 = 0xd;
    if (local_40 < 0x568) {
      local_42 = 0xaf0;
      pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x2c);
      uVar7 = local_40 & 0xffff;
      uVar4 = CUser::getAntibotKey(param_1);
      local_24 = (*pcVar1)(GlobalData::s_antibotChecker_,uVar4,local_2c,uVar7,&local_b32,&local_42);
      uVar2 = local_42;
      if (local_24 == 0) {
        local_1e = local_b31;
        pPVar6 = (PacketDispatcher *)G_PacketDispatcher();
        cVar3 = PacketDispatcher::doDispatch
                          (pPVar6,param_1,local_b32,local_b31,&local_b32,uVar2,1,0x25c);
        if (cVar3 == '\x01') {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = CUser::getAntibotKey(param_1);
        cMyTrace::cMyTrace(local_3c,
                           "virtual int Dispatcher_Antibot_DP::dispatch_sig(CUser*, PacketBuf&)",
                           0xa7af,0);
        cMyTrace::operator()
                  (local_3c,
                   "[Dispatcher_Antibot_DP] Key : %d, nestedPacket : %x, binarySize : %d, return : %d"
                   ,uVar4,local_2c,local_40,local_24);
        uVar4 = 0;
      }
    }
    else {
      uVar4 = LineFunc(0xa7a3,"virtual int Dispatcher_Antibot_DP::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  else {
    uVar4 = LineFunc(0xa795,"virtual int Dispatcher_Antibot_DP::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  return uVar4;
}

```

