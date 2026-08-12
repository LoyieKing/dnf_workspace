# _ZN12CApplication9Add_GM_idEj

`CApplication::Add_GM_id(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8065990` | `0x12e` | `0x80535c0` | `0x12e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,95 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
-lea    0x368(%eax),%edx
+lea    0x368(%eax),%ecx
 lea    -0x30(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
-sub    $0x4,%esp
-mov    0x8(%ebp),%eax
-lea    0x368(%eax),%ecx
-lea    -0x2c(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 sub    $0x4,%esp
+mov    0x8(%ebp),%eax
+lea    0x368(%eax),%edx
+lea    -0x2c(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x30(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEeqERKS6_>
 test   %al,%al
 je     <T> <_ZN12CApplication9Add_GM_idEj+0x124>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listIjSaIjEEC1Ev>
 lea    -0x14(%ebp),%eax
 lea    -0x38(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIjSt4listIjSaIjEEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
+call   <T> <_ZSt9make_pairIRjRSt4listIjSaIjEEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjSt4listIjSaIjEEEC1IjS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x368(%eax),%ecx
 lea    -0x28(%ebp),%eax
 lea    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE6insertERKS7_>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjSt4listIjSaIjEEED1Ev>
 jmp    <T> <_ZN12CApplication9Add_GM_idEj+0xf1>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjSt4listIjSaIjEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication9Add_GM_idEj+0xdc>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIjSt4listIjSaIjEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication9Add_GM_idEj+0xfe>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIjSt4listIjSaIjEEED1Ev>
 jmp    <T> <_ZN12CApplication9Add_GM_idEj+0x119>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listIjSaIjEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listIjSaIjEED1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Add_GM_id(unsigned int) */

void CApplication::_ZN12CApplication9Add_GM_idEj(uint param_1)

{
  char cVar1;
  list<unsigned_int,std::allocator<unsigned_int>> local_3c [8];
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  local_34 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
  local_30 [4];
  pair local_2c [8];
  pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>> local_24 [12];
  pair<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>> local_18 [12];
  
  std::
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  ::end(local_34);
  std::
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  ::find((uint *)local_30);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
          ::operator==(local_30,(_Rb_tree_iterator *)local_34);
  if (cVar1 != '\0') {
    std::list<unsigned_int,std::allocator<unsigned_int>>::list(local_3c);
                    /* try { // try from 08065a0e to 08065a12 has its CatchHandler @ 08065a8e */
    std::make_pair<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>>
              ((uint *)local_18,(list *)&stack0x00000008);
                    /* try { // try from 08065a23 to 08065a27 has its CatchHandler @ 08065a6c */
    std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>::
    pair<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>>(local_24,local_18);
                    /* try { // try from 08065a42 to 08065a46 has its CatchHandler @ 08065a57 */
    std::
    map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
    ::insert(local_2c);
                    /* try { // try from 08065a50 to 08065a54 has its CatchHandler @ 08065a6c */
    std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>::~pair
              (local_24);
                    /* try { // try from 08065a87 to 08065a8b has its CatchHandler @ 08065a8e */
    std::pair<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>>::~pair(local_18);
    std::list<unsigned_int,std::allocator<unsigned_int>>::~list(local_3c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 1035 行）：

```cpp
void CApplication::Add_GM_id(unsigned int id)
{
    // ORIG：单表达式 find(id)==end()（右先求值：end() 在前），make_pair 走 rvalue 形态
    if (m_map368.find(id) == m_map368.end())
    {
        std::list<unsigned int> l;
        // ORIG：make_pair 显式模板实参 <uint,list>（直接取 id/l 地址，无 move 调用）
        m_map368.insert(std::make_pair<unsigned int, std::list<unsigned int> >(id, l));
    }
}
```
