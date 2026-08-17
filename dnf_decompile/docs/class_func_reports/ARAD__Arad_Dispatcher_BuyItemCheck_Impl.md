# ARAD__Arad_Dispatcher_BuyItemCheck_Impl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Arad_Dispatcher_BuyItemCheck_Impl

```asm
// === 0818e9cc ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl  [0x0818e9cc-0x818e9ef] ===
 818e9cc:	55                   	push   %ebp
 818e9cd:	89 e5                	mov    %esp,%ebp
 818e9cf:	83 ec 18             	sub    $0x18,%esp
 818e9d2:	8b 45 08             	mov    0x8(%ebp),%eax
 818e9d5:	c7 44 24 04 fa 01 00 	movl   $0x1fa,0x4(%esp)
 818e9dc:	00 
 818e9dd:	89 04 24             	mov    %eax,(%esp)
 818e9e0:	e8 eb 03 00 00       	call   818edd0 <_ZN4ARAD15Arad_DispatcherC1Ei>
 818e9e5:	8b 45 08             	mov    0x8(%ebp),%eax
 818e9e8:	c7 00 20 81 b9 08    	movl   $0x8b98120,(%eax)
 818e9ee:	c9                   	leave
 818e9ef:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl @ 0x818e9cc

/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl
          (Arad_Dispatcher_BuyItemCheck_Impl *this)

{
  Arad_Dispatcher::Arad_Dispatcher((Arad_Dispatcher *)this,0x1fa);
  *(undefined ***)this = &PTR__Arad_Dispatcher_BuyItemCheck_Impl_08b98120;
  return;
}

```

---

## db_dispatch

```asm
// === 0818eb0c ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch  [0x0818eb0c-0x818ed73] ===
 818eb0c:	55                   	push   %ebp
 818eb0d:	89 e5                	mov    %esp,%ebp
 818eb0f:	56                   	push   %esi
 818eb10:	53                   	push   %ebx
 818eb11:	83 ec 60             	sub    $0x60,%esp
 818eb14:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818eb19:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818eb20:	00 
 818eb21:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 818eb28:	00 
 818eb29:	89 04 24             	mov    %eax,(%esp)
 818eb2c:	e8 0d 67 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818eb31:	89 45 ec             	mov    %eax,-0x14(%ebp)
 818eb34:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818eb37:	83 c0 0c             	add    $0xc,%eax
 818eb3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 818eb3e:	8b 45 14             	mov    0x14(%ebp),%eax
 818eb41:	89 04 24             	mov    %eax,(%esp)
 818eb44:	e8 4d dc 48 00       	call   861c796 <_ZN6StreamrsERj>
 818eb49:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818eb4c:	83 c0 08             	add    $0x8,%eax
 818eb4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 818eb53:	8b 45 14             	mov    0x14(%ebp),%eax
 818eb56:	89 04 24             	mov    %eax,(%esp)
 818eb59:	e8 38 dc 48 00       	call   861c796 <_ZN6StreamrsERj>
 818eb5e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818eb61:	83 c0 10             	add    $0x10,%eax
 818eb64:	89 44 24 04          	mov    %eax,0x4(%esp)
 818eb68:	8b 45 14             	mov    0x14(%ebp),%eax
 818eb6b:	89 04 24             	mov    %eax,(%esp)
 818eb6e:	e8 23 dc 48 00       	call   861c796 <_ZN6StreamrsERj>
 818eb73:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818eb76:	83 c0 02             	add    $0x2,%eax
 818eb79:	89 44 24 04          	mov    %eax,0x4(%esp)
 818eb7d:	8b 45 14             	mov    0x14(%ebp),%eax
 818eb80:	89 04 24             	mov    %eax,(%esp)
 818eb83:	e8 ca d9 48 00       	call   861c552 <_ZN6StreamrsERs>
 818eb88:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818eb8b:	83 c0 04             	add    $0x4,%eax
 818eb8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 818eb92:	8b 45 14             	mov    0x14(%ebp),%eax
 818eb95:	89 04 24             	mov    %eax,(%esp)
 818eb98:	e8 b5 d9 48 00       	call   861c552 <_ZN6StreamrsERs>
 818eb9d:	8b 45 14             	mov    0x14(%ebp),%eax
 818eba0:	89 04 24             	mov    %eax,(%esp)
 818eba3:	e8 40 02 00 00       	call   818ede8 <_ZN6Stream12GetOutBufferI21MSG_BUY_CERASHOP_ITEMEEPT_v>
 818eba8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 818ebab:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 818ebaf:	75 56                	jne    818ec07 <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6Stream+0xfb>
 818ebb1:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 818ebb5:	0f bf d8             	movswl %ax,%ebx
 818ebb8:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 818ebbb:	8b 55 e0             	mov    -0x20(%ebp),%edx
 818ebbe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 818ebc1:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 818ebc5:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 818ebc9:	89 54 24 18          	mov    %edx,0x18(%esp)
 818ebcd:	89 44 24 14          	mov    %eax,0x14(%esp)
 818ebd1:	c7 44 24 10 80 73 b9 	movl   $0x8b97380,0x10(%esp)
 818ebd8:	08 
 818ebd9:	c7 44 24 0c 66 00 00 	movl   $0x66,0xc(%esp)
 818ebe0:	00 
 818ebe1:	c7 44 24 08 60 80 b9 	movl   $0x8b98060,0x8(%esp)
 818ebe8:	08 
 818ebe9:	c7 44 24 04 4c 73 b9 	movl   $0x8b9734c,0x4(%esp)
 818ebf0:	08 
 818ebf1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818ebf8:	e8 0d 50 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818ebfd:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 818ec02:	e9 64 01 00 00       	jmp    818ed6b <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6Stream+0x25f>
 818ec07:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818ec0a:	89 04 24             	mov    %eax,(%esp)
 818ec0d:	e8 99 e3 ff ff       	call   818cfab <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE>
 818ec12:	85 c0                	test   %eax,%eax
 818ec14:	0f 95 c0             	setne  %al
 818ec17:	84 c0                	test   %al,%al
 818ec19:	74 0a                	je     818ec25 <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6Stream+0x119>
 818ec1b:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 818ec20:	e9 46 01 00 00       	jmp    818ed6b <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6Stream+0x25f>
 818ec25:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 818ec2a:	c7 44 24 08 71 00 00 	movl   $0x71,0x8(%esp)
 818ec31:	00 
 818ec32:	c7 44 24 04 4c 73 b9 	movl   $0x8b9734c,0x4(%esp)
 818ec39:	08 
 818ec3a:	89 04 24             	mov    %eax,(%esp)
 818ec3d:	e8 44 0e 10 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 818ec42:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 818ec49:	00 
 818ec4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 818ec4e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818ec51:	89 04 24             	mov    %eax,(%esp)
 818ec54:	e8 cd 9f f3 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 818ec59:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818ec5c:	89 04 24             	mov    %eax,(%esp)
 818ec5f:	e8 e2 9f f3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 818ec64:	8b 55 0c             	mov    0xc(%ebp),%edx
 818ec67:	89 54 24 04          	mov    %edx,0x4(%esp)
 818ec6b:	89 04 24             	mov    %eax,(%esp)
 818ec6e:	e8 e3 9f f3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 818ec73:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818ec76:	89 04 24             	mov    %eax,(%esp)
 818ec79:	e8 c8 9f f3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 818ec7e:	8b 55 10             	mov    0x10(%ebp),%edx
 818ec81:	89 54 24 04          	mov    %edx,0x4(%esp)
 818ec85:	89 04 24             	mov    %eax,(%esp)
 818ec88:	e8 c9 9f f3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 818ec8d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818ec90:	89 04 24             	mov    %eax,(%esp)
 818ec93:	e8 b6 9f f3 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 818ec98:	89 04 24             	mov    %eax,(%esp)
 818ec9b:	e8 9c 01 00 00       	call   818ee3c <_ZN12CStreamGuard11GetInBufferIN4ARAD15INTERNAL_PACKET20PURCHASE_COUNT_CHECKEEEPT_v>
 818eca0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818eca3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818eca7:	75 53                	jne    818ecfc <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6Stream+0x1f0>
 818eca9:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 818ecad:	0f bf d8             	movswl %ax,%ebx
 818ecb0:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 818ecb3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 818ecb6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 818ecb9:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 818ecbd:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 818ecc1:	89 54 24 18          	mov    %edx,0x18(%esp)
 818ecc5:	89 44 24 14          	mov    %eax,0x14(%esp)
 818ecc9:	c7 44 24 10 e0 73 b9 	movl   $0x8b973e0,0x10(%esp)
 818ecd0:	08 
 818ecd1:	c7 44 24 0c 7b 00 00 	movl   $0x7b,0xc(%esp)
 818ecd8:	00 
 818ecd9:	c7 44 24 08 60 80 b9 	movl   $0x8b98060,0x8(%esp)
 818ece0:	08 
 818ece1:	c7 44 24 04 4c 73 b9 	movl   $0x8b9734c,0x4(%esp)
 818ece8:	08 
 818ece9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818ecf0:	e8 15 4f 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818ecf5:	bb 00 00 00 00       	mov    $0x0,%ebx
 818ecfa:	eb 64                	jmp    818ed60 <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6Stream+0x254>
 818ecfc:	0f b6 55 d8          	movzbl -0x28(%ebp),%edx
 818ed00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818ed03:	88 10                	mov    %dl,(%eax)
 818ed05:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818ed08:	8d 50 01             	lea    0x1(%eax),%edx
 818ed0b:	c7 44 24 08 84 3f 00 	movl   $0x3f84,0x8(%esp)
 818ed12:	00 
 818ed13:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818ed16:	89 44 24 04          	mov    %eax,0x4(%esp)
 818ed1a:	89 14 24             	mov    %edx,(%esp)
 818ed1d:	e8 7e eb ee ff       	call   807d8a0 <memcpy@plt>
 818ed22:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 818ed27:	8d 55 d0             	lea    -0x30(%ebp),%edx
 818ed2a:	89 54 24 08          	mov    %edx,0x8(%esp)
 818ed2e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818ed35:	00 
 818ed36:	89 04 24             	mov    %eax,(%esp)
 818ed39:	e8 a0 22 3e 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 818ed3e:	bb 00 00 00 00       	mov    $0x0,%ebx
 818ed43:	eb 1b                	jmp    818ed60 <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6Stream+0x254>
 818ed45:	89 d3                	mov    %edx,%ebx
 818ed47:	89 c6                	mov    %eax,%esi
 818ed49:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818ed4c:	89 04 24             	mov    %eax,(%esp)
 818ed4f:	e8 7e db 48 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 818ed54:	89 f0                	mov    %esi,%eax
 818ed56:	89 da                	mov    %ebx,%edx
 818ed58:	89 04 24             	mov    %eax,(%esp)
 818ed5b:	e8 f0 49 95 00       	call   8ae3750 <_Unwind_Resume>
 818ed60:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818ed63:	89 04 24             	mov    %eax,(%esp)
 818ed66:	e8 67 db 48 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 818ed6b:	89 d8                	mov    %ebx,%eax
 818ed6d:	83 c4 60             	add    $0x60,%esp
 818ed70:	5b                   	pop    %ebx
 818ed71:	5e                   	pop    %esi
 818ed72:	5d                   	pop    %ebp
 818ed73:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch @ 0x818eb0c

/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch(int, int, Stream*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch
          (Arad_Dispatcher_BuyItemCheck_Impl *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  CStreamGuard local_34 [8];
  PURCHASE_COUNT_CHECK local_2c [2];
  short local_2a;
  short asStack_28 [2];
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  MSG_BUY_CERASHOP_ITEM *local_14;
  PURCHASE_COUNT_CHECK *local_10;
  
  local_18 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,7,0);
  Stream::operator>>(param_3,&local_20);
  Stream::operator>>(param_3,&local_24);
  Stream::operator>>(param_3,&local_1c);
  Stream::operator>>(param_3,&local_2a);
  Stream::operator>>(param_3,asStack_28);
  local_14 = Stream::GetOutBuffer<MSG_BUY_CERASHOP_ITEM>(param_3);
  if (local_14 == (MSG_BUY_CERASHOP_ITEM *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",
               "virtual int ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch(int, int, Stream*)"
               ,0x66,
               "[ERROR] MSG_BUY_CERASHOP_ITEM GetOutBuffer => MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]"
               ,local_20,local_24,local_1c,(int)local_2a);
    uVar4 = 0xffffffff;
  }
  else {
    iVar1 = DATABASE::ITEM_QUERY::arad_sp_buy_item_check((BuyItemInfo *)local_2c);
    if (iVar1 == 0) {
      pSVar2 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,
                                   "localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",0x71);
      CStreamGuard::CStreamGuard(local_34,pSVar2,true);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0818ec6e to 0818ed3d has its CatchHandler @ 0818ed45 */
      CStreamGuard::operator<<(pCVar3,param_1);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_34);
      CStreamGuard::operator<<(pCVar3,param_2);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
      local_10 = CStreamGuard::GetInBuffer<ARAD::INTERNAL_PACKET::PURCHASE_COUNT_CHECK>(pCVar3);
      if (local_10 == (PURCHASE_COUNT_CHECK *)0x0) {
        LogManager::logFormat
                  (1,"localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",
                   "virtual int ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch(int, int, Stream*)"
                   ,0x7b,
                   "ITEM_PURCHASE_COUNT_CHECK MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",
                   local_20,local_24,local_1c,(int)local_2a);
      }
      else {
        *local_10 = local_2c[0];
        memcpy(local_10 + 1,local_14,0x3f84);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
      }
      uVar4 = 0;
      CStreamGuard::~CStreamGuard(local_34);
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}

```

---

## inter_dispatch

```asm
// === 0818ea3e ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch  [0x0818ea3e-0x818eb0b] ===
 818ea3e:	55                   	push   %ebp
 818ea3f:	89 e5                	mov    %esp,%ebp
 818ea41:	83 ec 38             	sub    $0x38,%esp
 818ea44:	8b 45 10             	mov    0x10(%ebp),%eax
 818ea47:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818ea4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818ea4d:	0f b6 00             	movzbl (%eax),%eax
 818ea50:	83 f0 01             	xor    $0x1,%eax
 818ea53:	84 c0                	test   %al,%al
 818ea55:	74 4b                	je     818eaa2 <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl14inter_dispatchEP5CUserPci+0x64>
 818ea57:	a1 44 f7 41 09       	mov    0x941f744,%eax
 818ea5c:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 818ea63:	00 
 818ea64:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 818ea6b:	00 
 818ea6c:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 818ea73:	00 
 818ea74:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 818ea7b:	00 
 818ea7c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 818ea83:	00 
 818ea84:	c7 44 24 08 74 00 00 	movl   $0x74,0x8(%esp)
 818ea8b:	00 
 818ea8c:	8b 55 0c             	mov    0xc(%ebp),%edx
 818ea8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 818ea93:	89 04 24             	mov    %eax,(%esp)
 818ea96:	e8 dd 4e 19 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 818ea9b:	b8 00 00 00 00       	mov    $0x0,%eax
 818eaa0:	eb 67                	jmp    818eb09 <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl14inter_dispatchEP5CUserPci+0xcb>
 818eaa2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818eaa5:	8d 50 01             	lea    0x1(%eax),%edx
 818eaa8:	a1 60 f7 41 09       	mov    0x941f760,%eax
 818eaad:	89 54 24 08          	mov    %edx,0x8(%esp)
 818eab1:	8b 55 0c             	mov    0xc(%ebp),%edx
 818eab4:	89 54 24 04          	mov    %edx,0x4(%esp)
 818eab8:	89 04 24             	mov    %eax,(%esp)
 818eabb:	e8 10 da 3b 00       	call   854c4d0 <_ZN18ItemVendingMachine7BuyItemEP5CUserRK21MSG_BUY_CERASHOP_ITEM>
 818eac0:	83 f0 01             	xor    $0x1,%eax
 818eac3:	84 c0                	test   %al,%al
 818eac5:	74 3d                	je     818eb04 <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl14inter_dispatchEP5CUserPci+0xc6>
 818eac7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818eaca:	8b 40 3a             	mov    0x3a(%eax),%eax
 818eacd:	89 44 24 14          	mov    %eax,0x14(%esp)
 818ead1:	c7 44 24 10 20 73 b9 	movl   $0x8b97320,0x10(%esp)
 818ead8:	08 
 818ead9:	c7 44 24 0c 40 00 00 	movl   $0x40,0xc(%esp)
 818eae0:	00 
 818eae1:	c7 44 24 08 c0 80 b9 	movl   $0x8b980c0,0x8(%esp)
 818eae8:	08 
 818eae9:	c7 44 24 04 4c 73 b9 	movl   $0x8b9734c,0x4(%esp)
 818eaf0:	08 
 818eaf1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818eaf8:	e8 0d 51 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818eafd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818eb02:	eb 05                	jmp    818eb09 <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl14inter_dispatchEP5CUserPci+0xcb>
 818eb04:	b8 00 00 00 00       	mov    $0x0,%eax
 818eb09:	c9                   	leave
 818eb0a:	c3                   	ret
 818eb0b:	90                   	nop

```

```c
// ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch @ 0x818ea3e

/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch(CUser*, char*, int) */

undefined4
ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)param_3 == '\x01') {
    cVar1 = ItemVendingMachine::BuyItem
                      (GlobalData::s_pItemVendingMachine,(CUser *)param_2,
                       (MSG_BUY_CERASHOP_ITEM *)(param_3 + 1));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      LogManager::logFormat
                (1,"localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",
                 "virtual int ARAD::Arad_Dispatcher_BuyItemCheck_Impl::inter_dispatch(CUser*, char*, int)"
                 ,0x40,"[ERROR] BuyItem() Result Error ItemIdx(%d)",*(undefined4 *)(param_3 + 0x3a))
      ;
      uVar2 = 0xffffffff;
    }
  }
  else {
    WongWork::CCeraShop::ProcessError(GlobalData::s_pCeraShop,(CUser *)param_2,0x74,0,0,1,1,'\0');
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ~Arad_Dispatcher_BuyItemCheck_Impl

```asm
// === 0818e9f0 ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl  [0x0818e9f0-0x818ea1f] ===
 818e9f0:	55                   	push   %ebp
 818e9f1:	89 e5                	mov    %esp,%ebp
 818e9f3:	83 ec 18             	sub    $0x18,%esp
 818e9f6:	8b 45 08             	mov    0x8(%ebp),%eax
 818e9f9:	c7 00 20 81 b9 08    	movl   $0x8b98120,(%eax)
 818e9ff:	8b 45 08             	mov    0x8(%ebp),%eax
 818ea02:	89 04 24             	mov    %eax,(%esp)
 818ea05:	e8 f6 fe ff ff       	call   818e900 <_ZN4ARAD15Arad_DispatcherD1Ev>
 818ea0a:	b8 00 00 00 00       	mov    $0x0,%eax
 818ea0f:	84 c0                	test   %al,%al
 818ea11:	74 0b                	je     818ea1e <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplD1Ev+0x2e>
 818ea13:	8b 45 08             	mov    0x8(%ebp),%eax
 818ea16:	89 04 24             	mov    %eax,(%esp)
 818ea19:	e8 d2 5a 59 00       	call   87244f0 <_ZdlPv>
 818ea1e:	c9                   	leave
 818ea1f:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl @ 0x818e9f0

/* WARNING: Removing unreachable block (ram,0x0818ea13) */
/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl
          (Arad_Dispatcher_BuyItemCheck_Impl *this)

{
  *(undefined ***)this = &PTR__Arad_Dispatcher_BuyItemCheck_Impl_08b98120;
  Arad_Dispatcher::~Arad_Dispatcher((Arad_Dispatcher *)this);
  return;
}

```

---

## ~Arad_Dispatcher_BuyItemCheck_Impl_0818ea20

```asm
// === 0818ea20 ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl  [0x0818ea20-0x818ea3d] ===
 818ea20:	55                   	push   %ebp
 818ea21:	89 e5                	mov    %esp,%ebp
 818ea23:	83 ec 18             	sub    $0x18,%esp
 818ea26:	8b 45 08             	mov    0x8(%ebp),%eax
 818ea29:	89 04 24             	mov    %eax,(%esp)
 818ea2c:	e8 bf ff ff ff       	call   818e9f0 <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplD1Ev>
 818ea31:	8b 45 08             	mov    0x8(%ebp),%eax
 818ea34:	89 04 24             	mov    %eax,(%esp)
 818ea37:	e8 b4 5a 59 00       	call   87244f0 <_ZdlPv>
 818ea3c:	c9                   	leave
 818ea3d:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl @ 0x818ea20

/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_BuyItemCheck_Impl::~Arad_Dispatcher_BuyItemCheck_Impl
          (Arad_Dispatcher_BuyItemCheck_Impl *this)

{
  ~Arad_Dispatcher_BuyItemCheck_Impl(this);
  operator_delete(this);
  return;
}

```

