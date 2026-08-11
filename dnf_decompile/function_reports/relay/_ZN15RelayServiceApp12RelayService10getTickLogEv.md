# _ZN15RelayServiceApp12RelayService10getTickLogEv

`RelayServiceApp::RelayService::getTickLog()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x8051c10` | `0x46` | `0x8051fe8` | `0x46` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x4,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x1d4(%eax),%edx
 mov    0x1d0(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
 jne    <T> <_ZN15RelayServiceApp12RelayService10getTickLogEv+0x35>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp12RelayService7getTickEv>
 mov    0x8(%ebp),%ecx
 mov    %eax,0x1d0(%ecx)
 mov    %edx,0x1d4(%ecx)
 mov    0x8(%ebp),%eax
 mov    0x1d4(%eax),%edx
 mov    0x1d0(%eax),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::RelayService::getTickLog() */

undefined8 __thiscall
RelayServiceApp::RelayService::_ZN15RelayServiceApp12RelayService10getTickLogEv(RelayService *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0x1d0) == 0 && *(int *)(this + 0x1d4) == 0) {
    uVar1 = getTick(this);
    *(undefined8 *)(this + 0x1d0) = uVar1;
  }
  return *(undefined8 *)(this + 0x1d0);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/RelayService.cpp](source/DNFServer/GameServer/Relay/RelayService.cpp)（约第 268 行）：

```cpp
long long RelayService::getTickLog()
{
    if (m_tickLog == 0)
    {
        m_tickLog = getTick();
    }
    return m_tickLog;
}
```
