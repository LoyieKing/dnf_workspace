# dispatch

`_ZN25DB_RemoveFeaturedGoodsIdx8dispatchEiiP6Stream`

`DB_RemoveFeaturedGoodsIdx::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_RemoveFeaturedGoodsIdx` | `0x0841b41a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841b41a  _ZN25DB_RemoveFeaturedGoodsIdx8dispatchEiiP6Stream
#           DB_RemoveFeaturedGoodsIdx::dispatch(int, int, Stream*)
# range [0x0841b41a, 0x0841b4bd]
0841b41a +0x00:  push   %ebp
0841b41b +0x01:  mov    %esp,%ebp
0841b41d +0x03:  push   %esi
0841b41e +0x04:  push   %ebx
0841b41f +0x05:  sub    $0x30,%esp
0841b422 +0x08:  mov    0x14(%ebp),%eax
0841b425 +0x0b:  mov    %eax,(%esp)
0841b428 +0x0e:  call   08451118 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3d2e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3d2e
0841b42d +0x13:  mov    %eax,-0x10(%ebp)
0841b430 +0x16:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841b435 +0x1b:  movl   $0x0,0x8(%esp)
0841b43d +0x23:  movl   $0x6,0x4(%esp)
0841b445 +0x2b:  mov    %eax,(%esp)
0841b448 +0x2e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841b44d +0x33:  mov    %eax,-0xc(%ebp)
0841b450 +0x36:  mov    -0x10(%ebp),%eax
0841b453 +0x39:  mov    0xc(%eax),%esi
0841b456 +0x3c:  mov    -0x10(%ebp),%eax
0841b459 +0x3f:  mov    0x8(%eax),%ebx
0841b45c +0x42:  mov    -0x10(%ebp),%eax
0841b45f +0x45:  mov    (%eax),%eax
0841b461 +0x47:  movl   $0x0,0x4(%esp)
0841b469 +0x4f:  mov    %eax,(%esp)
0841b46c +0x52:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841b471 +0x57:  mov    %esi,0x10(%esp)
0841b475 +0x5b:  mov    %ebx,0xc(%esp)
0841b479 +0x5f:  mov    %eax,0x8(%esp)
0841b47d +0x63:  movl   $"deLete from dnf_event_entry where m_id=%s and event_id=%d and server_id=%d",0x4(%esp)
0841b485 +0x6b:  mov    -0xc(%ebp),%eax
0841b488 +0x6e:  mov    %eax,(%esp)
0841b48b +0x71:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b490 +0x76:  movl   $0x1,0x4(%esp)
0841b498 +0x7e:  mov    -0xc(%ebp),%eax
0841b49b +0x81:  mov    %eax,(%esp)
0841b49e +0x84:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b4a3 +0x89:  xor    $0x1,%eax
0841b4a6 +0x8c:  test   %al,%al
0841b4a8 +0x8e:  je     0841b4b1 <+0x97>
0841b4aa +0x90:  mov    $0x0,%eax
0841b4af +0x95:  jmp    0841b4b6 <+0x9c>
0841b4b1 +0x97:  mov    $0x1,%eax
0841b4b6 +0x9c:  add    $0x30,%esp
0841b4b9 +0x9f:  pop    %ebx
0841b4ba +0xa0:  pop    %esi
0841b4bb +0xa1:  pop    %ebp
0841b4bc +0xa2:  ret
0841b4bd +0xa3:  nop
```

## 反编译 C

```c
// DB_RemoveFeaturedGoodsIdx::dispatch @ 0x841b41a

/* DB_RemoveFeaturedGoodsIdx::dispatch(int, int, Stream*) */

bool DB_RemoveFeaturedGoodsIdx::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  SIG_REMOVE_FEATURED_GOODSIDX *pSVar4;
  MySQL *this;
  undefined4 uVar5;
  Stream *in_stack_00000010;
  
  pSVar4 = Stream::GetOutBuffer<SIG_REMOVE_FEATURED_GOODSIDX>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar1 = *(undefined4 *)(pSVar4 + 0xc);
  uVar2 = *(undefined4 *)(pSVar4 + 8);
  uVar5 = NumberToString(*(uint *)pSVar4,0);
  MySQL::set_query(this,"deLete from dnf_event_entry where m_id=%s and event_id=%d and server_id=%d"
                   ,uVar5,uVar2,uVar1);
  cVar3 = MySQL::exec(this,true);
  return cVar3 == '\x01';
}
```
