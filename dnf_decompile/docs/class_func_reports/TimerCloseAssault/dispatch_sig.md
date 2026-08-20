# dispatch_sig

`_ZN17TimerCloseAssault12dispatch_sigEiij`

`TimerCloseAssault::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCloseAssault` | `0x0863767c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863767c  _ZN17TimerCloseAssault12dispatch_sigEiij
#           TimerCloseAssault::dispatch_sig(int, int, unsigned int)
# range [0x0863767c, 0x086376a9]
0863767c +0x00:  push   %ebp
0863767d +0x01:  mov    %esp,%ebp
0863767f +0x03:  push   %ebx
08637680 +0x04:  sub    $0x14,%esp
08637683 +0x07:  mov    0xc(%ebp),%ebx
08637686 +0x0a:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
0863768b +0x0f:  mov    0x10(%ebp),%edx
0863768e +0x12:  mov    %edx,0x8(%esp)
08637692 +0x16:  mov    %ebx,0x4(%esp)
08637696 +0x1a:  mov    %eax,(%esp)
08637699 +0x1d:  call   082efafe <_ZN11pvp_assault11CAssaultMgr21OnTimeoutCloseAssaultEji>  ; pvp_assault::CAssaultMgr::OnTimeoutCloseAssault(unsigned int, int)
0863769e +0x22:  mov    $0x1,%eax
086376a3 +0x27:  add    $0x14,%esp
086376a6 +0x2a:  pop    %ebx
086376a7 +0x2b:  pop    %ebp
086376a8 +0x2c:  ret
086376a9 +0x2d:  nop
```

## 反编译 C

```c
// TimerCloseAssault::dispatch_sig @ 0x863767c

/* TimerCloseAssault::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCloseAssault::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CAssaultMgr *this;
  
  this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutCloseAssault(this,param_2,param_3);
  return 1;
}
```
