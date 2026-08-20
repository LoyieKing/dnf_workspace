# read

`_ZN33Dispatcher_Break_Away_Quest_Check4readER9PacketBufR8MSG_BASE`

`Dispatcher_Break_Away_Quest_Check::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Break_Away_Quest_Check` | `0x081d38ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d38ba  _ZN33Dispatcher_Break_Away_Quest_Check4readER9PacketBufR8MSG_BASE
#           Dispatcher_Break_Away_Quest_Check::read(PacketBuf&, MSG_BASE&)
# range [0x081d38ba, 0x081d3909]
081d38ba +0x00:  push   %ebp
081d38bb +0x01:  mov    %esp,%ebp
081d38bd +0x03:  sub    $0x18,%esp
081d38c0 +0x06:  mov    0x10(%ebp),%eax
081d38c3 +0x09:  add    $0xd,%eax
081d38c6 +0x0c:  mov    %eax,0x4(%esp)
081d38ca +0x10:  mov    0xc(%ebp),%eax
081d38cd +0x13:  mov    %eax,(%esp)
081d38d0 +0x16:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d38d5 +0x1b:  xor    $0x1,%eax
081d38d8 +0x1e:  test   %al,%al
081d38da +0x20:  je     081d3902 <+0x48>
081d38dc +0x22:  movl   $0x0,0xc(%esp)
081d38e4 +0x2a:  movl   $0x0,0x8(%esp)
081d38ec +0x32:  movl   $&_ZZN33Dispatcher_Break_Away_Quest_Check4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d38f4 +0x3a:  movl   $0x3197,(%esp)
081d38fb +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d3900 +0x46:  jmp    081d3907 <+0x4d>
081d3902 +0x48:  mov    $0x0,%eax
081d3907 +0x4d:  leave
081d3908 +0x4e:  ret
081d3909 +0x4f:  nop
```

## 反编译 C

```c
// Dispatcher_Break_Away_Quest_Check::read @ 0x81d38ba

/* Dispatcher_Break_Away_Quest_Check::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Break_Away_Quest_Check::read
          (Dispatcher_Break_Away_Quest_Check *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x3197,
                     "virtual int Dispatcher_Break_Away_Quest_Check::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```
