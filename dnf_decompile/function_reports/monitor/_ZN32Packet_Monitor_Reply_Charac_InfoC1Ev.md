# _ZN32Packet_Monitor_Reply_Charac_InfoC1Ev

`Packet_Monitor_Reply_Charac_Info::Packet_Monitor_Reply_Charac_Info()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8092f42` | `0x7d` | `0x807f024` | `0x8b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,30 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x39,0x8(%esp)
 movl   $0x27df,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0xa,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0xffffffff,0xe(%eax)
+add    $0xe,%eax
+movl   $0xffffffff,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x12(%eax)
+add    $0x12,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x16(%eax)
+add    $0x16,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x17,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
-movw   $0x0,0x35(%eax)
+add    $0x35,%eax
+movw   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0xff,0x37(%eax)
+add    $0x37,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0xff,0x38(%eax)
+add    $0x38,%eax
+movb   $0xff,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Reply_Charac_Info::Packet_Monitor_Reply_Charac_Info() */

void __thiscall
Packet_Monitor_Reply_Charac_Info::_ZN32Packet_Monitor_Reply_Charac_InfoC1Ev
          (Packet_Monitor_Reply_Charac_Info *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x27df,0x39);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0xffffffff;
  *(undefined4 *)(this + 0x12) = 0;
  this[0x16] = (Packet_Monitor_Reply_Charac_Info)0x0;
  memset(this + 0x17,0,0x1e);
  *(undefined2 *)(this + 0x35) = 0;
  this[0x37] = (Packet_Monitor_Reply_Charac_Info)0xff;
  this[0x38] = (Packet_Monitor_Reply_Charac_Info)0xff;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/shared/packet/include/Packet_Monitor_Reply_Charac_Info.h](source/shared/packet/include/Packet_Monitor_Reply_Charac_Info.h)（约第 11 行）：

```cpp
    Packet_Monitor_Reply_Charac_Info() : PacketHeader(0x27df, 0x39)
    {
        *(int*)((char*)this + 0xa) = 0;
        *(int*)((char*)this + 0xe) = -1;
        *(int*)((char*)this + 0x12) = 0;
        *(char*)((char*)this + 0x16) = 0;
        memset((char*)this + 0x17, 0, 0x1e);
        *(unsigned short*)((char*)this + 0x35) = 0;
        *(char*)((char*)this + 0x37) = 0xff;
        *(char*)((char*)this + 0x38) = 0xff;
    }
```
