# GetServerChannelNo

`_ZN15exchange_server18GetServerChannelNoEv`

`exchange_server::GetServerChannelNo()`

| 类 | 地址 |
|---|---|
| `exchange_server` | `0x0848f27b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f27b  _ZN15exchange_server18GetServerChannelNoEv
#           exchange_server::GetServerChannelNo()
# range [0x0848f27b, 0x0848f28d]
0848f27b +0x00:  push   %ebp
0848f27c +0x01:  mov    %esp,%ebp
0848f27e +0x03:  sub    $0x8,%esp
0848f281 +0x06:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0848f286 +0x0b:  mov    0x1b0(%eax),%eax
0848f28c +0x11:  leave
0848f28d +0x12:  ret
```

## 反编译 C

```c
// exchange_server::GetServerChannelNo @ 0x848f27b

/* exchange_server::GetServerChannelNo() */

undefined4 exchange_server::GetServerChannelNo(void)

{
  int iVar1;
  
  iVar1 = G_CEnvironment();
  return *(undefined4 *)(iVar1 + 0x1b0);
}
```
