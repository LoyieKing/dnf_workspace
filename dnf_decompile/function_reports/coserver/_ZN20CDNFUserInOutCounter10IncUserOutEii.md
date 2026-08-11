# _ZN20CDNFUserInOutCounter10IncUserOutEii

`CDNFUserInOutCounter::IncUserOut(int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x804de54` | `0x4f` | `0x8058aec` | `0x56` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
 cmpl   $0x64,0xc(%ebp)
-jg     <T> <_ZN20CDNFUserInOutCounter10IncUserOutEii+0x47>
+jg     <T> <_ZN20CDNFUserInOutCounter10IncUserOutEii+0x53>
 cmpl   $0xfe,0x10(%ebp)
-jg     <T> <_ZN20CDNFUserInOutCounter10IncUserOutEii+0x4a>
+jg     <T> <_ZN20CDNFUserInOutCounter10IncUserOutEii+0x53>
+mov    0x8(%ebp),%eax
+mov    %eax,%ecx
 mov    0xc(%ebp),%edx
-mov    0x10(%ebp),%ecx
-mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x8,%eax
 sub    %edx,%eax
-add    %ecx,%eax
+add    0x10(%ebp),%eax
 add    %eax,%eax
 add    $0x1,%eax
-mov    (%ebx,%eax,4),%eax
-lea    0x1(%eax),%esi
-mov    0x8(%ebp),%ebx
+shl    $0x2,%eax
+add    %eax,%ecx
+mov    0x8(%ebp),%eax
+mov    %eax,%ebx
+mov    0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x8,%eax
 sub    %edx,%eax
-add    %ecx,%eax
+add    0x10(%ebp),%eax
 add    %eax,%eax
 add    $0x1,%eax
-mov    %esi,(%ebx,%eax,4)
-jmp    <T> <_ZN20CDNFUserInOutCounter10IncUserOutEii+0x4b>
-nop
-jmp    <T> <_ZN20CDNFUserInOutCounter10IncUserOutEii+0x4b>
-nop
+shl    $0x2,%eax
+lea    (%ebx,%eax,1),%eax
+mov    (%eax),%eax
+add    $0x1,%eax
+mov    %eax,(%ecx)
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDNFUserInOutCounter::IncUserOut(int, int) */

void __thiscall
CDNFUserInOutCounter::_ZN20CDNFUserInOutCounter10IncUserOutEii
          (CDNFUserInOutCounter *this,int param_1,int param_2)

{
  if ((param_1 < 0x65) && (param_2 < 0xff)) {
    *(int *)(this + ((param_1 * 0xff + param_2) * 2 + 1) * 4) =
         *(int *)(this + ((param_1 * 0xff + param_2) * 2 + 1) * 4) + 1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUserInOutCounter.cpp](source/DNFServer/GameServer/COServer/DNFUserInOutCounter.cpp)（约第 66 行）：

```cpp
void CDNFUserInOutCounter::IncUserOut(int group, int index)
{
    if (group < 0x65 && index < 0xff)
    {
        *(int*)(m_counters + ((group * 0xff + index) * 2 + 1) * 4) =
            *(int*)(m_counters + ((group * 0xff + index) * 2 + 1) * 4) + 1;
    }
}
```
