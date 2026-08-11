# _ZN16StatisticManager7minPingERsS0_

`StatisticManager::minPing(short&, short&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074d92` | `0x6e` | `0x8074ce0` | `0x76` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x28,%esp
 mov    0x10(%ebp),%eax
 movzwl (%eax),%eax
-movswl %ax,%edx
+cwtl
+mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cwtl
+mov    -0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"minPing(%d, %d)\n",(%esp)
 call   <T> <printf>
 mov    0x10(%ebp),%eax
 movzwl (%eax),%eax
 test   %ax,%ax
-js     <T> <_ZN16StatisticManager7minPingERsS0_+0x6b>
+js     <T> <_ZN16StatisticManager7minPingERsS0_+0x74>
+mov    0x10(%ebp),%eax
+movzwl (%eax),%edx
 mov    0xc(%ebp),%eax
-movzwl (%eax),%edx
-mov    0x10(%ebp),%eax
 movzwl (%eax),%eax
 cmp    %ax,%dx
-jle    <T> <_ZN16StatisticManager7minPingERsS0_+0x52>
+jge    <T> <_ZN16StatisticManager7minPingERsS0_+0x56>
 mov    0x10(%ebp),%eax
 movzwl (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %dx,(%eax)
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cwtl
+mov    -0xc(%ebp),%edx
+mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"minPing Res(%d)\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN16StatisticManager7minPingERsS0_+0x6c>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::minPing(short&, short&) */

void __thiscall
StatisticManager::_ZN16StatisticManager7minPingERsS0_
          (StatisticManager *this,short *param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = (int)*param_2;
  printf("minPing(%d, %d)\n",(int)*param_1,iVar1);
  if (-1 < *param_2) {
    if (*param_2 < *param_1) {
      *param_1 = *param_2;
    }
    printf("minPing Res(%d)\n",(int)*param_1,iVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1538 行）：

```cpp
void StatisticManager::minPing(short& a, short& b)
{
    int bv = (int)b;
    printf("minPing(%d, %d)\n", (int)a, bv);
    if (-1 < b)
    {
        if (b < a)
        {
            a = b;
        }
        printf("minPing Res(%d)\n", (int)a, bv);
    }
}
```
