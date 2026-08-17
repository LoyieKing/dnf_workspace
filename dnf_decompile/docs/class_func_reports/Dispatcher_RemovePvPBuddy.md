# Dispatcher_RemovePvPBuddy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08224c5e Dispatcher_RemovePvPBuddy::dispatch_sig  [0x08224c5e-0x8224e07] ===
 8224c5e:	55                   	push   %ebp
 8224c5f:	89 e5                	mov    %esp,%ebp
 8224c61:	57                   	push   %edi
 8224c62:	56                   	push   %esi
 8224c63:	53                   	push   %ebx
 8224c64:	83 ec 5c             	sub    $0x5c,%esp
 8224c67:	e8 3b 57 eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 8224c6c:	89 04 24             	mov    %eax,(%esp)
 8224c6f:	e8 aa c6 ec ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 8224c74:	83 f0 01             	xor    $0x1,%eax
 8224c77:	84 c0                	test   %al,%al
 8224c79:	74 0a                	je     8224c85 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8224c7b:	b8 00 00 00 00       	mov    $0x0,%eax
 8224c80:	e9 7b 01 00 00       	jmp    8224e00 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224c85:	8d 45 ca             	lea    -0x36(%ebp),%eax
 8224c88:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 8224c8d:	ba 00 00 00 00       	mov    $0x0,%edx
 8224c92:	89 c1                	mov    %eax,%ecx
 8224c94:	83 e1 02             	and    $0x2,%ecx
 8224c97:	85 c9                	test   %ecx,%ecx
 8224c99:	74 09                	je     8224ca4 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x46>
 8224c9b:	66 89 10             	mov    %dx,(%eax)
 8224c9e:	83 c0 02             	add    $0x2,%eax
 8224ca1:	83 eb 02             	sub    $0x2,%ebx
 8224ca4:	89 de                	mov    %ebx,%esi
 8224ca6:	83 e6 fc             	and    $0xfffffffc,%esi
 8224ca9:	b9 00 00 00 00       	mov    $0x0,%ecx
 8224cae:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 8224cb1:	83 c1 04             	add    $0x4,%ecx
 8224cb4:	39 f1                	cmp    %esi,%ecx
 8224cb6:	72 f6                	jb     8224cae <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x50>
 8224cb8:	01 c8                	add    %ecx,%eax
 8224cba:	89 d9                	mov    %ebx,%ecx
 8224cbc:	83 e1 02             	and    $0x2,%ecx
 8224cbf:	85 c9                	test   %ecx,%ecx
 8224cc1:	74 06                	je     8224cc9 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x6b>
 8224cc3:	66 89 10             	mov    %dx,(%eax)
 8224cc6:	83 c0 02             	add    $0x2,%eax
 8224cc9:	89 d9                	mov    %ebx,%ecx
 8224ccb:	83 e1 01             	and    $0x1,%ecx
 8224cce:	85 c9                	test   %ecx,%ecx
 8224cd0:	74 05                	je     8224cd7 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x79>
 8224cd2:	88 10                	mov    %dl,(%eax)
 8224cd4:	83 c0 01             	add    $0x1,%eax
 8224cd7:	c6 45 c9 00          	movb   $0x0,-0x37(%ebp)
 8224cdb:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8224ce2:	8d 45 c9             	lea    -0x37(%ebp),%eax
 8224ce5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224ce9:	8b 45 10             	mov    0x10(%ebp),%eax
 8224cec:	89 04 24             	mov    %eax,(%esp)
 8224cef:	e8 2e 82 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8224cf4:	83 f0 01             	xor    $0x1,%eax
 8224cf7:	84 c0                	test   %al,%al
 8224cf9:	74 29                	je     8224d24 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0xc6>
 8224cfb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224d02:	00 
 8224d03:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224d0a:	00 
 8224d0b:	c7 44 24 04 40 c7 bc 	movl   $0x8bcc740,0x4(%esp)
 8224d12:	08 
 8224d13:	c7 04 24 6a df 00 00 	movl   $0xdf6a,(%esp)
 8224d1a:	e8 b8 bb 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224d1f:	e9 dc 00 00 00       	jmp    8224e00 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224d24:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8224d27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224d2b:	8b 45 10             	mov    0x10(%ebp),%eax
 8224d2e:	89 04 24             	mov    %eax,(%esp)
 8224d31:	e8 ba 83 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8224d36:	83 f0 01             	xor    $0x1,%eax
 8224d39:	84 c0                	test   %al,%al
 8224d3b:	74 29                	je     8224d66 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x108>
 8224d3d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224d44:	00 
 8224d45:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224d4c:	00 
 8224d4d:	c7 44 24 04 40 c7 bc 	movl   $0x8bcc740,0x4(%esp)
 8224d54:	08 
 8224d55:	c7 04 24 6d df 00 00 	movl   $0xdf6d,(%esp)
 8224d5c:	e8 76 bb 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224d61:	e9 9a 00 00 00       	jmp    8224e00 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224d66:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8224d69:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8224d6d:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8224d74:	00 
 8224d75:	8d 45 ca             	lea    -0x36(%ebp),%eax
 8224d78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224d7c:	8b 45 10             	mov    0x10(%ebp),%eax
 8224d7f:	89 04 24             	mov    %eax,(%esp)
 8224d82:	e8 35 85 36 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8224d87:	83 f0 01             	xor    $0x1,%eax
 8224d8a:	84 c0                	test   %al,%al
 8224d8c:	74 26                	je     8224db4 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x156>
 8224d8e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224d95:	00 
 8224d96:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224d9d:	00 
 8224d9e:	c7 44 24 04 40 c7 bc 	movl   $0x8bcc740,0x4(%esp)
 8224da5:	08 
 8224da6:	c7 04 24 70 df 00 00 	movl   $0xdf70,(%esp)
 8224dad:	e8 25 bb 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224db2:	eb 4c                	jmp    8224e00 <_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8224db4:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 8224db7:	0f b6 45 c9          	movzbl -0x37(%ebp),%eax
 8224dbb:	0f be f0             	movsbl %al,%esi
 8224dbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224dc1:	89 04 24             	mov    %eax,(%esp)
 8224dc4:	e8 85 6e ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8224dc9:	89 c3                	mov    %eax,%ebx
 8224dcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224dce:	89 04 24             	mov    %eax,(%esp)
 8224dd1:	e8 98 55 eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8224dd6:	8b 15 44 be 40 09    	mov    0x940be44,%edx
 8224ddc:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8224de0:	8d 4d ca             	lea    -0x36(%ebp),%ecx
 8224de3:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8224de7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8224deb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8224def:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224df3:	89 14 24             	mov    %edx,(%esp)
 8224df6:	e8 8d 7e 24 00       	call   846cc88 <_ZN21CCommunityServerProxy18SendRemovePvPBuddyEjjcPci>
 8224dfb:	b8 00 00 00 00       	mov    $0x0,%eax
 8224e00:	83 c4 5c             	add    $0x5c,%esp
 8224e03:	5b                   	pop    %ebx
 8224e04:	5e                   	pop    %esi
 8224e05:	5f                   	pop    %edi
 8224e06:	5d                   	pop    %ebp
 8224e07:	c3                   	ret

```

```c
// Dispatcher_RemovePvPBuddy::dispatch_sig @ 0x8224c5e

/* WARNING: Removing unreachable block (ram,0x08224cd2) */
/* Dispatcher_RemovePvPBuddy::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RemovePvPBuddy::dispatch_sig
          (Dispatcher_RemovePvPBuddy *this,CUser *param_1,PacketBuf *param_2)

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
          CCommunityServerProxy::SendRemovePvPBuddy
                    (GlobalData::s_community_proxy,uVar7,uVar8,cVar3,local_3a,iVar2);
          uVar5 = 0;
        }
        else {
          uVar5 = LineFunc(0xdf70,
                           "virtual int Dispatcher_RemovePvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar5 = LineFunc(0xdf6d,
                         "virtual int Dispatcher_RemovePvPBuddy::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
      }
    }
    else {
      uVar5 = LineFunc(0xdf6a,
                       "virtual int Dispatcher_RemovePvPBuddy::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

