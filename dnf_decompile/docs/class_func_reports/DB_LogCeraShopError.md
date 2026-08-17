# DB_LogCeraShopError

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0844c40a DB_LogCeraShopError::dispatch  [0x0844c40a-0x844c4e1] ===
 844c40a:	55                   	push   %ebp
 844c40b:	89 e5                	mov    %esp,%ebp
 844c40d:	57                   	push   %edi
 844c40e:	56                   	push   %esi
 844c40f:	53                   	push   %ebx
 844c410:	83 ec 6c             	sub    $0x6c,%esp
 844c413:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844c418:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844c41f:	00 
 844c420:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 844c427:	00 
 844c428:	89 04 24             	mov    %eax,(%esp)
 844c42b:	e8 0e 8e fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844c430:	89 45 e0             	mov    %eax,-0x20(%ebp)
 844c433:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 844c437:	75 0a                	jne    844c443 <_ZN19DB_LogCeraShopError8dispatchEiiP6Stream+0x39>
 844c439:	b8 00 00 00 00       	mov    $0x0,%eax
 844c43e:	e9 96 00 00 00       	jmp    844c4d9 <_ZN19DB_LogCeraShopError8dispatchEiiP6Stream+0xcf>
 844c443:	8b 45 14             	mov    0x14(%ebp),%eax
 844c446:	89 04 24             	mov    %eax,(%esp)
 844c449:	e8 d0 84 00 00       	call   845491e <_ZN6Stream12GetOutBufferI22SIG_CERASHOP_ERROR_LOGEEPT_v>
 844c44e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 844c451:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 844c455:	75 07                	jne    844c45e <_ZN19DB_LogCeraShopError8dispatchEiiP6Stream+0x54>
 844c457:	b8 00 00 00 00       	mov    $0x0,%eax
 844c45c:	eb 7b                	jmp    844c4d9 <_ZN19DB_LogCeraShopError8dispatchEiiP6Stream+0xcf>
 844c45e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844c461:	8b 40 18             	mov    0x18(%eax),%eax
 844c464:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 844c467:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844c46a:	8b 78 14             	mov    0x14(%eax),%edi
 844c46d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844c470:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 844c474:	0f bf f0             	movswl %ax,%esi
 844c477:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844c47a:	8b 58 0c             	mov    0xc(%eax),%ebx
 844c47d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844c480:	8b 48 08             	mov    0x8(%eax),%ecx
 844c483:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844c486:	8b 50 04             	mov    0x4(%eax),%edx
 844c489:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844c48c:	8b 00                	mov    (%eax),%eax
 844c48e:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 844c491:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 844c494:	89 44 24 20          	mov    %eax,0x20(%esp)
 844c498:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 844c49c:	89 74 24 18          	mov    %esi,0x18(%esp)
 844c4a0:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 844c4a4:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844c4a8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844c4ac:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 844c4af:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c4b3:	c7 44 24 04 08 9a c5 	movl   $0x8c59a08,0x4(%esp)
 844c4ba:	08 
 844c4bb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c4be:	89 04 24             	mov    %eax,(%esp)
 844c4c1:	e8 fa 7c fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844c4c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c4cd:	00 
 844c4ce:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c4d1:	89 04 24             	mov    %eax,(%esp)
 844c4d4:	e8 4d 7e fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844c4d9:	83 c4 6c             	add    $0x6c,%esp
 844c4dc:	5b                   	pop    %ebx
 844c4dd:	5e                   	pop    %esi
 844c4de:	5f                   	pop    %edi
 844c4df:	5d                   	pop    %ebp
 844c4e0:	c3                   	ret
 844c4e1:	90                   	nop

```

```c
// DB_LogCeraShopError::dispatch @ 0x844c40a

/* DB_LogCeraShopError::dispatch(int, int, Stream*) */

undefined4 DB_LogCeraShopError::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  undefined4 uVar1;
  SIG_CERASHOP_ERROR_LOG *pSVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xd,0);
  if (this == (MySQL *)0x0) {
    uVar1 = 0;
  }
  else {
    pSVar2 = Stream::GetOutBuffer<SIG_CERASHOP_ERROR_LOG>(in_stack_00000010);
    if (pSVar2 == (SIG_CERASHOP_ERROR_LOG *)0x0) {
      uVar1 = 0;
    }
    else {
      MySQL::set_query(this,
                       "inSert into cerashop_err_log(m_id, charac_no, server_id, channel_no, type, err_code, goods_id, time) values (%u, %u, %u, %u, %d, %u, %d, now())"
                       ,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4),
                       *(undefined4 *)(pSVar2 + 8),*(undefined4 *)(pSVar2 + 0xc),
                       (int)*(short *)(pSVar2 + 0x10),*(undefined4 *)(pSVar2 + 0x14),
                       *(undefined4 *)(pSVar2 + 0x18));
      uVar1 = MySQL::exec(this,true);
    }
  }
  return uVar1;
}

```

