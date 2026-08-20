# dispatch

`_ZN22DB_SaveCharacterOption8dispatchEiiP6Stream`

`DB_SaveCharacterOption::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCharacterOption` | `0x08430144` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08430144  _ZN22DB_SaveCharacterOption8dispatchEiiP6Stream
#           DB_SaveCharacterOption::dispatch(int, int, Stream*)
# range [0x08430144, 0x0843024f]
08430144 +0x000:  push   %ebp
08430145 +0x001:  mov    %esp,%ebp
08430147 +0x003:  sub    $0x28,%esp
0843014a +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843014f +0x00b:  movl   $0x0,0x8(%esp)
08430157 +0x013:  movl   $0x2,0x4(%esp)
0843015f +0x01b:  mov    %eax,(%esp)
08430162 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08430167 +0x023:  mov    %eax,-0x18(%ebp)
0843016a +0x026:  mov    0x14(%ebp),%eax
0843016d +0x029:  mov    %eax,(%esp)
08430170 +0x02c:  call   08452c6a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5880>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5880
08430175 +0x031:  mov    %eax,-0x14(%ebp)
08430178 +0x034:  movl   $0x200,-0x10(%ebp)
0843017f +0x03b:  mov    -0x10(%ebp),%eax
08430182 +0x03e:  mov    -0x14(%ebp),%edx
08430185 +0x041:  add    $0x4,%edx
08430188 +0x044:  mov    %eax,0xc(%esp)
0843018c +0x048:  mov    %edx,0x8(%esp)
08430190 +0x04c:  movl   $0x0,0x4(%esp)
08430198 +0x054:  mov    -0x18(%ebp),%eax
0843019b +0x057:  mov    %eax,(%esp)
0843019e +0x05a:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084301a3 +0x05f:  mov    %eax,-0xc(%ebp)
084301a6 +0x062:  mov    -0x14(%ebp),%eax
084301a9 +0x065:  mov    (%eax),%eax
084301ab +0x067:  mov    %eax,0xc(%esp)
084301af +0x06b:  mov    -0xc(%ebp),%eax
084301b2 +0x06e:  mov    %eax,0x8(%esp)
084301b6 +0x072:  movl   $"upDate charac_option set options = '%s' where charac_no= %u",0x4(%esp)
084301be +0x07a:  mov    -0x18(%ebp),%eax
084301c1 +0x07d:  mov    %eax,(%esp)
084301c4 +0x080:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084301c9 +0x085:  movl   $0x1,0x4(%esp)
084301d1 +0x08d:  mov    -0x18(%ebp),%eax
084301d4 +0x090:  mov    %eax,(%esp)
084301d7 +0x093:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084301dc +0x098:  xor    $0x1,%eax
084301df +0x09b:  test   %al,%al
084301e1 +0x09d:  jne    084301f4 <+0xb0>
084301e3 +0x09f:  mov    -0x18(%ebp),%eax
084301e6 +0x0a2:  mov    %eax,(%esp)
084301e9 +0x0a5:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084301ee +0x0aa:  or     %edx,%eax
084301f0 +0x0ac:  test   %eax,%eax
084301f2 +0x0ae:  jne    084301fb <+0xb7>
084301f4 +0x0b0:  mov    $0x1,%eax
084301f9 +0x0b5:  jmp    08430200 <+0xbc>
084301fb +0x0b7:  mov    $0x0,%eax
08430200 +0x0bc:  test   %al,%al
08430202 +0x0be:  je     08430248 <+0x104>
08430204 +0x0c0:  mov    -0x14(%ebp),%eax
08430207 +0x0c3:  mov    (%eax),%eax
08430209 +0x0c5:  mov    -0xc(%ebp),%edx
0843020c +0x0c8:  mov    %edx,0xc(%esp)
08430210 +0x0cc:  mov    %eax,0x8(%esp)
08430214 +0x0d0:  movl   $"inSert into charac_option(charac_no, options) values(%u,'%s')",0x4(%esp)
0843021c +0x0d8:  mov    -0x18(%ebp),%eax
0843021f +0x0db:  mov    %eax,(%esp)
08430222 +0x0de:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08430227 +0x0e3:  movl   $0x1,0x4(%esp)
0843022f +0x0eb:  mov    -0x18(%ebp),%eax
08430232 +0x0ee:  mov    %eax,(%esp)
08430235 +0x0f1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843023a +0x0f6:  xor    $0x1,%eax
0843023d +0x0f9:  test   %al,%al
0843023f +0x0fb:  je     08430248 <+0x104>
08430241 +0x0fd:  mov    $0x0,%eax
08430246 +0x102:  jmp    0843024d <+0x109>
08430248 +0x104:  mov    $0x1,%eax
0843024d +0x109:  leave
0843024e +0x10a:  ret
0843024f +0x10b:  nop
```

## 反编译 C

```c
// DB_SaveCharacterOption::dispatch @ 0x8430144

/* DB_SaveCharacterOption::dispatch(int, int, Stream*) */

undefined4 DB_SaveCharacterOption::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_CHARACTER_OPTION *pSVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar3 = Stream::GetOutBuffer<SIG_CHARACTER_OPTION>(in_stack_00000010);
  uVar4 = MySQL::blob_to_str(this,0,pSVar3 + 4,0x200);
  MySQL::set_query(this,"upDate charac_option set options = \'%s\' where charac_no= %u",uVar4,
                   *(undefined4 *)pSVar3);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(this), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,"inSert into charac_option(charac_no, options) values(%u,\'%s\')",
                     *(undefined4 *)pSVar3,uVar4);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
