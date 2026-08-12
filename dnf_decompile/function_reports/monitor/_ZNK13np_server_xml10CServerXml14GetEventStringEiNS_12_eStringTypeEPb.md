# _ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb

`np_server_xml::CServerXml::GetEventString(int, np_server_xml::_eStringType, bool*) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80582f2` | `0x20a` | `0x809e0fe` | `0x206` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,161 +1,159 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%ebx
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x11(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x4d>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1Ev>
 mov    0x14(%ebp),%eax
 cmp    $0x1,%eax
 je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x79>
 cmp    $0x2,%eax
-je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x11d>
-jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1c1>
+je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x11b>
+jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1bd>
 mov    0xc(%ebp),%eax
 lea    0x70(%eax),%ecx
 lea    -0x2c(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 sub    $0x4,%esp
 mov    -0x2c(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 lea    0x70(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 test   %al,%al
-je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xda>
+je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xf9>
 cmpl   $0x0,0x18(%ebp)
-je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xfc>
+je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xd8>
 mov    0x18(%ebp),%eax
 movb   $0x1,(%eax)
-jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xfc>
-cmpl   $0x0,0x18(%ebp)
-je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xe6>
-mov    0x18(%ebp),%eax
-movb   $0x0,(%eax)
-mov    %ebx,%eax
-lea    -0x18(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1ERKSs>
-jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 mov    %ebx,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZNSsC1ERKSs>
-jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
+jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1eb>
+cmpl   $0x0,0x18(%ebp)
+je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x105>
+mov    0x18(%ebp),%eax
+movb   $0x0,(%eax)
+mov    %ebx,%eax
+lea    -0x18(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1ERKSs>
+jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1eb>
 mov    0xc(%ebp),%eax
 lea    0x88(%eax),%ecx
 lea    -0x2c(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 sub    $0x4,%esp
 mov    -0x2c(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 lea    0x88(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 test   %al,%al
-je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x184>
+je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x19e>
 cmpl   $0x0,0x18(%ebp)
-je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1a3>
+je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x180>
 mov    0x18(%ebp),%eax
 movb   $0x1,(%eax)
-jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1a3>
-cmpl   $0x0,0x18(%ebp)
-je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x190>
-mov    0x18(%ebp),%eax
-movb   $0x0,(%eax)
-mov    %ebx,%eax
-lea    -0x18(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1ERKSs>
-jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 mov    %ebx,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZNSsC1ERKSs>
-jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
+jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1eb>
+cmpl   $0x0,0x18(%ebp)
+je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1aa>
+mov    0x18(%ebp),%eax
+movb   $0x0,(%eax)
 mov    %ebx,%eax
 lea    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1ERKSs>
-jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
+jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1eb>
+mov    %ebx,%eax
+lea    -0x18(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1ERKSs>
+jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1eb>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x18(%ebp),%eax
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

/* np_server_xml::CServerXml::GetEventString(int, np_server_xml::_eStringType, bool*) const */

string * np_server_xml::CServerXml::
         _ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb
                   (string *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  int local_30 [4];
  int local_20;
  string local_1c [7];
  allocator local_15;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 0805831d to 08058321 has its CatchHandler @ 08058324 */
  std::string::string(local_1c,"",&local_15);
  std::allocator<char>::~allocator((allocator<char> *)&local_15);
  std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20);
  if (param_4 == 1) {
                    /* try { // try from 08058382 to 080584c3 has its CatchHandler @ 080584c6 */
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
              (local_30);
    local_20 = local_30[0];
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20,
                       (_Rb_tree_const_iterator *)local_14);
    if (cVar1 == '\0') {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 0;
      }
      std::string::string(param_1,local_1c);
    }
    else {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20);
      std::string::string(param_1,(string *)(iVar2 + 4));
    }
  }
  else if (param_4 == 2) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
              (local_30);
    local_20 = local_30[0];
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20,
                       (_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 0;
      }
      std::string::string(param_1,local_1c);
    }
    else {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20);
      std::string::string(param_1,(string *)(iVar2 + 4));
    }
  }
  else {
    std::string::string(param_1,local_1c);
  }
  std::string::~string(local_1c);
  return param_1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/ServerXml.cpp, source/DNFServer/GameServer/Monitor/ServerXml.cpp, source/DNFServer/GameServer/Monitor/ServerXml.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/Thread.h, source/DNFServer/ServerCommon/tinyxml.h, source/shared/common/include/ReverseEngineerLib.h 等 299 个文件*
