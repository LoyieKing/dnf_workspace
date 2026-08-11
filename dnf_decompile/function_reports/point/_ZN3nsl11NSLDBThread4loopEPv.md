# _ZN3nsl11NSLDBThread4loopEPv

`nsl::NSLDBThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80a5a52` | `0xa7` | `0x807e400` | `0xab` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11Dispatchers15getDBDispatcherEv>
-mov    %eax,-0x10(%ebp)
-jmp    <T> <_ZN3nsl11NSLDBThread4loopEPv+0x1c>
-nop
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread14PopTransactionEv>
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell7GetDBTrEv>
-mov    %eax,-0xc(%ebp)
+movzbl 0xc(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN3nsl11NSLDBThread4loopEPv+0x19>
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN3nsl11NSLDBThread4loopEPv+0x1b>
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN3nsl12DBDispatcher8dispatchEPNS_7MessageE>
-mov    -0xc(%ebp),%eax
+call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8CMsgCell7GetDBTrEv>
 movb   $0x1,0xc(%eax)
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
-mov    -0x14(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool14destroyMessageEPNS_7MessageE>
 mov    0x8(%ebp),%eax
 mov    0x40(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x40(%eax)
-jmp    <T> <_ZN3nsl11NSLDBThread4loopEPv+0x1c>
+jmp    <T> <_ZN3nsl11NSLDBThread4loopEPv+0x19>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void loop(NSLDBThread * this, void * temp) */

void __thiscall nsl::NSLDBThread::_ZN3nsl11NSLDBThread4loopEPv(NSLDBThread *this,void *temp)

{
  DBDispatcher *this_00;
  Message *this_01;
  CMsgCell *this_02;
  LPDBTR_HEADER pDVar1;
  CommonDataPool *this_03;
  int in_GS_OFFSET;
  
                    /* Unresolved local var: Message * pMsg@[???]
                       Unresolved local var: DBDispatcher * pDbDispatcher@[???] */
  this_00 = Dispatchers::getDBDispatcher(&pApp->super_Dispatchers);
  do {
    do {
                    /* Unresolved local var: LPDBTR_HEADER pDbTr@[???] */
      this_01 = PopTransaction(this);
      this_02 = Message::getCellFromMessage(this_01);
      pDVar1 = CMsgCell::GetDBTr(this_02);
    } while (pDVar1->mbWillDelete == true);
    DBDispatcher::dispatch(this_00,this_01);
    pDVar1->mbWillDelete = true;
    this_03 = DataPools::getCommonDataPool(&pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    CommonDataPool::destroyMessage(this_03,this_01);
    this->mTransactionCntPerSec = this->mTransactionCntPerSec + 1;
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/NSLDBThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/NSLDBThread.cpp)（约第 54 行）：

```cpp
void NSLDBThread::loop(void* temp)
{
    Message* pMsg;
    DBDispatcher* pDbDispatcher = pApp->super_Dispatchers.getDBDispatcher();
    while (true)
    {
        do
        {
            pMsg = PopTransaction();
        } while (pMsg->getCellFromMessage()->GetDBTr()->mbWillDelete == true);
        pDbDispatcher->dispatch(pMsg);
        pMsg->getCellFromMessage()->GetDBTr()->mbWillDelete = true;
        pApp->super_DataPools.getCommonDataPool(tlsThreadId)->destroyMessage(pMsg);
        mTransactionCntPerSec = mTransactionCntPerSec + 1;
    }
}
```
