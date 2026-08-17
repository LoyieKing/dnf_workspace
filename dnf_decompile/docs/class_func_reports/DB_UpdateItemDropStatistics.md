# DB_UpdateItemDropStatistics

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084285ae DB_UpdateItemDropStatistics::dispatch  [0x084285ae-0x842894b] ===
 84285ae:	55                   	push   %ebp
 84285af:	89 e5                	mov    %esp,%ebp
 84285b1:	57                   	push   %edi
 84285b2:	56                   	push   %esi
 84285b3:	53                   	push   %ebx
 84285b4:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 84285ba:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84285bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84285c6:	00 
 84285c7:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84285ce:	00 
 84285cf:	89 04 24             	mov    %eax,(%esp)
 84285d2:	e8 67 cc fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84285d7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84285da:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84285e1:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84285e8:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84285eb:	b9 00 00 00 00       	mov    $0x0,%ecx
 84285f0:	b8 18 00 00 00       	mov    $0x18,%eax
 84285f5:	89 c3                	mov    %eax,%ebx
 84285f7:	83 e3 fc             	and    $0xfffffffc,%ebx
 84285fa:	b8 00 00 00 00       	mov    $0x0,%eax
 84285ff:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 8428602:	83 c0 04             	add    $0x4,%eax
 8428605:	39 d8                	cmp    %ebx,%eax
 8428607:	72 f6                	jb     84285ff <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0x51>
 8428609:	01 c2                	add    %eax,%edx
 842860b:	8d 55 9c             	lea    -0x64(%ebp),%edx
 842860e:	b9 00 00 00 00       	mov    $0x0,%ecx
 8428613:	b8 18 00 00 00       	mov    $0x18,%eax
 8428618:	89 c3                	mov    %eax,%ebx
 842861a:	83 e3 fc             	and    $0xfffffffc,%ebx
 842861d:	b8 00 00 00 00       	mov    $0x0,%eax
 8428622:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 8428625:	83 c0 04             	add    $0x4,%eax
 8428628:	39 d8                	cmp    %ebx,%eax
 842862a:	72 f6                	jb     8428622 <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0x74>
 842862c:	01 c2                	add    %eax,%edx
 842862e:	8d 55 84             	lea    -0x7c(%ebp),%edx
 8428631:	b9 00 00 00 00       	mov    $0x0,%ecx
 8428636:	b8 18 00 00 00       	mov    $0x18,%eax
 842863b:	89 c3                	mov    %eax,%ebx
 842863d:	83 e3 fc             	and    $0xfffffffc,%ebx
 8428640:	b8 00 00 00 00       	mov    $0x0,%eax
 8428645:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 8428648:	83 c0 04             	add    $0x4,%eax
 842864b:	39 d8                	cmp    %ebx,%eax
 842864d:	72 f6                	jb     8428645 <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0x97>
 842864f:	01 c2                	add    %eax,%edx
 8428651:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 8428657:	b9 00 00 00 00       	mov    $0x0,%ecx
 842865c:	b8 18 00 00 00       	mov    $0x18,%eax
 8428661:	89 c3                	mov    %eax,%ebx
 8428663:	83 e3 fc             	and    $0xfffffffc,%ebx
 8428666:	b8 00 00 00 00       	mov    $0x0,%eax
 842866b:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 842866e:	83 c0 04             	add    $0x4,%eax
 8428671:	39 d8                	cmp    %ebx,%eax
 8428673:	72 f6                	jb     842866b <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0xbd>
 8428675:	01 c2                	add    %eax,%edx
 8428677:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842867a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842867e:	8b 45 14             	mov    0x14(%ebp),%eax
 8428681:	89 04 24             	mov    %eax,(%esp)
 8428684:	e8 3b 3f 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8428689:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842868c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428690:	8b 45 14             	mov    0x14(%ebp),%eax
 8428693:	89 04 24             	mov    %eax,(%esp)
 8428696:	e8 29 3f 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 842869b:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84286a2:	eb 1e                	jmp    84286c2 <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0x114>
 84286a4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84286a7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84286aa:	c1 e2 02             	shl    $0x2,%edx
 84286ad:	01 d0                	add    %edx,%eax
 84286af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84286b3:	8b 45 14             	mov    0x14(%ebp),%eax
 84286b6:	89 04 24             	mov    %eax,(%esp)
 84286b9:	e8 d8 40 1f 00       	call   861c796 <_ZN6StreamrsERj>
 84286be:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 84286c2:	83 7d d8 05          	cmpl   $0x5,-0x28(%ebp)
 84286c6:	0f 9e c0             	setle  %al
 84286c9:	84 c0                	test   %al,%al
 84286cb:	75 d7                	jne    84286a4 <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0xf6>
 84286cd:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84286d4:	eb 1e                	jmp    84286f4 <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0x146>
 84286d6:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84286d9:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84286dc:	c1 e2 02             	shl    $0x2,%edx
 84286df:	01 d0                	add    %edx,%eax
 84286e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84286e5:	8b 45 14             	mov    0x14(%ebp),%eax
 84286e8:	89 04 24             	mov    %eax,(%esp)
 84286eb:	e8 a6 40 1f 00       	call   861c796 <_ZN6StreamrsERj>
 84286f0:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84286f4:	83 7d dc 05          	cmpl   $0x5,-0x24(%ebp)
 84286f8:	0f 9e c0             	setle  %al
 84286fb:	84 c0                	test   %al,%al
 84286fd:	75 d7                	jne    84286d6 <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0x128>
 84286ff:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8428706:	eb 1e                	jmp    8428726 <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0x178>
 8428708:	8b 55 e0             	mov    -0x20(%ebp),%edx
 842870b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 842870e:	c1 e2 02             	shl    $0x2,%edx
 8428711:	01 d0                	add    %edx,%eax
 8428713:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428717:	8b 45 14             	mov    0x14(%ebp),%eax
 842871a:	89 04 24             	mov    %eax,(%esp)
 842871d:	e8 74 40 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8428722:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8428726:	83 7d e0 05          	cmpl   $0x5,-0x20(%ebp)
 842872a:	0f 9e c0             	setle  %al
 842872d:	84 c0                	test   %al,%al
 842872f:	75 d7                	jne    8428708 <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0x15a>
 8428731:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8428738:	eb 21                	jmp    842875b <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0x1ad>
 842873a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842873d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8428743:	c1 e2 02             	shl    $0x2,%edx
 8428746:	01 d0                	add    %edx,%eax
 8428748:	89 44 24 04          	mov    %eax,0x4(%esp)
 842874c:	8b 45 14             	mov    0x14(%ebp),%eax
 842874f:	89 04 24             	mov    %eax,(%esp)
 8428752:	e8 3f 40 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8428757:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 842875b:	83 7d e4 05          	cmpl   $0x5,-0x1c(%ebp)
 842875f:	0f 9e c0             	setle  %al
 8428762:	84 c0                	test   %al,%al
 8428764:	75 d4                	jne    842873a <_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream+0x18c>
 8428766:	8b 55 80             	mov    -0x80(%ebp),%edx
 8428769:	8b 9d 7c ff ff ff    	mov    -0x84(%ebp),%ebx
 842876f:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 8428775:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 842877b:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 8428781:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8428787:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 842878d:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8428793:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 8428799:	8b 45 98             	mov    -0x68(%ebp),%eax
 842879c:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 84287a2:	8b 45 94             	mov    -0x6c(%ebp),%eax
 84287a5:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 84287ab:	8b 45 90             	mov    -0x70(%ebp),%eax
 84287ae:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 84287b4:	8b 45 8c             	mov    -0x74(%ebp),%eax
 84287b7:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 84287bd:	8b 45 88             	mov    -0x78(%ebp),%eax
 84287c0:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 84287c6:	8b 45 84             	mov    -0x7c(%ebp),%eax
 84287c9:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 84287cf:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84287d2:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 84287d8:	8b 45 ac             	mov    -0x54(%ebp),%eax
 84287db:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 84287e1:	8b 45 a8             	mov    -0x58(%ebp),%eax
 84287e4:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 84287ea:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84287ed:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 84287f3:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84287f6:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 84287fc:	8b 45 9c             	mov    -0x64(%ebp),%eax
 84287ff:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8428805:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8428808:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 842880e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8428811:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 8428817:	8b 45 c0             	mov    -0x40(%ebp),%eax
 842881a:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 8428820:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8428823:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 8428829:	8b 45 b8             	mov    -0x48(%ebp),%eax
 842882c:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8428832:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 8428835:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 8428838:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842883b:	89 54 24 6c          	mov    %edx,0x6c(%esp)
 842883f:	89 5c 24 68          	mov    %ebx,0x68(%esp)
 8428843:	89 7c 24 64          	mov    %edi,0x64(%esp)
 8428847:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 842884d:	89 54 24 60          	mov    %edx,0x60(%esp)
 8428851:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
 8428857:	89 54 24 5c          	mov    %edx,0x5c(%esp)
 842885b:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 8428861:	89 54 24 58          	mov    %edx,0x58(%esp)
 8428865:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 842886b:	89 54 24 54          	mov    %edx,0x54(%esp)
 842886f:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 8428875:	89 54 24 50          	mov    %edx,0x50(%esp)
 8428879:	8b 95 2c ff ff ff    	mov    -0xd4(%ebp),%edx
 842887f:	89 54 24 4c          	mov    %edx,0x4c(%esp)
 8428883:	8b 95 30 ff ff ff    	mov    -0xd0(%ebp),%edx
 8428889:	89 54 24 48          	mov    %edx,0x48(%esp)
 842888d:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 8428893:	89 54 24 44          	mov    %edx,0x44(%esp)
 8428897:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 842889d:	89 54 24 40          	mov    %edx,0x40(%esp)
 84288a1:	8b 95 3c ff ff ff    	mov    -0xc4(%ebp),%edx
 84288a7:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 84288ab:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 84288b1:	89 54 24 38          	mov    %edx,0x38(%esp)
 84288b5:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 84288bb:	89 54 24 34          	mov    %edx,0x34(%esp)
 84288bf:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 84288c5:	89 54 24 30          	mov    %edx,0x30(%esp)
 84288c9:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 84288cf:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 84288d3:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 84288d9:	89 54 24 28          	mov    %edx,0x28(%esp)
 84288dd:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 84288e3:	89 54 24 24          	mov    %edx,0x24(%esp)
 84288e7:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 84288ed:	89 54 24 20          	mov    %edx,0x20(%esp)
 84288f1:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 84288f7:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84288fb:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 8428901:	89 54 24 18          	mov    %edx,0x18(%esp)
 8428905:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 842890b:	89 54 24 14          	mov    %edx,0x14(%esp)
 842890f:	89 74 24 10          	mov    %esi,0x10(%esp)
 8428913:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8428917:	89 44 24 08          	mov    %eax,0x8(%esp)
 842891b:	c7 44 24 04 34 f0 c4 	movl   $0x8c4f034,0x4(%esp)
 8428922:	08 
 8428923:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8428926:	89 04 24             	mov    %eax,(%esp)
 8428929:	e8 92 b8 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842892e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8428935:	00 
 8428936:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8428939:	89 04 24             	mov    %eax,(%esp)
 842893c:	e8 e5 b9 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8428941:	81 c4 4c 01 00 00    	add    $0x14c,%esp
 8428947:	5b                   	pop    %ebx
 8428948:	5e                   	pop    %esi
 8428949:	5f                   	pop    %edi
 842894a:	5d                   	pop    %ebp
 842894b:	c3                   	ret

```

```c
// DB_UpdateItemDropStatistics::dispatch @ 0x84285ae

/* DB_UpdateItemDropStatistics::dispatch(int, int, Stream*) */

void DB_UpdateItemDropStatistics::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  Stream *in_stack_00000010;
  uint local_98 [6];
  uint local_80 [6];
  uint local_68 [6];
  uint local_50 [6];
  int local_38;
  int local_34;
  MySQL *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_30 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_34 = 0;
  local_38 = 0;
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_50 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_68 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_80 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_98 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  Stream::operator>>(in_stack_00000010,&local_34);
  Stream::operator>>(in_stack_00000010,&local_38);
  for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
    Stream::operator>>(in_stack_00000010,local_50 + local_2c);
  }
  for (local_28 = 0; local_28 < 6; local_28 = local_28 + 1) {
    Stream::operator>>(in_stack_00000010,local_68 + local_28);
  }
  for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
    Stream::operator>>(in_stack_00000010,local_80 + local_24);
  }
  for (local_20 = 0; local_20 < 6; local_20 = local_20 + 1) {
    Stream::operator>>(in_stack_00000010,local_98 + local_20);
  }
  MySQL::set_query(local_30,
                   "inSert into log_item_drop(occ_date,channel_no,drop_type,stackable_common,stackable_uncommon,stackable_rare,stackable_unique,stackable_epic,stackable_chronicle,equip_common,equip_uncommon,equip_rare,equip_unique,equip_epic,equip_chronicle,recipe_common,recipe_uncommon,recipe_rare,recipe_unique,recipe_epic,recipe_chronicle,artifact_common,artifact_uncommon,artifact_rare,artifact_unique,artifact_epic,artifact_chronicle) values(cast(now() as date),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)"
                   ,local_34,local_38,local_50[0],local_50[1],local_50[2],local_50[3],local_50[4],
                   local_50[5],local_68[0],local_68[1],local_68[2],local_68[3],local_68[4],
                   local_68[5],local_80[0],local_80[1],local_80[2],local_80[3],local_80[4],
                   local_80[5],local_98[0],local_98[1],local_98[2],local_98[3],local_98[4],
                   local_98[5]);
  MySQL::exec(local_30,true);
  return;
}

```

---

## makeRequest

```asm
// === 0842894c DB_UpdateItemDropStatistics::makeRequest  [0x0842894c-0x8428b25] ===
 842894c:	55                   	push   %ebp
 842894d:	89 e5                	mov    %esp,%ebp
 842894f:	56                   	push   %esi
 8428950:	53                   	push   %ebx
 8428951:	83 ec 30             	sub    $0x30,%esp
 8428954:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8428959:	c7 44 24 08 14 6a 00 	movl   $0x6a14,0x8(%esp)
 8428960:	00 
 8428961:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8428968:	08 
 8428969:	89 04 24             	mov    %eax,(%esp)
 842896c:	e8 15 71 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8428971:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8428978:	00 
 8428979:	89 44 24 04          	mov    %eax,0x4(%esp)
 842897d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8428980:	89 04 24             	mov    %eax,(%esp)
 8428983:	e8 9e 02 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8428988:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842898b:	89 04 24             	mov    %eax,(%esp)
 842898e:	e8 b3 02 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8428993:	c7 44 24 04 d2 00 00 	movl   $0xd2,0x4(%esp)
 842899a:	00 
 842899b:	89 04 24             	mov    %eax,(%esp)
 842899e:	e8 b3 02 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84289a3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84289a6:	89 04 24             	mov    %eax,(%esp)
 84289a9:	e8 98 02 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84289ae:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84289b5:	ff 
 84289b6:	89 04 24             	mov    %eax,(%esp)
 84289b9:	e8 98 02 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84289be:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84289c1:	89 04 24             	mov    %eax,(%esp)
 84289c4:	e8 7d 02 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84289c9:	8b 55 08             	mov    0x8(%ebp),%edx
 84289cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84289d0:	89 04 24             	mov    %eax,(%esp)
 84289d3:	e8 7e 02 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84289d8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84289db:	89 04 24             	mov    %eax,(%esp)
 84289de:	e8 63 02 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84289e3:	8b 55 0c             	mov    0xc(%ebp),%edx
 84289e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84289ea:	89 04 24             	mov    %eax,(%esp)
 84289ed:	e8 64 02 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84289f2:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84289f9:	eb 26                	jmp    8428a21 <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_+0xd5>
 84289fb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84289fe:	c1 e0 02             	shl    $0x2,%eax
 8428a01:	03 45 10             	add    0x10(%ebp),%eax
 8428a04:	8b 18                	mov    (%eax),%ebx
 8428a06:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8428a09:	89 04 24             	mov    %eax,(%esp)
 8428a0c:	e8 35 02 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8428a11:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8428a15:	89 04 24             	mov    %eax,(%esp)
 8428a18:	e8 75 98 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8428a1d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8428a21:	83 7d e8 05          	cmpl   $0x5,-0x18(%ebp)
 8428a25:	0f 9e c0             	setle  %al
 8428a28:	84 c0                	test   %al,%al
 8428a2a:	75 cf                	jne    84289fb <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_+0xaf>
 8428a2c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8428a33:	eb 26                	jmp    8428a5b <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_+0x10f>
 8428a35:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8428a38:	c1 e0 02             	shl    $0x2,%eax
 8428a3b:	03 45 14             	add    0x14(%ebp),%eax
 8428a3e:	8b 18                	mov    (%eax),%ebx
 8428a40:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8428a43:	89 04 24             	mov    %eax,(%esp)
 8428a46:	e8 fb 01 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8428a4b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8428a4f:	89 04 24             	mov    %eax,(%esp)
 8428a52:	e8 3b 98 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8428a57:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8428a5b:	83 7d ec 05          	cmpl   $0x5,-0x14(%ebp)
 8428a5f:	0f 9e c0             	setle  %al
 8428a62:	84 c0                	test   %al,%al
 8428a64:	75 cf                	jne    8428a35 <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_+0xe9>
 8428a66:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8428a6d:	eb 26                	jmp    8428a95 <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_+0x149>
 8428a6f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8428a72:	c1 e0 02             	shl    $0x2,%eax
 8428a75:	03 45 18             	add    0x18(%ebp),%eax
 8428a78:	8b 18                	mov    (%eax),%ebx
 8428a7a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8428a7d:	89 04 24             	mov    %eax,(%esp)
 8428a80:	e8 c1 01 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8428a85:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8428a89:	89 04 24             	mov    %eax,(%esp)
 8428a8c:	e8 01 98 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8428a91:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8428a95:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 8428a99:	0f 9e c0             	setle  %al
 8428a9c:	84 c0                	test   %al,%al
 8428a9e:	75 cf                	jne    8428a6f <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_+0x123>
 8428aa0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8428aa7:	eb 26                	jmp    8428acf <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_+0x183>
 8428aa9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8428aac:	c1 e0 02             	shl    $0x2,%eax
 8428aaf:	03 45 1c             	add    0x1c(%ebp),%eax
 8428ab2:	8b 18                	mov    (%eax),%ebx
 8428ab4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8428ab7:	89 04 24             	mov    %eax,(%esp)
 8428aba:	e8 87 01 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8428abf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8428ac3:	89 04 24             	mov    %eax,(%esp)
 8428ac6:	e8 c7 97 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8428acb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8428acf:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 8428ad3:	0f 9e c0             	setle  %al
 8428ad6:	84 c0                	test   %al,%al
 8428ad8:	75 cf                	jne    8428aa9 <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_+0x15d>
 8428ada:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8428adf:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8428ae2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8428ae6:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8428aed:	00 
 8428aee:	89 04 24             	mov    %eax,(%esp)
 8428af1:	e8 e8 84 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8428af6:	eb 1b                	jmp    8428b13 <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_+0x1c7>
 8428af8:	89 d3                	mov    %edx,%ebx
 8428afa:	89 c6                	mov    %eax,%esi
 8428afc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8428aff:	89 04 24             	mov    %eax,(%esp)
 8428b02:	e8 cb 3d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8428b07:	89 f0                	mov    %esi,%eax
 8428b09:	89 da                	mov    %ebx,%edx
 8428b0b:	89 04 24             	mov    %eax,(%esp)
 8428b0e:	e8 3d ac 6b 00       	call   8ae3750 <_Unwind_Resume>
 8428b13:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8428b16:	89 04 24             	mov    %eax,(%esp)
 8428b19:	e8 b4 3d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8428b1e:	83 c4 30             	add    $0x30,%esp
 8428b21:	5b                   	pop    %ebx
 8428b22:	5e                   	pop    %esi
 8428b23:	5d                   	pop    %ebp
 8428b24:	c3                   	ret
 8428b25:	90                   	nop

```

```c
// DB_UpdateItemDropStatistics::makeRequest @ 0x842894c

/* DB_UpdateItemDropStatistics::makeRequest(int, int, unsigned int*, unsigned int*, unsigned int*,
   unsigned int*) */

void DB_UpdateItemDropStatistics::makeRequest
               (int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CStreamGuard local_24 [8];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6a14);
  CStreamGuard::CStreamGuard(local_24,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0842899e to 08428af5 has its CatchHandler @ 08428af8 */
  CStreamGuard::operator<<(pCVar3,0xd2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,param_2);
  for (local_1c = 0; local_1c < 6; local_1c = local_1c + 1) {
    uVar1 = param_3[local_1c];
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,uVar1);
  }
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    uVar1 = param_4[local_18];
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,uVar1);
  }
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    uVar1 = param_5[local_14];
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,uVar1);
  }
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    uVar1 = param_6[local_10];
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,uVar1);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_24);
  CStreamGuard::~CStreamGuard(local_24);
  return;
}

```

