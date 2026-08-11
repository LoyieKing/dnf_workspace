# _ZN10CAppConfigC2Ev

`CAppConfig::CAppConfig()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8065288` | `0xb7` | `0x804c4ec` | `0xb5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,61 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTableBaseC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV10CAppConfig+0x8,(%eax)
 lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
 lea    -0x9(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"",0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZN10CAppConfigC1Ev+0x5b>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN10CAppConfigC1Ev+0x95>
+jmp    <T> <_ZN10CAppConfigC1Ev+0x9a>
 lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
-movw   $0x0,0x10(%eax)
-mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
-jmp    <T> <_ZN10CAppConfigC1Ev+0xb0>
+mov    0x8(%ebp),%eax
+movw   $0x0,0x10(%eax)
+add    $0x20,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTableBaseD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-add    $0x20,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CAppConfig::CAppConfig() */

void __thiscall CAppConfig::_ZN10CAppConfigC2Ev(CAppConfig *this)

{
  allocator local_d;
  
  CTableBase::CTableBase((CTableBase *)this);
  *(undefined ***)this = &PTR__CAppConfig_0811ac50;
  std::allocator<char>::allocator();
                    /* try { // try from 080652c7 to 080652cb has its CatchHandler @ 080652ce */
  std::string::string((string *)(this + 0xc),"",&local_d);
  std::allocator<char>::~allocator((allocator<char> *)&local_d);
  *(undefined2 *)(this + 0x10) = 0;
                    /* try { // try from 08065300 to 08065304 has its CatchHandler @ 08065307 */
  std::
  multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
  ::multimap((multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
              *)(this + 0x14));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFAppConfig.cpp](source/DNFServer/GameServer/Guild/DNFAppConfig.cpp)（约第 210 行）：

```cpp
CAppConfig::CAppConfig()
    : m_name("")
{
    m_dbmwTcpPort = 0;
}
```
