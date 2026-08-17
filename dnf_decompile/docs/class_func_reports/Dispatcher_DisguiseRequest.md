# Dispatcher_DisguiseRequest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821b256 Dispatcher_DisguiseRequest::dispatch_sig  [0x0821b256-0x821b495] ===
 821b256:	55                   	push   %ebp
 821b257:	89 e5                	mov    %esp,%ebp
 821b259:	56                   	push   %esi
 821b25a:	53                   	push   %ebx
 821b25b:	83 ec 20             	sub    $0x20,%esp
 821b25e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 821b262:	75 0a                	jne    821b26e <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x18>
 821b264:	bb 00 00 00 00       	mov    $0x0,%ebx
 821b269:	e9 1e 02 00 00       	jmp    821b48c <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x236>
 821b26e:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b271:	89 04 24             	mov    %eax,(%esp)
 821b274:	e8 13 f1 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821b279:	83 f8 03             	cmp    $0x3,%eax
 821b27c:	0f 95 c0             	setne  %al
 821b27f:	84 c0                	test   %al,%al
 821b281:	74 0a                	je     821b28d <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x37>
 821b283:	bb 00 00 00 00       	mov    $0x0,%ebx
 821b288:	e9 ff 01 00 00       	jmp    821b48c <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x236>
 821b28d:	e8 56 99 3a 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 821b292:	8b 55 0c             	mov    0xc(%ebp),%edx
 821b295:	89 54 24 04          	mov    %edx,0x4(%esp)
 821b299:	89 04 24             	mov    %eax,(%esp)
 821b29c:	e8 bd fa 3a 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 821b2a1:	84 c0                	test   %al,%al
 821b2a3:	74 0a                	je     821b2af <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x59>
 821b2a5:	bb 00 00 00 00       	mov    $0x0,%ebx
 821b2aa:	e9 dd 01 00 00       	jmp    821b48c <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x236>
 821b2af:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b2b2:	89 04 24             	mov    %eax,(%esp)
 821b2b5:	e8 20 f0 eb ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 821b2ba:	84 c0                	test   %al,%al
 821b2bc:	74 0a                	je     821b2c8 <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x72>
 821b2be:	bb 00 00 00 00       	mov    $0x0,%ebx
 821b2c3:	e9 c4 01 00 00       	jmp    821b48c <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x236>
 821b2c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b2cb:	89 04 24             	mov    %eax,(%esp)
 821b2ce:	e8 ff 43 01 00       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 821b2d3:	85 c0                	test   %eax,%eax
 821b2d5:	0f 95 c0             	setne  %al
 821b2d8:	84 c0                	test   %al,%al
 821b2da:	74 0a                	je     821b2e6 <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x90>
 821b2dc:	bb 00 00 00 00       	mov    $0x0,%ebx
 821b2e1:	e9 a6 01 00 00       	jmp    821b48c <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x236>
 821b2e6:	8d 45 f7             	lea    -0x9(%ebp),%eax
 821b2e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b2ed:	8b 45 10             	mov    0x10(%ebp),%eax
 821b2f0:	89 04 24             	mov    %eax,(%esp)
 821b2f3:	e8 78 1c 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821b2f8:	83 f0 01             	xor    $0x1,%eax
 821b2fb:	84 c0                	test   %al,%al
 821b2fd:	74 2b                	je     821b32a <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0xd4>
 821b2ff:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821b306:	00 
 821b307:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821b30e:	00 
 821b30f:	c7 44 24 04 40 d6 bc 	movl   $0x8bcd640,0x4(%esp)
 821b316:	08 
 821b317:	c7 04 24 00 cf 00 00 	movl   $0xcf00,(%esp)
 821b31e:	e8 b4 55 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821b323:	89 c3                	mov    %eax,%ebx
 821b325:	e9 62 01 00 00       	jmp    821b48c <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x236>
 821b32a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 821b32d:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b331:	8b 45 10             	mov    0x10(%ebp),%eax
 821b334:	89 04 24             	mov    %eax,(%esp)
 821b337:	e8 74 1d 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821b33c:	83 f0 01             	xor    $0x1,%eax
 821b33f:	84 c0                	test   %al,%al
 821b341:	74 2b                	je     821b36e <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x118>
 821b343:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821b34a:	00 
 821b34b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821b352:	00 
 821b353:	c7 44 24 04 40 d6 bc 	movl   $0x8bcd640,0x4(%esp)
 821b35a:	08 
 821b35b:	c7 04 24 02 cf 00 00 	movl   $0xcf02,(%esp)
 821b362:	e8 70 55 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821b367:	89 c3                	mov    %eax,%ebx
 821b369:	e9 1e 01 00 00       	jmp    821b48c <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x236>
 821b36e:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b371:	89 04 24             	mov    %eax,(%esp)
 821b374:	e8 7d 45 01 00       	call   822f8f6 <_ZN15CUserCharacInfo16isDisguiseCharacEv>
 821b379:	84 c0                	test   %al,%al
 821b37b:	74 25                	je     821b3a2 <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x14c>
 821b37d:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 821b384:	00 
 821b385:	c7 44 24 04 d6 00 00 	movl   $0xd6,0x4(%esp)
 821b38c:	00 
 821b38d:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b390:	89 04 24             	mov    %eax,(%esp)
 821b393:	e8 aa 0b 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821b398:	bb 00 00 00 00       	mov    $0x0,%ebx
 821b39d:	e9 ea 00 00 00       	jmp    821b48c <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x236>
 821b3a2:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 821b3a6:	0f b7 c8             	movzwl %ax,%ecx
 821b3a9:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 821b3ad:	0f b6 d0             	movzbl %al,%edx
 821b3b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b3b3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 821b3b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 821b3bb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821b3c2:	00 
 821b3c3:	89 04 24             	mov    %eax,(%esp)
 821b3c6:	e8 4f 45 01 00       	call   822f91a <_ZN15CUserCharacInfo17setDisguiseCharacEbht>
 821b3cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821b3ce:	89 04 24             	mov    %eax,(%esp)
 821b3d1:	e8 76 29 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821b3d6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 821b3dd:	00 
 821b3de:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821b3e5:	00 
 821b3e6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821b3e9:	89 04 24             	mov    %eax,(%esp)
 821b3ec:	e8 0b 05 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821b3f1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821b3f8:	00 
 821b3f9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821b3fc:	89 04 24             	mov    %eax,(%esp)
 821b3ff:	e8 1c 05 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821b404:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821b40b:	00 
 821b40c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821b40f:	89 04 24             	mov    %eax,(%esp)
 821b412:	e8 8d ea eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821b417:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821b41a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821b421:	00 
 821b422:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b426:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b429:	89 04 24             	mov    %eax,(%esp)
 821b42c:	e8 1d f0 43 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 821b431:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821b438:	00 
 821b439:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821b43c:	89 04 24             	mov    %eax,(%esp)
 821b43f:	e8 14 05 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821b444:	e8 5e ef eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 821b449:	8b 55 0c             	mov    0xc(%ebp),%edx
 821b44c:	89 54 24 08          	mov    %edx,0x8(%esp)
 821b450:	8d 55 e8             	lea    -0x18(%ebp),%edx
 821b453:	89 54 24 04          	mov    %edx,0x4(%esp)
 821b457:	89 04 24             	mov    %eax,(%esp)
 821b45a:	e8 fd 94 f1 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 821b45f:	bb 00 00 00 00       	mov    $0x0,%ebx
 821b464:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821b467:	89 04 24             	mov    %eax,(%esp)
 821b46a:	e8 11 2a 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821b46f:	eb 1b                	jmp    821b48c <_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf+0x236>
 821b471:	89 d3                	mov    %edx,%ebx
 821b473:	89 c6                	mov    %eax,%esi
 821b475:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821b478:	89 04 24             	mov    %eax,(%esp)
 821b47b:	e8 00 2a 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821b480:	89 f0                	mov    %esi,%eax
 821b482:	89 da                	mov    %ebx,%edx
 821b484:	89 04 24             	mov    %eax,(%esp)
 821b487:	e8 c4 82 8c 00       	call   8ae3750 <_Unwind_Resume>
 821b48c:	89 d8                	mov    %ebx,%eax
 821b48e:	83 c4 20             	add    $0x20,%esp
 821b491:	5b                   	pop    %ebx
 821b492:	5e                   	pop    %esi
 821b493:	5d                   	pop    %ebp
 821b494:	c3                   	ret
 821b495:	90                   	nop

```

```c
// Dispatcher_DisguiseRequest::dispatch_sig @ 0x821b256

/* Dispatcher_DisguiseRequest::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DisguiseRequest::dispatch_sig
          (Dispatcher_DisguiseRequest *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  CPrivateStoreMgr *this_00;
  GameWorld *this_01;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  ushort local_10;
  uchar local_d;
  
  if (param_1 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 == 3) {
      this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
      cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
      if (cVar1 == '\0') {
        cVar1 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
        if (cVar1 == '\0') {
          iVar2 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
          if (iVar2 == 0) {
            cVar1 = PacketBuf::get_byte(param_2,&local_d);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_2,&local_10);
              if (cVar1 == '\x01') {
                cVar1 = CUserCharacInfo::isDisguiseCharac((CUserCharacInfo *)param_1);
                if (cVar1 == '\0') {
                  CUserCharacInfo::setDisguiseCharac
                            ((CUserCharacInfo *)param_1,true,local_d,local_10);
                  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0821b3ec to 0821b45e has its CatchHandler @ 0821b471 */
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
                  CUser::make_basic_info(param_1,(char *)local_1c,'\0');
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
                  this_01 = (GameWorld *)G_GameWorld();
                  GameWorld::send_all(this_01,local_1c,param_1);
                  uVar3 = 0;
                  PacketGuard::~PacketGuard(local_1c);
                }
                else {
                  CUser::SendCmdErrorPacket(param_1,0xd6,0x12);
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = LineFunc(0xcf02,
                                 "virtual int Dispatcher_DisguiseRequest::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0xcf00,
                               "virtual int Dispatcher_DisguiseRequest::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

