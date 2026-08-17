# Inter_MonitorNoticeGuildMemberInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cc768 Inter_MonitorNoticeGuildMemberInfo::dispatch_sig  [0x084cc768-0x84cc909] ===
 84cc768:	55                   	push   %ebp
 84cc769:	89 e5                	mov    %esp,%ebp
 84cc76b:	56                   	push   %esi
 84cc76c:	53                   	push   %ebx
 84cc76d:	83 ec 20             	sub    $0x20,%esp
 84cc770:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc773:	89 04 24             	mov    %eax,(%esp)
 84cc776:	e8 11 dc c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cc77b:	83 f8 02             	cmp    $0x2,%eax
 84cc77e:	0f 9e c0             	setle  %al
 84cc781:	84 c0                	test   %al,%al
 84cc783:	74 0a                	je     84cc78f <_ZN34Inter_MonitorNoticeGuildMemberInfo12dispatch_sigEP5CUserPci+0x27>
 84cc785:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc78a:	e9 72 01 00 00       	jmp    84cc901 <_ZN34Inter_MonitorNoticeGuildMemberInfo12dispatch_sigEP5CUserPci+0x199>
 84cc78f:	8b 45 10             	mov    0x10(%ebp),%eax
 84cc792:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cc795:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc798:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cc79b:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cc7a2:	ff 
 84cc7a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc7a6:	89 04 24             	mov    %eax,(%esp)
 84cc7a9:	e8 f2 17 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cc7ae:	39 c3                	cmp    %eax,%ebx
 84cc7b0:	0f 95 c0             	setne  %al
 84cc7b3:	84 c0                	test   %al,%al
 84cc7b5:	74 0a                	je     84cc7c1 <_ZN34Inter_MonitorNoticeGuildMemberInfo12dispatch_sigEP5CUserPci+0x59>
 84cc7b7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc7bc:	e9 40 01 00 00       	jmp    84cc901 <_ZN34Inter_MonitorNoticeGuildMemberInfo12dispatch_sigEP5CUserPci+0x199>
 84cc7c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc7c4:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 84cc7c8:	0f b6 d0             	movzbl %al,%edx
 84cc7cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc7ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cc7d2:	89 04 24             	mov    %eax,(%esp)
 84cc7d5:	e8 da f8 01 00       	call   84ec0b4 <_ZN15CUserCharacInfo19setGuildMemberGradeEh>
 84cc7da:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc7dd:	89 04 24             	mov    %eax,(%esp)
 84cc7e0:	e8 67 15 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cc7e5:	c7 44 24 08 7f 00 00 	movl   $0x7f,0x8(%esp)
 84cc7ec:	00 
 84cc7ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cc7f4:	00 
 84cc7f5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc7f8:	89 04 24             	mov    %eax,(%esp)
 84cc7fb:	e8 fc f0 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cc800:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc803:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 84cc807:	0f b6 c0             	movzbl %al,%eax
 84cc80a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc80e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc811:	89 04 24             	mov    %eax,(%esp)
 84cc814:	e8 07 f1 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc819:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc820:	00 
 84cc821:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc824:	89 04 24             	mov    %eax,(%esp)
 84cc827:	e8 2c f1 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cc82c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc82f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc833:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc836:	89 04 24             	mov    %eax,(%esp)
 84cc839:	e8 7c bd 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cc83e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc841:	89 04 24             	mov    %eax,(%esp)
 84cc844:	e8 21 fc 19 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 84cc849:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc84c:	89 04 24             	mov    %eax,(%esp)
 84cc84f:	e8 92 f0 bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84cc854:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84cc85b:	00 
 84cc85c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cc863:	00 
 84cc864:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc867:	89 04 24             	mov    %eax,(%esp)
 84cc86a:	e8 8d f0 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cc86f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc876:	00 
 84cc877:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc87a:	89 04 24             	mov    %eax,(%esp)
 84cc87d:	e8 9e f0 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc882:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc889:	00 
 84cc88a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc88d:	89 04 24             	mov    %eax,(%esp)
 84cc890:	e8 0f d6 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84cc895:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc898:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84cc89f:	00 
 84cc8a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc8a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc8a7:	89 04 24             	mov    %eax,(%esp)
 84cc8aa:	e8 9f db 18 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 84cc8af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc8b6:	00 
 84cc8b7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc8ba:	89 04 24             	mov    %eax,(%esp)
 84cc8bd:	e8 96 f0 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cc8c2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc8c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc8c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc8cc:	89 04 24             	mov    %eax,(%esp)
 84cc8cf:	e8 e6 bc 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cc8d4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc8d9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc8dc:	89 04 24             	mov    %eax,(%esp)
 84cc8df:	e8 9c 15 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc8e4:	eb 1b                	jmp    84cc901 <_ZN34Inter_MonitorNoticeGuildMemberInfo12dispatch_sigEP5CUserPci+0x199>
 84cc8e6:	89 d3                	mov    %edx,%ebx
 84cc8e8:	89 c6                	mov    %eax,%esi
 84cc8ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc8ed:	89 04 24             	mov    %eax,(%esp)
 84cc8f0:	e8 8b 15 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc8f5:	89 f0                	mov    %esi,%eax
 84cc8f7:	89 da                	mov    %ebx,%edx
 84cc8f9:	89 04 24             	mov    %eax,(%esp)
 84cc8fc:	e8 4f 6e 61 00       	call   8ae3750 <_Unwind_Resume>
 84cc901:	89 d8                	mov    %ebx,%eax
 84cc903:	83 c4 20             	add    $0x20,%esp
 84cc906:	5b                   	pop    %ebx
 84cc907:	5e                   	pop    %esi
 84cc908:	5d                   	pop    %ebp
 84cc909:	c3                   	ret

```

```c
// Inter_MonitorNoticeGuildMemberInfo::dispatch_sig @ 0x84cc768

/* Inter_MonitorNoticeGuildMemberInfo::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeGuildMemberInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = param_3;
    iVar1 = *(int *)(param_3 + 0xe);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      CUserCharacInfo::setGuildMemberGrade((CUserCharacInfo *)param_2,*(uchar *)(local_10 + 0x27));
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cc7fb to 084cc8d3 has its CatchHandler @ 084cc8e6 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x7f);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x27));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      CUser::send_skill_info((CUser *)param_2);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
      CUser::make_basic_info((CUser *)param_2,(char *)local_1c,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}

```

