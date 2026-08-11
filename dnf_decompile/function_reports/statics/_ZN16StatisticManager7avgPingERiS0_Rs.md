# _ZN16StatisticManager7avgPingERiS0_Rs

`StatisticManager::avgPing(int&, int&, short&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074f24` | `0xa7` | `0x8074e80` | `0xc2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x14(%ebp),%eax
 movzwl (%eax),%eax
-movswl %ax,%ecx
+cwtl
+mov    %eax,-0x18(%ebp)
 mov    0x10(%ebp),%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
-mov    %ecx,0xc(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"avgPing(%d, %d, %d)\n",(%esp)
 call   <T> <printf>
-fldz
-fstpl  -0x10(%ebp)
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN16StatisticManager7avgPingERiS0_Rs+0x48>
+je     <T> <_ZN16StatisticManager7avgPingERiS0_Rs+0x4d>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN16StatisticManager7avgPingERiS0_Rs+0x4f>
+jne    <T> <_ZN16StatisticManager7avgPingERiS0_Rs+0x54>
 fldz
 fstpl  -0x10(%ebp)
-jmp    <T> <_ZN16StatisticManager7avgPingERiS0_Rs+0x6a>
+jmp    <T> <_ZN16StatisticManager7avgPingERiS0_Rs+0x6f>
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x20(%ebp)
 fildl  -0x20(%ebp)
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x20(%ebp)
 fildl  -0x20(%ebp)
 fdivrp %st,%st(1)
 fstpl  -0x10(%ebp)
 fldl   -0x10(%ebp)
+fldl   &data#267dc925(.rodata)
+faddp  %st,%st(1)
 fnstcw -0x1a(%ebp)
 movzwl -0x1a(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0x1c(%ebp)
 fldcw  -0x1c(%ebp)
 fistpl -0x20(%ebp)
 fldcw  -0x1a(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,%edx
 mov    0x14(%ebp),%eax
 mov    %dx,(%eax)
 mov    0x14(%ebp),%eax
 movzwl (%eax),%eax
 cwtl
+mov    -0x18(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"avgPing Res(%d)\n",(%esp)
 call   <T> <printf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::avgPing(int&, int&, short&) */

void __thiscall
StatisticManager::_ZN16StatisticManager7avgPingERiS0_Rs
          (StatisticManager *this,int *param_1,int *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  double local_14;
  
  iVar1 = (int)*param_3;
  iVar2 = *param_2;
  printf("avgPing(%d, %d, %d)\n",*param_1,iVar2,iVar1);
  if ((*param_1 == 0) || (*param_2 == 0)) {
    local_14 = 0.0;
  }
  else {
    local_14 = (double)*param_1 / (double)*param_2;
  }
  *param_3 = (short)(int)ROUND(local_14);
  printf("avgPing Res(%d)\n",(int)*param_3,iVar2,iVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1584 行）：

```cpp
void StatisticManager::avgPing(int& a, int& b, short& c)
{
    int bv = (int)c;
    int b2 = b;
    printf("avgPing(%d, %d, %d)\n", a, b2, bv);
    double avg;
    if (a == 0 || b == 0)
    {
        avg = 0.0;
    }
    else
    {
        avg = (double)a / (double)b;
    }
    c = (short)(int)(avg + 0.5);
    printf("avgPing Res(%d)\n", (int)c, b2, bv);
}
```
