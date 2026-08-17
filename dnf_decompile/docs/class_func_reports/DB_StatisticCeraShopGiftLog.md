# DB_StatisticCeraShopGiftLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08444066 DB_StatisticCeraShopGiftLog::dispatch  [0x08444066-0x84441e5] ===
 8444066:	55                   	push   %ebp
 8444067:	89 e5                	mov    %esp,%ebp
 8444069:	57                   	push   %edi
 844406a:	56                   	push   %esi
 844406b:	53                   	push   %ebx
 844406c:	83 ec 6c             	sub    $0x6c,%esp
 844406f:	8b 45 14             	mov    0x14(%ebp),%eax
 8444072:	89 04 24             	mov    %eax,(%esp)
 8444075:	e8 36 ff 00 00       	call   8453fb0 <_ZN6Stream12GetOutBufferI31SIG_STATISTIC_CERASHOP_GIFT_LOGEEPT_v>
 844407a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 844407d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8444082:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8444089:	00 
 844408a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8444091:	00 
 8444092:	89 04 24             	mov    %eax,(%esp)
 8444095:	e8 a4 11 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844409a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 844409d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84440a1:	75 0a                	jne    84440ad <_ZN27DB_StatisticCeraShopGiftLog8dispatchEiiP6Stream+0x47>
 84440a3:	b8 00 00 00 00       	mov    $0x0,%eax
 84440a8:	e9 31 01 00 00       	jmp    84441de <_ZN27DB_StatisticCeraShopGiftLog8dispatchEiiP6Stream+0x178>
 84440ad:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84440b0:	8b 78 14             	mov    0x14(%eax),%edi
 84440b3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84440b6:	8b 70 10             	mov    0x10(%eax),%esi
 84440b9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84440bc:	8b 58 0c             	mov    0xc(%eax),%ebx
 84440bf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84440c2:	8b 48 08             	mov    0x8(%eax),%ecx
 84440c5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84440c8:	8b 50 04             	mov    0x4(%eax),%edx
 84440cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84440ce:	8b 00                	mov    (%eax),%eax
 84440d0:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 84440d4:	89 74 24 18          	mov    %esi,0x18(%esp)
 84440d8:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84440dc:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84440e0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84440e4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84440e8:	c7 44 24 04 a8 6f c5 	movl   $0x8c56fa8,0x4(%esp)
 84440ef:	08 
 84440f0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84440f3:	89 04 24             	mov    %eax,(%esp)
 84440f6:	e8 c5 00 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84440fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8444102:	00 
 8444103:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8444106:	89 04 24             	mov    %eax,(%esp)
 8444109:	e8 18 02 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 844410e:	83 f0 01             	xor    $0x1,%eax
 8444111:	84 c0                	test   %al,%al
 8444113:	0f 84 c0 00 00 00    	je     84441d9 <_ZN27DB_StatisticCeraShopGiftLog8dispatchEiiP6Stream+0x173>
 8444119:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8444120:	00 
 8444121:	c7 44 24 08 c1 a9 00 	movl   $0xa9c1,0x8(%esp)
 8444128:	00 
 8444129:	c7 44 24 04 a0 b4 c5 	movl   $0x8c5b4a0,0x4(%esp)
 8444130:	08 
 8444131:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8444134:	89 04 24             	mov    %eax,(%esp)
 8444137:	e8 dc b5 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844413c:	c7 44 24 04 48 70 c5 	movl   $0x8c57048,0x4(%esp)
 8444143:	08 
 8444144:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8444147:	89 04 24             	mov    %eax,(%esp)
 844414a:	e8 39 b6 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844414f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8444152:	8b 40 14             	mov    0x14(%eax),%eax
 8444155:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8444158:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844415b:	8b 40 10             	mov    0x10(%eax),%eax
 844415e:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8444161:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8444164:	8b 40 0c             	mov    0xc(%eax),%eax
 8444167:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 844416a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844416d:	8b 78 08             	mov    0x8(%eax),%edi
 8444170:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8444173:	8b 70 04             	mov    0x4(%eax),%esi
 8444176:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8444179:	8b 18                	mov    (%eax),%ebx
 844417b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8444182:	00 
 8444183:	c7 44 24 08 c3 a9 00 	movl   $0xa9c3,0x8(%esp)
 844418a:	00 
 844418b:	c7 44 24 04 a0 b4 c5 	movl   $0x8c5b4a0,0x4(%esp)
 8444192:	08 
 8444193:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8444196:	89 04 24             	mov    %eax,(%esp)
 8444199:	e8 7a b5 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844419e:	8b 45 ac             	mov    -0x54(%ebp),%eax
 84441a1:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84441a5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84441a8:	89 44 24 18          	mov    %eax,0x18(%esp)
 84441ac:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84441af:	89 44 24 14          	mov    %eax,0x14(%esp)
 84441b3:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84441b7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84441bb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84441bf:	c7 44 24 04 80 70 c5 	movl   $0x8c57080,0x4(%esp)
 84441c6:	08 
 84441c7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84441ca:	89 04 24             	mov    %eax,(%esp)
 84441cd:	e8 b6 b5 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84441d2:	b8 00 00 00 00       	mov    $0x0,%eax
 84441d7:	eb 05                	jmp    84441de <_ZN27DB_StatisticCeraShopGiftLog8dispatchEiiP6Stream+0x178>
 84441d9:	b8 01 00 00 00       	mov    $0x1,%eax
 84441de:	83 c4 6c             	add    $0x6c,%esp
 84441e1:	5b                   	pop    %ebx
 84441e2:	5e                   	pop    %esi
 84441e3:	5f                   	pop    %edi
 84441e4:	5d                   	pop    %ebp
 84441e5:	c3                   	ret

```

```c
// DB_StatisticCeraShopGiftLog::dispatch @ 0x8444066

/* DB_StatisticCeraShopGiftLog::dispatch(int, int, Stream*) */

undefined4 DB_StatisticCeraShopGiftLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  Stream *in_stack_00000010;
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  SIG_STATISTIC_CERASHOP_GIFT_LOG *local_24;
  MySQL *local_20;
  
  local_24 = Stream::GetOutBuffer<SIG_STATISTIC_CERASHOP_GIFT_LOG>(in_stack_00000010);
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  if (local_20 == (MySQL *)0x0) {
    uVar7 = 0;
  }
  else {
    MySQL::set_query(local_20,
                     "inSert into log_cerashop_gift(occ_time, from_mid, from_charac_no, to_mid, to_charac_no, item_idx, item_cnt) values(unix_timestamp(), %u, %u, %u, %u, %u, %u)"
                     ,*(undefined4 *)local_24,*(undefined4 *)(local_24 + 4),
                     *(undefined4 *)(local_24 + 8),*(undefined4 *)(local_24 + 0xc),
                     *(undefined4 *)(local_24 + 0x10),*(undefined4 *)(local_24 + 0x14));
    cVar6 = MySQL::exec(local_20,true);
    if (cVar6 == '\x01') {
      uVar7 = 1;
    }
    else {
      cMyTrace::cMyTrace(local_44,
                         "virtual bool DB_StatisticCeraShopGiftLog::dispatch(int, int, Stream*)",
                         0xa9c1,5);
      cMyTrace::operator()(local_44,"DB_StatisticAmazingBoxProtectLucky_USE inSert exec fail");
      uVar7 = *(undefined4 *)(local_24 + 0x14);
      uVar1 = *(undefined4 *)(local_24 + 0x10);
      uVar2 = *(undefined4 *)(local_24 + 0xc);
      uVar3 = *(undefined4 *)(local_24 + 8);
      uVar4 = *(undefined4 *)(local_24 + 4);
      uVar5 = *(undefined4 *)local_24;
      cMyTrace::cMyTrace(local_34,
                         "virtual bool DB_StatisticCeraShopGiftLog::dispatch(int, int, Stream*)",
                         0xa9c3,5);
      cMyTrace::operator()
                (local_34,
                 "inSert into log_cerashop_gift(occ_time, from_mid, from_charac_no, to_m_id, to_charac_no, item_idx, count) values(unix_timestamp(), %u, %u, %u, %u, %u, %u)"
                 ,uVar5,uVar4,uVar3,uVar2,uVar1,uVar7);
      uVar7 = 0;
    }
  }
  return uVar7;
}

```

