# _ZN5CUser8AddBuddyER13STBuddyDBInfo

`CUser::AddBuddy(STBuddyDBInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806defe` | `0x9b` | `0x8088f1e` | `0xd5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,54 +1,72 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
-lea    -0x9(%ebp),%eax
+lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0xc(%ebp),%eax
-lea    -0x9(%ebp),%edx
+lea    -0xd(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    0x8(%ebp),%eax
-lea    0x6c(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,0x8(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CBuddyHandle3addESsR13STBuddyDBInfo>
-mov    %eax,%ebx
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN5CUser8AddBuddyER13STBuddyDBInfo+0x87>
+jmp    <T> <_ZN5CUser8AddBuddyER13STBuddyDBInfo+0x49>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN5CUser8AddBuddyER13STBuddyDBInfo+0x6c>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x9(%ebp),%eax
+lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x9(%ebp),%eax
+lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
+lea    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1ERKSs>
+mov    0x8(%ebp),%eax
+lea    0x6c(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CBuddyHandle3addESsR13STBuddyDBInfo>
+mov    %eax,%ebx
+lea    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN5CUser8AddBuddyER13STBuddyDBInfo+0xc1>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN5CUser8AddBuddyER13STBuddyDBInfo+0xa6>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
 mov    %ebx,%eax
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::AddBuddy(STBuddyDBInfo&) */

undefined4 __thiscall CUser::_ZN5CUser8AddBuddyER13STBuddyDBInfo(CUser *this,STBuddyDBInfo *param_1)

{
  undefined4 uVar1;
  string local_14 [7];
  allocator local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 0806df25 to 0806df29 has its CatchHandler @ 0806df6a */
  std::string::string(local_14,(char *)param_1,&local_d);
                    /* try { // try from 0806df41 to 0806df45 has its CatchHandler @ 0806df55 */
  uVar1 = CBuddyHandle::add((CBuddyHandle *)(this + 0x6c),local_14,param_1);
                    /* try { // try from 0806df4e to 0806df52 has its CatchHandler @ 0806df6a */
  std::string::~string(local_14);
  std::allocator<char>::~allocator((allocator<char> *)&local_d);
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 250 行）：

```cpp
int CUser::AddBuddy(STBuddyDBInfo& info)
{
    std::string name((char*)&info);
    return ((CBuddyHandle*)((char*)this + 0x6c))->add(name, info);
}
```
