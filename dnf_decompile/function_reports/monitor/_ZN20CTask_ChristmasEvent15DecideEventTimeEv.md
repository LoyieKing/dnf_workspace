# _ZN20CTask_ChristmasEvent15DecideEventTimeEv

`CTask_ChristmasEvent::DecideEventTime()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809c00e` | `0xa8` | `0x809fd18` | `0x9c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xfc,%esp
-lea    -0x88(%ebp),%edx
-mov    $&_ZZN20CTask_ChristmasEvent15DecideEventTimeEvE5C.405,%ebx
+sub    $0xec,%esp
+lea    -0x84(%ebp),%edx
+mov    $&_ZZN20CTask_ChristmasEvent15DecideEventTimeEvE5C.140,%ebx
 mov    $0x19,%eax
 mov    %edx,%edi
 mov    %ebx,%esi
 mov    %eax,%ecx
 rep movsl %ds:(%esi),%es:(%edi)
-lea    -0xec(%ebp),%edx
-mov    $&_ZZN20CTask_ChristmasEvent15DecideEventTimeEvE5C.406,%ebx
+lea    -0xe8(%ebp),%edx
+mov    $&_ZZN20CTask_ChristmasEvent15DecideEventTimeEvE5C.141,%ebx
 mov    $0x19,%eax
 mov    %edx,%edi
 mov    %ebx,%esi
 mov    %eax,%ecx
 rep movsl %ds:(%esi),%es:(%edi)
-movl   $0x0,-0x24(%ebp)
 movl   $0x186a0,(%esp)
 call   <T> <_Z12get_rand_inti>
 mov    %eax,-0x20(%ebp)
 movl   $0x1,-0x1c(%ebp)
-jmp    <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv+0x8f>
+jmp    <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv+0x79>
 mov    -0x1c(%ebp),%eax
-mov    -0xec(%ebp,%eax,4),%eax
+mov    -0xe8(%ebp,%eax,4),%eax
 cmp    -0x20(%ebp),%eax
-jle    <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv+0x8b>
+jbe    <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv+0x75>
 mov    -0x1c(%ebp),%eax
 sub    $0x1,%eax
-mov    -0xec(%ebp,%eax,4),%eax
+mov    -0xe8(%ebp,%eax,4),%eax
 cmp    -0x20(%ebp),%eax
-jge    <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv+0x8b>
-mov    -0x1c(%ebp),%eax
-mov    -0x88(%ebp,%eax,4),%eax
-mov    %eax,-0x24(%ebp)
-jmp    <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv+0x9a>
+jb     <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv+0x86>
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x18,-0x1c(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv+0x5b>
-mov    -0x24(%ebp),%eax
-add    $0xfc,%esp
+jne    <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv+0x54>
+jmp    <T> <_ZN20CTask_ChristmasEvent15DecideEventTimeEv+0x87>
+nop
+mov    -0x1c(%ebp),%eax
+mov    -0x84(%ebp,%eax,4),%eax
+add    $0xec,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTask_ChristmasEvent::DecideEventTime() */

undefined4 CTask_ChristmasEvent::_ZN20CTask_ChristmasEvent15DecideEventTimeEv(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_f0 [25];
  undefined4 local_8c [25];
  undefined4 local_28;
  int local_20;
  
  puVar2 = &DecideEventTime()::C_405;
  puVar4 = local_8c;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  piVar3 = &DecideEventTime()::C_406;
  piVar5 = local_f0;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  local_28 = 0;
  iVar1 = get_rand_int(100000);
  local_20 = 1;
  while( true ) {
    if (0x18 < local_20) {
      return local_28;
    }
    if ((iVar1 < local_f0[local_20]) && (local_f0[local_20 + -1] < iVar1)) break;
    local_20 = local_20 + 1;
  }
  return local_8c[local_20];
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TaskImpl.cpp](source/DNFServer/GameServer/Monitor/TaskImpl.cpp)（约第 33 行）：

```cpp
int CTask_ChristmasEvent::DecideEventTime()
{
    int hours[25] = {
        0, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
        23, 24, 1, 2, 3, 4, 5
    };
    unsigned int weight[25] = {
        0, 1449, 2898, 4348, 7246, 10145, 13043, 17391, 23188, 28985,
        34782, 42029, 49275, 56521, 63768, 69565, 75362, 81159, 85507,
        89855, 92753, 95652, 97101, 98550, 100000
    };
    unsigned int r = get_rand_int(100000);
    int i = 1;
    while (i <= 24)
    {
        if (r < (unsigned int)weight[i] && (unsigned int)weight[i - 1] < r)
        {
            break;
        }
        i++;
    }
    return hours[i];
}
```
