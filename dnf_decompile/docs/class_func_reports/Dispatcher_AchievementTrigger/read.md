# read

`_ZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASE`

`Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AchievementTrigger` | `0x081d7dfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d7dfc  _ZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASE
#           Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&)
# range [0x081d7dfc, 0x081d7f1d]
081d7dfc +0x000:  push   %ebp
081d7dfd +0x001:  mov    %esp,%ebp
081d7dff +0x003:  sub    $0x28,%esp
081d7e02 +0x006:  mov    0x10(%ebp),%eax
081d7e05 +0x009:  mov    %eax,-0xc(%ebp)
081d7e08 +0x00c:  mov    -0xc(%ebp),%eax
081d7e0b +0x00f:  add    $0xd,%eax
081d7e0e +0x012:  mov    %eax,0x4(%esp)
081d7e12 +0x016:  mov    0xc(%ebp),%eax
081d7e15 +0x019:  mov    %eax,(%esp)
081d7e18 +0x01c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081d7e1d +0x021:  xor    $0x1,%eax
081d7e20 +0x024:  test   %al,%al
081d7e22 +0x026:  je     081d7e4d <+0x51>
081d7e24 +0x028:  movl   $0x0,0xc(%esp)
081d7e2c +0x030:  movl   $0x0,0x8(%esp)
081d7e34 +0x038:  movl   $&_ZZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7e3c +0x040:  movl   $0x4265,(%esp)
081d7e43 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7e48 +0x04c:  jmp    081d7f1b <+0x11f>
081d7e4d +0x051:  mov    -0xc(%ebp),%eax
081d7e50 +0x054:  add    $0x11,%eax
081d7e53 +0x057:  mov    %eax,0x4(%esp)
081d7e57 +0x05b:  mov    0xc(%ebp),%eax
081d7e5a +0x05e:  mov    %eax,(%esp)
081d7e5d +0x061:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d7e62 +0x066:  xor    $0x1,%eax
081d7e65 +0x069:  test   %al,%al
081d7e67 +0x06b:  je     081d7e92 <+0x96>
081d7e69 +0x06d:  movl   $0x0,0xc(%esp)
081d7e71 +0x075:  movl   $0x0,0x8(%esp)
081d7e79 +0x07d:  movl   $&_ZZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7e81 +0x085:  movl   $0x4267,(%esp)
081d7e88 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7e8d +0x091:  jmp    081d7f1b <+0x11f>
081d7e92 +0x096:  mov    -0xc(%ebp),%eax
081d7e95 +0x099:  add    $0x13,%eax
081d7e98 +0x09c:  mov    %eax,0x4(%esp)
081d7e9c +0x0a0:  mov    0xc(%ebp),%eax
081d7e9f +0x0a3:  mov    %eax,(%esp)
081d7ea2 +0x0a6:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d7ea7 +0x0ab:  xor    $0x1,%eax
081d7eaa +0x0ae:  test   %al,%al
081d7eac +0x0b0:  je     081d7ed4 <+0xd8>
081d7eae +0x0b2:  movl   $0x0,0xc(%esp)
081d7eb6 +0x0ba:  movl   $0x0,0x8(%esp)
081d7ebe +0x0c2:  movl   $&_ZZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7ec6 +0x0ca:  movl   $0x4269,(%esp)
081d7ecd +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7ed2 +0x0d6:  jmp    081d7f1b <+0x11f>
081d7ed4 +0x0d8:  mov    -0xc(%ebp),%eax
081d7ed7 +0x0db:  add    $0x15,%eax
081d7eda +0x0de:  mov    %eax,0x4(%esp)
081d7ede +0x0e2:  mov    0xc(%ebp),%eax
081d7ee1 +0x0e5:  mov    %eax,(%esp)
081d7ee4 +0x0e8:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d7ee9 +0x0ed:  xor    $0x1,%eax
081d7eec +0x0f0:  test   %al,%al
081d7eee +0x0f2:  je     081d7f16 <+0x11a>
081d7ef0 +0x0f4:  movl   $0x0,0xc(%esp)
081d7ef8 +0x0fc:  movl   $0x0,0x8(%esp)
081d7f00 +0x104:  movl   $&_ZZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7f08 +0x10c:  movl   $0x426b,(%esp)
081d7f0f +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7f14 +0x118:  jmp    081d7f1b <+0x11f>
081d7f16 +0x11a:  mov    $0x0,%eax
081d7f1b +0x11f:  leave
081d7f1c +0x120:  ret
081d7f1d +0x121:  nop
```

## 反编译 C

```c
// Dispatcher_AchievementTrigger::read @ 0x81d7dfc

/* Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_AchievementTrigger::read
          (Dispatcher_AchievementTrigger *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x13));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x15));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x426b,
                           "virtual int Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x4269,
                         "virtual int Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(16999,
                       "virtual int Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x4265,"virtual int Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
