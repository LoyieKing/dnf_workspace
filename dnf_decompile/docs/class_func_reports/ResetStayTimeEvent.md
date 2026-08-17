# ResetStayTimeEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0815b76a ResetStayTimeEvent::dispatch  [0x0815b76a-0x815b899] ===
 815b76a:	55                   	push   %ebp
 815b76b:	89 e5                	mov    %esp,%ebp
 815b76d:	56                   	push   %esi
 815b76e:	53                   	push   %ebx
 815b76f:	83 ec 30             	sub    $0x30,%esp
 815b772:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815b777:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b77e:	00 
 815b77f:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815b786:	00 
 815b787:	89 04 24             	mov    %eax,(%esp)
 815b78a:	e8 af 9a 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815b78f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815b792:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815b796:	75 2c                	jne    815b7c4 <_ZN18ResetStayTimeEvent8dispatchEiiP6Stream+0x5a>
 815b798:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b79f:	e8 5c a0 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b7a4:	89 c2                	mov    %eax,%edx
 815b7a6:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815b7ac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b7b3:	00 
 815b7b4:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b7bb:	09 
 815b7bc:	89 04 24             	mov    %eax,(%esp)
 815b7bf:	e8 8c 94 5c 00       	call   8724c50 <__cxa_throw>
 815b7c4:	c7 44 24 04 0c 76 b7 	movl   $0x8b7760c,0x4(%esp)
 815b7cb:	08 
 815b7cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b7cf:	89 04 24             	mov    %eax,(%esp)
 815b7d2:	e8 e9 89 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815b7d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815b7de:	00 
 815b7df:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b7e2:	89 04 24             	mov    %eax,(%esp)
 815b7e5:	e8 3c 8b 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815b7ea:	83 f0 01             	xor    $0x1,%eax
 815b7ed:	84 c0                	test   %al,%al
 815b7ef:	74 2c                	je     815b81d <_ZN18ResetStayTimeEvent8dispatchEiiP6Stream+0xb3>
 815b7f1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b7f8:	e8 03 a0 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b7fd:	89 c2                	mov    %eax,%edx
 815b7ff:	c7 02 77 72 b7 08    	movl   $0x8b77277,(%edx)
 815b805:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b80c:	00 
 815b80d:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b814:	09 
 815b815:	89 04 24             	mov    %eax,(%esp)
 815b818:	e8 33 94 5c 00       	call   8724c50 <__cxa_throw>
 815b81d:	bb 01 00 00 00       	mov    $0x1,%ebx
 815b822:	eb 6c                	jmp    815b890 <_ZN18ResetStayTimeEvent8dispatchEiiP6Stream+0x126>
 815b824:	83 fa 01             	cmp    $0x1,%edx
 815b827:	74 08                	je     815b831 <_ZN18ResetStayTimeEvent8dispatchEiiP6Stream+0xc7>
 815b829:	89 04 24             	mov    %eax,(%esp)
 815b82c:	e8 1f 7f 98 00       	call   8ae3750 <_Unwind_Resume>
 815b831:	89 04 24             	mov    %eax,(%esp)
 815b834:	e8 a7 a4 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815b839:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815b83c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815b83f:	89 44 24 14          	mov    %eax,0x14(%esp)
 815b843:	c7 44 24 10 40 76 b7 	movl   $0x8b77640,0x10(%esp)
 815b84a:	08 
 815b84b:	c7 44 24 0c ac 01 00 	movl   $0x1ac,0xc(%esp)
 815b852:	00 
 815b853:	c7 44 24 08 a0 91 b7 	movl   $0x8b791a0,0x8(%esp)
 815b85a:	08 
 815b85b:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815b862:	08 
 815b863:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815b86a:	e8 9b 83 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815b86f:	bb 00 00 00 00       	mov    $0x0,%ebx
 815b874:	e8 b7 a3 5c 00       	call   8725c30 <__cxa_end_catch>
 815b879:	eb 15                	jmp    815b890 <_ZN18ResetStayTimeEvent8dispatchEiiP6Stream+0x126>
 815b87b:	89 d3                	mov    %edx,%ebx
 815b87d:	89 c6                	mov    %eax,%esi
 815b87f:	e8 ac a3 5c 00       	call   8725c30 <__cxa_end_catch>
 815b884:	89 f0                	mov    %esi,%eax
 815b886:	89 da                	mov    %ebx,%edx
 815b888:	89 04 24             	mov    %eax,(%esp)
 815b88b:	e8 c0 7e 98 00       	call   8ae3750 <_Unwind_Resume>
 815b890:	89 d8                	mov    %ebx,%eax
 815b892:	83 c4 30             	add    $0x30,%esp
 815b895:	5b                   	pop    %ebx
 815b896:	5e                   	pop    %esi
 815b897:	5d                   	pop    %ebp
 815b898:	c3                   	ret
 815b899:	90                   	nop

```

```c
// ResetStayTimeEvent::dispatch @ 0x815b76a

/* ResetStayTimeEvent::dispatch(int, int, Stream*) */

undefined4 ResetStayTimeEvent::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  undefined4 *puVar2;
  
                    /* try { // try from 0815b78a to 0815b81c has its CatchHandler @ 0815b824 */
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  MySQL::set_query(this,"upDate event_stay_time_charac set reward_flag = 0");
  cVar1 = MySQL::exec(this,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = &DAT_08b77277;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  return 1;
}

```

