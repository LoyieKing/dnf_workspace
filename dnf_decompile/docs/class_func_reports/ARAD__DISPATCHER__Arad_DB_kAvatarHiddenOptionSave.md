# ARAD__DISPATCHER__Arad_DB_kAvatarHiddenOptionSave

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 081860f4 ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch  [0x081860f4-0x81862cf] ===
 81860f4:	55                   	push   %ebp
 81860f5:	89 e5                	mov    %esp,%ebp
 81860f7:	56                   	push   %esi
 81860f8:	53                   	push   %ebx
 81860f9:	83 ec 30             	sub    $0x30,%esp
 81860fc:	8b 45 14             	mov    0x14(%ebp),%eax
 81860ff:	89 04 24             	mov    %eax,(%esp)
 8186102:	e8 71 0f 00 00       	call   8187078 <_ZN6Stream12GetOutBufferIN4arad29SigAradAvatarHiddenOptionSaveEEEPT_v>
 8186107:	89 45 ec             	mov    %eax,-0x14(%ebp)
 818610a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 818610e:	75 36                	jne    8186146 <_ZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6Stream+0x52>
 8186110:	c7 44 24 10 bc fb b8 	movl   $0x8b8fbbc,0x10(%esp)
 8186117:	08 
 8186118:	c7 44 24 0c 54 08 00 	movl   $0x854,0xc(%esp)
 818611f:	00 
 8186120:	c7 44 24 08 20 0a b9 	movl   $0x8b90a20,0x8(%esp)
 8186127:	08 
 8186128:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 818612f:	08 
 8186130:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8186137:	e8 ce da 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818613c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8186141:	e9 81 01 00 00       	jmp    81862c7 <_ZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6Stream+0x1d3>
 8186146:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818614b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8186152:	00 
 8186153:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 818615a:	00 
 818615b:	89 04 24             	mov    %eax,(%esp)
 818615e:	e8 db f0 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8186163:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8186166:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 818616a:	75 2c                	jne    8186198 <_ZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6Stream+0xa4>
 818616c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8186173:	e8 88 f6 59 00       	call   8725800 <__cxa_allocate_exception>
 8186178:	89 c2                	mov    %eax,%edx
 818617a:	c7 02 f7 f7 b8 08    	movl   $0x8b8f7f7,(%edx)
 8186180:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8186187:	00 
 8186188:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 818618f:	09 
 8186190:	89 04 24             	mov    %eax,(%esp)
 8186193:	e8 b8 ea 59 00       	call   8724c50 <__cxa_throw>
 8186198:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818619b:	8b 58 08             	mov    0x8(%eax),%ebx
 818619e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81861a1:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 81861a5:	0f bf c8             	movswl %ax,%ecx
 81861a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81861ab:	8b 50 04             	mov    0x4(%eax),%edx
 81861ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81861b1:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81861b5:	98                   	cwtl
 81861b6:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81861ba:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81861be:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81861c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81861c6:	c7 44 24 04 e4 fb b8 	movl   $0x8b8fbe4,0x4(%esp)
 81861cd:	08 
 81861ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81861d1:	89 04 24             	mov    %eax,(%esp)
 81861d4:	e8 e7 df 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81861d9:	83 f0 01             	xor    $0x1,%eax
 81861dc:	84 c0                	test   %al,%al
 81861de:	74 2c                	je     818620c <_ZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6Stream+0x118>
 81861e0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81861e7:	e8 14 f6 59 00       	call   8725800 <__cxa_allocate_exception>
 81861ec:	89 c2                	mov    %eax,%edx
 81861ee:	c7 02 79 f8 b8 08    	movl   $0x8b8f879,(%edx)
 81861f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81861fb:	00 
 81861fc:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8186203:	09 
 8186204:	89 04 24             	mov    %eax,(%esp)
 8186207:	e8 44 ea 59 00       	call   8724c50 <__cxa_throw>
 818620c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8186213:	00 
 8186214:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8186217:	89 04 24             	mov    %eax,(%esp)
 818621a:	e8 07 e1 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 818621f:	83 f0 01             	xor    $0x1,%eax
 8186222:	84 c0                	test   %al,%al
 8186224:	0f 84 98 00 00 00    	je     81862c2 <_ZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6Stream+0x1ce>
 818622a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8186231:	e8 ca f5 59 00       	call   8725800 <__cxa_allocate_exception>
 8186236:	89 c2                	mov    %eax,%edx
 8186238:	c7 02 83 f8 b8 08    	movl   $0x8b8f883,(%edx)
 818623e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8186245:	00 
 8186246:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 818624d:	09 
 818624e:	89 04 24             	mov    %eax,(%esp)
 8186251:	e8 fa e9 59 00       	call   8724c50 <__cxa_throw>
 8186256:	83 fa 01             	cmp    $0x1,%edx
 8186259:	74 08                	je     8186263 <_ZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6Stream+0x16f>
 818625b:	89 04 24             	mov    %eax,(%esp)
 818625e:	e8 ed d4 95 00       	call   8ae3750 <_Unwind_Resume>
 8186263:	89 04 24             	mov    %eax,(%esp)
 8186266:	e8 75 fa 59 00       	call   8725ce0 <__cxa_begin_catch>
 818626b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818626e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8186271:	89 44 24 14          	mov    %eax,0x14(%esp)
 8186275:	c7 44 24 10 30 fa b8 	movl   $0x8b8fa30,0x10(%esp)
 818627c:	08 
 818627d:	c7 44 24 0c 68 08 00 	movl   $0x868,0xc(%esp)
 8186284:	00 
 8186285:	c7 44 24 08 20 0a b9 	movl   $0x8b90a20,0x8(%esp)
 818628c:	08 
 818628d:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8186294:	08 
 8186295:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818629c:	e8 69 d9 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81862a1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81862a6:	e8 85 f9 59 00       	call   8725c30 <__cxa_end_catch>
 81862ab:	eb 1a                	jmp    81862c7 <_ZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6Stream+0x1d3>
 81862ad:	89 d3                	mov    %edx,%ebx
 81862af:	89 c6                	mov    %eax,%esi
 81862b1:	e8 7a f9 59 00       	call   8725c30 <__cxa_end_catch>
 81862b6:	89 f0                	mov    %esi,%eax
 81862b8:	89 da                	mov    %ebx,%edx
 81862ba:	89 04 24             	mov    %eax,(%esp)
 81862bd:	e8 8e d4 95 00       	call   8ae3750 <_Unwind_Resume>
 81862c2:	bb 01 00 00 00       	mov    $0x1,%ebx
 81862c7:	89 d8                	mov    %ebx,%eax
 81862c9:	83 c4 30             	add    $0x30,%esp
 81862cc:	5b                   	pop    %ebx
 81862cd:	5e                   	pop    %esi
 81862ce:	5d                   	pop    %ebp
 81862cf:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch @ 0x81860f4

/* ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigAradAvatarHiddenOptionSave *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigAradAvatarHiddenOptionSave>(in_stack_00000010);
  if (pSVar2 == (SigAradAvatarHiddenOptionSave *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch(int, int, Stream*)"
               ,0x854,"SigAradAvatarHiddenOptionSave is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 0818615e to 08186255 has its CatchHandler @ 08186256 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,
                             "upDate user_items set hidden_option=%d where charac_no=%d and slot=%d and it_id=%d"
                             ,(int)*(short *)(pSVar2 + 0xe),*(undefined4 *)(pSVar2 + 4),
                             (int)*(short *)(pSVar2 + 0xc),*(undefined4 *)(pSVar2 + 8));
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

