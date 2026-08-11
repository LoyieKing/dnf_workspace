# _Z8SDC_RandPj

`SDC_Rand(unsigned int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x805850b` | `0xa6` | `0x8057bd9` | `0x93` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,42 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 cmpl   $0x0,0x8(%ebp)
-jne    <T> <_Z8SDC_RandPj+0x16>
+jne    <T> <_Z8SDC_RandPj+0x13>
 mov    $0x0,%eax
-jmp    <T> <_Z8SDC_RandPj+0xa4>
+jmp    <T> <_Z8SDC_RandPj+0x91>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x8(%ebp)
 mov    -0x8(%ebp),%eax
 imul   $0x41c64e6d,%eax,%eax
 mov    %eax,-0x8(%ebp)
 addl   $0x3039,-0x8(%ebp)
 mov    -0x8(%ebp),%eax
 shr    $0x10,%eax
 and    $0x7ff,%eax
 mov    %eax,-0x4(%ebp)
 mov    -0x8(%ebp),%eax
 imul   $0x41c64e6d,%eax,%eax
 mov    %eax,-0x8(%ebp)
 addl   $0x3039,-0x8(%ebp)
 shll   $0xa,-0x4(%ebp)
 mov    -0x8(%ebp),%eax
 shr    $0x10,%eax
-mov    %eax,%edx
-and    $0x3ff,%edx
-mov    -0x4(%ebp),%eax
-xor    %edx,%eax
-mov    %eax,-0x4(%ebp)
+and    $0x3ff,%eax
+xor    %eax,-0x4(%ebp)
 mov    -0x8(%ebp),%eax
 imul   $0x41c64e6d,%eax,%eax
 mov    %eax,-0x8(%ebp)
 addl   $0x3039,-0x8(%ebp)
 shll   $0xa,-0x4(%ebp)
 mov    -0x8(%ebp),%eax
 shr    $0x10,%eax
-mov    %eax,%edx
-and    $0x3ff,%edx
-mov    -0x4(%ebp),%eax
-xor    %edx,%eax
-mov    %eax,-0x4(%ebp)
+and    $0x3ff,%eax
+xor    %eax,-0x4(%ebp)
 mov    0x8(%ebp),%eax
 mov    -0x8(%ebp),%edx
 mov    %edx,(%eax)
 mov    -0x4(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* SDC_Rand(unsigned int*) */

uint SDC_Rand(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_1 * 0x41c64e6d + 0x3039;
    uVar1 = uVar3 * 0x41c64e6d + 0x3039;
    uVar2 = uVar1 * 0x41c64e6d + 0x3039;
    uVar3 = ((uVar3 >> 0x10 & 0x7ff) << 10 ^ uVar1 >> 0x10 & 0x3ff) << 10 ^ uVar2 >> 0x10 & 0x3ff;
    *param_1 = uVar2;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/ServerCommon/DNFFunctionLib.cpp](source/DNFServer/ServerCommon/DNFFunctionLib.cpp)（约第 172 行）：

```cpp
unsigned int SDC_Rand(unsigned int* seed) {
    if (seed == NULL) {
        return 0;
    }
    // 原始：单累加器逐步 LCG（imul → 存栈 → add [ebp] 内存 RMW；result 逐步 shl/xor）
    unsigned int a = *seed;
    a *= 0x41c64e6d;
    a += 0x3039;
    unsigned int result = (a >> 0x10) & 0x7ff;
    a *= 0x41c64e6d;
    a += 0x3039;
    result <<= 10;
    result = result ^ ((a >> 0x10) & 0x3ff);
    a *= 0x41c64e6d;
    a += 0x3039;
    result <<= 10;
    result = result ^ ((a >> 0x10) & 0x3ff);
    *seed = a;
    return result;
}
```
