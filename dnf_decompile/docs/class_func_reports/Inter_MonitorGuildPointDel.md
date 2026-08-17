# Inter_MonitorGuildPointDel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _makeDefaultTime

```asm
// === 084ce6d2 Inter_MonitorGuildPointDel::_makeDefaultTime  [0x084ce6d2-0x84ce755] ===
 84ce6d2:	55                   	push   %ebp
 84ce6d3:	89 e5                	mov    %esp,%ebp
 84ce6d5:	83 ec 58             	sub    $0x58,%esp
 84ce6d8:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 84ce6df:	e8 6c f0 ba ff       	call   807d750 <time@plt>
 84ce6e4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ce6e7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ce6ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce6ee:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84ce6f1:	89 04 24             	mov    %eax,(%esp)
 84ce6f4:	e8 67 fc ba ff       	call   807e360 <localtime_r@plt>
 84ce6f9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ce6fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce6ff:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 84ce706:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce709:	c7 40 08 05 00 00 00 	movl   $0x5,0x8(%eax)
 84ce710:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce713:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 84ce71a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce71d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84ce723:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce726:	8b 40 10             	mov    0x10(%eax),%eax
 84ce729:	83 f8 06             	cmp    $0x6,%eax
 84ce72c:	75 15                	jne    84ce743 <_ZN26Inter_MonitorGuildPointDel16_makeDefaultTimeEv+0x71>
 84ce72e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce731:	8b 40 14             	mov    0x14(%eax),%eax
 84ce734:	83 f8 6a             	cmp    $0x6a,%eax
 84ce737:	75 0a                	jne    84ce743 <_ZN26Inter_MonitorGuildPointDel16_makeDefaultTimeEv+0x71>
 84ce739:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce73c:	c7 40 0c 06 00 00 00 	movl   $0x6,0xc(%eax)
 84ce743:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce746:	89 04 24             	mov    %eax,(%esp)
 84ce749:	e8 d2 00 bb ff       	call   807e820 <mktime@plt>
 84ce74e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ce751:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ce754:	c9                   	leave
 84ce755:	c3                   	ret

```

```c
// Inter_MonitorGuildPointDel::_makeDefaultTime @ 0x84ce6d2

/* Inter_MonitorGuildPointDel::_makeDefaultTime() */

time_t Inter_MonitorGuildPointDel::_makeDefaultTime(void)

{
  time_t tVar1;
  tm local_40;
  time_t local_14;
  tm *local_10;
  
  local_14 = time((time_t *)0x0);
  local_10 = localtime_r(&local_14,&local_40);
  local_10->tm_mday = 1;
  local_10->tm_hour = 5;
  local_10->tm_min = 0;
  local_10->tm_sec = 0;
  if ((local_10->tm_mon == 6) && (local_10->tm_year == 0x6a)) {
    local_10->tm_mday = 6;
  }
  tVar1 = mktime(local_10);
  return tVar1;
}

```

---

## dispatch_sig

```asm
// === 084ce756 Inter_MonitorGuildPointDel::dispatch_sig  [0x084ce756-0x84ce7f5] ===
 84ce756:	55                   	push   %ebp
 84ce757:	89 e5                	mov    %esp,%ebp
 84ce759:	56                   	push   %esi
 84ce75a:	53                   	push   %ebx
 84ce75b:	83 ec 30             	sub    $0x30,%esp
 84ce75e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ce761:	89 04 24             	mov    %eax,(%esp)
 84ce764:	e8 6d 62 c6 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 84ce769:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84ce770:	c7 45 f4 84 0c 00 00 	movl   $0xc84,-0xc(%ebp)
 84ce777:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ce77a:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84ce77d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ce781:	8d 55 f4             	lea    -0xc(%ebp),%edx
 84ce784:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ce788:	89 04 24             	mov    %eax,(%esp)
 84ce78b:	e8 b1 a5 ce ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84ce790:	83 ec 04             	sub    $0x4,%esp
 84ce793:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ce796:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce79a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ce79d:	89 04 24             	mov    %eax,(%esp)
 84ce7a0:	e8 61 ee c0 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 84ce7a5:	e8 fd bb c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84ce7aa:	8d 55 dc             	lea    -0x24(%ebp),%edx
 84ce7ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ce7b1:	89 04 24             	mov    %eax,(%esp)
 84ce7b4:	e8 3b e4 1f 00       	call   86ccbf4 <_ZN9GameWorld19deleteSpecificItemsEPKSt6vectorISt4pairIiiESaIS2_EE>
 84ce7b9:	e8 42 c9 01 00       	call   84eb100 <_ZN26Inter_MonitorGuildPointDel17setLastDeleteTimeEv>
 84ce7be:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ce7c3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ce7c6:	89 04 24             	mov    %eax,(%esp)
 84ce7c9:	e8 1c 62 c6 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 84ce7ce:	89 d8                	mov    %ebx,%eax
 84ce7d0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84ce7d3:	83 c4 00             	add    $0x0,%esp
 84ce7d6:	5b                   	pop    %ebx
 84ce7d7:	5e                   	pop    %esi
 84ce7d8:	5d                   	pop    %ebp
 84ce7d9:	c3                   	ret
 84ce7da:	89 d3                	mov    %edx,%ebx
 84ce7dc:	89 c6                	mov    %eax,%esi
 84ce7de:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ce7e1:	89 04 24             	mov    %eax,(%esp)
 84ce7e4:	e8 01 62 c6 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 84ce7e9:	89 f0                	mov    %esi,%eax
 84ce7eb:	89 da                	mov    %ebx,%edx
 84ce7ed:	89 04 24             	mov    %eax,(%esp)
 84ce7f0:	e8 5b 4f 61 00       	call   8ae3750 <_Unwind_Resume>
 84ce7f5:	90                   	nop

```

```c
// Inter_MonitorGuildPointDel::dispatch_sig @ 0x84ce756

/* Inter_MonitorGuildPointDel::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorGuildPointDel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_28 [12];
  int local_1c [2];
  undefined4 local_14;
  int local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_28);
  local_14 = 0;
  local_10 = 0xc84;
                    /* try { // try from 084ce78b to 084ce7b8 has its CatchHandler @ 084ce7da */
  std::make_pair<int,int>(local_1c,&local_10);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            (local_28,(pair *)local_1c);
  this = (GameWorld *)G_GameWorld();
  GameWorld::deleteSpecificItems(this,(vector *)local_28);
  setLastDeleteTime();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_28);
  return 0;
}

```

