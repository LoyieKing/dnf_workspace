# LoadGuildInfoProxyFromDB

`_ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP`

`CGuildServerProxy::LoadGuildInfoProxyFromDB(ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e714` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e714  _ZN17CGuildServerProxy24LoadGuildInfoProxyFromDBE17ENUM_SERVER_GROUP
#           CGuildServerProxy::LoadGuildInfoProxyFromDB(ENUM_SERVER_GROUP)
# range [0x0846e714, 0x0846e95d]
0846e714 +0x000:  push   %ebp
0846e715 +0x001:  mov    %esp,%ebp
0846e717 +0x003:  sub    $0x98,%esp
0846e71d +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0846e722 +0x00e:  movl   $0x0,0x8(%esp)
0846e72a +0x016:  movl   $0x8,0x4(%esp)
0846e732 +0x01e:  mov    %eax,(%esp)
0846e735 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0846e73a +0x026:  mov    %eax,-0x14(%ebp)
0846e73d +0x029:  cmpl   $0x0,0xc(%ebp)
0846e741 +0x02d:  jne    0846e751 <+0x3d>
0846e743 +0x02f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0846e748 +0x034:  mov    0x378(%eax),%eax
0846e74e +0x03a:  mov    %eax,0xc(%ebp)
0846e751 +0x03d:  mov    0xc(%ebp),%eax
0846e754 +0x040:  mov    %eax,0x8(%esp)
0846e758 +0x044:  movl   $"seLect guild_id, guild_name, lev , power_side, guild_agit_flag from guild_info where expire_flag = 0 and server_id = %d",0x4(%esp)
0846e760 +0x04c:  mov    -0x14(%ebp),%eax
0846e763 +0x04f:  mov    %eax,(%esp)
0846e766 +0x052:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0846e76b +0x057:  movl   $0x1,0x4(%esp)
0846e773 +0x05f:  mov    -0x14(%ebp),%eax
0846e776 +0x062:  mov    %eax,(%esp)
0846e779 +0x065:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0846e77e +0x06a:  mov    %al,-0x15(%ebp)
0846e781 +0x06d:  movzbl -0x15(%ebp),%eax
0846e785 +0x071:  xor    $0x1,%eax
0846e788 +0x074:  test   %al,%al
0846e78a +0x076:  je     0846e796 <+0x82>
0846e78c +0x078:  mov    $0x0,%eax
0846e791 +0x07d:  jmp    0846e95c <+0x248>
0846e796 +0x082:  mov    -0x14(%ebp),%eax
0846e799 +0x085:  mov    %eax,(%esp)
0846e79c +0x088:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0846e7a1 +0x08d:  mov    %eax,-0x10(%ebp)
0846e7a4 +0x090:  movl   $0x0,-0xc(%ebp)
0846e7ab +0x097:  jmp    0846e943 <+0x22f>
0846e7b0 +0x09c:  mov    -0x14(%ebp),%eax
0846e7b3 +0x09f:  mov    %eax,(%esp)
0846e7b6 +0x0a2:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0846e7bb +0x0a7:  mov    %al,-0x15(%ebp)
0846e7be +0x0aa:  movzbl -0x15(%ebp),%eax
0846e7c2 +0x0ae:  xor    $0x1,%eax
0846e7c5 +0x0b1:  test   %al,%al
0846e7c7 +0x0b3:  jne    0846e956 <+0x242>
0846e7cd +0x0b9:  lea    -0x7e(%ebp),%eax
0846e7d0 +0x0bc:  mov    %eax,(%esp)
0846e7d3 +0x0bf:  call   082344de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b88
0846e7d8 +0x0c4:  lea    -0x64(%ebp),%eax
0846e7db +0x0c7:  mov    %eax,0x8(%esp)
0846e7df +0x0cb:  movl   $0x0,0x4(%esp)
0846e7e7 +0x0d3:  mov    -0x14(%ebp),%eax
0846e7ea +0x0d6:  mov    %eax,(%esp)
0846e7ed +0x0d9:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0846e7f2 +0x0de:  mov    %al,-0x15(%ebp)
0846e7f5 +0x0e1:  movzbl -0x15(%ebp),%eax
0846e7f9 +0x0e5:  xor    $0x1,%eax
0846e7fc +0x0e8:  test   %al,%al
0846e7fe +0x0ea:  je     0846e80a <+0xf6>
0846e800 +0x0ec:  mov    $0x0,%eax
0846e805 +0x0f1:  jmp    0846e95c <+0x248>
0846e80a +0x0f6:  movl   $0x16,0xc(%esp)
0846e812 +0x0fe:  lea    -0x7e(%ebp),%eax
0846e815 +0x101:  mov    %eax,0x8(%esp)
0846e819 +0x105:  movl   $0x1,0x4(%esp)
0846e821 +0x10d:  mov    -0x14(%ebp),%eax
0846e824 +0x110:  mov    %eax,(%esp)
0846e827 +0x113:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0846e82c +0x118:  mov    %al,-0x15(%ebp)
0846e82f +0x11b:  movzbl -0x15(%ebp),%eax
0846e833 +0x11f:  xor    $0x1,%eax
0846e836 +0x122:  test   %al,%al
0846e838 +0x124:  je     0846e844 <+0x130>
0846e83a +0x126:  mov    $0x0,%eax
0846e83f +0x12b:  jmp    0846e95c <+0x248>
0846e844 +0x130:  lea    -0x7e(%ebp),%eax
0846e847 +0x133:  add    $0x17,%eax
0846e84a +0x136:  mov    %eax,0x8(%esp)
0846e84e +0x13a:  movl   $0x2,0x4(%esp)
0846e856 +0x142:  mov    -0x14(%ebp),%eax
0846e859 +0x145:  mov    %eax,(%esp)
0846e85c +0x148:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
0846e861 +0x14d:  mov    %al,-0x15(%ebp)
0846e864 +0x150:  movzbl -0x15(%ebp),%eax
0846e868 +0x154:  xor    $0x1,%eax
0846e86b +0x157:  test   %al,%al
0846e86d +0x159:  je     0846e879 <+0x165>
0846e86f +0x15b:  mov    $0x0,%eax
0846e874 +0x160:  jmp    0846e95c <+0x248>
0846e879 +0x165:  lea    -0x7e(%ebp),%eax
0846e87c +0x168:  add    $0x18,%eax
0846e87f +0x16b:  mov    %eax,0x8(%esp)
0846e883 +0x16f:  movl   $0x3,0x4(%esp)
0846e88b +0x177:  mov    -0x14(%ebp),%eax
0846e88e +0x17a:  mov    %eax,(%esp)
0846e891 +0x17d:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
0846e896 +0x182:  mov    %al,-0x15(%ebp)
0846e899 +0x185:  movzbl -0x15(%ebp),%eax
0846e89d +0x189:  xor    $0x1,%eax
0846e8a0 +0x18c:  test   %al,%al
0846e8a2 +0x18e:  je     0846e8ae <+0x19a>
0846e8a4 +0x190:  mov    $0x0,%eax
0846e8a9 +0x195:  jmp    0846e95c <+0x248>
0846e8ae +0x19a:  lea    -0x7e(%ebp),%eax
0846e8b1 +0x19d:  add    $0x19,%eax
0846e8b4 +0x1a0:  mov    %eax,0x8(%esp)
0846e8b8 +0x1a4:  movl   $0x4,0x4(%esp)
0846e8c0 +0x1ac:  mov    -0x14(%ebp),%eax
0846e8c3 +0x1af:  mov    %eax,(%esp)
0846e8c6 +0x1b2:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
0846e8cb +0x1b7:  mov    %al,-0x15(%ebp)
0846e8ce +0x1ba:  movzbl -0x15(%ebp),%eax
0846e8d2 +0x1be:  xor    $0x1,%eax
0846e8d5 +0x1c1:  test   %al,%al
0846e8d7 +0x1c3:  je     0846e8e0 <+0x1cc>
0846e8d9 +0x1c5:  mov    $0x0,%eax
0846e8de +0x1ca:  jmp    0846e95c <+0x248>
0846e8e0 +0x1cc:  lea    -0x38(%ebp),%eax
0846e8e3 +0x1cf:  lea    -0x7e(%ebp),%edx
0846e8e6 +0x1d2:  mov    %edx,0x8(%esp)
0846e8ea +0x1d6:  lea    -0x64(%ebp),%edx
0846e8ed +0x1d9:  mov    %edx,0x4(%esp)
0846e8f1 +0x1dd:  mov    %eax,(%esp)
0846e8f4 +0x1e0:  call   0846fc99 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa69>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa69
0846e8f9 +0x1e5:  sub    $0x4,%esp
0846e8fc +0x1e8:  lea    -0x38(%ebp),%eax
0846e8ff +0x1eb:  mov    %eax,0x4(%esp)
0846e903 +0x1ef:  lea    -0x58(%ebp),%eax
0846e906 +0x1f2:  mov    %eax,(%esp)
0846e909 +0x1f5:  call   0846fcd8 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xaa8>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xaa8
0846e90e +0x1fa:  mov    0x8(%ebp),%eax
0846e911 +0x1fd:  lea    0x8(%eax),%ecx
0846e914 +0x200:  lea    -0x60(%ebp),%eax
0846e917 +0x203:  lea    -0x58(%ebp),%edx
0846e91a +0x206:  mov    %edx,0x8(%esp)
0846e91e +0x20a:  mov    %ecx,0x4(%esp)
0846e922 +0x20e:  mov    %eax,(%esp)
0846e925 +0x211:  call   0846fd2e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xafe>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xafe
0846e92a +0x216:  sub    $0x4,%esp
0846e92d +0x219:  movzbl -0x5c(%ebp),%eax
0846e931 +0x21d:  xor    $0x1,%eax
0846e934 +0x220:  test   %al,%al
0846e936 +0x222:  je     0846e93f <+0x22b>
0846e938 +0x224:  mov    $0x0,%eax
0846e93d +0x229:  jmp    0846e95c <+0x248>
0846e93f +0x22b:  addl   $0x1,-0xc(%ebp)
0846e943 +0x22f:  mov    -0xc(%ebp),%eax
0846e946 +0x232:  cmp    -0x10(%ebp),%eax
0846e949 +0x235:  setl   %al
0846e94c +0x238:  test   %al,%al
0846e94e +0x23a:  jne    0846e7b0 <+0x9c>
0846e954 +0x240:  jmp    0846e957 <+0x243>
0846e956 +0x242:  nop
0846e957 +0x243:  mov    $0x1,%eax
0846e95c +0x248:  leave
0846e95d +0x249:  ret
```

## 反编译 C

```c
// CGuildServerProxy::LoadGuildInfoProxyFromDB @ 0x846e714

/* CGuildServerProxy::LoadGuildInfoProxyFromDB(ENUM_SERVER_GROUP) */

undefined4 __thiscall CGuildServerProxy::LoadGuildInfoProxyFromDB(undefined4 this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  STGuildProxy local_82 [23];
  uchar uStack_6b;
  uchar uStack_6a;
  uchar uStack_69;
  STGuildProxy local_68 [4];
  pair local_64 [4];
  char local_60;
  pair<unsigned_int_const,STGuildProxy> local_5c [32];
  uint local_3c [8];
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  if (param_2 == 0) {
    iVar1 = G_CEnvironment();
    param_2 = *(int *)(iVar1 + 0x378);
  }
  MySQL::set_query(local_18,
                   "seLect guild_id, guild_name, lev , power_side, guild_agit_flag from guild_info where expire_flag = 0 and server_id = %d"
                   ,param_2);
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    local_10 = 0;
    while ((local_10 < local_14 && (local_19 = MySQL::fetch(local_18), local_19 == '\x01'))) {
      STGuildProxy::STGuildProxy(local_82);
      local_19 = MySQL::get_uint(local_18,0,(uint *)local_68);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,1,(char *)local_82,0x16);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_ubyte(local_18,2,&uStack_6b);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_ubyte(local_18,3,&uStack_6a);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_ubyte(local_18,4,&uStack_69);
      if (local_19 != '\x01') {
        return 0;
      }
      std::make_pair<unsigned_int&,STGuildProxy&>(local_3c,local_68);
      std::pair<unsigned_int_const,STGuildProxy>::pair<unsigned_int,STGuildProxy>
                (local_5c,(pair *)local_3c);
      std::
      map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
      ::insert(local_64);
      if (local_60 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
