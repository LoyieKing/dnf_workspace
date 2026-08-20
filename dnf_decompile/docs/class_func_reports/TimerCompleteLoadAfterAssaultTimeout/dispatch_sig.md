# dispatch_sig

`_ZN36TimerCompleteLoadAfterAssaultTimeout12dispatch_sigEiij`

`TimerCompleteLoadAfterAssaultTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCompleteLoadAfterAssaultTimeout` | `0x086376ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086376ec  _ZN36TimerCompleteLoadAfterAssaultTimeout12dispatch_sigEiij
#           TimerCompleteLoadAfterAssaultTimeout::dispatch_sig(int, int, unsigned int)
# range [0x086376ec, 0x08637719]
086376ec +0x00:  push   %ebp
086376ed +0x01:  mov    %esp,%ebp
086376ef +0x03:  push   %ebx
086376f0 +0x04:  sub    $0x14,%esp
086376f3 +0x07:  mov    0xc(%ebp),%ebx
086376f6 +0x0a:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
086376fb +0x0f:  mov    0x10(%ebp),%edx
086376fe +0x12:  mov    %edx,0x8(%esp)
08637702 +0x16:  mov    %ebx,0x4(%esp)
08637706 +0x1a:  mov    %eax,(%esp)
08637709 +0x1d:  call   082ef86e <_ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji>  ; pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault(unsigned int, int)
0863770e +0x22:  mov    $0x1,%eax
08637713 +0x27:  add    $0x14,%esp
08637716 +0x2a:  pop    %ebx
08637717 +0x2b:  pop    %ebp
08637718 +0x2c:  ret
08637719 +0x2d:  nop
```

## 反编译 C

```c
// TimerCompleteLoadAfterAssaultTimeout::dispatch_sig @ 0x86376ec

/* TimerCompleteLoadAfterAssaultTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCompleteLoadAfterAssaultTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CAssaultMgr *this;
  
  this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault(this,param_2,param_3);
  return 1;
}
```
