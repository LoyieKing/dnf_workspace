# read

`_ZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASE`

`Dispatcher_SaveGameOption_1::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveGameOption_1` | `0x081cea7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cea7a  _ZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASE
#           Dispatcher_SaveGameOption_1::read(PacketBuf&, MSG_BASE&)
# range [0x081cea7a, 0x081ceb37]
081cea7a +0x00:  push   %ebp
081cea7b +0x01:  mov    %esp,%ebp
081cea7d +0x03:  sub    $0x28,%esp
081cea80 +0x06:  mov    0x10(%ebp),%eax
081cea83 +0x09:  mov    %eax,-0xc(%ebp)
081cea86 +0x0c:  mov    -0xc(%ebp),%eax
081cea89 +0x0f:  add    $0xd,%eax
081cea8c +0x12:  mov    %eax,0x4(%esp)
081cea90 +0x16:  mov    0xc(%ebp),%eax
081cea93 +0x19:  mov    %eax,(%esp)
081cea96 +0x1c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081cea9b +0x21:  xor    $0x1,%eax
081cea9e +0x24:  test   %al,%al
081ceaa0 +0x26:  jne    081ceaad <+0x33>
081ceaa2 +0x28:  mov    -0xc(%ebp),%eax
081ceaa5 +0x2b:  mov    0xd(%eax),%eax
081ceaa8 +0x2e:  cmp    $0x48,%eax
081ceaab +0x31:  jbe    081ceab4 <+0x3a>
081ceaad +0x33:  mov    $0x1,%eax
081ceab2 +0x38:  jmp    081ceab9 <+0x3f>
081ceab4 +0x3a:  mov    $0x0,%eax
081ceab9 +0x3f:  test   %al,%al
081ceabb +0x41:  je     081ceae3 <+0x69>
081ceabd +0x43:  movl   $0x0,0xc(%esp)
081ceac5 +0x4b:  movl   $0x0,0x8(%esp)
081ceacd +0x53:  movl   $&_ZZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cead5 +0x5b:  movl   $0x2860,(%esp)
081ceadc +0x62:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ceae1 +0x67:  jmp    081ceb36 <+0xbc>
081ceae3 +0x69:  mov    -0xc(%ebp),%eax
081ceae6 +0x6c:  mov    0xd(%eax),%eax
081ceae9 +0x6f:  mov    %eax,%edx
081ceaeb +0x71:  mov    -0xc(%ebp),%eax
081ceaee +0x74:  add    $0x11,%eax
081ceaf1 +0x77:  mov    %edx,0x8(%esp)
081ceaf5 +0x7b:  mov    %eax,0x4(%esp)
081ceaf9 +0x7f:  mov    0xc(%ebp),%eax
081ceafc +0x82:  mov    %eax,(%esp)
081ceaff +0x85:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081ceb04 +0x8a:  xor    $0x1,%eax
081ceb07 +0x8d:  test   %al,%al
081ceb09 +0x8f:  je     081ceb31 <+0xb7>
081ceb0b +0x91:  movl   $0x0,0xc(%esp)
081ceb13 +0x99:  movl   $0x0,0x8(%esp)
081ceb1b +0xa1:  movl   $&_ZZN27Dispatcher_SaveGameOption_14readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ceb23 +0xa9:  movl   $0x2862,(%esp)
081ceb2a +0xb0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ceb2f +0xb5:  jmp    081ceb36 <+0xbc>
081ceb31 +0xb7:  mov    $0x0,%eax
081ceb36 +0xbc:  leave
081ceb37 +0xbd:  ret
```

## 反编译 C

```c
// Dispatcher_SaveGameOption_1::read @ 0x81cea7a

/* Dispatcher_SaveGameOption_1::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveGameOption_1::read
          (Dispatcher_SaveGameOption_1 *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if ((cVar2 == '\x01') && (*(uint *)(param_2 + 0xd) < 0x49)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = LineFunc(0x2860,"virtual int Dispatcher_SaveGameOption_1::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  else {
    cVar2 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0x11),*(int *)(param_2 + 0xd));
    if (cVar2 == '\x01') {
      uVar3 = 0;
    }
    else {
      uVar3 = LineFunc(0x2862,"virtual int Dispatcher_SaveGameOption_1::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  return uVar3;
}
```
