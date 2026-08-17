# pvp_assault__CStaticDisposition

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CStaticDisposition

```asm
// === 082e62aa pvp_assault::CStaticDisposition::CStaticDisposition  [0x082e62aa-0x82e6497] ===
 82e62aa:	55                   	push   %ebp
 82e62ab:	89 e5                	mov    %esp,%ebp
 82e62ad:	57                   	push   %edi
 82e62ae:	56                   	push   %esi
 82e62af:	53                   	push   %ebx
 82e62b0:	83 ec 4c             	sub    $0x4c,%esp
 82e62b3:	8b 45 08             	mov    0x8(%ebp),%eax
 82e62b6:	89 04 24             	mov    %eax,(%esp)
 82e62b9:	e8 94 ad 00 00       	call   82f1052 <_ZN11pvp_assault12CDispositionC1Ev>
 82e62be:	8b 45 08             	mov    0x8(%ebp),%eax
 82e62c1:	c7 00 98 d1 c1 08    	movl   $0x8c1d198,(%eax)
 82e62c7:	8b 45 08             	mov    0x8(%ebp),%eax
 82e62ca:	83 c0 0c             	add    $0xc,%eax
 82e62cd:	89 04 24             	mov    %eax,(%esp)
 82e62d0:	e8 95 a1 00 00       	call   82f046a <_ZN11pvp_assault7Point2dC1Ev>
 82e62d5:	8b 45 08             	mov    0x8(%ebp),%eax
 82e62d8:	8d 70 14             	lea    0x14(%eax),%esi
 82e62db:	89 f7                	mov    %esi,%edi
 82e62dd:	bb 01 00 00 00       	mov    $0x1,%ebx
 82e62e2:	eb 0e                	jmp    82e62f2 <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x48>
 82e62e4:	89 3c 24             	mov    %edi,(%esp)
 82e62e7:	e8 9c ad 00 00       	call   82f1088 <_ZN11pvp_assault12CExtraMatrixC1Ev>
 82e62ec:	83 c7 0c             	add    $0xc,%edi
 82e62ef:	83 eb 01             	sub    $0x1,%ebx
 82e62f2:	83 fb ff             	cmp    $0xffffffff,%ebx
 82e62f5:	0f 95 c0             	setne  %al
 82e62f8:	84 c0                	test   %al,%al
 82e62fa:	75 e8                	jne    82e62e4 <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x3a>
 82e62fc:	eb 3c                	jmp    82e633a <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x90>
 82e62fe:	89 d7                	mov    %edx,%edi
 82e6300:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 82e6303:	85 f6                	test   %esi,%esi
 82e6305:	74 26                	je     82e632d <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x83>
 82e6307:	b8 01 00 00 00       	mov    $0x1,%eax
 82e630c:	29 d8                	sub    %ebx,%eax
 82e630e:	89 c2                	mov    %eax,%edx
 82e6310:	89 d0                	mov    %edx,%eax
 82e6312:	01 c0                	add    %eax,%eax
 82e6314:	01 d0                	add    %edx,%eax
 82e6316:	c1 e0 02             	shl    $0x2,%eax
 82e6319:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 82e631c:	39 f3                	cmp    %esi,%ebx
 82e631e:	74 0d                	je     82e632d <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x83>
 82e6320:	83 eb 0c             	sub    $0xc,%ebx
 82e6323:	89 1c 24             	mov    %ebx,(%esp)
 82e6326:	e8 71 ad 00 00       	call   82f109c <_ZN11pvp_assault12CExtraMatrixD1Ev>
 82e632b:	eb ef                	jmp    82e631c <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x72>
 82e632d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82e6330:	89 fa                	mov    %edi,%edx
 82e6332:	89 04 24             	mov    %eax,(%esp)
 82e6335:	e8 16 d4 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e633a:	8b 15 20 cd c1 08    	mov    0x8c1cd20,%edx
 82e6340:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6343:	89 50 0c             	mov    %edx,0xc(%eax)
 82e6346:	8b 15 24 cd c1 08    	mov    0x8c1cd24,%edx
 82e634c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e634f:	89 50 10             	mov    %edx,0x10(%eax)
 82e6352:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82e6359:	e9 a4 00 00 00       	jmp    82e6402 <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x158>
 82e635e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82e6365:	eb 6d                	jmp    82e63d4 <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x12a>
 82e6367:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82e636a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82e636d:	c1 e2 02             	shl    $0x2,%edx
 82e6370:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82e6373:	01 c0                	add    %eax,%eax
 82e6375:	83 c0 01             	add    $0x1,%eax
 82e6378:	8b 14 85 e0 cc c1 08 	mov    0x8c1cce0(,%eax,4),%edx
 82e637f:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 82e6382:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82e6385:	c1 e1 02             	shl    $0x2,%ecx
 82e6388:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82e638b:	8b 04 c5 e0 cc c1 08 	mov    0x8c1cce0(,%eax,8),%eax
 82e6392:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e6396:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e639a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82e639d:	89 04 24             	mov    %eax,(%esp)
 82e63a0:	e8 cb a0 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e63a5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82e63a8:	89 d0                	mov    %edx,%eax
 82e63aa:	01 c0                	add    %eax,%eax
 82e63ac:	01 d0                	add    %edx,%eax
 82e63ae:	c1 e0 02             	shl    $0x2,%eax
 82e63b1:	83 c0 10             	add    $0x10,%eax
 82e63b4:	03 45 08             	add    0x8(%ebp),%eax
 82e63b7:	8d 48 04             	lea    0x4(%eax),%ecx
 82e63ba:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82e63bd:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82e63c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e63c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e63c8:	89 0c 24             	mov    %ecx,(%esp)
 82e63cb:	e8 92 f5 ff ff       	call   82e5962 <_ZN11pvp_assault12CExtraMatrix8AddPointENS_7Point2dE>
 82e63d0:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 82e63d4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e63d7:	c1 e0 02             	shl    $0x2,%eax
 82e63da:	03 45 10             	add    0x10(%ebp),%eax
 82e63dd:	8b 00                	mov    (%eax),%eax
 82e63df:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 82e63e2:	7e 0d                	jle    82e63f1 <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x147>
 82e63e4:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 82e63e8:	7f 07                	jg     82e63f1 <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x147>
 82e63ea:	b8 01 00 00 00       	mov    $0x1,%eax
 82e63ef:	eb 05                	jmp    82e63f6 <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x14c>
 82e63f1:	b8 00 00 00 00       	mov    $0x0,%eax
 82e63f6:	84 c0                	test   %al,%al
 82e63f8:	0f 85 69 ff ff ff    	jne    82e6367 <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0xbd>
 82e63fe:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 82e6402:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 82e6406:	0f 9e c0             	setle  %al
 82e6409:	84 c0                	test   %al,%al
 82e640b:	0f 85 4d ff ff ff    	jne    82e635e <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0xb4>
 82e6411:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6414:	8b 00                	mov    (%eax),%eax
 82e6416:	89 04 24             	mov    %eax,(%esp)
 82e6419:	e8 1e e5 e4 ff       	call   813493c <_ZN5CUser8get_posYEv>
 82e641e:	0f b7 d8             	movzwl %ax,%ebx
 82e6421:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6424:	8b 00                	mov    (%eax),%eax
 82e6426:	89 04 24             	mov    %eax,(%esp)
 82e6429:	e8 fe e4 e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82e642e:	0f b7 c0             	movzwl %ax,%eax
 82e6431:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e6435:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6439:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82e643c:	89 04 24             	mov    %eax,(%esp)
 82e643f:	e8 2c a0 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e6444:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82e6447:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e644b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e644e:	89 04 24             	mov    %eax,(%esp)
 82e6451:	e8 42 00 00 00       	call   82e6498 <_ZN11pvp_assault18CStaticDisposition11_MoveMatrixERKNS_7Point2dE>
 82e6456:	eb 37                	jmp    82e648f <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x1e5>
 82e6458:	89 d6                	mov    %edx,%esi
 82e645a:	89 c7                	mov    %eax,%edi
 82e645c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e645f:	83 c0 14             	add    $0x14,%eax
 82e6462:	85 c0                	test   %eax,%eax
 82e6464:	74 1d                	je     82e6483 <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x1d9>
 82e6466:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6469:	8d 58 2c             	lea    0x2c(%eax),%ebx
 82e646c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e646f:	83 c0 14             	add    $0x14,%eax
 82e6472:	39 c3                	cmp    %eax,%ebx
 82e6474:	74 0d                	je     82e6483 <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x1d9>
 82e6476:	83 eb 0c             	sub    $0xc,%ebx
 82e6479:	89 1c 24             	mov    %ebx,(%esp)
 82e647c:	e8 1b ac 00 00       	call   82f109c <_ZN11pvp_assault12CExtraMatrixD1Ev>
 82e6481:	eb e9                	jmp    82e646c <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi+0x1c2>
 82e6483:	89 f8                	mov    %edi,%eax
 82e6485:	89 f2                	mov    %esi,%edx
 82e6487:	89 04 24             	mov    %eax,(%esp)
 82e648a:	e8 c1 d2 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e648f:	83 c4 4c             	add    $0x4c,%esp
 82e6492:	5b                   	pop    %ebx
 82e6493:	5e                   	pop    %esi
 82e6494:	5f                   	pop    %edi
 82e6495:	5d                   	pop    %ebp
 82e6496:	c3                   	ret
 82e6497:	90                   	nop

```

```c
// pvp_assault::CStaticDisposition::CStaticDisposition @ 0x82e62aa

/* pvp_assault::CStaticDisposition::CStaticDisposition(CUser**, int*) */

void __thiscall
pvp_assault::CStaticDisposition::CStaticDisposition
          (CStaticDisposition *this,CUser **param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  CExtraMatrix *this_00;
  undefined4 local_34;
  undefined4 local_30;
  Point2d local_2c [8];
  int local_24;
  int local_20;
  
  CDisposition::CDisposition((CDisposition *)this);
  *(undefined ***)this = &PTR_SetVirtualMap_08c1d198;
  Point2d::Point2d((Point2d *)(this + 0xc));
  this_00 = (CExtraMatrix *)(this + 0x14);
  for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
                    /* try { // try from 082e62e7 to 082e62eb has its CatchHandler @ 082e62fe */
    CExtraMatrix::CExtraMatrix(this_00);
    this_00 = this_00 + 0xc;
  }
  *(undefined4 *)(this + 0xc) = pvp_assault::ASSAULT_RECT_ICON_POINT;
  *(undefined4 *)(this + 0x10) = DAT_08c1cd24;
  for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
    local_20 = 0;
    while( true ) {
      if ((local_20 < param_2[local_24]) && (local_20 < 4)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      Point2d::Point2d((Point2d *)&local_34,
                       *(int *)(pvp_assault::ASSAULT_RECT_PLAYER_POINT +
                               (local_24 * 4 + local_20) * 8),
                       *(int *)(pvp_assault::ASSAULT_RECT_PLAYER_POINT +
                               ((local_24 * 4 + local_20) * 2 + 1) * 4));
                    /* try { // try from 082e63cb to 082e6455 has its CatchHandler @ 082e6458 */
      CExtraMatrix::AddPoint(this + local_24 * 0xc + 0x14,local_34,local_30);
      local_20 = local_20 + 1;
    }
  }
  uVar2 = CUser::get_posY(*param_1);
  uVar3 = CUser::get_posX(*param_1);
  Point2d::Point2d(local_2c,uVar3 & 0xffff,uVar2 & 0xffff);
  _MoveMatrix(this,local_2c);
  return;
}

```

---

## MoveUser

```asm
// === 082e65ee pvp_assault::CStaticDisposition::MoveUser  [0x082e65ee-0x82e661d] ===
 82e65ee:	55                   	push   %ebp
 82e65ef:	89 e5                	mov    %esp,%ebp
 82e65f1:	83 ec 18             	sub    $0x18,%esp
 82e65f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e65f7:	8b 00                	mov    (%eax),%eax
 82e65f9:	89 c2                	mov    %eax,%edx
 82e65fb:	89 d0                	mov    %edx,%eax
 82e65fd:	01 c0                	add    %eax,%eax
 82e65ff:	01 d0                	add    %edx,%eax
 82e6601:	c1 e0 02             	shl    $0x2,%eax
 82e6604:	83 c0 10             	add    $0x10,%eax
 82e6607:	03 45 08             	add    0x8(%ebp),%eax
 82e660a:	8d 50 04             	lea    0x4(%eax),%edx
 82e660d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6610:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6614:	89 14 24             	mov    %edx,(%esp)
 82e6617:	e8 ee f5 ff ff       	call   82e5c0a <_ZN11pvp_assault12CExtraMatrix8MoveUserEPNS_20CForcedMoveCharacterE>
 82e661c:	c9                   	leave
 82e661d:	c3                   	ret

```

```c
// pvp_assault::CStaticDisposition::MoveUser @ 0x82e65ee

/* pvp_assault::CStaticDisposition::MoveUser(pvp_assault::CForcedMoveCharacter*) */

void __thiscall
pvp_assault::CStaticDisposition::MoveUser(CStaticDisposition *this,CForcedMoveCharacter *param_1)

{
  CExtraMatrix::MoveUser((CExtraMatrix *)(this + *(int *)param_1 * 0xc + 0x14),param_1);
  return;
}

```

---

## SetVirtualMap

```asm
// === 082e6588 pvp_assault::CStaticDisposition::SetVirtualMap  [0x082e6588-0x82e65ed] ===
 82e6588:	55                   	push   %ebp
 82e6589:	89 e5                	mov    %esp,%ebp
 82e658b:	83 ec 28             	sub    $0x28,%esp
 82e658e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e6591:	89 04 24             	mov    %eax,(%esp)
 82e6594:	e8 d1 9e 00 00       	call   82f046a <_ZN11pvp_assault7Point2dC1Ev>
 82e6599:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e65a0:	eb 3a                	jmp    82e65dc <_ZN11pvp_assault18CStaticDisposition13SetVirtualMapEPSt6vectorI7MapAreaSaIS2_EE+0x54>
 82e65a2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e65a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e65a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e65ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e65b0:	8b 45 08             	mov    0x8(%ebp),%eax
 82e65b3:	89 04 24             	mov    %eax,(%esp)
 82e65b6:	e8 37 ff ff ff       	call   82e64f2 <_ZN11pvp_assault18CStaticDisposition12_CheckMatrixEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE>
 82e65bb:	84 c0                	test   %al,%al
 82e65bd:	74 07                	je     82e65c6 <_ZN11pvp_assault18CStaticDisposition13SetVirtualMapEPSt6vectorI7MapAreaSaIS2_EE+0x3e>
 82e65bf:	b8 01 00 00 00       	mov    $0x1,%eax
 82e65c4:	eb 26                	jmp    82e65ec <_ZN11pvp_assault18CStaticDisposition13SetVirtualMapEPSt6vectorI7MapAreaSaIS2_EE+0x64>
 82e65c6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e65c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e65cd:	8b 45 08             	mov    0x8(%ebp),%eax
 82e65d0:	89 04 24             	mov    %eax,(%esp)
 82e65d3:	e8 c0 fe ff ff       	call   82e6498 <_ZN11pvp_assault18CStaticDisposition11_MoveMatrixERKNS_7Point2dE>
 82e65d8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e65dc:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 82e65e0:	0f 9e c0             	setle  %al
 82e65e3:	84 c0                	test   %al,%al
 82e65e5:	75 bb                	jne    82e65a2 <_ZN11pvp_assault18CStaticDisposition13SetVirtualMapEPSt6vectorI7MapAreaSaIS2_EE+0x1a>
 82e65e7:	b8 00 00 00 00       	mov    $0x0,%eax
 82e65ec:	c9                   	leave
 82e65ed:	c3                   	ret

```

```c
// pvp_assault::CStaticDisposition::SetVirtualMap @ 0x82e6588

/* pvp_assault::CStaticDisposition::SetVirtualMap(std::vector<MapArea, std::allocator<MapArea> >*)
    */

undefined4 __thiscall
pvp_assault::CStaticDisposition::SetVirtualMap(CStaticDisposition *this,vector *param_1)

{
  char cVar1;
  Point2d local_18 [8];
  int local_10;
  
  Point2d::Point2d(local_18);
  local_10 = 0;
  while( true ) {
    if (4 < local_10) {
      return 0;
    }
    cVar1 = _CheckMatrix(this,param_1,local_18);
    if (cVar1 != '\0') break;
    _MoveMatrix(this,local_18);
    local_10 = local_10 + 1;
  }
  return 1;
}

```

---

## _CheckMatrix

```asm
// === 082e64f2 pvp_assault::CStaticDisposition::_CheckMatrix  [0x082e64f2-0x82e6587] ===
 82e64f2:	55                   	push   %ebp
 82e64f3:	89 e5                	mov    %esp,%ebp
 82e64f5:	53                   	push   %ebx
 82e64f6:	83 ec 34             	sub    $0x34,%esp
 82e64f9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e6500:	eb 3d                	jmp    82e653f <_ZN11pvp_assault18CStaticDisposition12_CheckMatrixEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE+0x4d>
 82e6502:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e6505:	89 d0                	mov    %edx,%eax
 82e6507:	01 c0                	add    %eax,%eax
 82e6509:	01 d0                	add    %edx,%eax
 82e650b:	c1 e0 02             	shl    $0x2,%eax
 82e650e:	83 c0 10             	add    $0x10,%eax
 82e6511:	03 45 08             	add    0x8(%ebp),%eax
 82e6514:	8d 50 04             	lea    0x4(%eax),%edx
 82e6517:	8b 45 10             	mov    0x10(%ebp),%eax
 82e651a:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e651e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6521:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6525:	89 14 24             	mov    %edx,(%esp)
 82e6528:	e8 21 f6 ff ff       	call   82e5b4e <_ZN11pvp_assault12CExtraMatrix10CheckPointEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE>
 82e652d:	83 f0 01             	xor    $0x1,%eax
 82e6530:	84 c0                	test   %al,%al
 82e6532:	74 07                	je     82e653b <_ZN11pvp_assault18CStaticDisposition12_CheckMatrixEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE+0x49>
 82e6534:	b8 00 00 00 00       	mov    $0x0,%eax
 82e6539:	eb 47                	jmp    82e6582 <_ZN11pvp_assault18CStaticDisposition12_CheckMatrixEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE+0x90>
 82e653b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e653f:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 82e6543:	0f 9e c0             	setle  %al
 82e6546:	84 c0                	test   %al,%al
 82e6548:	75 b8                	jne    82e6502 <_ZN11pvp_assault18CStaticDisposition12_CheckMatrixEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE+0x10>
 82e654a:	8b 45 10             	mov    0x10(%ebp),%eax
 82e654d:	8d 58 04             	lea    0x4(%eax),%ebx
 82e6550:	8b 4d 10             	mov    0x10(%ebp),%ecx
 82e6553:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6556:	8b 50 10             	mov    0x10(%eax),%edx
 82e6559:	8b 45 08             	mov    0x8(%ebp),%eax
 82e655c:	8b 40 0c             	mov    0xc(%eax),%eax
 82e655f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82e6566:	00 
 82e6567:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 82e656b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 82e656f:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e6573:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6577:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e657a:	89 04 24             	mov    %eax,(%esp)
 82e657d:	e8 89 f4 ff ff       	call   82e5a0b <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i>
 82e6582:	83 c4 34             	add    $0x34,%esp
 82e6585:	5b                   	pop    %ebx
 82e6586:	5d                   	pop    %ebp
 82e6587:	c3                   	ret

```

```c
// pvp_assault::CStaticDisposition::_CheckMatrix @ 0x82e64f2

/* pvp_assault::CStaticDisposition::_CheckMatrix(std::vector<MapArea, std::allocator<MapArea> >*,
   pvp_assault::Point2d&) */

undefined4 __thiscall
pvp_assault::CStaticDisposition::_CheckMatrix
          (CStaticDisposition *this,vector *param_1,Point2d *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (1 < local_10) {
      uVar2 = IsIncludeVirtualMoveAreas
                        (param_1,*(int *)(this + 0xc),*(int *)(this + 0x10),(int *)param_2,
                         (int *)(param_2 + 4),0);
      return uVar2;
    }
    cVar1 = CExtraMatrix::CheckPoint((CExtraMatrix *)(this + local_10 * 0xc + 0x14),param_1,param_2)
    ;
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  return 0;
}

```

---

## _MoveMatrix

```asm
// === 082e6498 pvp_assault::CStaticDisposition::_MoveMatrix  [0x082e6498-0x82e64f1] ===
 82e6498:	55                   	push   %ebp
 82e6499:	89 e5                	mov    %esp,%ebp
 82e649b:	83 ec 28             	sub    $0x28,%esp
 82e649e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e64a5:	eb 28                	jmp    82e64cf <_ZN11pvp_assault18CStaticDisposition11_MoveMatrixERKNS_7Point2dE+0x37>
 82e64a7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e64aa:	89 d0                	mov    %edx,%eax
 82e64ac:	01 c0                	add    %eax,%eax
 82e64ae:	01 d0                	add    %edx,%eax
 82e64b0:	c1 e0 02             	shl    $0x2,%eax
 82e64b3:	83 c0 10             	add    $0x10,%eax
 82e64b6:	03 45 08             	add    0x8(%ebp),%eax
 82e64b9:	8d 50 04             	lea    0x4(%eax),%edx
 82e64bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e64bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e64c3:	89 14 24             	mov    %edx,(%esp)
 82e64c6:	e8 b1 f4 ff ff       	call   82e597c <_ZN11pvp_assault12CExtraMatrix9MovePointERKNS_7Point2dE>
 82e64cb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e64cf:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 82e64d3:	0f 9e c0             	setle  %al
 82e64d6:	84 c0                	test   %al,%al
 82e64d8:	75 cd                	jne    82e64a7 <_ZN11pvp_assault18CStaticDisposition11_MoveMatrixERKNS_7Point2dE+0xf>
 82e64da:	8b 45 08             	mov    0x8(%ebp),%eax
 82e64dd:	8d 50 0c             	lea    0xc(%eax),%edx
 82e64e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e64e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e64e7:	89 14 24             	mov    %edx,(%esp)
 82e64ea:	e8 d1 9f 00 00       	call   82f04c0 <_ZN11pvp_assault7Point2dpLERKS0_>
 82e64ef:	c9                   	leave
 82e64f0:	c3                   	ret
 82e64f1:	90                   	nop

```

```c
// pvp_assault::CStaticDisposition::_MoveMatrix @ 0x82e6498

/* pvp_assault::CStaticDisposition::_MoveMatrix(pvp_assault::Point2d const&) */

void __thiscall
pvp_assault::CStaticDisposition::_MoveMatrix(CStaticDisposition *this,Point2d *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    CExtraMatrix::MovePoint((CExtraMatrix *)(this + local_10 * 0xc + 0x14),param_1);
  }
  Point2d::operator+=((Point2d *)(this + 0xc),param_1);
  return;
}

```

