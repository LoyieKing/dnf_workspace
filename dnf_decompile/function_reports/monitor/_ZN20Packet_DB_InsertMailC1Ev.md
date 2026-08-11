# _ZN20Packet_DB_InsertMailC1Ev

`Packet_DB_InsertMail::Packet_DB_InsertMail()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80aa328` | `0xaa` | `0x807e662` | `0xaf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,42 +1,42 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movl   $0x133,0x8(%esp)
 movl   $0x177c,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
 movl   $0x0,0xa(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xe(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x12(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x16(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x12f(%eax)
-movl   $0x0,-0xc(%ebp)
-movl   $0x0,-0xc(%ebp)
+movl   $0x0,-0x10(%ebp)
+movl   $0x0,-0x10(%ebp)
 jmp    <T> <_ZN20Packet_DB_InsertMailC1Ev+0x75>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    0x8(%ebp),%edx
 movb   $0x0,0x1a(%edx,%eax,1)
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x14,%eax
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x14,-0x10(%ebp)
 setbe  %al
 test   %al,%al
 jne    <T> <_ZN20Packet_DB_InsertMailC1Ev+0x66>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN20Packet_DB_InsertMailC1Ev+0x9a>
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN20Packet_DB_InsertMailC1Ev+0x9f>
 mov    -0xc(%ebp),%eax
 mov    0x8(%ebp),%edx
 movb   $0x0,0x2f(%edx,%eax,1)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0xff,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN20Packet_DB_InsertMailC1Ev+0x8b>
+jne    <T> <_ZN20Packet_DB_InsertMailC1Ev+0x90>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_InsertMail::Packet_DB_InsertMail() */

void __thiscall Packet_DB_InsertMail::_ZN20Packet_DB_InsertMailC1Ev(Packet_DB_InsertMail *this)

{
  uint local_10;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x177c,0x133);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  *(undefined4 *)(this + 0x12) = 0;
  *(undefined4 *)(this + 0x16) = 0;
  *(undefined4 *)(this + 0x12f) = 0;
  for (local_10 = 0; local_10 < 0x15; local_10 = local_10 + 1) {
    this[local_10 + 0x1a] = (Packet_DB_InsertMail)0x0;
  }
  for (local_10 = 0; (int)local_10 < 0x100; local_10 = local_10 + 1) {
    this[local_10 + 0x2f] = (Packet_DB_InsertMail)0x0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5859 行）：

```cpp
Packet_DB_InsertMail::Packet_DB_InsertMail() : PacketHeader(0x177c, 0x133)
{
    m_fieldA = 0;
    m_fieldB = 0;
    m_fieldC = 0;
    m_fieldD = 0;
    m_field12f = 0;
    unsigned i = 0;
    for (i = 0; i <= 0x14; i++)
    {
        m_title[i] = 0;
    }
    int i2 = 0;
    for (i2 = 0; i2 <= 0xff; i2++)
    {
        m_body[i2] = 0;
    }
}
```
