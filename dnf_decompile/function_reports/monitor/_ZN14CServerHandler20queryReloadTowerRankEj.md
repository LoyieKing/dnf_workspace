# _ZN14CServerHandler20queryReloadTowerRankEj

`CServerHandler::queryReloadTowerRank(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807a1b8` | `0x4b` | `0x80805e6` | `0x4f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x28,%esp
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN14CServerHandler20queryReloadTowerRankEj+0x3c>
-lea    -0x1e(%ebp),%eax
+jmp    <T> <_ZN14CServerHandler20queryReloadTowerRankEj+0x42>
+lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Request_Load_Tower_Full_RankC1Ev>
-mov    -0xc(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-lea    -0x1e(%ebp),%eax
+lea    -0x16(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,0xa(%eax)
+lea    -0x16(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xe(%eax)
+lea    -0x16(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x4,%eax
-setbe  %al
+cmpl   $0x4,-0xc(%ebp)
+setle  %al
 test   %al,%al
 jne    <T> <_ZN14CServerHandler20queryReloadTowerRankEj+0xf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::queryReloadTowerRank(unsigned int) */

void __thiscall
CServerHandler::_ZN14CServerHandler20queryReloadTowerRankEj(CServerHandler *this,uint param_1)

{
  Packet_Request_Load_Tower_Full_Rank local_22 [10];
  uint local_18;
  uint local_14;
  uint local_10;
  
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    Packet_Request_Load_Tower_Full_Rank::Packet_Request_Load_Tower_Full_Rank(local_22);
    local_18 = local_10;
    local_14 = param_1;
    SendToDB(this,(PacketHeader *)local_22);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp](source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp)（约第 241 行）：

```cpp
void CServerHandler::queryReloadTowerRank(unsigned int channel)
{
    for (int i = 0; i <= 4; i++)
    {
        Packet_Request_Load_Tower_Full_Rank pkt;
        ((RA_INT<10>*)&pkt)->v = i;
        ((RA_UINT<14>*)&pkt)->v = channel;
        SendToDB(&pkt);
    }
}
```
