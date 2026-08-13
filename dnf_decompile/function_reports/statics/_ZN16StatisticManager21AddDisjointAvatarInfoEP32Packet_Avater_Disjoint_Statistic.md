# _ZN16StatisticManager21AddDisjointAvatarInfoEP32Packet_Avater_Disjoint_Statistic

`StatisticManager::AddDisjointAvatarInfo(Packet_Avater_Disjoint_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x8072ad2` | `0xe1` | `0x8072c64` | `0xe1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,75 +1,75 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
 js     <T> <_ZN16StatisticManager21AddDisjointAvatarInfoEP32Packet_Avater_Disjoint_Statistic+0xdb>
 cmpl   $0x2,-0x20(%ebp)
 jg     <T> <_ZN16StatisticManager21AddDisjointAvatarInfoEP32Packet_Avater_Disjoint_Statistic+0xde>
 movl   $0x0,-0x1c(%ebp)
 jmp    <T> <_ZN16StatisticManager21AddDisjointAvatarInfoEP32Packet_Avater_Disjoint_Statistic+0xc8>
+mov    0xc(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 mov    0xe(%eax,%ecx,1),%eax
 mov    %eax,-0x18(%ebp)
+mov    0xc(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 mov    0x12(%eax,%ecx,1),%eax
 mov    %eax,-0x14(%ebp)
+mov    0xc(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0x16,%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x10(%ebp)
+mov    0xc(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 mov    0x17(%eax,%ecx,1),%eax
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x1e8(%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN25stDisjointAvatarInfoTotal8incCountEiiii>
 addl   $0x1,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 cmp    -0x20(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager21AddDisjointAvatarInfoEP32Packet_Avater_Disjoint_Statistic+0x2f>
 jmp    <T> <_ZN16StatisticManager21AddDisjointAvatarInfoEP32Packet_Avater_Disjoint_Statistic+0xdf>
 nop
 jmp    <T> <_ZN16StatisticManager21AddDisjointAvatarInfoEP32Packet_Avater_Disjoint_Statistic+0xdf>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddDisjointAvatarInfo(Packet_Avater_Disjoint_Statistic*) */

void __thiscall
StatisticManager::_ZN16StatisticManager21AddDisjointAvatarInfoEP32Packet_Avater_Disjoint_Statistic
          (StatisticManager *this,Packet_Avater_Disjoint_Statistic *param_1)

{
  int iVar1;
  int local_20;
  
  iVar1 = *(int *)(param_1 + 10);
  if ((-1 < iVar1) && (iVar1 < 3)) {
    for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
      stDisjointAvatarInfoTotal::incCount
                ((stDisjointAvatarInfoTotal *)(this + 0x1e8),
                 *(int *)(param_1 + local_20 * 0xd + 0xe),*(int *)(param_1 + local_20 * 0xd + 0x12),
                 (int)(char)param_1[local_20 * 0xd + 0x16],*(int *)(param_1 + local_20 * 0xd + 0x17)
                );
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1260 行）：

```cpp
void StatisticManager::AddDisjointAvatarInfo(Packet_Avater_Disjoint_Statistic* pkt)
{
    struct __attribute__((packed)) Item
    {
        int m_a;
        int m_b;
        char m_c;
        int m_d;
    };
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        int m_count;
        Item m_items[3];
    };
    int count = ((Wire*)pkt)->m_count;
    if (count < 0)
    {
        return;
    }
    if (2 < count)
    {
        return;
    }
    for (int i = 0; i < count; i++)
    {
        int a = ((Wire*)pkt)->m_items[i].m_a;
        int b = ((Wire*)pkt)->m_items[i].m_b;
        int c = (int)(char)((Wire*)pkt)->m_items[i].m_c;
        int d = ((Wire*)pkt)->m_items[i].m_d;
        m_disjoint.incCount(a, b, c, d);
    }
}
```
