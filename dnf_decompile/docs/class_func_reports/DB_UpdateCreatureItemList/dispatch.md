# dispatch

`_ZN25DB_UpdateCreatureItemList8dispatchEiiP6Stream`

`DB_UpdateCreatureItemList::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCreatureItemList` | `0x0841fd12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841fd12  _ZN25DB_UpdateCreatureItemList8dispatchEiiP6Stream
#           DB_UpdateCreatureItemList::dispatch(int, int, Stream*)
# range [0x0841fd12, 0x0841fe0b]
0841fd12 +0x00:  push   %ebp
0841fd13 +0x01:  mov    %esp,%ebp
0841fd15 +0x03:  push   %esi
0841fd16 +0x04:  push   %ebx
0841fd17 +0x05:  sub    $0x30,%esp
0841fd1a +0x08:  mov    0x14(%ebp),%eax
0841fd1d +0x0b:  mov    %eax,(%esp)
0841fd20 +0x0e:  call   08451aa6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x46bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x46bc
0841fd25 +0x13:  mov    %eax,-0x14(%ebp)
0841fd28 +0x16:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841fd2d +0x1b:  movl   $0x0,0x8(%esp)
0841fd35 +0x23:  movl   $0x3,0x4(%esp)
0841fd3d +0x2b:  mov    %eax,(%esp)
0841fd40 +0x2e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841fd45 +0x33:  mov    %eax,-0x10(%ebp)
0841fd48 +0x36:  movl   $0x0,-0xc(%ebp)
0841fd4f +0x3d:  jmp    0841fdec <+0xda>
0841fd54 +0x42:  mov    -0xc(%ebp),%eax
0841fd57 +0x45:  mov    -0x14(%ebp),%ecx
0841fd5a +0x48:  shl    $0x3,%eax
0841fd5d +0x4b:  lea    0x0(,%eax,8),%edx
0841fd64 +0x52:  sub    %eax,%edx
0841fd66 +0x54:  lea    (%ecx,%edx,1),%eax
0841fd69 +0x57:  add    $0x21a4,%eax
0841fd6e +0x5c:  mov    (%eax),%ebx
0841fd70 +0x5e:  mov    -0xc(%ebp),%eax
0841fd73 +0x61:  mov    -0x14(%ebp),%ecx
0841fd76 +0x64:  shl    $0x3,%eax
0841fd79 +0x67:  lea    0x0(,%eax,8),%edx
0841fd80 +0x6e:  sub    %eax,%edx
0841fd82 +0x70:  lea    (%ecx,%edx,1),%eax
0841fd85 +0x73:  add    $0x21b8,%eax
0841fd8a +0x78:  mov    (%eax),%ecx
0841fd8c +0x7a:  mov    -0xc(%ebp),%eax
0841fd8f +0x7d:  mov    -0x14(%ebp),%esi
0841fd92 +0x80:  shl    $0x3,%eax
0841fd95 +0x83:  lea    0x0(,%eax,8),%edx
0841fd9c +0x8a:  sub    %eax,%edx
0841fd9e +0x8c:  lea    (%esi,%edx,1),%eax
0841fda1 +0x8f:  add    $0x21c0,%eax
0841fda6 +0x94:  mov    (%eax),%eax
0841fda8 +0x96:  mov    %ebx,0x10(%esp)
0841fdac +0x9a:  mov    %ecx,0xc(%esp)
0841fdb0 +0x9e:  mov    %eax,0x8(%esp)
0841fdb4 +0xa2:  movl   $"upDate creature_items set exp=%d,stomach=%d where ui_id=%d",0x4(%esp)
0841fdbc +0xaa:  mov    -0x10(%ebp),%eax
0841fdbf +0xad:  mov    %eax,(%esp)
0841fdc2 +0xb0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841fdc7 +0xb5:  movl   $0x1,0x4(%esp)
0841fdcf +0xbd:  mov    -0x10(%ebp),%eax
0841fdd2 +0xc0:  mov    %eax,(%esp)
0841fdd5 +0xc3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841fdda +0xc8:  xor    $0x1,%eax
0841fddd +0xcb:  test   %al,%al
0841fddf +0xcd:  je     0841fde8 <+0xd6>
0841fde1 +0xcf:  mov    $0x0,%eax
0841fde6 +0xd4:  jmp    0841fe04 <+0xf2>
0841fde8 +0xd6:  addl   $0x1,-0xc(%ebp)
0841fdec +0xda:  mov    -0x14(%ebp),%eax
0841fdef +0xdd:  mov    (%eax),%eax
0841fdf1 +0xdf:  cmp    -0xc(%ebp),%eax
0841fdf4 +0xe2:  setg   %al
0841fdf7 +0xe5:  test   %al,%al
0841fdf9 +0xe7:  jne    0841fd54 <+0x42>
0841fdff +0xed:  mov    $0x1,%eax
0841fe04 +0xf2:  add    $0x30,%esp
0841fe07 +0xf5:  pop    %ebx
0841fe08 +0xf6:  pop    %esi
0841fe09 +0xf7:  pop    %ebp
0841fe0a +0xf8:  ret
0841fe0b +0xf9:  nop
```

## 反编译 C

```c
// DB_UpdateCreatureItemList::dispatch @ 0x841fd12

/* DB_UpdateCreatureItemList::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCreatureItemList::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_CREATURE_ITEM_LIST *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  int local_10;
  
  pSVar2 = Stream::GetOutBuffer<SIG_CREATURE_ITEM_LIST>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_10 = 0;
  while( true ) {
    if (*(int *)pSVar2 <= local_10) {
      return 1;
    }
    MySQL::set_query(this,"upDate creature_items set exp=%d,stomach=%d where ui_id=%d",
                     *(undefined4 *)(pSVar2 + local_10 * 0x38 + 0x21c0),
                     *(undefined4 *)(pSVar2 + local_10 * 0x38 + 0x21b8),
                     *(undefined4 *)(pSVar2 + local_10 * 0x38 + 0x21a4));
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  return 0;
}
```
