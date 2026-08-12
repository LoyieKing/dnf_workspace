# _ZN13np_server_xml10CServerXmlC2Ev

`np_server_xml::CServerXml::CServerXml()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8057338` | `0x111` | `0x80a4b08` | `0x133` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,93 +1,105 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13TiXmlDocumentC1Ev>
+sub    $0x1c,%esp
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x58,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x70,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x88,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 mov    0x8(%ebp),%eax
+add    $0x5,%eax
+mov    %eax,0x4(%esp)
+movl   $0x48,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN13np_server_xml10CServerXmlC1Ev+0x99>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13TiXmlDocumentC1Ev>
+jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0x99>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    0x8(%ebp),%eax
+add    $0x5,%eax
+mov    %eax,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0xa9>
+mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13np_server_xml10CServerXml10InitStringEv>
-jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0x10a>
+jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0x12b>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0x8a>
+jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0xc3>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x88,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0xa4>
+jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0xdd>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x70,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0xbc>
+jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0xf5>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x58,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0xd4>
+jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0x10d>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13np_server_xml10CServerXmlC1Ev+0xec>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13TiXmlDocumentD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-add    $0x10,%esp
+add    $0x1c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* np_server_xml::CServerXml::CServerXml() */

void __thiscall np_server_xml::CServerXml::_ZN13np_server_xml10CServerXmlC2Ev(CServerXml *this)

{
  TiXmlDocument::TiXmlDocument((TiXmlDocument *)(this + 8));
                    /* try { // try from 08057357 to 0805735b has its CatchHandler @ 08057424 */
  std::string::string((string *)(this + 0x54));
                    /* try { // try from 08057365 to 08057369 has its CatchHandler @ 0805740c */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x58));
                    /* try { // try from 08057373 to 08057377 has its CatchHandler @ 080573f4 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x70));
                    /* try { // try from 08057383 to 08057387 has its CatchHandler @ 080573dc */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x88));
                    /* try { // try from 08057393 to 08057397 has its CatchHandler @ 080573c2 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa0));
                    /* try { // try from 0805739e to 080573a2 has its CatchHandler @ 080573a8 */
  InitString(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/ServerXml.cpp](source/DNFServer/GameServer/Guild/ServerXml.cpp)（约第 87 行）：

```cpp
CServerXml::CServerXml()
{
    new (m_doc) TiXmlDocument;
    InitString();
}
```
