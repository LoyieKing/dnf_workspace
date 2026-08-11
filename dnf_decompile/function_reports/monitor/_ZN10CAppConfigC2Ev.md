# _ZN10CAppConfigC2Ev

`CAppConfig::CAppConfig()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x806b800` | `0x123` | `0x804e12a` | `0x123` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,93 +1,93 @@
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
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
 lea    -0xa(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0x24(%eax),%edx
 lea    -0xa(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $&data#d3a43ecc(.rodata),0x4(%esp)
+movl   $&data#3500214d(.rodata),0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZN10CAppConfigC1Ev+0x6c>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xa(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN10CAppConfigC1Ev+0xf0>
 lea    -0xa(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 movw   $0x0,0x28(%eax)
 lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0x2c(%eax),%edx
 lea    -0x9(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $&data#d3a43ecc(.rodata),0x4(%esp)
+movl   $&data#3500214d(.rodata),0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZN10CAppConfigC1Ev+0xd5>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN10CAppConfigC1Ev+0xf0>
 lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 movw   $0x0,0x30(%eax)
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN10CAppConfigC1Ev+0x108>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTableBaseD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CAppConfig::CAppConfig() */

void __thiscall CAppConfig::_ZN10CAppConfigC2Ev(CAppConfig *this)

{
  allocator local_e;
  allocator local_d;
  
  CTableBase::CTableBase((CTableBase *)this);
  *(undefined ***)this = &PTR__CAppConfig_0811f4d8;
                    /* try { // try from 0806b825 to 0806b829 has its CatchHandler @ 0806b908 */
  std::
  multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
  ::multimap((multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
              *)(this + 0xc));
  std::allocator<char>::allocator();
                    /* try { // try from 0806b84d to 0806b851 has its CatchHandler @ 0806b854 */
  std::string::string((string *)(this + 0x24),"",&local_e);
  std::allocator<char>::~allocator((allocator<char> *)&local_e);
  *(undefined2 *)(this + 0x28) = 0;
  std::allocator<char>::allocator();
                    /* try { // try from 0806b8a3 to 0806b8a7 has its CatchHandler @ 0806b8aa */
  std::string::string((string *)(this + 0x2c),"",&local_d);
  std::allocator<char>::~allocator((allocator<char> *)&local_d);
  *(undefined2 *)(this + 0x30) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFAppConfig.cpp](source/DNFServer/GameServer/COServer/DNFAppConfig.cpp)（约第 11 行）：

```cpp
CAppConfig::CAppConfig()
{
    memset(m_udpPorts, 0, sizeof(m_udpPorts));
}
```
