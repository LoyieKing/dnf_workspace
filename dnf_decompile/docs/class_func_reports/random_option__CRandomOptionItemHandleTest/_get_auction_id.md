# _get_auction_id

`_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv`

`random_option::CRandomOptionItemHandleTest::_get_auction_id()`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandleTest` | `0x085f3cc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f3cc4  _ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv
#           random_option::CRandomOptionItemHandleTest::_get_auction_id()
# range [0x085f3cc4, 0x085f3db9]
085f3cc4 +0x00:  push   %ebp
085f3cc5 +0x01:  mov    %esp,%ebp
085f3cc7 +0x03:  sub    $0x28,%esp
085f3cca +0x06:  mov    0x8(%ebp),%eax
085f3ccd +0x09:  mov    0x4(%eax),%edx
085f3cd0 +0x0c:  mov    (%eax),%eax
085f3cd2 +0x0e:  or     %edx,%eax
085f3cd4 +0x10:  test   %eax,%eax
085f3cd6 +0x12:  je     085f3ce5 <+0x21>
085f3cd8 +0x14:  mov    0x8(%ebp),%eax
085f3cdb +0x17:  mov    0x4(%eax),%edx
085f3cde +0x1a:  mov    (%eax),%eax
085f3ce0 +0x1c:  jmp    085f3db7 <+0xf3>
085f3ce5 +0x21:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
085f3cea +0x26:  movl   $0x0,0x8(%esp)
085f3cf2 +0x2e:  movl   $0xc,0x4(%esp)
085f3cfa +0x36:  mov    %eax,(%esp)
085f3cfd +0x39:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
085f3d02 +0x3e:  mov    %eax,-0xc(%ebp)
085f3d05 +0x41:  movl   $"seLect max(auction_id) from auction_main",0x4(%esp)
085f3d0d +0x49:  mov    -0xc(%ebp),%eax
085f3d10 +0x4c:  mov    %eax,(%esp)
085f3d13 +0x4f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
085f3d18 +0x54:  movl   $0x1,0x4(%esp)
085f3d20 +0x5c:  mov    -0xc(%ebp),%eax
085f3d23 +0x5f:  mov    %eax,(%esp)
085f3d26 +0x62:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
085f3d2b +0x67:  xor    $0x1,%eax
085f3d2e +0x6a:  test   %al,%al
085f3d30 +0x6c:  je     085f3d3e <+0x7a>
085f3d32 +0x6e:  mov    $0x0,%eax
085f3d37 +0x73:  mov    $0x0,%edx
085f3d3c +0x78:  jmp    085f3db7 <+0xf3>
085f3d3e +0x7a:  mov    -0xc(%ebp),%eax
085f3d41 +0x7d:  mov    %eax,(%esp)
085f3d44 +0x80:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
085f3d49 +0x85:  xor    $0x1,%eax
085f3d4c +0x88:  test   %al,%al
085f3d4e +0x8a:  je     085f3d5c <+0x98>
085f3d50 +0x8c:  mov    $0x0,%eax
085f3d55 +0x91:  mov    $0x0,%edx
085f3d5a +0x96:  jmp    085f3db7 <+0xf3>
085f3d5c +0x98:  movl   $0x0,0x4(%esp)
085f3d64 +0xa0:  mov    -0xc(%ebp),%eax
085f3d67 +0xa3:  mov    %eax,(%esp)
085f3d6a +0xa6:  call   085f41b2 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x1cd>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x1cd
085f3d6f +0xab:  xor    $0x1,%eax
085f3d72 +0xae:  test   %al,%al
085f3d74 +0xb0:  je     085f3d82 <+0xbe>
085f3d76 +0xb2:  mov    $0x0,%eax
085f3d7b +0xb7:  mov    $0x0,%edx
085f3d80 +0xbc:  jmp    085f3db7 <+0xf3>
085f3d82 +0xbe:  mov    0x8(%ebp),%eax
085f3d85 +0xc1:  mov    %eax,0x8(%esp)
085f3d89 +0xc5:  movl   $0x0,0x4(%esp)
085f3d91 +0xcd:  mov    -0xc(%ebp),%eax
085f3d94 +0xd0:  mov    %eax,(%esp)
085f3d97 +0xd3:  call   085f4214 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x22f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x22f
085f3d9c +0xd8:  xor    $0x1,%eax
085f3d9f +0xdb:  test   %al,%al
085f3da1 +0xdd:  je     085f3daf <+0xeb>
085f3da3 +0xdf:  mov    $0x0,%eax
085f3da8 +0xe4:  mov    $0x0,%edx
085f3dad +0xe9:  jmp    085f3db7 <+0xf3>
085f3daf +0xeb:  mov    0x8(%ebp),%eax
085f3db2 +0xee:  mov    0x4(%eax),%edx
085f3db5 +0xf1:  mov    (%eax),%eax
085f3db7 +0xf3:  leave
085f3db8 +0xf4:  ret
085f3db9 +0xf5:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandleTest::_get_auction_id @ 0x85f3cc4

/* random_option::CRandomOptionItemHandleTest::_get_auction_id() */

undefined8 __thiscall
random_option::CRandomOptionItemHandleTest::_get_auction_id(CRandomOptionItemHandleTest *this)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)this == 0 && *(int *)(this + 4) == 0) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xc,0);
    MySQL::set_query(this_00,"seLect max(auction_id) from auction_main");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::is_valid_data(this_00,0);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_longlong(this_00,0,(longlong *)this);
          if (cVar1 == '\x01') {
            uVar3 = *(undefined4 *)(this + 4);
            uVar2 = *(undefined4 *)this;
          }
          else {
            uVar2 = 0;
            uVar3 = 0;
          }
        }
        else {
          uVar2 = 0;
          uVar3 = 0;
        }
      }
      else {
        uVar2 = 0;
        uVar3 = 0;
      }
    }
    else {
      uVar2 = 0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = *(undefined4 *)(this + 4);
    uVar2 = *(undefined4 *)this;
  }
  return CONCAT44(uVar3,uVar2);
}
```
