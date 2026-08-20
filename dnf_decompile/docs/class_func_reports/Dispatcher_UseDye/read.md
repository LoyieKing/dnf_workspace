# read

`_ZN17Dispatcher_UseDye4readER9PacketBufR8MSG_BASE`

`Dispatcher_UseDye::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseDye` | `0x081e6952` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e6952  _ZN17Dispatcher_UseDye4readER9PacketBufR8MSG_BASE
#           Dispatcher_UseDye::read(PacketBuf&, MSG_BASE&)
# range [0x081e6952, 0x081e69e9]
081e6952 +0x00:  push   %ebp
081e6953 +0x01:  mov    %esp,%ebp
081e6955 +0x03:  sub    $0x28,%esp
081e6958 +0x06:  mov    0x10(%ebp),%eax
081e695b +0x09:  mov    %eax,-0xc(%ebp)
081e695e +0x0c:  mov    -0xc(%ebp),%eax
081e6961 +0x0f:  add    $0xe,%eax
081e6964 +0x12:  mov    %eax,0x4(%esp)
081e6968 +0x16:  mov    0xc(%ebp),%eax
081e696b +0x19:  mov    %eax,(%esp)
081e696e +0x1c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e6973 +0x21:  xor    $0x1,%eax
081e6976 +0x24:  test   %al,%al
081e6978 +0x26:  je     081e69a0 <+0x4e>
081e697a +0x28:  movl   $0x0,0xc(%esp)
081e6982 +0x30:  movl   $0x0,0x8(%esp)
081e698a +0x38:  movl   $&_ZZN17Dispatcher_UseDye4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e6992 +0x40:  movl   $0x6245,(%esp)
081e6999 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e699e +0x4c:  jmp    081e69e7 <+0x95>
081e69a0 +0x4e:  mov    -0xc(%ebp),%eax
081e69a3 +0x51:  add    $0x10,%eax
081e69a6 +0x54:  mov    %eax,0x4(%esp)
081e69aa +0x58:  mov    0xc(%ebp),%eax
081e69ad +0x5b:  mov    %eax,(%esp)
081e69b0 +0x5e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e69b5 +0x63:  xor    $0x1,%eax
081e69b8 +0x66:  test   %al,%al
081e69ba +0x68:  je     081e69e2 <+0x90>
081e69bc +0x6a:  movl   $0x0,0xc(%esp)
081e69c4 +0x72:  movl   $0x0,0x8(%esp)
081e69cc +0x7a:  movl   $&_ZZN17Dispatcher_UseDye4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e69d4 +0x82:  movl   $0x6248,(%esp)
081e69db +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e69e0 +0x8e:  jmp    081e69e7 <+0x95>
081e69e2 +0x90:  mov    $0x0,%eax
081e69e7 +0x95:  leave
081e69e8 +0x96:  ret
081e69e9 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_UseDye::read @ 0x81e6952

/* Dispatcher_UseDye::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UseDye::read(Dispatcher_UseDye *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x6248,"virtual int Dispatcher_UseDye::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x6245,"virtual int Dispatcher_UseDye::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
