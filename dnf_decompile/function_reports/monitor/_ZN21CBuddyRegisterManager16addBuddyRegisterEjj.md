# _ZN21CBuddyRegisterManager16addBuddyRegisterEjj

`CBuddyRegisterManager::addBuddyRegister(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809d388` | `0x52` | `0x804b8be` | `0x3d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x28,%esp
+lea    0x10(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-lea    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRjS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
-sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjjEC1IjjEEOS_IT_T0_E>
+call   <T> <_ZNSt4pairIKjjEC1IRjS3_EEOT_OT0_>
 mov    0x8(%ebp),%edx
-lea    -0x1c(%ebp),%eax
-lea    -0x18(%ebp),%ecx
+lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE6insertERKS4_>
 sub    $0x4,%esp
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyRegisterManager::addBuddyRegister(unsigned int, unsigned int) */

void CBuddyRegisterManager::_ZN21CBuddyRegisterManager16addBuddyRegisterEjj
               (uint param_1,uint param_2)

{
  pair local_20 [4];
  pair<unsigned_int_const,unsigned_int> local_1c [8];
  uint local_14 [4];
  
  std::make_pair<unsigned_int&,unsigned_int&>(local_14,&param_2);
  std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,unsigned_int>
            (local_1c,(pair *)local_14);
  std::
  multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::insert(local_20);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/BuddyRegisterManager.cpp](source/DNFServer/GameServer/Monitor/BuddyRegisterManager.cpp)（约第 40 行）：

```cpp
void CBuddyRegisterManager::addBuddyRegister(unsigned int key, unsigned int value)
{
    m_map.insert(std::pair<const unsigned int, unsigned int>(key, value));
}
```
