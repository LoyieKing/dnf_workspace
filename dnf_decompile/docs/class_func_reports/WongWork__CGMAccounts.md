# WongWork__CGMAccounts

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## AppendGM_Sys

```asm
// === 08109524 WongWork::CGMAccounts::AppendGM_Sys  [0x08109524-0x81095b2] ===
 8109524:	55                   	push   %ebp
 8109525:	89 e5                	mov    %esp,%ebp
 8109527:	53                   	push   %ebx
 8109528:	83 ec 34             	sub    $0x34,%esp
 810952b:	8b 45 10             	mov    0x10(%ebp),%eax
 810952e:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8109531:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8109538:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 810953f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8109542:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8109545:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 8109549:	89 45 ec             	mov    %eax,-0x14(%ebp)
 810954c:	8b 45 08             	mov    0x8(%ebp),%eax
 810954f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8109552:	89 54 24 04          	mov    %edx,0x4(%esp)
 8109556:	89 04 24             	mov    %eax,(%esp)
 8109559:	e8 78 01 00 00       	call   81096d6 <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE9push_backERKS2_>
 810955e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8109565:	00 
 8109566:	8b 45 0c             	mov    0xc(%ebp),%eax
 8109569:	89 04 24             	mov    %eax,(%esp)
 810956c:	e8 da fa ff ff       	call   810904b <_Z14NumberToStringji>
 8109571:	89 c3                	mov    %eax,%ebx
 8109573:	c7 44 24 08 cd 00 00 	movl   $0xcd,0x8(%esp)
 810957a:	00 
 810957b:	c7 44 24 04 f0 51 b4 	movl   $0x8b451f0,0x4(%esp)
 8109582:	08 
 8109583:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8109586:	89 04 24             	mov    %eax,(%esp)
 8109589:	e8 de e2 ff ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 810958e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8109592:	c7 44 24 08 80 4c b4 	movl   $0x8b44c80,0x8(%esp)
 8109599:	08 
 810959a:	c7 44 24 04 93 4c b4 	movl   $0x8b44c93,0x4(%esp)
 81095a1:	08 
 81095a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81095a5:	89 04 24             	mov    %eax,(%esp)
 81095a8:	e8 eb e2 ff ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 81095ad:	83 c4 34             	add    $0x34,%esp
 81095b0:	5b                   	pop    %ebx
 81095b1:	5d                   	pop    %ebp
 81095b2:	c3                   	ret

```

```c
// WongWork::CGMAccounts::AppendGM_Sys @ 0x8109524

/* WongWork::CGMAccounts::AppendGM_Sys(unsigned int, char) */

void __thiscall WongWork::CGMAccounts::AppendGM_Sys(CGMAccounts *this,uint param_1,char param_2)

{
  undefined4 uVar1;
  uint local_1c;
  int local_18;
  CMyFileLog local_14 [12];
  
  local_1c = param_1;
  local_18 = (int)param_2;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  push_back((list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>
             *)this,(stGMInfo_t *)&local_1c);
  uVar1 = NumberToString(param_1,0);
  CMyFileLog::CMyFileLog(local_14,"AppendGM_Sys",0xcd);
  CMyFileLog::operator()(local_14,"./log/Init","GM List Add mid:%s",uVar1);
  return;
}

```

---

## LoadGmList

```asm
// === 081094ea WongWork::CGMAccounts::LoadGmList  [0x081094ea-0x810950f] ===
 81094ea:	55                   	push   %ebp
 81094eb:	89 e5                	mov    %esp,%ebp
 81094ed:	83 ec 28             	sub    $0x28,%esp
 81094f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81094f3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81094f6:	8b 45 10             	mov    0x10(%ebp),%eax
 81094f9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81094fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81094ff:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8109502:	89 54 24 04          	mov    %edx,0x4(%esp)
 8109506:	89 04 24             	mov    %eax,(%esp)
 8109509:	e8 c8 01 00 00       	call   81096d6 <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE9push_backERKS2_>
 810950e:	c9                   	leave
 810950f:	c3                   	ret

```

```c
// WongWork::CGMAccounts::LoadGmList @ 0x81094ea

/* WongWork::CGMAccounts::LoadGmList(unsigned int, int) */

void __thiscall WongWork::CGMAccounts::LoadGmList(CGMAccounts *this,uint param_1,int param_2)

{
  uint local_14;
  int local_10;
  
  local_14 = param_1;
  local_10 = param_2;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  push_back((list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>
             *)this,(stGMInfo_t *)&local_14);
  return;
}

```

---

## appendGM

```asm
// === 081093ee WongWork::CGMAccounts::appendGM  [0x081093ee-0x81093fb] ===
 81093ee:	55                   	push   %ebp
 81093ef:	89 e5                	mov    %esp,%ebp
 81093f1:	83 ec 10             	sub    $0x10,%esp
 81093f4:	b8 00 00 00 00       	mov    $0x0,%eax
 81093f9:	c9                   	leave
 81093fa:	c3                   	ret
 81093fb:	90                   	nop

```

```c
// WongWork::CGMAccounts::appendGM @ 0x81093ee

/* WongWork::CGMAccounts::appendGM(unsigned int, unsigned int) */

undefined4 WongWork::CGMAccounts::appendGM(uint param_1,uint param_2)

{
  return 0;
}

```

---

## clearGmList

```asm
// === 08109510 WongWork::CGMAccounts::clearGmList  [0x08109510-0x8109523] ===
 8109510:	55                   	push   %ebp
 8109511:	89 e5                	mov    %esp,%ebp
 8109513:	83 ec 18             	sub    $0x18,%esp
 8109516:	8b 45 08             	mov    0x8(%ebp),%eax
 8109519:	89 04 24             	mov    %eax,(%esp)
 810951c:	e8 ab 02 00 00       	call   81097cc <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE5clearEv>
 8109521:	c9                   	leave
 8109522:	c3                   	ret
 8109523:	90                   	nop

```

```c
// WongWork::CGMAccounts::clearGmList @ 0x8109510

/* WongWork::CGMAccounts::clearGmList() */

void __thiscall WongWork::CGMAccounts::clearGmList(CGMAccounts *this)

{
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  clear((list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>> *
        )this);
  return;
}

```

---

## getGMInfo

```asm
// === 0810940a WongWork::CGMAccounts::getGMInfo  [0x0810940a-0x81094e9] ===
 810940a:	55                   	push   %ebp
 810940b:	89 e5                	mov    %esp,%ebp
 810940d:	53                   	push   %ebx
 810940e:	83 ec 34             	sub    $0x34,%esp
 8109411:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8109414:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 810941b:	c7 45 e8 03 00 00 00 	movl   $0x3,-0x18(%ebp)
 8109422:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8109429:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8109430:	c7 45 e0 03 00 00 00 	movl   $0x3,-0x20(%ebp)
 8109437:	8b 45 10             	mov    0x10(%ebp),%eax
 810943a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 810943d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8109440:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8109443:	89 54 24 04          	mov    %edx,0x4(%esp)
 8109447:	89 04 24             	mov    %eax,(%esp)
 810944a:	e8 e3 02 00 00       	call   8109732 <_ZNKSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
 810944f:	83 ec 04             	sub    $0x4,%esp
 8109452:	8b 55 0c             	mov    0xc(%ebp),%edx
 8109455:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8109458:	89 54 24 04          	mov    %edx,0x4(%esp)
 810945c:	89 04 24             	mov    %eax,(%esp)
 810945f:	e8 a8 02 00 00       	call   810970c <_ZNKSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE5beginEv>
 8109464:	83 ec 04             	sub    $0x4,%esp
 8109467:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810946a:	8d 55 dc             	lea    -0x24(%ebp),%edx
 810946d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8109471:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8109474:	89 54 24 08          	mov    %edx,0x8(%esp)
 8109478:	8b 55 f0             	mov    -0x10(%ebp),%edx
 810947b:	89 54 24 04          	mov    %edx,0x4(%esp)
 810947f:	89 04 24             	mov    %eax,(%esp)
 8109482:	e8 ce 02 00 00       	call   8109755 <_ZSt4findISt20_List_const_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEES3_ET_S5_S5_RKT0_>
 8109487:	83 ec 04             	sub    $0x4,%esp
 810948a:	8b 55 0c             	mov    0xc(%ebp),%edx
 810948d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8109490:	89 54 24 04          	mov    %edx,0x4(%esp)
 8109494:	89 04 24             	mov    %eax,(%esp)
 8109497:	e8 96 02 00 00       	call   8109732 <_ZNKSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
 810949c:	83 ec 04             	sub    $0x4,%esp
 810949f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81094a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81094a6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81094a9:	89 04 24             	mov    %eax,(%esp)
 81094ac:	e8 f9 02 00 00       	call   81097aa <_ZNKSt20_List_const_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEneERKS3_>
 81094b1:	84 c0                	test   %al,%al
 81094b3:	74 21                	je     81094d6 <_ZNK8WongWork11CGMAccounts9getGMInfoEj+0xcc>
 81094b5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81094b8:	89 04 24             	mov    %eax,(%esp)
 81094bb:	e8 fe 02 00 00       	call   81097be <_ZNKSt20_List_const_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEdeEv>
 81094c0:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81094c7:	00 
 81094c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81094cc:	89 1c 24             	mov    %ebx,(%esp)
 81094cf:	e8 ac 43 f7 ff       	call   807d880 <memmove@plt>
 81094d4:	eb 0b                	jmp    81094e1 <_ZNK8WongWork11CGMAccounts9getGMInfoEj+0xd7>
 81094d6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81094d9:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81094dc:	89 03                	mov    %eax,(%ebx)
 81094de:	89 53 04             	mov    %edx,0x4(%ebx)
 81094e1:	89 d8                	mov    %ebx,%eax
 81094e3:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81094e6:	c9                   	leave
 81094e7:	c2 04 00             	ret    $0x4

```

```c
// WongWork::CGMAccounts::getGMInfo @ 0x810940a

/* WongWork::CGMAccounts::getGMInfo(unsigned int) const */

uint WongWork::CGMAccounts::getGMInfo(uint param_1)

{
  char cVar1;
  void *__src;
  _List_const_iterator<WongWork::CGMAccounts::stGMInfo_t> local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  _List_const_iterator local_10 [8];
  
  local_20 = 0;
  local_1c = 3;
  local_24 = 3;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  begin();
  std::
  find<std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>,WongWork::CGMAccounts::stGMInfo_t>
            (local_2c,local_14,local_18,local_28);
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  cVar1 = std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator!=
                    (local_2c,local_10);
  if (cVar1 == '\0') {
    *(undefined4 *)param_1 = local_20;
    *(undefined4 *)(param_1 + 4) = local_1c;
  }
  else {
    __src = (void *)std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator*
                              (local_2c);
    memmove((void *)param_1,__src,8);
  }
  return param_1;
}

```

---

## isGM

```asm
// === 08109346 WongWork::CGMAccounts::isGM  [0x08109346-0x81093ed] ===
 8109346:	55                   	push   %ebp
 8109347:	89 e5                	mov    %esp,%ebp
 8109349:	83 ec 38             	sub    $0x38,%esp
 810934c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8109353:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 810935a:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 8109361:	8b 45 0c             	mov    0xc(%ebp),%eax
 8109364:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8109367:	8b 55 08             	mov    0x8(%ebp),%edx
 810936a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810936d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8109371:	89 04 24             	mov    %eax,(%esp)
 8109374:	e8 d1 02 00 00       	call   810964a <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
 8109379:	83 ec 04             	sub    $0x4,%esp
 810937c:	8b 55 08             	mov    0x8(%ebp),%edx
 810937f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8109382:	89 54 24 04          	mov    %edx,0x4(%esp)
 8109386:	89 04 24             	mov    %eax,(%esp)
 8109389:	e8 bc 02 00 00       	call   810964a <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
 810938e:	83 ec 04             	sub    $0x4,%esp
 8109391:	8b 55 08             	mov    0x8(%ebp),%edx
 8109394:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8109397:	89 54 24 04          	mov    %edx,0x4(%esp)
 810939b:	89 04 24             	mov    %eax,(%esp)
 810939e:	e8 81 02 00 00       	call   8109624 <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE5beginEv>
 81093a3:	83 ec 04             	sub    $0x4,%esp
 81093a6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81093a9:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81093ac:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81093b0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81093b3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81093b7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81093ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 81093be:	89 04 24             	mov    %eax,(%esp)
 81093c1:	e8 a7 02 00 00       	call   810966d <_ZSt4findISt14_List_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEES3_ET_S5_S5_RKT0_>
 81093c6:	83 ec 04             	sub    $0x4,%esp
 81093c9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81093cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81093d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81093d3:	89 04 24             	mov    %eax,(%esp)
 81093d6:	e8 e7 02 00 00       	call   81096c2 <_ZNKSt14_List_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEneERKS3_>
 81093db:	84 c0                	test   %al,%al
 81093dd:	74 07                	je     81093e6 <_ZN8WongWork11CGMAccounts4isGMEj+0xa0>
 81093df:	b8 01 00 00 00       	mov    $0x1,%eax
 81093e4:	eb 05                	jmp    81093eb <_ZN8WongWork11CGMAccounts4isGMEj+0xa5>
 81093e6:	b8 00 00 00 00       	mov    $0x0,%eax
 81093eb:	c9                   	leave
 81093ec:	c3                   	ret
 81093ed:	90                   	nop

```

```c
// WongWork::CGMAccounts::isGM @ 0x8109346

/* WongWork::CGMAccounts::isGM(unsigned int) */

bool __thiscall WongWork::CGMAccounts::isGM(CGMAccounts *this,uint param_1)

{
  char cVar1;
  uint local_24 [2];
  _List_iterator local_1c [4];
  _List_iterator<WongWork::CGMAccounts::stGMInfo_t> local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  local_24[1] = 3;
  local_24[0] = param_1;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  begin();
  std::
  find<std::_List_iterator<WongWork::CGMAccounts::stGMInfo_t>,WongWork::CGMAccounts::stGMInfo_t>
            (local_18,local_10,local_14,local_24);
  cVar1 = std::_List_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator!=(local_18,local_1c);
  return cVar1 != '\0';
}

```

---

## loadGMAccounts

```asm
// === 0810933c WongWork::CGMAccounts::loadGMAccounts  [0x0810933c-0x8109345] ===
 810933c:	55                   	push   %ebp
 810933d:	89 e5                	mov    %esp,%ebp
 810933f:	b8 01 00 00 00       	mov    $0x1,%eax
 8109344:	5d                   	pop    %ebp
 8109345:	c3                   	ret

```

```c
// WongWork::CGMAccounts::loadGMAccounts @ 0x810933c

/* WongWork::CGMAccounts::loadGMAccounts(char const*) */

undefined4 WongWork::CGMAccounts::loadGMAccounts(char *param_1)

{
  return 1;
}

```

---

## removeGM

```asm
// === 081093fc WongWork::CGMAccounts::removeGM  [0x081093fc-0x8109409] ===
 81093fc:	55                   	push   %ebp
 81093fd:	89 e5                	mov    %esp,%ebp
 81093ff:	83 ec 20             	sub    $0x20,%esp
 8109402:	b8 00 00 00 00       	mov    $0x0,%eax
 8109407:	c9                   	leave
 8109408:	c3                   	ret
 8109409:	90                   	nop

```

```c
// WongWork::CGMAccounts::removeGM @ 0x81093fc

/* WongWork::CGMAccounts::removeGM(unsigned int, unsigned int) */

undefined4 WongWork::CGMAccounts::removeGM(uint param_1,uint param_2)

{
  return 0;
}

```

