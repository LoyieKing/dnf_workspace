# ARAD__DISPATCHER__Arad_DB_kSaveRewardEventItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 081858de ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch  [0x081858de-0x8185abd] ===
 81858de:	55                   	push   %ebp
 81858df:	89 e5                	mov    %esp,%ebp
 81858e1:	56                   	push   %esi
 81858e2:	53                   	push   %ebx
 81858e3:	83 ec 30             	sub    $0x30,%esp
 81858e6:	8b 45 14             	mov    0x14(%ebp),%eax
 81858e9:	89 04 24             	mov    %eax,(%esp)
 81858ec:	e8 df 16 00 00       	call   8186fd0 <_ZN6Stream12GetOutBufferIN4arad22SigSaveRewardEventItemEEEPT_v>
 81858f1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81858f4:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81858f8:	75 36                	jne    8185930 <_ZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6Stream+0x52>
 81858fa:	c7 44 24 10 70 f9 b8 	movl   $0x8b8f970,0x10(%esp)
 8185901:	08 
 8185902:	c7 44 24 0c cc 07 00 	movl   $0x7cc,0xc(%esp)
 8185909:	00 
 818590a:	c7 44 24 08 40 0b b9 	movl   $0x8b90b40,0x8(%esp)
 8185911:	08 
 8185912:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8185919:	08 
 818591a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8185921:	e8 e4 e2 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8185926:	bb 00 00 00 00       	mov    $0x0,%ebx
 818592b:	e9 84 01 00 00       	jmp    8185ab4 <_ZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6Stream+0x1d6>
 8185930:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8185935:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818593c:	00 
 818593d:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8185944:	00 
 8185945:	89 04 24             	mov    %eax,(%esp)
 8185948:	e8 f1 f8 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818594d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8185950:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8185954:	75 2c                	jne    8185982 <_ZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6Stream+0xa4>
 8185956:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 818595d:	e8 9e fe 59 00       	call   8725800 <__cxa_allocate_exception>
 8185962:	89 c2                	mov    %eax,%edx
 8185964:	c7 02 f7 f7 b8 08    	movl   $0x8b8f7f7,(%edx)
 818596a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185971:	00 
 8185972:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185979:	09 
 818597a:	89 04 24             	mov    %eax,(%esp)
 818597d:	e8 ce f2 59 00       	call   8724c50 <__cxa_throw>
 8185982:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185985:	8b 70 0c             	mov    0xc(%eax),%esi
 8185988:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818598b:	8b 58 10             	mov    0x10(%eax),%ebx
 818598e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185991:	8b 48 08             	mov    0x8(%eax),%ecx
 8185994:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185997:	8b 50 04             	mov    0x4(%eax),%edx
 818599a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818599d:	8b 00                	mov    (%eax),%eax
 818599f:	89 74 24 18          	mov    %esi,0x18(%esp)
 81859a3:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81859a7:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81859ab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81859af:	89 44 24 08          	mov    %eax,0x8(%esp)
 81859b3:	c7 44 24 04 60 fa b8 	movl   $0x8b8fa60,0x4(%esp)
 81859ba:	08 
 81859bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81859be:	89 04 24             	mov    %eax,(%esp)
 81859c1:	e8 fa e7 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81859c6:	83 f0 01             	xor    $0x1,%eax
 81859c9:	84 c0                	test   %al,%al
 81859cb:	74 2c                	je     81859f9 <_ZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6Stream+0x11b>
 81859cd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81859d4:	e8 27 fe 59 00       	call   8725800 <__cxa_allocate_exception>
 81859d9:	89 c2                	mov    %eax,%edx
 81859db:	c7 02 79 f8 b8 08    	movl   $0x8b8f879,(%edx)
 81859e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81859e8:	00 
 81859e9:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 81859f0:	09 
 81859f1:	89 04 24             	mov    %eax,(%esp)
 81859f4:	e8 57 f2 59 00       	call   8724c50 <__cxa_throw>
 81859f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8185a00:	00 
 8185a01:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185a04:	89 04 24             	mov    %eax,(%esp)
 8185a07:	e8 1a e9 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 8185a0c:	83 f0 01             	xor    $0x1,%eax
 8185a0f:	84 c0                	test   %al,%al
 8185a11:	0f 84 98 00 00 00    	je     8185aaf <_ZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6Stream+0x1d1>
 8185a17:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185a1e:	e8 dd fd 59 00       	call   8725800 <__cxa_allocate_exception>
 8185a23:	89 c2                	mov    %eax,%edx
 8185a25:	c7 02 83 f8 b8 08    	movl   $0x8b8f883,(%edx)
 8185a2b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185a32:	00 
 8185a33:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185a3a:	09 
 8185a3b:	89 04 24             	mov    %eax,(%esp)
 8185a3e:	e8 0d f2 59 00       	call   8724c50 <__cxa_throw>
 8185a43:	83 fa 01             	cmp    $0x1,%edx
 8185a46:	74 08                	je     8185a50 <_ZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6Stream+0x172>
 8185a48:	89 04 24             	mov    %eax,(%esp)
 8185a4b:	e8 00 dd 95 00       	call   8ae3750 <_Unwind_Resume>
 8185a50:	89 04 24             	mov    %eax,(%esp)
 8185a53:	e8 88 02 5a 00       	call   8725ce0 <__cxa_begin_catch>
 8185a58:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8185a5b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8185a5e:	89 44 24 14          	mov    %eax,0x14(%esp)
 8185a62:	c7 44 24 10 30 fa b8 	movl   $0x8b8fa30,0x10(%esp)
 8185a69:	08 
 8185a6a:	c7 44 24 0c e1 07 00 	movl   $0x7e1,0xc(%esp)
 8185a71:	00 
 8185a72:	c7 44 24 08 40 0b b9 	movl   $0x8b90b40,0x8(%esp)
 8185a79:	08 
 8185a7a:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8185a81:	08 
 8185a82:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8185a89:	e8 7c e1 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8185a8e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8185a93:	e8 98 01 5a 00       	call   8725c30 <__cxa_end_catch>
 8185a98:	eb 1a                	jmp    8185ab4 <_ZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6Stream+0x1d6>
 8185a9a:	89 d3                	mov    %edx,%ebx
 8185a9c:	89 c6                	mov    %eax,%esi
 8185a9e:	e8 8d 01 5a 00       	call   8725c30 <__cxa_end_catch>
 8185aa3:	89 f0                	mov    %esi,%eax
 8185aa5:	89 da                	mov    %ebx,%edx
 8185aa7:	89 04 24             	mov    %eax,(%esp)
 8185aaa:	e8 a1 dc 95 00       	call   8ae3750 <_Unwind_Resume>
 8185aaf:	bb 01 00 00 00       	mov    $0x1,%ebx
 8185ab4:	89 d8                	mov    %ebx,%eax
 8185ab6:	83 c4 30             	add    $0x30,%esp
 8185ab9:	5b                   	pop    %ebx
 8185aba:	5e                   	pop    %esi
 8185abb:	5d                   	pop    %ebp
 8185abc:	c3                   	ret
 8185abd:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch @ 0x81858de

/* ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigSaveRewardEventItem *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigSaveRewardEventItem>(in_stack_00000010);
  if (pSVar2 == (SigSaveRewardEventItem *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch(int, int, Stream*)"
               ,0x7cc,"SigRewardEventItem is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 08185948 to 08185a42 has its CatchHandler @ 08185a43 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,
                             " inSert into event_reward_item_arad values (%d, %u, %u, %u, from_unixtime(%u), now())"
                             ,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4),
                             *(undefined4 *)(pSVar2 + 8),*(undefined4 *)(pSVar2 + 0x10),
                             *(undefined4 *)(pSVar2 + 0xc));
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

