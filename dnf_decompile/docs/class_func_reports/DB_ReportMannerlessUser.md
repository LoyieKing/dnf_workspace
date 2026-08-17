# DB_ReportMannerlessUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842796a DB_ReportMannerlessUser::dispatch  [0x0842796a-0x8427bcd] ===
 842796a:	55                   	push   %ebp
 842796b:	89 e5                	mov    %esp,%ebp
 842796d:	57                   	push   %edi
 842796e:	56                   	push   %esi
 842796f:	53                   	push   %ebx
 8427970:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 8427976:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842797b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8427982:	00 
 8427983:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842798a:	00 
 842798b:	89 04 24             	mov    %eax,(%esp)
 842798e:	e8 ab d8 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8427993:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8427996:	8b 45 14             	mov    0x14(%ebp),%eax
 8427999:	89 04 24             	mov    %eax,(%esp)
 842799c:	e8 45 a8 02 00       	call   84521e6 <_ZN6Stream12GetOutBufferI19SIG_MANNERLESS_USEREEPT_v>
 84279a1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84279a4:	b8 f0 c1 43 09       	mov    $0x943c1f0,%eax
 84279a9:	0f b6 00             	movzbl (%eax),%eax
 84279ac:	84 c0                	test   %al,%al
 84279ae:	75 71                	jne    8427a21 <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0xb7>
 84279b0:	c7 04 24 f0 c1 43 09 	movl   $0x943c1f0,(%esp)
 84279b7:	e8 74 d9 2f 00       	call   8725330 <__cxa_guard_acquire>
 84279bc:	85 c0                	test   %eax,%eax
 84279be:	0f 95 c0             	setne  %al
 84279c1:	84 c0                	test   %al,%al
 84279c3:	74 5c                	je     8427a21 <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0xb7>
 84279c5:	bb 00 00 00 00       	mov    $0x0,%ebx
 84279ca:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 84279d1:	e8 fa eb 2d 00       	call   87065d0 <_ZNSsC1Ev>
 84279d6:	c7 04 24 f0 c1 43 09 	movl   $0x943c1f0,(%esp)
 84279dd:	e8 6e d8 2f 00       	call   8725250 <__cxa_guard_release>
 84279e2:	b8 e0 7b 70 08       	mov    $0x8707be0,%eax
 84279e7:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 84279ee:	08 
 84279ef:	c7 44 24 04 2c c2 43 	movl   $0x943c22c,0x4(%esp)
 84279f6:	09 
 84279f7:	89 04 24             	mov    %eax,(%esp)
 84279fa:	e8 d1 63 c5 ff       	call   807ddd0 <__cxa_atexit@plt>
 84279ff:	eb 20                	jmp    8427a21 <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0xb7>
 8427a01:	89 d6                	mov    %edx,%esi
 8427a03:	89 c7                	mov    %eax,%edi
 8427a05:	84 db                	test   %bl,%bl
 8427a07:	75 0c                	jne    8427a15 <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0xab>
 8427a09:	c7 04 24 f0 c1 43 09 	movl   $0x943c1f0,(%esp)
 8427a10:	e8 ab d8 2f 00       	call   87252c0 <__cxa_guard_abort>
 8427a15:	89 f8                	mov    %edi,%eax
 8427a17:	89 f2                	mov    %esi,%edx
 8427a19:	89 04 24             	mov    %eax,(%esp)
 8427a1c:	e8 2f bd 6b 00       	call   8ae3750 <_Unwind_Resume>
 8427a21:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427a28:	e8 73 ec 2d 00       	call   87066a0 <_ZNKSs5emptyEv>
 8427a2d:	83 f0 01             	xor    $0x1,%eax
 8427a30:	84 c0                	test   %al,%al
 8427a32:	74 14                	je     8427a48 <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0xde>
 8427a34:	c7 44 24 04 3d c6 c4 	movl   $0x8c4c63d,0x4(%esp)
 8427a3b:	08 
 8427a3c:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427a43:	e8 e8 05 2e 00       	call   8708030 <_ZNSspLEPKc>
 8427a48:	c7 44 24 04 fe eb c4 	movl   $0x8c4ebfe,0x4(%esp)
 8427a4f:	08 
 8427a50:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427a57:	e8 d4 05 2e 00       	call   8708030 <_ZNSspLEPKc>
 8427a5c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427a5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427a63:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427a6a:	e8 c1 05 2e 00       	call   8708030 <_ZNSspLEPKc>
 8427a6f:	c7 44 24 04 3d c6 c4 	movl   $0x8c4c63d,0x4(%esp)
 8427a76:	08 
 8427a77:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427a7e:	e8 ad 05 2e 00       	call   8708030 <_ZNSspLEPKc>
 8427a83:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427a86:	83 c0 1d             	add    $0x1d,%eax
 8427a89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427a8d:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427a94:	e8 97 05 2e 00       	call   8708030 <_ZNSspLEPKc>
 8427a99:	c7 44 24 04 3d c6 c4 	movl   $0x8c4c63d,0x4(%esp)
 8427aa0:	08 
 8427aa1:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427aa8:	e8 83 05 2e 00       	call   8708030 <_ZNSspLEPKc>
 8427aad:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427ab0:	83 c0 3a             	add    $0x3a,%eax
 8427ab3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427ab7:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427abe:	e8 6d 05 2e 00       	call   8708030 <_ZNSspLEPKc>
 8427ac3:	c7 44 24 04 3d c6 c4 	movl   $0x8c4c63d,0x4(%esp)
 8427aca:	08 
 8427acb:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427ad2:	e8 59 05 2e 00       	call   8708030 <_ZNSspLEPKc>
 8427ad7:	8d 95 dd fe ff ff    	lea    -0x123(%ebp),%edx
 8427add:	bb ff 00 00 00       	mov    $0xff,%ebx
 8427ae2:	b8 00 00 00 00       	mov    $0x0,%eax
 8427ae7:	89 d1                	mov    %edx,%ecx
 8427ae9:	83 e1 01             	and    $0x1,%ecx
 8427aec:	85 c9                	test   %ecx,%ecx
 8427aee:	74 08                	je     8427af8 <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0x18e>
 8427af0:	88 02                	mov    %al,(%edx)
 8427af2:	83 c2 01             	add    $0x1,%edx
 8427af5:	83 eb 01             	sub    $0x1,%ebx
 8427af8:	89 d1                	mov    %edx,%ecx
 8427afa:	83 e1 02             	and    $0x2,%ecx
 8427afd:	85 c9                	test   %ecx,%ecx
 8427aff:	74 09                	je     8427b0a <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0x1a0>
 8427b01:	66 89 02             	mov    %ax,(%edx)
 8427b04:	83 c2 02             	add    $0x2,%edx
 8427b07:	83 eb 02             	sub    $0x2,%ebx
 8427b0a:	89 d9                	mov    %ebx,%ecx
 8427b0c:	c1 e9 02             	shr    $0x2,%ecx
 8427b0f:	89 d7                	mov    %edx,%edi
 8427b11:	f3 ab                	rep stos %eax,%es:(%edi)
 8427b13:	89 fa                	mov    %edi,%edx
 8427b15:	89 d9                	mov    %ebx,%ecx
 8427b17:	83 e1 02             	and    $0x2,%ecx
 8427b1a:	85 c9                	test   %ecx,%ecx
 8427b1c:	74 06                	je     8427b24 <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0x1ba>
 8427b1e:	66 89 02             	mov    %ax,(%edx)
 8427b21:	83 c2 02             	add    $0x2,%edx
 8427b24:	89 d9                	mov    %ebx,%ecx
 8427b26:	83 e1 01             	and    $0x1,%ecx
 8427b29:	85 c9                	test   %ecx,%ecx
 8427b2b:	74 05                	je     8427b32 <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0x1c8>
 8427b2d:	88 02                	mov    %al,(%edx)
 8427b2f:	83 c2 01             	add    $0x1,%edx
 8427b32:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8427b39:	e8 60 41 ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8427b3e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8427b41:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427b44:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427b48:	c7 44 24 04 00 ec c4 	movl   $0x8c4ec00,0x4(%esp)
 8427b4f:	08 
 8427b50:	8d 85 dd fe ff ff    	lea    -0x123(%ebp),%eax
 8427b56:	89 04 24             	mov    %eax,(%esp)
 8427b59:	e8 e2 68 c5 ff       	call   807e440 <sprintf@plt>
 8427b5e:	8d 85 dd fe ff ff    	lea    -0x123(%ebp),%eax
 8427b64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427b68:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427b6f:	e8 bc 04 2e 00       	call   8708030 <_ZNSspLEPKc>
 8427b74:	c7 44 24 04 12 ec c4 	movl   $0x8c4ec12,0x4(%esp)
 8427b7b:	08 
 8427b7c:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427b83:	e8 a8 04 2e 00       	call   8708030 <_ZNSspLEPKc>
 8427b88:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427b8f:	e8 cc ea 2d 00       	call   8706660 <_ZNKSs4sizeEv>
 8427b94:	ba 00 60 00 00       	mov    $0x6000,%edx
 8427b99:	89 d1                	mov    %edx,%ecx
 8427b9b:	29 c1                	sub    %eax,%ecx
 8427b9d:	89 c8                	mov    %ecx,%eax
 8427b9f:	3d 73 02 00 00       	cmp    $0x273,%eax
 8427ba4:	0f 97 c0             	seta   %al
 8427ba7:	84 c0                	test   %al,%al
 8427ba9:	74 07                	je     8427bb2 <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0x248>
 8427bab:	b8 01 00 00 00       	mov    $0x1,%eax
 8427bb0:	eb 11                	jmp    8427bc3 <_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream+0x259>
 8427bb2:	c7 04 24 2c c2 43 09 	movl   $0x943c22c,(%esp)
 8427bb9:	e8 12 12 2e 00       	call   8708dd0 <_ZNSs5clearEv>
 8427bbe:	b8 01 00 00 00       	mov    $0x1,%eax
 8427bc3:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 8427bc9:	5b                   	pop    %ebx
 8427bca:	5e                   	pop    %esi
 8427bcb:	5f                   	pop    %edi
 8427bcc:	5d                   	pop    %ebp
 8427bcd:	c3                   	ret

```

```c
// DB_ReportMannerlessUser::dispatch @ 0x842796a

/* DB_ReportMannerlessUser::dispatch(int, int, Stream*) */

undefined4 DB_ReportMannerlessUser::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  Stream *in_stack_00000010;
  char local_127;
  char local_126 [254];
  undefined4 local_28;
  SIG_MANNERLESS_USER *local_24;
  undefined4 local_20;
  
  bVar7 = 0;
  local_28 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_24 = Stream::GetOutBuffer<SIG_MANNERLESS_USER>(in_stack_00000010);
  if ((dispatch(int,int,Stream*)::cache_query == '\0') &&
     (iVar2 = __cxa_guard_acquire(&dispatch(int,int,Stream*)::cache_query), iVar2 != 0)) {
                    /* try { // try from 084279d1 to 084279d5 has its CatchHandler @ 08427a01 */
    std::string::string((string *)&dispatch(int,int,Stream*)::cache_query);
    __cxa_guard_release(&dispatch(int,int,Stream*)::cache_query);
    __cxa_atexit(std::string::~string,&dispatch(int,int,Stream*)::cache_query,&__dso_handle);
  }
  cVar1 = std::string::empty((string *)&dispatch(int,int,Stream*)::cache_query);
  if (cVar1 != '\x01') {
    std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,",");
  }
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,"(");
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,(char *)local_24);
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,",");
  std::string::operator+=
            ((string *)&dispatch(int,int,Stream*)::cache_query,(char *)(local_24 + 0x1d));
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,",");
  std::string::operator+=
            ((string *)&dispatch(int,int,Stream*)::cache_query,(char *)(local_24 + 0x3a));
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,",");
  pcVar4 = &local_127;
  uVar5 = 0xff;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_127 = '\0';
    pcVar4 = local_126;
    uVar5 = 0xfe;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar6) {
    *pcVar4 = '\0';
  }
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  sprintf(&local_127,"from_unixtime(%d)",local_20);
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,&local_127);
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,")");
  iVar2 = std::string::size((string *)&dispatch(int,int,Stream*)::cache_query);
  if (0x6000U - iVar2 < 0x274) {
    std::string::clear((string *)&dispatch(int,int,Stream*)::cache_query);
  }
  return 1;
}

```

