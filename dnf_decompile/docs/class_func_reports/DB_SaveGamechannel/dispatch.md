# dispatch

`_ZN18DB_SaveGamechannel8dispatchEiiP6Stream`

`DB_SaveGamechannel::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveGamechannel` | `0x0841c428` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841c428  _ZN18DB_SaveGamechannel8dispatchEiiP6Stream
#           DB_SaveGamechannel::dispatch(int, int, Stream*)
# range [0x0841c428, 0x0841c457]
0841c428 +0x00:  push   %ebp
0841c429 +0x01:  mov    %esp,%ebp
0841c42b +0x03:  sub    $0x28,%esp
0841c42e +0x06:  mov    0x14(%ebp),%eax
0841c431 +0x09:  mov    %eax,(%esp)
0841c434 +0x0c:  call   084513b2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3fc8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3fc8
0841c439 +0x11:  mov    %eax,-0xc(%ebp)
0841c43c +0x14:  mov    &_ZN10GlobalData17s_pLogGameChannelE,%eax
0841c441 +0x19:  mov    -0xc(%ebp),%edx
0841c444 +0x1c:  mov    %edx,0x4(%esp)
0841c448 +0x20:  mov    %eax,(%esp)
0841c44b +0x23:  call   08550612 <_ZN8WongWork15CLogGameChannel9DoSaveLogEP23SIG_SAVE_LOGGAMECHANNEL>  ; WongWork::CLogGameChannel::DoSaveLog(SIG_SAVE_LOGGAMECHANNEL*)
0841c450 +0x28:  mov    $0x1,%eax
0841c455 +0x2d:  leave
0841c456 +0x2e:  ret
0841c457 +0x2f:  nop
```

## 反编译 C

```c
// DB_SaveGamechannel::dispatch @ 0x841c428

/* DB_SaveGamechannel::dispatch(int, int, Stream*) */

undefined4 DB_SaveGamechannel::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SAVE_LOGGAMECHANNEL *pSVar1;
  Stream *in_stack_00000010;
  
  pSVar1 = Stream::GetOutBuffer<SIG_SAVE_LOGGAMECHANNEL>(in_stack_00000010);
  WongWork::CLogGameChannel::DoSaveLog(GlobalData::s_pLogGameChannel,pSVar1);
  return 1;
}
```
