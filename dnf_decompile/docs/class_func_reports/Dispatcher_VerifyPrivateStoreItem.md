# Dispatcher_VerifyPrivateStoreItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08229768 Dispatcher_VerifyPrivateStoreItem::dispatch_sig  [0x08229768-0x8229979] ===
 8229768:	55                   	push   %ebp
 8229769:	89 e5                	mov    %esp,%ebp
 822976b:	53                   	push   %ebx
 822976c:	83 ec 24             	sub    $0x24,%esp
 822976f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229772:	89 04 24             	mov    %eax,(%esp)
 8229775:	e8 12 0c eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 822977a:	83 f8 03             	cmp    $0x3,%eax
 822977d:	75 0f                	jne    822978e <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x26>
 822977f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229782:	89 04 24             	mov    %eax,(%esp)
 8229785:	e8 a8 6c ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 822978a:	85 c0                	test   %eax,%eax
 822978c:	75 07                	jne    8229795 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 822978e:	b8 01 00 00 00       	mov    $0x1,%eax
 8229793:	eb 05                	jmp    822979a <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8229795:	b8 00 00 00 00       	mov    $0x0,%eax
 822979a:	84 c0                	test   %al,%al
 822979c:	74 29                	je     82297c7 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x5f>
 822979e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82297a5:	00 
 82297a6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82297ad:	00 
 82297ae:	c7 44 24 04 60 bf bc 	movl   $0x8bcbf60,0x4(%esp)
 82297b5:	08 
 82297b6:	c7 04 24 40 e7 00 00 	movl   $0xe740,(%esp)
 82297bd:	e8 15 71 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82297c2:	e9 ad 01 00 00       	jmp    8229974 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x20c>
 82297c7:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 82297cc:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 82297d3:	00 
 82297d4:	8b 55 0c             	mov    0xc(%ebp),%edx
 82297d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82297db:	89 04 24             	mov    %eax,(%esp)
 82297de:	e8 1f f2 05 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 82297e3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82297e6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82297ea:	74 27                	je     8229813 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0xab>
 82297ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82297ef:	0f b6 c0             	movzbl %al,%eax
 82297f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 82297f6:	c7 44 24 04 55 00 00 	movl   $0x55,0x4(%esp)
 82297fd:	00 
 82297fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229801:	89 04 24             	mov    %eax,(%esp)
 8229804:	e8 39 27 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8229809:	b8 00 00 00 00       	mov    $0x0,%eax
 822980e:	e9 61 01 00 00       	jmp    8229974 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x20c>
 8229813:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229816:	89 04 24             	mov    %eax,(%esp)
 8229819:	e8 1e 65 00 00       	call   822fd3c <_ZNK5CUser10isHackUserEv>
 822981e:	84 c0                	test   %al,%al
 8229820:	75 0f                	jne    8229831 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 8229822:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229825:	89 04 24             	mov    %eax,(%esp)
 8229828:	e8 1f 65 00 00       	call   822fd4c <_ZNK5CUser15isHackUserTimerEv>
 822982d:	84 c0                	test   %al,%al
 822982f:	74 07                	je     8229838 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0xd0>
 8229831:	b8 01 00 00 00       	mov    $0x1,%eax
 8229836:	eb 05                	jmp    822983d <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0xd5>
 8229838:	b8 00 00 00 00       	mov    $0x0,%eax
 822983d:	84 c0                	test   %al,%al
 822983f:	74 25                	je     8229866 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0xfe>
 8229841:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8229848:	00 
 8229849:	c7 44 24 04 95 01 00 	movl   $0x195,0x4(%esp)
 8229850:	00 
 8229851:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229854:	89 04 24             	mov    %eax,(%esp)
 8229857:	e8 e6 26 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822985c:	b8 00 00 00 00       	mov    $0x0,%eax
 8229861:	e9 0e 01 00 00       	jmp    8229974 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x20c>
 8229866:	66 c7 45 f2 00 00    	movw   $0x0,-0xe(%ebp)
 822986c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8229873:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 822987a:	8d 45 f2             	lea    -0xe(%ebp),%eax
 822987d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229881:	8b 45 10             	mov    0x10(%ebp),%eax
 8229884:	89 04 24             	mov    %eax,(%esp)
 8229887:	e8 34 37 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 822988c:	83 f0 01             	xor    $0x1,%eax
 822988f:	84 c0                	test   %al,%al
 8229891:	74 29                	je     82298bc <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x154>
 8229893:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822989a:	00 
 822989b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82298a2:	00 
 82298a3:	c7 44 24 04 60 bf bc 	movl   $0x8bcbf60,0x4(%esp)
 82298aa:	08 
 82298ab:	c7 04 24 6a e7 00 00 	movl   $0xe76a,(%esp)
 82298b2:	e8 20 70 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82298b7:	e9 b8 00 00 00       	jmp    8229974 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x20c>
 82298bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82298bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82298c3:	8b 45 10             	mov    0x10(%ebp),%eax
 82298c6:	89 04 24             	mov    %eax,(%esp)
 82298c9:	e8 22 38 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82298ce:	83 f0 01             	xor    $0x1,%eax
 82298d1:	84 c0                	test   %al,%al
 82298d3:	74 26                	je     82298fb <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x193>
 82298d5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82298dc:	00 
 82298dd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82298e4:	00 
 82298e5:	c7 44 24 04 60 bf bc 	movl   $0x8bcbf60,0x4(%esp)
 82298ec:	08 
 82298ed:	c7 04 24 6b e7 00 00 	movl   $0xe76b,(%esp)
 82298f4:	e8 de 6f 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82298f9:	eb 79                	jmp    8229974 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x20c>
 82298fb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82298fe:	85 c0                	test   %eax,%eax
 8229900:	79 26                	jns    8229928 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x1c0>
 8229902:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8229909:	00 
 822990a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8229911:	00 
 8229912:	c7 44 24 04 60 bf bc 	movl   $0x8bcbf60,0x4(%esp)
 8229919:	08 
 822991a:	c7 04 24 6c e7 00 00 	movl   $0xe76c,(%esp)
 8229921:	e8 b1 6f 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8229926:	eb 4c                	jmp    8229974 <_ZN33Dispatcher_VerifyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x20c>
 8229928:	e8 bb b2 39 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 822992d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8229934:	00 
 8229935:	8b 55 0c             	mov    0xc(%ebp),%edx
 8229938:	89 54 24 08          	mov    %edx,0x8(%esp)
 822993c:	8d 55 e8             	lea    -0x18(%ebp),%edx
 822993f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8229943:	89 04 24             	mov    %eax,(%esp)
 8229946:	e8 6d 0e 3a 00       	call   85ca7b8 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_>
 822994b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 822994e:	8b 00                	mov    (%eax),%eax
 8229950:	83 c0 04             	add    $0x4,%eax
 8229953:	8b 18                	mov    (%eax),%ebx
 8229955:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8229958:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 822995c:	0f bf d0             	movswl %ax,%edx
 822995f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8229962:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8229966:	89 54 24 04          	mov    %edx,0x4(%esp)
 822996a:	89 04 24             	mov    %eax,(%esp)
 822996d:	ff d3                	call   *%ebx
 822996f:	b8 00 00 00 00       	mov    $0x0,%eax
 8229974:	83 c4 24             	add    $0x24,%esp
 8229977:	5b                   	pop    %ebx
 8229978:	5d                   	pop    %ebp
 8229979:	c3                   	ret

```

```c
// Dispatcher_VerifyPrivateStoreItem::dispatch_sig @ 0x8229768

/* Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_VerifyPrivateStoreItem::dispatch_sig
          (Dispatcher_VerifyPrivateStoreItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CPrivateStoreMgr *this_00;
  IBuyer *local_1c;
  int local_18;
  short local_12;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x3d);
    if (local_10 == 0) {
      cVar2 = CUser::isHackUser(param_1);
      if ((cVar2 == '\0') && (cVar2 = CUser::isHackUserTimer(param_1), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(param_1,0x195,0x11);
        uVar4 = 0;
      }
      else {
        local_12 = 0;
        local_18 = 0;
        local_1c = (IBuyer *)0x0;
        cVar2 = PacketBuf::get_short(param_2,&local_12);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_int(param_2,&local_18);
          if (cVar2 == '\x01') {
            if (local_18 < 0) {
              uVar4 = LineFunc(0xe76c,
                               "virtual int Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
            else {
              this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
              private_store::CPrivateStoreMgr::GetStoreBuyer(this_00,&local_1c,param_1,(CUser *)0x0)
              ;
              (**(code **)(*(int *)local_1c + 4))(local_1c,(int)local_12,local_18);
              uVar4 = 0;
            }
          }
          else {
            uVar4 = LineFunc(0xe76b,
                             "virtual int Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar4 = LineFunc(0xe76a,
                           "virtual int Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      return uVar4;
    }
    CUser::SendCmdErrorPacket(param_1,0x55,local_10 & 0xff);
    return 0;
  }
  uVar4 = LineFunc(0xe740,
                   "virtual int Dispatcher_VerifyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                   ,0,0);
  return uVar4;
}

```

