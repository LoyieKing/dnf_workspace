# _ZN19CEventActionManager11OnEndActionEj

`CEventActionManager::OnEndAction(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a40b0` | `0x25` | `0x8092e8a` | `0x22` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0xa5,0xc(%ebp)
-ja     <T> <_ZN19CEventActionManager11OnEndActionEj+0x22>
+ja     <T> <_ZN19CEventActionManager11OnEndActionEj+0x20>
 mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CBaseEventAction10OnEndEventEv>
-jmp    <T> <_ZN19CEventActionManager11OnEndActionEj+0x23>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CEventActionManager::OnEndAction(unsigned int) */

void __thiscall
CEventActionManager::_ZN19CEventActionManager11OnEndActionEj(CEventActionManager *this,uint param_1)

{
  if (param_1 < 0xa6) {
    CBaseEventAction::_ZN16CBaseEventAction10OnEndEventEv
              (*(CBaseEventAction **)(this + param_1 * 4));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/EventActionManager.cpp](source/DNFServer/GameServer/Monitor/EventActionManager.cpp)（约第 158 行）：

```cpp
void CEventActionManager::OnEndAction(unsigned int code)
{
    if (code < 0xa6)
    {
        m_actions[code]->OnEndEvent();
    }
}
```
