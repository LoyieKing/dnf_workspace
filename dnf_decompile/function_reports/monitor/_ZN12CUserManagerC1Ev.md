# _ZN12CUserManagerC1Ev

`CUserManager::CUserManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8070278` | `0xbf` | `0x808ac22` | `0xb7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x30,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKSsP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEEC1Ev>
-mov    0x8(%ebp),%eax
-movl   $0x0,0x78(%eax)
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
+jmp    <T> <_ZN12CUserManagerC1Ev+0xb0>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKSsP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CUserManagerC1Ev+0x74>
+jmp    <T> <_ZN12CUserManagerC1Ev+0x65>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x30,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CUserManagerC1Ev+0x8c>
+jmp    <T> <_ZN12CUserManagerC1Ev+0x7d>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CUserManagerC1Ev+0xa4>
+jmp    <T> <_ZN12CUserManagerC1Ev+0x95>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
+add    $0x10,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::CUserManager() */

void __thiscall CUserManager::_ZN12CUserManagerC1Ev(CUserManager *this)

{
  std::
  map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
  ::map((map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
         *)this);
                    /* try { // try from 08070294 to 08070298 has its CatchHandler @ 0807031c */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
         *)(this + 0x18));
                    /* try { // try from 080702a2 to 080702a6 has its CatchHandler @ 08070304 */
  std::
  map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::map((map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
         *)(this + 0x30));
                    /* try { // try from 080702b0 to 080702b4 has its CatchHandler @ 080702ec */
  std::
  map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
  ::map((map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
         *)(this + 0x48));
                    /* try { // try from 080702be to 080702c2 has its CatchHandler @ 080702d4 */
  std::
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  ::map((map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
         *)(this + 0x60));
  *(undefined4 *)(this + 0x78) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUserManager.cpp](source/DNFServer/GameServer/COServer/DNFUserManager.cpp)（约第 9 行）：

```cpp
CUserManager::CUserManager()
{
    m_app = 0;
}
```
