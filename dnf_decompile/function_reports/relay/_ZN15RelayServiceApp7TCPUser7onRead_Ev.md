# _ZN15RelayServiceApp7TCPUser7onRead_Ev

`RelayServiceApp::TCPUser::onRead_()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805cf8a` | `0xa3` | `0x805bff4` | `0xa6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK26TDoubleCircularQueueBufferILj51200EE17getAvailableSpaceEv>
-mov    %eax,%ebx
+mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE8peekPushEv>
-mov    0x8(%ebp),%edx
-mov    0x1c(%edx),%edx
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x1c(%eax),%eax
+mov    -0x14(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket4recvEPci>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jle    <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev+0x77>
-mov    0x8(%ebp),%eax
-lea    0x20(%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jns    <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev+0x92>
+jg     <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev+0x68>
+cmpl   $0x0,-0xc(%ebp)
+jns    <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev+0x99>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev+0x9d>
-cmpl   $0x0,-0x10(%ebp)
-jns    <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev+0x92>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev+0xa4>
+mov    0x8(%ebp),%eax
+lea    0x20(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN26TDoubleCircularQueueBufferILj51200EE9pushIndexEi>
+shr    $0x1f,%eax
+test   %al,%al
+je     <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev+0x99>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev+0x9d>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev+0xa4>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser13onPacketParseEv>
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPUser::onRead_() */

void __thiscall RelayServiceApp::TCPUser::_ZN15RelayServiceApp7TCPUser7onRead_Ev(TCPUser *this)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = TDoubleCircularQueueBuffer<51200u>::getAvailableSpace
                    ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20));
  pcVar2 = (char *)TDoubleCircularQueueBuffer<51200u>::peekPush
                             ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20));
  iVar1 = TCPSocket::recv(*(TCPSocket **)(this + 0x1c),pcVar2,iVar1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      postDisconnected(this,1);
      return;
    }
  }
  else {
    iVar1 = TDoubleCircularQueueBuffer<51200u>::pushIndex
                      ((TDoubleCircularQueueBuffer<51200u> *)(this + 0x20),iVar1);
    if (iVar1 < 0) {
      postDisconnected(this,1);
      return;
    }
  }
  _ZN15RelayServiceApp7TCPUser13onPacketParseEv(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 115 行）：

```cpp
void ChannelServiceApp::TCPUser::onRead_()
{
    char buf[0xa0000];
    int nRead = pSock_->recv(buf, 0xa0000);
    GLOG(ChannelServiceApp::gFileLogInfo, "TCPUser.cpp" << " read=" << nRead);
    if (nRead >= 1)
    {
        int nRet = bufferRecv_.push(buf, nRead, "TCPUser.cpp", 0x96);
        if (nRet < 0)
        {
            postDisconnected(0);
            return;
        }
    }
    else if (nRead < 0)
    {
        postDisconnected(1);
        return;
    }
    do
    {
        if ((unsigned int)bufferRecv_.getPopLengthToEnd() > 0xa)
        {
            char* s = (char*)bufferRecv_.peekPop();
            tagPacketHeader* hdr = (tagPacketHeader*)s;
            int nMessageSize = hdr->getSize();
            if ((0xa0000 < nMessageSize) || (nMessageSize < 1))
            {
                postDisconnected(2);
                return;
            }
            if (nMessageSize >= 1)
            {
                if (bufferRecv_.isPopStraight(nMessageSize))
                {
                    TManager<ChannelService>::getManager()->getTCPHandlerRelay()->dispatch(this, s, nMessageSize, 0);
                    if (bufferRecv_.pop(nMessageSize) < 0)
                    {
                        GLOG(ChannelServiceApp::gFileLogInfo, "1.\xbf\xa9\xb1\xe2\xbc\xad pop error \x20\xb0\xa1 \xb6\xb3\xbe\xee\xc1\xf6\xb8\xe9 \xbe\xc8\xb5\xc8\xb4\xd9.");
                        postDisconnected(3);
                        return;
                    }
                }
                else
                {
                    if (bufferRecv_.getPushedLength() >= nMessageSize)
                    {
                        char szBuf[nMessageSize];
                        if (bufferRecv_.popCopy(nMessageSize, szBuf))
                        {
                            TManager<ChannelService>::getManager()->getTCPHandlerRelay()->dispatch(this, szBuf, nMessageSize, 0);
                        }
                        else
                        {
                            GLOG(ChannelServiceApp::gFileLogInfo, "1.\xbf\xa9\xb1\xe2\xbc\xad pop error \x20\xb0\xa1 \xb6\xb3\xbe\xee\xc1\xf6\xb8\xe9 \xbe\xc8\xb5\xc8\xb4\xd9.");
                            postDisconnected(4);
                            return;
                        }
                    }
                    else
                    {
                        GLOG(ChannelServiceApp::gFileLogInfo, "0.need more body data : messagesize=" << nMessageSize);
                        return;
                    }
                }
            }
            else
            {
                GLOG(ChannelServiceApp::gFileLogInfo, "recv critical error occure!");
                postDisconnected(5);
                return;
            }
        }
        else
        {
            if ((unsigned int)bufferRecv_.getPushedLength() < 0xb)
            {
                return;
            }
            char s[12];
            if (bufferRecv_.peekCopy(0xb, s))
            {
                tagPacketHeader* hdr = (tagPacketHeader*)s;
                int nMessageSize = hdr->getSize();
                if ((0xa0000 < nMessageSize) || (nMessageSize < 1))
                {
                    postDisconnected(6);
                    return;
                }
                if (nMessageSize >= 1)
                {
                    if (bufferRecv_.getPushedLength() >= nMessageSize)
                    {
                        char szBuf[nMessageSize];
                        if (bufferRecv_.popCopy(nMessageSize, szBuf))
                        {
                            TManager<ChannelService>::getManager()->getTCPHandlerRelay()->dispatch(this, szBuf, nMessageSize, 0);
                        }
                        else
                        {
                            GLOG(ChannelServiceApp::gFileLogInfo, "1.\xbf\xa9\xb1\xe2\xbc\xad pop error \x20\xb0\xa1 \xb6\xb3\xbe\xee\xc1\xf6\xb8\xe9 \xbe\xc8\xb5\xc8\xb4\xd9.");
                            postDisconnected(7);
                            return;
                        }
                    }
                    else
                    {
                        GLOG(ChannelServiceApp::gFileLogInfo, "2.need more body data : messagesize=" << nMessageSize);
                        return;
                    }
                }
                else
                {
                    GLOG(ChannelServiceApp::gFileLogInfo, "2.recv critical error occure!");
                    postDisconnected(8);
                    return;
                }
            }
            else
            {
                GLOG(ChannelServiceApp::gFileLogInfo, "3.recv critical error occure!");
                postDisconnected(9);
                return;
            }
        }
    } while (!bufferRecv_.isEmpty());
}
```
