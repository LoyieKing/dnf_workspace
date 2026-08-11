# _ZN13np_server_xml10CServerXmlD1Ev

`np_server_xml::CServerXml::~CServerXml()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805744a` | `0x118` | `0x80a4be8` | `0x14f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,98 +1,112 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13np_server_xml10CServerXml10InitStringEv>
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x2f>
+mov    0x8(%ebp),%eax
+add    $0xa0,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
+mov    0x8(%ebp),%eax
+add    $0x88,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
+mov    0x8(%ebp),%eax
+add    $0x70,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
+mov    0x8(%ebp),%eax
+add    $0x58,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
+mov    0x8(%ebp),%eax
+add    $0x54,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    0x8(%ebp),%eax
+add    $0x5,%eax
+mov    (%eax),%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x5,%eax
+mov    %eax,(%esp)
+call   *%edx
+jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x8e>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x41>
+jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0xa0>
 mov    0x8(%ebp),%eax
 add    $0xa0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x5b>
+jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0xba>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x88,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x6d>
+jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0xcc>
 mov    0x8(%ebp),%eax
 add    $0x88,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x85>
+jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0xe4>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x70,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x95>
+jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0xf4>
 mov    0x8(%ebp),%eax
 add    $0x70,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0xad>
+jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x10c>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x58,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0xbd>
+jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x11c>
 mov    0x8(%ebp),%eax
 add    $0x58,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0xd5>
+jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x13a>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0xe5>
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13np_server_xml10CServerXmlD1Ev+0x103>
-mov    %edx,%ebx
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13TiXmlDocumentD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13TiXmlDocumentD1Ev>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* np_server_xml::CServerXml::~CServerXml() */

void __thiscall np_server_xml::CServerXml::_ZN13np_server_xml10CServerXmlD1Ev(CServerXml *this)

{
                    /* try { // try from 08057458 to 0805745c has its CatchHandler @ 0805745f */
  InitString(this);
                    /* try { // try from 08057484 to 08057488 has its CatchHandler @ 0805748b */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa0));
                    /* try { // try from 080574b0 to 080574b4 has its CatchHandler @ 080574b7 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x88));
                    /* try { // try from 080574d8 to 080574dc has its CatchHandler @ 080574df */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x70));
                    /* try { // try from 08057500 to 08057504 has its CatchHandler @ 08057507 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x58));
                    /* try { // try from 08057528 to 0805752c has its CatchHandler @ 0805752f */
  std::string::~string((string *)(this + 0x54));
  TiXmlDocument::~TiXmlDocument((TiXmlDocument *)(this + 8));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/ServerXml.cpp](source/DNFServer/GameServer/Guild/ServerXml.cpp)（约第 96 行）：

```cpp
CServerXml::~CServerXml()
{
    InitString();
    m_rgba.~map();
    m_str3.~map();
    m_str2.~map();
    m_str1.~map();
    m_path.~basic_string();
    ((TiXmlDocument*)m_doc)->~TiXmlDocument();
}
```
