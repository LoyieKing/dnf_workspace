# DisplayMaxLength

`_ZN11sync_script16DisplayMaxLengthEv`

`sync_script::DisplayMaxLength()`

| 类 | 地址 |
|---|---|
| `sync_script` | `0x0861ca94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861ca94  _ZN11sync_script16DisplayMaxLengthEv
#           sync_script::DisplayMaxLength()
# range [0x0861ca94, 0x0861cbb3]
0861ca94 +0x000:  push   %ebp
0861ca95 +0x001:  mov    %esp,%ebp
0861ca97 +0x003:  sub    $0x28,%esp
0861ca9a +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0861ca9f +0x00b:  movl   $0x0,0x8(%esp)
0861caa7 +0x013:  movl   $0x5,0x4(%esp)
0861caaf +0x01b:  mov    %eax,(%esp)
0861cab2 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0861cab7 +0x023:  mov    %eax,-0x10(%ebp)
0861caba +0x026:  movl   $0x0,-0xc(%ebp)
0861cac1 +0x02d:  jmp    0861cb98 <+0x104>
0861cac6 +0x032:  mov    -0xc(%ebp),%eax
0861cac9 +0x035:  mov    %eax,0x4(%esp)
0861cacd +0x039:  movl   $&_ZN19CFieldLengthChecker12fieldLength_E,(%esp)
0861cad4 +0x040:  call   080e2564 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x30a>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x30a
0861cad9 +0x045:  mov    (%eax),%eax
0861cadb +0x047:  test   %eax,%eax
0861cadd +0x049:  sete   %al
0861cae0 +0x04c:  test   %al,%al
0861cae2 +0x04e:  jne    0861cb8a <+0xf6>
0861cae8 +0x054:  mov    -0xc(%ebp),%eax
0861caeb +0x057:  mov    %eax,0x4(%esp)
0861caef +0x05b:  movl   $&_ZN19CFieldLengthChecker11fieldNames_E,(%esp)
0861caf6 +0x062:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0861cafb +0x067:  mov    %eax,(%esp)
0861cafe +0x06a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861cb03 +0x06f:  mov    %eax,0x8(%esp)
0861cb07 +0x073:  movl   $"seLect max(length(%s)) from dnf_item_info",0x4(%esp)
0861cb0f +0x07b:  mov    -0x10(%ebp),%eax
0861cb12 +0x07e:  mov    %eax,(%esp)
0861cb15 +0x081:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0861cb1a +0x086:  movl   $0x1,0x4(%esp)
0861cb22 +0x08e:  mov    -0x10(%ebp),%eax
0861cb25 +0x091:  mov    %eax,(%esp)
0861cb28 +0x094:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0861cb2d +0x099:  xor    $0x1,%eax
0861cb30 +0x09c:  test   %al,%al
0861cb32 +0x09e:  jne    0861cb8d <+0xf9>
0861cb34 +0x0a0:  mov    -0x10(%ebp),%eax
0861cb37 +0x0a3:  mov    %eax,(%esp)
0861cb3a +0x0a6:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0861cb3f +0x0ab:  xor    $0x1,%eax
0861cb42 +0x0ae:  test   %al,%al
0861cb44 +0x0b0:  jne    0861cb90 <+0xfc>
0861cb46 +0x0b2:  movl   $0x0,-0x14(%ebp)
0861cb4d +0x0b9:  lea    -0x14(%ebp),%eax
0861cb50 +0x0bc:  mov    %eax,0x8(%esp)
0861cb54 +0x0c0:  movl   $0x0,0x4(%esp)
0861cb5c +0x0c8:  mov    -0x10(%ebp),%eax
0861cb5f +0x0cb:  mov    %eax,(%esp)
0861cb62 +0x0ce:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0861cb67 +0x0d3:  xor    $0x1,%eax
0861cb6a +0x0d6:  test   %al,%al
0861cb6c +0x0d8:  jne    0861cb93 <+0xff>
0861cb6e +0x0da:  mov    -0xc(%ebp),%eax
0861cb71 +0x0dd:  mov    %eax,0x4(%esp)
0861cb75 +0x0e1:  movl   $&_ZN19CFieldLengthChecker12fieldLength_E,(%esp)
0861cb7c +0x0e8:  call   080e2564 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x30a>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x30a
0861cb81 +0x0ed:  mov    (%eax),%edx
0861cb83 +0x0ef:  mov    -0x14(%ebp),%eax
0861cb86 +0x0f2:  cmp    %eax,%edx
0861cb88 +0x0f4:  jmp    0861cb94 <+0x100>
0861cb8a +0x0f6:  nop
0861cb8b +0x0f7:  jmp    0861cb94 <+0x100>
0861cb8d +0x0f9:  nop
0861cb8e +0x0fa:  jmp    0861cb94 <+0x100>
0861cb90 +0x0fc:  nop
0861cb91 +0x0fd:  jmp    0861cb94 <+0x100>
0861cb93 +0x0ff:  nop
0861cb94 +0x100:  addl   $0x1,-0xc(%ebp)
0861cb98 +0x104:  movl   $&_ZN19CFieldLengthChecker11fieldNames_E,(%esp)
0861cb9f +0x10b:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
0861cba4 +0x110:  cmp    -0xc(%ebp),%eax
0861cba7 +0x113:  seta   %al
0861cbaa +0x116:  test   %al,%al
0861cbac +0x118:  jne    0861cac6 <+0x32>
0861cbb2 +0x11e:  leave
0861cbb3 +0x11f:  ret
```

## 反编译 C

```c
// sync_script::DisplayMaxLength @ 0x861ca94

/* sync_script::DisplayMaxLength() */

void sync_script::DisplayMaxLength(void)

{
  char cVar1;
  int *piVar2;
  string *this;
  undefined4 uVar3;
  uint uVar4;
  uint local_18;
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
  local_10 = 0;
  while (uVar4 = std::vector<std::string,std::allocator<std::string>>::size
                           ((vector<std::string,std::allocator<std::string>> *)
                            CFieldLengthChecker::fieldNames_), local_10 < uVar4) {
    piVar2 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                              ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                               CFieldLengthChecker::fieldLength_,local_10);
    if (*piVar2 != 0) {
      this = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        CFieldLengthChecker::fieldNames_,local_10);
      uVar3 = std::string::c_str(this);
      MySQL::set_query(local_14,"seLect max(length(%s)) from dnf_item_info",uVar3);
      cVar1 = MySQL::exec(local_14,true);
      if ((cVar1 == '\x01') && (cVar1 = MySQL::fetch(local_14), cVar1 == '\x01')) {
        local_18 = 0;
        cVar1 = MySQL::get_uint(local_14,0,&local_18);
        if (cVar1 == '\x01') {
          std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                     CFieldLengthChecker::fieldLength_,local_10);
        }
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}
```
