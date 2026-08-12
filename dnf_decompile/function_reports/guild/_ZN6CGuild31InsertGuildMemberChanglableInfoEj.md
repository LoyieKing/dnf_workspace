# _ZN6CGuild31InsertGuildMemberChanglableInfoEj

`CGuild::InsertGuildMemberChanglableInfo(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8091578` | `0x6b` | `0x80571e2` | `0x74` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+push   %ebx
+sub    $0x84,%esp
+lea    -0x78(%ebp),%ebx
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x24(%ebp)
-lea    -0x10(%ebp),%eax
-lea    -0x24(%ebp),%edx
+mov    %eax,(%ebx)
+lea    -0x2c(%ebp),%eax
+lea    -0x78(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjR26STGuildMemberChangableInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKj26STGuildMemberChangableInfoEC1IjS1_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x4d98(%eax),%ecx
-lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x58(%ebp),%eax
+lea    -0x50(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj26STGuildMemberChangableInfoSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 sub    $0x4,%esp
-movzbl -0x1c(%ebp),%eax
+movzbl -0x54(%ebp),%eax
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::InsertGuildMemberChanglableInfo(unsigned int) */

undefined1 CGuild::_ZN6CGuild31InsertGuildMemberChanglableInfoEj(uint param_1)

{
  pair local_24 [4];
  undefined1 local_20;
  pair<unsigned_int_const,STGuildMemberChangableInfo> local_1c [8];
  uint local_14 [4];
  
  time((time_t *)0x0);
  std::make_pair<unsigned_int&,STGuildMemberChangableInfo&>
            (local_14,(STGuildMemberChangableInfo *)&stack0x00000008);
  std::pair<unsigned_int_const,STGuildMemberChangableInfo>::
  pair<unsigned_int,STGuildMemberChangableInfo>(local_1c,(pair *)local_14);
  std::
  map<unsigned_int,STGuildMemberChangableInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildMemberChangableInfo>>>
  ::insert(local_24);
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1921 行）：

```cpp
bool CGuild::InsertGuildMemberChanglableInfo(unsigned int charNo)
{
    STGuildMemberChangableInfo info;
    // ORIG：仅写首 dword = time(0)，其余字段保持未初始化；insert 不覆盖已存在项
    *(unsigned int*)((char*)&info + 0) = time(0);
    return m_changable.insert(std::make_pair(charNo, info)).second;
}
```
