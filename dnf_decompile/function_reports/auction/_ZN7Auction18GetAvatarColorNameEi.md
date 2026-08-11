# _ZN7Auction18GetAvatarColorNameEi

`Auction::GetAvatarColorName(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x805b8de` | `0xfd` | `0x804f988` | `0xfd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,75 +1,75 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction22GetAvatarExpansionInfoEiP23stAvatarExpansionInfo_t>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN7Auction18GetAvatarColorNameEi+0x33>
-mov    $&data#e619ab0f(.rodata),%eax
+mov    $&data#b226699f(.rodata),%eax
 jmp    <T> <_ZN7Auction18GetAvatarColorNameEi+0xfb>
 movzwl -0x20(%ebp),%eax
 test   %ax,%ax
 js     <T> <_ZN7Auction18GetAvatarColorNameEi+0x46>
 movzwl -0x20(%ebp),%eax
 cmp    $0x1ff,%ax
 jle    <T> <_ZN7Auction18GetAvatarColorNameEi+0x50>
-mov    $&data#e619ab0f(.rodata),%eax
+mov    $&data#b226699f(.rodata),%eax
 jmp    <T> <_ZN7Auction18GetAvatarColorNameEi+0xfb>
 mov    0x8(%ebp),%eax
 add    $0x52a8,%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 jne    <T> <_ZN7Auction18GetAvatarColorNameEi+0x6b>
-mov    $&data#e619ab0f(.rodata),%eax
+mov    $&data#b226699f(.rodata),%eax
 jmp    <T> <_ZN7Auction18GetAvatarColorNameEi+0xfb>
 movzwl -0x20(%ebp),%eax
 cwtl
 mov    %eax,-0x18(%ebp)
 lea    -0x1c(%ebp),%eax
 lea    -0x18(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 lea    -0x10(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 test   %al,%al
 je     <T> <_ZN7Auction18GetAvatarColorNameEi+0xf6>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 jmp    <T> <_ZN7Auction18GetAvatarColorNameEi+0xfb>
-mov    $&data#e619ab0f(.rodata),%eax
+mov    $&data#b226699f(.rodata),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: char * GetAvatarColorName(Auction * this, int color_key) */

char * __thiscall Auction::_ZN7Auction18GetAvatarColorNameEi(Auction *this,int color_key)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  local_28;
  stAvatarExpansionInfo_t local_24;
  map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
  local_20;
  
                    /* Unresolved local var: stAvatarExpansionInfo_t expansionInfo@[???]
                       Unresolved local var: ColorNameMap * tempMap@[???]
                       Unresolved local var:
                       _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       itr@[???] */
  iVar2 = GetAvatarExpansionInfo(this,color_key,&local_24);
  if (iVar2 == 1) {
    pcVar3 = "";
  }
  else if ((local_24.color[0] < 0) || (0x1ff < local_24.color[0])) {
    pcVar3 = "";
  }
  else {
    local_20._M_t._M_impl._M_header._M_right =
         (_Base_ptr)&(this->avatarColorInfo).avatarColorNameMap;
    if (local_20._M_t._M_impl._M_header._M_right == (_Base_ptr)0x0) {
      pcVar3 = "";
    }
    else {
      local_20._M_t._M_impl._M_header._M_color = (_Rb_tree_color)local_24.color[0];
      std::
      map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
      ::find(&local_20,(int *)local_20._M_t._M_impl._M_header._M_right);
      std::
      _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
      ::_Rb_tree_const_iterator
                (&local_28,
                 (_Rb_tree_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                  *)&local_20);
      std::
      map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
      ::end((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
             *)&local_20._M_t._M_impl._M_header._M_left);
      std::
      _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
      ::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                  *)&local_20._M_t._M_impl._M_header._M_parent,
                 (_Rb_tree_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                  *)&local_20._M_t._M_impl._M_header._M_left);
      bVar1 = std::
              _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
              ::operator!=(&local_28,
                           (_Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                            *)&local_20._M_t._M_impl._M_header._M_parent);
      if (bVar1) {
        std::
        _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
        ::operator->(&local_28);
        pcVar3 = (char *)std::string::c_str();
      }
      else {
        pcVar3 = "";
      }
    }
  }
  return pcVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp)（约第 726 行）：

```cpp
char* Auction::GetAvatarColorName(int color_key)
{
    stAvatarExpansionInfo_t expansionInfo;
    // ORIG：if (GetAvatarExpansionInfo(...) == 1) —— 调用结果直比（cmp $0x1,%eax; sete）
    if (GetAvatarExpansionInfo(color_key, &expansionInfo) == 1)
    {
        return "";
    }
    if ((expansionInfo.color[0] < 0) || (0x1ff < expansionInfo.color[0]))
    {
        return "";
    }
    std::map<int, std::string>* tempMap = &avatarColorInfo.avatarColorNameMap;
    if (tempMap == (std::map<int, std::string>*)0x0)
    {
        return "";
    }
    std::map<int, std::string>::const_iterator itr = tempMap->find(expansionInfo.color[0]);
    if (itr != tempMap->end())
    {
        return (char*)itr->second.c_str();
    }
    return "";
}
```
