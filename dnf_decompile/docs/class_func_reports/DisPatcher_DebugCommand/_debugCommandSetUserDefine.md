# _debugCommandSetUserDefine

`_ZN23DisPatcher_DebugCommand26_debugCommandSetUserDefineEP5CUserR9PacketBuf`

`DisPatcher_DebugCommand::_debugCommandSetUserDefine(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x085908ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085908ba  _ZN23DisPatcher_DebugCommand26_debugCommandSetUserDefineEP5CUserR9PacketBuf
#           DisPatcher_DebugCommand::_debugCommandSetUserDefine(CUser*, PacketBuf&)
# range [0x085908ba, 0x085908d6]
085908ba +0x00:  push   %ebp
085908bb +0x01:  mov    %esp,%ebp
085908bd +0x03:  sub    $0x140,%esp
085908c3 +0x09:  cmpl   $0x0,0xc(%ebp)
085908c7 +0x0d:  je     085908d0 <+0x16>
085908c9 +0x0f:  mov    $0x0,%eax
085908ce +0x14:  jmp    085908d5 <+0x1b>
085908d0 +0x16:  mov    $0x1,%eax
085908d5 +0x1b:  leave
085908d6 +0x1c:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandSetUserDefine @ 0x85908ba

/* DisPatcher_DebugCommand::_debugCommandSetUserDefine(CUser*, PacketBuf&) */

bool DisPatcher_DebugCommand::_debugCommandSetUserDefine(CUser *param_1,PacketBuf *param_2)

{
  return param_2 == (PacketBuf *)0x0;
}
```
