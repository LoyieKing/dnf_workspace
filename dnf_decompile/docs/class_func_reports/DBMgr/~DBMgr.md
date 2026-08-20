# ~DBMgr

`_ZN5DBMgrD1Ev`

`DBMgr::~DBMgr()`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f4a1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4a1c  _ZN5DBMgrD1Ev
#           DBMgr::~DBMgr()
# range [0x083f4a1c, 0x083f4bc3]
083f4a1c +0x000:  push   %ebp
083f4a1d +0x001:  mov    %esp,%ebp
083f4a1f +0x003:  push   %esi
083f4a20 +0x004:  push   %ebx
083f4a21 +0x005:  sub    $0x30,%esp
083f4a24 +0x008:  mov    0x8(%ebp),%eax
083f4a27 +0x00b:  mov    %eax,(%esp)
083f4a2a +0x00e:  call   083f4ea6 <_ZN5DBMgr5CloseEv>  ; DBMgr::Close()
083f4a2f +0x013:  mov    0x8(%ebp),%eax
083f4a32 +0x016:  mov    (%eax),%eax
083f4a34 +0x018:  test   %eax,%eax
083f4a36 +0x01a:  je     083f4a79 <+0x5d>
083f4a38 +0x01c:  mov    0x8(%ebp),%eax
083f4a3b +0x01f:  mov    (%eax),%edx
083f4a3d +0x021:  mov    0x8(%ebp),%eax
083f4a40 +0x024:  mov    (%eax),%eax
083f4a42 +0x026:  sub    $0x4,%eax
083f4a45 +0x029:  mov    (%eax),%eax
083f4a47 +0x02b:  imul   $0x4208c,%eax,%eax
083f4a4d +0x031:  lea    (%edx,%eax,1),%ebx
083f4a50 +0x034:  mov    0x8(%ebp),%eax
083f4a53 +0x037:  mov    (%eax),%eax
083f4a55 +0x039:  cmp    %eax,%ebx
083f4a57 +0x03b:  je     083f4a69 <+0x4d>
083f4a59 +0x03d:  sub    $0x4208c,%ebx
083f4a5f +0x043:  mov    %ebx,(%esp)
083f4a62 +0x046:  call   083f3aea <_ZN5MySQLD1Ev>  ; MySQL::~MySQL()
083f4a67 +0x04b:  jmp    083f4a50 <+0x34>
083f4a69 +0x04d:  mov    0x8(%ebp),%eax
083f4a6c +0x050:  mov    (%eax),%eax
083f4a6e +0x052:  sub    $0x4,%eax
083f4a71 +0x055:  mov    %eax,(%esp)
083f4a74 +0x058:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
083f4a79 +0x05d:  mov    0x8(%ebp),%eax
083f4a7c +0x060:  lea    0x20(%eax),%edx
083f4a7f +0x063:  lea    -0x18(%ebp),%eax
083f4a82 +0x066:  mov    %edx,0x4(%esp)
083f4a86 +0x06a:  mov    %eax,(%esp)
083f4a89 +0x06d:  call   083f57da <_GLOBAL__I__ZN5MySQLC2Ev+0x4db>  ; global constructors keyed to MySQL::MySQL()+0x4db
083f4a8e +0x072:  sub    $0x4,%esp
083f4a91 +0x075:  jmp    083f4b32 <+0x116>
083f4a96 +0x07a:  lea    -0x18(%ebp),%eax
083f4a99 +0x07d:  mov    %eax,(%esp)
083f4a9c +0x080:  call   083f5858 <_GLOBAL__I__ZN5MySQLC2Ev+0x559>  ; global constructors keyed to MySQL::MySQL()+0x559
083f4aa1 +0x085:  lea    0x4(%eax),%edx
083f4aa4 +0x088:  lea    -0x1c(%ebp),%eax
083f4aa7 +0x08b:  mov    %edx,0x4(%esp)
083f4aab +0x08f:  mov    %eax,(%esp)
083f4aae +0x092:  call   083f5866 <_GLOBAL__I__ZN5MySQLC2Ev+0x567>  ; global constructors keyed to MySQL::MySQL()+0x567
083f4ab3 +0x097:  sub    $0x4,%esp
083f4ab6 +0x09a:  jmp    083f4af1 <+0xd5>
083f4ab8 +0x09c:  lea    -0x1c(%ebp),%eax
083f4abb +0x09f:  mov    %eax,(%esp)
083f4abe +0x0a2:  call   083f58e4 <_GLOBAL__I__ZN5MySQLC2Ev+0x5e5>  ; global constructors keyed to MySQL::MySQL()+0x5e5
083f4ac3 +0x0a7:  mov    0x4(%eax),%eax
083f4ac6 +0x0aa:  mov    %eax,-0xc(%ebp)
083f4ac9 +0x0ad:  cmpl   $0x0,-0xc(%ebp)
083f4acd +0x0b1:  je     083f4ae6 <+0xca>
083f4acf +0x0b3:  mov    -0xc(%ebp),%ebx
083f4ad2 +0x0b6:  test   %ebx,%ebx
083f4ad4 +0x0b8:  je     083f4ae6 <+0xca>
083f4ad6 +0x0ba:  mov    %ebx,(%esp)
083f4ad9 +0x0bd:  call   083f3aea <_ZN5MySQLD1Ev>  ; MySQL::~MySQL()
083f4ade +0x0c2:  mov    %ebx,(%esp)
083f4ae1 +0x0c5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083f4ae6 +0x0ca:  lea    -0x1c(%ebp),%eax
083f4ae9 +0x0cd:  mov    %eax,(%esp)
083f4aec +0x0d0:  call   083f58c6 <_GLOBAL__I__ZN5MySQLC2Ev+0x5c7>  ; global constructors keyed to MySQL::MySQL()+0x5c7
083f4af1 +0x0d5:  lea    -0x18(%ebp),%eax
083f4af4 +0x0d8:  mov    %eax,(%esp)
083f4af7 +0x0db:  call   083f5858 <_GLOBAL__I__ZN5MySQLC2Ev+0x559>  ; global constructors keyed to MySQL::MySQL()+0x559
083f4afc +0x0e0:  lea    0x4(%eax),%edx
083f4aff +0x0e3:  lea    -0x10(%ebp),%eax
083f4b02 +0x0e6:  mov    %edx,0x4(%esp)
083f4b06 +0x0ea:  mov    %eax,(%esp)
083f4b09 +0x0ed:  call   083f588c <_GLOBAL__I__ZN5MySQLC2Ev+0x58d>  ; global constructors keyed to MySQL::MySQL()+0x58d
083f4b0e +0x0f2:  sub    $0x4,%esp
083f4b11 +0x0f5:  lea    -0x10(%ebp),%eax
083f4b14 +0x0f8:  mov    %eax,0x4(%esp)
083f4b18 +0x0fc:  lea    -0x1c(%ebp),%eax
083f4b1b +0x0ff:  mov    %eax,(%esp)
083f4b1e +0x102:  call   083f58b2 <_GLOBAL__I__ZN5MySQLC2Ev+0x5b3>  ; global constructors keyed to MySQL::MySQL()+0x5b3
083f4b23 +0x107:  test   %al,%al
083f4b25 +0x109:  jne    083f4ab8 <+0x9c>
083f4b27 +0x10b:  lea    -0x18(%ebp),%eax
083f4b2a +0x10e:  mov    %eax,(%esp)
083f4b2d +0x111:  call   083f583a <_GLOBAL__I__ZN5MySQLC2Ev+0x53b>  ; global constructors keyed to MySQL::MySQL()+0x53b
083f4b32 +0x116:  mov    0x8(%ebp),%eax
083f4b35 +0x119:  lea    0x20(%eax),%edx
083f4b38 +0x11c:  lea    -0x14(%ebp),%eax
083f4b3b +0x11f:  mov    %edx,0x4(%esp)
083f4b3f +0x123:  mov    %eax,(%esp)
083f4b42 +0x126:  call   083f5800 <_GLOBAL__I__ZN5MySQLC2Ev+0x501>  ; global constructors keyed to MySQL::MySQL()+0x501
083f4b47 +0x12b:  sub    $0x4,%esp
083f4b4a +0x12e:  lea    -0x14(%ebp),%eax
083f4b4d +0x131:  mov    %eax,0x4(%esp)
083f4b51 +0x135:  lea    -0x18(%ebp),%eax
083f4b54 +0x138:  mov    %eax,(%esp)
083f4b57 +0x13b:  call   083f5826 <_GLOBAL__I__ZN5MySQLC2Ev+0x527>  ; global constructors keyed to MySQL::MySQL()+0x527
083f4b5c +0x140:  test   %al,%al
083f4b5e +0x142:  jne    083f4a96 <+0x7a>
083f4b64 +0x148:  jmp    083f4b7e <+0x162>
083f4b66 +0x14a:  mov    %edx,%ebx
083f4b68 +0x14c:  mov    %eax,%esi
083f4b6a +0x14e:  mov    0x8(%ebp),%eax
083f4b6d +0x151:  add    $0x20,%eax
083f4b70 +0x154:  mov    %eax,(%esp)
083f4b73 +0x157:  call   083f5678 <_GLOBAL__I__ZN5MySQLC2Ev+0x379>  ; global constructors keyed to MySQL::MySQL()+0x379
083f4b78 +0x15c:  mov    %esi,%eax
083f4b7a +0x15e:  mov    %ebx,%edx
083f4b7c +0x160:  jmp    083f4b8e <+0x172>
083f4b7e +0x162:  mov    0x8(%ebp),%eax
083f4b81 +0x165:  add    $0x20,%eax
083f4b84 +0x168:  mov    %eax,(%esp)
083f4b87 +0x16b:  call   083f5678 <_GLOBAL__I__ZN5MySQLC2Ev+0x379>  ; global constructors keyed to MySQL::MySQL()+0x379
083f4b8c +0x170:  jmp    083f4bac <+0x190>
083f4b8e +0x172:  mov    %edx,%ebx
083f4b90 +0x174:  mov    %eax,%esi
083f4b92 +0x176:  mov    0x8(%ebp),%eax
083f4b95 +0x179:  add    $0xc,%eax
083f4b98 +0x17c:  mov    %eax,(%esp)
083f4b9b +0x17f:  call   083f5664 <_GLOBAL__I__ZN5MySQLC2Ev+0x365>  ; global constructors keyed to MySQL::MySQL()+0x365
083f4ba0 +0x184:  mov    %esi,%eax
083f4ba2 +0x186:  mov    %ebx,%edx
083f4ba4 +0x188:  mov    %eax,(%esp)
083f4ba7 +0x18b:  call   08ae3750 <_Unwind_Resume>
083f4bac +0x190:  mov    0x8(%ebp),%eax
083f4baf +0x193:  add    $0xc,%eax
083f4bb2 +0x196:  mov    %eax,(%esp)
083f4bb5 +0x199:  call   083f5664 <_GLOBAL__I__ZN5MySQLC2Ev+0x365>  ; global constructors keyed to MySQL::MySQL()+0x365
083f4bba +0x19e:  lea    -0x8(%ebp),%esp
083f4bbd +0x1a1:  add    $0x0,%esp
083f4bc0 +0x1a4:  pop    %ebx
083f4bc1 +0x1a5:  pop    %esi
083f4bc2 +0x1a6:  pop    %ebp
083f4bc3 +0x1a7:  ret
```

## 反编译 C

```c
// DBMgr::~DBMgr @ 0x83f4a1c

/* DBMgr::~DBMgr() */

void __thiscall DBMgr::~DBMgr(DBMgr *this)

{
  char cVar1;
  int iVar2;
  MySQL *pMVar3;
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  local_20 [4];
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  local_1c [4];
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  local_18 [4];
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  local_14 [4];
  MySQL *local_10;
  
                    /* try { // try from 083f4a2a to 083f4b46 has its CatchHandler @ 083f4b66 */
  Close(this);
  if (*(int *)this != 0) {
    pMVar3 = (MySQL *)(*(int *)this + *(int *)(*(int *)this + -4) * 0x4208c);
    while (pMVar3 != *(MySQL **)this) {
      pMVar3 = pMVar3 + -0x4208c;
      MySQL::~MySQL(pMVar3);
    }
    operator_delete__((void *)(*(int *)this + -4));
  }
  std::
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    std::
    _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
    ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                  *)local_1c);
    std::
    map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
    ::begin(local_20);
    while( true ) {
      std::
      _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
      ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                    *)local_1c);
      std::
      map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20);
      pMVar3 = *(MySQL **)(iVar2 + 4);
      local_10 = pMVar3;
      if ((pMVar3 != (MySQL *)0x0) && (pMVar3 != (MySQL *)0x0)) {
        MySQL::~MySQL(pMVar3);
        operator_delete(pMVar3);
      }
      std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>::operator++
                ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>> *)local_20);
    }
    std::
    _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>
                  *)local_1c);
  }
                    /* try { // try from 083f4b87 to 083f4b8b has its CatchHandler @ 083f4b8e */
  std::
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  ::~map((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
          *)(this + 0x20));
  __gnu_cxx::
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  ::~hash_map((hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
               *)(this + 0xc));
  return;
}
```
