# read

`_ZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASE`

`Dispatcher_RequestDisjointItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestDisjointItem` | `0x081cfb28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cfb28  _ZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASE
#           Dispatcher_RequestDisjointItem::read(PacketBuf&, MSG_BASE&)
# range [0x081cfb28, 0x081cfc03]
081cfb28 +0x00:  push   %ebp
081cfb29 +0x01:  mov    %esp,%ebp
081cfb2b +0x03:  sub    $0x28,%esp
081cfb2e +0x06:  mov    0x10(%ebp),%eax
081cfb31 +0x09:  mov    %eax,-0xc(%ebp)
081cfb34 +0x0c:  mov    -0xc(%ebp),%eax
081cfb37 +0x0f:  add    $0xe,%eax
081cfb3a +0x12:  mov    %eax,0x4(%esp)
081cfb3e +0x16:  mov    0xc(%ebp),%eax
081cfb41 +0x19:  mov    %eax,(%esp)
081cfb44 +0x1c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081cfb49 +0x21:  xor    $0x1,%eax
081cfb4c +0x24:  test   %al,%al
081cfb4e +0x26:  je     081cfb79 <+0x51>
081cfb50 +0x28:  movl   $0x0,0xc(%esp)
081cfb58 +0x30:  movl   $0x0,0x8(%esp)
081cfb60 +0x38:  movl   $&_ZZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cfb68 +0x40:  movl   $0x29ed,(%esp)
081cfb6f +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cfb74 +0x4c:  jmp    081cfc02 <+0xda>
081cfb79 +0x51:  mov    -0xc(%ebp),%eax
081cfb7c +0x54:  add    $0x10,%eax
081cfb7f +0x57:  mov    %eax,0x4(%esp)
081cfb83 +0x5b:  mov    0xc(%ebp),%eax
081cfb86 +0x5e:  mov    %eax,(%esp)
081cfb89 +0x61:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081cfb8e +0x66:  xor    $0x1,%eax
081cfb91 +0x69:  test   %al,%al
081cfb93 +0x6b:  je     081cfbbb <+0x93>
081cfb95 +0x6d:  movl   $0x0,0xc(%esp)
081cfb9d +0x75:  movl   $0x0,0x8(%esp)
081cfba5 +0x7d:  movl   $&_ZZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cfbad +0x85:  movl   $0x29f0,(%esp)
081cfbb4 +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cfbb9 +0x91:  jmp    081cfc02 <+0xda>
081cfbbb +0x93:  mov    -0xc(%ebp),%eax
081cfbbe +0x96:  add    $0x12,%eax
081cfbc1 +0x99:  mov    %eax,0x4(%esp)
081cfbc5 +0x9d:  mov    0xc(%ebp),%eax
081cfbc8 +0xa0:  mov    %eax,(%esp)
081cfbcb +0xa3:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081cfbd0 +0xa8:  xor    $0x1,%eax
081cfbd3 +0xab:  test   %al,%al
081cfbd5 +0xad:  je     081cfbfd <+0xd5>
081cfbd7 +0xaf:  movl   $0x0,0xc(%esp)
081cfbdf +0xb7:  movl   $0x0,0x8(%esp)
081cfbe7 +0xbf:  movl   $&_ZZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cfbef +0xc7:  movl   $0x29f3,(%esp)
081cfbf6 +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cfbfb +0xd3:  jmp    081cfc02 <+0xda>
081cfbfd +0xd5:  mov    $0x0,%eax
081cfc02 +0xda:  leave
081cfc03 +0xdb:  ret
```

## 反编译 C

```c
// Dispatcher_RequestDisjointItem::read @ 0x81cfb28

/* Dispatcher_RequestDisjointItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestDisjointItem::read
          (Dispatcher_RequestDisjointItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x29f3,
                         "virtual int Dispatcher_RequestDisjointItem::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x29f0,
                       "virtual int Dispatcher_RequestDisjointItem::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x29ed,
                     "virtual int Dispatcher_RequestDisjointItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
