# _ZN15CRewardUserList6InsertEj

`CRewardUserList::Insert(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a44b8` | `0x7e` | `0x8099cb0` | `0x80` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CRewardUserList7isExistEj>
-xor    $0x1,%eax
+cmp    $0x1,%al
+sete   %al
 test   %al,%al
-je     <T> <_ZN15CRewardUserList6InsertEj+0x77>
+je     <T> <_ZN15CRewardUserList6InsertEj+0x28>
+mov    $0xffffffff,%eax
+jmp    <T> <_ZN15CRewardUserList6InsertEj+0x7e>
 movl   $0x0,-0xc(%ebp)
 lea    -0x14(%ebp),%eax
 lea    -0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjiEC1IjiEEOS_IT_T0_E>
 mov    0x8(%ebp),%edx
 lea    -0x24(%ebp),%eax
 lea    -0x1c(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE6insertERKS4_>
 sub    $0x4,%esp
 mov    $0x1,%eax
-jmp    <T> <_ZN15CRewardUserList6InsertEj+0x7c>
-mov    $0xffffffff,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CRewardUserList::Insert(unsigned int) */

undefined4 __thiscall
CRewardUserList::_ZN15CRewardUserList6InsertEj(CRewardUserList *this,uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  pair local_28 [8];
  pair<unsigned_int_const,int> local_20 [8];
  uint local_18 [2];
  undefined4 local_10;
  
  cVar1 = isExist((uint)this);
  if (cVar1 == '\x01') {
    uVar2 = 0xffffffff;
  }
  else {
    local_10 = 0;
    std::make_pair<unsigned_int&,int>(local_18,(int *)&param_1);
    std::pair<unsigned_int_const,int>::pair<unsigned_int,int>(local_20,(pair *)local_18);
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::insert(local_28);
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 104 行）：

```cpp
int CRewardUserList::Insert(unsigned int key)
{
    if (isExist(key) == 1)
    {
        return -1;
    }
    m_map.insert(std::make_pair(key, 0));
    return 1;
}
```
