# dispatch

`_ZN13DB_HackIPSave8dispatchEiiP6Stream`

`DB_HackIPSave::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_HackIPSave` | `0x08436dec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08436dec  _ZN13DB_HackIPSave8dispatchEiiP6Stream
#           DB_HackIPSave::dispatch(int, int, Stream*)
# range [0x08436dec, 0x08436ff7]
08436dec +0x000:  push   %ebp
08436ded +0x001:  mov    %esp,%ebp
08436def +0x003:  sub    $0x38,%esp
08436df2 +0x006:  mov    0x14(%ebp),%eax
08436df5 +0x009:  mov    %eax,(%esp)
08436df8 +0x00c:  call   08453456 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x606c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x606c
08436dfd +0x011:  mov    %eax,-0x10(%ebp)
08436e00 +0x014:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08436e05 +0x019:  movl   $0x0,0x8(%esp)
08436e0d +0x021:  movl   $0x6,0x4(%esp)
08436e15 +0x029:  mov    %eax,(%esp)
08436e18 +0x02c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08436e1d +0x031:  mov    %eax,-0xc(%ebp)
08436e20 +0x034:  mov    -0x10(%ebp),%ecx
08436e23 +0x037:  mov    -0x10(%ebp),%eax
08436e26 +0x03a:  mov    0x24(%eax),%edx
08436e29 +0x03d:  mov    -0x10(%ebp),%eax
08436e2c +0x040:  mov    0x20(%eax),%eax
08436e2f +0x043:  mov    %ecx,0x10(%esp)
08436e33 +0x047:  mov    %edx,0xc(%esp)
08436e37 +0x04b:  mov    %eax,0x8(%esp)
08436e3b +0x04f:  movl   $"upDate auto_punish_hack_ip set cnt = cnt+1 where occ_date = CAST(DATE_FORMAT(now(), '%%Y-%%m-%%d') AS CHAR) and hack_type = %d and hack_sub_type = %d and c_class_ip = '%s'",0x4(%esp)
08436e43 +0x057:  mov    -0xc(%ebp),%eax
08436e46 +0x05a:  mov    %eax,(%esp)
08436e49 +0x05d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08436e4e +0x062:  movl   $0x1,0x4(%esp)
08436e56 +0x06a:  mov    -0xc(%ebp),%eax
08436e59 +0x06d:  mov    %eax,(%esp)
08436e5c +0x070:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08436e61 +0x075:  xor    $0x1,%eax
08436e64 +0x078:  test   %al,%al
08436e66 +0x07a:  jne    08436e79 <+0x8d>
08436e68 +0x07c:  mov    -0xc(%ebp),%eax
08436e6b +0x07f:  mov    %eax,(%esp)
08436e6e +0x082:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08436e73 +0x087:  or     %edx,%eax
08436e75 +0x089:  test   %eax,%eax
08436e77 +0x08b:  jne    08436e80 <+0x94>
08436e79 +0x08d:  mov    $0x1,%eax
08436e7e +0x092:  jmp    08436e85 <+0x99>
08436e80 +0x094:  mov    $0x0,%eax
08436e85 +0x099:  test   %al,%al
08436e87 +0x09b:  je     08436f07 <+0x11b>
08436e89 +0x09d:  mov    -0x10(%ebp),%ecx
08436e8c +0x0a0:  mov    -0x10(%ebp),%eax
08436e8f +0x0a3:  mov    0x24(%eax),%edx
08436e92 +0x0a6:  mov    -0x10(%ebp),%eax
08436e95 +0x0a9:  mov    0x20(%eax),%eax
08436e98 +0x0ac:  mov    %ecx,0x10(%esp)
08436e9c +0x0b0:  mov    %edx,0xc(%esp)
08436ea0 +0x0b4:  mov    %eax,0x8(%esp)
08436ea4 +0x0b8:  movl   $"inSert into auto_punish_hack_ip (occ_date, hack_type, hack_sub_type, c_class_ip, cnt) values (now(), %d, %d, '%s', 1)",0x4(%esp)
08436eac +0x0c0:  mov    -0xc(%ebp),%eax
08436eaf +0x0c3:  mov    %eax,(%esp)
08436eb2 +0x0c6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08436eb7 +0x0cb:  movl   $0x1,0x4(%esp)
08436ebf +0x0d3:  mov    -0xc(%ebp),%eax
08436ec2 +0x0d6:  mov    %eax,(%esp)
08436ec5 +0x0d9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08436eca +0x0de:  xor    $0x1,%eax
08436ecd +0x0e1:  test   %al,%al
08436ecf +0x0e3:  je     08436f07 <+0x11b>
08436ed1 +0x0e5:  movl   $"DB_HackIPSave DB ERROR",0x10(%esp)
08436ed9 +0x0ed:  movl   $0x829d,0xc(%esp)
08436ee1 +0x0f5:  movl   $&_ZZN13DB_HackIPSave8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08436ee9 +0x0fd:  movl   $"DBThread.cpp",0x4(%esp)
08436ef1 +0x105:  movl   $0x1,(%esp)
08436ef8 +0x10c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08436efd +0x111:  mov    $0x0,%eax
08436f02 +0x116:  jmp    08436ff6 <+0x20a>
08436f07 +0x11b:  mov    -0x10(%ebp),%eax
08436f0a +0x11e:  lea    0xd(%eax),%ecx
08436f0d +0x121:  mov    -0x10(%ebp),%eax
08436f10 +0x124:  mov    0x24(%eax),%edx
08436f13 +0x127:  mov    -0x10(%ebp),%eax
08436f16 +0x12a:  mov    0x20(%eax),%eax
08436f19 +0x12d:  mov    %ecx,0x10(%esp)
08436f1d +0x131:  mov    %edx,0xc(%esp)
08436f21 +0x135:  mov    %eax,0x8(%esp)
08436f25 +0x139:  movl   $"upDate auto_punish_hack_full_ip set cnt = cnt+1 where occ_date = CAST(DATE_FORMAT(now(), '%%Y-%%m-%%d') AS CHAR) and hack_type = %d and hack_sub_type = %d and full_ip = '%s'",0x4(%esp)
08436f2d +0x141:  mov    -0xc(%ebp),%eax
08436f30 +0x144:  mov    %eax,(%esp)
08436f33 +0x147:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08436f38 +0x14c:  movl   $0x1,0x4(%esp)
08436f40 +0x154:  mov    -0xc(%ebp),%eax
08436f43 +0x157:  mov    %eax,(%esp)
08436f46 +0x15a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08436f4b +0x15f:  xor    $0x1,%eax
08436f4e +0x162:  test   %al,%al
08436f50 +0x164:  jne    08436f63 <+0x177>
08436f52 +0x166:  mov    -0xc(%ebp),%eax
08436f55 +0x169:  mov    %eax,(%esp)
08436f58 +0x16c:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08436f5d +0x171:  or     %edx,%eax
08436f5f +0x173:  test   %eax,%eax
08436f61 +0x175:  jne    08436f6a <+0x17e>
08436f63 +0x177:  mov    $0x1,%eax
08436f68 +0x17c:  jmp    08436f6f <+0x183>
08436f6a +0x17e:  mov    $0x0,%eax
08436f6f +0x183:  test   %al,%al
08436f71 +0x185:  je     08436ff1 <+0x205>
08436f73 +0x187:  mov    -0x10(%ebp),%eax
08436f76 +0x18a:  lea    0xd(%eax),%ecx
08436f79 +0x18d:  mov    -0x10(%ebp),%eax
08436f7c +0x190:  mov    0x24(%eax),%edx
08436f7f +0x193:  mov    -0x10(%ebp),%eax
08436f82 +0x196:  mov    0x20(%eax),%eax
08436f85 +0x199:  mov    %ecx,0x10(%esp)
08436f89 +0x19d:  mov    %edx,0xc(%esp)
08436f8d +0x1a1:  mov    %eax,0x8(%esp)
08436f91 +0x1a5:  movl   $"inSert into auto_punish_hack_full_ip (occ_date, hack_type, hack_sub_type, full_ip, cnt) values (now(), %d, %d, '%s', 1)",0x4(%esp)
08436f99 +0x1ad:  mov    -0xc(%ebp),%eax
08436f9c +0x1b0:  mov    %eax,(%esp)
08436f9f +0x1b3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08436fa4 +0x1b8:  movl   $0x1,0x4(%esp)
08436fac +0x1c0:  mov    -0xc(%ebp),%eax
08436faf +0x1c3:  mov    %eax,(%esp)
08436fb2 +0x1c6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08436fb7 +0x1cb:  xor    $0x1,%eax
08436fba +0x1ce:  test   %al,%al
08436fbc +0x1d0:  je     08436ff1 <+0x205>
08436fbe +0x1d2:  movl   $"DB_HackIPSave FullIP DB ERROR",0x10(%esp)
08436fc6 +0x1da:  movl   $0x82af,0xc(%esp)
08436fce +0x1e2:  movl   $&_ZZN13DB_HackIPSave8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08436fd6 +0x1ea:  movl   $"DBThread.cpp",0x4(%esp)
08436fde +0x1f2:  movl   $0x1,(%esp)
08436fe5 +0x1f9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08436fea +0x1fe:  mov    $0x0,%eax
08436fef +0x203:  jmp    08436ff6 <+0x20a>
08436ff1 +0x205:  mov    $0x1,%eax
08436ff6 +0x20a:  leave
08436ff7 +0x20b:  ret
```

## 反编译 C

```c
// DB_HackIPSave::dispatch @ 0x8436dec

/* DB_HackIPSave::dispatch(int, int, Stream*) */

undefined4 DB_HackIPSave::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  SIG_HACK_IP_SAVE *pSVar3;
  MySQL *this;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  pSVar3 = Stream::GetOutBuffer<SIG_HACK_IP_SAVE>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(this,
                   "upDate auto_punish_hack_ip set cnt = cnt+1 where occ_date = CAST(DATE_FORMAT(now(), \'%%Y-%%m-%%d\') AS CHAR) and hack_type = %d and hack_sub_type = %d and c_class_ip = \'%s\'"
                   ,*(undefined4 *)(pSVar3 + 0x20),*(undefined4 *)(pSVar3 + 0x24),pSVar3);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,
                     "inSert into auto_punish_hack_ip (occ_date, hack_type, hack_sub_type, c_class_ip, cnt) values (now(), %d, %d, \'%s\', 1)"
                     ,*(undefined4 *)(pSVar3 + 0x20),*(undefined4 *)(pSVar3 + 0x24),pSVar3);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_HackIPSave::dispatch(int, int, Stream*)",0x829d,
                 "DB_HackIPSave DB ERROR");
      return 0;
    }
  }
  MySQL::set_query(this,
                   "upDate auto_punish_hack_full_ip set cnt = cnt+1 where occ_date = CAST(DATE_FORMAT(now(), \'%%Y-%%m-%%d\') AS CHAR) and hack_type = %d and hack_sub_type = %d and full_ip = \'%s\'"
                   ,*(undefined4 *)(pSVar3 + 0x20),*(undefined4 *)(pSVar3 + 0x24),pSVar3 + 0xd);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,
                     "inSert into auto_punish_hack_full_ip (occ_date, hack_type, hack_sub_type, full_ip, cnt) values (now(), %d, %d, \'%s\', 1)"
                     ,*(undefined4 *)(pSVar3 + 0x20),*(undefined4 *)(pSVar3 + 0x24),pSVar3 + 0xd);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_HackIPSave::dispatch(int, int, Stream*)",0x82af,
                 "DB_HackIPSave FullIP DB ERROR");
      return 0;
    }
  }
  return 1;
}
```
