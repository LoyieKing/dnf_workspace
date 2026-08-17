# DB_UpdateDeathTowerBestRecord

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842a11e DB_UpdateDeathTowerBestRecord::dispatch  [0x0842a11e-0x842a35d] ===
 842a11e:	55                   	push   %ebp
 842a11f:	89 e5                	mov    %esp,%ebp
 842a121:	57                   	push   %edi
 842a122:	56                   	push   %esi
 842a123:	53                   	push   %ebx
 842a124:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 842a12a:	8b 45 14             	mov    0x14(%ebp),%eax
 842a12d:	89 04 24             	mov    %eax,(%esp)
 842a130:	e8 ed 82 02 00       	call   8452422 <_ZN6Stream12GetOutBufferI34SIG_DEATH_TOWER_UPDATE_BEST_RECORDEEPT_v>
 842a135:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842a138:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842a13d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842a144:	00 
 842a145:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842a14c:	00 
 842a14d:	89 04 24             	mov    %eax,(%esp)
 842a150:	e8 e9 b0 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842a155:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842a158:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a15b:	8b 78 64             	mov    0x64(%eax),%edi
 842a15e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a161:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a165:	0f b7 c0             	movzwl %ax,%eax
 842a168:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 842a16b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a16e:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 842a172:	0f b7 c0             	movzwl %ax,%eax
 842a175:	89 45 b8             	mov    %eax,-0x48(%ebp)
 842a178:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a17b:	8b 00                	mov    (%eax),%eax
 842a17d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 842a180:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a183:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a187:	0f b7 c0             	movzwl %ax,%eax
 842a18a:	89 45 c0             	mov    %eax,-0x40(%ebp)
 842a18d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a190:	8b 40 68             	mov    0x68(%eax),%eax
 842a193:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 842a196:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a199:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a19d:	0f b7 c0             	movzwl %ax,%eax
 842a1a0:	89 45 c8             	mov    %eax,-0x38(%ebp)
 842a1a3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a1a6:	8b 70 64             	mov    0x64(%eax),%esi
 842a1a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a1ac:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a1b0:	0f b7 d8             	movzwl %ax,%ebx
 842a1b3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a1b6:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a1ba:	0f b7 c0             	movzwl %ax,%eax
 842a1bd:	6b c0 17             	imul   $0x17,%eax,%eax
 842a1c0:	89 c2                	mov    %eax,%edx
 842a1c2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a1c5:	83 c0 08             	add    $0x8,%eax
 842a1c8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842a1cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a1d0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842a1d7:	00 
 842a1d8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a1db:	89 04 24             	mov    %eax,(%esp)
 842a1de:	e8 47 a3 fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 842a1e3:	89 c2                	mov    %eax,%edx
 842a1e5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a1e8:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a1ec:	0f b7 c0             	movzwl %ax,%eax
 842a1ef:	89 7c 24 30          	mov    %edi,0x30(%esp)
 842a1f3:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 842a1f6:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 842a1fa:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 842a1fd:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 842a201:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 842a204:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 842a208:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 842a20b:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 842a20f:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 842a212:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 842a216:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 842a219:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 842a21d:	89 74 24 14          	mov    %esi,0x14(%esp)
 842a221:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842a225:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842a229:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a22d:	c7 44 24 04 2c f8 c4 	movl   $0x8c4f82c,0x4(%esp)
 842a234:	08 
 842a235:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a238:	89 04 24             	mov    %eax,(%esp)
 842a23b:	e8 80 9f fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842a240:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842a247:	00 
 842a248:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a24b:	89 04 24             	mov    %eax,(%esp)
 842a24e:	e8 d3 a0 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842a253:	83 f0 01             	xor    $0x1,%eax
 842a256:	84 c0                	test   %al,%al
 842a258:	75 11                	jne    842a26b <_ZN29DB_UpdateDeathTowerBestRecord8dispatchEiiP6Stream+0x14d>
 842a25a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a25d:	89 04 24             	mov    %eax,(%esp)
 842a260:	e8 ab a0 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842a265:	09 d0                	or     %edx,%eax
 842a267:	85 c0                	test   %eax,%eax
 842a269:	75 07                	jne    842a272 <_ZN29DB_UpdateDeathTowerBestRecord8dispatchEiiP6Stream+0x154>
 842a26b:	b8 01 00 00 00       	mov    $0x1,%eax
 842a270:	eb 05                	jmp    842a277 <_ZN29DB_UpdateDeathTowerBestRecord8dispatchEiiP6Stream+0x159>
 842a272:	b8 00 00 00 00       	mov    $0x0,%eax
 842a277:	84 c0                	test   %al,%al
 842a279:	0f 84 cf 00 00 00    	je     842a34e <_ZN29DB_UpdateDeathTowerBestRecord8dispatchEiiP6Stream+0x230>
 842a27f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a282:	8b 58 68             	mov    0x68(%eax),%ebx
 842a285:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a288:	8b 78 64             	mov    0x64(%eax),%edi
 842a28b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a28e:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a292:	0f b7 c0             	movzwl %ax,%eax
 842a295:	6b c0 17             	imul   $0x17,%eax,%eax
 842a298:	8b 55 e0             	mov    -0x20(%ebp),%edx
 842a29b:	83 c2 08             	add    $0x8,%edx
 842a29e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842a2a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 842a2a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842a2ad:	00 
 842a2ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a2b1:	89 04 24             	mov    %eax,(%esp)
 842a2b4:	e8 71 a2 fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 842a2b9:	89 c6                	mov    %eax,%esi
 842a2bb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a2be:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 842a2c2:	0f b7 c0             	movzwl %ax,%eax
 842a2c5:	89 45 cc             	mov    %eax,-0x34(%ebp)
 842a2c8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a2cb:	8b 00                	mov    (%eax),%eax
 842a2cd:	89 45 d0             	mov    %eax,-0x30(%ebp)
 842a2d0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a2d3:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a2d7:	0f b7 c0             	movzwl %ax,%eax
 842a2da:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 842a2dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a2e0:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a2e4:	0f b7 c8             	movzwl %ax,%ecx
 842a2e7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a2ea:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a2ee:	0f b7 d0             	movzwl %ax,%edx
 842a2f1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a2f4:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 842a2f8:	0f b7 c0             	movzwl %ax,%eax
 842a2fb:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 842a2ff:	89 7c 24 24          	mov    %edi,0x24(%esp)
 842a303:	89 74 24 20          	mov    %esi,0x20(%esp)
 842a307:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 842a30a:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 842a30e:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 842a311:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 842a315:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 842a318:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 842a31c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 842a320:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842a324:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a328:	c7 44 24 04 c4 f8 c4 	movl   $0x8c4f8c4,0x4(%esp)
 842a32f:	08 
 842a330:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a333:	89 04 24             	mov    %eax,(%esp)
 842a336:	e8 85 9e fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842a33b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842a342:	00 
 842a343:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a346:	89 04 24             	mov    %eax,(%esp)
 842a349:	e8 d8 9f fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842a34e:	b8 01 00 00 00       	mov    $0x1,%eax
 842a353:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 842a359:	5b                   	pop    %ebx
 842a35a:	5e                   	pop    %esi
 842a35b:	5f                   	pop    %edi
 842a35c:	5d                   	pop    %ebp
 842a35d:	c3                   	ret

```

```c
// DB_UpdateDeathTowerBestRecord::dispatch @ 0x842a11e

/* DB_UpdateDeathTowerBestRecord::dispatch(int, int, Stream*) */

undefined4 DB_UpdateDeathTowerBestRecord::dispatch(int param_1,int param_2,Stream *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  SIG_DEATH_TOWER_UPDATE_BEST_RECORD *pSVar11;
  MySQL *this;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  Stream *in_stack_00000010;
  
  pSVar11 = Stream::GetOutBuffer<SIG_DEATH_TOWER_UPDATE_BEST_RECORD>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar6 = *(undefined4 *)(pSVar11 + 100);
  uVar1 = *(ushort *)(pSVar11 + 6);
  uVar2 = *(ushort *)(pSVar11 + 4);
  uVar7 = *(undefined4 *)pSVar11;
  uVar3 = *(ushort *)(pSVar11 + 6);
  uVar13 = *(undefined4 *)(pSVar11 + 0x68);
  uVar4 = *(ushort *)(pSVar11 + 6);
  uVar8 = *(undefined4 *)(pSVar11 + 100);
  uVar5 = *(ushort *)(pSVar11 + 6);
  uVar12 = MySQL::blob_to_str(this,0,pSVar11 + 8,(uint)*(ushort *)(pSVar11 + 6) * 0x17);
  MySQL::set_query(this,
                   "upDate charac_tower_record set member_info_%d=\'%s\',stage_%d=%d,play_time_%d=%d,occ_time_%d=now() where charac_no=%d and tower_index=%d and stage_%d<=%d"
                   ,(uint)*(ushort *)(pSVar11 + 6),uVar12,(uint)uVar5,uVar8,(uint)uVar4,uVar13,
                   (uint)uVar3,uVar7,(uint)uVar2,(uint)uVar1,uVar6);
  cVar10 = MySQL::exec(this,true);
  if (cVar10 == '\x01') {
    lVar14 = MySQL::getAffectedRowCount(this);
    if (lVar14 != 0) {
      bVar9 = false;
      goto LAB_0842a277;
    }
  }
  bVar9 = true;
LAB_0842a277:
  if (bVar9) {
    uVar6 = *(undefined4 *)(pSVar11 + 0x68);
    uVar7 = *(undefined4 *)(pSVar11 + 100);
    uVar13 = MySQL::blob_to_str(this,0,pSVar11 + 8,(uint)*(ushort *)(pSVar11 + 6) * 0x17);
    MySQL::set_query(this,
                     "inSert into charac_tower_record(charac_no,tower_index,member_info_%d,stage_%d,play_time_%d,occ_time_%d) values(%d,%d,\'%s\',%d,%d,now())"
                     ,(uint)*(ushort *)(pSVar11 + 6),(uint)*(ushort *)(pSVar11 + 6),
                     (uint)*(ushort *)(pSVar11 + 6),(uint)*(ushort *)(pSVar11 + 6),
                     *(undefined4 *)pSVar11,(uint)*(ushort *)(pSVar11 + 4),uVar13,uVar7,uVar6);
    MySQL::exec(this,true);
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0842a35e DB_UpdateDeathTowerBestRecord::makeRequest  [0x0842a35e-0x842a483] ===
 842a35e:	55                   	push   %ebp
 842a35f:	89 e5                	mov    %esp,%ebp
 842a361:	56                   	push   %esi
 842a362:	53                   	push   %ebx
 842a363:	83 ec 20             	sub    $0x20,%esp
 842a366:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842a36b:	c7 44 24 08 fe 6b 00 	movl   $0x6bfe,0x8(%esp)
 842a372:	00 
 842a373:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842a37a:	08 
 842a37b:	89 04 24             	mov    %eax,(%esp)
 842a37e:	e8 03 57 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842a383:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842a38a:	00 
 842a38b:	89 44 24 04          	mov    %eax,0x4(%esp)
 842a38f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842a392:	89 04 24             	mov    %eax,(%esp)
 842a395:	e8 8c e8 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842a39a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842a39d:	89 04 24             	mov    %eax,(%esp)
 842a3a0:	e8 a1 e8 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842a3a5:	c7 44 24 04 e3 00 00 	movl   $0xe3,0x4(%esp)
 842a3ac:	00 
 842a3ad:	89 04 24             	mov    %eax,(%esp)
 842a3b0:	e8 a1 e8 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842a3b5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842a3b8:	89 04 24             	mov    %eax,(%esp)
 842a3bb:	e8 86 e8 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842a3c0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842a3c7:	ff 
 842a3c8:	89 04 24             	mov    %eax,(%esp)
 842a3cb:	e8 86 e8 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842a3d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842a3d3:	89 04 24             	mov    %eax,(%esp)
 842a3d6:	e8 73 e8 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842a3db:	89 04 24             	mov    %eax,(%esp)
 842a3de:	e8 93 80 02 00       	call   8452476 <_ZN12CStreamGuard11GetInBufferI34SIG_DEATH_TOWER_UPDATE_BEST_RECORDEEPT_v>
 842a3e3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842a3e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842a3e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 842a3ec:	89 10                	mov    %edx,(%eax)
 842a3ee:	8b 45 08             	mov    0x8(%ebp),%eax
 842a3f1:	89 c2                	mov    %eax,%edx
 842a3f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842a3f6:	66 89 50 04          	mov    %dx,0x4(%eax)
 842a3fa:	8b 45 10             	mov    0x10(%ebp),%eax
 842a3fd:	0f b6 d0             	movzbl %al,%edx
 842a400:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842a403:	66 89 50 06          	mov    %dx,0x6(%eax)
 842a407:	8b 45 10             	mov    0x10(%ebp),%eax
 842a40a:	6b c0 17             	imul   $0x17,%eax,%eax
 842a40d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842a410:	83 c2 08             	add    $0x8,%edx
 842a413:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a417:	8b 45 14             	mov    0x14(%ebp),%eax
 842a41a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842a41e:	89 14 24             	mov    %edx,(%esp)
 842a421:	e8 7a 34 c5 ff       	call   807d8a0 <memcpy@plt>
 842a426:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842a429:	8b 55 18             	mov    0x18(%ebp),%edx
 842a42c:	89 50 64             	mov    %edx,0x64(%eax)
 842a42f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842a432:	8b 55 1c             	mov    0x1c(%ebp),%edx
 842a435:	89 50 68             	mov    %edx,0x68(%eax)
 842a438:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842a43d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842a440:	89 54 24 08          	mov    %edx,0x8(%esp)
 842a444:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842a44b:	00 
 842a44c:	89 04 24             	mov    %eax,(%esp)
 842a44f:	e8 8a 6b 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842a454:	eb 1b                	jmp    842a471 <_ZN29DB_UpdateDeathTowerBestRecord11makeRequestEjjjPK30stDeathTowerRecordMemberInfo_tjj+0x113>
 842a456:	89 d3                	mov    %edx,%ebx
 842a458:	89 c6                	mov    %eax,%esi
 842a45a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842a45d:	89 04 24             	mov    %eax,(%esp)
 842a460:	e8 6d 24 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842a465:	89 f0                	mov    %esi,%eax
 842a467:	89 da                	mov    %ebx,%edx
 842a469:	89 04 24             	mov    %eax,(%esp)
 842a46c:	e8 df 92 6b 00       	call   8ae3750 <_Unwind_Resume>
 842a471:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842a474:	89 04 24             	mov    %eax,(%esp)
 842a477:	e8 56 24 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842a47c:	83 c4 20             	add    $0x20,%esp
 842a47f:	5b                   	pop    %ebx
 842a480:	5e                   	pop    %esi
 842a481:	5d                   	pop    %ebp
 842a482:	c3                   	ret
 842a483:	90                   	nop

```

```c
// DB_UpdateDeathTowerBestRecord::makeRequest @ 0x842a35e

/* DB_UpdateDeathTowerBestRecord::makeRequest(unsigned int, unsigned int, unsigned int,
   stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int) */

void DB_UpdateDeathTowerBestRecord::makeRequest
               (uint param_1,uint param_2,uint param_3,stDeathTowerRecordMemberInfo_t *param_4,
               uint param_5,uint param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_DEATH_TOWER_UPDATE_BEST_RECORD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6bfe);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842a3b0 to 0842a453 has its CatchHandler @ 0842a456 */
  CStreamGuard::operator<<(pCVar2,0xe3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_DEATH_TOWER_UPDATE_BEST_RECORD>(pCVar2);
  *(uint *)local_10 = param_2;
  *(short *)(local_10 + 4) = (short)param_1;
  *(ushort *)(local_10 + 6) = (ushort)param_3 & 0xff;
  memcpy(local_10 + 8,param_4,param_3 * 0x17);
  *(uint *)(local_10 + 100) = param_5;
  *(uint *)(local_10 + 0x68) = param_6;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

