# Dispatcher_BVHackInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08207568 Dispatcher_BVHackInfo::dispatch_sig  [0x08207568-0x8207851] ===
 8207568:	55                   	push   %ebp
 8207569:	89 e5                	mov    %esp,%ebp
 820756b:	81 ec 08 01 00 00    	sub    $0x108,%esp
 8207571:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207574:	89 04 24             	mov    %eax,(%esp)
 8207577:	e8 10 2e ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820757c:	83 f8 01             	cmp    $0x1,%eax
 820757f:	0f 9e c0             	setle  %al
 8207582:	84 c0                	test   %al,%al
 8207584:	74 29                	je     82075af <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x47>
 8207586:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820758d:	00 
 820758e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207595:	00 
 8207596:	c7 44 24 04 40 e9 bc 	movl   $0x8bce940,0x4(%esp)
 820759d:	08 
 820759e:	c7 04 24 16 a2 00 00 	movl   $0xa216,(%esp)
 82075a5:	e8 2d 93 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82075aa:	e9 a0 02 00 00       	jmp    820784f <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x2e7>
 82075af:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82075b6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82075b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82075bd:	8b 45 10             	mov    0x10(%ebp),%eax
 82075c0:	89 04 24             	mov    %eax,(%esp)
 82075c3:	e8 28 5b 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82075c8:	83 f0 01             	xor    $0x1,%eax
 82075cb:	84 c0                	test   %al,%al
 82075cd:	75 08                	jne    82075d7 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x6f>
 82075cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82075d2:	83 f8 40             	cmp    $0x40,%eax
 82075d5:	74 07                	je     82075de <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x76>
 82075d7:	b8 01 00 00 00       	mov    $0x1,%eax
 82075dc:	eb 05                	jmp    82075e3 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x7b>
 82075de:	b8 00 00 00 00       	mov    $0x0,%eax
 82075e3:	84 c0                	test   %al,%al
 82075e5:	74 29                	je     8207610 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0xa8>
 82075e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82075ee:	00 
 82075ef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82075f6:	00 
 82075f7:	c7 44 24 04 40 e9 bc 	movl   $0x8bce940,0x4(%esp)
 82075fe:	08 
 82075ff:	c7 04 24 1a a2 00 00 	movl   $0xa21a,(%esp)
 8207606:	e8 cc 92 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820760b:	e9 3f 02 00 00       	jmp    820784f <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x2e7>
 8207610:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8207617:	00 
 8207618:	8d 45 80             	lea    -0x80(%ebp),%eax
 820761b:	89 44 24 04          	mov    %eax,0x4(%esp)
 820761f:	8b 45 10             	mov    0x10(%ebp),%eax
 8207622:	89 04 24             	mov    %eax,(%esp)
 8207625:	e8 88 5d 38 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 820762a:	83 f0 01             	xor    $0x1,%eax
 820762d:	84 c0                	test   %al,%al
 820762f:	74 29                	je     820765a <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0xf2>
 8207631:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207638:	00 
 8207639:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207640:	00 
 8207641:	c7 44 24 04 40 e9 bc 	movl   $0x8bce940,0x4(%esp)
 8207648:	08 
 8207649:	c7 04 24 1c a2 00 00 	movl   $0xa21c,(%esp)
 8207650:	e8 82 92 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207655:	e9 f5 01 00 00       	jmp    820784f <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x2e7>
 820765a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 820765d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207661:	8d 45 80             	lea    -0x80(%ebp),%eax
 8207664:	89 04 24             	mov    %eax,(%esp)
 8207667:	e8 85 aa 68 00       	call   88920f1 <_Z19decryptBVHackPacketPcR14stBVHackInfo_t>
 820766c:	83 f0 01             	xor    $0x1,%eax
 820766f:	84 c0                	test   %al,%al
 8207671:	74 29                	je     820769c <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x134>
 8207673:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820767a:	00 
 820767b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207682:	00 
 8207683:	c7 44 24 04 40 e9 bc 	movl   $0x8bce940,0x4(%esp)
 820768a:	08 
 820768b:	c7 04 24 24 a2 00 00 	movl   $0xa224,(%esp)
 8207692:	e8 40 92 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207697:	e9 b3 01 00 00       	jmp    820784f <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x2e7>
 820769c:	dd 45 c0             	fldl   -0x40(%ebp)
 820769f:	d9 ee                	fldz
 82076a1:	d9 c9                	fxch   %st(1)
 82076a3:	da e9                	fucompp
 82076a5:	df e0                	fnstsw %ax
 82076a7:	9e                   	sahf
 82076a8:	75 46                	jne    82076f0 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x188>
 82076aa:	7a 44                	jp     82076f0 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x188>
 82076ac:	dd 45 c8             	fldl   -0x38(%ebp)
 82076af:	d9 ee                	fldz
 82076b1:	d9 c9                	fxch   %st(1)
 82076b3:	da e9                	fucompp
 82076b5:	df e0                	fnstsw %ax
 82076b7:	9e                   	sahf
 82076b8:	75 36                	jne    82076f0 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x188>
 82076ba:	7a 34                	jp     82076f0 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x188>
 82076bc:	dd 45 d0             	fldl   -0x30(%ebp)
 82076bf:	d9 ee                	fldz
 82076c1:	d9 c9                	fxch   %st(1)
 82076c3:	da e9                	fucompp
 82076c5:	df e0                	fnstsw %ax
 82076c7:	9e                   	sahf
 82076c8:	75 26                	jne    82076f0 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x188>
 82076ca:	7a 24                	jp     82076f0 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x188>
 82076cc:	dd 45 d8             	fldl   -0x28(%ebp)
 82076cf:	d9 ee                	fldz
 82076d1:	d9 c9                	fxch   %st(1)
 82076d3:	da e9                	fucompp
 82076d5:	df e0                	fnstsw %ax
 82076d7:	9e                   	sahf
 82076d8:	75 16                	jne    82076f0 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x188>
 82076da:	7a 14                	jp     82076f0 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x188>
 82076dc:	dd 45 e0             	fldl   -0x20(%ebp)
 82076df:	d9 ee                	fldz
 82076e1:	d9 c9                	fxch   %st(1)
 82076e3:	da e9                	fucompp
 82076e5:	df e0                	fnstsw %ax
 82076e7:	9e                   	sahf
 82076e8:	7a 06                	jp     82076f0 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x188>
 82076ea:	0f 84 bd 00 00 00    	je     82077ad <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x245>
 82076f0:	dd 45 e8             	fldl   -0x18(%ebp)
 82076f3:	dd 9d 48 ff ff ff    	fstpl  -0xb8(%ebp)
 82076f9:	dd 45 e0             	fldl   -0x20(%ebp)
 82076fc:	dd 9d 50 ff ff ff    	fstpl  -0xb0(%ebp)
 8207702:	dd 45 d8             	fldl   -0x28(%ebp)
 8207705:	dd 9d 58 ff ff ff    	fstpl  -0xa8(%ebp)
 820770b:	dd 45 d0             	fldl   -0x30(%ebp)
 820770e:	dd 9d 60 ff ff ff    	fstpl  -0xa0(%ebp)
 8207714:	dd 45 c8             	fldl   -0x38(%ebp)
 8207717:	dd 9d 68 ff ff ff    	fstpl  -0x98(%ebp)
 820771d:	dd 45 c0             	fldl   -0x40(%ebp)
 8207720:	dd 9d 70 ff ff ff    	fstpl  -0x90(%ebp)
 8207726:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207729:	89 04 24             	mov    %eax,(%esp)
 820772c:	e8 3d 2c ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8207731:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8207738:	00 
 8207739:	89 04 24             	mov    %eax,(%esp)
 820773c:	e8 0a 19 f0 ff       	call   810904b <_Z14NumberToStringji>
 8207741:	dd 85 48 ff ff ff    	fldl   -0xb8(%ebp)
 8207747:	dd 5c 24 40          	fstpl  0x40(%esp)
 820774b:	dd 85 50 ff ff ff    	fldl   -0xb0(%ebp)
 8207751:	dd 5c 24 38          	fstpl  0x38(%esp)
 8207755:	dd 85 58 ff ff ff    	fldl   -0xa8(%ebp)
 820775b:	dd 5c 24 30          	fstpl  0x30(%esp)
 820775f:	dd 85 60 ff ff ff    	fldl   -0xa0(%ebp)
 8207765:	dd 5c 24 28          	fstpl  0x28(%esp)
 8207769:	dd 85 68 ff ff ff    	fldl   -0x98(%ebp)
 820776f:	dd 5c 24 20          	fstpl  0x20(%esp)
 8207773:	dd 85 70 ff ff ff    	fldl   -0x90(%ebp)
 8207779:	dd 5c 24 18          	fstpl  0x18(%esp)
 820777d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8207781:	c7 44 24 10 a0 2a bc 	movl   $0x8bc2aa0,0x10(%esp)
 8207788:	08 
 8207789:	c7 44 24 0c 28 a2 00 	movl   $0xa228,0xc(%esp)
 8207790:	00 
 8207791:	c7 44 24 08 40 e9 bc 	movl   $0x8bce940,0x8(%esp)
 8207798:	08 
 8207799:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 82077a0:	08 
 82077a1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82077a8:	e8 5d c4 8c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82077ad:	dd 45 c8             	fldl   -0x38(%ebp)
 82077b0:	dd 05 60 63 bd 08    	fldl   0x8bd6360
 82077b6:	d9 c9                	fxch   %st(1)
 82077b8:	da e9                	fucompp
 82077ba:	df e0                	fnstsw %ax
 82077bc:	9e                   	sahf
 82077bd:	0f 93 c0             	setae  %al
 82077c0:	84 c0                	test   %al,%al
 82077c2:	0f 84 82 00 00 00    	je     820784a <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x2e2>
 82077c8:	dd 45 d0             	fldl   -0x30(%ebp)
 82077cb:	d9 ee                	fldz
 82077cd:	d9 c9                	fxch   %st(1)
 82077cf:	da e9                	fucompp
 82077d1:	df e0                	fnstsw %ax
 82077d3:	9e                   	sahf
 82077d4:	75 12                	jne    82077e8 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x280>
 82077d6:	7a 10                	jp     82077e8 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x280>
 82077d8:	dd 45 e0             	fldl   -0x20(%ebp)
 82077db:	d9 ee                	fldz
 82077dd:	d9 c9                	fxch   %st(1)
 82077df:	da e9                	fucompp
 82077e1:	df e0                	fnstsw %ax
 82077e3:	9e                   	sahf
 82077e4:	7a 02                	jp     82077e8 <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x280>
 82077e6:	74 62                	je     820784a <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x2e2>
 82077e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82077eb:	89 04 24             	mov    %eax,(%esp)
 82077ee:	e8 67 21 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82077f3:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82077fa:	00 
 82077fb:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8207802:	00 
 8207803:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 820780a:	00 
 820780b:	c7 44 24 08 28 03 00 	movl   $0x328,0x8(%esp)
 8207812:	00 
 8207813:	8b 55 0c             	mov    0xc(%ebp),%edx
 8207816:	89 54 24 04          	mov    %edx,0x4(%esp)
 820781a:	89 04 24             	mov    %eax,(%esp)
 820781d:	e8 5c 14 ef ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8207822:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207825:	89 04 24             	mov    %eax,(%esp)
 8207828:	e8 5f 2b ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820782d:	83 f8 05             	cmp    $0x5,%eax
 8207830:	0f 95 c0             	setne  %al
 8207833:	84 c0                	test   %al,%al
 8207835:	74 13                	je     820784a <_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf+0x2e2>
 8207837:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 820783e:	00 
 820783f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207842:	89 04 24             	mov    %eax,(%esp)
 8207845:	e8 46 20 48 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 820784a:	b8 00 00 00 00       	mov    $0x0,%eax
 820784f:	c9                   	leave
 8207850:	c3                   	ret
 8207851:	90                   	nop

```

```c
// Dispatcher_BVHackInfo::dispatch_sig @ 0x8207568

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BVHackInfo::dispatch_sig(Dispatcher_BVHackInfo *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  CHackAnalyzer *pCVar9;
  char local_84 [64];
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  undefined8 local_1c;
  int local_10 [3];
  
  iVar6 = CUser::get_state(param_1);
  if (iVar6 < 2) {
    uVar7 = LineFunc(0xa216,"virtual int Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    local_10[0] = 0;
    cVar5 = PacketBuf::get_int(param_2,local_10);
    if ((cVar5 == '\x01') && (local_10[0] == 0x40)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar7 = LineFunc(0xa21a,"virtual int Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
    else {
      cVar5 = PacketBuf::get_binary(param_2,local_84,0x40);
      if (cVar5 == '\x01') {
        cVar5 = decryptBVHackPacket(local_84,(stBVHackInfo_t *)&local_44);
        dVar4 = local_24;
        dVar3 = local_34;
        dVar2 = local_3c;
        if (cVar5 == '\x01') {
          if ((((local_44 != 0.0) || (NAN(local_44))) || (local_3c != 0.0)) ||
             ((((NAN(local_3c) || (local_34 != 0.0)) ||
               ((NAN(local_34) || ((local_2c != 0.0 || (NAN(local_2c))))))) || (local_24 != 0.0))))
          {
            uVar8 = CUser::get_acc_id(param_1);
            uVar7 = NumberToString(uVar8,0);
            LogManager::logFormat
                      (1,"PacketDispatcher_Impl_1.cpp",
                       "virtual int Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)",0xa228,
                       "(m_id: %s)(%5f)(%5f)(%5f)(%5f)(%5f)(%5f)",uVar7,local_44,dVar2,dVar3,
                       local_2c,dVar4,local_1c);
          }
          if ((_DAT_08bd6360 <= local_3c) &&
             (((local_34 != 0.0 || (NAN(local_34))) || (local_24 != 0.0)))) {
            pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x328,1,0,0);
            iVar6 = CUser::get_state(param_1);
            if (iVar6 != 5) {
              CUser::SetTradePunishType(param_1,0x10);
            }
          }
          uVar7 = 0;
        }
        else {
          uVar7 = LineFunc(0xa224,
                           "virtual int Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)",0,0
                          );
        }
      }
      else {
        uVar7 = LineFunc(0xa21c,
                         "virtual int Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)",0,0);
      }
    }
  }
  return uVar7;
}

```

