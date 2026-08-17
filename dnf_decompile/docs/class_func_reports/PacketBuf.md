# PacketBuf

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 34

---

## PacketBuf

```asm
// === 0858c8c0 PacketBuf::PacketBuf  [0x0858c8c0-0x858c8db] ===
 858c8c0:	55                   	push   %ebp
 858c8c1:	89 e5                	mov    %esp,%ebp
 858c8c3:	83 ec 18             	sub    $0x18,%esp
 858c8c6:	8b 45 08             	mov    0x8(%ebp),%eax
 858c8c9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 858c8cf:	8b 45 08             	mov    0x8(%ebp),%eax
 858c8d2:	89 04 24             	mov    %eax,(%esp)
 858c8d5:	e8 08 00 00 00       	call   858c8e2 <_ZN9PacketBuf5clearEv>
 858c8da:	c9                   	leave
 858c8db:	c3                   	ret

```

```c
// PacketBuf::PacketBuf @ 0x858c8c0

/* PacketBuf::PacketBuf() */

void __thiscall PacketBuf::PacketBuf(PacketBuf *this)

{
  *(undefined4 *)this = 0;
  clear(this);
  return;
}

```

---

## bind_packet

```asm
// === 0858d4de PacketBuf::bind_packet  [0x0858d4de-0x858d547] ===
 858d4de:	55                   	push   %ebp
 858d4df:	89 e5                	mov    %esp,%ebp
 858d4e1:	83 ec 28             	sub    $0x28,%esp
 858d4e4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 858d4e8:	74 06                	je     858d4f0 <_ZN9PacketBuf11bind_packetEPci+0x12>
 858d4ea:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 858d4ee:	75 33                	jne    858d523 <_ZN9PacketBuf11bind_packetEPci+0x45>
 858d4f0:	c7 44 24 10 04 d5 ca 	movl   $0x8cad504,0x10(%esp)
 858d4f7:	08 
 858d4f8:	c7 44 24 0c 7c 02 00 	movl   $0x27c,0xc(%esp)
 858d4ff:	00 
 858d500:	c7 44 24 08 e0 e3 ca 	movl   $0x8cae3e0,0x8(%esp)
 858d507:	08 
 858d508:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858d50f:	08 
 858d510:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858d517:	e8 ee 66 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858d51c:	b8 00 00 00 00       	mov    $0x0,%eax
 858d521:	eb 22                	jmp    858d545 <_ZN9PacketBuf11bind_packetEPci+0x67>
 858d523:	8b 45 08             	mov    0x8(%ebp),%eax
 858d526:	89 04 24             	mov    %eax,(%esp)
 858d529:	e8 b4 f3 ff ff       	call   858c8e2 <_ZN9PacketBuf5clearEv>
 858d52e:	8b 45 08             	mov    0x8(%ebp),%eax
 858d531:	8b 55 0c             	mov    0xc(%ebp),%edx
 858d534:	89 50 14             	mov    %edx,0x14(%eax)
 858d537:	8b 45 08             	mov    0x8(%ebp),%eax
 858d53a:	8b 55 10             	mov    0x10(%ebp),%edx
 858d53d:	89 50 08             	mov    %edx,0x8(%eax)
 858d540:	b8 01 00 00 00       	mov    $0x1,%eax
 858d545:	c9                   	leave
 858d546:	c3                   	ret
 858d547:	90                   	nop

```

```c
// PacketBuf::bind_packet @ 0x858d4de

/* PacketBuf::bind_packet(char*, int) */

undefined4 __thiscall PacketBuf::bind_packet(PacketBuf *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::bind_packet(char*, int)",0x27c,
               "packet is null or size is zero");
    uVar1 = 0;
  }
  else {
    clear(this);
    *(char **)(this + 0x14) = param_1;
    *(int *)(this + 8) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## clear

```asm
// === 0858c8e2 PacketBuf::clear  [0x0858c8e2-0x858c939] ===
 858c8e2:	55                   	push   %ebp
 858c8e3:	89 e5                	mov    %esp,%ebp
 858c8e5:	83 ec 18             	sub    $0x18,%esp
 858c8e8:	8b 45 08             	mov    0x8(%ebp),%eax
 858c8eb:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 858c8f2:	8b 45 08             	mov    0x8(%ebp),%eax
 858c8f5:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 858c8fc:	8b 45 08             	mov    0x8(%ebp),%eax
 858c8ff:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 858c903:	8b 45 08             	mov    0x8(%ebp),%eax
 858c906:	8d 50 18             	lea    0x18(%eax),%edx
 858c909:	8b 45 08             	mov    0x8(%ebp),%eax
 858c90c:	89 50 14             	mov    %edx,0x14(%eax)
 858c90f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858c916:	00 
 858c917:	8b 45 08             	mov    0x8(%ebp),%eax
 858c91a:	89 04 24             	mov    %eax,(%esp)
 858c91d:	e8 64 19 00 00       	call   858e286 <_ZN9PacketBuf12setLastErrorENS_20PACKETBUF_ERROR_TYPEE>
 858c922:	8b 45 08             	mov    0x8(%ebp),%eax
 858c925:	c6 80 30 73 01 00 01 	movb   $0x1,0x17330(%eax)
 858c92c:	8b 45 08             	mov    0x8(%ebp),%eax
 858c92f:	89 04 24             	mov    %eax,(%esp)
 858c932:	e8 03 00 00 00       	call   858c93a <_ZN9PacketBuf9clear_ptrEv>
 858c937:	c9                   	leave
 858c938:	c3                   	ret
 858c939:	90                   	nop

```

```c
// PacketBuf::clear @ 0x858c8e2

/* PacketBuf::clear() */

void __thiscall PacketBuf::clear(PacketBuf *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (PacketBuf)0x0;
  *(PacketBuf **)(this + 0x14) = this + 0x18;
  setLastError(this,0);
  this[0x17330] = (PacketBuf)0x1;
  clear_ptr(this);
  return;
}

```

---

## clear_ptr

```asm
// === 0858c93a PacketBuf::clear_ptr  [0x0858c93a-0x858c949] ===
 858c93a:	55                   	push   %ebp
 858c93b:	89 e5                	mov    %esp,%ebp
 858c93d:	8b 45 08             	mov    0x8(%ebp),%eax
 858c940:	c7 40 04 0d 00 00 00 	movl   $0xd,0x4(%eax)
 858c947:	5d                   	pop    %ebp
 858c948:	c3                   	ret
 858c949:	90                   	nop

```

```c
// PacketBuf::clear_ptr @ 0x858c93a

/* PacketBuf::clear_ptr() */

void __thiscall PacketBuf::clear_ptr(PacketBuf *this)

{
  *(undefined4 *)(this + 4) = 0xd;
  return;
}

```

---

## compress_packet

```asm
// === 0858daa2 PacketBuf::compress_packet  [0x0858daa2-0x858dc2d] ===
 858daa2:	55                   	push   %ebp
 858daa3:	89 e5                	mov    %esp,%ebp
 858daa5:	83 ec 38             	sub    $0x38,%esp
 858daa8:	b8 e0 b9 45 09       	mov    $0x945b9e0,%eax
 858daad:	0f b6 00             	movzbl (%eax),%eax
 858dab0:	84 c0                	test   %al,%al
 858dab2:	75 4a                	jne    858dafe <_ZN9PacketBuf15compress_packetEv+0x5c>
 858dab4:	c7 04 24 e0 b9 45 09 	movl   $0x945b9e0,(%esp)
 858dabb:	e8 70 78 19 00       	call   8725330 <__cxa_guard_acquire>
 858dac0:	85 c0                	test   %eax,%eax
 858dac2:	0f 95 c0             	setne  %al
 858dac5:	84 c0                	test   %al,%al
 858dac7:	74 35                	je     858dafe <_ZN9PacketBuf15compress_packetEv+0x5c>
 858dac9:	c7 04 24 e8 b9 45 09 	movl   $0x945b9e8,(%esp)
 858dad0:	e8 3d d9 b3 ff       	call   80cb412 <_ZN5MutexC1Ev>
 858dad5:	c7 04 24 e0 b9 45 09 	movl   $0x945b9e0,(%esp)
 858dadc:	e8 6f 77 19 00       	call   8725250 <__cxa_guard_release>
 858dae1:	b8 2e b4 0c 08       	mov    $0x80cb42e,%eax
 858dae6:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 858daed:	08 
 858daee:	c7 44 24 04 e8 b9 45 	movl   $0x945b9e8,0x4(%esp)
 858daf5:	09 
 858daf6:	89 04 24             	mov    %eax,(%esp)
 858daf9:	e8 d2 02 af ff       	call   807ddd0 <__cxa_atexit@plt>
 858dafe:	8b 45 08             	mov    0x8(%ebp),%eax
 858db01:	8b 40 08             	mov    0x8(%eax),%eax
 858db04:	83 e8 0f             	sub    $0xf,%eax
 858db07:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858db0a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 858db0e:	7f 36                	jg     858db46 <_ZN9PacketBuf15compress_packetEv+0xa4>
 858db10:	c7 44 24 10 74 d5 ca 	movl   $0x8cad574,0x10(%esp)
 858db17:	08 
 858db18:	c7 44 24 0c 6e 03 00 	movl   $0x36e,0xc(%esp)
 858db1f:	00 
 858db20:	c7 44 24 08 20 e3 ca 	movl   $0x8cae320,0x8(%esp)
 858db27:	08 
 858db28:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858db2f:	08 
 858db30:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858db37:	e8 ce 60 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858db3c:	b8 00 00 00 00       	mov    $0x0,%eax
 858db41:	e9 e6 00 00 00       	jmp    858dc2c <_ZN9PacketBuf15compress_packetEv+0x18a>
 858db46:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858db49:	83 c0 0d             	add    $0xd,%eax
 858db4c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 858db4f:	c7 04 24 e8 b9 45 09 	movl   $0x945b9e8,(%esp)
 858db56:	e8 43 78 b7 ff       	call   810539e <_ZN5Mutex4lockEv>
 858db5b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 858db5e:	8b 45 08             	mov    0x8(%ebp),%eax
 858db61:	8b 40 14             	mov    0x14(%eax),%eax
 858db64:	8d 48 0f             	lea    0xf(%eax),%ecx
 858db67:	b8 00 ba 45 09       	mov    $0x945ba00,%eax
 858db6c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 858db70:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 858db74:	8d 55 ec             	lea    -0x14(%ebp),%edx
 858db77:	89 54 24 04          	mov    %edx,0x4(%esp)
 858db7b:	89 04 24             	mov    %eax,(%esp)
 858db7e:	e8 4d 2d 1e 00       	call   87708d0 <compress>
 858db83:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858db86:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 858db8a:	75 0a                	jne    858db96 <_ZN9PacketBuf15compress_packetEv+0xf4>
 858db8c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 858db8f:	3d 09 73 01 00       	cmp    $0x17309,%eax
 858db94:	76 46                	jbe    858dbdc <_ZN9PacketBuf15compress_packetEv+0x13a>
 858db96:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858db99:	89 44 24 14          	mov    %eax,0x14(%esp)
 858db9d:	c7 44 24 10 a3 d5 ca 	movl   $0x8cad5a3,0x10(%esp)
 858dba4:	08 
 858dba5:	c7 44 24 0c 80 03 00 	movl   $0x380,0xc(%esp)
 858dbac:	00 
 858dbad:	c7 44 24 08 20 e3 ca 	movl   $0x8cae320,0x8(%esp)
 858dbb4:	08 
 858dbb5:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858dbbc:	08 
 858dbbd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858dbc4:	e8 41 60 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858dbc9:	c7 04 24 e8 b9 45 09 	movl   $0x945b9e8,(%esp)
 858dbd0:	e8 dd 77 b7 ff       	call   81053b2 <_ZN5Mutex6unlockEv>
 858dbd5:	b8 00 00 00 00       	mov    $0x0,%eax
 858dbda:	eb 50                	jmp    858dc2c <_ZN9PacketBuf15compress_packetEv+0x18a>
 858dbdc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 858dbdf:	8b 55 08             	mov    0x8(%ebp),%edx
 858dbe2:	8b 52 14             	mov    0x14(%edx),%edx
 858dbe5:	83 c2 0f             	add    $0xf,%edx
 858dbe8:	89 44 24 08          	mov    %eax,0x8(%esp)
 858dbec:	c7 44 24 04 00 ba 45 	movl   $0x945ba00,0x4(%esp)
 858dbf3:	09 
 858dbf4:	89 14 24             	mov    %edx,(%esp)
 858dbf7:	e8 a4 fc ae ff       	call   807d8a0 <memcpy@plt>
 858dbfc:	c7 04 24 e8 b9 45 09 	movl   $0x945b9e8,(%esp)
 858dc03:	e8 aa 77 b7 ff       	call   81053b2 <_ZN5Mutex6unlockEv>
 858dc08:	8b 45 ec             	mov    -0x14(%ebp),%eax
 858dc0b:	83 c0 0f             	add    $0xf,%eax
 858dc0e:	89 c2                	mov    %eax,%edx
 858dc10:	8b 45 08             	mov    0x8(%ebp),%eax
 858dc13:	89 50 08             	mov    %edx,0x8(%eax)
 858dc16:	8b 45 08             	mov    0x8(%ebp),%eax
 858dc19:	8b 40 14             	mov    0x14(%eax),%eax
 858dc1c:	8d 50 03             	lea    0x3(%eax),%edx
 858dc1f:	8b 45 08             	mov    0x8(%ebp),%eax
 858dc22:	8b 40 08             	mov    0x8(%eax),%eax
 858dc25:	89 02                	mov    %eax,(%edx)
 858dc27:	b8 01 00 00 00       	mov    $0x1,%eax
 858dc2c:	c9                   	leave
 858dc2d:	c3                   	ret

```

```c
// PacketBuf::compress_packet @ 0x858daa2

/* PacketBuf::compress_packet() */

undefined4 __thiscall PacketBuf::compress_packet(PacketBuf *this)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  int local_14;
  int local_10;
  
  if (compress_packet()::compressed_buffer_mutex == '\0') {
    iVar1 = __cxa_guard_acquire(&compress_packet()::compressed_buffer_mutex);
    if (iVar1 != 0) {
      Mutex::Mutex((Mutex *)compress_packet()::compressed_buffer_mutex);
      __cxa_guard_release(&compress_packet()::compressed_buffer_mutex);
      __cxa_atexit(Mutex::~Mutex,compress_packet()::compressed_buffer_mutex,&__dso_handle);
    }
  }
  local_10 = *(int *)(this + 8) + -0xf;
  if (local_10 < 1) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::compress_packet()",0x36e,
               "error; compress failed:unexpected message size");
    uVar2 = 0;
  }
  else {
    local_18 = *(int *)(this + 8) - 2;
    Mutex::lock((Mutex *)compress_packet()::compressed_buffer_mutex);
    local_14 = compress(compress_packet()::compressed_buffer,&local_18,*(int *)(this + 0x14) + 0xf,
                        local_10);
    if ((local_14 == 0) && (local_18 < 0x1730a)) {
      memcpy((void *)(*(int *)(this + 0x14) + 0xf),compress_packet()::compressed_buffer,local_18);
      Mutex::unlock((Mutex *)compress_packet()::compressed_buffer_mutex);
      *(uint *)(this + 8) = local_18 + 0xf;
      *(undefined4 *)(*(int *)(this + 0x14) + 3) = *(undefined4 *)(this + 8);
      uVar2 = 1;
    }
    else {
      LogManager::logFormat
                (1,"packet_buf.cpp","bool PacketBuf::compress_packet()",0x380,
                 "error; compress failed:%d",local_14);
      Mutex::unlock((Mutex *)compress_packet()::compressed_buffer_mutex);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## copy

```asm
// === 0858dcd2 PacketBuf::copy  [0x0858dcd2-0x858dd4b] ===
 858dcd2:	55                   	push   %ebp
 858dcd3:	89 e5                	mov    %esp,%ebp
 858dcd5:	83 ec 18             	sub    $0x18,%esp
 858dcd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 858dcdb:	8b 50 04             	mov    0x4(%eax),%edx
 858dcde:	8b 45 08             	mov    0x8(%ebp),%eax
 858dce1:	89 50 04             	mov    %edx,0x4(%eax)
 858dce4:	8b 45 0c             	mov    0xc(%ebp),%eax
 858dce7:	8b 50 08             	mov    0x8(%eax),%edx
 858dcea:	8b 45 08             	mov    0x8(%ebp),%eax
 858dced:	89 50 08             	mov    %edx,0x8(%eax)
 858dcf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858dcf3:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 858dcf7:	8b 45 08             	mov    0x8(%ebp),%eax
 858dcfa:	88 50 0c             	mov    %dl,0xc(%eax)
 858dcfd:	8b 45 08             	mov    0x8(%ebp),%eax
 858dd00:	8d 50 18             	lea    0x18(%eax),%edx
 858dd03:	8b 45 08             	mov    0x8(%ebp),%eax
 858dd06:	89 50 14             	mov    %edx,0x14(%eax)
 858dd09:	8b 45 08             	mov    0x8(%ebp),%eax
 858dd0c:	83 c0 18             	add    $0x18,%eax
 858dd0f:	c7 44 24 08 18 73 01 	movl   $0x17318,0x8(%esp)
 858dd16:	00 
 858dd17:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858dd1e:	00 
 858dd1f:	89 04 24             	mov    %eax,(%esp)
 858dd22:	e8 99 ff ae ff       	call   807dcc0 <memset@plt>
 858dd27:	8b 45 08             	mov    0x8(%ebp),%eax
 858dd2a:	8b 40 08             	mov    0x8(%eax),%eax
 858dd2d:	8b 55 0c             	mov    0xc(%ebp),%edx
 858dd30:	8d 4a 18             	lea    0x18(%edx),%ecx
 858dd33:	8b 55 08             	mov    0x8(%ebp),%edx
 858dd36:	83 c2 18             	add    $0x18,%edx
 858dd39:	89 44 24 08          	mov    %eax,0x8(%esp)
 858dd3d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 858dd41:	89 14 24             	mov    %edx,(%esp)
 858dd44:	e8 57 fb ae ff       	call   807d8a0 <memcpy@plt>
 858dd49:	c9                   	leave
 858dd4a:	c3                   	ret
 858dd4b:	90                   	nop

```

```c
// PacketBuf::copy @ 0x858dcd2

/* PacketBuf::copy(PacketBuf const&) */

void __thiscall PacketBuf::copy(PacketBuf *this,PacketBuf *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  *(PacketBuf **)(this + 0x14) = this + 0x18;
  memset(this + 0x18,0,95000);
  memcpy(this + 0x18,param_1 + 0x18,*(size_t *)(this + 8));
  return;
}

```

---

## encFinalize

```asm
// === 0858df30 PacketBuf::encFinalize  [0x0858df30-0x858e1ea] ===
 858df30:	55                   	push   %ebp
 858df31:	89 e5                	mov    %esp,%ebp
 858df33:	83 ec 38             	sub    $0x38,%esp
 858df36:	8b 45 08             	mov    0x8(%ebp),%eax
 858df39:	8b 40 08             	mov    0x8(%eax),%eax
 858df3c:	8d 50 f1             	lea    -0xf(%eax),%edx
 858df3f:	8b 45 08             	mov    0x8(%ebp),%eax
 858df42:	8b 40 14             	mov    0x14(%eax),%eax
 858df45:	83 c0 0f             	add    $0xf,%eax
 858df48:	89 54 24 04          	mov    %edx,0x4(%esp)
 858df4c:	89 04 24             	mov    %eax,(%esp)
 858df4f:	e8 74 f5 ef ff       	call   848d4c8 <_ZN10Encryption6crc32NEPvi>
 858df54:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858df57:	8b 45 08             	mov    0x8(%ebp),%eax
 858df5a:	8b 00                	mov    (%eax),%eax
 858df5c:	85 c0                	test   %eax,%eax
 858df5e:	74 0a                	je     858df6a <_ZN9PacketBuf11encFinalizeEv+0x3a>
 858df60:	83 f8 01             	cmp    $0x1,%eax
 858df63:	74 61                	je     858dfc6 <_ZN9PacketBuf11encFinalizeEv+0x96>
 858df65:	e9 b5 00 00 00       	jmp    858e01f <_ZN9PacketBuf11encFinalizeEv+0xef>
 858df6a:	8b 45 08             	mov    0x8(%ebp),%eax
 858df6d:	8b 40 14             	mov    0x14(%eax),%eax
 858df70:	8d 50 03             	lea    0x3(%eax),%edx
 858df73:	8b 45 08             	mov    0x8(%ebp),%eax
 858df76:	8b 40 08             	mov    0x8(%eax),%eax
 858df79:	88 02                	mov    %al,(%edx)
 858df7b:	8b 45 08             	mov    0x8(%ebp),%eax
 858df7e:	8b 40 14             	mov    0x14(%eax),%eax
 858df81:	8d 50 04             	lea    0x4(%eax),%edx
 858df84:	8b 45 08             	mov    0x8(%ebp),%eax
 858df87:	8b 40 08             	mov    0x8(%eax),%eax
 858df8a:	25 00 ff 00 00       	and    $0xff00,%eax
 858df8f:	c1 f8 08             	sar    $0x8,%eax
 858df92:	88 02                	mov    %al,(%edx)
 858df94:	8b 45 08             	mov    0x8(%ebp),%eax
 858df97:	8b 40 14             	mov    0x14(%eax),%eax
 858df9a:	8d 50 05             	lea    0x5(%eax),%edx
 858df9d:	8b 45 08             	mov    0x8(%ebp),%eax
 858dfa0:	8b 40 08             	mov    0x8(%eax),%eax
 858dfa3:	25 00 00 ff 00       	and    $0xff0000,%eax
 858dfa8:	c1 f8 10             	sar    $0x10,%eax
 858dfab:	88 02                	mov    %al,(%edx)
 858dfad:	8b 45 08             	mov    0x8(%ebp),%eax
 858dfb0:	8b 40 14             	mov    0x14(%eax),%eax
 858dfb3:	8d 50 06             	lea    0x6(%eax),%edx
 858dfb6:	8b 45 08             	mov    0x8(%ebp),%eax
 858dfb9:	8b 40 08             	mov    0x8(%eax),%eax
 858dfbc:	c1 e8 18             	shr    $0x18,%eax
 858dfbf:	88 02                	mov    %al,(%edx)
 858dfc1:	e9 93 00 00 00       	jmp    858e059 <_ZN9PacketBuf11encFinalizeEv+0x129>
 858dfc6:	8b 45 08             	mov    0x8(%ebp),%eax
 858dfc9:	8b 40 14             	mov    0x14(%eax),%eax
 858dfcc:	8d 50 03             	lea    0x3(%eax),%edx
 858dfcf:	8b 45 08             	mov    0x8(%ebp),%eax
 858dfd2:	8b 40 08             	mov    0x8(%eax),%eax
 858dfd5:	c1 e8 18             	shr    $0x18,%eax
 858dfd8:	88 02                	mov    %al,(%edx)
 858dfda:	8b 45 08             	mov    0x8(%ebp),%eax
 858dfdd:	8b 40 14             	mov    0x14(%eax),%eax
 858dfe0:	8d 50 04             	lea    0x4(%eax),%edx
 858dfe3:	8b 45 08             	mov    0x8(%ebp),%eax
 858dfe6:	8b 40 08             	mov    0x8(%eax),%eax
 858dfe9:	25 00 00 ff 00       	and    $0xff0000,%eax
 858dfee:	c1 f8 10             	sar    $0x10,%eax
 858dff1:	88 02                	mov    %al,(%edx)
 858dff3:	8b 45 08             	mov    0x8(%ebp),%eax
 858dff6:	8b 40 14             	mov    0x14(%eax),%eax
 858dff9:	8d 50 05             	lea    0x5(%eax),%edx
 858dffc:	8b 45 08             	mov    0x8(%ebp),%eax
 858dfff:	8b 40 08             	mov    0x8(%eax),%eax
 858e002:	25 00 ff 00 00       	and    $0xff00,%eax
 858e007:	c1 f8 08             	sar    $0x8,%eax
 858e00a:	88 02                	mov    %al,(%edx)
 858e00c:	8b 45 08             	mov    0x8(%ebp),%eax
 858e00f:	8b 40 14             	mov    0x14(%eax),%eax
 858e012:	8d 50 06             	lea    0x6(%eax),%edx
 858e015:	8b 45 08             	mov    0x8(%ebp),%eax
 858e018:	8b 40 08             	mov    0x8(%eax),%eax
 858e01b:	88 02                	mov    %al,(%edx)
 858e01d:	eb 3a                	jmp    858e059 <_ZN9PacketBuf11encFinalizeEv+0x129>
 858e01f:	8b 45 08             	mov    0x8(%ebp),%eax
 858e022:	8b 00                	mov    (%eax),%eax
 858e024:	89 44 24 14          	mov    %eax,0x14(%esp)
 858e028:	c7 44 24 10 69 d4 ca 	movl   $0x8cad469,0x10(%esp)
 858e02f:	08 
 858e030:	c7 44 24 0c 19 04 00 	movl   $0x419,0xc(%esp)
 858e037:	00 
 858e038:	c7 44 24 08 b0 e2 ca 	movl   $0x8cae2b0,0x8(%esp)
 858e03f:	08 
 858e040:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858e047:	08 
 858e048:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858e04f:	e8 b6 5b 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858e054:	e9 90 01 00 00       	jmp    858e1e9 <_ZN9PacketBuf11encFinalizeEv+0x2b9>
 858e059:	8b 45 08             	mov    0x8(%ebp),%eax
 858e05c:	8b 40 08             	mov    0x8(%eax),%eax
 858e05f:	8d 50 f1             	lea    -0xf(%eax),%edx
 858e062:	8b 45 08             	mov    0x8(%ebp),%eax
 858e065:	8b 40 14             	mov    0x14(%eax),%eax
 858e068:	83 c0 0f             	add    $0xf,%eax
 858e06b:	89 54 24 04          	mov    %edx,0x4(%esp)
 858e06f:	89 04 24             	mov    %eax,(%esp)
 858e072:	e8 51 f4 ef ff       	call   848d4c8 <_ZN10Encryption6crc32NEPvi>
 858e077:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858e07a:	8b 45 08             	mov    0x8(%ebp),%eax
 858e07d:	8b 00                	mov    (%eax),%eax
 858e07f:	85 c0                	test   %eax,%eax
 858e081:	74 0e                	je     858e091 <_ZN9PacketBuf11encFinalizeEv+0x161>
 858e083:	83 f8 01             	cmp    $0x1,%eax
 858e086:	0f 84 a0 00 00 00    	je     858e12c <_ZN9PacketBuf11encFinalizeEv+0x1fc>
 858e08c:	e9 22 01 00 00       	jmp    858e1b3 <_ZN9PacketBuf11encFinalizeEv+0x283>
 858e091:	8b 45 08             	mov    0x8(%ebp),%eax
 858e094:	8b 40 14             	mov    0x14(%eax),%eax
 858e097:	8d 50 07             	lea    0x7(%eax),%edx
 858e09a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858e09d:	88 02                	mov    %al,(%edx)
 858e09f:	8b 45 08             	mov    0x8(%ebp),%eax
 858e0a2:	8b 40 14             	mov    0x14(%eax),%eax
 858e0a5:	8d 50 08             	lea    0x8(%eax),%edx
 858e0a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858e0ab:	25 00 ff 00 00       	and    $0xff00,%eax
 858e0b0:	c1 e8 08             	shr    $0x8,%eax
 858e0b3:	88 02                	mov    %al,(%edx)
 858e0b5:	8b 45 08             	mov    0x8(%ebp),%eax
 858e0b8:	8b 40 14             	mov    0x14(%eax),%eax
 858e0bb:	8d 50 09             	lea    0x9(%eax),%edx
 858e0be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858e0c1:	25 00 00 ff 00       	and    $0xff0000,%eax
 858e0c6:	c1 e8 10             	shr    $0x10,%eax
 858e0c9:	88 02                	mov    %al,(%edx)
 858e0cb:	8b 45 08             	mov    0x8(%ebp),%eax
 858e0ce:	8b 40 14             	mov    0x14(%eax),%eax
 858e0d1:	8d 50 0a             	lea    0xa(%eax),%edx
 858e0d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858e0d7:	c1 e8 18             	shr    $0x18,%eax
 858e0da:	88 02                	mov    %al,(%edx)
 858e0dc:	8b 45 08             	mov    0x8(%ebp),%eax
 858e0df:	8b 40 14             	mov    0x14(%eax),%eax
 858e0e2:	8d 50 0b             	lea    0xb(%eax),%edx
 858e0e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858e0e8:	88 02                	mov    %al,(%edx)
 858e0ea:	8b 45 08             	mov    0x8(%ebp),%eax
 858e0ed:	8b 40 14             	mov    0x14(%eax),%eax
 858e0f0:	8d 50 0c             	lea    0xc(%eax),%edx
 858e0f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858e0f6:	25 00 ff 00 00       	and    $0xff00,%eax
 858e0fb:	c1 e8 08             	shr    $0x8,%eax
 858e0fe:	88 02                	mov    %al,(%edx)
 858e100:	8b 45 08             	mov    0x8(%ebp),%eax
 858e103:	8b 40 14             	mov    0x14(%eax),%eax
 858e106:	8d 50 0d             	lea    0xd(%eax),%edx
 858e109:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858e10c:	25 00 00 ff 00       	and    $0xff0000,%eax
 858e111:	c1 e8 10             	shr    $0x10,%eax
 858e114:	88 02                	mov    %al,(%edx)
 858e116:	8b 45 08             	mov    0x8(%ebp),%eax
 858e119:	8b 40 14             	mov    0x14(%eax),%eax
 858e11c:	8d 50 0e             	lea    0xe(%eax),%edx
 858e11f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858e122:	c1 e8 18             	shr    $0x18,%eax
 858e125:	88 02                	mov    %al,(%edx)
 858e127:	e9 bd 00 00 00       	jmp    858e1e9 <_ZN9PacketBuf11encFinalizeEv+0x2b9>
 858e12c:	8b 45 08             	mov    0x8(%ebp),%eax
 858e12f:	8b 40 14             	mov    0x14(%eax),%eax
 858e132:	8d 50 07             	lea    0x7(%eax),%edx
 858e135:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858e138:	c1 e8 18             	shr    $0x18,%eax
 858e13b:	88 02                	mov    %al,(%edx)
 858e13d:	8b 45 08             	mov    0x8(%ebp),%eax
 858e140:	8b 40 14             	mov    0x14(%eax),%eax
 858e143:	8d 50 08             	lea    0x8(%eax),%edx
 858e146:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858e149:	25 00 00 ff 00       	and    $0xff0000,%eax
 858e14e:	c1 e8 10             	shr    $0x10,%eax
 858e151:	88 02                	mov    %al,(%edx)
 858e153:	8b 45 08             	mov    0x8(%ebp),%eax
 858e156:	8b 40 14             	mov    0x14(%eax),%eax
 858e159:	8d 50 09             	lea    0x9(%eax),%edx
 858e15c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858e15f:	25 00 ff 00 00       	and    $0xff00,%eax
 858e164:	c1 e8 08             	shr    $0x8,%eax
 858e167:	88 02                	mov    %al,(%edx)
 858e169:	8b 45 08             	mov    0x8(%ebp),%eax
 858e16c:	8b 40 14             	mov    0x14(%eax),%eax
 858e16f:	8d 50 0a             	lea    0xa(%eax),%edx
 858e172:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858e175:	88 02                	mov    %al,(%edx)
 858e177:	8b 45 08             	mov    0x8(%ebp),%eax
 858e17a:	8b 40 14             	mov    0x14(%eax),%eax
 858e17d:	83 c0 0b             	add    $0xb,%eax
 858e180:	c6 00 00             	movb   $0x0,(%eax)
 858e183:	8b 45 08             	mov    0x8(%ebp),%eax
 858e186:	8b 40 14             	mov    0x14(%eax),%eax
 858e189:	83 c0 0c             	add    $0xc,%eax
 858e18c:	c6 00 00             	movb   $0x0,(%eax)
 858e18f:	8b 45 08             	mov    0x8(%ebp),%eax
 858e192:	8b 40 14             	mov    0x14(%eax),%eax
 858e195:	8d 50 0d             	lea    0xd(%eax),%edx
 858e198:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858e19b:	25 00 00 ff 00       	and    $0xff0000,%eax
 858e1a0:	c1 e8 08             	shr    $0x8,%eax
 858e1a3:	88 02                	mov    %al,(%edx)
 858e1a5:	8b 45 08             	mov    0x8(%ebp),%eax
 858e1a8:	8b 40 14             	mov    0x14(%eax),%eax
 858e1ab:	83 c0 0e             	add    $0xe,%eax
 858e1ae:	c6 00 00             	movb   $0x0,(%eax)
 858e1b1:	eb 36                	jmp    858e1e9 <_ZN9PacketBuf11encFinalizeEv+0x2b9>
 858e1b3:	8b 45 08             	mov    0x8(%ebp),%eax
 858e1b6:	8b 00                	mov    (%eax),%eax
 858e1b8:	89 44 24 14          	mov    %eax,0x14(%esp)
 858e1bc:	c7 44 24 10 69 d4 ca 	movl   $0x8cad469,0x10(%esp)
 858e1c3:	08 
 858e1c4:	c7 44 24 0c 39 04 00 	movl   $0x439,0xc(%esp)
 858e1cb:	00 
 858e1cc:	c7 44 24 08 b0 e2 ca 	movl   $0x8cae2b0,0x8(%esp)
 858e1d3:	08 
 858e1d4:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858e1db:	08 
 858e1dc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858e1e3:	e8 22 5a 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858e1e8:	90                   	nop
 858e1e9:	c9                   	leave
 858e1ea:	c3                   	ret

```

```c
// PacketBuf::encFinalize @ 0x858df30

/* PacketBuf::encFinalize() */

void __thiscall PacketBuf::encFinalize(PacketBuf *this)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = Encryption::crc32N((void *)(*(int *)(this + 0x14) + 0xf),*(int *)(this + 8) + -0xf);
  if (*(int *)this == 0) {
    *(char *)(*(int *)(this + 0x14) + 3) = (char)*(undefined4 *)(this + 8);
    *(char *)(*(int *)(this + 0x14) + 4) = (char)((uint)*(undefined4 *)(this + 8) >> 8);
    *(char *)(*(int *)(this + 0x14) + 5) = (char)((uint)*(undefined4 *)(this + 8) >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 6) = (char)((uint)*(undefined4 *)(this + 8) >> 0x18);
  }
  else {
    if (*(int *)this != 1) {
      LogManager::logFormat
                (1,"packet_buf.cpp","void PacketBuf::encFinalize()",0x419,"m_byte_encoding error %d"
                 ,*(undefined4 *)this);
      return;
    }
    *(char *)(*(int *)(this + 0x14) + 3) = (char)((uint)*(undefined4 *)(this + 8) >> 0x18);
    *(char *)(*(int *)(this + 0x14) + 4) = (char)((uint)*(undefined4 *)(this + 8) >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 5) = (char)((uint)*(undefined4 *)(this + 8) >> 8);
    *(char *)(*(int *)(this + 0x14) + 6) = (char)*(undefined4 *)(this + 8);
  }
  uVar5 = Encryption::crc32N((void *)(*(int *)(this + 0x14) + 0xf),*(int *)(this + 8) + -0xf);
  uVar1 = (undefined1)((uint)uVar4 >> 8);
  uVar2 = (undefined1)((uint)uVar4 >> 0x10);
  uVar3 = (undefined1)((uint)uVar4 >> 0x18);
  if (*(int *)this == 0) {
    *(char *)(*(int *)(this + 0x14) + 7) = (char)uVar4;
    *(undefined1 *)(*(int *)(this + 0x14) + 8) = uVar1;
    *(undefined1 *)(*(int *)(this + 0x14) + 9) = uVar2;
    *(undefined1 *)(*(int *)(this + 0x14) + 10) = uVar3;
    *(char *)(*(int *)(this + 0x14) + 0xb) = (char)uVar5;
    *(char *)(*(int *)(this + 0x14) + 0xc) = (char)((uint)uVar5 >> 8);
    *(char *)(*(int *)(this + 0x14) + 0xd) = (char)((uint)uVar5 >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 0xe) = (char)((uint)uVar5 >> 0x18);
  }
  else if (*(int *)this == 1) {
    *(undefined1 *)(*(int *)(this + 0x14) + 7) = uVar3;
    *(undefined1 *)(*(int *)(this + 0x14) + 8) = uVar2;
    *(undefined1 *)(*(int *)(this + 0x14) + 9) = uVar1;
    *(char *)(*(int *)(this + 0x14) + 10) = (char)uVar4;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xb) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xc) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xd) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xe) = 0;
  }
  else {
    LogManager::logFormat
              (1,"packet_buf.cpp","void PacketBuf::encFinalize()",0x439,"m_byte_encoding error %d",
               *(undefined4 *)this);
  }
  return;
}

```

---

## encrypt_packet

```asm
// === 0858d86a PacketBuf::encrypt_packet  [0x0858d86a-0x858da27] ===
 858d86a:	55                   	push   %ebp
 858d86b:	89 e5                	mov    %esp,%ebp
 858d86d:	57                   	push   %edi
 858d86e:	56                   	push   %esi
 858d86f:	53                   	push   %ebx
 858d870:	81 ec 6c 73 01 00    	sub    $0x1736c,%esp
 858d876:	8b 45 08             	mov    0x8(%ebp),%eax
 858d879:	8b 40 14             	mov    0x14(%eax),%eax
 858d87c:	0f b6 00             	movzbl (%eax),%eax
 858d87f:	84 c0                	test   %al,%al
 858d881:	75 16                	jne    858d899 <_ZN9PacketBuf14encrypt_packetEv+0x2f>
 858d883:	8b 45 08             	mov    0x8(%ebp),%eax
 858d886:	8b 40 14             	mov    0x14(%eax),%eax
 858d889:	83 c0 01             	add    $0x1,%eax
 858d88c:	0f b7 00             	movzwl (%eax),%eax
 858d88f:	66 83 f8 01          	cmp    $0x1,%ax
 858d893:	0f 84 52 01 00 00    	je     858d9eb <_ZN9PacketBuf14encrypt_packetEv+0x181>
 858d899:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 858d89d:	8d 85 bc 8c fe ff    	lea    -0x17344(%ebp),%eax
 858d8a3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 858d8a6:	c7 45 dc 18 73 01 00 	movl   $0x17318,-0x24(%ebp)
 858d8ad:	8b 45 08             	mov    0x8(%ebp),%eax
 858d8b0:	8b 40 08             	mov    0x8(%eax),%eax
 858d8b3:	83 e8 0f             	sub    $0xf,%eax
 858d8b6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 858d8b9:	8b 45 08             	mov    0x8(%ebp),%eax
 858d8bc:	8b 40 14             	mov    0x14(%eax),%eax
 858d8bf:	83 c0 01             	add    $0x1,%eax
 858d8c2:	0f b7 00             	movzwl (%eax),%eax
 858d8c5:	0f b7 d8             	movzwl %ax,%ebx
 858d8c8:	e8 6d 98 d1 ff       	call   82a713a <_Z8G_Cipherv>
 858d8cd:	8d 55 d8             	lea    -0x28(%ebp),%edx
 858d8d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 858d8d4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858d8d8:	89 04 24             	mov    %eax,(%esp)
 858d8db:	e8 e0 9a b0 ff       	call   80973c0 <_ZNK6Cipher14AdjustDataSizeEiPi>
 858d8e0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 858d8e3:	3d 18 73 01 00       	cmp    $0x17318,%eax
 858d8e8:	7e 4d                	jle    858d937 <_ZN9PacketBuf14encrypt_packetEv+0xcd>
 858d8ea:	8b 45 d8             	mov    -0x28(%ebp),%eax
 858d8ed:	c7 44 24 18 18 73 01 	movl   $0x17318,0x18(%esp)
 858d8f4:	00 
 858d8f5:	89 44 24 14          	mov    %eax,0x14(%esp)
 858d8f9:	c7 44 24 10 24 d5 ca 	movl   $0x8cad524,0x10(%esp)
 858d900:	08 
 858d901:	c7 44 24 0c 02 03 00 	movl   $0x302,0xc(%esp)
 858d908:	00 
 858d909:	c7 44 24 08 80 e3 ca 	movl   $0x8cae380,0x8(%esp)
 858d910:	08 
 858d911:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858d918:	08 
 858d919:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858d920:	e8 e5 62 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858d925:	8b 45 d8             	mov    -0x28(%ebp),%eax
 858d928:	89 04 24             	mov    %eax,(%esp)
 858d92b:	e8 90 54 19 00       	call   8722dc0 <_Znaj>
 858d930:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 858d933:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 858d937:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 858d93a:	8b 45 08             	mov    0x8(%ebp),%eax
 858d93d:	8b 40 08             	mov    0x8(%eax),%eax
 858d940:	83 e8 0f             	sub    $0xf,%eax
 858d943:	89 85 b4 8c fe ff    	mov    %eax,-0x1734c(%ebp)
 858d949:	8b 45 08             	mov    0x8(%ebp),%eax
 858d94c:	8b 40 14             	mov    0x14(%eax),%eax
 858d94f:	8d 78 0f             	lea    0xf(%eax),%edi
 858d952:	8b 45 08             	mov    0x8(%ebp),%eax
 858d955:	8b 40 14             	mov    0x14(%eax),%eax
 858d958:	83 c0 01             	add    $0x1,%eax
 858d95b:	0f b7 00             	movzwl (%eax),%eax
 858d95e:	0f b7 d8             	movzwl %ax,%ebx
 858d961:	e8 d4 97 d1 ff       	call   82a713a <_Z8G_Cipherv>
 858d966:	8d 55 dc             	lea    -0x24(%ebp),%edx
 858d969:	89 54 24 14          	mov    %edx,0x14(%esp)
 858d96d:	89 74 24 10          	mov    %esi,0x10(%esp)
 858d971:	8b 95 b4 8c fe ff    	mov    -0x1734c(%ebp),%edx
 858d977:	89 54 24 0c          	mov    %edx,0xc(%esp)
 858d97b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 858d97f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858d983:	89 04 24             	mov    %eax,(%esp)
 858d986:	e8 ab 9a b0 ff       	call   8097436 <_ZN6Cipher7EncryptEiPKhiPhPi>
 858d98b:	8b 45 08             	mov    0x8(%ebp),%eax
 858d98e:	8b 50 08             	mov    0x8(%eax),%edx
 858d991:	8b 45 08             	mov    0x8(%ebp),%eax
 858d994:	8b 40 08             	mov    0x8(%eax),%eax
 858d997:	b9 0f 00 00 00       	mov    $0xf,%ecx
 858d99c:	29 c1                	sub    %eax,%ecx
 858d99e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 858d9a1:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 858d9a4:	01 c2                	add    %eax,%edx
 858d9a6:	8b 45 08             	mov    0x8(%ebp),%eax
 858d9a9:	89 50 08             	mov    %edx,0x8(%eax)
 858d9ac:	8b 45 dc             	mov    -0x24(%ebp),%eax
 858d9af:	85 c0                	test   %eax,%eax
 858d9b1:	7e 1f                	jle    858d9d2 <_ZN9PacketBuf14encrypt_packetEv+0x168>
 858d9b3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 858d9b6:	8b 55 08             	mov    0x8(%ebp),%edx
 858d9b9:	8b 52 14             	mov    0x14(%edx),%edx
 858d9bc:	83 c2 0f             	add    $0xf,%edx
 858d9bf:	89 44 24 08          	mov    %eax,0x8(%esp)
 858d9c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 858d9c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 858d9ca:	89 14 24             	mov    %edx,(%esp)
 858d9cd:	e8 ce fe ae ff       	call   807d8a0 <memcpy@plt>
 858d9d2:	80 7d e3 00          	cmpb   $0x0,-0x1d(%ebp)
 858d9d6:	74 41                	je     858da19 <_ZN9PacketBuf14encrypt_packetEv+0x1af>
 858d9d8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 858d9dc:	74 3e                	je     858da1c <_ZN9PacketBuf14encrypt_packetEv+0x1b2>
 858d9de:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 858d9e1:	89 04 24             	mov    %eax,(%esp)
 858d9e4:	e8 c7 71 19 00       	call   8724bb0 <_ZdaPv>
 858d9e9:	eb 32                	jmp    858da1d <_ZN9PacketBuf14encrypt_packetEv+0x1b3>
 858d9eb:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 858d9f2:	8b 45 08             	mov    0x8(%ebp),%eax
 858d9f5:	8b 40 08             	mov    0x8(%eax),%eax
 858d9f8:	8d 48 f1             	lea    -0xf(%eax),%ecx
 858d9fb:	8b 45 08             	mov    0x8(%ebp),%eax
 858d9fe:	8b 40 14             	mov    0x14(%eax),%eax
 858da01:	8d 50 0f             	lea    0xf(%eax),%edx
 858da04:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 858da07:	89 44 24 08          	mov    %eax,0x8(%esp)
 858da0b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 858da0f:	89 14 24             	mov    %edx,(%esp)
 858da12:	e8 59 00 f0 ff       	call   848da70 <_ZN10Encryption7EncryptEPviRj>
 858da17:	eb 04                	jmp    858da1d <_ZN9PacketBuf14encrypt_packetEv+0x1b3>
 858da19:	90                   	nop
 858da1a:	eb 01                	jmp    858da1d <_ZN9PacketBuf14encrypt_packetEv+0x1b3>
 858da1c:	90                   	nop
 858da1d:	81 c4 6c 73 01 00    	add    $0x1736c,%esp
 858da23:	5b                   	pop    %ebx
 858da24:	5e                   	pop    %esi
 858da25:	5f                   	pop    %edi
 858da26:	5d                   	pop    %ebp
 858da27:	c3                   	ret

```

```c
// PacketBuf::encrypt_packet @ 0x858d86a

/* PacketBuf::encrypt_packet() */

void __thiscall PacketBuf::encrypt_packet(PacketBuf *this)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  Cipher *pCVar5;
  uchar auStack_17348 [95000];
  uint local_30;
  uint local_2c;
  size_t local_28;
  char local_21;
  uchar *local_20;
  
  if ((**(char **)(this + 0x14) == '\0') && (*(short *)(*(int *)(this + 0x14) + 1) == 1)) {
    local_30 = 0;
    Encryption::Encrypt((void *)(*(int *)(this + 0x14) + 0xf),*(int *)(this + 8) + -0xf,&local_30);
  }
  else {
    local_21 = '\0';
    local_20 = auStack_17348;
    local_28 = 95000;
    local_2c = *(int *)(this + 8) - 0xf;
    uVar1 = *(ushort *)(*(int *)(this + 0x14) + 1);
    pCVar5 = (Cipher *)G_Cipher();
    Cipher::AdjustDataSize(pCVar5,(uint)uVar1,(int *)&local_2c);
    if (95000 < (int)local_2c) {
      LogManager::logFormat
                (1,"packet_buf.cpp","void PacketBuf::encrypt_packet()",0x302,
                 "Buffer overflow[Cipher] : EncryptDataSize[%d]>[%d]",local_2c,95000);
      local_20 = operator_new__(local_2c);
      local_21 = '\x01';
    }
    puVar4 = local_20;
    iVar2 = *(int *)(this + 8);
    iVar3 = *(int *)(this + 0x14);
    uVar1 = *(ushort *)(*(int *)(this + 0x14) + 1);
    pCVar5 = (Cipher *)G_Cipher();
    Cipher::Encrypt(pCVar5,(uint)uVar1,(uchar *)(iVar3 + 0xf),iVar2 + -0xf,puVar4,(int *)&local_28);
    *(size_t *)(this + 8) = *(int *)(this + 8) + (0xf - *(int *)(this + 8)) + local_28;
    if (0 < (int)local_28) {
      memcpy((void *)(*(int *)(this + 0x14) + 0xf),local_20,local_28);
    }
    if ((local_21 != '\0') && (local_20 != (uchar *)0x0)) {
      operator_delete__(local_20);
    }
  }
  return;
}

```

---

## finalize

```asm
// === 0858d548 PacketBuf::finalize  [0x0858d548-0x858d869] ===
 858d548:	55                   	push   %ebp
 858d549:	89 e5                	mov    %esp,%ebp
 858d54b:	83 ec 48             	sub    $0x48,%esp
 858d54e:	8b 45 0c             	mov    0xc(%ebp),%eax
 858d551:	88 45 e4             	mov    %al,-0x1c(%ebp)
 858d554:	8b 45 08             	mov    0x8(%ebp),%eax
 858d557:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 858d55b:	88 90 30 73 01 00    	mov    %dl,0x17330(%eax)
 858d561:	8b 45 08             	mov    0x8(%ebp),%eax
 858d564:	89 04 24             	mov    %eax,(%esp)
 858d567:	e8 87 71 ce ff       	call   82746f3 <_Z20_NS_PI_MakeHash_NOTIP9PacketBuf>
 858d56c:	8b 45 08             	mov    0x8(%ebp),%eax
 858d56f:	8b 50 04             	mov    0x4(%eax),%edx
 858d572:	8b 45 08             	mov    0x8(%ebp),%eax
 858d575:	89 50 08             	mov    %edx,0x8(%eax)
 858d578:	8b 45 08             	mov    0x8(%ebp),%eax
 858d57b:	8b 40 08             	mov    0x8(%eax),%eax
 858d57e:	8d 50 f1             	lea    -0xf(%eax),%edx
 858d581:	8b 45 08             	mov    0x8(%ebp),%eax
 858d584:	8b 40 14             	mov    0x14(%eax),%eax
 858d587:	83 c0 0f             	add    $0xf,%eax
 858d58a:	89 54 24 04          	mov    %edx,0x4(%esp)
 858d58e:	89 04 24             	mov    %eax,(%esp)
 858d591:	e8 32 ff ef ff       	call   848d4c8 <_ZN10Encryption6crc32NEPvi>
 858d596:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858d599:	8b 45 08             	mov    0x8(%ebp),%eax
 858d59c:	8b 00                	mov    (%eax),%eax
 858d59e:	85 c0                	test   %eax,%eax
 858d5a0:	74 0a                	je     858d5ac <_ZN9PacketBuf8finalizeEb+0x64>
 858d5a2:	83 f8 01             	cmp    $0x1,%eax
 858d5a5:	74 61                	je     858d608 <_ZN9PacketBuf8finalizeEb+0xc0>
 858d5a7:	e9 b5 00 00 00       	jmp    858d661 <_ZN9PacketBuf8finalizeEb+0x119>
 858d5ac:	8b 45 08             	mov    0x8(%ebp),%eax
 858d5af:	8b 40 14             	mov    0x14(%eax),%eax
 858d5b2:	8d 50 03             	lea    0x3(%eax),%edx
 858d5b5:	8b 45 08             	mov    0x8(%ebp),%eax
 858d5b8:	8b 40 08             	mov    0x8(%eax),%eax
 858d5bb:	88 02                	mov    %al,(%edx)
 858d5bd:	8b 45 08             	mov    0x8(%ebp),%eax
 858d5c0:	8b 40 14             	mov    0x14(%eax),%eax
 858d5c3:	8d 50 04             	lea    0x4(%eax),%edx
 858d5c6:	8b 45 08             	mov    0x8(%ebp),%eax
 858d5c9:	8b 40 08             	mov    0x8(%eax),%eax
 858d5cc:	25 00 ff 00 00       	and    $0xff00,%eax
 858d5d1:	c1 f8 08             	sar    $0x8,%eax
 858d5d4:	88 02                	mov    %al,(%edx)
 858d5d6:	8b 45 08             	mov    0x8(%ebp),%eax
 858d5d9:	8b 40 14             	mov    0x14(%eax),%eax
 858d5dc:	8d 50 05             	lea    0x5(%eax),%edx
 858d5df:	8b 45 08             	mov    0x8(%ebp),%eax
 858d5e2:	8b 40 08             	mov    0x8(%eax),%eax
 858d5e5:	25 00 00 ff 00       	and    $0xff0000,%eax
 858d5ea:	c1 f8 10             	sar    $0x10,%eax
 858d5ed:	88 02                	mov    %al,(%edx)
 858d5ef:	8b 45 08             	mov    0x8(%ebp),%eax
 858d5f2:	8b 40 14             	mov    0x14(%eax),%eax
 858d5f5:	8d 50 06             	lea    0x6(%eax),%edx
 858d5f8:	8b 45 08             	mov    0x8(%ebp),%eax
 858d5fb:	8b 40 08             	mov    0x8(%eax),%eax
 858d5fe:	c1 e8 18             	shr    $0x18,%eax
 858d601:	88 02                	mov    %al,(%edx)
 858d603:	e9 93 00 00 00       	jmp    858d69b <_ZN9PacketBuf8finalizeEb+0x153>
 858d608:	8b 45 08             	mov    0x8(%ebp),%eax
 858d60b:	8b 40 14             	mov    0x14(%eax),%eax
 858d60e:	8d 50 03             	lea    0x3(%eax),%edx
 858d611:	8b 45 08             	mov    0x8(%ebp),%eax
 858d614:	8b 40 08             	mov    0x8(%eax),%eax
 858d617:	c1 e8 18             	shr    $0x18,%eax
 858d61a:	88 02                	mov    %al,(%edx)
 858d61c:	8b 45 08             	mov    0x8(%ebp),%eax
 858d61f:	8b 40 14             	mov    0x14(%eax),%eax
 858d622:	8d 50 04             	lea    0x4(%eax),%edx
 858d625:	8b 45 08             	mov    0x8(%ebp),%eax
 858d628:	8b 40 08             	mov    0x8(%eax),%eax
 858d62b:	25 00 00 ff 00       	and    $0xff0000,%eax
 858d630:	c1 f8 10             	sar    $0x10,%eax
 858d633:	88 02                	mov    %al,(%edx)
 858d635:	8b 45 08             	mov    0x8(%ebp),%eax
 858d638:	8b 40 14             	mov    0x14(%eax),%eax
 858d63b:	8d 50 05             	lea    0x5(%eax),%edx
 858d63e:	8b 45 08             	mov    0x8(%ebp),%eax
 858d641:	8b 40 08             	mov    0x8(%eax),%eax
 858d644:	25 00 ff 00 00       	and    $0xff00,%eax
 858d649:	c1 f8 08             	sar    $0x8,%eax
 858d64c:	88 02                	mov    %al,(%edx)
 858d64e:	8b 45 08             	mov    0x8(%ebp),%eax
 858d651:	8b 40 14             	mov    0x14(%eax),%eax
 858d654:	8d 50 06             	lea    0x6(%eax),%edx
 858d657:	8b 45 08             	mov    0x8(%ebp),%eax
 858d65a:	8b 40 08             	mov    0x8(%eax),%eax
 858d65d:	88 02                	mov    %al,(%edx)
 858d65f:	eb 3a                	jmp    858d69b <_ZN9PacketBuf8finalizeEb+0x153>
 858d661:	8b 45 08             	mov    0x8(%ebp),%eax
 858d664:	8b 00                	mov    (%eax),%eax
 858d666:	89 44 24 14          	mov    %eax,0x14(%esp)
 858d66a:	c7 44 24 10 69 d4 ca 	movl   $0x8cad469,0x10(%esp)
 858d671:	08 
 858d672:	c7 44 24 0c c4 02 00 	movl   $0x2c4,0xc(%esp)
 858d679:	00 
 858d67a:	c7 44 24 08 a4 e3 ca 	movl   $0x8cae3a4,0x8(%esp)
 858d681:	08 
 858d682:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858d689:	08 
 858d68a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858d691:	e8 74 65 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858d696:	e9 cd 01 00 00       	jmp    858d868 <_ZN9PacketBuf8finalizeEb+0x320>
 858d69b:	8b 45 08             	mov    0x8(%ebp),%eax
 858d69e:	8b 40 14             	mov    0x14(%eax),%eax
 858d6a1:	83 c0 01             	add    $0x1,%eax
 858d6a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 858d6a8:	8b 45 08             	mov    0x8(%ebp),%eax
 858d6ab:	89 04 24             	mov    %eax,(%esp)
 858d6ae:	e8 95 0b 00 00       	call   858e248 <_ZNK9PacketBuf18isCompressRequiredEPc>
 858d6b3:	84 c0                	test   %al,%al
 858d6b5:	74 16                	je     858d6cd <_ZN9PacketBuf8finalizeEb+0x185>
 858d6b7:	8b 45 08             	mov    0x8(%ebp),%eax
 858d6ba:	89 04 24             	mov    %eax,(%esp)
 858d6bd:	e8 e0 03 00 00       	call   858daa2 <_ZN9PacketBuf15compress_packetEv>
 858d6c2:	83 f0 01             	xor    $0x1,%eax
 858d6c5:	84 c0                	test   %al,%al
 858d6c7:	0f 85 9a 01 00 00    	jne    858d867 <_ZN9PacketBuf8finalizeEb+0x31f>
 858d6cd:	8b 45 08             	mov    0x8(%ebp),%eax
 858d6d0:	8b 40 08             	mov    0x8(%eax),%eax
 858d6d3:	8d 50 f1             	lea    -0xf(%eax),%edx
 858d6d6:	8b 45 08             	mov    0x8(%ebp),%eax
 858d6d9:	8b 40 14             	mov    0x14(%eax),%eax
 858d6dc:	83 c0 0f             	add    $0xf,%eax
 858d6df:	89 54 24 04          	mov    %edx,0x4(%esp)
 858d6e3:	89 04 24             	mov    %eax,(%esp)
 858d6e6:	e8 dd fd ef ff       	call   848d4c8 <_ZN10Encryption6crc32NEPvi>
 858d6eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858d6ee:	8b 45 08             	mov    0x8(%ebp),%eax
 858d6f1:	8b 00                	mov    (%eax),%eax
 858d6f3:	85 c0                	test   %eax,%eax
 858d6f5:	74 0e                	je     858d705 <_ZN9PacketBuf8finalizeEb+0x1bd>
 858d6f7:	83 f8 01             	cmp    $0x1,%eax
 858d6fa:	0f 84 a0 00 00 00    	je     858d7a0 <_ZN9PacketBuf8finalizeEb+0x258>
 858d700:	e9 22 01 00 00       	jmp    858d827 <_ZN9PacketBuf8finalizeEb+0x2df>
 858d705:	8b 45 08             	mov    0x8(%ebp),%eax
 858d708:	8b 40 14             	mov    0x14(%eax),%eax
 858d70b:	8d 50 07             	lea    0x7(%eax),%edx
 858d70e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d711:	88 02                	mov    %al,(%edx)
 858d713:	8b 45 08             	mov    0x8(%ebp),%eax
 858d716:	8b 40 14             	mov    0x14(%eax),%eax
 858d719:	8d 50 08             	lea    0x8(%eax),%edx
 858d71c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d71f:	25 00 ff 00 00       	and    $0xff00,%eax
 858d724:	c1 e8 08             	shr    $0x8,%eax
 858d727:	88 02                	mov    %al,(%edx)
 858d729:	8b 45 08             	mov    0x8(%ebp),%eax
 858d72c:	8b 40 14             	mov    0x14(%eax),%eax
 858d72f:	8d 50 09             	lea    0x9(%eax),%edx
 858d732:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d735:	25 00 00 ff 00       	and    $0xff0000,%eax
 858d73a:	c1 e8 10             	shr    $0x10,%eax
 858d73d:	88 02                	mov    %al,(%edx)
 858d73f:	8b 45 08             	mov    0x8(%ebp),%eax
 858d742:	8b 40 14             	mov    0x14(%eax),%eax
 858d745:	8d 50 0a             	lea    0xa(%eax),%edx
 858d748:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d74b:	c1 e8 18             	shr    $0x18,%eax
 858d74e:	88 02                	mov    %al,(%edx)
 858d750:	8b 45 08             	mov    0x8(%ebp),%eax
 858d753:	8b 40 14             	mov    0x14(%eax),%eax
 858d756:	8d 50 0b             	lea    0xb(%eax),%edx
 858d759:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d75c:	88 02                	mov    %al,(%edx)
 858d75e:	8b 45 08             	mov    0x8(%ebp),%eax
 858d761:	8b 40 14             	mov    0x14(%eax),%eax
 858d764:	8d 50 0c             	lea    0xc(%eax),%edx
 858d767:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d76a:	25 00 ff 00 00       	and    $0xff00,%eax
 858d76f:	c1 e8 08             	shr    $0x8,%eax
 858d772:	88 02                	mov    %al,(%edx)
 858d774:	8b 45 08             	mov    0x8(%ebp),%eax
 858d777:	8b 40 14             	mov    0x14(%eax),%eax
 858d77a:	8d 50 0d             	lea    0xd(%eax),%edx
 858d77d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d780:	25 00 00 ff 00       	and    $0xff0000,%eax
 858d785:	c1 e8 10             	shr    $0x10,%eax
 858d788:	88 02                	mov    %al,(%edx)
 858d78a:	8b 45 08             	mov    0x8(%ebp),%eax
 858d78d:	8b 40 14             	mov    0x14(%eax),%eax
 858d790:	8d 50 0e             	lea    0xe(%eax),%edx
 858d793:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d796:	c1 e8 18             	shr    $0x18,%eax
 858d799:	88 02                	mov    %al,(%edx)
 858d79b:	e9 be 00 00 00       	jmp    858d85e <_ZN9PacketBuf8finalizeEb+0x316>
 858d7a0:	8b 45 08             	mov    0x8(%ebp),%eax
 858d7a3:	8b 40 14             	mov    0x14(%eax),%eax
 858d7a6:	8d 50 07             	lea    0x7(%eax),%edx
 858d7a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d7ac:	c1 e8 18             	shr    $0x18,%eax
 858d7af:	88 02                	mov    %al,(%edx)
 858d7b1:	8b 45 08             	mov    0x8(%ebp),%eax
 858d7b4:	8b 40 14             	mov    0x14(%eax),%eax
 858d7b7:	8d 50 08             	lea    0x8(%eax),%edx
 858d7ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d7bd:	25 00 00 ff 00       	and    $0xff0000,%eax
 858d7c2:	c1 e8 10             	shr    $0x10,%eax
 858d7c5:	88 02                	mov    %al,(%edx)
 858d7c7:	8b 45 08             	mov    0x8(%ebp),%eax
 858d7ca:	8b 40 14             	mov    0x14(%eax),%eax
 858d7cd:	8d 50 09             	lea    0x9(%eax),%edx
 858d7d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d7d3:	25 00 ff 00 00       	and    $0xff00,%eax
 858d7d8:	c1 e8 08             	shr    $0x8,%eax
 858d7db:	88 02                	mov    %al,(%edx)
 858d7dd:	8b 45 08             	mov    0x8(%ebp),%eax
 858d7e0:	8b 40 14             	mov    0x14(%eax),%eax
 858d7e3:	8d 50 0a             	lea    0xa(%eax),%edx
 858d7e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d7e9:	88 02                	mov    %al,(%edx)
 858d7eb:	8b 45 08             	mov    0x8(%ebp),%eax
 858d7ee:	8b 40 14             	mov    0x14(%eax),%eax
 858d7f1:	83 c0 0b             	add    $0xb,%eax
 858d7f4:	c6 00 00             	movb   $0x0,(%eax)
 858d7f7:	8b 45 08             	mov    0x8(%ebp),%eax
 858d7fa:	8b 40 14             	mov    0x14(%eax),%eax
 858d7fd:	83 c0 0c             	add    $0xc,%eax
 858d800:	c6 00 00             	movb   $0x0,(%eax)
 858d803:	8b 45 08             	mov    0x8(%ebp),%eax
 858d806:	8b 40 14             	mov    0x14(%eax),%eax
 858d809:	8d 50 0d             	lea    0xd(%eax),%edx
 858d80c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d80f:	25 00 00 ff 00       	and    $0xff0000,%eax
 858d814:	c1 e8 08             	shr    $0x8,%eax
 858d817:	88 02                	mov    %al,(%edx)
 858d819:	8b 45 08             	mov    0x8(%ebp),%eax
 858d81c:	8b 40 14             	mov    0x14(%eax),%eax
 858d81f:	83 c0 0e             	add    $0xe,%eax
 858d822:	c6 00 00             	movb   $0x0,(%eax)
 858d825:	eb 37                	jmp    858d85e <_ZN9PacketBuf8finalizeEb+0x316>
 858d827:	8b 45 08             	mov    0x8(%ebp),%eax
 858d82a:	8b 00                	mov    (%eax),%eax
 858d82c:	89 44 24 14          	mov    %eax,0x14(%esp)
 858d830:	c7 44 24 10 69 d4 ca 	movl   $0x8cad469,0x10(%esp)
 858d837:	08 
 858d838:	c7 44 24 0c ec 02 00 	movl   $0x2ec,0xc(%esp)
 858d83f:	00 
 858d840:	c7 44 24 08 a4 e3 ca 	movl   $0x8cae3a4,0x8(%esp)
 858d847:	08 
 858d848:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858d84f:	08 
 858d850:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858d857:	e8 ae 63 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858d85c:	eb 0a                	jmp    858d868 <_ZN9PacketBuf8finalizeEb+0x320>
 858d85e:	8b 45 08             	mov    0x8(%ebp),%eax
 858d861:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 858d865:	eb 01                	jmp    858d868 <_ZN9PacketBuf8finalizeEb+0x320>
 858d867:	90                   	nop
 858d868:	c9                   	leave
 858d869:	c3                   	ret

```

```c
// PacketBuf::finalize @ 0x858d548

/* PacketBuf::finalize(bool) */

void __thiscall PacketBuf::finalize(PacketBuf *this,bool param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  this[0x17330] = (PacketBuf)param_1;
  _NS_PI_MakeHash_NOTI(this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(this + 4);
  uVar5 = Encryption::crc32N((void *)(*(int *)(this + 0x14) + 0xf),*(int *)(this + 8) + -0xf);
  if (*(int *)this == 0) {
    *(char *)(*(int *)(this + 0x14) + 3) = (char)*(undefined4 *)(this + 8);
    *(char *)(*(int *)(this + 0x14) + 4) = (char)((uint)*(undefined4 *)(this + 8) >> 8);
    *(char *)(*(int *)(this + 0x14) + 5) = (char)((uint)*(undefined4 *)(this + 8) >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 6) = (char)((uint)*(undefined4 *)(this + 8) >> 0x18);
  }
  else {
    if (*(int *)this != 1) {
      LogManager::logFormat
                (1,"packet_buf.cpp","void PacketBuf::finalize(bool)",0x2c4,
                 "m_byte_encoding error %d",*(undefined4 *)this);
      return;
    }
    *(char *)(*(int *)(this + 0x14) + 3) = (char)((uint)*(undefined4 *)(this + 8) >> 0x18);
    *(char *)(*(int *)(this + 0x14) + 4) = (char)((uint)*(undefined4 *)(this + 8) >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 5) = (char)((uint)*(undefined4 *)(this + 8) >> 8);
    *(char *)(*(int *)(this + 0x14) + 6) = (char)*(undefined4 *)(this + 8);
  }
  cVar3 = isCompressRequired(this,(char *)(*(int *)(this + 0x14) + 1));
  if ((cVar3 != '\0') && (cVar3 = compress_packet(this), cVar3 != '\x01')) {
    return;
  }
  uVar6 = Encryption::crc32N((void *)(*(int *)(this + 0x14) + 0xf),*(int *)(this + 8) + -0xf);
  uVar1 = (undefined1)((uint)uVar5 >> 8);
  uVar2 = (undefined1)((uint)uVar5 >> 0x10);
  uVar4 = (undefined1)((uint)uVar5 >> 0x18);
  if (*(int *)this == 0) {
    *(char *)(*(int *)(this + 0x14) + 7) = (char)uVar5;
    *(undefined1 *)(*(int *)(this + 0x14) + 8) = uVar1;
    *(undefined1 *)(*(int *)(this + 0x14) + 9) = uVar2;
    *(undefined1 *)(*(int *)(this + 0x14) + 10) = uVar4;
    *(char *)(*(int *)(this + 0x14) + 0xb) = (char)uVar6;
    *(char *)(*(int *)(this + 0x14) + 0xc) = (char)((uint)uVar6 >> 8);
    *(char *)(*(int *)(this + 0x14) + 0xd) = (char)((uint)uVar6 >> 0x10);
    *(char *)(*(int *)(this + 0x14) + 0xe) = (char)((uint)uVar6 >> 0x18);
  }
  else {
    if (*(int *)this != 1) {
      LogManager::logFormat
                (1,"packet_buf.cpp","void PacketBuf::finalize(bool)",0x2ec,
                 "m_byte_encoding error %d",*(undefined4 *)this);
      return;
    }
    *(undefined1 *)(*(int *)(this + 0x14) + 7) = uVar4;
    *(undefined1 *)(*(int *)(this + 0x14) + 8) = uVar2;
    *(undefined1 *)(*(int *)(this + 0x14) + 9) = uVar1;
    *(char *)(*(int *)(this + 0x14) + 10) = (char)uVar5;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xb) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xc) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xd) = 0;
    *(undefined1 *)(*(int *)(this + 0x14) + 0xe) = 0;
  }
  this[0xc] = (PacketBuf)0x1;
  return;
}

```

---

## get_binary

```asm
// === 0858d3b2 PacketBuf::get_binary  [0x0858d3b2-0x858d461] ===
 858d3b2:	55                   	push   %ebp
 858d3b3:	89 e5                	mov    %esp,%ebp
 858d3b5:	53                   	push   %ebx
 858d3b6:	83 ec 34             	sub    $0x34,%esp
 858d3b9:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 858d3bd:	74 06                	je     858d3c5 <_ZN9PacketBuf10get_binaryEPci+0x13>
 858d3bf:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 858d3c3:	75 33                	jne    858d3f8 <_ZN9PacketBuf10get_binaryEPci+0x46>
 858d3c5:	c7 44 24 10 bb d4 ca 	movl   $0x8cad4bb,0x10(%esp)
 858d3cc:	08 
 858d3cd:	c7 44 24 0c 1e 02 00 	movl   $0x21e,0xc(%esp)
 858d3d4:	00 
 858d3d5:	c7 44 24 08 60 e4 ca 	movl   $0x8cae460,0x8(%esp)
 858d3dc:	08 
 858d3dd:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858d3e4:	08 
 858d3e5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858d3ec:	e8 19 68 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858d3f1:	b8 00 00 00 00       	mov    $0x0,%eax
 858d3f6:	eb 63                	jmp    858d45b <_ZN9PacketBuf10get_binaryEPci+0xa9>
 858d3f8:	8b 45 10             	mov    0x10(%ebp),%eax
 858d3fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 858d3ff:	8b 45 08             	mov    0x8(%ebp),%eax
 858d402:	89 04 24             	mov    %eax,(%esp)
 858d405:	e8 f2 fa ff ff       	call   858cefc <_ZN9PacketBuf10is_len_endEi>
 858d40a:	84 c0                	test   %al,%al
 858d40c:	74 07                	je     858d415 <_ZN9PacketBuf10get_binaryEPci+0x63>
 858d40e:	b8 00 00 00 00       	mov    $0x0,%eax
 858d413:	eb 46                	jmp    858d45b <_ZN9PacketBuf10get_binaryEPci+0xa9>
 858d415:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858d41c:	eb 2b                	jmp    858d449 <_ZN9PacketBuf10get_binaryEPci+0x97>
 858d41e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d421:	89 c2                	mov    %eax,%edx
 858d423:	03 55 0c             	add    0xc(%ebp),%edx
 858d426:	8b 45 08             	mov    0x8(%ebp),%eax
 858d429:	8b 58 14             	mov    0x14(%eax),%ebx
 858d42c:	8b 45 08             	mov    0x8(%ebp),%eax
 858d42f:	8b 40 04             	mov    0x4(%eax),%eax
 858d432:	89 c1                	mov    %eax,%ecx
 858d434:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 858d437:	0f b6 09             	movzbl (%ecx),%ecx
 858d43a:	88 0a                	mov    %cl,(%edx)
 858d43c:	8d 50 01             	lea    0x1(%eax),%edx
 858d43f:	8b 45 08             	mov    0x8(%ebp),%eax
 858d442:	89 50 04             	mov    %edx,0x4(%eax)
 858d445:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 858d449:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d44c:	3b 45 10             	cmp    0x10(%ebp),%eax
 858d44f:	0f 9c c0             	setl   %al
 858d452:	84 c0                	test   %al,%al
 858d454:	75 c8                	jne    858d41e <_ZN9PacketBuf10get_binaryEPci+0x6c>
 858d456:	b8 01 00 00 00       	mov    $0x1,%eax
 858d45b:	83 c4 34             	add    $0x34,%esp
 858d45e:	5b                   	pop    %ebx
 858d45f:	5d                   	pop    %ebp
 858d460:	c3                   	ret
 858d461:	90                   	nop

```

```c
// PacketBuf::get_binary @ 0x858d3b2

/* PacketBuf::get_binary(char*, int) */

undefined4 __thiscall PacketBuf::get_binary(PacketBuf *this,char *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::get_binary(char*, int)",0x21e,
               "o_buf == NULL || size == 0");
    uVar3 = 0;
  }
  else {
    cVar2 = is_len_end(this,param_2);
    if (cVar2 == '\0') {
      for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
        iVar1 = *(int *)(this + 4);
        param_1[local_10] = *(char *)(*(int *)(this + 0x14) + iVar1);
        *(int *)(this + 4) = iVar1 + 1;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## get_buf_ptr

```asm
// === 0858da38 PacketBuf::get_buf_ptr  [0x0858da38-0x858da51] ===
 858da38:	55                   	push   %ebp
 858da39:	89 e5                	mov    %esp,%ebp
 858da3b:	83 ec 18             	sub    $0x18,%esp
 858da3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 858da41:	89 44 24 04          	mov    %eax,0x4(%esp)
 858da45:	8b 45 08             	mov    0x8(%ebp),%eax
 858da48:	89 04 24             	mov    %eax,(%esp)
 858da4b:	e8 b2 dc c9 ff       	call   822b702 <_ZN9PacketBuf10get_packetEi>
 858da50:	c9                   	leave
 858da51:	c3                   	ret

```

```c
// PacketBuf::get_buf_ptr @ 0x858da38

/* PacketBuf::get_buf_ptr(int) */

void __thiscall PacketBuf::get_buf_ptr(PacketBuf *this,int param_1)

{
  get_packet(this,param_1);
  return;
}

```

---

## get_byte

```asm
// === 0858cf22 PacketBuf::get_byte  [0x0858cf22-0x858cf6f] ===
 858cf22:	55                   	push   %ebp
 858cf23:	89 e5                	mov    %esp,%ebp
 858cf25:	83 ec 08             	sub    $0x8,%esp
 858cf28:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858cf2f:	00 
 858cf30:	8b 45 08             	mov    0x8(%ebp),%eax
 858cf33:	89 04 24             	mov    %eax,(%esp)
 858cf36:	e8 c1 ff ff ff       	call   858cefc <_ZN9PacketBuf10is_len_endEi>
 858cf3b:	84 c0                	test   %al,%al
 858cf3d:	74 07                	je     858cf46 <_ZN9PacketBuf8get_byteERc+0x24>
 858cf3f:	b8 00 00 00 00       	mov    $0x0,%eax
 858cf44:	eb 27                	jmp    858cf6d <_ZN9PacketBuf8get_byteERc+0x4b>
 858cf46:	8b 45 08             	mov    0x8(%ebp),%eax
 858cf49:	8b 48 14             	mov    0x14(%eax),%ecx
 858cf4c:	8b 45 08             	mov    0x8(%ebp),%eax
 858cf4f:	8b 40 04             	mov    0x4(%eax),%eax
 858cf52:	89 c2                	mov    %eax,%edx
 858cf54:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 858cf57:	0f b6 0a             	movzbl (%edx),%ecx
 858cf5a:	8b 55 0c             	mov    0xc(%ebp),%edx
 858cf5d:	88 0a                	mov    %cl,(%edx)
 858cf5f:	8d 50 01             	lea    0x1(%eax),%edx
 858cf62:	8b 45 08             	mov    0x8(%ebp),%eax
 858cf65:	89 50 04             	mov    %edx,0x4(%eax)
 858cf68:	b8 01 00 00 00       	mov    $0x1,%eax
 858cf6d:	c9                   	leave
 858cf6e:	c3                   	ret
 858cf6f:	90                   	nop

```

```c
// PacketBuf::get_byte @ 0x858cf22

/* PacketBuf::get_byte(char&) */

bool __thiscall PacketBuf::get_byte(PacketBuf *this,char *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = is_len_end(this,1);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(this + 4);
    *param_1 = *(char *)(*(int *)(this + 0x14) + iVar1);
    *(int *)(this + 4) = iVar1 + 1;
  }
  return cVar2 == '\0';
}

```

---

## get_byte_0858cf70

```asm
// === 0858cf70 PacketBuf::get_byte  [0x0858cf70-0x858cfbf] ===
 858cf70:	55                   	push   %ebp
 858cf71:	89 e5                	mov    %esp,%ebp
 858cf73:	83 ec 08             	sub    $0x8,%esp
 858cf76:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858cf7d:	00 
 858cf7e:	8b 45 08             	mov    0x8(%ebp),%eax
 858cf81:	89 04 24             	mov    %eax,(%esp)
 858cf84:	e8 73 ff ff ff       	call   858cefc <_ZN9PacketBuf10is_len_endEi>
 858cf89:	84 c0                	test   %al,%al
 858cf8b:	74 07                	je     858cf94 <_ZN9PacketBuf8get_byteERh+0x24>
 858cf8d:	b8 00 00 00 00       	mov    $0x0,%eax
 858cf92:	eb 29                	jmp    858cfbd <_ZN9PacketBuf8get_byteERh+0x4d>
 858cf94:	8b 45 08             	mov    0x8(%ebp),%eax
 858cf97:	8b 48 14             	mov    0x14(%eax),%ecx
 858cf9a:	8b 45 08             	mov    0x8(%ebp),%eax
 858cf9d:	8b 40 04             	mov    0x4(%eax),%eax
 858cfa0:	89 c2                	mov    %eax,%edx
 858cfa2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 858cfa5:	0f b6 12             	movzbl (%edx),%edx
 858cfa8:	89 d1                	mov    %edx,%ecx
 858cfaa:	8b 55 0c             	mov    0xc(%ebp),%edx
 858cfad:	88 0a                	mov    %cl,(%edx)
 858cfaf:	8d 50 01             	lea    0x1(%eax),%edx
 858cfb2:	8b 45 08             	mov    0x8(%ebp),%eax
 858cfb5:	89 50 04             	mov    %edx,0x4(%eax)
 858cfb8:	b8 01 00 00 00       	mov    $0x1,%eax
 858cfbd:	c9                   	leave
 858cfbe:	c3                   	ret
 858cfbf:	90                   	nop

```

```c
// PacketBuf::get_byte @ 0x858cf70

/* PacketBuf::get_byte(unsigned char&) */

bool __thiscall PacketBuf::get_byte(PacketBuf *this,uchar *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = is_len_end(this,1);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(this + 4);
    *param_1 = *(uchar *)(*(int *)(this + 0x14) + iVar1);
    *(int *)(this + 4) = iVar1 + 1;
  }
  return cVar2 == '\0';
}

```

---

## get_int

```asm
// === 0858d0f0 PacketBuf::get_int  [0x0858d0f0-0x858d23f] ===
 858d0f0:	55                   	push   %ebp
 858d0f1:	89 e5                	mov    %esp,%ebp
 858d0f3:	83 ec 38             	sub    $0x38,%esp
 858d0f6:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 858d0fd:	00 
 858d0fe:	8b 45 08             	mov    0x8(%ebp),%eax
 858d101:	89 04 24             	mov    %eax,(%esp)
 858d104:	e8 f3 fd ff ff       	call   858cefc <_ZN9PacketBuf10is_len_endEi>
 858d109:	84 c0                	test   %al,%al
 858d10b:	74 0a                	je     858d117 <_ZN9PacketBuf7get_intERi+0x27>
 858d10d:	b8 00 00 00 00       	mov    $0x0,%eax
 858d112:	e9 27 01 00 00       	jmp    858d23e <_ZN9PacketBuf7get_intERi+0x14e>
 858d117:	8b 45 08             	mov    0x8(%ebp),%eax
 858d11a:	8b 48 14             	mov    0x14(%eax),%ecx
 858d11d:	8b 45 08             	mov    0x8(%ebp),%eax
 858d120:	8b 40 04             	mov    0x4(%eax),%eax
 858d123:	89 c2                	mov    %eax,%edx
 858d125:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 858d128:	0f b6 12             	movzbl (%edx),%edx
 858d12b:	0f b6 d2             	movzbl %dl,%edx
 858d12e:	89 55 e8             	mov    %edx,-0x18(%ebp)
 858d131:	8d 50 01             	lea    0x1(%eax),%edx
 858d134:	8b 45 08             	mov    0x8(%ebp),%eax
 858d137:	89 50 04             	mov    %edx,0x4(%eax)
 858d13a:	8b 45 08             	mov    0x8(%ebp),%eax
 858d13d:	8b 48 14             	mov    0x14(%eax),%ecx
 858d140:	8b 45 08             	mov    0x8(%ebp),%eax
 858d143:	8b 40 04             	mov    0x4(%eax),%eax
 858d146:	89 c2                	mov    %eax,%edx
 858d148:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 858d14b:	0f b6 12             	movzbl (%edx),%edx
 858d14e:	0f b6 d2             	movzbl %dl,%edx
 858d151:	89 55 ec             	mov    %edx,-0x14(%ebp)
 858d154:	8d 50 01             	lea    0x1(%eax),%edx
 858d157:	8b 45 08             	mov    0x8(%ebp),%eax
 858d15a:	89 50 04             	mov    %edx,0x4(%eax)
 858d15d:	8b 45 08             	mov    0x8(%ebp),%eax
 858d160:	8b 48 14             	mov    0x14(%eax),%ecx
 858d163:	8b 45 08             	mov    0x8(%ebp),%eax
 858d166:	8b 40 04             	mov    0x4(%eax),%eax
 858d169:	89 c2                	mov    %eax,%edx
 858d16b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 858d16e:	0f b6 12             	movzbl (%edx),%edx
 858d171:	0f b6 d2             	movzbl %dl,%edx
 858d174:	89 55 f0             	mov    %edx,-0x10(%ebp)
 858d177:	8d 50 01             	lea    0x1(%eax),%edx
 858d17a:	8b 45 08             	mov    0x8(%ebp),%eax
 858d17d:	89 50 04             	mov    %edx,0x4(%eax)
 858d180:	8b 45 08             	mov    0x8(%ebp),%eax
 858d183:	8b 48 14             	mov    0x14(%eax),%ecx
 858d186:	8b 45 08             	mov    0x8(%ebp),%eax
 858d189:	8b 40 04             	mov    0x4(%eax),%eax
 858d18c:	89 c2                	mov    %eax,%edx
 858d18e:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 858d191:	0f b6 12             	movzbl (%edx),%edx
 858d194:	0f b6 d2             	movzbl %dl,%edx
 858d197:	89 55 f4             	mov    %edx,-0xc(%ebp)
 858d19a:	8d 50 01             	lea    0x1(%eax),%edx
 858d19d:	8b 45 08             	mov    0x8(%ebp),%eax
 858d1a0:	89 50 04             	mov    %edx,0x4(%eax)
 858d1a3:	8b 45 08             	mov    0x8(%ebp),%eax
 858d1a6:	8b 00                	mov    (%eax),%eax
 858d1a8:	85 c0                	test   %eax,%eax
 858d1aa:	74 07                	je     858d1b3 <_ZN9PacketBuf7get_intERi+0xc3>
 858d1ac:	83 f8 01             	cmp    $0x1,%eax
 858d1af:	74 27                	je     858d1d8 <_ZN9PacketBuf7get_intERi+0xe8>
 858d1b1:	eb 4a                	jmp    858d1fd <_ZN9PacketBuf7get_intERi+0x10d>
 858d1b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d1b6:	89 c2                	mov    %eax,%edx
 858d1b8:	c1 e2 18             	shl    $0x18,%edx
 858d1bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d1be:	c1 e0 10             	shl    $0x10,%eax
 858d1c1:	01 c2                	add    %eax,%edx
 858d1c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 858d1c6:	c1 e0 08             	shl    $0x8,%eax
 858d1c9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 858d1cc:	89 c2                	mov    %eax,%edx
 858d1ce:	03 55 e8             	add    -0x18(%ebp),%edx
 858d1d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 858d1d4:	89 10                	mov    %edx,(%eax)
 858d1d6:	eb 61                	jmp    858d239 <_ZN9PacketBuf7get_intERi+0x149>
 858d1d8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 858d1db:	89 c2                	mov    %eax,%edx
 858d1dd:	c1 e2 18             	shl    $0x18,%edx
 858d1e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 858d1e3:	c1 e0 10             	shl    $0x10,%eax
 858d1e6:	01 c2                	add    %eax,%edx
 858d1e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d1eb:	c1 e0 08             	shl    $0x8,%eax
 858d1ee:	8d 04 02             	lea    (%edx,%eax,1),%eax
 858d1f1:	89 c2                	mov    %eax,%edx
 858d1f3:	03 55 f4             	add    -0xc(%ebp),%edx
 858d1f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 858d1f9:	89 10                	mov    %edx,(%eax)
 858d1fb:	eb 3c                	jmp    858d239 <_ZN9PacketBuf7get_intERi+0x149>
 858d1fd:	8b 45 08             	mov    0x8(%ebp),%eax
 858d200:	8b 00                	mov    (%eax),%eax
 858d202:	89 44 24 14          	mov    %eax,0x14(%esp)
 858d206:	c7 44 24 10 69 d4 ca 	movl   $0x8cad469,0x10(%esp)
 858d20d:	08 
 858d20e:	c7 44 24 0c b7 01 00 	movl   $0x1b7,0xc(%esp)
 858d215:	00 
 858d216:	c7 44 24 08 c9 e4 ca 	movl   $0x8cae4c9,0x8(%esp)
 858d21d:	08 
 858d21e:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858d225:	08 
 858d226:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858d22d:	e8 d8 69 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858d232:	b8 00 00 00 00       	mov    $0x0,%eax
 858d237:	eb 05                	jmp    858d23e <_ZN9PacketBuf7get_intERi+0x14e>
 858d239:	b8 01 00 00 00       	mov    $0x1,%eax
 858d23e:	c9                   	leave
 858d23f:	c3                   	ret

```

```c
// PacketBuf::get_int @ 0x858d0f0

/* PacketBuf::get_int(int&) */

undefined4 __thiscall PacketBuf::get_int(PacketBuf *this,int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  cVar1 = is_len_end(this,4);
  if (cVar1 == '\0') {
    uVar3 = (uint)*(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    uVar4 = (uint)*(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    uVar5 = (uint)*(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    uVar6 = (uint)*(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    if (*(int *)this == 0) {
      *param_1 = uVar6 * 0x1000000 + uVar5 * 0x10000 + uVar4 * 0x100 + uVar3;
    }
    else {
      if (*(int *)this != 1) {
        LogManager::logFormat
                  (1,"packet_buf.cpp","bool PacketBuf::get_int(int&)",0x1b7,
                   "m_byte_encoding error %d",*(undefined4 *)this);
        return 0;
      }
      *param_1 = uVar3 * 0x1000000 + uVar4 * 0x10000 + uVar5 * 0x100 + uVar6;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## get_int_0858d240

```asm
// === 0858d240 PacketBuf::get_int  [0x0858d240-0x858d27d] ===
 858d240:	55                   	push   %ebp
 858d241:	89 e5                	mov    %esp,%ebp
 858d243:	83 ec 28             	sub    $0x28,%esp
 858d246:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858d24d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 858d250:	89 44 24 04          	mov    %eax,0x4(%esp)
 858d254:	8b 45 08             	mov    0x8(%ebp),%eax
 858d257:	89 04 24             	mov    %eax,(%esp)
 858d25a:	e8 91 fe ff ff       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 858d25f:	83 f0 01             	xor    $0x1,%eax
 858d262:	84 c0                	test   %al,%al
 858d264:	74 07                	je     858d26d <_ZN9PacketBuf7get_intERj+0x2d>
 858d266:	b8 00 00 00 00       	mov    $0x0,%eax
 858d26b:	eb 0f                	jmp    858d27c <_ZN9PacketBuf7get_intERj+0x3c>
 858d26d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d270:	89 c2                	mov    %eax,%edx
 858d272:	8b 45 0c             	mov    0xc(%ebp),%eax
 858d275:	89 10                	mov    %edx,(%eax)
 858d277:	b8 01 00 00 00       	mov    $0x1,%eax
 858d27c:	c9                   	leave
 858d27d:	c3                   	ret

```

```c
// PacketBuf::get_int @ 0x858d240

/* PacketBuf::get_int(unsigned int&) */

bool __thiscall PacketBuf::get_int(PacketBuf *this,uint *param_1)

{
  char cVar1;
  uint local_10 [3];
  
  local_10[0] = 0;
  cVar1 = get_int(this,(int *)local_10);
  if (cVar1 == '\x01') {
    *param_1 = local_10[0];
  }
  return cVar1 == '\x01';
}

```

---

## get_int_0858d27e

```asm
// === 0858d27e PacketBuf::get_int  [0x0858d27e-0x858d2bb] ===
 858d27e:	55                   	push   %ebp
 858d27f:	89 e5                	mov    %esp,%ebp
 858d281:	83 ec 28             	sub    $0x28,%esp
 858d284:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858d28b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 858d28e:	89 44 24 04          	mov    %eax,0x4(%esp)
 858d292:	8b 45 08             	mov    0x8(%ebp),%eax
 858d295:	89 04 24             	mov    %eax,(%esp)
 858d298:	e8 53 fe ff ff       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 858d29d:	83 f0 01             	xor    $0x1,%eax
 858d2a0:	84 c0                	test   %al,%al
 858d2a2:	74 07                	je     858d2ab <_ZN9PacketBuf7get_intERm+0x2d>
 858d2a4:	b8 00 00 00 00       	mov    $0x0,%eax
 858d2a9:	eb 0f                	jmp    858d2ba <_ZN9PacketBuf7get_intERm+0x3c>
 858d2ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d2ae:	89 c2                	mov    %eax,%edx
 858d2b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858d2b3:	89 10                	mov    %edx,(%eax)
 858d2b5:	b8 01 00 00 00       	mov    $0x1,%eax
 858d2ba:	c9                   	leave
 858d2bb:	c3                   	ret

```

```c
// PacketBuf::get_int @ 0x858d27e

/* PacketBuf::get_int(unsigned long&) */

bool __thiscall PacketBuf::get_int(PacketBuf *this,ulong *param_1)

{
  char cVar1;
  ulong local_10 [3];
  
  local_10[0] = 0;
  cVar1 = get_int(this,(int *)local_10);
  if (cVar1 == '\x01') {
    *param_1 = local_10[0];
  }
  return cVar1 == '\x01';
}

```

---

## get_len

```asm
// === 0858da52 PacketBuf::get_len  [0x0858da52-0x858daa1] ===
 858da52:	55                   	push   %ebp
 858da53:	89 e5                	mov    %esp,%ebp
 858da55:	83 ec 28             	sub    $0x28,%esp
 858da58:	8b 45 08             	mov    0x8(%ebp),%eax
 858da5b:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 858da5f:	83 f0 01             	xor    $0x1,%eax
 858da62:	84 c0                	test   %al,%al
 858da64:	74 33                	je     858da99 <_ZNK9PacketBuf7get_lenEv+0x47>
 858da66:	c7 44 24 10 57 d5 ca 	movl   $0x8cad557,0x10(%esp)
 858da6d:	08 
 858da6e:	c7 44 24 0c 38 03 00 	movl   $0x338,0xc(%esp)
 858da75:	00 
 858da76:	c7 44 24 08 44 e3 ca 	movl   $0x8cae344,0x8(%esp)
 858da7d:	08 
 858da7e:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858da85:	08 
 858da86:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858da8d:	e8 78 61 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858da92:	b8 00 00 00 00       	mov    $0x0,%eax
 858da97:	eb 06                	jmp    858da9f <_ZNK9PacketBuf7get_lenEv+0x4d>
 858da99:	8b 45 08             	mov    0x8(%ebp),%eax
 858da9c:	8b 40 08             	mov    0x8(%eax),%eax
 858da9f:	c9                   	leave
 858daa0:	c3                   	ret
 858daa1:	90                   	nop

```

```c
// PacketBuf::get_len @ 0x858da52

/* PacketBuf::get_len() const */

undefined4 __thiscall PacketBuf::get_len(PacketBuf *this)

{
  undefined4 uVar1;
  
  if (this[0xc] == (PacketBuf)0x1) {
    uVar1 = *(undefined4 *)(this + 8);
  }
  else {
    LogManager::logFormat
              (1,"packet_buf.cpp","int PacketBuf::get_len() const",0x338,
               "this packet is not finalized");
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## get_short

```asm
// === 0858cfc0 PacketBuf::get_short  [0x0858cfc0-0x858d0af] ===
 858cfc0:	55                   	push   %ebp
 858cfc1:	89 e5                	mov    %esp,%ebp
 858cfc3:	83 ec 38             	sub    $0x38,%esp
 858cfc6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 858cfcd:	00 
 858cfce:	8b 45 08             	mov    0x8(%ebp),%eax
 858cfd1:	89 04 24             	mov    %eax,(%esp)
 858cfd4:	e8 23 ff ff ff       	call   858cefc <_ZN9PacketBuf10is_len_endEi>
 858cfd9:	84 c0                	test   %al,%al
 858cfdb:	74 0a                	je     858cfe7 <_ZN9PacketBuf9get_shortERs+0x27>
 858cfdd:	b8 00 00 00 00       	mov    $0x0,%eax
 858cfe2:	e9 c7 00 00 00       	jmp    858d0ae <_ZN9PacketBuf9get_shortERs+0xee>
 858cfe7:	8b 45 08             	mov    0x8(%ebp),%eax
 858cfea:	8b 48 14             	mov    0x14(%eax),%ecx
 858cfed:	8b 45 08             	mov    0x8(%ebp),%eax
 858cff0:	8b 40 04             	mov    0x4(%eax),%eax
 858cff3:	89 c2                	mov    %eax,%edx
 858cff5:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 858cff8:	0f b6 12             	movzbl (%edx),%edx
 858cffb:	0f b6 d2             	movzbl %dl,%edx
 858cffe:	89 55 f0             	mov    %edx,-0x10(%ebp)
 858d001:	8d 50 01             	lea    0x1(%eax),%edx
 858d004:	8b 45 08             	mov    0x8(%ebp),%eax
 858d007:	89 50 04             	mov    %edx,0x4(%eax)
 858d00a:	8b 45 08             	mov    0x8(%ebp),%eax
 858d00d:	8b 48 14             	mov    0x14(%eax),%ecx
 858d010:	8b 45 08             	mov    0x8(%ebp),%eax
 858d013:	8b 40 04             	mov    0x4(%eax),%eax
 858d016:	89 c2                	mov    %eax,%edx
 858d018:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 858d01b:	0f b6 12             	movzbl (%edx),%edx
 858d01e:	0f b6 d2             	movzbl %dl,%edx
 858d021:	89 55 f4             	mov    %edx,-0xc(%ebp)
 858d024:	8d 50 01             	lea    0x1(%eax),%edx
 858d027:	8b 45 08             	mov    0x8(%ebp),%eax
 858d02a:	89 50 04             	mov    %edx,0x4(%eax)
 858d02d:	8b 45 08             	mov    0x8(%ebp),%eax
 858d030:	8b 00                	mov    (%eax),%eax
 858d032:	85 c0                	test   %eax,%eax
 858d034:	74 07                	je     858d03d <_ZN9PacketBuf9get_shortERs+0x7d>
 858d036:	83 f8 01             	cmp    $0x1,%eax
 858d039:	74 1a                	je     858d055 <_ZN9PacketBuf9get_shortERs+0x95>
 858d03b:	eb 30                	jmp    858d06d <_ZN9PacketBuf9get_shortERs+0xad>
 858d03d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d040:	89 c2                	mov    %eax,%edx
 858d042:	c1 e2 08             	shl    $0x8,%edx
 858d045:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d048:	8d 04 02             	lea    (%edx,%eax,1),%eax
 858d04b:	89 c2                	mov    %eax,%edx
 858d04d:	8b 45 0c             	mov    0xc(%ebp),%eax
 858d050:	66 89 10             	mov    %dx,(%eax)
 858d053:	eb 54                	jmp    858d0a9 <_ZN9PacketBuf9get_shortERs+0xe9>
 858d055:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d058:	89 c2                	mov    %eax,%edx
 858d05a:	c1 e2 08             	shl    $0x8,%edx
 858d05d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858d060:	8d 04 02             	lea    (%edx,%eax,1),%eax
 858d063:	89 c2                	mov    %eax,%edx
 858d065:	8b 45 0c             	mov    0xc(%ebp),%eax
 858d068:	66 89 10             	mov    %dx,(%eax)
 858d06b:	eb 3c                	jmp    858d0a9 <_ZN9PacketBuf9get_shortERs+0xe9>
 858d06d:	8b 45 08             	mov    0x8(%ebp),%eax
 858d070:	8b 00                	mov    (%eax),%eax
 858d072:	89 44 24 14          	mov    %eax,0x14(%esp)
 858d076:	c7 44 24 10 69 d4 ca 	movl   $0x8cad469,0x10(%esp)
 858d07d:	08 
 858d07e:	c7 44 24 0c 91 01 00 	movl   $0x191,0xc(%esp)
 858d085:	00 
 858d086:	c7 44 24 08 00 e5 ca 	movl   $0x8cae500,0x8(%esp)
 858d08d:	08 
 858d08e:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858d095:	08 
 858d096:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858d09d:	e8 68 6b 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858d0a2:	b8 00 00 00 00       	mov    $0x0,%eax
 858d0a7:	eb 05                	jmp    858d0ae <_ZN9PacketBuf9get_shortERs+0xee>
 858d0a9:	b8 01 00 00 00       	mov    $0x1,%eax
 858d0ae:	c9                   	leave
 858d0af:	c3                   	ret

```

```c
// PacketBuf::get_short @ 0x858cfc0

/* PacketBuf::get_short(short&) */

undefined4 __thiscall PacketBuf::get_short(PacketBuf *this,short *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  
  cVar3 = is_len_end(this,2);
  if (cVar3 == '\0') {
    bVar1 = *(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    bVar2 = *(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    if (*(int *)this == 0) {
      *param_1 = (ushort)bVar2 * 0x100 + (ushort)bVar1;
    }
    else {
      if (*(int *)this != 1) {
        LogManager::logFormat
                  (1,"packet_buf.cpp","bool PacketBuf::get_short(short int&)",0x191,
                   "m_byte_encoding error %d",*(undefined4 *)this);
        return 0;
      }
      *param_1 = (ushort)bVar1 * 0x100 + (ushort)bVar2;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## get_short_0858d0b0

```asm
// === 0858d0b0 PacketBuf::get_short  [0x0858d0b0-0x858d0ef] ===
 858d0b0:	55                   	push   %ebp
 858d0b1:	89 e5                	mov    %esp,%ebp
 858d0b3:	83 ec 28             	sub    $0x28,%esp
 858d0b6:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
 858d0bc:	8d 45 f6             	lea    -0xa(%ebp),%eax
 858d0bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 858d0c3:	8b 45 08             	mov    0x8(%ebp),%eax
 858d0c6:	89 04 24             	mov    %eax,(%esp)
 858d0c9:	e8 f2 fe ff ff       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 858d0ce:	83 f0 01             	xor    $0x1,%eax
 858d0d1:	84 c0                	test   %al,%al
 858d0d3:	74 07                	je     858d0dc <_ZN9PacketBuf9get_shortERt+0x2c>
 858d0d5:	b8 00 00 00 00       	mov    $0x0,%eax
 858d0da:	eb 11                	jmp    858d0ed <_ZN9PacketBuf9get_shortERt+0x3d>
 858d0dc:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 858d0e0:	89 c2                	mov    %eax,%edx
 858d0e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 858d0e5:	66 89 10             	mov    %dx,(%eax)
 858d0e8:	b8 01 00 00 00       	mov    $0x1,%eax
 858d0ed:	c9                   	leave
 858d0ee:	c3                   	ret
 858d0ef:	90                   	nop

```

```c
// PacketBuf::get_short @ 0x858d0b0

/* PacketBuf::get_short(unsigned short&) */

bool __thiscall PacketBuf::get_short(PacketBuf *this,ushort *param_1)

{
  char cVar1;
  ushort local_e [5];
  
  local_e[0] = 0;
  cVar1 = get_short(this,(short *)local_e);
  if (cVar1 == '\x01') {
    *param_1 = local_e[0];
  }
  return cVar1 == '\x01';
}

```

---

## get_str

```asm
// === 0858d2bc PacketBuf::get_str  [0x0858d2bc-0x858d3b1] ===
 858d2bc:	55                   	push   %ebp
 858d2bd:	89 e5                	mov    %esp,%ebp
 858d2bf:	83 ec 38             	sub    $0x38,%esp
 858d2c2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 858d2c6:	75 36                	jne    858d2fe <_ZN9PacketBuf7get_strEPcii+0x42>
 858d2c8:	c7 44 24 10 ad d4 ca 	movl   $0x8cad4ad,0x10(%esp)
 858d2cf:	08 
 858d2d0:	c7 44 24 0c f8 01 00 	movl   $0x1f8,0xc(%esp)
 858d2d7:	00 
 858d2d8:	c7 44 24 08 a0 e4 ca 	movl   $0x8cae4a0,0x8(%esp)
 858d2df:	08 
 858d2e0:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858d2e7:	08 
 858d2e8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858d2ef:	e8 16 69 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858d2f4:	b8 00 00 00 00       	mov    $0x0,%eax
 858d2f9:	e9 b1 00 00 00       	jmp    858d3af <_ZN9PacketBuf7get_strEPcii+0xf3>
 858d2fe:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 858d302:	78 06                	js     858d30a <_ZN9PacketBuf7get_strEPcii+0x4e>
 858d304:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 858d308:	79 0a                	jns    858d314 <_ZN9PacketBuf7get_strEPcii+0x58>
 858d30a:	b8 00 00 00 00       	mov    $0x0,%eax
 858d30f:	e9 9b 00 00 00       	jmp    858d3af <_ZN9PacketBuf7get_strEPcii+0xf3>
 858d314:	8b 45 14             	mov    0x14(%ebp),%eax
 858d317:	3b 45 10             	cmp    0x10(%ebp),%eax
 858d31a:	7c 0a                	jl     858d326 <_ZN9PacketBuf7get_strEPcii+0x6a>
 858d31c:	b8 00 00 00 00       	mov    $0x0,%eax
 858d321:	e9 89 00 00 00       	jmp    858d3af <_ZN9PacketBuf7get_strEPcii+0xf3>
 858d326:	8b 45 14             	mov    0x14(%ebp),%eax
 858d329:	89 44 24 04          	mov    %eax,0x4(%esp)
 858d32d:	8b 45 08             	mov    0x8(%ebp),%eax
 858d330:	89 04 24             	mov    %eax,(%esp)
 858d333:	e8 c4 fb ff ff       	call   858cefc <_ZN9PacketBuf10is_len_endEi>
 858d338:	84 c0                	test   %al,%al
 858d33a:	74 07                	je     858d343 <_ZN9PacketBuf7get_strEPcii+0x87>
 858d33c:	b8 00 00 00 00       	mov    $0x0,%eax
 858d341:	eb 6c                	jmp    858d3af <_ZN9PacketBuf7get_strEPcii+0xf3>
 858d343:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 858d347:	75 07                	jne    858d350 <_ZN9PacketBuf7get_strEPcii+0x94>
 858d349:	b8 01 00 00 00       	mov    $0x1,%eax
 858d34e:	eb 5f                	jmp    858d3af <_ZN9PacketBuf7get_strEPcii+0xf3>
 858d350:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 858d357:	eb 38                	jmp    858d391 <_ZN9PacketBuf7get_strEPcii+0xd5>
 858d359:	8b 45 08             	mov    0x8(%ebp),%eax
 858d35c:	8b 48 14             	mov    0x14(%eax),%ecx
 858d35f:	8b 45 08             	mov    0x8(%ebp),%eax
 858d362:	8b 40 04             	mov    0x4(%eax),%eax
 858d365:	89 c2                	mov    %eax,%edx
 858d367:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 858d36a:	0f b6 12             	movzbl (%edx),%edx
 858d36d:	0f be d2             	movsbl %dl,%edx
 858d370:	89 55 f4             	mov    %edx,-0xc(%ebp)
 858d373:	8d 50 01             	lea    0x1(%eax),%edx
 858d376:	8b 45 08             	mov    0x8(%ebp),%eax
 858d379:	89 50 04             	mov    %edx,0x4(%eax)
 858d37c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 858d380:	74 1e                	je     858d3a0 <_ZN9PacketBuf7get_strEPcii+0xe4>
 858d382:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d385:	03 45 0c             	add    0xc(%ebp),%eax
 858d388:	8b 55 f4             	mov    -0xc(%ebp),%edx
 858d38b:	88 10                	mov    %dl,(%eax)
 858d38d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 858d391:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d394:	3b 45 14             	cmp    0x14(%ebp),%eax
 858d397:	0f 9c c0             	setl   %al
 858d39a:	84 c0                	test   %al,%al
 858d39c:	75 bb                	jne    858d359 <_ZN9PacketBuf7get_strEPcii+0x9d>
 858d39e:	eb 01                	jmp    858d3a1 <_ZN9PacketBuf7get_strEPcii+0xe5>
 858d3a0:	90                   	nop
 858d3a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858d3a4:	03 45 0c             	add    0xc(%ebp),%eax
 858d3a7:	c6 00 00             	movb   $0x0,(%eax)
 858d3aa:	b8 01 00 00 00       	mov    $0x1,%eax
 858d3af:	c9                   	leave
 858d3b0:	c3                   	ret
 858d3b1:	90                   	nop

```

```c
// PacketBuf::get_str @ 0x858d2bc

/* PacketBuf::get_str(char*, int, int) */

undefined4 __thiscall PacketBuf::get_str(PacketBuf *this,char *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_14;
  
  if (param_1 == (char *)0x0) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::get_str(char*, int, int)",0x1f8,"o_buf is null");
    uVar2 = 0;
  }
  else if ((param_3 < 0) || (param_2 < 0)) {
    uVar2 = 0;
  }
  else if (param_3 < param_2) {
    cVar1 = is_len_end(this,param_3);
    if (cVar1 == '\0') {
      if (param_3 == 0) {
        uVar2 = 1;
      }
      else {
        for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 1) {
          cVar1 = *(char *)(*(int *)(this + 0x14) + *(int *)(this + 4));
          *(int *)(this + 4) = *(int *)(this + 4) + 1;
          if (cVar1 == '\0') break;
          param_1[local_14] = cVar1;
        }
        param_1[local_14] = '\0';
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## isEncryptRequired

```asm
// === 0858da28 PacketBuf::isEncryptRequired  [0x0858da28-0x858da37] ===
 858da28:	55                   	push   %ebp
 858da29:	89 e5                	mov    %esp,%ebp
 858da2b:	8b 45 08             	mov    0x8(%ebp),%eax
 858da2e:	0f b6 80 30 73 01 00 	movzbl 0x17330(%eax),%eax
 858da35:	5d                   	pop    %ebp
 858da36:	c3                   	ret
 858da37:	90                   	nop

```

```c
// PacketBuf::isEncryptRequired @ 0x858da28

/* PacketBuf::isEncryptRequired() const */

PacketBuf __thiscall PacketBuf::isEncryptRequired(PacketBuf *this)

{
  return this[0x17330];
}

```

---

## is_len_end

```asm
// === 0858cefc PacketBuf::is_len_end  [0x0858cefc-0x858cf21] ===
 858cefc:	55                   	push   %ebp
 858cefd:	89 e5                	mov    %esp,%ebp
 858ceff:	8b 45 08             	mov    0x8(%ebp),%eax
 858cf02:	8b 40 04             	mov    0x4(%eax),%eax
 858cf05:	89 c2                	mov    %eax,%edx
 858cf07:	03 55 0c             	add    0xc(%ebp),%edx
 858cf0a:	8b 45 08             	mov    0x8(%ebp),%eax
 858cf0d:	8b 40 08             	mov    0x8(%eax),%eax
 858cf10:	39 c2                	cmp    %eax,%edx
 858cf12:	7e 07                	jle    858cf1b <_ZN9PacketBuf10is_len_endEi+0x1f>
 858cf14:	b8 01 00 00 00       	mov    $0x1,%eax
 858cf19:	eb 05                	jmp    858cf20 <_ZN9PacketBuf10is_len_endEi+0x24>
 858cf1b:	b8 00 00 00 00       	mov    $0x0,%eax
 858cf20:	5d                   	pop    %ebp
 858cf21:	c3                   	ret

```

```c
// PacketBuf::is_len_end @ 0x858cefc

/* PacketBuf::is_len_end(int) */

bool __thiscall PacketBuf::is_len_end(PacketBuf *this,int param_1)

{
  return *(int *)(this + 8) < *(int *)(this + 4) + param_1;
}

```

---

## is_ptr_end

```asm
// === 0858cec4 PacketBuf::is_ptr_end  [0x0858cec4-0x858cefb] ===
 858cec4:	55                   	push   %ebp
 858cec5:	89 e5                	mov    %esp,%ebp
 858cec7:	83 ec 18             	sub    $0x18,%esp
 858ceca:	8b 45 10             	mov    0x10(%ebp),%eax
 858cecd:	8b 55 0c             	mov    0xc(%ebp),%edx
 858ced0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 858ced3:	3d b4 72 01 00       	cmp    $0x172b4,%eax
 858ced8:	7e 1a                	jle    858cef4 <_ZN9PacketBuf10is_ptr_endEii+0x30>
 858ceda:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858cee1:	00 
 858cee2:	8b 45 08             	mov    0x8(%ebp),%eax
 858cee5:	89 04 24             	mov    %eax,(%esp)
 858cee8:	e8 99 13 00 00       	call   858e286 <_ZN9PacketBuf12setLastErrorENS_20PACKETBUF_ERROR_TYPEE>
 858ceed:	b8 01 00 00 00       	mov    $0x1,%eax
 858cef2:	eb 05                	jmp    858cef9 <_ZN9PacketBuf10is_ptr_endEii+0x35>
 858cef4:	b8 00 00 00 00       	mov    $0x0,%eax
 858cef9:	c9                   	leave
 858cefa:	c3                   	ret
 858cefb:	90                   	nop

```

```c
// PacketBuf::is_ptr_end @ 0x858cec4

/* PacketBuf::is_ptr_end(int, int) */

bool __thiscall PacketBuf::is_ptr_end(PacketBuf *this,int param_1,int param_2)

{
  if (0x172b4 < param_1 + param_2) {
    setLastError(this,1);
  }
  return 0x172b4 < param_1 + param_2;
}

```

---

## put_binary

```asm
// === 0858cd68 PacketBuf::put_binary  [0x0858cd68-0x858ce15] ===
 858cd68:	55                   	push   %ebp
 858cd69:	89 e5                	mov    %esp,%ebp
 858cd6b:	83 ec 38             	sub    $0x38,%esp
 858cd6e:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 858cd72:	74 06                	je     858cd7a <_ZN9PacketBuf10put_binaryERiPci+0x12>
 858cd74:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 858cd78:	75 33                	jne    858cdad <_ZN9PacketBuf10put_binaryERiPci+0x45>
 858cd7a:	c7 44 24 10 91 d4 ca 	movl   $0x8cad491,0x10(%esp)
 858cd81:	08 
 858cd82:	c7 44 24 0c 23 01 00 	movl   $0x123,0xc(%esp)
 858cd89:	00 
 858cd8a:	c7 44 24 08 80 e5 ca 	movl   $0x8cae580,0x8(%esp)
 858cd91:	08 
 858cd92:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858cd99:	08 
 858cd9a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858cda1:	e8 64 6e 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858cda6:	b8 00 00 00 00       	mov    $0x0,%eax
 858cdab:	eb 67                	jmp    858ce14 <_ZN9PacketBuf10put_binaryERiPci+0xac>
 858cdad:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cdb0:	8b 00                	mov    (%eax),%eax
 858cdb2:	8b 55 14             	mov    0x14(%ebp),%edx
 858cdb5:	89 54 24 08          	mov    %edx,0x8(%esp)
 858cdb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 858cdbd:	8b 45 08             	mov    0x8(%ebp),%eax
 858cdc0:	89 04 24             	mov    %eax,(%esp)
 858cdc3:	e8 fc 00 00 00       	call   858cec4 <_ZN9PacketBuf10is_ptr_endEii>
 858cdc8:	84 c0                	test   %al,%al
 858cdca:	74 07                	je     858cdd3 <_ZN9PacketBuf10put_binaryERiPci+0x6b>
 858cdcc:	b8 00 00 00 00       	mov    $0x0,%eax
 858cdd1:	eb 41                	jmp    858ce14 <_ZN9PacketBuf10put_binaryERiPci+0xac>
 858cdd3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858cdda:	eb 26                	jmp    858ce02 <_ZN9PacketBuf10put_binaryERiPci+0x9a>
 858cddc:	8b 45 08             	mov    0x8(%ebp),%eax
 858cddf:	8b 48 14             	mov    0x14(%eax),%ecx
 858cde2:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cde5:	8b 00                	mov    (%eax),%eax
 858cde7:	89 c2                	mov    %eax,%edx
 858cde9:	01 d1                	add    %edx,%ecx
 858cdeb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 858cdee:	03 55 10             	add    0x10(%ebp),%edx
 858cdf1:	0f b6 12             	movzbl (%edx),%edx
 858cdf4:	88 11                	mov    %dl,(%ecx)
 858cdf6:	8d 50 01             	lea    0x1(%eax),%edx
 858cdf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cdfc:	89 10                	mov    %edx,(%eax)
 858cdfe:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 858ce02:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858ce05:	3b 45 14             	cmp    0x14(%ebp),%eax
 858ce08:	0f 9c c0             	setl   %al
 858ce0b:	84 c0                	test   %al,%al
 858ce0d:	75 cd                	jne    858cddc <_ZN9PacketBuf10put_binaryERiPci+0x74>
 858ce0f:	b8 01 00 00 00       	mov    $0x1,%eax
 858ce14:	c9                   	leave
 858ce15:	c3                   	ret

```

```c
// PacketBuf::put_binary @ 0x858cd68

/* PacketBuf::put_binary(int&, char*, int) */

undefined4 __thiscall PacketBuf::put_binary(PacketBuf *this,int *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_10;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::put_binary(int&, char*, int)",0x123,
               "bin is null or size is zero");
    uVar3 = 0;
  }
  else {
    cVar2 = is_ptr_end(this,*param_1,param_3);
    if (cVar2 == '\0') {
      for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
        iVar1 = *param_1;
        *(char *)(*(int *)(this + 0x14) + iVar1) = param_2[local_10];
        *param_1 = iVar1 + 1;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## put_binary_0858ce16

```asm
// === 0858ce16 PacketBuf::put_binary  [0x0858ce16-0x858cec3] ===
 858ce16:	55                   	push   %ebp
 858ce17:	89 e5                	mov    %esp,%ebp
 858ce19:	83 ec 38             	sub    $0x38,%esp
 858ce1c:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 858ce20:	74 06                	je     858ce28 <_ZN9PacketBuf10put_binaryERiPKci+0x12>
 858ce22:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 858ce26:	75 33                	jne    858ce5b <_ZN9PacketBuf10put_binaryERiPKci+0x45>
 858ce28:	c7 44 24 10 91 d4 ca 	movl   $0x8cad491,0x10(%esp)
 858ce2f:	08 
 858ce30:	c7 44 24 0c 38 01 00 	movl   $0x138,0xc(%esp)
 858ce37:	00 
 858ce38:	c7 44 24 08 40 e5 ca 	movl   $0x8cae540,0x8(%esp)
 858ce3f:	08 
 858ce40:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858ce47:	08 
 858ce48:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858ce4f:	e8 b6 6d 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858ce54:	b8 00 00 00 00       	mov    $0x0,%eax
 858ce59:	eb 67                	jmp    858cec2 <_ZN9PacketBuf10put_binaryERiPKci+0xac>
 858ce5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ce5e:	8b 00                	mov    (%eax),%eax
 858ce60:	8b 55 14             	mov    0x14(%ebp),%edx
 858ce63:	89 54 24 08          	mov    %edx,0x8(%esp)
 858ce67:	89 44 24 04          	mov    %eax,0x4(%esp)
 858ce6b:	8b 45 08             	mov    0x8(%ebp),%eax
 858ce6e:	89 04 24             	mov    %eax,(%esp)
 858ce71:	e8 4e 00 00 00       	call   858cec4 <_ZN9PacketBuf10is_ptr_endEii>
 858ce76:	84 c0                	test   %al,%al
 858ce78:	74 07                	je     858ce81 <_ZN9PacketBuf10put_binaryERiPKci+0x6b>
 858ce7a:	b8 00 00 00 00       	mov    $0x0,%eax
 858ce7f:	eb 41                	jmp    858cec2 <_ZN9PacketBuf10put_binaryERiPKci+0xac>
 858ce81:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858ce88:	eb 26                	jmp    858ceb0 <_ZN9PacketBuf10put_binaryERiPKci+0x9a>
 858ce8a:	8b 45 08             	mov    0x8(%ebp),%eax
 858ce8d:	8b 48 14             	mov    0x14(%eax),%ecx
 858ce90:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ce93:	8b 00                	mov    (%eax),%eax
 858ce95:	89 c2                	mov    %eax,%edx
 858ce97:	01 d1                	add    %edx,%ecx
 858ce99:	8b 55 f4             	mov    -0xc(%ebp),%edx
 858ce9c:	03 55 10             	add    0x10(%ebp),%edx
 858ce9f:	0f b6 12             	movzbl (%edx),%edx
 858cea2:	88 11                	mov    %dl,(%ecx)
 858cea4:	8d 50 01             	lea    0x1(%eax),%edx
 858cea7:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ceaa:	89 10                	mov    %edx,(%eax)
 858ceac:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 858ceb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858ceb3:	3b 45 14             	cmp    0x14(%ebp),%eax
 858ceb6:	0f 9c c0             	setl   %al
 858ceb9:	84 c0                	test   %al,%al
 858cebb:	75 cd                	jne    858ce8a <_ZN9PacketBuf10put_binaryERiPKci+0x74>
 858cebd:	b8 01 00 00 00       	mov    $0x1,%eax
 858cec2:	c9                   	leave
 858cec3:	c3                   	ret

```

```c
// PacketBuf::put_binary @ 0x858ce16

/* PacketBuf::put_binary(int&, char const*, int) */

undefined4 __thiscall PacketBuf::put_binary(PacketBuf *this,int *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_10;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::put_binary(int&, const char*, int)",0x138,
               "bin is null or size is zero");
    uVar3 = 0;
  }
  else {
    cVar2 = is_ptr_end(this,*param_1,param_3);
    if (cVar2 == '\0') {
      for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
        iVar1 = *param_1;
        *(char *)(*(int *)(this + 0x14) + iVar1) = param_2[local_10];
        *param_1 = iVar1 + 1;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## put_byte

```asm
// === 0858c978 PacketBuf::put_byte  [0x0858c978-0x858c9c7] ===
 858c978:	55                   	push   %ebp
 858c979:	89 e5                	mov    %esp,%ebp
 858c97b:	83 ec 18             	sub    $0x18,%esp
 858c97e:	8b 45 0c             	mov    0xc(%ebp),%eax
 858c981:	8b 00                	mov    (%eax),%eax
 858c983:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 858c98a:	00 
 858c98b:	89 44 24 04          	mov    %eax,0x4(%esp)
 858c98f:	8b 45 08             	mov    0x8(%ebp),%eax
 858c992:	89 04 24             	mov    %eax,(%esp)
 858c995:	e8 2a 05 00 00       	call   858cec4 <_ZN9PacketBuf10is_ptr_endEii>
 858c99a:	84 c0                	test   %al,%al
 858c99c:	74 07                	je     858c9a5 <_ZN9PacketBuf8put_byteERii+0x2d>
 858c99e:	b8 00 00 00 00       	mov    $0x0,%eax
 858c9a3:	eb 21                	jmp    858c9c6 <_ZN9PacketBuf8put_byteERii+0x4e>
 858c9a5:	8b 45 08             	mov    0x8(%ebp),%eax
 858c9a8:	8b 48 14             	mov    0x14(%eax),%ecx
 858c9ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 858c9ae:	8b 00                	mov    (%eax),%eax
 858c9b0:	89 c2                	mov    %eax,%edx
 858c9b2:	01 d1                	add    %edx,%ecx
 858c9b4:	8b 55 10             	mov    0x10(%ebp),%edx
 858c9b7:	88 11                	mov    %dl,(%ecx)
 858c9b9:	8d 50 01             	lea    0x1(%eax),%edx
 858c9bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 858c9bf:	89 10                	mov    %edx,(%eax)
 858c9c1:	b8 01 00 00 00       	mov    $0x1,%eax
 858c9c6:	c9                   	leave
 858c9c7:	c3                   	ret

```

```c
// PacketBuf::put_byte @ 0x858c978

/* PacketBuf::put_byte(int&, int) */

bool __thiscall PacketBuf::put_byte(PacketBuf *this,int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = is_ptr_end(this,*param_1,1);
  if (cVar2 == '\0') {
    iVar1 = *param_1;
    *(char *)(*(int *)(this + 0x14) + iVar1) = (char)param_2;
    *param_1 = iVar1 + 1;
  }
  return cVar2 == '\0';
}

```

---

## put_header

```asm
// === 0858c94a PacketBuf::put_header  [0x0858c94a-0x858c977] ===
 858c94a:	55                   	push   %ebp
 858c94b:	89 e5                	mov    %esp,%ebp
 858c94d:	8b 45 08             	mov    0x8(%ebp),%eax
 858c950:	8b 40 14             	mov    0x14(%eax),%eax
 858c953:	8b 55 0c             	mov    0xc(%ebp),%edx
 858c956:	88 10                	mov    %dl,(%eax)
 858c958:	8b 45 08             	mov    0x8(%ebp),%eax
 858c95b:	8b 40 14             	mov    0x14(%eax),%eax
 858c95e:	8d 50 01             	lea    0x1(%eax),%edx
 858c961:	8b 45 10             	mov    0x10(%ebp),%eax
 858c964:	66 89 02             	mov    %ax,(%edx)
 858c967:	8b 45 08             	mov    0x8(%ebp),%eax
 858c96a:	c7 40 04 0f 00 00 00 	movl   $0xf,0x4(%eax)
 858c971:	b8 01 00 00 00       	mov    $0x1,%eax
 858c976:	5d                   	pop    %ebp
 858c977:	c3                   	ret

```

```c
// PacketBuf::put_header @ 0x858c94a

/* PacketBuf::put_header(int, int) */

undefined4 __thiscall PacketBuf::put_header(PacketBuf *this,int param_1,int param_2)

{
  **(undefined1 **)(this + 0x14) = (char)param_1;
  *(short *)(*(int *)(this + 0x14) + 1) = (short)param_2;
  *(undefined4 *)(this + 4) = 0xf;
  return 1;
}

```

---

## put_int

```asm
// === 0858cad4 PacketBuf::put_int  [0x0858cad4-0x858cc67] ===
 858cad4:	55                   	push   %ebp
 858cad5:	89 e5                	mov    %esp,%ebp
 858cad7:	83 ec 28             	sub    $0x28,%esp
 858cada:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cadd:	8b 00                	mov    (%eax),%eax
 858cadf:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 858cae6:	00 
 858cae7:	89 44 24 04          	mov    %eax,0x4(%esp)
 858caeb:	8b 45 08             	mov    0x8(%ebp),%eax
 858caee:	89 04 24             	mov    %eax,(%esp)
 858caf1:	e8 ce 03 00 00       	call   858cec4 <_ZN9PacketBuf10is_ptr_endEii>
 858caf6:	84 c0                	test   %al,%al
 858caf8:	74 0a                	je     858cb04 <_ZN9PacketBuf7put_intERii+0x30>
 858cafa:	b8 00 00 00 00       	mov    $0x0,%eax
 858caff:	e9 62 01 00 00       	jmp    858cc66 <_ZN9PacketBuf7put_intERii+0x192>
 858cb04:	8b 45 08             	mov    0x8(%ebp),%eax
 858cb07:	8b 00                	mov    (%eax),%eax
 858cb09:	85 c0                	test   %eax,%eax
 858cb0b:	74 0e                	je     858cb1b <_ZN9PacketBuf7put_intERii+0x47>
 858cb0d:	83 f8 01             	cmp    $0x1,%eax
 858cb10:	0f 84 8f 00 00 00    	je     858cba5 <_ZN9PacketBuf7put_intERii+0xd1>
 858cb16:	e9 11 01 00 00       	jmp    858cc2c <_ZN9PacketBuf7put_intERii+0x158>
 858cb1b:	8b 45 08             	mov    0x8(%ebp),%eax
 858cb1e:	8b 48 14             	mov    0x14(%eax),%ecx
 858cb21:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cb24:	8b 00                	mov    (%eax),%eax
 858cb26:	89 c2                	mov    %eax,%edx
 858cb28:	01 d1                	add    %edx,%ecx
 858cb2a:	8b 55 10             	mov    0x10(%ebp),%edx
 858cb2d:	88 11                	mov    %dl,(%ecx)
 858cb2f:	8d 50 01             	lea    0x1(%eax),%edx
 858cb32:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cb35:	89 10                	mov    %edx,(%eax)
 858cb37:	8b 45 08             	mov    0x8(%ebp),%eax
 858cb3a:	8b 48 14             	mov    0x14(%eax),%ecx
 858cb3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cb40:	8b 00                	mov    (%eax),%eax
 858cb42:	89 c2                	mov    %eax,%edx
 858cb44:	01 d1                	add    %edx,%ecx
 858cb46:	8b 55 10             	mov    0x10(%ebp),%edx
 858cb49:	81 e2 00 ff 00 00    	and    $0xff00,%edx
 858cb4f:	c1 fa 08             	sar    $0x8,%edx
 858cb52:	88 11                	mov    %dl,(%ecx)
 858cb54:	8d 50 01             	lea    0x1(%eax),%edx
 858cb57:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cb5a:	89 10                	mov    %edx,(%eax)
 858cb5c:	8b 45 08             	mov    0x8(%ebp),%eax
 858cb5f:	8b 48 14             	mov    0x14(%eax),%ecx
 858cb62:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cb65:	8b 00                	mov    (%eax),%eax
 858cb67:	89 c2                	mov    %eax,%edx
 858cb69:	01 d1                	add    %edx,%ecx
 858cb6b:	8b 55 10             	mov    0x10(%ebp),%edx
 858cb6e:	81 e2 00 00 ff 00    	and    $0xff0000,%edx
 858cb74:	c1 fa 10             	sar    $0x10,%edx
 858cb77:	88 11                	mov    %dl,(%ecx)
 858cb79:	8d 50 01             	lea    0x1(%eax),%edx
 858cb7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cb7f:	89 10                	mov    %edx,(%eax)
 858cb81:	8b 45 08             	mov    0x8(%ebp),%eax
 858cb84:	8b 48 14             	mov    0x14(%eax),%ecx
 858cb87:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cb8a:	8b 00                	mov    (%eax),%eax
 858cb8c:	89 c2                	mov    %eax,%edx
 858cb8e:	01 d1                	add    %edx,%ecx
 858cb90:	8b 55 10             	mov    0x10(%ebp),%edx
 858cb93:	c1 ea 18             	shr    $0x18,%edx
 858cb96:	88 11                	mov    %dl,(%ecx)
 858cb98:	8d 50 01             	lea    0x1(%eax),%edx
 858cb9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cb9e:	89 10                	mov    %edx,(%eax)
 858cba0:	e9 bc 00 00 00       	jmp    858cc61 <_ZN9PacketBuf7put_intERii+0x18d>
 858cba5:	8b 45 08             	mov    0x8(%ebp),%eax
 858cba8:	8b 48 14             	mov    0x14(%eax),%ecx
 858cbab:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cbae:	8b 00                	mov    (%eax),%eax
 858cbb0:	89 c2                	mov    %eax,%edx
 858cbb2:	01 d1                	add    %edx,%ecx
 858cbb4:	8b 55 10             	mov    0x10(%ebp),%edx
 858cbb7:	c1 ea 18             	shr    $0x18,%edx
 858cbba:	88 11                	mov    %dl,(%ecx)
 858cbbc:	8d 50 01             	lea    0x1(%eax),%edx
 858cbbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cbc2:	89 10                	mov    %edx,(%eax)
 858cbc4:	8b 45 08             	mov    0x8(%ebp),%eax
 858cbc7:	8b 48 14             	mov    0x14(%eax),%ecx
 858cbca:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cbcd:	8b 00                	mov    (%eax),%eax
 858cbcf:	89 c2                	mov    %eax,%edx
 858cbd1:	01 d1                	add    %edx,%ecx
 858cbd3:	8b 55 10             	mov    0x10(%ebp),%edx
 858cbd6:	81 e2 00 00 ff 00    	and    $0xff0000,%edx
 858cbdc:	c1 fa 10             	sar    $0x10,%edx
 858cbdf:	88 11                	mov    %dl,(%ecx)
 858cbe1:	8d 50 01             	lea    0x1(%eax),%edx
 858cbe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cbe7:	89 10                	mov    %edx,(%eax)
 858cbe9:	8b 45 08             	mov    0x8(%ebp),%eax
 858cbec:	8b 48 14             	mov    0x14(%eax),%ecx
 858cbef:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cbf2:	8b 00                	mov    (%eax),%eax
 858cbf4:	89 c2                	mov    %eax,%edx
 858cbf6:	01 d1                	add    %edx,%ecx
 858cbf8:	8b 55 10             	mov    0x10(%ebp),%edx
 858cbfb:	81 e2 00 ff 00 00    	and    $0xff00,%edx
 858cc01:	c1 fa 08             	sar    $0x8,%edx
 858cc04:	88 11                	mov    %dl,(%ecx)
 858cc06:	8d 50 01             	lea    0x1(%eax),%edx
 858cc09:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cc0c:	89 10                	mov    %edx,(%eax)
 858cc0e:	8b 45 08             	mov    0x8(%ebp),%eax
 858cc11:	8b 48 14             	mov    0x14(%eax),%ecx
 858cc14:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cc17:	8b 00                	mov    (%eax),%eax
 858cc19:	89 c2                	mov    %eax,%edx
 858cc1b:	01 d1                	add    %edx,%ecx
 858cc1d:	8b 55 10             	mov    0x10(%ebp),%edx
 858cc20:	88 11                	mov    %dl,(%ecx)
 858cc22:	8d 50 01             	lea    0x1(%eax),%edx
 858cc25:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cc28:	89 10                	mov    %edx,(%eax)
 858cc2a:	eb 35                	jmp    858cc61 <_ZN9PacketBuf7put_intERii+0x18d>
 858cc2c:	8b 45 08             	mov    0x8(%ebp),%eax
 858cc2f:	8b 00                	mov    (%eax),%eax
 858cc31:	89 44 24 14          	mov    %eax,0x14(%esp)
 858cc35:	c7 44 24 10 69 d4 ca 	movl   $0x8cad469,0x10(%esp)
 858cc3c:	08 
 858cc3d:	c7 44 24 0c c4 00 00 	movl   $0xc4,0xc(%esp)
 858cc44:	00 
 858cc45:	c7 44 24 08 c0 e5 ca 	movl   $0x8cae5c0,0x8(%esp)
 858cc4c:	08 
 858cc4d:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858cc54:	08 
 858cc55:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858cc5c:	e8 a9 6f 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858cc61:	b8 01 00 00 00       	mov    $0x1,%eax
 858cc66:	c9                   	leave
 858cc67:	c3                   	ret

```

```c
// PacketBuf::put_int @ 0x858cad4

/* PacketBuf::put_int(int&, int) */

undefined4 __thiscall PacketBuf::put_int(PacketBuf *this,int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  cVar4 = is_ptr_end(this,*param_1,4);
  if (cVar4 == '\0') {
    uVar2 = (undefined1)((uint)param_2 >> 8);
    uVar3 = (undefined1)((uint)param_2 >> 0x10);
    uVar6 = (undefined1)((uint)param_2 >> 0x18);
    if (*(int *)this == 0) {
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = (char)param_2;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar2;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar3;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar6;
      *param_1 = iVar1 + 1;
    }
    else if (*(int *)this == 1) {
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar6;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar3;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar2;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = (char)param_2;
      *param_1 = iVar1 + 1;
    }
    else {
      LogManager::logFormat
                (1,"packet_buf.cpp","bool PacketBuf::put_int(int&, int)",0xc4,
                 "m_byte_encoding error %d",*(undefined4 *)this);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## put_packet

```asm
// === 0858dc2e PacketBuf::put_packet  [0x0858dc2e-0x858dcd1] ===
 858dc2e:	55                   	push   %ebp
 858dc2f:	89 e5                	mov    %esp,%ebp
 858dc31:	83 ec 18             	sub    $0x18,%esp
 858dc34:	8b 45 0c             	mov    0xc(%ebp),%eax
 858dc37:	8d 50 25             	lea    0x25(%eax),%edx
 858dc3a:	8b 45 08             	mov    0x8(%ebp),%eax
 858dc3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 858dc41:	89 14 24             	mov    %edx,(%esp)
 858dc44:	e8 a3 07 00 00       	call   858e3ec <_ZNK12RandomOption24put_packet_random_optionI9PacketBufEEvRT_>
 858dc49:	e8 59 c7 b4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 858dc4e:	89 04 24             	mov    %eax,(%esp)
 858dc51:	e8 c8 36 b6 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 858dc56:	84 c0                	test   %al,%al
 858dc58:	74 18                	je     858dc72 <_ZN9PacketBuf10put_packetERK10Inven_Item+0x44>
 858dc5a:	e8 3c e5 b3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 858dc5f:	89 04 24             	mov    %eax,(%esp)
 858dc62:	e8 a3 b6 f5 ff       	call   84e930a <_ZN12CDataManager28GetUpgradeRevisionPvPChannelEv>
 858dc67:	85 c0                	test   %eax,%eax
 858dc69:	75 07                	jne    858dc72 <_ZN9PacketBuf10put_packetERK10Inven_Item+0x44>
 858dc6b:	b8 01 00 00 00       	mov    $0x1,%eax
 858dc70:	eb 05                	jmp    858dc77 <_ZN9PacketBuf10put_packetERK10Inven_Item+0x49>
 858dc72:	b8 00 00 00 00       	mov    $0x0,%eax
 858dc77:	84 c0                	test   %al,%al
 858dc79:	74 15                	je     858dc90 <_ZN9PacketBuf10put_packetERK10Inven_Item+0x62>
 858dc7b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858dc82:	00 
 858dc83:	8b 45 08             	mov    0x8(%ebp),%eax
 858dc86:	89 04 24             	mov    %eax,(%esp)
 858dc89:	e8 10 dc b3 ff       	call   80cb89e <_ZN9PacketBuf8put_byteEi>
 858dc8e:	eb 20                	jmp    858dcb0 <_ZN9PacketBuf10put_packetERK10Inven_Item+0x82>
 858dc90:	8b 45 0c             	mov    0xc(%ebp),%eax
 858dc93:	83 c0 33             	add    $0x33,%eax
 858dc96:	89 04 24             	mov    %eax,(%esp)
 858dc99:	e8 ba 10 b9 ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 858dc9e:	0f b6 c0             	movzbl %al,%eax
 858dca1:	89 44 24 04          	mov    %eax,0x4(%esp)
 858dca5:	8b 45 08             	mov    0x8(%ebp),%eax
 858dca8:	89 04 24             	mov    %eax,(%esp)
 858dcab:	e8 ee db b3 ff       	call   80cb89e <_ZN9PacketBuf8put_byteEi>
 858dcb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858dcb3:	83 c0 33             	add    $0x33,%eax
 858dcb6:	89 04 24             	mov    %eax,(%esp)
 858dcb9:	e8 4c 2e b8 ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 858dcbe:	0f b6 c0             	movzbl %al,%eax
 858dcc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 858dcc5:	8b 45 08             	mov    0x8(%ebp),%eax
 858dcc8:	89 04 24             	mov    %eax,(%esp)
 858dccb:	e8 ce db b3 ff       	call   80cb89e <_ZN9PacketBuf8put_byteEi>
 858dcd0:	c9                   	leave
 858dcd1:	c3                   	ret

```

```c
// PacketBuf::put_packet @ 0x858dc2e

/* PacketBuf::put_packet(Inven_Item const&) */

void __thiscall PacketBuf::put_packet(PacketBuf *this,Inven_Item *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  CDataManager *this_01;
  int iVar3;
  uint uVar4;
  
  RandomOption::put_packet_random_option<PacketBuf>((RandomOption *)(param_1 + 0x25),this);
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar2 != '\0') {
    this_01 = (CDataManager *)G_CDataManager();
    iVar3 = CDataManager::GetUpgradeRevisionPvPChannel(this_01);
    if (iVar3 == 0) {
      bVar1 = true;
      goto LAB_0858dc77;
    }
  }
  bVar1 = false;
LAB_0858dc77:
  if (bVar1) {
    put_byte(this,0);
  }
  else {
    uVar4 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x33));
    put_byte(this,uVar4 & 0xff);
  }
  uVar4 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)(param_1 + 0x33));
  put_byte(this,uVar4 & 0xff);
  return;
}

```

---

## put_short

```asm
// === 0858c9c8 PacketBuf::put_short  [0x0858c9c8-0x858cad3] ===
 858c9c8:	55                   	push   %ebp
 858c9c9:	89 e5                	mov    %esp,%ebp
 858c9cb:	83 ec 28             	sub    $0x28,%esp
 858c9ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 858c9d1:	8b 00                	mov    (%eax),%eax
 858c9d3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858c9da:	00 
 858c9db:	89 44 24 04          	mov    %eax,0x4(%esp)
 858c9df:	8b 45 08             	mov    0x8(%ebp),%eax
 858c9e2:	89 04 24             	mov    %eax,(%esp)
 858c9e5:	e8 da 04 00 00       	call   858cec4 <_ZN9PacketBuf10is_ptr_endEii>
 858c9ea:	84 c0                	test   %al,%al
 858c9ec:	74 0a                	je     858c9f8 <_ZN9PacketBuf9put_shortERii+0x30>
 858c9ee:	b8 00 00 00 00       	mov    $0x0,%eax
 858c9f3:	e9 da 00 00 00       	jmp    858cad2 <_ZN9PacketBuf9put_shortERii+0x10a>
 858c9f8:	8b 45 08             	mov    0x8(%ebp),%eax
 858c9fb:	8b 00                	mov    (%eax),%eax
 858c9fd:	85 c0                	test   %eax,%eax
 858c9ff:	74 0a                	je     858ca0b <_ZN9PacketBuf9put_shortERii+0x43>
 858ca01:	83 f8 01             	cmp    $0x1,%eax
 858ca04:	74 48                	je     858ca4e <_ZN9PacketBuf9put_shortERii+0x86>
 858ca06:	e9 86 00 00 00       	jmp    858ca91 <_ZN9PacketBuf9put_shortERii+0xc9>
 858ca0b:	8b 45 08             	mov    0x8(%ebp),%eax
 858ca0e:	8b 48 14             	mov    0x14(%eax),%ecx
 858ca11:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ca14:	8b 00                	mov    (%eax),%eax
 858ca16:	89 c2                	mov    %eax,%edx
 858ca18:	01 d1                	add    %edx,%ecx
 858ca1a:	8b 55 10             	mov    0x10(%ebp),%edx
 858ca1d:	88 11                	mov    %dl,(%ecx)
 858ca1f:	8d 50 01             	lea    0x1(%eax),%edx
 858ca22:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ca25:	89 10                	mov    %edx,(%eax)
 858ca27:	8b 45 08             	mov    0x8(%ebp),%eax
 858ca2a:	8b 48 14             	mov    0x14(%eax),%ecx
 858ca2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ca30:	8b 00                	mov    (%eax),%eax
 858ca32:	89 c2                	mov    %eax,%edx
 858ca34:	01 d1                	add    %edx,%ecx
 858ca36:	8b 55 10             	mov    0x10(%ebp),%edx
 858ca39:	81 e2 00 ff 00 00    	and    $0xff00,%edx
 858ca3f:	c1 fa 08             	sar    $0x8,%edx
 858ca42:	88 11                	mov    %dl,(%ecx)
 858ca44:	8d 50 01             	lea    0x1(%eax),%edx
 858ca47:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ca4a:	89 10                	mov    %edx,(%eax)
 858ca4c:	eb 7f                	jmp    858cacd <_ZN9PacketBuf9put_shortERii+0x105>
 858ca4e:	8b 45 08             	mov    0x8(%ebp),%eax
 858ca51:	8b 48 14             	mov    0x14(%eax),%ecx
 858ca54:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ca57:	8b 00                	mov    (%eax),%eax
 858ca59:	89 c2                	mov    %eax,%edx
 858ca5b:	01 d1                	add    %edx,%ecx
 858ca5d:	8b 55 10             	mov    0x10(%ebp),%edx
 858ca60:	81 e2 00 ff 00 00    	and    $0xff00,%edx
 858ca66:	c1 fa 08             	sar    $0x8,%edx
 858ca69:	88 11                	mov    %dl,(%ecx)
 858ca6b:	8d 50 01             	lea    0x1(%eax),%edx
 858ca6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ca71:	89 10                	mov    %edx,(%eax)
 858ca73:	8b 45 08             	mov    0x8(%ebp),%eax
 858ca76:	8b 48 14             	mov    0x14(%eax),%ecx
 858ca79:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ca7c:	8b 00                	mov    (%eax),%eax
 858ca7e:	89 c2                	mov    %eax,%edx
 858ca80:	01 d1                	add    %edx,%ecx
 858ca82:	8b 55 10             	mov    0x10(%ebp),%edx
 858ca85:	88 11                	mov    %dl,(%ecx)
 858ca87:	8d 50 01             	lea    0x1(%eax),%edx
 858ca8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ca8d:	89 10                	mov    %edx,(%eax)
 858ca8f:	eb 3c                	jmp    858cacd <_ZN9PacketBuf9put_shortERii+0x105>
 858ca91:	8b 45 08             	mov    0x8(%ebp),%eax
 858ca94:	8b 00                	mov    (%eax),%eax
 858ca96:	89 44 24 14          	mov    %eax,0x14(%esp)
 858ca9a:	c7 44 24 10 69 d4 ca 	movl   $0x8cad469,0x10(%esp)
 858caa1:	08 
 858caa2:	c7 44 24 0c a6 00 00 	movl   $0xa6,0xc(%esp)
 858caa9:	00 
 858caaa:	c7 44 24 08 00 e6 ca 	movl   $0x8cae600,0x8(%esp)
 858cab1:	08 
 858cab2:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858cab9:	08 
 858caba:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858cac1:	e8 44 71 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858cac6:	b8 00 00 00 00       	mov    $0x0,%eax
 858cacb:	eb 05                	jmp    858cad2 <_ZN9PacketBuf9put_shortERii+0x10a>
 858cacd:	b8 01 00 00 00       	mov    $0x1,%eax
 858cad2:	c9                   	leave
 858cad3:	c3                   	ret

```

```c
// PacketBuf::put_short @ 0x858c9c8

/* PacketBuf::put_short(int&, int) */

undefined4 __thiscall PacketBuf::put_short(PacketBuf *this,int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  
  cVar3 = is_ptr_end(this,*param_1,2);
  if (cVar3 == '\0') {
    uVar2 = (undefined1)((uint)param_2 >> 8);
    if (*(int *)this == 0) {
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = (char)param_2;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar2;
      *param_1 = iVar1 + 1;
    }
    else {
      if (*(int *)this != 1) {
        LogManager::logFormat
                  (1,"packet_buf.cpp","bool PacketBuf::put_short(int&, int)",0xa6,
                   "m_byte_encoding error %d",*(undefined4 *)this);
        return 0;
      }
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar2;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = (char)param_2;
      *param_1 = iVar1 + 1;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## put_str

```asm
// === 0858cc68 PacketBuf::put_str  [0x0858cc68-0x858cce7] ===
 858cc68:	55                   	push   %ebp
 858cc69:	89 e5                	mov    %esp,%ebp
 858cc6b:	83 ec 28             	sub    $0x28,%esp
 858cc6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cc71:	8b 00                	mov    (%eax),%eax
 858cc73:	8b 55 14             	mov    0x14(%ebp),%edx
 858cc76:	89 54 24 08          	mov    %edx,0x8(%esp)
 858cc7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 858cc7e:	8b 45 08             	mov    0x8(%ebp),%eax
 858cc81:	89 04 24             	mov    %eax,(%esp)
 858cc84:	e8 3b 02 00 00       	call   858cec4 <_ZN9PacketBuf10is_ptr_endEii>
 858cc89:	84 c0                	test   %al,%al
 858cc8b:	74 07                	je     858cc94 <_ZN9PacketBuf7put_strERiPci+0x2c>
 858cc8d:	b8 00 00 00 00       	mov    $0x0,%eax
 858cc92:	eb 51                	jmp    858cce5 <_ZN9PacketBuf7put_strERiPci+0x7d>
 858cc94:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858cc9b:	eb 33                	jmp    858ccd0 <_ZN9PacketBuf7put_strERiPci+0x68>
 858cc9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858cca0:	03 45 10             	add    0x10(%ebp),%eax
 858cca3:	0f b6 00             	movzbl (%eax),%eax
 858cca6:	84 c0                	test   %al,%al
 858cca8:	74 35                	je     858ccdf <_ZN9PacketBuf7put_strERiPci+0x77>
 858ccaa:	8b 45 08             	mov    0x8(%ebp),%eax
 858ccad:	8b 48 14             	mov    0x14(%eax),%ecx
 858ccb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ccb3:	8b 00                	mov    (%eax),%eax
 858ccb5:	89 c2                	mov    %eax,%edx
 858ccb7:	01 d1                	add    %edx,%ecx
 858ccb9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 858ccbc:	03 55 10             	add    0x10(%ebp),%edx
 858ccbf:	0f b6 12             	movzbl (%edx),%edx
 858ccc2:	88 11                	mov    %dl,(%ecx)
 858ccc4:	8d 50 01             	lea    0x1(%eax),%edx
 858ccc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ccca:	89 10                	mov    %edx,(%eax)
 858cccc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 858ccd0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858ccd3:	3b 45 14             	cmp    0x14(%ebp),%eax
 858ccd6:	0f 9c c0             	setl   %al
 858ccd9:	84 c0                	test   %al,%al
 858ccdb:	75 c0                	jne    858cc9d <_ZN9PacketBuf7put_strERiPci+0x35>
 858ccdd:	eb 01                	jmp    858cce0 <_ZN9PacketBuf7put_strERiPci+0x78>
 858ccdf:	90                   	nop
 858cce0:	b8 01 00 00 00       	mov    $0x1,%eax
 858cce5:	c9                   	leave
 858cce6:	c3                   	ret
 858cce7:	90                   	nop

```

```c
// PacketBuf::put_str @ 0x858cc68

/* PacketBuf::put_str(int&, char*, int) */

undefined4 __thiscall PacketBuf::put_str(PacketBuf *this,int *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_10;
  
  cVar2 = is_ptr_end(this,*param_1,param_3);
  if (cVar2 == '\0') {
    for (local_10 = 0; (local_10 < param_3 && (param_2[local_10] != '\0')); local_10 = local_10 + 1)
    {
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = param_2[local_10];
      *param_1 = iVar1 + 1;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## put_str_0858cce8

```asm
// === 0858cce8 PacketBuf::put_str  [0x0858cce8-0x858cd67] ===
 858cce8:	55                   	push   %ebp
 858cce9:	89 e5                	mov    %esp,%ebp
 858cceb:	83 ec 28             	sub    $0x28,%esp
 858ccee:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ccf1:	8b 00                	mov    (%eax),%eax
 858ccf3:	8b 55 14             	mov    0x14(%ebp),%edx
 858ccf6:	89 54 24 08          	mov    %edx,0x8(%esp)
 858ccfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 858ccfe:	8b 45 08             	mov    0x8(%ebp),%eax
 858cd01:	89 04 24             	mov    %eax,(%esp)
 858cd04:	e8 bb 01 00 00       	call   858cec4 <_ZN9PacketBuf10is_ptr_endEii>
 858cd09:	84 c0                	test   %al,%al
 858cd0b:	74 07                	je     858cd14 <_ZN9PacketBuf7put_strERiPKci+0x2c>
 858cd0d:	b8 00 00 00 00       	mov    $0x0,%eax
 858cd12:	eb 51                	jmp    858cd65 <_ZN9PacketBuf7put_strERiPKci+0x7d>
 858cd14:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858cd1b:	eb 33                	jmp    858cd50 <_ZN9PacketBuf7put_strERiPKci+0x68>
 858cd1d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858cd20:	03 45 10             	add    0x10(%ebp),%eax
 858cd23:	0f b6 00             	movzbl (%eax),%eax
 858cd26:	84 c0                	test   %al,%al
 858cd28:	74 35                	je     858cd5f <_ZN9PacketBuf7put_strERiPKci+0x77>
 858cd2a:	8b 45 08             	mov    0x8(%ebp),%eax
 858cd2d:	8b 48 14             	mov    0x14(%eax),%ecx
 858cd30:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cd33:	8b 00                	mov    (%eax),%eax
 858cd35:	89 c2                	mov    %eax,%edx
 858cd37:	01 d1                	add    %edx,%ecx
 858cd39:	8b 55 f4             	mov    -0xc(%ebp),%edx
 858cd3c:	03 55 10             	add    0x10(%ebp),%edx
 858cd3f:	0f b6 12             	movzbl (%edx),%edx
 858cd42:	88 11                	mov    %dl,(%ecx)
 858cd44:	8d 50 01             	lea    0x1(%eax),%edx
 858cd47:	8b 45 0c             	mov    0xc(%ebp),%eax
 858cd4a:	89 10                	mov    %edx,(%eax)
 858cd4c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 858cd50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858cd53:	3b 45 14             	cmp    0x14(%ebp),%eax
 858cd56:	0f 9c c0             	setl   %al
 858cd59:	84 c0                	test   %al,%al
 858cd5b:	75 c0                	jne    858cd1d <_ZN9PacketBuf7put_strERiPKci+0x35>
 858cd5d:	eb 01                	jmp    858cd60 <_ZN9PacketBuf7put_strERiPKci+0x78>
 858cd5f:	90                   	nop
 858cd60:	b8 01 00 00 00       	mov    $0x1,%eax
 858cd65:	c9                   	leave
 858cd66:	c3                   	ret
 858cd67:	90                   	nop

```

```c
// PacketBuf::put_str @ 0x858cce8

/* PacketBuf::put_str(int&, char const*, int) */

undefined4 __thiscall PacketBuf::put_str(PacketBuf *this,int *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_10;
  
  cVar2 = is_ptr_end(this,*param_1,param_3);
  if (cVar2 == '\0') {
    for (local_10 = 0; (local_10 < param_3 && (param_2[local_10] != '\0')); local_10 = local_10 + 1)
    {
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = param_2[local_10];
      *param_1 = iVar1 + 1;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## set_packet

```asm
// === 0858d462 PacketBuf::set_packet  [0x0858d462-0x858d4dd] ===
 858d462:	55                   	push   %ebp
 858d463:	89 e5                	mov    %esp,%ebp
 858d465:	83 ec 28             	sub    $0x28,%esp
 858d468:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 858d46c:	74 0f                	je     858d47d <_ZN9PacketBuf10set_packetEPKci+0x1b>
 858d46e:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 858d472:	7e 09                	jle    858d47d <_ZN9PacketBuf10set_packetEPKci+0x1b>
 858d474:	81 7d 10 18 73 01 00 	cmpl   $0x17318,0x10(%ebp)
 858d47b:	7e 2e                	jle    858d4ab <_ZN9PacketBuf10set_packetEPKci+0x49>
 858d47d:	c7 44 24 10 d8 d4 ca 	movl   $0x8cad4d8,0x10(%esp)
 858d484:	08 
 858d485:	c7 44 24 0c 70 02 00 	movl   $0x270,0xc(%esp)
 858d48c:	00 
 858d48d:	c7 44 24 08 20 e4 ca 	movl   $0x8cae420,0x8(%esp)
 858d494:	08 
 858d495:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858d49c:	08 
 858d49d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858d4a4:	e8 61 67 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858d4a9:	eb 30                	jmp    858d4db <_ZN9PacketBuf10set_packetEPKci+0x79>
 858d4ab:	8b 45 08             	mov    0x8(%ebp),%eax
 858d4ae:	89 04 24             	mov    %eax,(%esp)
 858d4b1:	e8 2c f4 ff ff       	call   858c8e2 <_ZN9PacketBuf5clearEv>
 858d4b6:	8b 55 10             	mov    0x10(%ebp),%edx
 858d4b9:	8b 45 08             	mov    0x8(%ebp),%eax
 858d4bc:	8b 40 14             	mov    0x14(%eax),%eax
 858d4bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 858d4c3:	8b 55 0c             	mov    0xc(%ebp),%edx
 858d4c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 858d4ca:	89 04 24             	mov    %eax,(%esp)
 858d4cd:	e8 ce 03 af ff       	call   807d8a0 <memcpy@plt>
 858d4d2:	8b 45 08             	mov    0x8(%ebp),%eax
 858d4d5:	8b 55 10             	mov    0x10(%ebp),%edx
 858d4d8:	89 50 08             	mov    %edx,0x8(%eax)
 858d4db:	c9                   	leave
 858d4dc:	c3                   	ret
 858d4dd:	90                   	nop

```

```c
// PacketBuf::set_packet @ 0x858d462

/* PacketBuf::set_packet(char const*, int) */

void __thiscall PacketBuf::set_packet(PacketBuf *this,char *param_1,int param_2)

{
  if (((param_1 == (char *)0x0) || (param_2 < 1)) || (95000 < param_2)) {
    LogManager::logFormat
              (1,"packet_buf.cpp","void PacketBuf::set_packet(const char*, int)",0x270,
               "!packet || size<1 || size> MAX_PACKET_SIZE");
  }
  else {
    clear(this);
    memcpy(*(void **)(this + 0x14),param_1,param_2);
    *(int *)(this + 8) = param_2;
  }
  return;
}

```

---

## ~PacketBuf

```asm
// === 0858c8dc PacketBuf::~PacketBuf  [0x0858c8dc-0x858c8e1] ===
 858c8dc:	55                   	push   %ebp
 858c8dd:	89 e5                	mov    %esp,%ebp
 858c8df:	5d                   	pop    %ebp
 858c8e0:	c3                   	ret
 858c8e1:	90                   	nop

```

```c
// PacketBuf::~PacketBuf @ 0x858c8dc

/* PacketBuf::~PacketBuf() */

void __thiscall PacketBuf::~PacketBuf(PacketBuf *this)

{
  return;
}

```

