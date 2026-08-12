# _ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start

`CEventActionManager::OnStartAction(Packet_Monitor_Event_Start*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4068` | `0x47` | `0x8092f72` | `0x47` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0xa5,-0xc(%ebp)
 ja     <T> <_ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start+0x44>
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,-0x10(%ebp)
-mov    -0xc(%ebp),%edx
+lea    -0x10(%ebp),%edx
+mov    -0xc(%ebp),%ecx
 mov    0x8(%ebp),%eax
-mov    (%eax,%edx,4),%eax
-lea    -0x10(%ebp),%edx
+mov    (%eax,%ecx,4),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CBaseEventAction12OnStartEventER10EventParam>
 mov    0xc(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,0xe(%eax)
 jmp    <T> <_ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start+0x45>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CEventActionManager::OnStartAction(Packet_Monitor_Event_Start*) */

void __thiscall
CEventActionManager::_ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start
          (CEventActionManager *this,Packet_Monitor_Event_Start *param_1)

{
  undefined4 local_14;
  uint local_10;
  
  local_10 = *(uint *)(param_1 + 10);
  if (local_10 < 0xa6) {
    local_14 = *(undefined4 *)(param_1 + 0xe);
    CBaseEventAction::_ZN16CBaseEventAction12OnStartEventER10EventParam
              (*(CBaseEventAction **)(this + local_10 * 4),(EventParam *)&local_14);
    *(undefined4 *)(param_1 + 0xe) = local_14;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/EventActionManager.cpp](source/DNFServer/GameServer/Monitor/EventActionManager.cpp)（约第 144 行）：

```cpp
void CEventActionManager::OnStartAction(Packet_Monitor_Event_Start* pkt)
{
    unsigned int code = ((RA_UINT<10>*)pkt)->v;
    if (code < 0xa6)
    {
        unsigned int param = ((RA_UINT<14>*)pkt)->v;
        m_actions[code]->OnStartEvent((EventParam&)param);
        ((RA_UINT<14>*)pkt)->v = param;
    }
    return;
}
```
