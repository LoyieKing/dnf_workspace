# _ZNK13np_server_xml10CServerXml15GetServerStringEiPb

`np_server_xml::CServerXml::GetServerString(int, bool*) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8058138` | `0x137` | `0x809e044` | `0x124` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,94 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x20,%esp
 mov    0x8(%ebp),%ebx
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0xd(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"",0x4(%esp)
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
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1Ev>
 mov    0xc(%ebp),%eax
 lea    0x58(%eax),%ecx
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 sub    $0x4,%esp
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x18(%ebp)
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
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
+call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEeqERKS3_>
 test   %al,%al
 je     <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xc4>
 cmpl   $0x0,0x14(%ebp)
-je     <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xe3>
-mov    0x14(%ebp),%eax
-movb   $0x1,(%eax)
-jmp    <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xe3>
-cmpl   $0x0,0x14(%ebp)
-je     <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xd0>
+je     <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xb1>
 mov    0x14(%ebp),%eax
 movb   $0x0,(%eax)
 mov    %ebx,%eax
 lea    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1ERKSs>
-jmp    <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0x11c>
+jmp    <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0x109>
+cmpl   $0x0,0x14(%ebp)
+je     <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xd0>
+mov    0x14(%ebp),%eax
+movb   $0x1,(%eax)
 mov    %ebx,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZNSsC1ERKSs>
-jmp    <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0x11c>
+jmp    <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0x109>
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

/* np_server_xml::CServerXml::GetServerString(int, bool*) const */

int np_server_xml::CServerXml::_ZNK13np_server_xml10CServerXml15GetServerStringEiPb
              (int param_1,bool *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *in_stack_00000010;
  int local_20;
  int local_1c;
  string local_18 [7];
  allocator local_11;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 08058163 to 08058167 has its CatchHandler @ 0805816a */
  std::string::string(local_18,"",&local_11);
  std::allocator<char>::~allocator((allocator<char> *)&local_11);
  std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_1c);
                    /* try { // try from 080581b2 to 08058236 has its CatchHandler @ 08058239 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
            (&local_20);
  local_1c = local_20;
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                    ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_1c,
                     (_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    if (in_stack_00000010 != (undefined1 *)0x0) {
      *in_stack_00000010 = 0;
    }
    std::string::string((string *)param_1,local_18);
  }
  else {
    if (in_stack_00000010 != (undefined1 *)0x0) {
      *in_stack_00000010 = 1;
    }
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_1c);
    std::string::string((string *)param_1,(string *)(iVar2 + 4));
  }
  std::string::~string(local_18);
  return param_1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/ServerXml.cpp](source/DNFServer/GameServer/Monitor/ServerXml.cpp)（约第 182 行）：

```cpp
std::string CServerXml::GetServerString(int idx, bool* ok) const
{
    std::string s("");
    std::map<int, std::string>::const_iterator it = m_map58.find(idx);
    if (it == m_map58.end())
    {
        if (ok != 0)
        {
            *ok = 0;
        }
        return s;
    }
    if (ok != 0)
    {
        *ok = 1;
    }
    return it->second;
}
```
