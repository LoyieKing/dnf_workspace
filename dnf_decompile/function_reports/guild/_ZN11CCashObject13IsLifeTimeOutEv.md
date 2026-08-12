# _ZN11CCashObject13IsLifeTimeOutEv

`CCashObject::IsLifeTimeOut()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a16d6` | `0x2c` | `0x804b128` | `0x34` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
+sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 sete   %al
-test   %al,%al
-je     <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x25>
+mov    %al,-0x1(%ebp)
+cmpb   $0x0,-0x1(%ebp)
+je     <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x2d>
 mov    $0x1,%eax
-jmp    <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x2a>
+jmp    <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x32>
 mov    $0x0,%eax
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CCashObject::IsLifeTimeOut() */

bool __thiscall CCashObject::_ZN11CCashObject13IsLifeTimeOutEv(CCashObject *this)

{
  *(int *)this = *(int *)this + -1;
  return *(int *)this == 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/CashObject.cpp](source/DNFServer/GameServer/Guild/CashObject.cpp)（约第 93 行）：

```cpp
bool CCashObject::IsLifeTimeOut()
{
    m_lifeTime -= 1;
    bool flag = (m_lifeTime == 0);
    if (flag)
    {
        return true;
    }
    return false;
}
```
