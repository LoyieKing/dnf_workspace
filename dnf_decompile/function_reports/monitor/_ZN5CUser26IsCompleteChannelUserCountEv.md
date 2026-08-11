# _ZN5CUser26IsCompleteChannelUserCountEv

`CUser::IsCompleteChannelUserCount()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809317c` | `0x3e` | `0x8088c28` | `0x50` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser26IsCompleteChannelUserCountEv+0x37>
+je     <T> <_ZN5CUser26IsCompleteChannelUserCountEv+0x39>
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
-mov    0x8(%ebp),%edx
-mov    0x8c(%edx),%edx
-cmp    %edx,%eax
-jne    <T> <_ZN5CUser26IsCompleteChannelUserCountEv+0x37>
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x8c(%eax),%eax
+cmp    %eax,%edx
+jne    <T> <_ZN5CUser26IsCompleteChannelUserCountEv+0x39>
 mov    $0x1,%eax
-jmp    <T> <_ZN5CUser26IsCompleteChannelUserCountEv+0x3c>
+jmp    <T> <_ZN5CUser26IsCompleteChannelUserCountEv+0x3e>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN5CUser26IsCompleteChannelUserCountEv+0x49>
+mov    $0x1,%eax
+jmp    <T> <_ZN5CUser26IsCompleteChannelUserCountEv+0x4e>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::IsCompleteChannelUserCount() */

undefined4 __thiscall CUser::_ZN5CUser26IsCompleteChannelUserCountEv(CUser *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0x8c) != 0) &&
     (iVar1 = std::
              map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
              ::size((map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
                      *)(this + 0x90)), iVar1 == *(int *)(this + 0x8c))) {
    return 1;
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 168 行）：

```cpp
char CUser::IsCompleteChannelUserCount()
{
    if (m_channelCount != 0 && (int)m_channelInfoMap.size() == m_channelCount)
    {
        return 1;
    }
    return 0;
}
```
