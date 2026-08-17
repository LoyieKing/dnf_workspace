# BlueMarbleMapScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## BlueMarbleMapScript

```asm
// === 088d53d6 BlueMarbleMapScript::BlueMarbleMapScript  [0x088d53d6-0x88d5417] ===
 88d53d6:	55                   	push   %ebp
 88d53d7:	89 e5                	mov    %esp,%ebp
 88d53d9:	56                   	push   %esi
 88d53da:	53                   	push   %ebx
 88d53db:	83 ec 10             	sub    $0x10,%esp
 88d53de:	8b 45 08             	mov    0x8(%ebp),%eax
 88d53e1:	89 04 24             	mov    %eax,(%esp)
 88d53e4:	e8 b1 13 00 00       	call   88d679a <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EEC1Ev>
 88d53e9:	8b 45 08             	mov    0x8(%ebp),%eax
 88d53ec:	89 04 24             	mov    %eax,(%esp)
 88d53ef:	e8 da 00 00 00       	call   88d54ce <_ZN19BlueMarbleMapScript5clearEv>
 88d53f4:	eb 1b                	jmp    88d5411 <_ZN19BlueMarbleMapScriptC1Ev+0x3b>
 88d53f6:	89 d3                	mov    %edx,%ebx
 88d53f8:	89 c6                	mov    %eax,%esi
 88d53fa:	8b 45 08             	mov    0x8(%ebp),%eax
 88d53fd:	89 04 24             	mov    %eax,(%esp)
 88d5400:	e8 a9 13 00 00       	call   88d67ae <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EED1Ev>
 88d5405:	89 f0                	mov    %esi,%eax
 88d5407:	89 da                	mov    %ebx,%edx
 88d5409:	89 04 24             	mov    %eax,(%esp)
 88d540c:	e8 3f e3 20 00       	call   8ae3750 <_Unwind_Resume>
 88d5411:	83 c4 10             	add    $0x10,%esp
 88d5414:	5b                   	pop    %ebx
 88d5415:	5e                   	pop    %esi
 88d5416:	5d                   	pop    %ebp
 88d5417:	c3                   	ret

```

```c
// BlueMarbleMapScript::BlueMarbleMapScript @ 0x88d53d6

/* BlueMarbleMapScript::BlueMarbleMapScript() */

void __thiscall BlueMarbleMapScript::BlueMarbleMapScript(BlueMarbleMapScript *this)

{
  std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::vector
            ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
                    /* try { // try from 088d53ef to 088d53f3 has its CatchHandler @ 088d53f6 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 088d54ce BlueMarbleMapScript::clear  [0x088d54ce-0x88d54e1] ===
 88d54ce:	55                   	push   %ebp
 88d54cf:	89 e5                	mov    %esp,%ebp
 88d54d1:	83 ec 18             	sub    $0x18,%esp
 88d54d4:	8b 45 08             	mov    0x8(%ebp),%eax
 88d54d7:	89 04 24             	mov    %eax,(%esp)
 88d54da:	e8 3f 13 00 00       	call   88d681e <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EE5clearEv>
 88d54df:	c9                   	leave
 88d54e0:	c3                   	ret
 88d54e1:	90                   	nop

```

```c
// BlueMarbleMapScript::clear @ 0x88d54ce

/* BlueMarbleMapScript::clear() */

void __thiscall BlueMarbleMapScript::clear(BlueMarbleMapScript *this)

{
  std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::clear
            ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
  return;
}

```

---

## getTile

```asm
// === 088d5644 BlueMarbleMapScript::getTile  [0x088d5644-0x88d568f] ===
 88d5644:	55                   	push   %ebp
 88d5645:	89 e5                	mov    %esp,%ebp
 88d5647:	83 ec 18             	sub    $0x18,%esp
 88d564a:	8b 45 08             	mov    0x8(%ebp),%eax
 88d564d:	89 04 24             	mov    %eax,(%esp)
 88d5650:	e8 93 4e 80 ff       	call   80da4e8 <_ZNKSt6vectorIP20BlueMarbleTileScriptSaIS1_EE4sizeEv>
 88d5655:	3b 45 0c             	cmp    0xc(%ebp),%eax
 88d5658:	72 06                	jb     88d5660 <_ZN19BlueMarbleMapScript7getTileEj+0x1c>
 88d565a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 88d565e:	75 07                	jne    88d5667 <_ZN19BlueMarbleMapScript7getTileEj+0x23>
 88d5660:	b8 01 00 00 00       	mov    $0x1,%eax
 88d5665:	eb 05                	jmp    88d566c <_ZN19BlueMarbleMapScript7getTileEj+0x28>
 88d5667:	b8 00 00 00 00       	mov    $0x0,%eax
 88d566c:	84 c0                	test   %al,%al
 88d566e:	74 07                	je     88d5677 <_ZN19BlueMarbleMapScript7getTileEj+0x33>
 88d5670:	b8 00 00 00 00       	mov    $0x0,%eax
 88d5675:	eb 17                	jmp    88d568e <_ZN19BlueMarbleMapScript7getTileEj+0x4a>
 88d5677:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d567a:	8d 50 ff             	lea    -0x1(%eax),%edx
 88d567d:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5680:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d5684:	89 04 24             	mov    %eax,(%esp)
 88d5687:	e8 80 11 00 00       	call   88d680c <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EEixEj>
 88d568c:	8b 00                	mov    (%eax),%eax
 88d568e:	c9                   	leave
 88d568f:	c3                   	ret

```

```c
// BlueMarbleMapScript::getTile @ 0x88d5644

/* BlueMarbleMapScript::getTile(unsigned int) */

undefined4 __thiscall BlueMarbleMapScript::getTile(BlueMarbleMapScript *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar2 = std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::size
                    ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
  if ((uVar2 < param_1) || (param_1 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined4 *)
             std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::operator[]
                       ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this,
                        param_1 - 1);
    uVar3 = *puVar4;
  }
  return uVar3;
}

```

---

## importScript

```asm
// === 088d54e2 BlueMarbleMapScript::importScript  [0x088d54e2-0x88d5643] ===
 88d54e2:	55                   	push   %ebp
 88d54e3:	89 e5                	mov    %esp,%ebp
 88d54e5:	56                   	push   %esi
 88d54e6:	53                   	push   %ebx
 88d54e7:	83 ec 20             	sub    $0x20,%esp
 88d54ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d54ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d54f1:	c7 04 24 40 af e0 08 	movl   $0x8e0af40,(%esp)
 88d54f8:	e8 2c 68 fe ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88d54fd:	83 f0 01             	xor    $0x1,%eax
 88d5500:	84 c0                	test   %al,%al
 88d5502:	74 0a                	je     88d550e <_ZN19BlueMarbleMapScript12importScriptEPKc+0x2c>
 88d5504:	bb 00 00 00 00       	mov    $0x0,%ebx
 88d5509:	e9 2d 01 00 00       	jmp    88d563b <_ZN19BlueMarbleMapScript12importScriptEPKc+0x159>
 88d550e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5511:	89 04 24             	mov    %eax,(%esp)
 88d5514:	e8 b7 10 e3 ff       	call   87065d0 <_ZNSsC1Ev>
 88d5519:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 88d5520:	eb 01                	jmp    88d5523 <_ZN19BlueMarbleMapScript12importScriptEPKc+0x41>
 88d5522:	90                   	nop
 88d5523:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88d552a:	00 
 88d552b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d552e:	89 04 24             	mov    %eax,(%esp)
 88d5531:	e8 29 73 fe ff       	call   88bc85f <_Z8ScanTypeRSsb>
 88d5536:	83 f0 01             	xor    $0x1,%eax
 88d5539:	84 c0                	test   %al,%al
 88d553b:	0f 85 cc 00 00 00    	jne    88d560d <_ZN19BlueMarbleMapScript12importScriptEPKc+0x12b>
 88d5541:	c7 44 24 04 b3 af e0 	movl   $0x8e0afb3,0x4(%esp)
 88d5548:	08 
 88d5549:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d554c:	89 04 24             	mov    %eax,(%esp)
 88d554f:	e8 4d b4 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5554:	84 c0                	test   %al,%al
 88d5556:	74 ca                	je     88d5522 <_ZN19BlueMarbleMapScript12importScriptEPKc+0x40>
 88d5558:	8b 45 08             	mov    0x8(%ebp),%eax
 88d555b:	89 04 24             	mov    %eax,(%esp)
 88d555e:	e8 bb 12 00 00       	call   88d681e <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EE5clearEv>
 88d5563:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d5566:	89 04 24             	mov    %eax,(%esp)
 88d5569:	e8 b6 6e fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d556e:	83 f0 01             	xor    $0x1,%eax
 88d5571:	84 c0                	test   %al,%al
 88d5573:	74 05                	je     88d557a <_ZN19BlueMarbleMapScript12importScriptEPKc+0x98>
 88d5575:	e9 8e 00 00 00       	jmp    88d5608 <_ZN19BlueMarbleMapScript12importScriptEPKc+0x126>
 88d557a:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 88d557d:	e8 70 0b 00 00       	call   88d60f2 <_ZN23BlueMarbleScriptManager10getInsanceEv>
 88d5582:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 88d5586:	89 04 24             	mov    %eax,(%esp)
 88d5589:	e8 b8 10 00 00       	call   88d6646 <_ZN23BlueMarbleScriptManager7getTileEi>
 88d558e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88d5591:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 88d5595:	75 0a                	jne    88d55a1 <_ZN19BlueMarbleMapScript12importScriptEPKc+0xbf>
 88d5597:	bb 00 00 00 00       	mov    $0x0,%ebx
 88d559c:	e9 8f 00 00 00       	jmp    88d5630 <_ZN19BlueMarbleMapScript12importScriptEPKc+0x14e>
 88d55a1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d55a4:	89 04 24             	mov    %eax,(%esp)
 88d55a7:	e8 78 6e fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d55ac:	83 f0 01             	xor    $0x1,%eax
 88d55af:	84 c0                	test   %al,%al
 88d55b1:	74 02                	je     88d55b5 <_ZN19BlueMarbleMapScript12importScriptEPKc+0xd3>
 88d55b3:	eb 53                	jmp    88d5608 <_ZN19BlueMarbleMapScript12importScriptEPKc+0x126>
 88d55b5:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 88d55bc:	e8 8f ee e4 ff       	call   8724450 <_Znwj>
 88d55c1:	89 c3                	mov    %eax,%ebx
 88d55c3:	89 d8                	mov    %ebx,%eax
 88d55c5:	89 04 24             	mov    %eax,(%esp)
 88d55c8:	e8 9b fa ff ff       	call   88d5068 <_ZN20BlueMarbleTileScriptC1Ev>
 88d55cd:	89 d8                	mov    %ebx,%eax
 88d55cf:	89 45 e8             	mov    %eax,-0x18(%ebp)
 88d55d2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 88d55d5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88d55d8:	8b 0a                	mov    (%edx),%ecx
 88d55da:	89 08                	mov    %ecx,(%eax)
 88d55dc:	8b 4a 04             	mov    0x4(%edx),%ecx
 88d55df:	89 48 04             	mov    %ecx,0x4(%eax)
 88d55e2:	8b 52 08             	mov    0x8(%edx),%edx
 88d55e5:	89 50 08             	mov    %edx,0x8(%eax)
 88d55e8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 88d55eb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 88d55ee:	89 50 08             	mov    %edx,0x8(%eax)
 88d55f1:	8b 45 08             	mov    0x8(%ebp),%eax
 88d55f4:	8d 55 e8             	lea    -0x18(%ebp),%edx
 88d55f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d55fb:	89 04 24             	mov    %eax,(%esp)
 88d55fe:	e8 37 12 00 00       	call   88d683a <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EE9push_backERKS1_>
 88d5603:	e9 5b ff ff ff       	jmp    88d5563 <_ZN19BlueMarbleMapScript12importScriptEPKc+0x81>
 88d5608:	e9 16 ff ff ff       	jmp    88d5523 <_ZN19BlueMarbleMapScript12importScriptEPKc+0x41>
 88d560d:	90                   	nop
 88d560e:	bb 01 00 00 00       	mov    $0x1,%ebx
 88d5613:	eb 1b                	jmp    88d5630 <_ZN19BlueMarbleMapScript12importScriptEPKc+0x14e>
 88d5615:	89 d3                	mov    %edx,%ebx
 88d5617:	89 c6                	mov    %eax,%esi
 88d5619:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d561c:	89 04 24             	mov    %eax,(%esp)
 88d561f:	e8 bc 25 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d5624:	89 f0                	mov    %esi,%eax
 88d5626:	89 da                	mov    %ebx,%edx
 88d5628:	89 04 24             	mov    %eax,(%esp)
 88d562b:	e8 20 e1 20 00       	call   8ae3750 <_Unwind_Resume>
 88d5630:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5633:	89 04 24             	mov    %eax,(%esp)
 88d5636:	e8 a5 25 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d563b:	89 d8                	mov    %ebx,%eax
 88d563d:	83 c4 20             	add    $0x20,%esp
 88d5640:	5b                   	pop    %ebx
 88d5641:	5e                   	pop    %esi
 88d5642:	5d                   	pop    %ebp
 88d5643:	c3                   	ret

```

```c
// BlueMarbleMapScript::importScript @ 0x88d54e2

/* BlueMarbleMapScript::importScript(char const*) */

undefined4 __thiscall BlueMarbleMapScript::importScript(BlueMarbleMapScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  BlueMarbleTileScript *this_00;
  undefined4 uVar4;
  BlueMarbleTileScript *local_1c;
  int local_18;
  string local_14;
  undefined4 *local_10;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_14);
    local_18 = 0;
LAB_088d5523:
                    /* try { // try from 088d5531 to 088d5602 has its CatchHandler @ 088d5615 */
    cVar1 = ScanType((string *)&local_14,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[tile]");
      if (bVar2) {
        std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::clear
                  ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
        while (cVar1 = ScanInt(&local_18), cVar1 == '\x01') {
          iVar3 = BlueMarbleScriptManager::getInsance();
          local_10 = (undefined4 *)BlueMarbleScriptManager::getTile(iVar3);
          if (local_10 == (undefined4 *)0x0) {
            uVar4 = 0;
            goto LAB_088d5630;
          }
          cVar1 = ScanInt(&local_18);
          if (cVar1 != '\x01') break;
          this_00 = operator_new(0xc);
          BlueMarbleTileScript::BlueMarbleTileScript(this_00);
          *(undefined4 *)this_00 = *local_10;
          *(undefined4 *)(this_00 + 4) = local_10[1];
          *(undefined4 *)(this_00 + 8) = local_10[2];
          *(int *)(this_00 + 8) = local_18;
          local_1c = this_00;
          std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::push_back
                    ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this,
                     &local_1c);
        }
      }
      goto LAB_088d5523;
    }
    uVar4 = 1;
LAB_088d5630:
    std::string::~string((string *)&local_14);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## ~BlueMarbleMapScript

```asm
// === 088d5418 BlueMarbleMapScript::~BlueMarbleMapScript  [0x088d5418-0x88d54cd] ===
 88d5418:	55                   	push   %ebp
 88d5419:	89 e5                	mov    %esp,%ebp
 88d541b:	56                   	push   %esi
 88d541c:	53                   	push   %ebx
 88d541d:	83 ec 20             	sub    $0x20,%esp
 88d5420:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 88d5427:	eb 55                	jmp    88d547e <_ZN19BlueMarbleMapScriptD1Ev+0x66>
 88d5429:	8b 45 08             	mov    0x8(%ebp),%eax
 88d542c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88d542f:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d5433:	89 04 24             	mov    %eax,(%esp)
 88d5436:	e8 d1 13 00 00       	call   88d680c <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EEixEj>
 88d543b:	8b 00                	mov    (%eax),%eax
 88d543d:	85 c0                	test   %eax,%eax
 88d543f:	0f 95 c0             	setne  %al
 88d5442:	84 c0                	test   %al,%al
 88d5444:	74 1c                	je     88d5462 <_ZN19BlueMarbleMapScriptD1Ev+0x4a>
 88d5446:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5449:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88d544c:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d5450:	89 04 24             	mov    %eax,(%esp)
 88d5453:	e8 b4 13 00 00       	call   88d680c <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EEixEj>
 88d5458:	8b 00                	mov    (%eax),%eax
 88d545a:	89 04 24             	mov    %eax,(%esp)
 88d545d:	e8 8e f0 e4 ff       	call   87244f0 <_ZdlPv>
 88d5462:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5465:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88d5468:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d546c:	89 04 24             	mov    %eax,(%esp)
 88d546f:	e8 98 13 00 00       	call   88d680c <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EEixEj>
 88d5474:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 88d547a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 88d547e:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5481:	89 04 24             	mov    %eax,(%esp)
 88d5484:	e8 5f 50 80 ff       	call   80da4e8 <_ZNKSt6vectorIP20BlueMarbleTileScriptSaIS1_EE4sizeEv>
 88d5489:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 88d548c:	0f 97 c0             	seta   %al
 88d548f:	84 c0                	test   %al,%al
 88d5491:	75 96                	jne    88d5429 <_ZN19BlueMarbleMapScriptD1Ev+0x11>
 88d5493:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5496:	89 04 24             	mov    %eax,(%esp)
 88d5499:	e8 80 13 00 00       	call   88d681e <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EE5clearEv>
 88d549e:	eb 1b                	jmp    88d54bb <_ZN19BlueMarbleMapScriptD1Ev+0xa3>
 88d54a0:	89 d3                	mov    %edx,%ebx
 88d54a2:	89 c6                	mov    %eax,%esi
 88d54a4:	8b 45 08             	mov    0x8(%ebp),%eax
 88d54a7:	89 04 24             	mov    %eax,(%esp)
 88d54aa:	e8 ff 12 00 00       	call   88d67ae <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EED1Ev>
 88d54af:	89 f0                	mov    %esi,%eax
 88d54b1:	89 da                	mov    %ebx,%edx
 88d54b3:	89 04 24             	mov    %eax,(%esp)
 88d54b6:	e8 95 e2 20 00       	call   8ae3750 <_Unwind_Resume>
 88d54bb:	8b 45 08             	mov    0x8(%ebp),%eax
 88d54be:	89 04 24             	mov    %eax,(%esp)
 88d54c1:	e8 e8 12 00 00       	call   88d67ae <_ZNSt6vectorIP20BlueMarbleTileScriptSaIS1_EED1Ev>
 88d54c6:	83 c4 20             	add    $0x20,%esp
 88d54c9:	5b                   	pop    %ebx
 88d54ca:	5e                   	pop    %esi
 88d54cb:	5d                   	pop    %ebp
 88d54cc:	c3                   	ret
 88d54cd:	90                   	nop

```

```c
// BlueMarbleMapScript::~BlueMarbleMapScript @ 0x88d5418

/* BlueMarbleMapScript::~BlueMarbleMapScript() */

void __thiscall BlueMarbleMapScript::~BlueMarbleMapScript(BlueMarbleMapScript *this)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_10;
  
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::size
                      ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
    if (uVar3 <= local_10) break;
    piVar1 = (int *)std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::
                    operator[]((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>
                                *)this,local_10);
    if (*piVar1 != 0) {
      puVar2 = (undefined4 *)
               std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::operator[]
                         ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)
                          this,local_10);
      operator_delete((void *)*puVar2);
    }
    puVar2 = (undefined4 *)
             std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::operator[]
                       ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this,
                        local_10);
    *puVar2 = 0;
    local_10 = local_10 + 1;
  }
                    /* try { // try from 088d5499 to 088d549d has its CatchHandler @ 088d54a0 */
  std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::clear
            ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
  std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::~vector
            ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
  return;
}

```

