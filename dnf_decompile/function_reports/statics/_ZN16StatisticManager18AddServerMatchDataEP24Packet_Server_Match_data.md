# _ZN16StatisticManager18AddServerMatchDataEP24Packet_Server_Match_data

`StatisticManager::AddServerMatchData(Packet_Server_Match_data*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80744fe` | `0x54` | `0x8074366` | `0x64` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
+mov    0x8(%ebp),%eax
+lea    0x438(%eax),%edx
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movsbl %al,%edx
+add    $0xa,%eax
+movzbl (%eax),%eax
+movsbl %al,%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    %edx,0x438(%eax)
+add    $0x43c,%eax
+mov    0x8(%ebp),%edx
+add    $0x43c,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0xb,%edx
+movzbl (%edx),%edx
+movsbl %dl,%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
-mov    0x43c(%eax),%edx
-mov    0xc(%ebp),%eax
-movzbl 0xb(%eax),%eax
-movsbl %al,%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x43c(%eax)
-mov    0x8(%ebp),%eax
-mov    0x440(%eax),%edx
-mov    0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
-movsbl %al,%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x440(%eax)
+add    $0x440,%eax
+mov    0x8(%ebp),%edx
+add    $0x440,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0xc,%edx
+movzbl (%edx),%edx
+movsbl %dl,%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddServerMatchData(Packet_Server_Match_data*) */

void __thiscall
StatisticManager::_ZN16StatisticManager18AddServerMatchDataEP24Packet_Server_Match_data
          (StatisticManager *this,Packet_Server_Match_data *param_1)

{
  *(int *)(this + 0x438) = (int)(char)param_1[10];
  *(int *)(this + 0x43c) = *(int *)(this + 0x43c) + (int)(char)param_1[0xb];
  *(int *)(this + 0x440) = *(int *)(this + 0x440) + (int)(char)param_1[0xc];
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1386 行）：

```cpp
void StatisticManager::AddServerMatchData(Packet_Server_Match_data* pkt)
{
    *(int*)((char*)this + 0x438) = (int)(char)*(char*)((char*)pkt + 10);
    *(int*)((char*)this + 0x43c) += (int)(char)*(char*)((char*)pkt + 0xb);
    *(int*)((char*)this + 0x440) += (int)(char)*(char*)((char*)pkt + 0xc);
}
```
