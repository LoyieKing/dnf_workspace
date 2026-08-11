# _ZN5CUser21ResetChannelUserCountEi

`CUser::ResetChannelUserCount(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80930e0` | `0x24` | `0x8088b8c` | `0x24` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
+mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
 mov    %edx,0x8c(%eax)
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::ResetChannelUserCount(int) */

void __thiscall CUser::_ZN5CUser21ResetChannelUserCountEi(CUser *this,int param_1)

{
  *(int *)(this + 0x8c) = param_1;
  std::
  map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
  ::clear((map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
           *)(this + 0x90));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 157 行）：

```cpp
void CUser::ResetChannelUserCount(int count)
{
    m_channelCount = count;
    m_channelInfoMap.clear();
}
```
