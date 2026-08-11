# _Z12get_rand_inti

`get_rand_int(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8062b28` | `0xf5` | `0x8084e60` | `0x105` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,73 +1,76 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0x0,0x8(%ebp)
 jns    <T> <_Z12get_rand_inti+0x16>
 mov    $0x0,%eax
-jmp    <T> <_Z12get_rand_inti+0xf3>
-mov    0x8(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_Z12get_rand_inti+0x27>
+jmp    <T> <_Z12get_rand_inti+0x103>
+cmpl   $0x0,0x8(%ebp)
+jne    <T> <_Z12get_rand_inti+0x26>
 call   <T> <rand>
-jmp    <T> <_Z12get_rand_inti+0xf3>
+jmp    <T> <_Z12get_rand_inti+0x103>
 call   <T> <rand>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 cmp    0x8(%ebp),%eax
-jle    <T> <_Z12get_rand_inti+0x4b>
+jle    <T> <_Z12get_rand_inti+0x50>
 call   <T> <rand>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,%edx
 sar    $0x1f,%edx
 idivl  0x8(%ebp)
 mov    %edx,%eax
-jmp    <T> <_Z12get_rand_inti+0xf3>
+jmp    <T> <_Z12get_rand_inti+0x103>
 mov    -0x10(%ebp),%eax
 imul   $0x41c64e6d,%eax,%eax
 mov    %eax,-0x10(%ebp)
 addl   $0x3039,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
-mov    %eax,%edx
-sar    $0x1f,%edx
-shr    $0x10,%edx
-lea    (%edx,%eax,1),%eax
+lea    0xffff(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
 sar    $0x10,%eax
 and    $0x7ff,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 imul   $0x41c64e6d,%eax,%eax
 mov    %eax,-0x10(%ebp)
 addl   $0x3039,-0x10(%ebp)
-shll   $0xa,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,%ecx
+shl    $0xa,%ecx
 mov    -0x10(%ebp),%eax
-mov    %eax,%edx
-sar    $0x1f,%edx
-shr    $0x10,%edx
-lea    (%edx,%eax,1),%eax
+lea    0xffff(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
 sar    $0x10,%eax
 and    $0x3ff,%eax
-xor    %eax,-0xc(%ebp)
+xor    %ecx,%eax
+mov    %eax,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 imul   $0x41c64e6d,%eax,%eax
 mov    %eax,-0x10(%ebp)
 addl   $0x3039,-0x10(%ebp)
-shll   $0xa,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,%ecx
+shl    $0xa,%ecx
 mov    -0x10(%ebp),%eax
-mov    %eax,%edx
-sar    $0x1f,%edx
-shr    $0x10,%edx
-lea    (%edx,%eax,1),%eax
+lea    0xffff(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
 sar    $0x10,%eax
 and    $0x3ff,%eax
-xor    %eax,-0xc(%ebp)
+xor    %ecx,%eax
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 cmp    -0xc(%ebp),%eax
-jae    <T> <_Z12get_rand_inti+0xf0>
+jae    <T> <_Z12get_rand_inti+0x100>
 mov    0x8(%ebp),%ecx
 mov    -0xc(%ebp),%eax
 mov    $0x0,%edx
 div    %ecx
-mov    %edx,%eax
-jmp    <T> <_Z12get_rand_inti+0xf3>
+mov    %edx,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* get_rand_int(int) */

uint get_rand_int(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < 0) {
    uVar3 = 0;
  }
  else if (param_1 == 0) {
    uVar3 = rand();
  }
  else {
    iVar4 = rand();
    if (param_1 < iVar4) {
      iVar4 = rand();
      uVar3 = iVar4 % param_1;
    }
    else {
      iVar4 = iVar4 * 0x41c64e6d + 0x3039;
      iVar1 = iVar4 * 0x41c64e6d + 0x3039;
      iVar2 = iVar1 * 0x41c64e6d + 0x3039;
      uVar3 = (((int)(((uint)(iVar4 >> 0x1f) >> 0x10) + iVar4) >> 0x10 & 0x7ffU) << 10 ^
              (int)(((uint)(iVar1 >> 0x1f) >> 0x10) + iVar1) >> 0x10 & 0x3ffU) << 10 ^
              (int)(((uint)(iVar2 >> 0x1f) >> 0x10) + iVar2) >> 0x10 & 0x3ffU;
      if ((uint)param_1 < uVar3) {
        uVar3 = uVar3 % (uint)param_1;
      }
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/TaskImpl.cpp](source/DNFServer/GameServer/Statics/TaskImpl.cpp)（约第 6 行）：

```cpp
unsigned int get_rand_int(int range)
{
    if (range < 0)
    {
        return 0;
    }
    if (range == 0)
    {
        return rand();
    }
    int r = rand();
    if (r > range)
    {
        return (unsigned int)(rand() % range);
    }
    r *= 0x41c64e6d;
    r += 0x3039;
    unsigned int v = (r / 65536) & 0x7ff;
    r *= 0x41c64e6d;
    r += 0x3039;
    v <<= 10;
    v ^= (r / 65536) & 0x3ff;
    r *= 0x41c64e6d;
    r += 0x3039;
    v <<= 10;
    v ^= (r / 65536) & 0x3ff;
    if ((unsigned int)range < v)
    {
        return v % (unsigned int)range;
    }
    return v;
}
```
