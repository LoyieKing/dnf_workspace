# _ZN10CIPCounter9setOptionEhh

`CIPCounter::setOption(unsigned char, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x805e830` | `0x89` | `0x8093bc6` | `0x89` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,43 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x10,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
-mov    %dl,-0xc(%ebp)
-mov    %al,-0x10(%ebp)
-cmpb   $0x0,-0xc(%ebp)
+mov    %dl,-0x4(%ebp)
+mov    %al,-0x8(%ebp)
+cmpb   $0x0,-0x4(%ebp)
 jne    <T> <_ZN10CIPCounter9setOptionEhh+0x2d>
-movzbl -0x10(%ebp),%eax
+movzbl -0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CIPCounter11setLoadTermEh>
 jmp    <T> <_ZN10CIPCounter9setOptionEhh+0x87>
-cmpb   $0x1,-0xc(%ebp)
+cmpb   $0x1,-0x4(%ebp)
 jne    <T> <_ZN10CIPCounter9setOptionEhh+0x48>
-movzbl -0x10(%ebp),%eax
+movzbl -0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CIPCounter13setMinIPCountEh>
 jmp    <T> <_ZN10CIPCounter9setOptionEhh+0x87>
-cmpb   $0x2,-0xc(%ebp)
+cmpb   $0x2,-0x4(%ebp)
 jne    <T> <_ZN10CIPCounter9setOptionEhh+0x6b>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x10(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4(%eax)
 jmp    <T> <_ZN10CIPCounter9setOptionEhh+0x87>
-cmpb   $0x3,-0xc(%ebp)
+cmpb   $0x3,-0x4(%ebp)
 jne    <T> <_ZN10CIPCounter9setOptionEhh+0x7a>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x10(%eax)
 jmp    <T> <_ZN10CIPCounter9setOptionEhh+0x87>
-cmpb   $0x4,-0xc(%ebp)
+cmpb   $0x4,-0x4(%ebp)
 jne    <T> <_ZN10CIPCounter9setOptionEhh+0x87>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x11(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CIPCounter::setOption(unsigned char, unsigned char) */

void __thiscall
CIPCounter::_ZN10CIPCounter9setOptionEhh(CIPCounter *this,uchar param_1,uchar param_2)

{
  if (param_1 == '\0') {
    _ZN10CIPCounter11setLoadTermEh(this,param_2);
  }
  else if (param_1 == '\x01') {
    _ZN10CIPCounter13setMinIPCountEh(this,param_2);
  }
  else if (param_1 == '\x02') {
    this[0x10] = (CIPCounter)0x1;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  else if (param_1 == '\x03') {
    this[0x10] = (CIPCounter)0x0;
  }
  else if (param_1 == '\x04') {
    this[0x11] = (CIPCounter)0x0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/IPCounter.cpp](source/DNFServer/GameServer/Monitor/IPCounter.cpp)（约第 89 行）：

```cpp
void CIPCounter::setOption(unsigned char type, unsigned char opt)
{
    if (type == 0)
    {
        setLoadTerm(opt);
    }
    else if (type == 1)
    {
        setMinIPCount(opt);
    }
    else if (type == 2)
    {
        ((RA_U8<16>*)this)->v = 1;
        ((RA_UINT<8>*)this)->v = 0;
        ((RA_UINT<4>*)this)->v = 0;
    }
    else if (type == 3)
    {
        ((RA_U8<16>*)this)->v = 0;
    }
    else if (type == 4)
    {
        ((RA_U8<17>*)this)->v = 0;
    }
}
```
