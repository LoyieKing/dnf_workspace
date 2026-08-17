# LoadGeolocation

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815b010 LoadGeolocation::dispatch  [0x0815b010-0x815b265] ===
 815b010:	55                   	push   %ebp
 815b011:	89 e5                	mov    %esp,%ebp
 815b013:	56                   	push   %esi
 815b014:	53                   	push   %ebx
 815b015:	81 ec 10 03 00 00    	sub    $0x310,%esp
 815b01b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815b020:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b027:	00 
 815b028:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815b02f:	00 
 815b030:	89 04 24             	mov    %eax,(%esp)
 815b033:	e8 06 a2 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815b038:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815b03b:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 815b03f:	75 2c                	jne    815b06d <_ZN15LoadGeolocation8dispatchEiiP6Stream+0x5d>
 815b041:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b048:	e8 b3 a7 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b04d:	89 c2                	mov    %eax,%edx
 815b04f:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815b055:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b05c:	00 
 815b05d:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b064:	09 
 815b065:	89 04 24             	mov    %eax,(%esp)
 815b068:	e8 e3 9b 5c 00       	call   8724c50 <__cxa_throw>
 815b06d:	e8 0f 11 f7 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 815b072:	89 04 24             	mov    %eax,(%esp)
 815b075:	e8 66 bc fa ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 815b07a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815b07d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b080:	89 44 24 08          	mov    %eax,0x8(%esp)
 815b084:	c7 44 24 04 38 74 b7 	movl   $0x8b77438,0x4(%esp)
 815b08b:	08 
 815b08c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815b08f:	89 04 24             	mov    %eax,(%esp)
 815b092:	e8 29 91 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815b097:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815b09e:	00 
 815b09f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815b0a2:	89 04 24             	mov    %eax,(%esp)
 815b0a5:	e8 7c 92 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815b0aa:	83 f0 01             	xor    $0x1,%eax
 815b0ad:	84 c0                	test   %al,%al
 815b0af:	74 2c                	je     815b0dd <_ZN15LoadGeolocation8dispatchEiiP6Stream+0xcd>
 815b0b1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b0b8:	e8 43 a7 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b0bd:	89 c2                	mov    %eax,%edx
 815b0bf:	c7 02 77 72 b7 08    	movl   $0x8b77277,(%edx)
 815b0c5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b0cc:	00 
 815b0cd:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b0d4:	09 
 815b0d5:	89 04 24             	mov    %eax,(%esp)
 815b0d8:	e8 73 9b 5c 00       	call   8724c50 <__cxa_throw>
 815b0dd:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 815b0e4:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 815b0eb:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 815b0f2:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 815b0f9:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 815b0ff:	89 04 24             	mov    %eax,(%esp)
 815b102:	e8 95 2d 00 00       	call   815de9c <_ZN6Taiwan18SigLoadGeolocation4initEv>
 815b107:	e9 b3 00 00 00       	jmp    815b1bf <_ZN15LoadGeolocation8dispatchEiiP6Stream+0x1af>
 815b10c:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 815b113:	00 
 815b114:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815b11b:	00 
 815b11c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815b11f:	89 04 24             	mov    %eax,(%esp)
 815b122:	e8 99 2b f2 ff       	call   807dcc0 <memset@plt>
 815b127:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 815b12e:	00 
 815b12f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815b132:	89 44 24 08          	mov    %eax,0x8(%esp)
 815b136:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815b13d:	00 
 815b13e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815b141:	89 04 24             	mov    %eax,(%esp)
 815b144:	e8 a1 1c f9 ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 815b149:	83 f0 01             	xor    $0x1,%eax
 815b14c:	84 c0                	test   %al,%al
 815b14e:	74 2c                	je     815b17c <_ZN15LoadGeolocation8dispatchEiiP6Stream+0x16c>
 815b150:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b157:	e8 a4 a6 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b15c:	89 c2                	mov    %eax,%edx
 815b15e:	c7 02 7b 74 b7 08    	movl   $0x8b7747b,(%edx)
 815b164:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b16b:	00 
 815b16c:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b173:	09 
 815b174:	89 04 24             	mov    %eax,(%esp)
 815b177:	e8 d4 9a 5c 00       	call   8724c50 <__cxa_throw>
 815b17c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815b17f:	89 44 24 04          	mov    %eax,0x4(%esp)
 815b183:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 815b189:	89 04 24             	mov    %eax,(%esp)
 815b18c:	e8 3b 2d 00 00       	call   815decc <_ZN6Taiwan18SigLoadGeolocation3setEPc>
 815b191:	8b 85 08 fd ff ff    	mov    -0x2f8(%ebp),%eax
 815b197:	83 f8 2b             	cmp    $0x2b,%eax
 815b19a:	76 23                	jbe    815b1bf <_ZN15LoadGeolocation8dispatchEiiP6Stream+0x1af>
 815b19c:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 815b1a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 815b1a6:	8b 45 08             	mov    0x8(%ebp),%eax
 815b1a9:	89 04 24             	mov    %eax,(%esp)
 815b1ac:	e8 b5 00 00 00       	call   815b266 <_ZN15LoadGeolocation15sendCountryDataERN6Taiwan18SigLoadGeolocationE>
 815b1b1:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 815b1b7:	89 04 24             	mov    %eax,(%esp)
 815b1ba:	e8 dd 2c 00 00       	call   815de9c <_ZN6Taiwan18SigLoadGeolocation4initEv>
 815b1bf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815b1c2:	89 04 24             	mov    %eax,(%esp)
 815b1c5:	e8 f2 92 29 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 815b1ca:	84 c0                	test   %al,%al
 815b1cc:	0f 85 3a ff ff ff    	jne    815b10c <_ZN15LoadGeolocation8dispatchEiiP6Stream+0xfc>
 815b1d2:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 815b1d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 815b1dc:	8b 45 08             	mov    0x8(%ebp),%eax
 815b1df:	89 04 24             	mov    %eax,(%esp)
 815b1e2:	e8 7f 00 00 00       	call   815b266 <_ZN15LoadGeolocation15sendCountryDataERN6Taiwan18SigLoadGeolocationE>
 815b1e7:	bb 01 00 00 00       	mov    $0x1,%ebx
 815b1ec:	eb 6c                	jmp    815b25a <_ZN15LoadGeolocation8dispatchEiiP6Stream+0x24a>
 815b1ee:	83 fa 01             	cmp    $0x1,%edx
 815b1f1:	74 08                	je     815b1fb <_ZN15LoadGeolocation8dispatchEiiP6Stream+0x1eb>
 815b1f3:	89 04 24             	mov    %eax,(%esp)
 815b1f6:	e8 55 85 98 00       	call   8ae3750 <_Unwind_Resume>
 815b1fb:	89 04 24             	mov    %eax,(%esp)
 815b1fe:	e8 dd aa 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815b203:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815b206:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815b209:	89 44 24 14          	mov    %eax,0x14(%esp)
 815b20d:	c7 44 24 10 84 74 b7 	movl   $0x8b77484,0x10(%esp)
 815b214:	08 
 815b215:	c7 44 24 0c 3c 01 00 	movl   $0x13c,0xc(%esp)
 815b21c:	00 
 815b21d:	c7 44 24 08 20 92 b7 	movl   $0x8b79220,0x8(%esp)
 815b224:	08 
 815b225:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815b22c:	08 
 815b22d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815b234:	e8 d1 89 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815b239:	bb 00 00 00 00       	mov    $0x0,%ebx
 815b23e:	e8 ed a9 5c 00       	call   8725c30 <__cxa_end_catch>
 815b243:	eb 15                	jmp    815b25a <_ZN15LoadGeolocation8dispatchEiiP6Stream+0x24a>
 815b245:	89 d3                	mov    %edx,%ebx
 815b247:	89 c6                	mov    %eax,%esi
 815b249:	e8 e2 a9 5c 00       	call   8725c30 <__cxa_end_catch>
 815b24e:	89 f0                	mov    %esi,%eax
 815b250:	89 da                	mov    %ebx,%edx
 815b252:	89 04 24             	mov    %eax,(%esp)
 815b255:	e8 f6 84 98 00       	call   8ae3750 <_Unwind_Resume>
 815b25a:	89 d8                	mov    %ebx,%eax
 815b25c:	81 c4 10 03 00 00    	add    $0x310,%esp
 815b262:	5b                   	pop    %ebx
 815b263:	5e                   	pop    %esi
 815b264:	5d                   	pop    %ebp
 815b265:	c3                   	ret

```

```c
// LoadGeolocation::dispatch @ 0x815b010

/* LoadGeolocation::dispatch(int, int, Stream*) */

undefined4 LoadGeolocation::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  CEnvironment *this;
  uint local_2fc [181];
  char local_28 [16];
  MySQL *local_18;
  undefined4 local_14;
  
                    /* try { // try from 0815b033 to 0815b1e6 has its CatchHandler @ 0815b1ee */
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_18 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  this = (CEnvironment *)G_CEnvironment();
  local_14 = CEnvironment::get_server_group(this);
  MySQL::set_query(local_18,"seLect country_code from geo_allow_country where server_group = %d",
                   local_14);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = &DAT_08b77277;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  Taiwan::SigLoadGeolocation::init((SigLoadGeolocation *)local_2fc);
  while( true ) {
    cVar1 = MySQL::fetch(local_18);
    if (cVar1 == '\0') {
      sendCountryData((LoadGeolocation *)param_1,(SigLoadGeolocation *)local_2fc);
      return 1;
    }
    memset(local_28,0,0x10);
    cVar1 = MySQL::get_str(local_18,0,local_28,0x10);
    if (cVar1 != '\x01') break;
    Taiwan::SigLoadGeolocation::set((SigLoadGeolocation *)local_2fc,local_28);
    if (0x2b < local_2fc[0]) {
      sendCountryData((LoadGeolocation *)param_1,(SigLoadGeolocation *)local_2fc);
      Taiwan::SigLoadGeolocation::init((SigLoadGeolocation *)local_2fc);
    }
  }
  puVar2 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar2 = "get_str";
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&char_const*::typeinfo,0);
}

```

---

## sendCountryData

```asm
// === 0815b266 LoadGeolocation::sendCountryData  [0x0815b266-0x815b361] ===
 815b266:	55                   	push   %ebp
 815b267:	89 e5                	mov    %esp,%ebp
 815b269:	56                   	push   %esi
 815b26a:	53                   	push   %ebx
 815b26b:	83 ec 20             	sub    $0x20,%esp
 815b26e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815b273:	c7 44 24 08 44 01 00 	movl   $0x144,0x8(%esp)
 815b27a:	00 
 815b27b:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815b282:	08 
 815b283:	89 04 24             	mov    %eax,(%esp)
 815b286:	e8 fb 47 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815b28b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815b292:	00 
 815b293:	89 44 24 04          	mov    %eax,0x4(%esp)
 815b297:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b29a:	89 04 24             	mov    %eax,(%esp)
 815b29d:	e8 84 d9 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815b2a2:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 815b2a9:	ff 
 815b2aa:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 815b2b1:	00 
 815b2b2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b2b5:	89 04 24             	mov    %eax,(%esp)
 815b2b8:	e8 93 86 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815b2bd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b2c0:	89 04 24             	mov    %eax,(%esp)
 815b2c3:	e8 86 d9 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815b2c8:	89 04 24             	mov    %eax,(%esp)
 815b2cb:	e8 3c 37 00 00       	call   815ea0c <_ZN12CStreamGuard11GetInBufferIN6Taiwan18SigLoadGeolocationEEEPT_v>
 815b2d0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815b2d3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815b2d7:	75 2c                	jne    815b305 <_ZN15LoadGeolocation15sendCountryDataERN6Taiwan18SigLoadGeolocationE+0x9f>
 815b2d9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b2e0:	e8 1b a5 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b2e5:	89 c2                	mov    %eax,%edx
 815b2e7:	c7 02 ff 72 b7 08    	movl   $0x8b772ff,(%edx)
 815b2ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b2f4:	00 
 815b2f5:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b2fc:	09 
 815b2fd:	89 04 24             	mov    %eax,(%esp)
 815b300:	e8 4b 99 5c 00       	call   8724c50 <__cxa_throw>
 815b305:	8b 45 0c             	mov    0xc(%ebp),%eax
 815b308:	89 44 24 04          	mov    %eax,0x4(%esp)
 815b30c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815b30f:	89 04 24             	mov    %eax,(%esp)
 815b312:	e8 ef 2b 00 00       	call   815df06 <_ZN6Taiwan18SigLoadGeolocation7setDataERS0_>
 815b317:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815b31c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 815b31f:	89 54 24 08          	mov    %edx,0x8(%esp)
 815b323:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815b32a:	00 
 815b32b:	89 04 24             	mov    %eax,(%esp)
 815b32e:	e8 ab 5c 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815b333:	eb 1b                	jmp    815b350 <_ZN15LoadGeolocation15sendCountryDataERN6Taiwan18SigLoadGeolocationE+0xea>
 815b335:	89 d3                	mov    %edx,%ebx
 815b337:	89 c6                	mov    %eax,%esi
 815b339:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b33c:	89 04 24             	mov    %eax,(%esp)
 815b33f:	e8 8e 15 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815b344:	89 f0                	mov    %esi,%eax
 815b346:	89 da                	mov    %ebx,%edx
 815b348:	89 04 24             	mov    %eax,(%esp)
 815b34b:	e8 00 84 98 00       	call   8ae3750 <_Unwind_Resume>
 815b350:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b353:	89 04 24             	mov    %eax,(%esp)
 815b356:	e8 77 15 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815b35b:	83 c4 20             	add    $0x20,%esp
 815b35e:	5b                   	pop    %ebx
 815b35f:	5e                   	pop    %esi
 815b360:	5d                   	pop    %ebp
 815b361:	c3                   	ret

```

```c
// LoadGeolocation::sendCountryData @ 0x815b266

/* LoadGeolocation::sendCountryData(Taiwan::SigLoadGeolocation&) */

void __thiscall LoadGeolocation::sendCountryData(LoadGeolocation *this,SigLoadGeolocation *param_1)

{
  Stream *pSVar1;
  CStreamGuard *this_00;
  undefined4 *puVar2;
  CStreamGuard local_18 [8];
  SigLoadGeolocation *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x144);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0815b2b8 to 0815b332 has its CatchHandler @ 0815b335 */
  Taiwan::internal_stream(local_18,4,0xffffffff);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadGeolocation>(this_00);
  if (local_10 == (SigLoadGeolocation *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "stream";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  Taiwan::SigLoadGeolocation::setData(local_10,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

