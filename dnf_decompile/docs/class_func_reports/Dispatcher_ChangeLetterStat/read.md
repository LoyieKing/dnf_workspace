# read

`_ZN27Dispatcher_ChangeLetterStat4readER9PacketBufR8MSG_BASE`

`Dispatcher_ChangeLetterStat::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeLetterStat` | `0x081ce152` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce152  _ZN27Dispatcher_ChangeLetterStat4readER9PacketBufR8MSG_BASE
#           Dispatcher_ChangeLetterStat::read(PacketBuf&, MSG_BASE&)
# range [0x081ce152, 0x081ce1fb]
081ce152 +0x00:  push   %ebp
081ce153 +0x01:  mov    %esp,%ebp
081ce155 +0x03:  sub    $0x28,%esp
081ce158 +0x06:  mov    0x10(%ebp),%eax
081ce15b +0x09:  mov    %eax,-0xc(%ebp)
081ce15e +0x0c:  mov    -0xc(%ebp),%eax
081ce161 +0x0f:  movl   $0x0,0xd(%eax)
081ce168 +0x16:  mov    -0xc(%ebp),%eax
081ce16b +0x19:  movw   $0x0,0x11(%eax)
081ce171 +0x1f:  mov    -0xc(%ebp),%eax
081ce174 +0x22:  add    $0xd,%eax
081ce177 +0x25:  mov    %eax,0x4(%esp)
081ce17b +0x29:  mov    0xc(%ebp),%eax
081ce17e +0x2c:  mov    %eax,(%esp)
081ce181 +0x2f:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081ce186 +0x34:  xor    $0x1,%eax
081ce189 +0x37:  test   %al,%al
081ce18b +0x39:  je     081ce1b3 <+0x61>
081ce18d +0x3b:  movl   $0x0,0xc(%esp)
081ce195 +0x43:  movl   $0x0,0x8(%esp)
081ce19d +0x4b:  movl   $&_ZZN27Dispatcher_ChangeLetterStat4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ce1a5 +0x53:  movl   $0x2732,(%esp)
081ce1ac +0x5a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce1b1 +0x5f:  jmp    081ce1fa <+0xa8>
081ce1b3 +0x61:  mov    -0xc(%ebp),%eax
081ce1b6 +0x64:  add    $0x11,%eax
081ce1b9 +0x67:  mov    %eax,0x4(%esp)
081ce1bd +0x6b:  mov    0xc(%ebp),%eax
081ce1c0 +0x6e:  mov    %eax,(%esp)
081ce1c3 +0x71:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ce1c8 +0x76:  xor    $0x1,%eax
081ce1cb +0x79:  test   %al,%al
081ce1cd +0x7b:  je     081ce1f5 <+0xa3>
081ce1cf +0x7d:  movl   $0x0,0xc(%esp)
081ce1d7 +0x85:  movl   $0x0,0x8(%esp)
081ce1df +0x8d:  movl   $&_ZZN27Dispatcher_ChangeLetterStat4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ce1e7 +0x95:  movl   $0x2734,(%esp)
081ce1ee +0x9c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce1f3 +0xa1:  jmp    081ce1fa <+0xa8>
081ce1f5 +0xa3:  mov    $0x0,%eax
081ce1fa +0xa8:  leave
081ce1fb +0xa9:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeLetterStat::read @ 0x81ce152

/* Dispatcher_ChangeLetterStat::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeLetterStat::read
          (Dispatcher_ChangeLetterStat *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0xd) = 0;
  *(undefined2 *)(param_2 + 0x11) = 0;
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x2734,"virtual int Dispatcher_ChangeLetterStat::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x2732,"virtual int Dispatcher_ChangeLetterStat::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```
