# _ZN14CTaskScheduler11ProcessTaskEj

`CTaskScheduler::ProcessTask(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809c5a0` | `0x88` | `0x80a05f4` | `0x85` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,40 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14priority_queueIN14CTaskScheduler10CTaskProxyESt6vectorIS1_SaIS1_EESt4lessIS1_EE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14CTaskScheduler11ProcessTaskEj+0x82>
+je     <T> <_ZN14CTaskScheduler11ProcessTaskEj+0x83>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14priority_queueIN14CTaskScheduler10CTaskProxyESt6vectorIS1_SaIS1_EESt4lessIS1_EE3topEv>
 mov    %eax,0x4(%esp)
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler10CTaskProxyC1ERKS0_>
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK14CTaskScheduler10CTaskProxy15GetDeliveryTimeEv>
 cmp    0xc(%ebp),%eax
 setbe  %al
 test   %al,%al
-je     <T> <_ZN14CTaskScheduler11ProcessTaskEj+0x85>
+je     <T> <_ZN14CTaskScheduler11ProcessTaskEj+0x83>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt14priority_queueIN14CTaskScheduler10CTaskProxyESt6vectorIS1_SaIS1_EESt4lessIS1_EE3popEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14priority_queueIN14CTaskScheduler10CTaskProxyESt6vectorIS1_SaIS1_EESt4lessIS1_EE4sizeEv>
 mov    %eax,0x4(%esp)
 movl   $"m_queTask pop size(%d)\n",(%esp)
 call   <T> <printf>
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler10CTaskProxy8DoExcuteEv>
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler10CTaskProxy7DestroyEv>
-jmp    <T> <_ZN14CTaskScheduler11ProcessTaskEj+0x86>
-nop
-jmp    <T> <_ZN14CTaskScheduler11ProcessTaskEj+0x86>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTaskScheduler::ProcessTask(unsigned int) */

void __thiscall
CTaskScheduler::_ZN14CTaskScheduler11ProcessTaskEj(CTaskScheduler *this,uint param_1)

{
  char cVar1;
  CTaskProxy *pCVar2;
  uint uVar3;
  undefined4 uVar4;
  CTaskProxy local_10 [12];
  
  cVar1 = std::
          priority_queue<CTaskScheduler::CTaskProxy,std::vector<CTaskScheduler::CTaskProxy,std::allocator<CTaskScheduler::CTaskProxy>>,std::less<CTaskScheduler::CTaskProxy>>
          ::empty();
  if (cVar1 == '\0') {
    pCVar2 = (CTaskProxy *)
             std::
             priority_queue<CTaskScheduler::CTaskProxy,std::vector<CTaskScheduler::CTaskProxy,std::allocator<CTaskScheduler::CTaskProxy>>,std::less<CTaskScheduler::CTaskProxy>>
             ::top();
    CTaskProxy::CTaskProxy(local_10,pCVar2);
    uVar3 = CTaskProxy::GetDeliveryTime(local_10);
    if (uVar3 <= param_1) {
      std::
      priority_queue<CTaskScheduler::CTaskProxy,std::vector<CTaskScheduler::CTaskProxy,std::allocator<CTaskScheduler::CTaskProxy>>,std::less<CTaskScheduler::CTaskProxy>>
      ::pop((priority_queue<CTaskScheduler::CTaskProxy,std::vector<CTaskScheduler::CTaskProxy,std::allocator<CTaskScheduler::CTaskProxy>>,std::less<CTaskScheduler::CTaskProxy>>
             *)this);
      uVar4 = std::
              priority_queue<CTaskScheduler::CTaskProxy,std::vector<CTaskScheduler::CTaskProxy,std::allocator<CTaskScheduler::CTaskProxy>>,std::less<CTaskScheduler::CTaskProxy>>
              ::size((priority_queue<CTaskScheduler::CTaskProxy,std::vector<CTaskScheduler::CTaskProxy,std::allocator<CTaskScheduler::CTaskProxy>>,std::less<CTaskScheduler::CTaskProxy>>
                      *)this);
      printf("m_queTask pop size(%d)\n",uVar4);
      CTaskProxy::_ZN14CTaskScheduler10CTaskProxy8DoExcuteEv(local_10);
      CTaskProxy::_ZN14CTaskScheduler10CTaskProxy7DestroyEv(local_10);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TaskScheduler.cpp](source/DNFServer/GameServer/Monitor/TaskScheduler.cpp)（约第 49 行）：

```cpp
void CTaskScheduler::ProcessTask(unsigned int tick)
{
    if (!m_queue.empty())
    {
        CTaskProxy proxy = m_queue.top();
        if (proxy.GetDeliveryTime() <= tick)
        {
            m_queue.pop();
            printf("m_queTask pop size(%d)\n", (unsigned int)m_queue.size());
            proxy.DoExcute();
            proxy.Destroy();
        }
    }
}
```
