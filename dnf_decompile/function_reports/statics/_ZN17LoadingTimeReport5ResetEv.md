# _ZN17LoadingTimeReport5ResetEv

`LoadingTimeReport::Reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8076a90` | `0x3e` | `0x8065f6a` | `0x3d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,19 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 movl   $0x0,-0x4(%ebp)
-jmp    <T> <_ZN17LoadingTimeReport5ResetEv+0x31>
+jmp    <T> <_ZN17LoadingTimeReport5ResetEv+0x30>
 mov    -0x4(%ebp),%edx
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax,%edx,4)
-mov    -0x4(%ebp),%edx
+mov    -0x4(%ebp),%eax
+lea    0x9(%eax),%edx
 mov    0x8(%ebp),%eax
-add    $0x8,%edx
-movl   $0x0,0x4(%eax,%edx,4)
+movl   $0x0,(%eax,%edx,4)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x8,-0x4(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17LoadingTimeReport5ResetEv+0xf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* LoadingTimeReport::Reset() */

void __thiscall LoadingTimeReport::_ZN17LoadingTimeReport5ResetEv(LoadingTimeReport *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 4) = 0;
    *(undefined4 *)(this + (local_8 + 8) * 4 + 4) = 0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/GMAccounts.cpp](source/DNFServer/GameServer/Statics/GMAccounts.cpp)（约第 403 行）：

```cpp
void LoadingTimeReport::Reset()
{
    for (int i = 0; i < 9; i++)
    {
        m_data[i] = 0;
        m_data[i + 9] = 0;
    }
}
```
