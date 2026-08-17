# WongWork__CGenUniqueNo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GenUniqueNo

```asm
// === 084b76d8 WongWork::CGenUniqueNo::GenUniqueNo  [0x084b76d8-0x84b774f] ===
 84b76d8:	55                   	push   %ebp
 84b76d9:	89 e5                	mov    %esp,%ebp
 84b76db:	53                   	push   %ebx
 84b76dc:	83 ec 34             	sub    $0x34,%esp
 84b76df:	e8 c8 ff ff ff       	call   84b76ac <_ZN8WongWork12CGenUniqueNo16_updateTimeCountEv>
 84b76e4:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84b76eb:	e8 ae 45 c1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84b76f0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b76f3:	e8 89 4a c1 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84b76f8:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 84b76fe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b7701:	0f b7 05 8c dc 43 09 	movzwl 0x943dc8c,%eax
 84b7708:	0f b7 d8             	movzwl %ax,%ebx
 84b770b:	e8 71 4a c1 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84b7710:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 84b7716:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84b771a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84b771d:	89 54 24 14          	mov    %edx,0x14(%esp)
 84b7721:	89 44 24 10          	mov    %eax,0x10(%esp)
 84b7725:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b7728:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b772c:	c7 44 24 08 63 3c c8 	movl   $0x8c83c63,0x8(%esp)
 84b7733:	08 
 84b7734:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 84b773b:	00 
 84b773c:	8b 45 08             	mov    0x8(%ebp),%eax
 84b773f:	89 04 24             	mov    %eax,(%esp)
 84b7742:	e8 d5 50 0d 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84b7747:	8b 45 08             	mov    0x8(%ebp),%eax
 84b774a:	83 c4 34             	add    $0x34,%esp
 84b774d:	5b                   	pop    %ebx
 84b774e:	5d                   	pop    %ebp
 84b774f:	c3                   	ret

```

```c
// WongWork::CGenUniqueNo::GenUniqueNo @ 0x84b76d8

/* WongWork::CGenUniqueNo::GenUniqueNo(char*) */

char * WongWork::CGenUniqueNo::GenUniqueNo(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  _updateTimeCount();
  uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar3 = G_CEnvironment();
  uVar1 = *(undefined4 *)(iVar3 + 0x378);
  uVar4 = (uint)m_nTimeCount;
  iVar3 = G_CEnvironment();
  OS_API::snprintf(param_1,0x14,"%02d%02d%10d%05d",uVar1,*(undefined4 *)(iVar3 + 0x1b0),uVar2,uVar4)
  ;
  return param_1;
}

```

---

## _updateTimeCount

```asm
// === 084b76ac WongWork::CGenUniqueNo::_updateTimeCount  [0x084b76ac-0x84b76d7] ===
 84b76ac:	55                   	push   %ebp
 84b76ad:	89 e5                	mov    %esp,%ebp
 84b76af:	0f b7 05 8c dc 43 09 	movzwl 0x943dc8c,%eax
 84b76b6:	83 c0 01             	add    $0x1,%eax
 84b76b9:	66 a3 8c dc 43 09    	mov    %ax,0x943dc8c
 84b76bf:	0f b7 05 8c dc 43 09 	movzwl 0x943dc8c,%eax
 84b76c6:	66 3d 4f c3          	cmp    $0xc34f,%ax
 84b76ca:	76 09                	jbe    84b76d5 <_ZN8WongWork12CGenUniqueNo16_updateTimeCountEv+0x29>
 84b76cc:	66 c7 05 8c dc 43 09 	movw   $0x1,0x943dc8c
 84b76d3:	01 00 
 84b76d5:	5d                   	pop    %ebp
 84b76d6:	c3                   	ret
 84b76d7:	90                   	nop

```

```c
// WongWork::CGenUniqueNo::_updateTimeCount @ 0x84b76ac

/* WongWork::CGenUniqueNo::_updateTimeCount() */

void WongWork::CGenUniqueNo::_updateTimeCount(void)

{
  m_nTimeCount = m_nTimeCount + 1;
  if (49999 < m_nTimeCount) {
    m_nTimeCount = 1;
  }
  return;
}

```

---

## genIPGNo

```asm
// === 084b7750 WongWork::CGenUniqueNo::genIPGNo  [0x084b7750-0x84b780f] ===
 84b7750:	55                   	push   %ebp
 84b7751:	89 e5                	mov    %esp,%ebp
 84b7753:	57                   	push   %edi
 84b7754:	56                   	push   %esi
 84b7755:	53                   	push   %ebx
 84b7756:	83 ec 7c             	sub    $0x7c,%esp
 84b7759:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84b7760:	e8 39 45 c1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84b7765:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84b7768:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84b776b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b776f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b7772:	89 04 24             	mov    %eax,(%esp)
 84b7775:	e8 e6 6b bc ff       	call   807e360 <localtime_r@plt>
 84b777a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84b777d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b7780:	8b 70 0c             	mov    0xc(%eax),%esi
 84b7783:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b7786:	8b 40 10             	mov    0x10(%eax),%eax
 84b7789:	8d 78 01             	lea    0x1(%eax),%edi
 84b778c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b778f:	8b 40 14             	mov    0x14(%eax),%eax
 84b7792:	8d 88 6c 07 00 00    	lea    0x76c(%eax),%ecx
 84b7798:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 84b779d:	89 c8                	mov    %ecx,%eax
 84b779f:	f7 ea                	imul   %edx
 84b77a1:	c1 fa 07             	sar    $0x7,%edx
 84b77a4:	89 c8                	mov    %ecx,%eax
 84b77a6:	c1 f8 1f             	sar    $0x1f,%eax
 84b77a9:	89 d3                	mov    %edx,%ebx
 84b77ab:	29 c3                	sub    %eax,%ebx
 84b77ad:	69 c3 d0 07 00 00    	imul   $0x7d0,%ebx,%eax
 84b77b3:	89 cb                	mov    %ecx,%ebx
 84b77b5:	29 c3                	sub    %eax,%ebx
 84b77b7:	e8 c5 49 c1 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84b77bc:	8b 90 b0 01 00 00    	mov    0x1b0(%eax),%edx
 84b77c2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b77c5:	0f b6 80 44 bb 3a 09 	movzbl 0x93abb44(%eax),%eax
 84b77cc:	0f be c0             	movsbl %al,%eax
 84b77cf:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84b77d2:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 84b77d6:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 84b77da:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84b77de:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84b77e2:	89 54 24 10          	mov    %edx,0x10(%esp)
 84b77e6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b77ea:	c7 44 24 08 74 3c c8 	movl   $0x8c83c74,0x8(%esp)
 84b77f1:	08 
 84b77f2:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 84b77f9:	00 
 84b77fa:	8b 45 10             	mov    0x10(%ebp),%eax
 84b77fd:	89 04 24             	mov    %eax,(%esp)
 84b7800:	e8 17 50 0d 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84b7805:	8b 45 10             	mov    0x10(%ebp),%eax
 84b7808:	83 c4 7c             	add    $0x7c,%esp
 84b780b:	5b                   	pop    %ebx
 84b780c:	5e                   	pop    %esi
 84b780d:	5f                   	pop    %edi
 84b780e:	5d                   	pop    %ebp
 84b780f:	c3                   	ret

```

```c
// WongWork::CGenUniqueNo::genIPGNo @ 0x84b7750

/* WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*) */

char * WongWork::CGenUniqueNo::genIPGNo(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  tm local_50;
  time_t local_24;
  tm *local_20;
  
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_20 = localtime_r(&local_24,&local_50);
  iVar1 = local_20->tm_mday;
  iVar2 = local_20->tm_mon;
  iVar3 = local_20->tm_year;
  iVar4 = G_CEnvironment();
  OS_API::snprintf(param_3,0x14,"%c%02d%02d%02d%02d%010d",
                   (int)*(char *)((int)&genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE,unsigned_int,char*)
                                        ::typeConst + param_1),*(undefined4 *)(iVar4 + 0x1b0),
                   (iVar3 + 0x76c) % 2000,iVar2 + 1,iVar1,param_2);
  return param_3;
}

```

