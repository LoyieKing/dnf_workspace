# _ZN17CPacketTranslater16OnRegisterGM_midEP12PacketHeader

`CPacketTranslater::OnRegisterGM_mid(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808d538` | `0x2e` | `0x8070dfc` | `0x30` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater16OnRegisterGM_midEP12PacketHeader+0x2c>
+je     <T> <_ZN17CPacketTranslater16OnRegisterGM_midEP12PacketHeader+0x2e>
 mov    -0xc(%ebp),%eax
-mov    0xa(%eax),%edx
+add    $0xa,%eax
+mov    (%eax),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication9Add_GM_idEj>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRegisterGM_mid(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnRegisterGM_midEP12PacketHeader
               (PacketHeader *param_1)

{
  if (m_pclApp != 0) {
    CApplication::_ZN12CApplication9Add_GM_idEj(m_pclApp);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2122 行）：

```cpp
void CPacketTranslater::OnRegisterGM_mid(PacketHeader* pkt)
{
    PacketHeader* p = pkt;
    if (m_pclApp != 0)
    {
        m_pclApp->Add_GM_id(*(unsigned int*)((char*)p + 0xa));
    }
}
```
