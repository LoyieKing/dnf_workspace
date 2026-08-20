# dispatch

`_ZN19DB_SavePrivateStore8dispatchEiiP6Stream`

`DB_SavePrivateStore::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SavePrivateStore` | `0x0841bf02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841bf02  _ZN19DB_SavePrivateStore8dispatchEiiP6Stream
#           DB_SavePrivateStore::dispatch(int, int, Stream*)
# range [0x0841bf02, 0x0841c08b]
0841bf02 +0x000:  push   %ebp
0841bf03 +0x001:  mov    %esp,%ebp
0841bf05 +0x003:  push   %esi
0841bf06 +0x004:  push   %ebx
0841bf07 +0x005:  sub    $0x40,%esp
0841bf0a +0x008:  mov    0x14(%ebp),%eax
0841bf0d +0x00b:  mov    %eax,(%esp)
0841bf10 +0x00e:  call   08451348 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3f5e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3f5e
0841bf15 +0x013:  mov    %eax,-0x10(%ebp)
0841bf18 +0x016:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841bf1d +0x01b:  movl   $0x0,0x8(%esp)
0841bf25 +0x023:  movl   $0x3,0x4(%esp)
0841bf2d +0x02b:  mov    %eax,(%esp)
0841bf30 +0x02e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841bf35 +0x033:  mov    %eax,-0xc(%ebp)
0841bf38 +0x036:  mov    -0x10(%ebp),%eax
0841bf3b +0x039:  mov    (%eax),%esi
0841bf3d +0x03b:  mov    -0x10(%ebp),%eax
0841bf40 +0x03e:  mov    0x430(%eax),%eax
0841bf46 +0x044:  mov    %eax,%ebx
0841bf48 +0x046:  mov    -0x10(%ebp),%eax
0841bf4b +0x049:  add    $0x8,%eax
0841bf4e +0x04c:  movl   $0x428,0xc(%esp)
0841bf56 +0x054:  mov    %eax,0x8(%esp)
0841bf5a +0x058:  movl   $0x0,0x4(%esp)
0841bf62 +0x060:  mov    -0xc(%ebp),%eax
0841bf65 +0x063:  mov    %eax,(%esp)
0841bf68 +0x066:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0841bf6d +0x06b:  mov    %esi,0x10(%esp)
0841bf71 +0x06f:  mov    %ebx,0xc(%esp)
0841bf75 +0x073:  mov    %eax,0x8(%esp)
0841bf79 +0x077:  movl   $"upDate store set store = '%s', use_doll = '%d' where charac_no =%d",0x4(%esp)
0841bf81 +0x07f:  mov    -0xc(%ebp),%eax
0841bf84 +0x082:  mov    %eax,(%esp)
0841bf87 +0x085:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841bf8c +0x08a:  movl   $0x1,0x4(%esp)
0841bf94 +0x092:  mov    -0xc(%ebp),%eax
0841bf97 +0x095:  mov    %eax,(%esp)
0841bf9a +0x098:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841bf9f +0x09d:  xor    $0x1,%eax
0841bfa2 +0x0a0:  test   %al,%al
0841bfa4 +0x0a2:  jne    0841bfb7 <+0xb5>
0841bfa6 +0x0a4:  mov    -0xc(%ebp),%eax
0841bfa9 +0x0a7:  mov    %eax,(%esp)
0841bfac +0x0aa:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0841bfb1 +0x0af:  or     %edx,%eax
0841bfb3 +0x0b1:  test   %eax,%eax
0841bfb5 +0x0b3:  jne    0841bfbe <+0xbc>
0841bfb7 +0x0b5:  mov    $0x1,%eax
0841bfbc +0x0ba:  jmp    0841bfc3 <+0xc1>
0841bfbe +0x0bc:  mov    $0x0,%eax
0841bfc3 +0x0c1:  test   %al,%al
0841bfc5 +0x0c3:  je     0841c07f <+0x17d>
0841bfcb +0x0c9:  mov    -0x10(%ebp),%eax
0841bfce +0x0cc:  mov    0x430(%eax),%eax
0841bfd4 +0x0d2:  mov    %eax,%ebx
0841bfd6 +0x0d4:  mov    -0x10(%ebp),%eax
0841bfd9 +0x0d7:  add    $0x8,%eax
0841bfdc +0x0da:  movl   $0x428,0xc(%esp)
0841bfe4 +0x0e2:  mov    %eax,0x8(%esp)
0841bfe8 +0x0e6:  movl   $0x0,0x4(%esp)
0841bff0 +0x0ee:  mov    -0xc(%ebp),%eax
0841bff3 +0x0f1:  mov    %eax,(%esp)
0841bff6 +0x0f4:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0841bffb +0x0f9:  mov    -0x10(%ebp),%edx
0841bffe +0x0fc:  mov    (%edx),%edx
0841c000 +0x0fe:  mov    %ebx,0x10(%esp)
0841c004 +0x102:  mov    %eax,0xc(%esp)
0841c008 +0x106:  mov    %edx,0x8(%esp)
0841c00c +0x10a:  movl   $"inSert into store(charac_no, store, use_doll) values(%d, '%s', '%d')",0x4(%esp)
0841c014 +0x112:  mov    -0xc(%ebp),%eax
0841c017 +0x115:  mov    %eax,(%esp)
0841c01a +0x118:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841c01f +0x11d:  movl   $0x1,0x4(%esp)
0841c027 +0x125:  mov    -0xc(%ebp),%eax
0841c02a +0x128:  mov    %eax,(%esp)
0841c02d +0x12b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841c032 +0x130:  xor    $0x1,%eax
0841c035 +0x133:  test   %al,%al
0841c037 +0x135:  je     0841c07f <+0x17d>
0841c039 +0x137:  mov    -0x10(%ebp),%eax
0841c03c +0x13a:  mov    (%eax),%ebx
0841c03e +0x13c:  movl   $0x5,0xc(%esp)
0841c046 +0x144:  movl   $0x4f6d,0x8(%esp)
0841c04e +0x14c:  movl   $&_ZZN19DB_SavePrivateStore8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841c056 +0x154:  lea    -0x20(%ebp),%eax
0841c059 +0x157:  mov    %eax,(%esp)
0841c05c +0x15a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841c061 +0x15f:  mov    %ebx,0x8(%esp)
0841c065 +0x163:  movl   $"inSert store failed at %d",0x4(%esp)
0841c06d +0x16b:  lea    -0x20(%ebp),%eax
0841c070 +0x16e:  mov    %eax,(%esp)
0841c073 +0x171:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841c078 +0x176:  mov    $0x0,%eax
0841c07d +0x17b:  jmp    0841c084 <+0x182>
0841c07f +0x17d:  mov    $0x1,%eax
0841c084 +0x182:  add    $0x40,%esp
0841c087 +0x185:  pop    %ebx
0841c088 +0x186:  pop    %esi
0841c089 +0x187:  pop    %ebp
0841c08a +0x188:  ret
0841c08b +0x189:  nop
```

## 反编译 C

```c
// DB_SavePrivateStore::dispatch @ 0x841bf02

/* DB_SavePrivateStore::dispatch(int, int, Stream*) */

undefined4 DB_SavePrivateStore::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  cMyTrace local_24 [16];
  SIG_PRIVATE_STORE *local_14;
  MySQL *local_10;
  
  local_14 = Stream::GetOutBuffer<private_store::SIG_PRIVATE_STORE>(in_stack_00000010);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar1 = *(undefined4 *)local_14;
  uVar5 = *(undefined4 *)(local_14 + 0x430);
  uVar4 = MySQL::blob_to_str(local_10,0,local_14 + 8,0x428);
  MySQL::set_query(local_10,"upDate store set store = \'%s\', use_doll = \'%d\' where charac_no =%d"
                   ,uVar4,uVar5,uVar1);
  cVar3 = MySQL::exec(local_10,true);
  if ((cVar3 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_10), lVar6 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    uVar1 = *(undefined4 *)(local_14 + 0x430);
    uVar5 = MySQL::blob_to_str(local_10,0,local_14 + 8,0x428);
    MySQL::set_query(local_10,
                     "inSert into store(charac_no, store, use_doll) values(%d, \'%s\', \'%d\')",
                     *(undefined4 *)local_14,uVar5,uVar1);
    cVar3 = MySQL::exec(local_10,true);
    if (cVar3 != '\x01') {
      uVar1 = *(undefined4 *)local_14;
      cMyTrace::cMyTrace(local_24,"virtual bool DB_SavePrivateStore::dispatch(int, int, Stream*)",
                         0x4f6d,5);
      cMyTrace::operator()(local_24,"inSert store failed at %d",uVar1);
      return 0;
    }
  }
  return 1;
}
```
