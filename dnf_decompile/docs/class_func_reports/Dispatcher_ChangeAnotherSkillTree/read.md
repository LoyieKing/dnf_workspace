# read

`_ZN33Dispatcher_ChangeAnotherSkillTree4readER9PacketBufR8MSG_BASE`

`Dispatcher_ChangeAnotherSkillTree::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeAnotherSkillTree` | `0x081d1f74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1f74  _ZN33Dispatcher_ChangeAnotherSkillTree4readER9PacketBufR8MSG_BASE
#           Dispatcher_ChangeAnotherSkillTree::read(PacketBuf&, MSG_BASE&)
# range [0x081d1f74, 0x081d1fc9]
081d1f74 +0x00:  push   %ebp
081d1f75 +0x01:  mov    %esp,%ebp
081d1f77 +0x03:  sub    $0x28,%esp
081d1f7a +0x06:  mov    0x10(%ebp),%eax
081d1f7d +0x09:  mov    %eax,-0xc(%ebp)
081d1f80 +0x0c:  mov    -0xc(%ebp),%eax
081d1f83 +0x0f:  add    $0xd,%eax
081d1f86 +0x12:  mov    %eax,0x4(%esp)
081d1f8a +0x16:  mov    0xc(%ebp),%eax
081d1f8d +0x19:  mov    %eax,(%esp)
081d1f90 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d1f95 +0x21:  xor    $0x1,%eax
081d1f98 +0x24:  test   %al,%al
081d1f9a +0x26:  je     081d1fc2 <+0x4e>
081d1f9c +0x28:  movl   $0x0,0xc(%esp)
081d1fa4 +0x30:  movl   $0x0,0x8(%esp)
081d1fac +0x38:  movl   $&_ZZN33Dispatcher_ChangeAnotherSkillTree4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d1fb4 +0x40:  movl   $0x2ec2,(%esp)
081d1fbb +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d1fc0 +0x4c:  jmp    081d1fc7 <+0x53>
081d1fc2 +0x4e:  mov    $0x0,%eax
081d1fc7 +0x53:  leave
081d1fc8 +0x54:  ret
081d1fc9 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeAnotherSkillTree::read @ 0x81d1f74

/* Dispatcher_ChangeAnotherSkillTree::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeAnotherSkillTree::read
          (Dispatcher_ChangeAnotherSkillTree *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x2ec2,
                     "virtual int Dispatcher_ChangeAnotherSkillTree::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```
