# read

`_ZN40Dispatcher_Avatar_Disjoint_Random_Reward4readER9PacketBufR8MSG_BASE`

`Dispatcher_Avatar_Disjoint_Random_Reward::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Avatar_Disjoint_Random_Reward` | `0x081de9da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de9da  _ZN40Dispatcher_Avatar_Disjoint_Random_Reward4readER9PacketBufR8MSG_BASE
#           Dispatcher_Avatar_Disjoint_Random_Reward::read(PacketBuf&, MSG_BASE&)
# range [0x081de9da, 0x081dea05]
081de9da +0x00:  push   %ebp
081de9db +0x01:  mov    %esp,%ebp
081de9dd +0x03:  sub    $0x28,%esp
081de9e0 +0x06:  movl   $0x0,0xc(%esp)
081de9e8 +0x0e:  movl   $0x0,0x8(%esp)
081de9f0 +0x16:  movl   $&_ZZN40Dispatcher_Avatar_Disjoint_Random_Reward4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081de9f8 +0x1e:  movl   $0x5041,(%esp)
081de9ff +0x25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dea04 +0x2a:  leave
081dea05 +0x2b:  ret
```

## 反编译 C

```c
// Dispatcher_Avatar_Disjoint_Random_Reward::read @ 0x81de9da

/* Dispatcher_Avatar_Disjoint_Random_Reward::read(PacketBuf&, MSG_BASE&) */

void Dispatcher_Avatar_Disjoint_Random_Reward::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  LineFunc(0x5041,
           "virtual int Dispatcher_Avatar_Disjoint_Random_Reward::read(PacketBuf&, MSG_BASE&)",0,0);
  return;
}
```
