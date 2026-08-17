# Dispatcher_ResponseAddPvPBuddy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08224ab4 Dispatcher_ResponseAddPvPBuddy::dispatch_sig  [0x08224ab4-0x8224c5d] ===
 8224ab4:	55                   	push   %ebp
 8224ab5:	89 e5                	mov    %esp,%ebp
 8224ab7:	57                   	push   %edi
 8224ab8:	56                   	push   %esi
 8224ab9:	53                   	push   %ebx
 8224aba:	83 ec 5c             	sub    $0x5c,%esp
 8224abd:	e8 e5 58 eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 8224ac2:	89 04 24             	mov    %eax,(%esp)
 8224ac5:	e8 54 c8 ec ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 8224aca:	83 f0 01             	xor    $0x1,%eax
 8224acd:	84 c0                	test   %al,%al
 8224acf:	74 0a                	je     8224adb <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8224ad1:	b8 00 00 00 00       	mov    $0x0,%eax
 8224ad6:	e9 7b 01 00 00       	jmp    8224c56 <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224adb:	8d 45 ca             	lea    -0x36(%ebp),%eax
 8224ade:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 8224ae3:	ba 00 00 00 00       	mov    $0x0,%edx
 8224ae8:	89 c1                	mov    %eax,%ecx
 8224aea:	83 e1 02             	and    $0x2,%ecx
 8224aed:	85 c9                	test   %ecx,%ecx
 8224aef:	74 09                	je     8224afa <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x46>
 8224af1:	66 89 10             	mov    %dx,(%eax)
 8224af4:	83 c0 02             	add    $0x2,%eax
 8224af7:	83 eb 02             	sub    $0x2,%ebx
 8224afa:	89 de                	mov    %ebx,%esi
 8224afc:	83 e6 fc             	and    $0xfffffffc,%esi
 8224aff:	b9 00 00 00 00       	mov    $0x0,%ecx
 8224b04:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 8224b07:	83 c1 04             	add    $0x4,%ecx
 8224b0a:	39 f1                	cmp    %esi,%ecx
 8224b0c:	72 f6                	jb     8224b04 <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x50>
 8224b0e:	01 c8                	add    %ecx,%eax
 8224b10:	89 d9                	mov    %ebx,%ecx
 8224b12:	83 e1 02             	and    $0x2,%ecx
 8224b15:	85 c9                	test   %ecx,%ecx
 8224b17:	74 06                	je     8224b1f <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x6b>
 8224b19:	66 89 10             	mov    %dx,(%eax)
 8224b1c:	83 c0 02             	add    $0x2,%eax
 8224b1f:	89 d9                	mov    %ebx,%ecx
 8224b21:	83 e1 01             	and    $0x1,%ecx
 8224b24:	85 c9                	test   %ecx,%ecx
 8224b26:	74 05                	je     8224b2d <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x79>
 8224b28:	88 10                	mov    %dl,(%eax)
 8224b2a:	83 c0 01             	add    $0x1,%eax
 8224b2d:	c6 45 c9 00          	movb   $0x0,-0x37(%ebp)
 8224b31:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8224b38:	8d 45 c9             	lea    -0x37(%ebp),%eax
 8224b3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224b3f:	8b 45 10             	mov    0x10(%ebp),%eax
 8224b42:	89 04 24             	mov    %eax,(%esp)
 8224b45:	e8 d8 83 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8224b4a:	83 f0 01             	xor    $0x1,%eax
 8224b4d:	84 c0                	test   %al,%al
 8224b4f:	74 29                	je     8224b7a <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0xc6>
 8224b51:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224b58:	00 
 8224b59:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224b60:	00 
 8224b61:	c7 44 24 04 a0 c7 bc 	movl   $0x8bcc7a0,0x4(%esp)
 8224b68:	08 
 8224b69:	c7 04 24 53 df 00 00 	movl   $0xdf53,(%esp)
 8224b70:	e8 62 bd 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224b75:	e9 dc 00 00 00       	jmp    8224c56 <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224b7a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8224b7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224b81:	8b 45 10             	mov    0x10(%ebp),%eax
 8224b84:	89 04 24             	mov    %eax,(%esp)
 8224b87:	e8 64 85 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8224b8c:	83 f0 01             	xor    $0x1,%eax
 8224b8f:	84 c0                	test   %al,%al
 8224b91:	74 29                	je     8224bbc <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x108>
 8224b93:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224b9a:	00 
 8224b9b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224ba2:	00 
 8224ba3:	c7 44 24 04 a0 c7 bc 	movl   $0x8bcc7a0,0x4(%esp)
 8224baa:	08 
 8224bab:	c7 04 24 56 df 00 00 	movl   $0xdf56,(%esp)
 8224bb2:	e8 20 bd 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224bb7:	e9 9a 00 00 00       	jmp    8224c56 <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224bbc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8224bbf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8224bc3:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8224bca:	00 
 8224bcb:	8d 45 ca             	lea    -0x36(%ebp),%eax
 8224bce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224bd2:	8b 45 10             	mov    0x10(%ebp),%eax
 8224bd5:	89 04 24             	mov    %eax,(%esp)
 8224bd8:	e8 df 86 36 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8224bdd:	83 f0 01             	xor    $0x1,%eax
 8224be0:	84 c0                	test   %al,%al
 8224be2:	74 26                	je     8224c0a <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x156>
 8224be4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224beb:	00 
 8224bec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224bf3:	00 
 8224bf4:	c7 44 24 04 a0 c7 bc 	movl   $0x8bcc7a0,0x4(%esp)
 8224bfb:	08 
 8224bfc:	c7 04 24 59 df 00 00 	movl   $0xdf59,(%esp)
 8224c03:	e8 cf bc 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224c08:	eb 4c                	jmp    8224c56 <_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224c0a:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 8224c0d:	0f b6 45 c9          	movzbl -0x37(%ebp),%eax
 8224c11:	0f be f0             	movsbl %al,%esi
 8224c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224c17:	89 04 24             	mov    %eax,(%esp)
 8224c1a:	e8 2f 70 ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8224c1f:	89 c3                	mov    %eax,%ebx
 8224c21:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224c24:	89 04 24             	mov    %eax,(%esp)
 8224c27:	e8 42 57 eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8224c2c:	8b 15 44 be 40 09    	mov    0x940be44,%edx
 8224c32:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8224c36:	8d 4d ca             	lea    -0x36(%ebp),%ecx
 8224c39:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8224c3d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8224c41:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8224c45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224c49:	89 14 24             	mov    %edx,(%esp)
 8224c4c:	e8 d1 7f 24 00       	call   846cc22 <_ZN21CCommunityServerProxy18SendResAddPvPBuddyEjjcPci>
 8224c51:	b8 00 00 00 00       	mov    $0x0,%eax
 8224c56:	83 c4 5c             	add    $0x5c,%esp
 8224c59:	5b                   	pop    %ebx
 8224c5a:	5e                   	pop    %esi
 8224c5b:	5f                   	pop    %edi
 8224c5c:	5d                   	pop    %ebp
 8224c5d:	c3                   	ret

```

```c
// Dispatcher_ResponseAddPvPBuddy::dispatch_sig @ 0x8224ab4

/* WARNING: Removing unreachable block (ram,0x08224b28) */
/* Dispatcher_ResponseAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ResponseAddPvPBuddy::dispatch_sig
          (Dispatcher_ResponseAddPvPBuddy *this,CUser *param_1,PacketBuf *param_2)

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
          CCommunityServerProxy::SendResAddPvPBuddy
                    (GlobalData::s_community_proxy,uVar7,uVar8,cVar3,local_3a,iVar2);
          uVar5 = 0;
        }
        else {
          uVar5 = LineFunc(0xdf59,
                           "virtual int Dispatcher_ResponseAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar5 = LineFunc(0xdf56,
                         "virtual int Dispatcher_ResponseAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar5 = LineFunc(0xdf53,
                       "virtual int Dispatcher_ResponseAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

