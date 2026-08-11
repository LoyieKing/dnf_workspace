# _ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj

`FrameLagCollector::DirectxVersionStruct::add_cnt(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8068776` | `0x11d` | `0x8061ae8` | `0x114` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,83 @@
 push   %ebp
 mov    %esp,%ebp
 cmpl   $0xffffffff,0xc(%ebp)
-je     <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11a>
+je     <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x111>
 cmpl   $0x7ffff,0xc(%ebp)
 ja     <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x28>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax)
-jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11b>
+jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x112>
 cmpl   $0x7ffff,0xc(%ebp)
 jbe    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x4e>
 cmpl   $0x8ffff,0xc(%ebp)
 ja     <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x4e>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x4(%eax)
-jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11b>
+jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x112>
 cmpl   $0x90000,0xc(%ebp)
 jne    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x6b>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x8(%eax)
-jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11b>
+jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x112>
 cmpl   $0x90001,0xc(%ebp)
 jne    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x88>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
-jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11b>
+jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x112>
 cmpl   $0x90002,0xc(%ebp)
 jne    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0xa2>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x10(%eax)
-jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11b>
+jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x112>
 cmpl   $0x90003,0xc(%ebp)
 jne    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0xbc>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x14(%eax)
-jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11b>
+jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x112>
 cmpl   $0x9ffff,0xc(%ebp)
-ja     <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0xce>
+jbe    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0xdf>
 cmpl   $0xaffff,0xc(%ebp)
 ja     <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0xdf>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x18(%eax)
-jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11b>
+jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x112>
 cmpl   $0xaffff,0xc(%ebp)
-ja     <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0xf1>
+jbe    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x102>
 cmpl   $0xbffff,0xc(%ebp)
 ja     <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x102>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1c(%eax)
-jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11b>
-cmpl   $0xbffff,0xc(%ebp)
-jbe    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11b>
+jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x112>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax)
-jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x11b>
+jmp    <T> <_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj+0x112>
 nop
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::DirectxVersionStruct::add_cnt(unsigned int) */

void __thiscall
FrameLagCollector::DirectxVersionStruct::_ZN17FrameLagCollector20DirectxVersionStruct7add_cntEj
          (DirectxVersionStruct *this,uint param_1)

{
  if (param_1 != 0xffffffff) {
    if (param_1 < 0x80000) {
      *(int *)this = *(int *)this + 1;
    }
    else if ((param_1 < 0x80000) || (0x8ffff < param_1)) {
      if (param_1 == 0x90000) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      else if (param_1 == 0x90001) {
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      }
      else if (param_1 == 0x90002) {
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      }
      else if (param_1 == 0x90003) {
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
      }
      else if ((param_1 < 0xa0000) && (0xaffff < param_1)) {
        if ((param_1 < 0xb0000) && (0xbffff < param_1)) {
          if (0xbffff < param_1) {
            *(int *)this = *(int *)this + 1;
          }
        }
        else {
          *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
        }
      }
      else {
        *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      }
    }
    else {
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 608 行）：

```cpp
void FrameLagCollector::DirectxVersionStruct::add_cnt(unsigned int version)
{
    if (version == 0xffffffff)
    {
        return;
    }
    if (version <= 0x7ffff)
    {
        m_data[0] += 1;
    }
    else if (version > 0x7ffff && version <= 0x8ffff)
    {
        m_data[1] += 1;
    }
    else if (version == 0x90000)
    {
        m_data[2] += 1;
    }
    else if (version == 0x90001)
    {
        m_data[3] += 1;
    }
    else if (version == 0x90002)
    {
        m_data[4] += 1;
    }
    else if (version == 0x90003)
    {
        m_data[5] += 1;
    }
    else if (version > 0x9ffff && version <= 0xaffff)
    {
        m_data[6] += 1;
    }
    else if (version > 0xaffff && version <= 0xbffff)
    {
        m_data[7] += 1;
    }
    else
    {
        m_data[0] += 1;
    }
}
```
