# read

`_ZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASE`

`Dispatcher_Equipslot_Switch::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Equipslot_Switch` | `0x081d606e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d606e  _ZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASE
#           Dispatcher_Equipslot_Switch::read(PacketBuf&, MSG_BASE&)
# range [0x081d606e, 0x081d6149]
081d606e +0x00:  push   %ebp
081d606f +0x01:  mov    %esp,%ebp
081d6071 +0x03:  sub    $0x28,%esp
081d6074 +0x06:  mov    0x10(%ebp),%eax
081d6077 +0x09:  mov    %eax,-0xc(%ebp)
081d607a +0x0c:  mov    -0xc(%ebp),%eax
081d607d +0x0f:  add    $0xd,%eax
081d6080 +0x12:  mov    %eax,0x4(%esp)
081d6084 +0x16:  mov    0xc(%ebp),%eax
081d6087 +0x19:  mov    %eax,(%esp)
081d608a +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d608f +0x21:  xor    $0x1,%eax
081d6092 +0x24:  test   %al,%al
081d6094 +0x26:  je     081d60bf <+0x51>
081d6096 +0x28:  movl   $0x0,0xc(%esp)
081d609e +0x30:  movl   $0x0,0x8(%esp)
081d60a6 +0x38:  movl   $&_ZZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d60ae +0x40:  movl   $0x3e12,(%esp)
081d60b5 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d60ba +0x4c:  jmp    081d6148 <+0xda>
081d60bf +0x51:  mov    -0xc(%ebp),%eax
081d60c2 +0x54:  add    $0xe,%eax
081d60c5 +0x57:  mov    %eax,0x4(%esp)
081d60c9 +0x5b:  mov    0xc(%ebp),%eax
081d60cc +0x5e:  mov    %eax,(%esp)
081d60cf +0x61:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d60d4 +0x66:  xor    $0x1,%eax
081d60d7 +0x69:  test   %al,%al
081d60d9 +0x6b:  je     081d6101 <+0x93>
081d60db +0x6d:  movl   $0x0,0xc(%esp)
081d60e3 +0x75:  movl   $0x0,0x8(%esp)
081d60eb +0x7d:  movl   $&_ZZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d60f3 +0x85:  movl   $0x3e14,(%esp)
081d60fa +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d60ff +0x91:  jmp    081d6148 <+0xda>
081d6101 +0x93:  mov    -0xc(%ebp),%eax
081d6104 +0x96:  add    $0xf,%eax
081d6107 +0x99:  mov    %eax,0x4(%esp)
081d610b +0x9d:  mov    0xc(%ebp),%eax
081d610e +0xa0:  mov    %eax,(%esp)
081d6111 +0xa3:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d6116 +0xa8:  xor    $0x1,%eax
081d6119 +0xab:  test   %al,%al
081d611b +0xad:  je     081d6143 <+0xd5>
081d611d +0xaf:  movl   $0x0,0xc(%esp)
081d6125 +0xb7:  movl   $0x0,0x8(%esp)
081d612d +0xbf:  movl   $&_ZZN27Dispatcher_Equipslot_Switch4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d6135 +0xc7:  movl   $0x3e16,(%esp)
081d613c +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d6141 +0xd3:  jmp    081d6148 <+0xda>
081d6143 +0xd5:  mov    $0x0,%eax
081d6148 +0xda:  leave
081d6149 +0xdb:  ret
```

## 反编译 C

```c
// Dispatcher_Equipslot_Switch::read @ 0x81d606e

/* Dispatcher_Equipslot_Switch::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Equipslot_Switch::read
          (Dispatcher_Equipslot_Switch *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x3e16,
                         "virtual int Dispatcher_Equipslot_Switch::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0x3e14,"virtual int Dispatcher_Equipslot_Switch::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x3e12,"virtual int Dispatcher_Equipslot_Switch::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```
