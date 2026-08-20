# dispatch_sig

`_ZN31TimerCompleteLoadAssaultTimeout12dispatch_sigEiij`

`TimerCompleteLoadAssaultTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCompleteLoadAssaultTimeout` | `0x0863752c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863752c  _ZN31TimerCompleteLoadAssaultTimeout12dispatch_sigEiij
#           TimerCompleteLoadAssaultTimeout::dispatch_sig(int, int, unsigned int)
# range [0x0863752c, 0x08637559]
0863752c +0x00:  push   %ebp
0863752d +0x01:  mov    %esp,%ebp
0863752f +0x03:  push   %ebx
08637530 +0x04:  sub    $0x14,%esp
08637533 +0x07:  mov    0xc(%ebp),%ebx
08637536 +0x0a:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
0863753b +0x0f:  mov    0x10(%ebp),%edx
0863753e +0x12:  mov    %edx,0x8(%esp)
08637542 +0x16:  mov    %ebx,0x4(%esp)
08637546 +0x1a:  mov    %eax,(%esp)
08637549 +0x1d:  call   082ef818 <_ZN11pvp_assault11CAssaultMgr21OnTimeoutCompleteLoadEji>  ; pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad(unsigned int, int)
0863754e +0x22:  mov    $0x1,%eax
08637553 +0x27:  add    $0x14,%esp
08637556 +0x2a:  pop    %ebx
08637557 +0x2b:  pop    %ebp
08637558 +0x2c:  ret
08637559 +0x2d:  nop
```

## 反编译 C

```c
// TimerCompleteLoadAssaultTimeout::dispatch_sig @ 0x863752c

/* TimerCompleteLoadAssaultTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCompleteLoadAssaultTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CAssaultMgr *this;
  
  this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad(this,param_2,param_3);
  return 1;
}
```
