# Inter_MonitorNoticeGuildNames

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cafce Inter_MonitorNoticeGuildNames::dispatch_sig  [0x084cafce-0x84cb1ab] ===
 84cafce:	55                   	push   %ebp
 84cafcf:	89 e5                	mov    %esp,%ebp
 84cafd1:	56                   	push   %esi
 84cafd2:	53                   	push   %ebx
 84cafd3:	83 ec 40             	sub    $0x40,%esp
 84cafd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cafd9:	89 04 24             	mov    %eax,(%esp)
 84cafdc:	e8 ab f3 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cafe1:	85 c0                	test   %eax,%eax
 84cafe3:	0f 94 c0             	sete   %al
 84cafe6:	84 c0                	test   %al,%al
 84cafe8:	74 0a                	je     84caff4 <_ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci+0x26>
 84cafea:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cafef:	e9 ae 01 00 00       	jmp    84cb1a2 <_ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci+0x1d4>
 84caff4:	8b 45 10             	mov    0x10(%ebp),%eax
 84caff7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84caffa:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cb001:	ff 
 84cb002:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb005:	89 04 24             	mov    %eax,(%esp)
 84cb008:	e8 93 2f 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cb00d:	89 c2                	mov    %eax,%edx
 84cb00f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cb012:	8b 40 0e             	mov    0xe(%eax),%eax
 84cb015:	39 c2                	cmp    %eax,%edx
 84cb017:	0f 95 c0             	setne  %al
 84cb01a:	84 c0                	test   %al,%al
 84cb01c:	74 57                	je     84cb075 <_ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci+0xa7>
 84cb01e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cb021:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cb024:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cb02b:	ff 
 84cb02c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb02f:	89 04 24             	mov    %eax,(%esp)
 84cb032:	e8 69 2f 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cb037:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cb03b:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cb03f:	c7 44 24 10 a4 80 c8 	movl   $0x8c880a4,0x10(%esp)
 84cb046:	08 
 84cb047:	c7 44 24 0c 5f 25 00 	movl   $0x255f,0xc(%esp)
 84cb04e:	00 
 84cb04f:	c7 44 24 08 a0 d6 c8 	movl   $0x8c8d6a0,0x8(%esp)
 84cb056:	08 
 84cb057:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cb05e:	08 
 84cb05f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cb066:	e8 9f 8b 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cb06b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb070:	e9 2d 01 00 00       	jmp    84cb1a2 <_ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci+0x1d4>
 84cb075:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb078:	89 04 24             	mov    %eax,(%esp)
 84cb07b:	e8 ec 43 d6 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84cb080:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84cb083:	8b 52 12             	mov    0x12(%edx),%edx
 84cb086:	39 d0                	cmp    %edx,%eax
 84cb088:	0f 95 c0             	setne  %al
 84cb08b:	84 c0                	test   %al,%al
 84cb08d:	74 36                	je     84cb0c5 <_ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci+0xf7>
 84cb08f:	c7 44 24 10 d4 7d c8 	movl   $0x8c87dd4,0x10(%esp)
 84cb096:	08 
 84cb097:	c7 44 24 0c 65 25 00 	movl   $0x2565,0xc(%esp)
 84cb09e:	00 
 84cb09f:	c7 44 24 08 a0 d6 c8 	movl   $0x8c8d6a0,0x8(%esp)
 84cb0a6:	08 
 84cb0a7:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cb0ae:	08 
 84cb0af:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cb0b6:	e8 4f 8b 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cb0bb:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb0c0:	e9 dd 00 00 00       	jmp    84cb1a2 <_ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci+0x1d4>
 84cb0c5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cb0c8:	89 04 24             	mov    %eax,(%esp)
 84cb0cb:	e8 7c 2c 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cb0d0:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 84cb0d7:	00 
 84cb0d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb0df:	00 
 84cb0e0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cb0e3:	89 04 24             	mov    %eax,(%esp)
 84cb0e6:	e8 11 08 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cb0eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cb0ee:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84cb0f2:	0f b6 c0             	movzbl %al,%eax
 84cb0f5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cb0f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cb0fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb0ff:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cb102:	89 04 24             	mov    %eax,(%esp)
 84cb105:	e8 16 08 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb10a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84cb111:	eb 30                	jmp    84cb143 <_ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci+0x175>
 84cb113:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cb116:	01 c0                	add    %eax,%eax
 84cb118:	89 c2                	mov    %eax,%edx
 84cb11a:	c1 e2 04             	shl    $0x4,%edx
 84cb11d:	29 c2                	sub    %eax,%edx
 84cb11f:	8d 42 10             	lea    0x10(%edx),%eax
 84cb122:	03 45 ec             	add    -0x14(%ebp),%eax
 84cb125:	83 c0 07             	add    $0x7,%eax
 84cb128:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 84cb12f:	00 
 84cb130:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb134:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cb137:	89 04 24             	mov    %eax,(%esp)
 84cb13a:	e8 a5 c2 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cb13f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84cb143:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cb146:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84cb149:	0f 9c c0             	setl   %al
 84cb14c:	84 c0                	test   %al,%al
 84cb14e:	75 c3                	jne    84cb113 <_ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci+0x145>
 84cb150:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cb157:	00 
 84cb158:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cb15b:	89 04 24             	mov    %eax,(%esp)
 84cb15e:	e8 f5 07 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cb163:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cb166:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb16a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb16d:	89 04 24             	mov    %eax,(%esp)
 84cb170:	e8 45 d4 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cb175:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb17a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cb17d:	89 04 24             	mov    %eax,(%esp)
 84cb180:	e8 fb 2c 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cb185:	eb 1b                	jmp    84cb1a2 <_ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci+0x1d4>
 84cb187:	89 d3                	mov    %edx,%ebx
 84cb189:	89 c6                	mov    %eax,%esi
 84cb18b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cb18e:	89 04 24             	mov    %eax,(%esp)
 84cb191:	e8 ea 2c 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cb196:	89 f0                	mov    %esi,%eax
 84cb198:	89 da                	mov    %ebx,%edx
 84cb19a:	89 04 24             	mov    %eax,(%esp)
 84cb19d:	e8 ae 85 61 00       	call   8ae3750 <_Unwind_Resume>
 84cb1a2:	89 d8                	mov    %ebx,%eax
 84cb1a4:	83 c4 40             	add    $0x40,%esp
 84cb1a7:	5b                   	pop    %ebx
 84cb1a8:	5e                   	pop    %esi
 84cb1a9:	5d                   	pop    %ebp
 84cb1aa:	c3                   	ret
 84cb1ab:	90                   	nop

```

```c
// Inter_MonitorNoticeGuildNames::dispatch_sig @ 0x84cafce

/* Inter_MonitorNoticeGuildNames::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildNames::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  uint local_14;
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      if (iVar2 == *(int *)(local_18 + 0x12)) {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084cb0e6 to 084cb174 has its CatchHandler @ 084cb187 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x3f);
        local_14 = (uint)*(byte *)(local_18 + 0x16);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,local_14);
        for (local_10 = 0; local_10 < (int)local_14; local_10 = local_10 + 1) {
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_24,(char *)(local_10 * 0x1e + local_18 + 0x17),0x1e
                    );
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeGuildNames::dispatch_sig(CUser*, char*, int)",
                   0x2565,
                   "Inter_MonitorCallGuildMembers::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey"
                  );
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildNames::dispatch_sig(CUser*, char*, int)",
                 0x255f,
                 "Packet_Monitor_Notice_Guild_Char_Names::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

