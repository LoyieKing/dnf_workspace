# _ZN5CUser8DelBuddyEPc

`CUser::DelBuddy(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806e002` | `0x97` | `0x8088f58` | `0x94` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,52 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
-lea    -0xa(%ebp),%eax
+lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0xa(%ebp),%eax
+lea    -0x9(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 lea    0x6c(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN12CBuddyHandle3delESs>
-mov    %al,-0x9(%ebp)
+mov    %eax,%ebx
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN5CUser8DelBuddyEPc+0x81>
+jmp    <T> <_ZN5CUser8DelBuddyEPc+0x80>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN5CUser8DelBuddyEPc+0x66>
+jmp    <T> <_ZN5CUser8DelBuddyEPc+0x65>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xa(%ebp),%eax
+lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xa(%ebp),%eax
+lea    -0x9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-movzbl -0x9(%ebp),%eax
+mov    %ebx,%eax
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::DelBuddy(char*) */

undefined1 __thiscall CUser::_ZN5CUser8DelBuddyEPc(CUser *this,char *param_1)

{
  string local_14 [6];
  allocator local_e;
  undefined1 local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 0806e029 to 0806e02d has its CatchHandler @ 0806e068 */
  std::string::string(local_14,param_1,&local_e);
                    /* try { // try from 0806e03e to 0806e042 has its CatchHandler @ 0806e053 */
  local_d = CBuddyHandle::del(this + 0x6c,local_14);
                    /* try { // try from 0806e04c to 0806e050 has its CatchHandler @ 0806e068 */
  std::string::~string(local_14);
  std::allocator<char>::~allocator((allocator<char> *)&local_e);
  return local_d;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 244 行）：

```cpp
char CUser::DelBuddy(char* name)
{
    return (char)((CBuddyHandle*)((char*)this + 0x6c))->del(std::string(name));
}
```
