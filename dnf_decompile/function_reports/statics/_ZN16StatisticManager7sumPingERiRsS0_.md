# _ZN16StatisticManager7sumPingERiRsS0_

`StatisticManager::sumPing(int&, short&, int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074e6e` | `0xb6` | `0x8074dcc` | `0xb3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,62 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x14(%ebp),%eax
 mov    (%eax),%ecx
 mov    0x10(%ebp),%eax
 movzwl (%eax),%eax
 movswl %ax,%edx
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"sumPing(%d, %d, %d)\n",(%esp)
 call   <T> <printf>
 mov    0x10(%ebp),%eax
 movzwl (%eax),%eax
 test   %ax,%ax
-js     <T> <_ZN16StatisticManager7sumPingERiRsS0_+0xb3>
+js     <T> <_ZN16StatisticManager7sumPingERiRsS0_+0xb1>
 mov    0xc(%ebp),%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 movzwl (%eax),%eax
 cwtl
 lea    (%edx,%eax,1),%eax
 test   %eax,%eax
 jns    <T> <_ZN16StatisticManager7sumPingERiRsS0_+0x5a>
 mov    0xc(%ebp),%eax
 movl   $0x7fffffff,(%eax)
 jmp    <T> <_ZN16StatisticManager7sumPingERiRsS0_+0x86>
 mov    0xc(%ebp),%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 movzwl (%eax),%eax
 cwtl
 add    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    %edx,(%eax)
 mov    0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1,%eax
 test   %eax,%eax
 js     <T> <_ZN16StatisticManager7sumPingERiRsS0_+0x86>
 mov    0x14(%ebp),%eax
 mov    (%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %edx,(%eax)
 mov    0x14(%ebp),%eax
 mov    (%eax),%ecx
 mov    0x10(%ebp),%eax
 movzwl (%eax),%eax
 movswl %ax,%edx
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"sumPing Res(%d, %d, %d)\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN16StatisticManager7sumPingERiRsS0_+0xb4>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::sumPing(int&, short&, int&) */

void __thiscall
StatisticManager::_ZN16StatisticManager7sumPingERiRsS0_
          (StatisticManager *this,int *param_1,short *param_2,int *param_3)

{
  printf("sumPing(%d, %d, %d)\n",*param_1,(int)*param_2,*param_3);
  if (-1 < *param_2) {
    if (*param_1 + (int)*param_2 < 0) {
      *param_1 = 0x7fffffff;
    }
    else {
      *param_1 = *param_1 + (int)*param_2;
      if (-1 < *param_3 + 1) {
        *param_3 = *param_3 + 1;
      }
    }
    printf("sumPing Res(%d, %d, %d)\n",*param_1,(int)*param_2,*param_3);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1564 行）：

```cpp
void StatisticManager::sumPing(int& a, short& b, int& c)
{
    printf("sumPing(%d, %d, %d)\n", a, (int)b, c);
    if (-1 < b)
    {
        if (a + (int)b < 0)
        {
            a = 0x7fffffff;
        }
        else
        {
            a = a + (int)b;
            if (-1 < c + 1)
            {
                c = c + 1;
            }
        }
        printf("sumPing Res(%d, %d, %d)\n", a, (int)b, c);
    }
}
```
