# read

`_ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE`

`Dispatcher_SaveQuestNotify::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveQuestNotify` | `0x0825ed06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825ed06  _ZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASE
#           Dispatcher_SaveQuestNotify::read(PacketBuf&, MSG_BASE&)
# range [0x0825ed06, 0x0825edfb]
0825ed06 +0x00:  push   %ebp
0825ed07 +0x01:  mov    %esp,%ebp
0825ed09 +0x03:  sub    $0x28,%esp
0825ed0c +0x06:  mov    0x10(%ebp),%eax
0825ed0f +0x09:  mov    %eax,-0x10(%ebp)
0825ed12 +0x0c:  movb   $0x0,-0x11(%ebp)
0825ed16 +0x10:  lea    -0x11(%ebp),%eax
0825ed19 +0x13:  mov    %eax,0x4(%esp)
0825ed1d +0x17:  mov    0xc(%ebp),%eax
0825ed20 +0x1a:  mov    %eax,(%esp)
0825ed23 +0x1d:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0825ed28 +0x22:  xor    $0x1,%eax
0825ed2b +0x25:  test   %al,%al
0825ed2d +0x27:  je     0825ed58 <+0x52>
0825ed2f +0x29:  movl   $0x0,0xc(%esp)
0825ed37 +0x31:  movl   $0x0,0x8(%esp)
0825ed3f +0x39:  movl   $&_ZZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825ed47 +0x41:  movl   $0x2b3,(%esp)
0825ed4e +0x48:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825ed53 +0x4d:  jmp    0825edf9 <+0xf3>
0825ed58 +0x52:  movzbl -0x11(%ebp),%eax
0825ed5c +0x56:  test   %al,%al
0825ed5e +0x58:  js     0825ed68 <+0x62>
0825ed60 +0x5a:  movzbl -0x11(%ebp),%eax
0825ed64 +0x5e:  cmp    $0x5,%al
0825ed66 +0x60:  jle    0825ed8e <+0x88>
0825ed68 +0x62:  movl   $0x0,0xc(%esp)
0825ed70 +0x6a:  movl   $0x0,0x8(%esp)
0825ed78 +0x72:  movl   $&_ZZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825ed80 +0x7a:  movl   $0x2b6,(%esp)
0825ed87 +0x81:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825ed8c +0x86:  jmp    0825edf9 <+0xf3>
0825ed8e +0x88:  movl   $0x0,-0xc(%ebp)
0825ed95 +0x8f:  jmp    0825ede3 <+0xdd>
0825ed97 +0x91:  mov    -0xc(%ebp),%eax
0825ed9a +0x94:  shl    $0x2,%eax
0825ed9d +0x97:  add    -0x10(%ebp),%eax
0825eda0 +0x9a:  add    $0xd,%eax
0825eda3 +0x9d:  mov    %eax,0x4(%esp)
0825eda7 +0xa1:  mov    0xc(%ebp),%eax
0825edaa +0xa4:  mov    %eax,(%esp)
0825edad +0xa7:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0825edb2 +0xac:  xor    $0x1,%eax
0825edb5 +0xaf:  test   %al,%al
0825edb7 +0xb1:  je     0825eddf <+0xd9>
0825edb9 +0xb3:  movl   $0x0,0xc(%esp)
0825edc1 +0xbb:  movl   $0x0,0x8(%esp)
0825edc9 +0xc3:  movl   $&_ZZN26Dispatcher_SaveQuestNotify4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825edd1 +0xcb:  movl   $0x2bb,(%esp)
0825edd8 +0xd2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825eddd +0xd7:  jmp    0825edf9 <+0xf3>
0825eddf +0xd9:  addl   $0x1,-0xc(%ebp)
0825ede3 +0xdd:  movzbl -0x11(%ebp),%eax
0825ede7 +0xe1:  movsbl %al,%eax
0825edea +0xe4:  cmp    -0xc(%ebp),%eax
0825eded +0xe7:  setg   %al
0825edf0 +0xea:  test   %al,%al
0825edf2 +0xec:  jne    0825ed97 <+0x91>
0825edf4 +0xee:  mov    $0x0,%eax
0825edf9 +0xf3:  leave
0825edfa +0xf4:  ret
0825edfb +0xf5:  nop
```

## 反编译 C

```c
// Dispatcher_SaveQuestNotify::read @ 0x825ed06

/* Dispatcher_SaveQuestNotify::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveQuestNotify::read
          (Dispatcher_SaveQuestNotify *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char local_15;
  MSG_BASE *local_14;
  int local_10;
  
  local_14 = param_2;
  local_15 = '\0';
  cVar1 = PacketBuf::get_byte(param_1,&local_15);
  if (cVar1 == '\x01') {
    if ((local_15 < '\0') || ('\x05' < local_15)) {
      uVar2 = LineFunc(0x2b6,"virtual int Dispatcher_SaveQuestNotify::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
    else {
      for (local_10 = 0; local_10 < local_15; local_10 = local_10 + 1) {
        cVar1 = PacketBuf::get_int(param_1,(uint *)(local_14 + local_10 * 4 + 0xd));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(699,"virtual int Dispatcher_SaveQuestNotify::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = LineFunc(0x2b3,"virtual int Dispatcher_SaveQuestNotify::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}
```
