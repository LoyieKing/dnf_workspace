# send_to_user

`_ZN9GameWorld12send_to_userEiR11PacketGuard`

`GameWorld::send_to_user(int, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c7f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c7f10  _ZN9GameWorld12send_to_userEiR11PacketGuard
#           GameWorld::send_to_user(int, PacketGuard&)
# range [0x086c7f10, 0x086c7f47]
086c7f10 +0x00:  push   %ebp
086c7f11 +0x01:  mov    %esp,%ebp
086c7f13 +0x03:  sub    $0x28,%esp
086c7f16 +0x06:  mov    0xc(%ebp),%eax
086c7f19 +0x09:  movzwl %ax,%eax
086c7f1c +0x0c:  mov    %eax,0x4(%esp)
086c7f20 +0x10:  mov    0x8(%ebp),%eax
086c7f23 +0x13:  mov    %eax,(%esp)
086c7f26 +0x16:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
086c7f2b +0x1b:  mov    %eax,-0xc(%ebp)
086c7f2e +0x1e:  cmpl   $0x0,-0xc(%ebp)
086c7f32 +0x22:  je     086c7f46 <+0x36>
086c7f34 +0x24:  mov    0x10(%ebp),%eax
086c7f37 +0x27:  mov    %eax,0x4(%esp)
086c7f3b +0x2b:  mov    -0xc(%ebp),%eax
086c7f3e +0x2e:  mov    %eax,(%esp)
086c7f41 +0x31:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c7f46 +0x36:  leave
086c7f47 +0x37:  ret
```

## 反编译 C

```c
// GameWorld::send_to_user @ 0x86c7f10

/* GameWorld::send_to_user(int, PacketGuard&) */

void __thiscall GameWorld::send_to_user(GameWorld *this,int param_1,PacketGuard *param_2)

{
  CUser *this_00;
  
  this_00 = (CUser *)find_from_world(this,(ushort)param_1);
  if (this_00 != (CUser *)0x0) {
    CUser::Send(this_00,param_2);
  }
  return;
}
```
