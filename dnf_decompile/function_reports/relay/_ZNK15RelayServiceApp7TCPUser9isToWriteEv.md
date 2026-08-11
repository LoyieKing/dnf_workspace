# _ZNK15RelayServiceApp7TCPUser9isToWriteEv

`RelayServiceApp::TCPUser::isToWrite() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805d57a` | `0x22` | `0x805bf1c` | `0x1d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,11 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0x1902c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE15getPushedLengthEv>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-setg   %al
+test   %eax,%eax
+setne  %al
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPUser::isToWrite() const */

bool __thiscall RelayServiceApp::TCPUser::_ZNK15RelayServiceApp7TCPUser9isToWriteEv(TCPUser *this)

{
  int iVar1;
  
  iVar1 = TDoubleCircularQueueBuffer<51200u>::getPushedLength
                    ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x1902c));
  return 0 < iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 63 行）：

```cpp
bool ChannelServiceApp::TCPUser::isToWrite() const
{
    int nSize = bufferSend_.getPushedLength();
    return 0 < nSize;
}
```
