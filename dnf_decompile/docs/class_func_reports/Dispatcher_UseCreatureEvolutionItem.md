# Dispatcher_UseCreatureEvolutionItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08228a76 Dispatcher_UseCreatureEvolutionItem::dispatch_sig  [0x08228a76-0x8228bcb] ===
 8228a76:	55                   	push   %ebp
 8228a77:	89 e5                	mov    %esp,%ebp
 8228a79:	83 ec 38             	sub    $0x38,%esp
 8228a7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228a7f:	89 04 24             	mov    %eax,(%esp)
 8228a82:	e8 05 19 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8228a87:	83 f8 03             	cmp    $0x3,%eax
 8228a8a:	0f 95 c0             	setne  %al
 8228a8d:	84 c0                	test   %al,%al
 8228a8f:	74 0a                	je     8228a9b <_ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf+0x25>
 8228a91:	b8 00 00 00 00       	mov    $0x0,%eax
 8228a96:	e9 2e 01 00 00       	jmp    8228bc9 <_ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf+0x153>
 8228a9b:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8228a9f:	66 c7 45 f0 00 00    	movw   $0x0,-0x10(%ebp)
 8228aa5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8228aac:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8228aaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228ab3:	8b 45 10             	mov    0x10(%ebp),%eax
 8228ab6:	89 04 24             	mov    %eax,(%esp)
 8228ab9:	e8 b2 44 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8228abe:	83 f0 01             	xor    $0x1,%eax
 8228ac1:	84 c0                	test   %al,%al
 8228ac3:	74 29                	je     8228aee <_ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf+0x78>
 8228ac5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8228acc:	00 
 8228acd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8228ad4:	00 
 8228ad5:	c7 44 24 04 80 c0 bc 	movl   $0x8bcc080,0x4(%esp)
 8228adc:	08 
 8228add:	c7 04 24 09 e6 00 00 	movl   $0xe609,(%esp)
 8228ae4:	e8 ee 7d 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8228ae9:	e9 db 00 00 00       	jmp    8228bc9 <_ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf+0x153>
 8228aee:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8228af1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228af5:	8b 45 10             	mov    0x10(%ebp),%eax
 8228af8:	89 04 24             	mov    %eax,(%esp)
 8228afb:	e8 c0 44 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8228b00:	83 f0 01             	xor    $0x1,%eax
 8228b03:	84 c0                	test   %al,%al
 8228b05:	74 29                	je     8228b30 <_ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf+0xba>
 8228b07:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8228b0e:	00 
 8228b0f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8228b16:	00 
 8228b17:	c7 44 24 04 80 c0 bc 	movl   $0x8bcc080,0x4(%esp)
 8228b1e:	08 
 8228b1f:	c7 04 24 0a e6 00 00 	movl   $0xe60a,(%esp)
 8228b26:	e8 ac 7d 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8228b2b:	e9 99 00 00 00       	jmp    8228bc9 <_ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf+0x153>
 8228b30:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8228b33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228b37:	8b 45 10             	mov    0x10(%ebp),%eax
 8228b3a:	89 04 24             	mov    %eax,(%esp)
 8228b3d:	e8 ae 45 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8228b42:	83 f0 01             	xor    $0x1,%eax
 8228b45:	84 c0                	test   %al,%al
 8228b47:	74 26                	je     8228b6f <_ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf+0xf9>
 8228b49:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8228b50:	00 
 8228b51:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8228b58:	00 
 8228b59:	c7 44 24 04 80 c0 bc 	movl   $0x8bcc080,0x4(%esp)
 8228b60:	08 
 8228b61:	c7 04 24 0b e6 00 00 	movl   $0xe60b,(%esp)
 8228b68:	e8 6a 7d 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8228b6d:	eb 5a                	jmp    8228bc9 <_ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf+0x153>
 8228b6f:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8228b72:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 8228b76:	0f bf d0             	movswl %ax,%edx
 8228b79:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8228b7d:	0f b6 c0             	movzbl %al,%eax
 8228b80:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8228b84:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8228b88:	89 44 24 08          	mov    %eax,0x8(%esp)
 8228b8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228b8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228b93:	8b 45 08             	mov    0x8(%ebp),%eax
 8228b96:	89 04 24             	mov    %eax,(%esp)
 8228b99:	e8 2e 00 00 00       	call   8228bcc <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi>
 8228b9e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8228ba1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8228ba5:	74 1d                	je     8228bc4 <_ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf+0x14e>
 8228ba7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8228baa:	0f b6 c0             	movzbl %al,%eax
 8228bad:	89 44 24 08          	mov    %eax,0x8(%esp)
 8228bb1:	c7 44 24 04 44 01 00 	movl   $0x144,0x4(%esp)
 8228bb8:	00 
 8228bb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228bbc:	89 04 24             	mov    %eax,(%esp)
 8228bbf:	e8 7e 33 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8228bc4:	b8 00 00 00 00       	mov    $0x0,%eax
 8228bc9:	c9                   	leave
 8228bca:	c3                   	ret
 8228bcb:	90                   	nop

```

```c
// Dispatcher_UseCreatureEvolutionItem::dispatch_sig @ 0x8228a76

/* Dispatcher_UseCreatureEvolutionItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UseCreatureEvolutionItem::dispatch_sig
          (Dispatcher_UseCreatureEvolutionItem *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  short local_14;
  uchar local_11;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    local_11 = '\0';
    local_14 = 0;
    local_18 = 0;
    cVar1 = PacketBuf::get_byte(param_2,&local_11);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_14);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&local_18);
        if (cVar1 == '\x01') {
          local_10 = process(this,param_1,local_11,local_14,local_18);
          if (local_10 != 0) {
            CUser::SendCmdErrorPacket(param_1,0x144,local_10 & 0xff);
          }
          uVar3 = 0;
        }
        else {
          uVar3 = LineFunc(0xe60b,
                           "virtual int Dispatcher_UseCreatureEvolutionItem::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xe60a,
                         "virtual int Dispatcher_UseCreatureEvolutionItem::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xe609,
                       "virtual int Dispatcher_UseCreatureEvolutionItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## process

```asm
// === 08228bcc Dispatcher_UseCreatureEvolutionItem::process  [0x08228bcc-0x8228e5d] ===
 8228bcc:	55                   	push   %ebp
 8228bcd:	89 e5                	mov    %esp,%ebp
 8228bcf:	57                   	push   %edi
 8228bd0:	56                   	push   %esi
 8228bd1:	53                   	push   %ebx
 8228bd2:	83 ec 7c             	sub    $0x7c,%esp
 8228bd5:	8b 55 10             	mov    0x10(%ebp),%edx
 8228bd8:	8b 45 14             	mov    0x14(%ebp),%eax
 8228bdb:	88 55 a4             	mov    %dl,-0x5c(%ebp)
 8228bde:	66 89 45 a0          	mov    %ax,-0x60(%ebp)
 8228be2:	0f bf 75 a0          	movswl -0x60(%ebp),%esi
 8228be6:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 8228bea:	89 04 24             	mov    %eax,(%esp)
 8228bed:	e8 53 ec ec ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 8228bf2:	89 c3                	mov    %eax,%ebx
 8228bf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228bf7:	89 04 24             	mov    %eax,(%esp)
 8228bfa:	e8 7f 16 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8228bff:	89 74 24 08          	mov    %esi,0x8(%esp)
 8228c03:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8228c07:	89 04 24             	mov    %eax,(%esp)
 8228c0a:	e8 cf 35 2d 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8228c0f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8228c12:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8228c16:	75 0a                	jne    8228c22 <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi+0x56>
 8228c18:	b8 04 00 00 00       	mov    $0x4,%eax
 8228c1d:	e9 34 02 00 00       	jmp    8228e56 <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi+0x28a>
 8228c22:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8228c25:	8b 40 02             	mov    0x2(%eax),%eax
 8228c28:	89 c3                	mov    %eax,%ebx
 8228c2a:	e8 6c 35 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8228c2f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8228c33:	89 04 24             	mov    %eax,(%esp)
 8228c36:	e8 f7 6d 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8228c3b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8228c3e:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8228c42:	75 5b                	jne    8228c9f <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi+0xd3>
 8228c44:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228c47:	89 04 24             	mov    %eax,(%esp)
 8228c4a:	e8 ff 2f ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8228c4f:	89 c3                	mov    %eax,%ebx
 8228c51:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8228c54:	8b 70 02             	mov    0x2(%eax),%esi
 8228c57:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8228c5e:	00 
 8228c5f:	c7 44 24 08 21 e6 00 	movl   $0xe621,0x8(%esp)
 8228c66:	00 
 8228c67:	c7 44 24 04 20 c0 bc 	movl   $0x8bcc020,0x4(%esp)
 8228c6e:	08 
 8228c6f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8228c72:	89 04 24             	mov    %eax,(%esp)
 8228c75:	e8 9e 6a 32 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8228c7a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8228c7e:	89 74 24 08          	mov    %esi,0x8(%esp)
 8228c82:	c7 44 24 04 18 37 bc 	movl   $0x8bc3718,0x4(%esp)
 8228c89:	08 
 8228c8a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8228c8d:	89 04 24             	mov    %eax,(%esp)
 8228c90:	e8 f3 6a 32 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8228c95:	b8 15 00 00 00       	mov    $0x15,%eax
 8228c9a:	e9 b7 01 00 00       	jmp    8228e56 <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi+0x28a>
 8228c9f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8228ca2:	89 04 24             	mov    %eax,(%esp)
 8228ca5:	e8 50 86 ec ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8228caa:	83 f0 01             	xor    $0x1,%eax
 8228cad:	84 c0                	test   %al,%al
 8228caf:	74 5b                	je     8228d0c <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi+0x140>
 8228cb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228cb4:	89 04 24             	mov    %eax,(%esp)
 8228cb7:	e8 92 2f ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8228cbc:	89 c3                	mov    %eax,%ebx
 8228cbe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8228cc1:	8b 70 02             	mov    0x2(%eax),%esi
 8228cc4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8228ccb:	00 
 8228ccc:	c7 44 24 08 27 e6 00 	movl   $0xe627,0x8(%esp)
 8228cd3:	00 
 8228cd4:	c7 44 24 04 20 c0 bc 	movl   $0x8bcc020,0x4(%esp)
 8228cdb:	08 
 8228cdc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8228cdf:	89 04 24             	mov    %eax,(%esp)
 8228ce2:	e8 31 6a 32 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8228ce7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8228ceb:	89 74 24 08          	mov    %esi,0x8(%esp)
 8228cef:	c7 44 24 04 64 37 bc 	movl   $0x8bc3764,0x4(%esp)
 8228cf6:	08 
 8228cf7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8228cfa:	89 04 24             	mov    %eax,(%esp)
 8228cfd:	e8 86 6a 32 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8228d02:	b8 17 00 00 00       	mov    $0x17,%eax
 8228d07:	e9 4a 01 00 00       	jmp    8228e56 <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi+0x28a>
 8228d0c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8228d0f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8228d12:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228d15:	89 04 24             	mov    %eax,(%esp)
 8228d18:	e8 71 15 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8228d1d:	89 04 24             	mov    %eax,(%esp)
 8228d20:	e8 43 48 eb ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 8228d25:	89 04 24             	mov    %eax,(%esp)
 8228d28:	e8 09 02 11 00       	call   8338f36 <_ZN13user_creature12CCreatureMgr16GetCreatureIndexEv>
 8228d2d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8228d30:	8b 92 60 03 00 00    	mov    0x360(%edx),%edx
 8228d36:	39 d0                	cmp    %edx,%eax
 8228d38:	0f 95 c0             	setne  %al
 8228d3b:	84 c0                	test   %al,%al
 8228d3d:	0f 84 8f 00 00 00    	je     8228dd2 <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi+0x206>
 8228d43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228d46:	89 04 24             	mov    %eax,(%esp)
 8228d49:	e8 00 2f ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8228d4e:	89 c6                	mov    %eax,%esi
 8228d50:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8228d53:	8b 40 02             	mov    0x2(%eax),%eax
 8228d56:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8228d59:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8228d5c:	8b b8 60 03 00 00    	mov    0x360(%eax),%edi
 8228d62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228d65:	89 04 24             	mov    %eax,(%esp)
 8228d68:	e8 21 15 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8228d6d:	89 04 24             	mov    %eax,(%esp)
 8228d70:	e8 f3 47 eb ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 8228d75:	89 04 24             	mov    %eax,(%esp)
 8228d78:	e8 b9 01 11 00       	call   8338f36 <_ZN13user_creature12CCreatureMgr16GetCreatureIndexEv>
 8228d7d:	89 c3                	mov    %eax,%ebx
 8228d7f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8228d86:	00 
 8228d87:	c7 44 24 08 2f e6 00 	movl   $0xe62f,0x8(%esp)
 8228d8e:	00 
 8228d8f:	c7 44 24 04 20 c0 bc 	movl   $0x8bcc020,0x4(%esp)
 8228d96:	08 
 8228d97:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8228d9a:	89 04 24             	mov    %eax,(%esp)
 8228d9d:	e8 76 69 32 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8228da2:	89 74 24 14          	mov    %esi,0x14(%esp)
 8228da6:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8228da9:	89 44 24 10          	mov    %eax,0x10(%esp)
 8228dad:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8228db1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8228db5:	c7 44 24 04 b4 37 bc 	movl   $0x8bc37b4,0x4(%esp)
 8228dbc:	08 
 8228dbd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8228dc0:	89 04 24             	mov    %eax,(%esp)
 8228dc3:	e8 c0 69 32 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8228dc8:	b8 07 00 00 00       	mov    $0x7,%eax
 8228dcd:	e9 84 00 00 00       	jmp    8228e56 <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi+0x28a>
 8228dd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228dd5:	89 04 24             	mov    %eax,(%esp)
 8228dd8:	e8 2d a6 f6 ff       	call   819340a <_ZN15CUserCharacInfo21getCurCharacInvenRefWEv>
 8228ddd:	89 04 24             	mov    %eax,(%esp)
 8228de0:	e8 83 47 eb ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 8228de5:	8b 55 18             	mov    0x18(%ebp),%edx
 8228de8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8228dec:	89 04 24             	mov    %eax,(%esp)
 8228def:	e8 ce 48 11 00       	call   833d6c2 <_ZN13user_creature12CCreatureMgr11ItemEvoluteEi>
 8228df4:	84 c0                	test   %al,%al
 8228df6:	74 30                	je     8228e28 <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi+0x25c>
 8228df8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228dfb:	89 04 24             	mov    %eax,(%esp)
 8228dfe:	e8 4b 2e ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8228e03:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8228e07:	8b 45 18             	mov    0x18(%ebp),%eax
 8228e0a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8228e0e:	c7 44 24 04 18 38 bc 	movl   $0x8bc3818,0x4(%esp)
 8228e15:	08 
 8228e16:	8d 45 da             	lea    -0x26(%ebp),%eax
 8228e19:	89 04 24             	mov    %eax,(%esp)
 8228e1c:	e8 6f 6b 32 00       	call   854f990 <_ZN13cHistoryTraceclEPKcz>
 8228e21:	b8 00 00 00 00       	mov    $0x0,%eax
 8228e26:	eb 2e                	jmp    8228e56 <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi+0x28a>
 8228e28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228e2b:	89 04 24             	mov    %eax,(%esp)
 8228e2e:	e8 1b 2e ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8228e33:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8228e37:	8b 45 18             	mov    0x18(%ebp),%eax
 8228e3a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8228e3e:	c7 44 24 04 54 38 bc 	movl   $0x8bc3854,0x4(%esp)
 8228e45:	08 
 8228e46:	8d 45 db             	lea    -0x25(%ebp),%eax
 8228e49:	89 04 24             	mov    %eax,(%esp)
 8228e4c:	e8 3f 6b 32 00       	call   854f990 <_ZN13cHistoryTraceclEPKcz>
 8228e51:	b8 01 00 00 00       	mov    $0x1,%eax
 8228e56:	83 c4 7c             	add    $0x7c,%esp
 8228e59:	5b                   	pop    %ebx
 8228e5a:	5e                   	pop    %esi
 8228e5b:	5f                   	pop    %edi
 8228e5c:	5d                   	pop    %ebp
 8228e5d:	c3                   	ret

```

```c
// Dispatcher_UseCreatureEvolutionItem::process @ 0x8228bcc

/* Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short, int) */

undefined4 __thiscall
Dispatcher_UseCreatureEvolutionItem::process
          (Dispatcher_UseCreatureEvolutionItem *this,CUser *param_1,uchar param_2,short param_3,
          int param_4)

{
  char cVar1;
  int iVar2;
  CInventory *pCVar3;
  undefined4 uVar4;
  CDataManager *this_00;
  undefined4 uVar5;
  CCreatureMgr *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [18];
  cHistoryTrace local_2a;
  cHistoryTrace local_29;
  int local_28;
  CItem *local_24;
  CItem *local_20;
  
  iVar2 = GetInvenTypeFromItemSpace(param_2);
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_28 = CInventory::GetInvenRef(pCVar3,iVar2,(int)param_3);
  if (local_28 == 0) {
    uVar4 = 4;
  }
  else {
    iVar2 = *(int *)(local_28 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    local_24 = (CItem *)CDataManager::find_item(this_00,iVar2);
    if (local_24 == (CItem *)0x0) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar4 = *(undefined4 *)(local_28 + 2);
      cMyTrace::cMyTrace(local_5c,
                         "int Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short int, int)"
                         ,0xe621,5);
      cMyTrace::operator()
                (local_5c,
                 "Dispatcher_UseCreatureEvolutionItem not found item_id(%d), charac_no(%d)\n",uVar4,
                 uVar5);
      uVar4 = 0x15;
    }
    else {
      cVar1 = CItem::is_stackable(local_24);
      if (cVar1 == '\x01') {
        local_20 = local_24;
        pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
        iVar2 = user_creature::CCreatureMgr::GetCreatureIndex(pCVar6);
        if (iVar2 == *(int *)(local_20 + 0x360)) {
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefW((CUserCharacInfo *)param_1);
          pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
          cVar1 = user_creature::CCreatureMgr::ItemEvolute(pCVar6,param_4);
          if (cVar1 == '\0') {
            uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cHistoryTrace::operator()
                      (&local_29,"ItemEvolute Fail evolution_creature_id(%d), charac_no(%d)",param_4
                       ,uVar4);
            uVar4 = 1;
          }
          else {
            uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cHistoryTrace::operator()
                      (&local_2a,"ItemEvolute Succ evolution_creature_id(%d), charac_no(%d)",param_4
                       ,uVar4);
            uVar4 = 0;
          }
        }
        else {
          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          uVar4 = *(undefined4 *)(local_28 + 2);
          uVar5 = *(undefined4 *)(local_20 + 0x360);
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
          uVar8 = user_creature::CCreatureMgr::GetCreatureIndex(pCVar6);
          cMyTrace::cMyTrace(local_3c,
                             "int Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short int, int)"
                             ,0xe62f,5);
          cMyTrace::operator()
                    (local_3c,
                     "Dispatcher_UseCreatureEvolutionItem cur_creatureid(%d) != item_base_creature_id(%d) charac_no(%d)\n"
                     ,uVar8,uVar5,uVar4,uVar7);
          uVar4 = 7;
        }
      }
      else {
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar4 = *(undefined4 *)(local_28 + 2);
        cMyTrace::cMyTrace(local_4c,
                           "int Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short int, int)"
                           ,0xe627,5);
        cMyTrace::operator()
                  (local_4c,
                   "Dispatcher_UseCreatureEvolutionItem item_id(%d) is not stackable charac_no(%d)\n"
                   ,uVar4,uVar5);
        uVar4 = 0x17;
      }
    }
  }
  return uVar4;
}

```

