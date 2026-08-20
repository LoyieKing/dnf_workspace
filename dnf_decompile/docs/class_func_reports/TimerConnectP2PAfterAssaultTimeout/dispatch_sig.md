# dispatch_sig

`_ZN34TimerConnectP2PAfterAssaultTimeout12dispatch_sigEiij`

`TimerConnectP2PAfterAssaultTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerConnectP2PAfterAssaultTimeout` | `0x0863775c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863775c  _ZN34TimerConnectP2PAfterAssaultTimeout12dispatch_sigEiij
#           TimerConnectP2PAfterAssaultTimeout::dispatch_sig(int, int, unsigned int)
# range [0x0863775c, 0x08637789]
0863775c +0x00:  push   %ebp
0863775d +0x01:  mov    %esp,%ebp
0863775f +0x03:  push   %ebx
08637760 +0x04:  sub    $0x14,%esp
08637763 +0x07:  mov    0xc(%ebp),%ebx
08637766 +0x0a:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
0863776b +0x0f:  mov    0x10(%ebp),%edx
0863776e +0x12:  mov    %edx,0x8(%esp)
08637772 +0x16:  mov    %ebx,0x4(%esp)
08637776 +0x1a:  mov    %eax,(%esp)
08637779 +0x1d:  call   082ef9d8 <_ZN11pvp_assault11CAssaultMgr31OnTimeoutConnectP2PAfterAssaultEji>  ; pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault(unsigned int, int)
0863777e +0x22:  mov    $0x1,%eax
08637783 +0x27:  add    $0x14,%esp
08637786 +0x2a:  pop    %ebx
08637787 +0x2b:  pop    %ebp
08637788 +0x2c:  ret
08637789 +0x2d:  nop
```

## 反编译 C

```c
// TimerConnectP2PAfterAssaultTimeout::dispatch_sig @ 0x863775c

/* TimerConnectP2PAfterAssaultTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerConnectP2PAfterAssaultTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault(uVar1,param_2);
  return 1;
}
```
