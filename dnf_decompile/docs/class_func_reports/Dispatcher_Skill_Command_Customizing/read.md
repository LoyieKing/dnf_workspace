# read

`_ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE`

`Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Skill_Command_Customizing` | `0x081d29ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d29ac  _ZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASE
#           Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&)
# range [0x081d29ac, 0x081d2b41]
081d29ac +0x000:  push   %ebp
081d29ad +0x001:  mov    %esp,%ebp
081d29af +0x003:  sub    $0x28,%esp
081d29b2 +0x006:  mov    0x10(%ebp),%eax
081d29b5 +0x009:  add    $0xd,%eax
081d29b8 +0x00c:  mov    %eax,0x4(%esp)
081d29bc +0x010:  mov    0xc(%ebp),%eax
081d29bf +0x013:  mov    %eax,(%esp)
081d29c2 +0x016:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d29c7 +0x01b:  xor    $0x1,%eax
081d29ca +0x01e:  test   %al,%al
081d29cc +0x020:  je     081d29f7 <+0x4b>
081d29ce +0x022:  movl   $0x0,0xc(%esp)
081d29d6 +0x02a:  movl   $0x0,0x8(%esp)
081d29de +0x032:  movl   $&_ZZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d29e6 +0x03a:  movl   $0x2ff8,(%esp)
081d29ed +0x041:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d29f2 +0x046:  jmp    081d2b3f <+0x193>
081d29f7 +0x04b:  mov    0x10(%ebp),%eax
081d29fa +0x04e:  movzbl 0xd(%eax),%eax
081d29fe +0x052:  movsbl %al,%eax
081d2a01 +0x055:  mov    %eax,-0x18(%ebp)
081d2a04 +0x058:  movl   $0x0,-0x14(%ebp)
081d2a0b +0x05f:  jmp    081d2b29 <+0x17d>
081d2a10 +0x064:  mov    0x10(%ebp),%eax
081d2a13 +0x067:  mov    -0x14(%ebp),%edx
081d2a16 +0x06a:  shl    $0x3,%edx
081d2a19 +0x06d:  add    %edx,%eax
081d2a1b +0x06f:  add    $0xe,%eax
081d2a1e +0x072:  mov    %eax,0x4(%esp)
081d2a22 +0x076:  mov    0xc(%ebp),%eax
081d2a25 +0x079:  mov    %eax,(%esp)
081d2a28 +0x07c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d2a2d +0x081:  xor    $0x1,%eax
081d2a30 +0x084:  test   %al,%al
081d2a32 +0x086:  je     081d2a5d <+0xb1>
081d2a34 +0x088:  movl   $0x0,0xc(%esp)
081d2a3c +0x090:  movl   $0x0,0x8(%esp)
081d2a44 +0x098:  movl   $&_ZZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d2a4c +0x0a0:  movl   $0x2fff,(%esp)
081d2a53 +0x0a7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2a58 +0x0ac:  jmp    081d2b3f <+0x193>
081d2a5d +0x0b1:  mov    0x10(%ebp),%eax
081d2a60 +0x0b4:  mov    -0x14(%ebp),%edx
081d2a63 +0x0b7:  shl    $0x3,%edx
081d2a66 +0x0ba:  add    %edx,%eax
081d2a68 +0x0bc:  add    $0x10,%eax
081d2a6b +0x0bf:  mov    %eax,0x4(%esp)
081d2a6f +0x0c3:  mov    0xc(%ebp),%eax
081d2a72 +0x0c6:  mov    %eax,(%esp)
081d2a75 +0x0c9:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d2a7a +0x0ce:  xor    $0x1,%eax
081d2a7d +0x0d1:  test   %al,%al
081d2a7f +0x0d3:  je     081d2aaa <+0xfe>
081d2a81 +0x0d5:  movl   $0x0,0xc(%esp)
081d2a89 +0x0dd:  movl   $0x0,0x8(%esp)
081d2a91 +0x0e5:  movl   $&_ZZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d2a99 +0x0ed:  movl   $0x3002,(%esp)
081d2aa0 +0x0f4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2aa5 +0x0f9:  jmp    081d2b3f <+0x193>
081d2aaa +0x0fe:  mov    0x10(%ebp),%eax
081d2aad +0x101:  mov    -0x14(%ebp),%edx
081d2ab0 +0x104:  movzbl 0x10(%eax,%edx,8),%eax
081d2ab5 +0x109:  movsbl %al,%eax
081d2ab8 +0x10c:  mov    %eax,-0x10(%ebp)
081d2abb +0x10f:  movl   $0x0,-0xc(%ebp)
081d2ac2 +0x116:  jmp    081d2b18 <+0x16c>
081d2ac4 +0x118:  mov    0x10(%ebp),%eax
081d2ac7 +0x11b:  mov    -0x14(%ebp),%ecx
081d2aca +0x11e:  mov    -0xc(%ebp),%edx
081d2acd +0x121:  shl    $0x3,%ecx
081d2ad0 +0x124:  lea    (%ecx,%edx,1),%edx
081d2ad3 +0x127:  add    %edx,%eax
081d2ad5 +0x129:  add    $0x11,%eax
081d2ad8 +0x12c:  mov    %eax,0x4(%esp)
081d2adc +0x130:  mov    0xc(%ebp),%eax
081d2adf +0x133:  mov    %eax,(%esp)
081d2ae2 +0x136:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d2ae7 +0x13b:  xor    $0x1,%eax
081d2aea +0x13e:  test   %al,%al
081d2aec +0x140:  je     081d2b14 <+0x168>
081d2aee +0x142:  movl   $0x0,0xc(%esp)
081d2af6 +0x14a:  movl   $0x0,0x8(%esp)
081d2afe +0x152:  movl   $&_ZZN36Dispatcher_Skill_Command_Customizing4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d2b06 +0x15a:  movl   $0x3009,(%esp)
081d2b0d +0x161:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2b12 +0x166:  jmp    081d2b3f <+0x193>
081d2b14 +0x168:  addl   $0x1,-0xc(%ebp)
081d2b18 +0x16c:  mov    -0xc(%ebp),%eax
081d2b1b +0x16f:  cmp    -0x10(%ebp),%eax
081d2b1e +0x172:  setl   %al
081d2b21 +0x175:  test   %al,%al
081d2b23 +0x177:  jne    081d2ac4 <+0x118>
081d2b25 +0x179:  addl   $0x1,-0x14(%ebp)
081d2b29 +0x17d:  mov    -0x14(%ebp),%eax
081d2b2c +0x180:  cmp    -0x18(%ebp),%eax
081d2b2f +0x183:  setl   %al
081d2b32 +0x186:  test   %al,%al
081d2b34 +0x188:  jne    081d2a10 <+0x64>
081d2b3a +0x18e:  mov    $0x0,%eax
081d2b3f +0x193:  leave
081d2b40 +0x194:  ret
081d2b41 +0x195:  nop
```

## 反编译 C

```c
// Dispatcher_Skill_Command_Customizing::read @ 0x81d29ac

/* Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Skill_Command_Customizing::read
          (Dispatcher_Skill_Command_Customizing *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  char cVar3;
  undefined4 uVar4;
  int local_18;
  int local_10;
  
  cVar3 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar3 == '\x01') {
    MVar1 = param_2[0xd];
    for (local_18 = 0; local_18 < (char)MVar1; local_18 = local_18 + 1) {
      cVar3 = PacketBuf::get_short(param_1,(short *)(param_2 + local_18 * 8 + 0xe));
      if (cVar3 != '\x01') {
        uVar4 = LineFunc(0x2fff,
                         "virtual int Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
        return uVar4;
      }
      cVar3 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_18 * 8 + 0x10));
      if (cVar3 != '\x01') {
        uVar4 = LineFunc(0x3002,
                         "virtual int Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
        return uVar4;
      }
      MVar2 = param_2[local_18 * 8 + 0x10];
      for (local_10 = 0; local_10 < (char)MVar2; local_10 = local_10 + 1) {
        cVar3 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_18 * 8 + local_10 + 0x11));
        if (cVar3 != '\x01') {
          uVar4 = LineFunc(0x3009,
                           "virtual int Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar4;
        }
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = LineFunc(0x2ff8,
                     "virtual int Dispatcher_Skill_Command_Customizing::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar4;
}
```
