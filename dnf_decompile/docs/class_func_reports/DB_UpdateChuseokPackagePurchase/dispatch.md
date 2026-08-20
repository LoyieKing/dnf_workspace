# dispatch

`_ZN31DB_UpdateChuseokPackagePurchase8dispatchEiiP6Stream`

`DB_UpdateChuseokPackagePurchase::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateChuseokPackagePurchase` | `0x0843c7bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843c7bc  _ZN31DB_UpdateChuseokPackagePurchase8dispatchEiiP6Stream
#           DB_UpdateChuseokPackagePurchase::dispatch(int, int, Stream*)
# range [0x0843c7bc, 0x0843c8b5]
0843c7bc +0x00:  push   %ebp
0843c7bd +0x01:  mov    %esp,%ebp
0843c7bf +0x03:  sub    $0x28,%esp
0843c7c2 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843c7c7 +0x0b:  movl   $0x0,0x8(%esp)
0843c7cf +0x13:  movl   $0x9,0x4(%esp)
0843c7d7 +0x1b:  mov    %eax,(%esp)
0843c7da +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843c7df +0x23:  mov    %eax,-0xc(%ebp)
0843c7e2 +0x26:  movl   $0x0,-0x10(%ebp)
0843c7e9 +0x2d:  lea    -0x10(%ebp),%eax
0843c7ec +0x30:  mov    %eax,0x4(%esp)
0843c7f0 +0x34:  mov    0x14(%ebp),%eax
0843c7f3 +0x37:  mov    %eax,(%esp)
0843c7f6 +0x3a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843c7fb +0x3f:  mov    -0x10(%ebp),%eax
0843c7fe +0x42:  movl   $0x0,0x4(%esp)
0843c806 +0x4a:  mov    %eax,(%esp)
0843c809 +0x4d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843c80e +0x52:  mov    %eax,0x8(%esp)
0843c812 +0x56:  movl   $"upDate event_1009_package_count set purchase_cnt = purchase_cnt+1 where m_id=%s",0x4(%esp)
0843c81a +0x5e:  mov    -0xc(%ebp),%eax
0843c81d +0x61:  mov    %eax,(%esp)
0843c820 +0x64:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843c825 +0x69:  movl   $0x1,0x4(%esp)
0843c82d +0x71:  mov    -0xc(%ebp),%eax
0843c830 +0x74:  mov    %eax,(%esp)
0843c833 +0x77:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843c838 +0x7c:  xor    $0x1,%eax
0843c83b +0x7f:  test   %al,%al
0843c83d +0x81:  je     0843c846 <+0x8a>
0843c83f +0x83:  mov    $0x0,%eax
0843c844 +0x88:  jmp    0843c8b4 <+0xf8>
0843c846 +0x8a:  mov    -0xc(%ebp),%eax
0843c849 +0x8d:  mov    %eax,(%esp)
0843c84c +0x90:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843c851 +0x95:  or     %edx,%eax
0843c853 +0x97:  test   %eax,%eax
0843c855 +0x99:  sete   %al
0843c858 +0x9c:  test   %al,%al
0843c85a +0x9e:  je     0843c8af <+0xf3>
0843c85c +0xa0:  mov    -0x10(%ebp),%eax
0843c85f +0xa3:  movl   $0x0,0x4(%esp)
0843c867 +0xab:  mov    %eax,(%esp)
0843c86a +0xae:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843c86f +0xb3:  movl   $0x1,0xc(%esp)
0843c877 +0xbb:  mov    %eax,0x8(%esp)
0843c87b +0xbf:  movl   $"inSert into event_1009_package_count(m_id, purchase_cnt) values(%s, %u)",0x4(%esp)
0843c883 +0xc7:  mov    -0xc(%ebp),%eax
0843c886 +0xca:  mov    %eax,(%esp)
0843c889 +0xcd:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843c88e +0xd2:  movl   $0x1,0x4(%esp)
0843c896 +0xda:  mov    -0xc(%ebp),%eax
0843c899 +0xdd:  mov    %eax,(%esp)
0843c89c +0xe0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843c8a1 +0xe5:  xor    $0x1,%eax
0843c8a4 +0xe8:  test   %al,%al
0843c8a6 +0xea:  je     0843c8af <+0xf3>
0843c8a8 +0xec:  mov    $0x0,%eax
0843c8ad +0xf1:  jmp    0843c8b4 <+0xf8>
0843c8af +0xf3:  mov    $0x1,%eax
0843c8b4 +0xf8:  leave
0843c8b5 +0xf9:  ret
```

## 反编译 C

```c
// DB_UpdateChuseokPackagePurchase::dispatch @ 0x843c7bc

/* DB_UpdateChuseokPackagePurchase::dispatch(int, int, Stream*) */

undefined4 DB_UpdateChuseokPackagePurchase::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "upDate event_1009_package_count set purchase_cnt = purchase_cnt+1 where m_id=%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(local_10);
    if (lVar3 == 0) {
      uVar2 = NumberToString(local_14,0);
      MySQL::set_query(local_10,
                       "inSert into event_1009_package_count(m_id, purchase_cnt) values(%s, %u)",
                       uVar2,1);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
