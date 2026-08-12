# _ZN16village_attacked23CVillageAttackedManager21SendFirstRankerRewardEj

`village_attacked::CVillageAttackedManager::SendFirstRankerReward(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a8c48` | `0x9e` | `0x80a7b2a` | `0xb0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x158,%esp
 lea    -0x13b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20Packet_DB_InsertMailC1Ev>
-mov    0xc(%ebp),%eax
-mov    %eax,-0x131(%ebp)
-movl   $0x1dfe,-0x12d(%ebp)
-movl   $0x1,-0x129(%ebp)
+lea    -0x13b(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xa(%eax)
+lea    -0x13b(%ebp),%eax
+movl   $0x1dfe,0xe(%eax)
+lea    -0x13b(%ebp),%eax
+movl   $0x1,0x12(%eax)
 movl   $0xa,0x8(%esp)
-movl   $"주민 대표",0x4(%esp)
+movl   $&_ZZN16village_attacked23CVillageAttackedManager21SendFirstRankerRewardEjE6kTitle,0x4(%esp)
 lea    -0x13b(%ebp),%eax
 add    $0x1a,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 movl   $0x8e,0x8(%esp)
-movl   $"소란을 잠재우시느라 수고하신 모험가님께 주민들의 정성을 모아 선물을 드립니다. 감사합니다 모험가님.(성장의 비약 사용기간이 지나면 사라집니다.)",0x4(%esp)
+movl   $&_ZZN16village_attacked23CVillageAttackedManager21SendFirstRankerRewardEjE5kBody,0x4(%esp)
 lea    -0x13b(%ebp),%eax
 add    $0x2f,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-movl   $0x3,-0xc(%ebp)
+lea    -0x13b(%ebp),%eax
+movl   $0x3,0x12f(%eax)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x13b(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::SendFirstRankerReward(unsigned int) */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager21SendFirstRankerRewardEj
          (CVillageAttackedManager *this,uint param_1)

{
  CServerHandler *this_00;
  Packet_DB_InsertMail local_13f [10];
  uint local_135;
  undefined4 local_131;
  undefined4 local_12d;
  undefined1 auStack_125 [21];
  undefined1 auStack_110 [256];
  undefined4 local_10;
  
  Packet_DB_InsertMail::Packet_DB_InsertMail(local_13f);
  local_135 = param_1;
  local_131 = 0x1dfe;
  local_12d = 1;
  memcpy(auStack_125,&DAT_08139f3b,10);
  memcpy(auStack_110,&DAT_08139f48,0x8e);
  local_10 = 3;
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
  CServerHandler::SendToDB(this_00,(PacketHeader *)local_13f);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 292 行）：

```cpp
void CVillageAttackedManager::SendFirstRankerReward(unsigned int charNo)
{
    static const char kTitle[10] = {'\xc1', '\xd6', '\xb9', '\xce', ' ',
                                    '\xb4', '\xeb', '\xc7', '\xa5', '\0'};
    static const char kBody[0x8e] = {
        '\xbc', '\xd2', '\xb6', '\xf5', '\xc0', '\xbb', '\x20', '\xc0', '\xe1', '\xc0', '\xe7', '\xbf',
        '\xec', '\xbd', '\xc3', '\xb4', '\xc0', '\xb6', '\xf3', '\x20', '\xbc', '\xf6', '\xb0', '\xed',
        '\xc7', '\xcf', '\xbd', '\xc5', '\x20', '\xb8', '\xf0', '\xc7', '\xe8', '\xb0', '\xa1', '\xb4',
        '\xd4', '\xb2', '\xb2', '\x20', '\xc1', '\xd6', '\xb9', '\xce', '\xb5', '\xe9', '\xc0', '\xc7',
        '\x20', '\xc1', '\xa4', '\xbc', '\xba', '\xc0', '\xbb', '\x20', '\xb8', '\xf0', '\xbe', '\xc6',
        '\x20', '\xbc', '\xb1', '\xb9', '\xb0', '\xc0', '\xbb', '\x20', '\xb5', '\xe5', '\xb8', '\xb3',
        '\xb4', '\xcf', '\xb4', '\xd9', '\x2e', '\x20', '\xb0', '\xa8', '\xbb', '\xe7', '\xc7', '\xd5',
        '\xb4', '\xcf', '\xb4', '\xd9', '\x20', '\xb8', '\xf0', '\xc7', '\xe8', '\xb0', '\xa1', '\xb4',
        '\xd4', '\x2e', '\x28', '\xbc', '\xba', '\xc0', '\xe5', '\xc0', '\xc7', '\x20', '\xba', '\xf1',
        '\xbe', '\xe0', '\x20', '\xbb', '\xe7', '\xbf', '\xeb', '\xb1', '\xe2', '\xb0', '\xa3', '\xc0',
        '\xcc', '\x20', '\xc1', '\xf6', '\xb3', '\xaa', '\xb8', '\xe9', '\x20', '\xbb', '\xe7', '\xb6',
        '\xf3', '\xc1', '\xfd', '\xb4', '\xcf', '\xb4', '\xd9', '\x2e', '\x29', '\x00'};
    Packet_DB_InsertMail pkt;
    ((RA_UINT<10>*)&pkt)->v = charNo;
    ((RA_UINT<14>*)&pkt)->v = 0x1dfe;
    ((RA_UINT<18>*)&pkt)->v = 1;
    memcpy((char*)&pkt + 0x1a, kTitle, 10);
    memcpy((char*)&pkt + 0x2f, kBody, 0x8e);
    ((RA_INT<303>*)&pkt)->v = 3;
    m_app->Get_ServerHandler()->SendToDB(&pkt);
}
```
