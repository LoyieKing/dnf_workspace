# _ZN14statistc_proxy17addStatisticProxyEP16StatisticsPacket

`statistc_proxy::addStatisticProxy(StatisticsPacket*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x804d8f4` | `0x4f` | `0x806ab58` | `0x54` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,30 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 add    $0xa,%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
-lea    0x4c(%eax),%edi
+add    $0x85,%eax
+mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
-mov    0x85(%eax),%ebx
+lea    0x4c(%eax),%esi
 mov    0x8(%ebp),%eax
-lea    0x2b(%eax),%esi
+lea    0x2b(%eax),%ebx
 call   <T> <_Z17getStatisticProxyv>
-mov    -0x1c(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,0x10(%esp)
-mov    %edi,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    %esi,0xc(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14statistc_proxy14StatisticProxy3addEPKcjS2_S2_>
-add    $0x3c,%esp
+add    $0x30,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* statistc_proxy::addStatisticProxy(StatisticsPacket*) */

void statistc_proxy::_ZN14statistc_proxy17addStatisticProxyEP16StatisticsPacket
               (StatisticsPacket *param_1)

{
  uint uVar1;
  StatisticProxy *this;
  
  uVar1 = *(uint *)(param_1 + 0x85);
  this = (StatisticProxy *)getStatisticProxy();
  StatisticProxy::add(this,(char *)(param_1 + 0x2b),uVar1,(char *)(param_1 + 0x4c),
                      (char *)(param_1 + 10));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/StatisticProxy.cpp](source/DNFServer/GameServer/Statics/StatisticProxy.cpp)（约第 293 行）：

```cpp
void addStatisticProxy(StatisticsPacket* packet)
{
    char* p = (char*)packet + 0xa;
    unsigned int value = *(unsigned int*)((char*)packet + 0x85);
    getStatisticProxy()->add((char*)packet + 0x2b, value, (char*)packet + 0x4c, p);
}
```
