# read

`_ZN12advancealtar20Dispatcher_StartGame4readER9PacketBufR8MSG_BASE`

`advancealtar::Dispatcher_StartGame::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_StartGame` | `0x0813f7b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813f7b0  _ZN12advancealtar20Dispatcher_StartGame4readER9PacketBufR8MSG_BASE
#           advancealtar::Dispatcher_StartGame::read(PacketBuf&, MSG_BASE&)
# range [0x0813f7b0, 0x0813f7dd]
0813f7b0 +0x00:  push   %ebp
0813f7b1 +0x01:  mov    %esp,%ebp
0813f7b3 +0x03:  sub    $0x28,%esp
0813f7b6 +0x06:  mov    0x10(%ebp),%eax
0813f7b9 +0x09:  mov    %eax,-0xc(%ebp)
0813f7bc +0x0c:  mov    -0xc(%ebp),%eax
0813f7bf +0x0f:  movl   $0xd,0x8(%esp)
0813f7c7 +0x17:  mov    %eax,0x4(%esp)
0813f7cb +0x1b:  mov    0xc(%ebp),%eax
0813f7ce +0x1e:  mov    %eax,(%esp)
0813f7d1 +0x21:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
0813f7d6 +0x26:  mov    $0x0,%eax
0813f7db +0x2b:  leave
0813f7dc +0x2c:  ret
0813f7dd +0x2d:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_StartGame::read @ 0x813f7b0

/* advancealtar::Dispatcher_StartGame::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
advancealtar::Dispatcher_StartGame::read
          (Dispatcher_StartGame *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0xd);
  return 0;
}
```
