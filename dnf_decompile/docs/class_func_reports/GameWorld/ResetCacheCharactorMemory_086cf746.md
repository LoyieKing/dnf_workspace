# ResetCacheCharactorMemory

`_ZN9GameWorld25ResetCacheCharactorMemoryEj`

`GameWorld::ResetCacheCharactorMemory(unsigned int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cf746` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cf746  _ZN9GameWorld25ResetCacheCharactorMemoryEj
#           GameWorld::ResetCacheCharactorMemory(unsigned int)
# range [0x086cf746, 0x086cf7f7]
086cf746 +0x00:  push   %ebp
086cf747 +0x01:  mov    %esp,%ebp
086cf749 +0x03:  sub    $0x28,%esp
086cf74c +0x06:  mov    0x8(%ebp),%eax
086cf74f +0x09:  lea    0x198(%eax),%ecx
086cf755 +0x0f:  lea    -0x14(%ebp),%eax
086cf758 +0x12:  lea    0xc(%ebp),%edx
086cf75b +0x15:  mov    %edx,0x8(%esp)
086cf75f +0x19:  mov    %ecx,0x4(%esp)
086cf763 +0x1d:  mov    %eax,(%esp)
086cf766 +0x20:  call   082b076c <_GLOBAL__I__ZN4CLog5this_E+0xcb93>  ; global constructors keyed to CLog::this_+0xcb93
086cf76b +0x25:  sub    $0x4,%esp
086cf76e +0x28:  mov    0x8(%ebp),%eax
086cf771 +0x2b:  lea    0x198(%eax),%edx
086cf777 +0x31:  lea    -0x10(%ebp),%eax
086cf77a +0x34:  mov    %edx,0x4(%esp)
086cf77e +0x38:  mov    %eax,(%esp)
086cf781 +0x3b:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
086cf786 +0x40:  sub    $0x4,%esp
086cf789 +0x43:  lea    -0x10(%ebp),%eax
086cf78c +0x46:  mov    %eax,0x4(%esp)
086cf790 +0x4a:  lea    -0x14(%ebp),%eax
086cf793 +0x4d:  mov    %eax,(%esp)
086cf796 +0x50:  call   082b07fc <_GLOBAL__I__ZN4CLog5this_E+0xcc23>  ; global constructors keyed to CLog::this_+0xcc23
086cf79b +0x55:  test   %al,%al
086cf79d +0x57:  je     086cf7f0 <+0xaa>
086cf79f +0x59:  lea    -0x14(%ebp),%eax
086cf7a2 +0x5c:  mov    %eax,(%esp)
086cf7a5 +0x5f:  call   082b0798 <_GLOBAL__I__ZN4CLog5this_E+0xcbbf>  ; global constructors keyed to CLog::this_+0xcbbf
086cf7aa +0x64:  mov    0x4(%eax),%eax
086cf7ad +0x67:  mov    %eax,-0xc(%ebp)
086cf7b0 +0x6a:  movl   $0x0,0x4(%esp)
086cf7b8 +0x72:  mov    -0xc(%ebp),%eax
086cf7bb +0x75:  mov    %eax,(%esp)
086cf7be +0x78:  call   0822fd80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x542a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x542a
086cf7c3 +0x7d:  movl   $0x0,0x4(%esp)
086cf7cb +0x85:  mov    -0xc(%ebp),%eax
086cf7ce +0x88:  mov    %eax,(%esp)
086cf7d1 +0x8b:  call   0822fd5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5406>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5406
086cf7d6 +0x90:  movl   $0x0,0x4(%esp)
086cf7de +0x98:  mov    -0xc(%ebp),%eax
086cf7e1 +0x9b:  mov    %eax,(%esp)
086cf7e4 +0x9e:  call   0822fd6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5418>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5418
086cf7e9 +0xa3:  mov    $0x1,%eax
086cf7ee +0xa8:  jmp    086cf7f5 <+0xaf>
086cf7f0 +0xaa:  mov    $0x0,%eax
086cf7f5 +0xaf:  leave
086cf7f6 +0xb0:  ret
086cf7f7 +0xb1:  nop
```

## 反编译 C

```c
// GameWorld::ResetCacheCharactorMemory @ 0x86cf746

/* GameWorld::ResetCacheCharactorMemory(unsigned int) */

bool GameWorld::ResetCacheCharactorMemory(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->(local_18);
    local_10 = *(CUser **)(iVar2 + 4);
    CUser::SetValidLastLoginCharac(local_10,false);
    CUser::SetLastLoginCharacNo(local_10,0);
    CUser::SetLastLoginChannelNo(local_10,0);
  }
  return cVar1 != '\0';
}
```
