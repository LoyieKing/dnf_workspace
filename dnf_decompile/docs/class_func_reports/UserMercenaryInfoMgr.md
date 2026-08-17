# UserMercenaryInfoMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## AddCharac

```asm
// === 081b4300 UserMercenaryInfoMgr::AddCharac  [0x081b4300-0x81b4419] ===
 81b4300:	55                   	push   %ebp
 81b4301:	89 e5                	mov    %esp,%ebp
 81b4303:	53                   	push   %ebx
 81b4304:	83 ec 24             	sub    $0x24,%esp
 81b4307:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b430a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b430e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4311:	89 04 24             	mov    %eax,(%esp)
 81b4314:	e8 7f fe ff ff       	call   81b4198 <_ZN20UserMercenaryInfoMgr16CheckValidAppendERK21CHARAC_LOAD_MERCENARY>
 81b4319:	83 f0 01             	xor    $0x1,%eax
 81b431c:	84 c0                	test   %al,%al
 81b431e:	74 0a                	je     81b432a <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0x2a>
 81b4320:	b8 00 00 00 00       	mov    $0x0,%eax
 81b4325:	e9 ea 00 00 00       	jmp    81b4414 <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0x114>
 81b432a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b432d:	c6 40 32 0a          	movb   $0xa,0x32(%eax)
 81b4331:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81b4338:	e9 b1 00 00 00       	jmp    81b43ee <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0xee>
 81b433d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81b4340:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b4343:	83 c2 0c             	add    $0xc,%edx
 81b4346:	8b 5c 90 04          	mov    0x4(%eax,%edx,4),%ebx
 81b434a:	e8 4c 7e f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b434f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b4353:	89 04 24             	mov    %eax,(%esp)
 81b4356:	e8 d7 b6 1a 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81b435b:	85 c0                	test   %eax,%eax
 81b435d:	75 07                	jne    81b4366 <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0x66>
 81b435f:	b8 00 00 00 00       	mov    $0x0,%eax
 81b4364:	eb 20                	jmp    81b4386 <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0x86>
 81b4366:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b436d:	00 
 81b436e:	c7 44 24 08 10 6f c9 	movl   $0x8c96f10,0x8(%esp)
 81b4375:	08 
 81b4376:	c7 44 24 04 74 6f c9 	movl   $0x8c96f74,0x4(%esp)
 81b437d:	08 
 81b437e:	89 04 24             	mov    %eax,(%esp)
 81b4381:	e8 0a 1a 57 00       	call   8725d90 <__dynamic_cast>
 81b4386:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b4389:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81b438d:	74 52                	je     81b43e1 <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0xe1>
 81b438f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b4392:	8b 00                	mov    (%eax),%eax
 81b4394:	83 c0 10             	add    $0x10,%eax
 81b4397:	8b 10                	mov    (%eax),%edx
 81b4399:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b439c:	89 04 24             	mov    %eax,(%esp)
 81b439f:	ff d2                	call   *%edx
 81b43a1:	84 c0                	test   %al,%al
 81b43a3:	74 33                	je     81b43d8 <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0xd8>
 81b43a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b43a8:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 81b43ac:	0f be d8             	movsbl %al,%ebx
 81b43af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b43b2:	89 04 24             	mov    %eax,(%esp)
 81b43b5:	e8 9a c8 f5 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 81b43ba:	39 c3                	cmp    %eax,%ebx
 81b43bc:	0f 9f c0             	setg   %al
 81b43bf:	84 c0                	test   %al,%al
 81b43c1:	74 27                	je     81b43ea <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0xea>
 81b43c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b43c6:	89 04 24             	mov    %eax,(%esp)
 81b43c9:	e8 86 c8 f5 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 81b43ce:	89 c2                	mov    %eax,%edx
 81b43d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b43d3:	88 50 32             	mov    %dl,0x32(%eax)
 81b43d6:	eb 12                	jmp    81b43ea <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0xea>
 81b43d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b43db:	c6 40 32 00          	movb   $0x0,0x32(%eax)
 81b43df:	eb 1c                	jmp    81b43fd <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0xfd>
 81b43e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b43e4:	c6 40 32 00          	movb   $0x0,0x32(%eax)
 81b43e8:	eb 13                	jmp    81b43fd <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0xfd>
 81b43ea:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81b43ee:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 81b43f2:	0f 9e c0             	setle  %al
 81b43f5:	84 c0                	test   %al,%al
 81b43f7:	0f 85 40 ff ff ff    	jne    81b433d <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY+0x3d>
 81b43fd:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4400:	8b 55 0c             	mov    0xc(%ebp),%edx
 81b4403:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b4407:	89 04 24             	mov    %eax,(%esp)
 81b440a:	e8 a3 07 00 00       	call   81b4bb2 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EE9push_backERKS0_>
 81b440f:	b8 01 00 00 00       	mov    $0x1,%eax
 81b4414:	83 c4 24             	add    $0x24,%esp
 81b4417:	5b                   	pop    %ebx
 81b4418:	5d                   	pop    %ebp
 81b4419:	c3                   	ret

```

```c
// UserMercenaryInfoMgr::AddCharac @ 0x81b4300

/* UserMercenaryInfoMgr::AddCharac(CHARAC_LOAD_MERCENARY&) */

undefined4 __thiscall
UserMercenaryInfoMgr::AddCharac(UserMercenaryInfoMgr *this,CHARAC_LOAD_MERCENARY *param_1)

{
  char cVar1;
  CHARAC_LOAD_MERCENARY CVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  int iVar4;
  CItem *this_01;
  int local_14;
  
  cVar1 = CheckValidAppend(this,param_1);
  if (cVar1 == '\x01') {
    param_1[0x32] = (CHARAC_LOAD_MERCENARY)0xa;
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      iVar4 = *(int *)(param_1 + (local_14 + 0xc) * 4 + 4);
      this_00 = (CDataManager *)G_CDataManager();
      iVar4 = CDataManager::find_item(this_00,iVar4);
      if (iVar4 == 0) {
        this_01 = (CItem *)0x0;
      }
      else {
        this_01 = (CItem *)__dynamic_cast(iVar4,&CItem::typeinfo,&CEquipItem::typeinfo,0);
      }
      if (this_01 == (CItem *)0x0) {
        param_1[0x32] = (CHARAC_LOAD_MERCENARY)0x0;
        break;
      }
      cVar1 = (**(code **)(*(int *)this_01 + 0x10))(this_01);
      if (cVar1 == '\0') {
        param_1[0x32] = (CHARAC_LOAD_MERCENARY)0x0;
        break;
      }
      CVar2 = param_1[0x32];
      iVar4 = CItem::get_grade(this_01);
      if (iVar4 < (char)CVar2) {
        CVar2 = (CHARAC_LOAD_MERCENARY)CItem::get_grade(this_01);
        param_1[0x32] = CVar2;
      }
    }
    std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::push_back
              ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this,param_1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## CheckCharacIndex

```asm
// === 081b4262 UserMercenaryInfoMgr::CheckCharacIndex  [0x081b4262-0x81b42ad] ===
 81b4262:	55                   	push   %ebp
 81b4263:	89 e5                	mov    %esp,%ebp
 81b4265:	83 ec 28             	sub    $0x28,%esp
 81b4268:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b426b:	88 45 f4             	mov    %al,-0xc(%ebp)
 81b426e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4271:	89 04 24             	mov    %eax,(%esp)
 81b4274:	e8 e1 08 00 00       	call   81b4b5a <_ZNKSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EE5emptyEv>
 81b4279:	84 c0                	test   %al,%al
 81b427b:	75 13                	jne    81b4290 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh+0x2e>
 81b427d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4280:	89 04 24             	mov    %eax,(%esp)
 81b4283:	e8 9c 08 00 00       	call   81b4b24 <_ZNKSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EE4sizeEv>
 81b4288:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 81b428c:	39 d0                	cmp    %edx,%eax
 81b428e:	73 07                	jae    81b4297 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh+0x35>
 81b4290:	b8 01 00 00 00       	mov    $0x1,%eax
 81b4295:	eb 05                	jmp    81b429c <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh+0x3a>
 81b4297:	b8 00 00 00 00       	mov    $0x0,%eax
 81b429c:	84 c0                	test   %al,%al
 81b429e:	74 07                	je     81b42a7 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh+0x45>
 81b42a0:	b8 00 00 00 00       	mov    $0x0,%eax
 81b42a5:	eb 05                	jmp    81b42ac <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh+0x4a>
 81b42a7:	b8 01 00 00 00       	mov    $0x1,%eax
 81b42ac:	c9                   	leave
 81b42ad:	c3                   	ret

```

```c
// UserMercenaryInfoMgr::CheckCharacIndex @ 0x81b4262

/* UserMercenaryInfoMgr::CheckCharacIndex(unsigned char) const */

bool __thiscall UserMercenaryInfoMgr::CheckCharacIndex(UserMercenaryInfoMgr *this,uchar param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::empty();
  if ((cVar2 == '\0') &&
     (uVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this
                        ), param_1 <= uVar3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}

```

---

## CheckValidAppend

```asm
// === 081b4198 UserMercenaryInfoMgr::CheckValidAppend  [0x081b4198-0x81b4261] ===
 81b4198:	55                   	push   %ebp
 81b4199:	89 e5                	mov    %esp,%ebp
 81b419b:	53                   	push   %ebx
 81b419c:	83 ec 24             	sub    $0x24,%esp
 81b419f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81b41a6:	e9 92 00 00 00       	jmp    81b423d <_ZN20UserMercenaryInfoMgr16CheckValidAppendERK21CHARAC_LOAD_MERCENARY+0xa5>
 81b41ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b41ae:	8b 18                	mov    (%eax),%ebx
 81b41b0:	8b 45 08             	mov    0x8(%ebp),%eax
 81b41b3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b41b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b41ba:	89 04 24             	mov    %eax,(%esp)
 81b41bd:	e8 84 09 00 00       	call   81b4b46 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EEixEj>
 81b41c2:	8b 00                	mov    (%eax),%eax
 81b41c4:	39 c3                	cmp    %eax,%ebx
 81b41c6:	0f 94 c0             	sete   %al
 81b41c9:	84 c0                	test   %al,%al
 81b41cb:	74 6c                	je     81b4239 <_ZN20UserMercenaryInfoMgr16CheckValidAppendERK21CHARAC_LOAD_MERCENARY+0xa1>
 81b41cd:	8b 45 08             	mov    0x8(%ebp),%eax
 81b41d0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b41d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b41d7:	89 04 24             	mov    %eax,(%esp)
 81b41da:	e8 67 09 00 00       	call   81b4b46 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EEixEj>
 81b41df:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 81b41e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b41e6:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81b41ea:	66 39 c2             	cmp    %ax,%dx
 81b41ed:	0f 95 c0             	setne  %al
 81b41f0:	84 c0                	test   %al,%al
 81b41f2:	74 3e                	je     81b4232 <_ZN20UserMercenaryInfoMgr16CheckValidAppendERK21CHARAC_LOAD_MERCENARY+0x9a>
 81b41f4:	8b 45 08             	mov    0x8(%ebp),%eax
 81b41f7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b41fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b41fe:	89 04 24             	mov    %eax,(%esp)
 81b4201:	e8 40 09 00 00       	call   81b4b46 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EEixEj>
 81b4206:	8b 55 0c             	mov    0xc(%ebp),%edx
 81b4209:	0f b7 52 04          	movzwl 0x4(%edx),%edx
 81b420d:	66 89 50 04          	mov    %dx,0x4(%eax)
 81b4211:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4214:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b4217:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b421b:	89 04 24             	mov    %eax,(%esp)
 81b421e:	e8 23 09 00 00       	call   81b4b46 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EEixEj>
 81b4223:	89 04 24             	mov    %eax,(%esp)
 81b4226:	e8 9d 05 00 00       	call   81b47c8 <_ZN21CHARAC_LOAD_MERCENARY5alterEv>
 81b422b:	b8 00 00 00 00       	mov    $0x0,%eax
 81b4230:	eb 29                	jmp    81b425b <_ZN20UserMercenaryInfoMgr16CheckValidAppendERK21CHARAC_LOAD_MERCENARY+0xc3>
 81b4232:	b8 00 00 00 00       	mov    $0x0,%eax
 81b4237:	eb 22                	jmp    81b425b <_ZN20UserMercenaryInfoMgr16CheckValidAppendERK21CHARAC_LOAD_MERCENARY+0xc3>
 81b4239:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81b423d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4240:	89 04 24             	mov    %eax,(%esp)
 81b4243:	e8 dc 08 00 00       	call   81b4b24 <_ZNKSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EE4sizeEv>
 81b4248:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81b424b:	0f 97 c0             	seta   %al
 81b424e:	84 c0                	test   %al,%al
 81b4250:	0f 85 55 ff ff ff    	jne    81b41ab <_ZN20UserMercenaryInfoMgr16CheckValidAppendERK21CHARAC_LOAD_MERCENARY+0x13>
 81b4256:	b8 01 00 00 00       	mov    $0x1,%eax
 81b425b:	83 c4 24             	add    $0x24,%esp
 81b425e:	5b                   	pop    %ebx
 81b425f:	5d                   	pop    %ebp
 81b4260:	c3                   	ret
 81b4261:	90                   	nop

```

```c
// UserMercenaryInfoMgr::CheckValidAppend @ 0x81b4198

/* UserMercenaryInfoMgr::CheckValidAppend(CHARAC_LOAD_MERCENARY const&) */

undefined4 __thiscall
UserMercenaryInfoMgr::CheckValidAppend(UserMercenaryInfoMgr *this,CHARAC_LOAD_MERCENARY *param_1)

{
  int *piVar1;
  int iVar2;
  CHARAC_LOAD_MERCENARY *this_00;
  uint uVar3;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this);
    if (uVar3 <= local_10) {
      return 1;
    }
    iVar2 = *(int *)param_1;
    piVar1 = (int *)std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::
                    operator[]((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>
                                *)this,local_10);
    if (iVar2 == *piVar1) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                    ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this,
                     local_10);
  if (*(short *)(iVar2 + 4) != *(short *)(param_1 + 4)) {
    iVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this,
                       local_10);
    *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(param_1 + 4);
    this_00 = (CHARAC_LOAD_MERCENARY *)
              std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this
                         ,local_10);
    CHARAC_LOAD_MERCENARY::alter(this_00);
    return 0;
  }
  return 0;
}

```

---

## CompetitionCharac

```asm
// === 081b4536 UserMercenaryInfoMgr::CompetitionCharac  [0x081b4536-0x81b45cd] ===
 81b4536:	55                   	push   %ebp
 81b4537:	89 e5                	mov    %esp,%ebp
 81b4539:	56                   	push   %esi
 81b453a:	53                   	push   %ebx
 81b453b:	83 ec 30             	sub    $0x30,%esp
 81b453e:	8b 55 14             	mov    0x14(%ebp),%edx
 81b4541:	8b 45 18             	mov    0x18(%ebp),%eax
 81b4544:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 81b4547:	88 45 e0             	mov    %al,-0x20(%ebp)
 81b454a:	8b 45 10             	mov    0x10(%ebp),%eax
 81b454d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b4551:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4554:	89 04 24             	mov    %eax,(%esp)
 81b4557:	e8 52 fd ff ff       	call   81b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>
 81b455c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b455f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b4562:	0f b6 c0             	movzbl %al,%eax
 81b4565:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b4569:	8b 45 08             	mov    0x8(%ebp),%eax
 81b456c:	89 04 24             	mov    %eax,(%esp)
 81b456f:	e8 ee fc ff ff       	call   81b4262 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh>
 81b4574:	83 f0 01             	xor    $0x1,%eax
 81b4577:	84 c0                	test   %al,%al
 81b4579:	74 07                	je     81b4582 <_ZN20UserMercenaryInfoMgr17CompetitionCharacEP5CUserjcc+0x4c>
 81b457b:	b8 00 00 00 00       	mov    $0x0,%eax
 81b4580:	eb 44                	jmp    81b45c6 <_ZN20UserMercenaryInfoMgr17CompetitionCharacEP5CUserjcc+0x90>
 81b4582:	0f be 75 e0          	movsbl -0x20(%ebp),%esi
 81b4586:	0f be 5d e4          	movsbl -0x1c(%ebp),%ebx
 81b458a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b458d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4590:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b4594:	89 04 24             	mov    %eax,(%esp)
 81b4597:	e8 aa 05 00 00       	call   81b4b46 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EEixEj>
 81b459c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81b45a0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81b45a4:	8b 55 0c             	mov    0xc(%ebp),%edx
 81b45a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b45ab:	89 04 24             	mov    %eax,(%esp)
 81b45ae:	e8 61 f2 ff ff       	call   81b3814 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc>
 81b45b3:	83 f0 01             	xor    $0x1,%eax
 81b45b6:	84 c0                	test   %al,%al
 81b45b8:	74 07                	je     81b45c1 <_ZN20UserMercenaryInfoMgr17CompetitionCharacEP5CUserjcc+0x8b>
 81b45ba:	b8 00 00 00 00       	mov    $0x0,%eax
 81b45bf:	eb 05                	jmp    81b45c6 <_ZN20UserMercenaryInfoMgr17CompetitionCharacEP5CUserjcc+0x90>
 81b45c1:	b8 01 00 00 00       	mov    $0x1,%eax
 81b45c6:	83 c4 30             	add    $0x30,%esp
 81b45c9:	5b                   	pop    %ebx
 81b45ca:	5e                   	pop    %esi
 81b45cb:	5d                   	pop    %ebp
 81b45cc:	c3                   	ret
 81b45cd:	90                   	nop

```

```c
// UserMercenaryInfoMgr::CompetitionCharac @ 0x81b4536

/* UserMercenaryInfoMgr::CompetitionCharac(CUser*, unsigned int, char, char) */

undefined4 __thiscall
UserMercenaryInfoMgr::CompetitionCharac
          (UserMercenaryInfoMgr *this,CUser *param_1,uint param_2,char param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  CHARAC_LOAD_MERCENARY *this_00;
  
  uVar2 = FindIndexByCharacNo(this,param_2);
  cVar1 = CheckCharacIndex(this,(uchar)uVar2);
  if (cVar1 == '\x01') {
    this_00 = (CHARAC_LOAD_MERCENARY *)
              std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this
                         ,uVar2);
    cVar1 = CHARAC_LOAD_MERCENARY::Competition(this_00,param_1,param_3,param_4);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## FindIndexByCharacNo

```asm
// === 081b42ae UserMercenaryInfoMgr::FindIndexByCharacNo  [0x081b42ae-0x81b42ff] ===
 81b42ae:	55                   	push   %ebp
 81b42af:	89 e5                	mov    %esp,%ebp
 81b42b1:	83 ec 28             	sub    $0x28,%esp
 81b42b4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81b42bb:	eb 27                	jmp    81b42e4 <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj+0x36>
 81b42bd:	8b 45 08             	mov    0x8(%ebp),%eax
 81b42c0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b42c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b42c7:	89 04 24             	mov    %eax,(%esp)
 81b42ca:	e8 cf 08 00 00       	call   81b4b9e <_ZNKSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EEixEj>
 81b42cf:	8b 00                	mov    (%eax),%eax
 81b42d1:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81b42d4:	0f 94 c0             	sete   %al
 81b42d7:	84 c0                	test   %al,%al
 81b42d9:	74 05                	je     81b42e0 <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj+0x32>
 81b42db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b42de:	eb 1e                	jmp    81b42fe <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj+0x50>
 81b42e0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81b42e4:	8b 45 08             	mov    0x8(%ebp),%eax
 81b42e7:	89 04 24             	mov    %eax,(%esp)
 81b42ea:	e8 35 08 00 00       	call   81b4b24 <_ZNKSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EE4sizeEv>
 81b42ef:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81b42f2:	0f 97 c0             	seta   %al
 81b42f5:	84 c0                	test   %al,%al
 81b42f7:	75 c4                	jne    81b42bd <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj+0xf>
 81b42f9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81b42fe:	c9                   	leave
 81b42ff:	c3                   	ret

```

```c
// UserMercenaryInfoMgr::FindIndexByCharacNo @ 0x81b42ae

/* UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const */

uint __thiscall UserMercenaryInfoMgr::FindIndexByCharacNo(UserMercenaryInfoMgr *this,uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this);
    if (uVar2 <= local_10) {
      return 0xffffffff;
    }
    puVar1 = (uint *)std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::
                     operator[]((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>
                                 *)this,local_10);
    if (*puVar1 == param_1) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}

```

---

## IsWaitingStateCharac

```asm
// === 081b45ce UserMercenaryInfoMgr::IsWaitingStateCharac  [0x081b45ce-0x81b462d] ===
 81b45ce:	55                   	push   %ebp
 81b45cf:	89 e5                	mov    %esp,%ebp
 81b45d1:	83 ec 28             	sub    $0x28,%esp
 81b45d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b45d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b45db:	8b 45 08             	mov    0x8(%ebp),%eax
 81b45de:	89 04 24             	mov    %eax,(%esp)
 81b45e1:	e8 c8 fc ff ff       	call   81b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>
 81b45e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b45e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b45ec:	0f b6 c0             	movzbl %al,%eax
 81b45ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b45f3:	8b 45 08             	mov    0x8(%ebp),%eax
 81b45f6:	89 04 24             	mov    %eax,(%esp)
 81b45f9:	e8 64 fc ff ff       	call   81b4262 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh>
 81b45fe:	83 f0 01             	xor    $0x1,%eax
 81b4601:	84 c0                	test   %al,%al
 81b4603:	74 07                	je     81b460c <_ZN20UserMercenaryInfoMgr20IsWaitingStateCharacEj+0x3e>
 81b4605:	b8 01 00 00 00       	mov    $0x1,%eax
 81b460a:	eb 1f                	jmp    81b462b <_ZN20UserMercenaryInfoMgr20IsWaitingStateCharacEj+0x5d>
 81b460c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b460f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4612:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b4616:	89 04 24             	mov    %eax,(%esp)
 81b4619:	e8 28 05 00 00       	call   81b4b46 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EEixEj>
 81b461e:	89 04 24             	mov    %eax,(%esp)
 81b4621:	e8 60 e8 ff ff       	call   81b2e86 <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv>
 81b4626:	85 c0                	test   %eax,%eax
 81b4628:	0f 94 c0             	sete   %al
 81b462b:	c9                   	leave
 81b462c:	c3                   	ret
 81b462d:	90                   	nop

```

```c
// UserMercenaryInfoMgr::IsWaitingStateCharac @ 0x81b45ce

/* UserMercenaryInfoMgr::IsWaitingStateCharac(unsigned int) */

bool __thiscall UserMercenaryInfoMgr::IsWaitingStateCharac(UserMercenaryInfoMgr *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  CHARAC_LOAD_MERCENARY *this_00;
  int iVar3;
  bool bVar4;
  
  uVar2 = FindIndexByCharacNo(this,param_1);
  cVar1 = CheckCharacIndex(this,(uchar)uVar2);
  if (cVar1 == '\x01') {
    this_00 = (CHARAC_LOAD_MERCENARY *)
              std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this
                         ,uVar2);
    iVar3 = CHARAC_LOAD_MERCENARY::GetCompetitionState(this_00);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

```

---

## RemoveCharac

```asm
// === 081b441a UserMercenaryInfoMgr::RemoveCharac  [0x081b441a-0x81b44bf] ===
 81b441a:	55                   	push   %ebp
 81b441b:	89 e5                	mov    %esp,%ebp
 81b441d:	83 ec 28             	sub    $0x28,%esp
 81b4420:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b4423:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b4427:	8b 45 08             	mov    0x8(%ebp),%eax
 81b442a:	89 04 24             	mov    %eax,(%esp)
 81b442d:	e8 7c fe ff ff       	call   81b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>
 81b4432:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81b4435:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b4438:	83 f8 ff             	cmp    $0xffffffff,%eax
 81b443b:	74 1b                	je     81b4458 <_ZN20UserMercenaryInfoMgr12RemoveCharacEj+0x3e>
 81b443d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4440:	89 04 24             	mov    %eax,(%esp)
 81b4443:	e8 dc 06 00 00       	call   81b4b24 <_ZNKSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EE4sizeEv>
 81b4448:	89 c2                	mov    %eax,%edx
 81b444a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81b444d:	39 c2                	cmp    %eax,%edx
 81b444f:	7e 07                	jle    81b4458 <_ZN20UserMercenaryInfoMgr12RemoveCharacEj+0x3e>
 81b4451:	b8 01 00 00 00       	mov    $0x1,%eax
 81b4456:	eb 05                	jmp    81b445d <_ZN20UserMercenaryInfoMgr12RemoveCharacEj+0x43>
 81b4458:	b8 00 00 00 00       	mov    $0x0,%eax
 81b445d:	84 c0                	test   %al,%al
 81b445f:	74 5c                	je     81b44bd <_ZN20UserMercenaryInfoMgr12RemoveCharacEj+0xa3>
 81b4461:	8b 55 08             	mov    0x8(%ebp),%edx
 81b4464:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81b4467:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b446b:	89 04 24             	mov    %eax,(%esp)
 81b446e:	e8 b3 07 00 00       	call   81b4c26 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EE5beginEv>
 81b4473:	83 ec 04             	sub    $0x4,%esp
 81b4476:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81b4479:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81b447c:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b4480:	8d 55 f4             	lea    -0xc(%ebp),%edx
 81b4483:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b4487:	89 04 24             	mov    %eax,(%esp)
 81b448a:	e8 bb 07 00 00       	call   81b4c4a <_ZNK9__gnu_cxx17__normal_iteratorIP21CHARAC_LOAD_MERCENARYSt6vectorIS1_SaIS1_EEEplERKi>
 81b448f:	83 ec 04             	sub    $0x4,%esp
 81b4492:	8b 55 08             	mov    0x8(%ebp),%edx
 81b4495:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81b4498:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 81b449b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81b449f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b44a3:	89 04 24             	mov    %eax,(%esp)
 81b44a6:	e8 d5 07 00 00       	call   81b4c80 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 81b44ab:	83 ec 04             	sub    $0x4,%esp
 81b44ae:	eb 0d                	jmp    81b44bd <_ZN20UserMercenaryInfoMgr12RemoveCharacEj+0xa3>
 81b44b0:	89 04 24             	mov    %eax,(%esp)
 81b44b3:	e8 28 18 57 00       	call   8725ce0 <__cxa_begin_catch>
 81b44b8:	e8 73 17 57 00       	call   8725c30 <__cxa_end_catch>
 81b44bd:	c9                   	leave
 81b44be:	c3                   	ret
 81b44bf:	90                   	nop

```

```c
// UserMercenaryInfoMgr::RemoveCharac @ 0x81b441a

/* UserMercenaryInfoMgr::RemoveCharac(unsigned int) */

void __thiscall UserMercenaryInfoMgr::RemoveCharac(UserMercenaryInfoMgr *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 local_18 [4];
  undefined4 local_14;
  int local_10 [3];
  
  iVar2 = FindIndexByCharacNo(this,param_1);
  if (iVar2 != -1) {
    iVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this);
    if (iVar2 < iVar3) {
      bVar1 = true;
      goto LAB_081b445d;
    }
  }
  bVar1 = false;
LAB_081b445d:
  if (bVar1) {
                    /* try { // try from 081b446e to 081b44aa has its CatchHandler @ 081b44b0 */
    std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::begin();
    __gnu_cxx::
    __normal_iterator<CHARAC_LOAD_MERCENARY*,std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>>
    ::operator+((__normal_iterator<CHARAC_LOAD_MERCENARY*,std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>>
                 *)&local_14,local_10);
    std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::erase
              (local_18,this,local_14);
  }
  return;
}

```

---

## ReturnCharac

```asm
// === 081b44c0 UserMercenaryInfoMgr::ReturnCharac  [0x081b44c0-0x81b4535] ===
 81b44c0:	55                   	push   %ebp
 81b44c1:	89 e5                	mov    %esp,%ebp
 81b44c3:	83 ec 28             	sub    $0x28,%esp
 81b44c6:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81b44ca:	75 07                	jne    81b44d3 <_ZN20UserMercenaryInfoMgr12ReturnCharacEP5CUserjR25competition_reward_result+0x13>
 81b44cc:	b8 00 00 00 00       	mov    $0x0,%eax
 81b44d1:	eb 60                	jmp    81b4533 <_ZN20UserMercenaryInfoMgr12ReturnCharacEP5CUserjR25competition_reward_result+0x73>
 81b44d3:	8b 45 10             	mov    0x10(%ebp),%eax
 81b44d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b44da:	8b 45 08             	mov    0x8(%ebp),%eax
 81b44dd:	89 04 24             	mov    %eax,(%esp)
 81b44e0:	e8 c9 fd ff ff       	call   81b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>
 81b44e5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b44e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b44eb:	0f b6 c0             	movzbl %al,%eax
 81b44ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b44f2:	8b 45 08             	mov    0x8(%ebp),%eax
 81b44f5:	89 04 24             	mov    %eax,(%esp)
 81b44f8:	e8 65 fd ff ff       	call   81b4262 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh>
 81b44fd:	83 f0 01             	xor    $0x1,%eax
 81b4500:	84 c0                	test   %al,%al
 81b4502:	74 07                	je     81b450b <_ZN20UserMercenaryInfoMgr12ReturnCharacEP5CUserjR25competition_reward_result+0x4b>
 81b4504:	b8 00 00 00 00       	mov    $0x0,%eax
 81b4509:	eb 28                	jmp    81b4533 <_ZN20UserMercenaryInfoMgr12ReturnCharacEP5CUserjR25competition_reward_result+0x73>
 81b450b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b450e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4511:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b4515:	89 04 24             	mov    %eax,(%esp)
 81b4518:	e8 29 06 00 00       	call   81b4b46 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EEixEj>
 81b451d:	8b 55 14             	mov    0x14(%ebp),%edx
 81b4520:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b4524:	8b 55 0c             	mov    0xc(%ebp),%edx
 81b4527:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b452b:	89 04 24             	mov    %eax,(%esp)
 81b452e:	e8 35 f6 ff ff       	call   81b3b68 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result>
 81b4533:	c9                   	leave
 81b4534:	c3                   	ret
 81b4535:	90                   	nop

```

```c
// UserMercenaryInfoMgr::ReturnCharac @ 0x81b44c0

/* UserMercenaryInfoMgr::ReturnCharac(CUser*, unsigned int, competition_reward_result&) */

undefined4 __thiscall
UserMercenaryInfoMgr::ReturnCharac
          (UserMercenaryInfoMgr *this,CUser *param_1,uint param_2,competition_reward_result *param_3
          )

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  CHARAC_LOAD_MERCENARY *this_00;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = FindIndexByCharacNo(this,param_2);
    cVar1 = CheckCharacIndex(this,(uchar)uVar3);
    if (cVar1 == '\x01') {
      this_00 = (CHARAC_LOAD_MERCENARY *)
                std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                          ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                           this,uVar3);
      uVar2 = CHARAC_LOAD_MERCENARY::Reward(this_00,param_1,param_3);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## UpdateCharacName

```asm
// === 081b462e UserMercenaryInfoMgr::UpdateCharacName  [0x081b462e-0x81b46d1] ===
 81b462e:	55                   	push   %ebp
 81b462f:	89 e5                	mov    %esp,%ebp
 81b4631:	53                   	push   %ebx
 81b4632:	83 ec 24             	sub    $0x24,%esp
 81b4635:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b4638:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b463c:	8b 45 08             	mov    0x8(%ebp),%eax
 81b463f:	89 04 24             	mov    %eax,(%esp)
 81b4642:	e8 67 fc ff ff       	call   81b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>
 81b4647:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b464a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b464d:	0f b6 c0             	movzbl %al,%eax
 81b4650:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b4654:	8b 45 08             	mov    0x8(%ebp),%eax
 81b4657:	89 04 24             	mov    %eax,(%esp)
 81b465a:	e8 03 fc ff ff       	call   81b4262 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh>
 81b465f:	83 f0 01             	xor    $0x1,%eax
 81b4662:	84 c0                	test   %al,%al
 81b4664:	75 65                	jne    81b46cb <_ZN20UserMercenaryInfoMgr16UpdateCharacNameEjRKSs+0x9d>
 81b4666:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b4669:	8b 45 08             	mov    0x8(%ebp),%eax
 81b466c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b4670:	89 04 24             	mov    %eax,(%esp)
 81b4673:	e8 ce 04 00 00       	call   81b4b46 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EEixEj>
 81b4678:	83 c0 06             	add    $0x6,%eax
 81b467b:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81b4682:	00 
 81b4683:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b468a:	00 
 81b468b:	89 04 24             	mov    %eax,(%esp)
 81b468e:	e8 2d 96 ec ff       	call   807dcc0 <memset@plt>
 81b4693:	8b 45 10             	mov    0x10(%ebp),%eax
 81b4696:	89 04 24             	mov    %eax,(%esp)
 81b4699:	e8 52 1e 55 00       	call   87064f0 <_ZNKSs5c_strEv>
 81b469e:	89 c3                	mov    %eax,%ebx
 81b46a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b46a3:	8b 45 08             	mov    0x8(%ebp),%eax
 81b46a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b46aa:	89 04 24             	mov    %eax,(%esp)
 81b46ad:	e8 94 04 00 00       	call   81b4b46 <_ZNSt6vectorI21CHARAC_LOAD_MERCENARYSaIS0_EEixEj>
 81b46b2:	83 c0 06             	add    $0x6,%eax
 81b46b5:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81b46bc:	00 
 81b46bd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b46c1:	89 04 24             	mov    %eax,(%esp)
 81b46c4:	e8 07 92 ec ff       	call   807d8d0 <strncpy@plt>
 81b46c9:	eb 01                	jmp    81b46cc <_ZN20UserMercenaryInfoMgr16UpdateCharacNameEjRKSs+0x9e>
 81b46cb:	90                   	nop
 81b46cc:	83 c4 24             	add    $0x24,%esp
 81b46cf:	5b                   	pop    %ebx
 81b46d0:	5d                   	pop    %ebp
 81b46d1:	c3                   	ret

```

```c
// UserMercenaryInfoMgr::UpdateCharacName @ 0x81b462e

/* UserMercenaryInfoMgr::UpdateCharacName(unsigned int, std::string const&) */

void __thiscall
UserMercenaryInfoMgr::UpdateCharacName(UserMercenaryInfoMgr *this,uint param_1,string *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *__src;
  
  uVar2 = FindIndexByCharacNo(this,param_1);
  cVar1 = CheckCharacIndex(this,(uchar)uVar2);
  if (cVar1 == '\x01') {
    iVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this,
                       uVar2);
    memset((void *)(iVar3 + 6),0,0x1e);
    __src = (char *)std::string::c_str((string *)param_2);
    iVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this,
                       uVar2);
    strncpy((char *)(iVar3 + 6),__src,0x1d);
  }
  return;
}

```

