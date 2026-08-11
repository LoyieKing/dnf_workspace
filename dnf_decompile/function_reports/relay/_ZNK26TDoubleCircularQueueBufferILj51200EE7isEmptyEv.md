# _ZNK26TDoubleCircularQueueBufferILj51200EE7isEmptyEv

`TDoubleCircularQueueBuffer<51200u>::isEmpty() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805e1a2` | `0x1b` | `0x805cc70` | `0x18` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,11 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
 test   %eax,%eax
 sete   %al
-movzbl %al,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TDoubleCircularQueueBuffer<51200u>::isEmpty() const */

bool __thiscall
TDoubleCircularQueueBuffer<51200u>::_ZNK26TDoubleCircularQueueBufferILj51200EE7isEmptyEv
          (TDoubleCircularQueueBuffer<51200u> *this)

{
  int iVar1;
  
  iVar1 = getPushedLength(this);
  return iVar1 == 0;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 264 行）：

```cpp
    else if (bufferSend_.isEmpty() != 0)
    {
        GLOG(ChannelServiceApp::gFileLogInfo, "onWrite_ : Error(4)");
    }
```
