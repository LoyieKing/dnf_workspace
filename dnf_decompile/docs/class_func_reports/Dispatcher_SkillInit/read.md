# read

`_ZN20Dispatcher_SkillInit4readER9PacketBufR8MSG_BASE`

`Dispatcher_SkillInit::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SkillInit` | `0x081e5934` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5934  _ZN20Dispatcher_SkillInit4readER9PacketBufR8MSG_BASE
#           Dispatcher_SkillInit::read(PacketBuf&, MSG_BASE&)
# range [0x081e5934, 0x081e5989]
081e5934 +0x00:  push   %ebp
081e5935 +0x01:  mov    %esp,%ebp
081e5937 +0x03:  sub    $0x28,%esp
081e593a +0x06:  mov    0x10(%ebp),%eax
081e593d +0x09:  mov    %eax,-0xc(%ebp)
081e5940 +0x0c:  mov    -0xc(%ebp),%eax
081e5943 +0x0f:  add    $0xd,%eax
081e5946 +0x12:  mov    %eax,0x4(%esp)
081e594a +0x16:  mov    0xc(%ebp),%eax
081e594d +0x19:  mov    %eax,(%esp)
081e5950 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e5955 +0x21:  xor    $0x1,%eax
081e5958 +0x24:  test   %al,%al
081e595a +0x26:  je     081e5982 <+0x4e>
081e595c +0x28:  movl   $0x0,0xc(%esp)
081e5964 +0x30:  movl   $0x0,0x8(%esp)
081e596c +0x38:  movl   $&_ZZN20Dispatcher_SkillInit4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e5974 +0x40:  movl   $0x5f26,(%esp)
081e597b +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e5980 +0x4c:  jmp    081e5987 <+0x53>
081e5982 +0x4e:  mov    $0x0,%eax
081e5987 +0x53:  leave
081e5988 +0x54:  ret
081e5989 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_SkillInit::read @ 0x81e5934

/* Dispatcher_SkillInit::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SkillInit::read(Dispatcher_SkillInit *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x5f26,"virtual int Dispatcher_SkillInit::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
