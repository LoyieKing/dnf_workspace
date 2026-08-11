# _ZN20CDNFUserInOutCounter9IncUserInEii

`CDNFUserInOutCounter::IncUserIn(int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x804de0e` | `0x45` | `0x8058aa0` | `0x4c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,31 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
 cmpl   $0x64,0xc(%ebp)
-jg     <T> <_ZN20CDNFUserInOutCounter9IncUserInEii+0x3d>
+jg     <T> <_ZN20CDNFUserInOutCounter9IncUserInEii+0x49>
 cmpl   $0xfe,0x10(%ebp)
-jg     <T> <_ZN20CDNFUserInOutCounter9IncUserInEii+0x40>
+jg     <T> <_ZN20CDNFUserInOutCounter9IncUserInEii+0x49>
+mov    0x8(%ebp),%eax
+mov    %eax,%ecx
 mov    0xc(%ebp),%edx
-mov    0x10(%ebp),%ecx
-mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x8,%eax
 sub    %edx,%eax
-add    %ecx,%eax
-mov    (%ebx,%eax,8),%eax
-lea    0x1(%eax),%esi
-mov    0x8(%ebp),%ebx
+add    0x10(%ebp),%eax
+shl    $0x3,%eax
+add    %eax,%ecx
+mov    0x8(%ebp),%eax
+mov    %eax,%ebx
+mov    0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x8,%eax
 sub    %edx,%eax
-add    %ecx,%eax
-mov    %esi,(%ebx,%eax,8)
-jmp    <T> <_ZN20CDNFUserInOutCounter9IncUserInEii+0x41>
-nop
-jmp    <T> <_ZN20CDNFUserInOutCounter9IncUserInEii+0x41>
-nop
+add    0x10(%ebp),%eax
+shl    $0x3,%eax
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

/* CDNFUserInOutCounter::IncUserIn(int, int) */

void __thiscall
CDNFUserInOutCounter::_ZN20CDNFUserInOutCounter9IncUserInEii
          (CDNFUserInOutCounter *this,int param_1,int param_2)

{
  if ((param_1 < 0x65) && (param_2 < 0xff)) {
    *(int *)(this + (param_1 * 0xff + param_2) * 8) =
         *(int *)(this + (param_1 * 0xff + param_2) * 8) + 1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUserInOutCounter.cpp](source/DNFServer/GameServer/COServer/DNFUserInOutCounter.cpp)（约第 57 行）：

```cpp
void CDNFUserInOutCounter::IncUserIn(int group, int index)
{
    if (group < 0x65 && index < 0xff)
    {
        *(int*)(m_counters + (group * 0xff + index) * 8) =
            *(int*)(m_counters + (group * 0xff + index) * 8) + 1;
    }
}
```
