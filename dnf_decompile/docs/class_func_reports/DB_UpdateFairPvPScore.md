# DB_UpdateFairPvPScore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843fa78 DB_UpdateFairPvPScore::dispatch  [0x0843fa78-0x843fc25] ===
 843fa78:	55                   	push   %ebp
 843fa79:	89 e5                	mov    %esp,%ebp
 843fa7b:	57                   	push   %edi
 843fa7c:	56                   	push   %esi
 843fa7d:	53                   	push   %ebx
 843fa7e:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 843fa84:	8b 45 14             	mov    0x14(%ebp),%eax
 843fa87:	89 04 24             	mov    %eax,(%esp)
 843fa8a:	e8 81 41 01 00       	call   8453c10 <_ZN6Stream12GetOutBufferI18SIG_FAIR_PVP_SCOREEEPT_v>
 843fa8f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843fa92:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 843fa96:	75 0a                	jne    843faa2 <_ZN21DB_UpdateFairPvPScore8dispatchEiiP6Stream+0x2a>
 843fa98:	b8 00 00 00 00       	mov    $0x0,%eax
 843fa9d:	e9 79 01 00 00       	jmp    843fc1b <_ZN21DB_UpdateFairPvPScore8dispatchEiiP6Stream+0x1a3>
 843faa2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843faa7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843faae:	00 
 843faaf:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843fab6:	00 
 843fab7:	89 04 24             	mov    %eax,(%esp)
 843faba:	e8 7f 57 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843fabf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843fac2:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 843fac9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843facc:	83 c0 2c             	add    $0x2c,%eax
 843facf:	8d 55 d8             	lea    -0x28(%ebp),%edx
 843fad2:	89 54 24 10          	mov    %edx,0x10(%esp)
 843fad6:	c7 44 24 0c 50 06 00 	movl   $0x650,0xc(%esp)
 843fadd:	00 
 843fade:	89 44 24 08          	mov    %eax,0x8(%esp)
 843fae2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843fae9:	00 
 843faea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843faed:	89 04 24             	mov    %eax,(%esp)
 843faf0:	e8 11 c2 fb ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 843faf5:	83 f0 01             	xor    $0x1,%eax
 843faf8:	84 c0                	test   %al,%al
 843fafa:	74 0a                	je     843fb06 <_ZN21DB_UpdateFairPvPScore8dispatchEiiP6Stream+0x8e>
 843fafc:	b8 00 00 00 00       	mov    $0x0,%eax
 843fb01:	e9 15 01 00 00       	jmp    843fc1b <_ZN21DB_UpdateFairPvPScore8dispatchEiiP6Stream+0x1a3>
 843fb06:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb09:	8b 38                	mov    (%eax),%edi
 843fb0b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb0e:	0f b6 80 84 06 00 00 	movzbl 0x684(%eax),%eax
 843fb15:	0f b6 c0             	movzbl %al,%eax
 843fb18:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 843fb1b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb1e:	8b 80 80 06 00 00    	mov    0x680(%eax),%eax
 843fb24:	89 45 b8             	mov    %eax,-0x48(%ebp)
 843fb27:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb2a:	8b 80 7c 06 00 00    	mov    0x67c(%eax),%eax
 843fb30:	89 45 bc             	mov    %eax,-0x44(%ebp)
 843fb33:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843fb36:	89 45 c0             	mov    %eax,-0x40(%ebp)
 843fb39:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb3c:	8b 40 28             	mov    0x28(%eax),%eax
 843fb3f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 843fb42:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb45:	8b 40 24             	mov    0x24(%eax),%eax
 843fb48:	89 45 c8             	mov    %eax,-0x38(%ebp)
 843fb4b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb4e:	8b 40 20             	mov    0x20(%eax),%eax
 843fb51:	89 45 cc             	mov    %eax,-0x34(%ebp)
 843fb54:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb57:	8b 40 1c             	mov    0x1c(%eax),%eax
 843fb5a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 843fb5d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb60:	8b 40 18             	mov    0x18(%eax),%eax
 843fb63:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 843fb66:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb69:	8b 70 14             	mov    0x14(%eax),%esi
 843fb6c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb6f:	8b 58 10             	mov    0x10(%eax),%ebx
 843fb72:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb75:	8b 48 0c             	mov    0xc(%eax),%ecx
 843fb78:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb7b:	8b 50 08             	mov    0x8(%eax),%edx
 843fb7e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843fb81:	8b 40 04             	mov    0x4(%eax),%eax
 843fb84:	89 7c 24 40          	mov    %edi,0x40(%esp)
 843fb88:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 843fb8b:	89 7c 24 3c          	mov    %edi,0x3c(%esp)
 843fb8f:	8b 7d b8             	mov    -0x48(%ebp),%edi
 843fb92:	89 7c 24 38          	mov    %edi,0x38(%esp)
 843fb96:	8b 7d bc             	mov    -0x44(%ebp),%edi
 843fb99:	89 7c 24 34          	mov    %edi,0x34(%esp)
 843fb9d:	8b 7d c0             	mov    -0x40(%ebp),%edi
 843fba0:	89 7c 24 30          	mov    %edi,0x30(%esp)
 843fba4:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 843fba7:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 843fbab:	8b 7d c8             	mov    -0x38(%ebp),%edi
 843fbae:	89 7c 24 28          	mov    %edi,0x28(%esp)
 843fbb2:	8b 7d cc             	mov    -0x34(%ebp),%edi
 843fbb5:	89 7c 24 24          	mov    %edi,0x24(%esp)
 843fbb9:	8b 7d d0             	mov    -0x30(%ebp),%edi
 843fbbc:	89 7c 24 20          	mov    %edi,0x20(%esp)
 843fbc0:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 843fbc3:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 843fbc7:	89 74 24 18          	mov    %esi,0x18(%esp)
 843fbcb:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 843fbcf:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 843fbd3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843fbd7:	89 44 24 08          	mov    %eax,0x8(%esp)
 843fbdb:	c7 44 24 04 0c 5b c5 	movl   $0x8c55b0c,0x4(%esp)
 843fbe2:	08 
 843fbe3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843fbe6:	89 04 24             	mov    %eax,(%esp)
 843fbe9:	e8 d2 45 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843fbee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843fbf5:	00 
 843fbf6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843fbf9:	89 04 24             	mov    %eax,(%esp)
 843fbfc:	e8 25 47 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843fc01:	88 45 df             	mov    %al,-0x21(%ebp)
 843fc04:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 843fc08:	83 f0 01             	xor    $0x1,%eax
 843fc0b:	84 c0                	test   %al,%al
 843fc0d:	74 07                	je     843fc16 <_ZN21DB_UpdateFairPvPScore8dispatchEiiP6Stream+0x19e>
 843fc0f:	b8 00 00 00 00       	mov    $0x0,%eax
 843fc14:	eb 05                	jmp    843fc1b <_ZN21DB_UpdateFairPvPScore8dispatchEiiP6Stream+0x1a3>
 843fc16:	b8 01 00 00 00       	mov    $0x1,%eax
 843fc1b:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 843fc21:	5b                   	pop    %ebx
 843fc22:	5e                   	pop    %esi
 843fc23:	5f                   	pop    %edi
 843fc24:	5d                   	pop    %ebp
 843fc25:	c3                   	ret

```

```c
// DB_UpdateFairPvPScore::dispatch @ 0x843fa78

/* DB_UpdateFairPvPScore::dispatch(int, int, Stream*) */

undefined4 DB_UpdateFairPvPScore::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  char *local_2c [2];
  SIG_FAIR_PVP_SCORE *local_24;
  MySQL *local_20;
  
  local_24 = Stream::GetOutBuffer<SIG_FAIR_PVP_SCORE>(in_stack_00000010);
  if (local_24 == (SIG_FAIR_PVP_SCORE *)0x0) {
    uVar2 = 0;
  }
  else {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    local_2c[0] = (char *)0x0;
    cVar1 = put_compressed_blob_data(local_20,0,(char *)(local_24 + 0x2c),0x650,local_2c);
    if (cVar1 == '\x01') {
      MySQL::set_query(local_20,
                       "upDate fair_pvp_score set private_win=%u,private_lose=%u,private_draw=%u,relay_battle_win=%u,relay_battle_lose=%u,relay_battle_draw=%u,relay_battle_2kill=%u,relay_battle_3kill=%u,successive_win=%u,max_successive_win=%u,job_score=\'%s\',daily_play_count =%u, last_play_time=from_unixtime(%d),give_item=%d where charac_no=%u"
                       ,*(undefined4 *)(local_24 + 4),*(undefined4 *)(local_24 + 8),
                       *(undefined4 *)(local_24 + 0xc),*(undefined4 *)(local_24 + 0x10),
                       *(undefined4 *)(local_24 + 0x14),*(undefined4 *)(local_24 + 0x18),
                       *(undefined4 *)(local_24 + 0x1c),*(undefined4 *)(local_24 + 0x20),
                       *(undefined4 *)(local_24 + 0x24),*(undefined4 *)(local_24 + 0x28),local_2c[0]
                       ,*(undefined4 *)(local_24 + 0x67c),*(undefined4 *)(local_24 + 0x680),
                       (uint)(byte)local_24[0x684],*(undefined4 *)local_24);
      cVar1 = MySQL::exec(local_20,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

