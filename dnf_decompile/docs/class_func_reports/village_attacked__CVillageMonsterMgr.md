# village_attacked__CVillageMonsterMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CVillageMonsterMgr

```asm
// === 086b4a4c village_attacked::CVillageMonsterMgr::CVillageMonsterMgr  [0x086b4a4c-0x86b4a7f] ===
 86b4a4c:	55                   	push   %ebp
 86b4a4d:	89 e5                	mov    %esp,%ebp
 86b4a4f:	83 ec 18             	sub    $0x18,%esp
 86b4a52:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4a55:	83 c0 08             	add    $0x8,%eax
 86b4a58:	89 04 24             	mov    %eax,(%esp)
 86b4a5b:	e8 66 0a 00 00       	call   86b54c6 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEEC1Ev>
 86b4a60:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4a63:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 86b4a6a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4a6d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 86b4a73:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4a76:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 86b4a7d:	c9                   	leave
 86b4a7e:	c3                   	ret
 86b4a7f:	90                   	nop

```

```c
// village_attacked::CVillageMonsterMgr::CVillageMonsterMgr @ 0x86b4a4c

/* village_attacked::CVillageMonsterMgr::CVillageMonsterMgr() */

void __thiscall village_attacked::CVillageMonsterMgr::CVillageMonsterMgr(CVillageMonsterMgr *this)

{
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::map((map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
         *)(this + 8));
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

```

---

## InsertVillageMonster

```asm
// === 086b4144 village_attacked::CVillageMonsterMgr::InsertVillageMonster  [0x086b4144-0x86b427f] ===
 86b4144:	55                   	push   %ebp
 86b4145:	89 e5                	mov    %esp,%ebp
 86b4147:	56                   	push   %esi
 86b4148:	53                   	push   %ebx
 86b4149:	81 ec f0 00 00 00    	sub    $0xf0,%esp
 86b414f:	8b 45 20             	mov    0x20(%ebp),%eax
 86b4152:	89 44 24 18          	mov    %eax,0x18(%esp)
 86b4156:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86b4159:	89 44 24 14          	mov    %eax,0x14(%esp)
 86b415d:	8b 45 18             	mov    0x18(%ebp),%eax
 86b4160:	89 44 24 10          	mov    %eax,0x10(%esp)
 86b4164:	8b 45 14             	mov    0x14(%ebp),%eax
 86b4167:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86b416b:	8b 45 10             	mov    0x10(%ebp),%eax
 86b416e:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b4172:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b4175:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4179:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b417c:	89 04 24             	mov    %eax,(%esp)
 86b417f:	e8 ce f5 ff ff       	call   86b3752 <_ZN16village_attacked19CVillageMonsterAreaC1EiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE>
 86b4184:	8b 45 10             	mov    0x10(%ebp),%eax
 86b4187:	0f b6 d0             	movzbl %al,%edx
 86b418a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b418d:	0f b6 c0             	movzbl %al,%eax
 86b4190:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b4194:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4198:	8d 45 f6             	lea    -0xa(%ebp),%eax
 86b419b:	89 04 24             	mov    %eax,(%esp)
 86b419e:	e8 99 09 00 00       	call   86b4b3c <_ZN16village_attacked4ZoneC1Ehh>
 86b41a3:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 86b41a9:	8d 55 b8             	lea    -0x48(%ebp),%edx
 86b41ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b41b0:	8d 55 f6             	lea    -0xa(%ebp),%edx
 86b41b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b41b7:	89 04 24             	mov    %eax,(%esp)
 86b41ba:	e8 ed 10 00 00       	call   86b52ac <_ZSt9make_pairIN16village_attacked4ZoneENS0_19CVillageMonsterAreaEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 86b41bf:	83 ec 04             	sub    $0x4,%esp
 86b41c2:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 86b41c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b41cc:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 86b41d2:	89 04 24             	mov    %eax,(%esp)
 86b41d5:	e8 b2 11 00 00       	call   86b538c <_ZNSt4pairIKN16village_attacked4ZoneENS0_19CVillageMonsterAreaEEC1IS1_S3_EEOS_IT_T0_E>
 86b41da:	8b 45 08             	mov    0x8(%ebp),%eax
 86b41dd:	8d 48 08             	lea    0x8(%eax),%ecx
 86b41e0:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 86b41e6:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 86b41ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b41f0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b41f4:	89 04 24             	mov    %eax,(%esp)
 86b41f7:	e8 d2 11 00 00       	call   86b53ce <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE6insertERKS7_>
 86b41fc:	83 ec 04             	sub    $0x4,%esp
 86b41ff:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 86b4205:	89 04 24             	mov    %eax,(%esp)
 86b4208:	e8 93 0a 00 00       	call   86b4ca0 <_ZNSt4pairIKN16village_attacked4ZoneENS0_19CVillageMonsterAreaEED1Ev>
 86b420d:	eb 30                	jmp    86b423f <_ZN16village_attacked18CVillageMonsterMgr20InsertVillageMonsterEiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE+0xfb>
 86b420f:	89 d3                	mov    %edx,%ebx
 86b4211:	89 c6                	mov    %eax,%esi
 86b4213:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 86b4219:	89 04 24             	mov    %eax,(%esp)
 86b421c:	e8 7f 0a 00 00       	call   86b4ca0 <_ZNSt4pairIKN16village_attacked4ZoneENS0_19CVillageMonsterAreaEED1Ev>
 86b4221:	89 f0                	mov    %esi,%eax
 86b4223:	89 da                	mov    %ebx,%edx
 86b4225:	eb 00                	jmp    86b4227 <_ZN16village_attacked18CVillageMonsterMgr20InsertVillageMonsterEiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE+0xe3>
 86b4227:	89 d3                	mov    %edx,%ebx
 86b4229:	89 c6                	mov    %eax,%esi
 86b422b:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 86b4231:	89 04 24             	mov    %eax,(%esp)
 86b4234:	e8 51 0a 00 00       	call   86b4c8a <_ZNSt4pairIN16village_attacked4ZoneENS0_19CVillageMonsterAreaEED1Ev>
 86b4239:	89 f0                	mov    %esi,%eax
 86b423b:	89 da                	mov    %ebx,%edx
 86b423d:	eb 10                	jmp    86b424f <_ZN16village_attacked18CVillageMonsterMgr20InsertVillageMonsterEiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE+0x10b>
 86b423f:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 86b4245:	89 04 24             	mov    %eax,(%esp)
 86b4248:	e8 3d 0a 00 00       	call   86b4c8a <_ZNSt4pairIN16village_attacked4ZoneENS0_19CVillageMonsterAreaEED1Ev>
 86b424d:	eb 1b                	jmp    86b426a <_ZN16village_attacked18CVillageMonsterMgr20InsertVillageMonsterEiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE+0x126>
 86b424f:	89 d3                	mov    %edx,%ebx
 86b4251:	89 c6                	mov    %eax,%esi
 86b4253:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b4256:	89 04 24             	mov    %eax,(%esp)
 86b4259:	e8 e6 09 00 00       	call   86b4c44 <_ZN16village_attacked19CVillageMonsterAreaD1Ev>
 86b425e:	89 f0                	mov    %esi,%eax
 86b4260:	89 da                	mov    %ebx,%edx
 86b4262:	89 04 24             	mov    %eax,(%esp)
 86b4265:	e8 e6 f4 42 00       	call   8ae3750 <_Unwind_Resume>
 86b426a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b426d:	89 04 24             	mov    %eax,(%esp)
 86b4270:	e8 cf 09 00 00       	call   86b4c44 <_ZN16village_attacked19CVillageMonsterAreaD1Ev>
 86b4275:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86b4278:	83 c4 00             	add    $0x0,%esp
 86b427b:	5b                   	pop    %ebx
 86b427c:	5e                   	pop    %esi
 86b427d:	5d                   	pop    %ebp
 86b427e:	c3                   	ret
 86b427f:	90                   	nop

```

```c
// village_attacked::CVillageMonsterMgr::InsertVillageMonster @ 0x86b4144

/* village_attacked::CVillageMonsterMgr::InsertVillageMonster(int, int, int, int,
   std::vector<STAttackedMonster, std::allocator<STAttackedMonster> >*, std::vector<MapArea,
   std::allocator<MapArea> >*) */

void __thiscall
village_attacked::CVillageMonsterMgr::InsertVillageMonster
          (CVillageMonsterMgr *this,int param_1,int param_2,int param_3,int param_4,vector *param_5,
          vector *param_6)

{
  pair local_d4 [8];
  pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea> local_cc [64];
  Zone local_8c [64];
  CVillageMonsterArea local_4c [62];
  Zone local_e [2];
  
  CVillageMonsterArea::CVillageMonsterArea(local_4c,param_1,param_2,param_3,param_4,param_5,param_6)
  ;
  Zone::Zone(local_e,(uchar)param_1,(uchar)param_2);
                    /* try { // try from 086b41ba to 086b41be has its CatchHandler @ 086b424f */
  std::make_pair<village_attacked::Zone,village_attacked::CVillageMonsterArea>
            (local_8c,(CVillageMonsterArea *)local_e);
                    /* try { // try from 086b41d5 to 086b41d9 has its CatchHandler @ 086b4227 */
  std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>::
  pair<village_attacked::Zone,village_attacked::CVillageMonsterArea>(local_cc,local_8c);
                    /* try { // try from 086b41f7 to 086b41fb has its CatchHandler @ 086b420f */
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::insert(local_d4);
                    /* try { // try from 086b4208 to 086b420c has its CatchHandler @ 086b4227 */
  std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>::~pair(local_cc);
                    /* try { // try from 086b4248 to 086b424c has its CatchHandler @ 086b424f */
  std::pair<village_attacked::Zone,village_attacked::CVillageMonsterArea>::~pair
            ((pair<village_attacked::Zone,village_attacked::CVillageMonsterArea> *)local_8c);
  CVillageMonsterArea::~CVillageMonsterArea(local_4c);
  return;
}

```

---

## OnCreateVillageMonster

```asm
// === 086b4280 village_attacked::CVillageMonsterMgr::OnCreateVillageMonster  [0x086b4280-0x86b4337] ===
 86b4280:	55                   	push   %ebp
 86b4281:	89 e5                	mov    %esp,%ebp
 86b4283:	83 ec 38             	sub    $0x38,%esp
 86b4286:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4289:	8d 50 08             	lea    0x8(%eax),%edx
 86b428c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b428f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b4293:	89 04 24             	mov    %eax,(%esp)
 86b4296:	e8 5f 11 00 00       	call   86b53fa <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE5beginEv>
 86b429b:	83 ec 04             	sub    $0x4,%esp
 86b429e:	eb 21                	jmp    86b42c1 <_ZN16village_attacked18CVillageMonsterMgr22OnCreateVillageMonsterEv+0x41>
 86b42a0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b42a3:	89 04 24             	mov    %eax,(%esp)
 86b42a6:	e8 cd 11 00 00       	call   86b5478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEptEv>
 86b42ab:	83 c0 04             	add    $0x4,%eax
 86b42ae:	89 04 24             	mov    %eax,(%esp)
 86b42b1:	e8 1e f9 ff ff       	call   86b3bd4 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv>
 86b42b6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b42b9:	89 04 24             	mov    %eax,(%esp)
 86b42bc:	e8 99 11 00 00       	call   86b545a <_ZNSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEppEv>
 86b42c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86b42c4:	8d 50 08             	lea    0x8(%eax),%edx
 86b42c7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b42ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b42ce:	89 04 24             	mov    %eax,(%esp)
 86b42d1:	e8 4a 11 00 00       	call   86b5420 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 86b42d6:	83 ec 04             	sub    $0x4,%esp
 86b42d9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b42dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b42e0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b42e3:	89 04 24             	mov    %eax,(%esp)
 86b42e6:	e8 5b 11 00 00       	call   86b5446 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEneERKS6_>
 86b42eb:	84 c0                	test   %al,%al
 86b42ed:	75 b1                	jne    86b42a0 <_ZN16village_attacked18CVillageMonsterMgr22OnCreateVillageMonsterEv+0x20>
 86b42ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86b42f2:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 86b42f9:	e8 7e 21 a4 ff       	call   80f647c <_Z12G_TimerQueuev>
 86b42fe:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86b4305:	00 
 86b4306:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86b430d:	00 
 86b430e:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 86b4315:	00 
 86b4316:	c7 44 24 0c 85 00 00 	movl   $0x85,0xc(%esp)
 86b431d:	00 
 86b431e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86b4325:	00 
 86b4326:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86b432d:	00 
 86b432e:	89 04 24             	mov    %eax,(%esp)
 86b4331:	e8 e0 ca f7 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86b4336:	c9                   	leave
 86b4337:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterMgr::OnCreateVillageMonster @ 0x86b4280

/* village_attacked::CVillageMonsterMgr::OnCreateVillageMonster() */

void __thiscall
village_attacked::CVillageMonsterMgr::OnCreateVillageMonster(CVillageMonsterMgr *this)

{
  char cVar1;
  int iVar2;
  TimerQueue *pTVar3;
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_14 [4];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_10 [12];
  
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator!=((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_14);
    CVillageMonsterArea::OnCreateVillageMonster((CVillageMonsterArea *)(iVar2 + 4));
    std::
    _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
    ::operator++((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                  *)local_14);
  }
  *(undefined4 *)(this + 4) = 2;
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,2,0,0x85,1,0,0);
  return;
}

```

---

## OnDestroyVillageMonster

```asm
// === 086b43d4 village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster  [0x086b43d4-0x86b44eb] ===
 86b43d4:	55                   	push   %ebp
 86b43d5:	89 e5                	mov    %esp,%ebp
 86b43d7:	56                   	push   %esi
 86b43d8:	53                   	push   %ebx
 86b43d9:	83 ec 30             	sub    $0x30,%esp
 86b43dc:	8b 45 08             	mov    0x8(%ebp),%eax
 86b43df:	8d 50 08             	lea    0x8(%eax),%edx
 86b43e2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86b43e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b43e9:	89 04 24             	mov    %eax,(%esp)
 86b43ec:	e8 09 10 00 00       	call   86b53fa <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE5beginEv>
 86b43f1:	83 ec 04             	sub    $0x4,%esp
 86b43f4:	eb 21                	jmp    86b4417 <_ZN16village_attacked18CVillageMonsterMgr23OnDestroyVillageMonsterE28ENUM_VILLAGE_ATTACKED_REWARD+0x43>
 86b43f6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86b43f9:	89 04 24             	mov    %eax,(%esp)
 86b43fc:	e8 77 10 00 00       	call   86b5478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEptEv>
 86b4401:	83 c0 04             	add    $0x4,%eax
 86b4404:	89 04 24             	mov    %eax,(%esp)
 86b4407:	e8 d4 fa ff ff       	call   86b3ee0 <_ZN16village_attacked19CVillageMonsterArea23OnDestroyVillageMonsterEv>
 86b440c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86b440f:	89 04 24             	mov    %eax,(%esp)
 86b4412:	e8 43 10 00 00       	call   86b545a <_ZNSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEppEv>
 86b4417:	8b 45 08             	mov    0x8(%ebp),%eax
 86b441a:	8d 50 08             	lea    0x8(%eax),%edx
 86b441d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b4420:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b4424:	89 04 24             	mov    %eax,(%esp)
 86b4427:	e8 f4 0f 00 00       	call   86b5420 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 86b442c:	83 ec 04             	sub    $0x4,%esp
 86b442f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b4432:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4436:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86b4439:	89 04 24             	mov    %eax,(%esp)
 86b443c:	e8 05 10 00 00       	call   86b5446 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEneERKS6_>
 86b4441:	84 c0                	test   %al,%al
 86b4443:	75 b1                	jne    86b43f6 <_ZN16village_attacked18CVillageMonsterMgr23OnDestroyVillageMonsterE28ENUM_VILLAGE_ATTACKED_REWARD+0x22>
 86b4445:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4448:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 86b444f:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4452:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 86b4458:	8b 45 08             	mov    0x8(%ebp),%eax
 86b445b:	8b 55 0c             	mov    0xc(%ebp),%edx
 86b445e:	89 50 20             	mov    %edx,0x20(%eax)
 86b4461:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b4464:	89 04 24             	mov    %eax,(%esp)
 86b4467:	e8 e0 98 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86b446c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b446f:	89 04 24             	mov    %eax,(%esp)
 86b4472:	e8 6f 74 a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86b4477:	c7 44 24 08 f2 00 00 	movl   $0xf2,0x8(%esp)
 86b447e:	00 
 86b447f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b4486:	00 
 86b4487:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b448a:	89 04 24             	mov    %eax,(%esp)
 86b448d:	e8 6a 74 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b4492:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b4499:	00 
 86b449a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b449d:	89 04 24             	mov    %eax,(%esp)
 86b44a0:	e8 b3 74 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b44a5:	e8 fd 5e a2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86b44aa:	8d 55 e8             	lea    -0x18(%ebp),%edx
 86b44ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b44b1:	89 04 24             	mov    %eax,(%esp)
 86b44b4:	e8 5b 47 01 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 86b44b9:	eb 1b                	jmp    86b44d6 <_ZN16village_attacked18CVillageMonsterMgr23OnDestroyVillageMonsterE28ENUM_VILLAGE_ATTACKED_REWARD+0x102>
 86b44bb:	89 d3                	mov    %edx,%ebx
 86b44bd:	89 c6                	mov    %eax,%esi
 86b44bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b44c2:	89 04 24             	mov    %eax,(%esp)
 86b44c5:	e8 b6 99 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b44ca:	89 f0                	mov    %esi,%eax
 86b44cc:	89 da                	mov    %ebx,%edx
 86b44ce:	89 04 24             	mov    %eax,(%esp)
 86b44d1:	e8 7a f2 42 00       	call   8ae3750 <_Unwind_Resume>
 86b44d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b44d9:	89 04 24             	mov    %eax,(%esp)
 86b44dc:	e8 9f 99 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b44e1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86b44e4:	83 c4 00             	add    $0x0,%esp
 86b44e7:	5b                   	pop    %ebx
 86b44e8:	5e                   	pop    %esi
 86b44e9:	5d                   	pop    %ebp
 86b44ea:	c3                   	ret
 86b44eb:	90                   	nop

```

```c
// village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster @ 0x86b43d4

/* village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster(ENUM_VILLAGE_ATTACKED_REWARD) */

void __thiscall
village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster
          (CVillageMonsterMgr *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  GameWorld *this_00;
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_20 [4];
  PacketGuard local_1c [12];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_10 [4];
  
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::begin(local_20);
  while( true ) {
    std::
    map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator!=((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_20,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_20);
    CVillageMonsterArea::OnDestroyVillageMonster((CVillageMonsterArea *)(iVar2 + 4));
    std::
    _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
    ::operator++((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                  *)local_20);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x20) = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 086b4472 to 086b44b8 has its CatchHandler @ 086b44bb */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xf2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## OnEndRewardVillageMonster

```asm
// === 086b44ec village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster  [0x086b44ec-0x86b44fb] ===
 86b44ec:	55                   	push   %ebp
 86b44ed:	89 e5                	mov    %esp,%ebp
 86b44ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86b44f2:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 86b44f9:	5d                   	pop    %ebp
 86b44fa:	c3                   	ret
 86b44fb:	90                   	nop

```

```c
// village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster @ 0x86b44ec

/* village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster() */

void __thiscall
village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster(CVillageMonsterMgr *this)

{
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

```

---

## OnFightVillageMonster

```asm
// === 086b4672 village_attacked::CVillageMonsterMgr::OnFightVillageMonster  [0x086b4672-0x86b4865] ===
 86b4672:	55                   	push   %ebp
 86b4673:	89 e5                	mov    %esp,%ebp
 86b4675:	56                   	push   %esi
 86b4676:	53                   	push   %ebx
 86b4677:	83 ec 60             	sub    $0x60,%esp
 86b467a:	8b 45 10             	mov    0x10(%ebp),%eax
 86b467d:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 86b4681:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b4688:	00 
 86b4689:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b468c:	89 04 24             	mov    %eax,(%esp)
 86b468f:	e8 2a cd fc ff       	call   86813be <_ZN5CUser8get_areaEb>
 86b4694:	0f b6 d8             	movzbl %al,%ebx
 86b4697:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b469a:	89 04 24             	mov    %eax,(%esp)
 86b469d:	e8 c2 0e f9 ff       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 86b46a2:	0f b6 c0             	movzbl %al,%eax
 86b46a5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86b46a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b46ad:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 86b46b0:	89 04 24             	mov    %eax,(%esp)
 86b46b3:	e8 84 04 00 00       	call   86b4b3c <_ZN16village_attacked4ZoneC1Ehh>
 86b46b8:	8b 45 08             	mov    0x8(%ebp),%eax
 86b46bb:	8d 48 08             	lea    0x8(%eax),%ecx
 86b46be:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b46c1:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 86b46c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b46c8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b46cc:	89 04 24             	mov    %eax,(%esp)
 86b46cf:	e8 b2 0d 00 00       	call   86b5486 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 86b46d4:	83 ec 04             	sub    $0x4,%esp
 86b46d7:	8b 45 08             	mov    0x8(%ebp),%eax
 86b46da:	8d 50 08             	lea    0x8(%eax),%edx
 86b46dd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b46e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b46e4:	89 04 24             	mov    %eax,(%esp)
 86b46e7:	e8 34 0d 00 00       	call   86b5420 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 86b46ec:	83 ec 04             	sub    $0x4,%esp
 86b46ef:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b46f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b46f6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b46f9:	89 04 24             	mov    %eax,(%esp)
 86b46fc:	e8 b1 0d 00 00       	call   86b54b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEeqERKS6_>
 86b4701:	84 c0                	test   %al,%al
 86b4703:	74 0a                	je     86b470f <_ZN16village_attacked18CVillageMonsterMgr21OnFightVillageMonsterEP5CUsert+0x9d>
 86b4705:	b8 15 00 00 00       	mov    $0x15,%eax
 86b470a:	e9 4c 01 00 00       	jmp    86b485b <_ZN16village_attacked18CVillageMonsterMgr21OnFightVillageMonsterEP5CUsert+0x1e9>
 86b470f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b4712:	89 04 24             	mov    %eax,(%esp)
 86b4715:	e8 32 0a fa ff       	call   865514c <_ZN5CUser8GetPartyEv>
 86b471a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86b471d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86b4721:	75 0a                	jne    86b472d <_ZN16village_attacked18CVillageMonsterMgr21OnFightVillageMonsterEP5CUsert+0xbb>
 86b4723:	b8 15 00 00 00       	mov    $0x15,%eax
 86b4728:	e9 2e 01 00 00       	jmp    86b485b <_ZN16village_attacked18CVillageMonsterMgr21OnFightVillageMonsterEP5CUsert+0x1e9>
 86b472d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b4730:	89 04 24             	mov    %eax,(%esp)
 86b4733:	e8 40 0d 00 00       	call   86b5478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEptEv>
 86b4738:	83 c0 04             	add    $0x4,%eax
 86b473b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86b473e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 86b4745:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 86b474c:	0f b7 45 c4          	movzwl -0x3c(%ebp),%eax
 86b4750:	8d 55 d8             	lea    -0x28(%ebp),%edx
 86b4753:	89 54 24 10          	mov    %edx,0x10(%esp)
 86b4757:	8d 55 dc             	lea    -0x24(%ebp),%edx
 86b475a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86b475e:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b4762:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b4765:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4769:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86b476c:	89 04 24             	mov    %eax,(%esp)
 86b476f:	e8 6e f8 ff ff       	call   86b3fe2 <_ZN16village_attacked19CVillageMonsterArea21OnFightVillageMonsterEP5CUsertRiS3_>
 86b4774:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b4777:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86b477b:	0f 85 d7 00 00 00    	jne    86b4858 <_ZN16village_attacked18CVillageMonsterMgr21OnFightVillageMonsterEP5CUsert+0x1e6>
 86b4781:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b4784:	0f b7 55 c4          	movzwl -0x3c(%ebp),%edx
 86b4788:	66 89 90 4c 0c 00 00 	mov    %dx,0xc4c(%eax)
 86b478f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b4792:	89 04 24             	mov    %eax,(%esp)
 86b4795:	e8 ca 0d f9 ff       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 86b479a:	0f be d0             	movsbl %al,%edx
 86b479d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b47a0:	89 90 50 0c 00 00    	mov    %edx,0xc50(%eax)
 86b47a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b47ad:	00 
 86b47ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b47b1:	89 04 24             	mov    %eax,(%esp)
 86b47b4:	e8 05 cc fc ff       	call   86813be <_ZN5CUser8get_areaEb>
 86b47b9:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86b47bc:	89 82 54 0c 00 00    	mov    %eax,0xc54(%edx)
 86b47c2:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86b47c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b47c8:	89 90 58 0c 00 00    	mov    %edx,0xc58(%eax)
 86b47ce:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86b47d1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b47d4:	89 90 b8 0c 00 00    	mov    %edx,0xcb8(%eax)
 86b47da:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b47dd:	89 04 24             	mov    %eax,(%esp)
 86b47e0:	e8 67 95 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86b47e5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b47e8:	89 04 24             	mov    %eax,(%esp)
 86b47eb:	e8 f6 70 a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86b47f0:	c7 44 24 08 f3 00 00 	movl   $0xf3,0x8(%esp)
 86b47f7:	00 
 86b47f8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b47ff:	00 
 86b4800:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b4803:	89 04 24             	mov    %eax,(%esp)
 86b4806:	e8 f1 70 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b480b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b4812:	00 
 86b4813:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b4816:	89 04 24             	mov    %eax,(%esp)
 86b4819:	e8 3a 71 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b481e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b4821:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4825:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b4828:	89 04 24             	mov    %eax,(%esp)
 86b482b:	e8 1e 89 ee ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 86b4830:	eb 1b                	jmp    86b484d <_ZN16village_attacked18CVillageMonsterMgr21OnFightVillageMonsterEP5CUsert+0x1db>
 86b4832:	89 d3                	mov    %edx,%ebx
 86b4834:	89 c6                	mov    %eax,%esi
 86b4836:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b4839:	89 04 24             	mov    %eax,(%esp)
 86b483c:	e8 3f 96 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b4841:	89 f0                	mov    %esi,%eax
 86b4843:	89 da                	mov    %ebx,%edx
 86b4845:	89 04 24             	mov    %eax,(%esp)
 86b4848:	e8 03 ef 42 00       	call   8ae3750 <_Unwind_Resume>
 86b484d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86b4850:	89 04 24             	mov    %eax,(%esp)
 86b4853:	e8 28 96 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b4858:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b485b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86b485e:	83 c4 00             	add    $0x0,%esp
 86b4861:	5b                   	pop    %ebx
 86b4862:	5e                   	pop    %esi
 86b4863:	5d                   	pop    %ebp
 86b4864:	c3                   	ret
 86b4865:	90                   	nop

```

```c
// village_attacked::CVillageMonsterMgr::OnFightVillageMonster @ 0x86b4672

/* village_attacked::CVillageMonsterMgr::OnFightVillageMonster(CUser*, unsigned short) */

int __thiscall
village_attacked::CVillageMonsterMgr::OnFightVillageMonster
          (CVillageMonsterMgr *this,CUser *param_1,ushort param_2)

{
  uchar uVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  PacketGuard local_38 [12];
  int local_2c;
  int local_28;
  Zone local_24 [6];
  Zone local_1e [2];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_1c [4];
  CParty *local_18;
  CVillageMonsterArea *local_14;
  int local_10;
  
  uVar1 = CUser::get_area(param_1,false);
  uVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  Zone::Zone(local_1e,uVar2,uVar1);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::find(local_24);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::end(local_1c);
  cVar3 = std::
          _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
          ::operator==((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                        *)local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar3 == '\0') {
    local_18 = (CParty *)CUser::GetParty(param_1);
    if (local_18 == (CParty *)0x0) {
      local_10 = 0x15;
    }
    else {
      iVar4 = std::
              _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
              ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                            *)local_24);
      local_14 = (CVillageMonsterArea *)(iVar4 + 4);
      local_28 = 0;
      local_2c = 0;
      local_10 = CVillageMonsterArea::OnFightVillageMonster
                           (local_14,param_1,param_2,&local_28,&local_2c);
      if (local_10 == 0) {
        *(ushort *)(local_18 + 0xc4c) = param_2;
        cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
        *(int *)(local_18 + 0xc50) = (int)cVar3;
        uVar5 = CUser::get_area(param_1,false);
        *(undefined4 *)(local_18 + 0xc54) = uVar5;
        *(int *)(local_18 + 0xc58) = local_2c;
        *(int *)(local_18 + 0xcb8) = local_28;
        PacketGuard::PacketGuard(local_38);
                    /* try { // try from 086b47eb to 086b482f has its CatchHandler @ 086b4832 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_38);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,0xf3);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
        CParty::send_to_party(local_18,local_38);
        PacketGuard::~PacketGuard(local_38);
      }
    }
  }
  else {
    local_10 = 0x15;
  }
  return local_10;
}

```

---

## OnKillVillageMonster

```asm
// === 086b4866 village_attacked::CVillageMonsterMgr::OnKillVillageMonster  [0x086b4866-0x86b4963] ===
 86b4866:	55                   	push   %ebp
 86b4867:	89 e5                	mov    %esp,%ebp
 86b4869:	83 ec 48             	sub    $0x48,%esp
 86b486c:	8b 45 10             	mov    0x10(%ebp),%eax
 86b486f:	88 45 d4             	mov    %al,-0x2c(%ebp)
 86b4872:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b4875:	89 04 24             	mov    %eax,(%esp)
 86b4878:	e8 cf 08 fa ff       	call   865514c <_ZN5CUser8GetPartyEv>
 86b487d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86b4880:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86b4884:	75 0a                	jne    86b4890 <_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEP5CUserb+0x2a>
 86b4886:	b8 15 00 00 00       	mov    $0x15,%eax
 86b488b:	e9 d1 00 00 00       	jmp    86b4961 <_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEP5CUserb+0xfb>
 86b4890:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b4893:	0f b7 80 4c 0c 00 00 	movzwl 0xc4c(%eax),%eax
 86b489a:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 86b489e:	66 83 7d f2 00       	cmpw   $0x0,-0xe(%ebp)
 86b48a3:	75 0a                	jne    86b48af <_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEP5CUserb+0x49>
 86b48a5:	b8 15 00 00 00       	mov    $0x15,%eax
 86b48aa:	e9 b2 00 00 00       	jmp    86b4961 <_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEP5CUserb+0xfb>
 86b48af:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b48b2:	8b 80 54 0c 00 00    	mov    0xc54(%eax),%eax
 86b48b8:	0f b6 d0             	movzbl %al,%edx
 86b48bb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b48be:	8b 80 50 0c 00 00    	mov    0xc50(%eax),%eax
 86b48c4:	0f b6 c0             	movzbl %al,%eax
 86b48c7:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b48cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b48cf:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 86b48d2:	89 04 24             	mov    %eax,(%esp)
 86b48d5:	e8 62 02 00 00       	call   86b4b3c <_ZN16village_attacked4ZoneC1Ehh>
 86b48da:	8b 45 08             	mov    0x8(%ebp),%eax
 86b48dd:	8d 48 08             	lea    0x8(%eax),%ecx
 86b48e0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b48e3:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 86b48e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b48ea:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b48ee:	89 04 24             	mov    %eax,(%esp)
 86b48f1:	e8 90 0b 00 00       	call   86b5486 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 86b48f6:	83 ec 04             	sub    $0x4,%esp
 86b48f9:	8b 45 08             	mov    0x8(%ebp),%eax
 86b48fc:	8d 50 08             	lea    0x8(%eax),%edx
 86b48ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b4902:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b4906:	89 04 24             	mov    %eax,(%esp)
 86b4909:	e8 12 0b 00 00       	call   86b5420 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 86b490e:	83 ec 04             	sub    $0x4,%esp
 86b4911:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b4914:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4918:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b491b:	89 04 24             	mov    %eax,(%esp)
 86b491e:	e8 8f 0b 00 00       	call   86b54b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEeqERKS6_>
 86b4923:	84 c0                	test   %al,%al
 86b4925:	74 07                	je     86b492e <_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEP5CUserb+0xc8>
 86b4927:	b8 15 00 00 00       	mov    $0x15,%eax
 86b492c:	eb 33                	jmp    86b4961 <_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEP5CUserb+0xfb>
 86b492e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b4931:	89 04 24             	mov    %eax,(%esp)
 86b4934:	e8 3f 0b 00 00       	call   86b5478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEptEv>
 86b4939:	83 c0 04             	add    $0x4,%eax
 86b493c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b493f:	0f b6 55 d4          	movzbl -0x2c(%ebp),%edx
 86b4943:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 86b4947:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86b494b:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b494f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b4952:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4956:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b4959:	89 04 24             	mov    %eax,(%esp)
 86b495c:	e8 0f f7 ff ff       	call   86b4070 <_ZN16village_attacked19CVillageMonsterArea20OnKillVillageMonsterEP5CUsertb>
 86b4961:	c9                   	leave
 86b4962:	c3                   	ret
 86b4963:	90                   	nop

```

```c
// village_attacked::CVillageMonsterMgr::OnKillVillageMonster @ 0x86b4866

/* village_attacked::CVillageMonsterMgr::OnKillVillageMonster(CUser*, bool) */

undefined4 __thiscall
village_attacked::CVillageMonsterMgr::OnKillVillageMonster
          (CVillageMonsterMgr *this,CUser *param_1,bool param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Zone local_24 [6];
  Zone local_1e [2];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_1c [4];
  int local_18;
  ushort local_12;
  CVillageMonsterArea *local_10;
  
  local_18 = CUser::GetParty(param_1);
  if (local_18 == 0) {
    uVar2 = 0x15;
  }
  else {
    local_12 = *(ushort *)(local_18 + 0xc4c);
    if (local_12 == 0) {
      uVar2 = 0x15;
    }
    else {
      Zone::Zone(local_1e,(uchar)*(undefined4 *)(local_18 + 0xc50),
                 (uchar)*(undefined4 *)(local_18 + 0xc54));
      std::
      map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
      ::find(local_24);
      std::
      map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
      ::end(local_1c);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
              ::operator==((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                            *)local_24,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') {
        iVar3 = std::
                _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                              *)local_24);
        local_10 = (CVillageMonsterArea *)(iVar3 + 4);
        uVar2 = CVillageMonsterArea::OnKillVillageMonster(local_10,param_1,local_12,param_2);
      }
      else {
        uVar2 = 0x15;
      }
    }
  }
  return uVar2;
}

```

---

## OnKillVillageMonster_086b4964

```asm
// === 086b4964 village_attacked::CVillageMonsterMgr::OnKillVillageMonster  [0x086b4964-0x86b4a1f] ===
 86b4964:	55                   	push   %ebp
 86b4965:	89 e5                	mov    %esp,%ebp
 86b4967:	83 ec 38             	sub    $0x38,%esp
 86b496a:	8b 55 14             	mov    0x14(%ebp),%edx
 86b496d:	8b 45 18             	mov    0x18(%ebp),%eax
 86b4970:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 86b4974:	88 45 e0             	mov    %al,-0x20(%ebp)
 86b4977:	8b 45 10             	mov    0x10(%ebp),%eax
 86b497a:	0f b6 d0             	movzbl %al,%edx
 86b497d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b4980:	0f b6 c0             	movzbl %al,%eax
 86b4983:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b4987:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b498b:	8d 45 ee             	lea    -0x12(%ebp),%eax
 86b498e:	89 04 24             	mov    %eax,(%esp)
 86b4991:	e8 a6 01 00 00       	call   86b4b3c <_ZN16village_attacked4ZoneC1Ehh>
 86b4996:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4999:	8d 48 08             	lea    0x8(%eax),%ecx
 86b499c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b499f:	8d 55 ee             	lea    -0x12(%ebp),%edx
 86b49a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b49a6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b49aa:	89 04 24             	mov    %eax,(%esp)
 86b49ad:	e8 d4 0a 00 00       	call   86b5486 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 86b49b2:	83 ec 04             	sub    $0x4,%esp
 86b49b5:	8b 45 08             	mov    0x8(%ebp),%eax
 86b49b8:	8d 50 08             	lea    0x8(%eax),%edx
 86b49bb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b49be:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b49c2:	89 04 24             	mov    %eax,(%esp)
 86b49c5:	e8 56 0a 00 00       	call   86b5420 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 86b49ca:	83 ec 04             	sub    $0x4,%esp
 86b49cd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b49d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b49d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b49d7:	89 04 24             	mov    %eax,(%esp)
 86b49da:	e8 d3 0a 00 00       	call   86b54b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEeqERKS6_>
 86b49df:	84 c0                	test   %al,%al
 86b49e1:	74 07                	je     86b49ea <_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEiitb+0x86>
 86b49e3:	b8 15 00 00 00       	mov    $0x15,%eax
 86b49e8:	eb 34                	jmp    86b4a1e <_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEiitb+0xba>
 86b49ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b49ed:	89 04 24             	mov    %eax,(%esp)
 86b49f0:	e8 83 0a 00 00       	call   86b5478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEptEv>
 86b49f5:	83 c0 04             	add    $0x4,%eax
 86b49f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b49fb:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 86b49ff:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 86b4a03:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86b4a07:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b4a0b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b4a12:	00 
 86b4a13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b4a16:	89 04 24             	mov    %eax,(%esp)
 86b4a19:	e8 52 f6 ff ff       	call   86b4070 <_ZN16village_attacked19CVillageMonsterArea20OnKillVillageMonsterEP5CUsertb>
 86b4a1e:	c9                   	leave
 86b4a1f:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterMgr::OnKillVillageMonster @ 0x86b4964

/* village_attacked::CVillageMonsterMgr::OnKillVillageMonster(int, int, unsigned short, bool) */

undefined4 __thiscall
village_attacked::CVillageMonsterMgr::OnKillVillageMonster
          (CVillageMonsterMgr *this,int param_1,int param_2,ushort param_3,bool param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Zone local_1c [6];
  Zone local_16 [2];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_14 [4];
  CVillageMonsterArea *local_10;
  
  Zone::Zone(local_16,(uchar)param_1,(uchar)param_2);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::find(local_1c);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
          ::operator==((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                        *)local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_1c);
    local_10 = (CVillageMonsterArea *)(iVar3 + 4);
    uVar2 = CVillageMonsterArea::OnKillVillageMonster(local_10,(CUser *)0x0,param_3,param_4);
  }
  else {
    uVar2 = 0x15;
  }
  return uVar2;
}

```

---

## OnMoveArea

```asm
// === 086b45bc village_attacked::CVillageMonsterMgr::OnMoveArea  [0x086b45bc-0x86b4671] ===
 86b45bc:	55                   	push   %ebp
 86b45bd:	89 e5                	mov    %esp,%ebp
 86b45bf:	53                   	push   %ebx
 86b45c0:	83 ec 24             	sub    $0x24,%esp
 86b45c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b45ca:	00 
 86b45cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b45ce:	89 04 24             	mov    %eax,(%esp)
 86b45d1:	e8 e8 cd fc ff       	call   86813be <_ZN5CUser8get_areaEb>
 86b45d6:	0f b6 d8             	movzbl %al,%ebx
 86b45d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b45dc:	89 04 24             	mov    %eax,(%esp)
 86b45df:	e8 80 0f f9 ff       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 86b45e4:	0f b6 c0             	movzbl %al,%eax
 86b45e7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86b45eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b45ef:	8d 45 ee             	lea    -0x12(%ebp),%eax
 86b45f2:	89 04 24             	mov    %eax,(%esp)
 86b45f5:	e8 42 05 00 00       	call   86b4b3c <_ZN16village_attacked4ZoneC1Ehh>
 86b45fa:	8b 45 08             	mov    0x8(%ebp),%eax
 86b45fd:	8d 48 08             	lea    0x8(%eax),%ecx
 86b4600:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b4603:	8d 55 ee             	lea    -0x12(%ebp),%edx
 86b4606:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b460a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b460e:	89 04 24             	mov    %eax,(%esp)
 86b4611:	e8 70 0e 00 00       	call   86b5486 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 86b4616:	83 ec 04             	sub    $0x4,%esp
 86b4619:	8b 45 08             	mov    0x8(%ebp),%eax
 86b461c:	8d 50 08             	lea    0x8(%eax),%edx
 86b461f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b4622:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b4626:	89 04 24             	mov    %eax,(%esp)
 86b4629:	e8 f2 0d 00 00       	call   86b5420 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 86b462e:	83 ec 04             	sub    $0x4,%esp
 86b4631:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b4634:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4638:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b463b:	89 04 24             	mov    %eax,(%esp)
 86b463e:	e8 6f 0e 00 00       	call   86b54b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEeqERKS6_>
 86b4643:	84 c0                	test   %al,%al
 86b4645:	75 25                	jne    86b466c <_ZN16village_attacked18CVillageMonsterMgr10OnMoveAreaEP5CUser+0xb0>
 86b4647:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b464a:	89 04 24             	mov    %eax,(%esp)
 86b464d:	e8 26 0e 00 00       	call   86b5478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEptEv>
 86b4652:	83 c0 04             	add    $0x4,%eax
 86b4655:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b4658:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b465b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b465f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b4662:	89 04 24             	mov    %eax,(%esp)
 86b4665:	e8 54 f4 ff ff       	call   86b3abe <_ZN16village_attacked19CVillageMonsterArea10OnMoveAreaEP5CUser>
 86b466a:	eb 01                	jmp    86b466d <_ZN16village_attacked18CVillageMonsterMgr10OnMoveAreaEP5CUser+0xb1>
 86b466c:	90                   	nop
 86b466d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 86b4670:	c9                   	leave
 86b4671:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterMgr::OnMoveArea @ 0x86b45bc

/* village_attacked::CVillageMonsterMgr::OnMoveArea(CUser*) */

void __thiscall
village_attacked::CVillageMonsterMgr::OnMoveArea(CVillageMonsterMgr *this,CUser *param_1)

{
  uchar uVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  Zone local_1c [6];
  Zone local_16 [2];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_14 [4];
  CVillageMonsterArea *local_10;
  
  uVar1 = CUser::get_area(param_1,false);
  uVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  Zone::Zone(local_16,uVar2,uVar1);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::find(local_1c);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::end(local_14);
  cVar3 = std::
          _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
          ::operator==((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                        *)local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar3 == '\0') {
    iVar4 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_1c);
    local_10 = (CVillageMonsterArea *)(iVar4 + 4);
    CVillageMonsterArea::OnMoveArea(local_10,param_1);
  }
  return;
}

```

---

## OnRegenVillageMonster

```asm
// === 086b4338 village_attacked::CVillageMonsterMgr::OnRegenVillageMonster  [0x086b4338-0x86b43d3] ===
 86b4338:	55                   	push   %ebp
 86b4339:	89 e5                	mov    %esp,%ebp
 86b433b:	83 ec 28             	sub    $0x28,%esp
 86b433e:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4341:	8b 40 04             	mov    0x4(%eax),%eax
 86b4344:	85 c0                	test   %eax,%eax
 86b4346:	0f 84 84 00 00 00    	je     86b43d0 <_ZN16village_attacked18CVillageMonsterMgr21OnRegenVillageMonsterEii+0x98>
 86b434c:	8b 45 10             	mov    0x10(%ebp),%eax
 86b434f:	0f b6 d0             	movzbl %al,%edx
 86b4352:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b4355:	0f b6 c0             	movzbl %al,%eax
 86b4358:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b435c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4360:	8d 45 f2             	lea    -0xe(%ebp),%eax
 86b4363:	89 04 24             	mov    %eax,(%esp)
 86b4366:	e8 d1 07 00 00       	call   86b4b3c <_ZN16village_attacked4ZoneC1Ehh>
 86b436b:	8b 45 08             	mov    0x8(%ebp),%eax
 86b436e:	8d 48 08             	lea    0x8(%eax),%ecx
 86b4371:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b4374:	8d 55 f2             	lea    -0xe(%ebp),%edx
 86b4377:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b437b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b437f:	89 04 24             	mov    %eax,(%esp)
 86b4382:	e8 ff 10 00 00       	call   86b5486 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 86b4387:	83 ec 04             	sub    $0x4,%esp
 86b438a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b438d:	8d 50 08             	lea    0x8(%eax),%edx
 86b4390:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b4393:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b4397:	89 04 24             	mov    %eax,(%esp)
 86b439a:	e8 81 10 00 00       	call   86b5420 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 86b439f:	83 ec 04             	sub    $0x4,%esp
 86b43a2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b43a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b43a9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b43ac:	89 04 24             	mov    %eax,(%esp)
 86b43af:	e8 92 10 00 00       	call   86b5446 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEneERKS6_>
 86b43b4:	84 c0                	test   %al,%al
 86b43b6:	74 19                	je     86b43d1 <_ZN16village_attacked18CVillageMonsterMgr21OnRegenVillageMonsterEii+0x99>
 86b43b8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b43bb:	89 04 24             	mov    %eax,(%esp)
 86b43be:	e8 b5 10 00 00       	call   86b5478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEptEv>
 86b43c3:	83 c0 04             	add    $0x4,%eax
 86b43c6:	89 04 24             	mov    %eax,(%esp)
 86b43c9:	e8 06 f8 ff ff       	call   86b3bd4 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv>
 86b43ce:	eb 01                	jmp    86b43d1 <_ZN16village_attacked18CVillageMonsterMgr21OnRegenVillageMonsterEii+0x99>
 86b43d0:	90                   	nop
 86b43d1:	c9                   	leave
 86b43d2:	c3                   	ret
 86b43d3:	90                   	nop

```

```c
// village_attacked::CVillageMonsterMgr::OnRegenVillageMonster @ 0x86b4338

/* village_attacked::CVillageMonsterMgr::OnRegenVillageMonster(int, int) */

void __thiscall
village_attacked::CVillageMonsterMgr::OnRegenVillageMonster
          (CVillageMonsterMgr *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  Zone local_18 [6];
  Zone local_12 [2];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_10 [12];
  
  if (*(int *)(this + 4) != 0) {
    Zone::Zone(local_12,(uchar)param_1,(uchar)param_2);
    std::
    map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
    ::find(local_18);
    std::
    map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator!=((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_18,(_Rb_tree_iterator *)local_10);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
              ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                            *)local_18);
      CVillageMonsterArea::OnCreateVillageMonster((CVillageMonsterArea *)(iVar2 + 4));
    }
  }
  return;
}

```

---

## OnRunVillageMonster

```asm
// === 086b44fc village_attacked::CVillageMonsterMgr::OnRunVillageMonster  [0x086b44fc-0x86b45bb] ===
 86b44fc:	55                   	push   %ebp
 86b44fd:	89 e5                	mov    %esp,%ebp
 86b44ff:	83 ec 38             	sub    $0x38,%esp
 86b4502:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4505:	8b 40 04             	mov    0x4(%eax),%eax
 86b4508:	85 c0                	test   %eax,%eax
 86b450a:	0f 84 a8 00 00 00    	je     86b45b8 <_ZN16village_attacked18CVillageMonsterMgr19OnRunVillageMonsterEv+0xbc>
 86b4510:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4513:	8d 50 08             	lea    0x8(%eax),%edx
 86b4516:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b4519:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b451d:	89 04 24             	mov    %eax,(%esp)
 86b4520:	e8 d5 0e 00 00       	call   86b53fa <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE5beginEv>
 86b4525:	83 ec 04             	sub    $0x4,%esp
 86b4528:	eb 21                	jmp    86b454b <_ZN16village_attacked18CVillageMonsterMgr19OnRunVillageMonsterEv+0x4f>
 86b452a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b452d:	89 04 24             	mov    %eax,(%esp)
 86b4530:	e8 43 0f 00 00       	call   86b5478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEptEv>
 86b4535:	83 c0 04             	add    $0x4,%eax
 86b4538:	89 04 24             	mov    %eax,(%esp)
 86b453b:	e8 c6 f9 ff ff       	call   86b3f06 <_ZN16village_attacked19CVillageMonsterArea19OnRunVillageMonsterEv>
 86b4540:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b4543:	89 04 24             	mov    %eax,(%esp)
 86b4546:	e8 0f 0f 00 00       	call   86b545a <_ZNSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEppEv>
 86b454b:	8b 45 08             	mov    0x8(%ebp),%eax
 86b454e:	8d 50 08             	lea    0x8(%eax),%edx
 86b4551:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b4554:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b4558:	89 04 24             	mov    %eax,(%esp)
 86b455b:	e8 c0 0e 00 00       	call   86b5420 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 86b4560:	83 ec 04             	sub    $0x4,%esp
 86b4563:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b4566:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b456a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b456d:	89 04 24             	mov    %eax,(%esp)
 86b4570:	e8 d1 0e 00 00       	call   86b5446 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16village_attacked4ZoneENS1_19CVillageMonsterAreaEEEneERKS6_>
 86b4575:	84 c0                	test   %al,%al
 86b4577:	75 b1                	jne    86b452a <_ZN16village_attacked18CVillageMonsterMgr19OnRunVillageMonsterEv+0x2e>
 86b4579:	e8 fe 1e a4 ff       	call   80f647c <_Z12G_TimerQueuev>
 86b457e:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86b4585:	00 
 86b4586:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86b458d:	00 
 86b458e:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 86b4595:	00 
 86b4596:	c7 44 24 0c 85 00 00 	movl   $0x85,0xc(%esp)
 86b459d:	00 
 86b459e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86b45a5:	00 
 86b45a6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86b45ad:	00 
 86b45ae:	89 04 24             	mov    %eax,(%esp)
 86b45b1:	e8 60 c8 f7 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86b45b6:	eb 01                	jmp    86b45b9 <_ZN16village_attacked18CVillageMonsterMgr19OnRunVillageMonsterEv+0xbd>
 86b45b8:	90                   	nop
 86b45b9:	c9                   	leave
 86b45ba:	c3                   	ret
 86b45bb:	90                   	nop

```

```c
// village_attacked::CVillageMonsterMgr::OnRunVillageMonster @ 0x86b44fc

/* village_attacked::CVillageMonsterMgr::OnRunVillageMonster() */

void __thiscall village_attacked::CVillageMonsterMgr::OnRunVillageMonster(CVillageMonsterMgr *this)

{
  char cVar1;
  int iVar2;
  TimerQueue *pTVar3;
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_14 [4];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_10 [12];
  
  if (*(int *)(this + 4) != 0) {
    std::
    map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
    ::begin(local_14);
    while( true ) {
      std::
      map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
      ::end(local_10);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
              ::operator!=((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                            *)local_14,(_Rb_tree_iterator *)local_10);
      if (cVar1 == '\0') break;
      iVar2 = std::
              _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
              ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                            *)local_14);
      CVillageMonsterArea::OnRunVillageMonster((CVillageMonsterArea *)(iVar2 + 4));
      std::
      _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
      ::operator++((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                    *)local_14);
    }
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,2,0,0x85,1,0,0);
  }
  return;
}

```

---

## OnStartVillageAttacked

```asm
// === 086b4a20 village_attacked::CVillageMonsterMgr::OnStartVillageAttacked  [0x086b4a20-0x86b4a4b] ===
 86b4a20:	55                   	push   %ebp
 86b4a21:	89 e5                	mov    %esp,%ebp
 86b4a23:	83 ec 18             	sub    $0x18,%esp
 86b4a26:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4a29:	8b 40 04             	mov    0x4(%eax),%eax
 86b4a2c:	83 f8 01             	cmp    $0x1,%eax
 86b4a2f:	74 17                	je     86b4a48 <_ZN16village_attacked18CVillageMonsterMgr22OnStartVillageAttackedEv+0x28>
 86b4a31:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4a34:	89 04 24             	mov    %eax,(%esp)
 86b4a37:	e8 44 f8 ff ff       	call   86b4280 <_ZN16village_attacked18CVillageMonsterMgr22OnCreateVillageMonsterEv>
 86b4a3c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4a3f:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 86b4a46:	eb 01                	jmp    86b4a49 <_ZN16village_attacked18CVillageMonsterMgr22OnStartVillageAttackedEv+0x29>
 86b4a48:	90                   	nop
 86b4a49:	c9                   	leave
 86b4a4a:	c3                   	ret
 86b4a4b:	90                   	nop

```

```c
// village_attacked::CVillageMonsterMgr::OnStartVillageAttacked @ 0x86b4a20

/* village_attacked::CVillageMonsterMgr::OnStartVillageAttacked() */

void __thiscall
village_attacked::CVillageMonsterMgr::OnStartVillageAttacked(CVillageMonsterMgr *this)

{
  if (*(int *)(this + 4) != 1) {
    OnCreateVillageMonster(this);
    *(undefined4 *)(this + 4) = 1;
  }
  return;
}

```

---

## ~CVillageMonsterMgr

```asm
// === 086b4a80 village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr  [0x086b4a80-0x86b4a95] ===
 86b4a80:	55                   	push   %ebp
 86b4a81:	89 e5                	mov    %esp,%ebp
 86b4a83:	83 ec 18             	sub    $0x18,%esp
 86b4a86:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4a89:	83 c0 08             	add    $0x8,%eax
 86b4a8c:	89 04 24             	mov    %eax,(%esp)
 86b4a8f:	e8 22 02 00 00       	call   86b4cb6 <_ZNSt3mapIN16village_attacked4ZoneENS0_19CVillageMonsterAreaESt4lessIS1_ESaISt4pairIKS1_S2_EEED1Ev>
 86b4a94:	c9                   	leave
 86b4a95:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr @ 0x86b4a80

/* village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr() */

void __thiscall village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr(CVillageMonsterMgr *this)

{
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::~map((map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
          *)(this + 8));
  return;
}

```

