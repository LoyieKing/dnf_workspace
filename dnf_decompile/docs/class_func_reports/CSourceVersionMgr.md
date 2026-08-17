# CSourceVersionMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## CSourceVersionMgr

```asm
// === 086b22c0 CSourceVersionMgr::CSourceVersionMgr  [0x086b22c0-0x86b2347] ===
 86b22c0:	55                   	push   %ebp
 86b22c1:	89 e5                	mov    %esp,%ebp
 86b22c3:	56                   	push   %esi
 86b22c4:	53                   	push   %ebx
 86b22c5:	83 ec 10             	sub    $0x10,%esp
 86b22c8:	8b 45 08             	mov    0x8(%ebp),%eax
 86b22cb:	89 04 24             	mov    %eax,(%esp)
 86b22ce:	e8 d5 01 00 00       	call   86b24a8 <_ZNSt6vectorIN17CSourceVersionMgr13SourceVersionESaIS1_EEC1Ev>
 86b22d3:	c7 44 24 08 dc 6b 01 	movl   $0x16bdc,0x8(%esp)
 86b22da:	00 
 86b22db:	c7 44 24 04 40 67 cf 	movl   $0x8cf6740,0x4(%esp)
 86b22e2:	08 
 86b22e3:	8b 45 08             	mov    0x8(%ebp),%eax
 86b22e6:	89 04 24             	mov    %eax,(%esp)
 86b22e9:	e8 1a 01 00 00       	call   86b2408 <_ZN17CSourceVersionMgr19InsertSourceVersionEPci>
 86b22ee:	c7 44 24 08 dc 6b 01 	movl   $0x16bdc,0x8(%esp)
 86b22f5:	00 
 86b22f6:	c7 44 24 04 42 67 cf 	movl   $0x8cf6742,0x4(%esp)
 86b22fd:	08 
 86b22fe:	8b 45 08             	mov    0x8(%ebp),%eax
 86b2301:	89 04 24             	mov    %eax,(%esp)
 86b2304:	e8 ff 00 00 00       	call   86b2408 <_ZN17CSourceVersionMgr19InsertSourceVersionEPci>
 86b2309:	c7 44 24 08 dc 6b 01 	movl   $0x16bdc,0x8(%esp)
 86b2310:	00 
 86b2311:	c7 44 24 04 52 67 cf 	movl   $0x8cf6752,0x4(%esp)
 86b2318:	08 
 86b2319:	8b 45 08             	mov    0x8(%ebp),%eax
 86b231c:	89 04 24             	mov    %eax,(%esp)
 86b231f:	e8 e4 00 00 00       	call   86b2408 <_ZN17CSourceVersionMgr19InsertSourceVersionEPci>
 86b2324:	eb 1b                	jmp    86b2341 <_ZN17CSourceVersionMgrC1Ev+0x81>
 86b2326:	89 d3                	mov    %edx,%ebx
 86b2328:	89 c6                	mov    %eax,%esi
 86b232a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b232d:	89 04 24             	mov    %eax,(%esp)
 86b2330:	e8 87 01 00 00       	call   86b24bc <_ZNSt6vectorIN17CSourceVersionMgr13SourceVersionESaIS1_EED1Ev>
 86b2335:	89 f0                	mov    %esi,%eax
 86b2337:	89 da                	mov    %ebx,%edx
 86b2339:	89 04 24             	mov    %eax,(%esp)
 86b233c:	e8 0f 14 43 00       	call   8ae3750 <_Unwind_Resume>
 86b2341:	83 c4 10             	add    $0x10,%esp
 86b2344:	5b                   	pop    %ebx
 86b2345:	5e                   	pop    %esi
 86b2346:	5d                   	pop    %ebp
 86b2347:	c3                   	ret

```

```c
// CSourceVersionMgr::CSourceVersionMgr @ 0x86b22c0

/* CSourceVersionMgr::CSourceVersionMgr() */

void __thiscall CSourceVersionMgr::CSourceVersionMgr(CSourceVersionMgr *this)

{
  std::vector<CSourceVersionMgr::SourceVersion,std::allocator<CSourceVersionMgr::SourceVersion>>::
  vector((vector<CSourceVersionMgr::SourceVersion,std::allocator<CSourceVersionMgr::SourceVersion>>
          *)this);
                    /* try { // try from 086b22e9 to 086b2323 has its CatchHandler @ 086b2326 */
  InsertSourceVersion(this,".",0x16bdc);
  InsertSourceVersion(this,"../ServerCommon",0x16bdc);
  InsertSourceVersion(this,"../../DNFShared",0x16bdc);
  return;
}

```

