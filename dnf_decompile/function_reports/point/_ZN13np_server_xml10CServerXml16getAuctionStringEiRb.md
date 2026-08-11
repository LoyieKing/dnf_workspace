# _ZN13np_server_xml10CServerXml16getAuctionStringEiRb

`np_server_xml::CServerXml::getAuctionString(int, bool&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x808ff70` | `0x108` | `0x8098d94` | `0x108` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,82 +1,82 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%ebx
 mov    0xc(%ebp),%eax
 lea    0xb8(%eax),%ecx
 lea    -0x18(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 mov    0xc(%ebp),%eax
 lea    0xb8(%eax),%edx
 lea    -0x10(%ebp),%eax
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
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 test   %al,%al
 je     <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb+0xa6>
 mov    0x14(%ebp),%eax
 movb   $0x1,(%eax)
 mov    %ebx,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZNSsC1ERKSs>
 jmp    <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb+0xf8>
 mov    0x14(%ebp),%eax
 movb   $0x0,(%eax)
 mov    %ebx,%esi
 lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x9(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $&data#c7597315(.rodata),0x4(%esp)
+movl   $&data#0d5d60c1(.rodata),0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZN13np_server_xml10CServerXml16getAuctionStringEiRb+0xed>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %ebx,%eax
 mov    %ebx,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: string getAuctionString(CServerXml * this, int textNo, bool * result)
    */

string __thiscall
np_server_xml::CServerXml::_ZN13np_server_xml10CServerXml16getAuctionStringEiRb
          (CServerXml *this,int textNo,bool *result)

{
  bool bVar1;
  pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> *ppVar2;
  undefined1 *in_stack_00000010;
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  local_20;
  _Rb_tree_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  local_1c;
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  local_18;
  _Rb_tree_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  local_14;
  allocator<char> local_d;
  
                    /* Unresolved local var:
                       _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       findResult@[???] */
  std::
  map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
  ::find((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
          *)&local_1c,(int *)(textNo + 0xb8));
  std::
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ::_Rb_tree_const_iterator(&local_20,&local_1c);
  std::
  map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
  ::end((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
         *)&local_14);
  std::
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ::_Rb_tree_const_iterator(&local_18,&local_14);
  bVar1 = std::
          _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
          ::operator!=(&local_20,&local_18);
  if (bVar1) {
    *in_stack_00000010 = 1;
    ppVar2 = std::
             _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
             ::operator->(&local_20);
    std::string::string(this,&ppVar2->second);
  }
  else {
    *in_stack_00000010 = 0;
    std::allocator<char>::allocator();
                    /* try { // try from 0809003b to 0809003f has its CatchHandler @ 08090042 */
    std::string::string(this,"",(allocator *)&local_d);
    std::allocator<char>::~allocator(&local_d);
  }
  return (string)(_Alloc_hider)this;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/ServerCommon/ServerXml.cpp](source/DNFServer/ServerCommon/ServerXml.cpp)（约第 308 行）：

```cpp
std::string CServerXml::getAuctionString(int textNo, bool& result)
{
    std::map<int, std::string>::const_iterator findResult = auctionString_.find(textNo);
    if (findResult != auctionString_.end())
    {
        result = true;
        return findResult->second;
    }
    else
    {
        result = false;
        return std::string("");
    }
}
```
