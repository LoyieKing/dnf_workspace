# item_lock__CItemLock

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 29

---

## CItemLock

```asm
// === 0854156a item_lock::CItemLock::CItemLock  [0x0854156a-0x8541643] ===
 854156a:	55                   	push   %ebp
 854156b:	89 e5                	mov    %esp,%ebp
 854156d:	56                   	push   %esi
 854156e:	53                   	push   %ebx
 854156f:	83 ec 40             	sub    $0x40,%esp
 8541572:	8b 45 08             	mov    0x8(%ebp),%eax
 8541575:	89 04 24             	mov    %eax,(%esp)
 8541578:	e8 3d 77 b8 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 854157d:	8b 45 08             	mov    0x8(%ebp),%eax
 8541580:	c7 00 a8 b5 c9 08    	movl   $0x8c9b5a8,(%eax)
 8541586:	8b 45 08             	mov    0x8(%ebp),%eax
 8541589:	83 c0 08             	add    $0x8,%eax
 854158c:	89 04 24             	mov    %eax,(%esp)
 854158f:	e8 f4 1a 00 00       	call   8543088 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEEC1Ev>
 8541594:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8541597:	89 04 24             	mov    %eax,(%esp)
 854159a:	e8 63 1b 00 00       	call   8543102 <_ZNSt5dequeIhSaIhEEC1Ev>
 854159f:	8b 45 08             	mov    0x8(%ebp),%eax
 85415a2:	8d 50 20             	lea    0x20(%eax),%edx
 85415a5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85415a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85415ac:	89 14 24             	mov    %edx,(%esp)
 85415af:	e8 f0 1b 00 00       	call   85431a4 <_ZNSt5stackIhSt5dequeIhSaIhEEEC1EOS2_>
 85415b4:	eb 15                	jmp    85415cb <_ZN9item_lock9CItemLockC1Ev+0x61>
 85415b6:	89 d3                	mov    %edx,%ebx
 85415b8:	89 c6                	mov    %eax,%esi
 85415ba:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85415bd:	89 04 24             	mov    %eax,(%esp)
 85415c0:	e8 51 1b 00 00       	call   8543116 <_ZNSt5dequeIhSaIhEED1Ev>
 85415c5:	89 f0                	mov    %esi,%eax
 85415c7:	89 da                	mov    %ebx,%edx
 85415c9:	eb 46                	jmp    8541611 <_ZN9item_lock9CItemLockC1Ev+0xa7>
 85415cb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85415ce:	89 04 24             	mov    %eax,(%esp)
 85415d1:	e8 40 1b 00 00       	call   8543116 <_ZNSt5dequeIhSaIhEED1Ev>
 85415d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85415d9:	83 c0 48             	add    $0x48,%eax
 85415dc:	89 04 24             	mov    %eax,(%esp)
 85415df:	e8 e2 1b 00 00       	call   85431c6 <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EEC1Ev>
 85415e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85415e7:	83 c0 54             	add    $0x54,%eax
 85415ea:	89 04 24             	mov    %eax,(%esp)
 85415ed:	e8 52 1a 00 00       	call   8543044 <_ZN9item_lock14CItemLockTimerC1Ev>
 85415f2:	83 c4 40             	add    $0x40,%esp
 85415f5:	5b                   	pop    %ebx
 85415f6:	5e                   	pop    %esi
 85415f7:	5d                   	pop    %ebp
 85415f8:	c3                   	ret
 85415f9:	89 d3                	mov    %edx,%ebx
 85415fb:	89 c6                	mov    %eax,%esi
 85415fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8541600:	83 c0 20             	add    $0x20,%eax
 8541603:	89 04 24             	mov    %eax,(%esp)
 8541606:	e8 69 1a 00 00       	call   8543074 <_ZNSt5stackIhSt5dequeIhSaIhEEED1Ev>
 854160b:	89 f0                	mov    %esi,%eax
 854160d:	89 da                	mov    %ebx,%edx
 854160f:	eb 00                	jmp    8541611 <_ZN9item_lock9CItemLockC1Ev+0xa7>
 8541611:	89 d3                	mov    %edx,%ebx
 8541613:	89 c6                	mov    %eax,%esi
 8541615:	8b 45 08             	mov    0x8(%ebp),%eax
 8541618:	83 c0 08             	add    $0x8,%eax
 854161b:	89 04 24             	mov    %eax,(%esp)
 854161e:	e8 3d 1a 00 00       	call   8543060 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEED1Ev>
 8541623:	89 f0                	mov    %esi,%eax
 8541625:	89 da                	mov    %ebx,%edx
 8541627:	eb 00                	jmp    8541629 <_ZN9item_lock9CItemLockC1Ev+0xbf>
 8541629:	89 d3                	mov    %edx,%ebx
 854162b:	89 c6                	mov    %eax,%esi
 854162d:	8b 45 08             	mov    0x8(%ebp),%eax
 8541630:	89 04 24             	mov    %eax,(%esp)
 8541633:	e8 aa 75 b8 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 8541638:	89 f0                	mov    %esi,%eax
 854163a:	89 da                	mov    %ebx,%edx
 854163c:	89 04 24             	mov    %eax,(%esp)
 854163f:	e8 0c 21 5a 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// item_lock::CItemLock::CItemLock @ 0x854156a

/* item_lock::CItemLock::CItemLock() */

void __thiscall item_lock::CItemLock::CItemLock(CItemLock *this)

{
  deque<unsigned_char,std::allocator<unsigned_char>> local_34 [40];
  
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9b5a8;
                    /* try { // try from 0854158f to 08541593 has its CatchHandler @ 08541629 */
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::map((map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
         *)(this + 8));
                    /* try { // try from 0854159a to 0854159e has its CatchHandler @ 08541611 */
  std::deque<unsigned_char,std::allocator<unsigned_char>>::deque(local_34);
                    /* try { // try from 085415af to 085415b3 has its CatchHandler @ 085415b6 */
  std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::stack
            ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
             (this + 0x20),(deque *)local_34);
                    /* try { // try from 085415d1 to 085415d5 has its CatchHandler @ 08541611 */
  std::deque<unsigned_char,std::allocator<unsigned_char>>::~deque(local_34);
                    /* try { // try from 085415df to 085415e3 has its CatchHandler @ 085415f9 */
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::vector
            ((vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>> *)
             (this + 0x48));
  CItemLockTimer::CItemLockTimer((CItemLockTimer *)(this + 0x54));
  return;
}

```

---

## CheckItemLock

```asm
// === 08541a96 item_lock::CItemLock::CheckItemLock  [0x08541a96-0x8541afd] ===
 8541a96:	55                   	push   %ebp
 8541a97:	89 e5                	mov    %esp,%ebp
 8541a99:	83 ec 38             	sub    $0x38,%esp
 8541a9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541a9f:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8541aa2:	8b 45 08             	mov    0x8(%ebp),%eax
 8541aa5:	8d 48 08             	lea    0x8(%eax),%ecx
 8541aa8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541aab:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8541aae:	89 54 24 08          	mov    %edx,0x8(%esp)
 8541ab2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8541ab6:	89 04 24             	mov    %eax,(%esp)
 8541ab9:	e8 00 19 00 00       	call   85433be <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE4findERS4_>
 8541abe:	83 ec 04             	sub    $0x4,%esp
 8541ac1:	8b 45 08             	mov    0x8(%ebp),%eax
 8541ac4:	8d 50 08             	lea    0x8(%eax),%edx
 8541ac7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8541aca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8541ace:	89 04 24             	mov    %eax,(%esp)
 8541ad1:	e8 2a 18 00 00       	call   8543300 <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 8541ad6:	83 ec 04             	sub    $0x4,%esp
 8541ad9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8541adc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541ae0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541ae3:	89 04 24             	mov    %eax,(%esp)
 8541ae6:	e8 3b 18 00 00       	call   8543326 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEneERKS4_>
 8541aeb:	84 c0                	test   %al,%al
 8541aed:	74 07                	je     8541af6 <_ZNK9item_lock9CItemLock13CheckItemLockEh+0x60>
 8541aef:	b8 01 00 00 00       	mov    $0x1,%eax
 8541af4:	eb 05                	jmp    8541afb <_ZNK9item_lock9CItemLock13CheckItemLockEh+0x65>
 8541af6:	b8 00 00 00 00       	mov    $0x0,%eax
 8541afb:	c9                   	leave
 8541afc:	c3                   	ret
 8541afd:	90                   	nop

```

```c
// item_lock::CItemLock::CheckItemLock @ 0x8541a96

/* item_lock::CItemLock::CheckItemLock(unsigned char) const */

bool item_lock::CItemLock::CheckItemLock(uchar param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_14 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_10 [12];
  
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::find((uchar *)local_14);
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  return cVar1 != '\0';
}

```

---

## DoItemLock

```asm
// === 08542192 item_lock::CItemLock::DoItemLock  [0x08542192-0x8542319] ===
 8542192:	55                   	push   %ebp
 8542193:	89 e5                	mov    %esp,%ebp
 8542195:	83 ec 58             	sub    $0x58,%esp
 8542198:	8b 45 14             	mov    0x14(%ebp),%eax
 854219b:	0f b7 d0             	movzwl %ax,%edx
 854219e:	8b 45 10             	mov    0x10(%ebp),%eax
 85421a1:	0f b7 c0             	movzwl %ax,%eax
 85421a4:	89 54 24 08          	mov    %edx,0x8(%esp)
 85421a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85421ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 85421af:	89 04 24             	mov    %eax,(%esp)
 85421b2:	e8 77 ed 13 00       	call   8680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>
 85421b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85421ba:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85421be:	75 0a                	jne    85421ca <_ZN9item_lock9CItemLock10DoItemLockEP5CUserii+0x38>
 85421c0:	b8 00 00 00 00       	mov    $0x0,%eax
 85421c5:	e9 4d 01 00 00       	jmp    8542317 <_ZN9item_lock9CItemLock10DoItemLockEP5CUserii+0x185>
 85421ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85421cd:	83 c0 11             	add    $0x11,%eax
 85421d0:	89 04 24             	mov    %eax,(%esp)
 85421d3:	e8 d0 93 d4 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 85421d8:	88 45 d3             	mov    %al,-0x2d(%ebp)
 85421db:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 85421df:	84 c0                	test   %al,%al
 85421e1:	74 0a                	je     85421ed <_ZN9item_lock9CItemLock10DoItemLockEP5CUserii+0x5b>
 85421e3:	b8 00 00 00 00       	mov    $0x0,%eax
 85421e8:	e9 2a 01 00 00       	jmp    8542317 <_ZN9item_lock9CItemLock10DoItemLockEP5CUserii+0x185>
 85421ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85421f0:	83 c0 20             	add    $0x20,%eax
 85421f3:	89 04 24             	mov    %eax,(%esp)
 85421f6:	e8 03 12 00 00       	call   85433fe <_ZNSt5stackIhSt5dequeIhSaIhEEE3topEv>
 85421fb:	0f b6 00             	movzbl (%eax),%eax
 85421fe:	88 45 d3             	mov    %al,-0x2d(%ebp)
 8542201:	8b 45 08             	mov    0x8(%ebp),%eax
 8542204:	83 c0 20             	add    $0x20,%eax
 8542207:	89 04 24             	mov    %eax,(%esp)
 854220a:	e8 9b 11 00 00       	call   85433aa <_ZNSt5stackIhSt5dequeIhSaIhEEE3popEv>
 854220f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8542212:	89 04 24             	mov    %eax,(%esp)
 8542215:	e8 ec b1 f0 ff       	call   844d406 <_ZN14stItemLockInfoC1Ev>
 854221a:	c6 45 cc 01          	movb   $0x1,-0x34(%ebp)
 854221e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8542225:	e8 74 9a b8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 854222a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 854222d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8542230:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8542233:	89 54 24 08          	mov    %edx,0x8(%esp)
 8542237:	8d 55 d3             	lea    -0x2d(%ebp),%edx
 854223a:	89 54 24 04          	mov    %edx,0x4(%esp)
 854223e:	89 04 24             	mov    %eax,(%esp)
 8542241:	e8 cb 11 00 00       	call   8543411 <_ZSt9make_pairIRhR14stItemLockInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8542246:	83 ec 04             	sub    $0x4,%esp
 8542249:	8d 45 e8             	lea    -0x18(%ebp),%eax
 854224c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542250:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8542253:	89 04 24             	mov    %eax,(%esp)
 8542256:	e8 f5 11 00 00       	call   8543450 <_ZNSt4pairIKh14stItemLockInfoEC1IhS1_EEOS_IT_T0_E>
 854225b:	8b 45 08             	mov    0x8(%ebp),%eax
 854225e:	8d 48 08             	lea    0x8(%eax),%ecx
 8542261:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8542264:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8542267:	89 54 24 08          	mov    %edx,0x8(%esp)
 854226b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 854226f:	89 04 24             	mov    %eax,(%esp)
 8542272:	e8 11 12 00 00       	call   8543488 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE6insertERKS5_>
 8542277:	83 ec 04             	sub    $0x4,%esp
 854227a:	8b 45 08             	mov    0x8(%ebp),%eax
 854227d:	89 04 24             	mov    %eax,(%esp)
 8542280:	e8 3f 69 b8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8542285:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8542289:	0f b6 c0             	movzbl %al,%eax
 854228c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 854228f:	83 c2 11             	add    $0x11,%edx
 8542292:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542296:	89 14 24             	mov    %edx,(%esp)
 8542299:	e8 da b1 f0 ff       	call   844d478 <_ZN17stAmplifyOption_t7SetLockEh>
 854229e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85422a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 85422a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85422a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85422ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85422af:	89 04 24             	mov    %eax,(%esp)
 85422b2:	e8 97 fb ff ff       	call   8541e4e <_ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item>
 85422b7:	8b 45 14             	mov    0x14(%ebp),%eax
 85422ba:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85422be:	8b 45 10             	mov    0x10(%ebp),%eax
 85422c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 85422c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85422c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85422cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85422cf:	89 04 24             	mov    %eax,(%esp)
 85422d2:	e8 c9 fb ff ff       	call   8541ea0 <_ZN9item_lock9CItemLock19SendRequestItemLockEP5CUserii>
 85422d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85422da:	8b 50 07             	mov    0x7(%eax),%edx
 85422dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85422e0:	8b 40 02             	mov    0x2(%eax),%eax
 85422e3:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85422e6:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 85422ec:	89 54 24 14          	mov    %edx,0x14(%esp)
 85422f0:	89 44 24 10          	mov    %eax,0x10(%esp)
 85422f4:	8b 45 14             	mov    0x14(%ebp),%eax
 85422f7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85422fb:	8b 45 10             	mov    0x10(%ebp),%eax
 85422fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 8542302:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8542309:	00 
 854230a:	89 0c 24             	mov    %ecx,(%esp)
 854230d:	e8 f6 74 14 00       	call   8689808 <_ZN15cUserHistoryLog16ItemLockUsingLogEhiiii>
 8542312:	b8 01 00 00 00       	mov    $0x1,%eax
 8542317:	c9                   	leave
 8542318:	c3                   	ret
 8542319:	90                   	nop

```

```c
// item_lock::CItemLock::DoItemLock @ 0x8542192

/* item_lock::CItemLock::DoItemLock(CUser*, int, int) */

undefined4 __thiscall
item_lock::CItemLock::DoItemLock(CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  stItemLockInfo *psVar2;
  undefined4 local_3c;
  undefined1 local_38;
  stItemLockInfo local_31;
  pair local_30 [8];
  pair<unsigned_char_const,stItemLockInfo> local_28 [12];
  uchar local_1c [12];
  Inven_Item *local_10;
  
  local_10 = (Inven_Item *)CUser::GetCurCharacInventoryRef(param_1,(ushort)param_2,(ushort)param_3);
  if (local_10 == (Inven_Item *)0x0) {
    uVar1 = 0;
  }
  else {
    local_31 = (stItemLockInfo)stAmplifyOption_t::GetLock((stAmplifyOption_t *)(local_10 + 0x11));
    if (local_31 == (stItemLockInfo)0x0) {
      psVar2 = (stItemLockInfo *)
               std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::
               top();
      local_31 = *psVar2;
      std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::pop
                ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
                 (this + 0x20));
      stItemLockInfo::stItemLockInfo((stItemLockInfo *)&local_3c);
      local_38 = 1;
      local_3c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      std::make_pair<unsigned_char&,stItemLockInfo&>(local_1c,&local_31);
      std::pair<unsigned_char_const,stItemLockInfo>::pair<unsigned_char,stItemLockInfo>
                (local_28,local_1c);
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::insert(local_30);
      charac_expand::CData::alter((CData *)this);
      stAmplifyOption_t::SetLock((stAmplifyOption_t *)(local_10 + 0x11),(uchar)local_31);
      UpdateItem(this,param_1,local_10);
      SendRequestItemLock(this,param_1,param_2,param_3);
      cUserHistoryLog::ItemLockUsingLog
                ((cUserHistoryLog *)(param_1 + 0x79700),'\0',param_2,param_3,*(int *)(local_10 + 2),
                 *(int *)(local_10 + 7));
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## DoItemUnlock

```asm
// === 0854231a item_lock::CItemLock::DoItemUnlock  [0x0854231a-0x85424c1] ===
 854231a:	55                   	push   %ebp
 854231b:	89 e5                	mov    %esp,%ebp
 854231d:	53                   	push   %ebx
 854231e:	83 ec 44             	sub    $0x44,%esp
 8542321:	8b 45 14             	mov    0x14(%ebp),%eax
 8542324:	0f b7 d0             	movzwl %ax,%edx
 8542327:	8b 45 10             	mov    0x10(%ebp),%eax
 854232a:	0f b7 c0             	movzwl %ax,%eax
 854232d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8542331:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542335:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542338:	89 04 24             	mov    %eax,(%esp)
 854233b:	e8 ee eb 13 00       	call   8680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>
 8542340:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8542343:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8542347:	75 0a                	jne    8542353 <_ZN9item_lock9CItemLock12DoItemUnlockEP5CUserii+0x39>
 8542349:	b8 00 00 00 00       	mov    $0x0,%eax
 854234e:	e9 69 01 00 00       	jmp    85424bc <_ZN9item_lock9CItemLock12DoItemUnlockEP5CUserii+0x1a2>
 8542353:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8542356:	83 c0 11             	add    $0x11,%eax
 8542359:	89 04 24             	mov    %eax,(%esp)
 854235c:	e8 47 92 d4 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 8542361:	88 45 eb             	mov    %al,-0x15(%ebp)
 8542364:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8542368:	84 c0                	test   %al,%al
 854236a:	75 0a                	jne    8542376 <_ZN9item_lock9CItemLock12DoItemUnlockEP5CUserii+0x5c>
 854236c:	b8 00 00 00 00       	mov    $0x0,%eax
 8542371:	e9 46 01 00 00       	jmp    85424bc <_ZN9item_lock9CItemLock12DoItemUnlockEP5CUserii+0x1a2>
 8542376:	8b 45 08             	mov    0x8(%ebp),%eax
 8542379:	8d 48 08             	lea    0x8(%eax),%ecx
 854237c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 854237f:	8d 55 eb             	lea    -0x15(%ebp),%edx
 8542382:	89 54 24 08          	mov    %edx,0x8(%esp)
 8542386:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 854238a:	89 04 24             	mov    %eax,(%esp)
 854238d:	e8 22 11 00 00       	call   85434b4 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE4findERS4_>
 8542392:	83 ec 04             	sub    $0x4,%esp
 8542395:	8b 45 08             	mov    0x8(%ebp),%eax
 8542398:	8d 50 08             	lea    0x8(%eax),%edx
 854239b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854239e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85423a2:	89 04 24             	mov    %eax,(%esp)
 85423a5:	e8 ca 0e 00 00       	call   8543274 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 85423aa:	83 ec 04             	sub    $0x4,%esp
 85423ad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85423b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85423b4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85423b7:	89 04 24             	mov    %eax,(%esp)
 85423ba:	e8 21 11 00 00       	call   85434e0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEeqERKS4_>
 85423bf:	84 c0                	test   %al,%al
 85423c1:	74 0a                	je     85423cd <_ZN9item_lock9CItemLock12DoItemUnlockEP5CUserii+0xb3>
 85423c3:	b8 00 00 00 00       	mov    $0x0,%eax
 85423c8:	e9 ef 00 00 00       	jmp    85424bc <_ZN9item_lock9CItemLock12DoItemUnlockEP5CUserii+0x1a2>
 85423cd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85423d0:	89 04 24             	mov    %eax,(%esp)
 85423d3:	e8 f4 0e 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 85423d8:	c6 40 08 02          	movb   $0x2,0x8(%eax)
 85423dc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85423df:	89 04 24             	mov    %eax,(%esp)
 85423e2:	e8 e5 0e 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 85423e7:	89 c3                	mov    %eax,%ebx
 85423e9:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85423f0:	e8 a9 98 b8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85423f5:	89 43 04             	mov    %eax,0x4(%ebx)
 85423f8:	8b 45 08             	mov    0x8(%ebp),%eax
 85423fb:	89 04 24             	mov    %eax,(%esp)
 85423fe:	e8 c1 67 b8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8542403:	8b 45 08             	mov    0x8(%ebp),%eax
 8542406:	8d 50 54             	lea    0x54(%eax),%edx
 8542409:	8b 45 0c             	mov    0xc(%ebp),%eax
 854240c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542410:	89 14 24             	mov    %edx,(%esp)
 8542413:	e8 64 f0 ff ff       	call   854147c <_ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser>
 8542418:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 854241f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542422:	89 04 24             	mov    %eax,(%esp)
 8542425:	e8 a2 0e 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 854242a:	8b 40 04             	mov    0x4(%eax),%eax
 854242d:	8d 98 80 f4 03 00    	lea    0x3f480(%eax),%ebx
 8542433:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 854243a:	e8 5f 98 b8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 854243f:	89 da                	mov    %ebx,%edx
 8542441:	29 c2                	sub    %eax,%edx
 8542443:	89 d0                	mov    %edx,%eax
 8542445:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8542448:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 854244c:	79 07                	jns    8542455 <_ZN9item_lock9CItemLock12DoItemUnlockEP5CUserii+0x13b>
 854244e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8542455:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8542458:	89 44 24 10          	mov    %eax,0x10(%esp)
 854245c:	8b 45 14             	mov    0x14(%ebp),%eax
 854245f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8542463:	8b 45 10             	mov    0x10(%ebp),%eax
 8542466:	89 44 24 08          	mov    %eax,0x8(%esp)
 854246a:	8b 45 0c             	mov    0xc(%ebp),%eax
 854246d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542471:	8b 45 08             	mov    0x8(%ebp),%eax
 8542474:	89 04 24             	mov    %eax,(%esp)
 8542477:	e8 de fa ff ff       	call   8541f5a <_ZN9item_lock9CItemLock21SendRequestItemUnlockEP5CUseriii>
 854247c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854247f:	8b 50 07             	mov    0x7(%eax),%edx
 8542482:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8542485:	8b 40 02             	mov    0x2(%eax),%eax
 8542488:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 854248b:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 8542491:	89 54 24 14          	mov    %edx,0x14(%esp)
 8542495:	89 44 24 10          	mov    %eax,0x10(%esp)
 8542499:	8b 45 14             	mov    0x14(%ebp),%eax
 854249c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85424a0:	8b 45 10             	mov    0x10(%ebp),%eax
 85424a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 85424a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85424ae:	00 
 85424af:	89 0c 24             	mov    %ecx,(%esp)
 85424b2:	e8 51 73 14 00       	call   8689808 <_ZN15cUserHistoryLog16ItemLockUsingLogEhiiii>
 85424b7:	b8 01 00 00 00       	mov    $0x1,%eax
 85424bc:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85424bf:	c9                   	leave
 85424c0:	c3                   	ret
 85424c1:	90                   	nop

```

```c
// item_lock::CItemLock::DoItemUnlock @ 0x854231a

/* item_lock::CItemLock::DoItemUnlock(CUser*, int, int) */

undefined4 __thiscall
item_lock::CItemLock::DoItemUnlock(CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_20 [7];
  char local_19;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = CUser::GetCurCharacInventoryRef(param_1,(ushort)param_2,(ushort)param_3);
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    local_19 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(local_14 + 0x11));
    if (local_19 == '\0') {
      uVar2 = 0;
    }
    else {
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::find((uchar *)local_20);
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator==
                        (local_20,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                          (local_20);
        *(undefined1 *)(iVar3 + 8) = 2;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                          (local_20);
        uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        *(undefined4 *)(iVar3 + 4) = uVar2;
        charac_expand::CData::alter((CData *)this);
        CItemLockTimer::IncreaseItemLockTimer((CItemLockTimer *)(this + 0x54),param_1);
        local_10 = 0;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                          (local_20);
        iVar3 = *(int *)(iVar3 + 4);
        local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_10 = (iVar3 + 0x3f480) - local_10;
        if (local_10 < 0) {
          local_10 = 0;
        }
        SendRequestItemUnlock(this,param_1,param_2,param_3,local_10);
        cUserHistoryLog::ItemLockUsingLog
                  ((cUserHistoryLog *)(param_1 + 0x79700),'\x01',param_2,param_3,
                   *(int *)(local_14 + 2),*(int *)(local_14 + 7));
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## DoItemUnlockCancel

```asm
// === 085424c2 item_lock::CItemLock::DoItemUnlockCancel  [0x085424c2-0x854261d] ===
 85424c2:	55                   	push   %ebp
 85424c3:	89 e5                	mov    %esp,%ebp
 85424c5:	53                   	push   %ebx
 85424c6:	83 ec 34             	sub    $0x34,%esp
 85424c9:	8b 45 14             	mov    0x14(%ebp),%eax
 85424cc:	0f b7 d0             	movzwl %ax,%edx
 85424cf:	8b 45 10             	mov    0x10(%ebp),%eax
 85424d2:	0f b7 c0             	movzwl %ax,%eax
 85424d5:	89 54 24 08          	mov    %edx,0x8(%esp)
 85424d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85424dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85424e0:	89 04 24             	mov    %eax,(%esp)
 85424e3:	e8 46 ea 13 00       	call   8680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>
 85424e8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85424eb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85424ef:	75 0a                	jne    85424fb <_ZN9item_lock9CItemLock18DoItemUnlockCancelEP5CUserii+0x39>
 85424f1:	b8 00 00 00 00       	mov    $0x0,%eax
 85424f6:	e9 1e 01 00 00       	jmp    8542619 <_ZN9item_lock9CItemLock18DoItemUnlockCancelEP5CUserii+0x157>
 85424fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85424fe:	83 c0 11             	add    $0x11,%eax
 8542501:	89 04 24             	mov    %eax,(%esp)
 8542504:	e8 9f 90 d4 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 8542509:	88 45 ef             	mov    %al,-0x11(%ebp)
 854250c:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8542510:	84 c0                	test   %al,%al
 8542512:	75 0a                	jne    854251e <_ZN9item_lock9CItemLock18DoItemUnlockCancelEP5CUserii+0x5c>
 8542514:	b8 00 00 00 00       	mov    $0x0,%eax
 8542519:	e9 fb 00 00 00       	jmp    8542619 <_ZN9item_lock9CItemLock18DoItemUnlockCancelEP5CUserii+0x157>
 854251e:	8b 45 08             	mov    0x8(%ebp),%eax
 8542521:	8d 48 08             	lea    0x8(%eax),%ecx
 8542524:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8542527:	8d 55 ef             	lea    -0x11(%ebp),%edx
 854252a:	89 54 24 08          	mov    %edx,0x8(%esp)
 854252e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8542532:	89 04 24             	mov    %eax,(%esp)
 8542535:	e8 7a 0f 00 00       	call   85434b4 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE4findERS4_>
 854253a:	83 ec 04             	sub    $0x4,%esp
 854253d:	8b 45 08             	mov    0x8(%ebp),%eax
 8542540:	8d 50 08             	lea    0x8(%eax),%edx
 8542543:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8542546:	89 54 24 04          	mov    %edx,0x4(%esp)
 854254a:	89 04 24             	mov    %eax,(%esp)
 854254d:	e8 22 0d 00 00       	call   8543274 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 8542552:	83 ec 04             	sub    $0x4,%esp
 8542555:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8542558:	89 44 24 04          	mov    %eax,0x4(%esp)
 854255c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 854255f:	89 04 24             	mov    %eax,(%esp)
 8542562:	e8 79 0f 00 00       	call   85434e0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEeqERKS4_>
 8542567:	84 c0                	test   %al,%al
 8542569:	74 0a                	je     8542575 <_ZN9item_lock9CItemLock18DoItemUnlockCancelEP5CUserii+0xb3>
 854256b:	b8 00 00 00 00       	mov    $0x0,%eax
 8542570:	e9 a4 00 00 00       	jmp    8542619 <_ZN9item_lock9CItemLock18DoItemUnlockCancelEP5CUserii+0x157>
 8542575:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8542578:	89 04 24             	mov    %eax,(%esp)
 854257b:	e8 4c 0d 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542580:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 8542584:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8542587:	89 04 24             	mov    %eax,(%esp)
 854258a:	e8 3d 0d 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 854258f:	89 c3                	mov    %eax,%ebx
 8542591:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8542598:	e8 01 97 b8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 854259d:	89 43 04             	mov    %eax,0x4(%ebx)
 85425a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85425a3:	89 04 24             	mov    %eax,(%esp)
 85425a6:	e8 19 66 b8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85425ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85425ae:	83 c0 54             	add    $0x54,%eax
 85425b1:	89 04 24             	mov    %eax,(%esp)
 85425b4:	e8 37 ef ff ff       	call   85414f0 <_ZN9item_lock14CItemLockTimer21DecreaseItemLockTimerEv>
 85425b9:	8b 45 14             	mov    0x14(%ebp),%eax
 85425bc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85425c0:	8b 45 10             	mov    0x10(%ebp),%eax
 85425c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 85425c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85425ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85425ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85425d1:	89 04 24             	mov    %eax,(%esp)
 85425d4:	e8 4d fa ff ff       	call   8542026 <_ZN9item_lock9CItemLock27SendRequestItemUnlockCancelEP5CUserii>
 85425d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85425dc:	8b 50 07             	mov    0x7(%eax),%edx
 85425df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85425e2:	8b 40 02             	mov    0x2(%eax),%eax
 85425e5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85425e8:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 85425ee:	89 54 24 14          	mov    %edx,0x14(%esp)
 85425f2:	89 44 24 10          	mov    %eax,0x10(%esp)
 85425f6:	8b 45 14             	mov    0x14(%ebp),%eax
 85425f9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85425fd:	8b 45 10             	mov    0x10(%ebp),%eax
 8542600:	89 44 24 08          	mov    %eax,0x8(%esp)
 8542604:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 854260b:	00 
 854260c:	89 0c 24             	mov    %ecx,(%esp)
 854260f:	e8 f4 71 14 00       	call   8689808 <_ZN15cUserHistoryLog16ItemLockUsingLogEhiiii>
 8542614:	b8 01 00 00 00       	mov    $0x1,%eax
 8542619:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 854261c:	c9                   	leave
 854261d:	c3                   	ret

```

```c
// item_lock::CItemLock::DoItemUnlockCancel @ 0x85424c2

/* item_lock::CItemLock::DoItemUnlockCancel(CUser*, int, int) */

undefined4 __thiscall
item_lock::CItemLock::DoItemUnlockCancel(CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_1c [7];
  char local_15;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_14 [4];
  int local_10;
  
  local_10 = CUser::GetCurCharacInventoryRef(param_1,(ushort)param_2,(ushort)param_3);
  if (local_10 == 0) {
    uVar2 = 0;
  }
  else {
    local_15 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(local_10 + 0x11));
    if (local_15 == '\0') {
      uVar2 = 0;
    }
    else {
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::find((uchar *)local_1c);
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator==
                        (local_1c,(_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                          (local_1c);
        *(undefined1 *)(iVar3 + 8) = 1;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                          (local_1c);
        uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        *(undefined4 *)(iVar3 + 4) = uVar2;
        charac_expand::CData::alter((CData *)this);
        CItemLockTimer::DecreaseItemLockTimer((CItemLockTimer *)(this + 0x54));
        SendRequestItemUnlockCancel(this,param_1,param_2,param_3);
        cUserHistoryLog::ItemLockUsingLog
                  ((cUserHistoryLog *)(param_1 + 0x79700),'\x02',param_2,param_3,
                   *(int *)(local_10 + 2),*(int *)(local_10 + 7));
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## GetItemLockInfo

```asm
// === 0854261e item_lock::CItemLock::GetItemLockInfo  [0x0854261e-0x85426a5] ===
 854261e:	55                   	push   %ebp
 854261f:	89 e5                	mov    %esp,%ebp
 8542621:	83 ec 38             	sub    $0x38,%esp
 8542624:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542627:	88 45 e4             	mov    %al,-0x1c(%ebp)
 854262a:	8b 45 08             	mov    0x8(%ebp),%eax
 854262d:	8d 48 08             	lea    0x8(%eax),%ecx
 8542630:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8542633:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8542636:	89 54 24 08          	mov    %edx,0x8(%esp)
 854263a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 854263e:	89 04 24             	mov    %eax,(%esp)
 8542641:	e8 78 0d 00 00       	call   85433be <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE4findERS4_>
 8542646:	83 ec 04             	sub    $0x4,%esp
 8542649:	8b 45 08             	mov    0x8(%ebp),%eax
 854264c:	8d 50 08             	lea    0x8(%eax),%edx
 854264f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8542652:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542656:	89 04 24             	mov    %eax,(%esp)
 8542659:	e8 a2 0c 00 00       	call   8543300 <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 854265e:	83 ec 04             	sub    $0x4,%esp
 8542661:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8542664:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542668:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854266b:	89 04 24             	mov    %eax,(%esp)
 854266e:	e8 b3 0c 00 00       	call   8543326 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEneERKS4_>
 8542673:	84 c0                	test   %al,%al
 8542675:	74 27                	je     854269e <_ZNK9item_lock9CItemLock15GetItemLockInfoEhRi+0x80>
 8542677:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854267a:	89 04 24             	mov    %eax,(%esp)
 854267d:	e8 d6 0c 00 00       	call   8543358 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542682:	8b 50 04             	mov    0x4(%eax),%edx
 8542685:	8b 45 10             	mov    0x10(%ebp),%eax
 8542688:	89 10                	mov    %edx,(%eax)
 854268a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854268d:	89 04 24             	mov    %eax,(%esp)
 8542690:	e8 c3 0c 00 00       	call   8543358 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542695:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8542699:	0f b6 c0             	movzbl %al,%eax
 854269c:	eb 05                	jmp    85426a3 <_ZNK9item_lock9CItemLock15GetItemLockInfoEhRi+0x85>
 854269e:	b8 00 00 00 00       	mov    $0x0,%eax
 85426a3:	c9                   	leave
 85426a4:	c3                   	ret
 85426a5:	90                   	nop

```

```c
// item_lock::CItemLock::GetItemLockInfo @ 0x854261e

/* item_lock::CItemLock::GetItemLockInfo(unsigned char, int&) const */

undefined1 __thiscall
item_lock::CItemLock::GetItemLockInfo(CItemLock *this,uchar param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_14 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_10 [12];
  
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::find((uchar *)local_14);
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_14);
    *param_2 = *(int *)(iVar3 + 4);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_14);
    uVar2 = *(undefined1 *)(iVar3 + 8);
  }
  return uVar2;
}

```

---

## IsAbleItemLock

```asm
// === 08541afe item_lock::CItemLock::IsAbleItemLock  [0x08541afe-0x8541b29] ===
 8541afe:	55                   	push   %ebp
 8541aff:	89 e5                	mov    %esp,%ebp
 8541b01:	83 ec 28             	sub    $0x28,%esp
 8541b04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541b07:	88 45 f4             	mov    %al,-0xc(%ebp)
 8541b0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8541b0d:	83 c0 20             	add    $0x20,%eax
 8541b10:	89 04 24             	mov    %eax,(%esp)
 8541b13:	e8 7e 18 00 00       	call   8543396 <_ZNKSt5stackIhSt5dequeIhSaIhEEE5emptyEv>
 8541b18:	84 c0                	test   %al,%al
 8541b1a:	74 07                	je     8541b23 <_ZNK9item_lock9CItemLock14IsAbleItemLockEh+0x25>
 8541b1c:	b8 16 00 00 00       	mov    $0x16,%eax
 8541b21:	eb 05                	jmp    8541b28 <_ZNK9item_lock9CItemLock14IsAbleItemLockEh+0x2a>
 8541b23:	b8 00 00 00 00       	mov    $0x0,%eax
 8541b28:	c9                   	leave
 8541b29:	c3                   	ret

```

```c
// item_lock::CItemLock::IsAbleItemLock @ 0x8541afe

/* item_lock::CItemLock::IsAbleItemLock(unsigned char) const */

undefined4 item_lock::CItemLock::IsAbleItemLock(uchar param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined3 in_stack_00000005;
  
  cVar1 = std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::empty
                    ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *
                     )(_param_1 + 0x20));
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x16;
  }
  return uVar2;
}

```

---

## IsAbleItemUnlock

```asm
// === 08541b2a item_lock::CItemLock::IsAbleItemUnlock  [0x08541b2a-0x8541baf] ===
 8541b2a:	55                   	push   %ebp
 8541b2b:	89 e5                	mov    %esp,%ebp
 8541b2d:	83 ec 38             	sub    $0x38,%esp
 8541b30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541b33:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8541b36:	8b 45 08             	mov    0x8(%ebp),%eax
 8541b39:	8d 48 08             	lea    0x8(%eax),%ecx
 8541b3c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541b3f:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8541b42:	89 54 24 08          	mov    %edx,0x8(%esp)
 8541b46:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8541b4a:	89 04 24             	mov    %eax,(%esp)
 8541b4d:	e8 6c 18 00 00       	call   85433be <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE4findERS4_>
 8541b52:	83 ec 04             	sub    $0x4,%esp
 8541b55:	8b 45 08             	mov    0x8(%ebp),%eax
 8541b58:	8d 50 08             	lea    0x8(%eax),%edx
 8541b5b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8541b5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8541b62:	89 04 24             	mov    %eax,(%esp)
 8541b65:	e8 96 17 00 00       	call   8543300 <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 8541b6a:	83 ec 04             	sub    $0x4,%esp
 8541b6d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8541b70:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541b74:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541b77:	89 04 24             	mov    %eax,(%esp)
 8541b7a:	e8 6b 18 00 00       	call   85433ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEeqERKS4_>
 8541b7f:	84 c0                	test   %al,%al
 8541b81:	74 07                	je     8541b8a <_ZNK9item_lock9CItemLock16IsAbleItemUnlockEhRi+0x60>
 8541b83:	b8 13 00 00 00       	mov    $0x13,%eax
 8541b88:	eb 24                	jmp    8541bae <_ZNK9item_lock9CItemLock16IsAbleItemUnlockEhRi+0x84>
 8541b8a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541b8d:	89 04 24             	mov    %eax,(%esp)
 8541b90:	e8 c3 17 00 00       	call   8543358 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8541b95:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8541b99:	3c 01                	cmp    $0x1,%al
 8541b9b:	0f 95 c0             	setne  %al
 8541b9e:	84 c0                	test   %al,%al
 8541ba0:	74 07                	je     8541ba9 <_ZNK9item_lock9CItemLock16IsAbleItemUnlockEhRi+0x7f>
 8541ba2:	b8 13 00 00 00       	mov    $0x13,%eax
 8541ba7:	eb 05                	jmp    8541bae <_ZNK9item_lock9CItemLock16IsAbleItemUnlockEhRi+0x84>
 8541ba9:	b8 00 00 00 00       	mov    $0x0,%eax
 8541bae:	c9                   	leave
 8541baf:	c3                   	ret

```

```c
// item_lock::CItemLock::IsAbleItemUnlock @ 0x8541b2a

/* item_lock::CItemLock::IsAbleItemUnlock(unsigned char, int&) const */

undefined4 item_lock::CItemLock::IsAbleItemUnlock(uchar param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_14 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_10 [12];
  
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::find((uchar *)local_14);
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_14);
    if (*(char *)(iVar3 + 8) == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x13;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}

```

---

## IsAbleItemUnlockCancel

```asm
// === 08541bb0 item_lock::CItemLock::IsAbleItemUnlockCancel  [0x08541bb0-0x8541c35] ===
 8541bb0:	55                   	push   %ebp
 8541bb1:	89 e5                	mov    %esp,%ebp
 8541bb3:	83 ec 38             	sub    $0x38,%esp
 8541bb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541bb9:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8541bbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8541bbf:	8d 48 08             	lea    0x8(%eax),%ecx
 8541bc2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541bc5:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8541bc8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8541bcc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8541bd0:	89 04 24             	mov    %eax,(%esp)
 8541bd3:	e8 e6 17 00 00       	call   85433be <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE4findERS4_>
 8541bd8:	83 ec 04             	sub    $0x4,%esp
 8541bdb:	8b 45 08             	mov    0x8(%ebp),%eax
 8541bde:	8d 50 08             	lea    0x8(%eax),%edx
 8541be1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8541be4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8541be8:	89 04 24             	mov    %eax,(%esp)
 8541beb:	e8 10 17 00 00       	call   8543300 <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 8541bf0:	83 ec 04             	sub    $0x4,%esp
 8541bf3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8541bf6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541bfa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541bfd:	89 04 24             	mov    %eax,(%esp)
 8541c00:	e8 e5 17 00 00       	call   85433ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEeqERKS4_>
 8541c05:	84 c0                	test   %al,%al
 8541c07:	74 07                	je     8541c10 <_ZNK9item_lock9CItemLock22IsAbleItemUnlockCancelEh+0x60>
 8541c09:	b8 13 00 00 00       	mov    $0x13,%eax
 8541c0e:	eb 24                	jmp    8541c34 <_ZNK9item_lock9CItemLock22IsAbleItemUnlockCancelEh+0x84>
 8541c10:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541c13:	89 04 24             	mov    %eax,(%esp)
 8541c16:	e8 3d 17 00 00       	call   8543358 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8541c1b:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8541c1f:	3c 02                	cmp    $0x2,%al
 8541c21:	0f 95 c0             	setne  %al
 8541c24:	84 c0                	test   %al,%al
 8541c26:	74 07                	je     8541c2f <_ZNK9item_lock9CItemLock22IsAbleItemUnlockCancelEh+0x7f>
 8541c28:	b8 13 00 00 00       	mov    $0x13,%eax
 8541c2d:	eb 05                	jmp    8541c34 <_ZNK9item_lock9CItemLock22IsAbleItemUnlockCancelEh+0x84>
 8541c2f:	b8 00 00 00 00       	mov    $0x0,%eax
 8541c34:	c9                   	leave
 8541c35:	c3                   	ret

```

```c
// item_lock::CItemLock::IsAbleItemUnlockCancel @ 0x8541bb0

/* item_lock::CItemLock::IsAbleItemUnlockCancel(unsigned char) const */

undefined4 item_lock::CItemLock::IsAbleItemUnlockCancel(uchar param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_14 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_10 [12];
  
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::find((uchar *)local_14);
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_14);
    if (*(char *)(iVar3 + 8) == '\x02') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x13;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}

```

---

## MakeItemLockPacket

```asm
// === 085426a6 item_lock::CItemLock::MakeItemLockPacket  [0x085426a6-0x854279f] ===
 85426a6:	55                   	push   %ebp
 85426a7:	89 e5                	mov    %esp,%ebp
 85426a9:	53                   	push   %ebx
 85426aa:	83 ec 34             	sub    $0x34,%esp
 85426ad:	8b 45 10             	mov    0x10(%ebp),%eax
 85426b0:	88 45 e4             	mov    %al,-0x1c(%ebp)
 85426b3:	8b 45 08             	mov    0x8(%ebp),%eax
 85426b6:	8d 48 08             	lea    0x8(%eax),%ecx
 85426b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85426bc:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85426bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 85426c3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85426c7:	89 04 24             	mov    %eax,(%esp)
 85426ca:	e8 ef 0c 00 00       	call   85433be <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE4findERS4_>
 85426cf:	83 ec 04             	sub    $0x4,%esp
 85426d2:	8b 45 08             	mov    0x8(%ebp),%eax
 85426d5:	8d 50 08             	lea    0x8(%eax),%edx
 85426d8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85426db:	89 54 24 04          	mov    %edx,0x4(%esp)
 85426df:	89 04 24             	mov    %eax,(%esp)
 85426e2:	e8 19 0c 00 00       	call   8543300 <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 85426e7:	83 ec 04             	sub    $0x4,%esp
 85426ea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85426ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85426f1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85426f4:	89 04 24             	mov    %eax,(%esp)
 85426f7:	e8 2a 0c 00 00       	call   8543326 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEneERKS4_>
 85426fc:	84 c0                	test   %al,%al
 85426fe:	0f 84 83 00 00 00    	je     8542787 <_ZNK9item_lock9CItemLock18MakeItemLockPacketER11PacketGuardh+0xe1>
 8542704:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542707:	89 04 24             	mov    %eax,(%esp)
 854270a:	e8 49 0c 00 00       	call   8543358 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 854270f:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8542713:	0f b6 d0             	movzbl %al,%edx
 8542716:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542719:	89 54 24 04          	mov    %edx,0x4(%esp)
 854271d:	89 04 24             	mov    %eax,(%esp)
 8542720:	e8 fb 91 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8542725:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542728:	89 04 24             	mov    %eax,(%esp)
 854272b:	e8 28 0c 00 00       	call   8543358 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542730:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8542734:	3c 02                	cmp    $0x2,%al
 8542736:	0f 94 c0             	sete   %al
 8542739:	84 c0                	test   %al,%al
 854273b:	74 5d                	je     854279a <_ZNK9item_lock9CItemLock18MakeItemLockPacketER11PacketGuardh+0xf4>
 854273d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542740:	89 04 24             	mov    %eax,(%esp)
 8542743:	e8 10 0c 00 00       	call   8543358 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542748:	8b 40 04             	mov    0x4(%eax),%eax
 854274b:	8d 98 80 f4 03 00    	lea    0x3f480(%eax),%ebx
 8542751:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8542758:	e8 41 95 b8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 854275d:	89 da                	mov    %ebx,%edx
 854275f:	29 c2                	sub    %eax,%edx
 8542761:	89 d0                	mov    %edx,%eax
 8542763:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8542766:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 854276a:	79 07                	jns    8542773 <_ZNK9item_lock9CItemLock18MakeItemLockPacketER11PacketGuardh+0xcd>
 854276c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8542773:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542776:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8542779:	89 54 24 04          	mov    %edx,0x4(%esp)
 854277d:	89 04 24             	mov    %eax,(%esp)
 8542780:	e8 b7 91 b8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8542785:	eb 13                	jmp    854279a <_ZNK9item_lock9CItemLock18MakeItemLockPacketER11PacketGuardh+0xf4>
 8542787:	8b 45 0c             	mov    0xc(%ebp),%eax
 854278a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8542791:	00 
 8542792:	89 04 24             	mov    %eax,(%esp)
 8542795:	e8 86 91 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854279a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 854279d:	c9                   	leave
 854279e:	c3                   	ret
 854279f:	90                   	nop

```

```c
// item_lock::CItemLock::MakeItemLockPacket @ 0x85426a6

/* item_lock::CItemLock::MakeItemLockPacket(PacketGuard&, unsigned char) const */

void item_lock::CItemLock::MakeItemLockPacket(PacketGuard *param_1,uchar param_2)

{
  char cVar1;
  int iVar2;
  undefined3 in_stack_00000009;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_18 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_14 [4];
  int local_10;
  
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::find((uchar *)local_18);
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                    (local_18,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_byte(_param_2,0);
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_18);
    InterfacePacketBuf::put_byte(_param_2,(uint)*(byte *)(iVar2 + 8));
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_18);
    if (*(char *)(iVar2 + 8) == '\x02') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
              operator->(local_18);
      iVar2 = *(int *)(iVar2 + 4);
      local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_10 = (iVar2 + 0x3f480) - local_10;
      if (local_10 < 0) {
        local_10 = 0;
      }
      InterfacePacketBuf::put_int(_param_2,local_10);
    }
  }
  return;
}

```

---

## OnItemUnlockWaitTimeout

```asm
// === 08542a6a item_lock::CItemLock::OnItemUnlockWaitTimeout  [0x08542a6a-0x8542a89] ===
 8542a6a:	55                   	push   %ebp
 8542a6b:	89 e5                	mov    %esp,%ebp
 8542a6d:	83 ec 18             	sub    $0x18,%esp
 8542a70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542a73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542a77:	8b 45 08             	mov    0x8(%ebp),%eax
 8542a7a:	89 04 24             	mov    %eax,(%esp)
 8542a7d:	e8 fe 00 00 00       	call   8542b80 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser>
 8542a82:	b8 01 00 00 00       	mov    $0x1,%eax
 8542a87:	c9                   	leave
 8542a88:	c3                   	ret
 8542a89:	90                   	nop

```

```c
// item_lock::CItemLock::OnItemUnlockWaitTimeout @ 0x8542a6a

/* item_lock::CItemLock::OnItemUnlockWaitTimeout(CUser*) */

undefined4 __thiscall item_lock::CItemLock::OnItemUnlockWaitTimeout(CItemLock *this,CUser *param_1)

{
  PopItemLock(this,param_1);
  return 1;
}

```

---

## PopItemLock

```asm
// === 08542b80 item_lock::CItemLock::PopItemLock  [0x08542b80-0x8542e11] ===
 8542b80:	55                   	push   %ebp
 8542b81:	89 e5                	mov    %esp,%ebp
 8542b83:	56                   	push   %esi
 8542b84:	53                   	push   %ebx
 8542b85:	83 ec 40             	sub    $0x40,%esp
 8542b88:	8b 45 08             	mov    0x8(%ebp),%eax
 8542b8b:	83 c0 54             	add    $0x54,%eax
 8542b8e:	89 04 24             	mov    %eax,(%esp)
 8542b91:	e8 a4 04 00 00       	call   854303a <_ZN9item_lock14CItemLockTimer13GetTimerCountEv>
 8542b96:	85 c0                	test   %eax,%eax
 8542b98:	0f 94 c0             	sete   %al
 8542b9b:	84 c0                	test   %al,%al
 8542b9d:	0f 85 61 02 00 00    	jne    8542e04 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x284>
 8542ba3:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8542baa:	e8 ef 90 b8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8542baf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8542bb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8542bb5:	8d 50 08             	lea    0x8(%eax),%edx
 8542bb8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542bbb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542bbf:	89 04 24             	mov    %eax,(%esp)
 8542bc2:	e8 87 06 00 00       	call   854324e <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE5beginEv>
 8542bc7:	83 ec 04             	sub    $0x4,%esp
 8542bca:	e9 ec 01 00 00       	jmp    8542dbb <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x23b>
 8542bcf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542bd2:	89 04 24             	mov    %eax,(%esp)
 8542bd5:	e8 f2 06 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542bda:	8b 40 04             	mov    0x4(%eax),%eax
 8542bdd:	05 80 f4 03 00       	add    $0x3f480,%eax
 8542be2:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8542be5:	7f 1a                	jg     8542c01 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x81>
 8542be7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542bea:	89 04 24             	mov    %eax,(%esp)
 8542bed:	e8 da 06 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542bf2:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8542bf6:	3c 02                	cmp    $0x2,%al
 8542bf8:	75 07                	jne    8542c01 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x81>
 8542bfa:	b8 01 00 00 00       	mov    $0x1,%eax
 8542bff:	eb 05                	jmp    8542c06 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x86>
 8542c01:	b8 00 00 00 00       	mov    $0x0,%eax
 8542c06:	84 c0                	test   %al,%al
 8542c08:	0f 84 a2 01 00 00    	je     8542db0 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x230>
 8542c0e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542c11:	89 04 24             	mov    %eax,(%esp)
 8542c14:	e8 b3 06 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542c19:	0f b6 00             	movzbl (%eax),%eax
 8542c1c:	0f b6 d0             	movzbl %al,%edx
 8542c1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542c22:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8542c25:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8542c29:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 8542c2c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8542c30:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 8542c33:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8542c37:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542c3b:	89 04 24             	mov    %eax,(%esp)
 8542c3e:	e8 c1 e1 13 00       	call   8680e04 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser>
 8542c43:	83 f0 01             	xor    $0x1,%eax
 8542c46:	84 c0                	test   %al,%al
 8542c48:	0f 85 b9 01 00 00    	jne    8542e07 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x287>
 8542c4e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8542c51:	0f b7 d0             	movzwl %ax,%edx
 8542c54:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8542c57:	0f b7 c0             	movzwl %ax,%eax
 8542c5a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8542c5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542c62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542c65:	89 04 24             	mov    %eax,(%esp)
 8542c68:	e8 c1 e2 13 00       	call   8680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>
 8542c6d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8542c70:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8542c74:	74 2f                	je     8542ca5 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x125>
 8542c76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8542c79:	83 c0 11             	add    $0x11,%eax
 8542c7c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8542c83:	00 
 8542c84:	89 04 24             	mov    %eax,(%esp)
 8542c87:	e8 ec a7 f0 ff       	call   844d478 <_ZN17stAmplifyOption_t7SetLockEh>
 8542c8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8542c8f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8542c93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542c96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542c9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8542c9d:	89 04 24             	mov    %eax,(%esp)
 8542ca0:	e8 a9 f1 ff ff       	call   8541e4e <_ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item>
 8542ca5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542ca8:	89 04 24             	mov    %eax,(%esp)
 8542cab:	e8 cc cd ce ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 8542cb0:	3c 01                	cmp    $0x1,%al
 8542cb2:	0f 94 c0             	sete   %al
 8542cb5:	84 c0                	test   %al,%al
 8542cb7:	74 30                	je     8542ce9 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x169>
 8542cb9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8542cbc:	83 f8 09             	cmp    $0x9,%eax
 8542cbf:	7e 28                	jle    8542ce9 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x169>
 8542cc1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8542cc4:	83 f8 15             	cmp    $0x15,%eax
 8542cc7:	7f 20                	jg     8542ce9 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x169>
 8542cc9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8542ccc:	83 f8 03             	cmp    $0x3,%eax
 8542ccf:	75 09                	jne    8542cda <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x15a>
 8542cd1:	c7 45 e0 12 00 00 00 	movl   $0x12,-0x20(%ebp)
 8542cd8:	eb 0f                	jmp    8542ce9 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x169>
 8542cda:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8542cdd:	83 f8 12             	cmp    $0x12,%eax
 8542ce0:	75 07                	jne    8542ce9 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x169>
 8542ce2:	c7 45 e0 03 00 00 00 	movl   $0x3,-0x20(%ebp)
 8542ce9:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8542cec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8542cef:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8542cf3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8542cf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542cfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542cfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8542d01:	89 04 24             	mov    %eax,(%esp)
 8542d04:	e8 d7 f3 ff ff       	call   85420e0 <_ZN9item_lock9CItemLock14SendItemUnlockEP5CUserii>
 8542d09:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542d0c:	89 04 24             	mov    %eax,(%esp)
 8542d0f:	e8 b8 05 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542d14:	8b 55 08             	mov    0x8(%ebp),%edx
 8542d17:	83 c2 20             	add    $0x20,%edx
 8542d1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542d1e:	89 14 24             	mov    %edx,(%esp)
 8542d21:	e8 e4 07 00 00       	call   854350a <_ZNSt5stackIhSt5dequeIhSaIhEEE4pushERKh>
 8542d26:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542d29:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8542d30:	00 
 8542d31:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8542d34:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542d38:	89 04 24             	mov    %eax,(%esp)
 8542d3b:	e8 e4 07 00 00       	call   8543524 <_ZNSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEppEi>
 8542d40:	83 ec 04             	sub    $0x4,%esp
 8542d43:	8b 45 08             	mov    0x8(%ebp),%eax
 8542d46:	8d 50 08             	lea    0x8(%eax),%edx
 8542d49:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8542d4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542d50:	89 14 24             	mov    %edx,(%esp)
 8542d53:	e8 0a 08 00 00       	call   8543562 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE5eraseESt17_Rb_tree_iteratorIS5_E>
 8542d58:	8b 45 08             	mov    0x8(%ebp),%eax
 8542d5b:	83 c0 54             	add    $0x54,%eax
 8542d5e:	89 04 24             	mov    %eax,(%esp)
 8542d61:	e8 8a e7 ff ff       	call   85414f0 <_ZN9item_lock14CItemLockTimer21DecreaseItemLockTimerEv>
 8542d66:	8b 45 08             	mov    0x8(%ebp),%eax
 8542d69:	89 04 24             	mov    %eax,(%esp)
 8542d6c:	e8 53 5e b8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8542d71:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8542d74:	8b 58 07             	mov    0x7(%eax),%ebx
 8542d77:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8542d7a:	8b 40 02             	mov    0x2(%eax),%eax
 8542d7d:	89 c1                	mov    %eax,%ecx
 8542d7f:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8542d82:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8542d85:	8b 75 0c             	mov    0xc(%ebp),%esi
 8542d88:	81 c6 00 97 07 00    	add    $0x79700,%esi
 8542d8e:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8542d92:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8542d96:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8542d9a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8542d9e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8542da5:	00 
 8542da6:	89 34 24             	mov    %esi,(%esp)
 8542da9:	e8 5a 6a 14 00       	call   8689808 <_ZN15cUserHistoryLog16ItemLockUsingLogEhiiii>
 8542dae:	eb 0b                	jmp    8542dbb <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x23b>
 8542db0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542db3:	89 04 24             	mov    %eax,(%esp)
 8542db6:	e8 f3 04 00 00       	call   85432ae <_ZNSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEppEv>
 8542dbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8542dbe:	8d 50 08             	lea    0x8(%eax),%edx
 8542dc1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8542dc4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542dc8:	89 04 24             	mov    %eax,(%esp)
 8542dcb:	e8 a4 04 00 00       	call   8543274 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 8542dd0:	83 ec 04             	sub    $0x4,%esp
 8542dd3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8542dd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542dda:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542ddd:	89 04 24             	mov    %eax,(%esp)
 8542de0:	e8 b5 04 00 00       	call   854329a <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEneERKS4_>
 8542de5:	84 c0                	test   %al,%al
 8542de7:	0f 85 e2 fd ff ff    	jne    8542bcf <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x4f>
 8542ded:	8b 45 08             	mov    0x8(%ebp),%eax
 8542df0:	8d 50 54             	lea    0x54(%eax),%edx
 8542df3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542df6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542dfa:	89 14 24             	mov    %edx,(%esp)
 8542dfd:	e8 00 e7 ff ff       	call   8541502 <_ZN9item_lock14CItemLockTimer17NextItemLockTimerEP5CUser>
 8542e02:	eb 04                	jmp    8542e08 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x288>
 8542e04:	90                   	nop
 8542e05:	eb 01                	jmp    8542e08 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser+0x288>
 8542e07:	90                   	nop
 8542e08:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8542e0b:	83 c4 00             	add    $0x0,%esp
 8542e0e:	5b                   	pop    %ebx
 8542e0f:	5e                   	pop    %esi
 8542e10:	5d                   	pop    %ebp
 8542e11:	c3                   	ret

```

```c
// item_lock::CItemLock::PopItemLock @ 0x8542b80

/* item_lock::CItemLock::PopItemLock(CUser*) */

void __thiscall item_lock::CItemLock::PopItemLock(CItemLock *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uchar *puVar4;
  undefined4 uVar5;
  int local_28;
  int local_24;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_20 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_1c [4];
  undefined4 local_18;
  int local_14;
  Inven_Item *local_10;
  
  iVar3 = CItemLockTimer::GetTimerCount((CItemLockTimer *)(this + 0x54));
  if (iVar3 != 0) {
    local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    std::
    map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
    ::begin(local_20);
    while( true ) {
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::end(local_1c);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_20,(_Rb_tree_iterator *)local_1c);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_20);
      if ((local_14 < *(int *)(iVar3 + 4) + 0x3f480) ||
         (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                            ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                             local_20), *(char *)(iVar3 + 8) != '\x02')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        puVar4 = (uchar *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                          operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>
                                      *)local_20);
        cVar2 = CUserCharacInfo::FindItemLock
                          ((CUserCharacInfo *)param_1,*puVar4,(ENUM_ITEMSPACE *)&local_24,&local_28,
                           param_1);
        if (cVar2 != '\x01') {
          return;
        }
        local_10 = (Inven_Item *)
                   CUser::GetCurCharacInventoryRef(param_1,(ushort)local_24,(ushort)local_28);
        if (local_10 != (Inven_Item *)0x0) {
          stAmplifyOption_t::SetLock((stAmplifyOption_t *)(local_10 + 0x11),'\0');
          UpdateItem(this,param_1,local_10);
        }
        cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
        if (((cVar2 == '\x01') && (9 < local_28)) && (local_28 < 0x16)) {
          if (local_24 == 3) {
            local_24 = 0x12;
          }
          else if (local_24 == 0x12) {
            local_24 = 3;
          }
        }
        SendItemUnlock(this,param_1,local_24,local_28);
        puVar4 = (uchar *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                          operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>
                                      *)local_20);
        std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::push
                  ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
                   (this + 0x20),puVar4);
        uVar5 = 0;
        std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)&local_18,
                   (int)local_20);
        std::
        map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
        ::erase((map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
                 *)(this + 8),local_18,uVar5);
        CItemLockTimer::DecreaseItemLockTimer((CItemLockTimer *)(this + 0x54));
        charac_expand::CData::alter((CData *)this);
        cUserHistoryLog::ItemLockUsingLog
                  ((cUserHistoryLog *)(param_1 + 0x79700),'\x03',local_24,local_28,
                   *(int *)(local_10 + 2),*(int *)(local_10 + 7));
      }
      else {
        std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_20);
      }
    }
    CItemLockTimer::NextItemLockTimer((CItemLockTimer *)(this + 0x54),param_1);
  }
  return;
}

```

---

## PushItemLock

```asm
// === 08542a8a item_lock::CItemLock::PushItemLock  [0x08542a8a-0x8542b7f] ===
 8542a8a:	55                   	push   %ebp
 8542a8b:	89 e5                	mov    %esp,%ebp
 8542a8d:	53                   	push   %ebx
 8542a8e:	83 ec 44             	sub    $0x44,%esp
 8542a91:	8b 45 10             	mov    0x10(%ebp),%eax
 8542a94:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8542a97:	8b 45 14             	mov    0x14(%ebp),%eax
 8542a9a:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8542a9e:	84 c0                	test   %al,%al
 8542aa0:	75 1a                	jne    8542abc <_ZN9item_lock9CItemLock12PushItemLockEP5CUserhP14stItemLockInfo+0x32>
 8542aa2:	8b 45 08             	mov    0x8(%ebp),%eax
 8542aa5:	8d 50 20             	lea    0x20(%eax),%edx
 8542aa8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8542aab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542aaf:	89 14 24             	mov    %edx,(%esp)
 8542ab2:	e8 53 0a 00 00       	call   854350a <_ZNSt5stackIhSt5dequeIhSaIhEEE4pushERKh>
 8542ab7:	e9 be 00 00 00       	jmp    8542b7a <_ZN9item_lock9CItemLock12PushItemLockEP5CUserhP14stItemLockInfo+0xf0>
 8542abc:	8b 45 14             	mov    0x14(%ebp),%eax
 8542abf:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8542ac3:	3c 02                	cmp    $0x2,%al
 8542ac5:	75 66                	jne    8542b2d <_ZN9item_lock9CItemLock12PushItemLockEP5CUserhP14stItemLockInfo+0xa3>
 8542ac7:	8b 45 14             	mov    0x14(%ebp),%eax
 8542aca:	8b 18                	mov    (%eax),%ebx
 8542acc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8542ad3:	e8 c6 91 b8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8542ad8:	2d 80 f4 03 00       	sub    $0x3f480,%eax
 8542add:	39 c3                	cmp    %eax,%ebx
 8542adf:	0f 9e c0             	setle  %al
 8542ae2:	84 c0                	test   %al,%al
 8542ae4:	74 32                	je     8542b18 <_ZN9item_lock9CItemLock12PushItemLockEP5CUserhP14stItemLockInfo+0x8e>
 8542ae6:	8b 45 14             	mov    0x14(%ebp),%eax
 8542ae9:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 8542aed:	8b 45 14             	mov    0x14(%ebp),%eax
 8542af0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8542af6:	8b 45 08             	mov    0x8(%ebp),%eax
 8542af9:	8d 50 20             	lea    0x20(%eax),%edx
 8542afc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8542aff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542b03:	89 14 24             	mov    %edx,(%esp)
 8542b06:	e8 ff 09 00 00       	call   854350a <_ZNSt5stackIhSt5dequeIhSaIhEEE4pushERKh>
 8542b0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8542b0e:	89 04 24             	mov    %eax,(%esp)
 8542b11:	e8 ae 60 b8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8542b16:	eb 62                	jmp    8542b7a <_ZN9item_lock9CItemLock12PushItemLockEP5CUserhP14stItemLockInfo+0xf0>
 8542b18:	8b 45 08             	mov    0x8(%ebp),%eax
 8542b1b:	8d 50 54             	lea    0x54(%eax),%edx
 8542b1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542b21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542b25:	89 14 24             	mov    %edx,(%esp)
 8542b28:	e8 4f e9 ff ff       	call   854147c <_ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser>
 8542b2d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542b30:	8b 55 14             	mov    0x14(%ebp),%edx
 8542b33:	89 54 24 08          	mov    %edx,0x8(%esp)
 8542b37:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8542b3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542b3e:	89 04 24             	mov    %eax,(%esp)
 8542b41:	e8 cb 08 00 00       	call   8543411 <_ZSt9make_pairIRhR14stItemLockInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8542b46:	83 ec 04             	sub    $0x4,%esp
 8542b49:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542b4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542b50:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8542b53:	89 04 24             	mov    %eax,(%esp)
 8542b56:	e8 f5 08 00 00       	call   8543450 <_ZNSt4pairIKh14stItemLockInfoEC1IhS1_EEOS_IT_T0_E>
 8542b5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8542b5e:	8d 48 08             	lea    0x8(%eax),%ecx
 8542b61:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8542b64:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8542b67:	89 54 24 08          	mov    %edx,0x8(%esp)
 8542b6b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8542b6f:	89 04 24             	mov    %eax,(%esp)
 8542b72:	e8 11 09 00 00       	call   8543488 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE6insertERKS5_>
 8542b77:	83 ec 04             	sub    $0x4,%esp
 8542b7a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8542b7d:	c9                   	leave
 8542b7e:	c3                   	ret
 8542b7f:	90                   	nop

```

```c
// item_lock::CItemLock::PushItemLock @ 0x8542a8a

/* item_lock::CItemLock::PushItemLock(CUser*, unsigned char, stItemLockInfo*) */

void __thiscall
item_lock::CItemLock::PushItemLock
          (CItemLock *this,CUser *param_1,uchar param_2,stItemLockInfo *param_3)

{
  int iVar1;
  int iVar2;
  stItemLockInfo local_30 [4];
  pair local_2c [8];
  pair<unsigned_char_const,stItemLockInfo> local_24 [12];
  uchar local_18 [16];
  
  local_30[0] = (stItemLockInfo)param_2;
  if (param_3[4] == (stItemLockInfo)0x0) {
    std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::push
              ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
               (this + 0x20),(uchar *)local_30);
  }
  else {
    if (param_3[4] == (stItemLockInfo)0x2) {
      iVar1 = *(int *)param_3;
      iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (iVar1 <= iVar2 + -0x3f480) {
        param_3[4] = (stItemLockInfo)0x0;
        *(undefined4 *)param_3 = 0;
        std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::push
                  ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
                   (this + 0x20),(uchar *)local_30);
        charac_expand::CData::alter((CData *)this);
        return;
      }
      CItemLockTimer::IncreaseItemLockTimer((CItemLockTimer *)(this + 0x54),param_1);
    }
    std::make_pair<unsigned_char&,stItemLockInfo&>(local_18,local_30);
    std::pair<unsigned_char_const,stItemLockInfo>::pair<unsigned_char,stItemLockInfo>
              (local_24,local_18);
    std::
    map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
    ::insert(local_2c);
  }
  return;
}

```

---

## SendItemLockList

```asm
// === 085427a0 item_lock::CItemLock::SendItemLockList  [0x085427a0-0x8542a69] ===
 85427a0:	55                   	push   %ebp
 85427a1:	89 e5                	mov    %esp,%ebp
 85427a3:	56                   	push   %esi
 85427a4:	53                   	push   %ebx
 85427a5:	83 ec 50             	sub    $0x50,%esp
 85427a8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85427ab:	89 04 24             	mov    %eax,(%esp)
 85427ae:	e8 99 b5 04 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85427b3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85427b6:	89 04 24             	mov    %eax,(%esp)
 85427b9:	e8 28 91 b8 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85427be:	c7 44 24 08 fb 00 00 	movl   $0xfb,0x8(%esp)
 85427c5:	00 
 85427c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85427cd:	00 
 85427ce:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85427d1:	89 04 24             	mov    %eax,(%esp)
 85427d4:	e8 23 91 b8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85427d9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85427dc:	89 04 24             	mov    %eax,(%esp)
 85427df:	e8 68 e3 bc ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 85427e4:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85427e7:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85427ee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85427f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85427f5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85427f8:	89 04 24             	mov    %eax,(%esp)
 85427fb:	e8 a4 76 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8542800:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8542807:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 854280e:	8b 45 08             	mov    0x8(%ebp),%eax
 8542811:	8d 50 48             	lea    0x48(%eax),%edx
 8542814:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8542817:	89 54 24 04          	mov    %edx,0x4(%esp)
 854281b:	89 04 24             	mov    %eax,(%esp)
 854281e:	e8 c1 82 f5 ff       	call   849aae4 <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EE5beginEv>
 8542823:	83 ec 04             	sub    $0x4,%esp
 8542826:	e9 8e 01 00 00       	jmp    85429b9 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x219>
 854282b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 854282e:	89 04 24             	mov    %eax,(%esp)
 8542831:	e8 58 83 f5 ff       	call   849ab8e <_ZNK9__gnu_cxx17__normal_iteratorIPN9item_lock13stItemLockRefESt6vectorIS2_SaIS2_EEEdeEv>
 8542836:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8542839:	8b 45 e8             	mov    -0x18(%ebp),%eax
 854283c:	0f b6 00             	movzbl (%eax),%eax
 854283f:	0f b6 c0             	movzbl %al,%eax
 8542842:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8542845:	89 54 24 08          	mov    %edx,0x8(%esp)
 8542849:	89 44 24 04          	mov    %eax,0x4(%esp)
 854284d:	8b 45 08             	mov    0x8(%ebp),%eax
 8542850:	89 04 24             	mov    %eax,(%esp)
 8542853:	e8 c6 fd ff ff       	call   854261e <_ZNK9item_lock9CItemLock15GetItemLockInfoEhRi>
 8542858:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 854285b:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 854285f:	0f 94 c0             	sete   %al
 8542862:	84 c0                	test   %al,%al
 8542864:	74 68                	je     85428ce <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x12e>
 8542866:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8542869:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 854286d:	0f b7 d0             	movzwl %ax,%edx
 8542870:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8542873:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8542877:	0f b6 c0             	movzbl %al,%eax
 854287a:	89 54 24 08          	mov    %edx,0x8(%esp)
 854287e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542882:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542885:	89 04 24             	mov    %eax,(%esp)
 8542888:	e8 a1 e6 13 00       	call   8680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>
 854288d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8542890:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8542894:	0f 84 13 01 00 00    	je     85429ad <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x20d>
 854289a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854289d:	83 c0 11             	add    $0x11,%eax
 85428a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85428a7:	00 
 85428a8:	89 04 24             	mov    %eax,(%esp)
 85428ab:	e8 c8 ab f0 ff       	call   844d478 <_ZN17stAmplifyOption_t7SetLockEh>
 85428b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85428b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 85428b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85428ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 85428be:	8b 45 08             	mov    0x8(%ebp),%eax
 85428c1:	89 04 24             	mov    %eax,(%esp)
 85428c4:	e8 85 f5 ff ff       	call   8541e4e <_ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item>
 85428c9:	e9 e0 00 00 00       	jmp    85429ae <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x20e>
 85428ce:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85428d1:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85428d5:	88 45 ef             	mov    %al,-0x11(%ebp)
 85428d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85428db:	89 04 24             	mov    %eax,(%esp)
 85428de:	e8 99 d1 ce ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 85428e3:	3c 01                	cmp    $0x1,%al
 85428e5:	0f 94 c0             	sete   %al
 85428e8:	84 c0                	test   %al,%al
 85428ea:	74 3a                	je     8542926 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x186>
 85428ec:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85428ef:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85428f3:	66 83 f8 09          	cmp    $0x9,%ax
 85428f7:	77 0d                	ja     8542906 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x166>
 85428f9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85428fc:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8542900:	66 83 f8 15          	cmp    $0x15,%ax
 8542904:	77 20                	ja     8542926 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x186>
 8542906:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8542909:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 854290d:	3c 03                	cmp    $0x3,%al
 854290f:	75 06                	jne    8542917 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x177>
 8542911:	c6 45 ef 12          	movb   $0x12,-0x11(%ebp)
 8542915:	eb 0f                	jmp    8542926 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x186>
 8542917:	8b 45 e8             	mov    -0x18(%ebp),%eax
 854291a:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 854291e:	3c 12                	cmp    $0x12,%al
 8542920:	75 04                	jne    8542926 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x186>
 8542922:	c6 45 ef 03          	movb   $0x3,-0x11(%ebp)
 8542926:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 854292a:	89 44 24 04          	mov    %eax,0x4(%esp)
 854292e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8542931:	89 04 24             	mov    %eax,(%esp)
 8542934:	e8 e7 8f b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8542939:	8b 45 e8             	mov    -0x18(%ebp),%eax
 854293c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8542940:	0f b7 c0             	movzwl %ax,%eax
 8542943:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542947:	8d 45 d0             	lea    -0x30(%ebp),%eax
 854294a:	89 04 24             	mov    %eax,(%esp)
 854294d:	e8 52 75 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8542952:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8542955:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542959:	8d 45 d0             	lea    -0x30(%ebp),%eax
 854295c:	89 04 24             	mov    %eax,(%esp)
 854295f:	e8 bc 8f b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8542964:	83 7d e4 02          	cmpl   $0x2,-0x1c(%ebp)
 8542968:	75 3d                	jne    85429a7 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x207>
 854296a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 854296d:	8d 98 80 f4 03 00    	lea    0x3f480(%eax),%ebx
 8542973:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 854297a:	e8 1f 93 b8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 854297f:	89 da                	mov    %ebx,%edx
 8542981:	29 c2                	sub    %eax,%edx
 8542983:	89 d0                	mov    %edx,%eax
 8542985:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8542988:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 854298c:	79 07                	jns    8542995 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x1f5>
 854298e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8542995:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8542998:	89 44 24 04          	mov    %eax,0x4(%esp)
 854299c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 854299f:	89 04 24             	mov    %eax,(%esp)
 85429a2:	e8 95 8f b8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85429a7:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85429ab:	eb 01                	jmp    85429ae <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x20e>
 85429ad:	90                   	nop
 85429ae:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85429b1:	89 04 24             	mov    %eax,(%esp)
 85429b4:	e8 3b 0b 00 00       	call   85434f4 <_ZN9__gnu_cxx17__normal_iteratorIPN9item_lock13stItemLockRefESt6vectorIS2_SaIS2_EEEppEv>
 85429b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85429bc:	8d 50 48             	lea    0x48(%eax),%edx
 85429bf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85429c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85429c6:	89 04 24             	mov    %eax,(%esp)
 85429c9:	e8 3a 81 f5 ff       	call   849ab08 <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EE3endEv>
 85429ce:	83 ec 04             	sub    $0x4,%esp
 85429d1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85429d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85429d8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85429db:	89 04 24             	mov    %eax,(%esp)
 85429de:	e8 4b 81 f5 ff       	call   849ab2e <_ZN9__gnu_cxxneIPN9item_lock13stItemLockRefESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85429e3:	84 c0                	test   %al,%al
 85429e5:	0f 85 40 fe ff ff    	jne    854282b <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x8b>
 85429eb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85429ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 85429f2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85429f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85429f9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85429fc:	89 04 24             	mov    %eax,(%esp)
 85429ff:	e8 24 e1 bc ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 8542a04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8542a0b:	00 
 8542a0c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8542a0f:	89 04 24             	mov    %eax,(%esp)
 8542a12:	e8 41 8f b8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8542a17:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8542a1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542a1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542a21:	89 04 24             	mov    %eax,(%esp)
 8542a24:	e8 91 5b 10 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8542a29:	8b 45 08             	mov    0x8(%ebp),%eax
 8542a2c:	83 c0 48             	add    $0x48,%eax
 8542a2f:	89 04 24             	mov    %eax,(%esp)
 8542a32:	e8 43 09 00 00       	call   854337a <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EE5clearEv>
 8542a37:	eb 1b                	jmp    8542a54 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser+0x2b4>
 8542a39:	89 d3                	mov    %edx,%ebx
 8542a3b:	89 c6                	mov    %eax,%esi
 8542a3d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8542a40:	89 04 24             	mov    %eax,(%esp)
 8542a43:	e8 38 b4 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8542a48:	89 f0                	mov    %esi,%eax
 8542a4a:	89 da                	mov    %ebx,%edx
 8542a4c:	89 04 24             	mov    %eax,(%esp)
 8542a4f:	e8 fc 0c 5a 00       	call   8ae3750 <_Unwind_Resume>
 8542a54:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8542a57:	89 04 24             	mov    %eax,(%esp)
 8542a5a:	e8 21 b4 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8542a5f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8542a62:	83 c4 00             	add    $0x0,%esp
 8542a65:	5b                   	pop    %ebx
 8542a66:	5e                   	pop    %esi
 8542a67:	5d                   	pop    %ebp
 8542a68:	c3                   	ret
 8542a69:	90                   	nop

```

```c
// item_lock::CItemLock::SendItemLockList @ 0x85427a0

/* item_lock::CItemLock::SendItemLockList(CUser*) */

void __thiscall item_lock::CItemLock::SendItemLockList(CItemLock *this,CUser *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
  local_40 [4];
  int local_3c;
  int local_38;
  PacketGuard local_34 [12];
  __normal_iterator local_28 [4];
  int local_24;
  int local_20;
  uchar *local_1c;
  byte local_15;
  Inven_Item *local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 085427b9 to 08542a36 has its CatchHandler @ 08542a39 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xfb);
  local_38 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_34);
  local_24 = 0;
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,0);
  local_20 = 0;
  local_3c = 0;
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::begin();
  while( true ) {
    std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::end();
    bVar3 = __gnu_cxx::operator!=(local_40,local_28);
    if (!bVar3) break;
    local_1c = (uchar *)__gnu_cxx::
                        __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
                        ::operator*(local_40);
    local_20 = GetItemLockInfo(this,*local_1c,&local_3c);
    if (local_20 == 0) {
      local_14 = (Inven_Item *)
                 CUser::GetCurCharacInventoryRef
                           (param_1,(ushort)local_1c[1],*(ushort *)(local_1c + 2));
      if (local_14 != (Inven_Item *)0x0) {
        stAmplifyOption_t::SetLock((stAmplifyOption_t *)(local_14 + 0x11),'\0');
        UpdateItem(this,param_1,local_14);
      }
    }
    else {
      local_15 = local_1c[1];
      cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
      if ((cVar2 == '\x01') &&
         ((9 < *(ushort *)(local_1c + 2) || (*(ushort *)(local_1c + 2) < 0x16)))) {
        if (local_1c[1] == '\x03') {
          local_15 = 0x12;
        }
        else if (local_1c[1] == '\x12') {
          local_15 = 3;
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)local_15);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,(uint)*(ushort *)(local_1c + 2));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_20);
      if (local_20 == 2) {
        iVar1 = local_3c + 0x3f480;
        local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_10 = iVar1 - local_10;
        if (local_10 < 0) {
          local_10 = 0;
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_10);
      }
      local_24 = local_24 + 1;
    }
    __gnu_cxx::
    __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
    ::operator++(local_40);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,&local_38,local_24);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  CUser::Send(param_1,local_34);
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::clear
            ((vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>> *)
             (this + 0x48));
  PacketGuard::~PacketGuard(local_34);
  return;
}

```

---

## SendItemUnlock

```asm
// === 085420e0 item_lock::CItemLock::SendItemUnlock  [0x085420e0-0x8542191] ===
 85420e0:	55                   	push   %ebp
 85420e1:	89 e5                	mov    %esp,%ebp
 85420e3:	56                   	push   %esi
 85420e4:	53                   	push   %ebx
 85420e5:	83 ec 20             	sub    $0x20,%esp
 85420e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85420eb:	89 04 24             	mov    %eax,(%esp)
 85420ee:	e8 59 bc 04 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85420f3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85420f6:	89 04 24             	mov    %eax,(%esp)
 85420f9:	e8 e8 97 b8 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85420fe:	c7 44 24 08 fc 00 00 	movl   $0xfc,0x8(%esp)
 8542105:	00 
 8542106:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854210d:	00 
 854210e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542111:	89 04 24             	mov    %eax,(%esp)
 8542114:	e8 e3 97 b8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8542119:	8b 45 10             	mov    0x10(%ebp),%eax
 854211c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542120:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542123:	89 04 24             	mov    %eax,(%esp)
 8542126:	e8 f5 97 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854212b:	8b 45 14             	mov    0x14(%ebp),%eax
 854212e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542132:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542135:	89 04 24             	mov    %eax,(%esp)
 8542138:	e8 67 7d b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 854213d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8542144:	00 
 8542145:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542148:	89 04 24             	mov    %eax,(%esp)
 854214b:	e8 08 98 b8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8542150:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542153:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542157:	8b 45 0c             	mov    0xc(%ebp),%eax
 854215a:	89 04 24             	mov    %eax,(%esp)
 854215d:	e8 58 64 10 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8542162:	eb 1b                	jmp    854217f <_ZN9item_lock9CItemLock14SendItemUnlockEP5CUserii+0x9f>
 8542164:	89 d3                	mov    %edx,%ebx
 8542166:	89 c6                	mov    %eax,%esi
 8542168:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854216b:	89 04 24             	mov    %eax,(%esp)
 854216e:	e8 0d bd 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8542173:	89 f0                	mov    %esi,%eax
 8542175:	89 da                	mov    %ebx,%edx
 8542177:	89 04 24             	mov    %eax,(%esp)
 854217a:	e8 d1 15 5a 00       	call   8ae3750 <_Unwind_Resume>
 854217f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542182:	89 04 24             	mov    %eax,(%esp)
 8542185:	e8 f6 bc 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 854218a:	83 c4 20             	add    $0x20,%esp
 854218d:	5b                   	pop    %ebx
 854218e:	5e                   	pop    %esi
 854218f:	5d                   	pop    %ebp
 8542190:	c3                   	ret
 8542191:	90                   	nop

```

```c
// item_lock::CItemLock::SendItemUnlock @ 0x85420e0

/* item_lock::CItemLock::SendItemUnlock(CUser*, int, int) */

void __thiscall
item_lock::CItemLock::SendItemUnlock(CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085420f9 to 08542161 has its CatchHandler @ 08542164 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xfc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## SendRequestItemLock

```asm
// === 08541ea0 item_lock::CItemLock::SendRequestItemLock  [0x08541ea0-0x8541f59] ===
 8541ea0:	55                   	push   %ebp
 8541ea1:	89 e5                	mov    %esp,%ebp
 8541ea3:	56                   	push   %esi
 8541ea4:	53                   	push   %ebx
 8541ea5:	83 ec 20             	sub    $0x20,%esp
 8541ea8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541eab:	89 04 24             	mov    %eax,(%esp)
 8541eae:	e8 99 be 04 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8541eb3:	c7 44 24 08 0f 01 00 	movl   $0x10f,0x8(%esp)
 8541eba:	00 
 8541ebb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8541ec2:	00 
 8541ec3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541ec6:	89 04 24             	mov    %eax,(%esp)
 8541ec9:	e8 2e 9a b8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8541ece:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8541ed5:	00 
 8541ed6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541ed9:	89 04 24             	mov    %eax,(%esp)
 8541edc:	e8 3f 9a b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8541ee1:	8b 45 10             	mov    0x10(%ebp),%eax
 8541ee4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541ee8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541eeb:	89 04 24             	mov    %eax,(%esp)
 8541eee:	e8 2d 9a b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8541ef3:	8b 45 14             	mov    0x14(%ebp),%eax
 8541ef6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541efa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541efd:	89 04 24             	mov    %eax,(%esp)
 8541f00:	e8 9f 7f b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8541f05:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8541f0c:	00 
 8541f0d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541f10:	89 04 24             	mov    %eax,(%esp)
 8541f13:	e8 40 9a b8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8541f18:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541f1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541f1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541f22:	89 04 24             	mov    %eax,(%esp)
 8541f25:	e8 90 66 10 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8541f2a:	eb 1b                	jmp    8541f47 <_ZN9item_lock9CItemLock19SendRequestItemLockEP5CUserii+0xa7>
 8541f2c:	89 d3                	mov    %edx,%ebx
 8541f2e:	89 c6                	mov    %eax,%esi
 8541f30:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541f33:	89 04 24             	mov    %eax,(%esp)
 8541f36:	e8 45 bf 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8541f3b:	89 f0                	mov    %esi,%eax
 8541f3d:	89 da                	mov    %ebx,%edx
 8541f3f:	89 04 24             	mov    %eax,(%esp)
 8541f42:	e8 09 18 5a 00       	call   8ae3750 <_Unwind_Resume>
 8541f47:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541f4a:	89 04 24             	mov    %eax,(%esp)
 8541f4d:	e8 2e bf 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8541f52:	83 c4 20             	add    $0x20,%esp
 8541f55:	5b                   	pop    %ebx
 8541f56:	5e                   	pop    %esi
 8541f57:	5d                   	pop    %ebp
 8541f58:	c3                   	ret
 8541f59:	90                   	nop

```

```c
// item_lock::CItemLock::SendRequestItemLock @ 0x8541ea0

/* item_lock::CItemLock::SendRequestItemLock(CUser*, int, int) */

void __thiscall
item_lock::CItemLock::SendRequestItemLock(CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08541ec9 to 08541f29 has its CatchHandler @ 08541f2c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x10f);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## SendRequestItemUnlock

```asm
// === 08541f5a item_lock::CItemLock::SendRequestItemUnlock  [0x08541f5a-0x8542025] ===
 8541f5a:	55                   	push   %ebp
 8541f5b:	89 e5                	mov    %esp,%ebp
 8541f5d:	56                   	push   %esi
 8541f5e:	53                   	push   %ebx
 8541f5f:	83 ec 20             	sub    $0x20,%esp
 8541f62:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541f65:	89 04 24             	mov    %eax,(%esp)
 8541f68:	e8 df bd 04 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8541f6d:	c7 44 24 08 10 01 00 	movl   $0x110,0x8(%esp)
 8541f74:	00 
 8541f75:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8541f7c:	00 
 8541f7d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541f80:	89 04 24             	mov    %eax,(%esp)
 8541f83:	e8 74 99 b8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8541f88:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8541f8f:	00 
 8541f90:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541f93:	89 04 24             	mov    %eax,(%esp)
 8541f96:	e8 85 99 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8541f9b:	8b 45 10             	mov    0x10(%ebp),%eax
 8541f9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541fa2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541fa5:	89 04 24             	mov    %eax,(%esp)
 8541fa8:	e8 73 99 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8541fad:	8b 45 14             	mov    0x14(%ebp),%eax
 8541fb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541fb4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541fb7:	89 04 24             	mov    %eax,(%esp)
 8541fba:	e8 e5 7e b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8541fbf:	8b 45 18             	mov    0x18(%ebp),%eax
 8541fc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541fc6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541fc9:	89 04 24             	mov    %eax,(%esp)
 8541fcc:	e8 6b 99 b8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8541fd1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8541fd8:	00 
 8541fd9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541fdc:	89 04 24             	mov    %eax,(%esp)
 8541fdf:	e8 74 99 b8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8541fe4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541fe7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541feb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541fee:	89 04 24             	mov    %eax,(%esp)
 8541ff1:	e8 c4 65 10 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8541ff6:	eb 1b                	jmp    8542013 <_ZN9item_lock9CItemLock21SendRequestItemUnlockEP5CUseriii+0xb9>
 8541ff8:	89 d3                	mov    %edx,%ebx
 8541ffa:	89 c6                	mov    %eax,%esi
 8541ffc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541fff:	89 04 24             	mov    %eax,(%esp)
 8542002:	e8 79 be 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8542007:	89 f0                	mov    %esi,%eax
 8542009:	89 da                	mov    %ebx,%edx
 854200b:	89 04 24             	mov    %eax,(%esp)
 854200e:	e8 3d 17 5a 00       	call   8ae3750 <_Unwind_Resume>
 8542013:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542016:	89 04 24             	mov    %eax,(%esp)
 8542019:	e8 62 be 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 854201e:	83 c4 20             	add    $0x20,%esp
 8542021:	5b                   	pop    %ebx
 8542022:	5e                   	pop    %esi
 8542023:	5d                   	pop    %ebp
 8542024:	c3                   	ret
 8542025:	90                   	nop

```

```c
// item_lock::CItemLock::SendRequestItemUnlock @ 0x8541f5a

/* item_lock::CItemLock::SendRequestItemUnlock(CUser*, int, int, int) */

void __thiscall
item_lock::CItemLock::SendRequestItemUnlock
          (CItemLock *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08541f83 to 08541ff5 has its CatchHandler @ 08541ff8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x110);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## SendRequestItemUnlockCancel

```asm
// === 08542026 item_lock::CItemLock::SendRequestItemUnlockCancel  [0x08542026-0x85420df] ===
 8542026:	55                   	push   %ebp
 8542027:	89 e5                	mov    %esp,%ebp
 8542029:	56                   	push   %esi
 854202a:	53                   	push   %ebx
 854202b:	83 ec 20             	sub    $0x20,%esp
 854202e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542031:	89 04 24             	mov    %eax,(%esp)
 8542034:	e8 13 bd 04 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8542039:	c7 44 24 08 11 01 00 	movl   $0x111,0x8(%esp)
 8542040:	00 
 8542041:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8542048:	00 
 8542049:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854204c:	89 04 24             	mov    %eax,(%esp)
 854204f:	e8 a8 98 b8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8542054:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854205b:	00 
 854205c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854205f:	89 04 24             	mov    %eax,(%esp)
 8542062:	e8 b9 98 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8542067:	8b 45 10             	mov    0x10(%ebp),%eax
 854206a:	89 44 24 04          	mov    %eax,0x4(%esp)
 854206e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542071:	89 04 24             	mov    %eax,(%esp)
 8542074:	e8 a7 98 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8542079:	8b 45 14             	mov    0x14(%ebp),%eax
 854207c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542080:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542083:	89 04 24             	mov    %eax,(%esp)
 8542086:	e8 19 7e b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 854208b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8542092:	00 
 8542093:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542096:	89 04 24             	mov    %eax,(%esp)
 8542099:	e8 ba 98 b8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 854209e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85420a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85420a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85420a8:	89 04 24             	mov    %eax,(%esp)
 85420ab:	e8 0a 65 10 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85420b0:	eb 1b                	jmp    85420cd <_ZN9item_lock9CItemLock27SendRequestItemUnlockCancelEP5CUserii+0xa7>
 85420b2:	89 d3                	mov    %edx,%ebx
 85420b4:	89 c6                	mov    %eax,%esi
 85420b6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85420b9:	89 04 24             	mov    %eax,(%esp)
 85420bc:	e8 bf bd 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85420c1:	89 f0                	mov    %esi,%eax
 85420c3:	89 da                	mov    %ebx,%edx
 85420c5:	89 04 24             	mov    %eax,(%esp)
 85420c8:	e8 83 16 5a 00       	call   8ae3750 <_Unwind_Resume>
 85420cd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85420d0:	89 04 24             	mov    %eax,(%esp)
 85420d3:	e8 a8 bd 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85420d8:	83 c4 20             	add    $0x20,%esp
 85420db:	5b                   	pop    %ebx
 85420dc:	5e                   	pop    %esi
 85420dd:	5d                   	pop    %ebp
 85420de:	c3                   	ret
 85420df:	90                   	nop

```

```c
// item_lock::CItemLock::SendRequestItemUnlockCancel @ 0x8542026

/* item_lock::CItemLock::SendRequestItemUnlockCancel(CUser*, int, int) */

void __thiscall
item_lock::CItemLock::SendRequestItemUnlockCancel
          (CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0854204f to 085420af has its CatchHandler @ 085420b2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x111);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## UpdateAvatarItem

```asm
// === 08541d42 item_lock::CItemLock::UpdateAvatarItem  [0x08541d42-0x8541e4d] ===
 8541d42:	55                   	push   %ebp
 8541d43:	89 e5                	mov    %esp,%ebp
 8541d45:	56                   	push   %esi
 8541d46:	53                   	push   %ebx
 8541d47:	83 ec 20             	sub    $0x20,%esp
 8541d4a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8541d4f:	c7 44 24 08 bf 00 00 	movl   $0xbf,0x8(%esp)
 8541d56:	00 
 8541d57:	c7 44 24 04 00 a9 c9 	movl   $0x8c9a900,0x4(%esp)
 8541d5e:	08 
 8541d5f:	89 04 24             	mov    %eax,(%esp)
 8541d62:	e8 1f dd d4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8541d67:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8541d6e:	00 
 8541d6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541d73:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541d76:	89 04 24             	mov    %eax,(%esp)
 8541d79:	e8 a8 6e b8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8541d7e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541d81:	89 04 24             	mov    %eax,(%esp)
 8541d84:	e8 bd 6e b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8541d89:	c7 44 24 04 c2 01 00 	movl   $0x1c2,0x4(%esp)
 8541d90:	00 
 8541d91:	89 04 24             	mov    %eax,(%esp)
 8541d94:	e8 bd 6e b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8541d99:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541d9c:	89 04 24             	mov    %eax,(%esp)
 8541d9f:	e8 f2 6e b8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8541da4:	89 c3                	mov    %eax,%ebx
 8541da6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541da9:	89 04 24             	mov    %eax,(%esp)
 8541dac:	e8 95 6e b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8541db1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8541db5:	89 04 24             	mov    %eax,(%esp)
 8541db8:	e8 99 6e b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8541dbd:	8b 45 10             	mov    0x10(%ebp),%eax
 8541dc0:	8b 58 07             	mov    0x7(%eax),%ebx
 8541dc3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541dc6:	89 04 24             	mov    %eax,(%esp)
 8541dc9:	e8 78 6e b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8541dce:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8541dd2:	89 04 24             	mov    %eax,(%esp)
 8541dd5:	e8 7c 6e b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8541dda:	8b 45 10             	mov    0x10(%ebp),%eax
 8541ddd:	83 c0 11             	add    $0x11,%eax
 8541de0:	89 04 24             	mov    %eax,(%esp)
 8541de3:	e8 c0 97 d4 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 8541de8:	0f b6 d8             	movzbl %al,%ebx
 8541deb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541dee:	89 04 24             	mov    %eax,(%esp)
 8541df1:	e8 50 6e b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8541df6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8541dfa:	89 04 24             	mov    %eax,(%esp)
 8541dfd:	e8 54 6e b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8541e02:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8541e07:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8541e0a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8541e0e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8541e15:	00 
 8541e16:	89 04 24             	mov    %eax,(%esp)
 8541e19:	e8 c0 f1 02 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8541e1e:	eb 1b                	jmp    8541e3b <_ZN9item_lock9CItemLock16UpdateAvatarItemEP5CUserP10Inven_Item+0xf9>
 8541e20:	89 d3                	mov    %edx,%ebx
 8541e22:	89 c6                	mov    %eax,%esi
 8541e24:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541e27:	89 04 24             	mov    %eax,(%esp)
 8541e2a:	e8 a3 aa 0d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8541e2f:	89 f0                	mov    %esi,%eax
 8541e31:	89 da                	mov    %ebx,%edx
 8541e33:	89 04 24             	mov    %eax,(%esp)
 8541e36:	e8 15 19 5a 00       	call   8ae3750 <_Unwind_Resume>
 8541e3b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541e3e:	89 04 24             	mov    %eax,(%esp)
 8541e41:	e8 8c aa 0d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8541e46:	83 c4 20             	add    $0x20,%esp
 8541e49:	5b                   	pop    %ebx
 8541e4a:	5e                   	pop    %esi
 8541e4b:	5d                   	pop    %ebp
 8541e4c:	c3                   	ret
 8541e4d:	90                   	nop

```

```c
// item_lock::CItemLock::UpdateAvatarItem @ 0x8541d42

/* item_lock::CItemLock::UpdateAvatarItem(CUser*, Inven_Item*) */

void __thiscall
item_lock::CItemLock::UpdateAvatarItem(CItemLock *this,CUser *param_1,Inven_Item *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  uint uVar4;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ItemLock.cpp",0xbf);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08541d94 to 08541e1d has its CatchHandler @ 08541e20 */
  CStreamGuard::operator<<(pCVar2,0x1c2);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  iVar3 = *(int *)(param_2 + 7);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  uVar4 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(param_2 + 0x11));
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4 & 0xff);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## UpdateCreatereItem

```asm
// === 08541c36 item_lock::CItemLock::UpdateCreatereItem  [0x08541c36-0x8541d41] ===
 8541c36:	55                   	push   %ebp
 8541c37:	89 e5                	mov    %esp,%ebp
 8541c39:	56                   	push   %esi
 8541c3a:	53                   	push   %ebx
 8541c3b:	83 ec 20             	sub    $0x20,%esp
 8541c3e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8541c43:	c7 44 24 08 b5 00 00 	movl   $0xb5,0x8(%esp)
 8541c4a:	00 
 8541c4b:	c7 44 24 04 00 a9 c9 	movl   $0x8c9a900,0x4(%esp)
 8541c52:	08 
 8541c53:	89 04 24             	mov    %eax,(%esp)
 8541c56:	e8 2b de d4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8541c5b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8541c62:	00 
 8541c63:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541c67:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541c6a:	89 04 24             	mov    %eax,(%esp)
 8541c6d:	e8 b4 6f b8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8541c72:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541c75:	89 04 24             	mov    %eax,(%esp)
 8541c78:	e8 c9 6f b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8541c7d:	c7 44 24 04 c1 01 00 	movl   $0x1c1,0x4(%esp)
 8541c84:	00 
 8541c85:	89 04 24             	mov    %eax,(%esp)
 8541c88:	e8 c9 6f b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8541c8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541c90:	89 04 24             	mov    %eax,(%esp)
 8541c93:	e8 fe 6f b8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8541c98:	89 c3                	mov    %eax,%ebx
 8541c9a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541c9d:	89 04 24             	mov    %eax,(%esp)
 8541ca0:	e8 a1 6f b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8541ca5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8541ca9:	89 04 24             	mov    %eax,(%esp)
 8541cac:	e8 a5 6f b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8541cb1:	8b 45 10             	mov    0x10(%ebp),%eax
 8541cb4:	8b 58 07             	mov    0x7(%eax),%ebx
 8541cb7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541cba:	89 04 24             	mov    %eax,(%esp)
 8541cbd:	e8 84 6f b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8541cc2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8541cc6:	89 04 24             	mov    %eax,(%esp)
 8541cc9:	e8 88 6f b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8541cce:	8b 45 10             	mov    0x10(%ebp),%eax
 8541cd1:	83 c0 11             	add    $0x11,%eax
 8541cd4:	89 04 24             	mov    %eax,(%esp)
 8541cd7:	e8 cc 98 d4 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 8541cdc:	0f b6 d8             	movzbl %al,%ebx
 8541cdf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541ce2:	89 04 24             	mov    %eax,(%esp)
 8541ce5:	e8 5c 6f b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8541cea:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8541cee:	89 04 24             	mov    %eax,(%esp)
 8541cf1:	e8 60 6f b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8541cf6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8541cfb:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8541cfe:	89 54 24 08          	mov    %edx,0x8(%esp)
 8541d02:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8541d09:	00 
 8541d0a:	89 04 24             	mov    %eax,(%esp)
 8541d0d:	e8 cc f2 02 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8541d12:	eb 1b                	jmp    8541d2f <_ZN9item_lock9CItemLock18UpdateCreatereItemEP5CUserP10Inven_Item+0xf9>
 8541d14:	89 d3                	mov    %edx,%ebx
 8541d16:	89 c6                	mov    %eax,%esi
 8541d18:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541d1b:	89 04 24             	mov    %eax,(%esp)
 8541d1e:	e8 af ab 0d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8541d23:	89 f0                	mov    %esi,%eax
 8541d25:	89 da                	mov    %ebx,%edx
 8541d27:	89 04 24             	mov    %eax,(%esp)
 8541d2a:	e8 21 1a 5a 00       	call   8ae3750 <_Unwind_Resume>
 8541d2f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8541d32:	89 04 24             	mov    %eax,(%esp)
 8541d35:	e8 98 ab 0d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8541d3a:	83 c4 20             	add    $0x20,%esp
 8541d3d:	5b                   	pop    %ebx
 8541d3e:	5e                   	pop    %esi
 8541d3f:	5d                   	pop    %ebp
 8541d40:	c3                   	ret
 8541d41:	90                   	nop

```

```c
// item_lock::CItemLock::UpdateCreatereItem @ 0x8541c36

/* item_lock::CItemLock::UpdateCreatereItem(CUser*, Inven_Item*) */

void __thiscall
item_lock::CItemLock::UpdateCreatereItem(CItemLock *this,CUser *param_1,Inven_Item *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  uint uVar4;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ItemLock.cpp",0xb5);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08541c88 to 08541d11 has its CatchHandler @ 08541d14 */
  CStreamGuard::operator<<(pCVar2,0x1c1);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  iVar3 = *(int *)(param_2 + 7);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  uVar4 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(param_2 + 0x11));
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4 & 0xff);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## UpdateItem

```asm
// === 08541e4e item_lock::CItemLock::UpdateItem  [0x08541e4e-0x8541e9f] ===
 8541e4e:	55                   	push   %ebp
 8541e4f:	89 e5                	mov    %esp,%ebp
 8541e51:	83 ec 18             	sub    $0x18,%esp
 8541e54:	8b 45 10             	mov    0x10(%ebp),%eax
 8541e57:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8541e5b:	3c 08                	cmp    $0x8,%al
 8541e5d:	75 1b                	jne    8541e7a <_ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item+0x2c>
 8541e5f:	8b 45 10             	mov    0x10(%ebp),%eax
 8541e62:	89 44 24 08          	mov    %eax,0x8(%esp)
 8541e66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541e69:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541e6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8541e70:	89 04 24             	mov    %eax,(%esp)
 8541e73:	e8 ca fe ff ff       	call   8541d42 <_ZN9item_lock9CItemLock16UpdateAvatarItemEP5CUserP10Inven_Item>
 8541e78:	eb 24                	jmp    8541e9e <_ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item+0x50>
 8541e7a:	8b 45 10             	mov    0x10(%ebp),%eax
 8541e7d:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8541e81:	3c 05                	cmp    $0x5,%al
 8541e83:	75 19                	jne    8541e9e <_ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item+0x50>
 8541e85:	8b 45 10             	mov    0x10(%ebp),%eax
 8541e88:	89 44 24 08          	mov    %eax,0x8(%esp)
 8541e8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541e8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541e93:	8b 45 08             	mov    0x8(%ebp),%eax
 8541e96:	89 04 24             	mov    %eax,(%esp)
 8541e99:	e8 98 fd ff ff       	call   8541c36 <_ZN9item_lock9CItemLock18UpdateCreatereItemEP5CUserP10Inven_Item>
 8541e9e:	c9                   	leave
 8541e9f:	c3                   	ret

```

```c
// item_lock::CItemLock::UpdateItem @ 0x8541e4e

/* item_lock::CItemLock::UpdateItem(CUser*, Inven_Item*) */

void __thiscall item_lock::CItemLock::UpdateItem(CItemLock *this,CUser *param_1,Inven_Item *param_2)

{
  if (param_2[1] == (Inven_Item)0x8) {
    UpdateAvatarItem(this,param_1,param_2);
  }
  else if (param_2[1] == (Inven_Item)0x5) {
    UpdateCreatereItem(this,param_1,param_2);
  }
  return;
}

```

---

## VerifyItemLock

```asm
// === 08542e98 item_lock::CItemLock::VerifyItemLock  [0x08542e98-0x8542fdd] ===
 8542e98:	55                   	push   %ebp
 8542e99:	89 e5                	mov    %esp,%ebp
 8542e9b:	83 ec 38             	sub    $0x38,%esp
 8542e9e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8542ea2:	0f 84 33 01 00 00    	je     8542fdb <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0x143>
 8542ea8:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8542eac:	8b 45 08             	mov    0x8(%ebp),%eax
 8542eaf:	8d 50 08             	lea    0x8(%eax),%edx
 8542eb2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542eb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542eb9:	89 04 24             	mov    %eax,(%esp)
 8542ebc:	e8 8d 03 00 00       	call   854324e <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE5beginEv>
 8542ec1:	83 ec 04             	sub    $0x4,%esp
 8542ec4:	e9 cd 00 00 00       	jmp    8542f96 <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0xfe>
 8542ec9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542ecc:	89 04 24             	mov    %eax,(%esp)
 8542ecf:	e8 f8 03 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542ed4:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8542ed8:	0f b6 c0             	movzbl %al,%eax
 8542edb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8542ede:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8542ee2:	74 0a                	je     8542eee <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0x56>
 8542ee4:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 8542ee8:	0f 85 9d 00 00 00    	jne    8542f8b <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0xf3>
 8542eee:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542ef1:	89 04 24             	mov    %eax,(%esp)
 8542ef4:	e8 d3 03 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542ef9:	0f b6 00             	movzbl (%eax),%eax
 8542efc:	0f b6 c0             	movzbl %al,%eax
 8542eff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542f03:	8b 45 08             	mov    0x8(%ebp),%eax
 8542f06:	89 04 24             	mov    %eax,(%esp)
 8542f09:	e8 04 ff ff ff       	call   8542e12 <_ZN9item_lock9CItemLock9_findItemEh>
 8542f0e:	83 f0 01             	xor    $0x1,%eax
 8542f11:	84 c0                	test   %al,%al
 8542f13:	74 69                	je     8542f7e <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0xe6>
 8542f15:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542f18:	89 04 24             	mov    %eax,(%esp)
 8542f1b:	e8 ac 03 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 8542f20:	8b 55 08             	mov    0x8(%ebp),%edx
 8542f23:	83 c2 20             	add    $0x20,%edx
 8542f26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542f2a:	89 14 24             	mov    %edx,(%esp)
 8542f2d:	e8 d8 05 00 00       	call   854350a <_ZNSt5stackIhSt5dequeIhSaIhEEE4pushERKh>
 8542f32:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542f35:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8542f3c:	00 
 8542f3d:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8542f40:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542f44:	89 04 24             	mov    %eax,(%esp)
 8542f47:	e8 d8 05 00 00       	call   8543524 <_ZNSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEppEi>
 8542f4c:	83 ec 04             	sub    $0x4,%esp
 8542f4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8542f52:	8d 50 08             	lea    0x8(%eax),%edx
 8542f55:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8542f58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542f5c:	89 14 24             	mov    %edx,(%esp)
 8542f5f:	e8 fe 05 00 00       	call   8543562 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE5eraseESt17_Rb_tree_iteratorIS5_E>
 8542f64:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 8542f68:	75 0e                	jne    8542f78 <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0xe0>
 8542f6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8542f6d:	83 c0 54             	add    $0x54,%eax
 8542f70:	89 04 24             	mov    %eax,(%esp)
 8542f73:	e8 78 e5 ff ff       	call   85414f0 <_ZN9item_lock14CItemLockTimer21DecreaseItemLockTimerEv>
 8542f78:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 8542f7c:	eb 18                	jmp    8542f96 <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0xfe>
 8542f7e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542f81:	89 04 24             	mov    %eax,(%esp)
 8542f84:	e8 25 03 00 00       	call   85432ae <_ZNSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEppEv>
 8542f89:	eb 0b                	jmp    8542f96 <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0xfe>
 8542f8b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542f8e:	89 04 24             	mov    %eax,(%esp)
 8542f91:	e8 18 03 00 00       	call   85432ae <_ZNSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEppEv>
 8542f96:	8b 45 08             	mov    0x8(%ebp),%eax
 8542f99:	8d 50 08             	lea    0x8(%eax),%edx
 8542f9c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8542f9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542fa3:	89 04 24             	mov    %eax,(%esp)
 8542fa6:	e8 c9 02 00 00       	call   8543274 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 8542fab:	83 ec 04             	sub    $0x4,%esp
 8542fae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8542fb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542fb5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8542fb8:	89 04 24             	mov    %eax,(%esp)
 8542fbb:	e8 da 02 00 00       	call   854329a <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEneERKS4_>
 8542fc0:	84 c0                	test   %al,%al
 8542fc2:	0f 85 01 ff ff ff    	jne    8542ec9 <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0x31>
 8542fc8:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8542fcc:	74 0e                	je     8542fdc <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0x144>
 8542fce:	8b 45 08             	mov    0x8(%ebp),%eax
 8542fd1:	89 04 24             	mov    %eax,(%esp)
 8542fd4:	e8 eb 5b b8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8542fd9:	eb 01                	jmp    8542fdc <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser+0x144>
 8542fdb:	90                   	nop
 8542fdc:	c9                   	leave
 8542fdd:	c3                   	ret

```

```c
// item_lock::CItemLock::VerifyItemLock @ 0x8542e98

/* item_lock::CItemLock::VerifyItemLock(CUser*) */

void __thiscall item_lock::CItemLock::VerifyItemLock(CItemLock *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  uchar *puVar3;
  undefined4 uVar4;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_20 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_1c [4];
  undefined4 local_18;
  char local_11;
  uint local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_11 = '\0';
    std::
    map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
    ::begin(local_20);
    while( true ) {
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_20,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_20);
      local_10 = (uint)*(byte *)(iVar2 + 8);
      if ((local_10 == 1) || (local_10 == 2)) {
        puVar3 = (uchar *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                          operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>
                                      *)local_20);
        cVar1 = _findItem(this,*puVar3);
        if (cVar1 == '\x01') {
          std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_20);
        }
        else {
          puVar3 = (uchar *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                            operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>
                                        *)local_20);
          std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::push
                    ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *
                     )(this + 0x20),puVar3);
          uVar4 = 0;
          std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)&local_18,
                     (int)local_20);
          std::
          map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
          ::erase((map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
                   *)(this + 8),local_18,uVar4);
          if (local_10 == 2) {
            CItemLockTimer::DecreaseItemLockTimer((CItemLockTimer *)(this + 0x54));
          }
          local_11 = '\x01';
        }
      }
      else {
        std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_20);
      }
    }
    if (local_11 != '\0') {
      charac_expand::CData::alter((CData *)this);
    }
  }
  return;
}

```

---

## _findItem

```asm
// === 08542e12 item_lock::CItemLock::_findItem  [0x08542e12-0x8542e97] ===
 8542e12:	55                   	push   %ebp
 8542e13:	89 e5                	mov    %esp,%ebp
 8542e15:	83 ec 38             	sub    $0x38,%esp
 8542e18:	8b 45 0c             	mov    0xc(%ebp),%eax
 8542e1b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8542e1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8542e21:	8d 50 48             	lea    0x48(%eax),%edx
 8542e24:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542e27:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542e2b:	89 04 24             	mov    %eax,(%esp)
 8542e2e:	e8 b1 7c f5 ff       	call   849aae4 <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EE5beginEv>
 8542e33:	83 ec 04             	sub    $0x4,%esp
 8542e36:	eb 2b                	jmp    8542e63 <_ZN9item_lock9CItemLock9_findItemEh+0x51>
 8542e38:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542e3b:	89 04 24             	mov    %eax,(%esp)
 8542e3e:	e8 4b 7d f5 ff       	call   849ab8e <_ZNK9__gnu_cxx17__normal_iteratorIPN9item_lock13stItemLockRefESt6vectorIS2_SaIS2_EEEdeEv>
 8542e43:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8542e46:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8542e49:	0f b6 00             	movzbl (%eax),%eax
 8542e4c:	3a 45 e4             	cmp    -0x1c(%ebp),%al
 8542e4f:	75 07                	jne    8542e58 <_ZN9item_lock9CItemLock9_findItemEh+0x46>
 8542e51:	b8 01 00 00 00       	mov    $0x1,%eax
 8542e56:	eb 3e                	jmp    8542e96 <_ZN9item_lock9CItemLock9_findItemEh+0x84>
 8542e58:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542e5b:	89 04 24             	mov    %eax,(%esp)
 8542e5e:	e8 91 06 00 00       	call   85434f4 <_ZN9__gnu_cxx17__normal_iteratorIPN9item_lock13stItemLockRefESt6vectorIS2_SaIS2_EEEppEv>
 8542e63:	8b 45 08             	mov    0x8(%ebp),%eax
 8542e66:	8d 50 48             	lea    0x48(%eax),%edx
 8542e69:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8542e6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8542e70:	89 04 24             	mov    %eax,(%esp)
 8542e73:	e8 90 7c f5 ff       	call   849ab08 <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EE3endEv>
 8542e78:	83 ec 04             	sub    $0x4,%esp
 8542e7b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8542e7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8542e82:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8542e85:	89 04 24             	mov    %eax,(%esp)
 8542e88:	e8 a1 7c f5 ff       	call   849ab2e <_ZN9__gnu_cxxneIPN9item_lock13stItemLockRefESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8542e8d:	84 c0                	test   %al,%al
 8542e8f:	75 a7                	jne    8542e38 <_ZN9item_lock9CItemLock9_findItemEh+0x26>
 8542e91:	b8 00 00 00 00       	mov    $0x0,%eax
 8542e96:	c9                   	leave
 8542e97:	c3                   	ret

```

```c
// item_lock::CItemLock::_findItem @ 0x8542e12

/* item_lock::CItemLock::_findItem(unsigned char) */

undefined4 __thiscall item_lock::CItemLock::_findItem(CItemLock *this,uchar param_1)

{
  bool bVar1;
  __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  uchar *local_10;
  
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::begin();
  while( true ) {
    std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 0;
    }
    local_10 = (uchar *)__gnu_cxx::
                        __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
                        ::operator*(local_18);
    if (*local_10 == param_1) break;
    __gnu_cxx::
    __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
    ::operator++(local_18);
  }
  return 1;
}

```

---

## _reset

```asm
// === 08541a3e item_lock::CItemLock::_reset  [0x08541a3e-0x8541a95] ===
 8541a3e:	55                   	push   %ebp
 8541a3f:	89 e5                	mov    %esp,%ebp
 8541a41:	83 ec 18             	sub    $0x18,%esp
 8541a44:	8b 45 08             	mov    0x8(%ebp),%eax
 8541a47:	83 c0 08             	add    $0x8,%eax
 8541a4a:	89 04 24             	mov    %eax,(%esp)
 8541a4d:	e8 14 19 00 00       	call   8543366 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE5clearEv>
 8541a52:	8b 45 08             	mov    0x8(%ebp),%eax
 8541a55:	83 c0 48             	add    $0x48,%eax
 8541a58:	89 04 24             	mov    %eax,(%esp)
 8541a5b:	e8 1a 19 00 00       	call   854337a <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EE5clearEv>
 8541a60:	eb 0e                	jmp    8541a70 <_ZN9item_lock9CItemLock6_resetEv+0x32>
 8541a62:	8b 45 08             	mov    0x8(%ebp),%eax
 8541a65:	83 c0 20             	add    $0x20,%eax
 8541a68:	89 04 24             	mov    %eax,(%esp)
 8541a6b:	e8 3a 19 00 00       	call   85433aa <_ZNSt5stackIhSt5dequeIhSaIhEEE3popEv>
 8541a70:	8b 45 08             	mov    0x8(%ebp),%eax
 8541a73:	83 c0 20             	add    $0x20,%eax
 8541a76:	89 04 24             	mov    %eax,(%esp)
 8541a79:	e8 18 19 00 00       	call   8543396 <_ZNKSt5stackIhSt5dequeIhSaIhEEE5emptyEv>
 8541a7e:	83 f0 01             	xor    $0x1,%eax
 8541a81:	84 c0                	test   %al,%al
 8541a83:	75 dd                	jne    8541a62 <_ZN9item_lock9CItemLock6_resetEv+0x24>
 8541a85:	8b 45 08             	mov    0x8(%ebp),%eax
 8541a88:	83 c0 54             	add    $0x54,%eax
 8541a8b:	89 04 24             	mov    %eax,(%esp)
 8541a8e:	e8 bf 15 00 00       	call   8543052 <_ZN9item_lock14CItemLockTimer5ResetEv>
 8541a93:	c9                   	leave
 8541a94:	c3                   	ret
 8541a95:	90                   	nop

```

```c
// item_lock::CItemLock::_reset @ 0x8541a3e

/* item_lock::CItemLock::_reset() */

void __thiscall item_lock::CItemLock::_reset(CItemLock *this)

{
  char cVar1;
  
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::clear((map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
           *)(this + 8));
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::clear
            ((vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>> *)
             (this + 0x48));
  while( true ) {
    cVar1 = std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::empty
                      ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>
                        *)(this + 0x20));
    if (cVar1 == '\x01') break;
    std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::pop
              ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
               (this + 0x20));
  }
  CItemLockTimer::Reset((CItemLockTimer *)(this + 0x54));
  return;
}

```

---

## _saveData

```asm
// === 0854176e item_lock::CItemLock::_saveData  [0x0854176e-0x8541957] ===
 854176e:	55                   	push   %ebp
 854176f:	89 e5                	mov    %esp,%ebp
 8541771:	56                   	push   %esi
 8541772:	53                   	push   %ebx
 8541773:	83 ec 40             	sub    $0x40,%esp
 8541776:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 854177b:	c7 44 24 08 4b 00 00 	movl   $0x4b,0x8(%esp)
 8541782:	00 
 8541783:	c7 44 24 04 00 a9 c9 	movl   $0x8c9a900,0x4(%esp)
 854178a:	08 
 854178b:	89 04 24             	mov    %eax,(%esp)
 854178e:	e8 f3 e2 d4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8541793:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 854179a:	00 
 854179b:	89 44 24 04          	mov    %eax,0x4(%esp)
 854179f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85417a2:	89 04 24             	mov    %eax,(%esp)
 85417a5:	e8 7c 74 b8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85417aa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85417ad:	89 04 24             	mov    %eax,(%esp)
 85417b0:	e8 91 74 b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85417b5:	c7 44 24 04 b8 01 00 	movl   $0x1b8,0x4(%esp)
 85417bc:	00 
 85417bd:	89 04 24             	mov    %eax,(%esp)
 85417c0:	e8 91 74 b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85417c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85417c8:	89 04 24             	mov    %eax,(%esp)
 85417cb:	e8 c6 74 b8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85417d0:	89 c3                	mov    %eax,%ebx
 85417d2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85417d5:	89 04 24             	mov    %eax,(%esp)
 85417d8:	e8 69 74 b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85417dd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85417e1:	89 04 24             	mov    %eax,(%esp)
 85417e4:	e8 6d 74 b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85417e9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85417ec:	89 04 24             	mov    %eax,(%esp)
 85417ef:	e8 5a 74 b8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85417f4:	89 04 24             	mov    %eax,(%esp)
 85417f7:	e8 3c 1a 00 00       	call   8543238 <_ZN12CStreamGuard11GetInBufferI20SIG_ITEM_LOCK_UPDATEEEPT_v>
 85417fc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85417ff:	c7 44 24 08 24 03 00 	movl   $0x324,0x8(%esp)
 8541806:	00 
 8541807:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854180e:	00 
 854180f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8541812:	89 04 24             	mov    %eax,(%esp)
 8541815:	e8 a6 c4 b3 ff       	call   807dcc0 <memset@plt>
 854181a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8541821:	ff 
 8541822:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541825:	89 04 24             	mov    %eax,(%esp)
 8541828:	e8 73 c7 10 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 854182d:	89 c2                	mov    %eax,%edx
 854182f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8541832:	89 10                	mov    %edx,(%eax)
 8541834:	8b 45 08             	mov    0x8(%ebp),%eax
 8541837:	8d 50 08             	lea    0x8(%eax),%edx
 854183a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 854183d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8541841:	89 04 24             	mov    %eax,(%esp)
 8541844:	e8 05 1a 00 00       	call   854324e <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE5beginEv>
 8541849:	83 ec 04             	sub    $0x4,%esp
 854184c:	e9 82 00 00 00       	jmp    85418d3 <_ZN9item_lock9CItemLock9_saveDataEP5CUser+0x165>
 8541851:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8541854:	89 04 24             	mov    %eax,(%esp)
 8541857:	e8 70 1a 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 854185c:	0f b6 00             	movzbl (%eax),%eax
 854185f:	0f b6 c0             	movzbl %al,%eax
 8541862:	83 e8 01             	sub    $0x1,%eax
 8541865:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8541868:	83 7d f4 63          	cmpl   $0x63,-0xc(%ebp)
 854186c:	7f 06                	jg     8541874 <_ZN9item_lock9CItemLock9_saveDataEP5CUser+0x106>
 854186e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8541872:	79 35                	jns    85418a9 <_ZN9item_lock9CItemLock9_saveDataEP5CUser+0x13b>
 8541874:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8541877:	89 44 24 14          	mov    %eax,0x14(%esp)
 854187b:	c7 44 24 10 0d a9 c9 	movl   $0x8c9a90d,0x10(%esp)
 8541882:	08 
 8541883:	c7 44 24 0c 59 00 00 	movl   $0x59,0xc(%esp)
 854188a:	00 
 854188b:	c7 44 24 08 60 b5 c9 	movl   $0x8c9b560,0x8(%esp)
 8541892:	08 
 8541893:	c7 44 24 04 00 a9 c9 	movl   $0x8c9a900,0x4(%esp)
 854189a:	08 
 854189b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85418a2:	e8 63 23 59 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85418a7:	eb 1f                	jmp    85418c8 <_ZN9item_lock9CItemLock9_saveDataEP5CUser+0x15a>
 85418a9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85418ac:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85418af:	89 04 24             	mov    %eax,(%esp)
 85418b2:	e8 15 1a 00 00       	call   85432cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 85418b7:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85418ba:	8b 50 08             	mov    0x8(%eax),%edx
 85418bd:	8b 40 04             	mov    0x4(%eax),%eax
 85418c0:	89 44 d9 04          	mov    %eax,0x4(%ecx,%ebx,8)
 85418c4:	89 54 d9 08          	mov    %edx,0x8(%ecx,%ebx,8)
 85418c8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85418cb:	89 04 24             	mov    %eax,(%esp)
 85418ce:	e8 db 19 00 00       	call   85432ae <_ZNSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEppEv>
 85418d3:	8b 45 08             	mov    0x8(%ebp),%eax
 85418d6:	8d 50 08             	lea    0x8(%eax),%edx
 85418d9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85418dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85418e0:	89 04 24             	mov    %eax,(%esp)
 85418e3:	e8 8c 19 00 00       	call   8543274 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 85418e8:	83 ec 04             	sub    $0x4,%esp
 85418eb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85418ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 85418f2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85418f5:	89 04 24             	mov    %eax,(%esp)
 85418f8:	e8 9d 19 00 00       	call   854329a <_ZNKSt17_Rb_tree_iteratorISt4pairIKh14stItemLockInfoEEneERKS4_>
 85418fd:	84 c0                	test   %al,%al
 85418ff:	0f 85 4c ff ff ff    	jne    8541851 <_ZN9item_lock9CItemLock9_saveDataEP5CUser+0xe3>
 8541905:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 854190a:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 854190d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8541911:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8541918:	00 
 8541919:	89 04 24             	mov    %eax,(%esp)
 854191c:	e8 bd f6 02 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8541921:	bb 01 00 00 00       	mov    $0x1,%ebx
 8541926:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8541929:	89 04 24             	mov    %eax,(%esp)
 854192c:	e8 a1 af 0d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8541931:	89 d8                	mov    %ebx,%eax
 8541933:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8541936:	83 c4 00             	add    $0x0,%esp
 8541939:	5b                   	pop    %ebx
 854193a:	5e                   	pop    %esi
 854193b:	5d                   	pop    %ebp
 854193c:	c3                   	ret
 854193d:	89 d3                	mov    %edx,%ebx
 854193f:	89 c6                	mov    %eax,%esi
 8541941:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8541944:	89 04 24             	mov    %eax,(%esp)
 8541947:	e8 86 af 0d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 854194c:	89 f0                	mov    %esi,%eax
 854194e:	89 da                	mov    %ebx,%edx
 8541950:	89 04 24             	mov    %eax,(%esp)
 8541953:	e8 f8 1d 5a 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// item_lock::CItemLock::_saveData @ 0x854176e

/* item_lock::CItemLock::_saveData(CUser*) */

undefined4 __thiscall item_lock::CItemLock::_saveData(CItemLock *this,CUser *param_1)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_24 [4];
  CStreamGuard local_20 [8];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_18 [4];
  SIG_ITEM_LOCK_UPDATE *local_14;
  int local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ItemLock.cpp",0x4b);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 085417c0 to 08541920 has its CatchHandler @ 0854193d */
  CStreamGuard::operator<<(pCVar3,0x1b8);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_14 = CStreamGuard::GetInBuffer<SIG_ITEM_LOCK_UPDATE>(pCVar3);
  memset(local_14,0,0x324);
  uVar5 = CUser::get_charac_no(param_1,-1);
  *(undefined4 *)local_14 = uVar5;
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::begin(local_24);
  while( true ) {
    std::
    map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_24,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    pbVar6 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                     operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                                local_24);
    iVar4 = *pbVar6 - 1;
    local_10 = iVar4;
    if ((iVar4 < 100) && (-1 < iVar4)) {
      iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_24);
      uVar5 = *(undefined4 *)(iVar7 + 8);
      *(undefined4 *)(local_14 + iVar4 * 8 + 4) = *(undefined4 *)(iVar7 + 4);
      *(undefined4 *)(local_14 + iVar4 * 8 + 8) = uVar5;
    }
    else {
      LogManager::logFormat
                (1,"ItemLock.cpp","virtual bool item_lock::CItemLock::_saveData(CUser*)",0x59,
                 "itemlock error index %d",iVar4);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_24);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
  CStreamGuard::~CStreamGuard(local_20);
  return 1;
}

```

---

## getData

```asm
// === 08541958 item_lock::CItemLock::getData  [0x08541958-0x8541a3d] ===
 8541958:	55                   	push   %ebp
 8541959:	89 e5                	mov    %esp,%ebp
 854195b:	53                   	push   %ebx
 854195c:	83 ec 34             	sub    $0x34,%esp
 854195f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541962:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8541965:	8b 45 08             	mov    0x8(%ebp),%eax
 8541968:	8d 50 08             	lea    0x8(%eax),%edx
 854196b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 854196e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8541972:	89 04 24             	mov    %eax,(%esp)
 8541975:	e8 60 19 00 00       	call   85432da <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE5beginEv>
 854197a:	83 ec 04             	sub    $0x4,%esp
 854197d:	e9 84 00 00 00       	jmp    8541a06 <_ZNK9item_lock9CItemLock7getDataEPc+0xae>
 8541982:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8541985:	89 04 24             	mov    %eax,(%esp)
 8541988:	e8 cb 19 00 00       	call   8543358 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 854198d:	0f b6 00             	movzbl (%eax),%eax
 8541990:	0f b6 c0             	movzbl %al,%eax
 8541993:	83 e8 01             	sub    $0x1,%eax
 8541996:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8541999:	83 7d f4 63          	cmpl   $0x63,-0xc(%ebp)
 854199d:	7f 06                	jg     85419a5 <_ZNK9item_lock9CItemLock7getDataEPc+0x4d>
 854199f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85419a3:	79 35                	jns    85419da <_ZNK9item_lock9CItemLock7getDataEPc+0x82>
 85419a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85419a8:	89 44 24 14          	mov    %eax,0x14(%esp)
 85419ac:	c7 44 24 10 0d a9 c9 	movl   $0x8c9a90d,0x10(%esp)
 85419b3:	08 
 85419b4:	c7 44 24 0c 6c 00 00 	movl   $0x6c,0xc(%esp)
 85419bb:	00 
 85419bc:	c7 44 24 08 20 b5 c9 	movl   $0x8c9b520,0x8(%esp)
 85419c3:	08 
 85419c4:	c7 44 24 04 00 a9 c9 	movl   $0x8c9a900,0x4(%esp)
 85419cb:	08 
 85419cc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85419d3:	e8 32 22 59 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85419d8:	eb 21                	jmp    85419fb <_ZNK9item_lock9CItemLock7getDataEPc+0xa3>
 85419da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85419dd:	c1 e0 03             	shl    $0x3,%eax
 85419e0:	89 c3                	mov    %eax,%ebx
 85419e2:	03 5d f0             	add    -0x10(%ebp),%ebx
 85419e5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85419e8:	89 04 24             	mov    %eax,(%esp)
 85419eb:	e8 68 19 00 00       	call   8543358 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEptEv>
 85419f0:	8b 50 08             	mov    0x8(%eax),%edx
 85419f3:	8b 40 04             	mov    0x4(%eax),%eax
 85419f6:	89 03                	mov    %eax,(%ebx)
 85419f8:	89 53 04             	mov    %edx,0x4(%ebx)
 85419fb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85419fe:	89 04 24             	mov    %eax,(%esp)
 8541a01:	e8 34 19 00 00       	call   854333a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEppEv>
 8541a06:	8b 45 08             	mov    0x8(%ebp),%eax
 8541a09:	8d 50 08             	lea    0x8(%eax),%edx
 8541a0c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541a0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8541a13:	89 04 24             	mov    %eax,(%esp)
 8541a16:	e8 e5 18 00 00       	call   8543300 <_ZNKSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 8541a1b:	83 ec 04             	sub    $0x4,%esp
 8541a1e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8541a21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8541a25:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8541a28:	89 04 24             	mov    %eax,(%esp)
 8541a2b:	e8 f6 18 00 00       	call   8543326 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh14stItemLockInfoEEneERKS4_>
 8541a30:	84 c0                	test   %al,%al
 8541a32:	0f 85 4a ff ff ff    	jne    8541982 <_ZNK9item_lock9CItemLock7getDataEPc+0x2a>
 8541a38:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8541a3b:	c9                   	leave
 8541a3c:	c3                   	ret
 8541a3d:	90                   	nop

```

```c
// item_lock::CItemLock::getData @ 0x8541958

/* item_lock::CItemLock::getData(char*) const */

void __thiscall item_lock::CItemLock::getData(CItemLock *this,char *param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_1c [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_18 [4];
  char *local_14;
  int local_10;
  
  local_14 = param_1;
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
    ::end(local_18);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                       local_1c,(_Rb_tree_const_iterator *)local_18);
    if (cVar2 == '\0') break;
    pbVar3 = (byte *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                     operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>
                                 *)local_1c);
    local_10 = *pbVar3 - 1;
    if ((local_10 < 100) && (-1 < local_10)) {
      pcVar5 = local_14 + local_10 * 8;
      iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
              operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_1c);
      uVar1 = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)pcVar5 = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(pcVar5 + 4) = uVar1;
    }
    else {
      LogManager::logFormat
                (1,"ItemLock.cpp","virtual void item_lock::CItemLock::getData(char*) const",0x6c,
                 "itemlock error index %d",local_10);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_1c);
  }
  return;
}

```

---

## loadData

```asm
// === 08541714 item_lock::CItemLock::loadData  [0x08541714-0x854176d] ===
 8541714:	55                   	push   %ebp
 8541715:	89 e5                	mov    %esp,%ebp
 8541717:	83 ec 28             	sub    $0x28,%esp
 854171a:	8b 45 10             	mov    0x10(%ebp),%eax
 854171d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8541720:	c7 45 f4 63 00 00 00 	movl   $0x63,-0xc(%ebp)
 8541727:	eb 32                	jmp    854175b <_ZN9item_lock9CItemLock8loadDataEP5CUserPc+0x47>
 8541729:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854172c:	c1 e0 03             	shl    $0x3,%eax
 854172f:	89 c2                	mov    %eax,%edx
 8541731:	03 55 f0             	add    -0x10(%ebp),%edx
 8541734:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8541737:	83 c0 01             	add    $0x1,%eax
 854173a:	0f b6 c0             	movzbl %al,%eax
 854173d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8541741:	89 44 24 08          	mov    %eax,0x8(%esp)
 8541745:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541748:	89 44 24 04          	mov    %eax,0x4(%esp)
 854174c:	8b 45 08             	mov    0x8(%ebp),%eax
 854174f:	89 04 24             	mov    %eax,(%esp)
 8541752:	e8 33 13 00 00       	call   8542a8a <_ZN9item_lock9CItemLock12PushItemLockEP5CUserhP14stItemLockInfo>
 8541757:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 854175b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854175e:	f7 d0                	not    %eax
 8541760:	c1 e8 1f             	shr    $0x1f,%eax
 8541763:	84 c0                	test   %al,%al
 8541765:	75 c2                	jne    8541729 <_ZN9item_lock9CItemLock8loadDataEP5CUserPc+0x15>
 8541767:	b8 01 00 00 00       	mov    $0x1,%eax
 854176c:	c9                   	leave
 854176d:	c3                   	ret

```

```c
// item_lock::CItemLock::loadData @ 0x8541714

/* item_lock::CItemLock::loadData(CUser*, char*) */

undefined4 __thiscall item_lock::CItemLock::loadData(CItemLock *this,CUser *param_1,char *param_2)

{
  int local_10;
  
  for (local_10 = 99; -1 < local_10; local_10 = local_10 + -1) {
    PushItemLock(this,param_1,(char)local_10 + '\x01',(stItemLockInfo *)(param_2 + local_10 * 8));
  }
  return 1;
}

```

---

## ~CItemLock

```asm
// === 08541644 item_lock::CItemLock::~CItemLock  [0x08541644-0x85416f5] ===
 8541644:	55                   	push   %ebp
 8541645:	89 e5                	mov    %esp,%ebp
 8541647:	56                   	push   %esi
 8541648:	53                   	push   %ebx
 8541649:	83 ec 10             	sub    $0x10,%esp
 854164c:	8b 45 08             	mov    0x8(%ebp),%eax
 854164f:	c7 00 a8 b5 c9 08    	movl   $0x8c9b5a8,(%eax)
 8541655:	8b 45 08             	mov    0x8(%ebp),%eax
 8541658:	83 c0 48             	add    $0x48,%eax
 854165b:	89 04 24             	mov    %eax,(%esp)
 854165e:	e8 77 1b 00 00       	call   85431da <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EED1Ev>
 8541663:	eb 18                	jmp    854167d <_ZN9item_lock9CItemLockD1Ev+0x39>
 8541665:	89 d3                	mov    %edx,%ebx
 8541667:	89 c6                	mov    %eax,%esi
 8541669:	8b 45 08             	mov    0x8(%ebp),%eax
 854166c:	83 c0 20             	add    $0x20,%eax
 854166f:	89 04 24             	mov    %eax,(%esp)
 8541672:	e8 fd 19 00 00       	call   8543074 <_ZNSt5stackIhSt5dequeIhSaIhEEED1Ev>
 8541677:	89 f0                	mov    %esi,%eax
 8541679:	89 da                	mov    %ebx,%edx
 854167b:	eb 10                	jmp    854168d <_ZN9item_lock9CItemLockD1Ev+0x49>
 854167d:	8b 45 08             	mov    0x8(%ebp),%eax
 8541680:	83 c0 20             	add    $0x20,%eax
 8541683:	89 04 24             	mov    %eax,(%esp)
 8541686:	e8 e9 19 00 00       	call   8543074 <_ZNSt5stackIhSt5dequeIhSaIhEEED1Ev>
 854168b:	eb 18                	jmp    85416a5 <_ZN9item_lock9CItemLockD1Ev+0x61>
 854168d:	89 d3                	mov    %edx,%ebx
 854168f:	89 c6                	mov    %eax,%esi
 8541691:	8b 45 08             	mov    0x8(%ebp),%eax
 8541694:	83 c0 08             	add    $0x8,%eax
 8541697:	89 04 24             	mov    %eax,(%esp)
 854169a:	e8 c1 19 00 00       	call   8543060 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEED1Ev>
 854169f:	89 f0                	mov    %esi,%eax
 85416a1:	89 da                	mov    %ebx,%edx
 85416a3:	eb 10                	jmp    85416b5 <_ZN9item_lock9CItemLockD1Ev+0x71>
 85416a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85416a8:	83 c0 08             	add    $0x8,%eax
 85416ab:	89 04 24             	mov    %eax,(%esp)
 85416ae:	e8 ad 19 00 00       	call   8543060 <_ZNSt3mapIh14stItemLockInfoSt4lessIhESaISt4pairIKhS0_EEED1Ev>
 85416b3:	eb 1b                	jmp    85416d0 <_ZN9item_lock9CItemLockD1Ev+0x8c>
 85416b5:	89 d3                	mov    %edx,%ebx
 85416b7:	89 c6                	mov    %eax,%esi
 85416b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85416bc:	89 04 24             	mov    %eax,(%esp)
 85416bf:	e8 1e 75 b8 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 85416c4:	89 f0                	mov    %esi,%eax
 85416c6:	89 da                	mov    %ebx,%edx
 85416c8:	89 04 24             	mov    %eax,(%esp)
 85416cb:	e8 80 20 5a 00       	call   8ae3750 <_Unwind_Resume>
 85416d0:	8b 45 08             	mov    0x8(%ebp),%eax
 85416d3:	89 04 24             	mov    %eax,(%esp)
 85416d6:	e8 07 75 b8 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 85416db:	b8 00 00 00 00       	mov    $0x0,%eax
 85416e0:	84 c0                	test   %al,%al
 85416e2:	74 0b                	je     85416ef <_ZN9item_lock9CItemLockD1Ev+0xab>
 85416e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85416e7:	89 04 24             	mov    %eax,(%esp)
 85416ea:	e8 01 2e 1e 00       	call   87244f0 <_ZdlPv>
 85416ef:	83 c4 10             	add    $0x10,%esp
 85416f2:	5b                   	pop    %ebx
 85416f3:	5e                   	pop    %esi
 85416f4:	5d                   	pop    %ebp
 85416f5:	c3                   	ret

```

```c
// item_lock::CItemLock::~CItemLock @ 0x8541644

/* WARNING: Removing unreachable block (ram,0x085416e4) */
/* item_lock::CItemLock::~CItemLock() */

void __thiscall item_lock::CItemLock::~CItemLock(CItemLock *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9b5a8;
                    /* try { // try from 0854165e to 08541662 has its CatchHandler @ 08541665 */
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::~vector
            ((vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>> *)
             (this + 0x48));
                    /* try { // try from 08541686 to 0854168a has its CatchHandler @ 0854168d */
  std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::~stack
            ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
             (this + 0x20));
                    /* try { // try from 085416ae to 085416b2 has its CatchHandler @ 085416b5 */
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::~map((map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~CItemLock_085416f6

```asm
// === 085416f6 item_lock::CItemLock::~CItemLock  [0x085416f6-0x8541713] ===
 85416f6:	55                   	push   %ebp
 85416f7:	89 e5                	mov    %esp,%ebp
 85416f9:	83 ec 18             	sub    $0x18,%esp
 85416fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85416ff:	89 04 24             	mov    %eax,(%esp)
 8541702:	e8 3d ff ff ff       	call   8541644 <_ZN9item_lock9CItemLockD1Ev>
 8541707:	8b 45 08             	mov    0x8(%ebp),%eax
 854170a:	89 04 24             	mov    %eax,(%esp)
 854170d:	e8 de 2d 1e 00       	call   87244f0 <_ZdlPv>
 8541712:	c9                   	leave
 8541713:	c3                   	ret

```

```c
// item_lock::CItemLock::~CItemLock @ 0x85416f6

/* item_lock::CItemLock::~CItemLock() */

void __thiscall item_lock::CItemLock::~CItemLock(CItemLock *this)

{
  ~CItemLock(this);
  operator_delete(this);
  return;
}

```

