# _ZN17ST_Guild_Mem_InfoC2Ev

`ST_Guild_Mem_Info::ST_Guild_Mem_Info()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092ba8` | `0x80` | `0x8058f32` | `0x84` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x1(%eax)
 mov    0x8(%ebp),%eax
-movw   $0xffff,0x2(%eax)
-mov    0x8(%ebp),%eax
-movb   $0xff,0x37(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x1,0x38(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x39(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x3a(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x3b(%eax)
+add    $0x2,%eax
+movw   $0xffff,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x22,%eax
 movl   $0x15,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
+mov    0x8(%ebp),%eax
+movb   $0xff,0x37(%eax)
+mov    0x8(%ebp),%eax
+movb   $0x1,0x38(%eax)
+mov    0x8(%ebp),%eax
+movb   $0x0,0x39(%eax)
+mov    0x8(%ebp),%eax
+movb   $0x0,0x3a(%eax)
+mov    0x8(%ebp),%eax
+add    $0x3b,%eax
+movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* ST_Guild_Mem_Info::ST_Guild_Mem_Info() */

void __thiscall ST_Guild_Mem_Info::_ZN17ST_Guild_Mem_InfoC2Ev(ST_Guild_Mem_Info *this)

{
  *this = (ST_Guild_Mem_Info)0xff;
  this[1] = (ST_Guild_Mem_Info)0xff;
  *(undefined2 *)(this + 2) = 0xffff;
  this[0x37] = (ST_Guild_Mem_Info)0xff;
  this[0x38] = (ST_Guild_Mem_Info)0x1;
  this[0x39] = (ST_Guild_Mem_Info)0x0;
  this[0x3a] = (ST_Guild_Mem_Info)0x0;
  *(undefined4 *)(this + 0x3b) = 0;
  memset(this + 4,0,0x1e);
  memset(this + 0x22,0,0x15);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/shared/packet/include/Packet_Monitor_Call_Guild_Members_ToChannel.h](source/shared/packet/include/Packet_Monitor_Call_Guild_Members_ToChannel.h)（约第 19 行）：

```cpp
inline ST_Guild_Mem_Info::ST_Guild_Mem_Info()
{
    m_data[0] = (char)0xff;
    m_data[1] = (char)0xff;
    *(unsigned short*)(m_data + 2) = 0xffff;
    memset(m_data + 4, 0, 0x1e);
    memset(m_data + 0x22, 0, 0x15);
    m_data[0x37] = (char)0xff;
    m_data[0x38] = 1;
    m_data[0x39] = 0;
    m_data[0x3a] = 0;
    *(unsigned int*)(m_data + 0x3b) = 0;
}
```
