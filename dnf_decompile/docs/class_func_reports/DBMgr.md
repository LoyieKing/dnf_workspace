# DBMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## Close

```asm
// === 083f4ea6 DBMgr::Close  [0x083f4ea6-0x83f4edf] ===
 83f4ea6:	55                   	push   %ebp
 83f4ea7:	89 e5                	mov    %esp,%ebp
 83f4ea9:	83 ec 28             	sub    $0x28,%esp
 83f4eac:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83f4eb3:	eb 1d                	jmp    83f4ed2 <_ZN5DBMgr5CloseEv+0x2c>
 83f4eb5:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4eb8:	8b 10                	mov    (%eax),%edx
 83f4eba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f4ebd:	69 c0 8c 20 04 00    	imul   $0x4208c,%eax,%eax
 83f4ec3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83f4ec6:	89 04 24             	mov    %eax,(%esp)
 83f4ec9:	e8 a6 ef ff ff       	call   83f3e74 <_ZN5MySQL5closeEv>
 83f4ece:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83f4ed2:	83 7d f4 10          	cmpl   $0x10,-0xc(%ebp)
 83f4ed6:	0f 9e c0             	setle  %al
 83f4ed9:	84 c0                	test   %al,%al
 83f4edb:	75 d8                	jne    83f4eb5 <_ZN5DBMgr5CloseEv+0xf>
 83f4edd:	c9                   	leave
 83f4ede:	c3                   	ret
 83f4edf:	90                   	nop

```

```c
// DBMgr::Close @ 0x83f4ea6

/* DBMgr::Close() */

void __thiscall DBMgr::Close(DBMgr *this)

{
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < 0x11; local_10 = local_10 + 1) {
    MySQL::close((MySQL *)(*(int *)this + local_10 * 0x4208c));
  }
  return;
}

```

---

## Close_083f4ee0

```asm
// === 083f4ee0 DBMgr::Close  [0x083f4ee0-0x83f4f0f] ===
 83f4ee0:	55                   	push   %ebp
 83f4ee1:	89 e5                	mov    %esp,%ebp
 83f4ee3:	83 ec 18             	sub    $0x18,%esp
 83f4ee6:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4ee9:	85 c0                	test   %eax,%eax
 83f4eeb:	78 21                	js     83f4f0e <_ZN5DBMgr5CloseE18ENUM_DB_HANDLE_IDX+0x2e>
 83f4eed:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4ef0:	83 f8 10             	cmp    $0x10,%eax
 83f4ef3:	7f 19                	jg     83f4f0e <_ZN5DBMgr5CloseE18ENUM_DB_HANDLE_IDX+0x2e>
 83f4ef5:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4ef8:	8b 10                	mov    (%eax),%edx
 83f4efa:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4efd:	69 c0 8c 20 04 00    	imul   $0x4208c,%eax,%eax
 83f4f03:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83f4f06:	89 04 24             	mov    %eax,(%esp)
 83f4f09:	e8 66 ef ff ff       	call   83f3e74 <_ZN5MySQL5closeEv>
 83f4f0e:	c9                   	leave
 83f4f0f:	c3                   	ret

```

```c
// DBMgr::Close @ 0x83f4ee0

/* DBMgr::Close(ENUM_DB_HANDLE_IDX) */

void __thiscall DBMgr::Close(DBMgr *this,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x11)) {
    MySQL::close((MySQL *)(*(int *)this + param_2 * 0x4208c));
  }
  return;
}

```

---

## DBMgr

```asm
// === 083f48de DBMgr::DBMgr  [0x083f48de-0x83f4a1b] ===
 83f48de:	55                   	push   %ebp
 83f48df:	89 e5                	mov    %esp,%ebp
 83f48e1:	57                   	push   %edi
 83f48e2:	56                   	push   %esi
 83f48e3:	53                   	push   %ebx
 83f48e4:	83 ec 3c             	sub    $0x3c,%esp
 83f48e7:	8b 45 08             	mov    0x8(%ebp),%eax
 83f48ea:	83 c0 0c             	add    $0xc,%eax
 83f48ed:	89 04 24             	mov    %eax,(%esp)
 83f48f0:	e8 97 0d 00 00       	call   83f568c <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 83f48f5:	8b 45 08             	mov    0x8(%ebp),%eax
 83f48f8:	83 c0 20             	add    $0x20,%eax
 83f48fb:	89 04 24             	mov    %eax,(%esp)
 83f48fe:	e8 5d 0e 00 00       	call   83f5760 <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEEC1Ev>
 83f4903:	c7 04 24 50 29 46 00 	movl   $0x462950,(%esp)
 83f490a:	e8 b1 e4 32 00       	call   8722dc0 <_Znaj>
 83f490f:	89 c6                	mov    %eax,%esi
 83f4911:	89 f0                	mov    %esi,%eax
 83f4913:	c7 00 11 00 00 00    	movl   $0x11,(%eax)
 83f4919:	89 f0                	mov    %esi,%eax
 83f491b:	83 c0 04             	add    $0x4,%eax
 83f491e:	89 c3                	mov    %eax,%ebx
 83f4920:	bf 10 00 00 00       	mov    $0x10,%edi
 83f4925:	eb 11                	jmp    83f4938 <_ZN5DBMgrC1Ev+0x5a>
 83f4927:	89 1c 24             	mov    %ebx,(%esp)
 83f492a:	e8 99 f1 ff ff       	call   83f3ac8 <_ZN5MySQLC1Ev>
 83f492f:	81 c3 8c 20 04 00    	add    $0x4208c,%ebx
 83f4935:	83 ef 01             	sub    $0x1,%edi
 83f4938:	83 ff ff             	cmp    $0xffffffff,%edi
 83f493b:	0f 95 c0             	setne  %al
 83f493e:	84 c0                	test   %al,%al
 83f4940:	75 e5                	jne    83f4927 <_ZN5DBMgrC1Ev+0x49>
 83f4942:	89 f0                	mov    %esi,%eax
 83f4944:	8d 50 04             	lea    0x4(%eax),%edx
 83f4947:	8b 45 08             	mov    0x8(%ebp),%eax
 83f494a:	89 10                	mov    %edx,(%eax)
 83f494c:	8b 45 08             	mov    0x8(%ebp),%eax
 83f494f:	8b 00                	mov    (%eax),%eax
 83f4951:	85 c0                	test   %eax,%eax
 83f4953:	75 46                	jne    83f499b <_ZN5DBMgrC1Ev+0xbd>
 83f4955:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f495c:	00 
 83f495d:	c7 44 24 08 01 03 00 	movl   $0x301,0x8(%esp)
 83f4964:	00 
 83f4965:	c7 44 24 04 f0 58 c3 	movl   $0x8c358f0,0x4(%esp)
 83f496c:	08 
 83f496d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83f4970:	89 04 24             	mov    %eax,(%esp)
 83f4973:	e8 a0 ad 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f4978:	c7 44 24 0c 01 03 00 	movl   $0x301,0xc(%esp)
 83f497f:	00 
 83f4980:	c7 44 24 08 f0 58 c3 	movl   $0x8c358f0,0x8(%esp)
 83f4987:	08 
 83f4988:	c7 44 24 04 20 4b c3 	movl   $0x8c34b20,0x4(%esp)
 83f498f:	08 
 83f4990:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83f4993:	89 04 24             	mov    %eax,(%esp)
 83f4996:	e8 ed ad 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f499b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 83f49a2:	eb 1d                	jmp    83f49c1 <_ZN5DBMgrC1Ev+0xe3>
 83f49a4:	8b 45 08             	mov    0x8(%ebp),%eax
 83f49a7:	8b 10                	mov    (%eax),%edx
 83f49a9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83f49ac:	69 c0 8c 20 04 00    	imul   $0x4208c,%eax,%eax
 83f49b2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83f49b5:	89 04 24             	mov    %eax,(%esp)
 83f49b8:	e8 27 f3 ff ff       	call   83f3ce4 <_ZN5MySQL4initEv>
 83f49bd:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 83f49c1:	83 7d e4 10          	cmpl   $0x10,-0x1c(%ebp)
 83f49c5:	0f 9e c0             	setle  %al
 83f49c8:	84 c0                	test   %al,%al
 83f49ca:	75 d8                	jne    83f49a4 <_ZN5DBMgrC1Ev+0xc6>
 83f49cc:	8b 45 08             	mov    0x8(%ebp),%eax
 83f49cf:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 83f49d3:	8b 45 08             	mov    0x8(%ebp),%eax
 83f49d6:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 83f49dd:	83 c4 3c             	add    $0x3c,%esp
 83f49e0:	5b                   	pop    %ebx
 83f49e1:	5e                   	pop    %esi
 83f49e2:	5f                   	pop    %edi
 83f49e3:	5d                   	pop    %ebp
 83f49e4:	c3                   	ret
 83f49e5:	89 d3                	mov    %edx,%ebx
 83f49e7:	89 c6                	mov    %eax,%esi
 83f49e9:	8b 45 08             	mov    0x8(%ebp),%eax
 83f49ec:	83 c0 20             	add    $0x20,%eax
 83f49ef:	89 04 24             	mov    %eax,(%esp)
 83f49f2:	e8 81 0c 00 00       	call   83f5678 <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEED1Ev>
 83f49f7:	89 f0                	mov    %esi,%eax
 83f49f9:	89 da                	mov    %ebx,%edx
 83f49fb:	eb 00                	jmp    83f49fd <_ZN5DBMgrC1Ev+0x11f>
 83f49fd:	89 d3                	mov    %edx,%ebx
 83f49ff:	89 c6                	mov    %eax,%esi
 83f4a01:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4a04:	83 c0 0c             	add    $0xc,%eax
 83f4a07:	89 04 24             	mov    %eax,(%esp)
 83f4a0a:	e8 55 0c 00 00       	call   83f5664 <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 83f4a0f:	89 f0                	mov    %esi,%eax
 83f4a11:	89 da                	mov    %ebx,%edx
 83f4a13:	89 04 24             	mov    %eax,(%esp)
 83f4a16:	e8 35 ed 6e 00       	call   8ae3750 <_Unwind_Resume>
 83f4a1b:	90                   	nop

```

```c
// DBMgr::DBMgr @ 0x83f48de

/* DBMgr::DBMgr() */

void __thiscall DBMgr::DBMgr(DBMgr *this)

{
  undefined4 *puVar1;
  MySQL *this_00;
  int iVar2;
  cMyTrace local_30 [16];
  int local_20;
  
  __gnu_cxx::
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  ::hash_map((hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
              *)(this + 0xc));
                    /* try { // try from 083f48fe to 083f4902 has its CatchHandler @ 083f49fd */
  std::
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  ::map((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
         *)(this + 0x20));
                    /* try { // try from 083f490a to 083f49bc has its CatchHandler @ 083f49e5 */
  puVar1 = operator_new__(0x462950);
  *puVar1 = 0x11;
  this_00 = (MySQL *)(puVar1 + 1);
  for (iVar2 = 0x10; iVar2 != -1; iVar2 = iVar2 + -1) {
    MySQL::MySQL(this_00);
    this_00 = this_00 + 0x4208c;
  }
  *(undefined4 **)this = puVar1 + 1;
  if (*(int *)this == 0) {
    cMyTrace::cMyTrace(local_30,DBMgr()::__PRETTY_FUNCTION__,0x301,5);
    cMyTrace::operator()(local_30,"[%s][%d]",DBMgr()::__PRETTY_FUNCTION__,0x301);
  }
  for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
    MySQL::init((MySQL *)(*(int *)this + local_20 * 0x4208c));
  }
  this[8] = (DBMgr)0x0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  return;
}

```

---

## GetDBHandle

```asm
// === 083f523e DBMgr::GetDBHandle  [0x083f523e-0x83f52be] ===
 83f523e:	55                   	push   %ebp
 83f523f:	89 e5                	mov    %esp,%ebp
 83f5241:	83 ec 28             	sub    $0x28,%esp
 83f5244:	8b 45 08             	mov    0x8(%ebp),%eax
 83f5247:	8b 00                	mov    (%eax),%eax
 83f5249:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83f524c:	8b 45 08             	mov    0x8(%ebp),%eax
 83f524f:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 83f5253:	83 f0 01             	xor    $0x1,%eax
 83f5256:	84 c0                	test   %al,%al
 83f5258:	74 13                	je     83f526d <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0x2f>
 83f525a:	8b 45 08             	mov    0x8(%ebp),%eax
 83f525d:	8b 10                	mov    (%eax),%edx
 83f525f:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f5262:	69 c0 8c 20 04 00    	imul   $0x4208c,%eax,%eax
 83f5268:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83f526b:	eb 50                	jmp    83f52bd <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0x7f>
 83f526d:	c7 45 f0 04 00 00 00 	movl   $0x4,-0x10(%ebp)
 83f5274:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 83f5278:	74 06                	je     83f5280 <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0x42>
 83f527a:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 83f527e:	75 31                	jne    83f52b1 <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0x73>
 83f5280:	8b 45 10             	mov    0x10(%ebp),%eax
 83f5283:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f5287:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f528a:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f528e:	8b 45 08             	mov    0x8(%ebp),%eax
 83f5291:	89 04 24             	mov    %eax,(%esp)
 83f5294:	e8 d3 fd ff ff       	call   83f506c <_ZN5DBMgr22GetDBHandleServerGroupE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83f5299:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f529c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 83f52a0:	75 0a                	jne    83f52ac <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0x6e>
 83f52a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83f52a5:	05 30 82 10 00       	add    $0x108230,%eax
 83f52aa:	eb 11                	jmp    83f52bd <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0x7f>
 83f52ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f52af:	eb 0c                	jmp    83f52bd <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0x7f>
 83f52b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f52b4:	69 c0 8c 20 04 00    	imul   $0x4208c,%eax,%eax
 83f52ba:	03 45 ec             	add    -0x14(%ebp),%eax
 83f52bd:	c9                   	leave
 83f52be:	c3                   	ret

```

```c
// DBMgr::GetDBHandle @ 0x83f523e

/* DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP) */

int __thiscall DBMgr::GetDBHandle(DBMgr *this,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  if (this[8] == (DBMgr)0x1) {
    if ((param_2 == 2) || (param_2 == 3)) {
      iVar2 = GetDBHandleServerGroup(this,param_2,param_3);
      if (iVar2 == 0) {
        iVar2 = iVar1 + 0x108230;
      }
    }
    else {
      iVar2 = param_2 * 0x4208c + iVar1;
    }
  }
  else {
    iVar2 = *(int *)this + param_2 * 0x4208c;
  }
  return iVar2;
}

```

---

## GetDBHandleServerGroup

```asm
// === 083f506c DBMgr::GetDBHandleServerGroup  [0x083f506c-0x83f514f] ===
 83f506c:	55                   	push   %ebp
 83f506d:	89 e5                	mov    %esp,%ebp
 83f506f:	83 ec 38             	sub    $0x38,%esp
 83f5072:	8b 45 10             	mov    0x10(%ebp),%eax
 83f5075:	85 c0                	test   %eax,%eax
 83f5077:	0f 85 aa 00 00 00    	jne    83f5127 <_ZN5DBMgr22GetDBHandleServerGroupE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0xbb>
 83f507d:	8b 45 08             	mov    0x8(%ebp),%eax
 83f5080:	8d 48 04             	lea    0x4(%eax),%ecx
 83f5083:	8b 45 08             	mov    0x8(%ebp),%eax
 83f5086:	8d 50 0c             	lea    0xc(%eax),%edx
 83f5089:	8d 45 e0             	lea    -0x20(%ebp),%eax
 83f508c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83f5090:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f5094:	89 04 24             	mov    %eax,(%esp)
 83f5097:	e8 c2 0a 00 00       	call   83f5b5e <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 83f509c:	83 ec 04             	sub    $0x4,%esp
 83f509f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 83f50a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f50a6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f50a9:	89 04 24             	mov    %eax,(%esp)
 83f50ac:	e8 d9 0a 00 00       	call   83f5b8a <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiN5DBMgr14stUserDBInfo_tEEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1ERKNS_19_Hashtable_iteratorIS5_iS7_S9_SB_SC_EE>
 83f50b1:	8b 45 08             	mov    0x8(%ebp),%eax
 83f50b4:	8d 50 0c             	lea    0xc(%eax),%edx
 83f50b7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83f50ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f50be:	89 04 24             	mov    %eax,(%esp)
 83f50c1:	e8 e0 0a 00 00       	call   83f5ba6 <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 83f50c6:	83 ec 04             	sub    $0x4,%esp
 83f50c9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83f50cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f50d0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f50d3:	89 04 24             	mov    %eax,(%esp)
 83f50d6:	e8 af 0a 00 00       	call   83f5b8a <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiN5DBMgr14stUserDBInfo_tEEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1ERKNS_19_Hashtable_iteratorIS5_iS7_S9_SB_SC_EE>
 83f50db:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f50de:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f50e2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f50e5:	89 04 24             	mov    %eax,(%esp)
 83f50e8:	e8 4d 0c 00 00       	call   83f5d3a <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiN5DBMgr14stUserDBInfo_tEEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 83f50ed:	84 c0                	test   %al,%al
 83f50ef:	74 25                	je     83f5116 <_ZN5DBMgr22GetDBHandleServerGroupE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0xaa>
 83f50f1:	8b 45 08             	mov    0x8(%ebp),%eax
 83f50f4:	8b 40 04             	mov    0x4(%eax),%eax
 83f50f7:	83 f8 ff             	cmp    $0xffffffff,%eax
 83f50fa:	75 13                	jne    83f510f <_ZN5DBMgr22GetDBHandleServerGroupE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0xa3>
 83f50fc:	8b 45 08             	mov    0x8(%ebp),%eax
 83f50ff:	8b 10                	mov    (%eax),%edx
 83f5101:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f5104:	69 c0 8c 20 04 00    	imul   $0x4208c,%eax,%eax
 83f510a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83f510d:	eb 05                	jmp    83f5114 <_ZN5DBMgr22GetDBHandleServerGroupE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0xa8>
 83f510f:	b8 00 00 00 00       	mov    $0x0,%eax
 83f5114:	eb 37                	jmp    83f514d <_ZN5DBMgr22GetDBHandleServerGroupE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP+0xe1>
 83f5116:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f5119:	89 04 24             	mov    %eax,(%esp)
 83f511c:	e8 bf 0a 00 00       	call   83f5be0 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiN5DBMgr14stUserDBInfo_tEEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 83f5121:	8b 40 0c             	mov    0xc(%eax),%eax
 83f5124:	89 45 10             	mov    %eax,0x10(%ebp)
 83f5127:	8b 45 08             	mov    0x8(%ebp),%eax
 83f512a:	8d 50 20             	lea    0x20(%eax),%edx
 83f512d:	8d 45 10             	lea    0x10(%ebp),%eax
 83f5130:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f5134:	89 14 24             	mov    %edx,(%esp)
 83f5137:	e8 e0 07 00 00       	call   83f591c <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEEixERSC_>
 83f513c:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f513f:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f5143:	89 04 24             	mov    %eax,(%esp)
 83f5146:	e8 1d 09 00 00       	call   83f5a68 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEEixERS6_>
 83f514b:	8b 00                	mov    (%eax),%eax
 83f514d:	c9                   	leave
 83f514e:	c3                   	ret
 83f514f:	90                   	nop

```

```c
// DBMgr::GetDBHandleServerGroup @ 0x83f506c

/* DBMgr::GetDBHandleServerGroup(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP) */

int __thiscall DBMgr::GetDBHandleServerGroup(DBMgr *this,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  *this_00;
  int *piVar3;
  _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_2c [8];
  _Hashtable_iterator local_24 [8];
  _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_1c [8];
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_14 [16];
  
  if (param_3 == 0) {
    __gnu_cxx::
    hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
    ::find((int *)local_24);
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
    ::_Hashtable_const_iterator(local_2c,local_24);
    __gnu_cxx::
    hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
    ::end(local_14);
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
    ::_Hashtable_const_iterator(local_1c,(_Hashtable_iterator *)local_14);
    cVar1 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
            ::operator==(local_2c,(_Hashtable_const_iterator *)local_1c);
    if (cVar1 != '\0') {
      if (*(int *)(this + 4) == -1) {
        return *(int *)this + param_2 * 0x4208c;
      }
      return 0;
    }
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
            ::operator->(local_2c);
    param_3 = *(int *)(iVar2 + 0xc);
  }
  this_00 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
             *)std::
               map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
               ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                             *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_3);
  piVar3 = (int *)std::
                  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                  ::operator[](this_00,(ENUM_DB_HANDLE_IDX *)&param_2);
  return *piVar3;
}

```

---

## GetServerType

```asm
// === 083f4f10 DBMgr::GetServerType  [0x083f4f10-0x83f4f9d] ===
 83f4f10:	55                   	push   %ebp
 83f4f11:	89 e5                	mov    %esp,%ebp
 83f4f13:	83 ec 38             	sub    $0x38,%esp
 83f4f16:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4f19:	8d 48 0c             	lea    0xc(%eax),%ecx
 83f4f1c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 83f4f1f:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f4f22:	89 54 24 08          	mov    %edx,0x8(%esp)
 83f4f26:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 83f4f2a:	89 04 24             	mov    %eax,(%esp)
 83f4f2d:	e8 2c 0c 00 00       	call   83f5b5e <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 83f4f32:	83 ec 04             	sub    $0x4,%esp
 83f4f35:	8d 45 e0             	lea    -0x20(%ebp),%eax
 83f4f38:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4f3c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f4f3f:	89 04 24             	mov    %eax,(%esp)
 83f4f42:	e8 43 0c 00 00       	call   83f5b8a <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiN5DBMgr14stUserDBInfo_tEEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1ERKNS_19_Hashtable_iteratorIS5_iS7_S9_SB_SC_EE>
 83f4f47:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4f4a:	8d 50 0c             	lea    0xc(%eax),%edx
 83f4f4d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83f4f50:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4f54:	89 04 24             	mov    %eax,(%esp)
 83f4f57:	e8 4a 0c 00 00       	call   83f5ba6 <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 83f4f5c:	83 ec 04             	sub    $0x4,%esp
 83f4f5f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83f4f62:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4f66:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4f69:	89 04 24             	mov    %eax,(%esp)
 83f4f6c:	e8 19 0c 00 00       	call   83f5b8a <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiN5DBMgr14stUserDBInfo_tEEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1ERKNS_19_Hashtable_iteratorIS5_iS7_S9_SB_SC_EE>
 83f4f71:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4f74:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4f78:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f4f7b:	89 04 24             	mov    %eax,(%esp)
 83f4f7e:	e8 49 0c 00 00       	call   83f5bcc <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiN5DBMgr14stUserDBInfo_tEEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 83f4f83:	84 c0                	test   %al,%al
 83f4f85:	74 10                	je     83f4f97 <_ZN5DBMgr13GetServerTypeEi+0x87>
 83f4f87:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f4f8a:	89 04 24             	mov    %eax,(%esp)
 83f4f8d:	e8 4e 0c 00 00       	call   83f5be0 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiN5DBMgr14stUserDBInfo_tEEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 83f4f92:	8b 40 0c             	mov    0xc(%eax),%eax
 83f4f95:	eb 05                	jmp    83f4f9c <_ZN5DBMgr13GetServerTypeEi+0x8c>
 83f4f97:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4f9c:	c9                   	leave
 83f4f9d:	c3                   	ret

```

```c
// DBMgr::GetServerType @ 0x83f4f10

/* DBMgr::GetServerType(int) */

undefined4 DBMgr::GetServerType(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_2c [8];
  _Hashtable_iterator local_24 [8];
  _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_1c [8];
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  ::find((int *)local_24);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  ::_Hashtable_const_iterator(local_2c,local_24);
  __gnu_cxx::
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  ::end(local_14);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  ::_Hashtable_const_iterator(local_1c,(_Hashtable_iterator *)local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
          ::operator!=(local_2c,(_Hashtable_const_iterator *)local_1c);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
            ::operator->(local_2c);
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
  }
  return uVar3;
}

```

---

## Open

```asm
// === 083f4bc4 DBMgr::Open  [0x083f4bc4-0x83f4d2d] ===
 83f4bc4:	55                   	push   %ebp
 83f4bc5:	89 e5                	mov    %esp,%ebp
 83f4bc7:	53                   	push   %ebx
 83f4bc8:	83 ec 34             	sub    $0x34,%esp
 83f4bcb:	8b 45 20             	mov    0x20(%ebp),%eax
 83f4bce:	85 c0                	test   %eax,%eax
 83f4bd0:	0f 84 17 01 00 00    	je     83f4ced <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcS1_S1_S1_17ENUM_SERVER_GROUP+0x129>
 83f4bd6:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4bd9:	8d 50 20             	lea    0x20(%eax),%edx
 83f4bdc:	8d 45 20             	lea    0x20(%ebp),%eax
 83f4bdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4be3:	89 14 24             	mov    %edx,(%esp)
 83f4be6:	e8 31 0d 00 00       	call   83f591c <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEEixERSC_>
 83f4beb:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f4bee:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4bf2:	89 04 24             	mov    %eax,(%esp)
 83f4bf5:	e8 6e 0e 00 00       	call   83f5a68 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEEixERS6_>
 83f4bfa:	8b 00                	mov    (%eax),%eax
 83f4bfc:	85 c0                	test   %eax,%eax
 83f4bfe:	0f 95 c0             	setne  %al
 83f4c01:	84 c0                	test   %al,%al
 83f4c03:	74 0a                	je     83f4c0f <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcS1_S1_S1_17ENUM_SERVER_GROUP+0x4b>
 83f4c05:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4c0a:	e9 19 01 00 00       	jmp    83f4d28 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcS1_S1_S1_17ENUM_SERVER_GROUP+0x164>
 83f4c0f:	c7 04 24 8c 20 04 00 	movl   $0x4208c,(%esp)
 83f4c16:	e8 35 f8 32 00       	call   8724450 <_Znwj>
 83f4c1b:	89 c3                	mov    %eax,%ebx
 83f4c1d:	89 d8                	mov    %ebx,%eax
 83f4c1f:	89 04 24             	mov    %eax,(%esp)
 83f4c22:	e8 a1 ee ff ff       	call   83f3ac8 <_ZN5MySQLC1Ev>
 83f4c27:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4c2a:	8d 50 20             	lea    0x20(%eax),%edx
 83f4c2d:	8d 45 20             	lea    0x20(%ebp),%eax
 83f4c30:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4c34:	89 14 24             	mov    %edx,(%esp)
 83f4c37:	e8 e0 0c 00 00       	call   83f591c <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEEixERSC_>
 83f4c3c:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f4c3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4c43:	89 04 24             	mov    %eax,(%esp)
 83f4c46:	e8 1d 0e 00 00       	call   83f5a68 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEEixERS6_>
 83f4c4b:	89 da                	mov    %ebx,%edx
 83f4c4d:	89 10                	mov    %edx,(%eax)
 83f4c4f:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4c52:	8d 50 20             	lea    0x20(%eax),%edx
 83f4c55:	8d 45 20             	lea    0x20(%ebp),%eax
 83f4c58:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4c5c:	89 14 24             	mov    %edx,(%esp)
 83f4c5f:	e8 b8 0c 00 00       	call   83f591c <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEEixERSC_>
 83f4c64:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f4c67:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4c6b:	89 04 24             	mov    %eax,(%esp)
 83f4c6e:	e8 f5 0d 00 00       	call   83f5a68 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEEixERS6_>
 83f4c73:	8b 00                	mov    (%eax),%eax
 83f4c75:	89 04 24             	mov    %eax,(%esp)
 83f4c78:	e8 67 f0 ff ff       	call   83f3ce4 <_ZN5MySQL4initEv>
 83f4c7d:	83 f0 01             	xor    $0x1,%eax
 83f4c80:	84 c0                	test   %al,%al
 83f4c82:	74 0a                	je     83f4c8e <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcS1_S1_S1_17ENUM_SERVER_GROUP+0xca>
 83f4c84:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4c89:	e9 9a 00 00 00       	jmp    83f4d28 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcS1_S1_S1_17ENUM_SERVER_GROUP+0x164>
 83f4c8e:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4c91:	8d 50 20             	lea    0x20(%eax),%edx
 83f4c94:	8d 45 20             	lea    0x20(%ebp),%eax
 83f4c97:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4c9b:	89 14 24             	mov    %edx,(%esp)
 83f4c9e:	e8 79 0c 00 00       	call   83f591c <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEEixERSC_>
 83f4ca3:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f4ca6:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4caa:	89 04 24             	mov    %eax,(%esp)
 83f4cad:	e8 b6 0d 00 00       	call   83f5a68 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEEixERS6_>
 83f4cb2:	8b 00                	mov    (%eax),%eax
 83f4cb4:	8b 55 1c             	mov    0x1c(%ebp),%edx
 83f4cb7:	89 54 24 10          	mov    %edx,0x10(%esp)
 83f4cbb:	8b 55 18             	mov    0x18(%ebp),%edx
 83f4cbe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83f4cc2:	8b 55 14             	mov    0x14(%ebp),%edx
 83f4cc5:	89 54 24 08          	mov    %edx,0x8(%esp)
 83f4cc9:	8b 55 10             	mov    0x10(%ebp),%edx
 83f4ccc:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4cd0:	89 04 24             	mov    %eax,(%esp)
 83f4cd3:	e8 c6 f1 ff ff       	call   83f3e9e <_ZN5MySQL4openEPcS0_S0_S0_>
 83f4cd8:	83 f0 01             	xor    $0x1,%eax
 83f4cdb:	84 c0                	test   %al,%al
 83f4cdd:	74 07                	je     83f4ce6 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcS1_S1_S1_17ENUM_SERVER_GROUP+0x122>
 83f4cdf:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4ce4:	eb 42                	jmp    83f4d28 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcS1_S1_S1_17ENUM_SERVER_GROUP+0x164>
 83f4ce6:	b8 01 00 00 00       	mov    $0x1,%eax
 83f4ceb:	eb 3b                	jmp    83f4d28 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcS1_S1_S1_17ENUM_SERVER_GROUP+0x164>
 83f4ced:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4cf0:	8b 10                	mov    (%eax),%edx
 83f4cf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4cf5:	69 c0 8c 20 04 00    	imul   $0x4208c,%eax,%eax
 83f4cfb:	01 c2                	add    %eax,%edx
 83f4cfd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 83f4d00:	89 44 24 10          	mov    %eax,0x10(%esp)
 83f4d04:	8b 45 18             	mov    0x18(%ebp),%eax
 83f4d07:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83f4d0b:	8b 45 14             	mov    0x14(%ebp),%eax
 83f4d0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f4d12:	8b 45 10             	mov    0x10(%ebp),%eax
 83f4d15:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4d19:	89 14 24             	mov    %edx,(%esp)
 83f4d1c:	e8 7d f1 ff ff       	call   83f3e9e <_ZN5MySQL4openEPcS0_S0_S0_>
 83f4d21:	88 45 f7             	mov    %al,-0x9(%ebp)
 83f4d24:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83f4d28:	83 c4 34             	add    $0x34,%esp
 83f4d2b:	5b                   	pop    %ebx
 83f4d2c:	5d                   	pop    %ebp
 83f4d2d:	c3                   	ret

```

```c
// DBMgr::Open @ 0x83f4bc4

/* DBMgr::Open(ENUM_DB_HANDLE_IDX, char*, char*, char*, char*, ENUM_SERVER_GROUP) */

undefined1 __thiscall
DBMgr::Open(DBMgr *this,int param_2,char *param_3,char *param_4,char *param_5,char *param_6,
           int param_7)

{
  char cVar1;
  undefined1 uVar2;
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  *pmVar3;
  int *piVar4;
  MySQL *this_00;
  undefined4 *puVar5;
  
  if (param_7 == 0) {
    uVar2 = MySQL::open((MySQL *)(*(int *)this + param_2 * 0x4208c),param_3,param_4,param_5,param_6)
    ;
  }
  else {
    pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
              *)std::
                map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                              *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_7);
    piVar4 = (int *)std::
                    map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                    ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
    if (*piVar4 == 0) {
      this_00 = operator_new(0x4208c);
      MySQL::MySQL(this_00);
      pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                *)std::
                  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                  ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                                *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_7);
      puVar5 = (undefined4 *)
               std::
               map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
               ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
      *puVar5 = this_00;
      pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                *)std::
                  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                  ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                                *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_7);
      puVar5 = (undefined4 *)
               std::
               map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
               ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
      cVar1 = MySQL::init((MySQL *)*puVar5);
      if (cVar1 == '\x01') {
        pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                  *)std::
                    map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                    ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                                  *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_7);
        puVar5 = (undefined4 *)
                 std::
                 map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                 ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
        cVar1 = MySQL::open((MySQL *)*puVar5,param_3,param_4,param_5,param_6);
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
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## Open_083f4d2e

```asm
// === 083f4d2e DBMgr::Open  [0x083f4d2e-0x83f4ea5] ===
 83f4d2e:	55                   	push   %ebp
 83f4d2f:	89 e5                	mov    %esp,%ebp
 83f4d31:	53                   	push   %ebx
 83f4d32:	83 ec 34             	sub    $0x34,%esp
 83f4d35:	8b 45 24             	mov    0x24(%ebp),%eax
 83f4d38:	85 c0                	test   %eax,%eax
 83f4d3a:	0f 84 1e 01 00 00    	je     83f4e5e <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP+0x130>
 83f4d40:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4d43:	8d 50 20             	lea    0x20(%eax),%edx
 83f4d46:	8d 45 24             	lea    0x24(%ebp),%eax
 83f4d49:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4d4d:	89 14 24             	mov    %edx,(%esp)
 83f4d50:	e8 c7 0b 00 00       	call   83f591c <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEEixERSC_>
 83f4d55:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f4d58:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4d5c:	89 04 24             	mov    %eax,(%esp)
 83f4d5f:	e8 04 0d 00 00       	call   83f5a68 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEEixERS6_>
 83f4d64:	8b 00                	mov    (%eax),%eax
 83f4d66:	85 c0                	test   %eax,%eax
 83f4d68:	0f 95 c0             	setne  %al
 83f4d6b:	84 c0                	test   %al,%al
 83f4d6d:	74 0a                	je     83f4d79 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP+0x4b>
 83f4d6f:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4d74:	e9 27 01 00 00       	jmp    83f4ea0 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP+0x172>
 83f4d79:	c7 04 24 8c 20 04 00 	movl   $0x4208c,(%esp)
 83f4d80:	e8 cb f6 32 00       	call   8724450 <_Znwj>
 83f4d85:	89 c3                	mov    %eax,%ebx
 83f4d87:	89 d8                	mov    %ebx,%eax
 83f4d89:	89 04 24             	mov    %eax,(%esp)
 83f4d8c:	e8 37 ed ff ff       	call   83f3ac8 <_ZN5MySQLC1Ev>
 83f4d91:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4d94:	8d 50 20             	lea    0x20(%eax),%edx
 83f4d97:	8d 45 24             	lea    0x24(%ebp),%eax
 83f4d9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4d9e:	89 14 24             	mov    %edx,(%esp)
 83f4da1:	e8 76 0b 00 00       	call   83f591c <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEEixERSC_>
 83f4da6:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f4da9:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4dad:	89 04 24             	mov    %eax,(%esp)
 83f4db0:	e8 b3 0c 00 00       	call   83f5a68 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEEixERS6_>
 83f4db5:	89 da                	mov    %ebx,%edx
 83f4db7:	89 10                	mov    %edx,(%eax)
 83f4db9:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4dbc:	8d 50 20             	lea    0x20(%eax),%edx
 83f4dbf:	8d 45 24             	lea    0x24(%ebp),%eax
 83f4dc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4dc6:	89 14 24             	mov    %edx,(%esp)
 83f4dc9:	e8 4e 0b 00 00       	call   83f591c <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEEixERSC_>
 83f4dce:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f4dd1:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4dd5:	89 04 24             	mov    %eax,(%esp)
 83f4dd8:	e8 8b 0c 00 00       	call   83f5a68 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEEixERS6_>
 83f4ddd:	8b 00                	mov    (%eax),%eax
 83f4ddf:	89 04 24             	mov    %eax,(%esp)
 83f4de2:	e8 fd ee ff ff       	call   83f3ce4 <_ZN5MySQL4initEv>
 83f4de7:	83 f0 01             	xor    $0x1,%eax
 83f4dea:	84 c0                	test   %al,%al
 83f4dec:	74 0a                	je     83f4df8 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP+0xca>
 83f4dee:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4df3:	e9 a8 00 00 00       	jmp    83f4ea0 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP+0x172>
 83f4df8:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4dfb:	8d 50 20             	lea    0x20(%eax),%edx
 83f4dfe:	8d 45 24             	lea    0x24(%ebp),%eax
 83f4e01:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4e05:	89 14 24             	mov    %edx,(%esp)
 83f4e08:	e8 0f 0b 00 00       	call   83f591c <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEEixERSC_>
 83f4e0d:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f4e10:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4e14:	89 04 24             	mov    %eax,(%esp)
 83f4e17:	e8 4c 0c 00 00       	call   83f5a68 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEEixERS6_>
 83f4e1c:	8b 00                	mov    (%eax),%eax
 83f4e1e:	8b 55 20             	mov    0x20(%ebp),%edx
 83f4e21:	89 54 24 14          	mov    %edx,0x14(%esp)
 83f4e25:	8b 55 1c             	mov    0x1c(%ebp),%edx
 83f4e28:	89 54 24 10          	mov    %edx,0x10(%esp)
 83f4e2c:	8b 55 18             	mov    0x18(%ebp),%edx
 83f4e2f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83f4e33:	8b 55 14             	mov    0x14(%ebp),%edx
 83f4e36:	89 54 24 08          	mov    %edx,0x8(%esp)
 83f4e3a:	8b 55 10             	mov    0x10(%ebp),%edx
 83f4e3d:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4e41:	89 04 24             	mov    %eax,(%esp)
 83f4e44:	e8 db f1 ff ff       	call   83f4024 <_ZN5MySQL4openEPcjS0_S0_S0_>
 83f4e49:	83 f0 01             	xor    $0x1,%eax
 83f4e4c:	84 c0                	test   %al,%al
 83f4e4e:	74 07                	je     83f4e57 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP+0x129>
 83f4e50:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4e55:	eb 49                	jmp    83f4ea0 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP+0x172>
 83f4e57:	b8 01 00 00 00       	mov    $0x1,%eax
 83f4e5c:	eb 42                	jmp    83f4ea0 <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP+0x172>
 83f4e5e:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4e61:	8b 10                	mov    (%eax),%edx
 83f4e63:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4e66:	69 c0 8c 20 04 00    	imul   $0x4208c,%eax,%eax
 83f4e6c:	01 c2                	add    %eax,%edx
 83f4e6e:	8b 45 20             	mov    0x20(%ebp),%eax
 83f4e71:	89 44 24 14          	mov    %eax,0x14(%esp)
 83f4e75:	8b 45 1c             	mov    0x1c(%ebp),%eax
 83f4e78:	89 44 24 10          	mov    %eax,0x10(%esp)
 83f4e7c:	8b 45 18             	mov    0x18(%ebp),%eax
 83f4e7f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83f4e83:	8b 45 14             	mov    0x14(%ebp),%eax
 83f4e86:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f4e8a:	8b 45 10             	mov    0x10(%ebp),%eax
 83f4e8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4e91:	89 14 24             	mov    %edx,(%esp)
 83f4e94:	e8 8b f1 ff ff       	call   83f4024 <_ZN5MySQL4openEPcjS0_S0_S0_>
 83f4e99:	88 45 f7             	mov    %al,-0x9(%ebp)
 83f4e9c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83f4ea0:	83 c4 34             	add    $0x34,%esp
 83f4ea3:	5b                   	pop    %ebx
 83f4ea4:	5d                   	pop    %ebp
 83f4ea5:	c3                   	ret

```

```c
// DBMgr::Open @ 0x83f4d2e

/* DBMgr::Open(ENUM_DB_HANDLE_IDX, char*, unsigned int, char*, char*, char*, ENUM_SERVER_GROUP) */

undefined1 __thiscall
DBMgr::Open(DBMgr *this,int param_2,char *param_3,uint param_4,char *param_5,char *param_6,
           char *param_7,int param_8)

{
  char cVar1;
  undefined1 uVar2;
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  *pmVar3;
  int *piVar4;
  MySQL *this_00;
  undefined4 *puVar5;
  
  if (param_8 == 0) {
    uVar2 = MySQL::open((MySQL *)(*(int *)this + param_2 * 0x4208c),param_3,param_4,param_5,param_6,
                        param_7);
  }
  else {
    pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
              *)std::
                map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                              *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_8);
    piVar4 = (int *)std::
                    map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                    ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
    if (*piVar4 == 0) {
      this_00 = operator_new(0x4208c);
      MySQL::MySQL(this_00);
      pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                *)std::
                  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                  ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                                *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_8);
      puVar5 = (undefined4 *)
               std::
               map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
               ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
      *puVar5 = this_00;
      pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                *)std::
                  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                  ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                                *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_8);
      puVar5 = (undefined4 *)
               std::
               map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
               ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
      cVar1 = MySQL::init((MySQL *)*puVar5);
      if (cVar1 == '\x01') {
        pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                  *)std::
                    map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                    ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                                  *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_8);
        puVar5 = (undefined4 *)
                 std::
                 map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                 ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
        cVar1 = MySQL::open((MySQL *)*puVar5,param_3,param_4,param_5,param_6,param_7);
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
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## SetQueryCounterPointer

```asm
// === 083f5150 DBMgr::SetQueryCounterPointer  [0x083f5150-0x83f523d] ===
 83f5150:	55                   	push   %ebp
 83f5151:	89 e5                	mov    %esp,%ebp
 83f5153:	83 ec 38             	sub    $0x38,%esp
 83f5156:	8b 45 08             	mov    0x8(%ebp),%eax
 83f5159:	8d 50 20             	lea    0x20(%eax),%edx
 83f515c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f515f:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f5163:	89 04 24             	mov    %eax,(%esp)
 83f5166:	e8 6f 06 00 00       	call   83f57da <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEE5beginEv>
 83f516b:	83 ec 04             	sub    $0x4,%esp
 83f516e:	e9 97 00 00 00       	jmp    83f520a <_ZN5DBMgr22SetQueryCounterPointerEP13CQueryCounter+0xba>
 83f5173:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f5176:	89 04 24             	mov    %eax,(%esp)
 83f5179:	e8 da 06 00 00       	call   83f5858 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS4_ESaIS0_IKS4_S6_EEEEEptEv>
 83f517e:	8d 50 04             	lea    0x4(%eax),%edx
 83f5181:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f5184:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f5188:	89 04 24             	mov    %eax,(%esp)
 83f518b:	e8 d6 06 00 00       	call   83f5866 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEE5beginEv>
 83f5190:	83 ec 04             	sub    $0x4,%esp
 83f5193:	eb 34                	jmp    83f51c9 <_ZN5DBMgr22SetQueryCounterPointerEP13CQueryCounter+0x79>
 83f5195:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f5198:	89 04 24             	mov    %eax,(%esp)
 83f519b:	e8 44 07 00 00       	call   83f58e4 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXP5MySQLEEptEv>
 83f51a0:	8b 40 04             	mov    0x4(%eax),%eax
 83f51a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f51a6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 83f51aa:	74 12                	je     83f51be <_ZN5DBMgr22SetQueryCounterPointerEP13CQueryCounter+0x6e>
 83f51ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f51af:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f51b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f51b6:	89 04 24             	mov    %eax,(%esp)
 83f51b9:	e8 5e 01 00 00       	call   83f531c <_ZN5MySQL15SetQueryCounterEP13CQueryCounter>
 83f51be:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f51c1:	89 04 24             	mov    %eax,(%esp)
 83f51c4:	e8 fd 06 00 00       	call   83f58c6 <_ZNSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXP5MySQLEEppEv>
 83f51c9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f51cc:	89 04 24             	mov    %eax,(%esp)
 83f51cf:	e8 84 06 00 00       	call   83f5858 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS4_ESaIS0_IKS4_S6_EEEEEptEv>
 83f51d4:	8d 50 04             	lea    0x4(%eax),%edx
 83f51d7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83f51da:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f51de:	89 04 24             	mov    %eax,(%esp)
 83f51e1:	e8 a6 06 00 00       	call   83f588c <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEE3endEv>
 83f51e6:	83 ec 04             	sub    $0x4,%esp
 83f51e9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83f51ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f51f0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f51f3:	89 04 24             	mov    %eax,(%esp)
 83f51f6:	e8 b7 06 00 00       	call   83f58b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXP5MySQLEEneERKS6_>
 83f51fb:	84 c0                	test   %al,%al
 83f51fd:	75 96                	jne    83f5195 <_ZN5DBMgr22SetQueryCounterPointerEP13CQueryCounter+0x45>
 83f51ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f5202:	89 04 24             	mov    %eax,(%esp)
 83f5205:	e8 30 06 00 00       	call   83f583a <_ZNSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS4_ESaIS0_IKS4_S6_EEEEEppEv>
 83f520a:	8b 45 08             	mov    0x8(%ebp),%eax
 83f520d:	8d 50 20             	lea    0x20(%eax),%edx
 83f5210:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83f5213:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f5217:	89 04 24             	mov    %eax,(%esp)
 83f521a:	e8 e1 05 00 00       	call   83f5800 <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEE3endEv>
 83f521f:	83 ec 04             	sub    $0x4,%esp
 83f5222:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83f5225:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f5229:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f522c:	89 04 24             	mov    %eax,(%esp)
 83f522f:	e8 f2 05 00 00       	call   83f5826 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS4_ESaIS0_IKS4_S6_EEEEEneERKSE_>
 83f5234:	84 c0                	test   %al,%al
 83f5236:	0f 85 37 ff ff ff    	jne    83f5173 <_ZN5DBMgr22SetQueryCounterPointerEP13CQueryCounter+0x23>
 83f523c:	c9                   	leave
 83f523d:	c3                   	ret

```

```c
// DBMgr::SetQueryCounterPointer @ 0x83f5150

/* DBMgr::SetQueryCounterPointer(CQueryCounter*) */

void __thiscall DBMgr::SetQueryCounterPointer(DBMgr *this,CQueryCounter *param_1)

{
  char cVar1;
  int iVar2;
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  local_20 [4];
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  local_1c [4];
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  local_18 [4];
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  local_14 [4];
  MySQL *local_10;
  
  std::
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    std::
    _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
    ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                  *)local_1c);
    std::
    map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
    ::begin(local_20);
    while( true ) {
      std::
      _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
      ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                    *)local_1c);
      std::
      map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20);
      local_10 = *(MySQL **)(iVar2 + 4);
      if (local_10 != (MySQL *)0x0) {
        MySQL::SetQueryCounter(local_10,param_1);
      }
      std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator++
                ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20);
    }
    std::
    _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                  *)local_1c);
  }
  return;
}

```

---

## addUserDBInfo

```asm
// === 083f4f9e DBMgr::addUserDBInfo  [0x083f4f9e-0x83f5037] ===
 83f4f9e:	55                   	push   %ebp
 83f4f9f:	89 e5                	mov    %esp,%ebp
 83f4fa1:	83 ec 58             	sub    $0x58,%esp
 83f4fa4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4fa7:	8b 55 10             	mov    0x10(%ebp),%edx
 83f4faa:	89 54 24 08          	mov    %edx,0x8(%esp)
 83f4fae:	8d 55 0c             	lea    0xc(%ebp),%edx
 83f4fb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4fb5:	89 04 24             	mov    %eax,(%esp)
 83f4fb8:	e8 36 0c 00 00       	call   83f5bf3 <_ZSt9make_pairIRiRKN5DBMgr14stUserDBInfo_tEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 83f4fbd:	83 ec 04             	sub    $0x4,%esp
 83f4fc0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4fc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4fc7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f4fca:	89 04 24             	mov    %eax,(%esp)
 83f4fcd:	e8 60 0c 00 00       	call   83f5c32 <_ZNSt4pairIKiN5DBMgr14stUserDBInfo_tEEC1IiS2_EEOS_IT_T0_E>
 83f4fd2:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4fd5:	8d 48 0c             	lea    0xc(%eax),%ecx
 83f4fd8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83f4fdb:	8d 55 d8             	lea    -0x28(%ebp),%edx
 83f4fde:	89 54 24 08          	mov    %edx,0x8(%esp)
 83f4fe2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 83f4fe6:	89 04 24             	mov    %eax,(%esp)
 83f4fe9:	e8 80 0c 00 00       	call   83f5c6e <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 83f4fee:	83 ec 04             	sub    $0x4,%esp
 83f4ff1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83f4ff4:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4ff8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83f4ffb:	89 04 24             	mov    %eax,(%esp)
 83f4ffe:	e8 97 0c 00 00       	call   83f5c9a <_ZNSt4pairIN9__gnu_cxx25_Hashtable_const_iteratorIS_IKiN5DBMgr14stUserDBInfo_tEEiNS0_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEEbEC1INS0_19_Hashtable_iteratorIS5_iS7_S9_SB_SC_EEbEEOS_IT_T0_E>
 83f5003:	0f b6 45 c8          	movzbl -0x38(%ebp),%eax
 83f5007:	83 f0 01             	xor    $0x1,%eax
 83f500a:	84 c0                	test   %al,%al
 83f500c:	74 28                	je     83f5036 <_ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE+0x98>
 83f500e:	8b 45 08             	mov    0x8(%ebp),%eax
 83f5011:	8d 50 0c             	lea    0xc(%eax),%edx
 83f5014:	8d 45 0c             	lea    0xc(%ebp),%eax
 83f5017:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f501b:	89 14 24             	mov    %edx,(%esp)
 83f501e:	e8 b1 0c 00 00       	call   83f5cd4 <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EEixERKi>
 83f5023:	8b 55 10             	mov    0x10(%ebp),%edx
 83f5026:	8b 0a                	mov    (%edx),%ecx
 83f5028:	89 08                	mov    %ecx,(%eax)
 83f502a:	8b 4a 04             	mov    0x4(%edx),%ecx
 83f502d:	89 48 04             	mov    %ecx,0x4(%eax)
 83f5030:	8b 52 08             	mov    0x8(%edx),%edx
 83f5033:	89 50 08             	mov    %edx,0x8(%eax)
 83f5036:	c9                   	leave
 83f5037:	c3                   	ret

```

```c
// DBMgr::addUserDBInfo @ 0x83f4f9e

/* DBMgr::addUserDBInfo(int, DBMgr::stUserDBInfo_t const&) */

void __thiscall DBMgr::addUserDBInfo(DBMgr *this,int param_1,stUserDBInfo_t *param_2)

{
  undefined4 *puVar1;
  pair<__gnu_cxx::_Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>,bool>
  local_44 [8];
  char local_3c;
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  local_38 [12];
  pair<int_const,DBMgr::stUserDBInfo_t> local_2c [16];
  int local_1c [6];
  
  std::make_pair<int&,DBMgr::stUserDBInfo_t_const&>(local_1c,(stUserDBInfo_t *)&param_1);
  std::pair<int_const,DBMgr::stUserDBInfo_t>::pair<int,DBMgr::stUserDBInfo_t>
            (local_2c,(pair *)local_1c);
  __gnu_cxx::
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  ::insert(local_38,this + 0xc);
  std::
  pair<__gnu_cxx::_Hashtable_const_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>,bool>
  ::
  pair<__gnu_cxx::_Hashtable_iterator<std::pair<int_const,DBMgr::stUserDBInfo_t>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,DBMgr::stUserDBInfo_t>>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>,bool>
            (local_44,local_38);
  if (local_3c != '\x01') {
    puVar1 = (undefined4 *)
             __gnu_cxx::
             hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
             ::operator[]((hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
                           *)(this + 0xc),&param_1);
    *puVar1 = *(undefined4 *)param_2;
    puVar1[1] = *(undefined4 *)(param_2 + 4);
    puVar1[2] = *(undefined4 *)(param_2 + 8);
  }
  return;
}

```

---

## removeUserDBInfo

```asm
// === 083f5038 DBMgr::removeUserDBInfo  [0x083f5038-0x83f506b] ===
 83f5038:	55                   	push   %ebp
 83f5039:	89 e5                	mov    %esp,%ebp
 83f503b:	83 ec 18             	sub    $0x18,%esp
 83f503e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83f5043:	89 04 24             	mov    %eax,(%esp)
 83f5046:	e8 f1 02 00 00       	call   83f533c <_ZN5DBMgr16isActiveGlobalDBEv>
 83f504b:	83 f0 01             	xor    $0x1,%eax
 83f504e:	84 c0                	test   %al,%al
 83f5050:	75 17                	jne    83f5069 <_ZN5DBMgr16removeUserDBInfoEi+0x31>
 83f5052:	8b 45 08             	mov    0x8(%ebp),%eax
 83f5055:	8d 50 0c             	lea    0xc(%eax),%edx
 83f5058:	8d 45 0c             	lea    0xc(%ebp),%eax
 83f505b:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f505f:	89 14 24             	mov    %edx,(%esp)
 83f5062:	e8 b9 0c 00 00       	call   83f5d20 <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EE5eraseERKi>
 83f5067:	eb 01                	jmp    83f506a <_ZN5DBMgr16removeUserDBInfoEi+0x32>
 83f5069:	90                   	nop
 83f506a:	c9                   	leave
 83f506b:	c3                   	ret

```

```c
// DBMgr::removeUserDBInfo @ 0x83f5038

/* DBMgr::removeUserDBInfo(int) */

void DBMgr::removeUserDBInfo(int param_1)

{
  char cVar1;
  
  cVar1 = isActiveGlobalDB(GlobalData::s_db_mgr);
  if (cVar1 == '\x01') {
    __gnu_cxx::
    hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
    ::erase((hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
             *)(param_1 + 0xc),(int *)&stack0x00000008);
  }
  return;
}

```

---

## ~DBMgr

```asm
// === 083f4a1c DBMgr::~DBMgr  [0x083f4a1c-0x83f4bc3] ===
 83f4a1c:	55                   	push   %ebp
 83f4a1d:	89 e5                	mov    %esp,%ebp
 83f4a1f:	56                   	push   %esi
 83f4a20:	53                   	push   %ebx
 83f4a21:	83 ec 30             	sub    $0x30,%esp
 83f4a24:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4a27:	89 04 24             	mov    %eax,(%esp)
 83f4a2a:	e8 77 04 00 00       	call   83f4ea6 <_ZN5DBMgr5CloseEv>
 83f4a2f:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4a32:	8b 00                	mov    (%eax),%eax
 83f4a34:	85 c0                	test   %eax,%eax
 83f4a36:	74 41                	je     83f4a79 <_ZN5DBMgrD1Ev+0x5d>
 83f4a38:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4a3b:	8b 10                	mov    (%eax),%edx
 83f4a3d:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4a40:	8b 00                	mov    (%eax),%eax
 83f4a42:	83 e8 04             	sub    $0x4,%eax
 83f4a45:	8b 00                	mov    (%eax),%eax
 83f4a47:	69 c0 8c 20 04 00    	imul   $0x4208c,%eax,%eax
 83f4a4d:	8d 1c 02             	lea    (%edx,%eax,1),%ebx
 83f4a50:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4a53:	8b 00                	mov    (%eax),%eax
 83f4a55:	39 c3                	cmp    %eax,%ebx
 83f4a57:	74 10                	je     83f4a69 <_ZN5DBMgrD1Ev+0x4d>
 83f4a59:	81 eb 8c 20 04 00    	sub    $0x4208c,%ebx
 83f4a5f:	89 1c 24             	mov    %ebx,(%esp)
 83f4a62:	e8 83 f0 ff ff       	call   83f3aea <_ZN5MySQLD1Ev>
 83f4a67:	eb e7                	jmp    83f4a50 <_ZN5DBMgrD1Ev+0x34>
 83f4a69:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4a6c:	8b 00                	mov    (%eax),%eax
 83f4a6e:	83 e8 04             	sub    $0x4,%eax
 83f4a71:	89 04 24             	mov    %eax,(%esp)
 83f4a74:	e8 37 01 33 00       	call   8724bb0 <_ZdaPv>
 83f4a79:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4a7c:	8d 50 20             	lea    0x20(%eax),%edx
 83f4a7f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4a82:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4a86:	89 04 24             	mov    %eax,(%esp)
 83f4a89:	e8 4c 0d 00 00       	call   83f57da <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEE5beginEv>
 83f4a8e:	83 ec 04             	sub    $0x4,%esp
 83f4a91:	e9 9c 00 00 00       	jmp    83f4b32 <_ZN5DBMgrD1Ev+0x116>
 83f4a96:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4a99:	89 04 24             	mov    %eax,(%esp)
 83f4a9c:	e8 b7 0d 00 00       	call   83f5858 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS4_ESaIS0_IKS4_S6_EEEEEptEv>
 83f4aa1:	8d 50 04             	lea    0x4(%eax),%edx
 83f4aa4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f4aa7:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4aab:	89 04 24             	mov    %eax,(%esp)
 83f4aae:	e8 b3 0d 00 00       	call   83f5866 <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEE5beginEv>
 83f4ab3:	83 ec 04             	sub    $0x4,%esp
 83f4ab6:	eb 39                	jmp    83f4af1 <_ZN5DBMgrD1Ev+0xd5>
 83f4ab8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f4abb:	89 04 24             	mov    %eax,(%esp)
 83f4abe:	e8 21 0e 00 00       	call   83f58e4 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXP5MySQLEEptEv>
 83f4ac3:	8b 40 04             	mov    0x4(%eax),%eax
 83f4ac6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f4ac9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 83f4acd:	74 17                	je     83f4ae6 <_ZN5DBMgrD1Ev+0xca>
 83f4acf:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 83f4ad2:	85 db                	test   %ebx,%ebx
 83f4ad4:	74 10                	je     83f4ae6 <_ZN5DBMgrD1Ev+0xca>
 83f4ad6:	89 1c 24             	mov    %ebx,(%esp)
 83f4ad9:	e8 0c f0 ff ff       	call   83f3aea <_ZN5MySQLD1Ev>
 83f4ade:	89 1c 24             	mov    %ebx,(%esp)
 83f4ae1:	e8 0a fa 32 00       	call   87244f0 <_ZdlPv>
 83f4ae6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f4ae9:	89 04 24             	mov    %eax,(%esp)
 83f4aec:	e8 d5 0d 00 00       	call   83f58c6 <_ZNSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXP5MySQLEEppEv>
 83f4af1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4af4:	89 04 24             	mov    %eax,(%esp)
 83f4af7:	e8 5c 0d 00 00       	call   83f5858 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS4_ESaIS0_IKS4_S6_EEEEEptEv>
 83f4afc:	8d 50 04             	lea    0x4(%eax),%edx
 83f4aff:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83f4b02:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4b06:	89 04 24             	mov    %eax,(%esp)
 83f4b09:	e8 7e 0d 00 00       	call   83f588c <_ZNSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS0_ESaISt4pairIKS0_S2_EEE3endEv>
 83f4b0e:	83 ec 04             	sub    $0x4,%esp
 83f4b11:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83f4b14:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4b18:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f4b1b:	89 04 24             	mov    %eax,(%esp)
 83f4b1e:	e8 8f 0d 00 00       	call   83f58b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXP5MySQLEEneERKS6_>
 83f4b23:	84 c0                	test   %al,%al
 83f4b25:	75 91                	jne    83f4ab8 <_ZN5DBMgrD1Ev+0x9c>
 83f4b27:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4b2a:	89 04 24             	mov    %eax,(%esp)
 83f4b2d:	e8 08 0d 00 00       	call   83f583a <_ZNSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS4_ESaIS0_IKS4_S6_EEEEEppEv>
 83f4b32:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4b35:	8d 50 20             	lea    0x20(%eax),%edx
 83f4b38:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83f4b3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f4b3f:	89 04 24             	mov    %eax,(%esp)
 83f4b42:	e8 b9 0c 00 00       	call   83f5800 <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEE3endEv>
 83f4b47:	83 ec 04             	sub    $0x4,%esp
 83f4b4a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83f4b4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4b51:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4b54:	89 04 24             	mov    %eax,(%esp)
 83f4b57:	e8 ca 0c 00 00       	call   83f5826 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapI18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS4_ESaIS0_IKS4_S6_EEEEEneERKSE_>
 83f4b5c:	84 c0                	test   %al,%al
 83f4b5e:	0f 85 32 ff ff ff    	jne    83f4a96 <_ZN5DBMgrD1Ev+0x7a>
 83f4b64:	eb 18                	jmp    83f4b7e <_ZN5DBMgrD1Ev+0x162>
 83f4b66:	89 d3                	mov    %edx,%ebx
 83f4b68:	89 c6                	mov    %eax,%esi
 83f4b6a:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4b6d:	83 c0 20             	add    $0x20,%eax
 83f4b70:	89 04 24             	mov    %eax,(%esp)
 83f4b73:	e8 00 0b 00 00       	call   83f5678 <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEED1Ev>
 83f4b78:	89 f0                	mov    %esi,%eax
 83f4b7a:	89 da                	mov    %ebx,%edx
 83f4b7c:	eb 10                	jmp    83f4b8e <_ZN5DBMgrD1Ev+0x172>
 83f4b7e:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4b81:	83 c0 20             	add    $0x20,%eax
 83f4b84:	89 04 24             	mov    %eax,(%esp)
 83f4b87:	e8 ec 0a 00 00       	call   83f5678 <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDXP5MySQLSt4lessIS1_ESaISt4pairIKS1_S3_EEES4_IS0_ESaIS6_IKS0_SA_EEED1Ev>
 83f4b8c:	eb 1e                	jmp    83f4bac <_ZN5DBMgrD1Ev+0x190>
 83f4b8e:	89 d3                	mov    %edx,%ebx
 83f4b90:	89 c6                	mov    %eax,%esi
 83f4b92:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4b95:	83 c0 0c             	add    $0xc,%eax
 83f4b98:	89 04 24             	mov    %eax,(%esp)
 83f4b9b:	e8 c4 0a 00 00       	call   83f5664 <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 83f4ba0:	89 f0                	mov    %esi,%eax
 83f4ba2:	89 da                	mov    %ebx,%edx
 83f4ba4:	89 04 24             	mov    %eax,(%esp)
 83f4ba7:	e8 a4 eb 6e 00       	call   8ae3750 <_Unwind_Resume>
 83f4bac:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4baf:	83 c0 0c             	add    $0xc,%eax
 83f4bb2:	89 04 24             	mov    %eax,(%esp)
 83f4bb5:	e8 aa 0a 00 00       	call   83f5664 <_ZN9__gnu_cxx8hash_mapIiN5DBMgr14stUserDBInfo_tENS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 83f4bba:	8d 65 f8             	lea    -0x8(%ebp),%esp
 83f4bbd:	83 c4 00             	add    $0x0,%esp
 83f4bc0:	5b                   	pop    %ebx
 83f4bc1:	5e                   	pop    %esi
 83f4bc2:	5d                   	pop    %ebp
 83f4bc3:	c3                   	ret

```

```c
// DBMgr::~DBMgr @ 0x83f4a1c

/* DBMgr::~DBMgr() */

void __thiscall DBMgr::~DBMgr(DBMgr *this)

{
  char cVar1;
  int iVar2;
  MySQL *pMVar3;
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  local_20 [4];
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  local_1c [4];
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  local_18 [4];
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  local_14 [4];
  MySQL *local_10;
  
                    /* try { // try from 083f4a2a to 083f4b46 has its CatchHandler @ 083f4b66 */
  Close(this);
  if (*(int *)this != 0) {
    pMVar3 = (MySQL *)(*(int *)this + *(int *)(*(int *)this + -4) * 0x4208c);
    while (pMVar3 != *(MySQL **)this) {
      pMVar3 = pMVar3 + -0x4208c;
      MySQL::~MySQL(pMVar3);
    }
    operator_delete__((void *)(*(int *)this + -4));
  }
  std::
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    std::
    _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
    ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                  *)local_1c);
    std::
    map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
    ::begin(local_20);
    while( true ) {
      std::
      _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
      ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                    *)local_1c);
      std::
      map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20);
      pMVar3 = *(MySQL **)(iVar2 + 4);
      local_10 = pMVar3;
      if ((pMVar3 != (MySQL *)0x0) && (pMVar3 != (MySQL *)0x0)) {
        MySQL::~MySQL(pMVar3);
        operator_delete(pMVar3);
      }
      std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator++
                ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20);
    }
    std::
    _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                  *)local_1c);
  }
                    /* try { // try from 083f4b87 to 083f4b8b has its CatchHandler @ 083f4b8e */
  std::
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  ::~map((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
          *)(this + 0x20));
  __gnu_cxx::
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  ::~hash_map((hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
               *)(this + 0xc));
  return;
}

```

