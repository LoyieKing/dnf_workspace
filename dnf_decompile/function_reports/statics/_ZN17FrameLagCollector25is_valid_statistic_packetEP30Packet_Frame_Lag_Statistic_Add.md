# _ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add

`FrameLagCollector::is_valid_statistic_packet(Packet_Frame_Lag_Statistic_Add*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8067d94` | `0x186` | `0x8061020` | `0x1a8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,123 +1,137 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x10,%esp
 mov    0xc(%ebp),%eax
-movzbl 0x1f(%eax),%eax
+add    $0x1f,%eax
+movzbl (%eax),%eax
 test   %al,%al
-js     <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x1d>
+js     <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x21>
 mov    0xc(%ebp),%eax
-movzbl 0x1f(%eax),%eax
+add    $0x1f,%eax
+movzbl (%eax),%eax
 cmp    $0x8,%al
-jle    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x27>
+jle    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x2b>
 mov    $0x0,%eax
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x1a2>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x16c>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x18e>
+mov    0xc(%ebp),%edx
 mov    -0xc(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x24,%eax
+lea    (%edx,%eax,1),%eax
+movzwl (%eax),%eax
+test   %ax,%ax
+jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x65>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x1a2>
+mov    0xc(%ebp),%edx
+mov    -0xc(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x26,%eax
+lea    (%edx,%eax,1),%eax
+movzwl (%eax),%eax
+test   %ax,%ax
+jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x93>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x1a2>
+mov    0xc(%ebp),%edx
+mov    -0xc(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x28,%eax
+lea    (%edx,%eax,1),%eax
+movzwl (%eax),%eax
+test   %ax,%ax
+jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xc1>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x1a2>
+mov    0xc(%ebp),%edx
+mov    -0xc(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x2a,%eax
+lea    (%edx,%eax,1),%eax
+movzwl (%eax),%eax
+test   %ax,%ax
+jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xef>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x1a2>
+movl   $0x0,-0x8(%ebp)
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x17b>
 mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0x4(%eax),%eax
-test   %ax,%ax
-jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x5e>
-mov    $0x0,%eax
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0x6(%eax),%eax
-test   %ax,%ax
-jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x89>
-mov    $0x0,%eax
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0x8(%eax),%eax
-test   %ax,%ax
-jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xb4>
-mov    $0x0,%eax
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0xa(%eax),%eax
-test   %ax,%ax
-jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xdf>
-mov    $0x0,%eax
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
-movl   $0x0,-0x8(%ebp)
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x15d>
 mov    -0xc(%ebp),%edx
-mov    -0x8(%ebp),%ebx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 sub    %edx,%eax
-add    %ebx,%eax
+add    -0x8(%ebp),%eax
 add    $0x4,%eax
-mov    0xc(%ecx,%eax,8),%eax
+shl    $0x3,%eax
+add    $0xc,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
 cmp    $0x1869f,%eax
-jle    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x10f>
+jle    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x127>
 mov    $0x0,%eax
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x1a2>
+mov    0xc(%ebp),%ecx
 mov    -0xc(%ebp),%edx
-mov    -0x8(%ebp),%ebx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 sub    %edx,%eax
-add    %ebx,%eax
-add    $0x4,%eax
-flds   0x10(%ecx,%eax,8)
+add    -0x8(%ebp),%eax
+add    $0x6,%eax
+shl    $0x3,%eax
+lea    (%ecx,%eax,1),%eax
+flds   (%eax)
 fldz
 fxch   %st(1)
-fucompp
-fnstsw %ax
-sahf
-jne    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x159>
-jp     <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x159>
+fucomip %st(1),%st
+fstp   %st(0)
+jne    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x177>
+jp     <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x177>
+mov    0xc(%ebp),%ecx
 mov    -0xc(%ebp),%edx
-mov    -0x8(%ebp),%ebx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 sub    %edx,%eax
-add    %ebx,%eax
+add    -0x8(%ebp),%eax
 add    $0x4,%eax
-mov    0xc(%ecx,%eax,8),%eax
+shl    $0x3,%eax
+add    $0xc,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jle    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x159>
+jle    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x177>
 mov    $0x0,%eax
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x1a2>
 addl   $0x1,-0x8(%ebp)
 cmpl   $0x5,-0x8(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xe8>
+jne    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xfb>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x5,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x33>
+jne    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x37>
 mov    $0x1,%eax
 add    $0x10,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::is_valid_statistic_packet(Packet_Frame_Lag_Statistic_Add*) */

undefined4 __thiscall
FrameLagCollector::
_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add
          (FrameLagCollector *this,Packet_Frame_Lag_Statistic_Add *param_1)

{
  undefined4 uVar1;
  int local_10;
  int local_c;
  
  if (((char)param_1[0x1f] < '\0') || ('\b' < (char)param_1[0x1f])) {
    uVar1 = 0;
  }
  else {
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      if (*(short *)(param_1 + local_10 * 0x38 + 0x24) < 0) {
        return 0;
      }
      if (*(short *)(param_1 + local_10 * 0x38 + 0x26) < 0) {
        return 0;
      }
      if (*(short *)(param_1 + local_10 * 0x38 + 0x28) < 0) {
        return 0;
      }
      if (*(short *)(param_1 + local_10 * 0x38 + 0x2a) < 0) {
        return 0;
      }
      for (local_c = 0; local_c < 6; local_c = local_c + 1) {
        if (99999 < *(int *)(param_1 + (local_10 * 7 + local_c + 4) * 8 + 0xc)) {
          return 0;
        }
        if (((*(float *)(param_1 + (local_10 * 7 + local_c + 4) * 8 + 0x10) == 0.0) &&
            (!NAN(*(float *)(param_1 + (local_10 * 7 + local_c + 4) * 8 + 0x10)))) &&
           (0 < *(int *)(param_1 + (local_10 * 7 + local_c + 4) * 8 + 0xc))) {
          return 0;
        }
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 473 行）：

```cpp
int FrameLagCollector::is_valid_statistic_packet(Packet_Frame_Lag_Statistic_Add* pkt)
{
    if ((char)*(char*)((char*)pkt + 0x1f) < 0 || 8 < (char)*(char*)((char*)pkt + 0x1f))
    {
        return 0;
    }
    for (int i = 0; i < 6; i++)
    {
        if (*(short*)((char*)pkt + i * 0x38 + 0x24) < 0) return 0;
        if (*(short*)((char*)pkt + i * 0x38 + 0x26) < 0) return 0;
        if (*(short*)((char*)pkt + i * 0x38 + 0x28) < 0) return 0;
        if (*(short*)((char*)pkt + i * 0x38 + 0x2a) < 0) return 0;
        for (int j = 0; j < 6; j++)
        {
            if (99999 < *(int*)((char*)pkt + (i * 7 + j + 4) * 8 + 0xc)) return 0;
            if (*(float*)((char*)pkt + (i * 7 + j + 4) * 8 + 0x10) == 0.0 &&
                0 < *(int*)((char*)pkt + (i * 7 + j + 4) * 8 + 0xc)) return 0;
        }
    }
    return 1;
}
```
