# read

`_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE`

`Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_StackableActionUse` | `0x0825df72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825df72  _ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE
#           Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)
# range [0x0825df72, 0x0825e11d]
0825df72 +0x000:  push   %ebp
0825df73 +0x001:  mov    %esp,%ebp
0825df75 +0x003:  sub    $0x28,%esp
0825df78 +0x006:  mov    0x10(%ebp),%eax
0825df7b +0x009:  mov    %eax,-0xc(%ebp)
0825df7e +0x00c:  mov    -0xc(%ebp),%eax
0825df81 +0x00f:  add    $0xd,%eax
0825df84 +0x012:  mov    %eax,0x4(%esp)
0825df88 +0x016:  mov    0xc(%ebp),%eax
0825df8b +0x019:  mov    %eax,(%esp)
0825df8e +0x01c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0825df93 +0x021:  xor    $0x1,%eax
0825df96 +0x024:  test   %al,%al
0825df98 +0x026:  je     0825dfc3 <+0x51>
0825df9a +0x028:  movl   $0x0,0xc(%esp)
0825dfa2 +0x030:  movl   $0x0,0x8(%esp)
0825dfaa +0x038:  movl   $&_ZZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825dfb2 +0x040:  movl   $0xfb,(%esp)
0825dfb9 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825dfbe +0x04c:  jmp    0825e11b <+0x1a9>
0825dfc3 +0x051:  mov    -0xc(%ebp),%eax
0825dfc6 +0x054:  add    $0xf,%eax
0825dfc9 +0x057:  mov    %eax,0x4(%esp)
0825dfcd +0x05b:  mov    0xc(%ebp),%eax
0825dfd0 +0x05e:  mov    %eax,(%esp)
0825dfd3 +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0825dfd8 +0x066:  xor    $0x1,%eax
0825dfdb +0x069:  test   %al,%al
0825dfdd +0x06b:  je     0825e008 <+0x96>
0825dfdf +0x06d:  movl   $0x0,0xc(%esp)
0825dfe7 +0x075:  movl   $0x0,0x8(%esp)
0825dfef +0x07d:  movl   $&_ZZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825dff7 +0x085:  movl   $0xfe,(%esp)
0825dffe +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825e003 +0x091:  jmp    0825e11b <+0x1a9>
0825e008 +0x096:  mov    -0xc(%ebp),%eax
0825e00b +0x099:  add    $0x10,%eax
0825e00e +0x09c:  mov    %eax,0x4(%esp)
0825e012 +0x0a0:  mov    0xc(%ebp),%eax
0825e015 +0x0a3:  mov    %eax,(%esp)
0825e018 +0x0a6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0825e01d +0x0ab:  xor    $0x1,%eax
0825e020 +0x0ae:  test   %al,%al
0825e022 +0x0b0:  je     0825e04d <+0xdb>
0825e024 +0x0b2:  movl   $0x0,0xc(%esp)
0825e02c +0x0ba:  movl   $0x0,0x8(%esp)
0825e034 +0x0c2:  movl   $&_ZZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825e03c +0x0ca:  movl   $0x101,(%esp)
0825e043 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825e048 +0x0d6:  jmp    0825e11b <+0x1a9>
0825e04d +0x0db:  mov    -0xc(%ebp),%eax
0825e050 +0x0de:  add    $0x14,%eax
0825e053 +0x0e1:  mov    %eax,0x4(%esp)
0825e057 +0x0e5:  mov    0xc(%ebp),%eax
0825e05a +0x0e8:  mov    %eax,(%esp)
0825e05d +0x0eb:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0825e062 +0x0f0:  xor    $0x1,%eax
0825e065 +0x0f3:  test   %al,%al
0825e067 +0x0f5:  je     0825e092 <+0x120>
0825e069 +0x0f7:  movl   $0x0,0xc(%esp)
0825e071 +0x0ff:  movl   $0x0,0x8(%esp)
0825e079 +0x107:  movl   $&_ZZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825e081 +0x10f:  movl   $0x104,(%esp)
0825e088 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825e08d +0x11b:  jmp    0825e11b <+0x1a9>
0825e092 +0x120:  mov    -0xc(%ebp),%eax
0825e095 +0x123:  add    $0x15,%eax
0825e098 +0x126:  mov    %eax,0x4(%esp)
0825e09c +0x12a:  mov    0xc(%ebp),%eax
0825e09f +0x12d:  mov    %eax,(%esp)
0825e0a2 +0x130:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0825e0a7 +0x135:  xor    $0x1,%eax
0825e0aa +0x138:  test   %al,%al
0825e0ac +0x13a:  je     0825e0d4 <+0x162>
0825e0ae +0x13c:  movl   $0x0,0xc(%esp)
0825e0b6 +0x144:  movl   $0x0,0x8(%esp)
0825e0be +0x14c:  movl   $&_ZZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825e0c6 +0x154:  movl   $0x107,(%esp)
0825e0cd +0x15b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825e0d2 +0x160:  jmp    0825e11b <+0x1a9>
0825e0d4 +0x162:  mov    -0xc(%ebp),%eax
0825e0d7 +0x165:  add    $0x19,%eax
0825e0da +0x168:  mov    %eax,0x4(%esp)
0825e0de +0x16c:  mov    0xc(%ebp),%eax
0825e0e1 +0x16f:  mov    %eax,(%esp)
0825e0e4 +0x172:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0825e0e9 +0x177:  xor    $0x1,%eax
0825e0ec +0x17a:  test   %al,%al
0825e0ee +0x17c:  je     0825e116 <+0x1a4>
0825e0f0 +0x17e:  movl   $0x0,0xc(%esp)
0825e0f8 +0x186:  movl   $0x0,0x8(%esp)
0825e100 +0x18e:  movl   $&_ZZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825e108 +0x196:  movl   $0x10a,(%esp)
0825e10f +0x19d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825e114 +0x1a2:  jmp    0825e11b <+0x1a9>
0825e116 +0x1a4:  mov    $0x0,%eax
0825e11b +0x1a9:  leave
0825e11c +0x1aa:  ret
0825e11d +0x1ab:  nop
```

## 反编译 C

```c
// Dispatcher_StackableActionUse::read @ 0x825df72

/* Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_StackableActionUse::read
          (Dispatcher_StackableActionUse *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x14));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x15));
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x19));
            if (cVar1 == '\x01') {
              uVar2 = 0;
            }
            else {
              uVar2 = LineFunc(0x10a,
                               "virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x107,
                             "virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x104,
                           "virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x101,
                         "virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0xfe,"virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xfb,"virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```
