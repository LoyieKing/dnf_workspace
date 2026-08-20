# read

`_ZN29Dispatcher_EnterDisjointStore4readER9PacketBufR8MSG_BASE`

`Dispatcher_EnterDisjointStore::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EnterDisjointStore` | `0x081d0082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d0082  _ZN29Dispatcher_EnterDisjointStore4readER9PacketBufR8MSG_BASE
#           Dispatcher_EnterDisjointStore::read(PacketBuf&, MSG_BASE&)
# range [0x081d0082, 0x081d00d7]
081d0082 +0x00:  push   %ebp
081d0083 +0x01:  mov    %esp,%ebp
081d0085 +0x03:  sub    $0x28,%esp
081d0088 +0x06:  mov    0x10(%ebp),%eax
081d008b +0x09:  mov    %eax,-0xc(%ebp)
081d008e +0x0c:  mov    -0xc(%ebp),%eax
081d0091 +0x0f:  add    $0xe,%eax
081d0094 +0x12:  mov    %eax,0x4(%esp)
081d0098 +0x16:  mov    0xc(%ebp),%eax
081d009b +0x19:  mov    %eax,(%esp)
081d009e +0x1c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d00a3 +0x21:  xor    $0x1,%eax
081d00a6 +0x24:  test   %al,%al
081d00a8 +0x26:  je     081d00d0 <+0x4e>
081d00aa +0x28:  movl   $0x0,0xc(%esp)
081d00b2 +0x30:  movl   $0x0,0x8(%esp)
081d00ba +0x38:  movl   $&_ZZN29Dispatcher_EnterDisjointStore4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d00c2 +0x40:  movl   $0x2aa8,(%esp)
081d00c9 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d00ce +0x4c:  jmp    081d00d5 <+0x53>
081d00d0 +0x4e:  mov    $0x0,%eax
081d00d5 +0x53:  leave
081d00d6 +0x54:  ret
081d00d7 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_EnterDisjointStore::read @ 0x81d0082

/* Dispatcher_EnterDisjointStore::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_EnterDisjointStore::read
          (Dispatcher_EnterDisjointStore *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x2aa8,"virtual int Dispatcher_EnterDisjointStore::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
