# dispatch

`_ZN19DB_SwapCreatureItem8dispatchEiiP6Stream`

`DB_SwapCreatureItem::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SwapCreatureItem` | `0x0841fe0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841fe0c  _ZN19DB_SwapCreatureItem8dispatchEiiP6Stream
#           DB_SwapCreatureItem::dispatch(int, int, Stream*)
# range [0x0841fe0c, 0x0841fef1]
0841fe0c +0x00:  push   %ebp
0841fe0d +0x01:  mov    %esp,%ebp
0841fe0f +0x03:  sub    $0x28,%esp
0841fe12 +0x06:  mov    0x14(%ebp),%eax
0841fe15 +0x09:  mov    %eax,(%esp)
0841fe18 +0x0c:  call   08451afa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4710>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4710
0841fe1d +0x11:  mov    %eax,-0x10(%ebp)
0841fe20 +0x14:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841fe25 +0x19:  movl   $0x0,0x8(%esp)
0841fe2d +0x21:  movl   $0x3,0x4(%esp)
0841fe35 +0x29:  mov    %eax,(%esp)
0841fe38 +0x2c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841fe3d +0x31:  mov    %eax,-0xc(%ebp)
0841fe40 +0x34:  mov    -0x10(%ebp),%eax
0841fe43 +0x37:  movzbl 0x8(%eax),%eax
0841fe47 +0x3b:  xor    $0x1,%eax
0841fe4a +0x3e:  test   %al,%al
0841fe4c +0x40:  je     0841fe95 <+0x89>
0841fe4e +0x42:  mov    -0x10(%ebp),%eax
0841fe51 +0x45:  mov    (%eax),%edx
0841fe53 +0x47:  mov    -0x10(%ebp),%eax
0841fe56 +0x4a:  mov    0x10(%eax),%eax
0841fe59 +0x4d:  mov    %edx,0xc(%esp)
0841fe5d +0x51:  mov    %eax,0x8(%esp)
0841fe61 +0x55:  movl   $"upDate creature_items set slot=%d where ui_id=%d",0x4(%esp)
0841fe69 +0x5d:  mov    -0xc(%ebp),%eax
0841fe6c +0x60:  mov    %eax,(%esp)
0841fe6f +0x63:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841fe74 +0x68:  movl   $0x1,0x4(%esp)
0841fe7c +0x70:  mov    -0xc(%ebp),%eax
0841fe7f +0x73:  mov    %eax,(%esp)
0841fe82 +0x76:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841fe87 +0x7b:  xor    $0x1,%eax
0841fe8a +0x7e:  test   %al,%al
0841fe8c +0x80:  je     0841fe95 <+0x89>
0841fe8e +0x82:  mov    $0x0,%eax
0841fe93 +0x87:  jmp    0841fef0 <+0xe4>
0841fe95 +0x89:  mov    -0x10(%ebp),%eax
0841fe98 +0x8c:  movzbl 0x14(%eax),%eax
0841fe9c +0x90:  xor    $0x1,%eax
0841fe9f +0x93:  test   %al,%al
0841fea1 +0x95:  je     0841feeb <+0xdf>
0841fea3 +0x97:  mov    -0x10(%ebp),%eax
0841fea6 +0x9a:  mov    0xc(%eax),%edx
0841fea9 +0x9d:  mov    -0x10(%ebp),%eax
0841feac +0xa0:  mov    0x4(%eax),%eax
0841feaf +0xa3:  mov    %edx,0xc(%esp)
0841feb3 +0xa7:  mov    %eax,0x8(%esp)
0841feb7 +0xab:  movl   $"upDate creature_items set slot=%d where ui_id=%d",0x4(%esp)
0841febf +0xb3:  mov    -0xc(%ebp),%eax
0841fec2 +0xb6:  mov    %eax,(%esp)
0841fec5 +0xb9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841feca +0xbe:  movl   $0x1,0x4(%esp)
0841fed2 +0xc6:  mov    -0xc(%ebp),%eax
0841fed5 +0xc9:  mov    %eax,(%esp)
0841fed8 +0xcc:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841fedd +0xd1:  xor    $0x1,%eax
0841fee0 +0xd4:  test   %al,%al
0841fee2 +0xd6:  je     0841feeb <+0xdf>
0841fee4 +0xd8:  mov    $0x0,%eax
0841fee9 +0xdd:  jmp    0841fef0 <+0xe4>
0841feeb +0xdf:  mov    $0x1,%eax
0841fef0 +0xe4:  leave
0841fef1 +0xe5:  ret
```

## 反编译 C

```c
// DB_SwapCreatureItem::dispatch @ 0x841fe0c

/* DB_SwapCreatureItem::dispatch(int, int, Stream*) */

undefined4 DB_SwapCreatureItem::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SWAP_CREATURE_ITEM *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SWAP_CREATURE_ITEM>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (pSVar2[8] != (SIG_SWAP_CREATURE_ITEM)0x1) {
    MySQL::set_query(this,"upDate creature_items set slot=%d where ui_id=%d",
                     *(undefined4 *)(pSVar2 + 0x10),*(undefined4 *)pSVar2);
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  if (pSVar2[0x14] != (SIG_SWAP_CREATURE_ITEM)0x1) {
    MySQL::set_query(this,"upDate creature_items set slot=%d where ui_id=%d",
                     *(undefined4 *)(pSVar2 + 4),*(undefined4 *)(pSVar2 + 0xc));
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
