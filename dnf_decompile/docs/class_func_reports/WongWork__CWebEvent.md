# WongWork__CWebEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## GetItemType

```asm
// === 086c1aba WongWork::CWebEvent::GetItemType  [0x086c1aba-0x86c1ba7] ===
 86c1aba:	55                   	push   %ebp
 86c1abb:	89 e5                	mov    %esp,%ebp
 86c1abd:	83 ec 10             	sub    $0x10,%esp
 86c1ac0:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86c1ac7:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
 86c1acb:	0f 85 91 00 00 00    	jne    86c1b62 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xa8>
 86c1ad1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c1ad4:	3d 68 ae 00 00       	cmp    $0xae68,%eax
 86c1ad9:	74 62                	je     86c1b3d <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x83>
 86c1adb:	3d 68 ae 00 00       	cmp    $0xae68,%eax
 86c1ae0:	7f 2d                	jg     86c1b0f <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x55>
 86c1ae2:	3d 9d 65 00 00       	cmp    $0x659d,%eax
 86c1ae7:	74 66                	je     86c1b4f <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x95>
 86c1ae9:	3d 9d 65 00 00       	cmp    $0x659d,%eax
 86c1aee:	7f 0c                	jg     86c1afc <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x42>
 86c1af0:	3d e7 03 00 00       	cmp    $0x3e7,%eax
 86c1af5:	74 62                	je     86c1b59 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x9f>
 86c1af7:	e9 a6 00 00 00       	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1afc:	3d d0 9e 00 00       	cmp    $0x9ed0,%eax
 86c1b01:	74 3a                	je     86c1b3d <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x83>
 86c1b03:	3d 60 a0 00 00       	cmp    $0xa060,%eax
 86c1b08:	74 3c                	je     86c1b46 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x8c>
 86c1b0a:	e9 93 00 00 00       	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b0f:	3d 9c bf 00 00       	cmp    $0xbf9c,%eax
 86c1b14:	74 30                	je     86c1b46 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x8c>
 86c1b16:	3d 9c bf 00 00       	cmp    $0xbf9c,%eax
 86c1b1b:	7f 10                	jg     86c1b2d <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x73>
 86c1b1d:	3d f8 af 00 00       	cmp    $0xaff8,%eax
 86c1b22:	74 22                	je     86c1b46 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x8c>
 86c1b24:	3d 0c be 00 00       	cmp    $0xbe0c,%eax
 86c1b29:	74 12                	je     86c1b3d <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x83>
 86c1b2b:	eb 75                	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b2d:	3d 81 cd 00 00       	cmp    $0xcd81,%eax
 86c1b32:	74 09                	je     86c1b3d <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x83>
 86c1b34:	3d 11 cf 00 00       	cmp    $0xcf11,%eax
 86c1b39:	74 0b                	je     86c1b46 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0x8c>
 86c1b3b:	eb 65                	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b3d:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 86c1b44:	eb 5c                	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b46:	c7 45 fc 02 00 00 00 	movl   $0x2,-0x4(%ebp)
 86c1b4d:	eb 53                	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b4f:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
 86c1b56:	90                   	nop
 86c1b57:	eb 49                	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b59:	c7 45 fc 04 00 00 00 	movl   $0x4,-0x4(%ebp)
 86c1b60:	eb 40                	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b62:	83 7d 08 03          	cmpl   $0x3,0x8(%ebp)
 86c1b66:	75 22                	jne    86c1b8a <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xd0>
 86c1b68:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c1b6b:	83 f8 08             	cmp    $0x8,%eax
 86c1b6e:	74 11                	je     86c1b81 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xc7>
 86c1b70:	3d 9e 65 00 00       	cmp    $0x659e,%eax
 86c1b75:	75 2a                	jne    86c1ba1 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe7>
 86c1b77:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 86c1b7e:	90                   	nop
 86c1b7f:	eb 21                	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b81:	c7 45 fc 02 00 00 00 	movl   $0x2,-0x4(%ebp)
 86c1b88:	eb 18                	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b8a:	83 7d 08 03          	cmpl   $0x3,0x8(%ebp)
 86c1b8e:	75 12                	jne    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b90:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c1b93:	83 f8 01             	cmp    $0x1,%eax
 86c1b96:	75 0a                	jne    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1b98:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 86c1b9f:	eb 01                	jmp    86c1ba2 <_ZN8WongWork9CWebEvent11GetItemTypeEii+0xe8>
 86c1ba1:	90                   	nop
 86c1ba2:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86c1ba5:	c9                   	leave
 86c1ba6:	c3                   	ret
 86c1ba7:	90                   	nop

```

```c
// WongWork::CWebEvent::GetItemType @ 0x86c1aba

/* WongWork::CWebEvent::GetItemType(int, int) */

undefined4 WongWork::CWebEvent::GetItemType(int param_1,int param_2)

{
  if (param_1 != 2) {
    if (param_1 != 3) {
      if (param_1 != 3) {
        return 0;
      }
      if (param_2 == 1) {
        return 1;
      }
      return 0;
    }
    if (param_2 == 8) {
      return 2;
    }
    if (param_2 == 0x659e) {
      return 1;
    }
    return 0;
  }
  if (param_2 == 0xae68) {
    return 1;
  }
  if (param_2 < 0xae69) {
    if (param_2 == 0x659d) {
      return 3;
    }
    if (param_2 < 0x659e) {
      if (param_2 == 999) {
        return 4;
      }
      return 0;
    }
    if (param_2 == 0x9ed0) {
      return 1;
    }
    if (param_2 != 0xa060) {
      return 0;
    }
  }
  else if (param_2 != 0xbf9c) {
    if (param_2 < 0xbf9d) {
      if (param_2 != 0xaff8) {
        if (param_2 == 0xbe0c) {
          return 1;
        }
        return 0;
      }
    }
    else {
      if (param_2 == 0xcd81) {
        return 1;
      }
      if (param_2 != 0xcf11) {
        return 0;
      }
    }
  }
  return 2;
}

```

---

## RecvInfoFromDB

```asm
// === 086c121e WongWork::CWebEvent::RecvInfoFromDB  [0x086c121e-0x86c190f] ===
 86c121e:	55                   	push   %ebp
 86c121f:	89 e5                	mov    %esp,%ebp
 86c1221:	57                   	push   %edi
 86c1222:	56                   	push   %esi
 86c1223:	53                   	push   %ebx
 86c1224:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 86c122a:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 86c122e:	0f 85 86 00 00 00    	jne    86c12ba <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x9c>
 86c1234:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1237:	89 04 24             	mov    %eax,(%esp)
 86c123a:	e8 3f 90 a1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86c123f:	89 04 24             	mov    %eax,(%esp)
 86c1242:	e8 33 fa a4 ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 86c1247:	89 c3                	mov    %eax,%ebx
 86c1249:	03 5d 10             	add    0x10(%ebp),%ebx
 86c124c:	8b 45 08             	mov    0x8(%ebp),%eax
 86c124f:	89 04 24             	mov    %eax,(%esp)
 86c1252:	e8 37 90 a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86c1257:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86c125b:	89 04 24             	mov    %eax,(%esp)
 86c125e:	e8 23 fa a4 ff       	call   8110c86 <_ZN10CInventory12SetEventCoinEj>
 86c1263:	8b 5d 10             	mov    0x10(%ebp),%ebx
 86c1266:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1269:	89 04 24             	mov    %eax,(%esp)
 86c126c:	e8 0d 90 a1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86c1271:	89 04 24             	mov    %eax,(%esp)
 86c1274:	e8 01 fa a4 ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 86c1279:	8b 55 08             	mov    0x8(%ebp),%edx
 86c127c:	81 c2 00 97 07 00    	add    $0x79700,%edx
 86c1282:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 86c1289:	00 
 86c128a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86c128e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1292:	89 14 24             	mov    %edx,(%esp)
 86c1295:	e8 be 29 fc ff       	call   8683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>
 86c129a:	8b 45 08             	mov    0x8(%ebp),%eax
 86c129d:	89 04 24             	mov    %eax,(%esp)
 86c12a0:	e8 33 f2 f8 ff       	call   86504d8 <_ZN5CUser13SaveMoneyCoinEv>
 86c12a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86c12a8:	89 04 24             	mov    %eax,(%esp)
 86c12ab:	e8 58 55 f9 ff       	call   8656808 <_ZN5CUser8SendCoinEv>
 86c12b0:	bb 01 00 00 00       	mov    $0x1,%ebx
 86c12b5:	e9 48 06 00 00       	jmp    86c1902 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x6e4>
 86c12ba:	81 7d 0c e7 03 00 00 	cmpl   $0x3e7,0xc(%ebp)
 86c12c1:	0f 85 63 01 00 00    	jne    86c142a <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x20c>
 86c12c7:	8b 45 10             	mov    0x10(%ebp),%eax
 86c12ca:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86c12ce:	c7 44 24 08 21 a7 cf 	movl   $0x8cfa721,0x8(%esp)
 86c12d5:	08 
 86c12d6:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 86c12dd:	00 
 86c12de:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86c12e1:	89 04 24             	mov    %eax,(%esp)
 86c12e4:	e8 33 b5 ec ff       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 86c12e9:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 86c12ee:	c7 44 24 08 47 00 00 	movl   $0x47,0x8(%esp)
 86c12f5:	00 
 86c12f6:	c7 44 24 04 24 a7 cf 	movl   $0x8cfa724,0x4(%esp)
 86c12fd:	08 
 86c12fe:	89 04 24             	mov    %eax,(%esp)
 86c1301:	e8 80 e7 bc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 86c1306:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c130d:	00 
 86c130e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1312:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86c1315:	89 04 24             	mov    %eax,(%esp)
 86c1318:	e8 09 79 a0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 86c131d:	8b 5d 14             	mov    0x14(%ebp),%ebx
 86c1320:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86c1323:	89 04 24             	mov    %eax,(%esp)
 86c1326:	e8 1b 79 a0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86c132b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86c132f:	89 04 24             	mov    %eax,(%esp)
 86c1332:	e8 1f 79 a0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86c1337:	8b 5d 18             	mov    0x18(%ebp),%ebx
 86c133a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86c133d:	89 04 24             	mov    %eax,(%esp)
 86c1340:	e8 01 79 a0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86c1345:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86c1349:	89 04 24             	mov    %eax,(%esp)
 86c134c:	e8 05 79 a0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86c1351:	8b 45 14             	mov    0x14(%ebp),%eax
 86c1354:	89 04 24             	mov    %eax,(%esp)
 86c1357:	e8 78 08 00 00       	call   86c1bd4 <_ZN8WongWork9CWebEvent16_GetEventIPGCodeEi>
 86c135c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86c135f:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 86c1363:	75 1e                	jne    86c1383 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x165>
 86c1365:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 86c136a:	8d 55 a0             	lea    -0x60(%ebp),%edx
 86c136d:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c1371:	89 04 24             	mov    %eax,(%esp)
 86c1374:	e8 07 fd a3 ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 86c1379:	bb 01 00 00 00       	mov    $0x1,%ebx
 86c137e:	e9 97 00 00 00       	jmp    86c141a <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x1fc>
 86c1383:	a1 34 f7 41 09       	mov    0x941f734,%eax
 86c1388:	8b 00                	mov    (%eax),%eax
 86c138a:	8b 00                	mov    (%eax),%eax
 86c138c:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 86c1392:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86c1395:	89 04 24             	mov    %eax,(%esp)
 86c1398:	e8 5d fc a3 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 86c139d:	89 c7                	mov    %eax,%edi
 86c139f:	8b 45 08             	mov    0x8(%ebp),%eax
 86c13a2:	89 04 24             	mov    %eax,(%esp)
 86c13a5:	e8 7e fc a3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 86c13aa:	89 c6                	mov    %eax,%esi
 86c13ac:	8b 45 14             	mov    0x14(%ebp),%eax
 86c13af:	89 04 24             	mov    %eax,(%esp)
 86c13b2:	e8 f1 07 00 00       	call   86c1ba8 <_ZN8WongWork9CWebEvent15_GetEventStringEi>
 86c13b7:	89 c3                	mov    %eax,%ebx
 86c13b9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86c13bc:	89 04 24             	mov    %eax,(%esp)
 86c13bf:	e8 14 63 df ff       	call   84b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>
 86c13c4:	8b 15 34 f7 41 09    	mov    0x941f734,%edx
 86c13ca:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 86c13ce:	89 74 24 18          	mov    %esi,0x18(%esp)
 86c13d2:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86c13d6:	89 44 24 10          	mov    %eax,0x10(%esp)
 86c13da:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86c13dd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86c13e1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86c13e4:	89 44 24 08          	mov    %eax,0x8(%esp)
 86c13e8:	8b 45 08             	mov    0x8(%ebp),%eax
 86c13eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c13ef:	89 14 24             	mov    %edx,(%esp)
 86c13f2:	ff 95 14 ff ff ff    	call   *-0xec(%ebp)
 86c13f8:	bb 00 00 00 00       	mov    $0x0,%ebx
 86c13fd:	eb 1b                	jmp    86c141a <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x1fc>
 86c13ff:	89 d3                	mov    %edx,%ebx
 86c1401:	89 c6                	mov    %eax,%esi
 86c1403:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86c1406:	89 04 24             	mov    %eax,(%esp)
 86c1409:	e8 c4 b4 f5 ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 86c140e:	89 f0                	mov    %esi,%eax
 86c1410:	89 da                	mov    %ebx,%edx
 86c1412:	89 04 24             	mov    %eax,(%esp)
 86c1415:	e8 36 23 42 00       	call   8ae3750 <_Unwind_Resume>
 86c141a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86c141d:	89 04 24             	mov    %eax,(%esp)
 86c1420:	e8 ad b4 f5 ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 86c1425:	e9 d8 04 00 00       	jmp    86c1902 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x6e4>
 86c142a:	8b 75 0c             	mov    0xc(%ebp),%esi
 86c142d:	e8 69 ad a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86c1432:	89 74 24 04          	mov    %esi,0x4(%esp)
 86c1436:	89 04 24             	mov    %eax,(%esp)
 86c1439:	e8 f4 e5 c9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 86c143e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86c1441:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 86c1445:	75 0a                	jne    86c1451 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x233>
 86c1447:	bb 00 00 00 00       	mov    $0x0,%ebx
 86c144c:	e9 b1 04 00 00       	jmp    86c1902 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x6e4>
 86c1451:	8d 85 1b ff ff ff    	lea    -0xe5(%ebp),%eax
 86c1457:	89 04 24             	mov    %eax,(%esp)
 86c145a:	e8 f5 a3 a0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 86c145f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86c1462:	8b 00                	mov    (%eax),%eax
 86c1464:	83 c0 08             	add    $0x8,%eax
 86c1467:	8b 10                	mov    (%eax),%edx
 86c1469:	8d 85 1b ff ff ff    	lea    -0xe5(%ebp),%eax
 86c146f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1473:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86c1476:	89 04 24             	mov    %eax,(%esp)
 86c1479:	ff d2                	call   *%edx
 86c147b:	0f b6 85 1c ff ff ff 	movzbl -0xe4(%ebp),%eax
 86c1482:	3c 01                	cmp    $0x1,%al
 86c1484:	74 0b                	je     86c1491 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x273>
 86c1486:	8b 45 10             	mov    0x10(%ebp),%eax
 86c1489:	89 85 22 ff ff ff    	mov    %eax,-0xde(%ebp)
 86c148f:	eb 0f                	jmp    86c14a0 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x282>
 86c1491:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 86c1495:	76 09                	jbe    86c14a0 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x282>
 86c1497:	8b 45 10             	mov    0x10(%ebp),%eax
 86c149a:	89 85 22 ff ff ff    	mov    %eax,-0xde(%ebp)
 86c14a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c14a3:	89 85 1d ff ff ff    	mov    %eax,-0xe3(%ebp)
 86c14a9:	c7 45 cc 0d 00 00 00 	movl   $0xd,-0x34(%ebp)
 86c14b0:	81 7d 14 a1 86 01 00 	cmpl   $0x186a1,0x14(%ebp)
 86c14b7:	75 09                	jne    86c14c2 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x2a4>
 86c14b9:	c7 45 cc 0e 00 00 00 	movl   $0xe,-0x34(%ebp)
 86c14c0:	eb 10                	jmp    86c14d2 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x2b4>
 86c14c2:	81 7d 14 46 0d 03 00 	cmpl   $0x30d46,0x14(%ebp)
 86c14c9:	75 07                	jne    86c14d2 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x2b4>
 86c14cb:	c7 45 cc 14 00 00 00 	movl   $0x14,-0x34(%ebp)
 86c14d2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86c14d5:	8b 00                	mov    (%eax),%eax
 86c14d7:	83 c0 10             	add    $0x10,%eax
 86c14da:	8b 10                	mov    (%eax),%edx
 86c14dc:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86c14df:	89 04 24             	mov    %eax,(%esp)
 86c14e2:	ff d2                	call   *%edx
 86c14e4:	84 c0                	test   %al,%al
 86c14e6:	0f 84 01 01 00 00    	je     86c15ed <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x3cf>
 86c14ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c14ef:	89 04 24             	mov    %eax,(%esp)
 86c14f2:	e8 37 05 00 00       	call   86c1a2e <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi>
 86c14f7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86c14fa:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 86c1501:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 86c1508:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 86c150f:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 86c1516:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 86c151d:	8b 45 14             	mov    0x14(%ebp),%eax
 86c1520:	89 04 24             	mov    %eax,(%esp)
 86c1523:	e8 80 06 00 00       	call   86c1ba8 <_ZN8WongWork9CWebEvent15_GetEventStringEi>
 86c1528:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86c152c:	c7 44 24 08 31 a7 cf 	movl   $0x8cfa731,0x8(%esp)
 86c1533:	08 
 86c1534:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 86c153b:	00 
 86c153c:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86c153f:	89 04 24             	mov    %eax,(%esp)
 86c1542:	e8 d5 b2 ec ff       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 86c1547:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
 86c154e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86c1551:	0f be f0             	movsbl %al,%esi
 86c1554:	8b 85 1d ff ff ff    	mov    -0xe3(%ebp),%eax
 86c155a:	89 c3                	mov    %eax,%ebx
 86c155c:	8b 45 08             	mov    0x8(%ebp),%eax
 86c155f:	89 04 24             	mov    %eax,(%esp)
 86c1562:	e8 27 8d a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86c1567:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 86c156e:	00 
 86c156f:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 86c1576:	00 
 86c1577:	c7 44 24 1c 02 00 00 	movl   $0x2,0x1c(%esp)
 86c157e:	00 
 86c157f:	8d 55 8c             	lea    -0x74(%ebp),%edx
 86c1582:	89 54 24 18          	mov    %edx,0x18(%esp)
 86c1586:	c7 44 24 14 ff ff ff 	movl   $0xffffffff,0x14(%esp)
 86c158d:	ff 
 86c158e:	89 74 24 10          	mov    %esi,0x10(%esp)
 86c1592:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86c1599:	00 
 86c159a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c15a1:	00 
 86c15a2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86c15a6:	89 04 24             	mov    %eax,(%esp)
 86c15a9:	e8 f0 85 e4 ff       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 86c15ae:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86c15b1:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 86c15b5:	0f 94 c0             	sete   %al
 86c15b8:	84 c0                	test   %al,%al
 86c15ba:	74 0a                	je     86c15c6 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x3a8>
 86c15bc:	bb 00 00 00 00       	mov    $0x0,%ebx
 86c15c1:	e9 3c 03 00 00       	jmp    86c1902 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x6e4>
 86c15c6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86c15c9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86c15cd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86c15d4:	00 
 86c15d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c15dc:	00 
 86c15dd:	8b 45 08             	mov    0x8(%ebp),%eax
 86c15e0:	89 04 24             	mov    %eax,(%esp)
 86c15e3:	e8 72 b0 fb ff       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 86c15e8:	e9 10 03 00 00       	jmp    86c18fd <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x6df>
 86c15ed:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 86c15f4:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 86c15fb:	c6 45 83 00          	movb   $0x0,-0x7d(%ebp)
 86c15ff:	8b 85 1d ff ff ff    	mov    -0xe3(%ebp),%eax
 86c1605:	89 c2                	mov    %eax,%edx
 86c1607:	a1 44 f7 41 09       	mov    0x941f744,%eax
 86c160c:	8d 4d 83             	lea    -0x7d(%ebp),%ecx
 86c160f:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86c1613:	8d 4d 84             	lea    -0x7c(%ebp),%ecx
 86c1616:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86c161a:	8d 4d 88             	lea    -0x78(%ebp),%ecx
 86c161d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86c1621:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c1625:	89 04 24             	mov    %eax,(%esp)
 86c1628:	e8 f1 33 c6 ff       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 86c162d:	84 c0                	test   %al,%al
 86c162f:	0f 84 bf 01 00 00    	je     86c17f4 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x5d6>
 86c1635:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 86c163c:	00 00 00 
 86c163f:	8b 85 1d ff ff ff    	mov    -0xe3(%ebp),%eax
 86c1645:	89 c6                	mov    %eax,%esi
 86c1647:	e8 4f ab a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86c164c:	8b 40 0c             	mov    0xc(%eax),%eax
 86c164f:	89 74 24 04          	mov    %esi,0x4(%esp)
 86c1653:	89 04 24             	mov    %eax,(%esp)
 86c1656:	e8 b1 8a ab ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 86c165b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86c165e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86c1665:	e8 34 a6 a0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86c166a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86c166d:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86c1673:	89 04 24             	mov    %eax,(%esp)
 86c1676:	e8 17 96 a8 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 86c167b:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 86c1681:	89 04 24             	mov    %eax,(%esp)
 86c1684:	e8 bb 8b ab ff       	call   817a244 <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tC1Ev>
 86c1689:	8b 85 1d ff ff ff    	mov    -0xe3(%ebp),%eax
 86c168f:	89 c2                	mov    %eax,%edx
 86c1691:	a1 44 f7 41 09       	mov    0x941f744,%eax
 86c1696:	c7 44 24 30 01 00 00 	movl   $0x1,0x30(%esp)
 86c169d:	00 
 86c169e:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%esp)
 86c16a5:	00 
 86c16a6:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 86c16ad:	00 
 86c16ae:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 86c16b5:	00 
 86c16b6:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 86c16bc:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 86c16c0:	8d 8d 70 ff ff ff    	lea    -0x90(%ebp),%ecx
 86c16c6:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 86c16ca:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 86c16d1:	00 
 86c16d2:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 86c16d5:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86c16d9:	8d 8d 7c ff ff ff    	lea    -0x84(%ebp),%ecx
 86c16df:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86c16e3:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 86c16e6:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86c16ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c16ee:	8b 55 08             	mov    0x8(%ebp),%edx
 86c16f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c16f5:	89 04 24             	mov    %eax,(%esp)
 86c16f8:	e8 81 41 c6 ff       	call   832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>
 86c16fd:	84 c0                	test   %al,%al
 86c16ff:	74 7b                	je     86c177c <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x55e>
 86c1701:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 86c1707:	85 c0                	test   %eax,%eax
 86c1709:	74 0f                	je     86c171a <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x4fc>
 86c170b:	bb 00 00 00 00       	mov    $0x0,%ebx
 86c1710:	be 00 00 00 00       	mov    $0x0,%esi
 86c1715:	e9 81 00 00 00       	jmp    86c179b <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x57d>
 86c171a:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 86c171e:	74 20                	je     86c1740 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x522>
 86c1720:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86c1723:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1727:	8b 45 08             	mov    0x8(%ebp),%eax
 86c172a:	89 04 24             	mov    %eax,(%esp)
 86c172d:	e8 46 c1 f8 ff       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 86c1732:	83 f0 01             	xor    $0x1,%eax
 86c1735:	84 c0                	test   %al,%al
 86c1737:	74 07                	je     86c1740 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x522>
 86c1739:	b8 01 00 00 00       	mov    $0x1,%eax
 86c173e:	eb 05                	jmp    86c1745 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x527>
 86c1740:	b8 00 00 00 00       	mov    $0x0,%eax
 86c1745:	84 c0                	test   %al,%al
 86c1747:	74 33                	je     86c177c <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x55e>
 86c1749:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86c174c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1750:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1753:	89 04 24             	mov    %eax,(%esp)
 86c1756:	e8 f3 c0 f8 ff       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 86c175b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86c1762:	00 
 86c1763:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86c1766:	89 44 24 08          	mov    %eax,0x8(%esp)
 86c176a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86c176d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1771:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1774:	89 04 24             	mov    %eax,(%esp)
 86c1777:	e8 b4 42 c6 ff       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 86c177c:	be 01 00 00 00       	mov    $0x1,%esi
 86c1781:	eb 18                	jmp    86c179b <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x57d>
 86c1783:	89 d3                	mov    %edx,%ebx
 86c1785:	89 c6                	mov    %eax,%esi
 86c1787:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 86c178d:	89 04 24             	mov    %eax,(%esp)
 86c1790:	e8 67 8b ab ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 86c1795:	89 f0                	mov    %esi,%eax
 86c1797:	89 da                	mov    %ebx,%edx
 86c1799:	eb 20                	jmp    86c17bb <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x59d>
 86c179b:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 86c17a1:	89 04 24             	mov    %eax,(%esp)
 86c17a4:	e8 53 8b ab ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 86c17a9:	85 f6                	test   %esi,%esi
 86c17ab:	75 07                	jne    86c17b4 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x596>
 86c17ad:	be 00 00 00 00       	mov    $0x0,%esi
 86c17b2:	eb 25                	jmp    86c17d9 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x5bb>
 86c17b4:	be 01 00 00 00       	mov    $0x1,%esi
 86c17b9:	eb 1e                	jmp    86c17d9 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x5bb>
 86c17bb:	89 d3                	mov    %edx,%ebx
 86c17bd:	89 c6                	mov    %eax,%esi
 86c17bf:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86c17c5:	89 04 24             	mov    %eax,(%esp)
 86c17c8:	e8 d9 94 a8 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 86c17cd:	89 f0                	mov    %esi,%eax
 86c17cf:	89 da                	mov    %ebx,%edx
 86c17d1:	89 04 24             	mov    %eax,(%esp)
 86c17d4:	e8 77 1f 42 00       	call   8ae3750 <_Unwind_Resume>
 86c17d9:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86c17df:	89 04 24             	mov    %eax,(%esp)
 86c17e2:	e8 bf 94 a8 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 86c17e7:	85 f6                	test   %esi,%esi
 86c17e9:	0f 84 13 01 00 00    	je     86c1902 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x6e4>
 86c17ef:	e9 09 01 00 00       	jmp    86c18fd <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x6df>
 86c17f4:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%ebp)
 86c17fb:	8b 45 08             	mov    0x8(%ebp),%eax
 86c17fe:	89 04 24             	mov    %eax,(%esp)
 86c1801:	e8 88 8a a1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86c1806:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 86c180d:	00 
 86c180e:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 86c1815:	00 
 86c1816:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86c1819:	89 54 24 44          	mov    %edx,0x44(%esp)
 86c181d:	8b 95 1b ff ff ff    	mov    -0xe5(%ebp),%edx
 86c1823:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c1827:	8b 95 1f ff ff ff    	mov    -0xe1(%ebp),%edx
 86c182d:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c1831:	8b 95 23 ff ff ff    	mov    -0xdd(%ebp),%edx
 86c1837:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86c183b:	8b 95 27 ff ff ff    	mov    -0xd9(%ebp),%edx
 86c1841:	89 54 24 10          	mov    %edx,0x10(%esp)
 86c1845:	8b 95 2b ff ff ff    	mov    -0xd5(%ebp),%edx
 86c184b:	89 54 24 14          	mov    %edx,0x14(%esp)
 86c184f:	8b 95 2f ff ff ff    	mov    -0xd1(%ebp),%edx
 86c1855:	89 54 24 18          	mov    %edx,0x18(%esp)
 86c1859:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 86c185f:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 86c1863:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 86c1869:	89 54 24 20          	mov    %edx,0x20(%esp)
 86c186d:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 86c1873:	89 54 24 24          	mov    %edx,0x24(%esp)
 86c1877:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 86c187d:	89 54 24 28          	mov    %edx,0x28(%esp)
 86c1881:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 86c1887:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 86c188b:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 86c1891:	89 54 24 30          	mov    %edx,0x30(%esp)
 86c1895:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 86c189b:	89 54 24 34          	mov    %edx,0x34(%esp)
 86c189f:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 86c18a5:	89 54 24 38          	mov    %edx,0x38(%esp)
 86c18a9:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 86c18af:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 86c18b3:	0f b6 95 57 ff ff ff 	movzbl -0xa9(%ebp),%edx
 86c18ba:	88 54 24 40          	mov    %dl,0x40(%esp)
 86c18be:	89 04 24             	mov    %eax,(%esp)
 86c18c1:	e8 c0 14 e4 ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 86c18c6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86c18c9:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 86c18cd:	0f 94 c0             	sete   %al
 86c18d0:	84 c0                	test   %al,%al
 86c18d2:	74 07                	je     86c18db <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x6bd>
 86c18d4:	bb 00 00 00 00       	mov    $0x0,%ebx
 86c18d9:	eb 27                	jmp    86c1902 <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj+0x6e4>
 86c18db:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86c18de:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86c18e2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c18e9:	00 
 86c18ea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86c18f1:	00 
 86c18f2:	8b 45 08             	mov    0x8(%ebp),%eax
 86c18f5:	89 04 24             	mov    %eax,(%esp)
 86c18f8:	e8 5d ad fb ff       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 86c18fd:	bb 01 00 00 00       	mov    $0x1,%ebx
 86c1902:	89 d8                	mov    %ebx,%eax
 86c1904:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 86c190a:	5b                   	pop    %ebx
 86c190b:	5e                   	pop    %esi
 86c190c:	5f                   	pop    %edi
 86c190d:	5d                   	pop    %ebp
 86c190e:	c3                   	ret
 86c190f:	90                   	nop

```

```c
// WongWork::CWebEvent::RecvInfoFromDB @ 0x86c121e

/* WongWork::CWebEvent::RecvInfoFromDB(CUser*, unsigned int, unsigned int, unsigned int, unsigned
   int) */

uint WongWork::CWebEvent::RecvInfoFromDB
               (CUser *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  CInventory *pCVar4;
  int iVar5;
  undefined4 uVar6;
  Stream *pSVar7;
  CStreamGuard *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CDataManager *this;
  uint unaff_EBX;
  bool bVar12;
  Inven_Item local_e9;
  char cStack_e8;
  undefined4 uStack_e7;
  undefined1 uStack_e3;
  uint uStack_e2;
  undefined1 uStack_de;
  undefined4 local_dd;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined1 local_ad;
  stCeraShopItemParam_t local_ac [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_94 [12];
  int local_88;
  bool local_81;
  int local_80 [2];
  char local_78 [20];
  CStreamGuard local_64 [8];
  char local_5c [12];
  char local_50 [20];
  int *local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  long local_24;
  int local_20;
  
  if (param_2 == 1) {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar5 = CInventory::GetEventCoin(pCVar4);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::SetEventCoin(pCVar4,iVar5 + param_3);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar6 = CInventory::GetEventCoin(pCVar4);
    cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar6,param_3,2);
    CUser::SaveMoneyCoin(param_1);
    CUser::SendCoin(param_1);
    return 1;
  }
  if (param_2 == 999) {
    OS_API::snprintf(local_5c,0xc,"%d",param_3);
    pSVar7 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"WebEvent.cpp",0x47);
    CStreamGuard::CStreamGuard(local_64,pSVar7,false);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_64);
                    /* try { // try from 086c1332 to 086c13f7 has its CatchHandler @ 086c13ff */
    CStreamGuard::operator<<(pCVar8,param_4);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_64);
    CStreamGuard::operator<<(pCVar8,param_5);
    local_34 = _GetEventIPGCode(param_4);
    bVar12 = local_34 != 0;
    if (bVar12) {
      pcVar1 = *(code **)*GlobalData::s_pIPGHelper;
      uVar6 = CStreamGuard::Get(local_64);
      uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar10 = _GetEventString(param_4);
      uVar11 = CGenUniqueNo::GenUniqueNo(local_50);
      (*pcVar1)(GlobalData::s_pIPGHelper,param_1,local_34,local_5c,uVar11,uVar10,uVar9,uVar6);
    }
    else {
      StreamPool::Free(GlobalData::s_stream_pool,local_64);
    }
    CStreamGuard::~CStreamGuard(local_64);
    return (uint)!bVar12;
  }
  this = (CDataManager *)G_CDataManager();
  local_3c = (int *)CDataManager::find_item(this,param_2);
  if (local_3c == (int *)0x0) {
    return 0;
  }
  Inven_Item::Inven_Item(&local_e9);
  (**(code **)(*local_3c + 8))(local_3c,&local_e9);
  if (cStack_e8 == '\x01') {
    if (1 < param_3) {
      uStack_e2 = param_3;
    }
  }
  else {
    uStack_e2 = param_3;
  }
  local_38 = 0xd;
  if (param_4 == 0x186a1) {
    local_38 = 0xe;
  }
  else if (param_4 == 0x30d46) {
    local_38 = 0x14;
  }
  uStack_e7 = param_2;
  cVar3 = (**(code **)(*local_3c + 0x10))(local_3c);
  if (cVar3 != '\0') {
    local_30 = _GetATIAvatarAbility(param_2);
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    uVar6 = _GetEventString(param_4);
    OS_API::snprintf(local_78,0x14,"E_%s",uVar6);
    uVar2 = uStack_e7;
    local_2c = 0xffffffff;
    cVar3 = (char)local_30;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_2c = CInventory::AddAvatarItem(pCVar4,uVar2,0,0,(int)cVar3,0xffffffff,local_78,2,0,0);
    if (local_2c != -1) {
      CUser::SendUpdateItemList(param_1,1,1,local_2c);
      return 1;
    }
    return 0;
  }
  local_80[1] = 0;
  local_80[0] = 0;
  local_81 = false;
  cVar3 = CCeraShop::IsSpecialItem
                    (GlobalData::s_pCeraShop,uStack_e7,local_80 + 1,local_80,&local_81);
  uVar2 = uStack_e7;
  if (cVar3 == '\0') {
    local_20 = 0xffffffff;
    uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_20 = CInventory::insertItemIntoInventory
                         (uVar6,CONCAT22((undefined2)uStack_e7,CONCAT11(cStack_e8,local_e9)),
                          CONCAT13((undefined1)uStack_e2,CONCAT12(uStack_e3,uStack_e7._2_2_)),
                          CONCAT13(uStack_de,uStack_e2._1_3_),local_dd,local_d9,local_d5,local_d1,
                          local_cd,local_c9,local_c5,local_c1,local_bd,local_b9,local_b5,local_b1,
                          local_ad,local_38,1,0);
    if (local_20 != -1) {
      CUser::SendUpdateItemList(param_1,1,0,local_20);
      return 1;
    }
    return 0;
  }
  local_88 = 0;
  iVar5 = G_CDataManager();
  local_28 = CItemList::GetRestrictCode(*(CItemList **)(iVar5 + 0xc),uVar2);
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_94);
                    /* try { // try from 086c1684 to 086c1688 has its CatchHandler @ 086c17bb */
  CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_ac);
                    /* try { // try from 086c16f8 to 086c177b has its CatchHandler @ 086c1783 */
  cVar3 = CCeraShop::ProcessSpecialItem
                    (GlobalData::s_pCeraShop,param_1,uStack_e7,local_28,&local_88,local_24,true,
                     (vector *)local_94,local_ac,'\0','\0',false,1);
  if (cVar3 != '\0') {
    if (local_88 != 0) {
      unaff_EBX = 0;
      bVar12 = false;
      goto LAB_086c179b;
    }
    if (local_28 == 0) {
LAB_086c1740:
      bVar12 = false;
    }
    else {
      cVar3 = CUser::IsRestrictedGoods(param_1,local_28);
      if (cVar3 == '\x01') goto LAB_086c1740;
      bVar12 = true;
    }
    if (bVar12) {
      CUser::SetRestrictedGoods(param_1,local_28);
      CCeraShop::SaveFeaturedIdx(param_1,local_28,local_24,0);
    }
  }
  bVar12 = true;
LAB_086c179b:
                    /* try { // try from 086c17a4 to 086c17a8 has its CatchHandler @ 086c17bb */
  CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_ac);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_94);
  if (bVar12) {
    return 1;
  }
  return unaff_EBX;
}

```

---

## RecvInfoFromWeb

```asm
// === 086c11d0 WongWork::CWebEvent::RecvInfoFromWeb  [0x086c11d0-0x86c121d] ===
 86c11d0:	55                   	push   %ebp
 86c11d1:	89 e5                	mov    %esp,%ebp
 86c11d3:	83 ec 28             	sub    $0x28,%esp
 86c11d6:	81 7d 10 e7 03 00 00 	cmpl   $0x3e7,0x10(%ebp)
 86c11dd:	75 07                	jne    86c11e6 <_ZN8WongWork9CWebEvent15RecvInfoFromWebEjjjjjj+0x16>
 86c11df:	b8 00 00 00 00       	mov    $0x0,%eax
 86c11e4:	eb 36                	jmp    86c121c <_ZN8WongWork9CWebEvent15RecvInfoFromWebEjjjjjj+0x4c>
 86c11e6:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86c11ed:	00 
 86c11ee:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86c11f1:	89 44 24 14          	mov    %eax,0x14(%esp)
 86c11f5:	8b 45 18             	mov    0x18(%ebp),%eax
 86c11f8:	89 44 24 10          	mov    %eax,0x10(%esp)
 86c11fc:	8b 45 14             	mov    0x14(%ebp),%eax
 86c11ff:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86c1203:	8b 45 10             	mov    0x10(%ebp),%eax
 86c1206:	89 44 24 08          	mov    %eax,0x8(%esp)
 86c120a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c120d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1211:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1214:	89 04 24             	mov    %eax,(%esp)
 86c1217:	e8 f4 06 00 00       	call   86c1910 <_ZN8WongWork9CWebEvent16ReqSaveEventItemEjjjjjjb>
 86c121c:	c9                   	leave
 86c121d:	c3                   	ret

```

```c
// WongWork::CWebEvent::RecvInfoFromWeb @ 0x86c11d0

/* WongWork::CWebEvent::RecvInfoFromWeb(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int) */

undefined4
WongWork::CWebEvent::RecvInfoFromWeb
          (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  
  if (param_3 == 999) {
    uVar1 = 0;
  }
  else {
    uVar1 = ReqSaveEventItem(param_1,param_2,param_3,param_4,param_5,param_6,false);
  }
  return uVar1;
}

```

---

## ReqSaveEventItem

```asm
// === 086c1910 WongWork::CWebEvent::ReqSaveEventItem  [0x086c1910-0x86c1a2d] ===
 86c1910:	55                   	push   %ebp
 86c1911:	89 e5                	mov    %esp,%ebp
 86c1913:	56                   	push   %esi
 86c1914:	53                   	push   %ebx
 86c1915:	83 ec 30             	sub    $0x30,%esp
 86c1918:	8b 45 20             	mov    0x20(%ebp),%eax
 86c191b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 86c191e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 86c1923:	c7 44 24 08 a0 00 00 	movl   $0xa0,0x8(%esp)
 86c192a:	00 
 86c192b:	c7 44 24 04 24 a7 cf 	movl   $0x8cfa724,0x4(%esp)
 86c1932:	08 
 86c1933:	89 04 24             	mov    %eax,(%esp)
 86c1936:	e8 4b e1 bc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 86c193b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86c1942:	00 
 86c1943:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c1947:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c194a:	89 04 24             	mov    %eax,(%esp)
 86c194d:	e8 d4 72 a0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 86c1952:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c1955:	89 04 24             	mov    %eax,(%esp)
 86c1958:	e8 e9 72 a0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86c195d:	c7 44 24 04 4c 00 00 	movl   $0x4c,0x4(%esp)
 86c1964:	00 
 86c1965:	89 04 24             	mov    %eax,(%esp)
 86c1968:	e8 e9 72 a0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86c196d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c1970:	89 04 24             	mov    %eax,(%esp)
 86c1973:	e8 ce 72 a0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86c1978:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 86c197f:	ff 
 86c1980:	89 04 24             	mov    %eax,(%esp)
 86c1983:	e8 ce 72 a0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86c1988:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c198b:	89 04 24             	mov    %eax,(%esp)
 86c198e:	e8 bb 72 a0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 86c1993:	89 04 24             	mov    %eax,(%esp)
 86c1996:	e8 e3 02 00 00       	call   86c1c7e <_ZN12CStreamGuard11GetInBufferI18SIG_SAVE_EVENTITEMEEPT_v>
 86c199b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86c199e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c19a1:	8b 55 08             	mov    0x8(%ebp),%edx
 86c19a4:	89 10                	mov    %edx,(%eax)
 86c19a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c19a9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86c19ac:	89 50 04             	mov    %edx,0x4(%eax)
 86c19af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c19b2:	8b 55 10             	mov    0x10(%ebp),%edx
 86c19b5:	89 50 0c             	mov    %edx,0xc(%eax)
 86c19b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c19bb:	8b 55 14             	mov    0x14(%ebp),%edx
 86c19be:	89 50 10             	mov    %edx,0x10(%eax)
 86c19c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c19c4:	8b 55 18             	mov    0x18(%ebp),%edx
 86c19c7:	89 50 08             	mov    %edx,0x8(%eax)
 86c19ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c19cd:	8b 55 1c             	mov    0x1c(%ebp),%edx
 86c19d0:	89 50 14             	mov    %edx,0x14(%eax)
 86c19d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86c19d6:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 86c19da:	88 50 18             	mov    %dl,0x18(%eax)
 86c19dd:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 86c19e2:	8d 55 ec             	lea    -0x14(%ebp),%edx
 86c19e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c19e9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86c19f0:	00 
 86c19f1:	89 04 24             	mov    %eax,(%esp)
 86c19f4:	e8 e5 f5 ea ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 86c19f9:	bb 01 00 00 00       	mov    $0x1,%ebx
 86c19fe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c1a01:	89 04 24             	mov    %eax,(%esp)
 86c1a04:	e8 c9 ae f5 ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 86c1a09:	89 d8                	mov    %ebx,%eax
 86c1a0b:	83 c4 30             	add    $0x30,%esp
 86c1a0e:	5b                   	pop    %ebx
 86c1a0f:	5e                   	pop    %esi
 86c1a10:	5d                   	pop    %ebp
 86c1a11:	c3                   	ret
 86c1a12:	89 d3                	mov    %edx,%ebx
 86c1a14:	89 c6                	mov    %eax,%esi
 86c1a16:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86c1a19:	89 04 24             	mov    %eax,(%esp)
 86c1a1c:	e8 b1 ae f5 ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 86c1a21:	89 f0                	mov    %esi,%eax
 86c1a23:	89 da                	mov    %ebx,%edx
 86c1a25:	89 04 24             	mov    %eax,(%esp)
 86c1a28:	e8 23 1d 42 00       	call   8ae3750 <_Unwind_Resume>
 86c1a2d:	90                   	nop

```

```c
// WongWork::CWebEvent::ReqSaveEventItem @ 0x86c1910

/* WongWork::CWebEvent::ReqSaveEventItem(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, bool) */

undefined4
WongWork::CWebEvent::ReqSaveEventItem
          (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          bool param_7)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_EVENTITEM *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"WebEvent.cpp",0xa0);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 086c1968 to 086c19f8 has its CatchHandler @ 086c1a12 */
  CStreamGuard::operator<<(pCVar2,0x4c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_EVENTITEM>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(uint *)(local_10 + 0xc) = param_3;
  *(uint *)(local_10 + 0x10) = param_4;
  *(uint *)(local_10 + 8) = param_5;
  *(uint *)(local_10 + 0x14) = param_6;
  local_10[0x18] = (SIG_SAVE_EVENTITEM)param_7;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## _GetATIAvatarAbility

```asm
// === 086c1a2e WongWork::CWebEvent::_GetATIAvatarAbility  [0x086c1a2e-0x86c1ab9] ===
 86c1a2e:	55                   	push   %ebp
 86c1a2f:	89 e5                	mov    %esp,%ebp
 86c1a31:	83 ec 10             	sub    $0x10,%esp
 86c1a34:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86c1a3b:	8b 45 08             	mov    0x8(%ebp),%eax
 86c1a3e:	3d f8 af 00 00       	cmp    $0xaff8,%eax
 86c1a43:	74 69                	je     86c1aae <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x80>
 86c1a45:	3d f8 af 00 00       	cmp    $0xaff8,%eax
 86c1a4a:	7f 17                	jg     86c1a63 <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x35>
 86c1a4c:	3d 60 a0 00 00       	cmp    $0xa060,%eax
 86c1a51:	74 5b                	je     86c1aae <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x80>
 86c1a53:	3d 68 ae 00 00       	cmp    $0xae68,%eax
 86c1a58:	74 39                	je     86c1a93 <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x65>
 86c1a5a:	3d d0 9e 00 00       	cmp    $0x9ed0,%eax
 86c1a5f:	74 29                	je     86c1a8a <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x5c>
 86c1a61:	eb 52                	jmp    86c1ab5 <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x87>
 86c1a63:	3d 9c bf 00 00       	cmp    $0xbf9c,%eax
 86c1a68:	74 44                	je     86c1aae <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x80>
 86c1a6a:	3d 9c bf 00 00       	cmp    $0xbf9c,%eax
 86c1a6f:	7f 09                	jg     86c1a7a <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x4c>
 86c1a71:	3d 0c be 00 00       	cmp    $0xbe0c,%eax
 86c1a76:	74 24                	je     86c1a9c <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x6e>
 86c1a78:	eb 3b                	jmp    86c1ab5 <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x87>
 86c1a7a:	3d 81 cd 00 00       	cmp    $0xcd81,%eax
 86c1a7f:	74 24                	je     86c1aa5 <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x77>
 86c1a81:	3d 11 cf 00 00       	cmp    $0xcf11,%eax
 86c1a86:	74 26                	je     86c1aae <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x80>
 86c1a88:	eb 2b                	jmp    86c1ab5 <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x87>
 86c1a8a:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 86c1a91:	eb 22                	jmp    86c1ab5 <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x87>
 86c1a93:	c7 45 fc 06 00 00 00 	movl   $0x6,-0x4(%ebp)
 86c1a9a:	eb 19                	jmp    86c1ab5 <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x87>
 86c1a9c:	c7 45 fc 04 00 00 00 	movl   $0x4,-0x4(%ebp)
 86c1aa3:	eb 10                	jmp    86c1ab5 <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x87>
 86c1aa5:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86c1aac:	eb 07                	jmp    86c1ab5 <_ZN8WongWork9CWebEvent20_GetATIAvatarAbilityEi+0x87>
 86c1aae:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86c1ab5:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86c1ab8:	c9                   	leave
 86c1ab9:	c3                   	ret

```

```c
// WongWork::CWebEvent::_GetATIAvatarAbility @ 0x86c1a2e

/* WongWork::CWebEvent::_GetATIAvatarAbility(int) */

undefined4 WongWork::CWebEvent::_GetATIAvatarAbility(int param_1)

{
  if (param_1 != 0xaff8) {
    if (param_1 < 0xaff9) {
      if (param_1 != 0xa060) {
        if (param_1 == 0xae68) {
          return 6;
        }
        if (param_1 != 0x9ed0) {
          return 0;
        }
        return 1;
      }
    }
    else if (param_1 != 0xbf9c) {
      if (param_1 < 0xbf9d) {
        if (param_1 != 0xbe0c) {
          return 0;
        }
        return 4;
      }
      if (param_1 == 0xcd81) {
        return 0;
      }
      if (param_1 != 0xcf11) {
        return 0;
      }
    }
  }
  return 0;
}

```

---

## _GetEventIPGCode

```asm
// === 086c1bd4 WongWork::CWebEvent::_GetEventIPGCode  [0x086c1bd4-0x86c1c20] ===
 86c1bd4:	55                   	push   %ebp
 86c1bd5:	89 e5                	mov    %esp,%ebp
 86c1bd7:	83 ec 10             	sub    $0x10,%esp
 86c1bda:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86c1be1:	83 7d 08 09          	cmpl   $0x9,0x8(%ebp)
 86c1be5:	7e 05                	jle    86c1bec <_ZN8WongWork9CWebEvent16_GetEventIPGCodeEi+0x18>
 86c1be7:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86c1bea:	eb 33                	jmp    86c1c1f <_ZN8WongWork9CWebEvent16_GetEventIPGCodeEi+0x4b>
 86c1bec:	8b 55 08             	mov    0x8(%ebp),%edx
 86c1bef:	89 d0                	mov    %edx,%eax
 86c1bf1:	c1 e0 02             	shl    $0x2,%eax
 86c1bf4:	01 d0                	add    %edx,%eax
 86c1bf6:	01 c0                	add    %eax,%eax
 86c1bf8:	01 d0                	add    %edx,%eax
 86c1bfa:	0f b6 80 20 cf 3a 09 	movzbl 0x93acf20(%eax),%eax
 86c1c01:	84 c0                	test   %al,%al
 86c1c03:	75 07                	jne    86c1c0c <_ZN8WongWork9CWebEvent16_GetEventIPGCodeEi+0x38>
 86c1c05:	b8 00 00 00 00       	mov    $0x0,%eax
 86c1c0a:	eb 13                	jmp    86c1c1f <_ZN8WongWork9CWebEvent16_GetEventIPGCodeEi+0x4b>
 86c1c0c:	8b 55 08             	mov    0x8(%ebp),%edx
 86c1c0f:	89 d0                	mov    %edx,%eax
 86c1c11:	c1 e0 02             	shl    $0x2,%eax
 86c1c14:	01 d0                	add    %edx,%eax
 86c1c16:	01 c0                	add    %eax,%eax
 86c1c18:	01 d0                	add    %edx,%eax
 86c1c1a:	05 20 cf 3a 09       	add    $0x93acf20,%eax
 86c1c1f:	c9                   	leave
 86c1c20:	c3                   	ret

```

```c
// WongWork::CWebEvent::_GetEventIPGCode @ 0x86c1bd4

/* WongWork::CWebEvent::_GetEventIPGCode(int) */

undefined * WongWork::CWebEvent::_GetEventIPGCode(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 10) {
    if ((&m_strEventIPGCode)[param_1 * 0xb] == '\0') {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = &m_strEventIPGCode + param_1 * 0xb;
    }
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}

```

---

## _GetEventString

```asm
// === 086c1ba8 WongWork::CWebEvent::_GetEventString  [0x086c1ba8-0x86c1bd3] ===
 86c1ba8:	55                   	push   %ebp
 86c1ba9:	89 e5                	mov    %esp,%ebp
 86c1bab:	83 ec 10             	sub    $0x10,%esp
 86c1bae:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86c1bb5:	83 7d 08 0a          	cmpl   $0xa,0x8(%ebp)
 86c1bb9:	7e 05                	jle    86c1bc0 <_ZN8WongWork9CWebEvent15_GetEventStringEi+0x18>
 86c1bbb:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86c1bbe:	eb 11                	jmp    86c1bd1 <_ZN8WongWork9CWebEvent15_GetEventStringEi+0x29>
 86c1bc0:	8b 55 08             	mov    0x8(%ebp),%edx
 86c1bc3:	89 d0                	mov    %edx,%eax
 86c1bc5:	c1 e0 03             	shl    $0x3,%eax
 86c1bc8:	01 d0                	add    %edx,%eax
 86c1bca:	01 c0                	add    %eax,%eax
 86c1bcc:	05 60 ce 3a 09       	add    $0x93ace60,%eax
 86c1bd1:	c9                   	leave
 86c1bd2:	c3                   	ret
 86c1bd3:	90                   	nop

```

```c
// WongWork::CWebEvent::_GetEventString @ 0x86c1ba8

/* WongWork::CWebEvent::_GetEventString(int) */

undefined * WongWork::CWebEvent::_GetEventString(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0xb) {
    puVar1 = &m_strEventName + param_1 * 0x12;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}

```

