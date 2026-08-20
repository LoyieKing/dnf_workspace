# reset

`_ZN11CTradeSpace5resetEv`

`CTradeSpace::reset()`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x085297f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085297f2  _ZN11CTradeSpace5resetEv
#           CTradeSpace::reset()
# range [0x085297f2, 0x0852993b]
085297f2 +0x000:  push   %ebp
085297f3 +0x001:  mov    %esp,%ebp
085297f5 +0x003:  sub    $0x18,%esp
085297f8 +0x006:  mov    0x8(%ebp),%eax
085297fb +0x009:  mov    %eax,(%esp)
085297fe +0x00c:  call   085320e2 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x140>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x140
08529803 +0x011:  movl   $0x0,0x4(%esp)
0852980b +0x019:  mov    0x8(%ebp),%eax
0852980e +0x01c:  mov    %eax,(%esp)
08529811 +0x01f:  call   085320fa <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x158>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x158
08529816 +0x024:  mov    0x8(%ebp),%eax
08529819 +0x027:  movb   $0x0,0x1c(%eax)
0852981d +0x02b:  mov    0x8(%ebp),%eax
08529820 +0x02e:  mov    0x20(%eax),%eax
08529823 +0x031:  test   %eax,%eax
08529825 +0x033:  je     08529860 <+0x6e>
08529827 +0x035:  mov    0x8(%ebp),%eax
0852982a +0x038:  mov    0x20(%eax),%eax
0852982d +0x03b:  movl   $0xffffffff,0x4(%esp)
08529835 +0x043:  mov    %eax,(%esp)
08529838 +0x046:  call   085320b4 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x112>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x112
0852983d +0x04b:  mov    0x8(%ebp),%eax
08529840 +0x04e:  mov    0x20(%eax),%eax
08529843 +0x051:  add    $0x79700,%eax
08529848 +0x056:  movl   $"",0x8(%esp)
08529850 +0x05e:  movl   $"",0x4(%esp)
08529858 +0x066:  mov    %eax,(%esp)
0852985b +0x069:  call   08532036 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x94>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x94
08529860 +0x06e:  mov    0x8(%ebp),%eax
08529863 +0x071:  mov    0x24(%eax),%eax
08529866 +0x074:  test   %eax,%eax
08529868 +0x076:  je     085298a3 <+0xb1>
0852986a +0x078:  mov    0x8(%ebp),%eax
0852986d +0x07b:  mov    0x24(%eax),%eax
08529870 +0x07e:  movl   $0xffffffff,0x4(%esp)
08529878 +0x086:  mov    %eax,(%esp)
0852987b +0x089:  call   085320b4 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x112>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x112
08529880 +0x08e:  mov    0x8(%ebp),%eax
08529883 +0x091:  mov    0x24(%eax),%eax
08529886 +0x094:  add    $0x79700,%eax
0852988b +0x099:  movl   $"",0x8(%esp)
08529893 +0x0a1:  movl   $"",0x4(%esp)
0852989b +0x0a9:  mov    %eax,(%esp)
0852989e +0x0ac:  call   08532036 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x94>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x94
085298a3 +0x0b1:  mov    0x8(%ebp),%eax
085298a6 +0x0b4:  movl   $0x0,0xf60(%eax)
085298b0 +0x0be:  mov    0x8(%ebp),%eax
085298b3 +0x0c1:  movl   $0x0,0xf64(%eax)
085298bd +0x0cb:  mov    0x8(%ebp),%eax
085298c0 +0x0ce:  movl   $0x2,0x28(%eax)
085298c7 +0x0d5:  mov    0x8(%ebp),%eax
085298ca +0x0d8:  movl   $0x2,0x2c(%eax)
085298d1 +0x0df:  mov    0x8(%ebp),%eax
085298d4 +0x0e2:  add    $0x30,%eax
085298d7 +0x0e5:  movl   $0x798,0x8(%esp)
085298df +0x0ed:  movl   $0x0,0x4(%esp)
085298e7 +0x0f5:  mov    %eax,(%esp)
085298ea +0x0f8:  call   0807dcc0 <_init+0x5b8>
085298ef +0x0fd:  mov    0x8(%ebp),%eax
085298f2 +0x100:  add    $0x7c8,%eax
085298f7 +0x105:  movl   $0x798,0x8(%esp)
085298ff +0x10d:  movl   $0x0,0x4(%esp)
08529907 +0x115:  mov    %eax,(%esp)
0852990a +0x118:  call   0807dcc0 <_init+0x5b8>
0852990f +0x11d:  mov    0x8(%ebp),%eax
08529912 +0x120:  add    $0xf68,%eax
08529917 +0x125:  movl   $0x8,0x8(%esp)
0852991f +0x12d:  movl   $0x0,0x4(%esp)
08529927 +0x135:  mov    %eax,(%esp)
0852992a +0x138:  call   0807dcc0 <_init+0x5b8>
0852992f +0x13d:  mov    0x8(%ebp),%eax
08529932 +0x140:  mov    %eax,(%esp)
08529935 +0x143:  call   085320e8 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x146>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x146
0852993a +0x148:  leave
0852993b +0x149:  ret
```

## 反编译 C

```c
// CTradeSpace::reset @ 0x85297f2

/* CTradeSpace::reset() */

void __thiscall CTradeSpace::reset(CTradeSpace *this)

{
  lock();
  _SetLock(this,false);
  this[0x1c] = (CTradeSpace)0x0;
  if (*(int *)(this + 0x20) != 0) {
    CUser::SetTradeSpace(*(CUser **)(this + 0x20),-1);
    cUserHistoryLog::SetTrader((cUserHistoryLog *)(*(int *)(this + 0x20) + 0x79700),"","");
  }
  if (*(int *)(this + 0x24) != 0) {
    CUser::SetTradeSpace(*(CUser **)(this + 0x24),-1);
    cUserHistoryLog::SetTrader((cUserHistoryLog *)(*(int *)(this + 0x24) + 0x79700),"","");
  }
  *(undefined4 *)(this + 0xf60) = 0;
  *(undefined4 *)(this + 0xf64) = 0;
  *(undefined4 *)(this + 0x28) = 2;
  *(undefined4 *)(this + 0x2c) = 2;
  memset(this + 0x30,0,0x798);
  memset(this + 0x7c8,0,0x798);
  memset(this + 0xf68,0,8);
  unlock();
  return;
}
```
