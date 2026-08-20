# read

`_ZN20Dispatcher_BingoQuiz4readER9PacketBufR8MSG_BASE`

`Dispatcher_BingoQuiz::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BingoQuiz` | `0x0825e962` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825e962  _ZN20Dispatcher_BingoQuiz4readER9PacketBufR8MSG_BASE
#           Dispatcher_BingoQuiz::read(PacketBuf&, MSG_BASE&)
# range [0x0825e962, 0x0825e9b7]
0825e962 +0x00:  push   %ebp
0825e963 +0x01:  mov    %esp,%ebp
0825e965 +0x03:  sub    $0x28,%esp
0825e968 +0x06:  mov    0x10(%ebp),%eax
0825e96b +0x09:  mov    %eax,-0xc(%ebp)
0825e96e +0x0c:  mov    -0xc(%ebp),%eax
0825e971 +0x0f:  add    $0xd,%eax
0825e974 +0x12:  mov    %eax,0x4(%esp)
0825e978 +0x16:  mov    0xc(%ebp),%eax
0825e97b +0x19:  mov    %eax,(%esp)
0825e97e +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0825e983 +0x21:  xor    $0x1,%eax
0825e986 +0x24:  test   %al,%al
0825e988 +0x26:  je     0825e9b0 <+0x4e>
0825e98a +0x28:  movl   $0x0,0xc(%esp)
0825e992 +0x30:  movl   $0x0,0x8(%esp)
0825e99a +0x38:  movl   $&_ZZN20Dispatcher_BingoQuiz4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825e9a2 +0x40:  movl   $0x1de,(%esp)
0825e9a9 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825e9ae +0x4c:  jmp    0825e9b5 <+0x53>
0825e9b0 +0x4e:  mov    $0x0,%eax
0825e9b5 +0x53:  leave
0825e9b6 +0x54:  ret
0825e9b7 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_BingoQuiz::read @ 0x825e962

/* Dispatcher_BingoQuiz::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_BingoQuiz::read(Dispatcher_BingoQuiz *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x1de,"virtual int Dispatcher_BingoQuiz::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
