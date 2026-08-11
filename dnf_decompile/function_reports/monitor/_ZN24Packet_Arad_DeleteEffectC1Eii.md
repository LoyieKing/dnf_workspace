# _ZN24Packet_Arad_DeleteEffectC1Eii

`Packet_Arad_DeleteEffect::Packet_Arad_DeleteEffect(int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805c822` | `0x35` | `0x807e7ac` | `0x39` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x12,0x8(%esp)
 movl   $0x27fa,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0xa(%eax)
+lea    0xa(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0xe(%eax)
+lea    0xe(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %eax,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Arad_DeleteEffect::Packet_Arad_DeleteEffect(int, int) */

void __thiscall
Packet_Arad_DeleteEffect::_ZN24Packet_Arad_DeleteEffectC1Eii
          (Packet_Arad_DeleteEffect *this,int param_1,int param_2)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x27fa,0x12);
  *(int *)(this + 10) = param_1;
  *(int *)(this + 0xe) = param_2;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5842 行）：

```cpp
Packet_Arad_DeleteEffect::Packet_Arad_DeleteEffect(int group, int code)
    : PacketHeader(0x27fa, 0x12)
{
    *(int*)((char*)this + 0xa) = group;
    *(int*)((char*)this + 0xe) = code;
}
```
