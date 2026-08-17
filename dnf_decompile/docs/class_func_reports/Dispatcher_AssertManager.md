# Dispatcher_AssertManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821e1f4 Dispatcher_AssertManager::dispatch_sig  [0x0821e1f4-0x821e473] ===
 821e1f4:	55                   	push   %ebp
 821e1f5:	89 e5                	mov    %esp,%ebp
 821e1f7:	53                   	push   %ebx
 821e1f8:	81 ec 34 02 00 00    	sub    $0x234,%esp
 821e1fe:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 821e204:	89 04 24             	mov    %eax,(%esp)
 821e207:	e8 0c db 00 00       	call   822bd18 <_ZN26Packet_Assert_Manager_InfoC1Ev>
 821e20c:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 821e212:	83 c0 0a             	add    $0xa,%eax
 821e215:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e219:	8b 45 10             	mov    0x10(%ebp),%eax
 821e21c:	89 04 24             	mov    %eax,(%esp)
 821e21f:	e8 cc ee 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 821e224:	83 f0 01             	xor    $0x1,%eax
 821e227:	84 c0                	test   %al,%al
 821e229:	74 29                	je     821e254 <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x60>
 821e22b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e232:	00 
 821e233:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e23a:	00 
 821e23b:	c7 44 24 04 e0 d2 bc 	movl   $0x8bcd2e0,0x4(%esp)
 821e242:	08 
 821e243:	c7 04 24 75 d2 00 00 	movl   $0xd275,(%esp)
 821e24a:	e8 88 26 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e24f:	e9 16 02 00 00       	jmp    821e46a <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x276>
 821e254:	8b 85 ee fd ff ff    	mov    -0x212(%ebp),%eax
 821e25a:	3d ff 00 00 00       	cmp    $0xff,%eax
 821e25f:	7e 29                	jle    821e28a <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x96>
 821e261:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e268:	00 
 821e269:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e270:	00 
 821e271:	c7 44 24 04 e0 d2 bc 	movl   $0x8bcd2e0,0x4(%esp)
 821e278:	08 
 821e279:	c7 04 24 79 d2 00 00 	movl   $0xd279,(%esp)
 821e280:	e8 52 26 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e285:	e9 e0 01 00 00       	jmp    821e46a <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x276>
 821e28a:	8b 85 ee fd ff ff    	mov    -0x212(%ebp),%eax
 821e290:	89 44 24 08          	mov    %eax,0x8(%esp)
 821e294:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 821e29a:	83 c0 0e             	add    $0xe,%eax
 821e29d:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e2a1:	8b 45 10             	mov    0x10(%ebp),%eax
 821e2a4:	89 04 24             	mov    %eax,(%esp)
 821e2a7:	e8 06 f1 36 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 821e2ac:	83 f0 01             	xor    $0x1,%eax
 821e2af:	84 c0                	test   %al,%al
 821e2b1:	74 29                	je     821e2dc <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0xe8>
 821e2b3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e2ba:	00 
 821e2bb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e2c2:	00 
 821e2c3:	c7 44 24 04 e0 d2 bc 	movl   $0x8bcd2e0,0x4(%esp)
 821e2ca:	08 
 821e2cb:	c7 04 24 7a d2 00 00 	movl   $0xd27a,(%esp)
 821e2d2:	e8 00 26 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e2d7:	e9 8e 01 00 00       	jmp    821e46a <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x276>
 821e2dc:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 821e2e2:	05 0e 01 00 00       	add    $0x10e,%eax
 821e2e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e2eb:	8b 45 10             	mov    0x10(%ebp),%eax
 821e2ee:	89 04 24             	mov    %eax,(%esp)
 821e2f1:	e8 ba ed 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821e2f6:	83 f0 01             	xor    $0x1,%eax
 821e2f9:	84 c0                	test   %al,%al
 821e2fb:	74 29                	je     821e326 <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x132>
 821e2fd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e304:	00 
 821e305:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e30c:	00 
 821e30d:	c7 44 24 04 e0 d2 bc 	movl   $0x8bcd2e0,0x4(%esp)
 821e314:	08 
 821e315:	c7 04 24 7d d2 00 00 	movl   $0xd27d,(%esp)
 821e31c:	e8 b6 25 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e321:	e9 44 01 00 00       	jmp    821e46a <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x276>
 821e326:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 821e32c:	05 10 01 00 00       	add    $0x110,%eax
 821e331:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e335:	8b 45 10             	mov    0x10(%ebp),%eax
 821e338:	89 04 24             	mov    %eax,(%esp)
 821e33b:	e8 b0 ed 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 821e340:	83 f0 01             	xor    $0x1,%eax
 821e343:	84 c0                	test   %al,%al
 821e345:	74 29                	je     821e370 <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x17c>
 821e347:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e34e:	00 
 821e34f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e356:	00 
 821e357:	c7 44 24 04 e0 d2 bc 	movl   $0x8bcd2e0,0x4(%esp)
 821e35e:	08 
 821e35f:	c7 04 24 7f d2 00 00 	movl   $0xd27f,(%esp)
 821e366:	e8 6c 25 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e36b:	e9 fa 00 00 00       	jmp    821e46a <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x276>
 821e370:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 821e376:	3d ff 00 00 00       	cmp    $0xff,%eax
 821e37b:	7f 0a                	jg     821e387 <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x193>
 821e37d:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 821e383:	85 c0                	test   %eax,%eax
 821e385:	79 29                	jns    821e3b0 <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x1bc>
 821e387:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e38e:	00 
 821e38f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e396:	00 
 821e397:	c7 44 24 04 e0 d2 bc 	movl   $0x8bcd2e0,0x4(%esp)
 821e39e:	08 
 821e39f:	c7 04 24 80 d2 00 00 	movl   $0xd280,(%esp)
 821e3a6:	e8 2c 25 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e3ab:	e9 ba 00 00 00       	jmp    821e46a <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x276>
 821e3b0:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 821e3b6:	85 c0                	test   %eax,%eax
 821e3b8:	7e 51                	jle    821e40b <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x217>
 821e3ba:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 821e3c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 821e3c4:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 821e3ca:	05 14 01 00 00       	add    $0x114,%eax
 821e3cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e3d3:	8b 45 10             	mov    0x10(%ebp),%eax
 821e3d6:	89 04 24             	mov    %eax,(%esp)
 821e3d9:	e8 d4 ef 36 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 821e3de:	83 f0 01             	xor    $0x1,%eax
 821e3e1:	84 c0                	test   %al,%al
 821e3e3:	74 49                	je     821e42e <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x23a>
 821e3e5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e3ec:	00 
 821e3ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e3f4:	00 
 821e3f5:	c7 44 24 04 e0 d2 bc 	movl   $0x8bcd2e0,0x4(%esp)
 821e3fc:	08 
 821e3fd:	c7 04 24 83 d2 00 00 	movl   $0xd283,(%esp)
 821e404:	e8 ce 24 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e409:	eb 5f                	jmp    821e46a <_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf+0x276>
 821e40b:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 821e412:	00 
 821e413:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821e41a:	00 
 821e41b:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 821e421:	05 14 01 00 00       	add    $0x114,%eax
 821e426:	89 04 24             	mov    %eax,(%esp)
 821e429:	e8 92 f8 e5 ff       	call   807dcc0 <memset@plt>
 821e42e:	8d 9d e4 fd ff ff    	lea    -0x21c(%ebp),%ebx
 821e434:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e437:	89 04 24             	mov    %eax,(%esp)
 821e43a:	e8 51 d8 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821e43f:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 821e445:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e449:	89 14 24             	mov    %edx,(%esp)
 821e44c:	e8 a7 38 ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821e451:	c7 44 24 08 14 02 00 	movl   $0x214,0x8(%esp)
 821e458:	00 
 821e459:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821e45d:	89 04 24             	mov    %eax,(%esp)
 821e460:	e8 df 3b 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 821e465:	b8 00 00 00 00       	mov    $0x0,%eax
 821e46a:	81 c4 34 02 00 00    	add    $0x234,%esp
 821e470:	5b                   	pop    %ebx
 821e471:	5d                   	pop    %ebp
 821e472:	c3                   	ret
 821e473:	90                   	nop

```

```c
// Dispatcher_AssertManager::dispatch_sig @ 0x821e1f4

/* Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AssertManager::dispatch_sig
          (Dispatcher_AssertManager *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this_00;
  Packet_Assert_Manager_Info local_220 [10];
  int local_216;
  char acStack_212 [256];
  ushort uStack_112;
  int local_110;
  char acStack_10c [260];
  
  Packet_Assert_Manager_Info::Packet_Assert_Manager_Info(local_220);
  cVar1 = PacketBuf::get_int(param_2,&local_216);
  if (cVar1 == '\x01') {
    if (local_216 < 0x100) {
      cVar1 = PacketBuf::get_binary(param_2,acStack_212,local_216);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_2,&uStack_112);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_2,&local_110);
          if (cVar1 == '\x01') {
            if ((local_110 < 0x100) && (-1 < local_110)) {
              if (local_110 < 1) {
                memset(acStack_10c,0,0x100);
              }
              else {
                cVar1 = PacketBuf::get_binary(param_2,acStack_10c,local_110);
                if (cVar1 != '\x01') {
                  uVar2 = LineFunc(0xd283,
                                   "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return uVar2;
                }
              }
              uVar2 = CUser::GetServerGroup(param_1);
              this_00 = (CStatisticServerProxy *)
                        CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                                  (GlobalData::s_statistic_proxy_mgr,uVar2);
              CStatisticServerProxy::SendPacket(this_00,(char *)local_220,0x214);
              uVar2 = 0;
            }
            else {
              uVar2 = LineFunc(0xd280,
                               "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0xd27f,
                             "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0xd27d,
                           "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0xd27a,
                         "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0xd279,
                       "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0xd275,"virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar2;
}

```

