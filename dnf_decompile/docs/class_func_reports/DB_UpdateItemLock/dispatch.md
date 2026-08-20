# dispatch

`_ZN17DB_UpdateItemLock8dispatchEiiP6Stream`

`DB_UpdateItemLock::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateItemLock` | `0x0843993a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843993a  _ZN17DB_UpdateItemLock8dispatchEiiP6Stream
#           DB_UpdateItemLock::dispatch(int, int, Stream*)
# range [0x0843993a, 0x08439ab9]
0843993a +0x000:  push   %ebp
0843993b +0x001:  mov    %esp,%ebp
0843993d +0x003:  push   %edi
0843993e +0x004:  push   %ebx
0843993f +0x005:  sub    $0x3f0,%esp
08439945 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843994a +0x010:  movl   $0x0,0x8(%esp)
08439952 +0x018:  movl   $0x3,0x4(%esp)
0843995a +0x020:  mov    %eax,(%esp)
0843995d +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08439962 +0x028:  mov    %eax,-0x10(%ebp)
08439965 +0x02b:  mov    0x14(%ebp),%eax
08439968 +0x02e:  mov    %eax,(%esp)
0843996b +0x031:  call   08453768 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x637e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x637e
08439970 +0x036:  mov    %eax,-0xc(%ebp)
08439973 +0x039:  lea    -0x3e0(%ebp),%ebx
08439979 +0x03f:  mov    $0x0,%eax
0843997e +0x044:  mov    $0xf3,%edx
08439983 +0x049:  mov    %ebx,%edi
08439985 +0x04b:  mov    %edx,%ecx
08439987 +0x04d:  rep stos %eax,%es:(%edi)
08439989 +0x04f:  movl   $0x3cc,-0x14(%ebp)
08439990 +0x056:  mov    -0xc(%ebp),%eax
08439993 +0x059:  add    $0x4,%eax
08439996 +0x05c:  movl   $0x320,0xc(%esp)
0843999e +0x064:  mov    %eax,0x8(%esp)
084399a2 +0x068:  lea    -0x14(%ebp),%eax
084399a5 +0x06b:  mov    %eax,0x4(%esp)
084399a9 +0x06f:  lea    -0x3e0(%ebp),%eax
084399af +0x075:  mov    %eax,(%esp)
084399b2 +0x078:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
084399b7 +0x07d:  xor    $0x1,%eax
084399ba +0x080:  test   %al,%al
084399bc +0x082:  je     084399c8 <+0x8e>
084399be +0x084:  mov    $0x0,%eax
084399c3 +0x089:  jmp    08439ab0 <+0x176>
084399c8 +0x08e:  mov    -0xc(%ebp),%eax
084399cb +0x091:  mov    (%eax),%ebx
084399cd +0x093:  mov    -0x14(%ebp),%eax
084399d0 +0x096:  mov    %eax,0xc(%esp)
084399d4 +0x09a:  lea    -0x3e0(%ebp),%eax
084399da +0x0a0:  mov    %eax,0x8(%esp)
084399de +0x0a4:  movl   $0x0,0x4(%esp)
084399e6 +0x0ac:  mov    -0x10(%ebp),%eax
084399e9 +0x0af:  mov    %eax,(%esp)
084399ec +0x0b2:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084399f1 +0x0b7:  mov    %ebx,0xc(%esp)
084399f5 +0x0bb:  mov    %eax,0x8(%esp)
084399f9 +0x0bf:  movl   $"upDate charac_item_lock_info set item_lock_info='%s' where charac_no=%u",0x4(%esp)
08439a01 +0x0c7:  mov    -0x10(%ebp),%eax
08439a04 +0x0ca:  mov    %eax,(%esp)
08439a07 +0x0cd:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08439a0c +0x0d2:  movl   $0x1,0x4(%esp)
08439a14 +0x0da:  mov    -0x10(%ebp),%eax
08439a17 +0x0dd:  mov    %eax,(%esp)
08439a1a +0x0e0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08439a1f +0x0e5:  xor    $0x1,%eax
08439a22 +0x0e8:  test   %al,%al
08439a24 +0x0ea:  je     08439a30 <+0xf6>
08439a26 +0x0ec:  mov    $0x0,%eax
08439a2b +0x0f1:  jmp    08439ab0 <+0x176>
08439a30 +0x0f6:  mov    -0x10(%ebp),%eax
08439a33 +0x0f9:  mov    %eax,(%esp)
08439a36 +0x0fc:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08439a3b +0x101:  or     %edx,%eax
08439a3d +0x103:  test   %eax,%eax
08439a3f +0x105:  sete   %al
08439a42 +0x108:  test   %al,%al
08439a44 +0x10a:  je     08439aab <+0x171>
08439a46 +0x10c:  mov    -0x14(%ebp),%eax
08439a49 +0x10f:  mov    %eax,0xc(%esp)
08439a4d +0x113:  lea    -0x3e0(%ebp),%eax
08439a53 +0x119:  mov    %eax,0x8(%esp)
08439a57 +0x11d:  movl   $0x0,0x4(%esp)
08439a5f +0x125:  mov    -0x10(%ebp),%eax
08439a62 +0x128:  mov    %eax,(%esp)
08439a65 +0x12b:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08439a6a +0x130:  mov    -0xc(%ebp),%edx
08439a6d +0x133:  mov    (%edx),%edx
08439a6f +0x135:  mov    %eax,0xc(%esp)
08439a73 +0x139:  mov    %edx,0x8(%esp)
08439a77 +0x13d:  movl   $"inSert into charac_item_lock_info(charac_no, item_lock_info) values(%u, '%s')",0x4(%esp)
08439a7f +0x145:  mov    -0x10(%ebp),%eax
08439a82 +0x148:  mov    %eax,(%esp)
08439a85 +0x14b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08439a8a +0x150:  movl   $0x1,0x4(%esp)
08439a92 +0x158:  mov    -0x10(%ebp),%eax
08439a95 +0x15b:  mov    %eax,(%esp)
08439a98 +0x15e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08439a9d +0x163:  xor    $0x1,%eax
08439aa0 +0x166:  test   %al,%al
08439aa2 +0x168:  je     08439aab <+0x171>
08439aa4 +0x16a:  mov    $0x0,%eax
08439aa9 +0x16f:  jmp    08439ab0 <+0x176>
08439aab +0x171:  mov    $0x1,%eax
08439ab0 +0x176:  add    $0x3f0,%esp
08439ab6 +0x17c:  pop    %ebx
08439ab7 +0x17d:  pop    %edi
08439ab8 +0x17e:  pop    %ebp
08439ab9 +0x17f:  ret
```

## 反编译 C

```c
// DB_UpdateItemLock::dispatch @ 0x843993a

/* DB_UpdateItemLock::dispatch(int, int, Stream*) */

undefined4 DB_UpdateItemLock::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  char local_3e4 [972];
  uint local_18;
  MySQL *local_14;
  SIG_ITEM_LOCK_UPDATE *local_10;
  
  bVar6 = 0;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_10 = Stream::GetOutBuffer<SIG_ITEM_LOCK_UPDATE>(in_stack_00000010);
  pcVar5 = local_3e4;
  for (iVar4 = 0xf3; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  local_18 = 0x3cc;
  cVar1 = compress_zip(local_3e4,&local_18,(char *)(local_10 + 4),800);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined4 *)local_10;
    uVar3 = MySQL::blob_to_str(local_14,0,local_3e4,local_18);
    MySQL::set_query(local_14,
                     "upDate charac_item_lock_info set item_lock_info=\'%s\' where charac_no=%u",
                     uVar3,uVar2);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      lVar7 = MySQL::getAffectedRowCount(local_14);
      if (lVar7 == 0) {
        uVar2 = MySQL::blob_to_str(local_14,0,local_3e4,local_18);
        MySQL::set_query(local_14,
                         "inSert into charac_item_lock_info(charac_no, item_lock_info) values(%u, \'%s\')"
                         ,*(undefined4 *)local_10,uVar2);
        cVar1 = MySQL::exec(local_14,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
