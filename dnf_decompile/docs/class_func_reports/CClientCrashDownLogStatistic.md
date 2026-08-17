# CClientCrashDownLogStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## CarryClientCrashDown

```asm
// === 0860d072 CClientCrashDownLogStatistic::CarryClientCrashDown  [0x0860d072-0x860d1fd] ===
 860d072:	55                   	push   %ebp
 860d073:	89 e5                	mov    %esp,%ebp
 860d075:	56                   	push   %esi
 860d076:	53                   	push   %ebx
 860d077:	81 ec 90 00 00 00    	sub    $0x90,%esp
 860d07d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 860d084:	e8 15 ec ab ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 860d089:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860d08c:	8b 45 08             	mov    0x8(%ebp),%eax
 860d08f:	89 04 24             	mov    %eax,(%esp)
 860d092:	e8 29 d3 ce ff       	call   82fa3c0 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5emptyEv>
 860d097:	83 f0 01             	xor    $0x1,%eax
 860d09a:	84 c0                	test   %al,%al
 860d09c:	0f 84 38 01 00 00    	je     860d1da <_ZN28CClientCrashDownLogStatistic20CarryClientCrashDownEv+0x168>
 860d0a2:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 860d0a5:	89 04 24             	mov    %eax,(%esp)
 860d0a8:	e8 d1 2f 00 00       	call   861007e <_ZN29Packet_Reason_Crash_Down_InfoC1Ev>
 860d0ad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860d0b0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 860d0b3:	e8 c9 f0 ab ff       	call   80cc181 <_Z14G_CEnvironmentv>
 860d0b8:	89 04 24             	mov    %eax,(%esp)
 860d0bb:	e8 0a da b3 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 860d0c0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 860d0c3:	8b 55 08             	mov    0x8(%ebp),%edx
 860d0c6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 860d0c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d0cd:	89 04 24             	mov    %eax,(%esp)
 860d0d0:	e8 cb 4e b4 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 860d0d5:	83 ec 04             	sub    $0x4,%esp
 860d0d8:	eb 58                	jmp    860d132 <_ZN28CClientCrashDownLogStatistic20CarryClientCrashDownEv+0xc0>
 860d0da:	8d 45 b0             	lea    -0x50(%ebp),%eax
 860d0dd:	89 04 24             	mov    %eax,(%esp)
 860d0e0:	e8 5b 02 ac ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 860d0e5:	8b 00                	mov    (%eax),%eax
 860d0e7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 860d0ea:	8d 45 b0             	lea    -0x50(%ebp),%eax
 860d0ed:	89 04 24             	mov    %eax,(%esp)
 860d0f0:	e8 4b 02 ac ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 860d0f5:	8b 40 04             	mov    0x4(%eax),%eax
 860d0f8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 860d0fb:	8d 5d d2             	lea    -0x2e(%ebp),%ebx
 860d0fe:	a1 30 be 40 09       	mov    0x940be30,%eax
 860d103:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860d10a:	00 
 860d10b:	89 04 24             	mov    %eax,(%esp)
 860d10e:	e8 e5 4b b0 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 860d113:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 860d11a:	00 
 860d11b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860d11f:	89 04 24             	mov    %eax,(%esp)
 860d122:	e8 1d 4f e6 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 860d127:	8d 45 b0             	lea    -0x50(%ebp),%eax
 860d12a:	89 04 24             	mov    %eax,(%esp)
 860d12d:	e8 14 d6 ac ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 860d132:	8b 55 08             	mov    0x8(%ebp),%edx
 860d135:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860d138:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d13c:	89 04 24             	mov    %eax,(%esp)
 860d13f:	e8 d6 01 ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860d144:	83 ec 04             	sub    $0x4,%esp
 860d147:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860d14a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d14e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 860d151:	89 04 24             	mov    %eax,(%esp)
 860d154:	e8 6f d2 ac ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 860d159:	84 c0                	test   %al,%al
 860d15b:	0f 85 79 ff ff ff    	jne    860d0da <_ZN28CClientCrashDownLogStatistic20CarryClientCrashDownEv+0x68>
 860d161:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860d164:	89 04 24             	mov    %eax,(%esp)
 860d167:	e8 da 36 00 00       	call   8610846 <_ZN28CClientCrashDownLogStatistic22stClientCrashDownLog_tC1Ev>
 860d16c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860d16f:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 860d172:	8b 45 08             	mov    0x8(%ebp),%eax
 860d175:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d179:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860d17c:	83 c0 04             	add    $0x4,%eax
 860d17f:	89 04 24             	mov    %eax,(%esp)
 860d182:	e8 39 55 b4 ff       	call   81526c0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEaSERKS6_>
 860d187:	8b 45 08             	mov    0x8(%ebp),%eax
 860d18a:	8d 50 18             	lea    0x18(%eax),%edx
 860d18d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860d190:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d194:	89 14 24             	mov    %edx,(%esp)
 860d197:	e8 7e 3f 00 00       	call   861111a <_ZNSt6vectorIN28CClientCrashDownLogStatistic22stClientCrashDownLog_tESaIS1_EE9push_backERKS1_>
 860d19c:	8b 45 08             	mov    0x8(%ebp),%eax
 860d19f:	89 04 24             	mov    %eax,(%esp)
 860d1a2:	e8 37 9b ab ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 860d1a7:	8b 45 08             	mov    0x8(%ebp),%eax
 860d1aa:	89 04 24             	mov    %eax,(%esp)
 860d1ad:	e8 22 31 00 00       	call   86102d4 <_ZN28CClientCrashDownLogStatistic4InitEv>
 860d1b2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860d1b5:	89 04 24             	mov    %eax,(%esp)
 860d1b8:	e8 9f 36 00 00       	call   861085c <_ZN28CClientCrashDownLogStatistic22stClientCrashDownLog_tD1Ev>
 860d1bd:	eb 1b                	jmp    860d1da <_ZN28CClientCrashDownLogStatistic20CarryClientCrashDownEv+0x168>
 860d1bf:	89 d3                	mov    %edx,%ebx
 860d1c1:	89 c6                	mov    %eax,%esi
 860d1c3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860d1c6:	89 04 24             	mov    %eax,(%esp)
 860d1c9:	e8 8e 36 00 00       	call   861085c <_ZN28CClientCrashDownLogStatistic22stClientCrashDownLog_tD1Ev>
 860d1ce:	89 f0                	mov    %esi,%eax
 860d1d0:	89 da                	mov    %ebx,%edx
 860d1d2:	89 04 24             	mov    %eax,(%esp)
 860d1d5:	e8 76 65 4d 00       	call   8ae3750 <_Unwind_Resume>
 860d1da:	8d 45 84             	lea    -0x7c(%ebp),%eax
 860d1dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d1e1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860d1e4:	89 04 24             	mov    %eax,(%esp)
 860d1e7:	e8 74 11 a7 ff       	call   807e360 <localtime_r@plt>
 860d1ec:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860d1ef:	b8 01 00 00 00       	mov    $0x1,%eax
 860d1f4:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860d1f7:	83 c4 00             	add    $0x0,%esp
 860d1fa:	5b                   	pop    %ebx
 860d1fb:	5e                   	pop    %esi
 860d1fc:	5d                   	pop    %ebp
 860d1fd:	c3                   	ret

```

```c
// CClientCrashDownLogStatistic::CarryClientCrashDown @ 0x860d072

/* CClientCrashDownLogStatistic::CarryClientCrashDown() */

undefined4 __thiscall
CClientCrashDownLogStatistic::CarryClientCrashDown(CClientCrashDownLogStatistic *this)

{
  char cVar1;
  CEnvironment *this_00;
  undefined4 *puVar2;
  int iVar3;
  CStatisticServerProxy *this_01;
  tm local_80;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_54 [4];
  time_t local_50;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> amStack_4c [26];
  Packet_Reason_Crash_Down_Info local_32 [10];
  time_t local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  time_t local_18;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [8];
  
  local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
  if (cVar1 != '\x01') {
    Packet_Reason_Crash_Down_Info::Packet_Reason_Crash_Down_Info(local_32);
    local_28 = local_18;
    this_00 = (CEnvironment *)G_CEnvironment();
    local_24 = CEnvironment::get_channel_no(this_00);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_54);
    while( true ) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_54,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      puVar2 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_54);
      local_20 = *puVar2;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_54);
      local_1c = *(undefined4 *)(iVar3 + 4);
      this_01 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_01,(char *)local_32,0x1a);
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_54);
    }
    stClientCrashDownLog_t::stClientCrashDownLog_t((stClientCrashDownLog_t *)&local_50);
    local_50 = local_18;
                    /* try { // try from 0860d182 to 0860d1a6 has its CatchHandler @ 0860d1bf */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator=
              (amStack_4c,(map *)this);
    std::
    vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
    ::push_back((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                 *)(this + 0x18),(stClientCrashDownLog_t *)&local_50);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
    Init();
    stClientCrashDownLog_t::~stClientCrashDownLog_t((stClientCrashDownLog_t *)&local_50);
  }
  localtime_r(&local_18,&local_80);
  return 1;
}

```

---

## MakeClientCrashDownQuery

```asm
// === 0860d1fe CClientCrashDownLogStatistic::MakeClientCrashDownQuery  [0x0860d1fe-0x860d443] ===
 860d1fe:	55                   	push   %ebp
 860d1ff:	89 e5                	mov    %esp,%ebp
 860d201:	57                   	push   %edi
 860d202:	56                   	push   %esi
 860d203:	53                   	push   %ebx
 860d204:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 860d20a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d20d:	89 04 24             	mov    %eax,(%esp)
 860d210:	e8 bb 93 0f 00       	call   87065d0 <_ZNSsC1Ev>
 860d215:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 860d21c:	e9 d4 01 00 00       	jmp    860d3f5 <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x1f7>
 860d221:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d224:	89 04 24             	mov    %eax,(%esp)
 860d227:	e8 a4 bb 0f 00       	call   8708dd0 <_ZNSs5clearEv>
 860d22c:	8b 45 08             	mov    0x8(%ebp),%eax
 860d22f:	8d 50 18             	lea    0x18(%eax),%edx
 860d232:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860d235:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d239:	89 14 24             	mov    %edx,(%esp)
 860d23c:	e8 6f 3f 00 00       	call   86111b0 <_ZNSt6vectorIN28CClientCrashDownLogStatistic22stClientCrashDownLog_tESaIS1_EEixEj>
 860d241:	8d 50 04             	lea    0x4(%eax),%edx
 860d244:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860d247:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d24b:	89 04 24             	mov    %eax,(%esp)
 860d24e:	e8 4d 4d b4 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 860d253:	83 ec 04             	sub    $0x4,%esp
 860d256:	8b 45 08             	mov    0x8(%ebp),%eax
 860d259:	8d 50 18             	lea    0x18(%eax),%edx
 860d25c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860d25f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d263:	89 14 24             	mov    %edx,(%esp)
 860d266:	e8 45 3f 00 00       	call   86111b0 <_ZNSt6vectorIN28CClientCrashDownLogStatistic22stClientCrashDownLog_tESaIS1_EEixEj>
 860d26b:	8d 50 04             	lea    0x4(%eax),%edx
 860d26e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860d271:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d275:	89 04 24             	mov    %eax,(%esp)
 860d278:	e8 9d 00 ac ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 860d27d:	83 ec 04             	sub    $0x4,%esp
 860d280:	e9 2b 01 00 00       	jmp    860d3b0 <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x1b2>
 860d285:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d288:	89 04 24             	mov    %eax,(%esp)
 860d28b:	e8 d0 93 0f 00       	call   8706660 <_ZNKSs4sizeEv>
 860d290:	ba 00 60 00 00       	mov    $0x6000,%edx
 860d295:	89 d1                	mov    %edx,%ecx
 860d297:	29 c1                	sub    %eax,%ecx
 860d299:	89 c8                	mov    %ecx,%eax
 860d29b:	3b 45 10             	cmp    0x10(%ebp),%eax
 860d29e:	0f 9d c0             	setge  %al
 860d2a1:	84 c0                	test   %al,%al
 860d2a3:	0f 84 23 01 00 00    	je     860d3cc <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x1ce>
 860d2a9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d2ac:	89 04 24             	mov    %eax,(%esp)
 860d2af:	e8 ec 93 0f 00       	call   87066a0 <_ZNKSs5emptyEv>
 860d2b4:	83 f0 01             	xor    $0x1,%eax
 860d2b7:	84 c0                	test   %al,%al
 860d2b9:	74 13                	je     860d2ce <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0xd0>
 860d2bb:	c7 44 24 04 72 02 ce 	movl   $0x8ce0272,0x4(%esp)
 860d2c2:	08 
 860d2c3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d2c6:	89 04 24             	mov    %eax,(%esp)
 860d2c9:	e8 62 ad 0f 00       	call   8708030 <_ZNSspLEPKc>
 860d2ce:	8d 95 d9 fe ff ff    	lea    -0x127(%ebp),%edx
 860d2d4:	bb ff 00 00 00       	mov    $0xff,%ebx
 860d2d9:	b8 00 00 00 00       	mov    $0x0,%eax
 860d2de:	89 d1                	mov    %edx,%ecx
 860d2e0:	83 e1 01             	and    $0x1,%ecx
 860d2e3:	85 c9                	test   %ecx,%ecx
 860d2e5:	74 08                	je     860d2ef <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0xf1>
 860d2e7:	88 02                	mov    %al,(%edx)
 860d2e9:	83 c2 01             	add    $0x1,%edx
 860d2ec:	83 eb 01             	sub    $0x1,%ebx
 860d2ef:	89 d1                	mov    %edx,%ecx
 860d2f1:	83 e1 02             	and    $0x2,%ecx
 860d2f4:	85 c9                	test   %ecx,%ecx
 860d2f6:	74 09                	je     860d301 <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x103>
 860d2f8:	66 89 02             	mov    %ax,(%edx)
 860d2fb:	83 c2 02             	add    $0x2,%edx
 860d2fe:	83 eb 02             	sub    $0x2,%ebx
 860d301:	89 d9                	mov    %ebx,%ecx
 860d303:	c1 e9 02             	shr    $0x2,%ecx
 860d306:	89 d7                	mov    %edx,%edi
 860d308:	f3 ab                	rep stos %eax,%es:(%edi)
 860d30a:	89 fa                	mov    %edi,%edx
 860d30c:	89 d9                	mov    %ebx,%ecx
 860d30e:	83 e1 02             	and    $0x2,%ecx
 860d311:	85 c9                	test   %ecx,%ecx
 860d313:	74 06                	je     860d31b <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x11d>
 860d315:	66 89 02             	mov    %ax,(%edx)
 860d318:	83 c2 02             	add    $0x2,%edx
 860d31b:	89 d9                	mov    %ebx,%ecx
 860d31d:	83 e1 01             	and    $0x1,%ecx
 860d320:	85 c9                	test   %ecx,%ecx
 860d322:	74 05                	je     860d329 <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x12b>
 860d324:	88 02                	mov    %al,(%edx)
 860d326:	83 c2 01             	add    $0x1,%edx
 860d329:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860d32c:	89 04 24             	mov    %eax,(%esp)
 860d32f:	e8 0c 00 ac ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 860d334:	8b 78 04             	mov    0x4(%eax),%edi
 860d337:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860d33a:	89 04 24             	mov    %eax,(%esp)
 860d33d:	e8 fe ff ab ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 860d342:	8b 30                	mov    (%eax),%esi
 860d344:	e8 38 ee ab ff       	call   80cc181 <_Z14G_CEnvironmentv>
 860d349:	89 04 24             	mov    %eax,(%esp)
 860d34c:	e8 79 d7 b3 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 860d351:	89 c3                	mov    %eax,%ebx
 860d353:	8b 45 08             	mov    0x8(%ebp),%eax
 860d356:	8d 50 18             	lea    0x18(%eax),%edx
 860d359:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860d35c:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d360:	89 14 24             	mov    %edx,(%esp)
 860d363:	e8 48 3e 00 00       	call   86111b0 <_ZNSt6vectorIN28CClientCrashDownLogStatistic22stClientCrashDownLog_tESaIS1_EEixEj>
 860d368:	8b 00                	mov    (%eax),%eax
 860d36a:	89 7c 24 14          	mov    %edi,0x14(%esp)
 860d36e:	89 74 24 10          	mov    %esi,0x10(%esp)
 860d372:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 860d376:	89 44 24 08          	mov    %eax,0x8(%esp)
 860d37a:	c7 44 24 04 74 02 ce 	movl   $0x8ce0274,0x4(%esp)
 860d381:	08 
 860d382:	8d 85 d9 fe ff ff    	lea    -0x127(%ebp),%eax
 860d388:	89 04 24             	mov    %eax,(%esp)
 860d38b:	e8 b0 10 a7 ff       	call   807e440 <sprintf@plt>
 860d390:	8d 85 d9 fe ff ff    	lea    -0x127(%ebp),%eax
 860d396:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d39a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d39d:	89 04 24             	mov    %eax,(%esp)
 860d3a0:	e8 8b ac 0f 00       	call   8708030 <_ZNSspLEPKc>
 860d3a5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860d3a8:	89 04 24             	mov    %eax,(%esp)
 860d3ab:	e8 96 d3 ac ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 860d3b0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860d3b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d3b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860d3ba:	89 04 24             	mov    %eax,(%esp)
 860d3bd:	e8 06 d0 ac ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 860d3c2:	84 c0                	test   %al,%al
 860d3c4:	0f 85 bb fe ff ff    	jne    860d285 <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x87>
 860d3ca:	eb 01                	jmp    860d3cd <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x1cf>
 860d3cc:	90                   	nop
 860d3cd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d3d0:	89 04 24             	mov    %eax,(%esp)
 860d3d3:	e8 c8 92 0f 00       	call   87066a0 <_ZNKSs5emptyEv>
 860d3d8:	83 f0 01             	xor    $0x1,%eax
 860d3db:	84 c0                	test   %al,%al
 860d3dd:	74 12                	je     860d3f1 <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x1f3>
 860d3df:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d3e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d3e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 860d3e9:	89 04 24             	mov    %eax,(%esp)
 860d3ec:	e8 e1 3d 00 00       	call   86111d2 <_ZNSt6vectorISsSaISsEE9push_backERKSs>
 860d3f1:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 860d3f5:	8b 45 08             	mov    0x8(%ebp),%eax
 860d3f8:	83 c0 18             	add    $0x18,%eax
 860d3fb:	89 04 24             	mov    %eax,(%esp)
 860d3fe:	e8 8b 3d 00 00       	call   861118e <_ZNKSt6vectorIN28CClientCrashDownLogStatistic22stClientCrashDownLog_tESaIS1_EE4sizeEv>
 860d403:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 860d406:	0f 97 c0             	seta   %al
 860d409:	84 c0                	test   %al,%al
 860d40b:	0f 85 10 fe ff ff    	jne    860d221 <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x23>
 860d411:	eb 1b                	jmp    860d42e <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi+0x230>
 860d413:	89 d3                	mov    %edx,%ebx
 860d415:	89 c6                	mov    %eax,%esi
 860d417:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d41a:	89 04 24             	mov    %eax,(%esp)
 860d41d:	e8 be a7 0f 00       	call   8707be0 <_ZNSsD1Ev>
 860d422:	89 f0                	mov    %esi,%eax
 860d424:	89 da                	mov    %ebx,%edx
 860d426:	89 04 24             	mov    %eax,(%esp)
 860d429:	e8 22 63 4d 00       	call   8ae3750 <_Unwind_Resume>
 860d42e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d431:	89 04 24             	mov    %eax,(%esp)
 860d434:	e8 a7 a7 0f 00       	call   8707be0 <_ZNSsD1Ev>
 860d439:	8d 65 f4             	lea    -0xc(%ebp),%esp
 860d43c:	83 c4 00             	add    $0x0,%esp
 860d43f:	5b                   	pop    %ebx
 860d440:	5e                   	pop    %esi
 860d441:	5f                   	pop    %edi
 860d442:	5d                   	pop    %ebp
 860d443:	c3                   	ret

```

```c
// CClientCrashDownLogStatistic::MakeClientCrashDownQuery @ 0x860d1fe

/* CClientCrashDownLogStatistic::MakeClientCrashDownQuery(std::vector<std::string,
   std::allocator<std::string > >&, int) */

void __thiscall
CClientCrashDownLogStatistic::MakeClientCrashDownQuery
          (CClientCrashDownLogStatistic *this,vector *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  CEnvironment *this_00;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  char local_12b;
  char local_12a [254];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  string local_24;
  uint local_20;
  
  bVar11 = 0;
  std::string::string((string *)&local_24);
  local_20 = 0;
  while (uVar7 = std::
                 vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                 ::size((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                         *)(this + 0x18)), local_20 < uVar7) {
                    /* try { // try from 0860d227 to 0860d3f0 has its CatchHandler @ 0860d413 */
    std::string::clear((string *)&local_24);
    std::
    vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
    ::operator[]((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                  *)(this + 0x18),local_20);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_28);
    std::
    vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
    ::operator[]((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                  *)(this + 0x18),local_20);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_2c);
    while ((cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_28,
                               (_Rb_tree_iterator *)local_2c), cVar3 != '\0' &&
           (iVar4 = std::string::size((string *)&local_24), param_2 <= 0x6000 - iVar4))) {
      cVar3 = std::string::empty((string *)&local_24);
      if (cVar3 != '\x01') {
        std::string::operator+=((string *)&local_24,",");
      }
      pcVar9 = &local_12b;
      uVar7 = 0xff;
      bVar10 = ((uint)pcVar9 & 1) != 0;
      if (bVar10) {
        local_12b = '\0';
        pcVar9 = local_12a;
        uVar7 = 0xfe;
      }
      if (((uint)pcVar9 & 2) != 0) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 2;
        uVar7 = uVar7 - 2;
      }
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
      }
      if ((uVar7 & 2) != 0) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 2;
      }
      if (!bVar10) {
        *pcVar9 = '\0';
      }
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_28);
      uVar1 = *(undefined4 *)(iVar4 + 4);
      puVar5 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_28);
      uVar2 = *puVar5;
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar6 = CEnvironment::get_channel_no(this_00);
      puVar5 = (undefined4 *)
               std::
               vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
               ::operator[]((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                             *)(this + 0x18),local_20);
      sprintf(&local_12b,"(from_unixtime(%d),%d,%d,%d)",*puVar5,uVar6,uVar2,uVar1);
      std::string::operator+=((string *)&local_24,&local_12b);
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_28);
    }
    cVar3 = std::string::empty((string *)&local_24);
    if (cVar3 != '\x01') {
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)param_1,&local_24);
    }
    local_20 = local_20 + 1;
  }
  std::string::~string((string *)&local_24);
  return;
}

```

---

## RegisterClientCrashDown

```asm
// === 0860d038 CClientCrashDownLogStatistic::RegisterClientCrashDown  [0x0860d038-0x860d071] ===
 860d038:	55                   	push   %ebp
 860d039:	89 e5                	mov    %esp,%ebp
 860d03b:	83 ec 28             	sub    $0x28,%esp
 860d03e:	8b 45 08             	mov    0x8(%ebp),%eax
 860d041:	8d 55 0c             	lea    0xc(%ebp),%edx
 860d044:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d048:	89 04 24             	mov    %eax,(%esp)
 860d04b:	e8 5c 64 b8 ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 860d050:	8b 00                	mov    (%eax),%eax
 860d052:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860d055:	8b 45 08             	mov    0x8(%ebp),%eax
 860d058:	8d 55 0c             	lea    0xc(%ebp),%edx
 860d05b:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d05f:	89 04 24             	mov    %eax,(%esp)
 860d062:	e8 45 64 b8 ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 860d067:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860d06b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860d06e:	89 10                	mov    %edx,(%eax)
 860d070:	c9                   	leave
 860d071:	c3                   	ret

```

```c
// CClientCrashDownLogStatistic::RegisterClientCrashDown @ 0x860d038

/* CClientCrashDownLogStatistic::RegisterClientCrashDown(int) */

void CClientCrashDownLogStatistic::RegisterClientCrashDown(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )param_1,(int *)&stack0x00000008);
  iVar1 = *piVar2;
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )param_1,(int *)&stack0x00000008);
  *piVar2 = iVar1 + 1;
  return;
}

```

---

## UpdateClientCrashDown

```asm
// === 0860d444 CClientCrashDownLogStatistic::UpdateClientCrashDown  [0x0860d444-0x860d5ee] ===
 860d444:	55                   	push   %ebp
 860d445:	89 e5                	mov    %esp,%ebp
 860d447:	57                   	push   %edi
 860d448:	56                   	push   %esi
 860d449:	53                   	push   %ebx
 860d44a:	83 ec 7c             	sub    $0x7c,%esp
 860d44d:	8b 45 08             	mov    0x8(%ebp),%eax
 860d450:	83 c0 18             	add    $0x18,%eax
 860d453:	89 04 24             	mov    %eax,(%esp)
 860d456:	e8 eb 3d 00 00       	call   8611246 <_ZNKSt6vectorIN28CClientCrashDownLogStatistic22stClientCrashDownLog_tESaIS1_EE5emptyEv>
 860d45b:	83 f0 01             	xor    $0x1,%eax
 860d45e:	84 c0                	test   %al,%al
 860d460:	0f 84 7c 01 00 00    	je     860d5e2 <_ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv+0x19e>
 860d466:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 860d46b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860d472:	00 
 860d473:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860d47a:	00 
 860d47b:	89 04 24             	mov    %eax,(%esp)
 860d47e:	e8 bb 7d de ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 860d483:	89 45 e0             	mov    %eax,-0x20(%ebp)
 860d486:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860d489:	89 04 24             	mov    %eax,(%esp)
 860d48c:	e8 cf fa ab ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 860d491:	8d 45 8f             	lea    -0x71(%ebp),%eax
 860d494:	ba 94 02 ce 08       	mov    $0x8ce0294,%edx
 860d499:	bb 45 00 00 00       	mov    $0x45,%ebx
 860d49e:	89 c1                	mov    %eax,%ecx
 860d4a0:	83 e1 01             	and    $0x1,%ecx
 860d4a3:	85 c9                	test   %ecx,%ecx
 860d4a5:	74 0e                	je     860d4b5 <_ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv+0x71>
 860d4a7:	0f b6 0a             	movzbl (%edx),%ecx
 860d4aa:	88 08                	mov    %cl,(%eax)
 860d4ac:	83 c0 01             	add    $0x1,%eax
 860d4af:	83 c2 01             	add    $0x1,%edx
 860d4b2:	83 eb 01             	sub    $0x1,%ebx
 860d4b5:	89 c1                	mov    %eax,%ecx
 860d4b7:	83 e1 02             	and    $0x2,%ecx
 860d4ba:	85 c9                	test   %ecx,%ecx
 860d4bc:	74 0f                	je     860d4cd <_ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv+0x89>
 860d4be:	0f b7 0a             	movzwl (%edx),%ecx
 860d4c1:	66 89 08             	mov    %cx,(%eax)
 860d4c4:	83 c0 02             	add    $0x2,%eax
 860d4c7:	83 c2 02             	add    $0x2,%edx
 860d4ca:	83 eb 02             	sub    $0x2,%ebx
 860d4cd:	89 d9                	mov    %ebx,%ecx
 860d4cf:	c1 e9 02             	shr    $0x2,%ecx
 860d4d2:	89 c7                	mov    %eax,%edi
 860d4d4:	89 d6                	mov    %edx,%esi
 860d4d6:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 860d4d8:	89 f2                	mov    %esi,%edx
 860d4da:	89 f8                	mov    %edi,%eax
 860d4dc:	b9 00 00 00 00       	mov    $0x0,%ecx
 860d4e1:	89 de                	mov    %ebx,%esi
 860d4e3:	83 e6 02             	and    $0x2,%esi
 860d4e6:	85 f6                	test   %esi,%esi
 860d4e8:	74 0b                	je     860d4f5 <_ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv+0xb1>
 860d4ea:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 860d4ee:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 860d4f2:	83 c1 02             	add    $0x2,%ecx
 860d4f5:	83 e3 01             	and    $0x1,%ebx
 860d4f8:	85 db                	test   %ebx,%ebx
 860d4fa:	74 07                	je     860d503 <_ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv+0xbf>
 860d4fc:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 860d500:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 860d503:	8d 45 8f             	lea    -0x71(%ebp),%eax
 860d506:	89 04 24             	mov    %eax,(%esp)
 860d509:	e8 a2 0e a7 ff       	call   807e3b0 <strlen@plt>
 860d50e:	89 44 24 08          	mov    %eax,0x8(%esp)
 860d512:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860d515:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d519:	8b 45 08             	mov    0x8(%ebp),%eax
 860d51c:	89 04 24             	mov    %eax,(%esp)
 860d51f:	e8 da fc ff ff       	call   860d1fe <_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi>
 860d524:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 860d52b:	eb 6a                	jmp    860d597 <_ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv+0x153>
 860d52d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860d530:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d534:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860d537:	89 04 24             	mov    %eax,(%esp)
 860d53a:	e8 8f a5 c2 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 860d53f:	89 04 24             	mov    %eax,(%esp)
 860d542:	e8 19 91 0f 00       	call   8706660 <_ZNKSs4sizeEv>
 860d547:	85 c0                	test   %eax,%eax
 860d549:	0f 95 c0             	setne  %al
 860d54c:	84 c0                	test   %al,%al
 860d54e:	74 43                	je     860d593 <_ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv+0x14f>
 860d550:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860d553:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d557:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860d55a:	89 04 24             	mov    %eax,(%esp)
 860d55d:	e8 6c a5 c2 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 860d562:	89 04 24             	mov    %eax,(%esp)
 860d565:	e8 86 8f 0f 00       	call   87064f0 <_ZNKSs5c_strEv>
 860d56a:	89 44 24 08          	mov    %eax,0x8(%esp)
 860d56e:	8d 45 8f             	lea    -0x71(%ebp),%eax
 860d571:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d575:	8b 45 e0             	mov    -0x20(%ebp),%eax
 860d578:	89 04 24             	mov    %eax,(%esp)
 860d57b:	e8 40 6c de ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 860d580:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860d587:	00 
 860d588:	8b 45 e0             	mov    -0x20(%ebp),%eax
 860d58b:	89 04 24             	mov    %eax,(%esp)
 860d58e:	e8 93 6d de ff       	call   83f4326 <_ZN5MySQL4execEb>
 860d593:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 860d597:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860d59a:	89 04 24             	mov    %eax,(%esp)
 860d59d:	e8 ee a4 c2 ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 860d5a2:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 860d5a5:	0f 97 c0             	seta   %al
 860d5a8:	84 c0                	test   %al,%al
 860d5aa:	75 81                	jne    860d52d <_ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv+0xe9>
 860d5ac:	8b 45 08             	mov    0x8(%ebp),%eax
 860d5af:	83 c0 18             	add    $0x18,%eax
 860d5b2:	89 04 24             	mov    %eax,(%esp)
 860d5b5:	e8 d0 3c 00 00       	call   861128a <_ZNSt6vectorIN28CClientCrashDownLogStatistic22stClientCrashDownLog_tESaIS1_EE5clearEv>
 860d5ba:	eb 1b                	jmp    860d5d7 <_ZN28CClientCrashDownLogStatistic21UpdateClientCrashDownEv+0x193>
 860d5bc:	89 d3                	mov    %edx,%ebx
 860d5be:	89 c6                	mov    %eax,%esi
 860d5c0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860d5c3:	89 04 24             	mov    %eax,(%esp)
 860d5c6:	e8 a9 f9 ab ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 860d5cb:	89 f0                	mov    %esi,%eax
 860d5cd:	89 da                	mov    %ebx,%edx
 860d5cf:	89 04 24             	mov    %eax,(%esp)
 860d5d2:	e8 79 61 4d 00       	call   8ae3750 <_Unwind_Resume>
 860d5d7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860d5da:	89 04 24             	mov    %eax,(%esp)
 860d5dd:	e8 92 f9 ab ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 860d5e2:	b8 01 00 00 00       	mov    $0x1,%eax
 860d5e7:	83 c4 7c             	add    $0x7c,%esp
 860d5ea:	5b                   	pop    %ebx
 860d5eb:	5e                   	pop    %esi
 860d5ec:	5f                   	pop    %edi
 860d5ed:	5d                   	pop    %ebp
 860d5ee:	c3                   	ret

```

```c
// CClientCrashDownLogStatistic::UpdateClientCrashDown @ 0x860d444

/* CClientCrashDownLogStatistic::UpdateClientCrashDown() */

undefined4 __thiscall
CClientCrashDownLogStatistic::UpdateClientCrashDown(CClientCrashDownLogStatistic *this)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  string *psVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_75;
  char local_74 [68];
  vector<std::string,std::allocator<std::string>> local_30 [12];
  MySQL *local_24;
  uint local_20;
  
  bVar11 = 0;
  cVar1 = std::
          vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
          ::empty();
  if (cVar1 != '\x01') {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
    std::vector<std::string,std::allocator<std::string>>::vector(local_30);
    pcVar2 = &local_75;
    pcVar8 = "inSert into log_client_ting(occ_time,channel_no,reason,cnt) values%s";
    uVar9 = 0x45;
    bVar10 = ((uint)pcVar2 & 1) != 0;
    if (bVar10) {
      local_75 = s_inSert_into_log_client_ting_occ__08ce0294[0];
      pcVar2 = local_74;
      pcVar8 = "nSert into log_client_ting(occ_time,channel_no,reason,cnt) values%s";
      uVar9 = 0x44;
    }
    if (((uint)pcVar2 & 2) != 0) {
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar8;
      pcVar2 = pcVar2 + 2;
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
      pcVar2 = pcVar2 + ((uint)bVar11 * -2 + 1) * 4;
    }
    iVar7 = 0;
    if ((uVar9 & 2) != 0) {
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar8;
      iVar7 = 2;
    }
    if (!bVar10) {
      pcVar2[iVar7] = pcVar8[iVar7];
    }
    sVar3 = strlen(&local_75);
                    /* try { // try from 0860d51f to 0860d5b9 has its CatchHandler @ 0860d5bc */
    MakeClientCrashDownQuery(this,(vector *)local_30,sVar3);
    local_20 = 0;
    while( true ) {
      uVar9 = std::vector<std::string,std::allocator<std::string>>::size(local_30);
      if (uVar9 <= local_20) break;
      psVar4 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[](local_30,local_20);
      iVar7 = std::string::size(psVar4);
      if (iVar7 != 0) {
        psVar4 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[](local_30,local_20)
        ;
        uVar5 = std::string::c_str(psVar4);
        MySQL::set_query(local_24,&local_75,uVar5);
        MySQL::exec(local_24,true);
      }
      local_20 = local_20 + 1;
    }
    std::
    vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
    ::clear((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
             *)(this + 0x18));
    std::vector<std::string,std::allocator<std::string>>::~vector(local_30);
  }
  return 1;
}

```

