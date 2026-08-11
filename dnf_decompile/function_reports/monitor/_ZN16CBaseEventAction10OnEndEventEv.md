# _ZN16CBaseEventAction10OnEndEventEv

`CBaseEventAction::OnEndEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80a4386` | `0x2d` | `0x8092aae` | `0x2d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CBaseEventAction18sendEventAckUpdateEi>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0xc,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBaseEventAction::OnEndEvent() */

void __thiscall CBaseEventAction::_ZN16CBaseEventAction10OnEndEventEv(CBaseEventAction *this)

{
  sendEventAckUpdate(this,4);
  (**(code **)(*(int *)this + 0xc))(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/EventActionManager.cpp](source/DNFServer/GameServer/Monitor/EventActionManager.cpp)（约第 64 行）：

```cpp
void CBaseEventAction::OnEndEvent()
{
    sendEventAckUpdate(4);
    onEndAction();
}
```
