# GetServerIP

`_ZN15exchange_server11GetServerIPEv`

`exchange_server::GetServerIP()`

| 类 | 地址 |
|---|---|
| `exchange_server` | `0x0848f28e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f28e  _ZN15exchange_server11GetServerIPEv
#           exchange_server::GetServerIP()
# range [0x0848f28e, 0x0848f2a2]
0848f28e +0x00:  push   %ebp
0848f28f +0x01:  mov    %esp,%ebp
0848f291 +0x03:  sub    $0x18,%esp
0848f294 +0x06:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0848f299 +0x0b:  mov    %eax,(%esp)
0848f29c +0x0e:  call   082a6e74 <_GLOBAL__I__ZN4CLog5this_E+0x329b>  ; global constructors keyed to CLog::this_+0x329b
0848f2a1 +0x13:  leave
0848f2a2 +0x14:  ret
```

## 反编译 C

```c
// exchange_server::GetServerIP @ 0x848f28e

/* exchange_server::GetServerIP() */

void exchange_server::GetServerIP(void)

{
  CEnvironment *this;
  
  this = (CEnvironment *)G_CEnvironment();
  CEnvironment::get_exchange_server_ip(this);
  return;
}
```
