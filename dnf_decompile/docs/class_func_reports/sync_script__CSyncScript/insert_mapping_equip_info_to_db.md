# insert_mapping_equip_info_to_db

`_ZN11sync_script11CSyncScript31insert_mapping_equip_info_to_dbERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`sync_script::CSyncScript::insert_mapping_equip_info_to_db(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x086267f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086267f0  _ZN11sync_script11CSyncScript31insert_mapping_equip_info_to_dbERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           sync_script::CSyncScript::insert_mapping_equip_info_to_db(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x086267f0, 0x0862690b]
086267f0 +0x000:  push   %ebp
086267f1 +0x001:  mov    %esp,%ebp
086267f3 +0x003:  push   %ebx
086267f4 +0x004:  sub    $0x24,%esp
086267f7 +0x007:  mov    0x8(%ebp),%eax
086267fa +0x00a:  movzbl (%eax),%eax
086267fd +0x00d:  xor    $0x1,%eax
08626800 +0x010:  test   %al,%al
08626802 +0x012:  je     0862680e <+0x1e>
08626804 +0x014:  mov    $0x1,%eax
08626809 +0x019:  jmp    08626907 <+0x117>
0862680e +0x01e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08626813 +0x023:  movl   $0x0,0x8(%esp)
0862681b +0x02b:  movl   $0x5,0x4(%esp)
08626823 +0x033:  mov    %eax,(%esp)
08626826 +0x036:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0862682b +0x03b:  mov    %eax,-0xc(%ebp)
0862682e +0x03e:  lea    -0x14(%ebp),%eax
08626831 +0x041:  mov    0xc(%ebp),%edx
08626834 +0x044:  mov    %edx,0x4(%esp)
08626838 +0x048:  mov    %eax,(%esp)
0862683b +0x04b:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
08626840 +0x050:  sub    $0x4,%esp
08626843 +0x053:  lea    -0x18(%ebp),%eax
08626846 +0x056:  mov    0xc(%ebp),%edx
08626849 +0x059:  mov    %edx,0x4(%esp)
0862684d +0x05d:  mov    %eax,(%esp)
08626850 +0x060:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08626855 +0x065:  sub    $0x4,%esp
08626858 +0x068:  jmp    086268e8 <+0xf8>
0862685d +0x06d:  lea    -0x14(%ebp),%eax
08626860 +0x070:  mov    %eax,(%esp)
08626863 +0x073:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08626868 +0x078:  mov    0x4(%eax),%eax
0862686b +0x07b:  test   %eax,%eax
0862686d +0x07d:  setne  %al
08626870 +0x080:  test   %al,%al
08626872 +0x082:  je     086268cb <+0xdb>
08626874 +0x084:  lea    -0x14(%ebp),%eax
08626877 +0x087:  mov    %eax,(%esp)
0862687a +0x08a:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0862687f +0x08f:  mov    (%eax),%ebx
08626881 +0x091:  lea    -0x14(%ebp),%eax
08626884 +0x094:  mov    %eax,(%esp)
08626887 +0x097:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0862688c +0x09c:  mov    0x4(%eax),%eax
0862688f +0x09f:  mov    %ebx,0xc(%esp)
08626893 +0x0a3:  mov    %eax,0x8(%esp)
08626897 +0x0a7:  movl   $"inSert into equip_mapping_info(equip_idx, mapping_idx) values(%d, %d)",0x4(%esp)
0862689f +0x0af:  mov    -0xc(%ebp),%eax
086268a2 +0x0b2:  mov    %eax,(%esp)
086268a5 +0x0b5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086268aa +0x0ba:  movl   $0x1,0x4(%esp)
086268b2 +0x0c2:  mov    -0xc(%ebp),%eax
086268b5 +0x0c5:  mov    %eax,(%esp)
086268b8 +0x0c8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086268bd +0x0cd:  xor    $0x1,%eax
086268c0 +0x0d0:  test   %al,%al
086268c2 +0x0d2:  je     086268cb <+0xdb>
086268c4 +0x0d4:  mov    $0x0,%eax
086268c9 +0x0d9:  jmp    08626907 <+0x117>
086268cb +0x0db:  lea    -0x10(%ebp),%eax
086268ce +0x0de:  movl   $0x0,0x8(%esp)
086268d6 +0x0e6:  lea    -0x14(%ebp),%edx
086268d9 +0x0e9:  mov    %edx,0x4(%esp)
086268dd +0x0ed:  mov    %eax,(%esp)
086268e0 +0x0f0:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
086268e5 +0x0f5:  sub    $0x4,%esp
086268e8 +0x0f8:  lea    -0x18(%ebp),%eax
086268eb +0x0fb:  mov    %eax,0x4(%esp)
086268ef +0x0ff:  lea    -0x14(%ebp),%eax
086268f2 +0x102:  mov    %eax,(%esp)
086268f5 +0x105:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
086268fa +0x10a:  test   %al,%al
086268fc +0x10c:  jne    0862685d <+0x6d>
08626902 +0x112:  mov    $0x1,%eax
08626907 +0x117:  mov    -0x4(%ebp),%ebx
0862690a +0x11a:  leave
0862690b +0x11b:  ret
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_mapping_equip_info_to_db @ 0x86267f0

/* sync_script::CSyncScript::insert_mapping_equip_info_to_db(std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

undefined4 sync_script::CSyncScript::insert_mapping_equip_info_to_db(map *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  MySQL *local_10;
  
  if (*param_1 == (map)0x1) {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
    while (cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18,
                              (_Rb_tree_iterator *)local_1c), cVar2 != '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
      if (*(int *)(iVar3 + 4) != 0) {
        puVar4 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                           ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
        uVar1 = *puVar4;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
        MySQL::set_query(local_10,
                         "inSert into equip_mapping_info(equip_idx, mapping_idx) values(%d, %d)",
                         *(undefined4 *)(iVar3 + 4),uVar1);
        cVar2 = MySQL::exec(local_10,true);
        if (cVar2 != '\x01') {
          return 0;
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_14,(int)local_18);
    }
  }
  return 1;
}
```
