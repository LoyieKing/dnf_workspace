# DB_AradDatabaseDispatcher

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## DB_AradDatabaseDispatcher

```asm
// === 0844bc38 DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher  [0x0844bc38-0x844bcab] ===
 844bc38:	55                   	push   %ebp
 844bc39:	89 e5                	mov    %esp,%ebp
 844bc3b:	56                   	push   %esi
 844bc3c:	53                   	push   %ebx
 844bc3d:	83 ec 10             	sub    $0x10,%esp
 844bc40:	8b 45 08             	mov    0x8(%ebp),%eax
 844bc43:	89 04 24             	mov    %eax,(%esp)
 844bc46:	e8 5b 1b 00 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 844bc4b:	8b 45 08             	mov    0x8(%ebp),%eax
 844bc4e:	c7 00 f8 df c5 08    	movl   $0x8c5dff8,(%eax)
 844bc54:	8b 45 08             	mov    0x8(%ebp),%eax
 844bc57:	83 c0 04             	add    $0x4,%eax
 844bc5a:	89 04 24             	mov    %eax,(%esp)
 844bc5d:	e8 1a 90 d3 ff       	call   8184c7c <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC1Ev>
 844bc62:	8b 45 08             	mov    0x8(%ebp),%eax
 844bc65:	83 c0 04             	add    $0x4,%eax
 844bc68:	89 04 24             	mov    %eax,(%esp)
 844bc6b:	e8 d0 90 d3 ff       	call   8184d40 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv>
 844bc70:	eb 33                	jmp    844bca5 <_ZN25DB_AradDatabaseDispatcherC1Ev+0x6d>
 844bc72:	89 d3                	mov    %edx,%ebx
 844bc74:	89 c6                	mov    %eax,%esi
 844bc76:	8b 45 08             	mov    0x8(%ebp),%eax
 844bc79:	83 c0 04             	add    $0x4,%eax
 844bc7c:	89 04 24             	mov    %eax,(%esp)
 844bc7f:	e8 3a 90 d3 ff       	call   8184cbe <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherD1Ev>
 844bc84:	89 f0                	mov    %esi,%eax
 844bc86:	89 da                	mov    %ebx,%edx
 844bc88:	eb 00                	jmp    844bc8a <_ZN25DB_AradDatabaseDispatcherC1Ev+0x52>
 844bc8a:	89 d3                	mov    %edx,%ebx
 844bc8c:	89 c6                	mov    %eax,%esi
 844bc8e:	8b 45 08             	mov    0x8(%ebp),%eax
 844bc91:	89 04 24             	mov    %eax,(%esp)
 844bc94:	e8 df 66 c9 ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 844bc99:	89 f0                	mov    %esi,%eax
 844bc9b:	89 da                	mov    %ebx,%edx
 844bc9d:	89 04 24             	mov    %eax,(%esp)
 844bca0:	e8 ab 7a 69 00       	call   8ae3750 <_Unwind_Resume>
 844bca5:	83 c4 10             	add    $0x10,%esp
 844bca8:	5b                   	pop    %ebx
 844bca9:	5e                   	pop    %esi
 844bcaa:	5d                   	pop    %ebp
 844bcab:	c3                   	ret

```

```c
// DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher @ 0x844bc38

/* DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher() */

void __thiscall
DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher(DB_AradDatabaseDispatcher *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5dff8;
                    /* try { // try from 0844bc5d to 0844bc61 has its CatchHandler @ 0844bc8a */
  ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher
            ((Arad_DatabaseDispatcher *)(this + 4));
                    /* try { // try from 0844bc6b to 0844bc6f has its CatchHandler @ 0844bc72 */
  ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init((Arad_DatabaseDispatcher *)(this + 4));
  return;
}

```

---

## dispatch

```asm
// === 0844bcac DB_AradDatabaseDispatcher::dispatch  [0x0844bcac-0x844bd5b] ===
 844bcac:	55                   	push   %ebp
 844bcad:	89 e5                	mov    %esp,%ebp
 844bcaf:	53                   	push   %ebx
 844bcb0:	83 ec 34             	sub    $0x34,%esp
 844bcb3:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 844bcba:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844bcbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 844bcc1:	8b 45 14             	mov    0x14(%ebp),%eax
 844bcc4:	89 04 24             	mov    %eax,(%esp)
 844bcc7:	e8 f8 08 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 844bccc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844bccf:	8b 55 08             	mov    0x8(%ebp),%edx
 844bcd2:	83 c2 04             	add    $0x4,%edx
 844bcd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 844bcd9:	89 14 24             	mov    %edx,(%esp)
 844bcdc:	e8 ff 93 d3 ff       	call   81850e0 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>
 844bce1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844bce4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 844bce8:	75 44                	jne    844bd2e <_ZN25DB_AradDatabaseDispatcher8dispatchEiiP6Stream+0x82>
 844bcea:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 844bced:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844bcf4:	00 
 844bcf5:	c7 44 24 08 8b bc 00 	movl   $0xbc8b,0x8(%esp)
 844bcfc:	00 
 844bcfd:	c7 44 24 04 20 aa c5 	movl   $0x8c5aa20,0x4(%esp)
 844bd04:	08 
 844bd05:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 844bd08:	89 04 24             	mov    %eax,(%esp)
 844bd0b:	e8 08 3a 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844bd10:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844bd14:	c7 44 24 04 dc 97 c5 	movl   $0x8c597dc,0x4(%esp)
 844bd1b:	08 
 844bd1c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 844bd1f:	89 04 24             	mov    %eax,(%esp)
 844bd22:	e8 61 3a 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844bd27:	b8 00 00 00 00       	mov    $0x0,%eax
 844bd2c:	eb 27                	jmp    844bd55 <_ZN25DB_AradDatabaseDispatcher8dispatchEiiP6Stream+0xa9>
 844bd2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844bd31:	8b 00                	mov    (%eax),%eax
 844bd33:	83 c0 08             	add    $0x8,%eax
 844bd36:	8b 10                	mov    (%eax),%edx
 844bd38:	8b 45 14             	mov    0x14(%ebp),%eax
 844bd3b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 844bd3f:	8b 45 10             	mov    0x10(%ebp),%eax
 844bd42:	89 44 24 08          	mov    %eax,0x8(%esp)
 844bd46:	8b 45 0c             	mov    0xc(%ebp),%eax
 844bd49:	89 44 24 04          	mov    %eax,0x4(%esp)
 844bd4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844bd50:	89 04 24             	mov    %eax,(%esp)
 844bd53:	ff d2                	call   *%edx
 844bd55:	83 c4 34             	add    $0x34,%esp
 844bd58:	5b                   	pop    %ebx
 844bd59:	5d                   	pop    %ebp
 844bd5a:	c3                   	ret
 844bd5b:	90                   	nop

```

```c
// DB_AradDatabaseDispatcher::dispatch @ 0x844bcac

/* DB_AradDatabaseDispatcher::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AradDatabaseDispatcher::dispatch
          (DB_AradDatabaseDispatcher *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_24;
  cMyTrace local_20 [16];
  int *local_10;
  
  local_24 = 0;
  Stream::operator>>(param_3,&local_24);
  local_10 = (int *)ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(this + 4,local_24);
  iVar1 = local_24;
  if (local_10 == (int *)0x0) {
    cMyTrace::cMyTrace(local_20,
                       "virtual bool DB_AradDatabaseDispatcher::dispatch(int, int, Stream*)",0xbc8b,
                       5);
    cMyTrace::operator()(local_20,"[DISPATCHER_ARAD] Invalid Internal Packet Code. (code:%d)",iVar1)
    ;
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*local_10 + 8))(local_10,param_1,param_2,param_3);
  }
  return uVar2;
}

```

