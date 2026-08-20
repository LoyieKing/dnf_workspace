# read

`_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event4readER9PacketBufR8MSG_BASE`

`Dispatcher_SeriaRoom_Ani_Deco_Event::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SeriaRoom_Ani_Deco_Event` | `0x081e8814` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e8814  _ZN35Dispatcher_SeriaRoom_Ani_Deco_Event4readER9PacketBufR8MSG_BASE
#           Dispatcher_SeriaRoom_Ani_Deco_Event::read(PacketBuf&, MSG_BASE&)
# range [0x081e8814, 0x081e8869]
081e8814 +0x00:  push   %ebp
081e8815 +0x01:  mov    %esp,%ebp
081e8817 +0x03:  sub    $0x28,%esp
081e881a +0x06:  mov    0x10(%ebp),%eax
081e881d +0x09:  mov    %eax,-0xc(%ebp)
081e8820 +0x0c:  mov    -0xc(%ebp),%eax
081e8823 +0x0f:  add    $0xe,%eax
081e8826 +0x12:  mov    %eax,0x4(%esp)
081e882a +0x16:  mov    0xc(%ebp),%eax
081e882d +0x19:  mov    %eax,(%esp)
081e8830 +0x1c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081e8835 +0x21:  xor    $0x1,%eax
081e8838 +0x24:  test   %al,%al
081e883a +0x26:  je     081e8862 <+0x4e>
081e883c +0x28:  movl   $0x0,0xc(%esp)
081e8844 +0x30:  movl   $0x0,0x8(%esp)
081e884c +0x38:  movl   $&_ZZN35Dispatcher_SeriaRoom_Ani_Deco_Event4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e8854 +0x40:  movl   $0x6540,(%esp)
081e885b +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e8860 +0x4c:  jmp    081e8867 <+0x53>
081e8862 +0x4e:  mov    $0x0,%eax
081e8867 +0x53:  leave
081e8868 +0x54:  ret
081e8869 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_SeriaRoom_Ani_Deco_Event::read @ 0x81e8814

/* Dispatcher_SeriaRoom_Ani_Deco_Event::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SeriaRoom_Ani_Deco_Event::read
          (Dispatcher_SeriaRoom_Ani_Deco_Event *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x6540,
                     "virtual int Dispatcher_SeriaRoom_Ani_Deco_Event::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
