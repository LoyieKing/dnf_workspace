# _ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE

`COnTimeEventManager::ChangeState(ENUM_ONTIME_EVENT_STATE)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a47fe` | `0x23` | `0x8099806` | `0x1d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,13 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0xc(%ebp),%eax
 test   %eax,%eax
-js     <T> <_ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE+0x1d>
+js     <T> <_ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE+0x1b>
 mov    0xc(%ebp),%eax
 cmp    $0x3,%eax
-jg     <T> <_ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE+0x20>
+jg     <T> <_ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE+0x1b>
+mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
 mov    %edx,0x2c(%eax)
-jmp    <T> <_ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE+0x21>
-nop
-jmp    <T> <_ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE+0x21>
-nop
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::ChangeState(ENUM_ONTIME_EVENT_STATE) */

void __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager11ChangeStateE23ENUM_ONTIME_EVENT_STATE
          (COnTimeEventManager *this,int param_2)

{
  if ((-1 < param_2) && (param_2 < 4)) {
    *(int *)(this + 0x2c) = param_2;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 60 行）：

```cpp
void COnTimeEventManager::ChangeState(ENUM_ONTIME_EVENT_STATE state)
{
    if (-1 < (int)state && (int)state < 4)
    {
        m_state2c = (int)state;
    }
}
```
