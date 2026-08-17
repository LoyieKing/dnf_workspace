# online_preliminary__COnlinePreliminaryMemberMatchList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## COnlinePreliminaryMemberMatchList

```asm
// === 08586398 online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList  [0x08586398-0x85863e5] ===
 8586398:	55                   	push   %ebp
 8586399:	89 e5                	mov    %esp,%ebp
 858639b:	56                   	push   %esi
 858639c:	53                   	push   %ebx
 858639d:	83 ec 10             	sub    $0x10,%esp
 85863a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85863a3:	89 04 24             	mov    %eax,(%esp)
 85863a6:	e8 0f 29 b4 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 85863ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85863ae:	c7 00 c8 b7 ca 08    	movl   $0x8cab7c8,(%eax)
 85863b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85863b7:	83 c0 08             	add    $0x8,%eax
 85863ba:	89 04 24             	mov    %eax,(%esp)
 85863bd:	e8 7e 07 00 00       	call   8586b40 <_ZNSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEEC1Ev>
 85863c2:	eb 1b                	jmp    85863df <_ZN18online_preliminary33COnlinePreliminaryMemberMatchListC1Ev+0x47>
 85863c4:	89 d3                	mov    %edx,%ebx
 85863c6:	89 c6                	mov    %eax,%esi
 85863c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85863cb:	89 04 24             	mov    %eax,(%esp)
 85863ce:	e8 0f 28 b4 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 85863d3:	89 f0                	mov    %esi,%eax
 85863d5:	89 da                	mov    %ebx,%edx
 85863d7:	89 04 24             	mov    %eax,(%esp)
 85863da:	e8 71 d3 55 00       	call   8ae3750 <_Unwind_Resume>
 85863df:	83 c4 10             	add    $0x10,%esp
 85863e2:	5b                   	pop    %ebx
 85863e3:	5e                   	pop    %esi
 85863e4:	5d                   	pop    %ebp
 85863e5:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList @ 0x8586398

/* online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList() */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList
          (COnlinePreliminaryMemberMatchList *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cab7c8;
                    /* try { // try from 085863bd to 085863c1 has its CatchHandler @ 085863c4 */
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::map((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
         *)(this + 8));
  return;
}

```

---

## GetPeerPlayCount

```asm
// === 08586184 online_preliminary::COnlinePreliminaryMemberMatchList::GetPeerPlayCount  [0x08586184-0x8586207] ===
 8586184:	55                   	push   %ebp
 8586185:	89 e5                	mov    %esp,%ebp
 8586187:	83 ec 28             	sub    $0x28,%esp
 858618a:	8b 45 10             	mov    0x10(%ebp),%eax
 858618d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8586191:	8b 45 0c             	mov    0xc(%ebp),%eax
 8586194:	89 44 24 04          	mov    %eax,0x4(%esp)
 8586198:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858619b:	89 04 24             	mov    %eax,(%esp)
 858619e:	e8 7b 07 00 00       	call   858691e <_ZN18online_preliminary17CharacterInServerC1Eij>
 85861a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85861a6:	8d 48 08             	lea    0x8(%eax),%ecx
 85861a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85861ac:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85861af:	89 54 24 08          	mov    %edx,0x8(%esp)
 85861b3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85861b7:	89 04 24             	mov    %eax,(%esp)
 85861ba:	e8 d9 07 00 00       	call   8586998 <_ZNKSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 85861bf:	83 ec 04             	sub    $0x4,%esp
 85861c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85861c5:	8d 50 08             	lea    0x8(%eax),%edx
 85861c8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85861cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85861cf:	89 04 24             	mov    %eax,(%esp)
 85861d2:	e8 ed 07 00 00       	call   85869c4 <_ZNKSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 85861d7:	83 ec 04             	sub    $0x4,%esp
 85861da:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85861dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85861e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85861e4:	89 04 24             	mov    %eax,(%esp)
 85861e7:	e8 fe 07 00 00       	call   85869ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN18online_preliminary17CharacterInServerENS1_13PlayCountInfoEEEneERKS6_>
 85861ec:	84 c0                	test   %al,%al
 85861ee:	74 10                	je     8586200 <_ZNK18online_preliminary33COnlinePreliminaryMemberMatchList16GetPeerPlayCountEij+0x7c>
 85861f0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85861f3:	89 04 24             	mov    %eax,(%esp)
 85861f6:	e8 03 08 00 00       	call   85869fe <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN18online_preliminary17CharacterInServerENS1_13PlayCountInfoEEEptEv>
 85861fb:	8b 40 08             	mov    0x8(%eax),%eax
 85861fe:	eb 05                	jmp    8586205 <_ZNK18online_preliminary33COnlinePreliminaryMemberMatchList16GetPeerPlayCountEij+0x81>
 8586200:	b8 00 00 00 00       	mov    $0x0,%eax
 8586205:	c9                   	leave
 8586206:	c3                   	ret
 8586207:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::GetPeerPlayCount @ 0x8586184

/* online_preliminary::COnlinePreliminaryMemberMatchList::GetPeerPlayCount(int, unsigned int) const
    */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::GetPeerPlayCount
          (COnlinePreliminaryMemberMatchList *this,int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CharacterInServer local_1c [4];
  CharacterInServer local_18 [8];
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  local_10 [12];
  
  CharacterInServer::CharacterInServer(local_18,param_1,param_2);
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::find(local_1c);
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                        *)local_1c,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
            ::operator->((_Rb_tree_const_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                          *)local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 8);
  }
  return uVar3;
}

```

---

## IncreasePeerPlayCount

```asm
// === 08586208 online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount  [0x08586208-0x8586397] ===
 8586208:	55                   	push   %ebp
 8586209:	89 e5                	mov    %esp,%ebp
 858620b:	53                   	push   %ebx
 858620c:	83 ec 74             	sub    $0x74,%esp
 858620f:	8b 45 10             	mov    0x10(%ebp),%eax
 8586212:	89 44 24 08          	mov    %eax,0x8(%esp)
 8586216:	8b 45 0c             	mov    0xc(%ebp),%eax
 8586219:	89 44 24 04          	mov    %eax,0x4(%esp)
 858621d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8586220:	89 04 24             	mov    %eax,(%esp)
 8586223:	e8 f6 06 00 00       	call   858691e <_ZN18online_preliminary17CharacterInServerC1Eij>
 8586228:	8b 45 08             	mov    0x8(%ebp),%eax
 858622b:	8d 48 08             	lea    0x8(%eax),%ecx
 858622e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8586231:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8586234:	89 54 24 08          	mov    %edx,0x8(%esp)
 8586238:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 858623c:	89 04 24             	mov    %eax,(%esp)
 858623f:	e8 c8 07 00 00       	call   8586a0c <_ZNSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 8586244:	83 ec 04             	sub    $0x4,%esp
 8586247:	8b 45 08             	mov    0x8(%ebp),%eax
 858624a:	8d 50 08             	lea    0x8(%eax),%edx
 858624d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8586250:	89 54 24 04          	mov    %edx,0x4(%esp)
 8586254:	89 04 24             	mov    %eax,(%esp)
 8586257:	e8 dc 07 00 00       	call   8586a38 <_ZNSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 858625c:	83 ec 04             	sub    $0x4,%esp
 858625f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8586262:	89 44 24 04          	mov    %eax,0x4(%esp)
 8586266:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8586269:	89 04 24             	mov    %eax,(%esp)
 858626c:	e8 ed 07 00 00       	call   8586a5e <_ZNKSt17_Rb_tree_iteratorISt4pairIKN18online_preliminary17CharacterInServerENS1_13PlayCountInfoEEEneERKS6_>
 8586271:	84 c0                	test   %al,%al
 8586273:	74 28                	je     858629d <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList21IncreasePeerPlayCountEij+0x95>
 8586275:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8586278:	89 04 24             	mov    %eax,(%esp)
 858627b:	e8 f2 07 00 00       	call   8586a72 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN18online_preliminary17CharacterInServerENS1_13PlayCountInfoEEEptEv>
 8586280:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 8586284:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8586287:	89 04 24             	mov    %eax,(%esp)
 858628a:	e8 e3 07 00 00       	call   8586a72 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN18online_preliminary17CharacterInServerENS1_13PlayCountInfoEEEptEv>
 858628f:	8b 50 08             	mov    0x8(%eax),%edx
 8586292:	83 c2 01             	add    $0x1,%edx
 8586295:	89 50 08             	mov    %edx,0x8(%eax)
 8586298:	e9 ea 00 00 00       	jmp    8586387 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList21IncreasePeerPlayCountEij+0x17f>
 858629d:	8b 45 08             	mov    0x8(%ebp),%eax
 85862a0:	83 c0 08             	add    $0x8,%eax
 85862a3:	89 04 24             	mov    %eax,(%esp)
 85862a6:	e8 d5 07 00 00       	call   8586a80 <_ZNKSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEE4sizeEv>
 85862ab:	3d e7 03 00 00       	cmp    $0x3e7,%eax
 85862b0:	0f 97 c0             	seta   %al
 85862b3:	84 c0                	test   %al,%al
 85862b5:	74 4f                	je     8586306 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList21IncreasePeerPlayCountEij+0xfe>
 85862b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85862ba:	83 c0 08             	add    $0x8,%eax
 85862bd:	89 04 24             	mov    %eax,(%esp)
 85862c0:	e8 bb 07 00 00       	call   8586a80 <_ZNKSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEE4sizeEv>
 85862c5:	89 c3                	mov    %eax,%ebx
 85862c7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85862ce:	00 
 85862cf:	c7 44 24 08 65 00 00 	movl   $0x65,0x8(%esp)
 85862d6:	00 
 85862d7:	c7 44 24 04 40 b7 ca 	movl   $0x8cab740,0x4(%esp)
 85862de:	08 
 85862df:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85862e2:	89 04 24             	mov    %eax,(%esp)
 85862e5:	e8 2e 94 fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85862ea:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85862ee:	c7 44 24 04 fc aa ca 	movl   $0x8caaafc,0x4(%esp)
 85862f5:	08 
 85862f6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85862f9:	89 04 24             	mov    %eax,(%esp)
 85862fc:	e8 87 94 fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8586301:	e9 8c 00 00 00       	jmp    8586392 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList21IncreasePeerPlayCountEij+0x18a>
 8586306:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 858630d:	00 
 858630e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8586315:	00 
 8586316:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8586319:	89 04 24             	mov    %eax,(%esp)
 858631c:	e8 2d 06 00 00       	call   858694e <_ZN18online_preliminary13PlayCountInfoC1Ejb>
 8586321:	8b 45 10             	mov    0x10(%ebp),%eax
 8586324:	89 44 24 08          	mov    %eax,0x8(%esp)
 8586328:	8b 45 0c             	mov    0xc(%ebp),%eax
 858632b:	89 44 24 04          	mov    %eax,0x4(%esp)
 858632f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8586332:	89 04 24             	mov    %eax,(%esp)
 8586335:	e8 e4 05 00 00       	call   858691e <_ZN18online_preliminary17CharacterInServerC1Eij>
 858633a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 858633d:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8586340:	89 54 24 08          	mov    %edx,0x8(%esp)
 8586344:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8586347:	89 54 24 04          	mov    %edx,0x4(%esp)
 858634b:	89 04 24             	mov    %eax,(%esp)
 858634e:	e8 40 07 00 00       	call   8586a93 <_ZSt9make_pairIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8586353:	83 ec 04             	sub    $0x4,%esp
 8586356:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8586359:	89 44 24 04          	mov    %eax,0x4(%esp)
 858635d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8586360:	89 04 24             	mov    %eax,(%esp)
 8586363:	e8 6a 07 00 00       	call   8586ad2 <_ZNSt4pairIKN18online_preliminary17CharacterInServerENS0_13PlayCountInfoEEC1IS1_S3_EEOS_IT_T0_E>
 8586368:	8b 45 08             	mov    0x8(%ebp),%eax
 858636b:	8d 48 08             	lea    0x8(%eax),%ecx
 858636e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8586371:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8586374:	89 54 24 08          	mov    %edx,0x8(%esp)
 8586378:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 858637c:	89 04 24             	mov    %eax,(%esp)
 858637f:	e8 90 07 00 00       	call   8586b14 <_ZNSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEE6insertERKS7_>
 8586384:	83 ec 04             	sub    $0x4,%esp
 8586387:	8b 45 08             	mov    0x8(%ebp),%eax
 858638a:	89 04 24             	mov    %eax,(%esp)
 858638d:	e8 32 28 b4 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8586392:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8586395:	c9                   	leave
 8586396:	c3                   	ret
 8586397:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount @ 0x8586208

/* online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount(int, unsigned int)
    */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount
          (COnlinePreliminaryMemberMatchList *this,int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  CharacterInServer local_64 [4];
  CharacterInServer local_60 [8];
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  local_58 [4];
  cMyTrace local_54 [16];
  pair local_44 [8];
  pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo> local_3c [16];
  CharacterInServer local_2c [16];
  PlayCountInfo local_1c [8];
  CharacterInServer local_14 [12];
  
  CharacterInServer::CharacterInServer(local_60,param_1,param_2);
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::find(local_64);
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::end(local_58);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
          ::operator!=((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                        *)local_64,(_Rb_tree_iterator *)local_58);
  if (cVar1 == '\0') {
    uVar3 = std::
            map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
            ::size((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
                    *)(this + 8));
    if (999 < uVar3) {
      uVar4 = std::
              map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
              ::size((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
                      *)(this + 8));
      cMyTrace::cMyTrace(local_54,
                         "void online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount(int, unsigned int)"
                         ,0x65,0);
      cMyTrace::operator()(local_54,"Online Preliminary peer play count map size over! %d",uVar4);
      return;
    }
    PlayCountInfo::PlayCountInfo(local_1c,1,true);
    CharacterInServer::CharacterInServer(local_14,param_1,param_2);
    std::make_pair<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo>
              (local_2c,(PlayCountInfo *)local_14);
    std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>::
    pair<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo>(local_3c,local_2c)
    ;
    std::
    map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
    ::insert(local_44);
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
            ::operator->((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                          *)local_64);
    *(undefined1 *)(iVar2 + 0xc) = 1;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
            ::operator->((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                          *)local_64);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  charac_expand::CData::alter((CData *)this);
  return;
}

```

---

## ResetDailyMidnight

```asm
// === 0858685e online_preliminary::COnlinePreliminaryMemberMatchList::ResetDailyMidnight  [0x0858685e-0x8586877] ===
 858685e:	55                   	push   %ebp
 858685f:	89 e5                	mov    %esp,%ebp
 8586861:	83 ec 18             	sub    $0x18,%esp
 8586864:	8b 45 08             	mov    0x8(%ebp),%eax
 8586867:	8b 00                	mov    (%eax),%eax
 8586869:	83 c0 1c             	add    $0x1c,%eax
 858686c:	8b 10                	mov    (%eax),%edx
 858686e:	8b 45 08             	mov    0x8(%ebp),%eax
 8586871:	89 04 24             	mov    %eax,(%esp)
 8586874:	ff d2                	call   *%edx
 8586876:	c9                   	leave
 8586877:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::ResetDailyMidnight @ 0x858685e

/* online_preliminary::COnlinePreliminaryMemberMatchList::ResetDailyMidnight() */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::ResetDailyMidnight
          (COnlinePreliminaryMemberMatchList *this)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  return;
}

```

---

## _reset

```asm
// === 08586848 online_preliminary::COnlinePreliminaryMemberMatchList::_reset  [0x08586848-0x858685d] ===
 8586848:	55                   	push   %ebp
 8586849:	89 e5                	mov    %esp,%ebp
 858684b:	83 ec 18             	sub    $0x18,%esp
 858684e:	8b 45 08             	mov    0x8(%ebp),%eax
 8586851:	83 c0 08             	add    $0x8,%eax
 8586854:	89 04 24             	mov    %eax,(%esp)
 8586857:	e8 b2 04 00 00       	call   8586d0e <_ZNSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEE5clearEv>
 858685c:	c9                   	leave
 858685d:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::_reset @ 0x8586848

/* online_preliminary::COnlinePreliminaryMemberMatchList::_reset() */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::_reset
          (COnlinePreliminaryMemberMatchList *this)

{
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::clear((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
           *)(this + 8));
  return;
}

```

---

## _saveData

```asm
// === 08586510 online_preliminary::COnlinePreliminaryMemberMatchList::_saveData  [0x08586510-0x8586847] ===
 8586510:	55                   	push   %ebp
 8586511:	89 e5                	mov    %esp,%ebp
 8586513:	56                   	push   %esi
 8586514:	53                   	push   %ebx
 8586515:	83 ec 40             	sub    $0x40,%esp
 8586518:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 858651d:	c7 44 24 08 82 00 00 	movl   $0x82,0x8(%esp)
 8586524:	00 
 8586525:	c7 44 24 04 e0 aa ca 	movl   $0x8caaae0,0x4(%esp)
 858652c:	08 
 858652d:	89 04 24             	mov    %eax,(%esp)
 8586530:	e8 51 95 d0 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8586535:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 858653c:	00 
 858653d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8586541:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8586544:	89 04 24             	mov    %eax,(%esp)
 8586547:	e8 da 26 b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 858654c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858654f:	89 04 24             	mov    %eax,(%esp)
 8586552:	e8 ef 26 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8586557:	c7 44 24 04 eb 01 00 	movl   $0x1eb,0x4(%esp)
 858655e:	00 
 858655f:	89 04 24             	mov    %eax,(%esp)
 8586562:	e8 ef 26 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8586567:	8b 45 0c             	mov    0xc(%ebp),%eax
 858656a:	89 04 24             	mov    %eax,(%esp)
 858656d:	e8 24 27 b4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8586572:	89 c3                	mov    %eax,%ebx
 8586574:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8586577:	89 04 24             	mov    %eax,(%esp)
 858657a:	e8 c7 26 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 858657f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8586583:	89 04 24             	mov    %eax,(%esp)
 8586586:	e8 cb 26 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 858658b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858658e:	89 04 24             	mov    %eax,(%esp)
 8586591:	e8 b8 26 b4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8586596:	89 04 24             	mov    %eax,(%esp)
 8586599:	e8 16 07 00 00       	call   8586cb4 <_ZN12CStreamGuard11GetInBufferI40SIG_ONLINE_PRELIMINARY_MEMBER_MATCH_LISTEEPT_v>
 858659e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85865a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85865a4:	89 04 24             	mov    %eax,(%esp)
 85865a7:	e8 e4 56 b4 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85865ac:	89 c2                	mov    %eax,%edx
 85865ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85865b1:	66 89 10             	mov    %dx,(%eax)
 85865b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85865b7:	89 04 24             	mov    %eax,(%esp)
 85865ba:	e8 8f 56 b4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85865bf:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85865c2:	89 42 04             	mov    %eax,0x4(%edx)
 85865c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85865c8:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 85865cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85865d2:	8d 50 08             	lea    0x8(%eax),%edx
 85865d5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85865d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85865dc:	89 04 24             	mov    %eax,(%esp)
 85865df:	e8 e6 06 00 00       	call   8586cca <_ZNSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEE5beginEv>
 85865e4:	83 ec 04             	sub    $0x4,%esp
 85865e7:	e9 b6 01 00 00       	jmp    85867a2 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList9_saveDataEP5CUser+0x292>
 85865ec:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85865ef:	89 04 24             	mov    %eax,(%esp)
 85865f2:	e8 7b 04 00 00       	call   8586a72 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN18online_preliminary17CharacterInServerENS1_13PlayCountInfoEEEptEv>
 85865f7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85865fa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85865fd:	89 04 24             	mov    %eax,(%esp)
 8586600:	e8 6d 04 00 00       	call   8586a72 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN18online_preliminary17CharacterInServerENS1_13PlayCountInfoEEEptEv>
 8586605:	83 c0 08             	add    $0x8,%eax
 8586608:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858660b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858660e:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8586612:	83 f0 01             	xor    $0x1,%eax
 8586615:	84 c0                	test   %al,%al
 8586617:	0f 85 79 01 00 00    	jne    8586796 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList9_saveDataEP5CUser+0x286>
 858661d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8586620:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 8586624:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8586627:	8b 50 08             	mov    0x8(%eax),%edx
 858662a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858662d:	0f b7 18             	movzwl (%eax),%ebx
 8586630:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8586633:	89 d0                	mov    %edx,%eax
 8586635:	01 c0                	add    %eax,%eax
 8586637:	01 d0                	add    %edx,%eax
 8586639:	c1 e0 02             	shl    $0x2,%eax
 858663c:	66 89 5c 08 0c       	mov    %bx,0xc(%eax,%ecx,1)
 8586641:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8586644:	8b 50 08             	mov    0x8(%eax),%edx
 8586647:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858664a:	8b 48 04             	mov    0x4(%eax),%ecx
 858664d:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8586650:	89 d0                	mov    %edx,%eax
 8586652:	01 c0                	add    %eax,%eax
 8586654:	01 d0                	add    %edx,%eax
 8586656:	c1 e0 02             	shl    $0x2,%eax
 8586659:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 858665c:	83 c0 10             	add    $0x10,%eax
 858665f:	89 08                	mov    %ecx,(%eax)
 8586661:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8586664:	8b 50 08             	mov    0x8(%eax),%edx
 8586667:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858666a:	8b 08                	mov    (%eax),%ecx
 858666c:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 858666f:	89 d0                	mov    %edx,%eax
 8586671:	01 c0                	add    %eax,%eax
 8586673:	01 d0                	add    %edx,%eax
 8586675:	c1 e0 02             	shl    $0x2,%eax
 8586678:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 858667b:	83 c0 14             	add    $0x14,%eax
 858667e:	89 08                	mov    %ecx,(%eax)
 8586680:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8586683:	8b 40 08             	mov    0x8(%eax),%eax
 8586686:	8d 50 01             	lea    0x1(%eax),%edx
 8586689:	8b 45 ec             	mov    -0x14(%ebp),%eax
 858668c:	89 50 08             	mov    %edx,0x8(%eax)
 858668f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8586692:	8b 40 08             	mov    0x8(%eax),%eax
 8586695:	83 f8 64             	cmp    $0x64,%eax
 8586698:	0f 85 f9 00 00 00    	jne    8586797 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList9_saveDataEP5CUser+0x287>
 858669e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85866a3:	8d 55 e0             	lea    -0x20(%ebp),%edx
 85866a6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85866aa:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85866b1:	00 
 85866b2:	89 04 24             	mov    %eax,(%esp)
 85866b5:	e8 24 a9 fe ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85866ba:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85866bf:	c7 44 24 08 9d 00 00 	movl   $0x9d,0x8(%esp)
 85866c6:	00 
 85866c7:	c7 44 24 04 e0 aa ca 	movl   $0x8caaae0,0x4(%esp)
 85866ce:	08 
 85866cf:	89 04 24             	mov    %eax,(%esp)
 85866d2:	e8 af 93 d0 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85866d7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85866de:	00 
 85866df:	89 44 24 04          	mov    %eax,0x4(%esp)
 85866e3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85866e6:	89 04 24             	mov    %eax,(%esp)
 85866e9:	e8 38 25 b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85866ee:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85866f1:	89 04 24             	mov    %eax,(%esp)
 85866f4:	e8 4d 25 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85866f9:	c7 44 24 04 e7 01 00 	movl   $0x1e7,0x4(%esp)
 8586700:	00 
 8586701:	89 04 24             	mov    %eax,(%esp)
 8586704:	e8 4d 25 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8586709:	8b 45 0c             	mov    0xc(%ebp),%eax
 858670c:	89 04 24             	mov    %eax,(%esp)
 858670f:	e8 82 25 b4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8586714:	89 c3                	mov    %eax,%ebx
 8586716:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8586719:	89 04 24             	mov    %eax,(%esp)
 858671c:	e8 25 25 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8586721:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8586725:	89 04 24             	mov    %eax,(%esp)
 8586728:	e8 29 25 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 858672d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8586730:	89 04 24             	mov    %eax,(%esp)
 8586733:	e8 16 25 b4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8586738:	89 04 24             	mov    %eax,(%esp)
 858673b:	e8 74 05 00 00       	call   8586cb4 <_ZN12CStreamGuard11GetInBufferI40SIG_ONLINE_PRELIMINARY_MEMBER_MATCH_LISTEEPT_v>
 8586740:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8586743:	8b 45 0c             	mov    0xc(%ebp),%eax
 8586746:	89 04 24             	mov    %eax,(%esp)
 8586749:	e8 42 55 b4 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 858674e:	89 c2                	mov    %eax,%edx
 8586750:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8586753:	66 89 10             	mov    %dx,(%eax)
 8586756:	8b 45 0c             	mov    0xc(%ebp),%eax
 8586759:	89 04 24             	mov    %eax,(%esp)
 858675c:	e8 ed 54 b4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8586761:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8586764:	89 42 04             	mov    %eax,0x4(%edx)
 8586767:	8b 45 ec             	mov    -0x14(%ebp),%eax
 858676a:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8586771:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8586774:	89 04 24             	mov    %eax,(%esp)
 8586777:	e8 56 61 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 858677c:	eb 19                	jmp    8586797 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList9_saveDataEP5CUser+0x287>
 858677e:	89 d3                	mov    %edx,%ebx
 8586780:	89 c6                	mov    %eax,%esi
 8586782:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8586785:	89 04 24             	mov    %eax,(%esp)
 8586788:	e8 45 61 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 858678d:	89 f0                	mov    %esi,%eax
 858678f:	89 da                	mov    %ebx,%edx
 8586791:	e9 96 00 00 00       	jmp    858682c <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList9_saveDataEP5CUser+0x31c>
 8586796:	90                   	nop
 8586797:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858679a:	89 04 24             	mov    %eax,(%esp)
 858679d:	e8 4e 05 00 00       	call   8586cf0 <_ZNSt17_Rb_tree_iteratorISt4pairIKN18online_preliminary17CharacterInServerENS1_13PlayCountInfoEEEppEv>
 85867a2:	8b 45 08             	mov    0x8(%ebp),%eax
 85867a5:	8d 50 08             	lea    0x8(%eax),%edx
 85867a8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85867ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 85867af:	89 04 24             	mov    %eax,(%esp)
 85867b2:	e8 81 02 00 00       	call   8586a38 <_ZNSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 85867b7:	83 ec 04             	sub    $0x4,%esp
 85867ba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85867bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85867c1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85867c4:	89 04 24             	mov    %eax,(%esp)
 85867c7:	e8 92 02 00 00       	call   8586a5e <_ZNKSt17_Rb_tree_iteratorISt4pairIKN18online_preliminary17CharacterInServerENS1_13PlayCountInfoEEEneERKS6_>
 85867cc:	84 c0                	test   %al,%al
 85867ce:	0f 85 18 fe ff ff    	jne    85865ec <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList9_saveDataEP5CUser+0xdc>
 85867d4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85867d7:	8b 40 08             	mov    0x8(%eax),%eax
 85867da:	85 c0                	test   %eax,%eax
 85867dc:	74 1e                	je     85867fc <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList9_saveDataEP5CUser+0x2ec>
 85867de:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85867e3:	8d 55 e0             	lea    -0x20(%ebp),%edx
 85867e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85867ea:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85867f1:	00 
 85867f2:	89 04 24             	mov    %eax,(%esp)
 85867f5:	e8 e4 a7 fe ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85867fa:	eb 14                	jmp    8586810 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList9_saveDataEP5CUser+0x300>
 85867fc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8586801:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8586804:	89 54 24 04          	mov    %edx,0x4(%esp)
 8586808:	89 04 24             	mov    %eax,(%esp)
 858680b:	e8 70 a8 b7 ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8586810:	bb 01 00 00 00       	mov    $0x1,%ebx
 8586815:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8586818:	89 04 24             	mov    %eax,(%esp)
 858681b:	e8 b2 60 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8586820:	89 d8                	mov    %ebx,%eax
 8586822:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8586825:	83 c4 00             	add    $0x0,%esp
 8586828:	5b                   	pop    %ebx
 8586829:	5e                   	pop    %esi
 858682a:	5d                   	pop    %ebp
 858682b:	c3                   	ret
 858682c:	89 d3                	mov    %edx,%ebx
 858682e:	89 c6                	mov    %eax,%esi
 8586830:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8586833:	89 04 24             	mov    %eax,(%esp)
 8586836:	e8 97 60 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 858683b:	89 f0                	mov    %esi,%eax
 858683d:	89 da                	mov    %ebx,%edx
 858683f:	89 04 24             	mov    %eax,(%esp)
 8586842:	e8 09 cf 55 00       	call   8ae3750 <_Unwind_Resume>
 8586847:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::_saveData @ 0x8586510

/* online_preliminary::COnlinePreliminaryMemberMatchList::_saveData(CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::_saveData
          (COnlinePreliminaryMemberMatchList *this,CUser *param_1)

{
  char cVar1;
  undefined2 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CStreamGuard local_30 [8];
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  local_28 [4];
  CStreamGuard local_24 [8];
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  local_1c [4];
  SIG_ONLINE_PRELIMINARY_MEMBER_MATCH_LIST *local_18;
  undefined2 *local_14;
  undefined4 *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryData.cpp",0x82)
  ;
  CStreamGuard::CStreamGuard(local_24,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 08586562 to 085866d6 has its CatchHandler @ 0858682c */
  CStreamGuard::operator<<(pCVar4,0x1eb);
  iVar5 = CUser::GetUID(param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar4,iVar5);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_18 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_MEMBER_MATCH_LIST>(pCVar4);
  uVar2 = CUser::GetServerGroup(param_1);
  *(undefined2 *)local_18 = uVar2;
  uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_18 + 4) = uVar6;
  *(undefined4 *)(local_18 + 8) = 0;
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::begin(local_28);
  while( true ) {
    std::
    map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
    ::end(local_1c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
            ::operator!=((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                          *)local_28,(_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    local_14 = (undefined2 *)
               std::
               _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
               ::operator->((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                             *)local_28);
    iVar5 = std::
            _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
            ::operator->((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                          *)local_28);
    local_10 = (undefined4 *)(iVar5 + 8);
    if (*(char *)(iVar5 + 0xc) == '\x01') {
      *(undefined1 *)(iVar5 + 0xc) = 0;
      *(undefined2 *)(local_18 + *(int *)(local_18 + 8) * 0xc + 0xc) = *local_14;
      *(undefined4 *)(local_18 + *(int *)(local_18 + 8) * 0xc + 0x10) =
           *(undefined4 *)(local_14 + 2);
      *(undefined4 *)(local_18 + *(int *)(local_18 + 8) * 0xc + 0x14) = *local_10;
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      if (*(int *)(local_18 + 8) == 100) {
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
        pSVar3 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryData.cpp",0x9d);
        CStreamGuard::CStreamGuard(local_30,pSVar3,true);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 08586704 to 0858673f has its CatchHandler @ 0858677e */
        CStreamGuard::operator<<(pCVar4,0x1e7);
        iVar5 = CUser::GetUID(param_1);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_30);
        CStreamGuard::operator<<(pCVar4,iVar5);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_30);
        local_18 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_MEMBER_MATCH_LIST>(pCVar4);
        uVar2 = CUser::GetServerGroup(param_1);
        *(undefined2 *)local_18 = uVar2;
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        *(undefined4 *)(local_18 + 4) = uVar6;
        *(undefined4 *)(local_18 + 8) = 0;
                    /* try { // try from 08586777 to 0858677b has its CatchHandler @ 0858682c */
        CStreamGuard::~CStreamGuard(local_30);
      }
    }
                    /* try { // try from 0858679d to 0858680f has its CatchHandler @ 0858682c */
    std::
    _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
    ::operator++((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                  *)local_28);
  }
  if (*(int *)(local_18 + 8) == 0) {
    StreamPool::Free(GlobalData::s_stream_pool,local_24);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
  }
  CStreamGuard::~CStreamGuard(local_24);
  return 1;
}

```

---

## loadData

```asm
// === 08586466 online_preliminary::COnlinePreliminaryMemberMatchList::loadData  [0x08586466-0x858650f] ===
 8586466:	55                   	push   %ebp
 8586467:	89 e5                	mov    %esp,%ebp
 8586469:	53                   	push   %ebx
 858646a:	83 ec 24             	sub    $0x24,%esp
 858646d:	8b 45 10             	mov    0x10(%ebp),%eax
 8586470:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8586473:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858647a:	eb 75                	jmp    85864f1 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList8loadDataEP5CUserPc+0x8b>
 858647c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 858647f:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8586482:	89 d0                	mov    %edx,%eax
 8586484:	01 c0                	add    %eax,%eax
 8586486:	01 d0                	add    %edx,%eax
 8586488:	c1 e0 02             	shl    $0x2,%eax
 858648b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 858648e:	83 c0 10             	add    $0x10,%eax
 8586491:	8b 08                	mov    (%eax),%ecx
 8586493:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8586496:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8586499:	89 d0                	mov    %edx,%eax
 858649b:	01 c0                	add    %eax,%eax
 858649d:	01 d0                	add    %edx,%eax
 858649f:	c1 e0 02             	shl    $0x2,%eax
 85864a2:	0f b7 44 18 0c       	movzwl 0xc(%eax,%ebx,1),%eax
 85864a7:	0f b7 c0             	movzwl %ax,%eax
 85864aa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85864ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 85864b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85864b5:	89 04 24             	mov    %eax,(%esp)
 85864b8:	e8 61 04 00 00       	call   858691e <_ZN18online_preliminary17CharacterInServerC1Eij>
 85864bd:	8b 45 08             	mov    0x8(%ebp),%eax
 85864c0:	8d 50 08             	lea    0x8(%eax),%edx
 85864c3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85864c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85864ca:	89 14 24             	mov    %edx,(%esp)
 85864cd:	e8 e8 06 00 00       	call   8586bba <_ZNSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEEixERS6_>
 85864d2:	89 c1                	mov    %eax,%ecx
 85864d4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85864d7:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 85864da:	89 d0                	mov    %edx,%eax
 85864dc:	01 c0                	add    %eax,%eax
 85864de:	01 d0                	add    %edx,%eax
 85864e0:	c1 e0 02             	shl    $0x2,%eax
 85864e3:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85864e6:	83 c0 14             	add    $0x14,%eax
 85864e9:	8b 00                	mov    (%eax),%eax
 85864eb:	89 01                	mov    %eax,(%ecx)
 85864ed:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85864f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85864f4:	8b 40 08             	mov    0x8(%eax),%eax
 85864f7:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85864fa:	0f 9f c0             	setg   %al
 85864fd:	84 c0                	test   %al,%al
 85864ff:	0f 85 77 ff ff ff    	jne    858647c <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList8loadDataEP5CUserPc+0x16>
 8586505:	b8 01 00 00 00       	mov    $0x1,%eax
 858650a:	83 c4 24             	add    $0x24,%esp
 858650d:	5b                   	pop    %ebx
 858650e:	5d                   	pop    %ebp
 858650f:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::loadData @ 0x8586466

/* online_preliminary::COnlinePreliminaryMemberMatchList::loadData(CUser*, char*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::loadData
          (COnlinePreliminaryMemberMatchList *this,CUser *param_1,char *param_2)

{
  undefined4 *puVar1;
  CharacterInServer local_1c [8];
  char *local_14;
  int local_10;
  
  local_14 = param_2;
  for (local_10 = 0; local_10 < *(int *)(local_14 + 8); local_10 = local_10 + 1) {
    CharacterInServer::CharacterInServer
              (local_1c,(uint)*(ushort *)(local_14 + local_10 * 0xc + 0xc),
               *(uint *)(local_14 + local_10 * 0xc + 0x10));
    puVar1 = (undefined4 *)
             std::
             map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
             ::operator[]((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
                           *)(this + 8),local_1c);
    *puVar1 = *(undefined4 *)(local_14 + local_10 * 0xc + 0x14);
  }
  return 1;
}

```

---

## ~COnlinePreliminaryMemberMatchList

```asm
// === 085863e6 online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList  [0x085863e6-0x8586447] ===
 85863e6:	55                   	push   %ebp
 85863e7:	89 e5                	mov    %esp,%ebp
 85863e9:	56                   	push   %esi
 85863ea:	53                   	push   %ebx
 85863eb:	83 ec 10             	sub    $0x10,%esp
 85863ee:	8b 45 08             	mov    0x8(%ebp),%eax
 85863f1:	c7 00 c8 b7 ca 08    	movl   $0x8cab7c8,(%eax)
 85863f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85863fa:	83 c0 08             	add    $0x8,%eax
 85863fd:	89 04 24             	mov    %eax,(%esp)
 8586400:	e8 69 05 00 00       	call   858696e <_ZNSt3mapIN18online_preliminary17CharacterInServerENS0_13PlayCountInfoESt4lessIS1_ESaISt4pairIKS1_S2_EEED1Ev>
 8586405:	eb 1b                	jmp    8586422 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchListD1Ev+0x3c>
 8586407:	89 d3                	mov    %edx,%ebx
 8586409:	89 c6                	mov    %eax,%esi
 858640b:	8b 45 08             	mov    0x8(%ebp),%eax
 858640e:	89 04 24             	mov    %eax,(%esp)
 8586411:	e8 cc 27 b4 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 8586416:	89 f0                	mov    %esi,%eax
 8586418:	89 da                	mov    %ebx,%edx
 858641a:	89 04 24             	mov    %eax,(%esp)
 858641d:	e8 2e d3 55 00       	call   8ae3750 <_Unwind_Resume>
 8586422:	8b 45 08             	mov    0x8(%ebp),%eax
 8586425:	89 04 24             	mov    %eax,(%esp)
 8586428:	e8 b5 27 b4 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 858642d:	b8 00 00 00 00       	mov    $0x0,%eax
 8586432:	84 c0                	test   %al,%al
 8586434:	74 0b                	je     8586441 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchListD1Ev+0x5b>
 8586436:	8b 45 08             	mov    0x8(%ebp),%eax
 8586439:	89 04 24             	mov    %eax,(%esp)
 858643c:	e8 af e0 19 00       	call   87244f0 <_ZdlPv>
 8586441:	83 c4 10             	add    $0x10,%esp
 8586444:	5b                   	pop    %ebx
 8586445:	5e                   	pop    %esi
 8586446:	5d                   	pop    %ebp
 8586447:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList @ 0x85863e6

/* WARNING: Removing unreachable block (ram,0x08586436) */
/* online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList() */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList
          (COnlinePreliminaryMemberMatchList *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cab7c8;
                    /* try { // try from 08586400 to 08586404 has its CatchHandler @ 08586407 */
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::~map((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~COnlinePreliminaryMemberMatchList_08586448

```asm
// === 08586448 online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList  [0x08586448-0x8586465] ===
 8586448:	55                   	push   %ebp
 8586449:	89 e5                	mov    %esp,%ebp
 858644b:	83 ec 18             	sub    $0x18,%esp
 858644e:	8b 45 08             	mov    0x8(%ebp),%eax
 8586451:	89 04 24             	mov    %eax,(%esp)
 8586454:	e8 8d ff ff ff       	call   85863e6 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchListD1Ev>
 8586459:	8b 45 08             	mov    0x8(%ebp),%eax
 858645c:	89 04 24             	mov    %eax,(%esp)
 858645f:	e8 8c e0 19 00       	call   87244f0 <_ZdlPv>
 8586464:	c9                   	leave
 8586465:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList @ 0x8586448

/* online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList() */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList
          (COnlinePreliminaryMemberMatchList *this)

{
  ~COnlinePreliminaryMemberMatchList(this);
  operator_delete(this);
  return;
}

```

