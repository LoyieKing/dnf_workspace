# Inter_MonitorCallGuildInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cc006 Inter_MonitorCallGuildInfo::dispatch_sig  [0x084cc006-0x84cc23b] ===
 84cc006:	55                   	push   %ebp
 84cc007:	89 e5                	mov    %esp,%ebp
 84cc009:	56                   	push   %esi
 84cc00a:	53                   	push   %ebx
 84cc00b:	83 ec 40             	sub    $0x40,%esp
 84cc00e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc011:	89 04 24             	mov    %eax,(%esp)
 84cc014:	e8 73 e3 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cc019:	85 c0                	test   %eax,%eax
 84cc01b:	0f 94 c0             	sete   %al
 84cc01e:	84 c0                	test   %al,%al
 84cc020:	74 0a                	je     84cc02c <_ZN26Inter_MonitorCallGuildInfo12dispatch_sigEP5CUserPci+0x26>
 84cc022:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc027:	e9 07 02 00 00       	jmp    84cc233 <_ZN26Inter_MonitorCallGuildInfo12dispatch_sigEP5CUserPci+0x22d>
 84cc02c:	8b 45 10             	mov    0x10(%ebp),%eax
 84cc02f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84cc032:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cc039:	ff 
 84cc03a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc03d:	89 04 24             	mov    %eax,(%esp)
 84cc040:	e8 5b 1f 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cc045:	89 c2                	mov    %eax,%edx
 84cc047:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cc04a:	8b 40 0e             	mov    0xe(%eax),%eax
 84cc04d:	39 c2                	cmp    %eax,%edx
 84cc04f:	0f 95 c0             	setne  %al
 84cc052:	84 c0                	test   %al,%al
 84cc054:	74 57                	je     84cc0ad <_ZN26Inter_MonitorCallGuildInfo12dispatch_sigEP5CUserPci+0xa7>
 84cc056:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cc059:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cc05c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cc063:	ff 
 84cc064:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc067:	89 04 24             	mov    %eax,(%esp)
 84cc06a:	e8 31 1f 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cc06f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cc073:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cc077:	c7 44 24 10 98 82 c8 	movl   $0x8c88298,0x10(%esp)
 84cc07e:	08 
 84cc07f:	c7 44 24 0c e4 26 00 	movl   $0x26e4,0xc(%esp)
 84cc086:	00 
 84cc087:	c7 44 24 08 c0 d4 c8 	movl   $0x8c8d4c0,0x8(%esp)
 84cc08e:	08 
 84cc08f:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cc096:	08 
 84cc097:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cc09e:	e8 67 7b 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cc0a3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc0a8:	e9 86 01 00 00       	jmp    84cc233 <_ZN26Inter_MonitorCallGuildInfo12dispatch_sigEP5CUserPci+0x22d>
 84cc0ad:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc0b0:	89 04 24             	mov    %eax,(%esp)
 84cc0b3:	e8 94 1c 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cc0b8:	c7 44 24 08 4d 00 00 	movl   $0x4d,0x8(%esp)
 84cc0bf:	00 
 84cc0c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc0c7:	00 
 84cc0c8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc0cb:	89 04 24             	mov    %eax,(%esp)
 84cc0ce:	e8 29 f8 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cc0d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc0da:	00 
 84cc0db:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc0de:	89 04 24             	mov    %eax,(%esp)
 84cc0e1:	e8 3a f8 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc0e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cc0e9:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84cc0ed:	0f b6 c0             	movzbl %al,%eax
 84cc0f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc0f4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc0f7:	89 04 24             	mov    %eax,(%esp)
 84cc0fa:	e8 21 f8 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc0ff:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84cc106:	e9 be 00 00 00       	jmp    84cc1c9 <_ZN26Inter_MonitorCallGuildInfo12dispatch_sigEP5CUserPci+0x1c3>
 84cc10b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cc10e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84cc111:	6b c0 1d             	imul   $0x1d,%eax,%eax
 84cc114:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84cc117:	83 c0 10             	add    $0x10,%eax
 84cc11a:	8b 40 03             	mov    0x3(%eax),%eax
 84cc11d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc121:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc124:	89 04 24             	mov    %eax,(%esp)
 84cc127:	e8 10 f8 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cc12c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cc12f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84cc132:	6b c0 1d             	imul   $0x1d,%eax,%eax
 84cc135:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84cc138:	83 c0 17             	add    $0x17,%eax
 84cc13b:	0f b6 00             	movzbl (%eax),%eax
 84cc13e:	0f b6 c0             	movzbl %al,%eax
 84cc141:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc145:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc148:	89 04 24             	mov    %eax,(%esp)
 84cc14b:	e8 d0 f7 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc150:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cc153:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84cc156:	6b c0 1d             	imul   $0x1d,%eax,%eax
 84cc159:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84cc15c:	83 c0 18             	add    $0x18,%eax
 84cc15f:	0f b6 00             	movzbl (%eax),%eax
 84cc162:	0f b6 c0             	movzbl %al,%eax
 84cc165:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc169:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc16c:	89 04 24             	mov    %eax,(%esp)
 84cc16f:	e8 ac f7 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc174:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cc177:	6b c0 1d             	imul   $0x1d,%eax,%eax
 84cc17a:	83 c0 10             	add    $0x10,%eax
 84cc17d:	03 45 ec             	add    -0x14(%ebp),%eax
 84cc180:	83 c0 09             	add    $0x9,%eax
 84cc183:	89 04 24             	mov    %eax,(%esp)
 84cc186:	e8 25 22 bb ff       	call   807e3b0 <strlen@plt>
 84cc18b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cc18e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc191:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc195:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc198:	89 04 24             	mov    %eax,(%esp)
 84cc19b:	e8 9c f7 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cc1a0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cc1a3:	6b c0 1d             	imul   $0x1d,%eax,%eax
 84cc1a6:	83 c0 10             	add    $0x10,%eax
 84cc1a9:	03 45 ec             	add    -0x14(%ebp),%eax
 84cc1ac:	8d 50 09             	lea    0x9(%eax),%edx
 84cc1af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc1b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cc1b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cc1ba:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc1bd:	89 04 24             	mov    %eax,(%esp)
 84cc1c0:	e8 1f b2 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cc1c5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84cc1c9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cc1cc:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84cc1d0:	0f b6 c0             	movzbl %al,%eax
 84cc1d3:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84cc1d6:	0f 9f c0             	setg   %al
 84cc1d9:	84 c0                	test   %al,%al
 84cc1db:	0f 85 2a ff ff ff    	jne    84cc10b <_ZN26Inter_MonitorCallGuildInfo12dispatch_sigEP5CUserPci+0x105>
 84cc1e1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc1e8:	00 
 84cc1e9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc1ec:	89 04 24             	mov    %eax,(%esp)
 84cc1ef:	e8 64 f7 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cc1f4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc1f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc1fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc1fe:	89 04 24             	mov    %eax,(%esp)
 84cc201:	e8 b4 c3 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cc206:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc20b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc20e:	89 04 24             	mov    %eax,(%esp)
 84cc211:	e8 6a 1c 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc216:	eb 1b                	jmp    84cc233 <_ZN26Inter_MonitorCallGuildInfo12dispatch_sigEP5CUserPci+0x22d>
 84cc218:	89 d3                	mov    %edx,%ebx
 84cc21a:	89 c6                	mov    %eax,%esi
 84cc21c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cc21f:	89 04 24             	mov    %eax,(%esp)
 84cc222:	e8 59 1c 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc227:	89 f0                	mov    %esi,%eax
 84cc229:	89 da                	mov    %ebx,%edx
 84cc22b:	89 04 24             	mov    %eax,(%esp)
 84cc22e:	e8 1d 75 61 00       	call   8ae3750 <_Unwind_Resume>
 84cc233:	89 d8                	mov    %ebx,%eax
 84cc235:	83 c4 40             	add    $0x40,%esp
 84cc238:	5b                   	pop    %ebx
 84cc239:	5e                   	pop    %esi
 84cc23a:	5d                   	pop    %ebp
 84cc23b:	c3                   	ret

```

```c
// Inter_MonitorCallGuildInfo::dispatch_sig @ 0x84cc006

/* Inter_MonitorCallGuildInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallGuildInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084cc0ce to 084cc205 has its CatchHandler @ 084cc218 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x4d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x12));
      for (local_14 = 0; local_14 < (int)(uint)*(byte *)(local_18 + 0x12); local_14 = local_14 + 1)
      {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_24,*(int *)(local_18 + local_14 * 0x1d + 0x13));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + local_14 * 0x1d + 0x17)
                  );
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + local_14 * 0x1d + 0x18)
                  );
        local_10 = strlen((char *)(local_14 * 0x1d + local_18 + 0x19));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_14 * 0x1d + local_18 + 0x19),
                   local_10);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallGuildInfo::dispatch_sig(CUser*, char*, int)",0x26e4,
                 "Inter_MonitorCallGuildInfo::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

