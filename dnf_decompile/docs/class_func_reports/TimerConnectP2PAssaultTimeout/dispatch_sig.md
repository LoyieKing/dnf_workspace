# dispatch_sig

`_ZN29TimerConnectP2PAssaultTimeout12dispatch_sigEiij`

`TimerConnectP2PAssaultTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerConnectP2PAssaultTimeout` | `0x0863759c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863759c  _ZN29TimerConnectP2PAssaultTimeout12dispatch_sigEiij
#           TimerConnectP2PAssaultTimeout::dispatch_sig(int, int, unsigned int)
# range [0x0863759c, 0x086375c9]
0863759c +0x00:  push   %ebp
0863759d +0x01:  mov    %esp,%ebp
0863759f +0x03:  push   %ebx
086375a0 +0x04:  sub    $0x14,%esp
086375a3 +0x07:  mov    0xc(%ebp),%ebx
086375a6 +0x0a:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
086375ab +0x0f:  mov    0x10(%ebp),%edx
086375ae +0x12:  mov    %edx,0x8(%esp)
086375b2 +0x16:  mov    %ebx,0x4(%esp)
086375b6 +0x1a:  mov    %eax,(%esp)
086375b9 +0x1d:  call   082efa52 <_ZN11pvp_assault11CAssaultMgr19OnTimeoutConnectP2PEji>  ; pvp_assault::CAssaultMgr::OnTimeoutConnectP2P(unsigned int, int)
086375be +0x22:  mov    $0x1,%eax
086375c3 +0x27:  add    $0x14,%esp
086375c6 +0x2a:  pop    %ebx
086375c7 +0x2b:  pop    %ebp
086375c8 +0x2c:  ret
086375c9 +0x2d:  nop
```

## 反编译 C

```c
// TimerConnectP2PAssaultTimeout::dispatch_sig @ 0x863759c

/* TimerConnectP2PAssaultTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerConnectP2PAssaultTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CAssaultMgr *this;
  
  this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutConnectP2P(this,param_2,param_3);
  return 1;
}
```
