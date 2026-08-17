# Dispatcher_QueryCharacInfoMailbox

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08226bda Dispatcher_QueryCharacInfoMailbox::dispatch_sig  [0x08226bda-0x8226d9f] ===
 8226bda:	55                   	push   %ebp
 8226bdb:	89 e5                	mov    %esp,%ebp
 8226bdd:	56                   	push   %esi
 8226bde:	53                   	push   %ebx
 8226bdf:	83 ec 40             	sub    $0x40,%esp
 8226be2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226be5:	89 04 24             	mov    %eax,(%esp)
 8226be8:	e8 9f 37 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8226bed:	83 f8 02             	cmp    $0x2,%eax
 8226bf0:	7e 0f                	jle    8226c01 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8226bf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226bf5:	89 04 24             	mov    %eax,(%esp)
 8226bf8:	e8 35 98 ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8226bfd:	85 c0                	test   %eax,%eax
 8226bff:	75 07                	jne    8226c08 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 8226c01:	b8 01 00 00 00       	mov    $0x1,%eax
 8226c06:	eb 05                	jmp    8226c0d <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x33>
 8226c08:	b8 00 00 00 00       	mov    $0x0,%eax
 8226c0d:	84 c0                	test   %al,%al
 8226c0f:	74 29                	je     8226c3a <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x60>
 8226c11:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8226c18:	00 
 8226c19:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8226c20:	00 
 8226c21:	c7 44 24 04 e0 c3 bc 	movl   $0x8bcc3e0,0x4(%esp)
 8226c28:	08 
 8226c29:	c7 04 24 89 e2 00 00 	movl   $0xe289,(%esp)
 8226c30:	e8 a2 9c 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8226c35:	e9 5f 01 00 00       	jmp    8226d99 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x1bf>
 8226c3a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8226c41:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8226c44:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 8226c49:	ba 00 00 00 00       	mov    $0x0,%edx
 8226c4e:	89 c1                	mov    %eax,%ecx
 8226c50:	83 e1 02             	and    $0x2,%ecx
 8226c53:	85 c9                	test   %ecx,%ecx
 8226c55:	74 09                	je     8226c60 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x86>
 8226c57:	66 89 10             	mov    %dx,(%eax)
 8226c5a:	83 c0 02             	add    $0x2,%eax
 8226c5d:	83 eb 02             	sub    $0x2,%ebx
 8226c60:	89 de                	mov    %ebx,%esi
 8226c62:	83 e6 fc             	and    $0xfffffffc,%esi
 8226c65:	b9 00 00 00 00       	mov    $0x0,%ecx
 8226c6a:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 8226c6d:	83 c1 04             	add    $0x4,%ecx
 8226c70:	39 f1                	cmp    %esi,%ecx
 8226c72:	72 f6                	jb     8226c6a <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x90>
 8226c74:	01 c8                	add    %ecx,%eax
 8226c76:	89 d9                	mov    %ebx,%ecx
 8226c78:	83 e1 02             	and    $0x2,%ecx
 8226c7b:	85 c9                	test   %ecx,%ecx
 8226c7d:	74 06                	je     8226c85 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0xab>
 8226c7f:	66 89 10             	mov    %dx,(%eax)
 8226c82:	83 c0 02             	add    $0x2,%eax
 8226c85:	89 d9                	mov    %ebx,%ecx
 8226c87:	83 e1 01             	and    $0x1,%ecx
 8226c8a:	85 c9                	test   %ecx,%ecx
 8226c8c:	74 05                	je     8226c93 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0xb9>
 8226c8e:	88 10                	mov    %dl,(%eax)
 8226c90:	83 c0 01             	add    $0x1,%eax
 8226c93:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8226c96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226c9a:	8b 45 10             	mov    0x10(%ebp),%eax
 8226c9d:	89 04 24             	mov    %eax,(%esp)
 8226ca0:	e8 4b 64 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8226ca5:	83 f0 01             	xor    $0x1,%eax
 8226ca8:	84 c0                	test   %al,%al
 8226caa:	74 29                	je     8226cd5 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0xfb>
 8226cac:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8226cb3:	00 
 8226cb4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8226cbb:	00 
 8226cbc:	c7 44 24 04 e0 c3 bc 	movl   $0x8bcc3e0,0x4(%esp)
 8226cc3:	08 
 8226cc4:	c7 04 24 8e e2 00 00 	movl   $0xe28e,(%esp)
 8226ccb:	e8 07 9c 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8226cd0:	e9 c4 00 00 00       	jmp    8226d99 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x1bf>
 8226cd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8226cd8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8226cdc:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8226ce3:	00 
 8226ce4:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8226ce7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226ceb:	8b 45 10             	mov    0x10(%ebp),%eax
 8226cee:	89 04 24             	mov    %eax,(%esp)
 8226cf1:	e8 c6 65 36 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8226cf6:	83 f0 01             	xor    $0x1,%eax
 8226cf9:	84 c0                	test   %al,%al
 8226cfb:	74 26                	je     8226d23 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x149>
 8226cfd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8226d04:	00 
 8226d05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8226d0c:	00 
 8226d0d:	c7 44 24 04 e0 c3 bc 	movl   $0x8bcc3e0,0x4(%esp)
 8226d14:	08 
 8226d15:	c7 04 24 8f e2 00 00 	movl   $0xe28f,(%esp)
 8226d1c:	e8 b6 9b 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8226d21:	eb 76                	jmp    8226d99 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x1bf>
 8226d23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226d26:	89 04 24             	mov    %eax,(%esp)
 8226d29:	e8 fa a2 ed ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8226d2e:	89 c3                	mov    %eax,%ebx
 8226d30:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8226d33:	89 04 24             	mov    %eax,(%esp)
 8226d36:	e8 b4 83 07 00       	call   829f0ef <_Z4trimPc>
 8226d3b:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8226d42:	00 
 8226d43:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8226d47:	89 04 24             	mov    %eax,(%esp)
 8226d4a:	e8 71 7b e5 ff       	call   807e8c0 <strncmp@plt>
 8226d4f:	85 c0                	test   %eax,%eax
 8226d51:	0f 94 c0             	sete   %al
 8226d54:	84 c0                	test   %al,%al
 8226d56:	74 22                	je     8226d7a <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x1a0>
 8226d58:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8226d5f:	00 
 8226d60:	c7 44 24 04 45 01 00 	movl   $0x145,0x4(%esp)
 8226d67:	00 
 8226d68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226d6b:	89 04 24             	mov    %eax,(%esp)
 8226d6e:	e8 cf 51 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8226d73:	b8 00 00 00 00       	mov    $0x0,%eax
 8226d78:	eb 1f                	jmp    8226d99 <_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf+0x1bf>
 8226d7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226d7d:	89 04 24             	mov    %eax,(%esp)
 8226d80:	e8 11 1f ea ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8226d85:	8d 55 d6             	lea    -0x2a(%ebp),%edx
 8226d88:	89 54 24 04          	mov    %edx,0x4(%esp)
 8226d8c:	89 04 24             	mov    %eax,(%esp)
 8226d8f:	e8 a4 53 21 00       	call   843c138 <_ZN28DB_ReqQueryCharacInfoMailbox11makeRequestEiPKc>
 8226d94:	b8 00 00 00 00       	mov    $0x0,%eax
 8226d99:	83 c4 40             	add    $0x40,%esp
 8226d9c:	5b                   	pop    %ebx
 8226d9d:	5e                   	pop    %esi
 8226d9e:	5d                   	pop    %ebp
 8226d9f:	c3                   	ret

```

```c
// Dispatcher_QueryCharacInfoMailbox::dispatch_sig @ 0x8226bda

/* WARNING: Removing unreachable block (ram,0x08226c8e) */
/* Dispatcher_QueryCharacInfoMailbox::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_QueryCharacInfoMailbox::dispatch_sig
          (Dispatcher_QueryCharacInfoMailbox *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  char local_2e [30];
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if ((iVar2 < 3) ||
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar2 == 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    uVar3 = LineFunc(0xe289,
                     "virtual int Dispatcher_QueryCharacInfoMailbox::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_10 = 0;
    pcVar4 = local_2e;
    uVar7 = 0x1e;
    bVar8 = ((uint)pcVar4 & 2) != 0;
    if (bVar8) {
      local_2e[0] = '\0';
      local_2e[1] = '\0';
      pcVar4 = local_2e + 2;
      uVar7 = 0x1c;
    }
    uVar6 = 0;
    do {
      pcVar5 = pcVar4 + uVar6;
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      uVar6 = uVar6 + 4;
    } while (uVar6 < (uVar7 & 0xfffffffc));
    if (!bVar8) {
      (pcVar4 + uVar6)[0] = '\0';
      (pcVar4 + uVar6)[1] = '\0';
    }
    cVar1 = PacketBuf::get_int(param_2,&local_10);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_str(param_2,local_2e,0x1e,local_10);
      if (cVar1 == '\x01') {
        pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        pcVar5 = (char *)trim(local_2e);
        iVar2 = strncmp(pcVar5,pcVar4,0x1d);
        if (iVar2 == 0) {
          CUser::SendCmdErrorPacket(param_1,0x145,7);
          uVar3 = 0;
        }
        else {
          iVar2 = CUser::GetUID(param_1);
          DB_ReqQueryCharacInfoMailbox::makeRequest(iVar2,local_2e);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(57999,
                         "virtual int Dispatcher_QueryCharacInfoMailbox::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xe28e,
                       "virtual int Dispatcher_QueryCharacInfoMailbox::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}

```

