# read

`_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset4readER9PacketBufR8MSG_BASE`

`Dispatcher_ComboSkillExtensionQuickSlotReset::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ComboSkillExtensionQuickSlotReset` | `0x0825f492` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f492  _ZN44Dispatcher_ComboSkillExtensionQuickSlotReset4readER9PacketBufR8MSG_BASE
#           Dispatcher_ComboSkillExtensionQuickSlotReset::read(PacketBuf&, MSG_BASE&)
# range [0x0825f492, 0x0825f4e7]
0825f492 +0x00:  push   %ebp
0825f493 +0x01:  mov    %esp,%ebp
0825f495 +0x03:  sub    $0x28,%esp
0825f498 +0x06:  mov    0x10(%ebp),%eax
0825f49b +0x09:  mov    %eax,-0xc(%ebp)
0825f49e +0x0c:  mov    -0xc(%ebp),%eax
0825f4a1 +0x0f:  add    $0xd,%eax
0825f4a4 +0x12:  mov    %eax,0x4(%esp)
0825f4a8 +0x16:  mov    0xc(%ebp),%eax
0825f4ab +0x19:  mov    %eax,(%esp)
0825f4ae +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0825f4b3 +0x21:  xor    $0x1,%eax
0825f4b6 +0x24:  test   %al,%al
0825f4b8 +0x26:  je     0825f4e0 <+0x4e>
0825f4ba +0x28:  movl   $0x0,0xc(%esp)
0825f4c2 +0x30:  movl   $0x0,0x8(%esp)
0825f4ca +0x38:  movl   $&_ZZN44Dispatcher_ComboSkillExtensionQuickSlotReset4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825f4d2 +0x40:  movl   $0x372,(%esp)
0825f4d9 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825f4de +0x4c:  jmp    0825f4e5 <+0x53>
0825f4e0 +0x4e:  mov    $0x0,%eax
0825f4e5 +0x53:  leave
0825f4e6 +0x54:  ret
0825f4e7 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_ComboSkillExtensionQuickSlotReset::read @ 0x825f492

/* Dispatcher_ComboSkillExtensionQuickSlotReset::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ComboSkillExtensionQuickSlotReset::read
          (Dispatcher_ComboSkillExtensionQuickSlotReset *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x372,
                     "virtual int Dispatcher_ComboSkillExtensionQuickSlotReset::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
