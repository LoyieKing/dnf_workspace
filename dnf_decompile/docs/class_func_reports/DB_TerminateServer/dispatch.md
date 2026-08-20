# dispatch

`_ZN18DB_TerminateServer8dispatchEiiP6Stream`

`DB_TerminateServer::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_TerminateServer` | `0x0841a2ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a2ee  _ZN18DB_TerminateServer8dispatchEiiP6Stream
#           DB_TerminateServer::dispatch(int, int, Stream*)
# range [0x0841a2ee, 0x0841a2f7]
0841a2ee +0x00:  push   %ebp
0841a2ef +0x01:  mov    %esp,%ebp
0841a2f1 +0x03:  mov    $0x1,%eax
0841a2f6 +0x08:  pop    %ebp
0841a2f7 +0x09:  ret
```

## 反编译 C

```c
// DB_TerminateServer::dispatch @ 0x841a2ee

/* DB_TerminateServer::dispatch(int, int, Stream*) */

undefined4 DB_TerminateServer::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
