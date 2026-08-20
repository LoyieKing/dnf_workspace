# dispatch

`_ZN24DB_UpdateBoosterGageData8dispatchEiiP6Stream`

`DB_UpdateBoosterGageData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBoosterGageData` | `0x08446eec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08446eec  _ZN24DB_UpdateBoosterGageData8dispatchEiiP6Stream
#           DB_UpdateBoosterGageData::dispatch(int, int, Stream*)
# range [0x08446eec, 0x08446fcb]
08446eec +0x00:  push   %ebp
08446eed +0x01:  mov    %esp,%ebp
08446eef +0x03:  sub    $0x28,%esp
08446ef2 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08446ef7 +0x0b:  movl   $0x0,0x8(%esp)
08446eff +0x13:  movl   $0x2,0x4(%esp)
08446f07 +0x1b:  mov    %eax,(%esp)
08446f0a +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08446f0f +0x23:  mov    %eax,-0x10(%ebp)
08446f12 +0x26:  mov    0x14(%ebp),%eax
08446f15 +0x29:  mov    %eax,(%esp)
08446f18 +0x2c:  call   08454418 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x702e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x702e
08446f1d +0x31:  mov    %eax,-0xc(%ebp)
08446f20 +0x34:  mov    -0xc(%ebp),%eax
08446f23 +0x37:  mov    (%eax),%edx
08446f25 +0x39:  mov    -0xc(%ebp),%eax
08446f28 +0x3c:  mov    0x4(%eax),%eax
08446f2b +0x3f:  mov    %edx,0xc(%esp)
08446f2f +0x43:  mov    %eax,0x8(%esp)
08446f33 +0x47:  movl   $"upDate member_booster_gage set gage=%u where m_id=%u",0x4(%esp)
08446f3b +0x4f:  mov    -0x10(%ebp),%eax
08446f3e +0x52:  mov    %eax,(%esp)
08446f41 +0x55:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08446f46 +0x5a:  movl   $0x1,0x4(%esp)
08446f4e +0x62:  mov    -0x10(%ebp),%eax
08446f51 +0x65:  mov    %eax,(%esp)
08446f54 +0x68:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08446f59 +0x6d:  xor    $0x1,%eax
08446f5c +0x70:  test   %al,%al
08446f5e +0x72:  je     08446f67 <+0x7b>
08446f60 +0x74:  mov    $0x0,%eax
08446f65 +0x79:  jmp    08446fc9 <+0xdd>
08446f67 +0x7b:  mov    -0x10(%ebp),%eax
08446f6a +0x7e:  mov    %eax,(%esp)
08446f6d +0x81:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08446f72 +0x86:  or     %edx,%eax
08446f74 +0x88:  test   %eax,%eax
08446f76 +0x8a:  sete   %al
08446f79 +0x8d:  test   %al,%al
08446f7b +0x8f:  je     08446fc4 <+0xd8>
08446f7d +0x91:  mov    -0xc(%ebp),%eax
08446f80 +0x94:  mov    0x4(%eax),%edx
08446f83 +0x97:  mov    -0xc(%ebp),%eax
08446f86 +0x9a:  mov    (%eax),%eax
08446f88 +0x9c:  mov    %edx,0xc(%esp)
08446f8c +0xa0:  mov    %eax,0x8(%esp)
08446f90 +0xa4:  movl   $"inSert into member_booster_gage(m_id, gage) values(%u, %u)",0x4(%esp)
08446f98 +0xac:  mov    -0x10(%ebp),%eax
08446f9b +0xaf:  mov    %eax,(%esp)
08446f9e +0xb2:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08446fa3 +0xb7:  movl   $0x1,0x4(%esp)
08446fab +0xbf:  mov    -0x10(%ebp),%eax
08446fae +0xc2:  mov    %eax,(%esp)
08446fb1 +0xc5:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08446fb6 +0xca:  xor    $0x1,%eax
08446fb9 +0xcd:  test   %al,%al
08446fbb +0xcf:  je     08446fc4 <+0xd8>
08446fbd +0xd1:  mov    $0x0,%eax
08446fc2 +0xd6:  jmp    08446fc9 <+0xdd>
08446fc4 +0xd8:  mov    $0x1,%eax
08446fc9 +0xdd:  leave
08446fca +0xde:  ret
08446fcb +0xdf:  nop
```

## 反编译 C

```c
// DB_UpdateBoosterGageData::dispatch @ 0x8446eec

/* DB_UpdateBoosterGageData::dispatch(int, int, Stream*) */

undefined4 DB_UpdateBoosterGageData::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_BOOSTER_GAGE_DATA *pSVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_BOOSTER_GAGE_DATA>(in_stack_00000010);
  MySQL::set_query(this,"upDate member_booster_gage set gage=%u where m_id=%u",
                   *(undefined4 *)(pSVar2 + 4),*(undefined4 *)pSVar2);
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      MySQL::set_query(this,"inSert into member_booster_gage(m_id, gage) values(%u, %u)",
                       *(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
