# _ZN19CEventActionManager4initEv

`CEventActionManager::init()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a3f4c` | `0xc0` | `0x80932ae` | `0x112` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,86 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x24,%esp
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN19CEventActionManager4initEv+0x4d>
+sub    $0x2c,%esp
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN19CEventActionManager4initEv+0x69>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CNullEventActionC1Ev>
-mov    %ebx,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%edx
+jmp    <T> <_ZN19CEventActionManager4initEv+0x44>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CBaseEventAction10SetEventIDEi>
-mov    -0x10(%ebp),%edx
-mov    -0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    -0x1c(%ebp),%ecx
 mov    0x8(%ebp),%eax
 mov    %ecx,(%eax,%edx,4)
-addl   $0x1,-0x10(%ebp)
-cmpl   $0xa5,-0x10(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0xa5,-0x20(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN19CEventActionManager4initEv+0x10>
+jne    <T> <_ZN19CEventActionManager4initEv+0x12>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18COnTimeEventActionC1Ev>
-mov    %ebx,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN19CEventActionManager4initEv+0xa9>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 movl   $0x33,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CBaseEventAction10SetEventIDEi>
-mov    -0x14(%ebp),%edx
+mov    -0x24(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xcc(%eax)
 movl   $0xc,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12momiji_event11EventActionC1Ev>
+jmp    <T> <_ZN19CEventActionManager4initEv+0xfd>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x26c(%eax)
-add    $0x24,%esp
+add    $0x2c,%esp
 pop    %ebx
+pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CEventActionManager::init() */

void __thiscall CEventActionManager::_ZN19CEventActionManager4initEv(CEventActionManager *this)

{
  CNullEventAction *this_00;
  COnTimeEventAction *this_01;
  EventAction *this_02;
  int local_14;
  
  for (local_14 = 0; local_14 < 0xa6; local_14 = local_14 + 1) {
    this_00 = operator_new(8);
    CNullEventAction::_ZN16CNullEventActionC2Ev(this_00);
    CBaseEventAction::SetEventID((CBaseEventAction *)this_00,local_14);
    *(CNullEventAction **)(this + local_14 * 4) = this_00;
  }
  this_01 = operator_new(8);
  COnTimeEventAction::_ZN18COnTimeEventActionC2Ev(this_01);
  CBaseEventAction::SetEventID((CBaseEventAction *)this_01,0x33);
  *(COnTimeEventAction **)(this + 0xcc) = this_01;
  this_02 = operator_new(0xc);
  momiji_event::EventAction::_ZN12momiji_event11EventActionC2Ev(this_02);
  *(EventAction **)(this + 0x26c) = this_02;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/EventActionManager.cpp](source/DNFServer/GameServer/Monitor/EventActionManager.cpp)（约第 119 行）：

```cpp
void CEventActionManager::init()
{
    for (int i = 0; i < 0xa6; i++)
    {
        CNullEventAction* a = new CNullEventAction;
        a->SetEventID(i);
        m_actions[i] = a;
    }
    COnTimeEventAction* ot = new COnTimeEventAction;
    ot->SetEventID(0x33);
    m_actions[0x33] = ot;
    m_actions[0x9b] = new momiji_event::EventAction;
}
```
