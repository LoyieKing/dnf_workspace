# Inter_MonitorSetSubGuildMasterReply

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cc35c Inter_MonitorSetSubGuildMasterReply::dispatch_sig  [0x084cc35c-0x84cc55d] ===
 84cc35c:	55                   	push   %ebp
 84cc35d:	89 e5                	mov    %esp,%ebp
 84cc35f:	57                   	push   %edi
 84cc360:	56                   	push   %esi
 84cc361:	53                   	push   %ebx
 84cc362:	83 ec 5c             	sub    $0x5c,%esp
 84cc365:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc368:	89 04 24             	mov    %eax,(%esp)
 84cc36b:	e8 1c e0 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cc370:	85 c0                	test   %eax,%eax
 84cc372:	0f 94 c0             	sete   %al
 84cc375:	84 c0                	test   %al,%al
 84cc377:	74 0a                	je     84cc383 <_ZN35Inter_MonitorSetSubGuildMasterReply12dispatch_sigEP5CUserPci+0x27>
 84cc379:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc37e:	e9 d0 01 00 00       	jmp    84cc553 <_ZN35Inter_MonitorSetSubGuildMasterReply12dispatch_sigEP5CUserPci+0x1f7>
 84cc383:	8b 45 10             	mov    0x10(%ebp),%eax
 84cc386:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84cc389:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc38c:	8b 58 12             	mov    0x12(%eax),%ebx
 84cc38f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cc396:	ff 
 84cc397:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc39a:	89 04 24             	mov    %eax,(%esp)
 84cc39d:	e8 fe 1b 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cc3a2:	39 c3                	cmp    %eax,%ebx
 84cc3a4:	0f 95 c0             	setne  %al
 84cc3a7:	84 c0                	test   %al,%al
 84cc3a9:	74 0a                	je     84cc3b5 <_ZN35Inter_MonitorSetSubGuildMasterReply12dispatch_sigEP5CUserPci+0x59>
 84cc3ab:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc3b0:	e9 9e 01 00 00       	jmp    84cc553 <_ZN35Inter_MonitorSetSubGuildMasterReply12dispatch_sigEP5CUserPci+0x1f7>
 84cc3b5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc3b8:	89 04 24             	mov    %eax,(%esp)
 84cc3bb:	e8 8c 19 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cc3c0:	c7 44 24 08 81 00 00 	movl   $0x81,0x8(%esp)
 84cc3c7:	00 
 84cc3c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc3cf:	00 
 84cc3d0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc3d3:	89 04 24             	mov    %eax,(%esp)
 84cc3d6:	e8 21 f5 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cc3db:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc3de:	8b 40 0a             	mov    0xa(%eax),%eax
 84cc3e1:	85 c0                	test   %eax,%eax
 84cc3e3:	0f 85 f0 00 00 00    	jne    84cc4d9 <_ZN35Inter_MonitorSetSubGuildMasterReply12dispatch_sigEP5CUserPci+0x17d>
 84cc3e9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc3f0:	00 
 84cc3f1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc3f4:	89 04 24             	mov    %eax,(%esp)
 84cc3f7:	e8 24 f5 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc3fc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc3ff:	8b 40 0a             	mov    0xa(%eax),%eax
 84cc402:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc406:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc409:	89 04 24             	mov    %eax,(%esp)
 84cc40c:	e8 0f f5 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc411:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc414:	83 c0 17             	add    $0x17,%eax
 84cc417:	89 04 24             	mov    %eax,(%esp)
 84cc41a:	e8 91 1f bb ff       	call   807e3b0 <strlen@plt>
 84cc41f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84cc422:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cc425:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc429:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc42c:	89 04 24             	mov    %eax,(%esp)
 84cc42f:	e8 08 f5 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cc434:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc437:	8d 50 17             	lea    0x17(%eax),%edx
 84cc43a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cc43d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cc441:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cc445:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc448:	89 04 24             	mov    %eax,(%esp)
 84cc44b:	e8 94 af ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cc450:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc453:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84cc457:	0f b6 c0             	movzbl %al,%eax
 84cc45a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc45e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc461:	89 04 24             	mov    %eax,(%esp)
 84cc464:	e8 b7 f4 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc469:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc46c:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84cc470:	0f b6 c0             	movzbl %al,%eax
 84cc473:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84cc476:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc479:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 84cc47d:	0f b6 c0             	movzbl %al,%eax
 84cc480:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84cc483:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc486:	8b 78 36             	mov    0x36(%eax),%edi
 84cc489:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc48c:	8b 70 12             	mov    0x12(%eax),%esi
 84cc48f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc492:	89 04 24             	mov    %eax,(%esp)
 84cc495:	e8 ca 3c d6 ff       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 84cc49a:	89 c3                	mov    %eax,%ebx
 84cc49c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc49f:	89 04 24             	mov    %eax,(%esp)
 84cc4a2:	e8 c5 2f d6 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84cc4a7:	89 c2                	mov    %eax,%edx
 84cc4a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc4ac:	05 00 97 07 00       	add    $0x79700,%eax
 84cc4b1:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 84cc4b4:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84cc4b8:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 84cc4bb:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84cc4bf:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84cc4c3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84cc4c7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84cc4cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cc4cf:	89 04 24             	mov    %eax,(%esp)
 84cc4d2:	e8 77 97 1b 00       	call   8685c4e <_ZN15cUserHistoryLog16GuildChangeGradeEjPKcjjhh>
 84cc4d7:	eb 28                	jmp    84cc501 <_ZN35Inter_MonitorSetSubGuildMasterReply12dispatch_sigEP5CUserPci+0x1a5>
 84cc4d9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cc4e0:	00 
 84cc4e1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc4e4:	89 04 24             	mov    %eax,(%esp)
 84cc4e7:	e8 34 f4 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc4ec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cc4ef:	8b 40 0a             	mov    0xa(%eax),%eax
 84cc4f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc4f6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc4f9:	89 04 24             	mov    %eax,(%esp)
 84cc4fc:	e8 1f f4 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc501:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc508:	00 
 84cc509:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc50c:	89 04 24             	mov    %eax,(%esp)
 84cc50f:	e8 44 f4 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cc514:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc517:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc51b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc51e:	89 04 24             	mov    %eax,(%esp)
 84cc521:	e8 94 c0 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cc526:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc52b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc52e:	89 04 24             	mov    %eax,(%esp)
 84cc531:	e8 4a 19 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc536:	eb 1b                	jmp    84cc553 <_ZN35Inter_MonitorSetSubGuildMasterReply12dispatch_sigEP5CUserPci+0x1f7>
 84cc538:	89 d3                	mov    %edx,%ebx
 84cc53a:	89 c6                	mov    %eax,%esi
 84cc53c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cc53f:	89 04 24             	mov    %eax,(%esp)
 84cc542:	e8 39 19 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc547:	89 f0                	mov    %esi,%eax
 84cc549:	89 da                	mov    %ebx,%edx
 84cc54b:	89 04 24             	mov    %eax,(%esp)
 84cc54e:	e8 fd 71 61 00       	call   8ae3750 <_Unwind_Resume>
 84cc553:	89 d8                	mov    %ebx,%eax
 84cc555:	83 c4 5c             	add    $0x5c,%esp
 84cc558:	5b                   	pop    %ebx
 84cc559:	5e                   	pop    %esi
 84cc55a:	5f                   	pop    %edi
 84cc55b:	5d                   	pop    %ebp
 84cc55c:	c3                   	ret
 84cc55d:	90                   	nop

```

```c
// Inter_MonitorSetSubGuildMasterReply::dispatch_sig @ 0x84cc35c

/* Inter_MonitorSetSubGuildMasterReply::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorSetSubGuildMasterReply::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uchar uVar1;
  uchar uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  PacketGuard local_30 [12];
  int local_24;
  size_t local_20;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (iVar5 != 0) {
    local_24 = param_3;
    iVar5 = *(int *)(param_3 + 0x12);
    iVar6 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar5 == iVar6) {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084cc3d6 to 084cc525 has its CatchHandler @ 084cc538 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x81);
      if (*(int *)(local_24 + 10) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*(int *)(local_24 + 10));
        local_20 = strlen((char *)(local_24 + 0x17));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_20);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_30,(char *)(local_24 + 0x17),local_20);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_24 + 0x16));
        uVar1 = *(uchar *)(local_24 + 0x16);
        uVar2 = *(uchar *)(local_24 + 0x35);
        uVar3 = *(uint *)(local_24 + 0x36);
        uVar4 = *(uint *)(local_24 + 0x12);
        pcVar7 = (char *)CUser::GetGuildDBInfo((CUser *)param_2);
        uVar8 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
        cUserHistoryLog::GuildChangeGrade
                  ((cUserHistoryLog *)(param_2 + 0x79700),uVar8,pcVar7,uVar4,uVar3,uVar2,uVar1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*(int *)(local_24 + 10));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return 0;
}

```

