# _ZN15RelayServiceApp9UDPThreadC1Ev

`RelayServiceApp::UDPThread::UDPThread()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x805e5b8` | `0x78` | `0x805da80` | `0x78` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,38 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6ThreadC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEEC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTVN15RelayServiceApp9UDPThreadE+0x8,(%eax)
 mov    0x8(%ebp),%eax
+movl   $0x0,0x1c(%eax)
+mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x20(%eax)
 call   <T> <_Z11get_ms_tickv>
 mov    0x8(%ebp),%ecx
 mov    %eax,0x24(%ecx)
 mov    %edx,0x28(%ecx)
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6ThreadD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::UDPThread::UDPThread() */

void __thiscall RelayServiceApp::UDPThread::_ZN15RelayServiceApp9UDPThreadC1Ev(UDPThread *this)

{
  undefined8 uVar1;
  
  Thread::Thread((Thread *)this);
  TManager<RelayServiceApp::RelayService>::TManager();
  *(undefined ***)this = &PTR__UDPThread_08071d80;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
                    /* try { // try from 0805e600 to 0805e604 has its CatchHandler @ 0805e615 */
  uVar1 = get_ms_tick();
  *(undefined8 *)(this + 0x24) = uVar1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/UDPThread.cpp](source/ChannelOld/DNFChannelBridge/UDPThread.cpp)（约第 7 行）：

```cpp
ChannelServiceApp::UDPThread::UDPThread()
    : Thread(), TManager<ChannelService>()
{
    pHandler_ = NULL;
}
```
