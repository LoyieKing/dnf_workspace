# Dispatcher_RequestAddPvPBuddy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0822490a Dispatcher_RequestAddPvPBuddy::dispatch_sig  [0x0822490a-0x8224ab3] ===
 822490a:	55                   	push   %ebp
 822490b:	89 e5                	mov    %esp,%ebp
 822490d:	57                   	push   %edi
 822490e:	56                   	push   %esi
 822490f:	53                   	push   %ebx
 8224910:	83 ec 5c             	sub    $0x5c,%esp
 8224913:	e8 8f 5a eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 8224918:	89 04 24             	mov    %eax,(%esp)
 822491b:	e8 fe c9 ec ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 8224920:	83 f0 01             	xor    $0x1,%eax
 8224923:	84 c0                	test   %al,%al
 8224925:	74 0a                	je     8224931 <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8224927:	b8 00 00 00 00       	mov    $0x0,%eax
 822492c:	e9 7b 01 00 00       	jmp    8224aac <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224931:	8d 45 ca             	lea    -0x36(%ebp),%eax
 8224934:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 8224939:	ba 00 00 00 00       	mov    $0x0,%edx
 822493e:	89 c1                	mov    %eax,%ecx
 8224940:	83 e1 02             	and    $0x2,%ecx
 8224943:	85 c9                	test   %ecx,%ecx
 8224945:	74 09                	je     8224950 <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x46>
 8224947:	66 89 10             	mov    %dx,(%eax)
 822494a:	83 c0 02             	add    $0x2,%eax
 822494d:	83 eb 02             	sub    $0x2,%ebx
 8224950:	89 de                	mov    %ebx,%esi
 8224952:	83 e6 fc             	and    $0xfffffffc,%esi
 8224955:	b9 00 00 00 00       	mov    $0x0,%ecx
 822495a:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 822495d:	83 c1 04             	add    $0x4,%ecx
 8224960:	39 f1                	cmp    %esi,%ecx
 8224962:	72 f6                	jb     822495a <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x50>
 8224964:	01 c8                	add    %ecx,%eax
 8224966:	89 d9                	mov    %ebx,%ecx
 8224968:	83 e1 02             	and    $0x2,%ecx
 822496b:	85 c9                	test   %ecx,%ecx
 822496d:	74 06                	je     8224975 <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x6b>
 822496f:	66 89 10             	mov    %dx,(%eax)
 8224972:	83 c0 02             	add    $0x2,%eax
 8224975:	89 d9                	mov    %ebx,%ecx
 8224977:	83 e1 01             	and    $0x1,%ecx
 822497a:	85 c9                	test   %ecx,%ecx
 822497c:	74 05                	je     8224983 <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x79>
 822497e:	88 10                	mov    %dl,(%eax)
 8224980:	83 c0 01             	add    $0x1,%eax
 8224983:	c6 45 c9 00          	movb   $0x0,-0x37(%ebp)
 8224987:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 822498e:	8d 45 c9             	lea    -0x37(%ebp),%eax
 8224991:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224995:	8b 45 10             	mov    0x10(%ebp),%eax
 8224998:	89 04 24             	mov    %eax,(%esp)
 822499b:	e8 82 85 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82249a0:	83 f0 01             	xor    $0x1,%eax
 82249a3:	84 c0                	test   %al,%al
 82249a5:	74 29                	je     82249d0 <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0xc6>
 82249a7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82249ae:	00 
 82249af:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82249b6:	00 
 82249b7:	c7 44 24 04 00 c8 bc 	movl   $0x8bcc800,0x4(%esp)
 82249be:	08 
 82249bf:	c7 04 24 3c df 00 00 	movl   $0xdf3c,(%esp)
 82249c6:	e8 0c bf 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82249cb:	e9 dc 00 00 00       	jmp    8224aac <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 82249d0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82249d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82249d7:	8b 45 10             	mov    0x10(%ebp),%eax
 82249da:	89 04 24             	mov    %eax,(%esp)
 82249dd:	e8 0e 87 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82249e2:	83 f0 01             	xor    $0x1,%eax
 82249e5:	84 c0                	test   %al,%al
 82249e7:	74 29                	je     8224a12 <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x108>
 82249e9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82249f0:	00 
 82249f1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82249f8:	00 
 82249f9:	c7 44 24 04 00 c8 bc 	movl   $0x8bcc800,0x4(%esp)
 8224a00:	08 
 8224a01:	c7 04 24 3f df 00 00 	movl   $0xdf3f,(%esp)
 8224a08:	e8 ca be 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224a0d:	e9 9a 00 00 00       	jmp    8224aac <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224a12:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8224a15:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8224a19:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8224a20:	00 
 8224a21:	8d 45 ca             	lea    -0x36(%ebp),%eax
 8224a24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224a28:	8b 45 10             	mov    0x10(%ebp),%eax
 8224a2b:	89 04 24             	mov    %eax,(%esp)
 8224a2e:	e8 89 88 36 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8224a33:	83 f0 01             	xor    $0x1,%eax
 8224a36:	84 c0                	test   %al,%al
 8224a38:	74 26                	je     8224a60 <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x156>
 8224a3a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224a41:	00 
 8224a42:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224a49:	00 
 8224a4a:	c7 44 24 04 00 c8 bc 	movl   $0x8bcc800,0x4(%esp)
 8224a51:	08 
 8224a52:	c7 04 24 42 df 00 00 	movl   $0xdf42,(%esp)
 8224a59:	e8 79 be 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224a5e:	eb 4c                	jmp    8224aac <_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224a60:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 8224a63:	0f b6 45 c9          	movzbl -0x37(%ebp),%eax
 8224a67:	0f be f0             	movsbl %al,%esi
 8224a6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224a6d:	89 04 24             	mov    %eax,(%esp)
 8224a70:	e8 d9 71 ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8224a75:	89 c3                	mov    %eax,%ebx
 8224a77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224a7a:	89 04 24             	mov    %eax,(%esp)
 8224a7d:	e8 ec 58 eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8224a82:	8b 15 44 be 40 09    	mov    0x940be44,%edx
 8224a88:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8224a8c:	8d 4d ca             	lea    -0x36(%ebp),%ecx
 8224a8f:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8224a93:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8224a97:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8224a9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224a9f:	89 14 24             	mov    %edx,(%esp)
 8224aa2:	e8 15 81 24 00       	call   846cbbc <_ZN21CCommunityServerProxy18SendReqAddPvPBuddyEjjcPci>
 8224aa7:	b8 00 00 00 00       	mov    $0x0,%eax
 8224aac:	83 c4 5c             	add    $0x5c,%esp
 8224aaf:	5b                   	pop    %ebx
 8224ab0:	5e                   	pop    %esi
 8224ab1:	5f                   	pop    %edi
 8224ab2:	5d                   	pop    %ebp
 8224ab3:	c3                   	ret

```

```c
// Dispatcher_RequestAddPvPBuddy::dispatch_sig @ 0x822490a

/* WARNING: Removing unreachable block (ram,0x0822497e) */
/* Dispatcher_RequestAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestAddPvPBuddy::dispatch_sig
          (Dispatcher_RequestAddPvPBuddy *this,CUser *param_1,PacketBuf *param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  GameWorld *this_00;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int local_40;
  char local_3b;
  char local_3a [42];
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar3 == '\x01') {
    pcVar6 = local_3a;
    uVar8 = 0x1e;
    bVar9 = ((uint)pcVar6 & 2) != 0;
    if (bVar9) {
      local_3a[0] = '\0';
      local_3a[1] = '\0';
      pcVar6 = local_3a + 2;
      uVar8 = 0x1c;
    }
    uVar7 = 0;
    do {
      pcVar1 = pcVar6 + uVar7;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar7 = uVar7 + 4;
    } while (uVar7 < (uVar8 & 0xfffffffc));
    if (!bVar9) {
      (pcVar6 + uVar7)[0] = '\0';
      (pcVar6 + uVar7)[1] = '\0';
    }
    local_3b = '\0';
    local_40 = 0;
    cVar3 = PacketBuf::get_byte(param_2,&local_3b);
    if (cVar3 == '\x01') {
      cVar3 = PacketBuf::get_int(param_2,&local_40);
      if (cVar3 == '\x01') {
        cVar4 = PacketBuf::get_str(param_2,local_3a,0x1e,local_40);
        cVar3 = local_3b;
        iVar2 = local_40;
        if (cVar4 == '\x01') {
          uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          uVar7 = CUser::get_acc_id(param_1);
          CCommunityServerProxy::SendReqAddPvPBuddy
                    (GlobalData::s_community_proxy,uVar7,uVar8,cVar3,local_3a,iVar2);
          uVar5 = 0;
        }
        else {
          uVar5 = LineFunc(0xdf42,
                           "virtual int Dispatcher_RequestAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar5 = LineFunc(0xdf3f,
                         "virtual int Dispatcher_RequestAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar5 = LineFunc(0xdf3c,
                       "virtual int Dispatcher_RequestAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

