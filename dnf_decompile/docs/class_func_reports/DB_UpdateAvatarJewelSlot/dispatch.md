# dispatch

`_ZN24DB_UpdateAvatarJewelSlot8dispatchEiiP6Stream`

`DB_UpdateAvatarJewelSlot::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateAvatarJewelSlot` | `0x0843077c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843077c  _ZN24DB_UpdateAvatarJewelSlot8dispatchEiiP6Stream
#           DB_UpdateAvatarJewelSlot::dispatch(int, int, Stream*)
# range [0x0843077c, 0x0843081b]
0843077c +0x00:  push   %ebp
0843077d +0x01:  mov    %esp,%ebp
0843077f +0x03:  push   %esi
08430780 +0x04:  push   %ebx
08430781 +0x05:  sub    $0x30,%esp
08430784 +0x08:  mov    0x14(%ebp),%eax
08430787 +0x0b:  mov    %eax,(%esp)
0843078a +0x0e:  call   08452dba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x59d0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x59d0
0843078f +0x13:  mov    %eax,-0x10(%ebp)
08430792 +0x16:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08430797 +0x1b:  movl   $0x0,0x8(%esp)
0843079f +0x23:  movl   $0x3,0x4(%esp)
084307a7 +0x2b:  mov    %eax,(%esp)
084307aa +0x2e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084307af +0x33:  mov    %eax,-0xc(%ebp)
084307b2 +0x36:  mov    -0x10(%ebp),%eax
084307b5 +0x39:  mov    (%eax),%esi
084307b7 +0x3b:  mov    -0x10(%ebp),%eax
084307ba +0x3e:  mov    0x4(%eax),%ebx
084307bd +0x41:  mov    -0x10(%ebp),%eax
084307c0 +0x44:  add    $0x8,%eax
084307c3 +0x47:  movl   $0x1e,0xc(%esp)
084307cb +0x4f:  mov    %eax,0x8(%esp)
084307cf +0x53:  movl   $0x0,0x4(%esp)
084307d7 +0x5b:  mov    -0xc(%ebp),%eax
084307da +0x5e:  mov    %eax,(%esp)
084307dd +0x61:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084307e2 +0x66:  mov    %esi,0x10(%esp)
084307e6 +0x6a:  mov    %ebx,0xc(%esp)
084307ea +0x6e:  mov    %eax,0x8(%esp)
084307ee +0x72:  movl   $"upDate user_items set jewel_socket='%s' where ui_id=%d and charac_no=%d",0x4(%esp)
084307f6 +0x7a:  mov    -0xc(%ebp),%eax
084307f9 +0x7d:  mov    %eax,(%esp)
084307fc +0x80:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08430801 +0x85:  movl   $0x1,0x4(%esp)
08430809 +0x8d:  mov    -0xc(%ebp),%eax
0843080c +0x90:  mov    %eax,(%esp)
0843080f +0x93:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08430814 +0x98:  add    $0x30,%esp
08430817 +0x9b:  pop    %ebx
08430818 +0x9c:  pop    %esi
08430819 +0x9d:  pop    %ebp
0843081a +0x9e:  ret
0843081b +0x9f:  nop
```

## 反编译 C

```c
// DB_UpdateAvatarJewelSlot::dispatch @ 0x843077c

/* DB_UpdateAvatarJewelSlot::dispatch(int, int, Stream*) */

void DB_UpdateAvatarJewelSlot::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  SIG_UPDATE_AVATAR_JEWEL_SOCKET *pSVar3;
  MySQL *this;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_AVATAR_JEWEL_SOCKET>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar1 = *(undefined4 *)pSVar3;
  uVar2 = *(undefined4 *)(pSVar3 + 4);
  uVar4 = MySQL::blob_to_str(this,0,pSVar3 + 8,0x1e);
  MySQL::set_query(this,"upDate user_items set jewel_socket=\'%s\' where ui_id=%d and charac_no=%d",
                   uVar4,uVar2,uVar1);
  MySQL::exec(this,true);
  return;
}
```
