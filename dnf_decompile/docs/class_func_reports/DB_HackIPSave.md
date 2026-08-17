# DB_HackIPSave

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08436dec DB_HackIPSave::dispatch  [0x08436dec-0x8436ff7] ===
 8436dec:	55                   	push   %ebp
 8436ded:	89 e5                	mov    %esp,%ebp
 8436def:	83 ec 38             	sub    $0x38,%esp
 8436df2:	8b 45 14             	mov    0x14(%ebp),%eax
 8436df5:	89 04 24             	mov    %eax,(%esp)
 8436df8:	e8 59 c6 01 00       	call   8453456 <_ZN6Stream12GetOutBufferI16SIG_HACK_IP_SAVEEEPT_v>
 8436dfd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8436e00:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8436e05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8436e0c:	00 
 8436e0d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8436e14:	00 
 8436e15:	89 04 24             	mov    %eax,(%esp)
 8436e18:	e8 21 e4 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8436e1d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8436e20:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8436e23:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436e26:	8b 50 24             	mov    0x24(%eax),%edx
 8436e29:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436e2c:	8b 40 20             	mov    0x20(%eax),%eax
 8436e2f:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8436e33:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8436e37:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436e3b:	c7 44 24 04 8c 38 c5 	movl   $0x8c5388c,0x4(%esp)
 8436e42:	08 
 8436e43:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436e46:	89 04 24             	mov    %eax,(%esp)
 8436e49:	e8 72 d3 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8436e4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436e55:	00 
 8436e56:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436e59:	89 04 24             	mov    %eax,(%esp)
 8436e5c:	e8 c5 d4 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8436e61:	83 f0 01             	xor    $0x1,%eax
 8436e64:	84 c0                	test   %al,%al
 8436e66:	75 11                	jne    8436e79 <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x8d>
 8436e68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436e6b:	89 04 24             	mov    %eax,(%esp)
 8436e6e:	e8 9d d4 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8436e73:	09 d0                	or     %edx,%eax
 8436e75:	85 c0                	test   %eax,%eax
 8436e77:	75 07                	jne    8436e80 <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x94>
 8436e79:	b8 01 00 00 00       	mov    $0x1,%eax
 8436e7e:	eb 05                	jmp    8436e85 <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x99>
 8436e80:	b8 00 00 00 00       	mov    $0x0,%eax
 8436e85:	84 c0                	test   %al,%al
 8436e87:	74 7e                	je     8436f07 <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x11b>
 8436e89:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8436e8c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436e8f:	8b 50 24             	mov    0x24(%eax),%edx
 8436e92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436e95:	8b 40 20             	mov    0x20(%eax),%eax
 8436e98:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8436e9c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8436ea0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436ea4:	c7 44 24 04 38 39 c5 	movl   $0x8c53938,0x4(%esp)
 8436eab:	08 
 8436eac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436eaf:	89 04 24             	mov    %eax,(%esp)
 8436eb2:	e8 09 d3 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8436eb7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436ebe:	00 
 8436ebf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436ec2:	89 04 24             	mov    %eax,(%esp)
 8436ec5:	e8 5c d4 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8436eca:	83 f0 01             	xor    $0x1,%eax
 8436ecd:	84 c0                	test   %al,%al
 8436ecf:	74 36                	je     8436f07 <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x11b>
 8436ed1:	c7 44 24 10 ae 39 c5 	movl   $0x8c539ae,0x10(%esp)
 8436ed8:	08 
 8436ed9:	c7 44 24 0c 9d 82 00 	movl   $0x829d,0xc(%esp)
 8436ee0:	00 
 8436ee1:	c7 44 24 08 20 be c5 	movl   $0x8c5be20,0x8(%esp)
 8436ee8:	08 
 8436ee9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8436ef0:	08 
 8436ef1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8436ef8:	e8 0d cd 69 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8436efd:	b8 00 00 00 00       	mov    $0x0,%eax
 8436f02:	e9 ef 00 00 00       	jmp    8436ff6 <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x20a>
 8436f07:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436f0a:	8d 48 0d             	lea    0xd(%eax),%ecx
 8436f0d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436f10:	8b 50 24             	mov    0x24(%eax),%edx
 8436f13:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436f16:	8b 40 20             	mov    0x20(%eax),%eax
 8436f19:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8436f1d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8436f21:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436f25:	c7 44 24 04 c8 39 c5 	movl   $0x8c539c8,0x4(%esp)
 8436f2c:	08 
 8436f2d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436f30:	89 04 24             	mov    %eax,(%esp)
 8436f33:	e8 88 d2 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8436f38:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436f3f:	00 
 8436f40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436f43:	89 04 24             	mov    %eax,(%esp)
 8436f46:	e8 db d3 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8436f4b:	83 f0 01             	xor    $0x1,%eax
 8436f4e:	84 c0                	test   %al,%al
 8436f50:	75 11                	jne    8436f63 <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x177>
 8436f52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436f55:	89 04 24             	mov    %eax,(%esp)
 8436f58:	e8 b3 d3 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8436f5d:	09 d0                	or     %edx,%eax
 8436f5f:	85 c0                	test   %eax,%eax
 8436f61:	75 07                	jne    8436f6a <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x17e>
 8436f63:	b8 01 00 00 00       	mov    $0x1,%eax
 8436f68:	eb 05                	jmp    8436f6f <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x183>
 8436f6a:	b8 00 00 00 00       	mov    $0x0,%eax
 8436f6f:	84 c0                	test   %al,%al
 8436f71:	74 7e                	je     8436ff1 <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x205>
 8436f73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436f76:	8d 48 0d             	lea    0xd(%eax),%ecx
 8436f79:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436f7c:	8b 50 24             	mov    0x24(%eax),%edx
 8436f7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436f82:	8b 40 20             	mov    0x20(%eax),%eax
 8436f85:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8436f89:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8436f8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436f91:	c7 44 24 04 78 3a c5 	movl   $0x8c53a78,0x4(%esp)
 8436f98:	08 
 8436f99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436f9c:	89 04 24             	mov    %eax,(%esp)
 8436f9f:	e8 1c d2 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8436fa4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436fab:	00 
 8436fac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436faf:	89 04 24             	mov    %eax,(%esp)
 8436fb2:	e8 6f d3 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8436fb7:	83 f0 01             	xor    $0x1,%eax
 8436fba:	84 c0                	test   %al,%al
 8436fbc:	74 33                	je     8436ff1 <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x205>
 8436fbe:	c7 44 24 10 f0 3a c5 	movl   $0x8c53af0,0x10(%esp)
 8436fc5:	08 
 8436fc6:	c7 44 24 0c af 82 00 	movl   $0x82af,0xc(%esp)
 8436fcd:	00 
 8436fce:	c7 44 24 08 20 be c5 	movl   $0x8c5be20,0x8(%esp)
 8436fd5:	08 
 8436fd6:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8436fdd:	08 
 8436fde:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8436fe5:	e8 20 cc 69 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8436fea:	b8 00 00 00 00       	mov    $0x0,%eax
 8436fef:	eb 05                	jmp    8436ff6 <_ZN13DB_HackIPSave8dispatchEiiP6Stream+0x20a>
 8436ff1:	b8 01 00 00 00       	mov    $0x1,%eax
 8436ff6:	c9                   	leave
 8436ff7:	c3                   	ret

```

```c
// DB_HackIPSave::dispatch @ 0x8436dec

/* DB_HackIPSave::dispatch(int, int, Stream*) */

undefined4 DB_HackIPSave::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  SIG_HACK_IP_SAVE *pSVar3;
  MySQL *this;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  pSVar3 = Stream::GetOutBuffer<SIG_HACK_IP_SAVE>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(this,
                   "upDate auto_punish_hack_ip set cnt = cnt+1 where occ_date = CAST(DATE_FORMAT(now(), \'%%Y-%%m-%%d\') AS CHAR) and hack_type = %d and hack_sub_type = %d and c_class_ip = \'%s\'"
                   ,*(undefined4 *)(pSVar3 + 0x20),*(undefined4 *)(pSVar3 + 0x24),pSVar3);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,
                     "inSert into auto_punish_hack_ip (occ_date, hack_type, hack_sub_type, c_class_ip, cnt) values (now(), %d, %d, \'%s\', 1)"
                     ,*(undefined4 *)(pSVar3 + 0x20),*(undefined4 *)(pSVar3 + 0x24),pSVar3);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_HackIPSave::dispatch(int, int, Stream*)",0x829d,
                 "DB_HackIPSave DB ERROR");
      return 0;
    }
  }
  MySQL::set_query(this,
                   "upDate auto_punish_hack_full_ip set cnt = cnt+1 where occ_date = CAST(DATE_FORMAT(now(), \'%%Y-%%m-%%d\') AS CHAR) and hack_type = %d and hack_sub_type = %d and full_ip = \'%s\'"
                   ,*(undefined4 *)(pSVar3 + 0x20),*(undefined4 *)(pSVar3 + 0x24),pSVar3 + 0xd);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,
                     "inSert into auto_punish_hack_full_ip (occ_date, hack_type, hack_sub_type, full_ip, cnt) values (now(), %d, %d, \'%s\', 1)"
                     ,*(undefined4 *)(pSVar3 + 0x20),*(undefined4 *)(pSVar3 + 0x24),pSVar3 + 0xd);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_HackIPSave::dispatch(int, int, Stream*)",0x82af,
                 "DB_HackIPSave FullIP DB ERROR");
      return 0;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 08436ff8 DB_HackIPSave::makeRequest  [0x08436ff8-0x843712d] ===
 8436ff8:	55                   	push   %ebp
 8436ff9:	89 e5                	mov    %esp,%ebp
 8436ffb:	56                   	push   %esi
 8436ffc:	53                   	push   %ebx
 8436ffd:	83 ec 20             	sub    $0x20,%esp
 8437000:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8437005:	c7 44 24 08 be 82 00 	movl   $0x82be,0x8(%esp)
 843700c:	00 
 843700d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8437014:	08 
 8437015:	89 04 24             	mov    %eax,(%esp)
 8437018:	e8 69 8a e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843701d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8437024:	00 
 8437025:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437029:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843702c:	89 04 24             	mov    %eax,(%esp)
 843702f:	e8 f2 1b c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8437034:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437037:	89 04 24             	mov    %eax,(%esp)
 843703a:	e8 07 1c c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843703f:	c7 44 24 04 90 01 00 	movl   $0x190,0x4(%esp)
 8437046:	00 
 8437047:	89 04 24             	mov    %eax,(%esp)
 843704a:	e8 07 1c c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843704f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437052:	89 04 24             	mov    %eax,(%esp)
 8437055:	e8 ec 1b c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843705a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8437061:	ff 
 8437062:	89 04 24             	mov    %eax,(%esp)
 8437065:	e8 ec 1b c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843706a:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 843706e:	74 14                	je     8437084 <_ZN13DB_HackIPSave11makeRequestEPKcS1_jj+0x8c>
 8437070:	8b 45 08             	mov    0x8(%ebp),%eax
 8437073:	89 04 24             	mov    %eax,(%esp)
 8437076:	e8 35 73 c4 ff       	call   807e3b0 <strlen@plt>
 843707b:	83 f8 07             	cmp    $0x7,%eax
 843707e:	0f 86 98 00 00 00    	jbe    843711c <_ZN13DB_HackIPSave11makeRequestEPKcS1_jj+0x124>
 8437084:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437087:	89 04 24             	mov    %eax,(%esp)
 843708a:	e8 bf 1b c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843708f:	89 04 24             	mov    %eax,(%esp)
 8437092:	e8 13 c4 01 00       	call   84534aa <_ZN12CStreamGuard11GetInBufferI16SIG_HACK_IP_SAVEEEPT_v>
 8437097:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843709a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843709d:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 84370a4:	00 
 84370a5:	8b 55 08             	mov    0x8(%ebp),%edx
 84370a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84370ac:	89 04 24             	mov    %eax,(%esp)
 84370af:	e8 1c 68 c4 ff       	call   807d8d0 <strncpy@plt>
 84370b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84370b7:	8b 55 10             	mov    0x10(%ebp),%edx
 84370ba:	89 50 20             	mov    %edx,0x20(%eax)
 84370bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84370c0:	8b 55 14             	mov    0x14(%ebp),%edx
 84370c3:	89 50 24             	mov    %edx,0x24(%eax)
 84370c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84370c9:	8d 50 0d             	lea    0xd(%eax),%edx
 84370cc:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84370d3:	00 
 84370d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84370d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84370db:	89 14 24             	mov    %edx,(%esp)
 84370de:	e8 ed 67 c4 ff       	call   807d8d0 <strncpy@plt>
 84370e3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84370e8:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84370eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84370ef:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84370f6:	00 
 84370f7:	89 04 24             	mov    %eax,(%esp)
 84370fa:	e8 df 9e 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84370ff:	eb 1b                	jmp    843711c <_ZN13DB_HackIPSave11makeRequestEPKcS1_jj+0x124>
 8437101:	89 d3                	mov    %edx,%ebx
 8437103:	89 c6                	mov    %eax,%esi
 8437105:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437108:	89 04 24             	mov    %eax,(%esp)
 843710b:	e8 c2 57 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437110:	89 f0                	mov    %esi,%eax
 8437112:	89 da                	mov    %ebx,%edx
 8437114:	89 04 24             	mov    %eax,(%esp)
 8437117:	e8 34 c6 6a 00       	call   8ae3750 <_Unwind_Resume>
 843711c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843711f:	89 04 24             	mov    %eax,(%esp)
 8437122:	e8 ab 57 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437127:	83 c4 20             	add    $0x20,%esp
 843712a:	5b                   	pop    %ebx
 843712b:	5e                   	pop    %esi
 843712c:	5d                   	pop    %ebp
 843712d:	c3                   	ret

```

```c
// DB_HackIPSave::makeRequest @ 0x8436ff8

/* DB_HackIPSave::makeRequest(char const*, char const*, unsigned int, unsigned int) */

void DB_HackIPSave::makeRequest(char *param_1,char *param_2,uint param_3,uint param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  size_t sVar3;
  CStreamGuard local_18 [8];
  SIG_HACK_IP_SAVE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x82be);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843704a to 084370fe has its CatchHandler @ 08437101 */
  CStreamGuard::operator<<(pCVar2,400);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  if (param_1 != (char *)0x0) {
    sVar3 = strlen(param_1);
    if (sVar3 < 8) goto LAB_0843711c;
  }
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_HACK_IP_SAVE>(pCVar2);
  strncpy((char *)local_10,param_1,0xd);
  *(uint *)(local_10 + 0x20) = param_3;
  *(uint *)(local_10 + 0x24) = param_4;
  strncpy((char *)(local_10 + 0xd),param_2,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
LAB_0843711c:
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

