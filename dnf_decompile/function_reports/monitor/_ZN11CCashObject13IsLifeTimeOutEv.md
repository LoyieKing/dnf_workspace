# _ZN11CCashObject13IsLifeTimeOutEv

`CCashObject::IsLifeTimeOut()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a032e` | `0x3d` | `0x804d660` | `0x38` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x14>
 mov    $0x0,%eax
-jmp    <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x3b>
+jmp    <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x36>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x36>
+jne    <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x31>
 mov    $0x1,%eax
-jmp    <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x3b>
+jmp    <T> <_ZN11CCashObject13IsLifeTimeOutEv+0x36>
 mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CCashObject::IsLifeTimeOut() */

undefined4 __thiscall CCashObject::_ZN11CCashObject13IsLifeTimeOutEv(CCashObject *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == -1) {
    uVar1 = 0;
  }
  else {
    *(int *)this = *(int *)this + -1;
    if (*(int *)this == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/CashObject.cpp](source/DNFServer/GameServer/Monitor/CashObject.cpp)（约第 167 行）：

```cpp
char CCashObject::IsLifeTimeOut()
{
    if (m_lifeTime == -1)
    {
        return 0;
    }
    m_lifeTime = m_lifeTime - 1;
    if (m_lifeTime == 0)
    {
        return 1;
    }
    return 0;
}
```
