# DB_SaveExpertJob

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084367f4 DB_SaveExpertJob::dispatch  [0x084367f4-0x8436963] ===
 84367f4:	55                   	push   %ebp
 84367f5:	89 e5                	mov    %esp,%ebp
 84367f7:	56                   	push   %esi
 84367f8:	53                   	push   %ebx
 84367f9:	83 ec 30             	sub    $0x30,%esp
 84367fc:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8436801:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8436808:	00 
 8436809:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8436810:	00 
 8436811:	89 04 24             	mov    %eax,(%esp)
 8436814:	e8 25 ea fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8436819:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843681c:	8b 45 14             	mov    0x14(%ebp),%eax
 843681f:	89 04 24             	mov    %eax,(%esp)
 8436822:	e8 1d cb 01 00       	call   8453344 <_ZN6Stream12GetOutBufferI14SIG_EXPERT_JOBEEPT_v>
 8436827:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843682a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843682d:	8b 30                	mov    (%eax),%esi
 843682f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436832:	83 c0 10             	add    $0x10,%eax
 8436835:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 843683c:	00 
 843683d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436841:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8436848:	00 
 8436849:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843684c:	89 04 24             	mov    %eax,(%esp)
 843684f:	e8 d6 dc fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8436854:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8436857:	8b 5a 0c             	mov    0xc(%edx),%ebx
 843685a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843685d:	8b 4a 08             	mov    0x8(%edx),%ecx
 8436860:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8436863:	0f b7 52 04          	movzwl 0x4(%edx),%edx
 8436867:	0f b7 d2             	movzwl %dx,%edx
 843686a:	89 74 24 18          	mov    %esi,0x18(%esp)
 843686e:	89 44 24 14          	mov    %eax,0x14(%esp)
 8436872:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8436876:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 843687a:	89 54 24 08          	mov    %edx,0x8(%esp)
 843687e:	c7 44 24 04 cc 35 c5 	movl   $0x8c535cc,0x4(%esp)
 8436885:	08 
 8436886:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436889:	89 04 24             	mov    %eax,(%esp)
 843688c:	e8 2f d9 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8436891:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436898:	00 
 8436899:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843689c:	89 04 24             	mov    %eax,(%esp)
 843689f:	e8 82 da fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84368a4:	83 f0 01             	xor    $0x1,%eax
 84368a7:	84 c0                	test   %al,%al
 84368a9:	74 0a                	je     84368b5 <_ZN16DB_SaveExpertJob8dispatchEiiP6Stream+0xc1>
 84368ab:	b8 00 00 00 00       	mov    $0x0,%eax
 84368b0:	e9 a7 00 00 00       	jmp    843695c <_ZN16DB_SaveExpertJob8dispatchEiiP6Stream+0x168>
 84368b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84368b8:	89 04 24             	mov    %eax,(%esp)
 84368bb:	e8 50 da fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84368c0:	09 d0                	or     %edx,%eax
 84368c2:	85 c0                	test   %eax,%eax
 84368c4:	0f 94 c0             	sete   %al
 84368c7:	84 c0                	test   %al,%al
 84368c9:	0f 84 88 00 00 00    	je     8436957 <_ZN16DB_SaveExpertJob8dispatchEiiP6Stream+0x163>
 84368cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84368d2:	83 c0 10             	add    $0x10,%eax
 84368d5:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 84368dc:	00 
 84368dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84368e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84368e8:	00 
 84368e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84368ec:	89 04 24             	mov    %eax,(%esp)
 84368ef:	e8 36 dc fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84368f4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84368f7:	8b 72 0c             	mov    0xc(%edx),%esi
 84368fa:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84368fd:	8b 5a 08             	mov    0x8(%edx),%ebx
 8436900:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8436903:	0f b7 52 04          	movzwl 0x4(%edx),%edx
 8436907:	0f b7 ca             	movzwl %dx,%ecx
 843690a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843690d:	8b 12                	mov    (%edx),%edx
 843690f:	89 44 24 18          	mov    %eax,0x18(%esp)
 8436913:	89 74 24 14          	mov    %esi,0x14(%esp)
 8436917:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 843691b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 843691f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8436923:	c7 44 24 04 50 36 c5 	movl   $0x8c53650,0x4(%esp)
 843692a:	08 
 843692b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843692e:	89 04 24             	mov    %eax,(%esp)
 8436931:	e8 8a d8 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8436936:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843693d:	00 
 843693e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436941:	89 04 24             	mov    %eax,(%esp)
 8436944:	e8 dd d9 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8436949:	83 f0 01             	xor    $0x1,%eax
 843694c:	84 c0                	test   %al,%al
 843694e:	74 07                	je     8436957 <_ZN16DB_SaveExpertJob8dispatchEiiP6Stream+0x163>
 8436950:	b8 00 00 00 00       	mov    $0x0,%eax
 8436955:	eb 05                	jmp    843695c <_ZN16DB_SaveExpertJob8dispatchEiiP6Stream+0x168>
 8436957:	b8 01 00 00 00       	mov    $0x1,%eax
 843695c:	83 c4 30             	add    $0x30,%esp
 843695f:	5b                   	pop    %ebx
 8436960:	5e                   	pop    %esi
 8436961:	5d                   	pop    %ebp
 8436962:	c3                   	ret
 8436963:	90                   	nop

```

```c
// DB_SaveExpertJob::dispatch @ 0x84367f4

/* DB_SaveExpertJob::dispatch(int, int, Stream*) */

undefined4 DB_SaveExpertJob::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_EXPERT_JOB *pSVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_EXPERT_JOB>(in_stack_00000010);
  uVar4 = *(undefined4 *)pSVar2;
  uVar3 = MySQL::blob_to_str(this,0,pSVar2 + 0x10,0x1e);
  MySQL::set_query(this,
                   "upDate charac_expert_job set expert_job_giveup_cnt=%d, expert_job_info=%d, expert_job_info_ex=%d, recipe=\'%s\' where charac_no=%u"
                   ,(uint)*(ushort *)(pSVar2 + 4),*(undefined4 *)(pSVar2 + 8),
                   *(undefined4 *)(pSVar2 + 0xc),uVar3,uVar4);
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(this);
    if (lVar5 == 0) {
      uVar4 = MySQL::blob_to_str(this,0,pSVar2 + 0x10,0x1e);
      MySQL::set_query(this,
                       "inSert into charac_expert_job(charac_no, expert_job_giveup_cnt, expert_job_info, expert_job_info_ex, recipe) values(%u, %d, %d, %d, \'%s\')"
                       ,*(undefined4 *)pSVar2,(uint)*(ushort *)(pSVar2 + 4),
                       *(undefined4 *)(pSVar2 + 8),*(undefined4 *)(pSVar2 + 0xc),uVar4);
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

