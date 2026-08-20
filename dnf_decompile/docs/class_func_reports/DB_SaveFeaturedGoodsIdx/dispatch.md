# dispatch

`_ZN23DB_SaveFeaturedGoodsIdx8dispatchEiiP6Stream`

`DB_SaveFeaturedGoodsIdx::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveFeaturedGoodsIdx` | `0x0841b210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841b210  _ZN23DB_SaveFeaturedGoodsIdx8dispatchEiiP6Stream
#           DB_SaveFeaturedGoodsIdx::dispatch(int, int, Stream*)
# range [0x0841b210, 0x0841b2d9]
0841b210 +0x00:  push   %ebp
0841b211 +0x01:  mov    %esp,%ebp
0841b213 +0x03:  push   %edi
0841b214 +0x04:  push   %esi
0841b215 +0x05:  push   %ebx
0841b216 +0x06:  sub    $0x4c,%esp
0841b219 +0x09:  mov    0x14(%ebp),%eax
0841b21c +0x0c:  mov    %eax,(%esp)
0841b21f +0x0f:  call   084510c4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3cda>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3cda
0841b224 +0x14:  mov    %eax,-0x20(%ebp)
0841b227 +0x17:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841b22c +0x1c:  movl   $0x0,0x8(%esp)
0841b234 +0x24:  movl   $0x6,0x4(%esp)
0841b23c +0x2c:  mov    %eax,(%esp)
0841b23f +0x2f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841b244 +0x34:  mov    %eax,-0x1c(%ebp)
0841b247 +0x37:  mov    -0x20(%ebp),%eax
0841b24a +0x3a:  mov    0x10(%eax),%eax
0841b24d +0x3d:  mov    %eax,-0x2c(%ebp)
0841b250 +0x40:  mov    -0x20(%ebp),%eax
0841b253 +0x43:  mov    0x4(%eax),%edi
0841b256 +0x46:  mov    -0x20(%ebp),%eax
0841b259 +0x49:  mov    0xc(%eax),%esi
0841b25c +0x4c:  mov    -0x20(%ebp),%eax
0841b25f +0x4f:  mov    0x10(%eax),%ebx
0841b262 +0x52:  mov    -0x20(%ebp),%eax
0841b265 +0x55:  mov    (%eax),%eax
0841b267 +0x57:  movl   $0x0,0x4(%esp)
0841b26f +0x5f:  mov    %eax,(%esp)
0841b272 +0x62:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841b277 +0x67:  mov    -0x20(%ebp),%edx
0841b27a +0x6a:  mov    0x8(%edx),%edx
0841b27d +0x6d:  mov    -0x2c(%ebp),%ecx
0841b280 +0x70:  mov    %ecx,0x1c(%esp)
0841b284 +0x74:  mov    %edi,0x18(%esp)
0841b288 +0x78:  mov    %esi,0x14(%esp)
0841b28c +0x7c:  mov    %ebx,0x10(%esp)
0841b290 +0x80:  mov    %eax,0xc(%esp)
0841b294 +0x84:  mov    %edx,0x8(%esp)
0841b298 +0x88:  movl   $"inSert into dnf_event_entry(event_id,m_id,occ_date,server_id,charac_no,obtain_date) values(%d,%s,from_unixtime(%d),%d,%d,from_unixtime(%d))",0x4(%esp)
0841b2a0 +0x90:  mov    -0x1c(%ebp),%eax
0841b2a3 +0x93:  mov    %eax,(%esp)
0841b2a6 +0x96:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b2ab +0x9b:  movl   $0x1,0x4(%esp)
0841b2b3 +0xa3:  mov    -0x1c(%ebp),%eax
0841b2b6 +0xa6:  mov    %eax,(%esp)
0841b2b9 +0xa9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b2be +0xae:  xor    $0x1,%eax
0841b2c1 +0xb1:  test   %al,%al
0841b2c3 +0xb3:  je     0841b2cc <+0xbc>
0841b2c5 +0xb5:  mov    $0x0,%eax
0841b2ca +0xba:  jmp    0841b2d1 <+0xc1>
0841b2cc +0xbc:  mov    $0x1,%eax
0841b2d1 +0xc1:  add    $0x4c,%esp
0841b2d4 +0xc4:  pop    %ebx
0841b2d5 +0xc5:  pop    %esi
0841b2d6 +0xc6:  pop    %edi
0841b2d7 +0xc7:  pop    %ebp
0841b2d8 +0xc8:  ret
0841b2d9 +0xc9:  nop
```

## 反编译 C

```c
// DB_SaveFeaturedGoodsIdx::dispatch @ 0x841b210

/* DB_SaveFeaturedGoodsIdx::dispatch(int, int, Stream*) */

bool DB_SaveFeaturedGoodsIdx::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  SIG_SAVE_FEATURED_GOODSIDX *pSVar6;
  MySQL *this;
  undefined4 uVar7;
  Stream *in_stack_00000010;
  
  pSVar6 = Stream::GetOutBuffer<SIG_SAVE_FEATURED_GOODSIDX>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar1 = *(undefined4 *)(pSVar6 + 0x10);
  uVar2 = *(undefined4 *)(pSVar6 + 4);
  uVar3 = *(undefined4 *)(pSVar6 + 0xc);
  uVar4 = *(undefined4 *)(pSVar6 + 0x10);
  uVar7 = NumberToString(*(uint *)pSVar6,0);
  MySQL::set_query(this,
                   "inSert into dnf_event_entry(event_id,m_id,occ_date,server_id,charac_no,obtain_date) values(%d,%s,from_unixtime(%d),%d,%d,from_unixtime(%d))"
                   ,*(undefined4 *)(pSVar6 + 8),uVar7,uVar4,uVar3,uVar2,uVar1);
  cVar5 = MySQL::exec(this,true);
  return cVar5 == '\x01';
}
```
