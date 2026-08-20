# dispatch

`_ZN17DB_WriteGeoReject8dispatchEiiP6Stream`

`DB_WriteGeoReject::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_WriteGeoReject` | `0x0844bb70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844bb70  _ZN17DB_WriteGeoReject8dispatchEiiP6Stream
#           DB_WriteGeoReject::dispatch(int, int, Stream*)
# range [0x0844bb70, 0x0844bc37]
0844bb70 +0x00:  push   %ebp
0844bb71 +0x01:  mov    %esp,%ebp
0844bb73 +0x03:  sub    $0x28,%esp
0844bb76 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844bb7b +0x0b:  movl   $0x0,0x8(%esp)
0844bb83 +0x13:  movl   $0x1,0x4(%esp)
0844bb8b +0x1b:  mov    %eax,(%esp)
0844bb8e +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844bb93 +0x23:  mov    %eax,-0x10(%ebp)
0844bb96 +0x26:  mov    0x14(%ebp),%eax
0844bb99 +0x29:  mov    %eax,(%esp)
0844bb9c +0x2c:  call   0845480c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7422>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x7422
0844bba1 +0x31:  mov    %eax,-0xc(%ebp)
0844bba4 +0x34:  mov    -0xc(%ebp),%eax
0844bba7 +0x37:  mov    %eax,0x8(%esp)
0844bbab +0x3b:  movl   $"upDate geo_reject set rej_ip_count = rej_ip_count + 1, rej_src = 'g' where rej_ip = '%s'",0x4(%esp)
0844bbb3 +0x43:  mov    -0x10(%ebp),%eax
0844bbb6 +0x46:  mov    %eax,(%esp)
0844bbb9 +0x49:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844bbbe +0x4e:  movl   $0x1,0x4(%esp)
0844bbc6 +0x56:  mov    -0x10(%ebp),%eax
0844bbc9 +0x59:  mov    %eax,(%esp)
0844bbcc +0x5c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844bbd1 +0x61:  xor    $0x1,%eax
0844bbd4 +0x64:  test   %al,%al
0844bbd6 +0x66:  jne    0844bbe9 <+0x79>
0844bbd8 +0x68:  mov    -0x10(%ebp),%eax
0844bbdb +0x6b:  mov    %eax,(%esp)
0844bbde +0x6e:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0844bbe3 +0x73:  or     %edx,%eax
0844bbe5 +0x75:  test   %eax,%eax
0844bbe7 +0x77:  jne    0844bbf0 <+0x80>
0844bbe9 +0x79:  mov    $0x1,%eax
0844bbee +0x7e:  jmp    0844bbf5 <+0x85>
0844bbf0 +0x80:  mov    $0x0,%eax
0844bbf5 +0x85:  test   %al,%al
0844bbf7 +0x87:  je     0844bc30 <+0xc0>
0844bbf9 +0x89:  mov    -0xc(%ebp),%eax
0844bbfc +0x8c:  lea    0x10(%eax),%edx
0844bbff +0x8f:  mov    -0xc(%ebp),%eax
0844bc02 +0x92:  mov    %edx,0xc(%esp)
0844bc06 +0x96:  mov    %eax,0x8(%esp)
0844bc0a +0x9a:  movl   $"inSert into geo_reject(rej_ip, rej_c_code, rej_ip_count, rej_src) values('%s', '%s', 1, 'g')",0x4(%esp)
0844bc12 +0xa2:  mov    -0x10(%ebp),%eax
0844bc15 +0xa5:  mov    %eax,(%esp)
0844bc18 +0xa8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844bc1d +0xad:  movl   $0x1,0x4(%esp)
0844bc25 +0xb5:  mov    -0x10(%ebp),%eax
0844bc28 +0xb8:  mov    %eax,(%esp)
0844bc2b +0xbb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844bc30 +0xc0:  mov    $0x1,%eax
0844bc35 +0xc5:  leave
0844bc36 +0xc6:  ret
0844bc37 +0xc7:  nop
```

## 反编译 C

```c
// DB_WriteGeoReject::dispatch @ 0x844bb70

/* DB_WriteGeoReject::dispatch(int, int, Stream*) */

undefined4 DB_WriteGeoReject::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_SAVE_GEO_REJECT *pSVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_GEO_REJECT>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate geo_reject set rej_ip_count = rej_ip_count + 1, rej_src = \'g\' where rej_ip = \'%s\'"
                   ,pSVar3);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 != 0) {
      bVar1 = false;
      goto LAB_0844bbf5;
    }
  }
  bVar1 = true;
LAB_0844bbf5:
  if (bVar1) {
    MySQL::set_query(this,
                     "inSert into geo_reject(rej_ip, rej_c_code, rej_ip_count, rej_src) values(\'%s\', \'%s\', 1, \'g\')"
                     ,pSVar3,pSVar3 + 0x10);
    MySQL::exec(this,true);
  }
  return 1;
}
```
