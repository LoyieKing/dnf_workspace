# _ZN7CMember21SetMemberRegisterFlagEb

`CMember::SetMemberRegisterFlag(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806e5bc` | `0x1b` | `0x805fc72` | `0x29` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x4(%ebp)
-mov    0x8(%ebp),%eax
-movzbl -0x4(%ebp),%edx
-mov    %dl,0x1b8(%eax)
+cmpb   $0x0,-0x4(%ebp)
+je     <T> <_ZN7CMember21SetMemberRegisterFlagEb+0x19>
+mov    $0x1,%eax
+jmp    <T> <_ZN7CMember21SetMemberRegisterFlagEb+0x1e>
+mov    $0x0,%eax
+mov    0x8(%ebp),%edx
+mov    %al,0x1b8(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::SetMemberRegisterFlag(bool) */

void __thiscall CMember::_ZN7CMember21SetMemberRegisterFlagEb(CMember *this,bool param_1)

{
  this[0x1b8] = (CMember)param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 149 行）：

```cpp
void CMember::SetMemberRegisterFlag(bool flag)
{
    m_state1b8 = flag ? 1 : 0;
}
```
