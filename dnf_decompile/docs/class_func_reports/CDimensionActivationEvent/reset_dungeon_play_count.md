# reset_dungeon_play_count

`_ZN25CDimensionActivationEvent24reset_dungeon_play_countEv`

`CDimensionActivationEvent::reset_dungeon_play_count()`

| 类 | 地址 |
|---|---|
| `CDimensionActivationEvent` | `0x080eec58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eec58  _ZN25CDimensionActivationEvent24reset_dungeon_play_countEv
#           CDimensionActivationEvent::reset_dungeon_play_count()
# range [0x080eec58, 0x080eeca3]
080eec58 +0x00:  push   %ebp
080eec59 +0x01:  mov    %esp,%ebp
080eec5b +0x03:  sub    $0x28,%esp
080eec5e +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080eec63 +0x0b:  mov    %eax,(%esp)
080eec66 +0x0e:  call   08365ea0 <_ZN12CDataManager20reset_dimensionInoutEv>  ; CDataManager::reset_dimensionInout()
080eec6b +0x13:  movl   $0x0,0xc(%esp)
080eec73 +0x1b:  movl   $0x34,0x8(%esp)
080eec7b +0x23:  movl   $&_ZZN25CDimensionActivationEvent24reset_dungeon_play_countEvE19__PRETTY_FUNCTION__,0x4(%esp)
080eec83 +0x2b:  lea    -0x18(%ebp),%eax
080eec86 +0x2e:  mov    %eax,(%esp)
080eec89 +0x31:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080eec8e +0x36:  movl   $"CDimensionActivationEvent reset_dungeon_play_count",0x4(%esp)
080eec96 +0x3e:  lea    -0x18(%ebp),%eax
080eec99 +0x41:  mov    %eax,(%esp)
080eec9c +0x44:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080eeca1 +0x49:  leave
080eeca2 +0x4a:  ret
080eeca3 +0x4b:  nop
```

## 反编译 C

```c
// CDimensionActivationEvent::reset_dungeon_play_count @ 0x80eec58

/* CDimensionActivationEvent::reset_dungeon_play_count() */

void CDimensionActivationEvent::reset_dungeon_play_count(void)

{
  CDataManager *this;
  cMyTrace local_1c [24];
  
  this = (CDataManager *)G_CDataManager();
  CDataManager::reset_dimensionInout(this);
  cMyTrace::cMyTrace(local_1c,"void CDimensionActivationEvent::reset_dungeon_play_count()",0x34,0);
  cMyTrace::operator()(local_1c,"CDimensionActivationEvent reset_dungeon_play_count");
  return;
}
```
