# _Z6Rand_rPj

`Rand_r(unsigned int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x805844a` | `0xc1` | `0x8055daa` | `0xac` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,54 +1,47 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x0,0x8(%ebp)
-jne    <T> <_Z6Rand_rPj+0x31>
+jne    <T> <_Z6Rand_rPj+0x2c>
 call   <T> <_Z11timeGetTimev>
-mov    %eax,%edx
-mov    &_ZZ6Rand_rPjE10staticSeed,%eax
-lea    (%edx,%eax,1),%eax
+mov    &_ZZ6Rand_rPjE10staticSeed,%edx
+add    %edx,%eax
 mov    %eax,&_ZZ6Rand_rPjE10staticSeed
 movl   $&_ZZ6Rand_rPjE10staticSeed,(%esp)
 call   <T> <_Z6Rand_rPj>
-jmp    <T> <_Z6Rand_rPj+0xbf>
+jmp    <T> <_Z6Rand_rPj+0xaa>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 imul   $0x41c64e6d,%eax,%eax
 mov    %eax,-0x10(%ebp)
 addl   $0x3039,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 shr    $0x10,%eax
 and    $0x7ff,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 imul   $0x41c64e6d,%eax,%eax
 mov    %eax,-0x10(%ebp)
 addl   $0x3039,-0x10(%ebp)
 shll   $0xa,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 shr    $0x10,%eax
-mov    %eax,%edx
-and    $0x3ff,%edx
-mov    -0xc(%ebp),%eax
-xor    %edx,%eax
-mov    %eax,-0xc(%ebp)
+and    $0x3ff,%eax
+xor    %eax,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 imul   $0x41c64e6d,%eax,%eax
 mov    %eax,-0x10(%ebp)
 addl   $0x3039,-0x10(%ebp)
 shll   $0xa,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 shr    $0x10,%eax
-mov    %eax,%edx
-and    $0x3ff,%edx
-mov    -0xc(%ebp),%eax
-xor    %edx,%eax
-mov    %eax,-0xc(%ebp)
+and    $0x3ff,%eax
+xor    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,(%eax)
 mov    -0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Rand_r(unsigned int*) */

uint Rand_r(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (uint *)0x0) {
    iVar3 = timeGetTime();
    Rand_r(unsigned_int*)::staticSeed = iVar3 + Rand_r(unsigned_int*)::staticSeed;
    uVar4 = Rand_r((uint *)&Rand_r(unsigned_int*)::staticSeed);
  }
  else {
    uVar4 = *param_1 * 0x41c64e6d + 0x3039;
    uVar1 = uVar4 * 0x41c64e6d + 0x3039;
    uVar2 = uVar1 * 0x41c64e6d + 0x3039;
    uVar4 = ((uVar4 >> 0x10 & 0x7ff) << 10 ^ uVar1 >> 0x10 & 0x3ff) << 10 ^ uVar2 >> 0x10 & 0x3ff;
    *param_1 = uVar2;
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/Community/rand_r.cpp](source/Community/rand_r.cpp)（约第 16 行）：

```cpp
unsigned int Rand_r(unsigned int* seed) {
    static unsigned int staticSeed = 0x05397fb1;
    if (seed == NULL) {
        staticSeed = timeGetTime() + staticSeed;
        return Rand_r(&staticSeed);
    }
    unsigned int x = *seed;
    x = x * 0x41c64e6d;
    x += 0x3039;
    unsigned int result = (x >> 16) & 0x7ff;
    x = x * 0x41c64e6d;
    x += 0x3039;
    result <<= 10;
    result ^= (x >> 16) & 0x3ff;
    x = x * 0x41c64e6d;
    x += 0x3039;
    result <<= 10;
    result ^= (x >> 16) & 0x3ff;
    *seed = x;
    return result;
}
```
