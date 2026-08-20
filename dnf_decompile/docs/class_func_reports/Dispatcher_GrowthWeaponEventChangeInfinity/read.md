# read

`_ZN42Dispatcher_GrowthWeaponEventChangeInfinity4readER9PacketBufR8MSG_BASE`

`Dispatcher_GrowthWeaponEventChangeInfinity::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthWeaponEventChangeInfinity` | `0x081e7d1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e7d1c  _ZN42Dispatcher_GrowthWeaponEventChangeInfinity4readER9PacketBufR8MSG_BASE
#           Dispatcher_GrowthWeaponEventChangeInfinity::read(PacketBuf&, MSG_BASE&)
# range [0x081e7d1c, 0x081e7db3]
081e7d1c +0x00:  push   %ebp
081e7d1d +0x01:  mov    %esp,%ebp
081e7d1f +0x03:  sub    $0x28,%esp
081e7d22 +0x06:  mov    0x10(%ebp),%eax
081e7d25 +0x09:  mov    %eax,-0xc(%ebp)
081e7d28 +0x0c:  mov    -0xc(%ebp),%eax
081e7d2b +0x0f:  add    $0xd,%eax
081e7d2e +0x12:  mov    %eax,0x4(%esp)
081e7d32 +0x16:  mov    0xc(%ebp),%eax
081e7d35 +0x19:  mov    %eax,(%esp)
081e7d38 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e7d3d +0x21:  xor    $0x1,%eax
081e7d40 +0x24:  test   %al,%al
081e7d42 +0x26:  je     081e7d6a <+0x4e>
081e7d44 +0x28:  movl   $0x0,0xc(%esp)
081e7d4c +0x30:  movl   $0x0,0x8(%esp)
081e7d54 +0x38:  movl   $&_ZZN42Dispatcher_GrowthWeaponEventChangeInfinity4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e7d5c +0x40:  movl   $0x63fc,(%esp)
081e7d63 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e7d68 +0x4c:  jmp    081e7db1 <+0x95>
081e7d6a +0x4e:  mov    -0xc(%ebp),%eax
081e7d6d +0x51:  add    $0x11,%eax
081e7d70 +0x54:  mov    %eax,0x4(%esp)
081e7d74 +0x58:  mov    0xc(%ebp),%eax
081e7d77 +0x5b:  mov    %eax,(%esp)
081e7d7a +0x5e:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e7d7f +0x63:  xor    $0x1,%eax
081e7d82 +0x66:  test   %al,%al
081e7d84 +0x68:  je     081e7dac <+0x90>
081e7d86 +0x6a:  movl   $0x0,0xc(%esp)
081e7d8e +0x72:  movl   $0x0,0x8(%esp)
081e7d96 +0x7a:  movl   $&_ZZN42Dispatcher_GrowthWeaponEventChangeInfinity4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e7d9e +0x82:  movl   $0x63ff,(%esp)
081e7da5 +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e7daa +0x8e:  jmp    081e7db1 <+0x95>
081e7dac +0x90:  mov    $0x0,%eax
081e7db1 +0x95:  leave
081e7db2 +0x96:  ret
081e7db3 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_GrowthWeaponEventChangeInfinity::read @ 0x81e7d1c

/* Dispatcher_GrowthWeaponEventChangeInfinity::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventChangeInfinity::read
          (Dispatcher_GrowthWeaponEventChangeInfinity *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x63ff,
                       "virtual int Dispatcher_GrowthWeaponEventChangeInfinity::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x63fc,
                     "virtual int Dispatcher_GrowthWeaponEventChangeInfinity::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
