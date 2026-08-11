# _ZN15RelayServiceApp7TCPUser7onCloseEv

`RelayServiceApp::TCPUser::onClose()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805ceb4` | `0x4f` | `0x805c278` | `0x4f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x10(%eax),%eax
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv+0x4c>
+je     <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv+0x4d>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService23disconnectEvent2TCPUserEPNS_7TCPUserE>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv+0x43>
+je     <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv+0x46>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket5closeEv>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x10(%eax)
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv+0x4d>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPUser::onClose() */

void __thiscall RelayServiceApp::TCPUser::_ZN15RelayServiceApp7TCPUser7onCloseEv(TCPUser *this)

{
  RelayService *this_00;
  
  if (this[0x10] == (TCPUser)0x0) {
    this_00 = (RelayService *)
              TManager<RelayServiceApp::RelayService>::getManager
                        ((TManager<RelayServiceApp::RelayService> *)this);
    RelayService::disconnectEvent2TCPUser(this_00,this);
    if (*(int *)(this + 0x1c) != 0) {
      TCPSocket::close(*(TCPSocket **)(this + 0x1c));
    }
    this[0x10] = (TCPUser)0x1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 91 行）：

```cpp
void ChannelServiceApp::TCPUser::onClose(char* file, int line)
{
    GLOG(ChannelServiceApp::gFileLogInfo, "call onClose from " << file << ", " << line << ", TCPUSER=" << getACCID()
        << ", error=" << strerror(*__errno_location()));
    if (bDisconnected_)
        return;
    getManager()->UserPools::destroyTCPUser(this, "TCPUser.cpp", 0x6a);
    if (pSock_ != NULL)
    {
        pSock_->close();
    }
    bDisconnected_ = true;
}
```
