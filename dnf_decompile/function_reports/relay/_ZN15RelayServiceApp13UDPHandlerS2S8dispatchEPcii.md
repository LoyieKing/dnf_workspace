# _ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii

`RelayServiceApp::UDPHandlerS2S::dispatch(char*, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805e406` | `0x90` | `0x805da50` | `0x8e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0xc(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
 movzwl (%eax),%eax
-movzwl %ax,%eax
-cmp    $0x1,%eax
-je     <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x89>
-cmp    $0x9c4,%eax
-je     <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x4e>
-test   %eax,%eax
-jne    <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x8a>
+mov    %ax,-0x12(%ebp)
+cmpw   $0x1,-0x12(%ebp)
+je     <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x88>
+cmpw   $0x9c4,-0x12(%ebp)
+jne    <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x5b>
 mov    0xc(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    0x8(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN15RelayServiceApp12RelayService16setAuthenticatedEj>
-jmp    <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x8a>
-mov    0xc(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
 movzbl 0xe(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x8a>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x88>
+mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 movl   $0x3,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService27postDisconnectEvent2TCPUserEji>
-jmp    <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x8a>
-nop
+jmp    <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x88>
+cmpw   $0x0,-0x12(%ebp)
+jne    <T> <_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii+0x88>
+mov    0xc(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    0xa(%eax),%ebx
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN15RelayServiceApp12RelayService16setAuthenticatedEj>
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::UDPHandlerS2S::dispatch(char*, int, int) */

void RelayServiceApp::UDPHandlerS2S::_ZN15RelayServiceApp13UDPHandlerS2S8dispatchEPcii
               (char *param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  RelayService *this;
  
  sVar1 = *(short *)param_2;
  if (sVar1 != 1) {
    if (sVar1 == 0x9c4) {
      if (*(char *)(param_2 + 0xe) == '\0') {
        uVar2 = *(uint *)(param_2 + 10);
        this = (RelayService *)
               TManager<RelayServiceApp::RelayService>::getManager
                         ((TManager<RelayServiceApp::RelayService> *)(param_1 + 4));
        RelayService::postDisconnectEvent2TCPUser(this,uVar2,3);
      }
    }
    else if (sVar1 == 0) {
      uVar2 = TManager<RelayServiceApp::RelayService>::getManager
                        ((TManager<RelayServiceApp::RelayService> *)(param_1 + 4));
      RelayService::setAuthenticated(uVar2);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/UDPHandler.cpp](source/DNFServer/GameServer/Relay/UDPHandler.cpp)（约第 36 行）：

```cpp
void UDPHandlerS2S::dispatch(char* buf, int size, int flag)
{
    // 语义还原（2026-08-11 用户规矩：不允许硬套 asm）。
    // ORIG 的 switch 判定链/块序/nop 落地无法用纯 C++ 逐字节复现，
    // 按规矩归入 caliber_issues.csv（REMAIN）。
    short type = *(short*)buf;
    if (type != 1)
    {
        if (type == 0x9c4)
        {
            PacketHeaderS2S* p = (PacketHeaderS2S*)buf;
            if (p->m_g == 0)
            {
                getManager()->postDisconnectEvent2TCPUser(p->m_f, 3);
            }
        }
        else if (type == 0)
        {
            PacketHeaderS2S* q = (PacketHeaderS2S*)buf;
            getManager()->setAuthenticated(q->m_f);
        }
    }
}
```
