# _ZN28TowerOfDespairReloadAPC_TaskC2Ejj

`TowerOfDespairReloadAPC_Task::TowerOfDespairReloadAPC_Task(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8066782` | `0x2a` | `0x80a66bc` | `0x1c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN14CTaskScheduler5CTaskC1Ejj>
+call   <T> <_ZN14CTaskScheduler5CTaskC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV28TowerOfDespairReloadAPC_Task+0x8,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TowerOfDespairReloadAPC_Task::TowerOfDespairReloadAPC_Task(unsigned int, unsigned int) */

void __thiscall
TowerOfDespairReloadAPC_Task::_ZN28TowerOfDespairReloadAPC_TaskC2Ejj
          (TowerOfDespairReloadAPC_Task *this,uint param_1,uint param_2)

{
  CTaskScheduler::CTask::_ZN14CTaskScheduler5CTaskC2Ejj((CTask *)this,param_1,param_2);
  *(undefined ***)this = &PTR__DoExecute_0811e8b0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TowerOfDespairReloadAPC.cpp](source/DNFServer/GameServer/Monitor/TowerOfDespairReloadAPC.cpp)（约第 34 行）：

```cpp
TowerOfDespairReloadAPC_Task::TowerOfDespairReloadAPC_Task(unsigned int a, unsigned int b) {}
```
