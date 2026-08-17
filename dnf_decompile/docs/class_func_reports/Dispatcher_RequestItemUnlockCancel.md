# Dispatcher_RequestItemUnlockCancel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082231ae Dispatcher_RequestItemUnlockCancel::dispatch_sig  [0x082231ae-0x822332f] ===
 82231ae:	55                   	push   %ebp
 82231af:	89 e5                	mov    %esp,%ebp
 82231b1:	83 ec 28             	sub    $0x28,%esp
 82231b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82231b7:	89 04 24             	mov    %eax,(%esp)
 82231ba:	e8 cd 71 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82231bf:	83 f8 02             	cmp    $0x2,%eax
 82231c2:	0f 9e c0             	setle  %al
 82231c5:	84 c0                	test   %al,%al
 82231c7:	74 0a                	je     82231d3 <_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf+0x25>
 82231c9:	b8 00 00 00 00       	mov    $0x0,%eax
 82231ce:	e9 5a 01 00 00       	jmp    822332d <_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 82231d3:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 82231d7:	66 c7 45 ec 00 00    	movw   $0x0,-0x14(%ebp)
 82231dd:	8d 45 ef             	lea    -0x11(%ebp),%eax
 82231e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82231e4:	8b 45 10             	mov    0x10(%ebp),%eax
 82231e7:	89 04 24             	mov    %eax,(%esp)
 82231ea:	e8 33 9d 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82231ef:	83 f0 01             	xor    $0x1,%eax
 82231f2:	84 c0                	test   %al,%al
 82231f4:	74 29                	je     822321f <_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf+0x71>
 82231f6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82231fd:	00 
 82231fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223205:	00 
 8223206:	c7 44 24 04 00 cb bc 	movl   $0x8bccb00,0x4(%esp)
 822320d:	08 
 822320e:	c7 04 24 7b dd 00 00 	movl   $0xdd7b,(%esp)
 8223215:	e8 bd d6 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822321a:	e9 0e 01 00 00       	jmp    822332d <_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 822321f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8223222:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223226:	8b 45 10             	mov    0x10(%ebp),%eax
 8223229:	89 04 24             	mov    %eax,(%esp)
 822322c:	e8 8f 9d 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8223231:	83 f0 01             	xor    $0x1,%eax
 8223234:	84 c0                	test   %al,%al
 8223236:	74 29                	je     8223261 <_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf+0xb3>
 8223238:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822323f:	00 
 8223240:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223247:	00 
 8223248:	c7 44 24 04 00 cb bc 	movl   $0x8bccb00,0x4(%esp)
 822324f:	08 
 8223250:	c7 04 24 7c dd 00 00 	movl   $0xdd7c,(%esp)
 8223257:	e8 7b d6 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822325c:	e9 cc 00 00 00       	jmp    822332d <_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 8223261:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8223266:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 822326d:	00 
 822326e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8223271:	89 54 24 04          	mov    %edx,0x4(%esp)
 8223275:	89 04 24             	mov    %eax,(%esp)
 8223278:	e8 85 57 06 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 822327d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8223280:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8223284:	74 27                	je     82232ad <_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf+0xff>
 8223286:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8223289:	0f b6 c0             	movzbl %al,%eax
 822328c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8223290:	c7 44 24 04 11 01 00 	movl   $0x111,0x4(%esp)
 8223297:	00 
 8223298:	8b 45 0c             	mov    0xc(%ebp),%eax
 822329b:	89 04 24             	mov    %eax,(%esp)
 822329e:	e8 9f 8c 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82232a3:	b8 00 00 00 00       	mov    $0x0,%eax
 82232a8:	e9 80 00 00 00       	jmp    822332d <_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 82232ad:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82232b4:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 82232b8:	0f bf d0             	movswl %ax,%edx
 82232bb:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 82232bf:	0f be c0             	movsbl %al,%eax
 82232c2:	89 54 24 08          	mov    %edx,0x8(%esp)
 82232c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82232ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 82232cd:	89 04 24             	mov    %eax,(%esp)
 82232d0:	e8 d9 39 42 00       	call   8646cae <_ZNK5CUser22IsAbleItemUnlockCancelEii>
 82232d5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82232d8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82232dc:	0f 95 c0             	setne  %al
 82232df:	84 c0                	test   %al,%al
 82232e1:	74 24                	je     8223307 <_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf+0x159>
 82232e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82232e6:	0f b6 c0             	movzbl %al,%eax
 82232e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 82232ed:	c7 44 24 04 11 01 00 	movl   $0x111,0x4(%esp)
 82232f4:	00 
 82232f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82232f8:	89 04 24             	mov    %eax,(%esp)
 82232fb:	e8 42 8c 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8223300:	b8 00 00 00 00       	mov    $0x0,%eax
 8223305:	eb 26                	jmp    822332d <_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 8223307:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 822330b:	0f bf d0             	movswl %ax,%edx
 822330e:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8223312:	0f be c0             	movsbl %al,%eax
 8223315:	89 54 24 08          	mov    %edx,0x8(%esp)
 8223319:	89 44 24 04          	mov    %eax,0x4(%esp)
 822331d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223320:	89 04 24             	mov    %eax,(%esp)
 8223323:	e8 92 3a 42 00       	call   8646dba <_ZN5CUser18DoItemUnlockCancelEii>
 8223328:	b8 00 00 00 00       	mov    $0x0,%eax
 822332d:	c9                   	leave
 822332e:	c3                   	ret
 822332f:	90                   	nop

```

```c
// Dispatcher_RequestItemUnlockCancel::dispatch_sig @ 0x82231ae

/* Dispatcher_RequestItemUnlockCancel::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestItemUnlockCancel::dispatch_sig
          (Dispatcher_RequestItemUnlockCancel *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  short local_18;
  char local_15;
  uint local_14;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_15 = '\0';
    local_18 = 0;
    cVar1 = PacketBuf::get_byte(param_2,&local_15);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_18);
      if (cVar1 == '\x01') {
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x19);
        if (local_14 == 0) {
          local_10 = 0;
          local_10 = CUser::IsAbleItemUnlockCancel(param_1,(int)local_15,(int)local_18);
          if (local_10 == 0) {
            CUser::DoItemUnlockCancel(param_1,(int)local_15,(int)local_18);
            uVar3 = 0;
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x111,local_10 & 0xff);
            uVar3 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x111,local_14 & 0xff);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0xdd7c,
                         "virtual int Dispatcher_RequestItemUnlockCancel::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xdd7b,
                       "virtual int Dispatcher_RequestItemUnlockCancel::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}

```

