# DB_UpdateChannel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_UpdateChannel

```asm
// === 08417f4a DB_UpdateChannel::DB_UpdateChannel  [0x08417f4a-0x8417f65] ===
 8417f4a:	55                   	push   %ebp
 8417f4b:	89 e5                	mov    %esp,%ebp
 8417f4d:	83 ec 18             	sub    $0x18,%esp
 8417f50:	8b 45 08             	mov    0x8(%ebp),%eax
 8417f53:	89 04 24             	mov    %eax,(%esp)
 8417f56:	e8 4b 58 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8417f5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8417f5e:	c7 00 f0 f9 c5 08    	movl   $0x8c5f9f0,(%eax)
 8417f64:	c9                   	leave
 8417f65:	c3                   	ret

```

```c
// DB_UpdateChannel::DB_UpdateChannel @ 0x8417f4a

/* DB_UpdateChannel::DB_UpdateChannel() */

void __thiscall DB_UpdateChannel::DB_UpdateChannel(DB_UpdateChannel *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f9f0;
  return;
}

```

---

## UpdateChannel

```asm
// === 08418032 DB_UpdateChannel::UpdateChannel  [0x08418032-0x841812f] ===
 8418032:	55                   	push   %ebp
 8418033:	89 e5                	mov    %esp,%ebp
 8418035:	57                   	push   %edi
 8418036:	56                   	push   %esi
 8418037:	53                   	push   %ebx
 8418038:	83 ec 7c             	sub    $0x7c,%esp
 841803b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8418040:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8418047:	00 
 8418048:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841804f:	00 
 8418050:	89 04 24             	mov    %eax,(%esp)
 8418053:	e8 e6 d1 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8418058:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841805b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841805e:	8b 18                	mov    (%eax),%ebx
 8418060:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418063:	8b 78 36             	mov    0x36(%eax),%edi
 8418066:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418069:	8b 40 32             	mov    0x32(%eax),%eax
 841806c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 841806f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418072:	8b 40 1e             	mov    0x1e(%eax),%eax
 8418075:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8418078:	8b 45 0c             	mov    0xc(%ebp),%eax
 841807b:	8b 40 1a             	mov    0x1a(%eax),%eax
 841807e:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8418081:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418084:	8b 40 16             	mov    0x16(%eax),%eax
 8418087:	89 45 d0             	mov    %eax,-0x30(%ebp)
 841808a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841808d:	8b 40 12             	mov    0x12(%eax),%eax
 8418090:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8418093:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418096:	8b 70 0e             	mov    0xe(%eax),%esi
 8418099:	8b 45 0c             	mov    0xc(%ebp),%eax
 841809c:	8b 48 0a             	mov    0xa(%eax),%ecx
 841809f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84180a2:	8b 50 06             	mov    0x6(%eax),%edx
 84180a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84180a8:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 84180ac:	98                   	cwtl
 84180ad:	89 5c 24 30          	mov    %ebx,0x30(%esp)
 84180b1:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 84180b5:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 84180b8:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 84180bc:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 84180bf:	89 5c 24 24          	mov    %ebx,0x24(%esp)
 84180c3:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 84180c6:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 84180ca:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 84180cd:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84180d1:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 84180d4:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84180d8:	89 74 24 14          	mov    %esi,0x14(%esp)
 84180dc:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84180e0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84180e4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84180e8:	c7 44 24 04 30 9b c4 	movl   $0x8c49b30,0x4(%esp)
 84180ef:	08 
 84180f0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84180f3:	89 04 24             	mov    %eax,(%esp)
 84180f6:	e8 c5 c0 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84180fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8418102:	00 
 8418103:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8418106:	89 04 24             	mov    %eax,(%esp)
 8418109:	e8 18 c2 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841810e:	88 45 e3             	mov    %al,-0x1d(%ebp)
 8418111:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8418115:	83 f0 01             	xor    $0x1,%eax
 8418118:	84 c0                	test   %al,%al
 841811a:	74 07                	je     8418123 <_ZN16DB_UpdateChannel13UpdateChannelEP18SIG_UPDATE_CHANNEL+0xf1>
 841811c:	b8 00 00 00 00       	mov    $0x0,%eax
 8418121:	eb 05                	jmp    8418128 <_ZN16DB_UpdateChannel13UpdateChannelEP18SIG_UPDATE_CHANNEL+0xf6>
 8418123:	b8 01 00 00 00       	mov    $0x1,%eax
 8418128:	83 c4 7c             	add    $0x7c,%esp
 841812b:	5b                   	pop    %ebx
 841812c:	5e                   	pop    %esi
 841812d:	5f                   	pop    %edi
 841812e:	5d                   	pop    %ebp
 841812f:	c3                   	ret

```

```c
// DB_UpdateChannel::UpdateChannel @ 0x8418032

/* DB_UpdateChannel::UpdateChannel(SIG_UPDATE_CHANNEL*) */

bool __thiscall DB_UpdateChannel::UpdateChannel(DB_UpdateChannel *this,SIG_UPDATE_CHANNEL *param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,
                   "upDate game_channel set gc_now=%d,gc_up_time=now(),gc_swordman_cnt=%d,gc_fighter_cnt=%d,gc_gunner_cnt=%d,gc_mage_cnt=%d,gc_priest_cnt=%d,gc_at_gunner_cnt=%d,gc_thief_cnt=%d,gc_hangame=%d,gc_nexon=%d where gc_no=%d"
                   ,(int)*(short *)(param_1 + 4),*(undefined4 *)(param_1 + 6),
                   *(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xe),
                   *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x16),
                   *(undefined4 *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1e),
                   *(undefined4 *)(param_1 + 0x32),*(undefined4 *)(param_1 + 0x36),
                   *(undefined4 *)param_1);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}

```

---

## dispatch

```asm
// === 08417fb4 DB_UpdateChannel::dispatch  [0x08417fb4-0x8418031] ===
 8417fb4:	55                   	push   %ebp
 8417fb5:	89 e5                	mov    %esp,%ebp
 8417fb7:	83 ec 28             	sub    $0x28,%esp
 8417fba:	8b 45 08             	mov    0x8(%ebp),%eax
 8417fbd:	8b 55 14             	mov    0x14(%ebp),%edx
 8417fc0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8417fc4:	8b 55 10             	mov    0x10(%ebp),%edx
 8417fc7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8417fcb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8417fce:	89 54 24 04          	mov    %edx,0x4(%esp)
 8417fd2:	89 04 24             	mov    %eax,(%esp)
 8417fd5:	e8 a2 3f fe ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8417fda:	83 f0 01             	xor    $0x1,%eax
 8417fdd:	84 c0                	test   %al,%al
 8417fdf:	74 07                	je     8417fe8 <_ZN16DB_UpdateChannel8dispatchEiiP6Stream+0x34>
 8417fe1:	b8 00 00 00 00       	mov    $0x0,%eax
 8417fe6:	eb 47                	jmp    841802f <_ZN16DB_UpdateChannel8dispatchEiiP6Stream+0x7b>
 8417fe8:	8b 45 14             	mov    0x14(%ebp),%eax
 8417feb:	89 04 24             	mov    %eax,(%esp)
 8417fee:	e8 89 8d 03 00       	call   8450d7c <_ZN6Stream12GetOutBufferI18SIG_UPDATE_CHANNELEEPT_v>
 8417ff3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8417ff6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8417ffa:	75 07                	jne    8418003 <_ZN16DB_UpdateChannel8dispatchEiiP6Stream+0x4f>
 8417ffc:	b8 00 00 00 00       	mov    $0x0,%eax
 8418001:	eb 2c                	jmp    841802f <_ZN16DB_UpdateChannel8dispatchEiiP6Stream+0x7b>
 8418003:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8418006:	89 44 24 04          	mov    %eax,0x4(%esp)
 841800a:	8b 45 08             	mov    0x8(%ebp),%eax
 841800d:	89 04 24             	mov    %eax,(%esp)
 8418010:	e8 1d 00 00 00       	call   8418032 <_ZN16DB_UpdateChannel13UpdateChannelEP18SIG_UPDATE_CHANNEL>
 8418015:	88 45 f3             	mov    %al,-0xd(%ebp)
 8418018:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 841801c:	83 f0 01             	xor    $0x1,%eax
 841801f:	84 c0                	test   %al,%al
 8418021:	74 07                	je     841802a <_ZN16DB_UpdateChannel8dispatchEiiP6Stream+0x76>
 8418023:	b8 00 00 00 00       	mov    $0x0,%eax
 8418028:	eb 05                	jmp    841802f <_ZN16DB_UpdateChannel8dispatchEiiP6Stream+0x7b>
 841802a:	b8 01 00 00 00       	mov    $0x1,%eax
 841802f:	c9                   	leave
 8418030:	c3                   	ret
 8418031:	90                   	nop

```

```c
// DB_UpdateChannel::dispatch @ 0x8417fb4

/* DB_UpdateChannel::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateChannel::dispatch(DB_UpdateChannel *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_UPDATE_CHANNEL *pSVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_CHANNEL>(param_3);
    if (pSVar3 == (SIG_UPDATE_CHANNEL *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = UpdateChannel(this,pSVar3);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ~DB_UpdateChannel

```asm
// === 08417f66 DB_UpdateChannel::~DB_UpdateChannel  [0x08417f66-0x8417f95] ===
 8417f66:	55                   	push   %ebp
 8417f67:	89 e5                	mov    %esp,%ebp
 8417f69:	83 ec 18             	sub    $0x18,%esp
 8417f6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8417f6f:	c7 00 f0 f9 c5 08    	movl   $0x8c5f9f0,(%eax)
 8417f75:	8b 45 08             	mov    0x8(%ebp),%eax
 8417f78:	89 04 24             	mov    %eax,(%esp)
 8417f7b:	e8 f8 a3 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8417f80:	b8 00 00 00 00       	mov    $0x0,%eax
 8417f85:	84 c0                	test   %al,%al
 8417f87:	74 0b                	je     8417f94 <_ZN16DB_UpdateChannelD1Ev+0x2e>
 8417f89:	8b 45 08             	mov    0x8(%ebp),%eax
 8417f8c:	89 04 24             	mov    %eax,(%esp)
 8417f8f:	e8 5c c5 30 00       	call   87244f0 <_ZdlPv>
 8417f94:	c9                   	leave
 8417f95:	c3                   	ret

```

```c
// DB_UpdateChannel::~DB_UpdateChannel @ 0x8417f66

/* WARNING: Removing unreachable block (ram,0x08417f89) */
/* DB_UpdateChannel::~DB_UpdateChannel() */

void __thiscall DB_UpdateChannel::~DB_UpdateChannel(DB_UpdateChannel *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f9f0;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_UpdateChannel_08417f96

```asm
// === 08417f96 DB_UpdateChannel::~DB_UpdateChannel  [0x08417f96-0x8417fb3] ===
 8417f96:	55                   	push   %ebp
 8417f97:	89 e5                	mov    %esp,%ebp
 8417f99:	83 ec 18             	sub    $0x18,%esp
 8417f9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8417f9f:	89 04 24             	mov    %eax,(%esp)
 8417fa2:	e8 bf ff ff ff       	call   8417f66 <_ZN16DB_UpdateChannelD1Ev>
 8417fa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8417faa:	89 04 24             	mov    %eax,(%esp)
 8417fad:	e8 3e c5 30 00       	call   87244f0 <_ZdlPv>
 8417fb2:	c9                   	leave
 8417fb3:	c3                   	ret

```

```c
// DB_UpdateChannel::~DB_UpdateChannel @ 0x8417f96

/* DB_UpdateChannel::~DB_UpdateChannel() */

void __thiscall DB_UpdateChannel::~DB_UpdateChannel(DB_UpdateChannel *this)

{
  ~DB_UpdateChannel(this);
  operator_delete(this);
  return;
}

```

