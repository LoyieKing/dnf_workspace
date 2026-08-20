# ResetCacheCharactorMemory

`_ZN9GameWorld25ResetCacheCharactorMemoryEv`

`GameWorld::ResetCacheCharactorMemory()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cf684` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cf684  _ZN9GameWorld25ResetCacheCharactorMemoryEv
#           GameWorld::ResetCacheCharactorMemory()
# range [0x086cf684, 0x086cf745]
086cf684 +0x00:  push   %ebp
086cf685 +0x01:  mov    %esp,%ebp
086cf687 +0x03:  sub    $0x28,%esp
086cf68a +0x06:  mov    0x8(%ebp),%eax
086cf68d +0x09:  lea    0x198(%eax),%edx
086cf693 +0x0f:  lea    -0x18(%ebp),%eax
086cf696 +0x12:  mov    %edx,0x4(%esp)
086cf69a +0x16:  mov    %eax,(%esp)
086cf69d +0x19:  call   080d3ab4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x8901>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8901
086cf6a2 +0x1e:  sub    $0x4,%esp
086cf6a5 +0x21:  jmp    086cf70e <+0x8a>
086cf6a7 +0x23:  lea    -0x18(%ebp),%eax
086cf6aa +0x26:  mov    %eax,(%esp)
086cf6ad +0x29:  call   082b0798 <_GLOBAL__I__ZN4CLog5this_E+0xcbbf>  ; global constructors keyed to CLog::this_+0xcbbf
086cf6b2 +0x2e:  mov    0x4(%eax),%eax
086cf6b5 +0x31:  mov    %eax,-0xc(%ebp)
086cf6b8 +0x34:  movl   $0x0,0x4(%esp)
086cf6c0 +0x3c:  mov    -0xc(%ebp),%eax
086cf6c3 +0x3f:  mov    %eax,(%esp)
086cf6c6 +0x42:  call   0822fd80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x542a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x542a
086cf6cb +0x47:  movl   $0x0,0x4(%esp)
086cf6d3 +0x4f:  mov    -0xc(%ebp),%eax
086cf6d6 +0x52:  mov    %eax,(%esp)
086cf6d9 +0x55:  call   0822fd5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5406>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5406
086cf6de +0x5a:  movl   $0x0,0x4(%esp)
086cf6e6 +0x62:  mov    -0xc(%ebp),%eax
086cf6e9 +0x65:  mov    %eax,(%esp)
086cf6ec +0x68:  call   0822fd6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5418>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5418
086cf6f1 +0x6d:  lea    -0x10(%ebp),%eax
086cf6f4 +0x70:  movl   $0x0,0x8(%esp)
086cf6fc +0x78:  lea    -0x18(%ebp),%edx
086cf6ff +0x7b:  mov    %edx,0x4(%esp)
086cf703 +0x7f:  mov    %eax,(%esp)
086cf706 +0x82:  call   086d43dc <_GLOBAL__I_MAX_VILLAGE_NUM+0x2c0d>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2c0d
086cf70b +0x87:  sub    $0x4,%esp
086cf70e +0x8a:  mov    0x8(%ebp),%eax
086cf711 +0x8d:  lea    0x198(%eax),%edx
086cf717 +0x93:  lea    -0x14(%ebp),%eax
086cf71a +0x96:  mov    %edx,0x4(%esp)
086cf71e +0x9a:  mov    %eax,(%esp)
086cf721 +0x9d:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
086cf726 +0xa2:  sub    $0x4,%esp
086cf729 +0xa5:  lea    -0x14(%ebp),%eax
086cf72c +0xa8:  mov    %eax,0x4(%esp)
086cf730 +0xac:  lea    -0x18(%ebp),%eax
086cf733 +0xaf:  mov    %eax,(%esp)
086cf736 +0xb2:  call   082b07fc <_GLOBAL__I__ZN4CLog5this_E+0xcc23>  ; global constructors keyed to CLog::this_+0xcc23
086cf73b +0xb7:  test   %al,%al
086cf73d +0xb9:  jne    086cf6a7 <+0x23>
086cf743 +0xbf:  leave
086cf744 +0xc0:  ret
086cf745 +0xc1:  nop
```

## 反编译 C

```c
// GameWorld::ResetCacheCharactorMemory @ 0x86cf684

/* GameWorld::ResetCacheCharactorMemory() */

void GameWorld::ResetCacheCharactorMemory(void)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_1c);
    local_10 = *(CUser **)(iVar2 + 4);
    CUser::SetValidLastLoginCharac(local_10,false);
    CUser::SetLastLoginCharacNo(local_10,0);
    CUser::SetLastLoginChannelNo(local_10,0);
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++(local_14,(int)local_1c)
    ;
  }
  return;
}
```
