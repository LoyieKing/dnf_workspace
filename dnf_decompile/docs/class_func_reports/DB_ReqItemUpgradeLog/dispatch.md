# dispatch

`_ZN20DB_ReqItemUpgradeLog8dispatchEiiP6Stream`

`DB_ReqItemUpgradeLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReqItemUpgradeLog` | `0x08425dbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08425dbe  _ZN20DB_ReqItemUpgradeLog8dispatchEiiP6Stream
#           DB_ReqItemUpgradeLog::dispatch(int, int, Stream*)
# range [0x08425dbe, 0x08425ecd]
08425dbe +0x000:  push   %ebp
08425dbf +0x001:  mov    %esp,%ebp
08425dc1 +0x003:  push   %esi
08425dc2 +0x004:  push   %ebx
08425dc3 +0x005:  sub    $0x60,%esp
08425dc6 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08425dcb +0x00d:  movl   $0x0,0x8(%esp)
08425dd3 +0x015:  movl   $0x4,0x4(%esp)
08425ddb +0x01d:  mov    %eax,(%esp)
08425dde +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08425de3 +0x025:  mov    %eax,-0xc(%ebp)
08425de6 +0x028:  movl   $0x0,-0x10(%ebp)
08425ded +0x02f:  movl   $0x0,-0x14(%ebp)
08425df4 +0x036:  movl   $0x0,-0x18(%ebp)
08425dfb +0x03d:  movl   $0x0,-0x1c(%ebp)
08425e02 +0x044:  movb   $0x1,-0x3a(%ebp)
08425e06 +0x048:  lea    -0x10(%ebp),%eax
08425e09 +0x04b:  mov    %eax,0x4(%esp)
08425e0d +0x04f:  mov    0x14(%ebp),%eax
08425e10 +0x052:  mov    %eax,(%esp)
08425e13 +0x055:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08425e18 +0x05a:  lea    -0x14(%ebp),%eax
08425e1b +0x05d:  mov    %eax,0x4(%esp)
08425e1f +0x061:  mov    0x14(%ebp),%eax
08425e22 +0x064:  mov    %eax,(%esp)
08425e25 +0x067:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08425e2a +0x06c:  lea    -0x18(%ebp),%eax
08425e2d +0x06f:  mov    %eax,0x4(%esp)
08425e31 +0x073:  mov    0x14(%ebp),%eax
08425e34 +0x076:  mov    %eax,(%esp)
08425e37 +0x079:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08425e3c +0x07e:  lea    -0x1c(%ebp),%eax
08425e3f +0x081:  mov    %eax,0x4(%esp)
08425e43 +0x085:  mov    0x14(%ebp),%eax
08425e46 +0x088:  mov    %eax,(%esp)
08425e49 +0x08b:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08425e4e +0x090:  lea    -0x3a(%ebp),%eax
08425e51 +0x093:  mov    %eax,0x4(%esp)
08425e55 +0x097:  mov    0x14(%ebp),%eax
08425e58 +0x09a:  mov    %eax,(%esp)
08425e5b +0x09d:  call   0861c47c <_ZN6StreamrsERb>  ; Stream::operator>>(bool&)
08425e60 +0x0a2:  lea    -0x39(%ebp),%eax
08425e63 +0x0a5:  mov    %eax,0x4(%esp)
08425e67 +0x0a9:  mov    0x14(%ebp),%eax
08425e6a +0x0ac:  mov    %eax,(%esp)
08425e6d +0x0af:  call   0861c6a8 <_ZN6StreamrsEPc>  ; Stream::operator>>(char*)
08425e72 +0x0b4:  movzbl -0x3a(%ebp),%eax
08425e76 +0x0b8:  movzbl %al,%esi
08425e79 +0x0bb:  mov    -0x1c(%ebp),%ebx
08425e7c +0x0be:  mov    -0x18(%ebp),%ecx
08425e7f +0x0c1:  mov    -0x10(%ebp),%edx
08425e82 +0x0c4:  mov    -0x14(%ebp),%eax
08425e85 +0x0c7:  mov    %esi,0x1c(%esp)
08425e89 +0x0cb:  mov    %ebx,0x18(%esp)
08425e8d +0x0cf:  lea    -0x39(%ebp),%ebx
08425e90 +0x0d2:  mov    %ebx,0x14(%esp)
08425e94 +0x0d6:  mov    %ecx,0x10(%esp)
08425e98 +0x0da:  mov    %edx,0xc(%esp)
08425e9c +0x0de:  mov    %eax,0x8(%esp)
08425ea0 +0x0e2:  movl   $"inSert into log_item_develop(occ_time,it_no,server_id,charac_no,charac_name,develop,sucess_flag) values(now(),%d,%d,%d,'%s',%d,%d)",0x4(%esp)
08425ea8 +0x0ea:  mov    -0xc(%ebp),%eax
08425eab +0x0ed:  mov    %eax,(%esp)
08425eae +0x0f0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08425eb3 +0x0f5:  movl   $0x1,0x4(%esp)
08425ebb +0x0fd:  mov    -0xc(%ebp),%eax
08425ebe +0x100:  mov    %eax,(%esp)
08425ec1 +0x103:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08425ec6 +0x108:  add    $0x60,%esp
08425ec9 +0x10b:  pop    %ebx
08425eca +0x10c:  pop    %esi
08425ecb +0x10d:  pop    %ebp
08425ecc +0x10e:  ret
08425ecd +0x10f:  nop
```

## 反编译 C

```c
// DB_ReqItemUpgradeLog::dispatch @ 0x8425dbe

/* DB_ReqItemUpgradeLog::dispatch(int, int, Stream*) */

void DB_ReqItemUpgradeLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *in_stack_00000010;
  bool local_3e;
  char local_3d [29];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_3e = true;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_20);
  Stream::operator>>(in_stack_00000010,&local_3e);
  Stream::operator>>(in_stack_00000010,local_3d);
  MySQL::set_query(local_10,
                   "inSert into log_item_develop(occ_time,it_no,server_id,charac_no,charac_name,develop,sucess_flag) values(now(),%d,%d,%d,\'%s\',%d,%d)"
                   ,local_18,local_14,local_1c,local_3d,local_20,(uint)local_3e);
  MySQL::exec(local_10,true);
  return;
}
```
