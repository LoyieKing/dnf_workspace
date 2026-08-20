# GetDispatcher

`_ZN11game_master14CGameMasterMgr13GetDispatcherEi`

`game_master::CGameMasterMgr::GetDispatcher(int)`

| 类 | 地址 |
|---|---|
| `game_master::CGameMasterMgr` | `0x084a8a9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8a9a  _ZN11game_master14CGameMasterMgr13GetDispatcherEi
#           game_master::CGameMasterMgr::GetDispatcher(int)
# range [0x084a8a9a, 0x084a8ab5]
084a8a9a +0x00:  push   %ebp
084a8a9b +0x01:  mov    %esp,%ebp
084a8a9d +0x03:  sub    $0x18,%esp
084a8aa0 +0x06:  call   0823453e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9be8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9be8
084a8aa5 +0x0b:  mov    0x8(%ebp),%edx
084a8aa8 +0x0e:  mov    %edx,0x4(%esp)
084a8aac +0x12:  mov    %eax,(%esp)
084a8aaf +0x15:  call   085948e2 <_ZN16PacketDispatcher14get_dispatcherEi>  ; PacketDispatcher::get_dispatcher(int)
084a8ab4 +0x1a:  leave
084a8ab5 +0x1b:  ret
```

## 反编译 C

```c
// game_master::CGameMasterMgr::GetDispatcher @ 0x84a8a9a

/* game_master::CGameMasterMgr::GetDispatcher(int) */

void game_master::CGameMasterMgr::GetDispatcher(int param_1)

{
  PacketDispatcher *this;
  
  this = (PacketDispatcher *)G_PacketDispatcher();
  PacketDispatcher::get_dispatcher(this,param_1);
  return;
}
```
