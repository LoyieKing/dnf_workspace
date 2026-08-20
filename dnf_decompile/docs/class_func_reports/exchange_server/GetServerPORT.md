# GetServerPORT

`_ZN15exchange_server13GetServerPORTEv`

`exchange_server::GetServerPORT()`

| 类 | 地址 |
|---|---|
| `exchange_server` | `0x0848f2a3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f2a3  _ZN15exchange_server13GetServerPORTEv
#           exchange_server::GetServerPORT()
# range [0x0848f2a3, 0x0848f2b7]
0848f2a3 +0x00:  push   %ebp
0848f2a4 +0x01:  mov    %esp,%ebp
0848f2a6 +0x03:  sub    $0x18,%esp
0848f2a9 +0x06:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0848f2ae +0x0b:  mov    %eax,(%esp)
0848f2b1 +0x0e:  call   082a6e66 <_GLOBAL__I__ZN4CLog5this_E+0x328d>  ; global constructors keyed to CLog::this_+0x328d
0848f2b6 +0x13:  leave
0848f2b7 +0x14:  ret
```

## 反编译 C

```c
// exchange_server::GetServerPORT @ 0x848f2a3

/* exchange_server::GetServerPORT() */

void exchange_server::GetServerPORT(void)

{
  CEnvironment *this;
  
  this = (CEnvironment *)G_CEnvironment();
  CEnvironment::get_exchange_server_port(this);
  return;
}
```
