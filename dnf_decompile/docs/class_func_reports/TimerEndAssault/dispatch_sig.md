# dispatch_sig

`_ZN15TimerEndAssault12dispatch_sigEiij`

`TimerEndAssault::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerEndAssault` | `0x0863760c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863760c  _ZN15TimerEndAssault12dispatch_sigEiij
#           TimerEndAssault::dispatch_sig(int, int, unsigned int)
# range [0x0863760c, 0x08637639]
0863760c +0x00:  push   %ebp
0863760d +0x01:  mov    %esp,%ebp
0863760f +0x03:  push   %ebx
08637610 +0x04:  sub    $0x14,%esp
08637613 +0x07:  mov    0xc(%ebp),%ebx
08637616 +0x0a:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
0863761b +0x0f:  mov    0x10(%ebp),%edx
0863761e +0x12:  mov    %edx,0x8(%esp)
08637622 +0x16:  mov    %ebx,0x4(%esp)
08637626 +0x1a:  mov    %eax,(%esp)
08637629 +0x1d:  call   082efaa8 <_ZN11pvp_assault11CAssaultMgr19OnTimeoutEndAssaultEji>  ; pvp_assault::CAssaultMgr::OnTimeoutEndAssault(unsigned int, int)
0863762e +0x22:  mov    $0x1,%eax
08637633 +0x27:  add    $0x14,%esp
08637636 +0x2a:  pop    %ebx
08637637 +0x2b:  pop    %ebp
08637638 +0x2c:  ret
08637639 +0x2d:  nop
```

## 反编译 C

```c
// TimerEndAssault::dispatch_sig @ 0x863760c

/* TimerEndAssault::dispatch_sig(int, int, unsigned int) */

undefined4 TimerEndAssault::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CAssaultMgr *this;
  
  this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutEndAssault(this,param_2,param_3);
  return 1;
}
```
