# _ZN17FrameLagCollector18FrameLagDataStruct4initEv

`FrameLagCollector::FrameLagDataStruct::init()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80685da` | `0x177` | `0x806182a` | `0x16d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,104 +1,97 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x2d>
-mov    -0x10(%ebp),%edx
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x2c>
 mov    0x8(%ebp),%eax
+mov    -0xc(%ebp),%edx
 add    $0x8,%edx
 movw   $0x0,0xc(%eax,%edx,2)
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x7,-0x10(%ebp)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x7,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x19>
+jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x18>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x30(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x34(%eax)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x162>
-mov    -0xc(%ebp),%edx
+movl   $0x0,-0x8(%ebp)
+jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x15c>
 mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
 movl   $0x0,0x4(%eax,%edx,4)
-mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
 add    $0xc,%edx
 movl   $0x0,0x8(%eax,%edx,4)
-mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
 add    $0x14,%edx
 movl   $0x0,(%eax,%edx,4)
-mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
 add    $0x18,%edx
 movl   $0x0,0x8(%eax,%edx,4)
-mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
 add    $0x20,%edx
 movl   $0x0,(%eax,%edx,4)
-mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
 add    $0x9,%edx
 shl    $0x4,%edx
 add    %edx,%eax
 add    $0x8,%eax
 movl   $0x0,(%eax)
-mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
 shl    $0x4,%edx
 add    %edx,%eax
 add    $0x9c,%eax
 movl   $0x0,(%eax)
-mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
 shl    $0x4,%edx
 add    %edx,%eax
 add    $0xa0,%eax
 movl   $0x0,(%eax)
-mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
+mov    -0x8(%ebp),%edx
 shl    $0x4,%edx
 add    %edx,%eax
 add    $0xa4,%eax
 movl   $0x0,(%eax)
-movl   $0x0,-0x8(%ebp)
-jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x153>
-mov    -0xc(%ebp),%edx
-mov    -0x8(%ebp),%ebx
+movl   $0x0,-0x4(%ebp)
+jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x14d>
 mov    0x8(%ebp),%ecx
+mov    -0x8(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 sub    %edx,%eax
-add    %ebx,%eax
+add    -0x4(%ebp),%eax
 add    $0x1e,%eax
-movl   $0x0,0x10(%ecx,%eax,8)
-mov    -0xc(%ebp),%edx
-mov    -0x8(%ebp),%ebx
+movl   $0x0,0x8(%ecx,%eax,8)
 mov    0x8(%ebp),%ecx
+mov    -0x8(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 sub    %edx,%eax
-add    %ebx,%eax
-lea    0x1e(%eax),%edx
-mov    $0x0,%eax
-mov    %eax,0x14(%ecx,%edx,8)
+add    -0x4(%ebp),%eax
+movl   $0x0,0xfc(%ecx,%eax,8)
+addl   $0x1,-0x4(%ebp)
+cmpl   $0x5,-0x4(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x113>
 addl   $0x1,-0x8(%ebp)
 cmpl   $0x5,-0x8(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x114>
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x5,-0xc(%ebp)
-setle  %al
-test   %al,%al
-jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x62>
-add    $0x10,%esp
-pop    %ebx
-pop    %ebp
+jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x61>
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::FrameLagDataStruct::init() */

void __thiscall
FrameLagCollector::FrameLagDataStruct::_ZN17FrameLagCollector18FrameLagDataStruct4initEv
          (FrameLagDataStruct *this)

{
  int local_14;
  int local_10;
  int local_c;
  
  *(undefined4 *)this = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    *(undefined2 *)(this + (local_14 + 8) * 2 + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    *(undefined4 *)(this + local_10 * 4 + 4) = 0;
    *(undefined4 *)(this + (local_10 + 0xc) * 4 + 8) = 0;
    *(undefined4 *)(this + (local_10 + 0x14) * 4) = 0;
    *(undefined4 *)(this + (local_10 + 0x18) * 4 + 8) = 0;
    *(undefined4 *)(this + (local_10 + 0x20) * 4) = 0;
    *(undefined4 *)(this + (local_10 + 9) * 0x10 + 8) = 0;
    *(undefined4 *)(this + local_10 * 0x10 + 0x9c) = 0;
    *(undefined4 *)(this + local_10 * 0x10 + 0xa0) = 0;
    *(undefined4 *)(this + local_10 * 0x10 + 0xa4) = 0;
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      *(undefined4 *)(this + (local_10 * 7 + local_c + 0x1e) * 8 + 0x10) = 0;
      *(undefined4 *)(this + (local_10 * 7 + local_c + 0x1e) * 8 + 0x14) = 0;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 590 行）：

```cpp
void FrameLagCollector::FrameLagDataStruct::init()
{
    ((FrameLagDataLayout*)this)->m0 = 0;
    for (int i = 0; i < 8; i++)
    {
        ((FrameLagDataLayout*)this)->m_b[i + 8] = 0;
    }
    ((FrameLagDataLayout*)this)->m_c[0] = 0;
    ((FrameLagDataLayout*)this)->m_c[1] = 0;
    ((FrameLagDataLayout*)this)->m_c[2] = 0;
    for (int i = 0; i < 6; i++)
    {
        ((FrameLagDataLayout*)this)->m_a[i] = 0;
        ((FrameLagDataLayout*)this)->m_d[i] = 0;
        ((FrameLagDataLayout*)this)->m_e[i] = 0;
        ((FrameLagDataLayout*)this)->m_f[i] = 0;
        ((FrameLagDataLayout*)this)->m_g[i] = 0;
        ((FrameLagDataLayout*)this)->m_h[i][0] = 0;
        ((FrameLagDataLayout*)this)->m_h[i][1] = 0;
        ((FrameLagDataLayout*)this)->m_h[i][2] = 0;
        ((FrameLagDataLayout*)this)->m_h[i][3] = 0;
        for (int j = 0; j < 6; j++)
        {
            ((FrameLagDataLayout*)this)->m_i[i * 7 + j][0] = 0;
            ((FrameLagDataLayout*)this)->m_i[i * 7 + j][1] = 0;
        }
    }
}
```
