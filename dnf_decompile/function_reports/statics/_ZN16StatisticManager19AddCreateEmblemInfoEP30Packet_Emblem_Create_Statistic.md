# _ZN16StatisticManager19AddCreateEmblemInfoEP30Packet_Emblem_Create_Statistic

`StatisticManager::AddCreateEmblemInfo(Packet_Emblem_Create_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8072c3e` | `0x68` | `0x8072d8e` | `0x6a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN16StatisticManager19AddCreateEmblemInfoEP30Packet_Emblem_Create_Statistic+0x56>
+jmp    <T> <_ZN16StatisticManager19AddCreateEmblemInfoEP30Packet_Emblem_Create_Statistic+0x58>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN16StatisticManager19AddCreateEmblemInfoEP30Packet_Emblem_Create_Statistic+0x3b>
+jmp    <T> <_ZN16StatisticManager19AddCreateEmblemInfoEP30Packet_Emblem_Create_Statistic+0x3d>
+mov    0xc(%ebp),%eax
 mov    -0x10(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax,%edx,4),%eax
+add    $0x4,%edx
+mov    (%eax,%edx,4),%eax
 mov    0x8(%ebp),%edx
 add    $0x32c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN23stCreateEmblemStatistic13increaseCountEi>
 addl   $0x1,-0xc(%ebp)
+mov    0xc(%ebp),%eax
 mov    -0x10(%ebp),%edx
-mov    0xc(%ebp),%eax
 add    $0x8,%edx
-mov    0x2(%eax,%edx,4),%eax
+mov    0x4(%eax,%edx,4),%eax
 cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager19AddCreateEmblemInfoEP30Packet_Emblem_Create_Statistic+0x18>
 addl   $0x1,-0x10(%ebp)
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    0xc(%eax),%eax
 cmp    -0x10(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager19AddCreateEmblemInfoEP30Packet_Emblem_Create_Statistic+0xf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddCreateEmblemInfo(Packet_Emblem_Create_Statistic*) */

void __thiscall
StatisticManager::_ZN16StatisticManager19AddCreateEmblemInfoEP30Packet_Emblem_Create_Statistic
          (StatisticManager *this,Packet_Emblem_Create_Statistic *param_1)

{
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < *(int *)(param_1 + 10); local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < *(int *)(param_1 + (local_14 + 8) * 4 + 2);
        local_10 = local_10 + 1) {
      stCreateEmblemStatistic::increaseCount
                ((stCreateEmblemStatistic *)(this + 0x32c),*(int *)(param_1 + local_14 * 4 + 0xe));
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1286 行）：

```cpp
void StatisticManager::AddCreateEmblemInfo(Packet_Emblem_Create_Statistic* pkt)
{
    for (int i = 0; i < ((EmblemCreateWire*)pkt)->b.m_count; i++)
    {
        for (int j = 0; j < ((EmblemCreateWire*)pkt)->a.m_arrA[i + 8]; j++)
        {
            m_createEmblem.increaseCount(((EmblemCreateWire*)pkt)->b.m_arrB[i]);
        }
    }
}
```
