# _ZN12CApplication19isGM_regFromChannelEj

`CApplication::isGM_regFromChannel(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8065b48` | `0x57` | `0x805296e` | `0x57` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
-lea    0x368(%eax),%edx
+lea    0x368(%eax),%ecx
 lea    -0x10(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
-sub    $0x4,%esp
-mov    0x8(%ebp),%eax
-lea    0x368(%eax),%ecx
-lea    -0xc(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 sub    $0x4,%esp
+mov    0x8(%ebp),%eax
+lea    0x368(%eax),%edx
+lea    -0xc(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
+sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEneERKS6_>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::isGM_regFromChannel(unsigned int) */

void CApplication::_ZN12CApplication19isGM_regFromChannelEj(uint param_1)

{
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  local_14 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
  local_10 [12];
  
  std::
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  ::end(local_14);
  std::
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  ::find((uint *)local_10);
  std::
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
  ::operator!=(local_10,(_Rb_tree_iterator *)local_14);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 819 行）：

```cpp
char CApplication::isGM_regFromChannel(unsigned int channel)
{
    std::map<unsigned int, std::list<unsigned int> >::iterator it = m_map368.find(channel);
    return it != m_map368.end();
}
```
