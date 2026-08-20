# read

`_ZN39Dispatcher_Expand_Equipslot_Flag_Update4readER9PacketBufR8MSG_BASE`

`Dispatcher_Expand_Equipslot_Flag_Update::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Expand_Equipslot_Flag_Update` | `0x081d5eba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5eba  _ZN39Dispatcher_Expand_Equipslot_Flag_Update4readER9PacketBufR8MSG_BASE
#           Dispatcher_Expand_Equipslot_Flag_Update::read(PacketBuf&, MSG_BASE&)
# range [0x081d5eba, 0x081d5f0f]
081d5eba +0x00:  push   %ebp
081d5ebb +0x01:  mov    %esp,%ebp
081d5ebd +0x03:  sub    $0x28,%esp
081d5ec0 +0x06:  mov    0x10(%ebp),%eax
081d5ec3 +0x09:  mov    %eax,-0xc(%ebp)
081d5ec6 +0x0c:  mov    -0xc(%ebp),%eax
081d5ec9 +0x0f:  add    $0xd,%eax
081d5ecc +0x12:  mov    %eax,0x4(%esp)
081d5ed0 +0x16:  mov    0xc(%ebp),%eax
081d5ed3 +0x19:  mov    %eax,(%esp)
081d5ed6 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d5edb +0x21:  xor    $0x1,%eax
081d5ede +0x24:  test   %al,%al
081d5ee0 +0x26:  je     081d5f08 <+0x4e>
081d5ee2 +0x28:  movl   $0x0,0xc(%esp)
081d5eea +0x30:  movl   $0x0,0x8(%esp)
081d5ef2 +0x38:  movl   $&_ZZN39Dispatcher_Expand_Equipslot_Flag_Update4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d5efa +0x40:  movl   $0x3de4,(%esp)
081d5f01 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5f06 +0x4c:  jmp    081d5f0d <+0x53>
081d5f08 +0x4e:  mov    $0x0,%eax
081d5f0d +0x53:  leave
081d5f0e +0x54:  ret
081d5f0f +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_Expand_Equipslot_Flag_Update::read @ 0x81d5eba

/* Dispatcher_Expand_Equipslot_Flag_Update::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Expand_Equipslot_Flag_Update::read
          (Dispatcher_Expand_Equipslot_Flag_Update *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x3de4,
                     "virtual int Dispatcher_Expand_Equipslot_Flag_Update::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
