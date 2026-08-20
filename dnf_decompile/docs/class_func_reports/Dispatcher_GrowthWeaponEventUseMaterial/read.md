# read

`_ZN39Dispatcher_GrowthWeaponEventUseMaterial4readER9PacketBufR8MSG_BASE`

`Dispatcher_GrowthWeaponEventUseMaterial::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthWeaponEventUseMaterial` | `0x081e810c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e810c  _ZN39Dispatcher_GrowthWeaponEventUseMaterial4readER9PacketBufR8MSG_BASE
#           Dispatcher_GrowthWeaponEventUseMaterial::read(PacketBuf&, MSG_BASE&)
# range [0x081e810c, 0x081e81a3]
081e810c +0x00:  push   %ebp
081e810d +0x01:  mov    %esp,%ebp
081e810f +0x03:  sub    $0x28,%esp
081e8112 +0x06:  mov    0x10(%ebp),%eax
081e8115 +0x09:  mov    %eax,-0xc(%ebp)
081e8118 +0x0c:  mov    -0xc(%ebp),%eax
081e811b +0x0f:  add    $0xd,%eax
081e811e +0x12:  mov    %eax,0x4(%esp)
081e8122 +0x16:  mov    0xc(%ebp),%eax
081e8125 +0x19:  mov    %eax,(%esp)
081e8128 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e812d +0x21:  xor    $0x1,%eax
081e8130 +0x24:  test   %al,%al
081e8132 +0x26:  je     081e815a <+0x4e>
081e8134 +0x28:  movl   $0x0,0xc(%esp)
081e813c +0x30:  movl   $0x0,0x8(%esp)
081e8144 +0x38:  movl   $&_ZZN39Dispatcher_GrowthWeaponEventUseMaterial4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e814c +0x40:  movl   $0x646a,(%esp)
081e8153 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e8158 +0x4c:  jmp    081e81a1 <+0x95>
081e815a +0x4e:  mov    -0xc(%ebp),%eax
081e815d +0x51:  add    $0x11,%eax
081e8160 +0x54:  mov    %eax,0x4(%esp)
081e8164 +0x58:  mov    0xc(%ebp),%eax
081e8167 +0x5b:  mov    %eax,(%esp)
081e816a +0x5e:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e816f +0x63:  xor    $0x1,%eax
081e8172 +0x66:  test   %al,%al
081e8174 +0x68:  je     081e819c <+0x90>
081e8176 +0x6a:  movl   $0x0,0xc(%esp)
081e817e +0x72:  movl   $0x0,0x8(%esp)
081e8186 +0x7a:  movl   $&_ZZN39Dispatcher_GrowthWeaponEventUseMaterial4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e818e +0x82:  movl   $0x646d,(%esp)
081e8195 +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e819a +0x8e:  jmp    081e81a1 <+0x95>
081e819c +0x90:  mov    $0x0,%eax
081e81a1 +0x95:  leave
081e81a2 +0x96:  ret
081e81a3 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_GrowthWeaponEventUseMaterial::read @ 0x81e810c

/* Dispatcher_GrowthWeaponEventUseMaterial::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventUseMaterial::read
          (Dispatcher_GrowthWeaponEventUseMaterial *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x646d,
                       "virtual int Dispatcher_GrowthWeaponEventUseMaterial::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x646a,
                     "virtual int Dispatcher_GrowthWeaponEventUseMaterial::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
