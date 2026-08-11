# _ZN13CTcpNetSystem18PushTcpSendPacketQEPc

`CTcpNetSystem::PushTcpSendPacketQ(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x8053372` | `0xe9` | `0x80a32ce` | `0xe9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,69 +1,69 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 add    $0xe8,%eax
 mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    0xc(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0xc0(%eax),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
-call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE4pushEOS1_>
+call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0xa,-0x1c(%ebp)
 jle    <T> <_ZN13CTcpNetSystem18PushTcpSendPacketQEPc+0xd6>
 mov    0xc(%ebp),%eax
 mov    0x6(%eax),%edi
 mov    0xc(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%esi
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 movl   $0x91,0x8(%esp)
 movl   $&_ZZN13CTcpNetSystem18PushTcpSendPacketQEPcE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"SEND PUSH(cnt:%d,id:%d,size:%d,ip:%d)",0x8(%esp)
 movl   $"./log/TcpSend",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN13CTcpNetSystem18PushTcpSendPacketQEPc+0xd6>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::PushTcpSendPacketQ(char*) */

void __thiscall
CTcpNetSystem::_ZN13CTcpNetSystem18PushTcpSendPacketQEPc(CTcpNetSystem *this,char *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  CGuard<CMutex> local_30 [4];
  CTcpSendBuffer *local_2c;
  CMyFileLog local_28 [8];
  int local_20;
  
  CGuard<CMutex>::CGuard(local_30,(CMutex *)(this + 0xe8));
  local_2c = (CTcpSendBuffer *)param_1;
                    /* try { // try from 080533ab to 0805342a has its CatchHandler @ 0805342d */
  std::queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>::push
            ((queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>> *)
             (this + 0xc0),&local_2c);
  local_20 = std::queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>
             ::size((queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>
                     *)(this + 0xc0));
  if (10 < local_20) {
    uVar3 = *(undefined4 *)(param_1 + 6);
    uVar1 = *(ushort *)(param_1 + 2);
    uVar2 = *(ushort *)param_1;
    CMyFileLog::CMyFileLog(local_28,"PushTcpSendPacketQ",0x91);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_28,"./log/TcpSend","SEND PUSH(cnt:%d,id:%d,size:%d,ip:%d)",local_20,(uint)uVar2
               ,(uint)uVar1,uVar3);
  }
  CGuard<CMutex>::~CGuard(local_30);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp](source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp)（约第 425 行）：

```cpp
void CTcpNetSystem::PushTcpSendPacketQ(char* buf)
{
    CGuard<CMutex> guard(&m_mutexe8);
    CTcpSendBuffer* p = (CTcpSendBuffer*)buf;
    m_sendQ.push(p);
    int size = (int)m_sendQ.size();
    if (10 < size)
    {
        DNF_LOG_SCOPE_LINE(0x91,"./log/TcpSend", "SEND PUSH(cnt:%d,id:%d,size:%d,ip:%d)", size,
            (unsigned int)*(unsigned short*)buf,
            (unsigned int)((RA_U16<2>*)buf)->v,
            ((RA_UINT<6>*)buf)->v);
    }
}
```
