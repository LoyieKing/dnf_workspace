# PacketGuard

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## PacketGuard

```asm
// === 0858dd4c PacketGuard::PacketGuard  [0x0858dd4c-0x858de49] ===
 858dd4c:	55                   	push   %ebp
 858dd4d:	89 e5                	mov    %esp,%ebp
 858dd4f:	56                   	push   %esi
 858dd50:	53                   	push   %ebx
 858dd51:	83 ec 30             	sub    $0x30,%esp
 858dd54:	8b 45 08             	mov    0x8(%ebp),%eax
 858dd57:	89 04 24             	mov    %eax,(%esp)
 858dd5a:	e8 35 05 00 00       	call   858e294 <_ZN18InterfacePacketBufC1Ev>
 858dd5f:	8b 45 08             	mov    0x8(%ebp),%eax
 858dd62:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 858dd69:	8b 45 08             	mov    0x8(%ebp),%eax
 858dd6c:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 858dd70:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858dd77:	eb 44                	jmp    858ddbd <_ZN11PacketGuardC1Ev+0x71>
 858dd79:	e8 c2 09 af ff       	call   807e740 <pthread_self@plt>
 858dd7e:	89 c3                	mov    %eax,%ebx
 858dd80:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858dd83:	8b 04 85 80 bd 40 09 	mov    0x940bd80(,%eax,4),%eax
 858dd8a:	89 04 24             	mov    %eax,(%esp)
 858dd8d:	e8 6e 91 d1 ff       	call   82a6f00 <_ZN10PacketPool11getThreadIDEv>
 858dd92:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858dd96:	89 04 24             	mov    %eax,(%esp)
 858dd99:	e8 a2 b3 14 00       	call   86d9140 <pthread_equal>
 858dd9e:	85 c0                	test   %eax,%eax
 858dda0:	0f 95 c0             	setne  %al
 858dda3:	84 c0                	test   %al,%al
 858dda5:	74 12                	je     858ddb9 <_ZN11PacketGuardC1Ev+0x6d>
 858dda7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858ddaa:	8b 14 85 80 bd 40 09 	mov    0x940bd80(,%eax,4),%edx
 858ddb1:	8b 45 08             	mov    0x8(%ebp),%eax
 858ddb4:	89 50 04             	mov    %edx,0x4(%eax)
 858ddb7:	eb 0f                	jmp    858ddc8 <_ZN11PacketGuardC1Ev+0x7c>
 858ddb9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 858ddbd:	83 7d f4 08          	cmpl   $0x8,-0xc(%ebp)
 858ddc1:	0f 9e c0             	setle  %al
 858ddc4:	84 c0                	test   %al,%al
 858ddc6:	75 b1                	jne    858dd79 <_ZN11PacketGuardC1Ev+0x2d>
 858ddc8:	8b 45 08             	mov    0x8(%ebp),%eax
 858ddcb:	8b 40 04             	mov    0x4(%eax),%eax
 858ddce:	85 c0                	test   %eax,%eax
 858ddd0:	74 1f                	je     858ddf1 <_ZN11PacketGuardC1Ev+0xa5>
 858ddd2:	8b 45 08             	mov    0x8(%ebp),%eax
 858ddd5:	8b 40 04             	mov    0x4(%eax),%eax
 858ddd8:	89 04 24             	mov    %eax,(%esp)
 858dddb:	e8 da 1f d0 ff       	call   828fdba <_ZN10PacketPool7AcquireEv>
 858dde0:	8b 55 08             	mov    0x8(%ebp),%edx
 858dde3:	89 44 24 04          	mov    %eax,0x4(%esp)
 858dde7:	89 14 24             	mov    %edx,(%esp)
 858ddea:	e8 b1 04 00 00       	call   858e2a0 <_ZN18InterfacePacketBuf16AcquirePacketBufEP9PacketBuf>
 858ddef:	eb 52                	jmp    858de43 <_ZN11PacketGuardC1Ev+0xf7>
 858ddf1:	e8 4a 09 af ff       	call   807e740 <pthread_self@plt>
 858ddf6:	89 44 24 14          	mov    %eax,0x14(%esp)
 858ddfa:	c7 44 24 10 c0 d5 ca 	movl   $0x8cad5c0,0x10(%esp)
 858de01:	08 
 858de02:	c7 44 24 0c e5 03 00 	movl   $0x3e5,0xc(%esp)
 858de09:	00 
 858de0a:	c7 44 24 08 ef e2 ca 	movl   $0x8cae2ef,0x8(%esp)
 858de11:	08 
 858de12:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858de19:	08 
 858de1a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858de21:	e8 e4 5d 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858de26:	eb 1b                	jmp    858de43 <_ZN11PacketGuardC1Ev+0xf7>
 858de28:	89 d3                	mov    %edx,%ebx
 858de2a:	89 c6                	mov    %eax,%esi
 858de2c:	8b 45 08             	mov    0x8(%ebp),%eax
 858de2f:	89 04 24             	mov    %eax,(%esp)
 858de32:	e8 63 04 00 00       	call   858e29a <_ZN18InterfacePacketBufD1Ev>
 858de37:	89 f0                	mov    %esi,%eax
 858de39:	89 da                	mov    %ebx,%edx
 858de3b:	89 04 24             	mov    %eax,(%esp)
 858de3e:	e8 0d 59 55 00       	call   8ae3750 <_Unwind_Resume>
 858de43:	83 c4 30             	add    $0x30,%esp
 858de46:	5b                   	pop    %ebx
 858de47:	5e                   	pop    %esi
 858de48:	5d                   	pop    %ebp
 858de49:	c3                   	ret

```

```c
// PacketGuard::PacketGuard @ 0x858dd4c

/* PacketGuard::PacketGuard() */

void __thiscall PacketGuard::PacketGuard(PacketGuard *this)

{
  pthread_t __thread1;
  int iVar1;
  PacketBuf *pPVar2;
  pthread_t pVar3;
  int local_10;
  
  InterfacePacketBuf::InterfacePacketBuf((InterfacePacketBuf *)this);
  *(undefined4 *)(this + 4) = 0;
  this[8] = (PacketGuard)0x0;
  local_10 = 0;
  do {
    if (8 < local_10) {
LAB_0858ddc8:
      if (*(int *)(this + 4) == 0) {
        pVar3 = pthread_self();
        LogManager::logFormat
                  (1,"packet_buf.cpp","PacketGuard::PacketGuard()",0x3e5,
                   "[PacketPool Acquire err - pool_type_err] thread_id(%08x)",pVar3);
      }
      else {
                    /* try { // try from 0858dddb to 0858de25 has its CatchHandler @ 0858de28 */
        pPVar2 = (PacketBuf *)PacketPool::Acquire(*(PacketPool **)(this + 4));
        InterfacePacketBuf::AcquirePacketBuf((InterfacePacketBuf *)this,pPVar2);
      }
      return;
    }
    pVar3 = pthread_self();
    __thread1 = PacketPool::getThreadID
                          (*(PacketPool **)(GlobalData::s_packet_pool_list + local_10 * 4));
    iVar1 = pthread_equal(__thread1,pVar3);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 4) = *(undefined4 *)(GlobalData::s_packet_pool_list + local_10 * 4);
      goto LAB_0858ddc8;
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## PacketGuard_0858de4a

```asm
// === 0858de4a PacketGuard::PacketGuard  [0x0858de4a-0x858de7f] ===
 858de4a:	55                   	push   %ebp
 858de4b:	89 e5                	mov    %esp,%ebp
 858de4d:	83 ec 18             	sub    $0x18,%esp
 858de50:	8b 45 08             	mov    0x8(%ebp),%eax
 858de53:	89 04 24             	mov    %eax,(%esp)
 858de56:	e8 39 04 00 00       	call   858e294 <_ZN18InterfacePacketBufC1Ev>
 858de5b:	8b 45 08             	mov    0x8(%ebp),%eax
 858de5e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 858de65:	8b 45 08             	mov    0x8(%ebp),%eax
 858de68:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 858de6c:	8b 45 08             	mov    0x8(%ebp),%eax
 858de6f:	8b 55 0c             	mov    0xc(%ebp),%edx
 858de72:	89 54 24 04          	mov    %edx,0x4(%esp)
 858de76:	89 04 24             	mov    %eax,(%esp)
 858de79:	e8 22 04 00 00       	call   858e2a0 <_ZN18InterfacePacketBuf16AcquirePacketBufEP9PacketBuf>
 858de7e:	c9                   	leave
 858de7f:	c3                   	ret

```

```c
// PacketGuard::PacketGuard @ 0x858de4a

/* PacketGuard::PacketGuard(PacketBuf*) */

void __thiscall PacketGuard::PacketGuard(PacketGuard *this,PacketBuf *param_1)

{
  InterfacePacketBuf::InterfacePacketBuf((InterfacePacketBuf *)this);
  *(undefined4 *)(this + 4) = 0;
  this[8] = (PacketGuard)0x1;
  InterfacePacketBuf::AcquirePacketBuf((InterfacePacketBuf *)this,param_1);
  return;
}

```

---

## ~PacketGuard

```asm
// === 0858de80 PacketGuard::~PacketGuard  [0x0858de80-0x858df2f] ===
 858de80:	55                   	push   %ebp
 858de81:	89 e5                	mov    %esp,%ebp
 858de83:	56                   	push   %esi
 858de84:	53                   	push   %ebx
 858de85:	83 ec 20             	sub    $0x20,%esp
 858de88:	8b 45 08             	mov    0x8(%ebp),%eax
 858de8b:	8b 40 04             	mov    0x4(%eax),%eax
 858de8e:	85 c0                	test   %eax,%eax
 858de90:	74 19                	je     858deab <_ZN11PacketGuardD1Ev+0x2b>
 858de92:	8b 45 08             	mov    0x8(%ebp),%eax
 858de95:	8b 10                	mov    (%eax),%edx
 858de97:	8b 45 08             	mov    0x8(%ebp),%eax
 858de9a:	8b 40 04             	mov    0x4(%eax),%eax
 858de9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 858dea1:	89 04 24             	mov    %eax,(%esp)
 858dea4:	e8 05 04 00 00       	call   858e2ae <_ZN10PacketPool4FreeEP9PacketBuf>
 858dea9:	eb 73                	jmp    858df1e <_ZN11PacketGuardD1Ev+0x9e>
 858deab:	8b 45 08             	mov    0x8(%ebp),%eax
 858deae:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 858deb2:	83 f0 01             	xor    $0x1,%eax
 858deb5:	84 c0                	test   %al,%al
 858deb7:	74 65                	je     858df1e <_ZN11PacketGuardD1Ev+0x9e>
 858deb9:	8b 45 08             	mov    0x8(%ebp),%eax
 858debc:	8b 00                	mov    (%eax),%eax
 858debe:	89 04 24             	mov    %eax,(%esp)
 858dec1:	e8 56 2c b8 ff       	call   8110b1c <_ZN9PacketBuf9get_indexEv>
 858dec6:	89 c3                	mov    %eax,%ebx
 858dec8:	e8 73 08 af ff       	call   807e740 <pthread_self@plt>
 858decd:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 858ded1:	89 44 24 14          	mov    %eax,0x14(%esp)
 858ded5:	c7 44 24 10 fc d5 ca 	movl   $0x8cad5fc,0x10(%esp)
 858dedc:	08 
 858dedd:	c7 44 24 0c f8 03 00 	movl   $0x3f8,0xc(%esp)
 858dee4:	00 
 858dee5:	c7 44 24 08 ce e2 ca 	movl   $0x8cae2ce,0x8(%esp)
 858deec:	08 
 858deed:	c7 44 24 04 82 d4 ca 	movl   $0x8cad482,0x4(%esp)
 858def4:	08 
 858def5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 858defc:	e8 09 5d 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 858df01:	eb 1b                	jmp    858df1e <_ZN11PacketGuardD1Ev+0x9e>
 858df03:	89 d3                	mov    %edx,%ebx
 858df05:	89 c6                	mov    %eax,%esi
 858df07:	8b 45 08             	mov    0x8(%ebp),%eax
 858df0a:	89 04 24             	mov    %eax,(%esp)
 858df0d:	e8 88 03 00 00       	call   858e29a <_ZN18InterfacePacketBufD1Ev>
 858df12:	89 f0                	mov    %esi,%eax
 858df14:	89 da                	mov    %ebx,%edx
 858df16:	89 04 24             	mov    %eax,(%esp)
 858df19:	e8 32 58 55 00       	call   8ae3750 <_Unwind_Resume>
 858df1e:	8b 45 08             	mov    0x8(%ebp),%eax
 858df21:	89 04 24             	mov    %eax,(%esp)
 858df24:	e8 71 03 00 00       	call   858e29a <_ZN18InterfacePacketBufD1Ev>
 858df29:	83 c4 20             	add    $0x20,%esp
 858df2c:	5b                   	pop    %ebx
 858df2d:	5e                   	pop    %esi
 858df2e:	5d                   	pop    %ebp
 858df2f:	c3                   	ret

```

```c
// PacketGuard::~PacketGuard @ 0x858de80

/* PacketGuard::~PacketGuard() */

void __thiscall PacketGuard::~PacketGuard(PacketGuard *this)

{
  undefined4 uVar1;
  pthread_t pVar2;
  
  if (*(int *)(this + 4) == 0) {
    if (this[8] != (PacketGuard)0x1) {
      uVar1 = PacketBuf::get_index(*(PacketBuf **)this);
      pVar2 = pthread_self();
      LogManager::logFormat
                (1,"packet_buf.cpp","PacketGuard::~PacketGuard()",0x3f8,
                 "[PacketPool Free err - pool_type_err] pool_type(%08x), packet_idx(%d)",pVar2,uVar1
                );
    }
  }
  else {
                    /* try { // try from 0858dea4 to 0858df00 has its CatchHandler @ 0858df03 */
    PacketPool::Free(*(PacketPool **)(this + 4),*(PacketBuf **)this);
  }
  InterfacePacketBuf::~InterfacePacketBuf((InterfacePacketBuf *)this);
  return;
}

```

