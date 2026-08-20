# read

`_ZN32Dispatcher_BlueMarbleConfirmInfo4readER9PacketBufR8MSG_BASE`

`Dispatcher_BlueMarbleConfirmInfo::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BlueMarbleConfirmInfo` | `0x081e6242` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e6242  _ZN32Dispatcher_BlueMarbleConfirmInfo4readER9PacketBufR8MSG_BASE
#           Dispatcher_BlueMarbleConfirmInfo::read(PacketBuf&, MSG_BASE&)
# range [0x081e6242, 0x081e62d9]
081e6242 +0x00:  push   %ebp
081e6243 +0x01:  mov    %esp,%ebp
081e6245 +0x03:  sub    $0x28,%esp
081e6248 +0x06:  mov    0x10(%ebp),%eax
081e624b +0x09:  mov    %eax,-0xc(%ebp)
081e624e +0x0c:  mov    -0xc(%ebp),%eax
081e6251 +0x0f:  add    $0xd,%eax
081e6254 +0x12:  mov    %eax,0x4(%esp)
081e6258 +0x16:  mov    0xc(%ebp),%eax
081e625b +0x19:  mov    %eax,(%esp)
081e625e +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e6263 +0x21:  xor    $0x1,%eax
081e6266 +0x24:  test   %al,%al
081e6268 +0x26:  je     081e6290 <+0x4e>
081e626a +0x28:  movl   $0x0,0xc(%esp)
081e6272 +0x30:  movl   $0x0,0x8(%esp)
081e627a +0x38:  movl   $&_ZZN32Dispatcher_BlueMarbleConfirmInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e6282 +0x40:  movl   $0x610d,(%esp)
081e6289 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e628e +0x4c:  jmp    081e62d7 <+0x95>
081e6290 +0x4e:  mov    -0xc(%ebp),%eax
081e6293 +0x51:  add    $0xe,%eax
081e6296 +0x54:  mov    %eax,0x4(%esp)
081e629a +0x58:  mov    0xc(%ebp),%eax
081e629d +0x5b:  mov    %eax,(%esp)
081e62a0 +0x5e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e62a5 +0x63:  xor    $0x1,%eax
081e62a8 +0x66:  test   %al,%al
081e62aa +0x68:  je     081e62d2 <+0x90>
081e62ac +0x6a:  movl   $0x0,0xc(%esp)
081e62b4 +0x72:  movl   $0x0,0x8(%esp)
081e62bc +0x7a:  movl   $&_ZZN32Dispatcher_BlueMarbleConfirmInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e62c4 +0x82:  movl   $0x6110,(%esp)
081e62cb +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e62d0 +0x8e:  jmp    081e62d7 <+0x95>
081e62d2 +0x90:  mov    $0x0,%eax
081e62d7 +0x95:  leave
081e62d8 +0x96:  ret
081e62d9 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_BlueMarbleConfirmInfo::read @ 0x81e6242

/* Dispatcher_BlueMarbleConfirmInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_BlueMarbleConfirmInfo::read
          (Dispatcher_BlueMarbleConfirmInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x6110,
                       "virtual int Dispatcher_BlueMarbleConfirmInfo::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x610d,
                     "virtual int Dispatcher_BlueMarbleConfirmInfo::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}
```
