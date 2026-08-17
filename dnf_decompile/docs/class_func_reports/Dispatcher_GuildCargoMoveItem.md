# Dispatcher_GuildCargoMoveItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d18dc Dispatcher_GuildCargoMoveItem::check_error  [0x081d18dc-0x81d1953] ===
 81d18dc:	55                   	push   %ebp
 81d18dd:	89 e5                	mov    %esp,%ebp
 81d18df:	83 ec 18             	sub    $0x18,%esp
 81d18e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d18e5:	89 04 24             	mov    %eax,(%esp)
 81d18e8:	e8 9f 8a f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d18ed:	83 f8 03             	cmp    $0x3,%eax
 81d18f0:	75 0f                	jne    81d1901 <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81d18f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d18f5:	89 04 24             	mov    %eax,(%esp)
 81d18f8:	e8 35 eb f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d18fd:	85 c0                	test   %eax,%eax
 81d18ff:	75 07                	jne    81d1908 <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81d1901:	b8 01 00 00 00       	mov    $0x1,%eax
 81d1906:	eb 05                	jmp    81d190d <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x31>
 81d1908:	b8 00 00 00 00       	mov    $0x0,%eax
 81d190d:	84 c0                	test   %al,%al
 81d190f:	74 07                	je     81d1918 <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81d1911:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d1916:	eb 39                	jmp    81d1951 <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x75>
 81d1918:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d191b:	89 04 24             	mov    %eax,(%esp)
 81d191e:	e8 49 db 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d1923:	85 c0                	test   %eax,%eax
 81d1925:	0f 94 c0             	sete   %al
 81d1928:	84 c0                	test   %al,%al
 81d192a:	74 07                	je     81d1933 <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x57>
 81d192c:	b8 64 00 00 00       	mov    $0x64,%eax
 81d1931:	eb 1e                	jmp    81d1951 <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x75>
 81d1933:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1936:	89 04 24             	mov    %eax,(%esp)
 81d1939:	e8 9a e8 05 00       	call   82301d8 <_ZN5CUser16IsExistGuildAgitEv>
 81d193e:	83 f0 01             	xor    $0x1,%eax
 81d1941:	84 c0                	test   %al,%al
 81d1943:	74 07                	je     81d194c <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x70>
 81d1945:	b8 b5 00 00 00       	mov    $0xb5,%eax
 81d194a:	eb 05                	jmp    81d1951 <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x75>
 81d194c:	b8 00 00 00 00       	mov    $0x0,%eax
 81d1951:	c9                   	leave
 81d1952:	c3                   	ret
 81d1953:	90                   	nop

```

```c
// Dispatcher_GuildCargoMoveItem::check_error @ 0x81d18dc

/* Dispatcher_GuildCargoMoveItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_GuildCargoMoveItem::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_081d190d;
    }
  }
  bVar1 = true;
LAB_081d190d:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      uVar4 = 100;
    }
    else {
      cVar2 = CUser::IsExistGuildAgit((CUser *)param_2);
      if (cVar2 == '\x01') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0xb5;
      }
    }
  }
  return uVar4;
}

```

---

## process

```asm
// === 081d1954 Dispatcher_GuildCargoMoveItem::process  [0x081d1954-0x81d1a95] ===
 81d1954:	55                   	push   %ebp
 81d1955:	89 e5                	mov    %esp,%ebp
 81d1957:	56                   	push   %esi
 81d1958:	53                   	push   %ebx
 81d1959:	83 ec 40             	sub    $0x40,%esp
 81d195c:	8b 45 14             	mov    0x14(%ebp),%eax
 81d195f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d1962:	8b 45 14             	mov    0x14(%ebp),%eax
 81d1965:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d1969:	8b 45 10             	mov    0x10(%ebp),%eax
 81d196c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1970:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1973:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1977:	8b 45 08             	mov    0x8(%ebp),%eax
 81d197a:	89 04 24             	mov    %eax,(%esp)
 81d197d:	e8 5a ff ff ff       	call   81d18dc <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d1982:	89 c2                	mov    %eax,%edx
 81d1984:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d1987:	89 50 04             	mov    %edx,0x4(%eax)
 81d198a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d198d:	8b 40 04             	mov    0x4(%eax),%eax
 81d1990:	85 c0                	test   %eax,%eax
 81d1992:	7e 0a                	jle    81d199e <_ZN29Dispatcher_GuildCargoMoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x4a>
 81d1994:	b8 00 00 00 00       	mov    $0x0,%eax
 81d1999:	e9 f1 00 00 00       	jmp    81d1a8f <_ZN29Dispatcher_GuildCargoMoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x13b>
 81d199e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d19a1:	8b 40 04             	mov    0x4(%eax),%eax
 81d19a4:	85 c0                	test   %eax,%eax
 81d19a6:	79 2b                	jns    81d19d3 <_ZN29Dispatcher_GuildCargoMoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x7f>
 81d19a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d19ab:	8b 40 04             	mov    0x4(%eax),%eax
 81d19ae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d19b5:	00 
 81d19b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d19ba:	c7 44 24 04 20 3a bd 	movl   $0x8bd3a20,0x4(%esp)
 81d19c1:	08 
 81d19c2:	c7 04 24 ff 2d 00 00 	movl   $0x2dff,(%esp)
 81d19c9:	e8 09 ef 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d19ce:	e9 bc 00 00 00       	jmp    81d1a8f <_ZN29Dispatcher_GuildCargoMoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x13b>
 81d19d3:	8b 45 10             	mov    0x10(%ebp),%eax
 81d19d6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d19d9:	8d 45 ce             	lea    -0x32(%ebp),%eax
 81d19dc:	89 04 24             	mov    %eax,(%esp)
 81d19df:	e8 ba a5 05 00       	call   822bf9e <_ZN34Packet_Guild_Guild_Cargo_Move_ItemC1Ev>
 81d19e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d19e7:	89 04 24             	mov    %eax,(%esp)
 81d19ea:	e8 7d da 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d19ef:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81d19f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d19f5:	89 04 24             	mov    %eax,(%esp)
 81d19f8:	e8 51 a2 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d19fd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81d1a00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1a03:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81d1a07:	0f b7 c0             	movzwl %ax,%eax
 81d1a0a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d1a0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1a10:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81d1a14:	0f b7 c0             	movzwl %ax,%eax
 81d1a17:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d1a1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1a1d:	8b 40 11             	mov    0x11(%eax),%eax
 81d1a20:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d1a23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1a26:	8b 40 15             	mov    0x15(%eax),%eax
 81d1a29:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d1a2c:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 81d1a30:	0f b7 f0             	movzwl %ax,%esi
 81d1a33:	8d 5d ce             	lea    -0x32(%ebp),%ebx
 81d1a36:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1a39:	89 04 24             	mov    %eax,(%esp)
 81d1a3c:	e8 4f a2 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d1a41:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d1a47:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1a4b:	89 14 24             	mov    %edx,(%esp)
 81d1a4e:	e8 65 b9 f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d1a53:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d1a57:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d1a5b:	89 04 24             	mov    %eax,(%esp)
 81d1a5e:	e8 6b c2 29 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 81d1a63:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81d1a66:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d1a69:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 81d1a6c:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 81d1a72:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d1a76:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1a7a:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 81d1a81:	00 
 81d1a82:	89 0c 24             	mov    %ecx,(%esp)
 81d1a85:	e8 44 4d 4b 00       	call   86867ce <_ZN15cUserHistoryLog18GuildCargoMoveItemE31ENUM_GUILD_CARGO_HISTORY_REASONii>
 81d1a8a:	b8 00 00 00 00       	mov    $0x0,%eax
 81d1a8f:	83 c4 40             	add    $0x40,%esp
 81d1a92:	5b                   	pop    %ebx
 81d1a93:	5e                   	pop    %esi
 81d1a94:	5d                   	pop    %ebp
 81d1a95:	c3                   	ret

```

```c
// Dispatcher_GuildCargoMoveItem::process @ 0x81d1954

/* Dispatcher_GuildCargoMoveItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GuildCargoMoveItem::process
          (Dispatcher_GuildCargoMoveItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CGuildServerProxy *this_00;
  Packet_Guild_Guild_Cargo_Move_Item local_36 [2];
  ushort local_34;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar1 = LineFunc(0x2dff,
                       "virtual int Dispatcher_GuildCargoMoveItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),0);
    }
    else {
      local_10 = param_2;
      Packet_Guild_Guild_Cargo_Move_Item::Packet_Guild_Guild_Cargo_Move_Item(local_36);
      local_2c = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_28 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_24 = (uint)*(ushort *)(local_10 + 0xd);
      local_20 = (uint)*(ushort *)(local_10 + 0xf);
      local_1c = *(undefined4 *)(local_10 + 0x11);
      local_18 = *(undefined4 *)(local_10 + 0x15);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar1);
      CGuildServerProxy::SendTcpPacket(this_00,(char *)local_36,(uint)local_34);
      cUserHistoryLog::GuildCargoMoveItem
                ((cUserHistoryLog *)(param_1 + 0x79700),0xd,local_24,local_20);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081d17ba Dispatcher_GuildCargoMoveItem::read  [0x081d17ba-0x81d18db] ===
 81d17ba:	55                   	push   %ebp
 81d17bb:	89 e5                	mov    %esp,%ebp
 81d17bd:	83 ec 28             	sub    $0x28,%esp
 81d17c0:	8b 45 10             	mov    0x10(%ebp),%eax
 81d17c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d17c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d17c9:	83 c0 0d             	add    $0xd,%eax
 81d17cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d17d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d17d3:	89 04 24             	mov    %eax,(%esp)
 81d17d6:	e8 d5 b8 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d17db:	83 f0 01             	xor    $0x1,%eax
 81d17de:	84 c0                	test   %al,%al
 81d17e0:	74 29                	je     81d180b <_ZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASE+0x51>
 81d17e2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d17e9:	00 
 81d17ea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d17f1:	00 
 81d17f2:	c7 44 24 04 80 3a bd 	movl   $0x8bd3a80,0x4(%esp)
 81d17f9:	08 
 81d17fa:	c7 04 24 d2 2d 00 00 	movl   $0x2dd2,(%esp)
 81d1801:	e8 d1 f0 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d1806:	e9 ce 00 00 00       	jmp    81d18d9 <_ZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASE+0x11f>
 81d180b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d180e:	83 c0 11             	add    $0x11,%eax
 81d1811:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1815:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1818:	89 04 24             	mov    %eax,(%esp)
 81d181b:	e8 d0 b8 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d1820:	83 f0 01             	xor    $0x1,%eax
 81d1823:	84 c0                	test   %al,%al
 81d1825:	74 29                	je     81d1850 <_ZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASE+0x96>
 81d1827:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d182e:	00 
 81d182f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1836:	00 
 81d1837:	c7 44 24 04 80 3a bd 	movl   $0x8bd3a80,0x4(%esp)
 81d183e:	08 
 81d183f:	c7 04 24 d4 2d 00 00 	movl   $0x2dd4,(%esp)
 81d1846:	e8 8c f0 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d184b:	e9 89 00 00 00       	jmp    81d18d9 <_ZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASE+0x11f>
 81d1850:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1853:	83 c0 0f             	add    $0xf,%eax
 81d1856:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d185a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d185d:	89 04 24             	mov    %eax,(%esp)
 81d1860:	e8 4b b8 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d1865:	83 f0 01             	xor    $0x1,%eax
 81d1868:	84 c0                	test   %al,%al
 81d186a:	74 26                	je     81d1892 <_ZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASE+0xd8>
 81d186c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d1873:	00 
 81d1874:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d187b:	00 
 81d187c:	c7 44 24 04 80 3a bd 	movl   $0x8bd3a80,0x4(%esp)
 81d1883:	08 
 81d1884:	c7 04 24 d6 2d 00 00 	movl   $0x2dd6,(%esp)
 81d188b:	e8 47 f0 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d1890:	eb 47                	jmp    81d18d9 <_ZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASE+0x11f>
 81d1892:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1895:	83 c0 15             	add    $0x15,%eax
 81d1898:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d189c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d189f:	89 04 24             	mov    %eax,(%esp)
 81d18a2:	e8 49 b8 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d18a7:	83 f0 01             	xor    $0x1,%eax
 81d18aa:	84 c0                	test   %al,%al
 81d18ac:	74 26                	je     81d18d4 <_ZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASE+0x11a>
 81d18ae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d18b5:	00 
 81d18b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d18bd:	00 
 81d18be:	c7 44 24 04 80 3a bd 	movl   $0x8bd3a80,0x4(%esp)
 81d18c5:	08 
 81d18c6:	c7 04 24 d8 2d 00 00 	movl   $0x2dd8,(%esp)
 81d18cd:	e8 05 f0 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d18d2:	eb 05                	jmp    81d18d9 <_ZN29Dispatcher_GuildCargoMoveItem4readER9PacketBufR8MSG_BASE+0x11f>
 81d18d4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d18d9:	c9                   	leave
 81d18da:	c3                   	ret
 81d18db:	90                   	nop

```

```c
// Dispatcher_GuildCargoMoveItem::read @ 0x81d17ba

/* Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GuildCargoMoveItem::read
          (Dispatcher_GuildCargoMoveItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x15));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x2dd8,
                           "virtual int Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x2dd6,
                         "virtual int Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x2dd4,
                       "virtual int Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x2dd2,"virtual int Dispatcher_GuildCargoMoveItem::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d1a96 Dispatcher_GuildCargoMoveItem::send  [0x081d1a96-0x81d1b07] ===
 81d1a96:	55                   	push   %ebp
 81d1a97:	89 e5                	mov    %esp,%ebp
 81d1a99:	83 ec 28             	sub    $0x28,%esp
 81d1a9c:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1a9f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d1aa2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1aa5:	8b 40 04             	mov    0x4(%eax),%eax
 81d1aa8:	85 c0                	test   %eax,%eax
 81d1aaa:	74 5a                	je     81d1b06 <_ZN29Dispatcher_GuildCargoMoveItem4sendEP5CUserR9ParamBase+0x70>
 81d1aac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1aaf:	8b 40 04             	mov    0x4(%eax),%eax
 81d1ab2:	83 f8 64             	cmp    $0x64,%eax
 81d1ab5:	74 0d                	je     81d1ac4 <_ZN29Dispatcher_GuildCargoMoveItem4sendEP5CUserR9ParamBase+0x2e>
 81d1ab7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1aba:	8b 40 04             	mov    0x4(%eax),%eax
 81d1abd:	3d b5 00 00 00       	cmp    $0xb5,%eax
 81d1ac2:	75 22                	jne    81d1ae6 <_ZN29Dispatcher_GuildCargoMoveItem4sendEP5CUserR9ParamBase+0x50>
 81d1ac4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1ac7:	8b 40 04             	mov    0x4(%eax),%eax
 81d1aca:	0f b6 c0             	movzbl %al,%eax
 81d1acd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1ad1:	c7 44 24 04 09 01 00 	movl   $0x109,0x4(%esp)
 81d1ad8:	00 
 81d1ad9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1adc:	89 04 24             	mov    %eax,(%esp)
 81d1adf:	e8 5e a4 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d1ae4:	eb 20                	jmp    81d1b06 <_ZN29Dispatcher_GuildCargoMoveItem4sendEP5CUserR9ParamBase+0x70>
 81d1ae6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1ae9:	8b 40 04             	mov    0x4(%eax),%eax
 81d1aec:	0f b6 c0             	movzbl %al,%eax
 81d1aef:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1af3:	c7 44 24 04 fd 00 00 	movl   $0xfd,0x4(%esp)
 81d1afa:	00 
 81d1afb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1afe:	89 04 24             	mov    %eax,(%esp)
 81d1b01:	e8 3c a4 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d1b06:	c9                   	leave
 81d1b07:	c3                   	ret

```

```c
// Dispatcher_GuildCargoMoveItem::send @ 0x81d1a96

/* Dispatcher_GuildCargoMoveItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GuildCargoMoveItem::send
          (Dispatcher_GuildCargoMoveItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    if ((*(int *)(param_2 + 4) == 100) || (*(int *)(param_2 + 4) == 0xb5)) {
      CUser::SendCmdErrorPacket(param_1,0x109,*(uint *)(param_2 + 4) & 0xff);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xfd,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}

```

