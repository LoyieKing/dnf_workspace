# HeroMissionCondition

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## clear

```asm
// === 08961376 HeroMissionCondition::clear  [0x08961376-0x89613d6] ===
 8961376:	55                   	push   %ebp
 8961377:	89 e5                	mov    %esp,%ebp
 8961379:	83 ec 18             	sub    $0x18,%esp
 896137c:	8b 45 08             	mov    0x8(%ebp),%eax
 896137f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8961385:	8b 45 08             	mov    0x8(%ebp),%eax
 8961388:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 896138f:	8b 45 08             	mov    0x8(%ebp),%eax
 8961392:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 8961396:	8b 45 08             	mov    0x8(%ebp),%eax
 8961399:	c6 40 09 00          	movb   $0x0,0x9(%eax)
 896139d:	8b 45 08             	mov    0x8(%ebp),%eax
 89613a0:	83 c0 0c             	add    $0xc,%eax
 89613a3:	89 04 24             	mov    %eax,(%esp)
 89613a6:	e8 25 7a da ff       	call   8708dd0 <_ZNSs5clearEv>
 89613ab:	8b 45 08             	mov    0x8(%ebp),%eax
 89613ae:	83 c0 10             	add    $0x10,%eax
 89613b1:	89 04 24             	mov    %eax,(%esp)
 89613b4:	e8 17 7a da ff       	call   8708dd0 <_ZNSs5clearEv>
 89613b9:	8b 45 08             	mov    0x8(%ebp),%eax
 89613bc:	83 c0 14             	add    $0x14,%eax
 89613bf:	89 04 24             	mov    %eax,(%esp)
 89613c2:	e8 59 1d 00 00       	call   8963120 <_ZNSt6vectorIN20HeroMissionCondition10RewardDataESaIS1_EE5clearEv>
 89613c7:	8b 45 08             	mov    0x8(%ebp),%eax
 89613ca:	83 c0 20             	add    $0x20,%eax
 89613cd:	89 04 24             	mov    %eax,(%esp)
 89613d0:	e8 67 1d 00 00       	call   896313c <_ZNSt6vectorItSaItEE5clearEv>
 89613d5:	c9                   	leave
 89613d6:	c3                   	ret

```

```c
// HeroMissionCondition::clear @ 0x8961376

/* HeroMissionCondition::clear() */

void __thiscall HeroMissionCondition::clear(HeroMissionCondition *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (HeroMissionCondition)0x0;
  this[9] = (HeroMissionCondition)0x0;
  std::string::clear((string *)(this + 0xc));
  std::string::clear((string *)(this + 0x10));
  std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
  clear((vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>> *
        )(this + 0x14));
  std::vector<unsigned_short,std::allocator<unsigned_short>>::clear
            ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x20));
  return;
}

```

---

## operator=

```asm
// === 08961234 HeroMissionCondition::operator=  [0x08961234-0x8961375] ===
 8961234:	55                   	push   %ebp
 8961235:	89 e5                	mov    %esp,%ebp
 8961237:	83 ec 38             	sub    $0x38,%esp
 896123a:	8b 45 0c             	mov    0xc(%ebp),%eax
 896123d:	8b 10                	mov    (%eax),%edx
 896123f:	8b 45 08             	mov    0x8(%ebp),%eax
 8961242:	89 10                	mov    %edx,(%eax)
 8961244:	8b 45 0c             	mov    0xc(%ebp),%eax
 8961247:	8b 50 04             	mov    0x4(%eax),%edx
 896124a:	8b 45 08             	mov    0x8(%ebp),%eax
 896124d:	89 50 04             	mov    %edx,0x4(%eax)
 8961250:	8b 45 0c             	mov    0xc(%ebp),%eax
 8961253:	0f b6 50 08          	movzbl 0x8(%eax),%edx
 8961257:	8b 45 08             	mov    0x8(%ebp),%eax
 896125a:	88 50 08             	mov    %dl,0x8(%eax)
 896125d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8961260:	0f b6 50 09          	movzbl 0x9(%eax),%edx
 8961264:	8b 45 08             	mov    0x8(%ebp),%eax
 8961267:	88 50 09             	mov    %dl,0x9(%eax)
 896126a:	8b 45 0c             	mov    0xc(%ebp),%eax
 896126d:	8d 50 0c             	lea    0xc(%eax),%edx
 8961270:	8b 45 08             	mov    0x8(%ebp),%eax
 8961273:	83 c0 0c             	add    $0xc,%eax
 8961276:	89 54 24 04          	mov    %edx,0x4(%esp)
 896127a:	89 04 24             	mov    %eax,(%esp)
 896127d:	e8 7e 6a da ff       	call   8707d00 <_ZNSsaSERKSs>
 8961282:	8b 45 0c             	mov    0xc(%ebp),%eax
 8961285:	8d 50 10             	lea    0x10(%eax),%edx
 8961288:	8b 45 08             	mov    0x8(%ebp),%eax
 896128b:	83 c0 10             	add    $0x10,%eax
 896128e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8961292:	89 04 24             	mov    %eax,(%esp)
 8961295:	e8 66 6a da ff       	call   8707d00 <_ZNSsaSERKSs>
 896129a:	8b 45 08             	mov    0x8(%ebp),%eax
 896129d:	8d 50 14             	lea    0x14(%eax),%edx
 89612a0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 89612a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 89612a7:	89 04 24             	mov    %eax,(%esp)
 89612aa:	e8 71 1d 00 00       	call   8963020 <_ZSt13back_inserterISt6vectorIN20HeroMissionCondition10RewardDataESaIS2_EEESt20back_insert_iteratorIT_ERS6_>
 89612af:	83 ec 04             	sub    $0x4,%esp
 89612b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 89612b5:	8d 50 14             	lea    0x14(%eax),%edx
 89612b8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 89612bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 89612bf:	89 04 24             	mov    %eax,(%esp)
 89612c2:	e8 2d 1d 00 00       	call   8962ff4 <_ZNKSt6vectorIN20HeroMissionCondition10RewardDataESaIS1_EE3endEv>
 89612c7:	83 ec 04             	sub    $0x4,%esp
 89612ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 89612cd:	8d 50 14             	lea    0x14(%eax),%edx
 89612d0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 89612d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 89612d7:	89 04 24             	mov    %eax,(%esp)
 89612da:	e8 e9 1c 00 00       	call   8962fc8 <_ZNKSt6vectorIN20HeroMissionCondition10RewardDataESaIS1_EE5beginEv>
 89612df:	83 ec 04             	sub    $0x4,%esp
 89612e2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 89612e5:	8b 55 dc             	mov    -0x24(%ebp),%edx
 89612e8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 89612ec:	8b 55 e0             	mov    -0x20(%ebp),%edx
 89612ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 89612f3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 89612f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 89612fa:	89 04 24             	mov    %eax,(%esp)
 89612fd:	e8 41 1d 00 00       	call   8963043 <_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKN20HeroMissionCondition10RewardDataESt6vectorIS3_SaIS3_EEEESt20back_insert_iteratorIS8_EET0_T_SD_SC_>
 8961302:	83 ec 04             	sub    $0x4,%esp
 8961305:	8b 45 08             	mov    0x8(%ebp),%eax
 8961308:	8d 50 20             	lea    0x20(%eax),%edx
 896130b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 896130e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8961312:	89 04 24             	mov    %eax,(%esp)
 8961315:	e8 86 1d 00 00       	call   89630a0 <_ZSt13back_inserterISt6vectorItSaItEEESt20back_insert_iteratorIT_ERS4_>
 896131a:	83 ec 04             	sub    $0x4,%esp
 896131d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8961320:	8d 50 20             	lea    0x20(%eax),%edx
 8961323:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8961326:	89 54 24 04          	mov    %edx,0x4(%esp)
 896132a:	89 04 24             	mov    %eax,(%esp)
 896132d:	e8 f0 0d 7f ff       	call   8152122 <_ZNKSt6vectorItSaItEE3endEv>
 8961332:	83 ec 04             	sub    $0x4,%esp
 8961335:	8b 45 0c             	mov    0xc(%ebp),%eax
 8961338:	8d 50 20             	lea    0x20(%eax),%edx
 896133b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 896133e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8961342:	89 04 24             	mov    %eax,(%esp)
 8961345:	e8 ac 0d 7f ff       	call   81520f6 <_ZNKSt6vectorItSaItEE5beginEv>
 896134a:	83 ec 04             	sub    $0x4,%esp
 896134d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8961350:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8961353:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8961357:	8b 55 f0             	mov    -0x10(%ebp),%edx
 896135a:	89 54 24 08          	mov    %edx,0x8(%esp)
 896135e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8961361:	89 54 24 04          	mov    %edx,0x4(%esp)
 8961365:	89 04 24             	mov    %eax,(%esp)
 8961368:	e8 56 1d 00 00       	call   89630c3 <_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKtSt6vectorItSaItEEEESt20back_insert_iteratorIS6_EET0_T_SB_SA_>
 896136d:	83 ec 04             	sub    $0x4,%esp
 8961370:	8b 45 08             	mov    0x8(%ebp),%eax
 8961373:	c9                   	leave
 8961374:	c3                   	ret
 8961375:	90                   	nop

```

```c
// HeroMissionCondition::operator= @ 0x8961234

/* HeroMissionCondition::TEMPNAMEPLACEHOLDERVALUE(HeroMissionCondition const&) */

HeroMissionCondition * __thiscall
HeroMissionCondition::operator=(HeroMissionCondition *this,HeroMissionCondition *param_1)

{
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  this[9] = param_1[9];
  std::string::operator=((string *)(this + 0xc),(string *)(param_1 + 0xc));
  std::string::operator=((string *)(this + 0x10),(string *)(param_1 + 0x10));
  std::
  back_inserter<std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
            ((vector *)&local_28);
  std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
  end();
  std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
  begin();
  std::
  copy<__gnu_cxx::__normal_iterator<HeroMissionCondition::RewardData_const*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>,std::back_insert_iterator<std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>>
            (local_2c,local_20,local_24,local_28);
  std::back_inserter<std::vector<unsigned_short,std::allocator<unsigned_short>>>
            ((vector *)&local_18);
  std::vector<unsigned_short,std::allocator<unsigned_short>>::end();
  std::vector<unsigned_short,std::allocator<unsigned_short>>::begin();
  std::
  copy<__gnu_cxx::__normal_iterator<unsigned_short_const*,std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::back_insert_iterator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
            (local_1c,local_10,local_14,local_18);
  return this;
}

```

