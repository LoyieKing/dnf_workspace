# _ZNK13np_server_xml10CServerXml15GetServerStringEiPb

`np_server_xml::CServerXml::GetServerString(int, bool*) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x808fdb6` | `0x137` | `0x8098bde` | `0x137` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,100 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%ebx
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0xd(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $&data#c7597315(.rodata),0x4(%esp)
+movl   $&data#0d5d60c1(.rodata),0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0x4d>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1Ev>
 mov    0xc(%ebp),%eax
 lea    0x58(%eax),%ecx
 lea    -0x1c(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 sub    $0x4,%esp
 mov    -0x1c(%ebp),%eax
 mov    %eax,-0x18(%ebp)
 mov    0xc(%ebp),%eax
 lea    0x58(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 test   %al,%al
 je     <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xc4>
 cmpl   $0x0,0x14(%ebp)
 je     <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xe3>
 mov    0x14(%ebp),%eax
 movb   $0x1,(%eax)
 jmp    <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xe3>
 cmpl   $0x0,0x14(%ebp)
 je     <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xd0>
 mov    0x14(%ebp),%eax
 movb   $0x0,(%eax)
 mov    %ebx,%eax
 lea    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1ERKSs>
 jmp    <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0x11c>
 mov    %ebx,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZNSsC1ERKSs>
 jmp    <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0x11c>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
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

/* DWARF original prototype: string GetServerString(CServerXml * this, int nTextID, bool * pbResult)
    */

string __thiscall
np_server_xml::CServerXml::_ZNK13np_server_xml10CServerXml15GetServerStringEiPb
          (CServerXml *this,int nTextID,bool *pbResult)

{
  bool bVar1;
  pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> *ppVar2;
  undefined1 *in_stack_00000010;
  _Const_Base_ptr local_20;
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  local_1c;
  string local_18;
  allocator<char> local_11;
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  local_10;
  
                    /* Unresolved local var: string ret@[???]
                       Unresolved local var:
                       _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       pIter@[???] */
  std::allocator<char>::allocator();
                    /* try { // try from 0808fde1 to 0808fde5 has its CatchHandler @ 0808fde8 */
  std::string::string(&local_18,"",(allocator *)&local_11);
  std::allocator<char>::~allocator(&local_11);
  std::
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ::_Rb_tree_const_iterator(&local_1c);
                    /* try { // try from 0808fe30 to 0808feb4 has its CatchHandler @ 0808feb7 */
  std::
  map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
  ::find((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
          *)&local_20,(int *)(nTextID + 0x58));
  local_1c._M_node = local_20;
  std::
  map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
  ::end((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
         *)&local_10);
  bVar1 = std::
          _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
          ::operator!=(&local_1c,&local_10);
  if (bVar1) {
    if (in_stack_00000010 != (undefined1 *)0x0) {
      *in_stack_00000010 = 1;
    }
    ppVar2 = std::
             _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
             ::operator->(&local_1c);
    std::string::string(this,&ppVar2->second);
  }
  else {
    if (in_stack_00000010 != (undefined1 *)0x0) {
      *in_stack_00000010 = 0;
    }
    std::string::string(this,&local_18);
  }
  std::string::~string((string *)&local_18);
  return (string)(_Alloc_hider)this;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/ServerCommon/ServerXml.cpp](source/DNFServer/ServerCommon/ServerXml.cpp)（约第 274 行）：

```cpp
std::string CServerXml::GetServerString(int nTextID, bool* pbResult) const
{
    std::string ret = "";
    std::map<int, std::string>::const_iterator pIter;
    pIter = m_mapServerStr.find(nTextID);
    if (pIter != m_mapServerStr.end())
    {
        if (pbResult != (bool*)0)
        {
            *pbResult = true;
        }
    }
    else
    {
        if (pbResult != (bool*)0)
        {
            *pbResult = false;
        }
        return ret;
    }
    return pIter->second;
}
```
